<?php

drupal_add_css(drupal_get_path('module', 'gnucbudget') . '/css/accounts-balances-public.css');
print render($page['content']); 