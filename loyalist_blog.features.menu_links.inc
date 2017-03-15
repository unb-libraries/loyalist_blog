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
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 25,
    'customized' => 1,
  );
  // Exported menu link: navigation_scheduled-posts:admin/config/content/scheduler/list.
  $menu_links['navigation_scheduled-posts:admin/config/content/scheduler/list'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'admin/config/content/scheduler/list',
    'router_path' => 'admin/config/content/scheduler/list',
    'link_title' => 'Scheduled Posts',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'navigation_scheduled-posts:admin/config/content/scheduler/list',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Blog');
  t('Scheduled Posts');

  return $menu_links;
}
