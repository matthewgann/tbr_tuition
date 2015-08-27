<?php

/**
* Implementation of hook_views_data
*/

function  tbr_tuition_views_data() {

   error_log("Loading views");
   $data['tuitionfees'] = array(
    // First give some general information about the table as a data source.
    'table' => array(
      // The grouping for this field/filter/sort in the Views UI.
      'group' => t('TBR Tuition and Fee Data');
      'base' => array(
        'field' => 'id',
        'title' => t('tuitionfees'),
        'help' => t('Autoincremented ID field, to enable views integration'),
        'database' => 'tbr_data_salaries',
        'weight' => -10,
      ),
    ),

    // Now we describe each field that Views needs to know about, starting
    // with the identifier field.
    'id' => array(
      'title' => t('ID'),
      'help' => t("The unique ID."),
      'field' => array(
        'handler' => 'views_handler_field_numeric',
        'click sortable' => TRUE,
      ),
      'sort' => array(
        'handler' => 'views_handler_sort',
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_numeric',
      ),
    ),

    // Now the rest
    'institution' => array(
      'title' => t('Institution'),
      'help' => t("Tuition - Institution"),
      'field' => array(
        'handler' => 'views_handler_field',
        'click sortable' => TRUE,
      ),
      'sort' => array(
        'handler' => 'views_handler_sort',
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_string',
      ),
    ),

    //end
  );

   return $data;

}
