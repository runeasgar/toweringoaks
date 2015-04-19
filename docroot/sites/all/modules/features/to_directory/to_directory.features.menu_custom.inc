<?php
/**
 * @file
 * to_directory.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function to_directory_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-directory.
  $menus['menu-directory'] = array(
    'menu_name' => 'menu-directory',
    'title' => 'Directory',
    'description' => 'Provides links related to the directory.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Directory');
  t('Provides links related to the directory.');


  return $menus;
}
