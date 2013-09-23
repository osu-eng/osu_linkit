<?php
/**
 * @file
 * osu_linkit.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function osu_linkit_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "linkit" && $api == "linkit_profiles") {
    return array("version" => "1");
  }
}
