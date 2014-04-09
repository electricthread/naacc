<?php
/**
 * @file
 * naacc_sponsors.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function naacc_sponsors_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'sponsors';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Sponsors';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Sponsors';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_sponsor_level',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Sponsor Level */
  $handler->display->display_options['fields']['field_sponsor_level']['id'] = 'field_sponsor_level';
  $handler->display->display_options['fields']['field_sponsor_level']['table'] = 'field_data_field_sponsor_level';
  $handler->display->display_options['fields']['field_sponsor_level']['field'] = 'field_sponsor_level';
  $handler->display->display_options['fields']['field_sponsor_level']['label'] = '';
  $handler->display->display_options['fields']['field_sponsor_level']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sponsor_level']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sponsor_level']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Sponsor website URL */
  $handler->display->display_options['fields']['field_sponsor_website_url']['id'] = 'field_sponsor_website_url';
  $handler->display->display_options['fields']['field_sponsor_website_url']['table'] = 'field_data_field_sponsor_website_url';
  $handler->display->display_options['fields']['field_sponsor_website_url']['field'] = 'field_sponsor_website_url';
  $handler->display->display_options['fields']['field_sponsor_website_url']['label'] = '';
  $handler->display->display_options['fields']['field_sponsor_website_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sponsor_website_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sponsor_website_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_sponsor_website_url']['type'] = 'link_plain';
  /* Field: Content: Sponsor Photo */
  $handler->display->display_options['fields']['field_sponsor_photo']['id'] = 'field_sponsor_photo';
  $handler->display->display_options['fields']['field_sponsor_photo']['table'] = 'field_data_field_sponsor_photo';
  $handler->display->display_options['fields']['field_sponsor_photo']['field'] = 'field_sponsor_photo';
  $handler->display->display_options['fields']['field_sponsor_photo']['label'] = '';
  $handler->display->display_options['fields']['field_sponsor_photo']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_sponsor_photo']['alter']['path'] = '[field_sponsor_website_url]';
  $handler->display->display_options['fields']['field_sponsor_photo']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_sponsor_photo']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['field_sponsor_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sponsor_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_sponsor_photo']['settings'] = array(
    'image_style' => '140x140',
    'image_link' => '',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'sponsor' => 'sponsor',
  );

  /* Display: Sponsors Page */
  $handler = $view->new_display('page', 'Sponsors Page', 'page');
  $handler->display->display_options['path'] = 'sponsors';

  /* Display: Homepage Featured */
  $handler = $view->new_display('block', 'Homepage Featured', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Featured Sponsors';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['class'] = 'owl-carousel';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'sponsor' => 'sponsor',
  );
  /* Filter criterion: Content: Sponsor Level (field_sponsor_level) */
  $handler->display->display_options['filters']['field_sponsor_level_tid']['id'] = 'field_sponsor_level_tid';
  $handler->display->display_options['filters']['field_sponsor_level_tid']['table'] = 'field_data_field_sponsor_level';
  $handler->display->display_options['filters']['field_sponsor_level_tid']['field'] = 'field_sponsor_level_tid';
  $handler->display->display_options['filters']['field_sponsor_level_tid']['value'] = array(
    6 => '6',
  );
  $handler->display->display_options['filters']['field_sponsor_level_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_sponsor_level_tid']['vocabulary'] = 'sponsor_level';
  $export['sponsors'] = $view;

  return $export;
}
