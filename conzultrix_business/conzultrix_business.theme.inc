<?php

function conzultrix_business_preprocess_node(&$vars) {
  $node = $vars['node'];
  
  if ($node->type == 'business') {
    if (!empty($node->field_short_title)){
      $short_title = $node->field_short_title[LANGUAGE_NONE][0]['value'];
    } else {
      $short_title = $node->title;
    }
    
    $vars['formatted_short_title'] = '<h2>' . l($short_title , 'node/' . $node->nid) . '</h2>';
  }
}