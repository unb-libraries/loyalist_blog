<?php
/**
 * @file
 * loyalist_blog.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function loyalist_blog_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_blog:atlantic-loyalist-connections.
  $menu_links['main-menu_blog:atlantic-loyalist-connections'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'atlantic-loyalist-connections',
    'router_path' => 'atlantic-loyalist-connections',
    'link_title' => 'Blog',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_blog:atlantic-loyalist-connections',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 25,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Blog');

  return $menu_links;
}
