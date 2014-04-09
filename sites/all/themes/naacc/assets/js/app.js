(function() {
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
      if ($('#menu').is(':hidden')) {
        $('a[data-toggle="dropdown"]').parent().hoverIntent((function() {
          $(this).addClass('open');
          if ($(".social").css('top') === '4px') {
            return topLevelClick();
          }
        }), function() {
          return $(this).removeClass('open');
        });
      } else {
        $('#block-system-main-menu').on('show.bs.dropdown', function() {
          return topLevelClick();
        });
      }
      return $("#menu").click(function() {
        return $(this).toggleClass("show").next().next().toggleClass("show");
      });
    });
  })(jQuery);

}).call(this);
