<?php
/**
 * @file
 * d7_advertisement_banners.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function d7_advertisement_banners_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'banners';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Banners';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Banner Link */
  $handler->display->display_options['fields']['field_banner_link']['id'] = 'field_banner_link';
  $handler->display->display_options['fields']['field_banner_link']['table'] = 'field_data_field_banner_link';
  $handler->display->display_options['fields']['field_banner_link']['field'] = 'field_banner_link';
  $handler->display->display_options['fields']['field_banner_link']['label'] = '';
  $handler->display->display_options['fields']['field_banner_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_banner_link']['alter']['path'] = '[field_banner_link-url]';
  $handler->display->display_options['fields']['field_banner_link']['alter']['target'] = '[field_banner_link-attributes]';
  $handler->display->display_options['fields']['field_banner_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_banner_link']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_banner_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_banner_link']['type'] = 'link_plain';
  /* Field: Content: Open URL in New Window */
  $handler->display->display_options['fields']['field_target']['id'] = 'field_target';
  $handler->display->display_options['fields']['field_target']['table'] = 'field_data_field_target';
  $handler->display->display_options['fields']['field_target']['field'] = 'field_target';
  $handler->display->display_options['fields']['field_target']['label'] = '';
  $handler->display->display_options['fields']['field_target']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_target']['alter']['text'] = '_blank';
  $handler->display->display_options['fields']['field_target']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_target']['hide_alter_empty'] = FALSE;
  /* Field: Content: Banner Image */
  $handler->display->display_options['fields']['field_banner_image']['id'] = 'field_banner_image';
  $handler->display->display_options['fields']['field_banner_image']['table'] = 'field_data_field_banner_image';
  $handler->display->display_options['fields']['field_banner_image']['field'] = 'field_banner_image';
  $handler->display->display_options['fields']['field_banner_image']['label'] = '';
  $handler->display->display_options['fields']['field_banner_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_banner_image']['alter']['text'] = '<a href="[field_banner_link]" target="[field_target]">[field_banner_image]</a>';
  $handler->display->display_options['fields']['field_banner_image']['alter']['path'] = '[field_banner_link]';
  $handler->display->display_options['fields']['field_banner_image']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_banner_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_banner_image']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_banner_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_banner_image']['settings'] = array(
    'image_style' => '',
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
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'banner' => 'banner',
  );
  /* Filter criterion: Content: Banner Space (field_banner_space) */
  $handler->display->display_options['filters']['field_banner_space_tid']['id'] = 'field_banner_space_tid';
  $handler->display->display_options['filters']['field_banner_space_tid']['table'] = 'field_data_field_banner_space';
  $handler->display->display_options['filters']['field_banner_space_tid']['field'] = 'field_banner_space_tid';
  $handler->display->display_options['filters']['field_banner_space_tid']['vocabulary'] = 'banner_space';

  /* Display: Sidebar Top */
  $handler = $view->new_display('block', 'Sidebar Top', 'banner_sidebar_top');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'banner' => 'banner',
  );
  /* Filter criterion: Content: Banner Space (field_banner_space) */
  $handler->display->display_options['filters']['field_banner_space_tid']['id'] = 'field_banner_space_tid';
  $handler->display->display_options['filters']['field_banner_space_tid']['table'] = 'field_data_field_banner_space';
  $handler->display->display_options['filters']['field_banner_space_tid']['field'] = 'field_banner_space_tid';
  $handler->display->display_options['filters']['field_banner_space_tid']['value'] = array(
    0 => '6',
  );
  $handler->display->display_options['filters']['field_banner_space_tid']['vocabulary'] = 'banner_space';
  $handler->display->display_options['block_description'] = 'Banners: Sidebar Top';

  /* Display: Sidebar Bottom */
  $handler = $view->new_display('block', 'Sidebar Bottom', 'banner_sidebar_btm');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'banner' => 'banner',
  );
  /* Filter criterion: Content: Banner Space (field_banner_space) */
  $handler->display->display_options['filters']['field_banner_space_tid']['id'] = 'field_banner_space_tid';
  $handler->display->display_options['filters']['field_banner_space_tid']['table'] = 'field_data_field_banner_space';
  $handler->display->display_options['filters']['field_banner_space_tid']['field'] = 'field_banner_space_tid';
  $handler->display->display_options['filters']['field_banner_space_tid']['value'] = array(
    0 => '7',
  );
  $handler->display->display_options['filters']['field_banner_space_tid']['expose']['operator_id'] = 'field_banner_space_tid_op';
  $handler->display->display_options['filters']['field_banner_space_tid']['expose']['label'] = 'Banner Space (field_banner_space)';
  $handler->display->display_options['filters']['field_banner_space_tid']['expose']['operator'] = 'field_banner_space_tid_op';
  $handler->display->display_options['filters']['field_banner_space_tid']['expose']['identifier'] = 'field_banner_space_tid';
  $handler->display->display_options['filters']['field_banner_space_tid']['vocabulary'] = 'banner_space';
  $handler->display->display_options['block_description'] = 'Banners: Sidebar Bottom';
  $export['banners'] = $view;

  return $export;
}
