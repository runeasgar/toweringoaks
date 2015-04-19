<?php
/**
 * @file
 * to_classifieds.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function to_classifieds_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-classifieds_view-all-classifieds:classifieds
  $menu_links['menu-classifieds_view-all-classifieds:classifieds'] = array(
    'menu_name' => 'menu-classifieds',
    'link_path' => 'classifieds',
    'router_path' => 'classifieds',
    'link_title' => 'View all Classifieds',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-classifieds_view-all-classifieds:classifieds',
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
  t('View all Classifieds');


  return $menu_links;
}
