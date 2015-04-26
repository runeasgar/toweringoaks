<?php
/**
 * @file
 * to_suggestions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function to_suggestions_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create suggestion content'.
  $permissions['create suggestion content'] = array(
    'name' => 'create suggestion content',
    'roles' => array(
      'administrator' => 'administrator',
      'board member' => 'board member',
      'hoa member' => 'hoa member',
      'resident' => 'resident',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any suggestion content'.
  $permissions['delete any suggestion content'] = array(
    'name' => 'delete any suggestion content',
    'roles' => array(
      'administrator' => 'administrator',
      'board member' => 'board member',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own suggestion content'.
  $permissions['delete own suggestion content'] = array(
    'name' => 'delete own suggestion content',
    'roles' => array(
      'administrator' => 'administrator',
      'board member' => 'board member',
      'hoa member' => 'hoa member',
      'resident' => 'resident',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any suggestion content'.
  $permissions['edit any suggestion content'] = array(
    'name' => 'edit any suggestion content',
    'roles' => array(
      'administrator' => 'administrator',
      'board member' => 'board member',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own suggestion content'.
  $permissions['edit own suggestion content'] = array(
    'name' => 'edit own suggestion content',
    'roles' => array(
      'administrator' => 'administrator',
      'board member' => 'board member',
      'hoa member' => 'hoa member',
      'resident' => 'resident',
    ),
    'module' => 'node',
  );

  // Exported permission: 'flag vote_for_suggestion'.
  $permissions['flag vote_for_suggestion'] = array(
    'name' => 'flag vote_for_suggestion',
    'roles' => array(
      'board member' => 'board member',
      'hoa member' => 'hoa member',
      'resident' => 'resident',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag vote_for_suggestion'.
  $permissions['unflag vote_for_suggestion'] = array(
    'name' => 'unflag vote_for_suggestion',
    'roles' => array(
      'board member' => 'board member',
      'hoa member' => 'hoa member',
      'resident' => 'resident',
    ),
    'module' => 'flag',
  );

  return $permissions;
}
