<?php
/**
 * @file
 * to_suggestions.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function to_suggestions_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__suggestion';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -96;
  $handler->conf = array(
    'title' => 'Suggestion',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'suggestion',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'suggestion' => 'suggestion',
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
  $display->uuid = '8caf2867-261c-437a-a6ad-d11405eac2a5';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-baaf205d-39fa-43c7-8a8b-36e91942f909';
    $pane->panel = 'three_25_50_25_second';
    $pane->type = 'entity_field_extra';
    $pane->subtype = 'node:flag_vote_for_suggestion';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
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
    $pane->uuid = 'baaf205d-39fa-43c7-8a8b-36e91942f909';
    $display->content['new-baaf205d-39fa-43c7-8a8b-36e91942f909'] = $pane;
    $display->panels['three_25_50_25_second'][0] = 'new-baaf205d-39fa-43c7-8a8b-36e91942f909';
    $pane = new stdClass();
    $pane->pid = 'new-b85620cd-bfbe-4736-9ac4-8d482047fbc7';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'b85620cd-bfbe-4736-9ac4-8d482047fbc7';
    $display->content['new-b85620cd-bfbe-4736-9ac4-8d482047fbc7'] = $pane;
    $display->panels['three_25_50_25_second'][1] = 'new-b85620cd-bfbe-4736-9ac4-8d482047fbc7';
    $pane = new stdClass();
    $pane->pid = 'new-3bd6519b-c7fe-47f4-b304-af86b627c78e';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '3bd6519b-c7fe-47f4-b304-af86b627c78e';
    $display->content['new-3bd6519b-c7fe-47f4-b304-af86b627c78e'] = $pane;
    $display->panels['three_25_50_25_second'][2] = 'new-3bd6519b-c7fe-47f4-b304-af86b627c78e';
    $pane = new stdClass();
    $pane->pid = 'new-0584e534-7ca1-45e3-9071-9dc66eb6b4b5';
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '0584e534-7ca1-45e3-9071-9dc66eb6b4b5';
    $display->content['new-0584e534-7ca1-45e3-9071-9dc66eb6b4b5'] = $pane;
    $display->panels['three_25_50_25_second'][3] = 'new-0584e534-7ca1-45e3-9071-9dc66eb6b4b5';
    $pane = new stdClass();
    $pane->pid = 'new-c1cb9bd8-f6d2-4ab4-9db1-36805b093d95';
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
        'link' => 0,
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'c1cb9bd8-f6d2-4ab4-9db1-36805b093d95';
    $display->content['new-c1cb9bd8-f6d2-4ab4-9db1-36805b093d95'] = $pane;
    $display->panels['three_25_50_25_second'][4] = 'new-c1cb9bd8-f6d2-4ab4-9db1-36805b093d95';
    $pane = new stdClass();
    $pane->pid = 'new-de3f7ef5-b335-4bab-8dfd-1468e1460900';
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
      'override_title' => 1,
      'override_title_text' => 'Attached Files',
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
    $pane->uuid = 'de3f7ef5-b335-4bab-8dfd-1468e1460900';
    $display->content['new-de3f7ef5-b335-4bab-8dfd-1468e1460900'] = $pane;
    $display->panels['three_25_50_25_second'][5] = 'new-de3f7ef5-b335-4bab-8dfd-1468e1460900';
    $pane = new stdClass();
    $pane->pid = 'new-d1c49986-5162-4998-ad65-0443a954df58';
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
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = 'd1c49986-5162-4998-ad65-0443a954df58';
    $display->content['new-d1c49986-5162-4998-ad65-0443a954df58'] = $pane;
    $display->panels['three_25_50_25_second'][6] = 'new-d1c49986-5162-4998-ad65-0443a954df58';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__suggestion'] = $handler;

  return $export;
}
