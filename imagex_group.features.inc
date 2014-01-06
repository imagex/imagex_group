<?php
/**
 * @file
 * imagex_group.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function imagex_group_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function imagex_group_node_info() {
  $items = array(
    'group' => array(
      'name' => t('Group'),
      'base' => 'node_content',
      'description' => t('Use <em>group</em> to create a new community around a particular topic.'),
      'has_title' => '1',
      'title_label' => t('Group Title'),
      'help' => '',
    ),
  );

  features_alter_code('node', $items);

  return $items;
}
