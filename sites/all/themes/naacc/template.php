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
  // if it is a node
  // if (isset($vars['node'])) {
  //   $node = $vars['node'];
  //   // Project nodes
  //   if ($node->type == 'project') {
  //     $vars['project'] = '';
  //   }
  // }
  // If front
  if ($vars['is_front'] == TRUE) {
    drupal_add_css($path .'/assets/js/vendor/chosen_v1.1.0/chosen.min.css', array('group' => CSS_DEFAULT));
    drupal_add_css($path .'/assets/css/front.css', array('group' => CSS_THEME));
    drupal_add_js($path .'/assets/js/vendor/chosen_v1.1.0/chosen.jquery.min.js', array('group' => JS_LIBRARY));
    drupal_add_js($path .'/assets/js/front.js', array('group' => JS_THEME));
  }
}

// Views Pre-Render Function
function naacc_views_pre_render(&$view) {
  $path = drupal_get_path('theme', 'naacc');
  if($view->name == 'members') {
    if ($view->current_display == 'page') {
      drupal_add_css($path .'/assets/js/vendor/chosen_v1.1.0/chosen.min.css', array('group' => CSS_DEFAULT));
      drupal_add_js($path .'/assets/js/vendor/chosen_v1.1.0/chosen.jquery.min.js', array('group' => JS_LIBRARY));
      drupal_add_js($path .'/assets/js/members.js', array('group' => JS_THEME));
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
function naacc_preprocess_node(&$vars,$hook) {
  //  kpr($vars['content']);

  // add a nodeblock
  // in .info define a region : regions[block_in_a_node] = block_in_a_node
  // in node.tpl  <?php if($noderegion){ ?> <?php print render($noderegion); ?><?php } ?>
  //$vars['block_in_a_node'] = block_get_blocks_by_region('block_in_a_node');
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
/*
function naacc_form_alter(&$form, &$form_state, $form_id) {
  //if ($form_id == '') {
  //....
  //}
}
*/

