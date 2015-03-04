<?php
/**
 * @file
 * basic.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function conzultrix_basic_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sitewide';
  $context->description = '';
  $context->tag = '';
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
        'connections-telephone' => array(
          'module' => 'connections',
          'delta' => 'telephone',
          'region' => 'header',
          'weight' => '-10',
        ),
        'basic-conzultrix_main_menu' => array(
          'module' => 'basic',
          'delta' => 'conzultrix_main_menu',
          'region' => 'navigation',
          'weight' => '-9',
        ),
        'basic-copyright' => array(
          'module' => 'basic',
          'delta' => 'copyright',
          'region' => 'footer',
          'weight' => '-10',
        ),
        'connections-site_connections' => array(
          'module' => 'connections',
          'delta' => 'site_connections',
          'region' => 'footer',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['sitewide'] = $context;

  return $export;
}
