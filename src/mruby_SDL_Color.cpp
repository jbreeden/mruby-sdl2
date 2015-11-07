/*
 * struct SDL_Color
 * Defined in file SDL_pixels.h @ line 254
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_SDL.h"

#if BIND_SDLColor_TYPE

/*
 * Class Methods
 */

#if BIND_SDLColor_INITIALIZE
mrb_value
mrb_SDL_SDLColor_initialize(mrb_state* mrb, mrb_value self) {
  struct SDL_Color* native_object = (struct SDL_Color*)malloc(sizeof(struct SDL_Color));
  mruby_gift_SDL_Color_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_SDL_SDLColor_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLColor.disown only accepts objects of type SDL::SDLColor");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_SDL_SDLColor_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLColor.belongs_to_ruby only accepts objects of type SDL::SDLColor");
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

#if BIND_SDLColor_r_FIELD_READER
/* get_r
 *
 * Return Type: Uint8
 */
mrb_value
mrb_SDL_SDLColor_get_r(mrb_state* mrb, mrb_value self) {
  struct SDL_Color * native_self = mruby_unbox_SDL_Color(self);

  Uint8 native_field = native_self->r;

  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLColor_r_FIELD_WRITER
/* set_r
 *
 * Parameters:
 * - value: Uint8
 */
mrb_value
mrb_SDL_SDLColor_set_r(mrb_state* mrb, mrb_value self) {
  struct SDL_Color * native_self = mruby_unbox_SDL_Color(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) { mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected"); return mrb_nil_value(); }

  Uint8 native_field = mrb_fixnum(ruby_field);

  native_self->r = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLColor_g_FIELD_READER
/* get_g
 *
 * Return Type: Uint8
 */
mrb_value
mrb_SDL_SDLColor_get_g(mrb_state* mrb, mrb_value self) {
  struct SDL_Color * native_self = mruby_unbox_SDL_Color(self);

  Uint8 native_field = native_self->g;

  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLColor_g_FIELD_WRITER
/* set_g
 *
 * Parameters:
 * - value: Uint8
 */
mrb_value
mrb_SDL_SDLColor_set_g(mrb_state* mrb, mrb_value self) {
  struct SDL_Color * native_self = mruby_unbox_SDL_Color(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) { mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected"); return mrb_nil_value(); }

  Uint8 native_field = mrb_fixnum(ruby_field);

  native_self->g = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLColor_b_FIELD_READER
/* get_b
 *
 * Return Type: Uint8
 */
mrb_value
mrb_SDL_SDLColor_get_b(mrb_state* mrb, mrb_value self) {
  struct SDL_Color * native_self = mruby_unbox_SDL_Color(self);

  Uint8 native_field = native_self->b;

  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLColor_b_FIELD_WRITER
/* set_b
 *
 * Parameters:
 * - value: Uint8
 */
mrb_value
mrb_SDL_SDLColor_set_b(mrb_state* mrb, mrb_value self) {
  struct SDL_Color * native_self = mruby_unbox_SDL_Color(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) { mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected"); return mrb_nil_value(); }

  Uint8 native_field = mrb_fixnum(ruby_field);

  native_self->b = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLColor_a_FIELD_READER
/* get_a
 *
 * Return Type: Uint8
 */
mrb_value
mrb_SDL_SDLColor_get_a(mrb_state* mrb, mrb_value self) {
  struct SDL_Color * native_self = mruby_unbox_SDL_Color(self);

  Uint8 native_field = native_self->a;

  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLColor_a_FIELD_WRITER
/* set_a
 *
 * Parameters:
 * - value: Uint8
 */
mrb_value
mrb_SDL_SDLColor_set_a(mrb_state* mrb, mrb_value self) {
  struct SDL_Color * native_self = mruby_unbox_SDL_Color(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) { mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected"); return mrb_nil_value(); }

  Uint8 native_field = mrb_fixnum(ruby_field);

  native_self->a = native_field;

  return ruby_field;
}
#endif


void mrb_SDL_SDLColor_init(mrb_state* mrb) {
  RClass* SDLColor_class = mrb_define_class_under(mrb, SDL_module(mrb), "Color", mrb->object_class);
  MRB_SET_INSTANCE_TT(SDLColor_class, MRB_TT_DATA);

#if BIND_SDLColor_INITIALIZE
  mrb_define_method(mrb, SDLColor_class, "initialize", mrb_SDL_SDLColor_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, SDLColor_class, "disown", mrb_SDL_SDLColor_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, SDLColor_class, "belongs_to_ruby?", mrb_SDL_SDLColor_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_SDLColor_r_FIELD_READER
  mrb_define_method(mrb, SDLColor_class, "r", mrb_SDL_SDLColor_get_r, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLColor_r_FIELD_WRITER
  mrb_define_method(mrb, SDLColor_class, "r=", mrb_SDL_SDLColor_set_r, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLColor_g_FIELD_READER
  mrb_define_method(mrb, SDLColor_class, "g", mrb_SDL_SDLColor_get_g, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLColor_g_FIELD_WRITER
  mrb_define_method(mrb, SDLColor_class, "g=", mrb_SDL_SDLColor_set_g, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLColor_b_FIELD_READER
  mrb_define_method(mrb, SDLColor_class, "b", mrb_SDL_SDLColor_get_b, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLColor_b_FIELD_WRITER
  mrb_define_method(mrb, SDLColor_class, "b=", mrb_SDL_SDLColor_set_b, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLColor_a_FIELD_READER
  mrb_define_method(mrb, SDLColor_class, "a", mrb_SDL_SDLColor_get_a, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLColor_a_FIELD_WRITER
  mrb_define_method(mrb, SDLColor_class, "a=", mrb_SDL_SDLColor_set_a, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
