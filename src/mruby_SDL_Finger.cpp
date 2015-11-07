/*
 * struct SDL_Finger
 * Defined in file SDL_touch.h @ line 44
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_SDL.h"

#if BIND_SDLFinger_TYPE

/*
 * Class Methods
 */

#if BIND_SDLFinger_INITIALIZE
mrb_value
mrb_SDL_SDLFinger_initialize(mrb_state* mrb, mrb_value self) {
  struct SDL_Finger* native_object = (struct SDL_Finger*)malloc(sizeof(struct SDL_Finger));
  mruby_gift_SDL_Finger_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_SDL_SDLFinger_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLFinger.disown only accepts objects of type SDL::SDLFinger");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_SDL_SDLFinger_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLFinger.belongs_to_ruby only accepts objects of type SDL::SDLFinger");
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

#if BIND_SDLFinger_id_FIELD_READER
/* get_id
 *
 * Return Type: SDL_FingerID
 */
mrb_value
mrb_SDL_SDLFinger_get_id(mrb_state* mrb, mrb_value self) {
  struct SDL_Finger * native_self = mruby_unbox_SDL_Finger(self);

  SDL_FingerID native_field = native_self->id;

  mrb_value ruby_field = TODO_mruby_box_Sint64(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLFinger_id_FIELD_WRITER
/* set_id
 *
 * Parameters:
 * - value: SDL_FingerID
 */
mrb_value
mrb_SDL_SDLFinger_set_id(mrb_state* mrb, mrb_value self) {
  struct SDL_Finger * native_self = mruby_unbox_SDL_Finger(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Sint64(ruby_field);

  Sint64 native_field = TODO_mruby_unbox_Sint64(ruby_field);

  native_self->id = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLFinger_x_FIELD_READER
/* get_x
 *
 * Return Type: float
 */
mrb_value
mrb_SDL_SDLFinger_get_x(mrb_state* mrb, mrb_value self) {
  struct SDL_Finger * native_self = mruby_unbox_SDL_Finger(self);

  float native_field = native_self->x;

  mrb_value ruby_field = mrb_float_value(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLFinger_x_FIELD_WRITER
/* set_x
 *
 * Parameters:
 * - value: float
 */
mrb_value
mrb_SDL_SDLFinger_set_x(mrb_state* mrb, mrb_value self) {
  struct SDL_Finger * native_self = mruby_unbox_SDL_Finger(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->float_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Float expected");
    return mrb_nil_value();
  }

  float native_field = mrb_float(ruby_field);

  native_self->x = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLFinger_y_FIELD_READER
/* get_y
 *
 * Return Type: float
 */
mrb_value
mrb_SDL_SDLFinger_get_y(mrb_state* mrb, mrb_value self) {
  struct SDL_Finger * native_self = mruby_unbox_SDL_Finger(self);

  float native_field = native_self->y;

  mrb_value ruby_field = mrb_float_value(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLFinger_y_FIELD_WRITER
/* set_y
 *
 * Parameters:
 * - value: float
 */
mrb_value
mrb_SDL_SDLFinger_set_y(mrb_state* mrb, mrb_value self) {
  struct SDL_Finger * native_self = mruby_unbox_SDL_Finger(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->float_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Float expected");
    return mrb_nil_value();
  }

  float native_field = mrb_float(ruby_field);

  native_self->y = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLFinger_pressure_FIELD_READER
/* get_pressure
 *
 * Return Type: float
 */
mrb_value
mrb_SDL_SDLFinger_get_pressure(mrb_state* mrb, mrb_value self) {
  struct SDL_Finger * native_self = mruby_unbox_SDL_Finger(self);

  float native_field = native_self->pressure;

  mrb_value ruby_field = mrb_float_value(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLFinger_pressure_FIELD_WRITER
/* set_pressure
 *
 * Parameters:
 * - value: float
 */
mrb_value
mrb_SDL_SDLFinger_set_pressure(mrb_state* mrb, mrb_value self) {
  struct SDL_Finger * native_self = mruby_unbox_SDL_Finger(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->float_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Float expected");
    return mrb_nil_value();
  }

  float native_field = mrb_float(ruby_field);

  native_self->pressure = native_field;

  return ruby_field;
}
#endif


void mrb_SDL_SDLFinger_init(mrb_state* mrb) {
  RClass* SDLFinger_class = mrb_define_class_under(mrb, SDL_module(mrb), "Finger", mrb->object_class);
  MRB_SET_INSTANCE_TT(SDLFinger_class, MRB_TT_DATA);

#if BIND_SDLFinger_INITIALIZE
  mrb_define_method(mrb, SDLFinger_class, "initialize", mrb_SDL_SDLFinger_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, SDLFinger_class, "disown", mrb_SDL_SDLFinger_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, SDLFinger_class, "belongs_to_ruby?", mrb_SDL_SDLFinger_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_SDLFinger_id_FIELD_READER
  mrb_define_method(mrb, SDLFinger_class, "id", mrb_SDL_SDLFinger_get_id, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLFinger_id_FIELD_WRITER
  mrb_define_method(mrb, SDLFinger_class, "id=", mrb_SDL_SDLFinger_set_id, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLFinger_x_FIELD_READER
  mrb_define_method(mrb, SDLFinger_class, "x", mrb_SDL_SDLFinger_get_x, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLFinger_x_FIELD_WRITER
  mrb_define_method(mrb, SDLFinger_class, "x=", mrb_SDL_SDLFinger_set_x, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLFinger_y_FIELD_READER
  mrb_define_method(mrb, SDLFinger_class, "y", mrb_SDL_SDLFinger_get_y, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLFinger_y_FIELD_WRITER
  mrb_define_method(mrb, SDLFinger_class, "y=", mrb_SDL_SDLFinger_set_y, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLFinger_pressure_FIELD_READER
  mrb_define_method(mrb, SDLFinger_class, "pressure", mrb_SDL_SDLFinger_get_pressure, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLFinger_pressure_FIELD_WRITER
  mrb_define_method(mrb, SDLFinger_class, "pressure=", mrb_SDL_SDLFinger_set_pressure, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
