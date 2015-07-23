<?php

/**
 * Create the user information blcok
 */
function conzultrix_user_user_info_block () {
  // retrive the object of the user being viewed
  
  $output = array();
  
  $user = menu_get_object('user');
  
  // get the user image
    
  if (!empty($user->picture)) {
    $output['image'] = array(
      '#theme' => 'image_style',
      '#path' => $user->picture->uri,
      '#style_name' => 'sidebar',
      '#prefix' => '<div class="user-image profile-image">',
      '#suffix' => '</div>',
    );
  }
  
  // get social network links
  $links = array();
  
  if (!empty($user->field_twitter_url)) {
    $links[] = array(
      'title' => 'Twitter',
      'href' => $user->field_twitter_url[LANGUAGE_NONE][0]['url'],
      'attributes' => array(
        'title' => 'Twitter',
        'class' => array('icon-32', 'icon-twitter-32'),
      ),
    );
  }
  
  if (!empty($user->field_linkedin_url)) {
    $links[] = array(
      'title' => 'LinkedIn',
      'href' => $user->field_linkedin_url[LANGUAGE_NONE][0]['url'],
      'attributes' => array(
        'title' => 'LinkedIn',
        'class' => array('icon-32', 'icon-linkedin-32'),
      ),
    );
  }
  
  if (!empty($user->field_github_url)) {
    $links[] = array(
      'title' => 'Github',
      'href' => $user->field_github_url[LANGUAGE_NONE][0]['url'],
      'attributes' => array(
        'title' => 'Github',
        'class' => array('icon-32', 'icon-github-32'),
      ),
    );
  }
  
  if (!empty($links)) {
    // build a list of the user's social media links
    $output['links'] = array(
      '#theme' => 'links',
      '#links' => $links,
      '#prefix' => '<div class="user-connection-block">',
      '#suffix' => '</div>',
      '#attributes' => array(
        'class' => array('links', 'inline', 'clearfix'),
      ),
    );
  }
  
  return $output;
}