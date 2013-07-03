<?php
/**
 * @file
 * home_page_landing_page_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function home_page_landing_page_feature_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}
