<?php
/**
 * @file
 * d7_case_studies.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function d7_case_studies_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function d7_case_studies_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function d7_case_studies_node_info() {
  $items = array(
    'case_study' => array(
      'name' => t('Case Study'),
      'base' => 'node_content',
      'description' => t('Add a <em>Case Study</em> to your website.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
