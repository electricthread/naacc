(function() {
  (function($) {
    return $(function() {
      $("#block-views-members-block-1 img").each(function(i) {
        return $(this).delay((i++) * 100).fadeTo(1000, 1);
      });
      return $("select").chosen();
    });
  })(jQuery);

}).call(this);
