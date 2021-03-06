<?php
/**
 * @file
 * inkshop_views.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function inkshop_views_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-845f8f160dbc83c68cd4145cd492da60'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '845f8f160dbc83c68cd4145cd492da60',
    'icon' => 'a:2:{s:4:"icon";s:0:"";s:8:"position";s:12:"title_before";}',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'produkt/*',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => -37,
      ),
      'inkshop' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'inkshop',
        'weight' => 0,
      ),
      'omega' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Ähnliche Produkte',
    'visibility' => 1,
  );

  $export['views-display_products-block_1'] = array(
    'cache' => 8,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'display_products-block_1',
    'icon' => 'a:4:{s:4:"icon";s:0:"";s:7:"wrapper";s:0:"";s:13:"wrapper_class";s:0:"";s:8:"position";s:12:"title_before";}',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'suedlink-abo
node/1422
<front>',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => -35,
      ),
      'inkshop' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'inkshop',
        'weight' => -36,
      ),
      'omega' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-display_products-block_2'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'display_products-block_2',
    'icon' => 'a:4:{s:4:"icon";s:0:"";s:7:"wrapper";s:0:"";s:13:"wrapper_class";s:0:"";s:8:"position";s:12:"title_before";}',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => -38,
      ),
      'inkshop' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'inkshop',
        'weight' => -37,
      ),
      'omega' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  return $export;
}
