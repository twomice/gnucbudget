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
  $view->name = 'gnucbudget_accounts';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'eck_account';
  $view->human_name = 'gnucbudget_accounts';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Accounts';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '80';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'id' => 'id',
    'edit_link' => 'edit_link',
    'title' => 'title',
    'field_gnucash_account' => 'field_gnucash_account',
    'field_type' => 'field_type',
    'field_allotment' => 'field_allotment',
    'field_reset_frequency_months' => 'field_reset_frequency_months',
    'field_reset_factor' => 'field_reset_factor',
    'field_allot_from' => 'field_allot_from',
    'field_is_reserved' => 'field_is_reserved',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'id' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_link' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_gnucash_account' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_allotment' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_reset_frequency_months' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_reset_factor' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_allot_from' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_is_reserved' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Account: Id */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'eck_account';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  /* Field: Account: Edit link */
  $handler->display->display_options['fields']['edit_link']['id'] = 'edit_link';
  $handler->display->display_options['fields']['edit_link']['table'] = 'eck_account';
  $handler->display->display_options['fields']['edit_link']['field'] = 'edit_link';
  /* Field: Account: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'eck_account';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '/account/account/[id]';
  /* Field: Account: GnuCash account */
  $handler->display->display_options['fields']['field_gnucash_account']['id'] = 'field_gnucash_account';
  $handler->display->display_options['fields']['field_gnucash_account']['table'] = 'field_data_field_gnucash_account';
  $handler->display->display_options['fields']['field_gnucash_account']['field'] = 'field_gnucash_account';
  $handler->display->display_options['fields']['field_gnucash_account']['settings'] = array(
    'link' => 0,
  );
  /* Field: Account: Type */
  $handler->display->display_options['fields']['field_type']['id'] = 'field_type';
  $handler->display->display_options['fields']['field_type']['table'] = 'field_data_field_type';
  $handler->display->display_options['fields']['field_type']['field'] = 'field_type';
  /* Field: Account: Allotment */
  $handler->display->display_options['fields']['field_allotment']['id'] = 'field_allotment';
  $handler->display->display_options['fields']['field_allotment']['table'] = 'field_data_field_allotment';
  $handler->display->display_options['fields']['field_allotment']['field'] = 'field_allotment';
  $handler->display->display_options['fields']['field_allotment']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Account: Reset frequency (months) */
  $handler->display->display_options['fields']['field_reset_frequency_months']['id'] = 'field_reset_frequency_months';
  $handler->display->display_options['fields']['field_reset_frequency_months']['table'] = 'field_data_field_reset_frequency_months';
  $handler->display->display_options['fields']['field_reset_frequency_months']['field'] = 'field_reset_frequency_months';
  $handler->display->display_options['fields']['field_reset_frequency_months']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Account: Reset factor */
  $handler->display->display_options['fields']['field_reset_factor']['id'] = 'field_reset_factor';
  $handler->display->display_options['fields']['field_reset_factor']['table'] = 'field_data_field_reset_factor';
  $handler->display->display_options['fields']['field_reset_factor']['field'] = 'field_reset_factor';
  $handler->display->display_options['fields']['field_reset_factor']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Account: Allot from */
  $handler->display->display_options['fields']['field_allot_from']['id'] = 'field_allot_from';
  $handler->display->display_options['fields']['field_allot_from']['table'] = 'field_data_field_allot_from';
  $handler->display->display_options['fields']['field_allot_from']['field'] = 'field_allot_from';
  $handler->display->display_options['fields']['field_allot_from']['settings'] = array(
    'link' => 0,
  );
  /* Field: Account: Reserved */
  $handler->display->display_options['fields']['field_is_reserved']['id'] = 'field_is_reserved';
  $handler->display->display_options['fields']['field_is_reserved']['table'] = 'field_data_field_is_reserved';
  $handler->display->display_options['fields']['field_is_reserved']['field'] = 'field_is_reserved';
  /* Sort criterion: Account: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'eck_account';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Account: account type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_account';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'account' => 'account',
  );

  /* Display: Accounts */
  $handler = $view->new_display('page', 'Accounts', 'page');
  $handler->display->display_options['path'] = 'gnucbudget/accounts/list';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'Accounts';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Balances-Current */
  $handler = $view->new_display('page', 'Balances-Current', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Account Balances: Current';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_allotment' => 'field_allotment',
    'field_ending_balance' => 'field_ending_balance',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_allotment' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ending_balance' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_account_balance']['id'] = 'reverse_field_account_balance';
  $handler->display->display_options['relationships']['reverse_field_account_balance']['table'] = 'eck_account';
  $handler->display->display_options['relationships']['reverse_field_account_balance']['field'] = 'reverse_field_account_balance';
  $handler->display->display_options['relationships']['reverse_field_account_balance']['label'] = 'Balance';
  $handler->display->display_options['relationships']['reverse_field_account_balance']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Account: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'eck_account';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['path'] = '/account/account/[id]';
  /* Field: Account: Allotment */
  $handler->display->display_options['fields']['field_allotment']['id'] = 'field_allotment';
  $handler->display->display_options['fields']['field_allotment']['table'] = 'field_data_field_allotment';
  $handler->display->display_options['fields']['field_allotment']['field'] = 'field_allotment';
  $handler->display->display_options['fields']['field_allotment']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Balance: Ending balance */
  $handler->display->display_options['fields']['field_ending_balance']['id'] = 'field_ending_balance';
  $handler->display->display_options['fields']['field_ending_balance']['table'] = 'field_data_field_ending_balance';
  $handler->display->display_options['fields']['field_ending_balance']['field'] = 'field_ending_balance';
  $handler->display->display_options['fields']['field_ending_balance']['relationship'] = 'reverse_field_account_balance';
  $handler->display->display_options['fields']['field_ending_balance']['label'] = 'Remaining balance';
  $handler->display->display_options['fields']['field_ending_balance']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Account: account type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_account';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'account' => 'account',
  );
  /* Filter criterion: Balance: Month (field_month) */
  $handler->display->display_options['filters']['field_month_value']['id'] = 'field_month_value';
  $handler->display->display_options['filters']['field_month_value']['table'] = 'field_data_field_month';
  $handler->display->display_options['filters']['field_month_value']['field'] = 'field_month_value';
  $handler->display->display_options['filters']['field_month_value']['relationship'] = 'reverse_field_account_balance';
  $handler->display->display_options['filters']['field_month_value']['expose']['operator_id'] = 'field_month_value_op';
  $handler->display->display_options['filters']['field_month_value']['expose']['label'] = 'Month (field_month)';
  $handler->display->display_options['filters']['field_month_value']['expose']['operator'] = 'field_month_value_op';
  $handler->display->display_options['filters']['field_month_value']['expose']['identifier'] = 'field_month_value';
  $handler->display->display_options['filters']['field_month_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_month_value']['granularity'] = 'month';
  $handler->display->display_options['filters']['field_month_value']['default_date'] = 'now';
  $handler->display->display_options['path'] = 'gnucbudget/accounts/balances';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Balances';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Balances-Historical */
  $handler = $view->new_display('page', 'Balances-Historical', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Account Balances: History';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_month' => 'field_month',
    'field_starting_balance' => 'field_starting_balance',
    'field_ending_balance' => 'field_ending_balance',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_month' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_starting_balance' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ending_balance' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_account_balance']['id'] = 'reverse_field_account_balance';
  $handler->display->display_options['relationships']['reverse_field_account_balance']['table'] = 'eck_account';
  $handler->display->display_options['relationships']['reverse_field_account_balance']['field'] = 'reverse_field_account_balance';
  $handler->display->display_options['relationships']['reverse_field_account_balance']['label'] = 'Balance';
  $handler->display->display_options['relationships']['reverse_field_account_balance']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Account: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'eck_account';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Balance: Month */
  $handler->display->display_options['fields']['field_month']['id'] = 'field_month';
  $handler->display->display_options['fields']['field_month']['table'] = 'field_data_field_month';
  $handler->display->display_options['fields']['field_month']['field'] = 'field_month';
  $handler->display->display_options['fields']['field_month']['relationship'] = 'reverse_field_account_balance';
  $handler->display->display_options['fields']['field_month']['settings'] = array(
    'format_type' => 'short_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Balance: Starting balance */
  $handler->display->display_options['fields']['field_starting_balance']['id'] = 'field_starting_balance';
  $handler->display->display_options['fields']['field_starting_balance']['table'] = 'field_data_field_starting_balance';
  $handler->display->display_options['fields']['field_starting_balance']['field'] = 'field_starting_balance';
  $handler->display->display_options['fields']['field_starting_balance']['relationship'] = 'reverse_field_account_balance';
  $handler->display->display_options['fields']['field_starting_balance']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Balance: Ending balance */
  $handler->display->display_options['fields']['field_ending_balance']['id'] = 'field_ending_balance';
  $handler->display->display_options['fields']['field_ending_balance']['table'] = 'field_data_field_ending_balance';
  $handler->display->display_options['fields']['field_ending_balance']['field'] = 'field_ending_balance';
  $handler->display->display_options['fields']['field_ending_balance']['relationship'] = 'reverse_field_account_balance';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Account: account type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_account';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'account' => 'account',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Balance: Account (field_account) */
  $handler->display->display_options['filters']['field_account_target_id']['id'] = 'field_account_target_id';
  $handler->display->display_options['filters']['field_account_target_id']['table'] = 'field_data_field_account';
  $handler->display->display_options['filters']['field_account_target_id']['field'] = 'field_account_target_id';
  $handler->display->display_options['filters']['field_account_target_id']['relationship'] = 'reverse_field_account_balance';
  $handler->display->display_options['filters']['field_account_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_account_target_id']['expose']['operator_id'] = 'field_account_target_id_op';
  $handler->display->display_options['filters']['field_account_target_id']['expose']['label'] = 'Account (field_account)';
  $handler->display->display_options['filters']['field_account_target_id']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_account_target_id']['expose']['operator'] = 'field_account_target_id_op';
  $handler->display->display_options['filters']['field_account_target_id']['expose']['identifier'] = 'field_account_target_id';
  $handler->display->display_options['filters']['field_account_target_id']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_account_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Balance: Month (field_month) */
  $handler->display->display_options['filters']['field_month_value']['id'] = 'field_month_value';
  $handler->display->display_options['filters']['field_month_value']['table'] = 'field_data_field_month';
  $handler->display->display_options['filters']['field_month_value']['field'] = 'field_month_value';
  $handler->display->display_options['filters']['field_month_value']['relationship'] = 'reverse_field_account_balance';
  $handler->display->display_options['filters']['field_month_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_month_value']['expose']['operator_id'] = 'field_month_value_op';
  $handler->display->display_options['filters']['field_month_value']['expose']['label'] = 'Month (field_month)';
  $handler->display->display_options['filters']['field_month_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_month_value']['expose']['operator'] = 'field_month_value_op';
  $handler->display->display_options['filters']['field_month_value']['expose']['identifier'] = 'field_month_value';
  $handler->display->display_options['filters']['field_month_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_month_value']['granularity'] = 'month';
  $handler->display->display_options['path'] = 'gnucbudget/accounts/balances-history';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'HIstory';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Parent */
  $handler = $view->new_display('page', 'Parent', 'page_3');
  $handler->display->display_options['path'] = 'gnucbudget/accounts';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Accounts';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Balances-Public */
  $handler = $view->new_display('page', 'Balances-Public', 'page_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Account Balances: Current';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_ending_balance' => 'field_ending_balance',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ending_balance' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_account_balance']['id'] = 'reverse_field_account_balance';
  $handler->display->display_options['relationships']['reverse_field_account_balance']['table'] = 'eck_account';
  $handler->display->display_options['relationships']['reverse_field_account_balance']['field'] = 'reverse_field_account_balance';
  $handler->display->display_options['relationships']['reverse_field_account_balance']['label'] = 'Balance';
  $handler->display->display_options['relationships']['reverse_field_account_balance']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Account: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'eck_account';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['path'] = '/account/account/[id]';
  /* Field: Balance: Ending balance */
  $handler->display->display_options['fields']['field_ending_balance']['id'] = 'field_ending_balance';
  $handler->display->display_options['fields']['field_ending_balance']['table'] = 'field_data_field_ending_balance';
  $handler->display->display_options['fields']['field_ending_balance']['field'] = 'field_ending_balance';
  $handler->display->display_options['fields']['field_ending_balance']['relationship'] = 'reverse_field_account_balance';
  $handler->display->display_options['fields']['field_ending_balance']['label'] = 'Remaining balance';
  $handler->display->display_options['fields']['field_ending_balance']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Account: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'eck_account';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Account: account type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_account';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'account' => 'account',
  );
  /* Filter criterion: Balance: Month (field_month) */
  $handler->display->display_options['filters']['field_month_value']['id'] = 'field_month_value';
  $handler->display->display_options['filters']['field_month_value']['table'] = 'field_data_field_month';
  $handler->display->display_options['filters']['field_month_value']['field'] = 'field_month_value';
  $handler->display->display_options['filters']['field_month_value']['relationship'] = 'reverse_field_account_balance';
  $handler->display->display_options['filters']['field_month_value']['expose']['operator_id'] = 'field_month_value_op';
  $handler->display->display_options['filters']['field_month_value']['expose']['label'] = 'Month (field_month)';
  $handler->display->display_options['filters']['field_month_value']['expose']['operator'] = 'field_month_value_op';
  $handler->display->display_options['filters']['field_month_value']['expose']['identifier'] = 'field_month_value';
  $handler->display->display_options['filters']['field_month_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_month_value']['granularity'] = 'month';
  $handler->display->display_options['filters']['field_month_value']['default_date'] = 'now';
  $handler->display->display_options['path'] = 'gnucbudget/accounts/balances/public';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Balances';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['gnucbudget_accounts'] = $view;

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

  $view = new view();
  $view->name = 'gnucbudget_transactions';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'eck_transaction';
  $view->human_name = 'gnucbudget_transactions';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'All transactions';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '80';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_transaction_type' => 'field_transaction_type',
    'field_post_date' => 'field_post_date',
    'field_from' => 'field_from',
    'field_to' => 'field_to',
    'field_amount' => 'field_amount',
    'id' => 'id',
    'field_description' => 'field_description',
  );
  $handler->display->display_options['style_options']['default'] = 'field_post_date';
  $handler->display->display_options['style_options']['info'] = array(
    'field_transaction_type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_post_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_from' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_to' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_amount' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'id' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_description' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_from_target_id']['id'] = 'field_from_target_id';
  $handler->display->display_options['relationships']['field_from_target_id']['table'] = 'field_data_field_from';
  $handler->display->display_options['relationships']['field_from_target_id']['field'] = 'field_from_target_id';
  $handler->display->display_options['relationships']['field_from_target_id']['label'] = 'Account - from';
  $handler->display->display_options['relationships']['field_from_target_id']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_to_target_id']['id'] = 'field_to_target_id';
  $handler->display->display_options['relationships']['field_to_target_id']['table'] = 'field_data_field_to';
  $handler->display->display_options['relationships']['field_to_target_id']['field'] = 'field_to_target_id';
  $handler->display->display_options['relationships']['field_to_target_id']['label'] = 'Account - to';
  /* Field: Transaction: Transaction type */
  $handler->display->display_options['fields']['field_transaction_type']['id'] = 'field_transaction_type';
  $handler->display->display_options['fields']['field_transaction_type']['table'] = 'field_data_field_transaction_type';
  $handler->display->display_options['fields']['field_transaction_type']['field'] = 'field_transaction_type';
  /* Field: Transaction: Post date */
  $handler->display->display_options['fields']['field_post_date']['id'] = 'field_post_date';
  $handler->display->display_options['fields']['field_post_date']['table'] = 'field_data_field_post_date';
  $handler->display->display_options['fields']['field_post_date']['field'] = 'field_post_date';
  $handler->display->display_options['fields']['field_post_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_post_date']['settings'] = array(
    'format_type' => 'short_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Transaction: From */
  $handler->display->display_options['fields']['field_from']['id'] = 'field_from';
  $handler->display->display_options['fields']['field_from']['table'] = 'field_data_field_from';
  $handler->display->display_options['fields']['field_from']['field'] = 'field_from';
  $handler->display->display_options['fields']['field_from']['settings'] = array(
    'link' => 0,
  );
  /* Field: Transaction: To */
  $handler->display->display_options['fields']['field_to']['id'] = 'field_to';
  $handler->display->display_options['fields']['field_to']['table'] = 'field_data_field_to';
  $handler->display->display_options['fields']['field_to']['field'] = 'field_to';
  $handler->display->display_options['fields']['field_to']['settings'] = array(
    'link' => 0,
  );
  /* Field: Transaction: Amount */
  $handler->display->display_options['fields']['field_amount']['id'] = 'field_amount';
  $handler->display->display_options['fields']['field_amount']['table'] = 'field_data_field_amount';
  $handler->display->display_options['fields']['field_amount']['field'] = 'field_amount';
  $handler->display->display_options['fields']['field_amount']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Transaction: Description */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  /* Field: Transaction: Id */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'eck_transaction';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['id']['separator'] = '';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  /* Filter criterion: Transaction: transaction type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_transaction';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'transaction' => 'transaction',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Transaction: Amount (field_amount) */
  $handler->display->display_options['filters']['field_amount_value']['id'] = 'field_amount_value';
  $handler->display->display_options['filters']['field_amount_value']['table'] = 'field_data_field_amount';
  $handler->display->display_options['filters']['field_amount_value']['field'] = 'field_amount_value';
  $handler->display->display_options['filters']['field_amount_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_amount_value']['group'] = 1;
  $handler->display->display_options['filters']['field_amount_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_amount_value']['expose']['operator_id'] = 'field_amount_value_op';
  $handler->display->display_options['filters']['field_amount_value']['expose']['label'] = 'Amount';
  $handler->display->display_options['filters']['field_amount_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_amount_value']['expose']['operator'] = 'field_amount_value_op';
  $handler->display->display_options['filters']['field_amount_value']['expose']['identifier'] = 'field_amount_value';
  $handler->display->display_options['filters']['field_amount_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Transaction: Post date (field_post_date) */
  $handler->display->display_options['filters']['field_post_date_value']['id'] = 'field_post_date_value';
  $handler->display->display_options['filters']['field_post_date_value']['table'] = 'field_data_field_post_date';
  $handler->display->display_options['filters']['field_post_date_value']['field'] = 'field_post_date_value';
  $handler->display->display_options['filters']['field_post_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_post_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_post_date_value']['expose']['operator_id'] = 'field_post_date_value_op';
  $handler->display->display_options['filters']['field_post_date_value']['expose']['label'] = 'Post date';
  $handler->display->display_options['filters']['field_post_date_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_post_date_value']['expose']['operator'] = 'field_post_date_value_op';
  $handler->display->display_options['filters']['field_post_date_value']['expose']['identifier'] = 'field_post_date_value';
  $handler->display->display_options['filters']['field_post_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Transaction: Transaction type (field_transaction_type) */
  $handler->display->display_options['filters']['field_transaction_type_value']['id'] = 'field_transaction_type_value';
  $handler->display->display_options['filters']['field_transaction_type_value']['table'] = 'field_data_field_transaction_type';
  $handler->display->display_options['filters']['field_transaction_type_value']['field'] = 'field_transaction_type_value';
  $handler->display->display_options['filters']['field_transaction_type_value']['group'] = 1;
  $handler->display->display_options['filters']['field_transaction_type_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_transaction_type_value']['expose']['operator_id'] = 'field_transaction_type_value_op';
  $handler->display->display_options['filters']['field_transaction_type_value']['expose']['label'] = 'Transaction type (field_transaction_type)';
  $handler->display->display_options['filters']['field_transaction_type_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_transaction_type_value']['expose']['operator'] = 'field_transaction_type_value_op';
  $handler->display->display_options['filters']['field_transaction_type_value']['expose']['identifier'] = 'field_transaction_type_value';
  $handler->display->display_options['filters']['field_transaction_type_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_transaction_type_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Transaction: From (field_from) */
  $handler->display->display_options['filters']['field_from_target_id']['id'] = 'field_from_target_id';
  $handler->display->display_options['filters']['field_from_target_id']['table'] = 'field_data_field_from';
  $handler->display->display_options['filters']['field_from_target_id']['field'] = 'field_from_target_id';
  $handler->display->display_options['filters']['field_from_target_id']['group'] = 2;
  $handler->display->display_options['filters']['field_from_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_from_target_id']['expose']['operator_id'] = 'field_from_target_id_op';
  $handler->display->display_options['filters']['field_from_target_id']['expose']['label'] = 'From (field_from)';
  $handler->display->display_options['filters']['field_from_target_id']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_from_target_id']['expose']['operator'] = 'field_from_target_id_op';
  $handler->display->display_options['filters']['field_from_target_id']['expose']['identifier'] = 'field_from_target_id';
  $handler->display->display_options['filters']['field_from_target_id']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_from_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Transaction: To (field_to) */
  $handler->display->display_options['filters']['field_to_target_id']['id'] = 'field_to_target_id';
  $handler->display->display_options['filters']['field_to_target_id']['table'] = 'field_data_field_to';
  $handler->display->display_options['filters']['field_to_target_id']['field'] = 'field_to_target_id';
  $handler->display->display_options['filters']['field_to_target_id']['group'] = 2;
  $handler->display->display_options['filters']['field_to_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_to_target_id']['expose']['operator_id'] = 'field_to_target_id_op';
  $handler->display->display_options['filters']['field_to_target_id']['expose']['label'] = 'To (field_to)';
  $handler->display->display_options['filters']['field_to_target_id']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_to_target_id']['expose']['operator'] = 'field_to_target_id_op';
  $handler->display->display_options['filters']['field_to_target_id']['expose']['identifier'] = 'field_to_target_id';
  $handler->display->display_options['filters']['field_to_target_id']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_to_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'gnucbudget/transactions';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Transactions';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['gnucbudget_transactions'] = $view;

  return $export;
}
