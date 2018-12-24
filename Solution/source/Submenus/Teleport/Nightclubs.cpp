/*
* Menyoo PC - Grand Theft Auto V single-player trainer mod
* Copyright (C) 2019  MAFINS
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*/
#include "Nightclubs.h"

#include "..\..\macros.h"

#include "..\..\Menu\Menu.h"
//#include "..\..\Menu\Routine.h"

#include "..\..\Natives\natives2.h"
#include "..\..\Util\GTAmath.h"
//#include "..\..\Scripting\GTAped.h"

#include "TeleLocation.h"
#include "TeleMethods.h"

#include <vector>

namespace sub::TeleportLocations_catind
{
	namespace Nightclubs
	{
#pragma region othernightclub interior props lists
		//Zemanez, RootCause

		const std::vector<PCHAR> vNcPropsROOTCAUSE{
			"Int01_ba_security_upgrade",
			"Int01_ba_equipment_setup",
			"Int01_ba_Style01",
			"Int01_ba_Style02",
			"Int01_ba_Style03",
			"Int01_ba_style01_podium",
			"Int01_ba_style02_podium",
			"Int01_ba_style03_podium",
			"int01_ba_lights_screen",
			"Int01_ba_Screen",
			"Int01_ba_bar_content",
			"Int01_ba_booze_01",
			"Int01_ba_booze_02",
			"Int01_ba_booze_03",
			"Int01_ba_dj01",
			"Int01_ba_dj02",
			"Int01_ba_dj03",
			"Int01_ba_dj04",
			"DJ_01_Lights_01",
			"DJ_01_Lights_02",
			"DJ_01_Lights_03",
			"DJ_01_Lights_04",
			"DJ_02_Lights_01",
			"DJ_02_Lights_02",
			"DJ_02_Lights_03",
			"DJ_02_Lights_04",
			"DJ_03_Lights_01",
			"DJ_03_Lights_02",
			"DJ_03_Lights_03",
			"DJ_03_Lights_04",
			"DJ_04_Lights_01",
			"DJ_04_Lights_02",
			"DJ_04_Lights_03",
			"DJ_04_Lights_04",
			"light_rigs_off",
			"Int01_ba_lightgrid_01",
			"Int01_ba_Clutter",
			"Int01_ba_equipment_upgrade",
			"Int01_ba_clubname_01",
			"Int01_ba_clubname_02",
			"Int01_ba_clubname_03",
			"Int01_ba_clubname_04",
			"Int01_ba_clubname_05",
			"Int01_ba_clubname_06",
			"Int01_ba_clubname_07",
			"Int01_ba_clubname_08",
			"Int01_ba_clubname_09",
			"Int01_ba_dry_ice",
			"Int01_ba_deliverytruck",
			"Int01_ba_trophy04",
			"Int01_ba_trophy05",
			"Int01_ba_trophy07",
			"Int01_ba_trophy09",
			"Int01_ba_trophy08",
			"Int01_ba_trophy11",
			"Int01_ba_trophy10",
			"Int01_ba_trophy03",
			"Int01_ba_trophy01",
			"Int01_ba_trophy02",
			"Int01_ba_trad_lights",
			"Int01_ba_Worklamps",
		};
		const std::vector<PCHAR> vNcPropsROOTCAUSE2{
			"Int02_ba_floor01",
			"Int02_ba_floor02",
			"Int02_ba_floor03",
			"Int02_ba_floor04",
			"Int02_ba_floor05",
			"Int02_ba_sec_upgrade_grg",
			"Int02_ba_sec_upgrade_strg",
			"Int02_ba_sec_upgrade_desk",
			"Int02_ba_storage_blocker",
			"Int02_ba_garage_blocker",
			"Int02_ba_FanBlocker01",
			"Int02_ba_equipment_upgrade",
			"Int02_ba_coke01",
			"Int02_ba_coke02",
			"Int02_ba_meth01",
			"Int02_ba_meth02",
			"Int02_ba_meth03",
			"Int02_ba_meth04",
			"Int02_ba_Weed01",
			"Int02_ba_Weed02",
			"Int02_ba_Weed03",
			"Int02_ba_Weed04",
			"Int02_ba_Weed05",
			"Int02_ba_Weed06",
			"Int02_ba_Weed07",
			"Int02_ba_Weed08",
			"Int02_ba_Weed09",
			"Int02_ba_Weed10",
			"Int02_ba_Weed11",
			"Int02_ba_Weed12",
			"Int02_ba_Weed13",
			"Int02_ba_Weed14",
			"Int02_ba_Weed15",
			"Int02_ba_Weed16",
			"Int02_ba_Forged01",
			"Int02_ba_Forged02",
			"Int02_ba_Forged03",
			"Int02_ba_Forged04",
			"Int02_ba_Forged05",
			"Int02_ba_Forged06",
			"Int02_ba_Forged07",
			"Int02_ba_Forged08",
			"Int02_ba_Forged09",
			"Int02_ba_Forged10",
			"Int02_ba_Forged11",
			"Int02_ba_Forged12",
			"Int02_ba_Cash01",
			"Int02_ba_Cash02",
			"Int02_ba_Cash03",
			"Int02_ba_Cash04",
			"Int02_ba_Cash05",
			"Int02_ba_Cash06",
			"Int02_ba_Cash07",
			"Int02_ba_Cash08",
			"Int02_ba_truckmod",
			"Int02_ba_truckmod",
			"Int02_ba_coke_EQP",
			"Int02_ba_Cash_EQP",
			"Int02_ba_Forged_EQP",
			"Int02_ba_meth_EQP",
			"Int02_ba_Weed_EQP",
			"Int02_ba_DeskPC",
			"Int02_ba_sec_desks_L1",
			"Int02_ba_sec_desks_L2345",
			"Int02_ba_sec_upgrade_desk02",
			"Int02_ba_clutterstuff",
		};
		const std::vector<PCHAR> vNcPropsROOTCAUSE3{
			"Int_03_ba_weapons_mod",
			"Int_03_ba_drone",
			"Int_03_ba_Design_01",
			"Int_03_ba_Design_02",
			"Int_03_ba_Design_03",
			"Int_03_ba_Design_04",
			"Int_03_ba_Design_05",
			"Int_03_ba_Design_06",
			"Int_03_ba_Design_07",
			"Int_03_ba_Design_08",
			"Int_03_ba_Design_09",
			"Int_03_ba_Design_10",
			"Int_03_ba_Design_11",
			"Int_03_ba_Design_12",
			"Int_03_ba_Design_13",
			"Int_03_ba_Design_14",
			"Int_03_ba_Design_15",
			"Int_03_ba_Design_16",
			"Int_03_ba_Design_17",
			"Int_03_ba_Design_18",
			"Int_03_ba_Design_19",
			"Int_03_ba_Design_20",
			"Int_03_ba_Design_21",
			"Int_03_ba_Design_22",
			"Int_03_ba_Design_23",
			"Int_03_ba_Design_24",
			"Int_03_ba_Design_25",
			"Int_03_ba_bikemod",
			"Int_03_ba_Tint",
			"Int_03_ba_Light_Rig1",
			"Int_03_ba_Light_Rig2",
			"Int_03_ba_Light_Rig3",
			"Int_03_ba_Light_Rig4",
			"Int_03_ba_Light_Rig5",
			"Int_03_ba_Light_Rig6",
			"Int_03_ba_Light_Rig7",
			"Int_03_ba_Light_Rig8",
			"Int_03_ba_Light_Rig9",
		};

		//Theme specific props (to be used with Common!)
		const std::vector<PCHAR> vNcPropsEdgy = { //Dixon posters
			"ba_aircon_system",
			"ba_back_hall_decals",
			"ba_bars1_01",
			"ba_bars1_02",
			"ba_bars1_04",
			"ba_bars1_05",
			"ba_bars1_06",
			"ba_bars2_01",
			"ba_bars2_02",
			"ba_bars2_04",
			"ba_bars2_05",
			"ba_bars2_06",
			"ba_bars3_01",
			"ba_bars3_02",
			"ba_bars3_04",
			"ba_bars3_05",
			"ba_bars3_06",
			"ba_bar_emissive_tubes",
			"ba_bar_emissive_tubeslowbar",
			"ba_bar_fridge_content",
			"ba_bar_supports",
			"ba_bar_tables1",
			"ba_bar_tables2",
			"ba_bar_tables3",
			"ba_battle_club_shad_proxy",
			"ba_bat_mousemat",
			"ba_bin",
			"ba_bogpipes",
			"ba_bog_decals",
			"ba_chanpagne_fridge",
			"ba_chanpagne_fridge2",
			"ba_club_bathmirror",
			"ba_club_elevator_01",
			"ba_club_elevator_02",
			"ba_coke_doll",
			"ba_curtain1",
			"ba_curtain2",
			"ba_curtain3",
			"ba_daybed1",
			"ba_daybed2",
			"ba_daybed3",
			"ba_daybed_detail1",
			"ba_daybed_detail2",
			"ba_daybed_detail3",
			"ba_desk1",
			"ba_desk2",
			"ba_desk3",
			"ba_dj_stage",
			"ba_dj_unit",
			"ba_dri_ice_dummy",
			"ba_entrance_grubby",
			"ba_entry_pipes",
			"ba_entry_trim",
			"ba_fakeid_bundlepassports",
			"ba_flr_paper_crap",
			"ba_garage_decals",
			"ba_garage_floor_decals",
			"ba_garage_sprinkles",
			"ba_garage_supports",
			"ba_gararage_stairs",
			"ba_generic_dirt",
			"ba_gen_strip_emit",
			"ba_gen_strip_emit_upper",
			"ba_glass_marks",
			"ba_hall_bigpipe",
			"ba_int01_mule",
			"ba_int_01_club_blends",
			"ba_int_01_club_shell",
			"ba_int_01_del_supps",
			"ba_int_01_light_grid",
			"ba_louis_pic",
			"ba_lower_bar_pipes",
			"ba_main_architraves",
			"ba_main_area_architrave",
			"ba_main_grubby",
			"ba_main_sprinkles",
			"ba_main_trad_pipes",
			"ba_maisn_poster",
			"ba_meth_smallbag",
			"ba_office_door_frames",
			"ba_office_safe_inserts",
			"ba_paradise_sm_sign",
			"ba_podium1",
			"ba_podium2",
			"ba_podium3",
			"ba_prop_weed_bigbag_open_01a",
			"ba_pv2_club_stairs",
			"ba_rear_hall_sprinkler",
			"ba_scrunched_moneypage",
			"ba_security_screen_overlay",
			"ba_security_screen_upgrade",
			"ba_setup_firdges",
			"ba_shell_master_coll_dummy",
			"ba_sideboard1",
			"ba_sideboard2",
			"ba_sideboard3",
			"ba_sink1",
			"ba_sink2",
			"ba_sink3",
			"ba_small_sign_palace",
			"ba_sofa1",
			"ba_sofa2",
			"ba_sofa3",
			"ba_sol_coll_dummy",
			"ba_speaker_brack_main",
			"ba_speaker_brack_vip",
			"ba_stair_grubby",
			"ba_stair_pipes",
			"ba_sweatybetty_flr",
			"ba_tale_coll_dummy",
			"ba_tard_toilet_graff",
			"ba_toilet1",
			"ba_toilet1_overlay",
			"ba_toilet2",
			"ba_toilet3",
			"ba_toilet_2_overlay",
			"ba_toilet_clutter_01",
			"ba_toilet_clutter_02",
			"ba_toilet_clutter_03",
			"ba_toilet_props",
			"ba_toilet_trim",
			"ba_trimtofixstupidshitbits",
			"ba_tv_bracket005",
			"ba_urinal1",
			"ba_urinal2",
			"ba_urinal3",
			"ba_vip_bar1",
			"ba_vip_bar2",
			"ba_vip_bar3",
			"ba_vip_bar_fridge",
			"ba_vip_stool1",
			"ba_vip_stool2",
			"ba_vip_stool3",
			"ba_vip_table1",
			"ba_vip_table2",
			"ba_vip_table3",
			"ba_v_64_dance_bar",
			"ba_v_64_dance_bar001",
			"ba_wardrobe",
			"ba_work_light_clutter",
			"ba_work_light_clutter001",
			"ba_work_light_clutter002",
			"ba_int01_bacl_mad_posters",
			"ba_int01_mule",
			//
			"ba_edgybot_stairs",
			"ba_edgy_barriers",
			"ba_edgy_bar_shelves",
			"ba_edgy_booth",
			"ba_edgy_collpased_dr",
			"ba_edgy_counter",
			"ba_edgy_entry_shell",
			"ba_edgy_enty_columns",
			"ba_edgy_lower_bar",
			"ba_edgy_main_bits",
			"ba_edgy_office_supports",
			"ba_edgy_padding_main",
			"ba_edgy_shell",
			"ba_edgy_stair_shell",
			"ba_edgy_stair_stuff",
			"ba_edgy_supports",
			"ba_edgy_upper_bar",
			"ba_edgy_vip_stools",
			"ba_edgy_weed_table",
			"ba_int01_dixon_posters",
			"ba_int01_mule",
			"ba_int_01_club_blends",
			"ba_int_01_club_shell",
			"ba_int_01_del_supps",
			"ba_int_01_edgy_overlay",
			"ba_int_01_light_grid",
			"ba_louis_pic",
			"ba_lower_bar_pipes",
			"ba_aircon_system",
			"ba_back_hall_decals",
			"ba_bars1_01",
			"ba_bars1_02",
			"ba_bars1_04",
			"ba_bars1_05",
			"ba_bars1_06",
			"ba_bars2_01",
			"ba_bars2_02",
			"ba_bars2_04",
			"ba_bars2_05",
			"ba_bars2_06",
			"ba_bars3_01",
			"ba_bars3_02",
			"ba_bars3_04",
			"ba_bars3_05",
			"ba_bars3_06",
			"ba_bar_emissive_tubes",
			"ba_bar_emissive_tubeslowbar",
			"ba_bar_fridge_content",
			"ba_bar_supports",
			"ba_bar_tables1",
			"ba_bar_tables2",
			"ba_bar_tables3",
			"ba_battle_club_shad_proxy",
			"ba_bat_mousemat",
			"ba_bin",
			"ba_bogpipes",
			"ba_bog_decals",
			"ba_chanpagne_fridge",
			"ba_chanpagne_fridge2",
			"ba_club_bathmirror",
			"ba_club_elevator_01",
			"ba_club_elevator_02",
			//"ba_coke_doll",
			//"ba_curtain1",
			//"ba_curtain2",
			//"ba_curtain3",
			//"ba_daybed1",
			//"ba_daybed2",
			//"ba_daybed3",
			//"ba_daybed_detail1",
			//"ba_daybed_detail2",
			//"ba_daybed_detail3",
			//"ba_desk1",
			//"ba_desk2",
			//"ba_desk3",
			//"ba_dj_stage",
			"ba_dj_unit",
			//"ba_dri_ice_dummy",
			//"ba_entrance_grubby",
			//"ba_entry_pipes",
			//"ba_entry_trim",
			//"ba_fakeid_bundlepassports",
			"ba_flr_paper_crap",
			"ba_garage_decals",
			"ba_garage_floor_decals",
			"ba_garage_sprinkles",
			"ba_garage_supports",
			"ba_gararage_stairs",
			"ba_generic_dirt",
			"ba_gen_strip_emit",
			"ba_gen_strip_emit_upper",
			"ba_glass_marks",
			"ba_hall_bigpipe",
			"ba_int01_mule",
			"ba_int_01_club_blends",
			"ba_int_01_club_shell",
			"ba_int_01_del_supps",
			"ba_int_01_light_grid",
			"ba_louis_pic",
			"ba_lower_bar_pipes",
			"ba_main_architraves",
			"ba_main_area_architrave",
			"ba_main_grubby",
			"ba_main_sprinkles",
			"ba_main_trad_pipes",
			"ba_maisn_poster",
			"ba_meth_smallbag",
			"ba_office_door_frames",
			"ba_office_safe_inserts",
			"ba_paradise_sm_sign",
			"ba_podium1",
			"ba_podium2",
			"ba_podium3",
			//"ba_prop_weed_bigbag_open_01a",
			//"ba_pv2_club_stairs",
			//"ba_rear_hall_sprinkler",
			//"ba_scrunched_moneypage",
			//"ba_security_screen_overlay",
			//"ba_security_screen_upgrade",
			//"ba_setup_firdges",
			//"ba_shell_master_coll_dummy",
			//"ba_sideboard1",
			//"ba_sideboard2",
			//"ba_sideboard3",
			//"ba_sink1",
			//"ba_sink2",
			//"ba_sink3",
			//"ba_small_sign_palace",
			//"ba_sofa1",
			//"ba_sofa2",
			//"ba_sofa3",
			"ba_sol_coll_dummy",
			"ba_speaker_brack_main",
			"ba_speaker_brack_vip",
			"ba_stair_grubby",
			"ba_stair_pipes",
			"ba_sweatybetty_flr",
			"ba_tale_coll_dummy",
			"ba_tard_toilet_graff",
			"ba_toilet1",
			"ba_toilet1_overlay",
			"ba_toilet2",
			"ba_toilet3",
			"ba_toilet_2_overlay",
			"ba_toilet_clutter_01",
			"ba_toilet_clutter_02",
			"ba_toilet_clutter_03",
			"ba_toilet_props",
			"ba_toilet_trim",
			"ba_trimtofixstupidshitbits",
			"ba_tv_bracket005",
			"ba_urinal1",
			"ba_urinal2",
			"ba_urinal3",
			"ba_vip_bar1",
			"ba_vip_bar2",
			"ba_vip_bar3",
			"ba_vip_bar_fridge",
			"ba_vip_stool1",
			"ba_vip_stool2",
			"ba_vip_stool3",
			"ba_vip_table1",
			"ba_vip_table2",
			"ba_vip_table3",
			//"ba_v_64_dance_bar",
			//"ba_v_64_dance_bar001",
			//"ba_wardrobe",
			"ba_work_light_clutter",
			"ba_work_light_clutter001",
			"ba_work_light_clutter002",
			"ba_int01_bacl_mad_posters",
			"ba_int01_mule",
			//
		};

		//Theme specific props (to be used with Common!)
		const std::vector<PCHAR> vNcPropsGlam = { //Solomon
			"ba_aircon_system",
			"ba_back_hall_decals",
			"ba_bars1_01",
			"ba_bars1_02",
			"ba_bars1_04",
			"ba_bars1_05",
			"ba_bars1_06",
			"ba_bars2_01",
			"ba_bars2_02",
			"ba_bars2_04",
			"ba_bars2_05",
			"ba_bars2_06",
			"ba_bars3_01",
			"ba_bars3_02",
			"ba_bars3_04",
			"ba_bars3_05",
			"ba_bars3_06",
			"ba_bar_emissive_tubes",
			"ba_bar_emissive_tubeslowbar",
			"ba_bar_fridge_content",
			"ba_bar_supports",
			"ba_bar_tables1",
			"ba_bar_tables2",
			"ba_bar_tables3",
			"ba_battle_club_shad_proxy",
			"ba_bat_mousemat",
			"ba_bin",
			"ba_bogpipes",
			"ba_bog_decals",
			"ba_chanpagne_fridge",
			"ba_chanpagne_fridge2",
			"ba_club_bathmirror",
			"ba_club_elevator_01",
			"ba_club_elevator_02",
			"ba_coke_doll",
			"ba_curtain1",
			"ba_curtain2",
			"ba_curtain3",
			"ba_daybed1",
			"ba_daybed2",
			"ba_daybed3",
			"ba_daybed_detail1",
			"ba_daybed_detail2",
			"ba_daybed_detail3",
			"ba_desk1",
			"ba_desk2",
			"ba_desk3",
			"ba_dj_stage",
			"ba_dj_unit",
			"ba_dri_ice_dummy",
			"ba_entrance_grubby",
			"ba_entry_pipes",
			"ba_entry_trim",
			"ba_fakeid_bundlepassports",
			"ba_flr_paper_crap",
			"ba_garage_decals",
			"ba_garage_floor_decals",
			"ba_garage_sprinkles",
			"ba_garage_supports",
			"ba_gararage_stairs",
			"ba_generic_dirt",
			"ba_gen_strip_emit",
			"ba_gen_strip_emit_upper",
			"ba_glass_marks",
			"ba_hall_bigpipe",
			"ba_int01_mule",
			"ba_int_01_club_blends",
			"ba_int_01_club_shell",
			"ba_int_01_del_supps",
			"ba_int_01_light_grid",
			"ba_louis_pic",
			"ba_lower_bar_pipes",
			"ba_main_architraves",
			"ba_main_area_architrave",
			"ba_main_grubby",
			"ba_main_sprinkles",
			"ba_main_trad_pipes",
			"ba_maisn_poster",
			"ba_meth_smallbag",
			"ba_office_door_frames",
			"ba_office_safe_inserts",
			"ba_paradise_sm_sign",
			"ba_podium1",
			"ba_podium2",
			"ba_podium3",
			"ba_prop_weed_bigbag_open_01a",
			"ba_pv2_club_stairs",
			"ba_rear_hall_sprinkler",
			"ba_scrunched_moneypage",
			"ba_security_screen_overlay",
			"ba_security_screen_upgrade",
			"ba_setup_firdges",
			"ba_shell_master_coll_dummy",
			"ba_sideboard1",
			"ba_sideboard2",
			"ba_sideboard3",
			"ba_sink1",
			"ba_sink2",
			"ba_sink3",
			"ba_small_sign_palace",
			"ba_sofa1",
			"ba_sofa2",
			"ba_sofa3",
			"ba_sol_coll_dummy",
			"ba_speaker_brack_main",
			"ba_speaker_brack_vip",
			"ba_stair_grubby",
			"ba_stair_pipes",
			"ba_sweatybetty_flr",
			"ba_tale_coll_dummy",
			"ba_tard_toilet_graff",
			"ba_toilet1",
			"ba_toilet1_overlay",
			"ba_toilet2",
			"ba_toilet3",
			"ba_toilet_2_overlay",
			"ba_toilet_clutter_01",
			"ba_toilet_clutter_02",
			"ba_toilet_clutter_03",
			"ba_toilet_props",
			"ba_toilet_trim",
			"ba_trimtofixstupidshitbits",
			"ba_tv_bracket005",
			"ba_urinal1",
			"ba_urinal2",
			"ba_urinal3",
			"ba_vip_bar1",
			"ba_vip_bar2",
			"ba_vip_bar3",
			"ba_vip_bar_fridge",
			"ba_vip_stool1",
			"ba_vip_stool2",
			"ba_vip_stool3",
			"ba_vip_table1",
			"ba_vip_table2",
			"ba_vip_table3",
			"ba_v_64_dance_bar",
			"ba_v_64_dance_bar001",
			"ba_wardrobe",
			"ba_work_light_clutter",
			"ba_work_light_clutter001",
			"ba_work_light_clutter002",
			"ba_int01_bacl_mad_posters",
			"ba_int01_mule",
			//
			"ba_glam_bar_shelves",
			"ba_glam_booth",
			"ba_glam_collpased_dr",
			"ba_glam_curts",
			"ba_glam_entry_shell",
			"ba_glam_enty_columns",
			"ba_glam_hall_padding",
			"ba_glam_handrails",
			"ba_glam_lower_bar",
			"ba_glam_office_supports",
			"ba_glam_pay_counter",
			"ba_glam_shell",
			"ba_glam_stair_shell",
			"ba_glam_supports",
			"ba_glam_upper_bar",
			"ba_glam_vip_stools",
			"ba_int01_solomun_posters",
			"ba_int_01_glam_overlay",
			"ba_prop_int_glam_weed_tables",
			"ba_aircon_system",
			"ba_back_hall_decals",
			"ba_bars1_01",
			"ba_bars1_02",
			"ba_bars1_04",
			"ba_bars1_05",
			"ba_bars1_06",
			"ba_bars2_01",
			"ba_bars2_02",
			"ba_bars2_04",
			"ba_bars2_05",
			"ba_bars2_06",
			"ba_bars3_01",
			"ba_bars3_02",
			"ba_bars3_04",
			"ba_bars3_05",
			"ba_bars3_06",
			"ba_bar_emissive_tubes",
			"ba_bar_emissive_tubeslowbar",
			"ba_bar_fridge_content",
			"ba_bar_supports",
			"ba_bar_tables1",
			"ba_bar_tables2",
			"ba_bar_tables3",
			"ba_battle_club_shad_proxy",
			"ba_bat_mousemat",
			"ba_bin",
			"ba_bogpipes",
			"ba_bog_decals",
			"ba_chanpagne_fridge",
			"ba_chanpagne_fridge2",
			"ba_club_bathmirror",
			"ba_club_elevator_01",
			"ba_club_elevator_02",
			"ba_coke_doll",
			"ba_curtain1",
			"ba_curtain2",
			"ba_curtain3",
			"ba_daybed1",
			"ba_daybed2",
			"ba_daybed3",
			"ba_daybed_detail1",
			"ba_daybed_detail2",
			"ba_daybed_detail3",
			"ba_desk1",
			"ba_desk2",
			"ba_desk3",
			"ba_dj_stage",
			"ba_dj_unit",
			"ba_dri_ice_dummy",
			"ba_entrance_grubby",
			"ba_entry_pipes",
			"ba_entry_trim",
			"ba_fakeid_bundlepassports",
			"ba_flr_paper_crap",
			"ba_garage_decals",
			"ba_garage_floor_decals",
			"ba_garage_sprinkles",
			"ba_garage_supports",
			"ba_gararage_stairs",
			"ba_generic_dirt",
			"ba_gen_strip_emit",
			"ba_gen_strip_emit_upper",
			"ba_glass_marks",
			"ba_hall_bigpipe",
			"ba_int01_mule",
			"ba_int_01_club_blends",
			"ba_int_01_club_shell",
			"ba_int_01_del_supps",
			"ba_int_01_light_grid",
			"ba_louis_pic",
			"ba_lower_bar_pipes",
			"ba_main_architraves",
			"ba_main_area_architrave",
			"ba_main_grubby",
			"ba_main_sprinkles",
			"ba_main_trad_pipes",
			"ba_maisn_poster",
			"ba_meth_smallbag",
			"ba_office_door_frames",
			"ba_office_safe_inserts",
			"ba_paradise_sm_sign",
			"ba_podium1",
			"ba_podium2",
			"ba_podium3",
			"ba_prop_weed_bigbag_open_01a",
			"ba_pv2_club_stairs",
			"ba_rear_hall_sprinkler",
			"ba_scrunched_moneypage",
			"ba_security_screen_overlay",
			"ba_security_screen_upgrade",
			"ba_setup_firdges",
			"ba_shell_master_coll_dummy",
			"ba_sideboard1",
			"ba_sideboard2",
			"ba_sideboard3",
			"ba_sink1",
			"ba_sink2",
			"ba_sink3",
			"ba_small_sign_palace",
			"ba_sofa1",
			"ba_sofa2",
			"ba_sofa3",
			"ba_sol_coll_dummy",
			"ba_speaker_brack_main",
			"ba_speaker_brack_vip",
			"ba_stair_grubby",
			"ba_stair_pipes",
			"ba_sweatybetty_flr",
			"ba_tale_coll_dummy",
			"ba_tard_toilet_graff",
			"ba_toilet1",
			"ba_toilet1_overlay",
			"ba_toilet2",
			"ba_toilet3",
			"ba_toilet_2_overlay",
			"ba_toilet_clutter_01",
			"ba_toilet_clutter_02",
			"ba_toilet_clutter_03",
			"ba_toilet_props",
			"ba_toilet_trim",
			"ba_trimtofixstupidshitbits",
			"ba_tv_bracket005",
			"ba_urinal1",
			"ba_urinal2",
			"ba_urinal3",
			"ba_vip_bar1",
			"ba_vip_bar2",
			"ba_vip_bar3",
			"ba_vip_bar_fridge",
			"ba_vip_stool1",
			"ba_vip_stool2",
			"ba_vip_stool3",
			"ba_vip_table1",
			"ba_vip_table2",
			"ba_vip_table3",
			"ba_v_64_dance_bar",
			"ba_v_64_dance_bar001",
			"ba_wardrobe",
			"ba_work_light_clutter",
			"ba_work_light_clutter001",
			"ba_work_light_clutter002",
			"ba_int01_bacl_mad_posters",
			"ba_int01_mule",
		};

		//Theme specific props (to be used with Common!)
		const std::vector<PCHAR> vNcPropsTrad = { //Madonna posters
			"ba_aircon_system",
			"ba_back_hall_decals",
			"ba_bars1_01",
			"ba_bars1_02",
			"ba_bars1_04",
			"ba_bars1_05",
			"ba_bars1_06",
			"ba_bars2_01",
			"ba_bars2_02",
			"ba_bars2_04",
			"ba_bars2_05",
			"ba_bars2_06",
			"ba_bars3_01",
			"ba_bars3_02",
			"ba_bars3_04",
			"ba_bars3_05",
			"ba_bars3_06",
			"ba_bar_emissive_tubes",
			"ba_bar_emissive_tubeslowbar",
			"ba_bar_fridge_content",
			"ba_bar_supports",
			"ba_bar_tables1",
			"ba_bar_tables2",
			"ba_bar_tables3",
			"ba_battle_club_shad_proxy",
			"ba_bat_mousemat",
			"ba_bin",
			"ba_bogpipes",
			"ba_bog_decals",
			"ba_chanpagne_fridge",
			"ba_chanpagne_fridge2",
			"ba_club_bathmirror",
			"ba_club_elevator_01",
			"ba_club_elevator_02",
			"ba_coke_doll",
			"ba_curtain1",
			"ba_curtain2",
			"ba_curtain3",
			"ba_daybed1",
			"ba_daybed2",
			"ba_daybed3",
			"ba_daybed_detail1",
			"ba_daybed_detail2",
			"ba_daybed_detail3",
			"ba_desk1",
			"ba_desk2",
			"ba_desk3",
			"ba_dj_stage",
			"ba_dj_unit",
			"ba_dri_ice_dummy",
			"ba_entrance_grubby",
			"ba_entry_pipes",
			"ba_entry_trim",
			"ba_fakeid_bundlepassports",
			"ba_flr_paper_crap",
			"ba_garage_decals",
			"ba_garage_floor_decals",
			"ba_garage_sprinkles",
			"ba_garage_supports",
			"ba_gararage_stairs",
			"ba_generic_dirt",
			"ba_gen_strip_emit",
			"ba_gen_strip_emit_upper",
			"ba_glass_marks",
			"ba_hall_bigpipe",
			"ba_int01_mule",
			"ba_int_01_club_blends",
			"ba_int_01_club_shell",
			"ba_int_01_del_supps",
			"ba_int_01_light_grid",
			"ba_louis_pic",
			"ba_lower_bar_pipes",
			"ba_main_architraves",
			"ba_main_area_architrave",
			"ba_main_grubby",
			"ba_main_sprinkles",
			"ba_main_trad_pipes",
			"ba_maisn_poster",
			"ba_meth_smallbag",
			"ba_office_door_frames",
			"ba_office_safe_inserts",
			"ba_paradise_sm_sign",
			"ba_podium1",
			"ba_podium2",
			"ba_podium3",
			"ba_prop_weed_bigbag_open_01a",
			"ba_pv2_club_stairs",
			"ba_rear_hall_sprinkler",
			"ba_scrunched_moneypage",
			"ba_security_screen_overlay",
			"ba_security_screen_upgrade",
			"ba_setup_firdges",
			"ba_shell_master_coll_dummy",
			"ba_sideboard1",
			"ba_sideboard2",
			"ba_sideboard3",
			"ba_sink1",
			"ba_sink2",
			"ba_sink3",
			"ba_small_sign_palace",
			"ba_sofa1",
			"ba_sofa2",
			"ba_sofa3",
			"ba_sol_coll_dummy",
			"ba_speaker_brack_main",
			"ba_speaker_brack_vip",
			"ba_stair_grubby",
			"ba_stair_pipes",
			"ba_sweatybetty_flr",
			"ba_tale_coll_dummy",
			"ba_tard_toilet_graff",
			"ba_toilet1",
			"ba_toilet1_overlay",
			"ba_toilet2",
			"ba_toilet3",
			"ba_toilet_2_overlay",
			"ba_toilet_clutter_01",
			"ba_toilet_clutter_02",
			"ba_toilet_clutter_03",
			"ba_toilet_props",
			"ba_toilet_trim",
			"ba_trimtofixstupidshitbits",
			"ba_tv_bracket005",
			"ba_urinal1",
			"ba_urinal2",
			"ba_urinal3",
			"ba_vip_bar1",
			"ba_vip_bar2",
			"ba_vip_bar3",
			"ba_vip_bar_fridge",
			"ba_vip_stool1",
			"ba_vip_stool2",
			"ba_vip_stool3",
			"ba_vip_table1",
			"ba_vip_table2",
			"ba_vip_table3",
			"ba_v_64_dance_bar",
			"ba_v_64_dance_bar001",
			"ba_wardrobe",
			"ba_work_light_clutter",
			"ba_work_light_clutter001",
			"ba_work_light_clutter002",
			"ba_int01_bacl_mad_posters",
			"ba_int01_mule",
			//
			"ba_traddyoffice_supports",
			"ba_trad_bar_shelves",
			"ba_trad_booth",
			"ba_trad_club_wall_pans",
			"ba_trad_collapsed_drs",
			"ba_trad_entry_pipes",
			"ba_trad_entry_shell",
			"ba_trad_enty_columns",
			"ba_trad_floor_decals",
			"ba_trad_lower_bar",
			"ba_trad_pay_counter",
			"ba_trad_rails",
			"ba_trad_shell",
			"ba_trad_stair_pipes",
			"ba_trad_stair_shell",
			"ba_trad_supports",
			"ba_trad_upper_bar",
			"ba_trad_vip_stools",
			"ba_trad_weed_table",
			"ba_madonna_table",
			"ba_madon_flyers",
			"ba_madon_flyers001",
			"ba_madon_flyers002",
			"ba_mad_coll_dummy",
			"ba_int_01_trad_overlay",
			"ba_aircon_system",
			"ba_back_hall_decals",
			"ba_bars1_01",
			"ba_bars1_02",
			"ba_bars1_04",
			"ba_bars1_05",
			"ba_bars1_06",
			"ba_bars2_01",
			"ba_bars2_02",
			"ba_bars2_04",
			"ba_bars2_05",
			"ba_bars2_06",
			"ba_bars3_01",
			"ba_bars3_02",
			"ba_bars3_04",
			"ba_bars3_05",
			"ba_bars3_06",
			"ba_bar_emissive_tubes",
			"ba_bar_emissive_tubeslowbar",
			"ba_bar_fridge_content",
			"ba_bar_supports",
			"ba_bar_tables1",
			"ba_bar_tables2",
			"ba_bar_tables3",
			"ba_battle_club_shad_proxy",
			"ba_bat_mousemat",
			"ba_bin",
			"ba_bogpipes",
			"ba_bog_decals",
			"ba_chanpagne_fridge",
			"ba_chanpagne_fridge2",
			"ba_club_bathmirror",
			"ba_club_elevator_01",
			"ba_club_elevator_02",
			"ba_coke_doll",
			"ba_curtain1",
			"ba_curtain2",
			"ba_curtain3",
			"ba_daybed1",
			"ba_daybed2",
			"ba_daybed3",
			"ba_daybed_detail1",
			"ba_daybed_detail2",
			"ba_daybed_detail3",
			"ba_desk1",
			"ba_desk2",
			"ba_desk3",
			"ba_dj_stage",
			"ba_dj_unit",
			"ba_dri_ice_dummy",
			"ba_entrance_grubby",
			"ba_entry_pipes",
			"ba_entry_trim",
			"ba_fakeid_bundlepassports",
			"ba_flr_paper_crap",
			"ba_garage_decals",
			"ba_garage_floor_decals",
			"ba_garage_sprinkles",
			"ba_garage_supports",
			"ba_gararage_stairs",
			"ba_generic_dirt",
			"ba_gen_strip_emit",
			"ba_gen_strip_emit_upper",
			"ba_glass_marks",
			"ba_hall_bigpipe",
			"ba_int01_mule",
			"ba_int_01_club_blends",
			"ba_int_01_club_shell",
			"ba_int_01_del_supps",
			"ba_int_01_light_grid",
			"ba_louis_pic",
			"ba_lower_bar_pipes",
			"ba_main_architraves",
			"ba_main_area_architrave",
			"ba_main_grubby",
			"ba_main_sprinkles",
			"ba_main_trad_pipes",
			"ba_maisn_poster",
			"ba_meth_smallbag",
			"ba_office_door_frames",
			"ba_office_safe_inserts",
			"ba_paradise_sm_sign",
			"ba_podium1",
			"ba_podium2",
			"ba_podium3",
			"ba_prop_weed_bigbag_open_01a",
			"ba_pv2_club_stairs",
			"ba_rear_hall_sprinkler",
			"ba_scrunched_moneypage",
			"ba_security_screen_overlay",
			"ba_security_screen_upgrade",
			"ba_setup_firdges",
			"ba_shell_master_coll_dummy",
			"ba_sideboard1",
			"ba_sideboard2",
			"ba_sideboard3",
			"ba_sink1",
			"ba_sink2",
			"ba_sink3",
			"ba_small_sign_palace",
			"ba_sofa1",
			"ba_sofa2",
			"ba_sofa3",
			"ba_sol_coll_dummy",
			"ba_speaker_brack_main",
			"ba_speaker_brack_vip",
			"ba_stair_grubby",
			"ba_stair_pipes",
			"ba_sweatybetty_flr",
			"ba_tale_coll_dummy",
			"ba_tard_toilet_graff",
			"ba_toilet1",
			"ba_toilet1_overlay",
			"ba_toilet2",
			"ba_toilet3",
			"ba_toilet_2_overlay",
			"ba_toilet_clutter_01",
			"ba_toilet_clutter_02",
			"ba_toilet_clutter_03",
			"ba_toilet_props",
			"ba_toilet_trim",
			"ba_trimtofixstupidshitbits",
			"ba_tv_bracket005",
			"ba_urinal1",
			"ba_urinal2",
			"ba_urinal3",
			"ba_vip_bar1",
			"ba_vip_bar2",
			"ba_vip_bar3",
			"ba_vip_bar_fridge",
			"ba_vip_stool1",
			"ba_vip_stool2",
			"ba_vip_stool3",
			"ba_vip_table1",
			"ba_vip_table2",
			"ba_vip_table3",
			"ba_v_64_dance_bar",
			"ba_v_64_dance_bar001",
			"ba_wardrobe",
			"ba_work_light_clutter",
			"ba_work_light_clutter001",
			"ba_work_light_clutter002",
			"ba_int01_bacl_mad_posters",
			"ba_int01_mule",
		};

		const std::vector<PCHAR> vNcPropsBasement{

		};

		//Terrorbyte interior (need to toggle each pattern individually else they clip. Interior is tintable!):
		const std::vector<PCHAR> vNcPropsTerrorbyte{
			"ba_dlc_int_03_ba_bikefloor",
			"ba_dlc_int_03_ba_bikergear",
			"ba_dlc_int_03_ba_bikescanlines",
			"ba_dlc_int_03_ba_biketools",
			"ba_dlc_int_03_ba_cursor",
			"ba_dlc_int_03_ba_dronelauncher001",
			"ba_dlc_int_03_ba_hoist",
			"ba_dlc_int_03_ba_nontint",
			"ba_dlc_int_03_ba_propcolaps",
			"ba_dlc_int_03_ba_servers2",
			"ba_dlc_int_03_ba_serversscreens",
			"ba_dlc_int_03_ba_serversscreens2",
			"ba_dlc_int_03_ba_shadowbox",
			"ba_dlc_int_03_ba_shell",
			"ba_dlc_int_03_ba_tintablegeo",
			"ba_dlc_int_03_ba_tintablelights",
			"ba_dlc_int_03_ba_tools",
			"ba_int_03_ba_pattern_01",
			/*"ba_int_03_ba_pattern_02",
			"ba_int_03_ba_pattern_03",
			"ba_int_03_ba_pattern_04",
			"ba_int_03_ba_pattern_05",
			"ba_int_03_ba_pattern_06",
			"ba_int_03_ba_pattern_07",
			"ba_int_03_ba_pattern_08",
			"ba_int_03_ba_pattern_09",
			"ba_int_03_ba_pattern_10",
			"ba_int_03_ba_pattern_11",
			"ba_int_03_ba_pattern_12",
			"ba_int_03_ba_pattern_13",
			"ba_int_03_ba_pattern_14",
			"ba_int_03_ba_pattern_15",
			"ba_int_03_ba_pattern_16",
			"ba_int_03_ba_pattern_17",
			"ba_int_03_ba_pattern_18",
			"ba_int_03_ba_pattern_19",
			"ba_int_03_ba_pattern_20",
			"ba_int_03_ba_pattern_21",
			"ba_int_03_ba_pattern_22",
			"ba_int_03_ba_pattern_23",
			"ba_int_03_ba_pattern_24",
			"ba_int_03_ba_pattern_25"*/
		};
#pragma endregion

		const std::vector<TeleLocation> vOtherNightclubRelatedTeleports
		{
			//TeleLocation("", 0.0f, 0.0f, 0.0f, iplsToLoad, iplsToRemove, interiorProps, true, false, true),
			TeleLocation("Nightclub (Edgy)", -1569.2500f, -3017.3900f, -73.2200f,{ "ba_int_placement_ba_interior_0_dlc_int_01_ba_milo_" },{}, vNcPropsROOTCAUSE/*vNcPropsEdgy*/, true, false, true),
			TeleLocation("Nightclub (Glamorous)", -1569.2500f, -3017.3900f, -73.2200f,{ "ba_int_placement_ba_interior_0_dlc_int_01_ba_milo_" },{},vNcPropsROOTCAUSE/*vNcPropsGlam*/, true, false, true),
			TeleLocation("Night Club Interior (Traditional)", -1569.2500f, -3017.3900f, -73.2200f,{ "ba_int_placement_ba_interior_0_dlc_int_01_ba_milo_" },{},vNcPropsROOTCAUSE/*vNcPropsTrad*/, true, false, true),
			TeleLocation("Night Club Basement", -1509.3100f, -2990.4400f, -79.7400f,{ "ba_int_placement_ba_interior_1_dlc_int_02_ba_milo_" },{},vNcPropsROOTCAUSE2/*vNcPropsBasement*/, true, false, true),
			TeleLocation("Terrorbyte", -1421.0150f, -3012.5870f, -80.0000f,{ "ba_int_placement_ba_interior_2_dlc_int_03_ba_milo_" },{},vNcPropsROOTCAUSE3/*vNcPropsTerrorbyte*/, true, false, true)
		};

		void Sub_Nightclubs()
		{
			AddTitle("Nightclubs");

			for (auto& otherTele : vOtherNightclubRelatedTeleports)
			{
				bool bOtherTelePressed = false;
				AddOption(otherTele.name, bOtherTelePressed); if (bOtherTelePressed)
				{
					TeleMethods::ToTeleLocation241(otherTele);
				}
			}

			// BYO
		}
	}

}


