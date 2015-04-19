<?php
/**
 * @file
 * to_classifieds.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function to_classifieds_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-classifieds.
  $menus['menu-classifieds'] = array(
    'menu_name' => 'menu-classifieds',
    'title' => 'Classifieds',
    'description' => 'Provides links related to classifieds.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Classifieds');
  t('Provides links related to classifieds.');


  return $menus;
}
