<?php
/**
 * @file
 * cmm_paragraphs.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cmm_paragraphs_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

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
    'text' => array(
      'name' => 'Text',
      'bundle' => 'text',
      'locked' => '1',
    ),
  );
  return $items;
}
