<?php
/**
 * @file
 * conzultrix_basic.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function conzultrix_basic_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'about_page';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'about' => 'about',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-management_team-block' => array(
          'module' => 'views',
          'delta' => 'management_team-block',
          'region' => 'postrow',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;
  $export['about_page'] = $context;

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
        'connections-contact_us' => array(
          'module' => 'connections',
          'delta' => 'contact_us',
          'region' => 'header',
          'weight' => '-10',
        ),
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'header',
          'weight' => '-9',
        ),
        'conzultrix_basic-conzultrix_main_menu' => array(
          'module' => 'conzultrix_basic',
          'delta' => 'conzultrix_main_menu',
          'region' => 'navigation',
          'weight' => '-10',
        ),
        'conzultrix_basic-copyright' => array(
          'module' => 'conzultrix_basic',
          'delta' => 'copyright',
          'region' => 'copyright',
          'weight' => '-10',
        ),
        'connections-site_connections' => array(
          'module' => 'connections',
          'delta' => 'site_connections',
          'region' => 'footer',
          'weight' => '-12',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['sitewide'] = $context;

  return $export;
}
