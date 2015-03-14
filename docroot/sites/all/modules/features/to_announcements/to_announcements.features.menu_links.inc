<?php
/**
 * @file
 * to_announcements.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function to_announcements_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-announcements_view-all-announcements:announcements
  $menu_links['menu-announcements_view-all-announcements:announcements'] = array(
    'menu_name' => 'menu-announcements',
    'link_path' => 'announcements',
    'router_path' => 'announcements',
    'link_title' => 'View all Announcements',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-announcements_view-all-announcements:announcements',
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
  t('View all Announcements');


  return $menu_links;
}
