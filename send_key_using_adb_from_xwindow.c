/* vim:fileencoding=utf-8 tabstop=2 expandtab shiftwidth=2 softtabstop=0:
 *
 *            DO WHAT THE FUCK YOU WANT TO PUBLIC LICENSE
 *                    Version 2, December 2004
 *  
 * Copyright (C) 2014 @cat_in_136
 * 
 * Everyone is permitted to copy and distribute verbatim or modified
 * copies of this license document, and changing it is allowed as long
 * as the name is changed.
 *  
 *            DO WHAT THE FUCK YOU WANT TO PUBLIC LICENSE
 *   TERMS AND CONDITIONS FOR COPYING, DISTRIBUTION AND MODIFICATION
 *  
 *  0. You just DO WHAT THE FUCK YOU WANT TO.
 *
 */
#include <stdlib.h>
#include <stdio.h>

#include <X11/Intrinsic.h>
#include <X11/StringDefs.h>
#include <X11/Shell.h>
#include <X11/Xaw/Form.h>
#include <X11/Xaw/Label.h>


#define KEYCODE_UNKNOWN 0
#define KEYCODE_SOFT_LEFT 1
#define KEYCODE_SOFT_RIGHT 2
#define KEYCODE_HOME 3
#define KEYCODE_BACK 4
#define KEYCODE_CALL 5
#define KEYCODE_ENDCALL 6
#define KEYCODE_0 7
#define KEYCODE_1 8
#define KEYCODE_2 9
#define KEYCODE_3 10
#define KEYCODE_4 11
#define KEYCODE_5 12
#define KEYCODE_6 13
#define KEYCODE_7 14
#define KEYCODE_8 15
#define KEYCODE_9 16
#define KEYCODE_STAR 17
#define KEYCODE_POUND 18
#define KEYCODE_DPAD_UP 19
#define KEYCODE_DPAD_DOWN 20
#define KEYCODE_DPAD_LEFT 21
#define KEYCODE_DPAD_RIGHT 22
#define KEYCODE_DPAD_CENTER 23
#define KEYCODE_VOLUME_UP 24
#define KEYCODE_VOLUME_DOWN 25
#define KEYCODE_POWER 26
#define KEYCODE_CAMERA 27
#define KEYCODE_CLEAR 28
#define KEYCODE_A 29
#define KEYCODE_B 30
#define KEYCODE_C 31
#define KEYCODE_D 32
#define KEYCODE_E 33
#define KEYCODE_F 34
#define KEYCODE_G 35
#define KEYCODE_H 36
#define KEYCODE_I 37
#define KEYCODE_J 38
#define KEYCODE_K 39
#define KEYCODE_L 40
#define KEYCODE_M 41
#define KEYCODE_N 42
#define KEYCODE_O 43
#define KEYCODE_P 44
#define KEYCODE_Q 45
#define KEYCODE_R 46
#define KEYCODE_S 47
#define KEYCODE_T 48
#define KEYCODE_U 49
#define KEYCODE_V 50
#define KEYCODE_W 51
#define KEYCODE_X 52
#define KEYCODE_Y 53
#define KEYCODE_Z 54
#define KEYCODE_COMMA 55
#define KEYCODE_PERIOD 56
#define KEYCODE_ALT_LEFT 57
#define KEYCODE_ALT_RIGHT 58
#define KEYCODE_SHIFT_LEFT 59
#define KEYCODE_SHIFT_RIGHT 60
#define KEYCODE_TAB 61
#define KEYCODE_SPACE 62
#define KEYCODE_SYM 63
#define KEYCODE_EXPLORER 64
#define KEYCODE_ENVELOPE 65
#define KEYCODE_ENTER 66
#define KEYCODE_DEL 67
#define KEYCODE_GRAVE 68
#define KEYCODE_MINUS 69
#define KEYCODE_EQUALS 70
#define KEYCODE_LEFT_BRACKET 71
#define KEYCODE_RIGHT_BRACKET 72
#define KEYCODE_BACKSLASH 73
#define KEYCODE_SEMICOLON 74
#define KEYCODE_APOSTROPHE 75
#define KEYCODE_SLASH 76
#define KEYCODE_AT 77
#define KEYCODE_NUM 78
#define KEYCODE_HEADSETHOOK 79
#define KEYCODE_PLUS 81
#define KEYCODE_MENU 82
#define KEYCODE_NOTIFICATION 83
#define KEYCODE_SEARCH 84
#define KEYCODE_MEDIA_PLAY_PAUSE85
#define KEYCODE_MEDIA_STOP 86
#define KEYCODE_MEDIA_NEXT 87
#define KEYCODE_MEDIA_PREVIOUS 88
#define KEYCODE_MEDIA_REWIND 89
#define KEYCODE_MEDIA_FAST_FORWARD 90
#define KEYCODE_MUTE 91
#define KEYCODE_PAGE_UP 92
#define KEYCODE_PAGE_DOWN 93
#define KEYCODE_PICTSYMBOLS 94 // switch symbol-sets (Emoji,Kao-moji)
#define KEYCODE_SWITCH_CHARSET 95 // switch char-sets (Kanji,Katakana)
#define KEYCODE_BUTTON_A 96
#define KEYCODE_BUTTON_B 97
#define KEYCODE_BUTTON_C 98
#define KEYCODE_BUTTON_X 99
#define KEYCODE_BUTTON_Y 100
#define KEYCODE_BUTTON_Z 101
#define KEYCODE_BUTTON_L1 102
#define KEYCODE_BUTTON_R1 103
#define KEYCODE_BUTTON_L2 104
#define KEYCODE_BUTTON_R2 105
#define KEYCODE_BUTTON_THUMBL 106
#define KEYCODE_BUTTON_THUMBR 107
#define KEYCODE_BUTTON_START 108
#define KEYCODE_BUTTON_SELECT 109
#define KEYCODE_BUTTON_MODE 110
#define KEYCODE_ESCAPE 111
#define KEYCODE_FORWARD_DEL 112
#define KEYCODE_CTRL_LEFT 113
#define KEYCODE_CTRL_RIGHT 114
#define KEYCODE_CAPS_LOCK 115
#define KEYCODE_SCROLL_LOCK 116
#define KEYCODE_META_LEFT 117
#define KEYCODE_META_RIGHT 118
#define KEYCODE_FUNCTION 119
#define KEYCODE_SYSRQ 120
#define KEYCODE_BREAK 121
#define KEYCODE_MOVE_HOME 122
#define KEYCODE_MOVE_END 123
#define KEYCODE_INSERT 124
#define KEYCODE_FORWARD 125
#define KEYCODE_MEDIA_PLAY 126
#define KEYCODE_MEDIA_PAUSE 127
#define KEYCODE_MEDIA_CLOSE 128
#define KEYCODE_MEDIA_EJECT 129
#define KEYCODE_MEDIA_RECORD 130
#define KEYCODE_F1 131
#define KEYCODE_F2 132
#define KEYCODE_F3 133
#define KEYCODE_F4 134
#define KEYCODE_F5 135
#define KEYCODE_F6 136
#define KEYCODE_F7 137
#define KEYCODE_F8 138
#define KEYCODE_F9 139
#define KEYCODE_F10 140
#define KEYCODE_F11 141
#define KEYCODE_F12 142
#define KEYCODE_NUM_LOCK 143
#define KEYCODE_NUMPAD_0 144
#define KEYCODE_NUMPAD_1 145
#define KEYCODE_NUMPAD_2 146
#define KEYCODE_NUMPAD_3 147
#define KEYCODE_NUMPAD_4 148
#define KEYCODE_NUMPAD_5 149
#define KEYCODE_NUMPAD_6 150
#define KEYCODE_NUMPAD_7 151
#define KEYCODE_NUMPAD_8 152
#define KEYCODE_NUMPAD_9 153
#define KEYCODE_NUMPAD_DIVIDE 154
#define KEYCODE_NUMPAD_MULTIPLY 155
#define KEYCODE_NUMPAD_SUBTRACT 156
#define KEYCODE_NUMPAD_ADD 157
#define KEYCODE_NUMPAD_DOT 158
#define KEYCODE_NUMPAD_COMMA 159
#define KEYCODE_NUMPAD_ENTER 160
#define KEYCODE_NUMPAD_EQUALS 161
#define KEYCODE_NUMPAD_LEFT_PAREN 162
#define KEYCODE_NUMPAD_RIGHT_PAREN 163
#define KEYCODE_VOLUME_MUTE 164
#define KEYCODE_INFO 165
#define KEYCODE_CHANNEL_UP 166
#define KEYCODE_CHANNEL_DOWN 167
#define KEYCODE_ZOOM_IN 168
#define KEYCODE_ZOOM_OUT 169
#define KEYCODE_TV 170
#define KEYCODE_WINDOW 171
#define KEYCODE_GUIDE 172
#define KEYCODE_DVR 173
#define KEYCODE_BOOKMARK 174
#define KEYCODE_CAPTIONS 175
#define KEYCODE_SETTINGS 176
#define KEYCODE_TV_POWER 177
#define KEYCODE_TV_INPUT 178
#define KEYCODE_STB_POWER 179
#define KEYCODE_STB_INPUT 180
#define KEYCODE_AVR_POWER 181
#define KEYCODE_AVR_INPUT 182
#define KEYCODE_PROG_RED 183
#define KEYCODE_PROG_GREEN 184
#define KEYCODE_PROG_YELLOW 185
#define KEYCODE_PROG_BLUE 186
#define KEYCODE_APP_SWITCH 187
#define KEYCODE_BUTTON_1 188
#define KEYCODE_BUTTON_2 189
#define KEYCODE_BUTTON_3 190
#define KEYCODE_BUTTON_4 191
#define KEYCODE_BUTTON_5 192
#define KEYCODE_BUTTON_6 193
#define KEYCODE_BUTTON_7 194
#define KEYCODE_BUTTON_8 195
#define KEYCODE_BUTTON_9 196
#define KEYCODE_BUTTON_10 197
#define KEYCODE_BUTTON_11 198
#define KEYCODE_BUTTON_12 199
#define KEYCODE_BUTTON_13 200
#define KEYCODE_BUTTON_14 201
#define KEYCODE_BUTTON_15 202
#define KEYCODE_BUTTON_16 203
#define KEYCODE_LANGUAGE_SWITCH 204
#define KEYCODE_MANNER_MODE 205
#define KEYCODE_3D_MODE 206
#define KEYCODE_CONTACTS 207
#define KEYCODE_CALENDAR 208
#define KEYCODE_MUSIC 209
#define KEYCODE_CALCULATOR 210
#define KEYCODE_ZENKAKU_HANKAKU 211
#define KEYCODE_EISU 212
#define KEYCODE_MUHENKAN 213
#define KEYCODE_HENKAN 214
#define KEYCODE_KATAKANA_HIRAGANA 215
#define KEYCODE_YEN 216
#define KEYCODE_RO 217
#define KEYCODE_KANA 218
#define KEYCODE_ASSIST 219
#define KEYCODE_BRIGHTNESS_DOWN 220
#define KEYCODE_BRIGHTNESS_UP 221
#define KEYCODE_MEDIA_AUDIO_TRACK 222

static XtAppContext app_context;
static Widget toplevel;
static Widget form;
static Widget label;

static void sendKeycode(char android_keycode)
{
  char str[BUFSIZ];

  if (android_keycode != 0) {
    snprintf(str, sizeof(str), "adb shell input keyevent \"%d\"", android_keycode);

    system(str);
  }
}

static void sendText(const char *text)
{
  char str[BUFSIZ];

  if (text != NULL) {
    snprintf(str, sizeof(str), "adb shell input text \"%s\"", text);

    system(str);
  }
}

static void sendTextChar(char textChar)
{
  const char str[2] = {textChar, 0x00};

  sendText(str);
}

static void key_press(Widget widget, XtPointer client_data, XEvent *event, Boolean *b)
{
  char key_string[BUFSIZ];
  KeySym sym;

  XLookupString(&event->xkey, key_string, sizeof(key_string), &sym, NULL);

  if ((XK_a <= sym) && (sym <= XK_z)) {
    sendTextChar('a' + (char)(sym - XK_a));
  } else if ((XK_A <= sym) && (sym <= XK_Z)) {
    sendTextChar('A' + (char)(sym - XK_A));
  } else if ((XK_0 <= sym) && (sym <= XK_9)) {
    sendTextChar('0' + (char)(sym - XK_0));
  } else if ((XK_KP_0 <= sym) && (sym <= XK_KP_9)) {
    sendTextChar('0' + (char)(sym - XK_KP_0));
  } else if (sym == XK_BackSpace) {
    sendKeycode(KEYCODE_DEL);
  } else if (sym == XK_Return || sym == XK_KP_Enter) {
    sendKeycode(KEYCODE_ENTER);
  } else if (sym == XK_Pause) {
    sendKeycode(KEYCODE_HOME);
  } else if (sym == XK_Escape) {
    sendKeycode(KEYCODE_BACK);
  } else if (sym == XK_asterisk) {
    sendKeycode(KEYCODE_STAR);
  } else if (sym == XK_numbersign) {
    sendKeycode(KEYCODE_POUND);
  } else if (sym == XK_Left || sym == XK_KP_Left) {
    sendKeycode(KEYCODE_DPAD_LEFT);
  } else if (sym == XK_Up || sym == XK_KP_Up) {
    sendKeycode(KEYCODE_DPAD_UP);
  } else if (sym == XK_Right || sym == XK_KP_Right) {
    sendKeycode(KEYCODE_DPAD_RIGHT);
  } else if (sym == XK_Down || sym == XK_KP_Down) {
    sendKeycode(KEYCODE_DPAD_DOWN);
#if 0
  } else if (sym == XK_AudioRaiseVolume) {
    sendKeycode(KEYCODE_VOLUME_UP);
  } else if (sym == XK_AudioLowerVolume) {
    sendKeycode(KEYCODE_VOLUME_DOWN);
  } else if (sym == XK_PowerDown) {
    sendKeycode(KEYCODE_POWER);
#endif
  } else if (sym == XK_comma) {
    sendKeycode(KEYCODE_COMMA);
  } else if (sym == XK_period) {
    sendKeycode(KEYCODE_PERIOD);
  } else if (sym == XK_Tab || sym == XK_KP_Tab) {
    sendKeycode(KEYCODE_TAB);
  } else if (sym == XK_space || sym == XK_KP_Space) {
    sendKeycode(KEYCODE_SPACE);
  } else if (sym == XK_grave) {
    sendKeycode(KEYCODE_GRAVE);
  } else if (sym == XK_minus) {
    sendKeycode(KEYCODE_MINUS);
  } else if (sym == XK_equal) {
    sendKeycode(KEYCODE_EQUALS);
  } else if (sym == XK_bracketleft) {
    sendKeycode(KEYCODE_LEFT_BRACKET);
  } else if (sym == XK_bracketright) {
    sendKeycode(KEYCODE_RIGHT_BRACKET);
  } else if (sym == XK_backslash) {
    sendKeycode(KEYCODE_BACKSLASH);
  } else if (sym == XK_colon) {
    sendKeycode(KEYCODE_SEMICOLON);
  } else if (sym == XK_apostrophe) {
    sendKeycode(KEYCODE_APOSTROPHE);
  } else if (sym == XK_slash) {
    sendKeycode(KEYCODE_SLASH);
  } else if (sym == XK_at) {
    sendKeycode(KEYCODE_AT);
  } else if (sym == XK_Menu) {
    sendKeycode(KEYCODE_MENU);
  } else if (sym == XK_Page_Up) {
    sendKeycode(KEYCODE_PAGE_UP);
  } else if (sym == XK_Page_Down) {
    sendKeycode(KEYCODE_PAGE_DOWN);
  } else if (sym == XK_Delete) {
    sendKeycode(KEYCODE_FORWARD_DEL);
  } else if (sym == XK_Zenkaku_Hankaku) {
    sendKeycode(KEYCODE_SWITCH_CHARSET);
  } else {
    return;
  }

  if (strlen(key_string) > 0) {
    XtVaSetValues(label, XtNlabel, (XtArgVal) key_string, NULL);
  } else {
    XtVaSetValues(label, XtNlabel, (XtArgVal) "-", NULL);
  }
}

int main(int argc, char *argv[])
{
  toplevel = XtOpenApplication(&app_context, "send_key_using_adb_from_xwindow", NULL, 0, &argc, argv, NULL, applicationShellWidgetClass, NULL, 0);

  form = XtVaCreateManagedWidget("form", formWidgetClass, toplevel, NULL);
  label = XtVaCreateManagedWidget("label", labelWidgetClass, form, XtNlabel, "-", XtNwidth, 200, XtNheight, 200, NULL);
  XtAddEventHandler(label, KeyPressMask, False, key_press, NULL);

  XtRealizeWidget(toplevel);
  XtAppMainLoop(app_context);

  return 0;
}
