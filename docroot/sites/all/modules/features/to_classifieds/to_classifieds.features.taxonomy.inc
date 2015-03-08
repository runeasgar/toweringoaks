<?php
/**
 * @file
 * to_classifieds.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function to_classifieds_taxonomy_default_vocabularies() {
  return array(
    'classified_categories' => array(
      'name' => 'Classified Categories',
      'machine_name' => 'classified_categories',
      'description' => 'Provides a list of category options for classified content.',
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
