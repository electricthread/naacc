<?php
/**
 * @file
 * d7_simple_blog.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function d7_simple_blog_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function d7_simple_blog_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function d7_simple_blog_node_info() {
  $items = array(
    'blog' => array(
      'name' => t('Simple Blog'),
      'base' => 'node_content',
      'description' => t('Add blog entries to your site.'),
      'has_title' => '1',
      'title_label' => t('Blog Title'),
      'help' => '',
    ),
  );
  return $items;
}
