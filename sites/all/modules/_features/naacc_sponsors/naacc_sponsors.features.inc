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
