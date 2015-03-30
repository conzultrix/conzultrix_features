<?php
/**
 * @file
 * conzultrix_frontpage.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function conzultrix_frontpage_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'frontpage';
  $context->description = '';
  $context->tag = '';
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
        'views-core_business-block' => array(
          'module' => 'views',
          'delta' => 'core_business-block',
          'region' => 'postrow',
          'weight' => '-10',
        ),
        'views-products-block' => array(
          'module' => 'views',
          'delta' => 'products-block',
          'region' => 'postrow',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['frontpage'] = $context;

  return $export;
}
