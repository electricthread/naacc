# determine media query by body:after css content (app.scss line 13-22)
size = window.getComputedStyle(document.body,':after').getPropertyValue('content')
# namespace jQuery
(($) ->
  # Document.ready
  $ ->

    # Top Level Menu Item Click function
    topLevelClick = () ->
      $('a[data-toggle="dropdown"]').click ->
        window.location.href = $(this).attr('href')

    # Bootstrap Dropdown
    $('#block-system-main-menu .expanded ul').prev('a').attr('data-toggle', 'dropdown')
    $('a[data-toggle="dropdown"]').dropdown()

    # Tablet or Up
    if size == "desk" || size == '"desk"'  # latter required by Firefox
      # Bootstrap Drop-down converted to hover
      $('a[data-toggle="dropdown"]').parent().hoverIntent (->
        $(this).addClass 'open'
        topLevelClick()
      ), ->
        $(this).removeClass 'open'
    # if mobile
    else
      # Force Click on Open Top Level
      $('#block-system-main-menu').on 'show.bs.dropdown', ->
        topLevelClick()

    # Mobile Menu Tap
    $("#menu").click ->
      $(this).next().toggleClass "show"

) jQuery
