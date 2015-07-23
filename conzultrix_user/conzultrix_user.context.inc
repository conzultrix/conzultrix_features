<?php
/**
 * @file
 * conzultrix_user.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function conzultrix_user_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'user_page';
  $context->description = '';
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
        'conzultrix_user-conzultrix_user_info' => array(
          'module' => 'conzultrix_user',
          'delta' => 'conzultrix_user_info',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['user_page'] = $context;

  return $export;
}
