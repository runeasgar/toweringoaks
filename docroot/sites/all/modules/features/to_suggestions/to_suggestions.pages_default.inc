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
    $pane->pid = 'new-1ddd2889-e03f-4354-81db-5b20ea58cbc7';
    $pane->panel = 'three_25_50_25_first';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-suggestions';
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
    $pane->uuid = '1ddd2889-e03f-4354-81db-5b20ea58cbc7';
    $display->content['new-1ddd2889-e03f-4354-81db-5b20ea58cbc7'] = $pane;
    $display->panels['three_25_50_25_first'][0] = 'new-1ddd2889-e03f-4354-81db-5b20ea58cbc7';
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

/**
 * Implements hook_default_page_manager_pages().
 */
function to_suggestions_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'suggestions';
  $page->task = 'page';
  $page->admin_title = 'Suggestions';
  $page->admin_description = '';
  $page->path = 'suggestions';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'none',
    'title' => 'Announcements',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_suggestions__panel_context_04db77bd-66de-41cc-980e-c59db9b0a6f2';
  $handler->task = 'page';
  $handler->subtask = 'suggestions';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Suggestions',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'three_25_50_25';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'two_33_66_top' => NULL,
      'two_33_66_first' => NULL,
      'two_33_66_second' => NULL,
      'two_33_66_bottom' => NULL,
      'one_main' => NULL,
      'three_25_50_25_top' => NULL,
      'three_25_50_25_first' => NULL,
      'three_25_50_25_second' => NULL,
      'three_25_50_25_third' => NULL,
      'three_25_50_25_bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'suggestions';
  $display->uuid = '27accf0a-1494-400f-8c6e-04e0b8458c1d';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-163c4e12-574f-4b37-b94f-8d3d5971c96c';
    $pane->panel = 'three_25_50_25_first';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-hoa';
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
    $pane->uuid = '163c4e12-574f-4b37-b94f-8d3d5971c96c';
    $display->content['new-163c4e12-574f-4b37-b94f-8d3d5971c96c'] = $pane;
    $display->panels['three_25_50_25_first'][0] = 'new-163c4e12-574f-4b37-b94f-8d3d5971c96c';
    $pane = new stdClass();
    $pane->pid = 'new-762789d3-bdc4-4376-bb89-95f125d43036';
    $pane->panel = 'three_25_50_25_first';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-suggestions';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '762789d3-bdc4-4376-bb89-95f125d43036';
    $display->content['new-762789d3-bdc4-4376-bb89-95f125d43036'] = $pane;
    $display->panels['three_25_50_25_first'][1] = 'new-762789d3-bdc4-4376-bb89-95f125d43036';
    $pane = new stdClass();
    $pane->pid = 'new-6d0bc610-44b8-4f53-808e-0e8192dd421d';
    $pane->panel = 'three_25_50_25_second';
    $pane->type = 'views';
    $pane->subtype = 'suggestions';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '10',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'all',
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
    $pane->uuid = '6d0bc610-44b8-4f53-808e-0e8192dd421d';
    $display->content['new-6d0bc610-44b8-4f53-808e-0e8192dd421d'] = $pane;
    $display->panels['three_25_50_25_second'][0] = 'new-6d0bc610-44b8-4f53-808e-0e8192dd421d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['suggestions'] = $page;

  return $pages;

}
