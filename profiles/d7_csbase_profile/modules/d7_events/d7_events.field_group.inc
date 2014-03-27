<?php
/**
 * @file
 * d7_events.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function d7_events_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_left_content_group|node|event|default';
  $field_group->group_name = 'group_left_content_group';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Left Content Group',
    'weight' => '1',
    'children' => array(
      0 => 'body',
      1 => 'field_date',
      2 => 'field_ticket_link',
      3 => 'field_time',
      4 => 'field_location',
      5 => 'events_entity_view_1',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Left Content Group',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_left_content_group|node|event|default'] = $field_group;

  return $export;
}
