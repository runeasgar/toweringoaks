<?php
/**
 * @file
 * to_events.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function to_events_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-events_view-all-events:events
  $menu_links['menu-events_view-all-events:events'] = array(
    'menu_name' => 'menu-events',
    'link_path' => 'events',
    'router_path' => 'events',
    'link_title' => 'View all Events',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-events_view-all-events:events',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('View all Events');


  return $menu_links;
}
