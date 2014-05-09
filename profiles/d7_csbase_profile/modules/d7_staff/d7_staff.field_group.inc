<?php
/**
 * @file
 * d7_staff.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function d7_staff_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_connect|node|staff|default';
  $field_group->group_name = 'group_connect';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'staff';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Connect',
    'weight' => '3',
    'children' => array(
      0 => 'field_facebook_url',
      1 => 'field_linkedin',
      2 => 'field_twitter_url',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Connect',
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
  $export['group_connect|node|staff|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact_information|node|staff|form';
  $field_group->group_name = 'group_contact_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'staff';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact Information',
    'weight' => '7',
    'children' => array(
      0 => 'field_e_mail_address',
      1 => 'field_phone_number',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Contact Information',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_contact_information|node|staff|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_images|node|staff|form';
  $field_group->group_name = 'group_images';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'staff';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Images',
    'weight' => '3',
    'children' => array(
      0 => 'field_listing_photo',
      1 => 'field_photo',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Images',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_images|node|staff|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_name|node|staff|default';
  $field_group->group_name = 'group_name';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'staff';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Name',
    'weight' => '5',
    'children' => array(
      0 => 'field_first_name',
      1 => 'field_last_name',
    ),
    'format_type' => 'hidden',
    'format_settings' => array(
      'label' => 'Name',
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
  $export['group_name|node|staff|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_social_links|node|staff|form';
  $field_group->group_name = 'group_social_links';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'staff';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Social Links',
    'weight' => '8',
    'children' => array(
      0 => 'field_facebook_url',
      1 => 'field_linkedin',
      2 => 'field_twitter_url',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_social_links|node|staff|form'] = $field_group;

  return $export;
}
