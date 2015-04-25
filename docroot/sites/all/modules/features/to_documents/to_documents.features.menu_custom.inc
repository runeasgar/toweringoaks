<?php
/**
 * @file
 * to_documents.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function to_documents_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-documents.
  $menus['menu-documents'] = array(
    'menu_name' => 'menu-documents',
    'title' => 'Documents',
    'description' => 'Provides links related to documents.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Documents');
  t('Provides links related to documents.');


  return $menus;
}
