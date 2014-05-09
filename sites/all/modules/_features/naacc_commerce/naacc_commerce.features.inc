<?php
/**
 * @file
 * naacc_commerce.features.inc
 */

/**
 * Implements hook_commerce_product_default_types().
 */
function naacc_commerce_commerce_product_default_types() {
  $items = array(
    'donation' => array(
      'type' => 'donation',
      'name' => 'Donation',
      'description' => 'Add a <em>donation</em> product to the website.',
      'help' => '',
      'revision' => 1,
    ),
    'product' => array(
      'type' => 'product',
      'name' => 'Product',
      'description' => 'A basic product type.',
      'help' => '',
      'revision' => 1,
    ),
  );
  return $items;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function naacc_commerce_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function naacc_commerce_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function naacc_commerce_node_info() {
  $items = array(
    'donation' => array(
      'name' => t('Donation'),
      'base' => 'node_content',
      'description' => t('Add a <em>Donation</em> to the website'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'membership' => array(
      'name' => t('Membership'),
      'base' => 'node_content',
      'description' => t('Add a membership to the website'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
