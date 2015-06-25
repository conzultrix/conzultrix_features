<?php
/**
 * @file
 * conzultrix_business.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function conzultrix_business_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|business|cover';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'business';
  $ds_fieldsetting->view_mode = 'cover';
  $ds_fieldsetting->settings = array(
    'cb_more_link' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'formatted_short_title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|business|cover'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|business|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'business';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'cb_more_link' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'formatted_short_title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|business|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function conzultrix_business_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'cb_more_link';
  $ds_field->label = 'CB More Link';
  $ds_field->field_type = 3;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'business|teaser
business|cover';
  $ds_field->properties = array();
  $export['cb_more_link'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'formatted_short_title';
  $ds_field->label = 'Formatted Short Title';
  $ds_field->field_type = 3;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array();
  $export['formatted_short_title'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function conzultrix_business_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|business|cover';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'business';
  $ds_layout->view_mode = 'cover';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_business_image',
        1 => 'formatted_short_title',
        2 => 'body',
        3 => 'cb_more_link',
      ),
    ),
    'fields' => array(
      'field_business_image' => 'ds_content',
      'formatted_short_title' => 'ds_content',
      'body' => 'ds_content',
      'cb_more_link' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|business|cover'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|business|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'business';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'formatted_short_title',
        1 => 'field_full_image',
        2 => 'body',
        3 => 'cb_more_link',
      ),
    ),
    'fields' => array(
      'formatted_short_title' => 'ds_content',
      'field_full_image' => 'ds_content',
      'body' => 'ds_content',
      'cb_more_link' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|business|teaser'] = $ds_layout;

  return $export;
}
