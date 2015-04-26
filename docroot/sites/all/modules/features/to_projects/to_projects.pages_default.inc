<?php
/**
 * @file
 * to_projects.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function to_projects_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__project';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -95;
  $handler->conf = array(
    'title' => 'Project',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'project',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'project' => 'project',
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
      'two_33_66_top' => NULL,
      'two_33_66_first' => NULL,
      'two_33_66_second' => NULL,
      'two_33_66_bottom' => NULL,
      'three_25_50_25_top' => NULL,
      'three_25_50_25_first' => NULL,
      'three_25_50_25_second' => NULL,
      'three_25_50_25_third' => NULL,
      'three_25_50_25_bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '12d050a6-cf81-4079-ba4c-7be11876b93f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-27ee1824-372b-480a-84c4-95af6fa2ddec';
    $pane->panel = 'three_25_50_25_first';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-projects';
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
    $pane->uuid = '27ee1824-372b-480a-84c4-95af6fa2ddec';
    $display->content['new-27ee1824-372b-480a-84c4-95af6fa2ddec'] = $pane;
    $display->panels['three_25_50_25_first'][0] = 'new-27ee1824-372b-480a-84c4-95af6fa2ddec';
    $pane = new stdClass();
    $pane->pid = 'new-05ce66c6-fc54-4a0e-8392-43765b918049';
    $pane->panel = 'three_25_50_25_second';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_committee';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'entityreference_label',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'link' => 1,
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '05ce66c6-fc54-4a0e-8392-43765b918049';
    $display->content['new-05ce66c6-fc54-4a0e-8392-43765b918049'] = $pane;
    $display->panels['three_25_50_25_second'][0] = 'new-05ce66c6-fc54-4a0e-8392-43765b918049';
    $pane = new stdClass();
    $pane->pid = 'new-44f052ec-1f05-446c-9f4d-350893003565';
    $pane->panel = 'three_25_50_25_second';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_schedule';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'date_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'format_type' => 'long',
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_to' => '',
        'fromto' => 'both',
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '44f052ec-1f05-446c-9f4d-350893003565';
    $display->content['new-44f052ec-1f05-446c-9f4d-350893003565'] = $pane;
    $display->panels['three_25_50_25_second'][1] = 'new-44f052ec-1f05-446c-9f4d-350893003565';
    $pane = new stdClass();
    $pane->pid = 'new-aef67b53-8c61-459d-b251-e5c54beb7819';
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
        'thousand_separator' => ',',
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'aef67b53-8c61-459d-b251-e5c54beb7819';
    $display->content['new-aef67b53-8c61-459d-b251-e5c54beb7819'] = $pane;
    $display->panels['three_25_50_25_second'][2] = 'new-aef67b53-8c61-459d-b251-e5c54beb7819';
    $pane = new stdClass();
    $pane->pid = 'new-5ece73ae-248c-473f-a15d-d7dd1908e08d';
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
    $pane->uuid = '5ece73ae-248c-473f-a15d-d7dd1908e08d';
    $display->content['new-5ece73ae-248c-473f-a15d-d7dd1908e08d'] = $pane;
    $display->panels['three_25_50_25_second'][3] = 'new-5ece73ae-248c-473f-a15d-d7dd1908e08d';
    $pane = new stdClass();
    $pane->pid = 'new-496edd7f-4f58-473d-9290-732e76ebf89c';
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '496edd7f-4f58-473d-9290-732e76ebf89c';
    $display->content['new-496edd7f-4f58-473d-9290-732e76ebf89c'] = $pane;
    $display->panels['three_25_50_25_second'][4] = 'new-496edd7f-4f58-473d-9290-732e76ebf89c';
    $pane = new stdClass();
    $pane->pid = 'new-ab193ddf-ffb1-4ccd-ae9a-cff8ac43cabe';
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
    $pane->uuid = 'ab193ddf-ffb1-4ccd-ae9a-cff8ac43cabe';
    $display->content['new-ab193ddf-ffb1-4ccd-ae9a-cff8ac43cabe'] = $pane;
    $display->panels['three_25_50_25_second'][5] = 'new-ab193ddf-ffb1-4ccd-ae9a-cff8ac43cabe';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__project'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function to_projects_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'projects';
  $page->task = 'page';
  $page->admin_title = 'Projects';
  $page->admin_description = '';
  $page->path = 'projects';
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
  $handler->name = 'page_projects__panel_context_dc16bd47-5454-42ab-ae75-0cb10fbf5094';
  $handler->task = 'page';
  $handler->subtask = 'projects';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Projects',
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
  $display->title = 'current projects';
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
    $pane->pid = 'new-5308b5a7-6d2e-4102-9199-8c3c2fbd35f3';
    $pane->panel = 'three_25_50_25_first';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-projects';
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
    $pane->uuid = '5308b5a7-6d2e-4102-9199-8c3c2fbd35f3';
    $display->content['new-5308b5a7-6d2e-4102-9199-8c3c2fbd35f3'] = $pane;
    $display->panels['three_25_50_25_first'][1] = 'new-5308b5a7-6d2e-4102-9199-8c3c2fbd35f3';
    $pane = new stdClass();
    $pane->pid = 'new-01676d2e-4746-4c63-8e66-147d1e675cac';
    $pane->panel = 'three_25_50_25_second';
    $pane->type = 'views';
    $pane->subtype = 'projects';
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
    $pane->uuid = '01676d2e-4746-4c63-8e66-147d1e675cac';
    $display->content['new-01676d2e-4746-4c63-8e66-147d1e675cac'] = $pane;
    $display->panels['three_25_50_25_second'][0] = 'new-01676d2e-4746-4c63-8e66-147d1e675cac';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['projects'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'projects_archive';
  $page->task = 'page';
  $page->admin_title = 'Projects Archive';
  $page->admin_description = '';
  $page->path = 'projects/archive';
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
  $handler->name = 'page_projects_archive__panel_context_89368ab9-4ce4-4b01-a9c4-5b19c1675f86';
  $handler->task = 'page';
  $handler->subtask = 'projects_archive';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Projects Archive',
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
  $display->title = 'current projects';
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
    $pane->pid = 'new-5308b5a7-6d2e-4102-9199-8c3c2fbd35f3';
    $pane->panel = 'three_25_50_25_first';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-projects';
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
    $pane->uuid = '5308b5a7-6d2e-4102-9199-8c3c2fbd35f3';
    $display->content['new-5308b5a7-6d2e-4102-9199-8c3c2fbd35f3'] = $pane;
    $display->panels['three_25_50_25_first'][1] = 'new-5308b5a7-6d2e-4102-9199-8c3c2fbd35f3';
    $pane = new stdClass();
    $pane->pid = 'new-7742b291-0557-4b1a-88b8-8ef98dacf988';
    $pane->panel = 'three_25_50_25_second';
    $pane->type = 'views';
    $pane->subtype = 'projects';
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
      'display' => 'archive',
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
    $pane->uuid = '7742b291-0557-4b1a-88b8-8ef98dacf988';
    $display->content['new-7742b291-0557-4b1a-88b8-8ef98dacf988'] = $pane;
    $display->panels['three_25_50_25_second'][0] = 'new-7742b291-0557-4b1a-88b8-8ef98dacf988';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['projects_archive'] = $page;

  return $pages;

}
