<?php
/**
 * @file
 * to_events.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function to_events_default_rules_configuration() {
  $items = array();
  $items['rules_event_with_attendance_recommended'] = entity_import('rules_config', '{ "rules_event_with_attendance_recommended" : {
      "LABEL" : "Event with Attendance Recommended",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_insert--event" : { "bundle" : "event" } },
      "IF" : [
        { "data_is" : { "data" : [ "node:field-attendance-recommended" ], "value" : "1" } }
      ],
      "DO" : [
        { "mail_to_users_of_role" : {
            "roles" : { "value" : { "4" : "4", "5" : "5", "6" : "6" } },
            "subject" : "Your Attendance is recommended for this Towering Oaks event: [node:title]",
            "message" : "[node:title]\\r\\n\\r\\nPosted by [node:author] at [node:created]\\r\\n\\r\\n[node:body]\\r\\n\\r\\nYou can view this event and RSVP at: [node:url]\\r\\n\\r\\nThis message was sent by the [site:name] website at [site:url]"
          }
        }
      ]
    }
  }');
  return $items;
}
