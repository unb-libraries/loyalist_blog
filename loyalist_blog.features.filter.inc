<?php
/**
 * @file
 * loyalist_blog.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function loyalist_blog_filter_default_formats() {
  $formats = array();

  // Exported format: WYSIWYG.
  $formats['wysiwyg'] = array(
    'format' => 'wysiwyg',
    'name' => 'WYSIWYG',
    'cache' => 1,
    'status' => 1,
    'weight' => -10,
    'filters' => array(
      'filter_url' => array(
        'weight' => -50,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_autop' => array(
        'weight' => -49,
        'status' => 1,
        'settings' => array(),
      ),
      'media_filter' => array(
        'weight' => -48,
        'status' => 1,
        'settings' => array(),
      ),
      'image_resize_filter' => array(
        'weight' => -47,
        'status' => 1,
        'settings' => array(
          'link' => 0,
          'link_class' => '',
          'link_rel' => '',
          'image_locations' => array(
            'local' => 'local',
            'remote' => 0,
          ),
        ),
      ),
      'filter_htmlcorrector' => array(
        'weight' => -46,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
