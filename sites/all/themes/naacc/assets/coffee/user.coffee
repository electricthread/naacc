# namespace jQuery
(($) ->
  # Document.ready
  $ ->

    # User Edit Select
    $('#edit-field-specialties-und').chosen();

    $('.focus-box').prev().hide();
    $('.focus-box').prev().prev().hide();

    Drupal.behaviors.exampleModule = attach: (context, settings) ->
      $('.focus-box').prev().hide();
      $('.focus-box').prev().prev().hide();

) jQuery
