<?php
/**
 * @file
 * naacc_profiles.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function naacc_profiles_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cc_contact_list_sort_order';
  $strongarm->value = 'SortOrder';
  $export['cc_contact_list_sort_order'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cc_default_opt_in';
  $strongarm->value = 1;
  $export['cc_default_opt_in'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cc_extra_fields';
  $strongarm->value = array(
    0 => 'First Name',
    1 => 'Middle Name',
    2 => 'Last Name',
    3 => 'Job Title',
    4 => 'Company Name',
    5 => 'Home Phone',
    6 => 'Work Phone',
    7 => 'Addr1',
    8 => 'Addr2',
    9 => 'Addr3',
    10 => 'City',
    11 => 'State Code',
    12 => 'State Name',
    13 => 'Country Code',
    14 => 'Country Name',
    15 => 'Postal Code',
    16 => 'Sub Postal Code',
    17 => 'Note',
    18 => 'CustomField1',
    19 => 'CustomField2',
    20 => 'CustomField3',
    21 => 'CustomField4',
    22 => 'CustomField5',
    23 => 'CustomField6',
    24 => 'CustomField7',
    25 => 'CustomField8',
    26 => 'CustomField9',
    27 => 'CustomField10',
    28 => 'CustomField11',
    29 => 'CustomField12',
    30 => 'CustomField13',
    31 => 'CustomField14',
    32 => 'CustomField15',
  );
  $export['cc_extra_fields'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cc_extra_field_mappings';
  $strongarm->value = 'FirstName:field_first_name, LastName:field_last_name, JobTitle:field_title, CompanyName:field_company, HomePhone:field_phone, Addr1:field_address, Addr2:field_address_2, City:field_city, StateCode:field_state, PostalCode:field_zip_code';
  $export['cc_extra_field_mappings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cc_lists';
  $strongarm->value = array(
    1555315896 => '1555315896',
  );
  $export['cc_lists'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cc_lists_cache_expire';
  $strongarm->value = '3600';
  $export['cc_lists_cache_expire'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cc_list_selection_format';
  $strongarm->value = 'select';
  $export['cc_list_selection_format'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cc_password';
  $strongarm->value = 'Listener47';
  $export['cc_password'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cc_path';
  $strongarm->value = 'sites/all/modules/constant_contact';
  $export['cc_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cc_register_page_method';
  $strongarm->value = 'checkbox';
  $export['cc_register_page_method'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cc_show_format_choice';
  $strongarm->value = 0;
  $export['cc_show_format_choice'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cc_signup_description';
  $strongarm->value = '';
  $export['cc_signup_description'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cc_signup_title';
  $strongarm->value = 'Subscribe to the Newsletter';
  $export['cc_signup_title'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cc_subscribe_format';
  $strongarm->value = 'HTML';
  $export['cc_subscribe_format'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cc_sync_unsubscribed_users';
  $strongarm->value = 0;
  $export['cc_sync_unsubscribed_users'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cc_total_blocks_available';
  $strongarm->value = '1';
  $export['cc_total_blocks_available'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cc_username';
  $strongarm->value = 'NAACC4U';
  $export['cc_username'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_user_pattern';
  $strongarm->value = 'members/[user:name]';
  $export['pathauto_user_pattern'] = $strongarm;

  return $export;
}
