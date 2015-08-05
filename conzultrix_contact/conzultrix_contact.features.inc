<?php
/**
 * @file
 * conzultrix_contact.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function conzultrix_contact_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}
