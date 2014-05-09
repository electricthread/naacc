<?php
/**
 * @file
 * d7_base_wysiwyg.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function d7_base_wysiwyg_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ckeditor_link_autocomplete_menus';
  $strongarm->value = array(
    '- any -' => 0,
    'devel' => 0,
    'main-menu' => 0,
    'management' => 0,
    'navigation' => 0,
    'user-menu' => 0,
  );
  $export['ckeditor_link_autocomplete_menus'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ckeditor_link_autocomplete_node_types';
  $strongarm->value = array(
    '- any -' => '- any -',
    'news_article' => 0,
    'page' => 0,
    'membership' => 0,
    'webform' => 0,
  );
  $export['ckeditor_link_autocomplete_node_types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ckeditor_link_autocomplete_vocabularies';
  $strongarm->value = array(
    '- any -' => 0,
    1 => 0,
  );
  $export['ckeditor_link_autocomplete_vocabularies'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ckeditor_link_file_autocomplete_file_types';
  $strongarm->value = array(
    'document' => 'document',
    '- any -' => 0,
    'image' => 0,
    'video' => 0,
    'audio' => 0,
  );
  $export['ckeditor_link_file_autocomplete_file_types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ckeditor_link_file_link_method';
  $strongarm->value = 'url';
  $export['ckeditor_link_file_link_method'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ckeditor_link_limit';
  $strongarm->value = '10';
  $export['ckeditor_link_limit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ckeditor_link_type_name';
  $strongarm->value = 'Internal path';
  $export['ckeditor_link_type_name'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ckeditor_link_type_selected';
  $strongarm->value = 0;
  $export['ckeditor_link_type_selected'] = $strongarm;

  return $export;
}
