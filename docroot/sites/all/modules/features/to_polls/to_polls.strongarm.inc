<?php
/**
 * @file
 * to_polls.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function to_polls_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_access_poll';
  $strongarm->value = array(
    'view_own' => array(
      0 => 1,
      1 => 2,
      2 => 3,
    ),
    'view' => array(
      0 => 4,
      1 => 5,
      2 => 6,
      3 => 3,
    ),
  );
  $export['content_access_poll'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_poll_pattern';
  $strongarm->value = 'poll/[node:title]';
  $export['pathauto_node_poll_pattern'] = $strongarm;

  return $export;
}
