<?php
/**
 * @file
 * to_directory.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function to_directory_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-directory_view-all-members:directory
  $menu_links['menu-directory_view-all-members:directory'] = array(
    'menu_name' => 'menu-directory',
    'link_path' => 'directory',
    'router_path' => 'directory',
    'link_title' => 'View all Members',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-directory_view-all-members:directory',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('View all Members');


  return $menu_links;
}
