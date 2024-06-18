/*
* Menyoo PC - Grand Theft Auto V single-player trainer mod
* Copyright (C) 2019  MAFINS
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*/
#include "enums.h"

#include "..\macros.h"

//#include <better-enums-master\enum.h>
#include <string>
#include <vector>
#include <map>


namespace ControllerInputs {
	const std::vector<std::string> vNames
	{
			"NEXT_CAMERA",
			"LOOK_LR",
			"LOOK_UD",
			"LOOK_UP_ONLY",
			"LOOK_DOWN_ONLY",
			"LOOK_LEFT_ONLY",
			"LOOK_RIGHT_ONLY",
			"CINEMATIC_SLOWMO",
			"SCRIPTED_FLY_UD",
			"SCRIPTED_FLY_LR",
			"SCRIPTED_FLY_ZUP",
			"SCRIPTED_FLY_ZDOWN",
			"WEAPON_WHEEL_UD",
			"WEAPON_WHEEL_LR",
			"WEAPON_WHEEL_NEXT",
			"WEAPON_WHEEL_PREV",
			"SELECT_NEXT_WEAPON",
			"SELECT_PREV_WEAPON",
			"SKIP_CUTSCENE",
			"CHARACTER_WHEEL",
			"MULTIPLAYER_INFO",
			"SPRINT",
			"JUMP",
			"ENTER",
			"ATTACK",
			"AIM",
			"LOOK_BEHIND",
			"PHONE",
			"SPECIAL_ABILITY",
			"SPECIAL_ABILITY_SECONDARY",
			"MOVE_LR",
			"MOVE_UD",
			"MOVE_UP_ONLY",
			"MOVE_DOWN_ONLY",
			"MOVE_LEFT_ONLY",
			"MOVE_RIGHT_ONLY",
			"DUCK",
			"SELECT_WEAPON",
			"PICKUP",
			"SNIPER_ZOOM",
			"SNIPER_ZOOM_IN_ONLY",
			"SNIPER_ZOOM_OUT_ONLY",
			"SNIPER_ZOOM_IN_SECONDARY",
			"SNIPER_ZOOM_OUT_SECONDARY",
			"COVER",
			"RELOAD",
			"TALK",
			"DETONATE",
			"HUD_SPECIAL",
			"ARREST",
			"ACCURATE_AIM",
			"CONTEXT",
			"CONTEXT_SECONDARY",
			"WEAPON_SPECIAL",
			"WEAPON_SPECIAL_TWO",
			"DIVE",
			"DROP_WEAPON",
			"DROP_AMMO",
			"THROW_GRENADE",
			"VEH_MOVE_LR",
			"VEH_MOVE_UD",
			"VEH_MOVE_UP_ONLY",
			"VEH_MOVE_DOWN_ONLY",
			"VEH_MOVE_LEFT_ONLY",
			"VEH_MOVE_RIGHT_ONLY",
			"VEH_SPECIAL",
			"VEH_GUN_LR",
			"VEH_GUN_UD",
			"VEH_AIM",
			"VEH_ATTACK",
			"VEH_ATTACK2",
			"VEH_ACCELERATE",
			"VEH_BRAKE",
			"VEH_DUCK",
			"VEH_HEADLIGHT",
			"VEH_EXIT",
			"VEH_HANDBRAKE",
			"VEH_HOTWIRE_LEFT",
			"VEH_HOTWIRE_RIGHT",
			"VEH_LOOK_BEHIND",
			"VEH_CIN_CAM",
			"VEH_NEXT_RADIO",
			"VEH_PREV_RADIO",
			"VEH_NEXT_RADIO_TRACK",
			"VEH_PREV_RADIO_TRACK",
			"VEH_RADIO_WHEEL",
			"VEH_HORN",
			"VEH_FLY_THROTTLE_UP",
			"VEH_FLY_THROTTLE_DOWN",
			"VEH_FLY_YAW_LEFT",
			"VEH_FLY_YAW_RIGHT",
			"VEH_PASSENGER_AIM",
			"VEH_PASSENGER_ATTACK",
			"VEH_SPECIAL_ABILITY_FRANKLIN",
			"VEH_STUNT_UD",
			"VEH_CINEMATIC_UD",
			"VEH_CINEMATIC_UP_ONLY",
			"VEH_CINEMATIC_DOWN_ONLY",
			"VEH_CINEMATIC_LR",
			"VEH_SELECT_NEXT_WEAPON",
			"VEH_SELECT_PREV_WEAPON",
			"VEH_ROOF",
			"VEH_JUMP",
			"VEH_GRAPPLING_HOOK",
			"VEH_SHUFFLE",
			"VEH_DROP_PROJECTILE",
			"VEH_MOUSE_CONTROL_OVERRIDE",
			"VEH_FLY_ROLL_LR",
			"VEH_FLY_ROLL_LEFT_ONLY",
			"VEH_FLY_ROLL_RIGHT_ONLY",
			"VEH_FLY_PITCH_UD",
			"VEH_FLY_PITCH_UP_ONLY",
			"VEH_FLY_PITCH_DOWN_ONLY",
			"VEH_FLY_UNDERCARRIAGE",
			"VEH_FLY_ATTACK",
			"VEH_FLY_SELECT_NEXT_WEAPON",
			"VEH_FLY_SELECT_PREV_WEAPON",
			"VEH_FLY_SELECT_TARGET_LEFT",
			"VEH_FLY_SELECT_TARGET_RIGHT",
			"VEH_FLY_VERTICAL_FLIGHT_MODE",
			"VEH_FLY_DUCK",
			"VEH_FLY_ATTACK_CAMERA",
			"VEH_FLY_MOUSE_CONTROL_OVERRIDE",
			"VEH_SUB_TURN_LR",
			"VEH_SUB_TURN_LEFT_ONLY",
			"VEH_SUB_TURN_RIGHT_ONLY",
			"VEH_SUB_PITCH_UD",
			"VEH_SUB_PITCH_UP_ONLY",
			"VEH_SUB_PITCH_DOWN_ONLY",
			"VEH_SUB_THROTTLE_UP",
			"VEH_SUB_THROTTLE_DOWN",
			"VEH_SUB_ASCEND",
			"VEH_SUB_DESCEND",
			"VEH_SUB_TURN_HARD_LEFT",
			"VEH_SUB_TURN_HARD_RIGHT",
			"VEH_SUB_MOUSE_CONTROL_OVERRIDE",
			"VEH_PUSHBIKE_PEDAL",
			"VEH_PUSHBIKE_SPRINT",
			"VEH_PUSHBIKE_FRONT_BRAKE",
			"VEH_PUSHBIKE_REAR_BRAKE",
			"MELEE_ATTACK_LIGHT",
			"MELEE_ATTACK_HEAVY",
			"MELEE_ATTACK_ALTERNATE",
			"MELEE_BLOCK",
			"PARACHUTE_DEPLOY",
			"PARACHUTE_DETACH",
			"PARACHUTE_TURN_LR",
			"PARACHUTE_TURN_LEFT_ONLY",
			"PARACHUTE_TURN_RIGHT_ONLY",
			"PARACHUTE_PITCH_UD",
			"PARACHUTE_PITCH_UP_ONLY",
			"PARACHUTE_PITCH_DOWN_ONLY",
			"PARACHUTE_BRAKE_LEFT",
			"PARACHUTE_BRAKE_RIGHT",
			"PARACHUTE_SMOKE",
			"PARACHUTE_PRECISION_LANDING",
			"MAP",
			"SELECT_WEAPON_UNARMED",
			"SELECT_WEAPON_MELEE",
			"SELECT_WEAPON_HANDGUN",
			"SELECT_WEAPON_SHOTGUN",
			"SELECT_WEAPON_SMG",
			"SELECT_WEAPON_AUTO_RIFLE",
			"SELECT_WEAPON_SNIPER",
			"SELECT_WEAPON_HEAVY",
			"SELECT_WEAPON_SPECIAL",
			"SELECT_CHARACTER_MICHAEL",
			"SELECT_CHARACTER_FRANKLIN",
			"SELECT_CHARACTER_TREVOR",
			"SELECT_CHARACTER_MULTIPLAYER",
			"SAVE_REPLAY_CLIP",
			"SPECIAL_ABILITY_PC",
			"CELLPHONE_UP",
			"CELLPHONE_DOWN",
			"CELLPHONE_LEFT",
			"CELLPHONE_RIGHT",
			"CELLPHONE_SELECT",
			"CELLPHONE_CANCEL",
			"CELLPHONE_OPTION",
			"CELLPHONE_EXTRA_OPTION",
			"CELLPHONE_SCROLL_FORWARD",
			"CELLPHONE_SCROLL_BACKWARD",
			"CELLPHONE_CAMERA_FOCUS_LOCK",
			"CELLPHONE_CAMERA_GRID",
			"CELLPHONE_CAMERA_SELFIE",
			"CELLPHONE_CAMERA_DOF",
			"CELLPHONE_CAMERA_EXPRESSION",
			"FRONTEND_DOWN",
			"FRONTEND_UP",
			"FRONTEND_LEFT",
			"FRONTEND_RIGHT",
			"FRONTEND_RDOWN",
			"FRONTEND_RUP",
			"FRONTEND_RLEFT",
			"FRONTEND_RRIGHT",
			"FRONTEND_AXIS_X",
			"FRONTEND_AXIS_Y",
			"FRONTEND_RIGHT_AXIS_X",
			"FRONTEND_RIGHT_AXIS_Y",
			"FRONTEND_PAUSE",
			"FRONTEND_PAUSE_ALTERNATE",
			"FRONTEND_ACCEPT",
			"FRONTEND_CANCEL",
			"FRONTEND_X",
			"FRONTEND_Y",
			"FRONTEND_LB",
			"FRONTEND_RB",
			"FRONTEND_LT",
			"FRONTEND_RT",
			"FRONTEND_LS",
			"FRONTEND_RS",
			"FRONTEND_LEADERBOARD",
			"FRONTEND_SOCIAL_CLUB",
			"FRONTEND_SOCIAL_CLUB_SECONDARY",
			"FRONTEND_DELETE",
			"FRONTEND_ENDSCREEN_ACCEPT",
			"FRONTEND_ENDSCREEN_EXPAND",
			"FRONTEND_SELECT",
			"SCRIPT_LEFT_AXIS_X",
			"SCRIPT_LEFT_AXIS_Y",
			"SCRIPT_RIGHT_AXIS_X",
			"SCRIPT_RIGHT_AXIS_Y",
			"SCRIPT_RUP",
			"SCRIPT_RDOWN",
			"SCRIPT_RLEFT",
			"SCRIPT_RRIGHT",
			"SCRIPT_LB",
			"SCRIPT_RB",
			"SCRIPT_LT",
			"SCRIPT_RT",
			"SCRIPT_LS",
			"SCRIPT_RS",
			"SCRIPT_PAD_UP",
			"SCRIPT_PAD_DOWN",
			"SCRIPT_PAD_LEFT",
			"SCRIPT_PAD_RIGHT",
			"SCRIPT_SELECT",
			"CURSOR_ACCEPT",
			"CURSOR_CANCEL",
			"CURSOR_X",
			"CURSOR_Y",
			"CURSOR_SCROLL_UP",
			"CURSOR_SCROLL_DOWN",
			"ENTER_CHEAT_CODE",
			"INTERACTION_MENU",
			"MP_TEXT_CHAT_ALL",
			"MP_TEXT_CHAT_TEAM",
			"MP_TEXT_CHAT_FRIENDS",
			"MP_TEXT_CHAT_CREW",
			"PUSH_TO_TALK",
			"CREATOR_LS",
			"CREATOR_RS",
			"CREATOR_LT",
			"CREATOR_RT",
			"CREATOR_MENU_TOGGLE",
			"CREATOR_ACCEPT",
			"CREATOR_DELETE",
			"ATTACK2",
			"RAPPEL_JUMP",
			"RAPPEL_LONG_JUMP",
			"RAPPEL_SMASH_WINDOW",
			"PREV_WEAPON",
			"NEXT_WEAPON",
			"MELEE_ATTACK1",
			"MELEE_ATTACK2",
			"WHISTLE",
			"MOVE_LEFT",
			"MOVE_RIGHT",
			"MOVE_UP",
			"MOVE_DOWN",
			"LOOK_LEFT",
			"LOOK_RIGHT",
			"LOOK_UP",
			"LOOK_DOWN",
			"SNIPER_ZOOM_IN",
			"SNIPER_ZOOM_OUT",
			"SNIPER_ZOOM_IN_ALTERNATE",
			"SNIPER_ZOOM_OUT_ALTERNATE",
			"VEH_MOVE_LEFT",
			"VEH_MOVE_RIGHT",
			"VEH_MOVE_UP",
			"VEH_MOVE_DOWN",
			"VEH_GUN_LEFT",
			"VEH_GUN_RIGHT",
			"VEH_GUN_UP",
			"VEH_GUN_DOWN",
			"VEH_LOOK_LEFT",
			"VEH_LOOK_RIGHT",
			"REPLAY_START_STOP_RECORDING",
			"REPLAY_START_STOP_RECORDING_SECONDARY",
			"SCALED_LOOK_LR",
			"SCALED_LOOK_UD",
			"SCALED_LOOK_UP_ONLY",
			"SCALED_LOOK_DOWN_ONLY",
			"SCALED_LOOK_LEFT_ONLY",
			"SCALED_LOOK_RIGHT_ONLY",
			"REPLAY_MARKER_DELETE",
			"REPLAY_CLIP_DELETE",
			"REPLAY_PAUSE",
			"REPLAY_REWIND",
			"REPLAY_FFWD",
			"REPLAY_NEWMARKER",
			"REPLAY_RECORD",
			"REPLAY_SCREENSHOT",
			"REPLAY_HIDEHUD",
			"REPLAY_STARTPOINT",
			"REPLAY_ENDPOINT",
			"REPLAY_ADVANCE",
			"REPLAY_BACK",
			"REPLAY_TOOLS",
			"REPLAY_RESTART",
			"REPLAY_SHOWHOTKEY",
			"REPLAY_CYCLEMARKERLEFT",
			"REPLAY_CYCLEMARKERRIGHT",
			"REPLAY_FOVINCREASE",
			"REPLAY_FOVDECREASE",
			"REPLAY_CAMERAUP",
			"REPLAY_CAMERADOWN",
			"REPLAY_SAVE",
			"REPLAY_TOGGLETIME",
			"REPLAY_TOGGLETIPS",
			"REPLAY_PREVIEW",
			"REPLAY_TOGGLE_TIMELINE",
			"REPLAY_TIMELINE_PICKUP_CLIP",
			"REPLAY_TIMELINE_DUPLICATE_CLIP",
			"REPLAY_TIMELINE_PLACE_CLIP",
			"REPLAY_CTRL",
			"REPLAY_TIMELINE_SAVE",
			"REPLAY_PREVIEW_AUDIO",
			"VEH_DRIVE_LOOK",
			"VEH_DRIVE_LOOK2",
			"VEH_FLY_ATTACK2",
			"RADIO_WHEEL_UD",
			"RADIO_WHEEL_LR",
			"VEH_SLOWMO_UD",
			"VEH_SLOWMO_UP_ONLY",
			"VEH_SLOWMO_DOWN_ONLY",
			"MAP_POI",
	};
}

namespace HudColour {
	const std::vector<std::string> vHudColours
	{
		"PURE_WHITE",
		"WHITE",
		"BLACK",
		"GREY",
		"GREYLIGHT",
		"GREYDARK",
		"RED",
		"REDLIGHT",
		"REDDARK",
		"BLUE",
		"BLUELIGHT",
		"BLUEDARK",
		"YELLOW",
		"YELLOWLIGHT",
		"YELLOWDARK",
		"ORANGE",
		"ORANGELIGHT",
		"ORANGEDARK",
		"GREEN",
		"GREENLIGHT",
		"GREENDARK",
		"PURPLE",
		"PURPLELIGHT",
		"PURPLEDARK",
		"PINK",
		"RADAR_HEALTH",
		"RADAR_ARMOUR",
		"RADAR_DAMAGE",
		"NET_PLAYER1",
		"NET_PLAYER2",
		"NET_PLAYER3",
		"NET_PLAYER4",
		"NET_PLAYER5",
		"NET_PLAYER6",
		"NET_PLAYER7",
		"NET_PLAYER8",
		"NET_PLAYER9",
		"NET_PLAYER10",
		"NET_PLAYER11",
		"NET_PLAYER12",
		"NET_PLAYER13",
		"NET_PLAYER14",
		"NET_PLAYER15",
		"NET_PLAYER16",
		"NET_PLAYER17",
		"NET_PLAYER18",
		"NET_PLAYER19",
		"NET_PLAYER20",
		"NET_PLAYER21",
		"NET_PLAYER22",
		"NET_PLAYER23",
		"NET_PLAYER24",
		"NET_PLAYER25",
		"NET_PLAYER26",
		"NET_PLAYER27",
		"NET_PLAYER28",
		"NET_PLAYER29",
		"NET_PLAYER30",
		"NET_PLAYER31",
		"NET_PLAYER32",
		"SIMPLEBLIP_DEFAULT",
		"MENU_BLUE",
		"MENU_GREY_LIGHT",
		"MENU_BLUE_EXTRA_DARK",
		"MENU_YELLOW",
		"MENU_YELLOW_DARK",
		"MENU_GREEN",
		"MENU_GREY",
		"MENU_GREY_DARK",
		"MENU_HIGHLIGHT",
		"MENU_STANDARD",
		"MENU_DIMMED",
		"MENU_EXTRA_DIMMED",
		"BRIEF_TITLE",
		"MID_GREY_MP",
		"NET_PLAYER1_DARK",
		"NET_PLAYER2_DARK",
		"NET_PLAYER3_DARK",
		"NET_PLAYER4_DARK",
		"NET_PLAYER5_DARK",
		"NET_PLAYER6_DARK",
		"NET_PLAYER7_DARK",
		"NET_PLAYER8_DARK",
		"NET_PLAYER9_DARK",
		"NET_PLAYER10_DARK",
		"NET_PLAYER11_DARK",
		"NET_PLAYER12_DARK",
		"NET_PLAYER13_DARK",
		"NET_PLAYER14_DARK",
		"NET_PLAYER15_DARK",
		"NET_PLAYER16_DARK",
		"NET_PLAYER17_DARK",
		"NET_PLAYER18_DARK",
		"NET_PLAYER19_DARK",
		"NET_PLAYER20_DARK",
		"NET_PLAYER21_DARK",
		"NET_PLAYER22_DARK",
		"NET_PLAYER23_DARK",
		"NET_PLAYER24_DARK",
		"NET_PLAYER25_DARK",
		"NET_PLAYER26_DARK",
		"NET_PLAYER27_DARK",
		"NET_PLAYER28_DARK",
		"NET_PLAYER29_DARK",
		"NET_PLAYER30_DARK",
		"NET_PLAYER31_DARK",
		"NET_PLAYER32_DARK",
		"BRONZE",
		"SILVER",
		"GOLD",
		"PLATINUM",
		"GANG1",
		"GANG2",
		"GANG3",
		"GANG4",
		"SAME_CREW",
		"FREEMODE",
		"PAUSE_BG",
		"FRIENDLY",
		"ENEMY",
		"LOCATION",
		"PICKUP",
		"PAUSE_SINGLEPLAYER",
		"FREEMODE_DARK",
		"INACTIVE_MISSION",
		"DAMAGE",
		"PINKLIGHT",
		"PM_MITEM_HIGHLIGHT",
		"SCRIPT_VARIABLE",
		"YOGA",
		"TENNIS",
		"GOLF",
		"SHOOTING_RANGE",
		"FLIGHT_SCHOOL",
		"NORTH_BLUE",
		"SOCIAL_CLUB",
		"PLATFORM_BLUE",
		"PLATFORM_GREEN",
		"PLATFORM_GREY",
		"FACEBOOK_BLUE",
		"INGAME_BG",
		"DARTS",
		"WAYPOINT",
		"MICHAEL",
		"FRANKLIN",
		"TREVOR",
		"GOLF_P1",
		"GOLF_P2",
		"GOLF_P3",
		"GOLF_P4",
		"WAYPOINTLIGHT",
		"WAYPOINTDARK",
		"PANEL_LIGHT",
		"MICHAEL_DARK",
		"FRANKLIN_DARK",
		"TREVOR_DARK",
		"OBJECTIVE_ROUTE",
		"PAUSEMAP_TINT",
		"PAUSE_DESELECT",
		"PM_WEAPONS_PURCHASABLE",
		"PM_WEAPONS_LOCKED",
		"END_SCREEN_BG",
		"CHOP",
		"PAUSEMAP_TINT_HALF",
		"NORTH_BLUE_OFFICIAL",
		"SCRIPT_VARIABLE_2",
		"H",
		"HDARK",
		"T",
		"TDARK",
		"HSHARD",
		"CONTROLLER_MICHAEL",
		"CONTROLLER_FRANKLIN",
		"CONTROLLER_TREVOR",
		"CONTROLLER_CHOP",
		"VIDEO_EDITOR_VIDEO",
		"VIDEO_EDITOR_AUDIO",
		"VIDEO_EDITOR_TEXT",
		"HB_BLUE",
		"HB_YELLOW",
		"VIDEO_EDITOR_SCORE",
		"VIDEO_EDITOR_AUDIO_FADEOUT",
		"VIDEO_EDITOR_TEXT_FADEOUT",
		"VIDEO_EDITOR_SCORE_FADEOUT",
		"HEIST_BACKGROUND",
		"VIDEO_EDITOR_AMBIENT",
		"VIDEO_EDITOR_AMBIENT_FADEOUT",
		"GB",
		"G",
		"B",
		"LOW_FLOW",
		"LOW_FLOW_DARK",
		"G1",
		"G2",
		"G3",
		"G4",
		"G5",
		"G6",
		"G7",
		"G8",
		"G9",
		"G10",
		"G11",
		"G12",
		"G13",
		"G14",
		"G15",
		"ADVERSARY",
		"DEGEN_RED",
		"DEGEN_YELLOW",
		"DEGEN_GREEN",
		"DEGEN_CYAN",
		"DEGEN_BLUE",
		"DEGEN_MAGENTA",
		"STUNT_1",
		"STUNT_2"
	};
}

namespace DrivingStyle
{
	const std::vector<NamedDrivingStyle> nameArray
	{
		{ "Normal", DrivingStyle::Normal },
		{ "Ignore Lights", DrivingStyle::IgnoreLights },
		{ "Sometimes Overtake Traffic", DrivingStyle::SometimesOvertakeTraffic },
		{ "Rushed", DrivingStyle::Rushed },
		{ "Avoid Traffic", DrivingStyle::AvoidTraffic },
		{ "Avoid Traffic A Lot", DrivingStyle::AvoidTrafficExtremely }
	};
}

namespace Bone {
	const std::vector <NamedPedBone> vBoneNames
	{
		{ "Head", 31086 },
		{ "Chest", 24818 },
		{ "Left Wrist", 60309 },
		{ "Right Wrist", 28422 },
		{ "Left Hand", 18905 },
		{ "Right Hand", 57005 },
		{ "Left Knee", 63931 },
		{ "Right Knee", 36864 },
		{ "Left Foot", 14201 },
		{ "Right Foot", 52301 },
		{ "Left Shoulder", 45509 },
		{ "Right Shoulder", 40269 },
		{ "Left Arm", 61163 },
		{ "Right Arm", 28252 },
		{ "Genitals", 51826 },
		{ "Umbilical", 11816 },

		{ "SKEL_ROOT", 0x0 },
		{ "SKEL_Pelvis", 0x2e28 },
		{ "SKEL_L_Thigh", 0xe39f },
		{ "SKEL_L_Calf", 0xf9bb },
		{ "SKEL_L_Foot", 0x3779 },
		{ "SKEL_L_Toe0", 0x83c },
		{ "IK_L_Foot", 0xfedd },
		{ "PH_L_Foot", 0xe175 },
		{ "MH_L_Knee", 0xb3fe },
		{ "SKEL_R_Thigh", 0xca72 },
		{ "SKEL_R_Calf", 0x9000 },
		{ "SKEL_R_Foot", 0xcc4d },
		{ "SKEL_R_Toe0", 0x512d },
		{ "IK_R_Foot", 0x8aae },
		{ "PH_R_Foot", 0x60e6 },
		{ "MH_R_Knee", 0x3fcf },
		{ "RB_L_ThighRoll", 0x5c57 },
		{ "RB_R_ThighRoll", 0x192a },
		{ "SKEL_Spine_Root", 0xe0fd },
		{ "SKEL_Spine0", 0x5c01 },
		{ "SKEL_Spine1", 0x60f0 },
		{ "SKEL_Spine2", 0x60f1 },
		{ "SKEL_Spine3", 0x60f2 },
		{ "SKEL_L_Clavicle", 0xfcd9 },
		{ "SKEL_L_UpperArm", 0xb1c5 },
		{ "SKEL_L_Forearm", 0xeeeb },
		{ "SKEL_L_Hand", 0x49d9 },
		{ "SKEL_L_Finger00", 0x67f2 },
		{ "SKEL_L_Finger01", 0xff9 },
		{ "SKEL_L_Finger02", 0xffa },
		{ "SKEL_L_Finger10", 0x67f3 },
		{ "SKEL_L_Finger11", 0x1049 },
		{ "SKEL_L_Finger12", 0x104a },
		{ "SKEL_L_Finger20", 0x67f4 },
		{ "SKEL_L_Finger21", 0x1059 },
		{ "SKEL_L_Finger22", 0x105a },
		{ "SKEL_L_Finger30", 0x67f5 },
		{ "SKEL_L_Finger31", 0x1029 },
		{ "SKEL_L_Finger32", 0x102a },
		{ "SKEL_L_Finger40", 0x67f6 },
		{ "SKEL_L_Finger41", 0x1039 },
		{ "SKEL_L_Finger42", 0x103a },
		{ "PH_L_Hand", 0xeb95 },
		{ "IK_L_Hand", 0x8cbd },
		{ "RB_L_ForeArmRoll", 0xee4f },
		{ "RB_L_ArmRoll", 0x1470 },
		{ "MH_L_Elbow", 0x58b7 },
		{ "SKEL_R_Clavicle", 0x29d2 },
		{ "SKEL_R_UpperArm", 0x9d4d },
		{ "SKEL_R_Forearm", 0x6e5c },
		{ "SKEL_R_Hand", 0xdead },
		{ "SKEL_R_Finger00", 0xe5f2 },
		{ "SKEL_R_Finger01", 0xfa10 },
		{ "SKEL_R_Finger02", 0xfa11 },
		{ "SKEL_R_Finger10", 0xe5f3 },
		{ "SKEL_R_Finger11", 0xfa60 },
		{ "SKEL_R_Finger12", 0xfa61 },
		{ "SKEL_R_Finger20", 0xe5f4 },
		{ "SKEL_R_Finger21", 0xfa70 },
		{ "SKEL_R_Finger22", 0xfa71 },
		{ "SKEL_R_Finger30", 0xe5f5 },
		{ "SKEL_R_Finger31", 0xfa40 },
		{ "SKEL_R_Finger32", 0xfa41 },
		{ "SKEL_R_Finger40", 0xe5f6 },
		{ "SKEL_R_Finger41", 0xfa50 },
		{ "SKEL_R_Finger42", 0xfa51 },
		{ "PH_R_Hand", 0x6f06 },
		{ "IK_R_Hand", 0x188e },
		{ "RB_R_ForeArmRoll", 0xab22 },
		{ "RB_R_ArmRoll", 0x90ff },
		{ "MH_R_Elbow", 0xbb0 },
		{ "SKEL_Neck_1", 0x9995 },
		{ "SKEL_Head", 0x796e },
		{ "IK_Head", 0x322c },
		{ "FACIAL_facialRoot", 0xfe2c },
		{ "FB_L_Brow_Out_000", 0xe3db },
		{ "FB_L_Lid_Upper_000", 0xb2b6 },
		{ "FB_L_Eye_000", 0x62ac },
		{ "FB_L_CheekBone_000", 0x542e },
		{ "FB_L_Lip_Corner_000", 0x74ac },
		{ "FB_R_Lid_Upper_000", 0xaa10 },
		{ "FB_R_Eye_000", 0x6b52 },
		{ "FB_R_CheekBone_000", 0x4b88 },
		{ "FB_R_Brow_Out_000", 0x54c },
		{ "FB_R_Lip_Corner_000", 0x2ba6 },
		{ "FB_Brow_Centre_000", 0x9149 },
		{ "FB_UpperLipRoot_000", 0x4ed2 },
		{ "FB_UpperLip_000", 0xf18f },
		{ "FB_L_Lip_Top_000", 0x4f37 },
		{ "FB_R_Lip_Top_000", 0x4537 },
		{ "FB_Jaw_000", 0xb4a0 },
		{ "FB_LowerLipRoot_000", 0x4324 },
		{ "FB_LowerLip_000", 0x508f },
		{ "FB_L_Lip_Bot_000", 0xb93b },
		{ "FB_R_Lip_Bot_000", 0xc33b },
		{ "FB_Tongue_000", 0xb987 },
		{ "RB_Neck_1", 0x8b93 },
		{ "IK_Root", 0xdd1c }
	};
}

namespace VBone {
	const std::vector<std::string> vNames
	{
		"afterburner",
		"aileron_l",
		"aileron_r",
		"airbrake_l",
		"airbrake_r",
		"ammobelt",
		"arm_1",
		"arm_2",
		"attach_female",
		"attach_male",
		"bodyshell",
		"bonnet",
		"boom_driver",
		"boot",
		"brakelight_l",
		"brakelight_m",
		"brakelight_r",
		"break_extra_1",
		"break_extra_10",
		"break_extra_2",
		"break_extra_3",
		"break_extra_4",
		"break_extra_5",
		"break_extra_6",
		"break_extra_7",
		"break_extra_8",
		"break_extra_9",
		"bucket",
		"bumper_f",
		"bumper_r",
		"carriage",
		"chassis_dummy",
		"chassis_lowlod",
		"crank",
		"cutter_driver",
		"dashglow",
		"dials",
		"door_dside_f",
		"door_dside_r",
		"door_hatch_l",
		"door_hatch_r",
		"door_pside_f",
		"door_pside_r",
		"doorlight_lf",
		"doorlight_lr",
		"doorlight_rf",
		"doorlight_rr",
		"elevator_l",
		"elevator_r",
		"emissives",
		"engine",
		"engine_l",
		"engine_r",
		"exhaust",
		"exhaust_2",
		"exhaust_3",
		"exhaust_4",
		"exhaust_5",
		"exhaust_6",
		"exhaust_7",
		"extra_1",
		"extra_11",
		"extra_12",
		"extra_2",
		"extra_3",
		"extra_4",
		"extra_5",
		"extra_6",
		"extra_7",
		"extra_8",
		"extra_9",
		"extra_ten",
		"fork_l",
		"fork_r",
		"forks",
		"forks_attach",
		"forks_l",
		"forks_u",
		"frame_1",
		"frame_2",
		"frame_3",
		"frame_pickup_1",
		"frame_pickup_2",
		"frame_pickup_3",
		"frame_pickup_4",
		"freight_cont",
		"freightgrain_slidedoor",
		"gear_door_fl",
		"gear_door_fr",
		"gear_door_rl1",
		"gear_door_rl2",
		"gear_door_rml",
		"gear_door_rmr",
		"gear_door_rr1",
		"gear_door_rr2",
		"gear_f",
		"gear_lm1",
		"gear_rl",
		"gear_rm",
		"gear_rm1",
		"gear_rr",
		"handle_dside_f",
		"handle_dside_r",
		"handle_pside_f",
		"handle_pside_r",
		"handlebars",
		"hbgrip_l",
		"hbgrip_r",
		"headlight_l",
		"headlight_r",
		"hub_lf",
		"hub_lm1",
		"hub_lm2",
		"hub_lm3",
		"hub_lr",
		"hub_rf",
		"hub_rm1",
		"hub_rm2",
		"hub_rm3",
		"hub_rr",
		"indicator_lf",
		"indicator_lr",
		"indicator_rf",
		"indicator_rr",
		"interiorlight",
		"legs",
		"light_cover",
		"lookat_lowrpiston_boom",
		"lookat_upprpiston_head",
		"misc_a",
		"misc_b",
		"misc_c",
		"misc_d",
		"misc_e",
		"misc_f",
		"misc_g",
		"misc_h",
		"misc_i",
		"misc_j",
		"misc_k",
		"misc_l",
		"misc_m",
		"misc_n",
		"misc_o",
		"misc_p",
		"misc_q",
		"misc_r",
		"misc_s",
		"misc_t",
		"misc_u",
		"misc_v",
		"mod_col_1",
		"mod_col_2",
		"mod_col_3",
		"mod_col_4",
		"mod_col_5",
		"neon_b",
		"neon_f",
		"neon_l",
		"neon_r",
		"no_ped_col_step_l",
		"no_ped_col_step_r",
		"no_ped_col_strut_1_l",
		"no_ped_col_strut_1_r",
		"no_ped_col_strut_2_l",
		"no_ped_col_strut_2_r",
		"nozzles_f",
		"nozzles_r",
		"outriggers_l",
		"outriggers_r",
		"overheat",
		"overheat_2",
		"pedal_l",
		"pedal_r",
		"petrolcap",
		"petroltank",
		"petroltank_l",
		"petroltank_r",
		"platelight",
		"pontoon_l",
		"pontoon_r",
		"prop_1",
		"prop_2",
		"prop_3",
		"prop_4",
		"reversinglight_l",
		"reversinglight_r",
		"roof",
		"rope_attach_a",
		"rope_attach_b",
		"rotor_main",
		"rotor_rear",
		"rudder",
		"rudder2",
		"rudder_2",
		"rudder_l",
		"rudder_r",
		"scoop",
		"searchlight_base",
		"siren1",
		"siren10",
		"siren11",
		"siren12",
		"siren13",
		"siren14",
		"siren15",
		"siren16",
		"siren17",
		"siren18",
		"siren19",
		"siren2",
		"siren20",
		"siren3",
		"siren4",
		"siren5",
		"siren6",
		"siren7",
		"siren8",
		"siren9",
		"siren_glass1",
		"siren_glass16",
		"siren_glass19",
		"siren_glass2",
		"siren_glass3",
		"siren_glass4",
		"siren_glass5",
		"siren_glass6",
		"slipstream_l",
		"slipstream_r",
		"soft_1",
		"soft_10",
		"soft_11",
		"soft_12",
		"soft_13",
		"soft_2",
		"soft_3",
		"soft_4",
		"soft_5",
		"soft_6",
		"soft_7",
		"soft_8",
		"soft_9",
		"spoiler",
		"spring_lf",
		"spring_lr",
		"spring_rf",
		"static_prop",
		"static_prop2",
		"steeringwheel",
		"struts",
		"suspension_lf",
		"suspension_lm",
		"suspension_lr",
		"suspension_rf",
		"suspension_rm",
		"suspension_rr",
		"swingarm",
		"tail",
		"taillight_l",
		"taillight_r",
		"tow_arm",
		"tow_mount_a",
		"tow_mount_b",
		"transmission_f",
		"transmission_m",
		"transmission_r",
		"turret_1barrel",
		"turret_1base",
		"turret_2barrel",
		"turret_2base",
		"turret_3barrel",
		"turret_3base",
		"vehicle_blocker",
		"weapon_1a",
		"weapon_1a_rot",
		"weapon_1b",
		"weapon_1b_rot",
		"weapon_1c",
		"weapon_1c_rot",
		"weapon_1d",
		"weapon_1d_rot",
		"weapon_2a",
		"weapon_2a_rot",
		"weapon_2b",
		"weapon_2c",
		"weapon_2d",
		"weapon_3a",
		"weapon_3a_rot",
		"wheel_lf",
		"wheel_lm1",
		"wheel_lm2",
		"wheel_lm3",
		"wheel_lr",
		"wheel_rf",
		"wheel_rm1",
		"wheel_rm2",
		"wheel_rm3",
		"wheel_rr",
		"wing_l",
		"wing_lf",
		"wing_lr",
		"wing_r",
		"wing_rf",
		"wing_rr",
		"wingtip_1",
		"wingtip_2"
	};
}

namespace AnimFlag {
	std::map<int, std::string> vFlagNames
	{
		{ AnimFlag::Normal, "Normal" },
		{ AnimFlag::Loop, "Loop" },
		{ AnimFlag::StayInLastFrame, "StayInLastFrame" },

		{ 8, "8" },
		{ 9, "9" },
		{ 10, "10" },

		{ AnimFlag::UpperBody, "UpperBody" },
		{ AnimFlag::UpperBodyLoop, "UpperBody Loop" },
		{ AnimFlag::UpperBodyStayInLastFrame, "UpperBody StayInLastFrame" },

		{ AnimFlag::SecondTask, "SecondTask" },
		{ AnimFlag::SecondTaskLoop, "SecondTask Loop" },
		{ AnimFlag::SecondTaskStayInLastFrame, "SecondTask StayInLastFrame" },

		{ 42, "42" },

		{ AnimFlag::UpperBodySecondTask, "UpperBody SecondTask" },
		{ AnimFlag::UpperBodySecondTaskLoop, "UpperBody SecondTask Loop" },
		{ AnimFlag::UpperBodySecondTaskStayInLastFrame, "UpperBody SecondTask StayInLastFrame" },


		{ 50, "50" },

		{ AnimFlag::AllowInteruption, "Allow Interuption" },

		{ 288, "288" },

		{ 512, "512" },

		{ 1024, "1024" },

		{ 262152, "262152" },
		{ 262153, "262152 Loop" },
		{ 262154, "262152 StayInLastFrame" },

		{ AnimFlag::DisableRootMotion, "DisableRootMotion" },
		{ AnimFlag::DisableRootMotionLoop, "DisableRootMotion Loop" },
		{ AnimFlag::DisableRootMotionStayInLastFrame, "DisableRootMotion StayInLastFrame" },

		{ AnimFlag::RagdollOnCollision, "RagdollOnCollision" },
		{ AnimFlag::RagdollOnCollisionLoop, "RagdollOnCollision Loop" },

		{ AnimFlag::UpperbodySecondTaskUnkUnk, "Upperbody SecondTask UnkUnk" },
		{ AnimFlag::UpperbodySecondTaskUnkUnkLoop, "Upperbody SecondTask UnkUnk Loop " },
		{ AnimFlag::UpperbodySecondTaskUnkUnkStayInLastFrame, "Upperbody SecondTask UnkUnk StayInLastFrame" },
	};
}

namespace MarkerType
{
	const std::vector<std::string> vNames
	{
		{ "Upside-Down Cone" },
		{ "Vertical Cylinder" },
		{ "Thick Chevron (Up)" },
		{ "Thin Chevron (Up)" },
		{ "Checkered Flag (Rectangular)" },
		{ "Checkered Flag (Circular)" },
		{ "Verticle Circle" },
		{ "Plane Model" },
		{ "Lost MC Dark" },
		{ "Lost MC Light" },
		{ "Number 0" },
		{ "Number 1" },
		{ "Number 2" },
		{ "Number 3" },
		{ "Number 4" },
		{ "Number 5" },
		{ "Number 6" },
		{ "Number 7" },
		{ "Number 8" },
		{ "Number 9" },
		{ "Chevron 1 (Up)" },
		{ "Chevron 2 (Up)" },
		{ "Chevron 3 (Up)" },
		{ "Fat Circle" },
		{ "Replay Icon" },
		{ "Thin Circle" },
		{ "Thin Circle With Arrow" },
		{ "Split Arrow Circle" },
		{ "Sphere" }
	};
}

namespace YachtPropPaintVariation
{
	const std::vector<std::string> vNames
	{
		{ "Pacific" },
		{ "Azure" },
		{ "Nautical" },
		{ "Continental" },
		{ "Battleship" },
		{ "Intrepid" },
		{ "Uniform" },
		{ "Classico" },
		{ "Mediterranean" },
		{ "Command" },
		{ "Mariner" },
		{ "Ruby" },
		{ "Vintage" },
		{ "Pristine" },
		{ "Merchant" },
		{ "Voyager" }
	};
}


