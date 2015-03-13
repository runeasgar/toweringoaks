<?php
/**
 * @file
 * to_announcements.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function to_announcements_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__announcement';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -99;
  $handler->conf = array(
    'title' => 'Announcement',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'announcement',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'announcement' => 'announcement',
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
  $display->layout = 'two_33_66';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'two_66_33_top' => NULL,
      'two_66_33_first' => NULL,
      'two_66_33_second' => NULL,
      'two_66_33_bottom' => NULL,
      'two_33_66_top' => NULL,
      'two_33_66_first' => NULL,
      'two_33_66_second' => NULL,
      'two_33_66_bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'e559dc28-79c6-49fe-9fec-812ee7553167';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-ef8d7aee-a015-4073-ac01-037560716d02';
    $pane->panel = 'two_33_66_first';
    $pane->type = 'node_created';
    $pane->subtype = 'node_created';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'format' => 'long',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Posted on',
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
    $pane->uuid = 'ef8d7aee-a015-4073-ac01-037560716d02';
    $display->content['new-ef8d7aee-a015-4073-ac01-037560716d02'] = $pane;
    $display->panels['two_33_66_first'][0] = 'new-ef8d7aee-a015-4073-ac01-037560716d02';
    $pane = new stdClass();
    $pane->pid = 'new-29aabfdf-ba0e-4391-85a2-a21f797b43ed';
    $pane->panel = 'two_33_66_first';
    $pane->type = 'node_author';
    $pane->subtype = 'node_author';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 1,
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Posted by',
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
    $pane->uuid = '29aabfdf-ba0e-4391-85a2-a21f797b43ed';
    $display->content['new-29aabfdf-ba0e-4391-85a2-a21f797b43ed'] = $pane;
    $display->panels['two_33_66_first'][1] = 'new-29aabfdf-ba0e-4391-85a2-a21f797b43ed';
    $pane = new stdClass();
    $pane->pid = 'new-5ab41e00-c5a4-4fd1-bb84-320d7ad8056e';
    $pane->panel = 'two_33_66_first';
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
        'view_mode' => 'default',
        'links' => 1,
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '5ab41e00-c5a4-4fd1-bb84-320d7ad8056e';
    $display->content['new-5ab41e00-c5a4-4fd1-bb84-320d7ad8056e'] = $pane;
    $display->panels['two_33_66_first'][2] = 'new-5ab41e00-c5a4-4fd1-bb84-320d7ad8056e';
    $pane = new stdClass();
    $pane->pid = 'new-5e2dc945-ef60-4751-aa78-4813038853a4';
    $pane->panel = 'two_33_66_first';
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '5e2dc945-ef60-4751-aa78-4813038853a4';
    $display->content['new-5e2dc945-ef60-4751-aa78-4813038853a4'] = $pane;
    $display->panels['two_33_66_first'][3] = 'new-5e2dc945-ef60-4751-aa78-4813038853a4';
    $pane = new stdClass();
    $pane->pid = 'new-768e4c94-a37c-40e5-9f69-75258b82ccd7';
    $pane->panel = 'two_33_66_second';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '768e4c94-a37c-40e5-9f69-75258b82ccd7';
    $display->content['new-768e4c94-a37c-40e5-9f69-75258b82ccd7'] = $pane;
    $display->panels['two_33_66_second'][0] = 'new-768e4c94-a37c-40e5-9f69-75258b82ccd7';
    $pane = new stdClass();
    $pane->pid = 'new-5000f5b1-7c0b-4094-91ae-5f85a9b0526e';
    $pane->panel = 'two_33_66_second';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '5000f5b1-7c0b-4094-91ae-5f85a9b0526e';
    $display->content['new-5000f5b1-7c0b-4094-91ae-5f85a9b0526e'] = $pane;
    $display->panels['two_33_66_second'][1] = 'new-5000f5b1-7c0b-4094-91ae-5f85a9b0526e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__announcement'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function to_announcements_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'announcements';
  $page->task = 'page';
  $page->admin_title = 'Announcements';
  $page->admin_description = '';
  $page->path = 'announcements';
  $page->access = array();
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
  $handler->name = 'page_announcements__panel_context_c03fa90c-94d9-4789-83bf-de961ed3f2ce';
  $handler->task = 'page';
  $handler->subtask = 'announcements';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Announcements',
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
  $display->layout = 'one';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'two_33_66_top' => NULL,
      'two_33_66_first' => NULL,
      'two_33_66_second' => NULL,
      'two_33_66_bottom' => NULL,
      'one_main' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '27accf0a-1494-400f-8c6e-04e0b8458c1d';
  $display->content = array();
  $display->panels = array();
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['announcements'] = $page;

  return $pages;

}
