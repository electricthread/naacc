(function() {
  (function($) {
    return $(function() {
      $('#edit-field-specialties-und').chosen();
      $('.focus-box').prev().hide();
      $('.focus-box').prev().prev().hide();
      return Drupal.behaviors.exampleModule = {
        attach: function(context, settings) {
          $('.focus-box').prev().hide();
          return $('.focus-box').prev().prev().hide();
        }
      };
    });
  })(jQuery);

}).call(this);
