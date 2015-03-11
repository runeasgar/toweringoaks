<?php
/**
 * @file
 * to_polls.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function to_polls_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
