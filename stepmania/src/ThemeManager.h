#pragma once
/*
-----------------------------------------------------------------------------
 Class: ThemeManager

 Desc: Manages which graphics and sounds are chosed to load.  Every time 
	a sound or graphic is loaded, it gets the path from the ThemeManager.

 Copyright (c) 2001-2002 by the person(s) listed below.  All rights reserved.
	Chris Danford
-----------------------------------------------------------------------------
*/

#include "RageUtil.h"


enum ThemeElement { 
	GRAPHIC_ALL_MUSIC_BANNER,
	GRAPHIC_ARROWS_LEFT,
	GRAPHIC_ARROWS_RIGHT,
	GRAPHIC_EXPLANATION_ARCADE,
	GRAPHIC_EXPLANATION_ONI,
	GRAPHIC_CAUTION,
	GRAPHIC_GAMEPLAY_CLOSING_STAR,
	GRAPHIC_DANCER_P1,
	GRAPHIC_DANCER_P2,
	GRAPHIC_EDIT_BACKGROUND,
	GRAPHIC_EDIT_TOP_EDGE,
	GRAPHIC_EDIT_SNAP_INDICATOR,
	GRAPHIC_MUSIC_SCROLL_BACKGROUND,
	GRAPHIC_FALLBACK_BACKGROUND,
	GRAPHIC_FALLBACK_BANNER,
	GRAPHIC_FALLBACK_CD_TITLE,
	GRAPHIC_GAME_OPTIONS_BACKGROUND,
	GRAPHIC_GAME_OPTIONS_TOP_EDGE,
	GRAPHIC_GAME_OVER,
	GRAPHIC_GAMEPLAY_CLEARED,
	GRAPHIC_GAMEPLAY_COMBO,		
	GRAPHIC_GAMEPLAY_DANGER_BACKGROUND,
	GRAPHIC_GAMEPLAY_DANGER_TEXT,
	GRAPHIC_GAMEPLAY_DEMONSTRATION,
	GRAPHIC_GAMEPLAY_FAILED,	
	GRAPHIC_GAMEPLAY_JUDGEMENT,	
	GRAPHIC_GAMEPLAY_READY,	
	GRAPHIC_GAMEPLAY_HERE_WE_GO,	
	GRAPHIC_GAMEPLAY_BOTTOM_FRAME,
	GRAPHIC_GAMEPLAY_DIFFICULTY_BANNER_ICONS,
	GRAPHIC_GAMEPLAY_DIFFICULTY_BANNER_FRAME,
	GRAPHIC_GAMEPLAY_TOP_FRAME,
	GRAPHIC_GAMEPLAY_LIFEMETER_BAR,
	GRAPHIC_GAMEPLAY_LIFEMETER_ONI,
	GRAPHIC_GAMEPLAY_LIFEMETER_BATTERY,
	GRAPHIC_GAMEPLAY_LIFEMETER_STREAM_NORMAL,
	GRAPHIC_GAMEPLAY_LIFEMETER_STREAM_HOT,
	GRAPHIC_GAMEPLAY_ONI_GAMEOVER,
	GRAPHIC_LOADING,	
	GRAPHIC_KEEP_ALIVE,	
	GRAPHIC_MAP_CONTROLLERS_BACKGROUND,
	GRAPHIC_MAP_CONTROLLERS_TOP_EDGE,
	GRAPHIC_MENU_BOTTOM_EDGE,
	GRAPHIC_MENU_STYLE_ICONS,
	GRAPHIC_MUSIC_SORT_ICONS,
	GRAPHIC_MUSIC_STATUS_ICONS,
	GRAPHIC_GAMEPLAY_OPENING_STAR,
	GRAPHIC_PAD_DOUBLE,
	GRAPHIC_PAD_SINGLE,	
	GRAPHIC_PAD_SOLO,
	GRAPHIC_PLAYER_OPTIONS_BACKGROUND,
	GRAPHIC_PLAYER_OPTIONS_TOP_EDGE,
	GRAPHIC_EVALUATION_BACKGROUND,
	GRAPHIC_EVALUATION_BANNER_FRAME,
	GRAPHIC_EVALUATION_BONUS_FRAME_P1,
	GRAPHIC_EVALUATION_BONUS_FRAME_P2,
	GRAPHIC_EVALUATION_STAGE_FRAME_P1,
	GRAPHIC_EVALUATION_STAGE_FRAME_P2,
	GRAPHIC_EVALUATION_GRADE_FRAME,
	GRAPHIC_EVALUATION_GRADES,	
	GRAPHIC_EVALUATION_JUDGE_LABELS,
	GRAPHIC_EVALUATION_SCORE_LABELS,
	GRAPHIC_EVALUATION_SUMMARY_TOP_EDGE,
	GRAPHIC_EVALUATION_TOP_EDGE,
	GRAPHIC_SELECT_COURSE_INFO_FRAME,
	GRAPHIC_SELECT_COURSE_TOP_EDGE,
	GRAPHIC_SELECT_COURSE_BACKGROUND,
	GRAPHIC_SELECT_COURSE_CONTENT_BAR,
	GRAPHIC_SELECT_DIFFICULTY_ARROWS,
	GRAPHIC_SELECT_DIFFICULTY_BACKGROUND,
	GRAPHIC_SELECT_DIFFICULTY_EASY_HEADER,
	GRAPHIC_SELECT_DIFFICULTY_EASY_PICTURE,
	GRAPHIC_SELECT_DIFFICULTY_EXPLANATION,
	GRAPHIC_SELECT_DIFFICULTY_HARD_HEADER,
	GRAPHIC_SELECT_DIFFICULTY_HARD_PICTURE,
	GRAPHIC_SELECT_DIFFICULTY_MEDIUM_HEADER,
	GRAPHIC_SELECT_DIFFICULTY_MEDIUM_PICTURE,
	GRAPHIC_SELECT_DIFFICULTY_ONI_HEADER,
	GRAPHIC_SELECT_DIFFICULTY_ONI_PICTURE,
	GRAPHIC_SELECT_DIFFICULTY_ENDLESS_HEADER,
	GRAPHIC_SELECT_DIFFICULTY_ENDLESS_PICTURE,
	GRAPHIC_SELECT_DIFFICULTY_OK,
	GRAPHIC_SELECT_DIFFICULTY_TOP_EDGE,
	GRAPHIC_SELECT_GAME_BACKGROUND,
	GRAPHIC_SELECT_GAME_TOP_EDGE,
	GRAPHIC_SELECT_GROUP_BACKGROUND,
	GRAPHIC_SELECT_GROUP_BUTTON,
	GRAPHIC_SELECT_GROUP_CONTENTS_HEADER,
	GRAPHIC_SELECT_GROUP_EXPLANATION,
	GRAPHIC_SELECT_GROUP_INFO_FRAME,
	GRAPHIC_SELECT_GROUP_TOP_EDGE,
	GRAPHIC_SELECT_MUSIC_BACKGROUND,
	GRAPHIC_SELECT_MUSIC_DIFFICULTY_FRAME,
	GRAPHIC_SELECT_MUSIC_DIFFICULTY_ICONS,
	GRAPHIC_SELECT_MUSIC_INFO_FRAME,
	GRAPHIC_SELECT_MUSIC_METER_FRAME,
	GRAPHIC_SELECT_MUSIC_RADAR_BASE,
	GRAPHIC_SELECT_MUSIC_RADAR_WORDS,
	GRAPHIC_SELECT_MUSIC_ROULETTE_BANNER,
	GRAPHIC_SELECT_MUSIC_SCORE_FRAME,
	GRAPHIC_SELECT_MUSIC_SECTION_BAR,
	GRAPHIC_SELECT_MUSIC_SCROLLBAR,		
	GRAPHIC_SELECT_MUSIC_SECTION_BANNER,
	GRAPHIC_SELECT_MUSIC_SMALL_GRADES,	
	GRAPHIC_SELECT_MUSIC_SONG_BAR,
	GRAPHIC_SELECT_MUSIC_SONG_HIGHLIGHT,
	GRAPHIC_SELECT_MUSIC_TOP_EDGE,
	GRAPHIC_SELECT_MUSIC_LONG_BALLOON,
	GRAPHIC_SELECT_MUSIC_MARATHON_BALLOON,
	GRAPHIC_SELECT_STYLE_BACKGROUND,
	GRAPHIC_SELECT_STYLE_TOP_EDGE,
	GRAPHIC_SELECT_STYLE_EXPLANATION,
	GRAPHIC_SELECT_STYLE_ICONS,
	GRAPHIC_SELECT_STYLE_INFO_0,
	GRAPHIC_SELECT_STYLE_INFO_1,
	GRAPHIC_SELECT_STYLE_INFO_2,
	GRAPHIC_SELECT_STYLE_INFO_3,
	GRAPHIC_SELECT_STYLE_INFO_4,
	GRAPHIC_SELECT_STYLE_INFO_5,
	GRAPHIC_SELECT_STYLE_PREVIEW_0,
	GRAPHIC_SELECT_STYLE_PREVIEW_1,
	GRAPHIC_SELECT_STYLE_PREVIEW_2,
	GRAPHIC_SELECT_STYLE_PREVIEW_3,
	GRAPHIC_SELECT_STYLE_PREVIEW_4,
	GRAPHIC_SELECT_STYLE_PREVIEW_5,
	GRAPHIC_SONG_OPTIONS_BACKGROUND,
	GRAPHIC_SONG_OPTIONS_TOP_EDGE,
	GRAPHIC_TITLE_MENU_BACKGROUND,
	GRAPHIC_TITLE_MENU_LOGO,

	SOUND_ATTRACT_INSERT_COIN,	
	SOUND_EDIT_CHANGE_BPM,	
	SOUND_EDIT_CHANGE_FREEZE,	
	SOUND_EDIT_CHANGE_LINE,	
	SOUND_EDIT_CHANGE_SNAP,	
	SOUND_EDIT_SAVE,	
	SOUND_EVALUATION_EXTRA_STAGE,	
	SOUND_INSERT_COIN,
	SOUND_GAMEPLAY_ASSIST_TICK,	
	SOUND_GAMEPLAY_FAILED,	
	SOUND_GAMEPLAY_ONI_GAIN_LIFE,	
	SOUND_GAMEPLAY_ONI_LOSE_LIFE,	
	SOUND_GAMEPLAY_ONI_DIE,	
	SOUND_MENU_BACK,	
	SOUND_MENU_EXPLANATION_SWOOSH,	
	SOUND_MENU_INVALID,	
	SOUND_MENU_MUSIC,	
	SOUND_MENU_PROMPT,	
	SOUND_MENU_START,	
	SOUND_MENU_SWOOSH,
	SOUND_MENU_TIMER,
	SOUND_MUSIC_SCROLL_MUSIC,
	SOUND_OPTION_CHANGE_COL,	
	SOUND_OPTION_CHANGE_ROW,	
	SOUND_SELECT_DIFFICULTY_CHANGE,	
	SOUND_SELECT_GROUP_CHANGE,	
	SOUND_SELECT_MUSIC_CHANGE_MUSIC,	
	SOUND_SELECT_MUSIC_CHANGE_SORT,	
	SOUND_SELECT_MUSIC_CHANGE_NOTES,	
	SOUND_SELECT_MUSIC_CHANGE_OPTIONS,	
	SOUND_SELECT_MUSIC_WHEEL_LOCKED,	
	SOUND_SELECT_MUSIC_SECTION_EXPAND,	
	SOUND_SELECT_STYLE_CHANGE,	
	SOUND_TITLE_MENU_CHANGE,

	FONT_HEADER1,	
	FONT_HEADER2,	
	FONT_NORMAL,
	FONT_ITALIC,
	FONT_COMBO_NUMBERS,	
	FONT_METER,
	FONT_SCORE_NUMBERS,	
	FONT_TIMER_NUMBERS,	
	FONT_TEXT_BANNER,	
	FONT_STAGE,	

	NUM_THEME_ELEMENTS	// leave this at the end
};



class ThemeManager
{
public:
	ThemeManager();

	void GetThemeNamesForCurGame( CStringArray& AddTo );
	bool DoesThemeExist( CString sThemeName );
	void AssertThemeIsComplete( CString sThemeName );
	void SwitchTheme( CString sThemeName );
	CString GetCurThemeName() { return m_sCurThemeName; };

	CString GetPathTo( ThemeElement te );	// looks up the current theme in PREFSMAN

protected:
	void GetAllThemeNames( CStringArray& AddTo );

	CString GetPathTo( ThemeElement te, CString sThemeName );

	static CString GetThemeDirFromName( CString sAnnouncerName );
	CString GetElementDir( CString sThemeName );

	CString m_sCurThemeName;
};



extern ThemeManager*	THEME;	// global and accessable from anywhere in our program
