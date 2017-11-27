
/*******************************************************************************
* This file was generated by UI Builder.
* This file will be auto-generated each and everytime you save your project.
* Do not hand edit this file.
********************************************************************************/
		#include "g_inc_uib.h"
#include "uib_views.h"
#include "uib_views_inc.h"
#include "uib_app_manager.h"


/* event handler declarations */
void view_main_onuib_view_create(uib_view_main_view_context*, Evas_Object*, void*);
void view_main_entry_server_ip_onclicked(uib_view_main_view_context*, Evas_Object*, void*);
void view_main_entry_server_port_onclicked(uib_view_main_view_context*, Evas_Object*, void*);
void view_main_hoversel_mode_onclicked(uib_view_main_view_context*, Evas_Object*, void*);
void view_main_button_connect_onclicked(uib_view_main_view_context*, Evas_Object*, void*);
void view_main_button_exit_onclicked(uib_view_main_view_context*, Evas_Object*, void*);

uib_view_context* uib_view_view_main_create(Evas_Object* parent, void* create_callback_param) {
	uib_view_main_view_context* vc = calloc(1, sizeof(uib_view_main_view_context));
	vc->parent = parent;
	vc->view_name = "view_main";
	vc->indicator_state = ELM_WIN_INDICATOR_SHOW;
	vc->is_user_view = false;
	uib_app_manager_get_instance()->add_view_context((uib_view_context*)vc);
	if (!vc->grid_main) {
		vc->grid_main= elm_grid_add(parent);
		vc->root_container = vc->grid_main;
	}
	uib_views_get_instance()->set_targeted_view((uib_view_context*)vc);

	//bind event handler
	evas_object_smart_callback_add(vc->root_container, "uib,view,create", (Evas_Smart_Cb)view_main_onuib_view_create, vc);
	evas_object_smart_callback_add(vc->entry_server_ip, "clicked", (Evas_Smart_Cb)view_main_entry_server_ip_onclicked, vc);
	evas_object_smart_callback_add(vc->entry_server_port, "clicked", (Evas_Smart_Cb)view_main_entry_server_port_onclicked, vc);
	evas_object_smart_callback_add(vc->hoversel_mode, "clicked", (Evas_Smart_Cb)view_main_hoversel_mode_onclicked, vc);
	evas_object_smart_callback_add(vc->button_connect, "clicked", (Evas_Smart_Cb)view_main_button_connect_onclicked, vc);
	evas_object_smart_callback_add(vc->button_exit, "clicked", (Evas_Smart_Cb)view_main_button_exit_onclicked, vc);


	evas_object_data_set(vc->root_container, KEY_VIEW_CONTEXT, vc);
	uib_views_create_callback(vc, evas_object_evas_get(vc->root_container), vc->root_container, create_callback_param);
	evas_object_event_callback_add(vc->root_container, EVAS_CALLBACK_DEL, (Evas_Object_Event_Cb)uib_views_destroy_callback, vc);

	return (uib_view_context*)vc;
}
void uib_view_main_config_HD_portrait() {
	uib_app_manager_st* uib_app_manager = uib_app_manager_get_instance();
	uib_view_main_view_context* vc = (uib_view_main_view_context*)uib_app_manager->find_view_context("view_main");
	if(!vc) {
		return;
	}
	if(vc->grid_main) {
		elm_grid_clear(vc->grid_main, EINA_FALSE);
		evas_object_size_hint_align_set(vc->grid_main, -1.0, -1.0);		evas_object_size_hint_weight_set(vc->grid_main, 1.0, 1.0);		elm_grid_size_set(vc->grid_main, 1000, 1000);
		if (!vc->entry_server_ip) {
			vc->entry_server_ip= elm_entry_add(vc->grid_main);
		}
		if(vc->entry_server_ip) {
			elm_object_text_set(vc->entry_server_ip,_UIB_LOCALE("10.0.0.12"));
			elm_entry_single_line_set(vc->entry_server_ip, EINA_TRUE);
			elm_entry_password_set(vc->entry_server_ip, EINA_FALSE);
			elm_entry_editable_set(vc->entry_server_ip, EINA_TRUE);
			elm_entry_context_menu_disabled_set(vc->entry_server_ip, EINA_FALSE);
			elm_entry_scrollable_set(vc->entry_server_ip, EINA_FALSE);
			evas_object_size_hint_align_set(vc->entry_server_ip, -1.0, -1.0);
			evas_object_size_hint_weight_set(vc->entry_server_ip, 1.0, 1.0);
			elm_object_disabled_set(vc->entry_server_ip, EINA_FALSE);
			evas_object_show(vc->entry_server_ip);
		}
		if (!vc->label1) {
			vc->label1 = elm_label_add(vc->grid_main);
		}
		if(vc->label1) {
			evas_object_size_hint_align_set(vc->label1, -1.0, -1.0);			evas_object_size_hint_weight_set(vc->label1, 1.0, 1.0);			elm_object_text_set(vc->label1,_UIB_LOCALE("Debug Info"));
			elm_label_line_wrap_set(vc->label1, (Elm_Wrap_Type)ELM_WRAP_NONE);
			elm_label_wrap_width_set(vc->label1,0);
			elm_label_ellipsis_set(vc->label1, EINA_TRUE);
			evas_object_show(vc->label1);
		}
		if (!vc->label_server_ip) {
			vc->label_server_ip = elm_label_add(vc->grid_main);
		}
		if(vc->label_server_ip) {
			evas_object_size_hint_align_set(vc->label_server_ip, -1.0, -1.0);			evas_object_size_hint_weight_set(vc->label_server_ip, 1.0, 1.0);			elm_object_text_set(vc->label_server_ip,_UIB_LOCALE("Server IP"));
			elm_label_line_wrap_set(vc->label_server_ip, (Elm_Wrap_Type)ELM_WRAP_NONE);
			elm_label_wrap_width_set(vc->label_server_ip,0);
			elm_label_ellipsis_set(vc->label_server_ip, EINA_TRUE);
			evas_object_show(vc->label_server_ip);
		}
		if (!vc->label_server_port) {
			vc->label_server_port = elm_label_add(vc->grid_main);
		}
		if(vc->label_server_port) {
			evas_object_size_hint_align_set(vc->label_server_port, -1.0, -1.0);			evas_object_size_hint_weight_set(vc->label_server_port, 1.0, 1.0);			elm_object_text_set(vc->label_server_port,_UIB_LOCALE("Server Port"));
			elm_label_line_wrap_set(vc->label_server_port, (Elm_Wrap_Type)ELM_WRAP_NONE);
			elm_label_wrap_width_set(vc->label_server_port,0);
			elm_label_ellipsis_set(vc->label_server_port, EINA_TRUE);
			evas_object_show(vc->label_server_port);
		}
		if (!vc->entry_server_port) {
			vc->entry_server_port= elm_entry_add(vc->grid_main);
		}
		if(vc->entry_server_port) {
			elm_object_text_set(vc->entry_server_port,_UIB_LOCALE("50005"));
			elm_entry_single_line_set(vc->entry_server_port, EINA_TRUE);
			elm_entry_password_set(vc->entry_server_port, EINA_FALSE);
			elm_entry_editable_set(vc->entry_server_port, EINA_TRUE);
			elm_entry_context_menu_disabled_set(vc->entry_server_port, EINA_FALSE);
			elm_entry_scrollable_set(vc->entry_server_port, EINA_FALSE);
			evas_object_size_hint_align_set(vc->entry_server_port, -1.0, -1.0);
			evas_object_size_hint_weight_set(vc->entry_server_port, 1.0, 1.0);
			elm_object_disabled_set(vc->entry_server_port, EINA_FALSE);
			evas_object_show(vc->entry_server_port);
		}
		if (!vc->button_settings) {
			vc->button_settings = elm_button_add(vc->grid_main);
		}
		if (vc->button_settings) {
			evas_object_size_hint_align_set(vc->button_settings, -1.0, -1.0);			evas_object_size_hint_weight_set(vc->button_settings, 1.0, 1.0);			elm_object_text_set(vc->button_settings,_UIB_LOCALE("Settings"));
			elm_object_style_set(vc->button_settings,"default");
			evas_object_show(vc->button_settings);
		}
		if (!vc->label_mode) {
			vc->label_mode = elm_label_add(vc->grid_main);
		}
		if(vc->label_mode) {
			evas_object_size_hint_align_set(vc->label_mode, -1.0, -1.0);			evas_object_size_hint_weight_set(vc->label_mode, 1.0, 1.0);			elm_object_text_set(vc->label_mode,_UIB_LOCALE("Mode"));
			elm_label_line_wrap_set(vc->label_mode, (Elm_Wrap_Type)ELM_WRAP_NONE);
			elm_label_wrap_width_set(vc->label_mode,0);
			elm_label_ellipsis_set(vc->label_mode, EINA_TRUE);
			evas_object_show(vc->label_mode);
		}
		if (!vc->hoversel_mode) {
			vc->hoversel_mode= elm_hoversel_add(vc->grid_main);
		}
		if(vc->hoversel_mode) {
			Evas_Object *win = elm_object_top_widget_get(vc->grid_main);
			elm_hoversel_hover_parent_set(vc->hoversel_mode,win);
			vc->hoverselitem_remote_mode= elm_hoversel_item_add(vc->hoversel_mode, _UIB_LOCALE("Remote"), NULL, ELM_ICON_NONE, NULL, NULL);
			vc->hoverselitem_standalone= elm_hoversel_item_add(vc->hoversel_mode, _UIB_LOCALE("Standalone"), NULL, ELM_ICON_NONE, NULL, NULL);
			evas_object_size_hint_align_set(vc->hoversel_mode, -1.0, -1.0);			evas_object_size_hint_weight_set(vc->hoversel_mode, 1.0, 1.0);			elm_object_text_set(vc->hoversel_mode,_UIB_LOCALE("Remote"));
			elm_object_disabled_set(vc->hoversel_mode, EINA_FALSE);
			evas_object_show(vc->hoversel_mode);
		}
		if (!vc->button_reset) {
			vc->button_reset = elm_button_add(vc->grid_main);
		}
		if (vc->button_reset) {
			evas_object_size_hint_align_set(vc->button_reset, -1.0, -1.0);			evas_object_size_hint_weight_set(vc->button_reset, 1.0, 1.0);			elm_object_text_set(vc->button_reset,_UIB_LOCALE("Reset settings"));
			elm_object_style_set(vc->button_reset,"default");
			evas_object_show(vc->button_reset);
		}
		if (!vc->button_connect) {
			vc->button_connect = elm_button_add(vc->grid_main);
		}
		if (vc->button_connect) {
			evas_object_size_hint_align_set(vc->button_connect, -1.0, -1.0);			evas_object_size_hint_weight_set(vc->button_connect, 1.0, 1.0);			elm_object_text_set(vc->button_connect,_UIB_LOCALE("Connect"));
			elm_object_style_set(vc->button_connect,"default");
			evas_object_show(vc->button_connect);
		}
		if (!vc->hoversel_server_ip) {
			vc->hoversel_server_ip= elm_hoversel_add(vc->grid_main);
		}
		if(vc->hoversel_server_ip) {
			Evas_Object *win = elm_object_top_widget_get(vc->grid_main);
			elm_hoversel_hover_parent_set(vc->hoversel_server_ip,win);
			evas_object_size_hint_align_set(vc->hoversel_server_ip, -1.0, -1.0);			evas_object_size_hint_weight_set(vc->hoversel_server_ip, 1.0, 1.0);			elm_object_text_set(vc->hoversel_server_ip,_UIB_LOCALE("Server IPs"));
			elm_object_disabled_set(vc->hoversel_server_ip, EINA_FALSE);
			evas_object_show(vc->hoversel_server_ip);
		}
		if (!vc->hoversel_server_port) {
			vc->hoversel_server_port= elm_hoversel_add(vc->grid_main);
		}
		if(vc->hoversel_server_port) {
			Evas_Object *win = elm_object_top_widget_get(vc->grid_main);
			elm_hoversel_hover_parent_set(vc->hoversel_server_port,win);
			evas_object_size_hint_align_set(vc->hoversel_server_port, -1.0, -1.0);			evas_object_size_hint_weight_set(vc->hoversel_server_port, 1.0, 1.0);			elm_object_text_set(vc->hoversel_server_port,_UIB_LOCALE("Server ports"));
			elm_object_disabled_set(vc->hoversel_server_port, EINA_FALSE);
			evas_object_show(vc->hoversel_server_port);
		}
		if (!vc->button_exit) {
			vc->button_exit = elm_button_add(vc->grid_main);
		}
		if (vc->button_exit) {
			evas_object_size_hint_align_set(vc->button_exit, -1.0, -1.0);			evas_object_size_hint_weight_set(vc->button_exit, 1.0, 1.0);			elm_object_text_set(vc->button_exit,_UIB_LOCALE("Exit"));
			elm_object_style_set(vc->button_exit,"default");
			evas_object_show(vc->button_exit);
		}
		elm_grid_pack(vc->grid_main, vc->entry_server_ip, 269, 185, 407, 48);		elm_grid_pack(vc->grid_main, vc->label1, 44, 65, 197, 24);		elm_grid_pack(vc->grid_main, vc->label_server_ip, 85, 199, 139, 24);		elm_grid_pack(vc->grid_main, vc->label_server_port, 84, 372, 181, 36);		elm_grid_pack(vc->grid_main, vc->entry_server_port, 278, 362, 402, 48);		elm_grid_pack(vc->grid_main, vc->button_settings, 123, 784, 286, 49);		elm_grid_pack(vc->grid_main, vc->label_mode, 89, 114, 139, 24);		elm_grid_pack(vc->grid_main, vc->hoversel_mode, 275, 105, 556, 46);		elm_grid_pack(vc->grid_main, vc->button_reset, 510, 784, 419, 48);		elm_grid_pack(vc->grid_main, vc->button_connect, 280, 552, 471, 74);		elm_grid_pack(vc->grid_main, vc->hoversel_server_ip, 274, 268, 557, 52);		elm_grid_pack(vc->grid_main, vc->hoversel_server_port, 278, 462, 561, 57);		elm_grid_pack(vc->grid_main, vc->button_exit, 406, 891, 210, 49);		evas_object_show(vc->grid_main);
	}
}

