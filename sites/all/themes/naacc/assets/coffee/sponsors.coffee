# namespace jQuery
(($) ->
  # Document.ready
  $ ->

    # Black and White to Color
    $(window).load ->
      $(".views-field-field-sponsor-photo a").BlackAndWhite
        hoverEffect: true # default true
        # set the path to BnWWorker.js for a superfast implementation
        webworkerPath: false
        # for the images with a fluid width and height
        responsive: true
        # to invert the hover effect
        invertHoverEffect: false
        # this option works only on the modern browsers ( on IE lower than 9 it remains always 1)
        intensity: 1
        speed: #this property could also be just speed: value for both fadeIn and fadeOut
          fadeIn: 350 # 200ms for fadeIn animations
          fadeOut: 800 # 800ms for fadeOut animations

        onImageReady: (img) ->

) jQuery
