/*
 * Super Entity Game Server
 * http://segs.sf.net/
 * Copyright (c) 2006 Super Entity Game Server Team (see Authors.txt)
 * This software is licensed! (See License.txt for details)
 *
 */

#pragma once

// City of Heroes Client/Server Opcodes
typedef enum {
    COMM_CONTROLCOMMAND                   = 0x00,
    COMM_CONNECT                          = 0x01,
    SERVER_UPDATE                         = 0x02,
    SERVER_ALLENTS                        = 0x03,
    SERVER_CMDSHORTCUTS                   = 0x04,
    SERVER_CONNECT_MSG                    = 0x05,
    SERVER_GROUPS                         = 0x06,
    SERVER_EDITMSG                        = 0x07,
    SERVER_DEBUGCMD                       = 0x08,
    SERVER_SENDENTDEBUGMENU               = 0x09,
    SERVER_MAPXFERWAIT                    = 0x0A,
    SERVER_MAPXFER                        = 0x0B,
    SERVER_FORCE_LOGOUT                   = 0x0C,
    SERVER_GAME_CMDS                      = 0x0D,
    SERVER_RECEIVE_DIALOG                 = 0x0E,
    SERVER_RECEIVE_DIALOG_POWREQ          = 0x0F,
    SERVER_RECEIVE_DIALOG_NAG             = 0x10,
    SERVER_RECEIVE_INFO_BOX               = 0x11,
    SERVER_DOOR_CMD                       = 0x12,
    SERVER_SEND_CONSOLE_OUTPUT            = 0x13,
    SERVER_SET_CLIENT_STATE               = 0x14,
    SERVER_CON_PRINTF                     = 0x15,
    SERVER_SEND_CHAT_MSG                  = 0x16,
    SERVER_SEND_FLOATING_DAMAGE           = 0x17,
    SERVER_VISITED_MAP_CELLS              = 0x18,
    SERVER_UPDATE_WAYPOINT                = 0x19,
    SERVER_SET_WAYPOINT                   = 0x1A,
    SERVER_TEAM_OFFER                     = 0x1B,
    SERVER_TASKFORCE_KICK                 = 0x1C,
    SERVER_TASKFORCE_QUIT                 = 0x1D,
    SERVER_SIDEKICK_OFFER                 = 0x1E,
    SERVER_SUPERGROUP_OFFER               = 0x1F,
    SERVER_SGROUP_CREATE_REPLY            = 0x20,
    SERVER_SUPERGROUP_COSTUME             = 0x21,
    SERVER_ALLIANCE_OFFER                 = 0x22,
    SERVER_CUTSCENE_UPDATE                = 0x23,
    SERVER_TRADE_OFFER                    = 0x24,
    SERVER_TRADE_INIT                     = 0x25,
    SERVER_TRADE_CANCEL                   = 0x26,
    SERVER_TRADE_UPDATE                   = 0x27,
    SERVER_TRADE_SUCCESS                  = 0x28,
    SERVER_SEND_FRIENDS                   = 0x29,
    SERVER_CONTROL_PLAYER                 = 0x2A,
    SERVER_CONTACT_DIALOG_OPEN            = 0x2B,
    SERVER_CONTACT_DIALOG_CLOSE           = 0x2C,
    SERVER_CONTACT_DIALOG_OK              = 0x2D,
    SERVER_CONTACT_DIALOG_YESNO           = 0x2E,
    SERVER_CONTACT_STATUS                 = 0x2F,
    SERVER_CONTACT_SELECT                 = 0x30,
    SERVER_TASK_STATUS                    = 0x31,
    SERVER_TASK_SELECT                    = 0x32,
    SERVER_TASKS_REMOVE_TEAMMATE_TASKS    = 0x33,
    SERVER_MISSION_ENTRY                  = 0x34,
    SERVER_MISSION_KICKTIMER              = 0x35,
    SERVER_DEAD_NOGURNEY                  = 0x36,
    SERVER_DOORANIM                       = 0x37,
    SERVER_DOOREXIT                       = 0x38,
    SERVER_FACE_ENTITY                    = 0x39,
    SERVER_FACE_LOCATION                  = 0x3A,
    SERVER_SEND_FLOATING_INFO             = 0x3B,
    SERVER_SET_STANCE                     = 0x3C,
    SERVER_MAP_XFER_LIST                  = 0x3D,
    SERVER_MAP_XFER_LIST_CLOSE            = 0x3E,
    SERVER_ENABLE_CONTROL_LOG             = 0x3F,
    SERVER_LEVEL_UP                       = 0x40,
    SERVER_UNLOCK_SKILLS                  = 0x41,
    SERVER_NEW_TITLE                      = 0x42,
    SERVER_PERFORMANCE_UPDATE             = 0x43,
    SERVER_CSR_BUG_REPORT                 = 0x44,
    SERVER_SEND_EMAIL_HEADERS             = 0x45,
    SERVER_SEND_EMAIL_MESSAGE             = 0x46,
    SERVER_SEND_EMAIL_MESSAGE_STATUS      = 0x47,
    SERVER_TASK_VISITLOCATION_UPDATE      = 0x48,
    SERVER_SEND_PLAYER_INFO               = 0x49,
    SERVER_CLUE_UPDATE                    = 0x4A,
    SERVER_KEYCLUE_UPDATE                 = 0x4B,
    SERVER_SOUVENIRCLUE_UPDATE            = 0x4C,
    SERVER_SOUVENIRCLUE_DETAIL            = 0x4D,
    SERVER_MISSION_OBJECTIVE_TIMER_UPDATE = 0x4E,
    SERVER_REGISTER_SUPERGROUP            = 0x4F,
    SERVER_SUPERGROUP_LIST                = 0x50,
    SERVER_SGRAID_LIST                    = 0x51,
    SERVER_TASK_DETAIL                    = 0x52,
    SERVER_BROWSER_TEXT                   = 0x53,
    SERVER_BROWSER_CLOSE                  = 0x54,
    SERVER_STORE_OPEN                     = 0x55,
    SERVER_STORE_CLOSE                    = 0x56,
    SERVER_BUG_REPORT                     = 0x57,
    SERVER_MISSION_SURVEY                 = 0x58,
    SERVER_SEND_TRAY_ADD                  = 0x59,
    SERVER_COMBINE_RESPONSE               = 0x5A,
    SERVER_ARENA_KIOSK                    = 0x5B,
    SERVER_ARENA_EVENTS                   = 0x5C,
    SERVER_ARENA_EVENTUPDATE              = 0x5D,
    SERVER_ARENA_UPDATE_TRAY_DISABLE      = 0x5E,
    SERVER_ARENAKIOSK_SETOPEN             = 0x5F,
    SERVER_ARENA_OFFER                    = 0x60,
    SERVER_ARENA_ERROR                    = 0x61,
    SERVER_SGRAID_COMPASS_STRING          = 0x62,
    SERVER_TAILOR_OPEN                    = 0x63,
    SERVER_RESPEC_OPEN                    = 0x64,
    SERVER_SEARCH_RESULTS                 = 0x65,
    SERVER_VALIDATE_RESPEC                = 0x66,
    SERVER_SEND_REWARD_CHOICE             = 0x67,
    SERVER_LARGE_PACKET                   = 0x68,
    SERVER_SCRIPT_DEBUGINFO               = 0x69,
    SERVER_SHARDCOMM                      = 0x6A,
    SERVER_ARENA_UPDATE_PLAYER            = 0x6B,
    SERVER_ARENA_REQRESULTS               = 0x6C,
    SERVER_ARENA_START_COUNT              = 0x6D,
    SERVER_ARENA_COMPASS_STRING           = 0x6E,
    SERVER_ARENA_STOCK_LIVES              = 0x6F,
    SERVER_ARENA_SCHEDULED_TELEPORT       = 0x70,
    SERVER_ARENA_RUN_EVENT_WINDOW         = 0x71,
    SERVER_SCRIPT_UI                      = 0x72,
    SERVER_SCRIPT_UI_UPDATE               = 0x73,
    SERVER_ARENA_MANAGEPETS               = 0x74,
    SERVER_UPDATE_PET_STATE               = 0x75,
    SERVER_BASE_CREATE                    = 0x76,
    SERVER_CMD_COUNT                      = 0x77,
} eGameOpcode;
