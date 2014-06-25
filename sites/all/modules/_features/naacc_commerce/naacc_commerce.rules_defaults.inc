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
  $items['rules_donation_as_price_checkout_'] = entity_import('rules_config', '{ "rules_donation_as_price_checkout_" : {
      "LABEL" : "Donation as Price (checkout)",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [
        "commerce_order",
        "rules",
        "commerce_line_item",
        "commerce_rules_extra",
        "commerce_product_reference"
      ],
      "ON" : { "commerce_product_calculate_sell_price" : [] },
      "IF" : [
        { "commerce_order_contains_product_type" : {
            "commerce_order" : [ "commerce-line-item:order" ],
            "product_type" : { "value" : { "donation" : "donation" } },
            "operator" : "\\u003E=",
            "value" : "1"
          }
        },
        { "entity_has_field" : { "entity" : [ "commerce-line-item" ], "field" : "field_donation_field" } },
        { "NOT data_is_empty" : { "data" : [ "commerce-line-item:field-donation-field" ] } }
      ],
      "DO" : [
        { "data_calc" : {
            "USING" : {
              "input_1" : [ "commerce-line-item:field-donation-field" ],
              "op" : "*",
              "input_2" : "100"
            },
            "PROVIDE" : { "result" : { "result" : "Calculation result" } }
          }
        },
        { "commerce_line_item_unit_price_amount" : {
            "commerce_line_item" : [ "commerce_line_item" ],
            "amount" : [ "result" ],
            "component_name" : "base_price",
            "round_mode" : "1"
          }
        },
        { "commerce_rules_extra_change_pane" : {
            "pane_id" : "commerce_user_profile_pane",
            "page_id" : "\\u003Csame\\u003E",
            "enabled" : 0
          }
        }
      ]
    }
  }');
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
  $items['rules_load_commerce_product_and_add_to_user_field'] = entity_import('rules_config', '{ "rules_load_commerce_product_and_add_to_user_field" : {
      "LABEL" : "Load Commerce Product and add to User field",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : {
        "line_item" : { "label" : "Line Item", "type" : "commerce_line_item" },
        "user" : { "label" : "User", "type" : "user" }
      },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "line-item" ], "field" : "commerce_product" } }
      ],
      "DO" : [
        { "data_set" : {
            "data" : [ "user:field-memberships-purchased-need" ],
            "value" : [ "line-item:commerce-product" ]
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
  $items['rules_remove_all_except_current_cart_item'] = entity_import('rules_config', '{ "rules_remove_all_except_current_cart_item" : {
      "LABEL" : "Remove All Except Current Cart Item",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "commerce_cart" ],
      "ON" : { "commerce_cart_product_add" : [] },
      "IF" : [
        { "list_contains" : {
            "list" : [ "commerce-order:commerce-line-items" ],
            "item" : [ "commerce-order:commerce-line-items:1" ]
          }
        }
      ],
      "DO" : [
        { "list_remove" : {
            "list" : [ "commerce-order:commerce-line-items" ],
            "item" : [ "commerce-order:commerce-line-items:0" ]
          }
        }
      ]
    }
  }');
  return $items;
}
