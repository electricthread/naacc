# determine media query by body:after css content (app.scss line 13-22)
size = window.getComputedStyle(document.body,':after').getPropertyValue('content')
# namespace jQuery
(($) ->
  # Document.ready
  $ ->
    # Bootstrap Dropdown
    $('#block-system-main-menu > ul > .expanded > ul').prev('a').attr('data-toggle', 'dropdown')
    $('a[data-toggle="dropdown"]').dropdown()
    # Mobile
    if size == "mobile" || size == '"mobile"'
      $('#login, #block-views-users-block').prependTo('header nav')

    # Tablet or Up
    if size == "tablet" || size == '"tablet"'
      # Bootstrap Drop-down converted to hover
      $('a[data-toggle="dropdown"]').parent().hoverIntent (->
        $('header').toggleClass 'desk-open'
        $(this).children('a').click()
      ), ->
        $('.expanded .expanded.first ul').removeClass 'hide'
        $('header').toggleClass 'desk-open'
        $(this).children('a').click()

    # Mobile Menu Tap
    $("#menu").click ->
      $(this).toggleClass "open"
      $("header nav").toggleClass "open"

) jQuery
