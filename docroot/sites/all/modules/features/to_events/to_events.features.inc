<?php
/**
 * @file
 * to_events.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function to_events_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function to_events_node_info() {
  $items = array(
    'event' => array(
      'name' => t('Event'),
      'base' => 'node_content',
      'description' => t('Coordinate events that the subdivision can attend.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_default_registration_type().
 */
function to_events_default_registration_type() {
  $items = array();
  $items['events'] = entity_import('registration_type', '{
    "name" : "events",
    "label" : "Events",
    "locked" : "0",
    "default_state" : null,
    "data" : null,
    "weight" : "0",
    "rdf_mapping" : []
  }');
  return $items;
}
