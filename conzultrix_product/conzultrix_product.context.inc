<?php
/**
 * @file
 * conzultrix_product.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function conzultrix_product_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'product_section';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'products/*' => 'products/*',
      ),
    ),
  );
  $context->reactions = array(
    'menu' => array(
      0 => 'main-menu:products',
    ),
  );
  $context->condition_mode = 1;
  $export['product_section'] = $context;

  return $export;
}
