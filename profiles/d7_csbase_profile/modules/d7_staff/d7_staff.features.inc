<?php
/**
 * @file
 * d7_staff.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function d7_staff_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function d7_staff_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function d7_staff_node_info() {
  $items = array(
    'staff' => array(
      'name' => t('Staff'),
      'base' => 'node_content',
      'description' => t('Add <em>Staff</em> to the site.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
