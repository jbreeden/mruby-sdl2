/*
 * struct SDL_Surface
 * Defined in file SDL_surface.h @ line 69
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_SDL.h"

#if BIND_SDLSurface_TYPE

/*
 * Class Methods
 */

#if BIND_SDLSurface_INITIALIZE
mrb_value
mrb_SDL_SDLSurface_initialize(mrb_state* mrb, mrb_value self) {
  struct SDL_Surface* native_object = (struct SDL_Surface*)malloc(sizeof(struct SDL_Surface));
  mruby_gift_struct SDL_Surface_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_SDL_SDLSurface_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLSurface.disown only accepts objects of type SDL::SDLSurface");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_SDL_SDLSurface_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLSurface.belongs_to_ruby only accepts objects of type SDL::SDLSurface");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}

/*
 * Fields
 */

#if BIND_SDLSurface_flags_FIELD_READER
/* get_flags
 *
 * Return Type: Uint32
 */
mrb_value
mrb_SDL_SDLSurface_get_flags(mrb_state* mrb, mrb_value self) {
  struct SDL_Surface * native_self = mruby_unbox_struct SDL_Surface(self);

  Uint32 native_field = native_self->flags;

  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLSurface_flags_FIELD_WRITER
/* set_flags
 *
 * Parameters:
 * - value: Uint32
 */
mrb_value
mrb_SDL_SDLSurface_set_flags(mrb_state* mrb, mrb_value self) {
  struct SDL_Surface * native_self = mruby_unbox_struct SDL_Surface(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) { mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected"); return mrb_nil_value(); }

  Uint32 native_field = mrb_fixnum(ruby_field);

  native_self->flags = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLSurface_format_FIELD_READER
/* get_format
 *
 * Return Type: SDL_PixelFormat *
 */
mrb_value
mrb_SDL_SDLSurface_get_format(mrb_state* mrb, mrb_value self) {
  struct SDL_Surface * native_self = mruby_unbox_struct SDL_Surface(self);

  SDL_PixelFormat * native_field = native_self->format;

  mrb_value ruby_field = (native_field == NULL ? mrb_nil_value() : mruby_box_SDL_PixelFormat(mrb, native_field));

  return ruby_field;
}
#endif

#if BIND_SDLSurface_format_FIELD_WRITER
/* set_format
 *
 * Parameters:
 * - value: SDL_PixelFormat *
 */
mrb_value
mrb_SDL_SDLSurface_set_format(mrb_state* mrb, mrb_value self) {
  struct SDL_Surface * native_self = mruby_unbox_struct SDL_Surface(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, SDLPixelFormat_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLPixelFormat expected");
    return mrb_nil_value();
  }

  SDL_PixelFormat * native_field = (mrb_nil_p(ruby_field) ? NULL : mruby_unbox_SDL_PixelFormat(ruby_field));

  native_self->format = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLSurface_w_FIELD_READER
/* get_w
 *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDLSurface_get_w(mrb_state* mrb, mrb_value self) {
  struct SDL_Surface * native_self = mruby_unbox_struct SDL_Surface(self);

  int native_field = native_self->w;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLSurface_w_FIELD_WRITER
/* set_w
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SDL_SDLSurface_set_w(mrb_state* mrb, mrb_value self) {
  struct SDL_Surface * native_self = mruby_unbox_struct SDL_Surface(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->w = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLSurface_h_FIELD_READER
/* get_h
 *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDLSurface_get_h(mrb_state* mrb, mrb_value self) {
  struct SDL_Surface * native_self = mruby_unbox_struct SDL_Surface(self);

  int native_field = native_self->h;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLSurface_h_FIELD_WRITER
/* set_h
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SDL_SDLSurface_set_h(mrb_state* mrb, mrb_value self) {
  struct SDL_Surface * native_self = mruby_unbox_struct SDL_Surface(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->h = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLSurface_pitch_FIELD_READER
/* get_pitch
 *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDLSurface_get_pitch(mrb_state* mrb, mrb_value self) {
  struct SDL_Surface * native_self = mruby_unbox_struct SDL_Surface(self);

  int native_field = native_self->pitch;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLSurface_pitch_FIELD_WRITER
/* set_pitch
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SDL_SDLSurface_set_pitch(mrb_state* mrb, mrb_value self) {
  struct SDL_Surface * native_self = mruby_unbox_struct SDL_Surface(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->pitch = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLSurface_pixels_FIELD_READER
/* get_pixels
 *
 * Return Type: void *
 */
mrb_value
mrb_SDL_SDLSurface_get_pixels(mrb_state* mrb, mrb_value self) {
  struct SDL_Surface * native_self = mruby_unbox_struct SDL_Surface(self);

  void * native_field = native_self->pixels;

  mrb_value ruby_field = TODO_mruby_box_void_PTR(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLSurface_pixels_FIELD_WRITER
/* set_pixels
 *
 * Parameters:
 * - value: void *
 */
mrb_value
mrb_SDL_SDLSurface_set_pixels(mrb_state* mrb, mrb_value self) {
  struct SDL_Surface * native_self = mruby_unbox_struct SDL_Surface(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_void_PTR(ruby_field);

  void * native_field = TODO_mruby_unbox_void_PTR(ruby_field);

  native_self->pixels = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLSurface_userdata_FIELD_READER
/* get_userdata
 *
 * Return Type: void *
 */
mrb_value
mrb_SDL_SDLSurface_get_userdata(mrb_state* mrb, mrb_value self) {
  struct SDL_Surface * native_self = mruby_unbox_struct SDL_Surface(self);

  void * native_field = native_self->userdata;

  mrb_value ruby_field = TODO_mruby_box_void_PTR(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLSurface_userdata_FIELD_WRITER
/* set_userdata
 *
 * Parameters:
 * - value: void *
 */
mrb_value
mrb_SDL_SDLSurface_set_userdata(mrb_state* mrb, mrb_value self) {
  struct SDL_Surface * native_self = mruby_unbox_struct SDL_Surface(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_void_PTR(ruby_field);

  void * native_field = TODO_mruby_unbox_void_PTR(ruby_field);

  native_self->userdata = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLSurface_locked_FIELD_READER
/* get_locked
 *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDLSurface_get_locked(mrb_state* mrb, mrb_value self) {
  struct SDL_Surface * native_self = mruby_unbox_struct SDL_Surface(self);

  int native_field = native_self->locked;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLSurface_locked_FIELD_WRITER
/* set_locked
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SDL_SDLSurface_set_locked(mrb_state* mrb, mrb_value self) {
  struct SDL_Surface * native_self = mruby_unbox_struct SDL_Surface(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->locked = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLSurface_lock_data_FIELD_READER
/* get_lock_data
 *
 * Return Type: void *
 */
mrb_value
mrb_SDL_SDLSurface_get_lock_data(mrb_state* mrb, mrb_value self) {
  struct SDL_Surface * native_self = mruby_unbox_struct SDL_Surface(self);

  void * native_field = native_self->lock_data;

  mrb_value ruby_field = TODO_mruby_box_void_PTR(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLSurface_lock_data_FIELD_WRITER
/* set_lock_data
 *
 * Parameters:
 * - value: void *
 */
mrb_value
mrb_SDL_SDLSurface_set_lock_data(mrb_state* mrb, mrb_value self) {
  struct SDL_Surface * native_self = mruby_unbox_struct SDL_Surface(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_void_PTR(ruby_field);

  void * native_field = TODO_mruby_unbox_void_PTR(ruby_field);

  native_self->lock_data = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLSurface_clip_rect_FIELD_READER
/* get_clip_rect
 *
 * Return Type: SDL_Rect
 */
mrb_value
mrb_SDL_SDLSurface_get_clip_rect(mrb_state* mrb, mrb_value self) {
  struct SDL_Surface * native_self = mruby_unbox_struct SDL_Surface(self);

  SDL_Rect native_field = native_self->clip_rect;

  mrb_value ruby_field = TODO_mruby_box_SDL_Rect(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLSurface_clip_rect_FIELD_WRITER
/* set_clip_rect
 *
 * Parameters:
 * - value: SDL_Rect
 */
mrb_value
mrb_SDL_SDLSurface_set_clip_rect(mrb_state* mrb, mrb_value self) {
  struct SDL_Surface * native_self = mruby_unbox_struct SDL_Surface(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_SDL_Rect(ruby_field);

  SDL_Rect native_field = TODO_mruby_unbox_SDL_Rect(ruby_field);

  native_self->clip_rect = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLSurface_map_FIELD_READER
/* get_map
 *
 * Return Type: struct SDL_BlitMap *
 */
mrb_value
mrb_SDL_SDLSurface_get_map(mrb_state* mrb, mrb_value self) {
  struct SDL_Surface * native_self = mruby_unbox_struct SDL_Surface(self);

  struct SDL_BlitMap * native_field = native_self->map;

  mrb_value ruby_field = (native_field == NULL ? mrb_nil_value() : mruby_box_SDL_BlitMap(mrb, native_field));

  return ruby_field;
}
#endif

#if BIND_SDLSurface_map_FIELD_WRITER
/* set_map
 *
 * Parameters:
 * - value: struct SDL_BlitMap *
 */
mrb_value
mrb_SDL_SDLSurface_set_map(mrb_state* mrb, mrb_value self) {
  struct SDL_Surface * native_self = mruby_unbox_struct SDL_Surface(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, SDLBlitMap_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLBlitMap expected");
    return mrb_nil_value();
  }

  struct SDL_BlitMap * native_field = (mrb_nil_p(ruby_field) ? NULL : mruby_unbox_SDL_BlitMap(ruby_field));

  native_self->map = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLSurface_refcount_FIELD_READER
/* get_refcount
 *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDLSurface_get_refcount(mrb_state* mrb, mrb_value self) {
  struct SDL_Surface * native_self = mruby_unbox_struct SDL_Surface(self);

  int native_field = native_self->refcount;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLSurface_refcount_FIELD_WRITER
/* set_refcount
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SDL_SDLSurface_set_refcount(mrb_state* mrb, mrb_value self) {
  struct SDL_Surface * native_self = mruby_unbox_struct SDL_Surface(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->refcount = native_field;

  return ruby_field;
}
#endif


void mrb_SDL_SDLSurface_init(mrb_state* mrb) {
  RClass* SDLSurface_class = mrb_define_class_under(mrb, SDL_module(mrb), "Surface", mrb->object_class);
  MRB_SET_INSTANCE_TT(SDLSurface_class, MRB_TT_DATA);

#if BIND_SDLSurface_INITIALIZE
  mrb_define_method(mrb, SDLSurface_class, "initialize", mrb_SDL_SDLSurface_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, SDLSurface_class, "disown", mrb_SDL_SDLSurface_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, SDLSurface_class, "belongs_to_ruby?", mrb_SDL_SDLSurface_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_SDLSurface_flags_FIELD_READER
  mrb_define_method(mrb, SDLSurface_class, "flags", mrb_SDL_SDLSurface_get_flags, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLSurface_flags_FIELD_WRITER
  mrb_define_method(mrb, SDLSurface_class, "flags=", mrb_SDL_SDLSurface_set_flags, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLSurface_format_FIELD_READER
  mrb_define_method(mrb, SDLSurface_class, "format", mrb_SDL_SDLSurface_get_format, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLSurface_format_FIELD_WRITER
  mrb_define_method(mrb, SDLSurface_class, "format=", mrb_SDL_SDLSurface_set_format, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLSurface_w_FIELD_READER
  mrb_define_method(mrb, SDLSurface_class, "w", mrb_SDL_SDLSurface_get_w, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLSurface_w_FIELD_WRITER
  mrb_define_method(mrb, SDLSurface_class, "w=", mrb_SDL_SDLSurface_set_w, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLSurface_h_FIELD_READER
  mrb_define_method(mrb, SDLSurface_class, "h", mrb_SDL_SDLSurface_get_h, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLSurface_h_FIELD_WRITER
  mrb_define_method(mrb, SDLSurface_class, "h=", mrb_SDL_SDLSurface_set_h, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLSurface_pitch_FIELD_READER
  mrb_define_method(mrb, SDLSurface_class, "pitch", mrb_SDL_SDLSurface_get_pitch, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLSurface_pitch_FIELD_WRITER
  mrb_define_method(mrb, SDLSurface_class, "pitch=", mrb_SDL_SDLSurface_set_pitch, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLSurface_pixels_FIELD_READER
  mrb_define_method(mrb, SDLSurface_class, "pixels", mrb_SDL_SDLSurface_get_pixels, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLSurface_pixels_FIELD_WRITER
  mrb_define_method(mrb, SDLSurface_class, "pixels=", mrb_SDL_SDLSurface_set_pixels, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLSurface_userdata_FIELD_READER
  mrb_define_method(mrb, SDLSurface_class, "userdata", mrb_SDL_SDLSurface_get_userdata, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLSurface_userdata_FIELD_WRITER
  mrb_define_method(mrb, SDLSurface_class, "userdata=", mrb_SDL_SDLSurface_set_userdata, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLSurface_locked_FIELD_READER
  mrb_define_method(mrb, SDLSurface_class, "locked", mrb_SDL_SDLSurface_get_locked, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLSurface_locked_FIELD_WRITER
  mrb_define_method(mrb, SDLSurface_class, "locked=", mrb_SDL_SDLSurface_set_locked, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLSurface_lock_data_FIELD_READER
  mrb_define_method(mrb, SDLSurface_class, "lock_data", mrb_SDL_SDLSurface_get_lock_data, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLSurface_lock_data_FIELD_WRITER
  mrb_define_method(mrb, SDLSurface_class, "lock_data=", mrb_SDL_SDLSurface_set_lock_data, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLSurface_clip_rect_FIELD_READER
  mrb_define_method(mrb, SDLSurface_class, "clip_rect", mrb_SDL_SDLSurface_get_clip_rect, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLSurface_clip_rect_FIELD_WRITER
  mrb_define_method(mrb, SDLSurface_class, "clip_rect=", mrb_SDL_SDLSurface_set_clip_rect, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLSurface_map_FIELD_READER
  mrb_define_method(mrb, SDLSurface_class, "map", mrb_SDL_SDLSurface_get_map, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLSurface_map_FIELD_WRITER
  mrb_define_method(mrb, SDLSurface_class, "map=", mrb_SDL_SDLSurface_set_map, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLSurface_refcount_FIELD_READER
  mrb_define_method(mrb, SDLSurface_class, "refcount", mrb_SDL_SDLSurface_get_refcount, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLSurface_refcount_FIELD_WRITER
  mrb_define_method(mrb, SDLSurface_class, "refcount=", mrb_SDL_SDLSurface_set_refcount, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
