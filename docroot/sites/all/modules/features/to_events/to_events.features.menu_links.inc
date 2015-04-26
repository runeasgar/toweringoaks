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

  // Exported menu link: menu-events_past-events:events/archive
  $menu_links['menu-events_past-events:events/archive'] = array(
    'menu_name' => 'menu-events',
    'link_path' => 'events/archive',
    'router_path' => 'events/archive',
    'link_title' => 'Past Events',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-events_past-events:events/archive',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-events_upcoming-events:events
  $menu_links['menu-events_upcoming-events:events'] = array(
    'menu_name' => 'menu-events',
    'link_path' => 'events',
    'router_path' => 'events',
    'link_title' => 'Upcoming Events',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-events_upcoming-events:events',
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
  t('Past Events');
  t('Upcoming Events');


  return $menu_links;
}
