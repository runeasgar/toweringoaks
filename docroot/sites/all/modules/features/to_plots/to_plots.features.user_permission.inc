<?php
/**
 * @file
 * to_plots.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function to_plots_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create plot content'.
  $permissions['create plot content'] = array(
    'name' => 'create plot content',
    'roles' => array(
      'administrator' => 'administrator',
      'board member' => 'board member',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any plot content'.
  $permissions['delete any plot content'] = array(
    'name' => 'delete any plot content',
    'roles' => array(
      'administrator' => 'administrator',
      'board member' => 'board member',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own plot content'.
  $permissions['delete own plot content'] = array(
    'name' => 'delete own plot content',
    'roles' => array(
      'administrator' => 'administrator',
      'board member' => 'board member',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any plot content'.
  $permissions['edit any plot content'] = array(
    'name' => 'edit any plot content',
    'roles' => array(
      'administrator' => 'administrator',
      'board member' => 'board member',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own plot content'.
  $permissions['edit own plot content'] = array(
    'name' => 'edit own plot content',
    'roles' => array(
      'administrator' => 'administrator',
      'board member' => 'board member',
    ),
    'module' => 'node',
  );

  return $permissions;
}
