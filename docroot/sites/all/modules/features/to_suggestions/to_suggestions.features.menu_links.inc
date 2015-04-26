<?php
/**
 * @file
 * to_suggestions.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function to_suggestions_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-suggestions_view-all-suggestions:suggestions
  $menu_links['menu-suggestions_view-all-suggestions:suggestions'] = array(
    'menu_name' => 'menu-suggestions',
    'link_path' => 'suggestions',
    'router_path' => 'suggestions',
    'link_title' => 'View all Suggestions',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-suggestions_view-all-suggestions:suggestions',
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
  t('View all Suggestions');


  return $menu_links;
}
