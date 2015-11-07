/*
 * struct SDL_Rect
 * Defined in file SDL_rect.h @ line 63
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_SDL.h"

#if BIND_SDLRect_TYPE

/*
 * Class Methods
 */

#if BIND_SDLRect_INITIALIZE
mrb_value
mrb_SDL_SDLRect_initialize(mrb_state* mrb, mrb_value self) {
  struct SDL_Rect* native_object = (struct SDL_Rect*)malloc(sizeof(struct SDL_Rect));
  mruby_gift_struct SDL_Rect_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_SDL_SDLRect_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLRect.disown only accepts objects of type SDL::SDLRect");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_SDL_SDLRect_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLRect.belongs_to_ruby only accepts objects of type SDL::SDLRect");
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

#if BIND_SDLRect_x_FIELD_READER
/* get_x
 *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDLRect_get_x(mrb_state* mrb, mrb_value self) {
  struct SDL_Rect * native_self = mruby_unbox_struct SDL_Rect(self);

  int native_field = native_self->x;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLRect_x_FIELD_WRITER
/* set_x
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SDL_SDLRect_set_x(mrb_state* mrb, mrb_value self) {
  struct SDL_Rect * native_self = mruby_unbox_struct SDL_Rect(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->x = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLRect_y_FIELD_READER
/* get_y
 *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDLRect_get_y(mrb_state* mrb, mrb_value self) {
  struct SDL_Rect * native_self = mruby_unbox_struct SDL_Rect(self);

  int native_field = native_self->y;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLRect_y_FIELD_WRITER
/* set_y
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SDL_SDLRect_set_y(mrb_state* mrb, mrb_value self) {
  struct SDL_Rect * native_self = mruby_unbox_struct SDL_Rect(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->y = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLRect_w_FIELD_READER
/* get_w
 *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDLRect_get_w(mrb_state* mrb, mrb_value self) {
  struct SDL_Rect * native_self = mruby_unbox_struct SDL_Rect(self);

  int native_field = native_self->w;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLRect_w_FIELD_WRITER
/* set_w
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SDL_SDLRect_set_w(mrb_state* mrb, mrb_value self) {
  struct SDL_Rect * native_self = mruby_unbox_struct SDL_Rect(self);
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

#if BIND_SDLRect_h_FIELD_READER
/* get_h
 *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDLRect_get_h(mrb_state* mrb, mrb_value self) {
  struct SDL_Rect * native_self = mruby_unbox_struct SDL_Rect(self);

  int native_field = native_self->h;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLRect_h_FIELD_WRITER
/* set_h
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SDL_SDLRect_set_h(mrb_state* mrb, mrb_value self) {
  struct SDL_Rect * native_self = mruby_unbox_struct SDL_Rect(self);
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


void mrb_SDL_SDLRect_init(mrb_state* mrb) {
  RClass* SDLRect_class = mrb_define_class_under(mrb, SDL_module(mrb), "Rect", mrb->object_class);
  MRB_SET_INSTANCE_TT(SDLRect_class, MRB_TT_DATA);

#if BIND_SDLRect_INITIALIZE
  mrb_define_method(mrb, SDLRect_class, "initialize", mrb_SDL_SDLRect_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, SDLRect_class, "disown", mrb_SDL_SDLRect_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, SDLRect_class, "belongs_to_ruby?", mrb_SDL_SDLRect_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_SDLRect_x_FIELD_READER
  mrb_define_method(mrb, SDLRect_class, "x", mrb_SDL_SDLRect_get_x, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLRect_x_FIELD_WRITER
  mrb_define_method(mrb, SDLRect_class, "x=", mrb_SDL_SDLRect_set_x, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLRect_y_FIELD_READER
  mrb_define_method(mrb, SDLRect_class, "y", mrb_SDL_SDLRect_get_y, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLRect_y_FIELD_WRITER
  mrb_define_method(mrb, SDLRect_class, "y=", mrb_SDL_SDLRect_set_y, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLRect_w_FIELD_READER
  mrb_define_method(mrb, SDLRect_class, "w", mrb_SDL_SDLRect_get_w, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLRect_w_FIELD_WRITER
  mrb_define_method(mrb, SDLRect_class, "w=", mrb_SDL_SDLRect_set_w, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLRect_h_FIELD_READER
  mrb_define_method(mrb, SDLRect_class, "h", mrb_SDL_SDLRect_get_h, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLRect_h_FIELD_WRITER
  mrb_define_method(mrb, SDLRect_class, "h=", mrb_SDL_SDLRect_set_h, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
