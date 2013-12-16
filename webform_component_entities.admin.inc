<?php
 
/**
 * Form constructor for the webform_component_entities_settings
 */ 
function webform_component_entities_settings() {
  $form['library'] = array(
    '#title' => t('Library'),
    '#type' => 'fieldset',
    '#collapsible' => TRUE,
    );
  $form['library']['webform_entity_view_path'] = array(
    '#title' => t('View path'),
    '#type' => 'textfield',
    '#description' => 'The path of page that list all webform component entity',
    '#default_value' => variable_get('webform_entity_view_path', 'component-library '),
  ); 
   
  return system_settings_form($form); 

}
 