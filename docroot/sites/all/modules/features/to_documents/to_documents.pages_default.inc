<?php
/**
 * @file
 * to_documents.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function to_documents_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'documents';
  $page->task = 'page';
  $page->admin_title = 'Documents';
  $page->admin_description = '';
  $page->path = 'documents';
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
  $handler->name = 'page_documents__panel_context_58095837-de4c-4996-a9d8-0af5e4dd81e5';
  $handler->task = 'page';
  $handler->subtask = 'documents';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Documents',
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
  $display->title = 'documents';
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
    $pane->pid = 'new-9d8c04f6-444a-4b1d-a307-18530e9ba7ab';
    $pane->panel = 'three_25_50_25_first';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-documents';
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
    $pane->uuid = '9d8c04f6-444a-4b1d-a307-18530e9ba7ab';
    $display->content['new-9d8c04f6-444a-4b1d-a307-18530e9ba7ab'] = $pane;
    $display->panels['three_25_50_25_first'][1] = 'new-9d8c04f6-444a-4b1d-a307-18530e9ba7ab';
    $pane = new stdClass();
    $pane->pid = 'new-d680de41-2df9-43b4-af09-a57563cab95e';
    $pane->panel = 'three_25_50_25_second';
    $pane->type = 'views';
    $pane->subtype = 'documents';
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
    $pane->uuid = 'd680de41-2df9-43b4-af09-a57563cab95e';
    $display->content['new-d680de41-2df9-43b4-af09-a57563cab95e'] = $pane;
    $display->panels['three_25_50_25_second'][0] = 'new-d680de41-2df9-43b4-af09-a57563cab95e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['documents'] = $page;

  return $pages;

}
