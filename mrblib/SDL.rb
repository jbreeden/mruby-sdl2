module SDL

  module SdlAudiostatus
    SDL_AUDIO_STOPPED = 0
    SDL_AUDIO_PLAYING = 1
    SDL_AUDIO_PAUSED = 2
  end
  include SdlAudiostatus

  module SdlBlendmode
    SDL_BLENDMODE_NONE = 0
    SDL_BLENDMODE_BLEND = 1
    SDL_BLENDMODE_ADD = 2
    SDL_BLENDMODE_MOD = 4
  end
  include SdlBlendmode

  module SdlDummyEnum
    DUMMY_ENUM_VALUE = 0
  end
  include SdlDummyEnum

  module SdlEventtype
    SDL_FIRSTEVENT = 0
    SDL_QUIT = 256
    SDL_APP_TERMINATING = 257
    SDL_APP_LOWMEMORY = 258
    SDL_APP_WILLENTERBACKGROUND = 259
    SDL_APP_DIDENTERBACKGROUND = 260
    SDL_APP_WILLENTERFOREGROUND = 261
    SDL_APP_DIDENTERFOREGROUND = 262
    SDL_WINDOWEVENT = 512
    SDL_SYSWMEVENT = 513
    SDL_KEYDOWN = 768
    SDL_KEYUP = 769
    SDL_TEXTEDITING = 770
    SDL_TEXTINPUT = 771
    SDL_MOUSEMOTION = 1024
    SDL_MOUSEBUTTONDOWN = 1025
    SDL_MOUSEBUTTONUP = 1026
    SDL_MOUSEWHEEL = 1027
    SDL_JOYAXISMOTION = 1536
    SDL_JOYBALLMOTION = 1537
    SDL_JOYHATMOTION = 1538
    SDL_JOYBUTTONDOWN = 1539
    SDL_JOYBUTTONUP = 1540
    SDL_JOYDEVICEADDED = 1541
    SDL_JOYDEVICEREMOVED = 1542
    SDL_CONTROLLERAXISMOTION = 1616
    SDL_CONTROLLERBUTTONDOWN = 1617
    SDL_CONTROLLERBUTTONUP = 1618
    SDL_CONTROLLERDEVICEADDED = 1619
    SDL_CONTROLLERDEVICEREMOVED = 1620
    SDL_CONTROLLERDEVICEREMAPPED = 1621
    SDL_FINGERDOWN = 1792
    SDL_FINGERUP = 1793
    SDL_FINGERMOTION = 1794
    SDL_DOLLARGESTURE = 2048
    SDL_DOLLARRECORD = 2049
    SDL_MULTIGESTURE = 2050
    SDL_CLIPBOARDUPDATE = 2304
    SDL_DROPFILE = 4096
    SDL_RENDER_TARGETS_RESET = 8192
    SDL_USEREVENT = 32768
    SDL_LASTEVENT = 65535
  end
  include SdlEventtype

  module SdlGlattr
    SDL_GL_RED_SIZE = 0
    SDL_GL_GREEN_SIZE = 1
    SDL_GL_BLUE_SIZE = 2
    SDL_GL_ALPHA_SIZE = 3
    SDL_GL_BUFFER_SIZE = 4
    SDL_GL_DOUBLEBUFFER = 5
    SDL_GL_DEPTH_SIZE = 6
    SDL_GL_STENCIL_SIZE = 7
    SDL_GL_ACCUM_RED_SIZE = 8
    SDL_GL_ACCUM_GREEN_SIZE = 9
    SDL_GL_ACCUM_BLUE_SIZE = 10
    SDL_GL_ACCUM_ALPHA_SIZE = 11
    SDL_GL_STEREO = 12
    SDL_GL_MULTISAMPLEBUFFERS = 13
    SDL_GL_MULTISAMPLESAMPLES = 14
    SDL_GL_ACCELERATED_VISUAL = 15
    SDL_GL_RETAINED_BACKING = 16
    SDL_GL_CONTEXT_MAJOR_VERSION = 17
    SDL_GL_CONTEXT_MINOR_VERSION = 18
    SDL_GL_CONTEXT_EGL = 19
    SDL_GL_CONTEXT_FLAGS = 20
    SDL_GL_CONTEXT_PROFILE_MASK = 21
    SDL_GL_SHARE_WITH_CURRENT_CONTEXT = 22
    SDL_GL_FRAMEBUFFER_SRGB_CAPABLE = 23
  end
  include SdlGlattr

  module SdlGlcontextflag
    SDL_GL_CONTEXT_DEBUG_FLAG = 1
    SDL_GL_CONTEXT_FORWARD_COMPATIBLE_FLAG = 2
    SDL_GL_CONTEXT_ROBUST_ACCESS_FLAG = 4
    SDL_GL_CONTEXT_RESET_ISOLATION_FLAG = 8
  end
  include SdlGlcontextflag

  module SdlGlprofile
    SDL_GL_CONTEXT_PROFILE_CORE = 1
    SDL_GL_CONTEXT_PROFILE_COMPATIBILITY = 2
    SDL_GL_CONTEXT_PROFILE_ES = 4
  end
  include SdlGlprofile

  module SdlGamecontrolleraxis
    SDL_CONTROLLER_AXIS_INVALID = -1
    SDL_CONTROLLER_AXIS_LEFTX = 0
    SDL_CONTROLLER_AXIS_LEFTY = 1
    SDL_CONTROLLER_AXIS_RIGHTX = 2
    SDL_CONTROLLER_AXIS_RIGHTY = 3
    SDL_CONTROLLER_AXIS_TRIGGERLEFT = 4
    SDL_CONTROLLER_AXIS_TRIGGERRIGHT = 5
    SDL_CONTROLLER_AXIS_MAX = 6
  end
  include SdlGamecontrolleraxis

  module SdlGamecontrollerbindtype
    SDL_CONTROLLER_BINDTYPE_NONE = 0
    SDL_CONTROLLER_BINDTYPE_BUTTON = 1
    SDL_CONTROLLER_BINDTYPE_AXIS = 2
    SDL_CONTROLLER_BINDTYPE_HAT = 3
  end
  include SdlGamecontrollerbindtype

  module SdlGamecontrollerbutton
    SDL_CONTROLLER_BUTTON_INVALID = -1
    SDL_CONTROLLER_BUTTON_A = 0
    SDL_CONTROLLER_BUTTON_B = 1
    SDL_CONTROLLER_BUTTON_X = 2
    SDL_CONTROLLER_BUTTON_Y = 3
    SDL_CONTROLLER_BUTTON_BACK = 4
    SDL_CONTROLLER_BUTTON_GUIDE = 5
    SDL_CONTROLLER_BUTTON_START = 6
    SDL_CONTROLLER_BUTTON_LEFTSTICK = 7
    SDL_CONTROLLER_BUTTON_RIGHTSTICK = 8
    SDL_CONTROLLER_BUTTON_LEFTSHOULDER = 9
    SDL_CONTROLLER_BUTTON_RIGHTSHOULDER = 10
    SDL_CONTROLLER_BUTTON_DPAD_UP = 11
    SDL_CONTROLLER_BUTTON_DPAD_DOWN = 12
    SDL_CONTROLLER_BUTTON_DPAD_LEFT = 13
    SDL_CONTROLLER_BUTTON_DPAD_RIGHT = 14
    SDL_CONTROLLER_BUTTON_MAX = 15
  end
  include SdlGamecontrollerbutton

  module SdlHintpriority
    SDL_HINT_DEFAULT = 0
    SDL_HINT_NORMAL = 1
    SDL_HINT_OVERRIDE = 2
  end
  include SdlHintpriority

  module SdlKeymod
    KMOD_NONE = 0
    KMOD_LSHIFT = 1
    KMOD_RSHIFT = 2
    KMOD_LCTRL = 64
    KMOD_RCTRL = 128
    KMOD_LALT = 256
    KMOD_RALT = 512
    KMOD_LGUI = 1024
    KMOD_RGUI = 2048
    KMOD_NUM = 4096
    KMOD_CAPS = 8192
    KMOD_MODE = 16384
    KMOD_RESERVED = 32768
  end
  include SdlKeymod

  module SdlLogpriority
    SDL_LOG_PRIORITY_VERBOSE = 1
    SDL_LOG_PRIORITY_DEBUG = 2
    SDL_LOG_PRIORITY_INFO = 3
    SDL_LOG_PRIORITY_WARN = 4
    SDL_LOG_PRIORITY_ERROR = 5
    SDL_LOG_PRIORITY_CRITICAL = 6
    SDL_NUM_LOG_PRIORITIES = 7
  end
  include SdlLogpriority

  module SdlMessageboxbuttonflags
    SDL_MESSAGEBOX_BUTTON_RETURNKEY_DEFAULT = 1
    SDL_MESSAGEBOX_BUTTON_ESCAPEKEY_DEFAULT = 2
  end
  include SdlMessageboxbuttonflags

  module SdlMessageboxcolortype
    SDL_MESSAGEBOX_COLOR_BACKGROUND = 0
    SDL_MESSAGEBOX_COLOR_TEXT = 1
    SDL_MESSAGEBOX_COLOR_BUTTON_BORDER = 2
    SDL_MESSAGEBOX_COLOR_BUTTON_BACKGROUND = 3
    SDL_MESSAGEBOX_COLOR_BUTTON_SELECTED = 4
    SDL_MESSAGEBOX_COLOR_MAX = 5
  end
  include SdlMessageboxcolortype

  module SdlMessageboxflags
    SDL_MESSAGEBOX_ERROR = 16
    SDL_MESSAGEBOX_WARNING = 32
    SDL_MESSAGEBOX_INFORMATION = 64
  end
  include SdlMessageboxflags

  module SdlPowerstate
    SDL_POWERSTATE_UNKNOWN = 0
    SDL_POWERSTATE_ON_BATTERY = 1
    SDL_POWERSTATE_NO_BATTERY = 2
    SDL_POWERSTATE_CHARGING = 3
    SDL_POWERSTATE_CHARGED = 4
  end
  include SdlPowerstate

  module SdlRendererflags
    SDL_RENDERER_SOFTWARE = 1
    SDL_RENDERER_ACCELERATED = 2
    SDL_RENDERER_PRESENTVSYNC = 4
    SDL_RENDERER_TARGETTEXTURE = 8
  end
  include SdlRendererflags

  module SdlRendererflip
    SDL_FLIP_NONE = 0
    SDL_FLIP_HORIZONTAL = 1
    SDL_FLIP_VERTICAL = 2
  end
  include SdlRendererflip

  module SdlSyswmType
    SDL_SYSWM_UNKNOWN = 0
    SDL_SYSWM_WINDOWS = 1
    SDL_SYSWM_X11 = 2
    SDL_SYSWM_DIRECTFB = 3
    SDL_SYSWM_COCOA = 4
    SDL_SYSWM_UIKIT = 5
    SDL_SYSWM_WAYLAND = 6
    SDL_SYSWM_MIR = 7
    SDL_SYSWM_WINRT = 8
  end
  include SdlSyswmType

  module SdlScancode
    SDL_SCANCODE_UNKNOWN = 0
    SDL_SCANCODE_A = 4
    SDL_SCANCODE_B = 5
    SDL_SCANCODE_C = 6
    SDL_SCANCODE_D = 7
    SDL_SCANCODE_E = 8
    SDL_SCANCODE_F = 9
    SDL_SCANCODE_G = 10
    SDL_SCANCODE_H = 11
    SDL_SCANCODE_I = 12
    SDL_SCANCODE_J = 13
    SDL_SCANCODE_K = 14
    SDL_SCANCODE_L = 15
    SDL_SCANCODE_M = 16
    SDL_SCANCODE_N = 17
    SDL_SCANCODE_O = 18
    SDL_SCANCODE_P = 19
    SDL_SCANCODE_Q = 20
    SDL_SCANCODE_R = 21
    SDL_SCANCODE_S = 22
    SDL_SCANCODE_T = 23
    SDL_SCANCODE_U = 24
    SDL_SCANCODE_V = 25
    SDL_SCANCODE_W = 26
    SDL_SCANCODE_X = 27
    SDL_SCANCODE_Y = 28
    SDL_SCANCODE_Z = 29
    SDL_SCANCODE_1 = 30
    SDL_SCANCODE_2 = 31
    SDL_SCANCODE_3 = 32
    SDL_SCANCODE_4 = 33
    SDL_SCANCODE_5 = 34
    SDL_SCANCODE_6 = 35
    SDL_SCANCODE_7 = 36
    SDL_SCANCODE_8 = 37
    SDL_SCANCODE_9 = 38
    SDL_SCANCODE_0 = 39
    SDL_SCANCODE_RETURN = 40
    SDL_SCANCODE_ESCAPE = 41
    SDL_SCANCODE_BACKSPACE = 42
    SDL_SCANCODE_TAB = 43
    SDL_SCANCODE_SPACE = 44
    SDL_SCANCODE_MINUS = 45
    SDL_SCANCODE_EQUALS = 46
    SDL_SCANCODE_LEFTBRACKET = 47
    SDL_SCANCODE_RIGHTBRACKET = 48
    SDL_SCANCODE_BACKSLASH = 49
    SDL_SCANCODE_NONUSHASH = 50
    SDL_SCANCODE_SEMICOLON = 51
    SDL_SCANCODE_APOSTROPHE = 52
    SDL_SCANCODE_GRAVE = 53
    SDL_SCANCODE_COMMA = 54
    SDL_SCANCODE_PERIOD = 55
    SDL_SCANCODE_SLASH = 56
    SDL_SCANCODE_CAPSLOCK = 57
    SDL_SCANCODE_F1 = 58
    SDL_SCANCODE_F2 = 59
    SDL_SCANCODE_F3 = 60
    SDL_SCANCODE_F4 = 61
    SDL_SCANCODE_F5 = 62
    SDL_SCANCODE_F6 = 63
    SDL_SCANCODE_F7 = 64
    SDL_SCANCODE_F8 = 65
    SDL_SCANCODE_F9 = 66
    SDL_SCANCODE_F10 = 67
    SDL_SCANCODE_F11 = 68
    SDL_SCANCODE_F12 = 69
    SDL_SCANCODE_PRINTSCREEN = 70
    SDL_SCANCODE_SCROLLLOCK = 71
    SDL_SCANCODE_PAUSE = 72
    SDL_SCANCODE_INSERT = 73
    SDL_SCANCODE_HOME = 74
    SDL_SCANCODE_PAGEUP = 75
    SDL_SCANCODE_DELETE = 76
    SDL_SCANCODE_END = 77
    SDL_SCANCODE_PAGEDOWN = 78
    SDL_SCANCODE_RIGHT = 79
    SDL_SCANCODE_LEFT = 80
    SDL_SCANCODE_DOWN = 81
    SDL_SCANCODE_UP = 82
    SDL_SCANCODE_NUMLOCKCLEAR = 83
    SDL_SCANCODE_KP_DIVIDE = 84
    SDL_SCANCODE_KP_MULTIPLY = 85
    SDL_SCANCODE_KP_MINUS = 86
    SDL_SCANCODE_KP_PLUS = 87
    SDL_SCANCODE_KP_ENTER = 88
    SDL_SCANCODE_KP_1 = 89
    SDL_SCANCODE_KP_2 = 90
    SDL_SCANCODE_KP_3 = 91
    SDL_SCANCODE_KP_4 = 92
    SDL_SCANCODE_KP_5 = 93
    SDL_SCANCODE_KP_6 = 94
    SDL_SCANCODE_KP_7 = 95
    SDL_SCANCODE_KP_8 = 96
    SDL_SCANCODE_KP_9 = 97
    SDL_SCANCODE_KP_0 = 98
    SDL_SCANCODE_KP_PERIOD = 99
    SDL_SCANCODE_NONUSBACKSLASH = 100
    SDL_SCANCODE_APPLICATION = 101
    SDL_SCANCODE_POWER = 102
    SDL_SCANCODE_KP_EQUALS = 103
    SDL_SCANCODE_F13 = 104
    SDL_SCANCODE_F14 = 105
    SDL_SCANCODE_F15 = 106
    SDL_SCANCODE_F16 = 107
    SDL_SCANCODE_F17 = 108
    SDL_SCANCODE_F18 = 109
    SDL_SCANCODE_F19 = 110
    SDL_SCANCODE_F20 = 111
    SDL_SCANCODE_F21 = 112
    SDL_SCANCODE_F22 = 113
    SDL_SCANCODE_F23 = 114
    SDL_SCANCODE_F24 = 115
    SDL_SCANCODE_EXECUTE = 116
    SDL_SCANCODE_HELP = 117
    SDL_SCANCODE_MENU = 118
    SDL_SCANCODE_SELECT = 119
    SDL_SCANCODE_STOP = 120
    SDL_SCANCODE_AGAIN = 121
    SDL_SCANCODE_UNDO = 122
    SDL_SCANCODE_CUT = 123
    SDL_SCANCODE_COPY = 124
    SDL_SCANCODE_PASTE = 125
    SDL_SCANCODE_FIND = 126
    SDL_SCANCODE_MUTE = 127
    SDL_SCANCODE_VOLUMEUP = 128
    SDL_SCANCODE_VOLUMEDOWN = 129
    SDL_SCANCODE_KP_COMMA = 133
    SDL_SCANCODE_KP_EQUALSAS400 = 134
    SDL_SCANCODE_INTERNATIONAL1 = 135
    SDL_SCANCODE_INTERNATIONAL2 = 136
    SDL_SCANCODE_INTERNATIONAL3 = 137
    SDL_SCANCODE_INTERNATIONAL4 = 138
    SDL_SCANCODE_INTERNATIONAL5 = 139
    SDL_SCANCODE_INTERNATIONAL6 = 140
    SDL_SCANCODE_INTERNATIONAL7 = 141
    SDL_SCANCODE_INTERNATIONAL8 = 142
    SDL_SCANCODE_INTERNATIONAL9 = 143
    SDL_SCANCODE_LANG1 = 144
    SDL_SCANCODE_LANG2 = 145
    SDL_SCANCODE_LANG3 = 146
    SDL_SCANCODE_LANG4 = 147
    SDL_SCANCODE_LANG5 = 148
    SDL_SCANCODE_LANG6 = 149
    SDL_SCANCODE_LANG7 = 150
    SDL_SCANCODE_LANG8 = 151
    SDL_SCANCODE_LANG9 = 152
    SDL_SCANCODE_ALTERASE = 153
    SDL_SCANCODE_SYSREQ = 154
    SDL_SCANCODE_CANCEL = 155
    SDL_SCANCODE_CLEAR = 156
    SDL_SCANCODE_PRIOR = 157
    SDL_SCANCODE_RETURN2 = 158
    SDL_SCANCODE_SEPARATOR = 159
    SDL_SCANCODE_OUT = 160
    SDL_SCANCODE_OPER = 161
    SDL_SCANCODE_CLEARAGAIN = 162
    SDL_SCANCODE_CRSEL = 163
    SDL_SCANCODE_EXSEL = 164
    SDL_SCANCODE_KP_00 = 176
    SDL_SCANCODE_KP_000 = 177
    SDL_SCANCODE_THOUSANDSSEPARATOR = 178
    SDL_SCANCODE_DECIMALSEPARATOR = 179
    SDL_SCANCODE_CURRENCYUNIT = 180
    SDL_SCANCODE_CURRENCYSUBUNIT = 181
    SDL_SCANCODE_KP_LEFTPAREN = 182
    SDL_SCANCODE_KP_RIGHTPAREN = 183
    SDL_SCANCODE_KP_LEFTBRACE = 184
    SDL_SCANCODE_KP_RIGHTBRACE = 185
    SDL_SCANCODE_KP_TAB = 186
    SDL_SCANCODE_KP_BACKSPACE = 187
    SDL_SCANCODE_KP_A = 188
    SDL_SCANCODE_KP_B = 189
    SDL_SCANCODE_KP_C = 190
    SDL_SCANCODE_KP_D = 191
    SDL_SCANCODE_KP_E = 192
    SDL_SCANCODE_KP_F = 193
    SDL_SCANCODE_KP_XOR = 194
    SDL_SCANCODE_KP_POWER = 195
    SDL_SCANCODE_KP_PERCENT = 196
    SDL_SCANCODE_KP_LESS = 197
    SDL_SCANCODE_KP_GREATER = 198
    SDL_SCANCODE_KP_AMPERSAND = 199
    SDL_SCANCODE_KP_DBLAMPERSAND = 200
    SDL_SCANCODE_KP_VERTICALBAR = 201
    SDL_SCANCODE_KP_DBLVERTICALBAR = 202
    SDL_SCANCODE_KP_COLON = 203
    SDL_SCANCODE_KP_HASH = 204
    SDL_SCANCODE_KP_SPACE = 205
    SDL_SCANCODE_KP_AT = 206
    SDL_SCANCODE_KP_EXCLAM = 207
    SDL_SCANCODE_KP_MEMSTORE = 208
    SDL_SCANCODE_KP_MEMRECALL = 209
    SDL_SCANCODE_KP_MEMCLEAR = 210
    SDL_SCANCODE_KP_MEMADD = 211
    SDL_SCANCODE_KP_MEMSUBTRACT = 212
    SDL_SCANCODE_KP_MEMMULTIPLY = 213
    SDL_SCANCODE_KP_MEMDIVIDE = 214
    SDL_SCANCODE_KP_PLUSMINUS = 215
    SDL_SCANCODE_KP_CLEAR = 216
    SDL_SCANCODE_KP_CLEARENTRY = 217
    SDL_SCANCODE_KP_BINARY = 218
    SDL_SCANCODE_KP_OCTAL = 219
    SDL_SCANCODE_KP_DECIMAL = 220
    SDL_SCANCODE_KP_HEXADECIMAL = 221
    SDL_SCANCODE_LCTRL = 224
    SDL_SCANCODE_LSHIFT = 225
    SDL_SCANCODE_LALT = 226
    SDL_SCANCODE_LGUI = 227
    SDL_SCANCODE_RCTRL = 228
    SDL_SCANCODE_RSHIFT = 229
    SDL_SCANCODE_RALT = 230
    SDL_SCANCODE_RGUI = 231
    SDL_SCANCODE_MODE = 257
    SDL_SCANCODE_AUDIONEXT = 258
    SDL_SCANCODE_AUDIOPREV = 259
    SDL_SCANCODE_AUDIOSTOP = 260
    SDL_SCANCODE_AUDIOPLAY = 261
    SDL_SCANCODE_AUDIOMUTE = 262
    SDL_SCANCODE_MEDIASELECT = 263
    SDL_SCANCODE_WWW = 264
    SDL_SCANCODE_MAIL = 265
    SDL_SCANCODE_CALCULATOR = 266
    SDL_SCANCODE_COMPUTER = 267
    SDL_SCANCODE_AC_SEARCH = 268
    SDL_SCANCODE_AC_HOME = 269
    SDL_SCANCODE_AC_BACK = 270
    SDL_SCANCODE_AC_FORWARD = 271
    SDL_SCANCODE_AC_STOP = 272
    SDL_SCANCODE_AC_REFRESH = 273
    SDL_SCANCODE_AC_BOOKMARKS = 274
    SDL_SCANCODE_BRIGHTNESSDOWN = 275
    SDL_SCANCODE_BRIGHTNESSUP = 276
    SDL_SCANCODE_DISPLAYSWITCH = 277
    SDL_SCANCODE_KBDILLUMTOGGLE = 278
    SDL_SCANCODE_KBDILLUMDOWN = 279
    SDL_SCANCODE_KBDILLUMUP = 280
    SDL_SCANCODE_EJECT = 281
    SDL_SCANCODE_SLEEP = 282
    SDL_SCANCODE_APP1 = 283
    SDL_SCANCODE_APP2 = 284
    SDL_NUM_SCANCODES = 512
  end
  include SdlScancode

  module SdlSystemcursor
    SDL_SYSTEM_CURSOR_ARROW = 0
    SDL_SYSTEM_CURSOR_IBEAM = 1
    SDL_SYSTEM_CURSOR_WAIT = 2
    SDL_SYSTEM_CURSOR_CROSSHAIR = 3
    SDL_SYSTEM_CURSOR_WAITARROW = 4
    SDL_SYSTEM_CURSOR_SIZENWSE = 5
    SDL_SYSTEM_CURSOR_SIZENESW = 6
    SDL_SYSTEM_CURSOR_SIZEWE = 7
    SDL_SYSTEM_CURSOR_SIZENS = 8
    SDL_SYSTEM_CURSOR_SIZEALL = 9
    SDL_SYSTEM_CURSOR_NO = 10
    SDL_SYSTEM_CURSOR_HAND = 11
    SDL_NUM_SYSTEM_CURSORS = 12
  end
  include SdlSystemcursor

  module SdlTextureaccess
    SDL_TEXTUREACCESS_STATIC = 0
    SDL_TEXTUREACCESS_STREAMING = 1
    SDL_TEXTUREACCESS_TARGET = 2
  end
  include SdlTextureaccess

  module SdlTexturemodulate
    SDL_TEXTUREMODULATE_NONE = 0
    SDL_TEXTUREMODULATE_COLOR = 1
    SDL_TEXTUREMODULATE_ALPHA = 2
  end
  include SdlTexturemodulate

  module SdlThreadpriority
    SDL_THREAD_PRIORITY_LOW = 0
    SDL_THREAD_PRIORITY_NORMAL = 1
    SDL_THREAD_PRIORITY_HIGH = 2
  end
  include SdlThreadpriority

  module SdlWindoweventid
    SDL_WINDOWEVENT_NONE = 0
    SDL_WINDOWEVENT_SHOWN = 1
    SDL_WINDOWEVENT_HIDDEN = 2
    SDL_WINDOWEVENT_EXPOSED = 3
    SDL_WINDOWEVENT_MOVED = 4
    SDL_WINDOWEVENT_RESIZED = 5
    SDL_WINDOWEVENT_SIZE_CHANGED = 6
    SDL_WINDOWEVENT_MINIMIZED = 7
    SDL_WINDOWEVENT_MAXIMIZED = 8
    SDL_WINDOWEVENT_RESTORED = 9
    SDL_WINDOWEVENT_ENTER = 10
    SDL_WINDOWEVENT_LEAVE = 11
    SDL_WINDOWEVENT_FOCUS_GAINED = 12
    SDL_WINDOWEVENT_FOCUS_LOST = 13
    SDL_WINDOWEVENT_CLOSE = 14
  end
  include SdlWindoweventid

  module SdlWindowflags
    SDL_WINDOW_FULLSCREEN = 1
    SDL_WINDOW_OPENGL = 2
    SDL_WINDOW_SHOWN = 4
    SDL_WINDOW_HIDDEN = 8
    SDL_WINDOW_BORDERLESS = 16
    SDL_WINDOW_RESIZABLE = 32
    SDL_WINDOW_MINIMIZED = 64
    SDL_WINDOW_MAXIMIZED = 128
    SDL_WINDOW_INPUT_GRABBED = 256
    SDL_WINDOW_INPUT_FOCUS = 512
    SDL_WINDOW_MOUSE_FOCUS = 1024
    SDL_WINDOW_FULLSCREEN_DESKTOP = 4097
    SDL_WINDOW_FOREIGN = 2048
    SDL_WINDOW_ALLOW_HIGHDPI = 8192
  end
  include SdlWindowflags

  module SdlAssertState
    SDL_ASSERTION_RETRY = 0
    SDL_ASSERTION_BREAK = 1
    SDL_ASSERTION_ABORT = 2
    SDL_ASSERTION_IGNORE = 3
    SDL_ASSERTION_ALWAYS_IGNORE = 4
  end
  include SdlAssertState

  module SdlBool
    SDL_FALSE = 0
    SDL_TRUE = 1
  end
  include SdlBool

  module SdlErrorcode
    SDL_ENOMEM = 0
    SDL_EFREAD = 1
    SDL_EFWRITE = 2
    SDL_EFSEEK = 3
    SDL_UNSUPPORTED = 4
    SDL_LASTERROR = 5
  end
  include SdlErrorcode

  module SdlEventaction
    SDL_ADDEVENT = 0
    SDL_PEEKEVENT = 1
    SDL_GETEVENT = 2
  end
  include SdlEventaction

  module Windowshapemode
    ShapeModeDefault = 0
    ShapeModeBinarizeAlpha = 1
    ShapeModeReverseBinarizeAlpha = 2
    ShapeModeColorKey = 3
  end
  include Windowshapemode
end
