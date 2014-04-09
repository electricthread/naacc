<?php
/**
 * @file
 * naacc_base.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function naacc_base_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_mailchimp_list().
 */
function naacc_base_default_mailchimp_list() {
  $items = array();
  $items['general_signup'] = entity_import('mailchimp_list', '{
    "name" : "general_signup",
    "mc_list_id" : "d1abab443f",
    "label" : "the Mailing List",
    "description" : "",
    "settings" : {
      "roles" : { "1" : 1 },
      "mergefields" : { "EMAIL" : "mail", "FNAME" : "", "LNAME" : "" },
      "mergefields_display" : { "EMAIL" : true, "FNAME" : 0, "LNAME" : 0 },
      "doublein" : 0,
      "show_register_form" : 0,
      "default_register_form_optin" : 0,
      "show_account_form" : 0,
      "form_label" : "",
      "submit_label" : "Join",
      "include_interest_groups" : 0,
      "opt_in_interest_groups" : 0,
      "interest_groups_label" : "Interest Groups",
      "cron" : 0,
      "webhooks" : 0,
      "allow_anonymous" : 1,
      "required" : 0
    },
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_node_info().
 */
function naacc_base_node_info() {
  $items = array(
    'webform' => array(
      'name' => t('Webform'),
      'base' => 'node_content',
      'description' => t('Create a new form or questionnaire accessible to users. Submission results and statistics are recorded and accessible to privileged users.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
