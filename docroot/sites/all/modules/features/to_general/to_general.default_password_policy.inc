<?php
/**
 * @file
 * to_general.default_password_policy.inc
 */

/**
 * Implements hook_default_password_policy().
 */
function to_general_default_password_policy() {
  $export = array();

  $password_policy = new stdClass();
  $password_policy->disabled = FALSE; /* Edit this to true to make a default password_policy disabled initially */
  $password_policy->api_version = 1;
  $password_policy->name = 'Loose';
  $password_policy->description = '';
  $password_policy->enabled = TRUE;
  $password_policy->policy = array(
    'complexity' => '3',
    'length' => '8',
    'username' => '1',
  );
  $password_policy->created = 1426045186;
  $password_policy->expiration = 0;
  $password_policy->warning = '';
  $password_policy->weight = FALSE;
  $export['Loose'] = $password_policy;

  $password_policy = new stdClass();
  $password_policy->disabled = FALSE; /* Edit this to true to make a default password_policy disabled initially */
  $password_policy->api_version = 1;
  $password_policy->name = 'Strict';
  $password_policy->description = '';
  $password_policy->enabled = TRUE;
  $password_policy->policy = array(
    'complexity' => '4',
    'length' => '10',
    'username' => '1',
  );
  $password_policy->created = 1426045186;
  $password_policy->expiration = 0;
  $password_policy->warning = '';
  $password_policy->weight = FALSE;
  $export['Strict'] = $password_policy;

  return $export;
}
