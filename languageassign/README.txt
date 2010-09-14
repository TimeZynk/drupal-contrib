$Id: README.txt,v 1.1.2.4 2010/08/04 02:54:09 andrewschulman Exp $

-- SUMMARY --

Language assignment lets you set the language of multiple nodes
or users at a time. To use it, go to the bulk node update form
(admin/content/node) or bulk user update form (admin/user/user), open
the Update options selector, and look for the "Set language"
options. (It also adds a Language column to the user table in the
bulk user update form.)

If Views bulk operations is installed at your site, then a "Set
language" operation will also become available in your node and user
bulk operation-style views.  To enable the operation, edit your view,
click on the gear icon to edit the "Bulk operations" style options,
check the "Set language" checkbox, and save the view.

You may find Language assignment useful if:

* You're adding multilingual capability to an existing site, and you want
  to assign languages to your existing content and users.

* Users haven't been setting the language field correctly as they've
  created content.  (Note that you can minimize this problem if you
  have the i18n module installed, by setting default node language
  options for each content type, at Administer > Content Management >
  Content Types > edit > Multilanguage options).


-- REQUIREMENTS --

You must enable the Locale module (in Core - optional) in order to use
Language assignment.


-- INSTALLATION --

Install as usual, see http://drupal.org/node/70151 for further information.


-- CONFIGURATION --

None specific to this module.  Once you enable a language at
Administer > Site Configuration > Language, options to apply it in
bulk to your existing nodes and users will appear at Administer > Content
Management > Content and Administer > User Management > Users.


-- CONTACT --

Maintainer: Andrew Schulman - http://drupal.org/user/279446
