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
    'title' => 'Private',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 3,
              1 => 4,
              2 => 5,
              3 => 6,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'one';
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
      'one_main' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'd73e9e85-2b19-4f8a-ac61-3103f676343f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-d2cbd561-fc9f-454d-ae9c-e2f1890624dc';
    $pane->panel = 'one_main';
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
    $display->panels['one_main'][0] = 'new-d2cbd561-fc9f-454d-ae9c-e2f1890624dc';
    $pane = new stdClass();
    $pane->pid = 'new-f65975d6-ec84-463d-a8a5-6e1d40e23718';
    $pane->panel = 'one_main';
    $pane->type = 'panels_mini';
    $pane->subtype = 'home_1';
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
    $pane->uuid = 'f65975d6-ec84-463d-a8a5-6e1d40e23718';
    $display->content['new-f65975d6-ec84-463d-a8a5-6e1d40e23718'] = $pane;
    $display->panels['one_main'][1] = 'new-f65975d6-ec84-463d-a8a5-6e1d40e23718';
    $pane = new stdClass();
    $pane->pid = 'new-29cf1744-14f1-4517-99a5-2ead24122a49';
    $pane->panel = 'one_main';
    $pane->type = 'panels_mini';
    $pane->subtype = 'home_2';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '29cf1744-14f1-4517-99a5-2ead24122a49';
    $display->content['new-29cf1744-14f1-4517-99a5-2ead24122a49'] = $pane;
    $display->panels['one_main'][2] = 'new-29cf1744-14f1-4517-99a5-2ead24122a49';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_home__panel_context_7842244f-422d-45c0-8631-5d0e6556641b';
  $handler->task = 'page';
  $handler->subtask = 'home';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Public',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 1,
              1 => 2,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'one';
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
      'one_main' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'd73e9e85-2b19-4f8a-ac61-3103f676343f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1528dd58-ab54-451c-aad7-e1f28b5bbdb7';
    $pane->panel = 'one_main';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Facebook Prompt',
      'title' => '',
      'body' => '<p>The easiest way to login is with Facebook! <a href="/user/simple-fb-connect">Click here</a> to register or login using Facebook. Otherwise, you can fill out the form below.</p>
',
      'format' => 'filtered_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1528dd58-ab54-451c-aad7-e1f28b5bbdb7';
    $display->content['new-1528dd58-ab54-451c-aad7-e1f28b5bbdb7'] = $pane;
    $display->panels['one_main'][0] = 'new-1528dd58-ab54-451c-aad7-e1f28b5bbdb7';
    $pane = new stdClass();
    $pane->pid = 'new-4cfb64d3-6f17-453a-b9cc-883906cb278d';
    $pane->panel = 'one_main';
    $pane->type = 'block';
    $pane->subtype = 'user-login';
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
    $pane->uuid = '4cfb64d3-6f17-453a-b9cc-883906cb278d';
    $display->content['new-4cfb64d3-6f17-453a-b9cc-883906cb278d'] = $pane;
    $display->panels['one_main'][1] = 'new-4cfb64d3-6f17-453a-b9cc-883906cb278d';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['home'] = $page;

  return $pages;

}
