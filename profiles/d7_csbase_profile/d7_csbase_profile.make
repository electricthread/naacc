;****************************************
; D7 Base CS Platform
;****************************************

 api  = 2
 core = 7.x

;****************************************
; Features
;****************************************
 projects[d7_advertisement_banners][type]            = module
 projects[d7_advertisement_banners][download][type]  = git
 projects[d7_advertisement_banners][download][url]   = git@github.com:centresource/d7_advertisement_banners.git

 projects[d7_basic_page][type]                  		 = module
 projects[d7_basic_page][download][type]        		 = git
 projects[d7_basic_page][download][url]         		 = git@github.com:centresource/d7_basic_page.git

 projects[d7_case_studies][type]                  	 = module
 projects[d7_case_studies][download][type]        	 = git
 projects[d7_case_studies][download][url]         	 = git@github.com:centresource/d7_case_studies.git

 projects[d7_comments][type]                    		 = module
 projects[d7_comments][download][type]          		 = git
 projects[d7_comments][download][url]           		 = git@github.com:centresource/d7_comments.git

 projects[d7_events][type]                      		 = module
 projects[d7_events][download][type]            		 = git
 projects[d7_events][download][url]             		 = git@github.com:centresource/d7_events.git

 projects[d7_base_feature][type]            				 = module
 projects[d7_base_feature][download][type]  				 = git
 projects[d7_base_feature][download][url]   				 = git@github.com:centresource/d7_base_feature.git

 projects[d7_base_wysiwyg][type]                 	 	 = module
 projects[d7_base_wysiwyg][download][type]       	 	 = git
 projects[d7_base_wysiwyg][download][url]        	 	 = git@github.com:centresource/d7_base_wysiwyg.git

 projects[d7_faq][type]                        		 	 = module
 projects[d7_faq][download][type]              		 	 = git
 projects[d7_faq][download][url]               		 	 = git@github.com:centresource/d7_faq.git

 projects[d7_news][type]                        		 = module
 projects[d7_news][download][type]              		 = git
 projects[d7_news][download][url]               		 = git@github.com:centresource/d7_news.git

 projects[d7_photos][type]                      		 = module
 projects[d7_photos][download][type]            		 = git
 projects[d7_photos][download][url]             		 = git@github.com:centresource/d7_photos.git

 projects[d7_simple_blog][type]                 		 = module
 projects[d7_simple_blog][download][type]       		 = git
 projects[d7_simple_blog][download][url]        		 = git@github.com:centresource/d7_simple_blog.git

 projects[d7_staff][type]                 		 			 = module
 projects[d7_staff][download][type]       		 			 = git
 projects[d7_staff][download][url]        		 			 = git@github.com:centresource/d7_staff.git

 projects[d7_videos][type]                      		 = module
 projects[d7_videos][download][type]            		 = git
 projects[d7_videos][download][url]             		 = git@github.com:centresource/d7_videos.git

 projects[d7_views_feature][type]               		 = module
 projects[d7_views_feature][download][type]     		 = git
 projects[d7_views_feature][download][url]      		 = git@github.com:centresource/d7_views_feature.git


;****************************************
; Modules
;****************************************

; contrib
;
 projects[]																= addressfield
 projects[]																= admin_menu
 projects[]																= auto_entitylabel
 projects[]																= backup_migrate
 projects[]																= backup_migrate_files
 projects[]																= better_formats
 projects[]																= calendar
 projects[]							  								= captcha
 projects[]																= ckeditor_link
 projects[]																= colorbox
 projects[]																= comment_notify
 projects[]																= context
 projects[]																= ctools
 projects[]																= date
 projects[]																= demo
 projects[]																= devel
 projects[]																= email
 projects[]																= entity
 projects[]																= entity_autocomplete
 projects[eva][version]										= 1.x-dev
 projects[]																= features
 projects[]																= features_override
 projects[]																= fences
 projects[]																= field_collection
 projects[]																= field_collection_table
 projects[]																= file_entity
 projects[]																= file_entity_link
 projects[]																= field_group
 projects[]																= flexslider
 projects[]																= flexslider_views_slideshow
 projects[]																= fontyourface
 projects[]																= geofield
 projects[]																= geophp
 projects[]																= geocoder
 projects[]																= globalredirect
 projects[]																= google_analytics
 projects[]																= internal_nodes
 projects[]																= jplayer
 projects[]																= libraries
 projects[]																= link
 projects[]																= location
 projects[]									  						= manualcrop
 projects[media][version]									= 2.0-alpha3
 projects[]																= media_vimeo
 projects[]																= media_youtube
 projects[]																= mediaelement
 projects[]																= menu_attributes
 projects[]																= menu_block
 projects[]																= metatag
 projects[]																= module_filter
 projects[]																= mollom
 projects[]																= multiform
 projects[]																= multiselect
 projects[]																= nodequeue
 projects[]																= nodereference_url
 projects[]																= openlayers
 projects[openlayers_proximity][version]	= 2.x-dev
 projects[]																= pathauto
 projects[]																= plupload
 projects[]																= proj4js
 projects[]																= quicktabs
 projects[]																= recaptcha
 projects[]																= references
 projects[]																= rules
 projects[]																= search_krumo
 projects[]																= scheduler
 projects[]																= security_review
 projects[]																= speedy
 projects[]																= storage_api
 projects[]																= strongarm
 projects[]																= styles
 projects[]																= superfish
 projects[]																= token
 projects[]																= transliteration
 projects[]																= twitter
 projects[]																= views
 projects[]																= views_accordion
 projects[]																= views_slideshow
 projects[]																= webform
 projects[]																= xmlsitemap
 projects[wysiwyg][patch][]               =  http://drupal.org/files/wysiwyg-ckeditor-4.1853550.136.patch

;****************************************
; Themes
;****************************************

 projects[]	= mothership

;****************************************
; Libraries in sites/all/libraries
;****************************************

; CKEditor library for modules CKEditor (ckeditor) and Wysiwyg API (wysiwyg).
 libraries[ckeditor][directory_name]         = ckeditor
 libraries[ckeditor][download][type]         = file
 libraries[ckeditor][download][url]          = http://download.cksource.com/CKEditor/CKEditor/CKEditor%204.0.2/ckeditor_4.0.2_standard.zip

; Colorbox plugin library for module Colorbox (colorbox).
 libraries[colorbox][directory_name]         = colorbox
 libraries[colorbox][download][type]         = get
 libraries[colorbox][download][url]          = https://github.com/jackmoore/colorbox/archive/master.zip

; Plupload plugin library for module Plupload (plupload).
 libraries[plupload][directory_name]         = plupload
 libraries[plupload][download][type] 				 = file
 libraries[plupload][download][url]          = http://plupload.com/downloads/plupload_1_5_6.zip
 libraries[plupload][patch][]                = "http://drupal.org/files/plupload-1_5_6-rm_examples-1903850-5.patch"

; Superfish plugin library for module Superfish (superfish).
 libraries[superfish][directory_name]        = superfish
 libraries[superfish][download][type]        = get
 libraries[superfish][download][url]         = https://github.com/mehrpadin/Superfish-for-Drupal/zipball/master

 ; Flexslider plugin library for module Flexslider (flexslider).
 libraries[flexslider][directory_name]       = flexslider
 libraries[flexslider][download][type]       = get
 libraries[flexslider][download][url]        = https://github.com/woothemes/FlexSlider/archive/master.zip
