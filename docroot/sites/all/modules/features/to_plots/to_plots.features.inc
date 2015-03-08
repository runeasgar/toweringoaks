<?php
/**
 * @file
 * to_plots.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function to_plots_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function to_plots_node_info() {
  $items = array(
    'plot' => array(
      'name' => t('Plot'),
      'base' => 'node_content',
      'description' => t('Manage subdivision plots.'),
      'has_title' => '1',
      'title_label' => t('Plot Number'),
      'help' => t('The plot number should follow the format "TO##".'),
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
