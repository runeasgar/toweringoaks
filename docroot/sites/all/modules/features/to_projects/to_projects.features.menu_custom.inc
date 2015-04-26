<?php
/**
 * @file
 * to_projects.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function to_projects_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-projects.
  $menus['menu-projects'] = array(
    'menu_name' => 'menu-projects',
    'title' => 'Projects',
    'description' => 'Provides links related to projects.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Projects');
  t('Provides links related to projects.');


  return $menus;
}
