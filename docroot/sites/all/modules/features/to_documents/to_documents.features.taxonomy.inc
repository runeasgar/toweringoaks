<?php
/**
 * @file
 * to_documents.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function to_documents_taxonomy_default_vocabularies() {
  return array(
    'document_categories' => array(
      'name' => 'Document Categories',
      'machine_name' => 'document_categories',
      'description' => 'Provides a list of category options for document content.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
