<?php
/**
 * @file
 * to_contests.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function to_contests_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create contest content'.
  $permissions['create contest content'] = array(
    'name' => 'create contest content',
    'roles' => array(
      'administrator' => 'administrator',
      'board member' => 'board member',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any contest content'.
  $permissions['delete any contest content'] = array(
    'name' => 'delete any contest content',
    'roles' => array(
      'administrator' => 'administrator',
      'board member' => 'board member',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own contest content'.
  $permissions['delete own contest content'] = array(
    'name' => 'delete own contest content',
    'roles' => array(
      'administrator' => 'administrator',
      'board member' => 'board member',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any contest content'.
  $permissions['edit any contest content'] = array(
    'name' => 'edit any contest content',
    'roles' => array(
      'administrator' => 'administrator',
      'board member' => 'board member',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own contest content'.
  $permissions['edit own contest content'] = array(
    'name' => 'edit own contest content',
    'roles' => array(
      'administrator' => 'administrator',
      'board member' => 'board member',
    ),
    'module' => 'node',
  );

  return $permissions;
}
