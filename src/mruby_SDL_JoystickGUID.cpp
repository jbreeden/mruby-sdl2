/*
 * SDL_JoystickGUID
 * Defined in file SDL_joystick.h @ line 68
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_SDL.h"

#if BIND_SDLJoystickGUID_TYPE

/*
 * Class Methods
 */

#if BIND_SDLJoystickGUID_INITIALIZE
mrb_value
mrb_SDL_SDLJoystickGUID_initialize(mrb_state* mrb, mrb_value self) {
  SDL_JoystickGUID* native_object = (SDL_JoystickGUID*)malloc(sizeof(SDL_JoystickGUID));
  mruby_gift_SDL_JoystickGUID_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_SDL_SDLJoystickGUID_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLJoystickGUID.disown only accepts objects of type SDL::SDLJoystickGUID");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_SDL_SDLJoystickGUID_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLJoystickGUID.belongs_to_ruby only accepts objects of type SDL::SDLJoystickGUID");
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

#if BIND_SDLJoystickGUID_data_FIELD_READER
/* get_data
 *
 * Return Type: Uint8 [16]
 */
mrb_value
mrb_SDL_SDLJoystickGUID_get_data(mrb_state* mrb, mrb_value self) {
  SDL_JoystickGUID * native_self = mruby_unbox_SDL_JoystickGUID(self);

  Uint8 [16] native_field = native_self->data;

  mrb_value ruby_field = TODO_mruby_box_Uint8_[16](mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLJoystickGUID_data_FIELD_WRITER
/* set_data
 *
 * Parameters:
 * - value: Uint8 [16]
 */
mrb_value
mrb_SDL_SDLJoystickGUID_set_data(mrb_state* mrb, mrb_value self) {
  SDL_JoystickGUID * native_self = mruby_unbox_SDL_JoystickGUID(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Uint8_[16](ruby_field);

  Uint8 [16] native_field = TODO_mruby_unbox_Uint8_[16](ruby_field);

  native_self->data = native_field;

  return ruby_field;
}
#endif


void mrb_SDL_SDLJoystickGUID_init(mrb_state* mrb) {
  RClass* SDLJoystickGUID_class = mrb_define_class_under(mrb, SDL_module(mrb), "JoystickGUID", mrb->object_class);
  MRB_SET_INSTANCE_TT(SDLJoystickGUID_class, MRB_TT_DATA);

#if BIND_SDLJoystickGUID_INITIALIZE
  mrb_define_method(mrb, SDLJoystickGUID_class, "initialize", mrb_SDL_SDLJoystickGUID_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, SDLJoystickGUID_class, "disown", mrb_SDL_SDLJoystickGUID_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, SDLJoystickGUID_class, "belongs_to_ruby?", mrb_SDL_SDLJoystickGUID_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_SDLJoystickGUID_data_FIELD_READER
  mrb_define_method(mrb, SDLJoystickGUID_class, "data", mrb_SDL_SDLJoystickGUID_get_data, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLJoystickGUID_data_FIELD_WRITER
  mrb_define_method(mrb, SDLJoystickGUID_class, "data=", mrb_SDL_SDLJoystickGUID_set_data, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
