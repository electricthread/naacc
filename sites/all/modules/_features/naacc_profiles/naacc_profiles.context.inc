<?php
/**
 * @file
 * naacc_profiles.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function naacc_profiles_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'members';
  $context->description = 'Members page';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'members' => 'members',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views--exp-members-page' => array(
          'module' => 'views',
          'delta' => '-exp-members-page',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Members page');
  $export['members'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'profile_page';
  $context->description = 'Profile Page';
  $context->tag = '';
  $context->conditions = array(
    'user_page' => array(
      'values' => array(
        'view' => 'view',
      ),
      'options' => array(
        'mode' => 'all',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-members-block_2' => array(
          'module' => 'views',
          'delta' => 'members-block_2',
          'region' => 'sidebar',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Profile Page');
  $export['profile_page'] = $context;

  return $export;
}
