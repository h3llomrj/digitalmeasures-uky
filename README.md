# digitalmeasures-uky

This is a submodule of the [Digital Measures](https://www.drupal.org/project/digitalmeasures) API.

## Intructions

1. Download, install, and activate [digitalmeasures](https://www.drupal.org/project/digitalmeasures), this module, and the [field_collection](https://www.drupal.org/project/field_collection) module.
2. Visit the modules configuration page, admin/config/services/digitalmeasures. Enter your Digital Measures service account username, password.
3. Run the digitalmeasures_uky_getFaculty function from a PHP input (bad I know).

## Features
* Pull all active/non-seperated faculty that your service account has access to into a Faculty vocabulary
* Pull those faculties selected publications into a Publication node and tag all applicable faculty to that node
* Bring your server to a halt for 5-10 minutes

## Todo
* Create a configuration page with seperate tabs/pages to choose which sections and fields to import
