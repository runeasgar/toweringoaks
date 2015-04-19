<?php
/**
 * @file
 * to_classifieds.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function to_classifieds_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function to_classifieds_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function to_classifieds_node_info() {
  $items = array(
    'classified' => array(
      'name' => t('Classified'),
      'base' => 'node_content',
      'description' => t('Offer goods and services to the subdivision.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
