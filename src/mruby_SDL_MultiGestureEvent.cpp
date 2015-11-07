/*
 * struct SDL_MultiGestureEvent
 * Defined in file SDL_events.h @ line 404
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_SDL.h"

#if BIND_SDLMultiGestureEvent_TYPE

/*
 * Class Methods
 */

#if BIND_SDLMultiGestureEvent_INITIALIZE
mrb_value
mrb_SDL_SDLMultiGestureEvent_initialize(mrb_state* mrb, mrb_value self) {
  struct SDL_MultiGestureEvent* native_object = (struct SDL_MultiGestureEvent*)malloc(sizeof(struct SDL_MultiGestureEvent));
  mruby_gift_struct SDL_MultiGestureEvent_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_SDL_SDLMultiGestureEvent_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLMultiGestureEvent.disown only accepts objects of type SDL::SDLMultiGestureEvent");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_SDL_SDLMultiGestureEvent_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLMultiGestureEvent.belongs_to_ruby only accepts objects of type SDL::SDLMultiGestureEvent");
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

#if BIND_SDLMultiGestureEvent_type_FIELD_READER
/* get_type
 *
 * Return Type: Uint32
 */
mrb_value
mrb_SDL_SDLMultiGestureEvent_get_type(mrb_state* mrb, mrb_value self) {
  struct SDL_MultiGestureEvent * native_self = mruby_unbox_struct SDL_MultiGestureEvent(self);

  Uint32 native_field = native_self->type;

  mrb_value ruby_field = TODO_mruby_box_Uint32(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLMultiGestureEvent_type_FIELD_WRITER
/* set_type
 *
 * Parameters:
 * - value: Uint32
 */
mrb_value
mrb_SDL_SDLMultiGestureEvent_set_type(mrb_state* mrb, mrb_value self) {
  struct SDL_MultiGestureEvent * native_self = mruby_unbox_struct SDL_MultiGestureEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Uint32(ruby_field);

  Uint32 native_field = TODO_mruby_unbox_Uint32(ruby_field);

  native_self->type = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLMultiGestureEvent_timestamp_FIELD_READER
/* get_timestamp
 *
 * Return Type: Uint32
 */
mrb_value
mrb_SDL_SDLMultiGestureEvent_get_timestamp(mrb_state* mrb, mrb_value self) {
  struct SDL_MultiGestureEvent * native_self = mruby_unbox_struct SDL_MultiGestureEvent(self);

  Uint32 native_field = native_self->timestamp;

  mrb_value ruby_field = TODO_mruby_box_Uint32(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLMultiGestureEvent_timestamp_FIELD_WRITER
/* set_timestamp
 *
 * Parameters:
 * - value: Uint32
 */
mrb_value
mrb_SDL_SDLMultiGestureEvent_set_timestamp(mrb_state* mrb, mrb_value self) {
  struct SDL_MultiGestureEvent * native_self = mruby_unbox_struct SDL_MultiGestureEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Uint32(ruby_field);

  Uint32 native_field = TODO_mruby_unbox_Uint32(ruby_field);

  native_self->timestamp = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLMultiGestureEvent_touchId_FIELD_READER
/* get_touchId
 *
 * Return Type: SDL_TouchID
 */
mrb_value
mrb_SDL_SDLMultiGestureEvent_get_touchId(mrb_state* mrb, mrb_value self) {
  struct SDL_MultiGestureEvent * native_self = mruby_unbox_struct SDL_MultiGestureEvent(self);

  SDL_TouchID native_field = native_self->touchId;

  mrb_value ruby_field = TODO_mruby_box_Sint64(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLMultiGestureEvent_touchId_FIELD_WRITER
/* set_touchId
 *
 * Parameters:
 * - value: SDL_TouchID
 */
mrb_value
mrb_SDL_SDLMultiGestureEvent_set_touchId(mrb_state* mrb, mrb_value self) {
  struct SDL_MultiGestureEvent * native_self = mruby_unbox_struct SDL_MultiGestureEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Sint64(ruby_field);

  Sint64 native_field = TODO_mruby_unbox_Sint64(ruby_field);

  native_self->touchId = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLMultiGestureEvent_dTheta_FIELD_READER
/* get_dTheta
 *
 * Return Type: float
 */
mrb_value
mrb_SDL_SDLMultiGestureEvent_get_dTheta(mrb_state* mrb, mrb_value self) {
  struct SDL_MultiGestureEvent * native_self = mruby_unbox_struct SDL_MultiGestureEvent(self);

  float native_field = native_self->dTheta;

  mrb_value ruby_field = mrb_float_value(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLMultiGestureEvent_dTheta_FIELD_WRITER
/* set_dTheta
 *
 * Parameters:
 * - value: float
 */
mrb_value
mrb_SDL_SDLMultiGestureEvent_set_dTheta(mrb_state* mrb, mrb_value self) {
  struct SDL_MultiGestureEvent * native_self = mruby_unbox_struct SDL_MultiGestureEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->float_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Float expected");
    return mrb_nil_value();
  }

  float native_field = mrb_float(ruby_field);

  native_self->dTheta = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLMultiGestureEvent_dDist_FIELD_READER
/* get_dDist
 *
 * Return Type: float
 */
mrb_value
mrb_SDL_SDLMultiGestureEvent_get_dDist(mrb_state* mrb, mrb_value self) {
  struct SDL_MultiGestureEvent * native_self = mruby_unbox_struct SDL_MultiGestureEvent(self);

  float native_field = native_self->dDist;

  mrb_value ruby_field = mrb_float_value(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLMultiGestureEvent_dDist_FIELD_WRITER
/* set_dDist
 *
 * Parameters:
 * - value: float
 */
mrb_value
mrb_SDL_SDLMultiGestureEvent_set_dDist(mrb_state* mrb, mrb_value self) {
  struct SDL_MultiGestureEvent * native_self = mruby_unbox_struct SDL_MultiGestureEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->float_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Float expected");
    return mrb_nil_value();
  }

  float native_field = mrb_float(ruby_field);

  native_self->dDist = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLMultiGestureEvent_x_FIELD_READER
/* get_x
 *
 * Return Type: float
 */
mrb_value
mrb_SDL_SDLMultiGestureEvent_get_x(mrb_state* mrb, mrb_value self) {
  struct SDL_MultiGestureEvent * native_self = mruby_unbox_struct SDL_MultiGestureEvent(self);

  float native_field = native_self->x;

  mrb_value ruby_field = mrb_float_value(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLMultiGestureEvent_x_FIELD_WRITER
/* set_x
 *
 * Parameters:
 * - value: float
 */
mrb_value
mrb_SDL_SDLMultiGestureEvent_set_x(mrb_state* mrb, mrb_value self) {
  struct SDL_MultiGestureEvent * native_self = mruby_unbox_struct SDL_MultiGestureEvent(self);
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

#if BIND_SDLMultiGestureEvent_y_FIELD_READER
/* get_y
 *
 * Return Type: float
 */
mrb_value
mrb_SDL_SDLMultiGestureEvent_get_y(mrb_state* mrb, mrb_value self) {
  struct SDL_MultiGestureEvent * native_self = mruby_unbox_struct SDL_MultiGestureEvent(self);

  float native_field = native_self->y;

  mrb_value ruby_field = mrb_float_value(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLMultiGestureEvent_y_FIELD_WRITER
/* set_y
 *
 * Parameters:
 * - value: float
 */
mrb_value
mrb_SDL_SDLMultiGestureEvent_set_y(mrb_state* mrb, mrb_value self) {
  struct SDL_MultiGestureEvent * native_self = mruby_unbox_struct SDL_MultiGestureEvent(self);
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

#if BIND_SDLMultiGestureEvent_numFingers_FIELD_READER
/* get_numFingers
 *
 * Return Type: Uint16
 */
mrb_value
mrb_SDL_SDLMultiGestureEvent_get_numFingers(mrb_state* mrb, mrb_value self) {
  struct SDL_MultiGestureEvent * native_self = mruby_unbox_struct SDL_MultiGestureEvent(self);

  Uint16 native_field = native_self->numFingers;

  mrb_value ruby_field = TODO_mruby_box_Uint16(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLMultiGestureEvent_numFingers_FIELD_WRITER
/* set_numFingers
 *
 * Parameters:
 * - value: Uint16
 */
mrb_value
mrb_SDL_SDLMultiGestureEvent_set_numFingers(mrb_state* mrb, mrb_value self) {
  struct SDL_MultiGestureEvent * native_self = mruby_unbox_struct SDL_MultiGestureEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Uint16(ruby_field);

  Uint16 native_field = TODO_mruby_unbox_Uint16(ruby_field);

  native_self->numFingers = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLMultiGestureEvent_padding_FIELD_READER
/* get_padding
 *
 * Return Type: Uint16
 */
mrb_value
mrb_SDL_SDLMultiGestureEvent_get_padding(mrb_state* mrb, mrb_value self) {
  struct SDL_MultiGestureEvent * native_self = mruby_unbox_struct SDL_MultiGestureEvent(self);

  Uint16 native_field = native_self->padding;

  mrb_value ruby_field = TODO_mruby_box_Uint16(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLMultiGestureEvent_padding_FIELD_WRITER
/* set_padding
 *
 * Parameters:
 * - value: Uint16
 */
mrb_value
mrb_SDL_SDLMultiGestureEvent_set_padding(mrb_state* mrb, mrb_value self) {
  struct SDL_MultiGestureEvent * native_self = mruby_unbox_struct SDL_MultiGestureEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Uint16(ruby_field);

  Uint16 native_field = TODO_mruby_unbox_Uint16(ruby_field);

  native_self->padding = native_field;

  return ruby_field;
}
#endif


void mrb_SDL_SDLMultiGestureEvent_init(mrb_state* mrb) {
  RClass* SDLMultiGestureEvent_class = mrb_define_class_under(mrb, SDL_module(mrb), "MultiGestureEvent", mrb->object_class);
  MRB_SET_INSTANCE_TT(SDLMultiGestureEvent_class, MRB_TT_DATA);

#if BIND_SDLMultiGestureEvent_INITIALIZE
  mrb_define_method(mrb, SDLMultiGestureEvent_class, "initialize", mrb_SDL_SDLMultiGestureEvent_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, SDLMultiGestureEvent_class, "disown", mrb_SDL_SDLMultiGestureEvent_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, SDLMultiGestureEvent_class, "belongs_to_ruby?", mrb_SDL_SDLMultiGestureEvent_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_SDLMultiGestureEvent_type_FIELD_READER
  mrb_define_method(mrb, SDLMultiGestureEvent_class, "type", mrb_SDL_SDLMultiGestureEvent_get_type, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLMultiGestureEvent_type_FIELD_WRITER
  mrb_define_method(mrb, SDLMultiGestureEvent_class, "type=", mrb_SDL_SDLMultiGestureEvent_set_type, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLMultiGestureEvent_timestamp_FIELD_READER
  mrb_define_method(mrb, SDLMultiGestureEvent_class, "timestamp", mrb_SDL_SDLMultiGestureEvent_get_timestamp, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLMultiGestureEvent_timestamp_FIELD_WRITER
  mrb_define_method(mrb, SDLMultiGestureEvent_class, "timestamp=", mrb_SDL_SDLMultiGestureEvent_set_timestamp, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLMultiGestureEvent_touchId_FIELD_READER
  mrb_define_method(mrb, SDLMultiGestureEvent_class, "touchId", mrb_SDL_SDLMultiGestureEvent_get_touchId, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLMultiGestureEvent_touchId_FIELD_WRITER
  mrb_define_method(mrb, SDLMultiGestureEvent_class, "touchId=", mrb_SDL_SDLMultiGestureEvent_set_touchId, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLMultiGestureEvent_dTheta_FIELD_READER
  mrb_define_method(mrb, SDLMultiGestureEvent_class, "dTheta", mrb_SDL_SDLMultiGestureEvent_get_dTheta, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLMultiGestureEvent_dTheta_FIELD_WRITER
  mrb_define_method(mrb, SDLMultiGestureEvent_class, "dTheta=", mrb_SDL_SDLMultiGestureEvent_set_dTheta, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLMultiGestureEvent_dDist_FIELD_READER
  mrb_define_method(mrb, SDLMultiGestureEvent_class, "dDist", mrb_SDL_SDLMultiGestureEvent_get_dDist, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLMultiGestureEvent_dDist_FIELD_WRITER
  mrb_define_method(mrb, SDLMultiGestureEvent_class, "dDist=", mrb_SDL_SDLMultiGestureEvent_set_dDist, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLMultiGestureEvent_x_FIELD_READER
  mrb_define_method(mrb, SDLMultiGestureEvent_class, "x", mrb_SDL_SDLMultiGestureEvent_get_x, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLMultiGestureEvent_x_FIELD_WRITER
  mrb_define_method(mrb, SDLMultiGestureEvent_class, "x=", mrb_SDL_SDLMultiGestureEvent_set_x, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLMultiGestureEvent_y_FIELD_READER
  mrb_define_method(mrb, SDLMultiGestureEvent_class, "y", mrb_SDL_SDLMultiGestureEvent_get_y, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLMultiGestureEvent_y_FIELD_WRITER
  mrb_define_method(mrb, SDLMultiGestureEvent_class, "y=", mrb_SDL_SDLMultiGestureEvent_set_y, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLMultiGestureEvent_numFingers_FIELD_READER
  mrb_define_method(mrb, SDLMultiGestureEvent_class, "numFingers", mrb_SDL_SDLMultiGestureEvent_get_numFingers, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLMultiGestureEvent_numFingers_FIELD_WRITER
  mrb_define_method(mrb, SDLMultiGestureEvent_class, "numFingers=", mrb_SDL_SDLMultiGestureEvent_set_numFingers, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLMultiGestureEvent_padding_FIELD_READER
  mrb_define_method(mrb, SDLMultiGestureEvent_class, "padding", mrb_SDL_SDLMultiGestureEvent_get_padding, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLMultiGestureEvent_padding_FIELD_WRITER
  mrb_define_method(mrb, SDLMultiGestureEvent_class, "padding=", mrb_SDL_SDLMultiGestureEvent_set_padding, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
