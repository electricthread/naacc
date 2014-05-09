<?php
/**
 * @file
 * d7_events.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function d7_events_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'events_block';
  $context->description = 'Places sidebar events block';
  $context->tag = 'default layout';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '*' => '*',
        '~events' => '~events',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-events-events_sidebar' => array(
          'module' => 'views',
          'delta' => 'events-events_sidebar',
          'region' => 'aside',
          'weight' => '-5',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Places sidebar events block');
  t('default layout');
  $export['events_block'] = $context;

  return $export;
}
