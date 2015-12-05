/*
 * TODO: Update includes
 */
 #include "mruby_SDL.h"


#if BIND_SDLTestCommonState_TYPE
/*
 * Boxing implementation for SDLTest_CommonState
 */

static void free_SDLTest_CommonState(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type SDLTest_CommonState_data_type = {
   "SDLTest_CommonState", free_SDLTest_CommonState
};

mrb_value
mruby_box_SDLTest_CommonState(mrb_state* mrb, SDLTest_CommonState *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, SDLTestCommonState_class(mrb), &SDLTest_CommonState_data_type, box));
}

mrb_value
mruby_giftwrap_SDLTest_CommonState(mrb_state* mrb, SDLTest_CommonState *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, SDLTestCommonState_class(mrb), &SDLTest_CommonState_data_type, box));
}

void
mruby_set_SDLTest_CommonState_data_ptr(mrb_value obj, SDLTest_CommonState *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDLTest_CommonState_data_type);
}

void
mruby_gift_SDLTest_CommonState_data_ptr(mrb_value obj, SDLTest_CommonState *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDLTest_CommonState_data_type);
}

SDLTest_CommonState *
mruby_unbox_SDLTest_CommonState(mrb_value boxed) {
  return (SDLTest_CommonState *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_SDLTestCrc32Context_TYPE
/*
 * Boxing implementation for SDLTest_Crc32Context
 */

static void free_SDLTest_Crc32Context(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type SDLTest_Crc32Context_data_type = {
   "SDLTest_Crc32Context", free_SDLTest_Crc32Context
};

mrb_value
mruby_box_SDLTest_Crc32Context(mrb_state* mrb, SDLTest_Crc32Context *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, SDLTestCrc32Context_class(mrb), &SDLTest_Crc32Context_data_type, box));
}

mrb_value
mruby_giftwrap_SDLTest_Crc32Context(mrb_state* mrb, SDLTest_Crc32Context *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, SDLTestCrc32Context_class(mrb), &SDLTest_Crc32Context_data_type, box));
}

void
mruby_set_SDLTest_Crc32Context_data_ptr(mrb_value obj, SDLTest_Crc32Context *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDLTest_Crc32Context_data_type);
}

void
mruby_gift_SDLTest_Crc32Context_data_ptr(mrb_value obj, SDLTest_Crc32Context *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDLTest_Crc32Context_data_type);
}

SDLTest_Crc32Context *
mruby_unbox_SDLTest_Crc32Context(mrb_value boxed) {
  return (SDLTest_Crc32Context *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_SDLTestMd5Context_TYPE
/*
 * Boxing implementation for SDLTest_Md5Context
 */

static void free_SDLTest_Md5Context(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type SDLTest_Md5Context_data_type = {
   "SDLTest_Md5Context", free_SDLTest_Md5Context
};

mrb_value
mruby_box_SDLTest_Md5Context(mrb_state* mrb, SDLTest_Md5Context *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, SDLTestMd5Context_class(mrb), &SDLTest_Md5Context_data_type, box));
}

mrb_value
mruby_giftwrap_SDLTest_Md5Context(mrb_state* mrb, SDLTest_Md5Context *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, SDLTestMd5Context_class(mrb), &SDLTest_Md5Context_data_type, box));
}

void
mruby_set_SDLTest_Md5Context_data_ptr(mrb_value obj, SDLTest_Md5Context *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDLTest_Md5Context_data_type);
}

void
mruby_gift_SDLTest_Md5Context_data_ptr(mrb_value obj, SDLTest_Md5Context *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDLTest_Md5Context_data_type);
}

SDLTest_Md5Context *
mruby_unbox_SDLTest_Md5Context(mrb_value boxed) {
  return (SDLTest_Md5Context *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_SDLTestRandomContext_TYPE
/*
 * Boxing implementation for SDLTest_RandomContext
 */

static void free_SDLTest_RandomContext(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type SDLTest_RandomContext_data_type = {
   "SDLTest_RandomContext", free_SDLTest_RandomContext
};

mrb_value
mruby_box_SDLTest_RandomContext(mrb_state* mrb, SDLTest_RandomContext *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, SDLTestRandomContext_class(mrb), &SDLTest_RandomContext_data_type, box));
}

mrb_value
mruby_giftwrap_SDLTest_RandomContext(mrb_state* mrb, SDLTest_RandomContext *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, SDLTestRandomContext_class(mrb), &SDLTest_RandomContext_data_type, box));
}

void
mruby_set_SDLTest_RandomContext_data_ptr(mrb_value obj, SDLTest_RandomContext *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDLTest_RandomContext_data_type);
}

void
mruby_gift_SDLTest_RandomContext_data_ptr(mrb_value obj, SDLTest_RandomContext *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDLTest_RandomContext_data_type);
}

SDLTest_RandomContext *
mruby_unbox_SDLTest_RandomContext(mrb_value boxed) {
  return (SDLTest_RandomContext *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_SDLDisplayMode_TYPE
/*
 * Boxing implementation for SDL_DisplayMode
 */

static void free_SDL_DisplayMode(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type SDL_DisplayMode_data_type = {
   "SDL_DisplayMode", free_SDL_DisplayMode
};

mrb_value
mruby_box_SDL_DisplayMode(mrb_state* mrb, SDL_DisplayMode *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, SDLDisplayMode_class(mrb), &SDL_DisplayMode_data_type, box));
}

mrb_value
mruby_giftwrap_SDL_DisplayMode(mrb_state* mrb, SDL_DisplayMode *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, SDLDisplayMode_class(mrb), &SDL_DisplayMode_data_type, box));
}

void
mruby_set_SDL_DisplayMode_data_ptr(mrb_value obj, SDL_DisplayMode *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_DisplayMode_data_type);
}

void
mruby_gift_SDL_DisplayMode_data_ptr(mrb_value obj, SDL_DisplayMode *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_DisplayMode_data_type);
}

SDL_DisplayMode *
mruby_unbox_SDL_DisplayMode(mrb_value boxed) {
  return (SDL_DisplayMode *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_SDLJoystickGUID_TYPE
/*
 * Boxing implementation for SDL_JoystickGUID
 */

static void free_SDL_JoystickGUID(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type SDL_JoystickGUID_data_type = {
   "SDL_JoystickGUID", free_SDL_JoystickGUID
};

mrb_value
mruby_box_SDL_JoystickGUID(mrb_state* mrb, SDL_JoystickGUID *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, SDLJoystickGUID_class(mrb), &SDL_JoystickGUID_data_type, box));
}

mrb_value
mruby_giftwrap_SDL_JoystickGUID(mrb_state* mrb, SDL_JoystickGUID *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, SDLJoystickGUID_class(mrb), &SDL_JoystickGUID_data_type, box));
}

void
mruby_set_SDL_JoystickGUID_data_ptr(mrb_value obj, SDL_JoystickGUID *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_JoystickGUID_data_type);
}

void
mruby_gift_SDL_JoystickGUID_data_ptr(mrb_value obj, SDL_JoystickGUID *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_JoystickGUID_data_type);
}

SDL_JoystickGUID *
mruby_unbox_SDL_JoystickGUID(mrb_value boxed) {
  return (SDL_JoystickGUID *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_SDLMessageBoxButtonData_TYPE
/*
 * Boxing implementation for SDL_MessageBoxButtonData
 */

static void free_SDL_MessageBoxButtonData(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type SDL_MessageBoxButtonData_data_type = {
   "SDL_MessageBoxButtonData", free_SDL_MessageBoxButtonData
};

mrb_value
mruby_box_SDL_MessageBoxButtonData(mrb_state* mrb, SDL_MessageBoxButtonData *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, SDLMessageBoxButtonData_class(mrb), &SDL_MessageBoxButtonData_data_type, box));
}

mrb_value
mruby_giftwrap_SDL_MessageBoxButtonData(mrb_state* mrb, SDL_MessageBoxButtonData *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, SDLMessageBoxButtonData_class(mrb), &SDL_MessageBoxButtonData_data_type, box));
}

void
mruby_set_SDL_MessageBoxButtonData_data_ptr(mrb_value obj, SDL_MessageBoxButtonData *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_MessageBoxButtonData_data_type);
}

void
mruby_gift_SDL_MessageBoxButtonData_data_ptr(mrb_value obj, SDL_MessageBoxButtonData *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_MessageBoxButtonData_data_type);
}

SDL_MessageBoxButtonData *
mruby_unbox_SDL_MessageBoxButtonData(mrb_value boxed) {
  return (SDL_MessageBoxButtonData *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_SDLMessageBoxColor_TYPE
/*
 * Boxing implementation for SDL_MessageBoxColor
 */

static void free_SDL_MessageBoxColor(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type SDL_MessageBoxColor_data_type = {
   "SDL_MessageBoxColor", free_SDL_MessageBoxColor
};

mrb_value
mruby_box_SDL_MessageBoxColor(mrb_state* mrb, SDL_MessageBoxColor *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, SDLMessageBoxColor_class(mrb), &SDL_MessageBoxColor_data_type, box));
}

mrb_value
mruby_giftwrap_SDL_MessageBoxColor(mrb_state* mrb, SDL_MessageBoxColor *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, SDLMessageBoxColor_class(mrb), &SDL_MessageBoxColor_data_type, box));
}

void
mruby_set_SDL_MessageBoxColor_data_ptr(mrb_value obj, SDL_MessageBoxColor *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_MessageBoxColor_data_type);
}

void
mruby_gift_SDL_MessageBoxColor_data_ptr(mrb_value obj, SDL_MessageBoxColor *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_MessageBoxColor_data_type);
}

SDL_MessageBoxColor *
mruby_unbox_SDL_MessageBoxColor(mrb_value boxed) {
  return (SDL_MessageBoxColor *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_SDLMessageBoxColorScheme_TYPE
/*
 * Boxing implementation for SDL_MessageBoxColorScheme
 */

static void free_SDL_MessageBoxColorScheme(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type SDL_MessageBoxColorScheme_data_type = {
   "SDL_MessageBoxColorScheme", free_SDL_MessageBoxColorScheme
};

mrb_value
mruby_box_SDL_MessageBoxColorScheme(mrb_state* mrb, SDL_MessageBoxColorScheme *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, SDLMessageBoxColorScheme_class(mrb), &SDL_MessageBoxColorScheme_data_type, box));
}

mrb_value
mruby_giftwrap_SDL_MessageBoxColorScheme(mrb_state* mrb, SDL_MessageBoxColorScheme *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, SDLMessageBoxColorScheme_class(mrb), &SDL_MessageBoxColorScheme_data_type, box));
}

void
mruby_set_SDL_MessageBoxColorScheme_data_ptr(mrb_value obj, SDL_MessageBoxColorScheme *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_MessageBoxColorScheme_data_type);
}

void
mruby_gift_SDL_MessageBoxColorScheme_data_ptr(mrb_value obj, SDL_MessageBoxColorScheme *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_MessageBoxColorScheme_data_type);
}

SDL_MessageBoxColorScheme *
mruby_unbox_SDL_MessageBoxColorScheme(mrb_value boxed) {
  return (SDL_MessageBoxColorScheme *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_SDLMessageBoxData_TYPE
/*
 * Boxing implementation for SDL_MessageBoxData
 */

static void free_SDL_MessageBoxData(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type SDL_MessageBoxData_data_type = {
   "SDL_MessageBoxData", free_SDL_MessageBoxData
};

mrb_value
mruby_box_SDL_MessageBoxData(mrb_state* mrb, SDL_MessageBoxData *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, SDLMessageBoxData_class(mrb), &SDL_MessageBoxData_data_type, box));
}

mrb_value
mruby_giftwrap_SDL_MessageBoxData(mrb_state* mrb, SDL_MessageBoxData *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, SDLMessageBoxData_class(mrb), &SDL_MessageBoxData_data_type, box));
}

void
mruby_set_SDL_MessageBoxData_data_ptr(mrb_value obj, SDL_MessageBoxData *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_MessageBoxData_data_type);
}

void
mruby_gift_SDL_MessageBoxData_data_ptr(mrb_value obj, SDL_MessageBoxData *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_MessageBoxData_data_type);
}

SDL_MessageBoxData *
mruby_unbox_SDL_MessageBoxData(mrb_value boxed) {
  return (SDL_MessageBoxData *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_SDLAtomicT_TYPE
/*
 * Boxing implementation for SDL_atomic_t
 */

static void free_SDL_atomic_t(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type SDL_atomic_t_data_type = {
   "SDL_atomic_t", free_SDL_atomic_t
};

mrb_value
mruby_box_SDL_atomic_t(mrb_state* mrb, SDL_atomic_t *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, SDLAtomicT_class(mrb), &SDL_atomic_t_data_type, box));
}

mrb_value
mruby_giftwrap_SDL_atomic_t(mrb_state* mrb, SDL_atomic_t *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, SDLAtomicT_class(mrb), &SDL_atomic_t_data_type, box));
}

void
mruby_set_SDL_atomic_t_data_ptr(mrb_value obj, SDL_atomic_t *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_atomic_t_data_type);
}

void
mruby_gift_SDL_atomic_t_data_ptr(mrb_value obj, SDL_atomic_t *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_atomic_t_data_type);
}

SDL_atomic_t *
mruby_unbox_SDL_atomic_t(mrb_value boxed) {
  return (SDL_atomic_t *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_SDLTestSurfaceImageS_TYPE
/*
 * Boxing implementation for struct SDLTest_SurfaceImage_s
 */

static void free_SDLTest_SurfaceImage_s(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->obj != NULL) {
      SDL_FreeSurface((SDL_Surface*)box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type SDLTest_SurfaceImage_s_data_type = {
   "struct SDLTest_SurfaceImage_s", free_SDLTest_SurfaceImage_s
};

mrb_value
mruby_box_SDLTest_SurfaceImage_s(mrb_state* mrb, struct SDLTest_SurfaceImage_s *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, SDLTestSurfaceImageS_class(mrb), &SDLTest_SurfaceImage_s_data_type, box));
}

mrb_value
mruby_giftwrap_SDLTest_SurfaceImage_s(mrb_state* mrb, struct SDLTest_SurfaceImage_s *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, SDLTestSurfaceImageS_class(mrb), &SDLTest_SurfaceImage_s_data_type, box));
}

void
mruby_set_SDLTest_SurfaceImage_s_data_ptr(mrb_value obj, struct SDLTest_SurfaceImage_s *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDLTest_SurfaceImage_s_data_type);
}

void
mruby_gift_SDLTest_SurfaceImage_s_data_ptr(mrb_value obj, struct SDLTest_SurfaceImage_s *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDLTest_SurfaceImage_s_data_type);
}

struct SDLTest_SurfaceImage_s *
mruby_unbox_SDLTest_SurfaceImage_s(mrb_value boxed) {
  return (struct SDLTest_SurfaceImage_s *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_SDLTestTestCaseReference_TYPE
/*
 * Boxing implementation for struct SDLTest_TestCaseReference
 */

static void free_SDLTest_TestCaseReference(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type SDLTest_TestCaseReference_data_type = {
   "struct SDLTest_TestCaseReference", free_SDLTest_TestCaseReference
};

mrb_value
mruby_box_SDLTest_TestCaseReference(mrb_state* mrb, struct SDLTest_TestCaseReference *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, SDLTestTestCaseReference_class(mrb), &SDLTest_TestCaseReference_data_type, box));
}

mrb_value
mruby_giftwrap_SDLTest_TestCaseReference(mrb_state* mrb, struct SDLTest_TestCaseReference *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, SDLTestTestCaseReference_class(mrb), &SDLTest_TestCaseReference_data_type, box));
}

void
mruby_set_SDLTest_TestCaseReference_data_ptr(mrb_value obj, struct SDLTest_TestCaseReference *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDLTest_TestCaseReference_data_type);
}

void
mruby_gift_SDLTest_TestCaseReference_data_ptr(mrb_value obj, struct SDLTest_TestCaseReference *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDLTest_TestCaseReference_data_type);
}

struct SDLTest_TestCaseReference *
mruby_unbox_SDLTest_TestCaseReference(mrb_value boxed) {
  return (struct SDLTest_TestCaseReference *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_SDLTestTestSuiteReference_TYPE
/*
 * Boxing implementation for struct SDLTest_TestSuiteReference
 */

static void free_SDLTest_TestSuiteReference(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type SDLTest_TestSuiteReference_data_type = {
   "struct SDLTest_TestSuiteReference", free_SDLTest_TestSuiteReference
};

mrb_value
mruby_box_SDLTest_TestSuiteReference(mrb_state* mrb, struct SDLTest_TestSuiteReference *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, SDLTestTestSuiteReference_class(mrb), &SDLTest_TestSuiteReference_data_type, box));
}

mrb_value
mruby_giftwrap_SDLTest_TestSuiteReference(mrb_state* mrb, struct SDLTest_TestSuiteReference *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, SDLTestTestSuiteReference_class(mrb), &SDLTest_TestSuiteReference_data_type, box));
}

void
mruby_set_SDLTest_TestSuiteReference_data_ptr(mrb_value obj, struct SDLTest_TestSuiteReference *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDLTest_TestSuiteReference_data_type);
}

void
mruby_gift_SDLTest_TestSuiteReference_data_ptr(mrb_value obj, struct SDLTest_TestSuiteReference *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDLTest_TestSuiteReference_data_type);
}

struct SDLTest_TestSuiteReference *
mruby_unbox_SDLTest_TestSuiteReference(mrb_value boxed) {
  return (struct SDLTest_TestSuiteReference *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_SDLAudioCVT_TYPE
/*
 * Boxing implementation for struct SDL_AudioCVT
 */

static void free_SDL_AudioCVT(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type SDL_AudioCVT_data_type = {
   "struct SDL_AudioCVT", free_SDL_AudioCVT
};

mrb_value
mruby_box_SDL_AudioCVT(mrb_state* mrb, struct SDL_AudioCVT *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, SDLAudioCVT_class(mrb), &SDL_AudioCVT_data_type, box));
}

mrb_value
mruby_giftwrap_SDL_AudioCVT(mrb_state* mrb, struct SDL_AudioCVT *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, SDLAudioCVT_class(mrb), &SDL_AudioCVT_data_type, box));
}

void
mruby_set_SDL_AudioCVT_data_ptr(mrb_value obj, struct SDL_AudioCVT *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_AudioCVT_data_type);
}

void
mruby_gift_SDL_AudioCVT_data_ptr(mrb_value obj, struct SDL_AudioCVT *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_AudioCVT_data_type);
}

struct SDL_AudioCVT *
mruby_unbox_SDL_AudioCVT(mrb_value boxed) {
  return (struct SDL_AudioCVT *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_SDLAudioSpec_TYPE
/*
 * Boxing implementation for struct SDL_AudioSpec
 */

static void free_SDL_AudioSpec(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type SDL_AudioSpec_data_type = {
   "struct SDL_AudioSpec", free_SDL_AudioSpec
};

mrb_value
mruby_box_SDL_AudioSpec(mrb_state* mrb, struct SDL_AudioSpec *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, SDLAudioSpec_class(mrb), &SDL_AudioSpec_data_type, box));
}

mrb_value
mruby_giftwrap_SDL_AudioSpec(mrb_state* mrb, struct SDL_AudioSpec *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, SDLAudioSpec_class(mrb), &SDL_AudioSpec_data_type, box));
}

void
mruby_set_SDL_AudioSpec_data_ptr(mrb_value obj, struct SDL_AudioSpec *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_AudioSpec_data_type);
}

void
mruby_gift_SDL_AudioSpec_data_ptr(mrb_value obj, struct SDL_AudioSpec *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_AudioSpec_data_type);
}

struct SDL_AudioSpec *
mruby_unbox_SDL_AudioSpec(mrb_value boxed) {
  return (struct SDL_AudioSpec *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_SDLBlitMap_TYPE
/*
 * Boxing implementation for struct SDL_BlitMap
 */

static void free_SDL_BlitMap(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type SDL_BlitMap_data_type = {
   "struct SDL_BlitMap", free_SDL_BlitMap
};

mrb_value
mruby_box_SDL_BlitMap(mrb_state* mrb, struct SDL_BlitMap *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, SDLBlitMap_class(mrb), &SDL_BlitMap_data_type, box));
}

mrb_value
mruby_giftwrap_SDL_BlitMap(mrb_state* mrb, struct SDL_BlitMap *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, SDLBlitMap_class(mrb), &SDL_BlitMap_data_type, box));
}

void
mruby_set_SDL_BlitMap_data_ptr(mrb_value obj, struct SDL_BlitMap *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_BlitMap_data_type);
}

void
mruby_gift_SDL_BlitMap_data_ptr(mrb_value obj, struct SDL_BlitMap *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_BlitMap_data_type);
}

struct SDL_BlitMap *
mruby_unbox_SDL_BlitMap(mrb_value boxed) {
  return (struct SDL_BlitMap *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_SDLColor_TYPE
/*
 * Boxing implementation for struct SDL_Color
 */

static void free_SDL_Color(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type SDL_Color_data_type = {
   "struct SDL_Color", free_SDL_Color
};

mrb_value
mruby_box_SDL_Color(mrb_state* mrb, struct SDL_Color *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, SDLColor_class(mrb), &SDL_Color_data_type, box));
}

mrb_value
mruby_giftwrap_SDL_Color(mrb_state* mrb, struct SDL_Color *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, SDLColor_class(mrb), &SDL_Color_data_type, box));
}

void
mruby_set_SDL_Color_data_ptr(mrb_value obj, struct SDL_Color *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_Color_data_type);
}

void
mruby_gift_SDL_Color_data_ptr(mrb_value obj, struct SDL_Color *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_Color_data_type);
}

struct SDL_Color *
mruby_unbox_SDL_Color(mrb_value boxed) {
  return (struct SDL_Color *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_SDLCommonEvent_TYPE
/*
 * Boxing implementation for struct SDL_CommonEvent
 */

static void free_SDL_CommonEvent(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->data != NULL) {
      free(box->data);
      box->data = NULL;
    }
  }
  free(box);
}

static const mrb_data_type SDL_CommonEvent_data_type = {
   "struct SDL_CommonEvent", free_SDL_CommonEvent
};

mrb_value
mruby_box_SDL_CommonEvent(mrb_state* mrb, struct SDL_CommonEvent *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, SDLCommonEvent_class(mrb), &SDL_CommonEvent_data_type, box));
}

mrb_value
mruby_giftwrap_SDL_CommonEvent(mrb_state* mrb, struct SDL_CommonEvent *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, SDLCommonEvent_class(mrb), &SDL_CommonEvent_data_type, box));
}

void
mruby_set_SDL_CommonEvent_data_ptr(mrb_value obj, struct SDL_CommonEvent *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_CommonEvent_data_type);
}

void
mruby_gift_SDL_CommonEvent_data_ptr(mrb_value obj, struct SDL_CommonEvent *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_CommonEvent_data_type);
}

struct SDL_CommonEvent *
mruby_unbox_SDL_CommonEvent(mrb_value boxed) {
  return (struct SDL_CommonEvent *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_SDLControllerAxisEvent_TYPE
/*
 * Boxing implementation for struct SDL_ControllerAxisEvent
 */

static void free_SDL_ControllerAxisEvent(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->data != NULL) {
      free(box->data);
      box->data = NULL;
    }
  }
  free(box);
}

static const mrb_data_type SDL_ControllerAxisEvent_data_type = {
   "struct SDL_ControllerAxisEvent", free_SDL_ControllerAxisEvent
};

mrb_value
mruby_box_SDL_ControllerAxisEvent(mrb_state* mrb, struct SDL_ControllerAxisEvent *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, SDLControllerAxisEvent_class(mrb), &SDL_ControllerAxisEvent_data_type, box));
}

mrb_value
mruby_giftwrap_SDL_ControllerAxisEvent(mrb_state* mrb, struct SDL_ControllerAxisEvent *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, SDLControllerAxisEvent_class(mrb), &SDL_ControllerAxisEvent_data_type, box));
}

void
mruby_set_SDL_ControllerAxisEvent_data_ptr(mrb_value obj, struct SDL_ControllerAxisEvent *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_ControllerAxisEvent_data_type);
}

void
mruby_gift_SDL_ControllerAxisEvent_data_ptr(mrb_value obj, struct SDL_ControllerAxisEvent *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_ControllerAxisEvent_data_type);
}

struct SDL_ControllerAxisEvent *
mruby_unbox_SDL_ControllerAxisEvent(mrb_value boxed) {
  return (struct SDL_ControllerAxisEvent *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_SDLControllerButtonEvent_TYPE
/*
 * Boxing implementation for struct SDL_ControllerButtonEvent
 */

static void free_SDL_ControllerButtonEvent(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->data != NULL) {
      free(box->data);
      box->data = NULL;
    }
  }
  free(box);
}

static const mrb_data_type SDL_ControllerButtonEvent_data_type = {
   "struct SDL_ControllerButtonEvent", free_SDL_ControllerButtonEvent
};

mrb_value
mruby_box_SDL_ControllerButtonEvent(mrb_state* mrb, struct SDL_ControllerButtonEvent *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, SDLControllerButtonEvent_class(mrb), &SDL_ControllerButtonEvent_data_type, box));
}

mrb_value
mruby_giftwrap_SDL_ControllerButtonEvent(mrb_state* mrb, struct SDL_ControllerButtonEvent *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, SDLControllerButtonEvent_class(mrb), &SDL_ControllerButtonEvent_data_type, box));
}

void
mruby_set_SDL_ControllerButtonEvent_data_ptr(mrb_value obj, struct SDL_ControllerButtonEvent *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_ControllerButtonEvent_data_type);
}

void
mruby_gift_SDL_ControllerButtonEvent_data_ptr(mrb_value obj, struct SDL_ControllerButtonEvent *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_ControllerButtonEvent_data_type);
}

struct SDL_ControllerButtonEvent *
mruby_unbox_SDL_ControllerButtonEvent(mrb_value boxed) {
  return (struct SDL_ControllerButtonEvent *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_SDLControllerDeviceEvent_TYPE
/*
 * Boxing implementation for struct SDL_ControllerDeviceEvent
 */

static void free_SDL_ControllerDeviceEvent(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->data != NULL) {
      free(box->data);
      box->data = NULL;
    }
  }
  free(box);
}

static const mrb_data_type SDL_ControllerDeviceEvent_data_type = {
   "struct SDL_ControllerDeviceEvent", free_SDL_ControllerDeviceEvent
};

mrb_value
mruby_box_SDL_ControllerDeviceEvent(mrb_state* mrb, struct SDL_ControllerDeviceEvent *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, SDLControllerDeviceEvent_class(mrb), &SDL_ControllerDeviceEvent_data_type, box));
}

mrb_value
mruby_giftwrap_SDL_ControllerDeviceEvent(mrb_state* mrb, struct SDL_ControllerDeviceEvent *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, SDLControllerDeviceEvent_class(mrb), &SDL_ControllerDeviceEvent_data_type, box));
}

void
mruby_set_SDL_ControllerDeviceEvent_data_ptr(mrb_value obj, struct SDL_ControllerDeviceEvent *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_ControllerDeviceEvent_data_type);
}

void
mruby_gift_SDL_ControllerDeviceEvent_data_ptr(mrb_value obj, struct SDL_ControllerDeviceEvent *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_ControllerDeviceEvent_data_type);
}

struct SDL_ControllerDeviceEvent *
mruby_unbox_SDL_ControllerDeviceEvent(mrb_value boxed) {
  return (struct SDL_ControllerDeviceEvent *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_SDLCursor_TYPE
/*
 * Boxing implementation for struct SDL_Cursor
 */

static void free_SDL_Cursor(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type SDL_Cursor_data_type = {
   "struct SDL_Cursor", free_SDL_Cursor
};

mrb_value
mruby_box_SDL_Cursor(mrb_state* mrb, struct SDL_Cursor *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, SDLCursor_class(mrb), &SDL_Cursor_data_type, box));
}

mrb_value
mruby_giftwrap_SDL_Cursor(mrb_state* mrb, struct SDL_Cursor *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, SDLCursor_class(mrb), &SDL_Cursor_data_type, box));
}

void
mruby_set_SDL_Cursor_data_ptr(mrb_value obj, struct SDL_Cursor *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_Cursor_data_type);
}

void
mruby_gift_SDL_Cursor_data_ptr(mrb_value obj, struct SDL_Cursor *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_Cursor_data_type);
}

struct SDL_Cursor *
mruby_unbox_SDL_Cursor(mrb_value boxed) {
  return (struct SDL_Cursor *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_SDLDollarGestureEvent_TYPE
/*
 * Boxing implementation for struct SDL_DollarGestureEvent
 */

static void free_SDL_DollarGestureEvent(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->data != NULL) {
      free(box->data);
      box->data = NULL;
    }
  }
  free(box);
}

static const mrb_data_type SDL_DollarGestureEvent_data_type = {
   "struct SDL_DollarGestureEvent", free_SDL_DollarGestureEvent
};

mrb_value
mruby_box_SDL_DollarGestureEvent(mrb_state* mrb, struct SDL_DollarGestureEvent *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, SDLDollarGestureEvent_class(mrb), &SDL_DollarGestureEvent_data_type, box));
}

mrb_value
mruby_giftwrap_SDL_DollarGestureEvent(mrb_state* mrb, struct SDL_DollarGestureEvent *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, SDLDollarGestureEvent_class(mrb), &SDL_DollarGestureEvent_data_type, box));
}

void
mruby_set_SDL_DollarGestureEvent_data_ptr(mrb_value obj, struct SDL_DollarGestureEvent *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_DollarGestureEvent_data_type);
}

void
mruby_gift_SDL_DollarGestureEvent_data_ptr(mrb_value obj, struct SDL_DollarGestureEvent *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_DollarGestureEvent_data_type);
}

struct SDL_DollarGestureEvent *
mruby_unbox_SDL_DollarGestureEvent(mrb_value boxed) {
  return (struct SDL_DollarGestureEvent *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_SDLDropEvent_TYPE
/*
 * Boxing implementation for struct SDL_DropEvent
 */

static void free_SDL_DropEvent(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->data != NULL) {
      free(box->data);
      box->data = NULL;
    }
  }
  free(box);
}

static const mrb_data_type SDL_DropEvent_data_type = {
   "struct SDL_DropEvent", free_SDL_DropEvent
};

mrb_value
mruby_box_SDL_DropEvent(mrb_state* mrb, struct SDL_DropEvent *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, SDLDropEvent_class(mrb), &SDL_DropEvent_data_type, box));
}

mrb_value
mruby_giftwrap_SDL_DropEvent(mrb_state* mrb, struct SDL_DropEvent *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, SDLDropEvent_class(mrb), &SDL_DropEvent_data_type, box));
}

void
mruby_set_SDL_DropEvent_data_ptr(mrb_value obj, struct SDL_DropEvent *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_DropEvent_data_type);
}

void
mruby_gift_SDL_DropEvent_data_ptr(mrb_value obj, struct SDL_DropEvent *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_DropEvent_data_type);
}

struct SDL_DropEvent *
mruby_unbox_SDL_DropEvent(mrb_value boxed) {
  return (struct SDL_DropEvent *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_SDLFinger_TYPE
/*
 * Boxing implementation for struct SDL_Finger
 */

static void free_SDL_Finger(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type SDL_Finger_data_type = {
   "struct SDL_Finger", free_SDL_Finger
};

mrb_value
mruby_box_SDL_Finger(mrb_state* mrb, struct SDL_Finger *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, SDLFinger_class(mrb), &SDL_Finger_data_type, box));
}

mrb_value
mruby_giftwrap_SDL_Finger(mrb_state* mrb, struct SDL_Finger *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, SDLFinger_class(mrb), &SDL_Finger_data_type, box));
}

void
mruby_set_SDL_Finger_data_ptr(mrb_value obj, struct SDL_Finger *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_Finger_data_type);
}

void
mruby_gift_SDL_Finger_data_ptr(mrb_value obj, struct SDL_Finger *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_Finger_data_type);
}

struct SDL_Finger *
mruby_unbox_SDL_Finger(mrb_value boxed) {
  return (struct SDL_Finger *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_SDLGameControllerButtonBind_TYPE
/*
 * Boxing implementation for struct SDL_GameControllerButtonBind
 */

static void free_SDL_GameControllerButtonBind(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type SDL_GameControllerButtonBind_data_type = {
   "struct SDL_GameControllerButtonBind", free_SDL_GameControllerButtonBind
};

mrb_value
mruby_box_SDL_GameControllerButtonBind(mrb_state* mrb, struct SDL_GameControllerButtonBind *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, SDLGameControllerButtonBind_class(mrb), &SDL_GameControllerButtonBind_data_type, box));
}

mrb_value
mruby_giftwrap_SDL_GameControllerButtonBind(mrb_state* mrb, struct SDL_GameControllerButtonBind *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, SDLGameControllerButtonBind_class(mrb), &SDL_GameControllerButtonBind_data_type, box));
}

void
mruby_set_SDL_GameControllerButtonBind_data_ptr(mrb_value obj, struct SDL_GameControllerButtonBind *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_GameControllerButtonBind_data_type);
}

void
mruby_gift_SDL_GameControllerButtonBind_data_ptr(mrb_value obj, struct SDL_GameControllerButtonBind *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_GameControllerButtonBind_data_type);
}

struct SDL_GameControllerButtonBind *
mruby_unbox_SDL_GameControllerButtonBind(mrb_value boxed) {
  return (struct SDL_GameControllerButtonBind *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_SDLHapticCondition_TYPE
/*
 * Boxing implementation for struct SDL_HapticCondition
 */

static void free_SDL_HapticCondition(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type SDL_HapticCondition_data_type = {
   "struct SDL_HapticCondition", free_SDL_HapticCondition
};

mrb_value
mruby_box_SDL_HapticCondition(mrb_state* mrb, struct SDL_HapticCondition *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, SDLHapticCondition_class(mrb), &SDL_HapticCondition_data_type, box));
}

mrb_value
mruby_giftwrap_SDL_HapticCondition(mrb_state* mrb, struct SDL_HapticCondition *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, SDLHapticCondition_class(mrb), &SDL_HapticCondition_data_type, box));
}

void
mruby_set_SDL_HapticCondition_data_ptr(mrb_value obj, struct SDL_HapticCondition *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_HapticCondition_data_type);
}

void
mruby_gift_SDL_HapticCondition_data_ptr(mrb_value obj, struct SDL_HapticCondition *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_HapticCondition_data_type);
}

struct SDL_HapticCondition *
mruby_unbox_SDL_HapticCondition(mrb_value boxed) {
  return (struct SDL_HapticCondition *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_SDLHapticConstant_TYPE
/*
 * Boxing implementation for struct SDL_HapticConstant
 */

static void free_SDL_HapticConstant(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type SDL_HapticConstant_data_type = {
   "struct SDL_HapticConstant", free_SDL_HapticConstant
};

mrb_value
mruby_box_SDL_HapticConstant(mrb_state* mrb, struct SDL_HapticConstant *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, SDLHapticConstant_class(mrb), &SDL_HapticConstant_data_type, box));
}

mrb_value
mruby_giftwrap_SDL_HapticConstant(mrb_state* mrb, struct SDL_HapticConstant *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, SDLHapticConstant_class(mrb), &SDL_HapticConstant_data_type, box));
}

void
mruby_set_SDL_HapticConstant_data_ptr(mrb_value obj, struct SDL_HapticConstant *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_HapticConstant_data_type);
}

void
mruby_gift_SDL_HapticConstant_data_ptr(mrb_value obj, struct SDL_HapticConstant *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_HapticConstant_data_type);
}

struct SDL_HapticConstant *
mruby_unbox_SDL_HapticConstant(mrb_value boxed) {
  return (struct SDL_HapticConstant *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_SDLHapticCustom_TYPE
/*
 * Boxing implementation for struct SDL_HapticCustom
 */

static void free_SDL_HapticCustom(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type SDL_HapticCustom_data_type = {
   "struct SDL_HapticCustom", free_SDL_HapticCustom
};

mrb_value
mruby_box_SDL_HapticCustom(mrb_state* mrb, struct SDL_HapticCustom *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, SDLHapticCustom_class(mrb), &SDL_HapticCustom_data_type, box));
}

mrb_value
mruby_giftwrap_SDL_HapticCustom(mrb_state* mrb, struct SDL_HapticCustom *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, SDLHapticCustom_class(mrb), &SDL_HapticCustom_data_type, box));
}

void
mruby_set_SDL_HapticCustom_data_ptr(mrb_value obj, struct SDL_HapticCustom *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_HapticCustom_data_type);
}

void
mruby_gift_SDL_HapticCustom_data_ptr(mrb_value obj, struct SDL_HapticCustom *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_HapticCustom_data_type);
}

struct SDL_HapticCustom *
mruby_unbox_SDL_HapticCustom(mrb_value boxed) {
  return (struct SDL_HapticCustom *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_SDLHapticDirection_TYPE
/*
 * Boxing implementation for struct SDL_HapticDirection
 */

static void free_SDL_HapticDirection(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type SDL_HapticDirection_data_type = {
   "struct SDL_HapticDirection", free_SDL_HapticDirection
};

mrb_value
mruby_box_SDL_HapticDirection(mrb_state* mrb, struct SDL_HapticDirection *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, SDLHapticDirection_class(mrb), &SDL_HapticDirection_data_type, box));
}

mrb_value
mruby_giftwrap_SDL_HapticDirection(mrb_state* mrb, struct SDL_HapticDirection *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, SDLHapticDirection_class(mrb), &SDL_HapticDirection_data_type, box));
}

void
mruby_set_SDL_HapticDirection_data_ptr(mrb_value obj, struct SDL_HapticDirection *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_HapticDirection_data_type);
}

void
mruby_gift_SDL_HapticDirection_data_ptr(mrb_value obj, struct SDL_HapticDirection *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_HapticDirection_data_type);
}

struct SDL_HapticDirection *
mruby_unbox_SDL_HapticDirection(mrb_value boxed) {
  return (struct SDL_HapticDirection *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_SDLHapticLeftRight_TYPE
/*
 * Boxing implementation for struct SDL_HapticLeftRight
 */

static void free_SDL_HapticLeftRight(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type SDL_HapticLeftRight_data_type = {
   "struct SDL_HapticLeftRight", free_SDL_HapticLeftRight
};

mrb_value
mruby_box_SDL_HapticLeftRight(mrb_state* mrb, struct SDL_HapticLeftRight *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, SDLHapticLeftRight_class(mrb), &SDL_HapticLeftRight_data_type, box));
}

mrb_value
mruby_giftwrap_SDL_HapticLeftRight(mrb_state* mrb, struct SDL_HapticLeftRight *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, SDLHapticLeftRight_class(mrb), &SDL_HapticLeftRight_data_type, box));
}

void
mruby_set_SDL_HapticLeftRight_data_ptr(mrb_value obj, struct SDL_HapticLeftRight *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_HapticLeftRight_data_type);
}

void
mruby_gift_SDL_HapticLeftRight_data_ptr(mrb_value obj, struct SDL_HapticLeftRight *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_HapticLeftRight_data_type);
}

struct SDL_HapticLeftRight *
mruby_unbox_SDL_HapticLeftRight(mrb_value boxed) {
  return (struct SDL_HapticLeftRight *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_SDLHapticPeriodic_TYPE
/*
 * Boxing implementation for struct SDL_HapticPeriodic
 */

static void free_SDL_HapticPeriodic(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type SDL_HapticPeriodic_data_type = {
   "struct SDL_HapticPeriodic", free_SDL_HapticPeriodic
};

mrb_value
mruby_box_SDL_HapticPeriodic(mrb_state* mrb, struct SDL_HapticPeriodic *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, SDLHapticPeriodic_class(mrb), &SDL_HapticPeriodic_data_type, box));
}

mrb_value
mruby_giftwrap_SDL_HapticPeriodic(mrb_state* mrb, struct SDL_HapticPeriodic *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, SDLHapticPeriodic_class(mrb), &SDL_HapticPeriodic_data_type, box));
}

void
mruby_set_SDL_HapticPeriodic_data_ptr(mrb_value obj, struct SDL_HapticPeriodic *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_HapticPeriodic_data_type);
}

void
mruby_gift_SDL_HapticPeriodic_data_ptr(mrb_value obj, struct SDL_HapticPeriodic *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_HapticPeriodic_data_type);
}

struct SDL_HapticPeriodic *
mruby_unbox_SDL_HapticPeriodic(mrb_value boxed) {
  return (struct SDL_HapticPeriodic *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_SDLHapticRamp_TYPE
/*
 * Boxing implementation for struct SDL_HapticRamp
 */

static void free_SDL_HapticRamp(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type SDL_HapticRamp_data_type = {
   "struct SDL_HapticRamp", free_SDL_HapticRamp
};

mrb_value
mruby_box_SDL_HapticRamp(mrb_state* mrb, struct SDL_HapticRamp *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, SDLHapticRamp_class(mrb), &SDL_HapticRamp_data_type, box));
}

mrb_value
mruby_giftwrap_SDL_HapticRamp(mrb_state* mrb, struct SDL_HapticRamp *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, SDLHapticRamp_class(mrb), &SDL_HapticRamp_data_type, box));
}

void
mruby_set_SDL_HapticRamp_data_ptr(mrb_value obj, struct SDL_HapticRamp *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_HapticRamp_data_type);
}

void
mruby_gift_SDL_HapticRamp_data_ptr(mrb_value obj, struct SDL_HapticRamp *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_HapticRamp_data_type);
}

struct SDL_HapticRamp *
mruby_unbox_SDL_HapticRamp(mrb_value boxed) {
  return (struct SDL_HapticRamp *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_SDLJoyAxisEvent_TYPE
/*
 * Boxing implementation for struct SDL_JoyAxisEvent
 */

static void free_SDL_JoyAxisEvent(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->data != NULL) {
      free(box->data);
      box->data = NULL;
    }
  }
  free(box);
}

static const mrb_data_type SDL_JoyAxisEvent_data_type = {
   "struct SDL_JoyAxisEvent", free_SDL_JoyAxisEvent
};

mrb_value
mruby_box_SDL_JoyAxisEvent(mrb_state* mrb, struct SDL_JoyAxisEvent *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, SDLJoyAxisEvent_class(mrb), &SDL_JoyAxisEvent_data_type, box));
}

mrb_value
mruby_giftwrap_SDL_JoyAxisEvent(mrb_state* mrb, struct SDL_JoyAxisEvent *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, SDLJoyAxisEvent_class(mrb), &SDL_JoyAxisEvent_data_type, box));
}

void
mruby_set_SDL_JoyAxisEvent_data_ptr(mrb_value obj, struct SDL_JoyAxisEvent *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_JoyAxisEvent_data_type);
}

void
mruby_gift_SDL_JoyAxisEvent_data_ptr(mrb_value obj, struct SDL_JoyAxisEvent *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_JoyAxisEvent_data_type);
}

struct SDL_JoyAxisEvent *
mruby_unbox_SDL_JoyAxisEvent(mrb_value boxed) {
  return (struct SDL_JoyAxisEvent *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_SDLJoyBallEvent_TYPE
/*
 * Boxing implementation for struct SDL_JoyBallEvent
 */

static void free_SDL_JoyBallEvent(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->data != NULL) {
      free(box->data);
      box->data = NULL;
    }
  }
  free(box);
}

static const mrb_data_type SDL_JoyBallEvent_data_type = {
   "struct SDL_JoyBallEvent", free_SDL_JoyBallEvent
};

mrb_value
mruby_box_SDL_JoyBallEvent(mrb_state* mrb, struct SDL_JoyBallEvent *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, SDLJoyBallEvent_class(mrb), &SDL_JoyBallEvent_data_type, box));
}

mrb_value
mruby_giftwrap_SDL_JoyBallEvent(mrb_state* mrb, struct SDL_JoyBallEvent *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, SDLJoyBallEvent_class(mrb), &SDL_JoyBallEvent_data_type, box));
}

void
mruby_set_SDL_JoyBallEvent_data_ptr(mrb_value obj, struct SDL_JoyBallEvent *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_JoyBallEvent_data_type);
}

void
mruby_gift_SDL_JoyBallEvent_data_ptr(mrb_value obj, struct SDL_JoyBallEvent *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_JoyBallEvent_data_type);
}

struct SDL_JoyBallEvent *
mruby_unbox_SDL_JoyBallEvent(mrb_value boxed) {
  return (struct SDL_JoyBallEvent *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_SDLJoyButtonEvent_TYPE
/*
 * Boxing implementation for struct SDL_JoyButtonEvent
 */

static void free_SDL_JoyButtonEvent(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->data != NULL) {
      free(box->data);
      box->data = NULL;
    }
  }
  free(box);
}

static const mrb_data_type SDL_JoyButtonEvent_data_type = {
   "struct SDL_JoyButtonEvent", free_SDL_JoyButtonEvent
};

mrb_value
mruby_box_SDL_JoyButtonEvent(mrb_state* mrb, struct SDL_JoyButtonEvent *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, SDLJoyButtonEvent_class(mrb), &SDL_JoyButtonEvent_data_type, box));
}

mrb_value
mruby_giftwrap_SDL_JoyButtonEvent(mrb_state* mrb, struct SDL_JoyButtonEvent *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, SDLJoyButtonEvent_class(mrb), &SDL_JoyButtonEvent_data_type, box));
}

void
mruby_set_SDL_JoyButtonEvent_data_ptr(mrb_value obj, struct SDL_JoyButtonEvent *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_JoyButtonEvent_data_type);
}

void
mruby_gift_SDL_JoyButtonEvent_data_ptr(mrb_value obj, struct SDL_JoyButtonEvent *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_JoyButtonEvent_data_type);
}

struct SDL_JoyButtonEvent *
mruby_unbox_SDL_JoyButtonEvent(mrb_value boxed) {
  return (struct SDL_JoyButtonEvent *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_SDLJoyDeviceEvent_TYPE
/*
 * Boxing implementation for struct SDL_JoyDeviceEvent
 */

static void free_SDL_JoyDeviceEvent(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->data != NULL) {
      free(box->data);
      box->data = NULL;
    }
  }
  free(box);
}

static const mrb_data_type SDL_JoyDeviceEvent_data_type = {
   "struct SDL_JoyDeviceEvent", free_SDL_JoyDeviceEvent
};

mrb_value
mruby_box_SDL_JoyDeviceEvent(mrb_state* mrb, struct SDL_JoyDeviceEvent *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, SDLJoyDeviceEvent_class(mrb), &SDL_JoyDeviceEvent_data_type, box));
}

mrb_value
mruby_giftwrap_SDL_JoyDeviceEvent(mrb_state* mrb, struct SDL_JoyDeviceEvent *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, SDLJoyDeviceEvent_class(mrb), &SDL_JoyDeviceEvent_data_type, box));
}

void
mruby_set_SDL_JoyDeviceEvent_data_ptr(mrb_value obj, struct SDL_JoyDeviceEvent *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_JoyDeviceEvent_data_type);
}

void
mruby_gift_SDL_JoyDeviceEvent_data_ptr(mrb_value obj, struct SDL_JoyDeviceEvent *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_JoyDeviceEvent_data_type);
}

struct SDL_JoyDeviceEvent *
mruby_unbox_SDL_JoyDeviceEvent(mrb_value boxed) {
  return (struct SDL_JoyDeviceEvent *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_SDLJoyHatEvent_TYPE
/*
 * Boxing implementation for struct SDL_JoyHatEvent
 */

static void free_SDL_JoyHatEvent(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->data != NULL) {
      free(box->data);
      box->data = NULL;
    }
  }
  free(box);
}

static const mrb_data_type SDL_JoyHatEvent_data_type = {
   "struct SDL_JoyHatEvent", free_SDL_JoyHatEvent
};

mrb_value
mruby_box_SDL_JoyHatEvent(mrb_state* mrb, struct SDL_JoyHatEvent *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, SDLJoyHatEvent_class(mrb), &SDL_JoyHatEvent_data_type, box));
}

mrb_value
mruby_giftwrap_SDL_JoyHatEvent(mrb_state* mrb, struct SDL_JoyHatEvent *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, SDLJoyHatEvent_class(mrb), &SDL_JoyHatEvent_data_type, box));
}

void
mruby_set_SDL_JoyHatEvent_data_ptr(mrb_value obj, struct SDL_JoyHatEvent *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_JoyHatEvent_data_type);
}

void
mruby_gift_SDL_JoyHatEvent_data_ptr(mrb_value obj, struct SDL_JoyHatEvent *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_JoyHatEvent_data_type);
}

struct SDL_JoyHatEvent *
mruby_unbox_SDL_JoyHatEvent(mrb_value boxed) {
  return (struct SDL_JoyHatEvent *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_SDLKeyboardEvent_TYPE
/*
 * Boxing implementation for struct SDL_KeyboardEvent
 */

static void free_SDL_KeyboardEvent(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->data != NULL) {
      free(box->data);
      box->data = NULL;
    }
  }
  free(box);
}

static const mrb_data_type SDL_KeyboardEvent_data_type = {
   "struct SDL_KeyboardEvent", free_SDL_KeyboardEvent
};

mrb_value
mruby_box_SDL_KeyboardEvent(mrb_state* mrb, struct SDL_KeyboardEvent *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, SDLKeyboardEvent_class(mrb), &SDL_KeyboardEvent_data_type, box));
}

mrb_value
mruby_giftwrap_SDL_KeyboardEvent(mrb_state* mrb, struct SDL_KeyboardEvent *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, SDLKeyboardEvent_class(mrb), &SDL_KeyboardEvent_data_type, box));
}

void
mruby_set_SDL_KeyboardEvent_data_ptr(mrb_value obj, struct SDL_KeyboardEvent *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_KeyboardEvent_data_type);
}

void
mruby_gift_SDL_KeyboardEvent_data_ptr(mrb_value obj, struct SDL_KeyboardEvent *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_KeyboardEvent_data_type);
}

struct SDL_KeyboardEvent *
mruby_unbox_SDL_KeyboardEvent(mrb_value boxed) {
  return (struct SDL_KeyboardEvent *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_SDLKeysym_TYPE
/*
 * Boxing implementation for struct SDL_Keysym
 */

static void free_SDL_Keysym(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type SDL_Keysym_data_type = {
   "struct SDL_Keysym", free_SDL_Keysym
};

mrb_value
mruby_box_SDL_Keysym(mrb_state* mrb, struct SDL_Keysym *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, SDLKeysym_class(mrb), &SDL_Keysym_data_type, box));
}

mrb_value
mruby_giftwrap_SDL_Keysym(mrb_state* mrb, struct SDL_Keysym *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, SDLKeysym_class(mrb), &SDL_Keysym_data_type, box));
}

void
mruby_set_SDL_Keysym_data_ptr(mrb_value obj, struct SDL_Keysym *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_Keysym_data_type);
}

void
mruby_gift_SDL_Keysym_data_ptr(mrb_value obj, struct SDL_Keysym *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_Keysym_data_type);
}

struct SDL_Keysym *
mruby_unbox_SDL_Keysym(mrb_value boxed) {
  return (struct SDL_Keysym *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_SDLMouseButtonEvent_TYPE
/*
 * Boxing implementation for struct SDL_MouseButtonEvent
 */

static void free_SDL_MouseButtonEvent(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->data != NULL) {
      free(box->data);
      box->data = NULL;
    }
  }
  free(box);
}

static const mrb_data_type SDL_MouseButtonEvent_data_type = {
   "struct SDL_MouseButtonEvent", free_SDL_MouseButtonEvent
};

mrb_value
mruby_box_SDL_MouseButtonEvent(mrb_state* mrb, struct SDL_MouseButtonEvent *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, SDLMouseButtonEvent_class(mrb), &SDL_MouseButtonEvent_data_type, box));
}

mrb_value
mruby_giftwrap_SDL_MouseButtonEvent(mrb_state* mrb, struct SDL_MouseButtonEvent *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, SDLMouseButtonEvent_class(mrb), &SDL_MouseButtonEvent_data_type, box));
}

void
mruby_set_SDL_MouseButtonEvent_data_ptr(mrb_value obj, struct SDL_MouseButtonEvent *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_MouseButtonEvent_data_type);
}

void
mruby_gift_SDL_MouseButtonEvent_data_ptr(mrb_value obj, struct SDL_MouseButtonEvent *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_MouseButtonEvent_data_type);
}

struct SDL_MouseButtonEvent *
mruby_unbox_SDL_MouseButtonEvent(mrb_value boxed) {
  return (struct SDL_MouseButtonEvent *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_SDLMouseMotionEvent_TYPE
/*
 * Boxing implementation for struct SDL_MouseMotionEvent
 */

static void free_SDL_MouseMotionEvent(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->data != NULL) {
      free(box->data);
      box->data = NULL;
    }
  }
  free(box);
}

static const mrb_data_type SDL_MouseMotionEvent_data_type = {
   "struct SDL_MouseMotionEvent", free_SDL_MouseMotionEvent
};

mrb_value
mruby_box_SDL_MouseMotionEvent(mrb_state* mrb, struct SDL_MouseMotionEvent *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, SDLMouseMotionEvent_class(mrb), &SDL_MouseMotionEvent_data_type, box));
}

mrb_value
mruby_giftwrap_SDL_MouseMotionEvent(mrb_state* mrb, struct SDL_MouseMotionEvent *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, SDLMouseMotionEvent_class(mrb), &SDL_MouseMotionEvent_data_type, box));
}

void
mruby_set_SDL_MouseMotionEvent_data_ptr(mrb_value obj, struct SDL_MouseMotionEvent *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_MouseMotionEvent_data_type);
}

void
mruby_gift_SDL_MouseMotionEvent_data_ptr(mrb_value obj, struct SDL_MouseMotionEvent *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_MouseMotionEvent_data_type);
}

struct SDL_MouseMotionEvent *
mruby_unbox_SDL_MouseMotionEvent(mrb_value boxed) {
  return (struct SDL_MouseMotionEvent *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_SDLMouseWheelEvent_TYPE
/*
 * Boxing implementation for struct SDL_MouseWheelEvent
 */

static void free_SDL_MouseWheelEvent(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->data != NULL) {
      free(box->data);
      box->data = NULL;
    }
  }
  free(box);
}

static const mrb_data_type SDL_MouseWheelEvent_data_type = {
   "struct SDL_MouseWheelEvent", free_SDL_MouseWheelEvent
};

mrb_value
mruby_box_SDL_MouseWheelEvent(mrb_state* mrb, struct SDL_MouseWheelEvent *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, SDLMouseWheelEvent_class(mrb), &SDL_MouseWheelEvent_data_type, box));
}

mrb_value
mruby_giftwrap_SDL_MouseWheelEvent(mrb_state* mrb, struct SDL_MouseWheelEvent *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, SDLMouseWheelEvent_class(mrb), &SDL_MouseWheelEvent_data_type, box));
}

void
mruby_set_SDL_MouseWheelEvent_data_ptr(mrb_value obj, struct SDL_MouseWheelEvent *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_MouseWheelEvent_data_type);
}

void
mruby_gift_SDL_MouseWheelEvent_data_ptr(mrb_value obj, struct SDL_MouseWheelEvent *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_MouseWheelEvent_data_type);
}

struct SDL_MouseWheelEvent *
mruby_unbox_SDL_MouseWheelEvent(mrb_value boxed) {
  return (struct SDL_MouseWheelEvent *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_SDLMultiGestureEvent_TYPE
/*
 * Boxing implementation for struct SDL_MultiGestureEvent
 */

static void free_SDL_MultiGestureEvent(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->data != NULL) {
      free(box->data);
      box->data = NULL;
    }
  }
  free(box);
}

static const mrb_data_type SDL_MultiGestureEvent_data_type = {
   "struct SDL_MultiGestureEvent", free_SDL_MultiGestureEvent
};

mrb_value
mruby_box_SDL_MultiGestureEvent(mrb_state* mrb, struct SDL_MultiGestureEvent *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, SDLMultiGestureEvent_class(mrb), &SDL_MultiGestureEvent_data_type, box));
}

mrb_value
mruby_giftwrap_SDL_MultiGestureEvent(mrb_state* mrb, struct SDL_MultiGestureEvent *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, SDLMultiGestureEvent_class(mrb), &SDL_MultiGestureEvent_data_type, box));
}

void
mruby_set_SDL_MultiGestureEvent_data_ptr(mrb_value obj, struct SDL_MultiGestureEvent *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_MultiGestureEvent_data_type);
}

void
mruby_gift_SDL_MultiGestureEvent_data_ptr(mrb_value obj, struct SDL_MultiGestureEvent *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_MultiGestureEvent_data_type);
}

struct SDL_MultiGestureEvent *
mruby_unbox_SDL_MultiGestureEvent(mrb_value boxed) {
  return (struct SDL_MultiGestureEvent *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_SDLOSEvent_TYPE
/*
 * Boxing implementation for struct SDL_OSEvent
 */

static void free_SDL_OSEvent(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->data != NULL) {
      free(box->data);
      box->data = NULL;
    }
  }
  free(box);
}

static const mrb_data_type SDL_OSEvent_data_type = {
   "struct SDL_OSEvent", free_SDL_OSEvent
};

mrb_value
mruby_box_SDL_OSEvent(mrb_state* mrb, struct SDL_OSEvent *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, SDLOSEvent_class(mrb), &SDL_OSEvent_data_type, box));
}

mrb_value
mruby_giftwrap_SDL_OSEvent(mrb_state* mrb, struct SDL_OSEvent *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, SDLOSEvent_class(mrb), &SDL_OSEvent_data_type, box));
}

void
mruby_set_SDL_OSEvent_data_ptr(mrb_value obj, struct SDL_OSEvent *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_OSEvent_data_type);
}

void
mruby_gift_SDL_OSEvent_data_ptr(mrb_value obj, struct SDL_OSEvent *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_OSEvent_data_type);
}

struct SDL_OSEvent *
mruby_unbox_SDL_OSEvent(mrb_value boxed) {
  return (struct SDL_OSEvent *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_SDLPalette_TYPE
/*
 * Boxing implementation for struct SDL_Palette
 */

static void free_SDL_Palette(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type SDL_Palette_data_type = {
   "struct SDL_Palette", free_SDL_Palette
};

mrb_value
mruby_box_SDL_Palette(mrb_state* mrb, struct SDL_Palette *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, SDLPalette_class(mrb), &SDL_Palette_data_type, box));
}

mrb_value
mruby_giftwrap_SDL_Palette(mrb_state* mrb, struct SDL_Palette *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, SDLPalette_class(mrb), &SDL_Palette_data_type, box));
}

void
mruby_set_SDL_Palette_data_ptr(mrb_value obj, struct SDL_Palette *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_Palette_data_type);
}

void
mruby_gift_SDL_Palette_data_ptr(mrb_value obj, struct SDL_Palette *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_Palette_data_type);
}

struct SDL_Palette *
mruby_unbox_SDL_Palette(mrb_value boxed) {
  return (struct SDL_Palette *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_SDLPixelFormat_TYPE
/*
 * Boxing implementation for struct SDL_PixelFormat
 */

static void free_SDL_PixelFormat(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type SDL_PixelFormat_data_type = {
   "struct SDL_PixelFormat", free_SDL_PixelFormat
};

mrb_value
mruby_box_SDL_PixelFormat(mrb_state* mrb, struct SDL_PixelFormat *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, SDLPixelFormat_class(mrb), &SDL_PixelFormat_data_type, box));
}

mrb_value
mruby_giftwrap_SDL_PixelFormat(mrb_state* mrb, struct SDL_PixelFormat *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, SDLPixelFormat_class(mrb), &SDL_PixelFormat_data_type, box));
}

void
mruby_set_SDL_PixelFormat_data_ptr(mrb_value obj, struct SDL_PixelFormat *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_PixelFormat_data_type);
}

void
mruby_gift_SDL_PixelFormat_data_ptr(mrb_value obj, struct SDL_PixelFormat *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_PixelFormat_data_type);
}

struct SDL_PixelFormat *
mruby_unbox_SDL_PixelFormat(mrb_value boxed) {
  return (struct SDL_PixelFormat *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_SDLPoint_TYPE
/*
 * Boxing implementation for struct SDL_Point
 */

static void free_SDL_Point(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type SDL_Point_data_type = {
   "struct SDL_Point", free_SDL_Point
};

mrb_value
mruby_box_SDL_Point(mrb_state* mrb, struct SDL_Point *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, SDLPoint_class(mrb), &SDL_Point_data_type, box));
}

mrb_value
mruby_giftwrap_SDL_Point(mrb_state* mrb, struct SDL_Point *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, SDLPoint_class(mrb), &SDL_Point_data_type, box));
}

void
mruby_set_SDL_Point_data_ptr(mrb_value obj, struct SDL_Point *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_Point_data_type);
}

void
mruby_gift_SDL_Point_data_ptr(mrb_value obj, struct SDL_Point *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_Point_data_type);
}

struct SDL_Point *
mruby_unbox_SDL_Point(mrb_value boxed) {
  return (struct SDL_Point *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_SDLQuitEvent_TYPE
/*
 * Boxing implementation for struct SDL_QuitEvent
 */

static void free_SDL_QuitEvent(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->data != NULL) {
      free(box->data);
      box->data = NULL;
    }
  }
  free(box);
}

static const mrb_data_type SDL_QuitEvent_data_type = {
   "struct SDL_QuitEvent", free_SDL_QuitEvent
};

mrb_value
mruby_box_SDL_QuitEvent(mrb_state* mrb, struct SDL_QuitEvent *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, SDLQuitEvent_class(mrb), &SDL_QuitEvent_data_type, box));
}

mrb_value
mruby_giftwrap_SDL_QuitEvent(mrb_state* mrb, struct SDL_QuitEvent *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, SDLQuitEvent_class(mrb), &SDL_QuitEvent_data_type, box));
}

void
mruby_set_SDL_QuitEvent_data_ptr(mrb_value obj, struct SDL_QuitEvent *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_QuitEvent_data_type);
}

void
mruby_gift_SDL_QuitEvent_data_ptr(mrb_value obj, struct SDL_QuitEvent *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_QuitEvent_data_type);
}

struct SDL_QuitEvent *
mruby_unbox_SDL_QuitEvent(mrb_value boxed) {
  return (struct SDL_QuitEvent *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_SDLRWops_TYPE
/*
 * Boxing implementation for struct SDL_RWops
 */

static void free_SDL_RWops(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type SDL_RWops_data_type = {
   "struct SDL_RWops", free_SDL_RWops
};

mrb_value
mruby_box_SDL_RWops(mrb_state* mrb, struct SDL_RWops *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, SDLRWops_class(mrb), &SDL_RWops_data_type, box));
}

mrb_value
mruby_giftwrap_SDL_RWops(mrb_state* mrb, struct SDL_RWops *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, SDLRWops_class(mrb), &SDL_RWops_data_type, box));
}

void
mruby_set_SDL_RWops_data_ptr(mrb_value obj, struct SDL_RWops *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_RWops_data_type);
}

void
mruby_gift_SDL_RWops_data_ptr(mrb_value obj, struct SDL_RWops *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_RWops_data_type);
}

struct SDL_RWops *
mruby_unbox_SDL_RWops(mrb_value boxed) {
  return (struct SDL_RWops *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_SDLRect_TYPE
/*
 * Boxing implementation for struct SDL_Rect
 */

static void free_SDL_Rect(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type SDL_Rect_data_type = {
   "struct SDL_Rect", free_SDL_Rect
};

mrb_value
mruby_box_SDL_Rect(mrb_state* mrb, struct SDL_Rect *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, SDLRect_class(mrb), &SDL_Rect_data_type, box));
}

mrb_value
mruby_giftwrap_SDL_Rect(mrb_state* mrb, struct SDL_Rect *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, SDLRect_class(mrb), &SDL_Rect_data_type, box));
}

void
mruby_set_SDL_Rect_data_ptr(mrb_value obj, struct SDL_Rect *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_Rect_data_type);
}

void
mruby_gift_SDL_Rect_data_ptr(mrb_value obj, struct SDL_Rect *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_Rect_data_type);
}

struct SDL_Rect *
mruby_unbox_SDL_Rect(mrb_value boxed) {
  return (struct SDL_Rect *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_SDLRenderer_TYPE
/*
 * Boxing implementation for struct SDL_Renderer
 */

static void free_SDL_Renderer(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->obj != NULL) {
      SDL_DestroyRenderer((SDL_Renderer*)box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type SDL_Renderer_data_type = {
   "struct SDL_Renderer", free_SDL_Renderer
};

mrb_value
mruby_box_SDL_Renderer(mrb_state* mrb, struct SDL_Renderer *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, SDLRenderer_class(mrb), &SDL_Renderer_data_type, box));
}

mrb_value
mruby_giftwrap_SDL_Renderer(mrb_state* mrb, struct SDL_Renderer *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, SDLRenderer_class(mrb), &SDL_Renderer_data_type, box));
}

void
mruby_set_SDL_Renderer_data_ptr(mrb_value obj, struct SDL_Renderer *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_Renderer_data_type);
}

void
mruby_gift_SDL_Renderer_data_ptr(mrb_value obj, struct SDL_Renderer *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_Renderer_data_type);
}

struct SDL_Renderer *
mruby_unbox_SDL_Renderer(mrb_value boxed) {
  return (struct SDL_Renderer *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_SDLRendererInfo_TYPE
/*
 * Boxing implementation for struct SDL_RendererInfo
 */

static void free_SDL_RendererInfo(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type SDL_RendererInfo_data_type = {
   "struct SDL_RendererInfo", free_SDL_RendererInfo
};

mrb_value
mruby_box_SDL_RendererInfo(mrb_state* mrb, struct SDL_RendererInfo *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, SDLRendererInfo_class(mrb), &SDL_RendererInfo_data_type, box));
}

mrb_value
mruby_giftwrap_SDL_RendererInfo(mrb_state* mrb, struct SDL_RendererInfo *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, SDLRendererInfo_class(mrb), &SDL_RendererInfo_data_type, box));
}

void
mruby_set_SDL_RendererInfo_data_ptr(mrb_value obj, struct SDL_RendererInfo *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_RendererInfo_data_type);
}

void
mruby_gift_SDL_RendererInfo_data_ptr(mrb_value obj, struct SDL_RendererInfo *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_RendererInfo_data_type);
}

struct SDL_RendererInfo *
mruby_unbox_SDL_RendererInfo(mrb_value boxed) {
  return (struct SDL_RendererInfo *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_SDLSurface_TYPE
/*
 * Boxing implementation for struct SDL_Surface
 */

static void free_SDL_Surface(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type SDL_Surface_data_type = {
   "struct SDL_Surface", free_SDL_Surface
};

mrb_value
mruby_box_SDL_Surface(mrb_state* mrb, struct SDL_Surface *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, SDLSurface_class(mrb), &SDL_Surface_data_type, box));
}

mrb_value
mruby_giftwrap_SDL_Surface(mrb_state* mrb, struct SDL_Surface *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, SDLSurface_class(mrb), &SDL_Surface_data_type, box));
}

void
mruby_set_SDL_Surface_data_ptr(mrb_value obj, struct SDL_Surface *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_Surface_data_type);
}

void
mruby_gift_SDL_Surface_data_ptr(mrb_value obj, struct SDL_Surface *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_Surface_data_type);
}

struct SDL_Surface *
mruby_unbox_SDL_Surface(mrb_value boxed) {
  return (struct SDL_Surface *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_SDLSysWMEvent_TYPE
/*
 * Boxing implementation for struct SDL_SysWMEvent
 */

static void free_SDL_SysWMEvent(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->data != NULL) {
      free(box->data);
      box->data = NULL;
    }
  }
  free(box);
}

static const mrb_data_type SDL_SysWMEvent_data_type = {
   "struct SDL_SysWMEvent", free_SDL_SysWMEvent
};

mrb_value
mruby_box_SDL_SysWMEvent(mrb_state* mrb, struct SDL_SysWMEvent *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, SDLSysWMEvent_class(mrb), &SDL_SysWMEvent_data_type, box));
}

mrb_value
mruby_giftwrap_SDL_SysWMEvent(mrb_state* mrb, struct SDL_SysWMEvent *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, SDLSysWMEvent_class(mrb), &SDL_SysWMEvent_data_type, box));
}

void
mruby_set_SDL_SysWMEvent_data_ptr(mrb_value obj, struct SDL_SysWMEvent *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_SysWMEvent_data_type);
}

void
mruby_gift_SDL_SysWMEvent_data_ptr(mrb_value obj, struct SDL_SysWMEvent *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_SysWMEvent_data_type);
}

struct SDL_SysWMEvent *
mruby_unbox_SDL_SysWMEvent(mrb_value boxed) {
  return (struct SDL_SysWMEvent *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_SDLSysWMinfo_TYPE
/*
 * Boxing implementation for struct SDL_SysWMinfo
 */

static void free_SDL_SysWMinfo(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type SDL_SysWMinfo_data_type = {
   "struct SDL_SysWMinfo", free_SDL_SysWMinfo
};

mrb_value
mruby_box_SDL_SysWMinfo(mrb_state* mrb, struct SDL_SysWMinfo *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, SDLSysWMinfo_class(mrb), &SDL_SysWMinfo_data_type, box));
}

mrb_value
mruby_giftwrap_SDL_SysWMinfo(mrb_state* mrb, struct SDL_SysWMinfo *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, SDLSysWMinfo_class(mrb), &SDL_SysWMinfo_data_type, box));
}

void
mruby_set_SDL_SysWMinfo_data_ptr(mrb_value obj, struct SDL_SysWMinfo *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_SysWMinfo_data_type);
}

void
mruby_gift_SDL_SysWMinfo_data_ptr(mrb_value obj, struct SDL_SysWMinfo *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_SysWMinfo_data_type);
}

struct SDL_SysWMinfo *
mruby_unbox_SDL_SysWMinfo(mrb_value boxed) {
  return (struct SDL_SysWMinfo *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_SDLSysWMmsg_TYPE
/*
 * Boxing implementation for struct SDL_SysWMmsg
 */

static void free_SDL_SysWMmsg(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type SDL_SysWMmsg_data_type = {
   "struct SDL_SysWMmsg", free_SDL_SysWMmsg
};

mrb_value
mruby_box_SDL_SysWMmsg(mrb_state* mrb, struct SDL_SysWMmsg *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, SDLSysWMmsg_class(mrb), &SDL_SysWMmsg_data_type, box));
}

mrb_value
mruby_giftwrap_SDL_SysWMmsg(mrb_state* mrb, struct SDL_SysWMmsg *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, SDLSysWMmsg_class(mrb), &SDL_SysWMmsg_data_type, box));
}

void
mruby_set_SDL_SysWMmsg_data_ptr(mrb_value obj, struct SDL_SysWMmsg *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_SysWMmsg_data_type);
}

void
mruby_gift_SDL_SysWMmsg_data_ptr(mrb_value obj, struct SDL_SysWMmsg *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_SysWMmsg_data_type);
}

struct SDL_SysWMmsg *
mruby_unbox_SDL_SysWMmsg(mrb_value boxed) {
  return (struct SDL_SysWMmsg *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_SDLTextEditingEvent_TYPE
/*
 * Boxing implementation for struct SDL_TextEditingEvent
 */

static void free_SDL_TextEditingEvent(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->data != NULL) {
      free(box->data);
      box->data = NULL;
    }
  }
  free(box);
}

static const mrb_data_type SDL_TextEditingEvent_data_type = {
   "struct SDL_TextEditingEvent", free_SDL_TextEditingEvent
};

mrb_value
mruby_box_SDL_TextEditingEvent(mrb_state* mrb, struct SDL_TextEditingEvent *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, SDLTextEditingEvent_class(mrb), &SDL_TextEditingEvent_data_type, box));
}

mrb_value
mruby_giftwrap_SDL_TextEditingEvent(mrb_state* mrb, struct SDL_TextEditingEvent *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, SDLTextEditingEvent_class(mrb), &SDL_TextEditingEvent_data_type, box));
}

void
mruby_set_SDL_TextEditingEvent_data_ptr(mrb_value obj, struct SDL_TextEditingEvent *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_TextEditingEvent_data_type);
}

void
mruby_gift_SDL_TextEditingEvent_data_ptr(mrb_value obj, struct SDL_TextEditingEvent *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_TextEditingEvent_data_type);
}

struct SDL_TextEditingEvent *
mruby_unbox_SDL_TextEditingEvent(mrb_value boxed) {
  return (struct SDL_TextEditingEvent *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_SDLTextInputEvent_TYPE
/*
 * Boxing implementation for struct SDL_TextInputEvent
 */

static void free_SDL_TextInputEvent(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->data != NULL) {
      free(box->data);
      box->data = NULL;
    }
  }
  free(box);
}

static const mrb_data_type SDL_TextInputEvent_data_type = {
   "struct SDL_TextInputEvent", free_SDL_TextInputEvent
};

mrb_value
mruby_box_SDL_TextInputEvent(mrb_state* mrb, struct SDL_TextInputEvent *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, SDLTextInputEvent_class(mrb), &SDL_TextInputEvent_data_type, box));
}

mrb_value
mruby_giftwrap_SDL_TextInputEvent(mrb_state* mrb, struct SDL_TextInputEvent *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, SDLTextInputEvent_class(mrb), &SDL_TextInputEvent_data_type, box));
}

void
mruby_set_SDL_TextInputEvent_data_ptr(mrb_value obj, struct SDL_TextInputEvent *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_TextInputEvent_data_type);
}

void
mruby_gift_SDL_TextInputEvent_data_ptr(mrb_value obj, struct SDL_TextInputEvent *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_TextInputEvent_data_type);
}

struct SDL_TextInputEvent *
mruby_unbox_SDL_TextInputEvent(mrb_value boxed) {
  return (struct SDL_TextInputEvent *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_SDLTexture_TYPE
/*
 * Boxing implementation for struct SDL_Texture
 */

static void free_SDL_Texture(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type SDL_Texture_data_type = {
   "struct SDL_Texture", free_SDL_Texture
};

mrb_value
mruby_box_SDL_Texture(mrb_state* mrb, struct SDL_Texture *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, SDLTexture_class(mrb), &SDL_Texture_data_type, box));
}

mrb_value
mruby_giftwrap_SDL_Texture(mrb_state* mrb, struct SDL_Texture *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, SDLTexture_class(mrb), &SDL_Texture_data_type, box));
}

void
mruby_set_SDL_Texture_data_ptr(mrb_value obj, struct SDL_Texture *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_Texture_data_type);
}

void
mruby_gift_SDL_Texture_data_ptr(mrb_value obj, struct SDL_Texture *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_Texture_data_type);
}

struct SDL_Texture *
mruby_unbox_SDL_Texture(mrb_value boxed) {
  return (struct SDL_Texture *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_SDLThread_TYPE
/*
 * Boxing implementation for struct SDL_Thread
 */

static void free_SDL_Thread(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type SDL_Thread_data_type = {
   "struct SDL_Thread", free_SDL_Thread
};

mrb_value
mruby_box_SDL_Thread(mrb_state* mrb, struct SDL_Thread *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, SDLThread_class(mrb), &SDL_Thread_data_type, box));
}

mrb_value
mruby_giftwrap_SDL_Thread(mrb_state* mrb, struct SDL_Thread *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, SDLThread_class(mrb), &SDL_Thread_data_type, box));
}

void
mruby_set_SDL_Thread_data_ptr(mrb_value obj, struct SDL_Thread *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_Thread_data_type);
}

void
mruby_gift_SDL_Thread_data_ptr(mrb_value obj, struct SDL_Thread *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_Thread_data_type);
}

struct SDL_Thread *
mruby_unbox_SDL_Thread(mrb_value boxed) {
  return (struct SDL_Thread *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_SDLTouchFingerEvent_TYPE
/*
 * Boxing implementation for struct SDL_TouchFingerEvent
 */

static void free_SDL_TouchFingerEvent(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->data != NULL) {
      free(box->data);
      box->data = NULL;
    }
  }
  free(box);
}

static const mrb_data_type SDL_TouchFingerEvent_data_type = {
   "struct SDL_TouchFingerEvent", free_SDL_TouchFingerEvent
};

mrb_value
mruby_box_SDL_TouchFingerEvent(mrb_state* mrb, struct SDL_TouchFingerEvent *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, SDLTouchFingerEvent_class(mrb), &SDL_TouchFingerEvent_data_type, box));
}

mrb_value
mruby_giftwrap_SDL_TouchFingerEvent(mrb_state* mrb, struct SDL_TouchFingerEvent *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, SDLTouchFingerEvent_class(mrb), &SDL_TouchFingerEvent_data_type, box));
}

void
mruby_set_SDL_TouchFingerEvent_data_ptr(mrb_value obj, struct SDL_TouchFingerEvent *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_TouchFingerEvent_data_type);
}

void
mruby_gift_SDL_TouchFingerEvent_data_ptr(mrb_value obj, struct SDL_TouchFingerEvent *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_TouchFingerEvent_data_type);
}

struct SDL_TouchFingerEvent *
mruby_unbox_SDL_TouchFingerEvent(mrb_value boxed) {
  return (struct SDL_TouchFingerEvent *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_SDLUserEvent_TYPE
/*
 * Boxing implementation for struct SDL_UserEvent
 */

static void free_SDL_UserEvent(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->data != NULL) {
      free(box->data);
      box->data = NULL;
    }
  }
  free(box);
}

static const mrb_data_type SDL_UserEvent_data_type = {
   "struct SDL_UserEvent", free_SDL_UserEvent
};

mrb_value
mruby_box_SDL_UserEvent(mrb_state* mrb, struct SDL_UserEvent *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, SDLUserEvent_class(mrb), &SDL_UserEvent_data_type, box));
}

mrb_value
mruby_giftwrap_SDL_UserEvent(mrb_state* mrb, struct SDL_UserEvent *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, SDLUserEvent_class(mrb), &SDL_UserEvent_data_type, box));
}

void
mruby_set_SDL_UserEvent_data_ptr(mrb_value obj, struct SDL_UserEvent *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_UserEvent_data_type);
}

void
mruby_gift_SDL_UserEvent_data_ptr(mrb_value obj, struct SDL_UserEvent *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_UserEvent_data_type);
}

struct SDL_UserEvent *
mruby_unbox_SDL_UserEvent(mrb_value boxed) {
  return (struct SDL_UserEvent *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_SDLWindow_TYPE
/*
 * Boxing implementation for struct SDL_Window
 */

static void free_SDL_Window(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->obj != NULL) {
      SDL_DestroyWindow((SDL_Window*)box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type SDL_Window_data_type = {
   "struct SDL_Window", free_SDL_Window
};

mrb_value
mruby_box_SDL_Window(mrb_state* mrb, struct SDL_Window *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, SDLWindow_class(mrb), &SDL_Window_data_type, box));
}

mrb_value
mruby_giftwrap_SDL_Window(mrb_state* mrb, struct SDL_Window *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, SDLWindow_class(mrb), &SDL_Window_data_type, box));
}

void
mruby_set_SDL_Window_data_ptr(mrb_value obj, struct SDL_Window *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_Window_data_type);
}

void
mruby_gift_SDL_Window_data_ptr(mrb_value obj, struct SDL_Window *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_Window_data_type);
}

struct SDL_Window *
mruby_unbox_SDL_Window(mrb_value boxed) {
  return (struct SDL_Window *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_SDLWindowEvent_TYPE
/*
 * Boxing implementation for struct SDL_WindowEvent
 */

static void free_SDL_WindowEvent(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->data != NULL) {
      free(box->data);
      box->data = NULL;
    }
  }
  free(box);
}

static const mrb_data_type SDL_WindowEvent_data_type = {
   "struct SDL_WindowEvent", free_SDL_WindowEvent
};

mrb_value
mruby_box_SDL_WindowEvent(mrb_state* mrb, struct SDL_WindowEvent *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, SDLWindowEvent_class(mrb), &SDL_WindowEvent_data_type, box));
}

mrb_value
mruby_giftwrap_SDL_WindowEvent(mrb_state* mrb, struct SDL_WindowEvent *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, SDLWindowEvent_class(mrb), &SDL_WindowEvent_data_type, box));
}

void
mruby_set_SDL_WindowEvent_data_ptr(mrb_value obj, struct SDL_WindowEvent *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_WindowEvent_data_type);
}

void
mruby_gift_SDL_WindowEvent_data_ptr(mrb_value obj, struct SDL_WindowEvent *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_WindowEvent_data_type);
}

struct SDL_WindowEvent *
mruby_unbox_SDL_WindowEvent(mrb_value boxed) {
  return (struct SDL_WindowEvent *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_SDLWindowShapeMode_TYPE
/*
 * Boxing implementation for struct SDL_WindowShapeMode
 */

static void free_SDL_WindowShapeMode(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type SDL_WindowShapeMode_data_type = {
   "struct SDL_WindowShapeMode", free_SDL_WindowShapeMode
};

mrb_value
mruby_box_SDL_WindowShapeMode(mrb_state* mrb, struct SDL_WindowShapeMode *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, SDLWindowShapeMode_class(mrb), &SDL_WindowShapeMode_data_type, box));
}

mrb_value
mruby_giftwrap_SDL_WindowShapeMode(mrb_state* mrb, struct SDL_WindowShapeMode *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, SDLWindowShapeMode_class(mrb), &SDL_WindowShapeMode_data_type, box));
}

void
mruby_set_SDL_WindowShapeMode_data_ptr(mrb_value obj, struct SDL_WindowShapeMode *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_WindowShapeMode_data_type);
}

void
mruby_gift_SDL_WindowShapeMode_data_ptr(mrb_value obj, struct SDL_WindowShapeMode *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_WindowShapeMode_data_type);
}

struct SDL_WindowShapeMode *
mruby_unbox_SDL_WindowShapeMode(mrb_value boxed) {
  return (struct SDL_WindowShapeMode *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_SDLAssertData_TYPE
/*
 * Boxing implementation for struct SDL_assert_data
 */

static void free_SDL_assert_data(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type SDL_assert_data_data_type = {
   "struct SDL_assert_data", free_SDL_assert_data
};

mrb_value
mruby_box_SDL_assert_data(mrb_state* mrb, struct SDL_assert_data *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, SDLAssertData_class(mrb), &SDL_assert_data_data_type, box));
}

mrb_value
mruby_giftwrap_SDL_assert_data(mrb_state* mrb, struct SDL_assert_data *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, SDLAssertData_class(mrb), &SDL_assert_data_data_type, box));
}

void
mruby_set_SDL_assert_data_data_ptr(mrb_value obj, struct SDL_assert_data *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_assert_data_data_type);
}

void
mruby_gift_SDL_assert_data_data_ptr(mrb_value obj, struct SDL_assert_data *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_assert_data_data_type);
}

struct SDL_assert_data *
mruby_unbox_SDL_assert_data(mrb_value boxed) {
  return (struct SDL_assert_data *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_SDLCond_TYPE
/*
 * Boxing implementation for struct SDL_cond
 */

static void free_SDL_cond(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type SDL_cond_data_type = {
   "struct SDL_cond", free_SDL_cond
};

mrb_value
mruby_box_SDL_cond(mrb_state* mrb, struct SDL_cond *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, SDLCond_class(mrb), &SDL_cond_data_type, box));
}

mrb_value
mruby_giftwrap_SDL_cond(mrb_state* mrb, struct SDL_cond *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, SDLCond_class(mrb), &SDL_cond_data_type, box));
}

void
mruby_set_SDL_cond_data_ptr(mrb_value obj, struct SDL_cond *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_cond_data_type);
}

void
mruby_gift_SDL_cond_data_ptr(mrb_value obj, struct SDL_cond *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_cond_data_type);
}

struct SDL_cond *
mruby_unbox_SDL_cond(mrb_value boxed) {
  return (struct SDL_cond *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_SDLMutex_TYPE
/*
 * Boxing implementation for struct SDL_mutex
 */

static void free_SDL_mutex(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type SDL_mutex_data_type = {
   "struct SDL_mutex", free_SDL_mutex
};

mrb_value
mruby_box_SDL_mutex(mrb_state* mrb, struct SDL_mutex *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, SDLMutex_class(mrb), &SDL_mutex_data_type, box));
}

mrb_value
mruby_giftwrap_SDL_mutex(mrb_state* mrb, struct SDL_mutex *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, SDLMutex_class(mrb), &SDL_mutex_data_type, box));
}

void
mruby_set_SDL_mutex_data_ptr(mrb_value obj, struct SDL_mutex *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_mutex_data_type);
}

void
mruby_gift_SDL_mutex_data_ptr(mrb_value obj, struct SDL_mutex *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_mutex_data_type);
}

struct SDL_mutex *
mruby_unbox_SDL_mutex(mrb_value boxed) {
  return (struct SDL_mutex *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_SDLSemaphore_TYPE
/*
 * Boxing implementation for struct SDL_semaphore
 */

static void free_SDL_semaphore(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type SDL_semaphore_data_type = {
   "struct SDL_semaphore", free_SDL_semaphore
};

mrb_value
mruby_box_SDL_semaphore(mrb_state* mrb, struct SDL_semaphore *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, SDLSemaphore_class(mrb), &SDL_semaphore_data_type, box));
}

mrb_value
mruby_giftwrap_SDL_semaphore(mrb_state* mrb, struct SDL_semaphore *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, SDLSemaphore_class(mrb), &SDL_semaphore_data_type, box));
}

void
mruby_set_SDL_semaphore_data_ptr(mrb_value obj, struct SDL_semaphore *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_semaphore_data_type);
}

void
mruby_gift_SDL_semaphore_data_ptr(mrb_value obj, struct SDL_semaphore *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_semaphore_data_type);
}

struct SDL_semaphore *
mruby_unbox_SDL_semaphore(mrb_value boxed) {
  return (struct SDL_semaphore *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_SDLVersion_TYPE
/*
 * Boxing implementation for struct SDL_version
 */

static void free_SDL_version(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type SDL_version_data_type = {
   "struct SDL_version", free_SDL_version
};

mrb_value
mruby_box_SDL_version(mrb_state* mrb, struct SDL_version *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, SDLVersion_class(mrb), &SDL_version_data_type, box));
}

mrb_value
mruby_giftwrap_SDL_version(mrb_state* mrb, struct SDL_version *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, SDLVersion_class(mrb), &SDL_version_data_type, box));
}

void
mruby_set_SDL_version_data_ptr(mrb_value obj, struct SDL_version *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_version_data_type);
}

void
mruby_gift_SDL_version_data_ptr(mrb_value obj, struct SDL_version *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SDL_version_data_type);
}

struct SDL_version *
mruby_unbox_SDL_version(mrb_value boxed) {
  return (struct SDL_version *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_NSWindow_TYPE
/*
 * Boxing implementation for struct _NSWindow
 */

static void free__NSWindow(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type _NSWindow_data_type = {
   "struct _NSWindow", free__NSWindow
};

mrb_value
mruby_box__NSWindow(mrb_state* mrb, struct _NSWindow *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, NSWindow_class(mrb), &_NSWindow_data_type, box));
}

mrb_value
mruby_giftwrap__NSWindow(mrb_state* mrb, struct _NSWindow *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, NSWindow_class(mrb), &_NSWindow_data_type, box));
}

void
mruby_set__NSWindow_data_ptr(mrb_value obj, struct _NSWindow *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_NSWindow_data_type);
}

void
mruby_gift__NSWindow_data_ptr(mrb_value obj, struct _NSWindow *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_NSWindow_data_type);
}

struct _NSWindow *
mruby_unbox__NSWindow(mrb_value boxed) {
  return (struct _NSWindow *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_SDLGameController_TYPE
/*
 * Boxing implementation for struct _SDL_GameController
 */

static void free__SDL_GameController(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type _SDL_GameController_data_type = {
   "struct _SDL_GameController", free__SDL_GameController
};

mrb_value
mruby_box__SDL_GameController(mrb_state* mrb, struct _SDL_GameController *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, SDLGameController_class(mrb), &_SDL_GameController_data_type, box));
}

mrb_value
mruby_giftwrap__SDL_GameController(mrb_state* mrb, struct _SDL_GameController *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, SDLGameController_class(mrb), &_SDL_GameController_data_type, box));
}

void
mruby_set__SDL_GameController_data_ptr(mrb_value obj, struct _SDL_GameController *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_SDL_GameController_data_type);
}

void
mruby_gift__SDL_GameController_data_ptr(mrb_value obj, struct _SDL_GameController *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_SDL_GameController_data_type);
}

struct _SDL_GameController *
mruby_unbox__SDL_GameController(mrb_value boxed) {
  return (struct _SDL_GameController *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_SDLHaptic_TYPE
/*
 * Boxing implementation for struct _SDL_Haptic
 */

static void free__SDL_Haptic(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type _SDL_Haptic_data_type = {
   "struct _SDL_Haptic", free__SDL_Haptic
};

mrb_value
mruby_box__SDL_Haptic(mrb_state* mrb, struct _SDL_Haptic *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, SDLHaptic_class(mrb), &_SDL_Haptic_data_type, box));
}

mrb_value
mruby_giftwrap__SDL_Haptic(mrb_state* mrb, struct _SDL_Haptic *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, SDLHaptic_class(mrb), &_SDL_Haptic_data_type, box));
}

void
mruby_set__SDL_Haptic_data_ptr(mrb_value obj, struct _SDL_Haptic *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_SDL_Haptic_data_type);
}

void
mruby_gift__SDL_Haptic_data_ptr(mrb_value obj, struct _SDL_Haptic *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_SDL_Haptic_data_type);
}

struct _SDL_Haptic *
mruby_unbox__SDL_Haptic(mrb_value boxed) {
  return (struct _SDL_Haptic *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_SDLJoystick_TYPE
/*
 * Boxing implementation for struct _SDL_Joystick
 */

static void free__SDL_Joystick(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type _SDL_Joystick_data_type = {
   "struct _SDL_Joystick", free__SDL_Joystick
};

mrb_value
mruby_box__SDL_Joystick(mrb_state* mrb, struct _SDL_Joystick *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, SDLJoystick_class(mrb), &_SDL_Joystick_data_type, box));
}

mrb_value
mruby_giftwrap__SDL_Joystick(mrb_state* mrb, struct _SDL_Joystick *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, SDLJoystick_class(mrb), &_SDL_Joystick_data_type, box));
}

void
mruby_set__SDL_Joystick_data_ptr(mrb_value obj, struct _SDL_Joystick *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_SDL_Joystick_data_type);
}

void
mruby_gift__SDL_Joystick_data_ptr(mrb_value obj, struct _SDL_Joystick *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_SDL_Joystick_data_type);
}

struct _SDL_Joystick *
mruby_unbox__SDL_Joystick(mrb_value boxed) {
  return (struct _SDL_Joystick *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_SDLIconvT_TYPE
/*
 * Boxing implementation for struct _SDL_iconv_t
 */

static void free__SDL_iconv_t(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type _SDL_iconv_t_data_type = {
   "struct _SDL_iconv_t", free__SDL_iconv_t
};

mrb_value
mruby_box__SDL_iconv_t(mrb_state* mrb, struct _SDL_iconv_t *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, SDLIconvT_class(mrb), &_SDL_iconv_t_data_type, box));
}

mrb_value
mruby_giftwrap__SDL_iconv_t(mrb_state* mrb, struct _SDL_iconv_t *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, SDLIconvT_class(mrb), &_SDL_iconv_t_data_type, box));
}

void
mruby_set__SDL_iconv_t_data_ptr(mrb_value obj, struct _SDL_iconv_t *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_SDL_iconv_t_data_type);
}

void
mruby_gift__SDL_iconv_t_data_ptr(mrb_value obj, struct _SDL_iconv_t *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_SDL_iconv_t_data_type);
}

struct _SDL_iconv_t *
mruby_unbox__SDL_iconv_t(mrb_value boxed) {
  return (struct _SDL_iconv_t *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_ClContext_TYPE
/*
 * Boxing implementation for struct _cl_context
 */

static void free__cl_context(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type _cl_context_data_type = {
   "struct _cl_context", free__cl_context
};

mrb_value
mruby_box__cl_context(mrb_state* mrb, struct _cl_context *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, ClContext_class(mrb), &_cl_context_data_type, box));
}

mrb_value
mruby_giftwrap__cl_context(mrb_state* mrb, struct _cl_context *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, ClContext_class(mrb), &_cl_context_data_type, box));
}

void
mruby_set__cl_context_data_ptr(mrb_value obj, struct _cl_context *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_cl_context_data_type);
}

void
mruby_gift__cl_context_data_ptr(mrb_value obj, struct _cl_context *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_cl_context_data_type);
}

struct _cl_context *
mruby_unbox__cl_context(mrb_value boxed) {
  return (struct _cl_context *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_ClEvent_TYPE
/*
 * Boxing implementation for struct _cl_event
 */

static void free__cl_event(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->data != NULL) {
      free(box->data);
      box->data = NULL;
    }
  }
  free(box);
}

static const mrb_data_type _cl_event_data_type = {
   "struct _cl_event", free__cl_event
};

mrb_value
mruby_box__cl_event(mrb_state* mrb, struct _cl_event *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, ClEvent_class(mrb), &_cl_event_data_type, box));
}

mrb_value
mruby_giftwrap__cl_event(mrb_state* mrb, struct _cl_event *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, ClEvent_class(mrb), &_cl_event_data_type, box));
}

void
mruby_set__cl_event_data_ptr(mrb_value obj, struct _cl_event *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_cl_event_data_type);
}

void
mruby_gift__cl_event_data_ptr(mrb_value obj, struct _cl_event *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_cl_event_data_type);
}

struct _cl_event *
mruby_unbox__cl_event(mrb_value boxed) {
  return (struct _cl_event *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
