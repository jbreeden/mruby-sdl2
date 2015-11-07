/*
 * struct SDL_GameControllerButtonBind
 * Defined in file SDL_gamecontroller.h @ line 70
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_SDL.h"

#if BIND_SDLGameControllerButtonBind_TYPE

/*
 * Class Methods
 */

#if BIND_SDLGameControllerButtonBind_INITIALIZE
mrb_value
mrb_SDL_SDLGameControllerButtonBind_initialize(mrb_state* mrb, mrb_value self) {
  struct SDL_GameControllerButtonBind* native_object = (struct SDL_GameControllerButtonBind*)malloc(sizeof(struct SDL_GameControllerButtonBind));
  mruby_gift_struct SDL_GameControllerButtonBind_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_SDL_SDLGameControllerButtonBind_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLGameControllerButtonBind.disown only accepts objects of type SDL::SDLGameControllerButtonBind");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_SDL_SDLGameControllerButtonBind_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLGameControllerButtonBind.belongs_to_ruby only accepts objects of type SDL::SDLGameControllerButtonBind");
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

#if BIND_SDLGameControllerButtonBind_bindType_FIELD_READER
/* get_bindType
 *
 * Return Type: SDL_GameControllerBindType
 */
mrb_value
mrb_SDL_SDLGameControllerButtonBind_get_bindType(mrb_state* mrb, mrb_value self) {
  struct SDL_GameControllerButtonBind * native_self = mruby_unbox_struct SDL_GameControllerButtonBind(self);

  SDL_GameControllerBindType native_field = native_self->bindType;

  mrb_value ruby_field = TODO_mruby_box_SDL_GameControllerBindType(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLGameControllerButtonBind_bindType_FIELD_WRITER
/* set_bindType
 *
 * Parameters:
 * - value: SDL_GameControllerBindType
 */
mrb_value
mrb_SDL_SDLGameControllerButtonBind_set_bindType(mrb_state* mrb, mrb_value self) {
  struct SDL_GameControllerButtonBind * native_self = mruby_unbox_struct SDL_GameControllerButtonBind(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_SDL_GameControllerBindType(ruby_field);

  SDL_GameControllerBindType native_field = TODO_mruby_unbox_SDL_GameControllerBindType(ruby_field);

  native_self->bindType = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLGameControllerButtonBind_value_FIELD_READER
/* get_value
 *
 * Return Type: union (anonymous union at ./sdl/SDL2-2.0.3/include//SDL_gamecontroller.h:73:5)
 */
mrb_value
mrb_SDL_SDLGameControllerButtonBind_get_value(mrb_state* mrb, mrb_value self) {
  struct SDL_GameControllerButtonBind * native_self = mruby_unbox_struct SDL_GameControllerButtonBind(self);

  union (anonymous union at ./sdl/SDL2-2.0.3/include//SDL_gamecontroller.h:73:5) native_field = native_self->value;

  mrb_value ruby_field = TODO_mruby_box_union_LPAREN_anonymous_union_at_./sdl/SDL2-2.0.3/include//SDL_gamecontroller.h:73:5_RPAREN(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLGameControllerButtonBind_value_FIELD_WRITER
/* set_value
 *
 * Parameters:
 * - value: union (anonymous union at ./sdl/SDL2-2.0.3/include//SDL_gamecontroller.h:73:5)
 */
mrb_value
mrb_SDL_SDLGameControllerButtonBind_set_value(mrb_state* mrb, mrb_value self) {
  struct SDL_GameControllerButtonBind * native_self = mruby_unbox_struct SDL_GameControllerButtonBind(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_union_LPAREN_anonymous_union_at_./sdl/SDL2-2.0.3/include//SDL_gamecontroller.h:73:5_RPAREN(ruby_field);

  union (anonymous union at ./sdl/SDL2-2.0.3/include//SDL_gamecontroller.h:73:5) native_field = TODO_mruby_unbox_union_LPAREN_anonymous_union_at_./sdl/SDL2-2.0.3/include//SDL_gamecontroller.h:73:5_RPAREN(ruby_field);

  native_self->value = native_field;

  return ruby_field;
}
#endif


void mrb_SDL_SDLGameControllerButtonBind_init(mrb_state* mrb) {
  RClass* SDLGameControllerButtonBind_class = mrb_define_class_under(mrb, SDL_module(mrb), "GameControllerButtonBind", mrb->object_class);
  MRB_SET_INSTANCE_TT(SDLGameControllerButtonBind_class, MRB_TT_DATA);

#if BIND_SDLGameControllerButtonBind_INITIALIZE
  mrb_define_method(mrb, SDLGameControllerButtonBind_class, "initialize", mrb_SDL_SDLGameControllerButtonBind_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, SDLGameControllerButtonBind_class, "disown", mrb_SDL_SDLGameControllerButtonBind_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, SDLGameControllerButtonBind_class, "belongs_to_ruby?", mrb_SDL_SDLGameControllerButtonBind_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_SDLGameControllerButtonBind_bindType_FIELD_READER
  mrb_define_method(mrb, SDLGameControllerButtonBind_class, "bindType", mrb_SDL_SDLGameControllerButtonBind_get_bindType, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLGameControllerButtonBind_bindType_FIELD_WRITER
  mrb_define_method(mrb, SDLGameControllerButtonBind_class, "bindType=", mrb_SDL_SDLGameControllerButtonBind_set_bindType, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLGameControllerButtonBind_value_FIELD_READER
  mrb_define_method(mrb, SDLGameControllerButtonBind_class, "value", mrb_SDL_SDLGameControllerButtonBind_get_value, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLGameControllerButtonBind_value_FIELD_WRITER
  mrb_define_method(mrb, SDLGameControllerButtonBind_class, "value=", mrb_SDL_SDLGameControllerButtonBind_set_value, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
