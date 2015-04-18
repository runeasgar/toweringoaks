<?php
/**
 * @file
 * to_events.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function to_events_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__event';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -98;
  $handler->conf = array(
    'title' => 'Event',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'event',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'event' => 'event',
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
  $display->uuid = '6ac6bc2a-b38e-4ea7-a6e6-c69229fb5425';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-cacabc67-37b8-4a8b-ba81-693345beaed5';
    $pane->panel = 'three_25_50_25_first';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-events';
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
    $pane->uuid = 'cacabc67-37b8-4a8b-ba81-693345beaed5';
    $display->content['new-cacabc67-37b8-4a8b-ba81-693345beaed5'] = $pane;
    $display->panels['three_25_50_25_first'][0] = 'new-cacabc67-37b8-4a8b-ba81-693345beaed5';
    $pane = new stdClass();
    $pane->pid = 'new-44104d60-f4da-43fc-a796-d3a811a455c1';
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
    $pane->uuid = '44104d60-f4da-43fc-a796-d3a811a455c1';
    $display->content['new-44104d60-f4da-43fc-a796-d3a811a455c1'] = $pane;
    $display->panels['three_25_50_25_second'][0] = 'new-44104d60-f4da-43fc-a796-d3a811a455c1';
    $pane = new stdClass();
    $pane->pid = 'new-f26611a1-6968-463c-9670-a73a2b733b83';
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
    $pane->uuid = 'f26611a1-6968-463c-9670-a73a2b733b83';
    $display->content['new-f26611a1-6968-463c-9670-a73a2b733b83'] = $pane;
    $display->panels['three_25_50_25_second'][1] = 'new-f26611a1-6968-463c-9670-a73a2b733b83';
    $pane = new stdClass();
    $pane->pid = 'new-736226a7-26a6-4c3c-a09b-0d0ef4e5c9a8';
    $pane->panel = 'three_25_50_25_second';
    $pane->type = 'node_body';
    $pane->subtype = 'node_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '736226a7-26a6-4c3c-a09b-0d0ef4e5c9a8';
    $display->content['new-736226a7-26a6-4c3c-a09b-0d0ef4e5c9a8'] = $pane;
    $display->panels['three_25_50_25_second'][2] = 'new-736226a7-26a6-4c3c-a09b-0d0ef4e5c9a8';
    $pane = new stdClass();
    $pane->pid = 'new-559b878e-afb7-4afe-991d-c68793e4b883';
    $pane->panel = 'three_25_50_25_second';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_documents';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'entityreference_label',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'link' => 1,
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Related Documents',
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
    $pane->uuid = '559b878e-afb7-4afe-991d-c68793e4b883';
    $display->content['new-559b878e-afb7-4afe-991d-c68793e4b883'] = $pane;
    $display->panels['three_25_50_25_second'][3] = 'new-559b878e-afb7-4afe-991d-c68793e4b883';
    $pane = new stdClass();
    $pane->pid = 'new-d0738ba0-057d-4eb9-b4cf-f0e8fb79a9e4';
    $pane->panel = 'three_25_50_25_second';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_attachments';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'file_default',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
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
    $pane->uuid = 'd0738ba0-057d-4eb9-b4cf-f0e8fb79a9e4';
    $display->content['new-d0738ba0-057d-4eb9-b4cf-f0e8fb79a9e4'] = $pane;
    $display->panels['three_25_50_25_second'][4] = 'new-d0738ba0-057d-4eb9-b4cf-f0e8fb79a9e4';
    $pane = new stdClass();
    $pane->pid = 'new-5b4cc507-1179-43b9-b540-509c71f04f82';
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
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '5b4cc507-1179-43b9-b540-509c71f04f82';
    $display->content['new-5b4cc507-1179-43b9-b540-509c71f04f82'] = $pane;
    $display->panels['three_25_50_25_second'][5] = 'new-5b4cc507-1179-43b9-b540-509c71f04f82';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__event'] = $handler;

  return $export;
}
