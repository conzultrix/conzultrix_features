<?php
/**
 * @file
 * conzultrix_business.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function conzultrix_business_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function conzultrix_business_node_info() {
  $items = array(
    'business' => array(
      'name' => t('Core Business'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}