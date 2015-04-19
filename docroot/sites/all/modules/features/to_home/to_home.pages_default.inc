<?php
/**
 * @file
 * to_home.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function to_home_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'home';
  $page->task = 'page';
  $page->admin_title = 'Home';
  $page->admin_description = 'The home page for Towering Oaks.';
  $page->path = 'home';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_home__panel_context_bfe54795-f9aa-434b-9e3a-741a1dc854a3';
  $handler->task = 'page';
  $handler->subtask = 'home';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Home',
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
  $display->layout = 'two_33_66';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'three_33_top' => NULL,
      'three_33_first' => NULL,
      'three_33_second' => NULL,
      'three_33_third' => NULL,
      'three_33_bottom' => NULL,
      'two_33_66_top' => NULL,
      'two_33_66_first' => NULL,
      'two_33_66_second' => NULL,
      'two_33_66_bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'd73e9e85-2b19-4f8a-ac61-3103f676343f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-24acae3b-635a-4c78-a0ab-94448435bb74';
    $pane->panel = 'two_33_66_first';
    $pane->type = 'block';
    $pane->subtype = 'views-announcements-small';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = '24acae3b-635a-4c78-a0ab-94448435bb74';
    $display->content['new-24acae3b-635a-4c78-a0ab-94448435bb74'] = $pane;
    $display->panels['two_33_66_first'][0] = 'new-24acae3b-635a-4c78-a0ab-94448435bb74';
    $pane = new stdClass();
    $pane->pid = 'new-8d50fe88-771c-497d-868f-c0a886488d78';
    $pane->panel = 'two_33_66_second';
    $pane->type = 'panels_mini';
    $pane->subtype = 'home_top_right';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = '8d50fe88-771c-497d-868f-c0a886488d78';
    $display->content['new-8d50fe88-771c-497d-868f-c0a886488d78'] = $pane;
    $display->panels['two_33_66_second'][0] = 'new-8d50fe88-771c-497d-868f-c0a886488d78';
    $pane = new stdClass();
    $pane->pid = 'new-8204fbc3-ca2a-468e-91da-180d6de816bf';
    $pane->panel = 'two_33_66_second';
    $pane->type = 'panels_mini';
    $pane->subtype = 'home_bottom_right';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = '8204fbc3-ca2a-468e-91da-180d6de816bf';
    $display->content['new-8204fbc3-ca2a-468e-91da-180d6de816bf'] = $pane;
    $display->panels['two_33_66_second'][1] = 'new-8204fbc3-ca2a-468e-91da-180d6de816bf';
    $pane = new stdClass();
    $pane->pid = 'new-d2cbd561-fc9f-454d-ae9c-e2f1890624dc';
    $pane->panel = 'two_33_66_top';
    $pane->type = 'block';
    $pane->subtype = 'views-announcements-critical';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = 'd2cbd561-fc9f-454d-ae9c-e2f1890624dc';
    $display->content['new-d2cbd561-fc9f-454d-ae9c-e2f1890624dc'] = $pane;
    $display->panels['two_33_66_top'][0] = 'new-d2cbd561-fc9f-454d-ae9c-e2f1890624dc';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['home'] = $page;

  return $pages;

}
