<?php
/**
 * @file
 * inkshop_views.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function inkshop_views_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'views_block_hashes';
  $strongarm->value = array(
    'fcee2ddca741165a9752f90d7a76a664' => 'commerce_backoffice_orders-block_1',
    '12ee390cd50dc30503906cc11aa2f55a' => 'display_products-search_api_views_facets_block_1',
    '5d696ecceabf7d4636f78d68c7c84361' => 'display_products-search_api_views_facets_block_2',
    '78e73a6d90260821c9380e14fef3bcdb' => 'display_products-search_api_views_facets_block_3',
    '845f8f160dbc83c68cd4145cd492da60' => 'display_products-aehnliche_produkte_auto',
    '49752f912f8ab9a08d50b004eeffd55d' => 'commerce_backoffice_user_orders-block_1',
    '2f6f3c35f374c997637f644b2e123ac1' => 'produkte-search_api_views_facets_block_1',
    'f3f98e42ba2d4d3103b95e9199cf48fe' => 'commerce_reports_customers-chart_revenue',
    'c4b82619a01ea13a002f9a56cf7aa611' => 'commerce_reports_customers-chart_orders',
    '73bf5fb8a97d85b206f0ac7edff0a9aa' => 'commerce_message_messages-block_1',
    '2eba56fe490c65995c46163c8a2370ab' => 'commerce_reports_products-chart_revenue',
    '31eccd6666389cf554f290e91ef9848a' => 'commerce_reports_products-chart_quantity',
    'c143b512518b3a7c6b30be35b192abbf' => 'commerce_reports_customer_map-billing_profiles_block',
    '5efb68bd488bc78cae2aac5b8ddc29a6' => 'commerce_reports_customer_map-shipping_profiles_block',
    'e5caeb6059c44dfa5008c4ff7c6f04be' => 'commerce_reports_customer_statistics-customer_statistics',
    'cc437fbe6b867b448dc946fd925800a3' => 'commerce_reports_sales-chart_year',
    '1127e4706efe2c1eb8537a65a644e572' => 'commerce_reports_sales-chart_month',
    'd70fc459675538d56c73a9f90574211a' => 'commerce_reports_sales-chart_week',
    'ff7824695a12b49a79aee7d394cbd917' => 'commerce_reports_sales_overview-today',
    '1a260a710ed0ccc9e8175e7301e597fe' => 'commerce_reports_sales_overview-yesterday',
    '724c01e6b3c93b66c793ff63f7402697' => 'commerce_reports_sales_overview-month',
  );
  $export['views_block_hashes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'views_ui_always_live_preview';
  $strongarm->value = 1;
  $export['views_ui_always_live_preview'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'views_ui_show_advanced_help_warning';
  $strongarm->value = 0;
  $export['views_ui_show_advanced_help_warning'] = $strongarm;

  return $export;
}
