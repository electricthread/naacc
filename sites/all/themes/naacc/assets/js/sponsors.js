(function() {
  (function($) {
    return $(function() {
      return $(window).load(function() {
        return $(".views-field-field-sponsor-photo a").BlackAndWhite({
          hoverEffect: true,
          webworkerPath: false,
          responsive: true,
          invertHoverEffect: false,
          intensity: 1,
          speed: {
            fadeIn: 350,
            fadeOut: 800
          },
          onImageReady: function(img) {}
        });
      });
    });
  })(jQuery);

}).call(this);
