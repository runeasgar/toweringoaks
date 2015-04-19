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
  $mini->name = 'home_top_right';
  $mini->category = '';
  $mini->admin_title = 'Home Top Right';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'two_50';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'two_50_top' => NULL,
      'two_50_first' => NULL,
      'two_50_second' => NULL,
      'two_50_bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '9824b1c0-001d-44e2-a9f7-47041cbf7af0';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-56d94ab3-aee8-4cf0-8eeb-dad3c1136f13';
    $pane->panel = 'two_50_first';
    $pane->type = 'block';
    $pane->subtype = 'views-events-small';
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
    $pane->uuid = '56d94ab3-aee8-4cf0-8eeb-dad3c1136f13';
    $display->content['new-56d94ab3-aee8-4cf0-8eeb-dad3c1136f13'] = $pane;
    $display->panels['two_50_first'][0] = 'new-56d94ab3-aee8-4cf0-8eeb-dad3c1136f13';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-56d94ab3-aee8-4cf0-8eeb-dad3c1136f13';
  $mini->display = $display;
  $export['home_top_right'] = $mini;

  return $export;
}
