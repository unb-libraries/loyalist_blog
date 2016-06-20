<?php
/**
 * @file
 * loyalist_blog.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function loyalist_blog_default_rules_configuration() {
  $items = array();
  $items['rules_moderate_comment'] = entity_import('rules_config', '{ "rules_moderate_comment" : {
      "LABEL" : "Moderate Blog comment",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "comment" ],
      "ON" : { "comment_insert--comment_node_blog" : { "bundle" : "comment_node_blog" } },
      "DO" : [
        { "mail" : {
            "to" : "k3y7@unb.ca",
            "subject" : "Loyalist: New Blog comment",
            "message" : "A new comment has been posted from [comment:hostname] and is awaiting approval. The direct address is:\\r\\n[comment:url]",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  return $items;
}
