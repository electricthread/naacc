(function() {
  var size;

  size = window.getComputedStyle(document.body, ':after').getPropertyValue('content');

  (function($) {
    return $(function() {
      $('#block-system-main-menu > ul > .expanded > ul').prev('a').attr('data-toggle', 'dropdown');
      $('a[data-toggle="dropdown"]').dropdown();
      if (size === "mobile" || size === '"mobile"') {
        $('#login, #block-views-users-block').prependTo('header nav');
      }
      if (size === "tablet" || size === '"tablet"') {
        $('a[data-toggle="dropdown"]').parent().hoverIntent((function() {
          $('header').toggleClass('desk-open');
          return $(this).children('a').click();
        }), function() {
          $('.expanded .expanded.first ul').removeClass('hide');
          $('header').toggleClass('desk-open');
          return $(this).children('a').click();
        });
      }
      return $("#menu").click(function() {
        $(this).toggleClass("open");
        return $("header nav").toggleClass("open");
      });
    });
  })(jQuery);

}).call(this);
