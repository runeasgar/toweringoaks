<?php
/**
 * @file
 * to_announcements.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function to_announcements_default_rules_configuration() {
  $items = array();
  $items['rules_critical_announcement'] = entity_import('rules_config', '{ "rules_critical_announcement" : {
      "LABEL" : "Critical Announcement",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_insert--announcement" : { "bundle" : "announcement" } },
      "IF" : [ { "data_is" : { "data" : [ "node:field-critical" ], "value" : "1" } } ],
      "DO" : [
        { "mail_to_users_of_role" : {
            "roles" : { "value" : { "4" : "4", "5" : "5", "6" : "6" } },
            "subject" : "Critical Towering Oaks announcement: [node:title]",
            "message" : "[node:title]\\r\\nPosted by [node:author] at [node:created]\\r\\n\\r\\n[node:body]\\r\\n\\r\\nYou can view this announcement at: [node:url]\\r\\n\\r\\nThis message was sent by the [site:name] website at [site:url]"
          }
        }
      ]
    }
  }');
  return $items;
}
