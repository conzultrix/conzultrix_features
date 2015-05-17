<?php

function conzultrix_business_preprocess_node(&$vars) {
  $node = $vars['node'];
  
  if ($node->type == 'business') {
    $short_title = $node->field_short_title[LANGUAGE_NONE][0]['value'];
    $vars['formatted_short_title'] = '<h2>' . l($short_title , 'node/' . $node->nid) . '</h2>';
  }
}