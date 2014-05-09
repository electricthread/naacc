(function() {
  (function($) {
    return $(function() {
      return $("select").not('#field_specialties, .stripe').chosen();
    });
  })(jQuery);

}).call(this);
