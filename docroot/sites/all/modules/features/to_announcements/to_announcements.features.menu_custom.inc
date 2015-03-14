<?php
/**
 * @file
 * to_announcements.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function to_announcements_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-announcements.
  $menus['menu-announcements'] = array(
    'menu_name' => 'menu-announcements',
    'title' => 'Announcements',
    'description' => 'Provides links related to announcements.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Announcements');
  t('Provides links related to announcements.');


  return $menus;
}
