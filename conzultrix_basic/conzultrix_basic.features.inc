<?php
/**
 * @file
 * conzultrix_basic.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function conzultrix_basic_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}
