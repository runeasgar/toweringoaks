<?php
/**
 * @file
 * to_general.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function to_general_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
  );
  // Exported menu: menu-hoa.
  $menus['menu-hoa'] = array(
    'menu_name' => 'menu-hoa',
    'title' => 'HOA',
    'description' => 'Provides links related to the homeowners association.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('HOA');
  t('Main menu');
  t('Provides links related to the homeowners association.');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');


  return $menus;
}
