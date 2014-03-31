(function() {
  var size;

  size = window.getComputedStyle(document.body, ':after').getPropertyValue('content');

  (function($) {
    return $(function() {
      var topLevelClick;
      topLevelClick = function() {
        return $('a[data-toggle="dropdown"]').click(function() {
          return window.location.href = $(this).attr('href');
        });
      };
      $('#block-system-main-menu .expanded ul').prev('a').attr('data-toggle', 'dropdown');
      $('a[data-toggle="dropdown"]').dropdown();
      if (size === "desk" || size === '"desk"') {
        $('a[data-toggle="dropdown"]').parent().hoverIntent((function() {
          $(this).addClass('open');
          return topLevelClick();
        }), function() {
          return $(this).removeClass('open');
        });
      } else {
        $('#block-system-main-menu').on('show.bs.dropdown', function() {
          return topLevelClick();
        });
      }
      return $("#menu").click(function() {
        return $(this).next().toggleClass("show");
      });
    });
  })(jQuery);

}).call(this);
