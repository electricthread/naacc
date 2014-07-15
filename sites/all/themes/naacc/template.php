<?php
/*
  Preprocess
*/

/*
function naacc_preprocess_html(&$vars) {
  //  kpr($vars['content']);
}
*/
function naacc_preprocess_page(&$vars,$hook) {
  $path = drupal_get_path('theme', 'naacc');
  // Google Fonts
  drupal_add_css('http://fonts.googleapis.com/css?family=Esteban','external');
  drupal_add_css('http://fonts.googleapis.com/css?family=Lato:300,400,700,900','external');
  // menu needs - bootstrap/hoverIntent
  drupal_add_js($path .'/assets/js/vendor/hoverIntent.min.js', array('group' => JS_LIBRARY));
  drupal_add_js($path .'/assets/js/vendor/bootstrap.min.js', array('group' => JS_LIBRARY));
  // If front
  if ($vars['is_front'] == TRUE) {
    drupal_add_css($path .'/assets/js/vendor/chosen_v1.1.0/chosen.min.css', array('group' => CSS_DEFAULT));
    drupal_add_css($path .'/assets/css/front.css', array('group' => CSS_THEME));
    drupal_add_js($path .'/assets/js/vendor/chosen_v1.1.0/chosen.jquery.min.js', array('group' => JS_LIBRARY));
    drupal_add_js($path .'/assets/js/front.js', array('group' => JS_THEME));
  }
  // if profile (have to do this here because drupal_set_title doesn't work in preprocess user profile)
  // if logged in
  if ($vars['logged_in'] == TRUE) {
    // if on page_user but not edit page
    if (in_array('page__user', $vars['theme_hook_suggestions']) && !in_array('page__user__edit', $vars['theme_hook_suggestions'])) {
      drupal_set_title('');
      // used to print title
      $vars['profile'] = '';
    }
  }
}

// User Profile Page Only
function naacc_preprocess_user_profile(&$vars) {
  $path = drupal_get_path('theme', 'naacc');
  drupal_add_css($path .'/assets/css/profile.css', array('group' => CSS_THEME));
}

// Views Pre-Render Function
function naacc_views_pre_render(&$view) {
  $path = drupal_get_path('theme', 'naacc');
  if ($view->name == 'members') {
    if ($view->current_display == 'page') {
      drupal_add_css($path .'/assets/js/vendor/chosen_v1.1.0/chosen.min.css', array('group' => CSS_DEFAULT));
      drupal_add_js($path .'/assets/js/vendor/chosen_v1.1.0/chosen.jquery.min.js', array('group' => JS_LIBRARY));
      drupal_add_js($path .'/assets/js/members.js', array('group' => JS_THEME));
      drupal_add_css($path .'/assets/css/members.css', array('group' => CSS_THEME));
    }
  }
  if ($view->name == 'sponsors') {
    // General (Black and white to color)
    drupal_add_js($path .'/assets/js/vendor/jquery.BlackAndWhite.js', array('group' => JS_LIBRARY));
    drupal_add_js($path .'/assets/js/sponsors.js', array('group' => JS_THEME));
    // Homepage Carousel
    if ($view->current_display == 'block') {
      drupal_add_css($path .'/assets/js/vendor/owl.carousel/owl-carousel/owl.carousel.css', array('group' => CSS_DEFAULT));
      drupal_add_css($path .'/assets/js/vendor/owl.carousel/owl-carousel/owl.theme.css', array('group' => CSS_DEFAULT));
      drupal_add_js($path .'/assets/js/vendor/owl.carousel/owl-carousel/owl.carousel.min.js', array('group' => JS_LIBRARY));
    }
  }
}

/**
* Alter Views exposed form filters
*/
function naacc_preprocess_views_exposed_form(&$vars) {
  // If its the project form
  if ($vars['form']['#id'] == 'views-exposed-form-members-page') {
    if ($vars['is_front']) {
      // Remove unnecessary homepage filters
      unset($vars['widgets']['filter-combine'], $vars['widgets']['filter-field_state_value']);
    }
  }
}

/*
function naacc_preprocess_region(&$vars,$hook) {
  //  kpr($vars['content']);
}
*/
/*
function naacc_preprocess_block(&$vars, $hook) {
  //  kpr($vars['content']);

  //lets look for unique block in a region $region-$blockcreator-$delta
   $block =
   $vars['elements']['#block']->region .'-'.
   $vars['elements']['#block']->module .'-'.
   $vars['elements']['#block']->delta;

  // print $block .' ';
   switch ($block) {
     case 'header-menu_block-2':
       $vars['classes_array'][] = '';
       break;
     case 'sidebar-system-navigation':
       $vars['classes_array'][] = '';
       break;
    default:

    break;

   }


  switch ($vars['elements']['#block']->region) {
    case 'header':
      $vars['classes_array'][] = '';
      break;
    case 'sidebar':
      $vars['classes_array'][] = '';
      $vars['classes_array'][] = '';
      break;
    default:

      break;
  }

}
*/

/*
function naacc_preprocess_comment(&$vars,$hook) {
  //  kpr($vars['content']);
}
*/
/*
function naacc_preprocess_field(&$vars,$hook) {
  //  kpr($vars['content']);
  //add class to a specific field
  switch ($vars['element']['#field_name']) {
    case 'field_ROCK':
      $vars['classes_array'][] = 'classname1';
    case 'field_ROLL':
      $vars['classes_array'][] = 'classname1';
      $vars['classes_array'][] = 'classname2';
      $vars['classes_array'][] = 'classname1';
    case 'field_FOO':
      $vars['classes_array'][] = 'classname1';
    case 'field_BAR':
      $vars['classes_array'][] = 'classname1';
    default:
      break;
  }

}
*/
/*
function naacc_preprocess_maintenance_page(){
  //  kpr($vars['content']);
}
*/


