<?php

/**
 * @file
 * Displaying the field as a number with a comma.
 */

/**
 *
 * @ingroup views_filter_handlers
 */
class tbr_tuition_handler_numeric extends views_handler_field {
  /**
  * Render the name field.
  */
  public function render($values) {
    $value = $this->get_value($values);
    $return = number_format($value);
    return $return;
  }
}

/**
 * This allows us to take the TID and look up the actual term name and return that value
 *
 * @ingroup views_filter_handlers
 */

class tbr_tuition_handler_term extends views_handler_field {
  /**
  * Render the name field.
  */
  public function render($values) {
    $value = $this->get_value($values);
    $term = taxonomy_term_load($value);
    $return = $term->name;
    //print dpm($values);
    return $return;
  }
}