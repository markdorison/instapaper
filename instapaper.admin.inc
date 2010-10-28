<?php
// $Id$

/**
 * @file
 * Provides the administration settings for Instapaper.
 */

/**
 * Menu callback; Settings administration.
 */

function instapaper_admin_settings() {
  $form['instapaper_teaser'] = array(
    '#type' => 'checkbox',
    '#title' => t('Display in teaser view'),
    '#description' => t('If enabled, the Instapaper links will appear in node teasers. If disabled, they will only appear on the full node page.'),
    '#default_value' => variable_get('instapaper_teaser', 1),
  );
  return system_settings_form($form);
}