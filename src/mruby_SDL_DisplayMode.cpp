/*
 * SDL_DisplayMode
 * Defined in file SDL_video.h @ line 53
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_SDL.h"

#if BIND_SDLDisplayMode_TYPE

/*
 * Class Methods
 */

#if BIND_SDLDisplayMode_INITIALIZE
mrb_value
mrb_SDL_SDLDisplayMode_initialize(mrb_state* mrb, mrb_value self) {
  SDL_DisplayMode* native_object = (SDL_DisplayMode*)malloc(sizeof(SDL_DisplayMode));
  mruby_gift_SDL_DisplayMode_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_SDL_SDLDisplayMode_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLDisplayMode.disown only accepts objects of type SDL::SDLDisplayMode");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_SDL_SDLDisplayMode_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLDisplayMode.belongs_to_ruby only accepts objects of type SDL::SDLDisplayMode");
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

#if BIND_SDLDisplayMode_format_FIELD_READER
/* get_format
 *
 * Return Type: Uint32
 */
mrb_value
mrb_SDL_SDLDisplayMode_get_format(mrb_state* mrb, mrb_value self) {
  SDL_DisplayMode * native_self = mruby_unbox_SDL_DisplayMode(self);

  Uint32 native_field = native_self->format;

  mrb_value ruby_field = TODO_mruby_box_Uint32(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLDisplayMode_format_FIELD_WRITER
/* set_format
 *
 * Parameters:
 * - value: Uint32
 */
mrb_value
mrb_SDL_SDLDisplayMode_set_format(mrb_state* mrb, mrb_value self) {
  SDL_DisplayMode * native_self = mruby_unbox_SDL_DisplayMode(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Uint32(ruby_field);

  Uint32 native_field = TODO_mruby_unbox_Uint32(ruby_field);

  native_self->format = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLDisplayMode_w_FIELD_READER
/* get_w
 *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDLDisplayMode_get_w(mrb_state* mrb, mrb_value self) {
  SDL_DisplayMode * native_self = mruby_unbox_SDL_DisplayMode(self);

  int native_field = native_self->w;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLDisplayMode_w_FIELD_WRITER
/* set_w
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SDL_SDLDisplayMode_set_w(mrb_state* mrb, mrb_value self) {
  SDL_DisplayMode * native_self = mruby_unbox_SDL_DisplayMode(self);
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

#if BIND_SDLDisplayMode_h_FIELD_READER
/* get_h
 *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDLDisplayMode_get_h(mrb_state* mrb, mrb_value self) {
  SDL_DisplayMode * native_self = mruby_unbox_SDL_DisplayMode(self);

  int native_field = native_self->h;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLDisplayMode_h_FIELD_WRITER
/* set_h
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SDL_SDLDisplayMode_set_h(mrb_state* mrb, mrb_value self) {
  SDL_DisplayMode * native_self = mruby_unbox_SDL_DisplayMode(self);
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

#if BIND_SDLDisplayMode_refresh_rate_FIELD_READER
/* get_refresh_rate
 *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDLDisplayMode_get_refresh_rate(mrb_state* mrb, mrb_value self) {
  SDL_DisplayMode * native_self = mruby_unbox_SDL_DisplayMode(self);

  int native_field = native_self->refresh_rate;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLDisplayMode_refresh_rate_FIELD_WRITER
/* set_refresh_rate
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SDL_SDLDisplayMode_set_refresh_rate(mrb_state* mrb, mrb_value self) {
  SDL_DisplayMode * native_self = mruby_unbox_SDL_DisplayMode(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->refresh_rate = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLDisplayMode_driverdata_FIELD_READER
/* get_driverdata
 *
 * Return Type: void *
 */
mrb_value
mrb_SDL_SDLDisplayMode_get_driverdata(mrb_state* mrb, mrb_value self) {
  SDL_DisplayMode * native_self = mruby_unbox_SDL_DisplayMode(self);

  void * native_field = native_self->driverdata;

  mrb_value ruby_field = TODO_mruby_box_void_PTR(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLDisplayMode_driverdata_FIELD_WRITER
/* set_driverdata
 *
 * Parameters:
 * - value: void *
 */
mrb_value
mrb_SDL_SDLDisplayMode_set_driverdata(mrb_state* mrb, mrb_value self) {
  SDL_DisplayMode * native_self = mruby_unbox_SDL_DisplayMode(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_void_PTR(ruby_field);

  void * native_field = TODO_mruby_unbox_void_PTR(ruby_field);

  native_self->driverdata = native_field;

  return ruby_field;
}
#endif


void mrb_SDL_SDLDisplayMode_init(mrb_state* mrb) {
  RClass* SDLDisplayMode_class = mrb_define_class_under(mrb, SDL_module(mrb), "DisplayMode", mrb->object_class);
  MRB_SET_INSTANCE_TT(SDLDisplayMode_class, MRB_TT_DATA);

#if BIND_SDLDisplayMode_INITIALIZE
  mrb_define_method(mrb, SDLDisplayMode_class, "initialize", mrb_SDL_SDLDisplayMode_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, SDLDisplayMode_class, "disown", mrb_SDL_SDLDisplayMode_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, SDLDisplayMode_class, "belongs_to_ruby?", mrb_SDL_SDLDisplayMode_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_SDLDisplayMode_format_FIELD_READER
  mrb_define_method(mrb, SDLDisplayMode_class, "format", mrb_SDL_SDLDisplayMode_get_format, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLDisplayMode_format_FIELD_WRITER
  mrb_define_method(mrb, SDLDisplayMode_class, "format=", mrb_SDL_SDLDisplayMode_set_format, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLDisplayMode_w_FIELD_READER
  mrb_define_method(mrb, SDLDisplayMode_class, "w", mrb_SDL_SDLDisplayMode_get_w, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLDisplayMode_w_FIELD_WRITER
  mrb_define_method(mrb, SDLDisplayMode_class, "w=", mrb_SDL_SDLDisplayMode_set_w, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLDisplayMode_h_FIELD_READER
  mrb_define_method(mrb, SDLDisplayMode_class, "h", mrb_SDL_SDLDisplayMode_get_h, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLDisplayMode_h_FIELD_WRITER
  mrb_define_method(mrb, SDLDisplayMode_class, "h=", mrb_SDL_SDLDisplayMode_set_h, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLDisplayMode_refresh_rate_FIELD_READER
  mrb_define_method(mrb, SDLDisplayMode_class, "refresh_rate", mrb_SDL_SDLDisplayMode_get_refresh_rate, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLDisplayMode_refresh_rate_FIELD_WRITER
  mrb_define_method(mrb, SDLDisplayMode_class, "refresh_rate=", mrb_SDL_SDLDisplayMode_set_refresh_rate, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLDisplayMode_driverdata_FIELD_READER
  mrb_define_method(mrb, SDLDisplayMode_class, "driverdata", mrb_SDL_SDLDisplayMode_get_driverdata, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLDisplayMode_driverdata_FIELD_WRITER
  mrb_define_method(mrb, SDLDisplayMode_class, "driverdata=", mrb_SDL_SDLDisplayMode_set_driverdata, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
