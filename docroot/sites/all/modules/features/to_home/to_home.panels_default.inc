<?php
/**
 * @file
 * to_home.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function to_home_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'home_1';
  $mini->category = '';
  $mini->admin_title = 'Home 1';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'three_3x33';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'three_33_top' => NULL,
      'three_33_first' => NULL,
      'three_33_second' => NULL,
      'three_33_third' => NULL,
      'three_33_bottom' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'a0d506ae-711b-4350-814d-927afd0776e1';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-2540b083-57cb-474e-820b-eff95119a6d7';
    $pane->panel = 'three_33_first';
    $pane->type = 'views';
    $pane->subtype = 'announcements';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '3',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'small',
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
    $pane->uuid = '2540b083-57cb-474e-820b-eff95119a6d7';
    $display->content['new-2540b083-57cb-474e-820b-eff95119a6d7'] = $pane;
    $display->panels['three_33_first'][0] = 'new-2540b083-57cb-474e-820b-eff95119a6d7';
    $pane = new stdClass();
    $pane->pid = 'new-ba54e275-83b4-44a4-9bb4-b6ac68aad892';
    $pane->panel = 'three_33_second';
    $pane->type = 'views';
    $pane->subtype = 'events';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '3',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'small',
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
    $pane->uuid = 'ba54e275-83b4-44a4-9bb4-b6ac68aad892';
    $display->content['new-ba54e275-83b4-44a4-9bb4-b6ac68aad892'] = $pane;
    $display->panels['three_33_second'][0] = 'new-ba54e275-83b4-44a4-9bb4-b6ac68aad892';
    $pane = new stdClass();
    $pane->pid = 'new-b41c7aaa-d028-4f6c-8dc6-14212915a60b';
    $pane->panel = 'three_33_third';
    $pane->type = 'views';
    $pane->subtype = 'classifieds';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '3',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'small',
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
    $pane->uuid = 'b41c7aaa-d028-4f6c-8dc6-14212915a60b';
    $display->content['new-b41c7aaa-d028-4f6c-8dc6-14212915a60b'] = $pane;
    $display->panels['three_33_third'][0] = 'new-b41c7aaa-d028-4f6c-8dc6-14212915a60b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-2540b083-57cb-474e-820b-eff95119a6d7';
  $mini->display = $display;
  $export['home_1'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'home_2';
  $mini->category = '';
  $mini->admin_title = 'Home 2';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'three_3x33';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'three_33_top' => NULL,
      'three_33_first' => NULL,
      'three_33_second' => NULL,
      'three_33_third' => NULL,
      'three_33_bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '8bc8b74e-7551-497f-a8f3-45435a873893';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-cf228756-d1a6-4787-92e0-53d530325276';
    $pane->panel = 'three_33_third';
    $pane->type = 'views';
    $pane->subtype = 'directory';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '1',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'featured',
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
    $pane->uuid = 'cf228756-d1a6-4787-92e0-53d530325276';
    $display->content['new-cf228756-d1a6-4787-92e0-53d530325276'] = $pane;
    $display->panels['three_33_third'][0] = 'new-cf228756-d1a6-4787-92e0-53d530325276';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-cf228756-d1a6-4787-92e0-53d530325276';
  $mini->display = $display;
  $export['home_2'] = $mini;

  return $export;
}
