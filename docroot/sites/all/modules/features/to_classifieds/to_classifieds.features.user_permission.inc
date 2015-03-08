<?php
/**
 * @file
 * to_classifieds.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function to_classifieds_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create classified content'.
  $permissions['create classified content'] = array(
    'name' => 'create classified content',
    'roles' => array(
      'administrator' => 'administrator',
      'board member' => 'board member',
      'hoa member' => 'hoa member',
      'resident' => 'resident',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any classified content'.
  $permissions['delete any classified content'] = array(
    'name' => 'delete any classified content',
    'roles' => array(
      'administrator' => 'administrator',
      'board member' => 'board member',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own classified content'.
  $permissions['delete own classified content'] = array(
    'name' => 'delete own classified content',
    'roles' => array(
      'administrator' => 'administrator',
      'board member' => 'board member',
      'hoa member' => 'hoa member',
      'resident' => 'resident',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any classified content'.
  $permissions['edit any classified content'] = array(
    'name' => 'edit any classified content',
    'roles' => array(
      'administrator' => 'administrator',
      'board member' => 'board member',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own classified content'.
  $permissions['edit own classified content'] = array(
    'name' => 'edit own classified content',
    'roles' => array(
      'administrator' => 'administrator',
      'board member' => 'board member',
      'hoa member' => 'hoa member',
      'resident' => 'resident',
    ),
    'module' => 'node',
  );

  return $permissions;
}
