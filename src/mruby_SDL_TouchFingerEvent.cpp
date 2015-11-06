/*
 * struct SDL_TouchFingerEvent
 * Defined in file SDL_events.h @ line 387
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_SDL.h"

#if BIND_SDLTouchFingerEvent_TYPE

/*
 * Class Methods
 */

#if BIND_SDLTouchFingerEvent_INITIALIZE
mrb_value
mrb_SDL_SDLTouchFingerEvent_initialize(mrb_state* mrb, mrb_value self) {
  struct SDL_TouchFingerEvent* native_object = (struct SDL_TouchFingerEvent*)malloc(sizeof(struct SDL_TouchFingerEvent));
  mruby_gift_struct SDL_TouchFingerEvent_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_SDL_SDLTouchFingerEvent_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLTouchFingerEvent.disown only accepts objects of type SDL::SDLTouchFingerEvent");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_SDL_SDLTouchFingerEvent_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLTouchFingerEvent.belongs_to_ruby only accepts objects of type SDL::SDLTouchFingerEvent");
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

#if BIND_SDLTouchFingerEvent_type_FIELD_READER
/* get_type
 *
 * Return Type: Uint32
 */
mrb_value
mrb_SDL_SDLTouchFingerEvent_get_type(mrb_state* mrb, mrb_value self) {
  struct SDL_TouchFingerEvent * native_self = mruby_unbox_struct SDL_TouchFingerEvent(self);

  Uint32 native_field = native_self->type;

  mrb_value ruby_field = TODO_mruby_box_Uint32(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLTouchFingerEvent_type_FIELD_WRITER
/* set_type
 *
 * Parameters:
 * - value: Uint32
 */
mrb_value
mrb_SDL_SDLTouchFingerEvent_set_type(mrb_state* mrb, mrb_value self) {
  struct SDL_TouchFingerEvent * native_self = mruby_unbox_struct SDL_TouchFingerEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Uint32(ruby_field);

  Uint32 native_field = TODO_mruby_unbox_Uint32(ruby_field);

  native_self->type = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLTouchFingerEvent_timestamp_FIELD_READER
/* get_timestamp
 *
 * Return Type: Uint32
 */
mrb_value
mrb_SDL_SDLTouchFingerEvent_get_timestamp(mrb_state* mrb, mrb_value self) {
  struct SDL_TouchFingerEvent * native_self = mruby_unbox_struct SDL_TouchFingerEvent(self);

  Uint32 native_field = native_self->timestamp;

  mrb_value ruby_field = TODO_mruby_box_Uint32(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLTouchFingerEvent_timestamp_FIELD_WRITER
/* set_timestamp
 *
 * Parameters:
 * - value: Uint32
 */
mrb_value
mrb_SDL_SDLTouchFingerEvent_set_timestamp(mrb_state* mrb, mrb_value self) {
  struct SDL_TouchFingerEvent * native_self = mruby_unbox_struct SDL_TouchFingerEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Uint32(ruby_field);

  Uint32 native_field = TODO_mruby_unbox_Uint32(ruby_field);

  native_self->timestamp = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLTouchFingerEvent_touchId_FIELD_READER
/* get_touchId
 *
 * Return Type: SDL_TouchID
 */
mrb_value
mrb_SDL_SDLTouchFingerEvent_get_touchId(mrb_state* mrb, mrb_value self) {
  struct SDL_TouchFingerEvent * native_self = mruby_unbox_struct SDL_TouchFingerEvent(self);

  SDL_TouchID native_field = native_self->touchId;

  mrb_value ruby_field = TODO_mruby_box_Sint64(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLTouchFingerEvent_touchId_FIELD_WRITER
/* set_touchId
 *
 * Parameters:
 * - value: SDL_TouchID
 */
mrb_value
mrb_SDL_SDLTouchFingerEvent_set_touchId(mrb_state* mrb, mrb_value self) {
  struct SDL_TouchFingerEvent * native_self = mruby_unbox_struct SDL_TouchFingerEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Sint64(ruby_field);

  Sint64 native_field = TODO_mruby_unbox_Sint64(ruby_field);

  native_self->touchId = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLTouchFingerEvent_fingerId_FIELD_READER
/* get_fingerId
 *
 * Return Type: SDL_FingerID
 */
mrb_value
mrb_SDL_SDLTouchFingerEvent_get_fingerId(mrb_state* mrb, mrb_value self) {
  struct SDL_TouchFingerEvent * native_self = mruby_unbox_struct SDL_TouchFingerEvent(self);

  SDL_FingerID native_field = native_self->fingerId;

  mrb_value ruby_field = TODO_mruby_box_Sint64(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLTouchFingerEvent_fingerId_FIELD_WRITER
/* set_fingerId
 *
 * Parameters:
 * - value: SDL_FingerID
 */
mrb_value
mrb_SDL_SDLTouchFingerEvent_set_fingerId(mrb_state* mrb, mrb_value self) {
  struct SDL_TouchFingerEvent * native_self = mruby_unbox_struct SDL_TouchFingerEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Sint64(ruby_field);

  Sint64 native_field = TODO_mruby_unbox_Sint64(ruby_field);

  native_self->fingerId = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLTouchFingerEvent_x_FIELD_READER
/* get_x
 *
 * Return Type: float
 */
mrb_value
mrb_SDL_SDLTouchFingerEvent_get_x(mrb_state* mrb, mrb_value self) {
  struct SDL_TouchFingerEvent * native_self = mruby_unbox_struct SDL_TouchFingerEvent(self);

  float native_field = native_self->x;

  mrb_value ruby_field = mrb_float_value(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLTouchFingerEvent_x_FIELD_WRITER
/* set_x
 *
 * Parameters:
 * - value: float
 */
mrb_value
mrb_SDL_SDLTouchFingerEvent_set_x(mrb_state* mrb, mrb_value self) {
  struct SDL_TouchFingerEvent * native_self = mruby_unbox_struct SDL_TouchFingerEvent(self);
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

#if BIND_SDLTouchFingerEvent_y_FIELD_READER
/* get_y
 *
 * Return Type: float
 */
mrb_value
mrb_SDL_SDLTouchFingerEvent_get_y(mrb_state* mrb, mrb_value self) {
  struct SDL_TouchFingerEvent * native_self = mruby_unbox_struct SDL_TouchFingerEvent(self);

  float native_field = native_self->y;

  mrb_value ruby_field = mrb_float_value(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLTouchFingerEvent_y_FIELD_WRITER
/* set_y
 *
 * Parameters:
 * - value: float
 */
mrb_value
mrb_SDL_SDLTouchFingerEvent_set_y(mrb_state* mrb, mrb_value self) {
  struct SDL_TouchFingerEvent * native_self = mruby_unbox_struct SDL_TouchFingerEvent(self);
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

#if BIND_SDLTouchFingerEvent_dx_FIELD_READER
/* get_dx
 *
 * Return Type: float
 */
mrb_value
mrb_SDL_SDLTouchFingerEvent_get_dx(mrb_state* mrb, mrb_value self) {
  struct SDL_TouchFingerEvent * native_self = mruby_unbox_struct SDL_TouchFingerEvent(self);

  float native_field = native_self->dx;

  mrb_value ruby_field = mrb_float_value(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLTouchFingerEvent_dx_FIELD_WRITER
/* set_dx
 *
 * Parameters:
 * - value: float
 */
mrb_value
mrb_SDL_SDLTouchFingerEvent_set_dx(mrb_state* mrb, mrb_value self) {
  struct SDL_TouchFingerEvent * native_self = mruby_unbox_struct SDL_TouchFingerEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->float_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Float expected");
    return mrb_nil_value();
  }

  float native_field = mrb_float(ruby_field);

  native_self->dx = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLTouchFingerEvent_dy_FIELD_READER
/* get_dy
 *
 * Return Type: float
 */
mrb_value
mrb_SDL_SDLTouchFingerEvent_get_dy(mrb_state* mrb, mrb_value self) {
  struct SDL_TouchFingerEvent * native_self = mruby_unbox_struct SDL_TouchFingerEvent(self);

  float native_field = native_self->dy;

  mrb_value ruby_field = mrb_float_value(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLTouchFingerEvent_dy_FIELD_WRITER
/* set_dy
 *
 * Parameters:
 * - value: float
 */
mrb_value
mrb_SDL_SDLTouchFingerEvent_set_dy(mrb_state* mrb, mrb_value self) {
  struct SDL_TouchFingerEvent * native_self = mruby_unbox_struct SDL_TouchFingerEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->float_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Float expected");
    return mrb_nil_value();
  }

  float native_field = mrb_float(ruby_field);

  native_self->dy = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLTouchFingerEvent_pressure_FIELD_READER
/* get_pressure
 *
 * Return Type: float
 */
mrb_value
mrb_SDL_SDLTouchFingerEvent_get_pressure(mrb_state* mrb, mrb_value self) {
  struct SDL_TouchFingerEvent * native_self = mruby_unbox_struct SDL_TouchFingerEvent(self);

  float native_field = native_self->pressure;

  mrb_value ruby_field = mrb_float_value(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLTouchFingerEvent_pressure_FIELD_WRITER
/* set_pressure
 *
 * Parameters:
 * - value: float
 */
mrb_value
mrb_SDL_SDLTouchFingerEvent_set_pressure(mrb_state* mrb, mrb_value self) {
  struct SDL_TouchFingerEvent * native_self = mruby_unbox_struct SDL_TouchFingerEvent(self);
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


void mrb_SDL_SDLTouchFingerEvent_init(mrb_state* mrb) {
  RClass* SDLTouchFingerEvent_class = mrb_define_class_under(mrb, SDL_module(mrb), "SDLTouchFingerEvent", mrb->object_class);
  MRB_SET_INSTANCE_TT(SDLTouchFingerEvent_class, MRB_TT_DATA);

#if BIND_SDLTouchFingerEvent_INITIALIZE
  mrb_define_method(mrb, SDLTouchFingerEvent_class, "initialize", mrb_SDL_SDLTouchFingerEvent_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, SDLTouchFingerEvent_class, "disown", mrb_SDL_SDLTouchFingerEvent_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, SDLTouchFingerEvent_class, "belongs_to_ruby?", mrb_SDL_SDLTouchFingerEvent_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_SDLTouchFingerEvent_type_FIELD_READER
  mrb_define_method(mrb, SDLTouchFingerEvent_class, "type", mrb_SDL_SDLTouchFingerEvent_get_type, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLTouchFingerEvent_type_FIELD_WRITER
  mrb_define_method(mrb, SDLTouchFingerEvent_class, "type=", mrb_SDL_SDLTouchFingerEvent_set_type, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLTouchFingerEvent_timestamp_FIELD_READER
  mrb_define_method(mrb, SDLTouchFingerEvent_class, "timestamp", mrb_SDL_SDLTouchFingerEvent_get_timestamp, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLTouchFingerEvent_timestamp_FIELD_WRITER
  mrb_define_method(mrb, SDLTouchFingerEvent_class, "timestamp=", mrb_SDL_SDLTouchFingerEvent_set_timestamp, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLTouchFingerEvent_touchId_FIELD_READER
  mrb_define_method(mrb, SDLTouchFingerEvent_class, "touchId", mrb_SDL_SDLTouchFingerEvent_get_touchId, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLTouchFingerEvent_touchId_FIELD_WRITER
  mrb_define_method(mrb, SDLTouchFingerEvent_class, "touchId=", mrb_SDL_SDLTouchFingerEvent_set_touchId, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLTouchFingerEvent_fingerId_FIELD_READER
  mrb_define_method(mrb, SDLTouchFingerEvent_class, "fingerId", mrb_SDL_SDLTouchFingerEvent_get_fingerId, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLTouchFingerEvent_fingerId_FIELD_WRITER
  mrb_define_method(mrb, SDLTouchFingerEvent_class, "fingerId=", mrb_SDL_SDLTouchFingerEvent_set_fingerId, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLTouchFingerEvent_x_FIELD_READER
  mrb_define_method(mrb, SDLTouchFingerEvent_class, "x", mrb_SDL_SDLTouchFingerEvent_get_x, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLTouchFingerEvent_x_FIELD_WRITER
  mrb_define_method(mrb, SDLTouchFingerEvent_class, "x=", mrb_SDL_SDLTouchFingerEvent_set_x, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLTouchFingerEvent_y_FIELD_READER
  mrb_define_method(mrb, SDLTouchFingerEvent_class, "y", mrb_SDL_SDLTouchFingerEvent_get_y, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLTouchFingerEvent_y_FIELD_WRITER
  mrb_define_method(mrb, SDLTouchFingerEvent_class, "y=", mrb_SDL_SDLTouchFingerEvent_set_y, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLTouchFingerEvent_dx_FIELD_READER
  mrb_define_method(mrb, SDLTouchFingerEvent_class, "dx", mrb_SDL_SDLTouchFingerEvent_get_dx, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLTouchFingerEvent_dx_FIELD_WRITER
  mrb_define_method(mrb, SDLTouchFingerEvent_class, "dx=", mrb_SDL_SDLTouchFingerEvent_set_dx, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLTouchFingerEvent_dy_FIELD_READER
  mrb_define_method(mrb, SDLTouchFingerEvent_class, "dy", mrb_SDL_SDLTouchFingerEvent_get_dy, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLTouchFingerEvent_dy_FIELD_WRITER
  mrb_define_method(mrb, SDLTouchFingerEvent_class, "dy=", mrb_SDL_SDLTouchFingerEvent_set_dy, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLTouchFingerEvent_pressure_FIELD_READER
  mrb_define_method(mrb, SDLTouchFingerEvent_class, "pressure", mrb_SDL_SDLTouchFingerEvent_get_pressure, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLTouchFingerEvent_pressure_FIELD_WRITER
  mrb_define_method(mrb, SDLTouchFingerEvent_class, "pressure=", mrb_SDL_SDLTouchFingerEvent_set_pressure, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
