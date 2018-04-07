<?php
/**
 * @file
 * fezziwig_base_config.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function fezziwig_base_config_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'file';
  $panelizer->panelizer_key = 'image';
  $panelizer->access = array();
  $panelizer->view_mode = 'colorbox';
  $panelizer->name = 'file:image:default:colorbox';
  $panelizer->css_id = '';
  $panelizer->css_class = '';
  $panelizer->css = '';
  $panelizer->no_blocks = FALSE;
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'fa943640-97ad-47a7-a853-78f02f72ad16';
  $display->storage_type = 'panelizer_default';
  $display->storage_id = 'file:image:default:colorbox';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-85b5cc36-e781-420b-9655-a2cbddfc7ac2';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'file:field_pages';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'hidden',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '85b5cc36-e781-420b-9655-a2cbddfc7ac2';
  $display->content['new-85b5cc36-e781-420b-9655-a2cbddfc7ac2'] = $pane;
  $display->panels['middle'][0] = 'new-85b5cc36-e781-420b-9655-a2cbddfc7ac2';
  $pane = new stdClass();
  $pane->pid = 'new-8fdfd707-0c26-45c9-9fc3-16de6766478c';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'file:field_caption';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'hidden',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '8fdfd707-0c26-45c9-9fc3-16de6766478c';
  $display->content['new-8fdfd707-0c26-45c9-9fc3-16de6766478c'] = $pane;
  $display->panels['middle'][1] = 'new-8fdfd707-0c26-45c9-9fc3-16de6766478c';
  $pane = new stdClass();
  $pane->pid = 'new-c5922fdb-84ec-4108-ba6f-f885e67821e0';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'file:field_file_image_title_text';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'hidden',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'c5922fdb-84ec-4108-ba6f-f885e67821e0';
  $display->content['new-c5922fdb-84ec-4108-ba6f-f885e67821e0'] = $pane;
  $display->panels['middle'][2] = 'new-c5922fdb-84ec-4108-ba6f-f885e67821e0';
  $pane = new stdClass();
  $pane->pid = 'new-9a2d7cc2-fd63-4e43-91da-6634123524c1';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'file:field_file_image_alt_text';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'hidden',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '9a2d7cc2-fd63-4e43-91da-6634123524c1';
  $display->content['new-9a2d7cc2-fd63-4e43-91da-6634123524c1'] = $pane;
  $display->panels['middle'][3] = 'new-9a2d7cc2-fd63-4e43-91da-6634123524c1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-85b5cc36-e781-420b-9655-a2cbddfc7ac2';
  $panelizer->display = $display;
  $export['file:image:default:colorbox'] = $panelizer;

  return $export;
}
