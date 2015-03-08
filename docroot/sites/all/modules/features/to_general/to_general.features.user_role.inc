<?php
/**
 * @file
 * to_general.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function to_general_user_default_roles() {
  $roles = array();

  // Exported role: board member.
  $roles['board member'] = array(
    'name' => 'board member',
    'weight' => 3,
  );

  // Exported role: hoa member.
  $roles['hoa member'] = array(
    'name' => 'hoa member',
    'weight' => 4,
  );

  // Exported role: resident.
  $roles['resident'] = array(
    'name' => 'resident',
    'weight' => 5,
  );

  return $roles;
}
