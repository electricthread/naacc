<?php
/**
 * @file
 * naacc_commerce.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function naacc_commerce_default_rules_configuration() {
  $items = array();
  $items['rules_email_user_1_month_before_expire'] = entity_import('rules_config', '{ "rules_email_user_1_month_before_expire" : {
      "LABEL" : "Email User 1 Month before Expire",
      "PLUGIN" : "action set",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "user" : { "label" : "User", "type" : "user" } },
      "ACTION SET" : [
        { "mail" : {
            "to" : "[user:mail]",
            "subject" : "Your NAACC membership will expire in 1 month.",
            "message" : "Dear [user:field-first-name],\\r\\n\\r\\nYour NAACC membership will expire in 1 month. To renew your membership, click the link below.\\r\\n\\r\\n\\u003Ca href=\\u0022[site:url]\\/join\\u0022\\u003ERenew Your Membership\\u003C\\/a\\u003E\\r\\n\\r\\nThanks,\\r\\nNAACC",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_redirect_to_cart'] = entity_import('rules_config', '{ "rules_redirect_to_cart" : {
      "LABEL" : "Redirect to Cart",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "commerce_cart" ],
      "ON" : { "commerce_cart_product_add" : [] },
      "DO" : [ { "redirect" : { "url" : "cart" } } ]
    }
  }');
  return $items;
}
