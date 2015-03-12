<?php
/**
 * @file
 * to_display_modes.ds.inc
 */

/**
 * Implements hook_ds_view_modes_info().
 */
function to_display_modes_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'banner';
  $ds_view_mode->label = 'Banner';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['banner'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'small';
  $ds_view_mode->label = 'Small';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['small'] = $ds_view_mode;

  return $export;
}
