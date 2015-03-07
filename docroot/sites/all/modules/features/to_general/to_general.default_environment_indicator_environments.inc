<?php
/**
 * @file
 * to_general.default_environment_indicator_environments.inc
 */

/**
 * Implements hook_default_environment_indicator_environment().
 */
function to_general_default_environment_indicator_environment() {
  $export = array();

  $environment = new stdClass();
  $environment->disabled = FALSE; /* Edit this to true to make a default environment disabled initially */
  $environment->api_version = 1;
  $environment->machine = 'dev';
  $environment->name = 'Dev';
  $environment->regexurl = 'joshuataylo1dev.prod.acquia-sites.com';
  $environment->settings = array(
    'color' => '#000000',
    'text_color' => '#ffffff',
    'weight' => '',
    'position' => 'top',
    'fixed' => 0,
  );
  $export['dev'] = $environment;

  $environment = new stdClass();
  $environment->disabled = FALSE; /* Edit this to true to make a default environment disabled initially */
  $environment->api_version = 1;
  $environment->machine = 'local';
  $environment->name = 'Local';
  $environment->regexurl = 'joshuataylo1.dev.dd:8083';
  $environment->settings = array(
    'color' => '#000000',
    'text_color' => '#ffffff',
    'weight' => '99',
    'position' => 'top',
    'fixed' => 0,
  );
  $export['local'] = $environment;

  return $export;
}
