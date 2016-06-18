<?php
/**
 * @file
 * inkshop_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function inkshop_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'buchhaltung';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'commerce_order';
  $view->human_name = 'Buchhaltung';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Gestellte Rechnungen';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mehr';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    6 => '6',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Anwenden';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortieren nach';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Aufsteigend';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Absteigend';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elemente pro Seite';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« erste Seite';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorherige Seite';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'nächste Seite ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'letzte Seite »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_commerce_billy_i_date_1',
      'rendered' => 1,
      'rendered_strip' => 1,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'order_id' => 'order_id',
    'order_number' => 'order_number',
    'field_commerce_billy_i_date' => 'field_commerce_billy_i_date',
    'commerce_billy_pdf_invoice_link' => 'commerce_billy_pdf_invoice_link',
    'status' => 'status',
    'commerce_order_total' => 'commerce_order_total',
    'field_commerce_billy_i_date_1' => 'field_commerce_billy_i_date_1',
  );
  $handler->display->display_options['style_options']['default'] = 'field_commerce_billy_i_date';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'order_id' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'order_number' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_commerce_billy_i_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'commerce_billy_pdf_invoice_link' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'commerce_order_total' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_commerce_billy_i_date_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  /* Beziehung: Bestellung: Referenziertes Kundenprofil */
  $handler->display->display_options['relationships']['commerce_customer_billing_profile_id']['id'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['relationships']['commerce_customer_billing_profile_id']['table'] = 'field_data_commerce_customer_billing';
  $handler->display->display_options['relationships']['commerce_customer_billing_profile_id']['field'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['relationships']['commerce_customer_billing_profile_id']['required'] = TRUE;
  /* Beziehung: Flags: bezahlt_ */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'commerce_order';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['label'] = 'Bezahlt';
  $handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'bezahlt_';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  /* Feld: Stapelverarbeitungen: Commerce Order */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'rules_component::rules_commerce_order_status_completed' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Rechnung als bezahlt markieren',
    ),
  );
  /* Feld: Commerce Order: Bestellnummer */
  $handler->display->display_options['fields']['order_number']['id'] = 'order_number';
  $handler->display->display_options['fields']['order_number']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['order_number']['field'] = 'order_number';
  $handler->display->display_options['fields']['order_number']['label'] = 'Rechnungsnummer';
  /* Feld: Commerce Kundenprofil: Address - Vollständiger Name */
  $handler->display->display_options['fields']['commerce_customer_address_name_line']['id'] = 'commerce_customer_address_name_line';
  $handler->display->display_options['fields']['commerce_customer_address_name_line']['table'] = 'field_data_commerce_customer_address';
  $handler->display->display_options['fields']['commerce_customer_address_name_line']['field'] = 'commerce_customer_address_name_line';
  $handler->display->display_options['fields']['commerce_customer_address_name_line']['relationship'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['fields']['commerce_customer_address_name_line']['label'] = 'Name';
  /* Feld: Bestellung: Rechnungsdatum */
  $handler->display->display_options['fields']['field_commerce_billy_i_date']['id'] = 'field_commerce_billy_i_date';
  $handler->display->display_options['fields']['field_commerce_billy_i_date']['table'] = 'field_data_field_commerce_billy_i_date';
  $handler->display->display_options['fields']['field_commerce_billy_i_date']['field'] = 'field_commerce_billy_i_date';
  $handler->display->display_options['fields']['field_commerce_billy_i_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Feld: Commerce Order: Rechnungs-PDF */
  $handler->display->display_options['fields']['commerce_billy_pdf_invoice_link']['id'] = 'commerce_billy_pdf_invoice_link';
  $handler->display->display_options['fields']['commerce_billy_pdf_invoice_link']['table'] = 'views_entity_commerce_order';
  $handler->display->display_options['fields']['commerce_billy_pdf_invoice_link']['field'] = 'commerce_billy_pdf_invoice_link';
  $handler->display->display_options['fields']['commerce_billy_pdf_invoice_link']['label'] = 'Rechnung PDF';
  /* Feld: Bestellung: Order total */
  $handler->display->display_options['fields']['commerce_order_total']['id'] = 'commerce_order_total';
  $handler->display->display_options['fields']['commerce_order_total']['table'] = 'field_data_commerce_order_total';
  $handler->display->display_options['fields']['commerce_order_total']['field'] = 'commerce_order_total';
  $handler->display->display_options['fields']['commerce_order_total']['label'] = 'Rechnungsbetrag';
  $handler->display->display_options['fields']['commerce_order_total']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['commerce_order_total']['settings'] = array(
    'calculation' => FALSE,
  );
  /* Feld: Commerce Order: Bestellnummer (ID) */
  $handler->display->display_options['fields']['order_id']['id'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['order_id']['field'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['label'] = 'Bestellnummer';
  $handler->display->display_options['fields']['order_id']['exclude'] = TRUE;
  /* Feld: Commerce Order: Bestellstatus */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['exclude'] = TRUE;
  /* Feld: Bestellung: Rechnungsdatum */
  $handler->display->display_options['fields']['field_commerce_billy_i_date_1']['id'] = 'field_commerce_billy_i_date_1';
  $handler->display->display_options['fields']['field_commerce_billy_i_date_1']['table'] = 'field_data_field_commerce_billy_i_date';
  $handler->display->display_options['fields']['field_commerce_billy_i_date_1']['field'] = 'field_commerce_billy_i_date';
  $handler->display->display_options['fields']['field_commerce_billy_i_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_commerce_billy_i_date_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_commerce_billy_i_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_commerce_billy_i_date_1']['settings'] = array(
    'format_type' => 'monat',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Feld: Flags: Gekennzeichnet */
  $handler->display->display_options['fields']['flagged']['id'] = 'flagged';
  $handler->display->display_options['fields']['flagged']['table'] = 'flagging';
  $handler->display->display_options['fields']['flagged']['field'] = 'flagged';
  $handler->display->display_options['fields']['flagged']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['flagged']['label'] = 'Bezahlt?';
  $handler->display->display_options['fields']['flagged']['exclude'] = TRUE;
  $handler->display->display_options['fields']['flagged']['type'] = 'unicode-yes-no';
  $handler->display->display_options['fields']['flagged']['not'] = 0;
  /* Feld: Global: Benutzerdefinierter Text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Bankbeleg';
  /* Feld: Rechnungsdatum zur Sortierung */
  $handler->display->display_options['fields']['field_commerce_billy_i_date_2']['id'] = 'field_commerce_billy_i_date_2';
  $handler->display->display_options['fields']['field_commerce_billy_i_date_2']['table'] = 'field_data_field_commerce_billy_i_date';
  $handler->display->display_options['fields']['field_commerce_billy_i_date_2']['field'] = 'field_commerce_billy_i_date';
  $handler->display->display_options['fields']['field_commerce_billy_i_date_2']['ui_name'] = 'Rechnungsdatum zur Sortierung';
  $handler->display->display_options['fields']['field_commerce_billy_i_date_2']['label'] = '';
  $handler->display->display_options['fields']['field_commerce_billy_i_date_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_commerce_billy_i_date_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_commerce_billy_i_date_2']['settings'] = array(
    'format_type' => 'monat',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Feld: Bestellung: Line items */
  $handler->display->display_options['fields']['commerce_line_items']['id'] = 'commerce_line_items';
  $handler->display->display_options['fields']['commerce_line_items']['table'] = 'field_data_commerce_line_items';
  $handler->display->display_options['fields']['commerce_line_items']['field'] = 'commerce_line_items';
  $handler->display->display_options['fields']['commerce_line_items']['label'] = 'Positionen';
  /* Filterkriterium: Commerce Order: Bestellungsart */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'commerce_order';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'commerce_order' => 'commerce_order',
  );
  /* Filterkriterium: Commerce Order: Bestellstatus */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'commerce_order';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    'invoiced' => 'invoiced',
  );
  /* Filterkriterium: Global: Feld-Filter kombinieren */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'word';
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Name oder Rechnungsnummer suchen';
  $handler->display->display_options['filters']['combine']['expose']['description'] = 'Filtere die Ansicht nach Name oder Rechnungsnummer. Die Eingabe-Taste funktioniert alternativ zum Anwenden-Button';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['combine']['group_info']['label'] = 'Suche';
  $handler->display->display_options['filters']['combine']['group_info']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['group_info']['widget'] = 'radios';
  $handler->display->display_options['filters']['combine']['group_info']['multiple'] = TRUE;
  $handler->display->display_options['filters']['combine']['group_info']['group_items'] = array(
    1 => array(
      'title' => '',
      'operator' => 'contains',
      'value' => '',
    ),
    2 => array(
      'title' => '',
      'operator' => 'contains',
      'value' => '',
    ),
    3 => array(
      'title' => '',
      'operator' => 'contains',
      'value' => '',
    ),
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'order_number' => 'order_number',
    'commerce_customer_address_name_line' => 'commerce_customer_address_name_line',
    'commerce_order_total' => 'commerce_order_total',
  );

  /* Display: Offene Rechnungen */
  $handler = $view->new_display('page', 'Offene Rechnungen', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Offene Rechnungen';
  $handler->display->display_options['display_description'] = 'In dieser Ansicht werden gestellte Rechnungen angezeigt, die mit Zahlungen abgeglichen werden können.';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_commerce_billy_i_date_2',
      'rendered' => 1,
      'rendered_strip' => 1,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'order_number' => 'order_number',
    'commerce_customer_address_name_line' => 'commerce_customer_address_name_line',
    'field_commerce_billy_i_date' => 'field_commerce_billy_i_date',
    'commerce_billy_pdf_invoice_link' => 'commerce_billy_pdf_invoice_link',
    'commerce_order_total' => 'commerce_order_total',
    'order_id' => 'order_id',
    'status' => 'status',
    'field_commerce_billy_i_date_1' => 'field_commerce_billy_i_date_1',
    'flagged' => 'flagged',
    'nothing' => 'nothing',
    'field_commerce_billy_i_date_2' => 'field_commerce_billy_i_date_2',
  );
  $handler->display->display_options['style_options']['default'] = 'field_commerce_billy_i_date';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'order_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'commerce_customer_address_name_line' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_commerce_billy_i_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'commerce_billy_pdf_invoice_link' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'commerce_order_total' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'order_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_commerce_billy_i_date_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'flagged' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_commerce_billy_i_date_2' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Feld: Stapelverarbeitungen: Commerce Order */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'rules_component::rules_commerce_order_status_completed' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Rechnung als bezahlt markieren',
    ),
  );
  /* Feld: Commerce Order: Bestellnummer */
  $handler->display->display_options['fields']['order_number']['id'] = 'order_number';
  $handler->display->display_options['fields']['order_number']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['order_number']['field'] = 'order_number';
  $handler->display->display_options['fields']['order_number']['label'] = 'Rechnungsnummer';
  /* Feld: Commerce Kundenprofil: Address - Vollständiger Name */
  $handler->display->display_options['fields']['commerce_customer_address_name_line']['id'] = 'commerce_customer_address_name_line';
  $handler->display->display_options['fields']['commerce_customer_address_name_line']['table'] = 'field_data_commerce_customer_address';
  $handler->display->display_options['fields']['commerce_customer_address_name_line']['field'] = 'commerce_customer_address_name_line';
  $handler->display->display_options['fields']['commerce_customer_address_name_line']['relationship'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['fields']['commerce_customer_address_name_line']['label'] = 'Name';
  /* Feld: Bestellung: Rechnungsdatum */
  $handler->display->display_options['fields']['field_commerce_billy_i_date']['id'] = 'field_commerce_billy_i_date';
  $handler->display->display_options['fields']['field_commerce_billy_i_date']['table'] = 'field_data_field_commerce_billy_i_date';
  $handler->display->display_options['fields']['field_commerce_billy_i_date']['field'] = 'field_commerce_billy_i_date';
  $handler->display->display_options['fields']['field_commerce_billy_i_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Feld: Commerce Order: Rechnungs-PDF */
  $handler->display->display_options['fields']['commerce_billy_pdf_invoice_link']['id'] = 'commerce_billy_pdf_invoice_link';
  $handler->display->display_options['fields']['commerce_billy_pdf_invoice_link']['table'] = 'views_entity_commerce_order';
  $handler->display->display_options['fields']['commerce_billy_pdf_invoice_link']['field'] = 'commerce_billy_pdf_invoice_link';
  $handler->display->display_options['fields']['commerce_billy_pdf_invoice_link']['label'] = 'Rechnung PDF';
  /* Feld: Bestellung: Order total */
  $handler->display->display_options['fields']['commerce_order_total']['id'] = 'commerce_order_total';
  $handler->display->display_options['fields']['commerce_order_total']['table'] = 'field_data_commerce_order_total';
  $handler->display->display_options['fields']['commerce_order_total']['field'] = 'commerce_order_total';
  $handler->display->display_options['fields']['commerce_order_total']['label'] = 'Rechnungsbetrag';
  $handler->display->display_options['fields']['commerce_order_total']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['commerce_order_total']['settings'] = array(
    'calculation' => FALSE,
  );
  /* Feld: Commerce Order: Bestellnummer (ID) */
  $handler->display->display_options['fields']['order_id']['id'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['order_id']['field'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['label'] = 'Bestellnummer';
  $handler->display->display_options['fields']['order_id']['exclude'] = TRUE;
  /* Feld: Commerce Order: Bestellstatus */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['exclude'] = TRUE;
  /* Feld: Bestellung: Rechnungsdatum */
  $handler->display->display_options['fields']['field_commerce_billy_i_date_1']['id'] = 'field_commerce_billy_i_date_1';
  $handler->display->display_options['fields']['field_commerce_billy_i_date_1']['table'] = 'field_data_field_commerce_billy_i_date';
  $handler->display->display_options['fields']['field_commerce_billy_i_date_1']['field'] = 'field_commerce_billy_i_date';
  $handler->display->display_options['fields']['field_commerce_billy_i_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_commerce_billy_i_date_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_commerce_billy_i_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_commerce_billy_i_date_1']['settings'] = array(
    'format_type' => 'monat',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Feld: Flags: Gekennzeichnet */
  $handler->display->display_options['fields']['flagged']['id'] = 'flagged';
  $handler->display->display_options['fields']['flagged']['table'] = 'flagging';
  $handler->display->display_options['fields']['flagged']['field'] = 'flagged';
  $handler->display->display_options['fields']['flagged']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['flagged']['label'] = 'Bezahlt?';
  $handler->display->display_options['fields']['flagged']['exclude'] = TRUE;
  $handler->display->display_options['fields']['flagged']['type'] = 'unicode-yes-no';
  $handler->display->display_options['fields']['flagged']['not'] = 0;
  /* Feld: Bestellung: Line items */
  $handler->display->display_options['fields']['commerce_line_items']['id'] = 'commerce_line_items';
  $handler->display->display_options['fields']['commerce_line_items']['table'] = 'field_data_commerce_line_items';
  $handler->display->display_options['fields']['commerce_line_items']['field'] = 'commerce_line_items';
  $handler->display->display_options['fields']['commerce_line_items']['label'] = 'Südlink Anteil brutto';
  $handler->display->display_options['fields']['commerce_line_items']['settings'] = array(
    'view' => 'commerce_line_item_table|block_1',
  );
  $handler->display->display_options['fields']['commerce_line_items']['delta_offset'] = '0';
  /* Feld: Global: Benutzerdefinierter Text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Bankbeleg';
  /* Feld: Rechnungsdatum zur Sortierung */
  $handler->display->display_options['fields']['field_commerce_billy_i_date_2']['id'] = 'field_commerce_billy_i_date_2';
  $handler->display->display_options['fields']['field_commerce_billy_i_date_2']['table'] = 'field_data_field_commerce_billy_i_date';
  $handler->display->display_options['fields']['field_commerce_billy_i_date_2']['field'] = 'field_commerce_billy_i_date';
  $handler->display->display_options['fields']['field_commerce_billy_i_date_2']['ui_name'] = 'Rechnungsdatum zur Sortierung';
  $handler->display->display_options['fields']['field_commerce_billy_i_date_2']['label'] = '';
  $handler->display->display_options['fields']['field_commerce_billy_i_date_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_commerce_billy_i_date_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_commerce_billy_i_date_2']['settings'] = array(
    'format_type' => 'monat',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['path'] = 'admin/buchhaltung/zahlungen';
  $handler->display->display_options['menu']['title'] = 'Zahlungsübersicht';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-buchhaltungsmenu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'tab';
  $handler->display->display_options['tab_options']['title'] = 'Buchhaltung';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $handler->display->display_options['tab_options']['name'] = 'menu-admin-menu';

  /* Display: Mahnungen */
  $handler = $view->new_display('page', 'Mahnungen', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Mahnungen';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_commerce_billy_i_date_1',
      'rendered' => 1,
      'rendered_strip' => 1,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'order_number' => 'order_number',
    'field_commerce_billy_i_date' => 'field_commerce_billy_i_date',
    'commerce_customer_billing' => 'commerce_customer_billing',
    'commerce_billy_pdf_invoice_link' => 'commerce_billy_pdf_invoice_link',
    'commerce_order_total' => 'commerce_order_total',
    'order_id' => 'order_id',
    'status' => 'status',
    'field_commerce_billy_i_date_1' => 'field_commerce_billy_i_date_1',
    'status_1' => 'status_1',
  );
  $handler->display->display_options['style_options']['default'] = 'field_commerce_billy_i_date';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'order_number' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_commerce_billy_i_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'commerce_customer_billing' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'commerce_billy_pdf_invoice_link' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'commerce_order_total' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'order_id' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_commerce_billy_i_date_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Feld: Stapelverarbeitungen: Commerce Order */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'rules_component::rules_mahnsystem' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Mahnungen verschicken',
    ),
    'rules_component::rules_commerce_order_status_completed' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Rechnung als bezahlt markieren',
    ),
  );
  /* Feld: Commerce Order: Bestellnummer */
  $handler->display->display_options['fields']['order_number']['id'] = 'order_number';
  $handler->display->display_options['fields']['order_number']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['order_number']['field'] = 'order_number';
  $handler->display->display_options['fields']['order_number']['label'] = 'Rechnungsnummer';
  /* Feld: Commerce Kundenprofil: Address - Vollständiger Name */
  $handler->display->display_options['fields']['commerce_customer_address_name_line']['id'] = 'commerce_customer_address_name_line';
  $handler->display->display_options['fields']['commerce_customer_address_name_line']['table'] = 'field_data_commerce_customer_address';
  $handler->display->display_options['fields']['commerce_customer_address_name_line']['field'] = 'commerce_customer_address_name_line';
  $handler->display->display_options['fields']['commerce_customer_address_name_line']['relationship'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['fields']['commerce_customer_address_name_line']['label'] = 'Name';
  /* Feld: Bestellung: Rechnungsdatum */
  $handler->display->display_options['fields']['field_commerce_billy_i_date']['id'] = 'field_commerce_billy_i_date';
  $handler->display->display_options['fields']['field_commerce_billy_i_date']['table'] = 'field_data_field_commerce_billy_i_date';
  $handler->display->display_options['fields']['field_commerce_billy_i_date']['field'] = 'field_commerce_billy_i_date';
  $handler->display->display_options['fields']['field_commerce_billy_i_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Feld: Commerce Order: Rechnungs-PDF */
  $handler->display->display_options['fields']['commerce_billy_pdf_invoice_link']['id'] = 'commerce_billy_pdf_invoice_link';
  $handler->display->display_options['fields']['commerce_billy_pdf_invoice_link']['table'] = 'views_entity_commerce_order';
  $handler->display->display_options['fields']['commerce_billy_pdf_invoice_link']['field'] = 'commerce_billy_pdf_invoice_link';
  $handler->display->display_options['fields']['commerce_billy_pdf_invoice_link']['label'] = 'Rechnung PDF';
  /* Feld: Bestellung: Order total */
  $handler->display->display_options['fields']['commerce_order_total']['id'] = 'commerce_order_total';
  $handler->display->display_options['fields']['commerce_order_total']['table'] = 'field_data_commerce_order_total';
  $handler->display->display_options['fields']['commerce_order_total']['field'] = 'commerce_order_total';
  $handler->display->display_options['fields']['commerce_order_total']['label'] = 'Rechnungsbetrag';
  $handler->display->display_options['fields']['commerce_order_total']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['commerce_order_total']['settings'] = array(
    'calculation' => FALSE,
  );
  /* Feld: Commerce Order: Bestellnummer (ID) */
  $handler->display->display_options['fields']['order_id']['id'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['order_id']['field'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['label'] = 'Bestellnummer';
  $handler->display->display_options['fields']['order_id']['exclude'] = TRUE;
  /* Feld: Bestellung: Rechnungsdatum */
  $handler->display->display_options['fields']['field_commerce_billy_i_date_1']['id'] = 'field_commerce_billy_i_date_1';
  $handler->display->display_options['fields']['field_commerce_billy_i_date_1']['table'] = 'field_data_field_commerce_billy_i_date';
  $handler->display->display_options['fields']['field_commerce_billy_i_date_1']['field'] = 'field_commerce_billy_i_date';
  $handler->display->display_options['fields']['field_commerce_billy_i_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_commerce_billy_i_date_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_commerce_billy_i_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_commerce_billy_i_date_1']['settings'] = array(
    'format_type' => 'monat',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Feld: Flags: Gekennzeichnet */
  $handler->display->display_options['fields']['flagged']['id'] = 'flagged';
  $handler->display->display_options['fields']['flagged']['table'] = 'flagging';
  $handler->display->display_options['fields']['flagged']['field'] = 'flagged';
  $handler->display->display_options['fields']['flagged']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['flagged']['label'] = 'Bezahlt?';
  $handler->display->display_options['fields']['flagged']['exclude'] = TRUE;
  $handler->display->display_options['fields']['flagged']['type'] = 'unicode-yes-no';
  $handler->display->display_options['fields']['flagged']['not'] = 0;
  /* Feld: Rechnungsdatum zur Sortierung */
  $handler->display->display_options['fields']['field_commerce_billy_i_date_2']['id'] = 'field_commerce_billy_i_date_2';
  $handler->display->display_options['fields']['field_commerce_billy_i_date_2']['table'] = 'field_data_field_commerce_billy_i_date';
  $handler->display->display_options['fields']['field_commerce_billy_i_date_2']['field'] = 'field_commerce_billy_i_date';
  $handler->display->display_options['fields']['field_commerce_billy_i_date_2']['ui_name'] = 'Rechnungsdatum zur Sortierung';
  $handler->display->display_options['fields']['field_commerce_billy_i_date_2']['label'] = '';
  $handler->display->display_options['fields']['field_commerce_billy_i_date_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_commerce_billy_i_date_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_commerce_billy_i_date_2']['settings'] = array(
    'format_type' => 'monat',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Feld: Commerce Order: E-Mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['exclude'] = TRUE;
  $handler->display->display_options['fields']['mail']['render_as_link'] = 0;
  /* Feld: Commerce Order: Bestellstatus */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = 'Status';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterium: Commerce Order: Bestellungsart */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'commerce_order';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'commerce_order' => 'commerce_order',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filterkriterium: Commerce Order: Bestellstatus */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'commerce_order';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    'invoiced' => 'invoiced',
    'mahnung_1' => 'mahnung_1',
    'mahnung_2' => 'mahnung_2',
    'gesperrt' => 'gesperrt',
  );
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filterkriterium: Global: Feld-Filter kombinieren */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'word';
  $handler->display->display_options['filters']['combine']['group'] = 1;
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Name oder Rechnungsnummer suchen';
  $handler->display->display_options['filters']['combine']['expose']['description'] = 'Filtere die Ansicht nach Name oder Rechnungsnummer. Die Eingabe-Taste funktioniert alternativ zum Anwenden-Button';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['combine']['group_info']['label'] = 'Suche';
  $handler->display->display_options['filters']['combine']['group_info']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['group_info']['widget'] = 'radios';
  $handler->display->display_options['filters']['combine']['group_info']['multiple'] = TRUE;
  $handler->display->display_options['filters']['combine']['group_info']['group_items'] = array(
    1 => array(
      'title' => '',
      'operator' => 'contains',
      'value' => '',
    ),
    2 => array(
      'title' => '',
      'operator' => 'contains',
      'value' => '',
    ),
    3 => array(
      'title' => '',
      'operator' => 'contains',
      'value' => '',
    ),
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'order_number' => 'order_number',
    'commerce_customer_address_name_line' => 'commerce_customer_address_name_line',
    'commerce_order_total' => 'commerce_order_total',
  );
  /* Filterkriterium: Bestellung: Rechnungsdatum (field_commerce_billy_i_date) */
  $handler->display->display_options['filters']['field_commerce_billy_i_date_value']['id'] = 'field_commerce_billy_i_date_value';
  $handler->display->display_options['filters']['field_commerce_billy_i_date_value']['table'] = 'field_data_field_commerce_billy_i_date';
  $handler->display->display_options['filters']['field_commerce_billy_i_date_value']['field'] = 'field_commerce_billy_i_date_value';
  $handler->display->display_options['filters']['field_commerce_billy_i_date_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_commerce_billy_i_date_value']['expose']['operator_id'] = 'field_commerce_billy_i_date_value_op';
  $handler->display->display_options['filters']['field_commerce_billy_i_date_value']['expose']['label'] = 'Rechnungsdatum (field_commerce_billy_i_date)';
  $handler->display->display_options['filters']['field_commerce_billy_i_date_value']['expose']['operator'] = 'field_commerce_billy_i_date_value_op';
  $handler->display->display_options['filters']['field_commerce_billy_i_date_value']['expose']['identifier'] = 'field_commerce_billy_i_date_value';
  $handler->display->display_options['filters']['field_commerce_billy_i_date_value']['group_info']['label'] = 'Rechnungsdatum (field_commerce_billy_i_date)';
  $handler->display->display_options['filters']['field_commerce_billy_i_date_value']['group_info']['identifier'] = 'field_commerce_billy_i_date_value';
  $handler->display->display_options['filters']['field_commerce_billy_i_date_value']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_commerce_billy_i_date_value']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  $handler->display->display_options['filters']['field_commerce_billy_i_date_value']['default_date'] = '-40 days';
  /* Filterkriterium: Flags: Gekennzeichnet */
  $handler->display->display_options['filters']['flagged']['id'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['table'] = 'flagging';
  $handler->display->display_options['filters']['flagged']['field'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['filters']['flagged']['value'] = '0';
  $handler->display->display_options['path'] = 'admin/buchhaltung/mahnungen';
  $handler->display->display_options['menu']['title'] = 'Mahnungen';
  $handler->display->display_options['menu']['weight'] = '4';
  $handler->display->display_options['menu']['name'] = 'menu-buchhaltungsmenu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['attach_text'] = 'Excel-Datei Exportieren';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'Rechnungen_Einzelbestellungen_%timestamp-full.xls';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Feld: Stapelverarbeitungen: Commerce Order */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'rules_component::rules_commerce_order_status_completed' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Rechnung als bezahlt markieren',
    ),
  );
  /* Feld: Commerce Order: Bestellnummer */
  $handler->display->display_options['fields']['order_number']['id'] = 'order_number';
  $handler->display->display_options['fields']['order_number']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['order_number']['field'] = 'order_number';
  $handler->display->display_options['fields']['order_number']['label'] = 'Rechnungsnummer';
  /* Feld: Commerce Kundenprofil: Address - Vollständiger Name */
  $handler->display->display_options['fields']['commerce_customer_address_name_line']['id'] = 'commerce_customer_address_name_line';
  $handler->display->display_options['fields']['commerce_customer_address_name_line']['table'] = 'field_data_commerce_customer_address';
  $handler->display->display_options['fields']['commerce_customer_address_name_line']['field'] = 'commerce_customer_address_name_line';
  $handler->display->display_options['fields']['commerce_customer_address_name_line']['relationship'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['fields']['commerce_customer_address_name_line']['label'] = 'Name';
  /* Feld: Bestellung: Rechnungsdatum */
  $handler->display->display_options['fields']['field_commerce_billy_i_date']['id'] = 'field_commerce_billy_i_date';
  $handler->display->display_options['fields']['field_commerce_billy_i_date']['table'] = 'field_data_field_commerce_billy_i_date';
  $handler->display->display_options['fields']['field_commerce_billy_i_date']['field'] = 'field_commerce_billy_i_date';
  $handler->display->display_options['fields']['field_commerce_billy_i_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Feld: Commerce Order: Rechnungs-PDF */
  $handler->display->display_options['fields']['commerce_billy_pdf_invoice_link']['id'] = 'commerce_billy_pdf_invoice_link';
  $handler->display->display_options['fields']['commerce_billy_pdf_invoice_link']['table'] = 'views_entity_commerce_order';
  $handler->display->display_options['fields']['commerce_billy_pdf_invoice_link']['field'] = 'commerce_billy_pdf_invoice_link';
  $handler->display->display_options['fields']['commerce_billy_pdf_invoice_link']['label'] = 'Rechnung PDF';
  $handler->display->display_options['fields']['commerce_billy_pdf_invoice_link']['exclude'] = TRUE;
  /* Feld: Bestellung: Order total */
  $handler->display->display_options['fields']['commerce_order_total']['id'] = 'commerce_order_total';
  $handler->display->display_options['fields']['commerce_order_total']['table'] = 'field_data_commerce_order_total';
  $handler->display->display_options['fields']['commerce_order_total']['field'] = 'commerce_order_total';
  $handler->display->display_options['fields']['commerce_order_total']['label'] = 'Rechnungsbetrag';
  $handler->display->display_options['fields']['commerce_order_total']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['commerce_order_total']['settings'] = array(
    'calculation' => FALSE,
  );
  /* Feld: Commerce Order: Bestellnummer (ID) */
  $handler->display->display_options['fields']['order_id']['id'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['order_id']['field'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['label'] = 'Bestellnummer';
  $handler->display->display_options['fields']['order_id']['exclude'] = TRUE;
  /* Feld: Commerce Order: Bestellstatus */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['exclude'] = TRUE;
  /* Feld: Bestellung: Rechnungsdatum */
  $handler->display->display_options['fields']['field_commerce_billy_i_date_1']['id'] = 'field_commerce_billy_i_date_1';
  $handler->display->display_options['fields']['field_commerce_billy_i_date_1']['table'] = 'field_data_field_commerce_billy_i_date';
  $handler->display->display_options['fields']['field_commerce_billy_i_date_1']['field'] = 'field_commerce_billy_i_date';
  $handler->display->display_options['fields']['field_commerce_billy_i_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_commerce_billy_i_date_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_commerce_billy_i_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_commerce_billy_i_date_1']['settings'] = array(
    'format_type' => 'monat',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Feld: Flags: Gekennzeichnet */
  $handler->display->display_options['fields']['flagged']['id'] = 'flagged';
  $handler->display->display_options['fields']['flagged']['table'] = 'flagging';
  $handler->display->display_options['fields']['flagged']['field'] = 'flagged';
  $handler->display->display_options['fields']['flagged']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['flagged']['label'] = 'Bezahlt?';
  $handler->display->display_options['fields']['flagged']['exclude'] = TRUE;
  $handler->display->display_options['fields']['flagged']['type'] = 'unicode-yes-no';
  $handler->display->display_options['fields']['flagged']['not'] = 0;
  /* Feld: Global: Benutzerdefinierter Text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Bankbeleg';
  /* Feld: Rechnungsdatum zur Sortierung */
  $handler->display->display_options['fields']['field_commerce_billy_i_date_2']['id'] = 'field_commerce_billy_i_date_2';
  $handler->display->display_options['fields']['field_commerce_billy_i_date_2']['table'] = 'field_data_field_commerce_billy_i_date';
  $handler->display->display_options['fields']['field_commerce_billy_i_date_2']['field'] = 'field_commerce_billy_i_date';
  $handler->display->display_options['fields']['field_commerce_billy_i_date_2']['ui_name'] = 'Rechnungsdatum zur Sortierung';
  $handler->display->display_options['fields']['field_commerce_billy_i_date_2']['label'] = '';
  $handler->display->display_options['fields']['field_commerce_billy_i_date_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_commerce_billy_i_date_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_commerce_billy_i_date_2']['settings'] = array(
    'format_type' => 'monat',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['path'] = 'admin/zahlungen/export';
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
    'default' => 0,
    'page_2' => 0,
  );

  /* Display: Bezahlte Rechnungen */
  $handler = $view->new_display('page', 'Bezahlte Rechnungen', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Bezahlte Rechnungen';
  $handler->display->display_options['display_description'] = 'In dieser Ansicht werden bezahlte Rechnungen angezeigt.';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'order_number' => 'order_number',
    'field_commerce_billy_i_date' => 'field_commerce_billy_i_date',
    'commerce_customer_billing' => 'commerce_customer_billing',
    'commerce_billy_pdf_invoice_link' => 'commerce_billy_pdf_invoice_link',
    'commerce_order_total' => 'commerce_order_total',
    'order_id' => 'order_id',
    'status' => 'status',
    'field_commerce_billy_i_date_1' => 'field_commerce_billy_i_date_1',
    'status_1' => 'status_1',
  );
  $handler->display->display_options['style_options']['default'] = 'field_commerce_billy_i_date';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'order_number' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_commerce_billy_i_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'commerce_customer_billing' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'commerce_billy_pdf_invoice_link' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'commerce_order_total' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'order_id' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_commerce_billy_i_date_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterium: Commerce Order: Bestellungsart */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'commerce_order';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'commerce_order' => 'commerce_order',
  );
  /* Filterkriterium: Commerce Order: Bestellstatus */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'commerce_order';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    'completed' => 'completed',
  );
  /* Filterkriterium: Global: Feld-Filter kombinieren */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'word';
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Name oder Rechnungsnummer suchen';
  $handler->display->display_options['filters']['combine']['expose']['description'] = 'Filtere die Ansicht nach Name oder Rechnungsnummer. Die Eingabe-Taste funktioniert alternativ zum Anwenden-Button';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['combine']['group_info']['label'] = 'Suche';
  $handler->display->display_options['filters']['combine']['group_info']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['group_info']['widget'] = 'radios';
  $handler->display->display_options['filters']['combine']['group_info']['multiple'] = TRUE;
  $handler->display->display_options['filters']['combine']['group_info']['group_items'] = array(
    1 => array(
      'title' => '',
      'operator' => 'contains',
      'value' => '',
    ),
    2 => array(
      'title' => '',
      'operator' => 'contains',
      'value' => '',
    ),
    3 => array(
      'title' => '',
      'operator' => 'contains',
      'value' => '',
    ),
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'order_number' => 'order_number',
    'commerce_customer_address_name_line' => 'commerce_customer_address_name_line',
    'commerce_order_total' => 'commerce_order_total',
  );
  $handler->display->display_options['path'] = 'admin/buchhaltung/rechnungsarchiv';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Bezahlte Rechnungen';
  $handler->display->display_options['menu']['weight'] = '10';
  $handler->display->display_options['menu']['name'] = 'menu-buchhaltungsmenu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'tab';
  $handler->display->display_options['tab_options']['title'] = 'Buchhaltung';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $handler->display->display_options['tab_options']['name'] = 'menu-admin-menu';
  $translatables['buchhaltung'] = array(
    t('Master'),
    t('Gestellte Rechnungen'),
    t('mehr'),
    t('Anwenden'),
    t('Zurücksetzen'),
    t('Sortieren nach'),
    t('Aufsteigend'),
    t('Absteigend'),
    t('Elemente pro Seite'),
    t('- Alle -'),
    t('Offset'),
    t('« erste Seite'),
    t('‹ vorherige Seite'),
    t('nächste Seite ›'),
    t('letzte Seite »'),
    t('Customer profile referenced by commerce_customer_billing'),
    t('Bezahlt'),
    t('- Wählen Sie eine Aufgabe -'),
    t('Rechnung als bezahlt markieren'),
    t('Rechnungsnummer'),
    t('Name'),
    t('Rechnungsdatum'),
    t('Rechnung PDF'),
    t('Rechnungsbetrag'),
    t('Bestellnummer'),
    t('Bestellstatus'),
    t('Bezahlt?'),
    t('Bankbeleg'),
    t('Positionen'),
    t('Name oder Rechnungsnummer suchen'),
    t('Filtere die Ansicht nach Name oder Rechnungsnummer. Die Eingabe-Taste funktioniert alternativ zum Anwenden-Button'),
    t('Suche'),
    t('Offene Rechnungen'),
    t('In dieser Ansicht werden gestellte Rechnungen angezeigt, die mit Zahlungen abgeglichen werden können.'),
    t('Südlink Anteil brutto'),
    t('Mahnungen'),
    t('Mahnung als Email verschicken'),
    t('Mahnungen verschicken'),
    t('E-Mail'),
    t('Status'),
    t('Rechnungsdatum (field_commerce_billy_i_date)'),
    t('Data export'),
    t('Bezahlte Rechnungen'),
    t('In dieser Ansicht werden bezahlte Rechnungen angezeigt.'),
  );
  $export['buchhaltung'] = $view;

  $view = new view();
  $view->name = 'display_products';
  $view->description = 'Display all the products that are available, using Search API';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_product_display';
  $view->human_name = 'Display Products';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'Alle neuen Produkte';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Suchen';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortieren nach';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Aufsteigend';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Absteigend';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '13';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elemente pro Seite';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '24, 100';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« erste Seite';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorherige Seite';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'nächste Seite ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'letzte Seite »';
  $handler->display->display_options['style_plugin'] = 'fluid_grid';
  $handler->display->display_options['style_options']['items_width'] = '';
  $handler->display->display_options['style_options']['advanced_layout'] = array(
    'margins' => TRUE,
  );
  $handler->display->display_options['style_options']['items_h_margin'] = '0.5em';
  $handler->display->display_options['style_options']['items_v_margin'] = '1em';
  $handler->display->display_options['style_options']['box_shadow'] = '0';
  $handler->display->display_options['style_options']['border_radius'] = '0';
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser';
  /* Fußbereich: Global: Unfiltered text */
  $handler->display->display_options['footer']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['footer']['area_text_custom']['field'] = 'area_text_custom';
  /* Verhalten, wenn keine Ergebnisse vorliegen: Global: Textbereich */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['content'] = 'Leider keine Ergebnisse zu Ihrer Suche gefunden.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Feld: Inhalt: Rendered Beitrag */
  $handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['label'] = '';
  $handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
  $handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'product_list';
  /* Sortierkriterien: Indizierter Beitrag: Erstellungsdatum */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'search_api_index_product_display';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Kontextfilter: Indizierter Beitrag: Inhaltstyp */
  $handler->display->display_options['arguments']['type']['id'] = 'type';
  $handler->display->display_options['arguments']['type']['table'] = 'search_api_index_product_display';
  $handler->display->display_options['arguments']['type']['field'] = 'type';
  $handler->display->display_options['arguments']['type']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['type']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['type']['summary']['format'] = 'default_summary';
  /* Kontextfilter: Suche: Ähnliche Einträge */
  $handler->display->display_options['arguments']['search_api_views_more_like_this']['id'] = 'search_api_views_more_like_this';
  $handler->display->display_options['arguments']['search_api_views_more_like_this']['table'] = 'search_api_index_product_display';
  $handler->display->display_options['arguments']['search_api_views_more_like_this']['field'] = 'search_api_views_more_like_this';
  $handler->display->display_options['arguments']['search_api_views_more_like_this']['default_action'] = 'default';
  $handler->display->display_options['arguments']['search_api_views_more_like_this']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['search_api_views_more_like_this']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['search_api_views_more_like_this']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['search_api_views_more_like_this']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['search_api_views_more_like_this']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['search_api_views_more_like_this']['validate_options']['types'] = array(
    'product_display' => 'product_display',
  );
  /* Filterkriterium: Suche: Volltextsuche */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_product_display';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['operator'] = 'OR';
  $handler->display->display_options['filters']['search_api_views_fulltext']['group'] = 1;
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Shop durchsuchen';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['search_api_views_fulltext']['mode'] = 'filter';
  $handler->display->display_options['filters']['search_api_views_fulltext']['min_length'] = '3';
  $handler->display->display_options['filters']['search_api_views_fulltext']['fields'] = array(
    'body:value' => 'body:value',
    'field_pd_description:value' => 'field_pd_description:value',
    'field_product:field_product_subtitle' => 'field_product:field_product_subtitle',
    'search_api_aggregation_1' => 'search_api_aggregation_1',
    'search_api_aggregation_2' => 'search_api_aggregation_2',
    'search_api_aggregation_3' => 'search_api_aggregation_3',
    'search_api_aggregation_4' => 'search_api_aggregation_4',
    'search_api_aggregation_5' => 'search_api_aggregation_5',
  );
  /* Filterkriterium: Indizierter Beitrag: Inhaltstyp */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_product_display';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'product_display' => 'product_display',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Startseite */
  $handler = $view->new_display('page', 'Startseite', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '13';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elemente pro Seite';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '24, 100';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« erste Seite';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorherige Seite';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'nächste Seite ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'letzte Seite »';
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['path'] = 'produkte';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'All products';
  $handler->display->display_options['menu']['weight'] = '50';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Südlink */
  $handler = $view->new_display('page', 'Südlink', 'page_1');
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sortierkriterien: Indizierter Beitrag: Title */
  $handler->display->display_options['sorts']['title_field']['id'] = 'title_field';
  $handler->display->display_options['sorts']['title_field']['table'] = 'search_api_index_product_display';
  $handler->display->display_options['sorts']['title_field']['field'] = 'title_field';
  $handler->display->display_options['sorts']['title_field']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterium: Indizierter Beitrag: Inhaltstyp */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_product_display';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'product_display' => 'product_display',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filterkriterium: Indizierter Beitrag: Format */
  $handler->display->display_options['filters']['field_pd_type']['id'] = 'field_pd_type';
  $handler->display->display_options['filters']['field_pd_type']['table'] = 'search_api_index_product_display';
  $handler->display->display_options['filters']['field_pd_type']['field'] = 'field_pd_type';
  $handler->display->display_options['filters']['field_pd_type']['value'] = array(
    16 => '16',
  );
  $handler->display->display_options['filters']['field_pd_type']['group'] = 1;
  $handler->display->display_options['path'] = 'suedlink';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Südlink';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Südlink: Aktuelles Heft */
  $handler = $view->new_display('block', 'Südlink: Aktuelles Heft', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Aktuelles Heft';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sortierkriterien: Indizierter Beitrag: Erstellungsdatum */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'search_api_index_product_display';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterium: Indizierter Beitrag: Inhaltstyp */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_product_display';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filterkriterium: Indizierter Beitrag: Format */
  $handler->display->display_options['filters']['field_pd_type_1']['id'] = 'field_pd_type_1';
  $handler->display->display_options['filters']['field_pd_type_1']['table'] = 'search_api_index_product_display';
  $handler->display->display_options['filters']['field_pd_type_1']['field'] = 'field_pd_type';
  $handler->display->display_options['filters']['field_pd_type_1']['value'] = array(
    16 => '16',
  );
  $handler->display->display_options['filters']['field_pd_type_1']['group'] = 1;
  $handler->display->display_options['block_description'] = 'Südlink: Aktuelles Heft';

  /* Display: Facets block Themen */
  $handler = $view->new_display('search_api_views_facets_block', 'Facets block Themen', 'search_api_views_facets_block_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['linked_path'] = 'produkte';
  $handler->display->display_options['facet_field'] = 'field_pd_category';
  $handler->display->display_options['hide_block'] = 1;

  /* Display: Facets block Format */
  $handler = $view->new_display('search_api_views_facets_block', 'Facets block Format', 'search_api_views_facets_block_2');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['linked_path'] = 'produkte';
  $handler->display->display_options['facet_field'] = 'field_pd_type';
  $handler->display->display_options['hide_block'] = 1;

  /* Display: Facets block Tags */
  $handler = $view->new_display('search_api_views_facets_block', 'Facets block Tags', 'search_api_views_facets_block_3');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['linked_path'] = 'produkte';
  $handler->display->display_options['facet_field'] = 'field_tags';
  $handler->display->display_options['hide_block'] = 1;

  /* Display: More like this Block */
  $handler = $view->new_display('block', 'More like this Block', 'aehnliche_produkte_auto');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'fluid_grid';
  $handler->display->display_options['style_options']['items_width'] = '';
  $handler->display->display_options['style_options']['advanced_layout'] = array(
    'margins' => TRUE,
  );
  $handler->display->display_options['style_options']['items_h_margin'] = '0.5em';
  $handler->display->display_options['style_options']['items_v_margin'] = '1em';
  $handler->display->display_options['style_options']['box_shadow'] = '0';
  $handler->display->display_options['style_options']['border_radius'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'aehnliche_produkte';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Feld: Indizierter Beitrag: Beitrags-ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_product_display';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Feld: Indizierter Beitrag: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'search_api_index_product_display';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  /* Feld: Product: Subtitle (indexed) */
  $handler->display->display_options['fields']['field_product_field_product_subtitle']['id'] = 'field_product_field_product_subtitle';
  $handler->display->display_options['fields']['field_product_field_product_subtitle']['table'] = 'search_api_index_product_display';
  $handler->display->display_options['fields']['field_product_field_product_subtitle']['field'] = 'field_product_field_product_subtitle';
  $handler->display->display_options['fields']['field_product_field_product_subtitle']['label'] = '';
  $handler->display->display_options['fields']['field_product_field_product_subtitle']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_product_field_product_subtitle']['element_label_colon'] = FALSE;
  /* Feld: Indizierter Beitrag: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'search_api_index_product_display';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['text'] = '<a href="node/[nid]" class="blocklink">
<h2>[title_field]</h2>
<div class="field--name-field-product-subtitle">[field_product_field_product_subtitle]</div>
[field_image]
</a>';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'product_list_image',
    'image_link' => '',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontextfilter: Suche: Ähnliche Einträge */
  $handler->display->display_options['arguments']['search_api_views_more_like_this']['id'] = 'search_api_views_more_like_this';
  $handler->display->display_options['arguments']['search_api_views_more_like_this']['table'] = 'search_api_index_product_display';
  $handler->display->display_options['arguments']['search_api_views_more_like_this']['field'] = 'search_api_views_more_like_this';
  $handler->display->display_options['arguments']['search_api_views_more_like_this']['default_action'] = 'default';
  $handler->display->display_options['arguments']['search_api_views_more_like_this']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['search_api_views_more_like_this']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['search_api_views_more_like_this']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['search_api_views_more_like_this']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['search_api_views_more_like_this']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['search_api_views_more_like_this']['validate_options']['types'] = array(
    'product_display' => 'product_display',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterium: Indizierter Beitrag: Inhaltstyp */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_product_display';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'product_display' => 'product_display',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['block_description'] = 'Ähnliche Produkte';

  /* Display: Neueste Produkte Block */
  $handler = $view->new_display('block', 'Neueste Produkte Block', 'block_2');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'Alle neuen Produkte';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'page_2';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Kopfbereich: Global: Textbereich */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Neue Produkte Seite Link';
  $handler->display->display_options['header']['area']['content'] = '<h2 class="block__title"><!--<a href="/produkte/neu">-->Neueste Produkte<!--</a>--></h2>';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sortierkriterien: Indizierter Beitrag: Erstellungsdatum */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'search_api_index_product_display';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontextfilter: Indizierter Beitrag: Inhaltstyp */
  $handler->display->display_options['arguments']['type']['id'] = 'type';
  $handler->display->display_options['arguments']['type']['table'] = 'search_api_index_product_display';
  $handler->display->display_options['arguments']['type']['field'] = 'type';
  $handler->display->display_options['arguments']['type']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['type']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['type']['summary']['format'] = 'default_summary';
  /* Kontextfilter: Suche: Ähnliche Einträge */
  $handler->display->display_options['arguments']['search_api_views_more_like_this']['id'] = 'search_api_views_more_like_this';
  $handler->display->display_options['arguments']['search_api_views_more_like_this']['table'] = 'search_api_index_product_display';
  $handler->display->display_options['arguments']['search_api_views_more_like_this']['field'] = 'search_api_views_more_like_this';
  $handler->display->display_options['arguments']['search_api_views_more_like_this']['default_action'] = 'default';
  $handler->display->display_options['arguments']['search_api_views_more_like_this']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['search_api_views_more_like_this']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['search_api_views_more_like_this']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['search_api_views_more_like_this']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['search_api_views_more_like_this']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['search_api_views_more_like_this']['validate_options']['types'] = array(
    'product_display' => 'product_display',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterium: Indizierter Beitrag: Inhaltstyp */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_product_display';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'product_display' => 'product_display',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['block_description'] = 'Neueste Produkte';

  /* Display: Neue Produkte Seite */
  $handler = $view->new_display('page', 'Neue Produkte Seite', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Neue Produkte';
  $handler->display->display_options['display_description'] = 'Zeigt die neusten Produkte in einer Übersicht';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterium: Indizierter Beitrag: Inhaltstyp */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_product_display';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'product_display' => 'product_display',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filterkriterium: Indizierter Beitrag: Erstellungsdatum */
  $handler->display->display_options['filters']['created']['id'] = 'created';
  $handler->display->display_options['filters']['created']['table'] = 'search_api_index_product_display';
  $handler->display->display_options['filters']['created']['field'] = 'created';
  $handler->display->display_options['filters']['created']['operator'] = '>=';
  $handler->display->display_options['filters']['created']['value'] = 'now -60 days';
  $handler->display->display_options['path'] = 'produkte/neu';
  $translatables['display_products'] = array(
    t('Master'),
    t('Alle neuen Produkte'),
    t('Suchen'),
    t('Zurücksetzen'),
    t('Sortieren nach'),
    t('Aufsteigend'),
    t('Absteigend'),
    t('Elemente pro Seite'),
    t('- Alle -'),
    t('Offset'),
    t('« erste Seite'),
    t('‹ vorherige Seite'),
    t('nächste Seite ›'),
    t('letzte Seite »'),
    t('Leider keine Ergebnisse zu Ihrer Suche gefunden.'),
    t('Alle'),
    t('Shop durchsuchen'),
    t('Startseite'),
    t('mehr'),
    t('Südlink'),
    t('Südlink: Aktuelles Heft'),
    t('Aktuelles Heft'),
    t('Facets block Themen'),
    t('Facets block Format'),
    t('Facets block Tags'),
    t('More like this Block'),
    t('.'),
    t(','),
    t('<a href="node/[nid]" class="blocklink">
<h2>[title_field]</h2>
<div class="field--name-field-product-subtitle">[field_product_field_product_subtitle]</div>
[field_image]
</a>'),
    t('Ähnliche Produkte'),
    t('Neueste Produkte Block'),
    t('Neue Produkte Seite Link'),
    t('<h2 class="block__title"><!--<a href="/produkte/neu">-->Neueste Produkte<!--</a>--></h2>'),
    t('Neueste Produkte'),
    t('Neue Produkte Seite'),
    t('Neue Produkte'),
    t('Zeigt die neusten Produkte in einer Übersicht'),
  );
  $export['display_products'] = $view;

  return $export;
}
