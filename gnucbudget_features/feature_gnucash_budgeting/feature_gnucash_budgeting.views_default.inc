<?php
/**
 * @file
 * feature_gnucash_budgeting.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function feature_gnucash_budgeting_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'gnucbudget_budget_accounts_to_guids_map';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'eck_account';
  $view->human_name = 'gnucbudget_budget_accounts_to_guids_map';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_gnucash_account_target_id']['id'] = 'field_gnucash_account_target_id';
  $handler->display->display_options['relationships']['field_gnucash_account_target_id']['table'] = 'field_data_field_gnucash_account';
  $handler->display->display_options['relationships']['field_gnucash_account_target_id']['field'] = 'field_gnucash_account_target_id';
  $handler->display->display_options['relationships']['field_gnucash_account_target_id']['required'] = TRUE;
  /* Field: Account: Id */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'eck_account';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  /* Field: Account: Id */
  $handler->display->display_options['fields']['id_1']['id'] = 'id_1';
  $handler->display->display_options['fields']['id_1']['table'] = 'eck_account';
  $handler->display->display_options['fields']['id_1']['field'] = 'id';
  $handler->display->display_options['fields']['id_1']['label'] = '';
  $handler->display->display_options['fields']['id_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['id_1']['separator'] = '';
  /* Field: Field: GnuCash guid */
  $handler->display->display_options['fields']['field_gnucash_guid']['id'] = 'field_gnucash_guid';
  $handler->display->display_options['fields']['field_gnucash_guid']['table'] = 'field_data_field_gnucash_guid';
  $handler->display->display_options['fields']['field_gnucash_guid']['field'] = 'field_gnucash_guid';
  $handler->display->display_options['fields']['field_gnucash_guid']['relationship'] = 'field_gnucash_account_target_id';
  $handler->display->display_options['fields']['field_gnucash_guid']['label'] = '';
  $handler->display->display_options['fields']['field_gnucash_guid']['element_label_colon'] = FALSE;
  /* Filter criterion: Account: Type (field_type) */
  $handler->display->display_options['filters']['field_type_value']['id'] = 'field_type_value';
  $handler->display->display_options['filters']['field_type_value']['table'] = 'field_data_field_type';
  $handler->display->display_options['filters']['field_type_value']['field'] = 'field_type_value';
  $handler->display->display_options['filters']['field_type_value']['value'] = array(
    'budget' => 'budget',
  );
  $export['gnucbudget_budget_accounts_to_guids_map'] = $view;

  return $export;
}
