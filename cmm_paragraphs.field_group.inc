<?php
/**
 * @file
 * cmm_paragraphs.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function cmm_paragraphs_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_options|paragraphs_item|card|form';
  $field_group->group_name = 'group_options';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'card';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Options',
    'weight' => '0',
    'children' => array(
      0 => 'field_classy_paragraphs',
      1 => 'field_classy_margin',
      2 => 'field_classy_padding',
      3 => 'field_par_bgimage',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Options',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-options field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_options|paragraphs_item|card|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_options|paragraphs_item|slide|form';
  $field_group->group_name = 'group_options';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'slide';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Options',
    'weight' => '0',
    'children' => array(
      0 => 'field_bg_image',
      1 => 'field_classy_paragraphs',
      2 => 'field_par_bgimage',
      3 => 'group_spacing',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Options',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_options|paragraphs_item|slide|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_spacing|paragraphs_item|slide|form';
  $field_group->group_name = 'group_spacing';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'slide';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_options';
  $field_group->data = array(
    'label' => 'Spacing',
    'weight' => '7',
    'children' => array(
      0 => 'field_classy_margin',
      1 => 'field_classy_padding',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Spacing',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'form-inline',
        'element' => 'div',
        'show_label' => '1',
        'label_element' => 'div',
        'attributes' => '',
      ),
      'formatter' => '',
    ),
  );
  $field_groups['group_spacing|paragraphs_item|slide|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Options');
  t('Spacing');

  return $field_groups;
}
