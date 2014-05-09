# namespace jQuery
(($) ->
  # Document.ready
  $ ->
    # Function to swap images randomly at intervals
    # imageSwap = ->
    #   # Home Image Swaps
    #   images = $('#block-views-members-block-1 > ul li').length;
    #   random = Math.round(Math.random()*images);
    #   $('#block-views-members-block-1 li').eq(random).addClass('hide').delay(1000).queue ->
    #     randomImg = $('#block-views-members-block-1 li').eq(random).html()
    #     $(this).html(randomImg).removeClass('hide')

    # # Call function
    # window.setInterval imageSwap, 2000
    # # imageSwap()
    $("#block-views-members-block-1 img").each (i) ->
      $(this).delay((i++) * 100).fadeTo 1000, 1

    # Chosen
    $("select").chosen()

    # Carousel
    $(".owl-carousel").owlCarousel
        # Responsive
        responsive: true,
        responsiveRefreshRate : 200,
        responsiveBaseWidth: window,
        # Autoplay
        autoPlay : true,
        stopOnHover : true,
        # Lazy load
        lazyLoad : true,
        lazyFollow : true,
        lazyEffect : "fade",
        # Navigation
        navigation : true,
        navigationText : ["prev","next"],
        rewindNav : true,
        scrollPerPage : false,

) jQuery
