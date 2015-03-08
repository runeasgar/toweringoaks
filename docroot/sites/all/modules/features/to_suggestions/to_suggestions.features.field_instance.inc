<?php
/**
 * @file
 * to_suggestions.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function to_suggestions_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-suggestion-body'
  $field_instances['node-suggestion-body'] = array(
    'bundle' => 'suggestion',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'quickedit' => array(
            'editor' => 'plain_text',
          ),
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'quickedit' => array(
            'editor' => 'form',
          ),
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-suggestion-field_attachments'
  $field_instances['node-suggestion-field_attachments'] = array(
    'bundle' => 'suggestion',
    'deleted' => 0,
    'description' => 'Upload any files that you\'d like to have attached to this suggestion.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(
          'quickedit' => array(
            'editor' => 'form',
          ),
        ),
        'type' => 'file_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_attachments',
    'label' => 'Attachments',
    'required' => 0,
    'settings' => array(
      'description_field' => 1,
      'file_directory' => 'suggestions/attachments',
      'file_extensions' => 'txt rtf doc docx xls xlsx pdf csv jpg jpeg gif png ppt pptx pps',
      'max_filesize' => '10 MB',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-suggestion-field_documents'
  $field_instances['node-suggestion-field_documents'] = array(
    'bundle' => 'suggestion',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'If you would like to attach any site documents to this suggestion, type their name(s) here.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
          'quickedit' => array(
            'editor' => 'form',
          ),
        ),
        'type' => 'entityreference_label',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_documents',
    'label' => 'Documents',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Attachments');
  t('Body');
  t('Documents');
  t('If you would like to attach any site documents to this suggestion, type their name(s) here.');
  t('Upload any files that you\'d like to have attached to this suggestion.');

  return $field_instances;
}
