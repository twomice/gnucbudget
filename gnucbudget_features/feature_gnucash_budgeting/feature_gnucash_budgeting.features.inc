<?php
/**
 * @file
 * feature_gnucash_budgeting.features.inc
 */

/**
 * Implements hook_views_api().
 */
function feature_gnucash_budgeting_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_eck_bundle_info().
 */
function feature_gnucash_budgeting_eck_bundle_info() {
  $items = array(
    'account_account' => array(
      'machine_name' => 'account_account',
      'entity_type' => 'account',
      'name' => 'account',
      'label' => 'Account',
      'config' => array(),
    ),
    'balance_balance' => array(
      'machine_name' => 'balance_balance',
      'entity_type' => 'balance',
      'name' => 'balance',
      'label' => 'Balance',
      'config' => array(),
    ),
    'gnucash_account_gnucash_account' => array(
      'machine_name' => 'gnucash_account_gnucash_account',
      'entity_type' => 'gnucash_account',
      'name' => 'gnucash_account',
      'label' => 'GnuCash account',
      'config' => array(),
    ),
    'transaction_transaction' => array(
      'machine_name' => 'transaction_transaction',
      'entity_type' => 'transaction',
      'name' => 'transaction',
      'label' => 'Transaction',
      'config' => array(),
    ),
  );
  return $items;
}

/**
 * Implements hook_eck_entity_type_info().
 */
function feature_gnucash_budgeting_eck_entity_type_info() {
  $items = array(
    'account' => array(
      'name' => 'account',
      'label' => 'Account',
      'properties' => array(
        'title' => array(
          'label' => 'Title',
          'type' => 'text',
          'behavior' => 'title',
        ),
        'created' => array(
          'label' => 'Created',
          'type' => 'integer',
          'behavior' => 'created',
        ),
        'changed' => array(
          'label' => 'Changed',
          'type' => 'integer',
          'behavior' => 'changed',
        ),
      ),
    ),
    'balance' => array(
      'name' => 'balance',
      'label' => 'Balance',
      'properties' => array(),
    ),
    'gnucash_account' => array(
      'name' => 'gnucash_account',
      'label' => 'GnuCash account',
      'properties' => array(
        'title' => array(
          'label' => 'Title',
          'type' => 'text',
          'behavior' => 'title',
        ),
        'uid' => array(
          'label' => 'Author',
          'type' => 'integer',
          'behavior' => 'author',
        ),
        'created' => array(
          'label' => 'Created',
          'type' => 'integer',
          'behavior' => 'created',
        ),
        'changed' => array(
          'label' => 'Changed',
          'type' => 'integer',
          'behavior' => 'changed',
        ),
      ),
    ),
    'transaction' => array(
      'name' => 'transaction',
      'label' => 'Transaction',
      'properties' => array(
        'uid' => array(
          'label' => 'Author',
          'type' => 'integer',
          'behavior' => 'author',
        ),
        'created' => array(
          'label' => 'Created',
          'type' => 'integer',
          'behavior' => 'created',
        ),
        'changed' => array(
          'label' => 'Changed',
          'type' => 'integer',
          'behavior' => 'changed',
        ),
      ),
    ),
  );
  return $items;
}
