<?php
/**
 * @file
 * conzultrix_blog.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function conzultrix_blog_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'blog_section';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'blog/*' => 'blog/*',
      ),
    ),
  );
  $context->reactions = array(
    'menu' => array(
      0 => 'main-menu:blog',
    ),
  );
  $context->condition_mode = 0;
  $export['blog_section'] = $context;

  return $export;
}
