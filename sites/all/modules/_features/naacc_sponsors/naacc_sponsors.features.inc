<?php
/**
 * @file
 * naacc_sponsors.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function naacc_sponsors_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function naacc_sponsors_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function naacc_sponsors_image_default_styles() {
  $styles = array();

  // Exported image style: 140x140.
  $styles['140x140'] = array(
    'name' => '140x140',
    'label' => '140x140',
    'effects' => array(
      4 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 140,
          'height' => 140,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function naacc_sponsors_node_info() {
  $items = array(
    'sponsor' => array(
      'name' => t('Sponsor'),
      'base' => 'node_content',
      'description' => t('Add a <em>Sponsor</em> to the website.'),
      'has_title' => '1',
      'title_label' => t('Sponsor Name (isn\'t shown to public)'),
      'help' => '',
    ),
  );
  return $items;
}
