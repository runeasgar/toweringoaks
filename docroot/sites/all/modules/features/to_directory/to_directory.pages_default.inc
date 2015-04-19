<?php
/**
 * @file
 * to_directory.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function to_directory_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'user_view__user_profile';
  $handler->task = 'user_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'User Profile',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'user_profile',
  );
  $display = new panels_display();
  $display->layout = 'three_25_50_25';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'three_25_50_25_top' => NULL,
      'three_25_50_25_first' => NULL,
      'three_25_50_25_second' => NULL,
      'three_25_50_25_third' => NULL,
      'three_25_50_25_bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%user:field-first-name  %user:field-last-name';
  $display->uuid = 'f9de185c-86f8-4cf8-8f51-f60317e46031';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-9152d9df-861b-493f-ac81-7c33da75cac5';
    $pane->panel = 'three_25_50_25_first';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-directory';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9152d9df-861b-493f-ac81-7c33da75cac5';
    $display->content['new-9152d9df-861b-493f-ac81-7c33da75cac5'] = $pane;
    $display->panels['three_25_50_25_first'][0] = 'new-9152d9df-861b-493f-ac81-7c33da75cac5';
    $pane = new stdClass();
    $pane->pid = 'new-15e2239a-6701-4207-98c6-5215d92f8e58';
    $pane->panel = 'three_25_50_25_second';
    $pane->type = 'entity_field';
    $pane->subtype = 'user:field_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => 'medium',
        'image_link' => 'file',
      ),
      'context' => 'argument_entity_id:user_1',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '15e2239a-6701-4207-98c6-5215d92f8e58';
    $display->content['new-15e2239a-6701-4207-98c6-5215d92f8e58'] = $pane;
    $display->panels['three_25_50_25_second'][0] = 'new-15e2239a-6701-4207-98c6-5215d92f8e58';
    $pane = new stdClass();
    $pane->pid = 'new-d2dc2c58-0898-4b13-911a-8e0f242995b7';
    $pane->panel = 'three_25_50_25_second';
    $pane->type = 'entity_field';
    $pane->subtype = 'user:field_occupation';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:user_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'd2dc2c58-0898-4b13-911a-8e0f242995b7';
    $display->content['new-d2dc2c58-0898-4b13-911a-8e0f242995b7'] = $pane;
    $display->panels['three_25_50_25_second'][1] = 'new-d2dc2c58-0898-4b13-911a-8e0f242995b7';
    $pane = new stdClass();
    $pane->pid = 'new-1104fd6f-bcc0-4cc5-8bd4-cc3028c9591f';
    $pane->panel = 'three_25_50_25_second';
    $pane->type = 'entity_field';
    $pane->subtype = 'user:field_phone_number';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'phone',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:user_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '1104fd6f-bcc0-4cc5-8bd4-cc3028c9591f';
    $display->content['new-1104fd6f-bcc0-4cc5-8bd4-cc3028c9591f'] = $pane;
    $display->panels['three_25_50_25_second'][2] = 'new-1104fd6f-bcc0-4cc5-8bd4-cc3028c9591f';
    $pane = new stdClass();
    $pane->pid = 'new-da596dbd-701a-4f7a-95c4-7b0e24bd0b17';
    $pane->panel = 'three_25_50_25_second';
    $pane->type = 'entity_field';
    $pane->subtype = 'user:field_plot';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'entityreference_entity_view',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'view_mode' => 'default',
        'links' => 0,
      ),
      'context' => 'argument_entity_id:user_1',
      'override_title' => 1,
      'override_title_text' => 'Location',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'da596dbd-701a-4f7a-95c4-7b0e24bd0b17';
    $display->content['new-da596dbd-701a-4f7a-95c4-7b0e24bd0b17'] = $pane;
    $display->panels['three_25_50_25_second'][3] = 'new-da596dbd-701a-4f7a-95c4-7b0e24bd0b17';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['user_view__user_profile'] = $handler;

  return $export;
}
