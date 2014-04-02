# namespace jQuery
(($) ->
  # Document.ready
  $ ->
    # Function to swap images randomly at intervals
    imageSwap = ->
      # Home Image Swaps
      images = $('#block-views-members-block-1 > ul li').length;
      random = Math.round(Math.random()*images);
      $('#block-views-members-block-1 li').eq(random).addClass('hide').delay(1000).queue ->
          randomImg = $('#block-views-members-block-1 li').eq(random).html()
          $(this).html(randomImg).removeClass('hide')

    # Call function
    window.setInterval imageSwap, 2000
    # imageSwap()

) jQuery
