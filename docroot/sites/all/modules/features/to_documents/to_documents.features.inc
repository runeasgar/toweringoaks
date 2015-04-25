<?php
/**
 * @file
 * to_documents.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function to_documents_ctools_plugin_api($module = NULL, $api = NULL) {
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
function to_documents_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function to_documents_node_info() {
  $items = array(
    'document' => array(
      'name' => t('Document'),
      'base' => 'node_content',
      'description' => t('Provide documentation to the subdivision.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
