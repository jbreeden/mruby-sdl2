/*
 * SDL_MessageBoxColor
 * Defined in file SDL_messagebox.h @ line 66
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_SDL.h"

#if BIND_SDLMessageBoxColor_TYPE

/*
 * Class Methods
 */

#if BIND_SDLMessageBoxColor_INITIALIZE
mrb_value
mrb_SDL_SDLMessageBoxColor_initialize(mrb_state* mrb, mrb_value self) {
  SDL_MessageBoxColor* native_object = (SDL_MessageBoxColor*)malloc(sizeof(SDL_MessageBoxColor));
  mruby_gift_SDL_MessageBoxColor_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_SDL_SDLMessageBoxColor_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLMessageBoxColor.disown only accepts objects of type SDL::SDLMessageBoxColor");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_SDL_SDLMessageBoxColor_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLMessageBoxColor.belongs_to_ruby only accepts objects of type SDL::SDLMessageBoxColor");
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

#if BIND_SDLMessageBoxColor_r_FIELD_READER
/* get_r
 *
 * Return Type: Uint8
 */
mrb_value
mrb_SDL_SDLMessageBoxColor_get_r(mrb_state* mrb, mrb_value self) {
  SDL_MessageBoxColor * native_self = mruby_unbox_SDL_MessageBoxColor(self);

  Uint8 native_field = native_self->r;

  mrb_value ruby_field = TODO_mruby_box_Uint8(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLMessageBoxColor_r_FIELD_WRITER
/* set_r
 *
 * Parameters:
 * - value: Uint8
 */
mrb_value
mrb_SDL_SDLMessageBoxColor_set_r(mrb_state* mrb, mrb_value self) {
  SDL_MessageBoxColor * native_self = mruby_unbox_SDL_MessageBoxColor(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Uint8(ruby_field);

  Uint8 native_field = TODO_mruby_unbox_Uint8(ruby_field);

  native_self->r = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLMessageBoxColor_g_FIELD_READER
/* get_g
 *
 * Return Type: Uint8
 */
mrb_value
mrb_SDL_SDLMessageBoxColor_get_g(mrb_state* mrb, mrb_value self) {
  SDL_MessageBoxColor * native_self = mruby_unbox_SDL_MessageBoxColor(self);

  Uint8 native_field = native_self->g;

  mrb_value ruby_field = TODO_mruby_box_Uint8(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLMessageBoxColor_g_FIELD_WRITER
/* set_g
 *
 * Parameters:
 * - value: Uint8
 */
mrb_value
mrb_SDL_SDLMessageBoxColor_set_g(mrb_state* mrb, mrb_value self) {
  SDL_MessageBoxColor * native_self = mruby_unbox_SDL_MessageBoxColor(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Uint8(ruby_field);

  Uint8 native_field = TODO_mruby_unbox_Uint8(ruby_field);

  native_self->g = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLMessageBoxColor_b_FIELD_READER
/* get_b
 *
 * Return Type: Uint8
 */
mrb_value
mrb_SDL_SDLMessageBoxColor_get_b(mrb_state* mrb, mrb_value self) {
  SDL_MessageBoxColor * native_self = mruby_unbox_SDL_MessageBoxColor(self);

  Uint8 native_field = native_self->b;

  mrb_value ruby_field = TODO_mruby_box_Uint8(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLMessageBoxColor_b_FIELD_WRITER
/* set_b
 *
 * Parameters:
 * - value: Uint8
 */
mrb_value
mrb_SDL_SDLMessageBoxColor_set_b(mrb_state* mrb, mrb_value self) {
  SDL_MessageBoxColor * native_self = mruby_unbox_SDL_MessageBoxColor(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Uint8(ruby_field);

  Uint8 native_field = TODO_mruby_unbox_Uint8(ruby_field);

  native_self->b = native_field;

  return ruby_field;
}
#endif


void mrb_SDL_SDLMessageBoxColor_init(mrb_state* mrb) {
  RClass* SDLMessageBoxColor_class = mrb_define_class_under(mrb, SDL_module(mrb), "MessageBoxColor", mrb->object_class);
  MRB_SET_INSTANCE_TT(SDLMessageBoxColor_class, MRB_TT_DATA);

#if BIND_SDLMessageBoxColor_INITIALIZE
  mrb_define_method(mrb, SDLMessageBoxColor_class, "initialize", mrb_SDL_SDLMessageBoxColor_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, SDLMessageBoxColor_class, "disown", mrb_SDL_SDLMessageBoxColor_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, SDLMessageBoxColor_class, "belongs_to_ruby?", mrb_SDL_SDLMessageBoxColor_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_SDLMessageBoxColor_r_FIELD_READER
  mrb_define_method(mrb, SDLMessageBoxColor_class, "r", mrb_SDL_SDLMessageBoxColor_get_r, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLMessageBoxColor_r_FIELD_WRITER
  mrb_define_method(mrb, SDLMessageBoxColor_class, "r=", mrb_SDL_SDLMessageBoxColor_set_r, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLMessageBoxColor_g_FIELD_READER
  mrb_define_method(mrb, SDLMessageBoxColor_class, "g", mrb_SDL_SDLMessageBoxColor_get_g, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLMessageBoxColor_g_FIELD_WRITER
  mrb_define_method(mrb, SDLMessageBoxColor_class, "g=", mrb_SDL_SDLMessageBoxColor_set_g, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLMessageBoxColor_b_FIELD_READER
  mrb_define_method(mrb, SDLMessageBoxColor_class, "b", mrb_SDL_SDLMessageBoxColor_get_b, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLMessageBoxColor_b_FIELD_WRITER
  mrb_define_method(mrb, SDLMessageBoxColor_class, "b=", mrb_SDL_SDLMessageBoxColor_set_b, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
