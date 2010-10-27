<?php
// $Id$

/**
 * @file instapaper.admin.inc
 * Provides the administration settings for Instapaper.
 */
 
/**
 * Menu callback; Settings administration.
 */
 
function instapaper_admin_settings() {
  $form['instapaper_instapaper_this_node_types'] = array(
    '#type' => 'checkboxes',
    '#title' => t('Node types'),
    '#description' => t('Choose which node types to display the instapaper button on.'),
    '#default_value' => variable_get('instapaper_instapaper_this_node_types', array()),
    '#options' => node_get_types('names'),
  );
  
  $form['instapaper_teaser'] = array(
    '#type' => 'checkbox',
    '#title' => t('Display in teaser view'),
    '#description' => t('If enabled, the Instapaper links will appear in node teasers. If disabled, they will only appear on the full node page.'),
    '#default_value' => variable_get('instapaper_teaser', 1),
  );
  
  $form['instapaper_instapaper_this_where'] = array(
    '#type' => 'select',
    '#title' => t('Where to display'),
    '#description' => t('Select where you would like the instapaper link to appear.'),
    '#default_value' => variable_get('instapaper_instapaper_this_where', 'links'),
    '#options'=> array(
      'links' => t('Links'),
      'nodes' => t('Nodes'),
    ),
  );
  
  $form['instapaper_instapaper_weight'] = array(
    '#type' => 'weight',
    '#delta' => 10,
    '#description' => t('Only applies when node type display is selected.'),
    '#title' => t('Weight'),
    '#default_value' => variable_get('instapaper_instapaper_weight', 0),
  );
  return system_settings_form($form);
}