<?php
/**
 * @file
 * loyalist_blog.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function loyalist_blog_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-blog-field_post_categories'.
  $field_instances['node-blog-field_post_categories'] = array(
    'bundle' => 'blog',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Multiple category terms may be entered as a comma-separated list.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
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
    'field_name' => 'field_post_categories',
    'label' => 'Post categories',
    'readmore_behaviour' => 'default',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Multiple category terms may be entered as a comma-separated list.');
  t('Post categories');

  return $field_instances;
}
