<?php

function conzultrix_blog_preprocess_node(&$vars) {
  $node = $vars['node'];
  
  if ($node->type == 'blog') {
    $created = date('d F Y', $node->created);
    $author = theme('username', array('account' => user_load($node->uid)));
    $comment_text = $node->comment_count > 1 ? 'comments' : 'comment';
    if ($node->comment_count > 0) {
      $comment_info = ' | <span class="comment-count">' . $node->comment_count . ' ' . $comment_text . '</span>';
    }
    else {
      $comment_info = NULL;
    }
    $vars['blog_meta'] = '<div class="blog-meta"><span class="date">' . $created . '</span> | <span class="blog-author">by ' . $author . '</span>' . $comment_info . '</div>';
  }
}

function conzultrix_blog_form_comment_form_alter(&$form, &$form_state, &$form_id) {
  $form['comment_body']['#after_build'][] = 'configure_comment_form';
}

function configure_comment_form(&$form) {
  unset($form[LANGUAGE_NONE][0]['format']);
  return $form;
}