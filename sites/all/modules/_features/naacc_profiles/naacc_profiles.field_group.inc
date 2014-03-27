<?php
/**
 * @file
 * naacc_profiles.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function naacc_profiles_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_member_info|user|user|form';
  $field_group->group_name = 'group_member_info';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Member Info',
    'weight' => '2',
    'children' => array(
      0 => 'field_city',
      1 => 'field_state',
      2 => 'field_first_name',
      3 => 'field_last_name',
      4 => 'field_type_of_mediation',
      5 => 'field_image',
      6 => 'field_company',
      7 => 'field_zip_code',
      8 => 'field_phone',
      9 => 'field_fax',
      10 => 'field_cell',
      11 => 'field_website',
      12 => 'field_bio',
      13 => 'field_mediation_education_traini',
      14 => 'field_fee_information',
      15 => 'field_address',
      16 => 'field_address_2',
      17 => 'field_title',
      18 => 'field_background',
      19 => 'field_type_of_mediation_2',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-member-info field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_member_info|user|user|form'] = $field_group;

  return $export;
}
