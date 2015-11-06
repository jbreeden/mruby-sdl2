/*
 * struct SDL_WindowShapeMode
 * Defined in file SDL_shape.h @ line 100
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_SDL.h"

#if BIND_SDLWindowShapeMode_TYPE

/*
 * Class Methods
 */

#if BIND_SDLWindowShapeMode_INITIALIZE
mrb_value
mrb_SDL_SDLWindowShapeMode_initialize(mrb_state* mrb, mrb_value self) {
  struct SDL_WindowShapeMode* native_object = (struct SDL_WindowShapeMode*)malloc(sizeof(struct SDL_WindowShapeMode));
  mruby_gift_struct SDL_WindowShapeMode_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_SDL_SDLWindowShapeMode_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLWindowShapeMode.disown only accepts objects of type SDL::SDLWindowShapeMode");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_SDL_SDLWindowShapeMode_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLWindowShapeMode.belongs_to_ruby only accepts objects of type SDL::SDLWindowShapeMode");
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

#if BIND_SDLWindowShapeMode_mode_FIELD_READER
/* get_mode
 *
 * Return Type: WindowShapeMode
 */
mrb_value
mrb_SDL_SDLWindowShapeMode_get_mode(mrb_state* mrb, mrb_value self) {
  struct SDL_WindowShapeMode * native_self = mruby_unbox_struct SDL_WindowShapeMode(self);

  WindowShapeMode native_field = native_self->mode;

  mrb_value ruby_field = TODO_mruby_box_WindowShapeMode(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLWindowShapeMode_mode_FIELD_WRITER
/* set_mode
 *
 * Parameters:
 * - value: WindowShapeMode
 */
mrb_value
mrb_SDL_SDLWindowShapeMode_set_mode(mrb_state* mrb, mrb_value self) {
  struct SDL_WindowShapeMode * native_self = mruby_unbox_struct SDL_WindowShapeMode(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_WindowShapeMode(ruby_field);

  WindowShapeMode native_field = TODO_mruby_unbox_WindowShapeMode(ruby_field);

  native_self->mode = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLWindowShapeMode_parameters_FIELD_READER
/* get_parameters
 *
 * Return Type: SDL_WindowShapeParams
 */
mrb_value
mrb_SDL_SDLWindowShapeMode_get_parameters(mrb_state* mrb, mrb_value self) {
  struct SDL_WindowShapeMode * native_self = mruby_unbox_struct SDL_WindowShapeMode(self);

  SDL_WindowShapeParams native_field = native_self->parameters;

  mrb_value ruby_field = TODO_mruby_box_SDL_WindowShapeParams(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLWindowShapeMode_parameters_FIELD_WRITER
/* set_parameters
 *
 * Parameters:
 * - value: SDL_WindowShapeParams
 */
mrb_value
mrb_SDL_SDLWindowShapeMode_set_parameters(mrb_state* mrb, mrb_value self) {
  struct SDL_WindowShapeMode * native_self = mruby_unbox_struct SDL_WindowShapeMode(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_SDL_WindowShapeParams(ruby_field);

  SDL_WindowShapeParams native_field = TODO_mruby_unbox_SDL_WindowShapeParams(ruby_field);

  native_self->parameters = native_field;

  return ruby_field;
}
#endif


void mrb_SDL_SDLWindowShapeMode_init(mrb_state* mrb) {
  RClass* SDLWindowShapeMode_class = mrb_define_class_under(mrb, SDL_module(mrb), "SDLWindowShapeMode", mrb->object_class);
  MRB_SET_INSTANCE_TT(SDLWindowShapeMode_class, MRB_TT_DATA);

#if BIND_SDLWindowShapeMode_INITIALIZE
  mrb_define_method(mrb, SDLWindowShapeMode_class, "initialize", mrb_SDL_SDLWindowShapeMode_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, SDLWindowShapeMode_class, "disown", mrb_SDL_SDLWindowShapeMode_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, SDLWindowShapeMode_class, "belongs_to_ruby?", mrb_SDL_SDLWindowShapeMode_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_SDLWindowShapeMode_mode_FIELD_READER
  mrb_define_method(mrb, SDLWindowShapeMode_class, "mode", mrb_SDL_SDLWindowShapeMode_get_mode, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLWindowShapeMode_mode_FIELD_WRITER
  mrb_define_method(mrb, SDLWindowShapeMode_class, "mode=", mrb_SDL_SDLWindowShapeMode_set_mode, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLWindowShapeMode_parameters_FIELD_READER
  mrb_define_method(mrb, SDLWindowShapeMode_class, "parameters", mrb_SDL_SDLWindowShapeMode_get_parameters, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLWindowShapeMode_parameters_FIELD_WRITER
  mrb_define_method(mrb, SDLWindowShapeMode_class, "parameters=", mrb_SDL_SDLWindowShapeMode_set_parameters, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
