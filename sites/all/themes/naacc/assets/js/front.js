(function() {
  (function($) {
    return $(function() {
      var imageSwap;
      imageSwap = function() {
        var images, random;
        images = $('#block-views-members-block-1 > ul li').length;
        random = Math.round(Math.random() * images);
        return $('#block-views-members-block-1 li').eq(random).addClass('hide').delay(1000).queue(function() {
          var randomImg;
          randomImg = $('#block-views-members-block-1 li').eq(random).html();
          return $(this).html(randomImg).removeClass('hide');
        });
      };
      return window.setInterval(imageSwap, 2000);
    });
  })(jQuery);

}).call(this);
