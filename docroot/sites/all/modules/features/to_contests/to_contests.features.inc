<?php
/**
 * @file
 * to_contests.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function to_contests_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function to_contests_node_info() {
  $items = array(
    'contest' => array(
      'name' => t('Contest'),
      'base' => 'node_content',
      'description' => t('Coordinate subdivision contests.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
