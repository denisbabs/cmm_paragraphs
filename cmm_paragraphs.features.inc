<?php
/**
 * @file
 * cmm_paragraphs.features.inc
 */

/**
 * Implements hook_paragraphs_info().
 */
function cmm_paragraphs_paragraphs_info() {
  $items = array(
    'card' => array(
      'name' => 'Card',
      'bundle' => 'card',
      'locked' => '1',
    ),
    'card_group' => array(
      'name' => 'Card Group',
      'bundle' => 'card_group',
      'locked' => '1',
    ),
    'heading' => array(
      'name' => 'Heading',
      'bundle' => 'heading',
      'locked' => '1',
    ),
    'image' => array(
      'name' => 'Image',
      'bundle' => 'image',
      'locked' => '1',
    ),
    'link' => array(
      'name' => 'Link',
      'bundle' => 'link',
      'locked' => '1',
    ),
    'slide' => array(
      'name' => 'Slide',
      'bundle' => 'slide',
      'locked' => '1',
    ),
    'text' => array(
      'name' => 'Text',
      'bundle' => 'text',
      'locked' => '1',
    ),
  );
  return $items;
}
