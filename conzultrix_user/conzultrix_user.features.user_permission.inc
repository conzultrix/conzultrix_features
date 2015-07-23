<?php
/**
 * @file
 * conzultrix_user.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function conzultrix_user_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'user',
  );

  return $permissions;
}
