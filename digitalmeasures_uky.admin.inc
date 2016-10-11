<?php

/*
 ********************************************************
 ***                                                  ***
 ***  Created by Matt Johnson -- matt.johnson@uky.edu ***
 ***                                                  ***
 ********************************************************
 */

/**
 * @file
 * Administrative page callbacks for the Digital Measures module.
 */

/**
 * Digital Measures admin configuration form.
 */
function digitalmeasures_uky_admin_config_form($form, &$form_state) {
	return system_settings_form($form);
}
