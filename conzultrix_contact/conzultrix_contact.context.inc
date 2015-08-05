<?php
/**
 * @file
 * conzultrix_contact.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function conzultrix_contact_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'contact_page';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'contact' => 'contact',
        'contact/*' => 'contact/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'conzultrix_contact-contact_page_intro' => array(
          'module' => 'conzultrix_contact',
          'delta' => 'contact_page_intro',
          'region' => 'content',
          'weight' => '-10',
        ),
        'conzultrix_contact-conzultrix_more_contact' => array(
          'module' => 'conzultrix_contact',
          'delta' => 'conzultrix_more_contact',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;
  $export['contact_page'] = $context;

  return $export;
}
