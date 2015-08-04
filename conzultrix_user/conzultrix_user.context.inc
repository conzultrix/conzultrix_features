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
  $context->name = 'login_page';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'user' => 'user',
        'user/login' => 'user/login',
        'user/password' => 'user/password',
        'user/register' => 'user/register',
      ),
    ),
    'user' => array(
      'values' => array(
        'anonymous user' => 'anonymous user',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'conzultrix_user-login_intro' => array(
          'module' => 'conzultrix_user',
          'delta' => 'login_intro',
          'region' => 'prefix',
          'weight' => '-10',
        ),
      ),
      'layout' => 'login',
    ),
    'theme_html' => array(
      'class' => 'login-page',
    ),
  );
  $context->condition_mode = 1;
  $export['login_page'] = $context;

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
