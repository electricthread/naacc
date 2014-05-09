<?php
/**
 * @file
 * d7_videos.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function d7_videos_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function d7_videos_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function d7_videos_node_info() {
  $items = array(
    'video' => array(
      'name' => t('Video'),
      'base' => 'node_content',
      'description' => t('Add embedded videos to your website.'),
      'has_title' => '1',
      'title_label' => t('Video Title'),
      'help' => '',
    ),
  );
  return $items;
}
