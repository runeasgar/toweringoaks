<?php
/**
 * @file
 * to_events.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function to_events_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-events.
  $menus['menu-events'] = array(
    'menu_name' => 'menu-events',
    'title' => 'Events',
    'description' => 'Provides links related to events.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Events');
  t('Provides links related to events.');


  return $menus;
}
