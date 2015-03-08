<?php
/**
 * @file
 * to_fields.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function to_fields_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'body'
  $field_bases['body'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'node',
    ),
    'field_name' => 'body',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_with_summary',
  );

  // Exported field_base: 'comment_body'
  $field_bases['comment_body'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'comment',
    ),
    'field_name' => 'comment_body',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_attachments'
  $field_bases['field_attachments'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_attachments',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'file',
    'settings' => array(
      'display_default' => 0,
      'display_field' => 0,
      'uri_scheme' => 'private',
    ),
    'translatable' => 0,
    'type' => 'file',
  );

  // Exported field_base: 'field_critical'
  $field_bases['field_critical'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_critical',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => '',
        1 => '',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  // Exported field_base: 'field_location'
  $field_bases['field_location'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_location',
    'indexes' => array(
      'lid' => array(
        0 => 'lid',
      ),
    ),
    'locked' => 0,
    'module' => 'location_cck',
    'settings' => array(
      'gmap_macro' => '[gmap ]',
      'gmap_marker' => 'drupal',
      'location_settings' => array(
        'display' => array(
          'hide' => array(
            'additional' => 0,
            'city' => 0,
            'coords' => 'coords',
            'country' => 'country',
            'country_name' => 'country_name',
            'locpick' => 'locpick',
            'map_link' => 0,
            'name' => 0,
            'postal_code' => 0,
            'province' => 0,
            'province_name' => 'province_name',
            'street' => 0,
          ),
        ),
        'form' => array(
          'fields' => array(
            'additional' => array(
              'collect' => 1,
              'default' => '',
              'weight' => 6,
            ),
            'city' => array(
              'collect' => 1,
              'default' => '',
              'weight' => 8,
            ),
            'country' => array(
              'collect' => 4,
              'default' => 'us',
              'weight' => 14,
            ),
            'locpick' => array(
              'collect' => 0,
              'weight' => 20,
            ),
            'name' => array(
              'collect' => 1,
              'default' => '',
              'weight' => 2,
            ),
            'postal_code' => array(
              'collect' => 1,
              'default' => '',
              'weight' => 12,
            ),
            'province' => array(
              'collect' => 1,
              'default' => '',
              'weight' => 10,
              'widget' => 'select',
            ),
            'street' => array(
              'collect' => 1,
              'default' => '',
              'weight' => 4,
            ),
          ),
        ),
      ),
    ),
    'translatable' => 0,
    'type' => 'location',
  );

  return $field_bases;
}
