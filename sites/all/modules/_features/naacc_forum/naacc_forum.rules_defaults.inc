<?php
/**
 * @file
 * naacc_forum.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function naacc_forum_default_rules_configuration() {
  $items = array();
  $items['rules_email_members_when_forum_is_created'] = entity_import('rules_config', '{ "rules_email_members_when_forum_is_created" : {
      "LABEL" : "Email Members When Forum is Created",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "forum", "members" ],
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_insert--forum" : { "bundle" : "forum" } },
      "DO" : [
        { "mail_to_users_of_role" : {
            "roles" : { "value" : { "6" : "6", "5" : "5", "3" : "3" } },
            "subject" : "NAACC Forum - [node:title]",
            "message" : "Dear member,\\r\\n\\r\\nA new forum topic, [node:title], has been created. Log in below to join the conversation!\\r\\n\\r\\n[site:login-url]?destination=node\\/[node:nid]\\r\\n\\r\\nThanks,\\r\\nNashville Area Association of Christian Counselors"
          }
        }
      ]
    }
  }');
  return $items;
}
