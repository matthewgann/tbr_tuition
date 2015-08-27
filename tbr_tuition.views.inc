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
      'group' => t('TBR Tuition and Fee Data'),
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
        'handler' => 'views_handler_field',
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
    'tid' => array(
      'title' => t('Institution Term ID'),
      'help' => t("Tuition - Institution Term ID"),
      'field' => array(
        'handler' => 'views_handler_field',
        'click sortable' => TRUE,
      ),
      'sort' => array(
        'handler' => 'views_handler_sort',
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_numeric',
      ),
    ),

    'term_name' => array(
      'title' => t('Institution Name (from Term)'),
      'help' => t('The term id translated to the Term name'),
      'real field' => 'tid',
      'field' => array(
        'handler' => 'tbr_tuition_handler_term',
        'click sortable' => TRUE,
      ),
    ),

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

    '2005_maint' => array(
      'title' => t('2004-2005 Maintenance'),
      'help' => t('Tuition - 2005 Maintenance Fee (Tuition)'),
      'field' => array(
        'handler' => 'tbr_tuition_handler_numeric',
        'click sortable' => TRUE,
      ),
      'sort' => array(
        'handler' => 'views_handler_sort',
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_string',
      ),
    ),

    '2005_mand' => array(
      'title' => t('2004-2005 Mandatory Fee'),
      'help' => t('Tuition - 2005 Mandatory  Fee'),
      'field' => array(
        'handler' => 'tbr_tuition_handler_numeric',
        'click sortable' => TRUE,
      ),
      'sort' => array(
        'handler' => 'views_handler_sort',
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_string',
      ),
    ),

        '2006_maint' => array(
      'title' => t('2005-2006 Maintenance'),
      'help' => t('Tuition - 2006 Maintenance Fee (Tuition)'),
      'field' => array(
        'handler' => 'tbr_tuition_handler_numeric',
        'click sortable' => TRUE,
      ),
      'sort' => array(
        'handler' => 'views_handler_sort',
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_string',
      ),
    ),

        '2006_mand' => array(
      'title' => t('2005-2006 Mandatory Fee'),
      'help' => t('Tuition - 2006 Mandatory  Fee'),
      'field' => array(
        'handler' => 'tbr_tuition_handler_numeric',
        'click sortable' => TRUE,
      ),
      'sort' => array(
        'handler' => 'views_handler_sort',
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_string',
      ),
    ),

        '2007_maint' => array(
      'title' => t('2006-2007 Maintenance Fee (Tuition)'),
      'help' => t('Tuition - 2007 Maintenance Fee (Tuition)'),
      'field' => array(
        'handler' => 'tbr_tuition_handler_numeric',
        'click sortable' => TRUE,
      ),
      'sort' => array(
        'handler' => 'views_handler_sort',
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_string',
      ),
    ),

        '2007_mand' => array(
      'title' => t('2006-2007 Mandatory Fee'),
      'help' => t('Tuition - 2007 Mandatory  Fee'),
      'field' => array(
        'handler' => 'tbr_tuition_handler_numeric',
        'click sortable' => TRUE,
      ),
      'sort' => array(
        'handler' => 'views_handler_sort',
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_string',
      ),
    ),

    '2012_maint' => array(
      'title' => t('2011-2012 Maintenance'),
      'help' => t('Tuition - 2012 Maintenance Fee (Tuition)'),
      'field' => array(
        'handler' => 'tbr_tuition_handler_numeric',
        'click sortable' => TRUE,
      ),
      'sort' => array(
        'handler' => 'views_handler_sort',
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_string',
      ),
    ),

        '2012_mand' => array(
      'title' => t('2011-2012 Mandatory Fee'),
      'help' => t('Tuition - 2012 Mandatory  Fee'),
      'field' => array(
        'handler' => 'tbr_tuition_handler_numeric',
        'click sortable' => TRUE,
      ),
      'sort' => array(
        'handler' => 'views_handler_sort',
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_string',
      ),
    ),

    '2013_maint' => array(
      'title' => t('2012-2013 Maintenance'),
      'help' => t('Tuition - 2013 Maintenance Fee (Tuition)'),
      'field' => array(
        'handler' => 'tbr_tuition_handler_numeric',
        'click sortable' => TRUE,
      ),
      'sort' => array(
        'handler' => 'views_handler_sort',
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_string',
      ),
    ),

        '2013_mand' => array(
      'title' => t('2012-2013 Mandatory Fee'),
      'help' => t('Tuition - 2013 Mandatory  Fee'),
      'field' => array(
        'handler' => 'tbr_tuition_handler_numeric',
        'click sortable' => TRUE,
      ),
      'sort' => array(
        'handler' => 'views_handler_sort',
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_string',
      ),
    ),

    '2014_maint' => array(
      'title' => t('2013-2014 Maintenance'),
      'help' => t('Tuition - 2014 Maintenance Fee (Tuition)'),
      'field' => array(
        'handler' => 'tbr_tuition_handler_numeric',
        'click sortable' => TRUE,
      ),
      'sort' => array(
        'handler' => 'views_handler_sort',
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_string',
      ),
    ),

        '2014_mand' => array(
      'title' => t('2013-2014 Mandatory Fee'),
      'help' => t('Tuition - 2014 Mandatory  Fee'),
      'field' => array(
        'handler' => 'tbr_tuition_handler_numeric',
        'click sortable' => TRUE,
      ),
      'sort' => array(
        'handler' => 'views_handler_sort',
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_string',
      ),
    ),

            '2015_maint' => array(
      'title' => t('2014-2015 Maintenance'),
      'help' => t('Tuition - 2015 Maintenance Fee (Tuition)'),
      'field' => array(
        'handler' => 'tbr_tuition_handler_numeric',
        'click sortable' => TRUE,
      ),
      'sort' => array(
        'handler' => 'views_handler_sort',
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_string',
      ),
    ),
            '2015_mand' => array(
      'title' => t('2014-2015 Mandatory Fee'),
      'help' => t('Tuition - 2015 Mandatory  Fee'),
      'field' => array(
        'handler' => 'tbr_tuition_handler_numeric',
        'click sortable' => TRUE,
      ),
      'sort' => array(
        'handler' => 'views_handler_sort',
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_string',
      ),
    ),
            '2016_maint' => array(
      'title' => t('2015-2016 Maintenance'),
      'help' => t('Tuition - 2016 Maintenance Fee (Tuition)'),
      'field' => array(
        'handler' => 'tbr_tuition_handler_numeric',
        'click sortable' => TRUE,
      ),
      'sort' => array(
        'handler' => 'views_handler_sort',
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_string',
      ),
    ),
            '2016_mand' => array(
      'title' => t('2015-2016 Mandatory Fee'),
      'help' => t('Tuition - 2016 Mandatory  Fee'),
      'field' => array(
        'handler' => 'tbr_tuition_handler_numeric',
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
