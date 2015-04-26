<?php
/**
 * @file
 * to_suggestions.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function to_suggestions_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_flag_default_flags().
 */
function to_suggestions_flag_default_flags() {
  $flags = array();
  // Exported flag: "Vote for Suggestion".
  $flags['vote_for_suggestion'] = array(
    'entity_type' => 'node',
    'title' => 'Vote for Suggestion',
    'global' => 0,
    'types' => array(
      0 => 'suggestion',
    ),
    'flag_short' => 'Vote for this suggestion',
    'flag_long' => '',
    'flag_message' => 'You have cast your vote in favor of this suggestion',
    'unflag_short' => 'Remove vote for this suggestion',
    'unflag_long' => '',
    'unflag_message' => 'You have removed your vote for this suggestion',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 'full',
      'teaser' => 0,
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
      'diff_standard' => 0,
      'token' => 0,
    ),
    'show_as_field' => 1,
    'show_on_form' => 0,
    'access_author' => 'others',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'to_suggestions',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  return $flags;

}

/**
 * Implements hook_node_info().
 */
function to_suggestions_node_info() {
  $items = array(
    'suggestion' => array(
      'name' => t('Suggestion'),
      'base' => 'node_content',
      'description' => t('Suggest actions that the homeowners association should take.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
