<?php

function conzultrix_business_preprocess_node(&$vars) {
  $node = $vars['node'];
  
  if ($node->type == 'business') {
    
    // Format short title for Core Business teaser.
    if (!empty($node->field_short_title)){
      $short_title = $node->field_short_title[LANGUAGE_NONE][0]['value'];
    } else {
      $short_title = $node->title;
    }
    
    $vars['formatted_short_title'] = '<h2>' . l($short_title , 'node/' . $node->nid) . '</h2>';
    
    // Build more link for Core Business teaser.
    $more_class = !empty($node->field_short_title) ? 'cb-' . strtolower(str_replace(' ', '-', $node->field_short_title[LANGUAGE_NONE][0]['value'])) : 'cb-more-link';
    
    $vars['cb_more_link'] ='<div class="cb-more-link ' .$more_class . '">' . l('Learn more', 'node/' . $node->nid) . '</div>';
  }
}