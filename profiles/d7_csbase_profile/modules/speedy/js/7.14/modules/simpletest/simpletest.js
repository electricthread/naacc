(function(a){Drupal.behaviors.simpleTestMenuCollapse={attach:function(b,c){var d=null;a("div.simpletest-image").each(function(){direction=c.simpleTest[a(this).attr("id")].imageDirection,a(this).html(c.simpleTest.images[direction])}),a("div.simpletest-image").click(function(){function g(){e?f>=0&&(a(b[f]).hide(),f--,d=setTimeout(g,20)):f<b.length&&(a(b[f]).removeClass("js-hide").show(),f++,d=setTimeout(g,20))}var b=a(this).closest("tbody").children("."+c.simpleTest[this.id].testClass),e=c.simpleTest[this.id].imageDirection,f=e?b.length-1:0;d&&clearTimeout(d),g(),a(this).html(c.simpleTest.images[e?0:1]),c.simpleTest[this.id].imageDirection=!e})}},Drupal.behaviors.simpleTestSelectAll={attach:function(b,c){a("td.simpletest-select-all").each(function(){var b=c.simpleTest["simpletest-test-group-"+a(this).attr("id")].testNames,d=a('<input type="checkbox" class="form-checkbox" id="'+a(this).attr("id")+'-select-all" />'),e=function(){var c=0;for(var e=0;e<b.length;e++)a("#"+b[e]).each(function(){a(this).attr("checked")&&c++});a(d).attr("checked",c==b.length)};d.change(function(){var c=!!a(this).attr("checked");for(var d=0;d<b.length;d++)a("#"+b[d]).attr("checked",c)});for(var f=0;f<b.length;f++)a("#"+b[f]).change(function(){e()});e(),a(this).append(d)})}}})(jQuery);