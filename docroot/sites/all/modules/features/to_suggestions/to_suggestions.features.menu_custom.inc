<?php
/**
 * @file
 * to_suggestions.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function to_suggestions_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-suggestions.
  $menus['menu-suggestions'] = array(
    'menu_name' => 'menu-suggestions',
    'title' => 'Suggestions',
    'description' => 'Provides links related to suggestions.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Provides links related to suggestions.');
  t('Suggestions');


  return $menus;
}
