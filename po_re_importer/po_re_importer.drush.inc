<?php
function po_re_importer_drush_command() {
  $items['po-re-import-all'] = array(
    'callback' => 'po_re_importer_import_all',
    'description' => 'Re-import all changed PO-files',
  );
  return $items;
}

function po_re_importer_import_all() {
  _po_re_importer_update_index();

  $languages = po_re_importer_language_list();
  foreach($languages as $language_code => $language_name) {
    $components = _po_re_importer_get_projects(NULL, $language_code, 'name', TRUE);
    $items = array_keys($components);
    if ($batch = po_re_importer_batch_check_files($items, $language_code, 'default', '0', 'po_re_importer_batch_import_finished')) {
      $batch['progressive'] = FALSE;
      batch_set($batch);

      $batch =& batch_get();
      $batch['progressive'] = FALSE;

      // Process the batch.
      drush_backend_batch_process();

      cache_clear_all();
    }
  }
}

