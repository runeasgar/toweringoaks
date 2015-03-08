<?php
/**
 * @file
 * to_suggestions.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function to_suggestions_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function to_suggestions_node_info() {
  $items = array(
    'suggestion' => array(
      'name' => t('Suggestion'),
      'base' => 'node_content',
      'description' => t('Suggest actions that the homeowners association should take.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
