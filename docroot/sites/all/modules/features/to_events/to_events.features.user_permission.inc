<?php
/**
 * @file
 * to_events.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function to_events_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer own events registration'.
  $permissions['administer own events registration'] = array(
    'name' => 'administer own events registration',
    'roles' => array(
      'administrator' => 'administrator',
      'board member' => 'board member',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'administer registration'.
  $permissions['administer registration'] = array(
    'name' => 'administer registration',
    'roles' => array(
      'administrator' => 'administrator',
      'board member' => 'board member',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'create event content'.
  $permissions['create event content'] = array(
    'name' => 'create event content',
    'roles' => array(
      'administrator' => 'administrator',
      'board member' => 'board member',
      'hoa member' => 'hoa member',
      'resident' => 'resident',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create events registration'.
  $permissions['create events registration'] = array(
    'name' => 'create events registration',
    'roles' => array(
      'administrator' => 'administrator',
      'board member' => 'board member',
      'hoa member' => 'hoa member',
      'resident' => 'resident',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'delete any event content'.
  $permissions['delete any event content'] = array(
    'name' => 'delete any event content',
    'roles' => array(
      'administrator' => 'administrator',
      'board member' => 'board member',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own event content'.
  $permissions['delete own event content'] = array(
    'name' => 'delete own event content',
    'roles' => array(
      'administrator' => 'administrator',
      'board member' => 'board member',
      'hoa member' => 'hoa member',
      'resident' => 'resident',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any event content'.
  $permissions['edit any event content'] = array(
    'name' => 'edit any event content',
    'roles' => array(
      'administrator' => 'administrator',
      'board member' => 'board member',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own event content'.
  $permissions['edit own event content'] = array(
    'name' => 'edit own event content',
    'roles' => array(
      'administrator' => 'administrator',
      'board member' => 'board member',
      'hoa member' => 'hoa member',
      'resident' => 'resident',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view events registration'.
  $permissions['view events registration'] = array(
    'name' => 'view events registration',
    'roles' => array(
      'administrator' => 'administrator',
      'board member' => 'board member',
      'hoa member' => 'hoa member',
      'resident' => 'resident',
    ),
    'module' => 'registration',
  );

  return $permissions;
}
