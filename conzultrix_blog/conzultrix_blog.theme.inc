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