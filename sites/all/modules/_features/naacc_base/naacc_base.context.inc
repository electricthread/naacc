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
  $context->name = 'front';
  $context->description = 'Front Page Layout';
  $context->tag = 'theme';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-members-block_1' => array(
          'module' => 'views',
          'delta' => 'members-block_1',
          'region' => 'hero',
          'weight' => '-10',
        ),
        'block-2' => array(
          'module' => 'block',
          'delta' => '2',
          'region' => 'pre_content',
          'weight' => '-10',
        ),
        'views--exp-members-page' => array(
          'module' => 'views',
          'delta' => '-exp-members-page',
          'region' => 'pre_content',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Front Page Layout');
  t('theme');
  $export['front'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'no_sidebar';
  $context->description = 'No sidebar by path';
  $context->tag = 'theme';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'members' => 'members',
      ),
    ),
  );
  $context->reactions = array(
    'region' => array(
      'naacc' => array(
        'disable' => array(
          'sidebar' => 'sidebar',
          'page_top' => 0,
          'page_bottom' => 0,
          'header' => 0,
          'hero' => 0,
          'content' => 0,
          'footer' => 0,
          'help' => 0,
          'highlighted' => 0,
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
  t('No sidebar by path');
  t('theme');
  $export['no_sidebar'] = $context;

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
        'system-main-menu' => array(
          'module' => 'system',
          'delta' => 'main-menu',
          'region' => 'header',
          'weight' => '-10',
        ),
        'views-events-events_sidebar' => array(
          'module' => 'views',
          'delta' => 'events-events_sidebar',
          'region' => 'sidebar',
          'weight' => '-9',
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
