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
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function conzultrix_basic_image_default_styles() {
  $styles = array();

  // Exported image style: blog_teaser.
  $styles['blog_teaser'] = array(
    'label' => 'Blog Teaser',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 200,
          'height' => 160,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
