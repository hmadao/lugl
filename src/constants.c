#include "private.h"

/* clang-format off */
static void lugl_event_code_init(lua_State* L)
{
    lua_newtable(L);

    lua_pushstring(L, "ALL"); lua_pushinteger(L, LV_EVENT_ALL); lua_settable(L, -3);
    lua_pushstring(L, "PRESSED"); lua_pushinteger(L, LV_EVENT_PRESSED); lua_settable(L, -3);
    lua_pushstring(L, "PRESSING"); lua_pushinteger(L, LV_EVENT_PRESSING); lua_settable(L, -3);
    lua_pushstring(L, "PRESS_LOST"); lua_pushinteger(L, LV_EVENT_PRESS_LOST); lua_settable(L, -3);
    lua_pushstring(L, "SHORT_CLICKED"); lua_pushinteger(L, LV_EVENT_SHORT_CLICKED); lua_settable(L, -3);
    lua_pushstring(L, "LONG_PRESSED"); lua_pushinteger(L, LV_EVENT_LONG_PRESSED); lua_settable(L, -3);
    lua_pushstring(L, "LONG_PRESSED_REPEAT"); lua_pushinteger(L, LV_EVENT_LONG_PRESSED_REPEAT); lua_settable(L, -3);
    lua_pushstring(L, "CLICKED"); lua_pushinteger(L, LV_EVENT_CLICKED); lua_settable(L, -3);
    lua_pushstring(L, "RELEASED"); lua_pushinteger(L, LV_EVENT_RELEASED); lua_settable(L, -3);
    lua_pushstring(L, "SCROLL_BEGIN"); lua_pushinteger(L, LV_EVENT_SCROLL_BEGIN); lua_settable(L, -3);
    lua_pushstring(L, "SCROLL_END"); lua_pushinteger(L, LV_EVENT_SCROLL_END); lua_settable(L, -3);
    lua_pushstring(L, "SCROLL"); lua_pushinteger(L, LV_EVENT_SCROLL); lua_settable(L, -3);
    lua_pushstring(L, "GESTURE"); lua_pushinteger(L, LV_EVENT_GESTURE); lua_settable(L, -3);
    lua_pushstring(L, "KEY"); lua_pushinteger(L, LV_EVENT_KEY); lua_settable(L, -3);
    lua_pushstring(L, "FOCUSED"); lua_pushinteger(L, LV_EVENT_FOCUSED); lua_settable(L, -3);
    lua_pushstring(L, "DEFOCUSED"); lua_pushinteger(L, LV_EVENT_DEFOCUSED); lua_settable(L, -3);
    lua_pushstring(L, "LEAVE"); lua_pushinteger(L, LV_EVENT_LEAVE); lua_settable(L, -3);
    lua_pushstring(L, "HIT_TEST"); lua_pushinteger(L, LV_EVENT_HIT_TEST); lua_settable(L, -3);
    lua_pushstring(L, "COVER_CHECK"); lua_pushinteger(L, LV_EVENT_COVER_CHECK); lua_settable(L, -3);
    lua_pushstring(L, "REFR_EXT_DRAW_SIZE"); lua_pushinteger(L, LV_EVENT_REFR_EXT_DRAW_SIZE); lua_settable(L, -3);
    lua_pushstring(L, "DRAW_MAIN_BEGIN"); lua_pushinteger(L, LV_EVENT_DRAW_MAIN_BEGIN); lua_settable(L, -3);
    lua_pushstring(L, "DRAW_MAIN"); lua_pushinteger(L, LV_EVENT_DRAW_MAIN); lua_settable(L, -3);
    lua_pushstring(L, "DRAW_MAIN_END"); lua_pushinteger(L, LV_EVENT_DRAW_MAIN_END); lua_settable(L, -3);
    lua_pushstring(L, "DRAW_POST_BEGIN"); lua_pushinteger(L, LV_EVENT_DRAW_POST_BEGIN); lua_settable(L, -3);
    lua_pushstring(L, "DRAW_POST"); lua_pushinteger(L, LV_EVENT_DRAW_POST); lua_settable(L, -3);
    lua_pushstring(L, "DRAW_POST_END"); lua_pushinteger(L, LV_EVENT_DRAW_POST_END); lua_settable(L, -3);
    lua_pushstring(L, "DRAW_PART_BEGIN"); lua_pushinteger(L, LV_EVENT_DRAW_PART_BEGIN); lua_settable(L, -3);
    lua_pushstring(L, "DRAW_PART_END"); lua_pushinteger(L, LV_EVENT_DRAW_PART_END); lua_settable(L, -3);
    lua_pushstring(L, "VALUE_CHANGED"); lua_pushinteger(L, LV_EVENT_VALUE_CHANGED); lua_settable(L, -3);
    lua_pushstring(L, "INSERT"); lua_pushinteger(L, LV_EVENT_INSERT); lua_settable(L, -3);
    lua_pushstring(L, "REFRESH"); lua_pushinteger(L, LV_EVENT_REFRESH); lua_settable(L, -3);
    lua_pushstring(L, "READY"); lua_pushinteger(L, LV_EVENT_READY); lua_settable(L, -3);
    lua_pushstring(L, "CANCEL"); lua_pushinteger(L, LV_EVENT_CANCEL); lua_settable(L, -3);
    lua_pushstring(L, "DELETE"); lua_pushinteger(L, LV_EVENT_DELETE); lua_settable(L, -3);
    lua_pushstring(L, "CHILD_CHANGED"); lua_pushinteger(L, LV_EVENT_CHILD_CHANGED); lua_settable(L, -3);
    lua_pushstring(L, "CHILD_CREATED"); lua_pushinteger(L, LV_EVENT_CHILD_CREATED); lua_settable(L, -3);
    lua_pushstring(L, "CHILD_DELETED"); lua_pushinteger(L, LV_EVENT_CHILD_DELETED); lua_settable(L, -3);
    lua_pushstring(L, "SCREEN_UNLOAD_START"); lua_pushinteger(L, LV_EVENT_SCREEN_UNLOAD_START); lua_settable(L, -3);
    lua_pushstring(L, "SCREEN_LOAD_START"); lua_pushinteger(L, LV_EVENT_SCREEN_LOAD_START); lua_settable(L, -3);
    lua_pushstring(L, "SCREEN_LOADED"); lua_pushinteger(L, LV_EVENT_SCREEN_LOADED); lua_settable(L, -3);
    lua_pushstring(L, "SCREEN_UNLOADED"); lua_pushinteger(L, LV_EVENT_SCREEN_UNLOADED); lua_settable(L, -3);
    lua_pushstring(L, "SIZE_CHANGED"); lua_pushinteger(L, LV_EVENT_SIZE_CHANGED); lua_settable(L, -3);
    lua_pushstring(L, "STYLE_CHANGED"); lua_pushinteger(L, LV_EVENT_STYLE_CHANGED); lua_settable(L, -3);
    lua_pushstring(L, "LAYOUT_CHANGED"); lua_pushinteger(L, LV_EVENT_LAYOUT_CHANGED); lua_settable(L, -3);
    lua_pushstring(L, "GET_SELF_SIZE"); lua_pushinteger(L, LV_EVENT_GET_SELF_SIZE); lua_settable(L, -3);
}

static void lugl_obj_flag_init(lua_State* L)
{
    lua_newtable(L);

    lua_pushstring(L, "PRESSED"); lua_pushinteger(L, LV_EVENT_PRESSED); lua_settable(L, -3);
    lua_pushstring(L, "HIDDEN"); lua_pushinteger(L, LV_OBJ_FLAG_HIDDEN); lua_settable(L, -3);
    lua_pushstring(L, "CLICKABLE"); lua_pushinteger(L, LV_OBJ_FLAG_CLICKABLE); lua_settable(L, -3);
    lua_pushstring(L, "CLICK_FOCUSABLE"); lua_pushinteger(L, LV_OBJ_FLAG_CLICK_FOCUSABLE); lua_settable(L, -3);
    lua_pushstring(L, "CHECKABLE"); lua_pushinteger(L, LV_OBJ_FLAG_CHECKABLE); lua_settable(L, -3);
    lua_pushstring(L, "SCROLLABLE"); lua_pushinteger(L, LV_OBJ_FLAG_SCROLLABLE); lua_settable(L, -3);
    lua_pushstring(L, "SCROLL_ELASTIC"); lua_pushinteger(L, LV_OBJ_FLAG_SCROLL_ELASTIC); lua_settable(L, -3);
    lua_pushstring(L, "SCROLL_MOMENTUM"); lua_pushinteger(L, LV_OBJ_FLAG_SCROLL_MOMENTUM); lua_settable(L, -3);
    lua_pushstring(L, "SCROLL_ONE"); lua_pushinteger(L, LV_OBJ_FLAG_SCROLL_ONE); lua_settable(L, -3);
    lua_pushstring(L, "SCROLL_CHAIN_HOR"); lua_pushinteger(L, LV_OBJ_FLAG_SCROLL_CHAIN_HOR); lua_settable(L, -3);
    lua_pushstring(L, "SCROLL_CHAIN_VER"); lua_pushinteger(L, LV_OBJ_FLAG_SCROLL_CHAIN_VER); lua_settable(L, -3);
    lua_pushstring(L, "SCROLL_CHAIN"); lua_pushinteger( L, LV_OBJ_FLAG_SCROLL_CHAIN_HOR | LV_OBJ_FLAG_SCROLL_CHAIN_VER); lua_settable(L, -3);
    lua_pushstring(L, "SCROLL_ON_FOCUS"); lua_pushinteger(L, LV_OBJ_FLAG_SCROLL_ON_FOCUS); lua_settable(L, -3);
    lua_pushstring(L, "SCROLL_WITH_ARROW"); lua_pushinteger(L, LV_OBJ_FLAG_SCROLL_WITH_ARROW); lua_settable(L, -3);
    lua_pushstring(L, "SNAPPABLE"); lua_pushinteger(L, LV_OBJ_FLAG_SNAPPABLE); lua_settable(L, -3);
    lua_pushstring(L, "PRESS_LOCK"); lua_pushinteger(L, LV_OBJ_FLAG_PRESS_LOCK); lua_settable(L, -3);
    lua_pushstring(L, "EVENT_BUBBLE"); lua_pushinteger(L, LV_OBJ_FLAG_EVENT_BUBBLE); lua_settable(L, -3);
    lua_pushstring(L, "GESTURE_BUBBLE"); lua_pushinteger(L, LV_OBJ_FLAG_GESTURE_BUBBLE); lua_settable(L, -3);
    lua_pushstring(L, "ADV_HITTEST"); lua_pushinteger(L, LV_OBJ_FLAG_ADV_HITTEST); lua_settable(L, -3);
    lua_pushstring(L, "IGNORE_LAYOUT"); lua_pushinteger(L, LV_OBJ_FLAG_IGNORE_LAYOUT); lua_settable(L, -3);
    lua_pushstring(L, "FLOATING"); lua_pushinteger(L, LV_OBJ_FLAG_FLOATING); lua_settable(L, -3);
    lua_pushstring(L, "OVERFLOW_VISIBLE"); lua_pushinteger(L, LV_OBJ_FLAG_OVERFLOW_VISIBLE); lua_settable(L, -3);
    lua_pushstring(L, "LAYOUT_1"); lua_pushinteger(L, LV_OBJ_FLAG_LAYOUT_1); lua_settable(L, -3);
    lua_pushstring(L, "LAYOUT_2"); lua_pushinteger(L, LV_OBJ_FLAG_LAYOUT_2); lua_settable(L, -3);
    lua_pushstring(L, "WIDGET_1"); lua_pushinteger(L, LV_OBJ_FLAG_WIDGET_1); lua_settable(L, -3);
    lua_pushstring(L, "WIDGET_2"); lua_pushinteger(L, LV_OBJ_FLAG_WIDGET_2); lua_settable(L, -3);
    lua_pushstring(L, "USER_1"); lua_pushinteger(L, LV_OBJ_FLAG_USER_1); lua_settable(L, -3);
    lua_pushstring(L, "USER_2"); lua_pushinteger(L, LV_OBJ_FLAG_USER_2); lua_settable(L, -3);
    lua_pushstring(L, "USER_3"); lua_pushinteger(L, LV_OBJ_FLAG_USER_3); lua_settable(L, -3);
    lua_pushstring(L, "USER_4"); lua_pushinteger(L, LV_OBJ_FLAG_USER_4); lua_settable(L, -3);
}

static void lugl_state_init(lua_State* L)
{
    lua_newtable(L);

    lua_pushstring(L, "DEFAULT"); lua_pushinteger(L, LV_STATE_DEFAULT); lua_settable(L, -3);
    lua_pushstring(L, "CHECKED"); lua_pushinteger(L, LV_STATE_CHECKED); lua_settable(L, -3);
    lua_pushstring(L, "FOCUSED"); lua_pushinteger(L, LV_STATE_FOCUSED); lua_settable(L, -3);
    lua_pushstring(L, "FOCUS_KEY"); lua_pushinteger(L, LV_STATE_FOCUS_KEY); lua_settable(L, -3);
    lua_pushstring(L, "EDITED"); lua_pushinteger(L, LV_STATE_EDITED); lua_settable(L, -3);
    lua_pushstring(L, "HOVERED"); lua_pushinteger(L, LV_STATE_HOVERED); lua_settable(L, -3);
    lua_pushstring(L, "PRESSED"); lua_pushinteger(L, LV_STATE_PRESSED); lua_settable(L, -3);
    lua_pushstring(L, "SCROLLED"); lua_pushinteger(L, LV_STATE_SCROLLED); lua_settable(L, -3);
    lua_pushstring(L, "DISABLED"); lua_pushinteger(L, LV_STATE_DISABLED); lua_settable(L, -3);
    lua_pushstring(L, "USER_1"); lua_pushinteger(L, LV_STATE_USER_1); lua_settable(L, -3);
    lua_pushstring(L, "USER_2"); lua_pushinteger(L, LV_STATE_USER_2); lua_settable(L, -3);
    lua_pushstring(L, "USER_3"); lua_pushinteger(L, LV_STATE_USER_3); lua_settable(L, -3);
    lua_pushstring(L, "USER_4"); lua_pushinteger(L, LV_STATE_USER_4); lua_settable(L, -3);
    lua_pushstring(L, "ANY"); lua_pushinteger(L, LV_STATE_ANY); lua_settable(L, -3);
}

static void lugl_align_init(lua_State* L)
{
    lua_newtable(L);

    lua_pushstring(L, "DEFAULT"); lua_pushinteger(L, LV_ALIGN_DEFAULT); lua_settable(L, -3);
    lua_pushstring(L, "TOP_LEFT"); lua_pushinteger(L, LV_ALIGN_TOP_LEFT); lua_settable(L, -3);
    lua_pushstring(L, "TOP_MID"); lua_pushinteger(L, LV_ALIGN_TOP_MID); lua_settable(L, -3);
    lua_pushstring(L, "TOP_RIGHT"); lua_pushinteger(L, LV_ALIGN_TOP_RIGHT); lua_settable(L, -3);
    lua_pushstring(L, "BOTTOM_LEFT"); lua_pushinteger(L, LV_ALIGN_BOTTOM_LEFT); lua_settable(L, -3);
    lua_pushstring(L, "BOTTOM_MID"); lua_pushinteger(L, LV_ALIGN_BOTTOM_MID); lua_settable(L, -3);
    lua_pushstring(L, "BOTTOM_RIGHT"); lua_pushinteger(L, LV_ALIGN_BOTTOM_RIGHT); lua_settable(L, -3);
    lua_pushstring(L, "LEFT_MID"); lua_pushinteger(L, LV_ALIGN_LEFT_MID); lua_settable(L, -3);
    lua_pushstring(L, "RIGHT_MID"); lua_pushinteger(L, LV_ALIGN_RIGHT_MID); lua_settable(L, -3);
    lua_pushstring(L, "CENTER"); lua_pushinteger(L, LV_ALIGN_CENTER); lua_settable(L, -3);
    lua_pushstring(L, "OUT_TOP_LEFT"); lua_pushinteger(L, LV_ALIGN_OUT_TOP_LEFT); lua_settable(L, -3);
    lua_pushstring(L, "OUT_TOP_MID"); lua_pushinteger(L, LV_ALIGN_OUT_TOP_MID); lua_settable(L, -3);
    lua_pushstring(L, "OUT_TOP_RIGHT"); lua_pushinteger(L, LV_ALIGN_OUT_TOP_RIGHT); lua_settable(L, -3);
    lua_pushstring(L, "OUT_BOTTOM_LEFT"); lua_pushinteger(L, LV_ALIGN_OUT_BOTTOM_LEFT); lua_settable(L, -3);
    lua_pushstring(L, "OUT_BOTTOM_MID"); lua_pushinteger(L, LV_ALIGN_OUT_BOTTOM_MID); lua_settable(L, -3);
    lua_pushstring(L, "OUT_BOTTOM_RIGHT"); lua_pushinteger(L, LV_ALIGN_OUT_BOTTOM_RIGHT); lua_settable(L, -3);
    lua_pushstring(L, "OUT_LEFT_TOP"); lua_pushinteger(L, LV_ALIGN_OUT_LEFT_TOP); lua_settable(L, -3);
    lua_pushstring(L, "OUT_LEFT_MID"); lua_pushinteger(L, LV_ALIGN_OUT_LEFT_MID); lua_settable(L, -3);
    lua_pushstring(L, "OUT_LEFT_BOTTOM"); lua_pushinteger(L, LV_ALIGN_OUT_LEFT_BOTTOM); lua_settable(L, -3);
    lua_pushstring(L, "OUT_RIGHT_TOP"); lua_pushinteger(L, LV_ALIGN_OUT_RIGHT_TOP); lua_settable(L, -3);
    lua_pushstring(L, "OUT_RIGHT_MID"); lua_pushinteger(L, LV_ALIGN_OUT_RIGHT_MID); lua_settable(L, -3);
    lua_pushstring(L, "OUT_RIGHT_BOTTOM"); lua_pushinteger(L, LV_ALIGN_OUT_RIGHT_BOTTOM); lua_settable(L, -3);
}

static void lugl_builtin_font_init(lua_State* L)
{
    lua_newtable(L);

    lua_pushstring(L, "DEFAULT"); lua_pushlightuserdata(L, (void*)LV_FONT_DEFAULT); lua_settable(L, -3);
#if LV_FONT_MONTSERRAT_8
    LV_FONT_DECLARE(lv_font_montserrat_8)
    lua_pushstring(L, "MONTSERRAT_8"); lua_pushlightuserdata(L, (void*)&lv_font_montserrat_8); lua_settable(L, -3);
#endif

#if LV_FONT_MONTSERRAT_10
    LV_FONT_DECLARE(lv_font_montserrat_10)
    lua_pushstring(L, "MONTSERRAT_10"); lua_pushlightuserdata(L, (void*)&lv_font_montserrat_10); lua_settable(L, -3);
#endif

#if LV_FONT_MONTSERRAT_12
    LV_FONT_DECLARE(lv_font_montserrat_12)
    lua_pushstring(L, "MONTSERRAT_12"); lua_pushlightuserdata(L, (void*)&lv_font_montserrat_12); lua_settable(L, -3);
#endif

#if LV_FONT_MONTSERRAT_14
    LV_FONT_DECLARE(lv_font_montserrat_14)
    lua_pushstring(L, "MONTSERRAT_14"); lua_pushlightuserdata(L, (void*)&lv_font_montserrat_14); lua_settable(L, -3);
#endif

#if LV_FONT_MONTSERRAT_16
    LV_FONT_DECLARE(lv_font_montserrat_16)
    lua_pushstring(L, "MONTSERRAT_16"); lua_pushlightuserdata(L, (void*)&lv_font_montserrat_16); lua_settable(L, -3);
#endif

#if LV_FONT_MONTSERRAT_18
    LV_FONT_DECLARE(lv_font_montserrat_18)
    lua_pushstring(L, "MONTSERRAT_18"); lua_pushlightuserdata(L, (void*)&lv_font_montserrat_18); lua_settable(L, -3);
#endif

#if LV_FONT_MONTSERRAT_20
    LV_FONT_DECLARE(lv_font_montserrat_20)
    lua_pushstring(L, "MONTSERRAT_20"); lua_pushlightuserdata(L, (void*)&lv_font_montserrat_20); lua_settable(L, -3);
#endif

#if LV_FONT_MONTSERRAT_22
    LV_FONT_DECLARE(lv_font_montserrat_22)
    lua_pushstring(L, "MONTSERRAT_22"); lua_pushlightuserdata(L, (void*)&lv_font_montserrat_22); lua_settable(L, -3);
#endif

#if LV_FONT_MONTSERRAT_24
    LV_FONT_DECLARE(lv_font_montserrat_24)
    lua_pushstring(L, "MONTSERRAT_24"); lua_pushlightuserdata(L, (void*)&lv_font_montserrat_24); lua_settable(L, -3);
#endif

#if LV_FONT_MONTSERRAT_26
    LV_FONT_DECLARE(lv_font_montserrat_26)
    lua_pushstring(L, "MONTSERRAT_26"); lua_pushlightuserdata(L, (void*)&lv_font_montserrat_26); lua_settable(L, -3);
#endif

#if LV_FONT_MONTSERRAT_28
    LV_FONT_DECLARE(lv_font_montserrat_28)
    lua_pushstring(L, "MONTSERRAT_28"); lua_pushlightuserdata(L, (void*)&lv_font_montserrat_28); lua_settable(L, -3);
#endif

#if LV_FONT_MONTSERRAT_30
    LV_FONT_DECLARE(lv_font_montserrat_30)
    lua_pushstring(L, "MONTSERRAT_30"); lua_pushlightuserdata(L, (void*)&lv_font_montserrat_30); lua_settable(L, -3);
#endif

#if LV_FONT_MONTSERRAT_32
    LV_FONT_DECLARE(lv_font_montserrat_32)
    lua_pushstring(L, "MONTSERRAT_32"); lua_pushlightuserdata(L, (void*)&lv_font_montserrat_32); lua_settable(L, -3);
#endif

#if LV_FONT_MONTSERRAT_34
    LV_FONT_DECLARE(lv_font_montserrat_34)
    lua_pushstring(L, "MONTSERRAT_34"); lua_pushlightuserdata(L, (void*)&lv_font_montserrat_34); lua_settable(L, -3);
#endif

#if LV_FONT_MONTSERRAT_36
    LV_FONT_DECLARE(lv_font_montserrat_36)
    lua_pushstring(L, "MONTSERRAT_36"); lua_pushlightuserdata(L, (void*)&lv_font_montserrat_36); lua_settable(L, -3);
#endif

#if LV_FONT_MONTSERRAT_38
    LV_FONT_DECLARE(lv_font_montserrat_38)
    lua_pushstring(L, "MONTSERRAT_38"); lua_pushlightuserdata(L, (void*)&lv_font_montserrat_38); lua_settable(L, -3);
#endif

#if LV_FONT_MONTSERRAT_40
    LV_FONT_DECLARE(lv_font_montserrat_40)
    lua_pushstring(L, "MONTSERRAT_40"); lua_pushlightuserdata(L, (void*)&lv_font_montserrat_40); lua_settable(L, -3);
#endif

#if LV_FONT_MONTSERRAT_42
    LV_FONT_DECLARE(lv_font_montserrat_42)
    lua_pushstring(L, "MONTSERRAT_42"); lua_pushlightuserdata(L, (void*)&lv_font_montserrat_42); lua_settable(L, -3);
#endif

#if LV_FONT_MONTSERRAT_44
    LV_FONT_DECLARE(lv_font_montserrat_44)
    lua_pushstring(L, "MONTSERRAT_44"); lua_pushlightuserdata(L, (void*)&lv_font_montserrat_44); lua_settable(L, -3);
#endif

#if LV_FONT_MONTSERRAT_46
    LV_FONT_DECLARE(lv_font_montserrat_46)
    lua_pushstring(L, "MONTSERRAT_46"); lua_pushlightuserdata(L, (void*)&lv_font_montserrat_46); lua_settable(L, -3);
#endif

#if LV_FONT_MONTSERRAT_48
    LV_FONT_DECLARE(lv_font_montserrat_48)
    lua_pushstring(L, "MONTSERRAT_48"); lua_pushlightuserdata(L, (void*)&lv_font_montserrat_48); lua_settable(L, -3);
#endif

#if LV_FONT_MONTSERRAT_12_SUBPX
    LV_FONT_DECLARE(lv_font_montserrat_12_subpx)
    lua_pushstring(L, "MONTSERRAT_12_SUBPX"); lua_pushlightuserdata(L, (void*)&lv_font_montserrat_12_subpx); lua_settable(L, -3);
#endif

#if LV_FONT_MONTSERRAT_28_COMPRESSED
    LV_FONT_DECLARE(lv_font_montserrat_28_compressed)
    lua_pushstring(L, "MONTSERRAT_28_COMPRESSED"); lua_pushlightuserdata(L, (void*)&lv_font_montserrat_28_compressed); lua_settable(L, -3);
#endif

#if LV_FONT_DEJAVU_16_PERSIAN_HEBREW
    LV_FONT_DECLARE(lv_font_dejavu_16_persian_hebrew)
    lua_pushstring(L, "DEJAVU_16_PERSIAN_HEBREW"); lua_pushlightuserdata(L, (void*)&lv_font_dejavu_16_persian_hebrew); lua_settable(L, -3);
#endif

#if LV_FONT_SIMSUN_16_CJK
    LV_FONT_DECLARE(lv_font_simsun_16_cjk)
    lua_pushstring(L, "SIMSUN_16_CJK"); lua_pushlightuserdata(L, (void*)&lv_font_simsun_16_cjk); lua_settable(L, -3);
#endif

#if LV_FONT_UNSCII_8
    LV_FONT_DECLARE(lv_font_unscii_8)
    lua_pushstring(L, "UNSCII_8"); lua_pushlightuserdata(L, (void*)&lv_font_unscii_8); lua_settable(L, -3);
#endif

#if LV_FONT_UNSCII_16
    LV_FONT_DECLARE(lv_font_unscii_16)
    lua_pushstring(L, "UNSCII_16"); lua_pushlightuserdata(L, (void*)&lv_font_unscii_16); lua_settable(L, -3);
#endif
}

/* clang-format on */
static void lugl_constants_init(lua_State *L)
{
  lugl_event_code_init(L);
  lua_setfield(L, -2, "EVENT");
  lugl_obj_flag_init(L);
  lua_setfield(L, -2, "FLAG");
  lugl_state_init(L);
  lua_setfield(L, -2, "STATE");
  lugl_align_init(L);
  lua_setfield(L, -2, "ALIGN");
  lugl_builtin_font_init(L);
  lua_setfield(L, -2, "builtin_font");
  lua_pushinteger(L, LV_ANIM_REPEAT_INFINITE);
  lua_setfield(L, -2, "ANIM_REPEAT_INFINITE");
  lua_pushinteger(L, LV_ANIM_PLAYTIME_INFINITE);
  lua_setfield(L, -2, "ANIM_PLAYTIME_INFINITE");
}
