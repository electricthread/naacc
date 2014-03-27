<?php
/**
 * @file
 * naacc_commerce.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function naacc_commerce_user_default_roles() {
  $roles = array();

  // Exported role: member.
  $roles['member'] = array(
    'name' => 'member',
    'weight' => 2,
  );

  return $roles;
}
