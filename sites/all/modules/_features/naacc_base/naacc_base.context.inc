<?php
/**
 * @file
 * naacc_base.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function naacc_base_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'not_front';
  $context->description = 'Not Front';
  $context->tag = 'theme';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '~<front>' => '~<front>',
      ),
    ),
  );
  $context->reactions = array(
    'region' => array(
      'nexus' => array(
        'disable' => array(
          'preface_first' => 'preface_first',
          'preface_middle' => 'preface_middle',
          'preface_last' => 'preface_last',
          'sidebar_first' => 0,
          'header' => 0,
          'content_top' => 0,
          'content' => 0,
          'help' => 0,
          'footer' => 0,
          'footer_first' => 0,
          'footer_second' => 0,
          'footer_third' => 0,
          'footer_fourth' => 0,
        ),
      ),
      'seven' => array(
        'disable' => array(
          'content' => 0,
          'help' => 0,
          'page_top' => 0,
          'page_bottom' => 0,
          'sidebar_first' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Not Front');
  t('theme');
  $export['not_front'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'site_wide';
  $context->description = 'Site Wide';
  $context->tag = 'theme';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'mailchimp_lists-email_signup' => array(
          'module' => 'mailchimp_lists',
          'delta' => 'email_signup',
          'region' => 'preface_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Site Wide');
  t('theme');
  $export['site_wide'] = $context;

  return $export;
}
