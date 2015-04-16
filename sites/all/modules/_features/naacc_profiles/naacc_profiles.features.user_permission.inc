<?php
/**
 * @file
 * naacc_profiles.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function naacc_profiles_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer constant_contact'.
  $permissions['administer constant_contact'] = array(
    'name' => 'administer constant_contact',
    'roles' => array(
      'developer' => 'developer',
    ),
    'module' => 'constant_contact',
  );

  return $permissions;
}
