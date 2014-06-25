<?php
/**
 * @file
 * naacc_profiles.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function naacc_profiles_user_default_roles() {
  $roles = array();

  // Exported role: student.
  $roles['student'] = array(
    'name' => 'student',
    'weight' => 2,
  );

  return $roles;
}
