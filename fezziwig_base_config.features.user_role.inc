<?php
/**
 * @file
 * fezziwig_base_config.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function fezziwig_base_config_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  // Exported role: site owner.
  $roles['site owner'] = array(
    'name' => 'site owner',
    'weight' => 3,
  );

  return $roles;
}
