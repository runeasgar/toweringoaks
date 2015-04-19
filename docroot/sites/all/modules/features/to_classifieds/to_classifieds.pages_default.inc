<?php
/**
 * @file
 * to_classifieds.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function to_classifieds_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__classified';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -97;
  $handler->conf = array(
    'title' => 'Classified',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'classified',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'classified' => 'classified',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
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
  $display->title = '';
  $display->uuid = 'd6f4cc9b-dd02-4de9-a8c9-240b42117d6b';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-28d58520-42b7-4ea5-9197-4e82a4611f85';
    $pane->panel = 'three_25_50_25_first';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-classifieds';
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
    $pane->uuid = '28d58520-42b7-4ea5-9197-4e82a4611f85';
    $display->content['new-28d58520-42b7-4ea5-9197-4e82a4611f85'] = $pane;
    $display->panels['three_25_50_25_first'][0] = 'new-28d58520-42b7-4ea5-9197-4e82a4611f85';
    $pane = new stdClass();
    $pane->pid = 'new-b7cf974a-5144-4c8a-b103-a7ab25e83608';
    $pane->panel = 'three_25_50_25_second';
    $pane->type = 'node_created';
    $pane->subtype = 'node_created';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'format' => 'long',
      'context' => 'argument_entity_id:node_1',
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b7cf974a-5144-4c8a-b103-a7ab25e83608';
    $display->content['new-b7cf974a-5144-4c8a-b103-a7ab25e83608'] = $pane;
    $display->panels['three_25_50_25_second'][0] = 'new-b7cf974a-5144-4c8a-b103-a7ab25e83608';
    $pane = new stdClass();
    $pane->pid = 'new-f60eddf1-6f0b-4c9b-925f-44d0b9d4b414';
    $pane->panel = 'three_25_50_25_second';
    $pane->type = 'node_author';
    $pane->subtype = 'node_author';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 1,
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = 'f60eddf1-6f0b-4c9b-925f-44d0b9d4b414';
    $display->content['new-f60eddf1-6f0b-4c9b-925f-44d0b9d4b414'] = $pane;
    $display->panels['three_25_50_25_second'][1] = 'new-f60eddf1-6f0b-4c9b-925f-44d0b9d4b414';
    $pane = new stdClass();
    $pane->pid = 'new-5f27a8a3-e20b-4434-a5ed-ecfd06c10aa8';
    $pane->panel = 'three_25_50_25_second';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_classified_category';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'taxonomy_term_reference_plain',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Category',
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
    $pane->uuid = '5f27a8a3-e20b-4434-a5ed-ecfd06c10aa8';
    $display->content['new-5f27a8a3-e20b-4434-a5ed-ecfd06c10aa8'] = $pane;
    $display->panels['three_25_50_25_second'][2] = 'new-5f27a8a3-e20b-4434-a5ed-ecfd06c10aa8';
    $pane = new stdClass();
    $pane->pid = 'new-10347d63-8872-4172-85ac-754981fa7ad0';
    $pane->panel = 'three_25_50_25_second';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_classified_type';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'list_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Is this an offering, or a need?',
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
    $pane->uuid = '10347d63-8872-4172-85ac-754981fa7ad0';
    $display->content['new-10347d63-8872-4172-85ac-754981fa7ad0'] = $pane;
    $display->panels['three_25_50_25_second'][3] = 'new-10347d63-8872-4172-85ac-754981fa7ad0';
    $pane = new stdClass();
    $pane->pid = 'new-f9491b70-43c5-4f36-b892-9404cc75169d';
    $pane->panel = 'three_25_50_25_second';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_cost';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'number_decimal',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'thousand_separator' => ' ',
        'decimal_separator' => '.',
        'scale' => '2',
        'prefix_suffix' => 1,
      ),
      'context' => 'argument_entity_id:node_1',
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'f9491b70-43c5-4f36-b892-9404cc75169d';
    $display->content['new-f9491b70-43c5-4f36-b892-9404cc75169d'] = $pane;
    $display->panels['three_25_50_25_second'][4] = 'new-f9491b70-43c5-4f36-b892-9404cc75169d';
    $pane = new stdClass();
    $pane->pid = 'new-cfc88b9c-3a4f-4ecb-a51a-722032a37626';
    $pane->panel = 'three_25_50_25_second';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_images';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'image',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'file_view_mode' => 'default',
        'image_style' => 'thumbnail',
        'image_link' => 'file',
      ),
      'context' => 'argument_entity_id:node_1',
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
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'cfc88b9c-3a4f-4ecb-a51a-722032a37626';
    $display->content['new-cfc88b9c-3a4f-4ecb-a51a-722032a37626'] = $pane;
    $display->panels['three_25_50_25_second'][5] = 'new-cfc88b9c-3a4f-4ecb-a51a-722032a37626';
    $pane = new stdClass();
    $pane->pid = 'new-35146143-863e-4fb2-85f0-6211e2fc1842';
    $pane->panel = 'three_25_50_25_second';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
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
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '35146143-863e-4fb2-85f0-6211e2fc1842';
    $display->content['new-35146143-863e-4fb2-85f0-6211e2fc1842'] = $pane;
    $display->panels['three_25_50_25_second'][6] = 'new-35146143-863e-4fb2-85f0-6211e2fc1842';
    $pane = new stdClass();
    $pane->pid = 'new-77aed5f8-6794-46de-a0ff-69487d3f6b45';
    $pane->panel = 'three_25_50_25_second';
    $pane->type = 'node_comment_wrapper';
    $pane->subtype = 'node_comment_wrapper';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'mode' => '1',
      'comments_per_page' => '50',
      'context' => 'argument_entity_id:node_1',
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
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = '77aed5f8-6794-46de-a0ff-69487d3f6b45';
    $display->content['new-77aed5f8-6794-46de-a0ff-69487d3f6b45'] = $pane;
    $display->panels['three_25_50_25_second'][7] = 'new-77aed5f8-6794-46de-a0ff-69487d3f6b45';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__classified'] = $handler;

  return $export;
}
