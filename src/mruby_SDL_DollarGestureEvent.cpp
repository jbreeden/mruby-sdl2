/*
 * struct SDL_DollarGestureEvent
 * Defined in file SDL_events.h @ line 421
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_SDL.h"

#if BIND_SDLDollarGestureEvent_TYPE

/*
 * Class Methods
 */

#if BIND_SDLDollarGestureEvent_INITIALIZE
mrb_value
mrb_SDL_SDLDollarGestureEvent_initialize(mrb_state* mrb, mrb_value self) {
  struct SDL_DollarGestureEvent* native_object = (struct SDL_DollarGestureEvent*)malloc(sizeof(struct SDL_DollarGestureEvent));
  mruby_gift_SDL_DollarGestureEvent_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_SDL_SDLDollarGestureEvent_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLDollarGestureEvent.disown only accepts objects of type SDL::SDLDollarGestureEvent");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_SDL_SDLDollarGestureEvent_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLDollarGestureEvent.belongs_to_ruby only accepts objects of type SDL::SDLDollarGestureEvent");
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

#if BIND_SDLDollarGestureEvent_type_FIELD_READER
/* get_type
 *
 * Return Type: Uint32
 */
mrb_value
mrb_SDL_SDLDollarGestureEvent_get_type(mrb_state* mrb, mrb_value self) {
  struct SDL_DollarGestureEvent * native_self = mruby_unbox_SDL_DollarGestureEvent(self);

  Uint32 native_field = native_self->type;

  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLDollarGestureEvent_type_FIELD_WRITER
/* set_type
 *
 * Parameters:
 * - value: Uint32
 */
mrb_value
mrb_SDL_SDLDollarGestureEvent_set_type(mrb_state* mrb, mrb_value self) {
  struct SDL_DollarGestureEvent * native_self = mruby_unbox_SDL_DollarGestureEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) { mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected"); return mrb_nil_value(); }

  Uint32 native_field = mrb_fixnum(ruby_field);

  native_self->type = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLDollarGestureEvent_timestamp_FIELD_READER
/* get_timestamp
 *
 * Return Type: Uint32
 */
mrb_value
mrb_SDL_SDLDollarGestureEvent_get_timestamp(mrb_state* mrb, mrb_value self) {
  struct SDL_DollarGestureEvent * native_self = mruby_unbox_SDL_DollarGestureEvent(self);

  Uint32 native_field = native_self->timestamp;

  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLDollarGestureEvent_timestamp_FIELD_WRITER
/* set_timestamp
 *
 * Parameters:
 * - value: Uint32
 */
mrb_value
mrb_SDL_SDLDollarGestureEvent_set_timestamp(mrb_state* mrb, mrb_value self) {
  struct SDL_DollarGestureEvent * native_self = mruby_unbox_SDL_DollarGestureEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) { mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected"); return mrb_nil_value(); }

  Uint32 native_field = mrb_fixnum(ruby_field);

  native_self->timestamp = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLDollarGestureEvent_touchId_FIELD_READER
/* get_touchId
 *
 * Return Type: SDL_TouchID
 */
mrb_value
mrb_SDL_SDLDollarGestureEvent_get_touchId(mrb_state* mrb, mrb_value self) {
  struct SDL_DollarGestureEvent * native_self = mruby_unbox_SDL_DollarGestureEvent(self);

  SDL_TouchID native_field = native_self->touchId;

  mrb_value ruby_field = TODO_mruby_box_Sint64(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLDollarGestureEvent_touchId_FIELD_WRITER
/* set_touchId
 *
 * Parameters:
 * - value: SDL_TouchID
 */
mrb_value
mrb_SDL_SDLDollarGestureEvent_set_touchId(mrb_state* mrb, mrb_value self) {
  struct SDL_DollarGestureEvent * native_self = mruby_unbox_SDL_DollarGestureEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Sint64(ruby_field);

  Sint64 native_field = TODO_mruby_unbox_Sint64(ruby_field);

  native_self->touchId = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLDollarGestureEvent_gestureId_FIELD_READER
/* get_gestureId
 *
 * Return Type: SDL_GestureID
 */
mrb_value
mrb_SDL_SDLDollarGestureEvent_get_gestureId(mrb_state* mrb, mrb_value self) {
  struct SDL_DollarGestureEvent * native_self = mruby_unbox_SDL_DollarGestureEvent(self);

  SDL_GestureID native_field = native_self->gestureId;

  mrb_value ruby_field = TODO_mruby_box_Sint64(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLDollarGestureEvent_gestureId_FIELD_WRITER
/* set_gestureId
 *
 * Parameters:
 * - value: SDL_GestureID
 */
mrb_value
mrb_SDL_SDLDollarGestureEvent_set_gestureId(mrb_state* mrb, mrb_value self) {
  struct SDL_DollarGestureEvent * native_self = mruby_unbox_SDL_DollarGestureEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Sint64(ruby_field);

  Sint64 native_field = TODO_mruby_unbox_Sint64(ruby_field);

  native_self->gestureId = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLDollarGestureEvent_numFingers_FIELD_READER
/* get_numFingers
 *
 * Return Type: Uint32
 */
mrb_value
mrb_SDL_SDLDollarGestureEvent_get_numFingers(mrb_state* mrb, mrb_value self) {
  struct SDL_DollarGestureEvent * native_self = mruby_unbox_SDL_DollarGestureEvent(self);

  Uint32 native_field = native_self->numFingers;

  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLDollarGestureEvent_numFingers_FIELD_WRITER
/* set_numFingers
 *
 * Parameters:
 * - value: Uint32
 */
mrb_value
mrb_SDL_SDLDollarGestureEvent_set_numFingers(mrb_state* mrb, mrb_value self) {
  struct SDL_DollarGestureEvent * native_self = mruby_unbox_SDL_DollarGestureEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) { mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected"); return mrb_nil_value(); }

  Uint32 native_field = mrb_fixnum(ruby_field);

  native_self->numFingers = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLDollarGestureEvent_error_FIELD_READER
/* get_error
 *
 * Return Type: float
 */
mrb_value
mrb_SDL_SDLDollarGestureEvent_get_error(mrb_state* mrb, mrb_value self) {
  struct SDL_DollarGestureEvent * native_self = mruby_unbox_SDL_DollarGestureEvent(self);

  float native_field = native_self->error;

  mrb_value ruby_field = mrb_float_value(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLDollarGestureEvent_error_FIELD_WRITER
/* set_error
 *
 * Parameters:
 * - value: float
 */
mrb_value
mrb_SDL_SDLDollarGestureEvent_set_error(mrb_state* mrb, mrb_value self) {
  struct SDL_DollarGestureEvent * native_self = mruby_unbox_SDL_DollarGestureEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->float_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Float expected");
    return mrb_nil_value();
  }

  float native_field = mrb_float(ruby_field);

  native_self->error = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLDollarGestureEvent_x_FIELD_READER
/* get_x
 *
 * Return Type: float
 */
mrb_value
mrb_SDL_SDLDollarGestureEvent_get_x(mrb_state* mrb, mrb_value self) {
  struct SDL_DollarGestureEvent * native_self = mruby_unbox_SDL_DollarGestureEvent(self);

  float native_field = native_self->x;

  mrb_value ruby_field = mrb_float_value(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLDollarGestureEvent_x_FIELD_WRITER
/* set_x
 *
 * Parameters:
 * - value: float
 */
mrb_value
mrb_SDL_SDLDollarGestureEvent_set_x(mrb_state* mrb, mrb_value self) {
  struct SDL_DollarGestureEvent * native_self = mruby_unbox_SDL_DollarGestureEvent(self);
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

#if BIND_SDLDollarGestureEvent_y_FIELD_READER
/* get_y
 *
 * Return Type: float
 */
mrb_value
mrb_SDL_SDLDollarGestureEvent_get_y(mrb_state* mrb, mrb_value self) {
  struct SDL_DollarGestureEvent * native_self = mruby_unbox_SDL_DollarGestureEvent(self);

  float native_field = native_self->y;

  mrb_value ruby_field = mrb_float_value(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLDollarGestureEvent_y_FIELD_WRITER
/* set_y
 *
 * Parameters:
 * - value: float
 */
mrb_value
mrb_SDL_SDLDollarGestureEvent_set_y(mrb_state* mrb, mrb_value self) {
  struct SDL_DollarGestureEvent * native_self = mruby_unbox_SDL_DollarGestureEvent(self);
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


void mrb_SDL_SDLDollarGestureEvent_init(mrb_state* mrb) {
  RClass* SDLDollarGestureEvent_class = mrb_define_class_under(mrb, SDL_module(mrb), "DollarGestureEvent", mrb->object_class);
  MRB_SET_INSTANCE_TT(SDLDollarGestureEvent_class, MRB_TT_DATA);

#if BIND_SDLDollarGestureEvent_INITIALIZE
  mrb_define_method(mrb, SDLDollarGestureEvent_class, "initialize", mrb_SDL_SDLDollarGestureEvent_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, SDLDollarGestureEvent_class, "disown", mrb_SDL_SDLDollarGestureEvent_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, SDLDollarGestureEvent_class, "belongs_to_ruby?", mrb_SDL_SDLDollarGestureEvent_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_SDLDollarGestureEvent_type_FIELD_READER
  mrb_define_method(mrb, SDLDollarGestureEvent_class, "type", mrb_SDL_SDLDollarGestureEvent_get_type, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLDollarGestureEvent_type_FIELD_WRITER
  mrb_define_method(mrb, SDLDollarGestureEvent_class, "type=", mrb_SDL_SDLDollarGestureEvent_set_type, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLDollarGestureEvent_timestamp_FIELD_READER
  mrb_define_method(mrb, SDLDollarGestureEvent_class, "timestamp", mrb_SDL_SDLDollarGestureEvent_get_timestamp, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLDollarGestureEvent_timestamp_FIELD_WRITER
  mrb_define_method(mrb, SDLDollarGestureEvent_class, "timestamp=", mrb_SDL_SDLDollarGestureEvent_set_timestamp, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLDollarGestureEvent_touchId_FIELD_READER
  mrb_define_method(mrb, SDLDollarGestureEvent_class, "touchId", mrb_SDL_SDLDollarGestureEvent_get_touchId, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLDollarGestureEvent_touchId_FIELD_WRITER
  mrb_define_method(mrb, SDLDollarGestureEvent_class, "touchId=", mrb_SDL_SDLDollarGestureEvent_set_touchId, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLDollarGestureEvent_gestureId_FIELD_READER
  mrb_define_method(mrb, SDLDollarGestureEvent_class, "gestureId", mrb_SDL_SDLDollarGestureEvent_get_gestureId, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLDollarGestureEvent_gestureId_FIELD_WRITER
  mrb_define_method(mrb, SDLDollarGestureEvent_class, "gestureId=", mrb_SDL_SDLDollarGestureEvent_set_gestureId, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLDollarGestureEvent_numFingers_FIELD_READER
  mrb_define_method(mrb, SDLDollarGestureEvent_class, "numFingers", mrb_SDL_SDLDollarGestureEvent_get_numFingers, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLDollarGestureEvent_numFingers_FIELD_WRITER
  mrb_define_method(mrb, SDLDollarGestureEvent_class, "numFingers=", mrb_SDL_SDLDollarGestureEvent_set_numFingers, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLDollarGestureEvent_error_FIELD_READER
  mrb_define_method(mrb, SDLDollarGestureEvent_class, "error", mrb_SDL_SDLDollarGestureEvent_get_error, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLDollarGestureEvent_error_FIELD_WRITER
  mrb_define_method(mrb, SDLDollarGestureEvent_class, "error=", mrb_SDL_SDLDollarGestureEvent_set_error, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLDollarGestureEvent_x_FIELD_READER
  mrb_define_method(mrb, SDLDollarGestureEvent_class, "x", mrb_SDL_SDLDollarGestureEvent_get_x, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLDollarGestureEvent_x_FIELD_WRITER
  mrb_define_method(mrb, SDLDollarGestureEvent_class, "x=", mrb_SDL_SDLDollarGestureEvent_set_x, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLDollarGestureEvent_y_FIELD_READER
  mrb_define_method(mrb, SDLDollarGestureEvent_class, "y", mrb_SDL_SDLDollarGestureEvent_get_y, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLDollarGestureEvent_y_FIELD_WRITER
  mrb_define_method(mrb, SDLDollarGestureEvent_class, "y=", mrb_SDL_SDLDollarGestureEvent_set_y, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
