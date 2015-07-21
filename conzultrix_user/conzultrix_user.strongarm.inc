<?php
/**
 * @file
 * conzultrix_user.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function conzultrix_user_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_user_pattern';
  $strongarm->value = 'about/[user:field-first-name]-[user:field-last-name]';
  $export['pathauto_user_pattern'] = $strongarm;

  return $export;
}
