(function() {
  (function($) {
    return $(function() {
      $("#block-views-members-block-1 img").each(function(i) {
        return $(this).delay((i++) * 100).fadeTo(1000, 1);
      });
      $("select").chosen();
      return $(".owl-carousel").owlCarousel({
        responsive: true,
        responsiveRefreshRate: 200,
        responsiveBaseWidth: window,
        autoPlay: true,
        stopOnHover: true,
        lazyLoad: true,
        lazyFollow: true,
        lazyEffect: "fade",
        navigation: true,
        navigationText: ["prev", "next"],
        rewindNav: true,
        scrollPerPage: false
      });
    });
  })(jQuery);

}).call(this);
