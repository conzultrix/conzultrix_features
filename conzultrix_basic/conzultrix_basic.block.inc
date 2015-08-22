<?php
/**
 * @file
 * Code for the Blocks in Basic feature.
 */

/**
 * Implements hook_block_info
 */
function conzultrix_basic_block_info() {
  $blocks['conzultrix_main_menu'] = array(
    'info' => t('Conzultrix Main Menu'),
    'cache' => DRUPAL_NO_CACHE,
    // DRUPAL_CACHE_PER_ROLE will be assumed if not set.
  );
  
  $blocks['copyright'] = array(
    'info' => t('Copyright'),
    'cache' => DRUPAL_NO_CACHE,
  );
  
  return $blocks;
}


/**
 * Implements hook_block_view().
 *
 */
function conzultrix_basic_block_view($delta = '') { 

  $block = array(); 

  switch ($delta) {
    
    case 'conzultrix_main_menu':
      $menu = menu_navigation_links('main-menu');
      $block['subject'] = t('Main Menu');
      $block['content'] = array(
        '#prefix' => '<nav id="main-menu">',
        '#suffix' => '</nav>',
        '#theme' => 'links',
        '#links' => $menu,
        '#attributes' => array(
          'class' => array('main-menu', 'links', 'inline', 'clearfix'),
        ),
      );
      break;
    
    case 'copyright':
      $startyear = 2008;
      $year = date('Y');
      $block['suject'] = t('Copyright');
      $block['content'] = '<div class="copyright">&#169; Copyright '
        . $year
        . ' <a href="http://www.conzultrix.com">Conzultrix</a>. '
        . 'All Rights Reserved'
        . '</div>';
      break;

  }
  return $block;
}
