/*
 * struct SDL_ControllerAxisEvent
 * Defined in file SDL_events.h @ line 344
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_SDL.h"

#if BIND_SDLControllerAxisEvent_TYPE

/*
 * Class Methods
 */

#if BIND_SDLControllerAxisEvent_INITIALIZE
mrb_value
mrb_SDL_SDLControllerAxisEvent_initialize(mrb_state* mrb, mrb_value self) {
  struct SDL_ControllerAxisEvent* native_object = (struct SDL_ControllerAxisEvent*)malloc(sizeof(struct SDL_ControllerAxisEvent));
  mruby_gift_SDL_ControllerAxisEvent_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_SDL_SDLControllerAxisEvent_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLControllerAxisEvent.disown only accepts objects of type SDL::SDLControllerAxisEvent");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_SDL_SDLControllerAxisEvent_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLControllerAxisEvent.belongs_to_ruby only accepts objects of type SDL::SDLControllerAxisEvent");
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

#if BIND_SDLControllerAxisEvent_type_FIELD_READER
/* get_type
 *
 * Return Type: Uint32
 */
mrb_value
mrb_SDL_SDLControllerAxisEvent_get_type(mrb_state* mrb, mrb_value self) {
  struct SDL_ControllerAxisEvent * native_self = mruby_unbox_SDL_ControllerAxisEvent(self);

  Uint32 native_field = native_self->type;

  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLControllerAxisEvent_type_FIELD_WRITER
/* set_type
 *
 * Parameters:
 * - value: Uint32
 */
mrb_value
mrb_SDL_SDLControllerAxisEvent_set_type(mrb_state* mrb, mrb_value self) {
  struct SDL_ControllerAxisEvent * native_self = mruby_unbox_SDL_ControllerAxisEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) { mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected"); return mrb_nil_value(); }

  Uint32 native_field = mrb_fixnum(ruby_field);

  native_self->type = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLControllerAxisEvent_timestamp_FIELD_READER
/* get_timestamp
 *
 * Return Type: Uint32
 */
mrb_value
mrb_SDL_SDLControllerAxisEvent_get_timestamp(mrb_state* mrb, mrb_value self) {
  struct SDL_ControllerAxisEvent * native_self = mruby_unbox_SDL_ControllerAxisEvent(self);

  Uint32 native_field = native_self->timestamp;

  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLControllerAxisEvent_timestamp_FIELD_WRITER
/* set_timestamp
 *
 * Parameters:
 * - value: Uint32
 */
mrb_value
mrb_SDL_SDLControllerAxisEvent_set_timestamp(mrb_state* mrb, mrb_value self) {
  struct SDL_ControllerAxisEvent * native_self = mruby_unbox_SDL_ControllerAxisEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) { mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected"); return mrb_nil_value(); }

  Uint32 native_field = mrb_fixnum(ruby_field);

  native_self->timestamp = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLControllerAxisEvent_which_FIELD_READER
/* get_which
 *
 * Return Type: SDL_JoystickID
 */
mrb_value
mrb_SDL_SDLControllerAxisEvent_get_which(mrb_state* mrb, mrb_value self) {
  struct SDL_ControllerAxisEvent * native_self = mruby_unbox_SDL_ControllerAxisEvent(self);

  SDL_JoystickID native_field = native_self->which;

  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLControllerAxisEvent_which_FIELD_WRITER
/* set_which
 *
 * Parameters:
 * - value: SDL_JoystickID
 */
mrb_value
mrb_SDL_SDLControllerAxisEvent_set_which(mrb_state* mrb, mrb_value self) {
  struct SDL_ControllerAxisEvent * native_self = mruby_unbox_SDL_ControllerAxisEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) { mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected"); return mrb_nil_value(); }

  Sint32 native_field = mrb_fixnum(ruby_field);

  native_self->which = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLControllerAxisEvent_axis_FIELD_READER
/* get_axis
 *
 * Return Type: Uint8
 */
mrb_value
mrb_SDL_SDLControllerAxisEvent_get_axis(mrb_state* mrb, mrb_value self) {
  struct SDL_ControllerAxisEvent * native_self = mruby_unbox_SDL_ControllerAxisEvent(self);

  Uint8 native_field = native_self->axis;

  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLControllerAxisEvent_axis_FIELD_WRITER
/* set_axis
 *
 * Parameters:
 * - value: Uint8
 */
mrb_value
mrb_SDL_SDLControllerAxisEvent_set_axis(mrb_state* mrb, mrb_value self) {
  struct SDL_ControllerAxisEvent * native_self = mruby_unbox_SDL_ControllerAxisEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) { mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected"); return mrb_nil_value(); }

  Uint8 native_field = mrb_fixnum(ruby_field);

  native_self->axis = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLControllerAxisEvent_padding1_FIELD_READER
/* get_padding1
 *
 * Return Type: Uint8
 */
mrb_value
mrb_SDL_SDLControllerAxisEvent_get_padding1(mrb_state* mrb, mrb_value self) {
  struct SDL_ControllerAxisEvent * native_self = mruby_unbox_SDL_ControllerAxisEvent(self);

  Uint8 native_field = native_self->padding1;

  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLControllerAxisEvent_padding1_FIELD_WRITER
/* set_padding1
 *
 * Parameters:
 * - value: Uint8
 */
mrb_value
mrb_SDL_SDLControllerAxisEvent_set_padding1(mrb_state* mrb, mrb_value self) {
  struct SDL_ControllerAxisEvent * native_self = mruby_unbox_SDL_ControllerAxisEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) { mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected"); return mrb_nil_value(); }

  Uint8 native_field = mrb_fixnum(ruby_field);

  native_self->padding1 = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLControllerAxisEvent_padding2_FIELD_READER
/* get_padding2
 *
 * Return Type: Uint8
 */
mrb_value
mrb_SDL_SDLControllerAxisEvent_get_padding2(mrb_state* mrb, mrb_value self) {
  struct SDL_ControllerAxisEvent * native_self = mruby_unbox_SDL_ControllerAxisEvent(self);

  Uint8 native_field = native_self->padding2;

  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLControllerAxisEvent_padding2_FIELD_WRITER
/* set_padding2
 *
 * Parameters:
 * - value: Uint8
 */
mrb_value
mrb_SDL_SDLControllerAxisEvent_set_padding2(mrb_state* mrb, mrb_value self) {
  struct SDL_ControllerAxisEvent * native_self = mruby_unbox_SDL_ControllerAxisEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) { mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected"); return mrb_nil_value(); }

  Uint8 native_field = mrb_fixnum(ruby_field);

  native_self->padding2 = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLControllerAxisEvent_padding3_FIELD_READER
/* get_padding3
 *
 * Return Type: Uint8
 */
mrb_value
mrb_SDL_SDLControllerAxisEvent_get_padding3(mrb_state* mrb, mrb_value self) {
  struct SDL_ControllerAxisEvent * native_self = mruby_unbox_SDL_ControllerAxisEvent(self);

  Uint8 native_field = native_self->padding3;

  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLControllerAxisEvent_padding3_FIELD_WRITER
/* set_padding3
 *
 * Parameters:
 * - value: Uint8
 */
mrb_value
mrb_SDL_SDLControllerAxisEvent_set_padding3(mrb_state* mrb, mrb_value self) {
  struct SDL_ControllerAxisEvent * native_self = mruby_unbox_SDL_ControllerAxisEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) { mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected"); return mrb_nil_value(); }

  Uint8 native_field = mrb_fixnum(ruby_field);

  native_self->padding3 = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLControllerAxisEvent_value_FIELD_READER
/* get_value
 *
 * Return Type: Sint16
 */
mrb_value
mrb_SDL_SDLControllerAxisEvent_get_value(mrb_state* mrb, mrb_value self) {
  struct SDL_ControllerAxisEvent * native_self = mruby_unbox_SDL_ControllerAxisEvent(self);

  Sint16 native_field = native_self->value;

  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLControllerAxisEvent_value_FIELD_WRITER
/* set_value
 *
 * Parameters:
 * - value: Sint16
 */
mrb_value
mrb_SDL_SDLControllerAxisEvent_set_value(mrb_state* mrb, mrb_value self) {
  struct SDL_ControllerAxisEvent * native_self = mruby_unbox_SDL_ControllerAxisEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) { mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected"); return mrb_nil_value(); }

  Sint16 native_field = mrb_fixnum(ruby_field);

  native_self->value = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLControllerAxisEvent_padding4_FIELD_READER
/* get_padding4
 *
 * Return Type: Uint16
 */
mrb_value
mrb_SDL_SDLControllerAxisEvent_get_padding4(mrb_state* mrb, mrb_value self) {
  struct SDL_ControllerAxisEvent * native_self = mruby_unbox_SDL_ControllerAxisEvent(self);

  Uint16 native_field = native_self->padding4;

  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLControllerAxisEvent_padding4_FIELD_WRITER
/* set_padding4
 *
 * Parameters:
 * - value: Uint16
 */
mrb_value
mrb_SDL_SDLControllerAxisEvent_set_padding4(mrb_state* mrb, mrb_value self) {
  struct SDL_ControllerAxisEvent * native_self = mruby_unbox_SDL_ControllerAxisEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) { mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected"); return mrb_nil_value(); }

  Uint16 native_field = mrb_fixnum(ruby_field);

  native_self->padding4 = native_field;

  return ruby_field;
}
#endif


void mrb_SDL_SDLControllerAxisEvent_init(mrb_state* mrb) {
  RClass* SDLControllerAxisEvent_class = mrb_define_class_under(mrb, SDL_module(mrb), "ControllerAxisEvent", mrb->object_class);
  MRB_SET_INSTANCE_TT(SDLControllerAxisEvent_class, MRB_TT_DATA);

#if BIND_SDLControllerAxisEvent_INITIALIZE
  mrb_define_method(mrb, SDLControllerAxisEvent_class, "initialize", mrb_SDL_SDLControllerAxisEvent_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, SDLControllerAxisEvent_class, "disown", mrb_SDL_SDLControllerAxisEvent_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, SDLControllerAxisEvent_class, "belongs_to_ruby?", mrb_SDL_SDLControllerAxisEvent_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_SDLControllerAxisEvent_type_FIELD_READER
  mrb_define_method(mrb, SDLControllerAxisEvent_class, "type", mrb_SDL_SDLControllerAxisEvent_get_type, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLControllerAxisEvent_type_FIELD_WRITER
  mrb_define_method(mrb, SDLControllerAxisEvent_class, "type=", mrb_SDL_SDLControllerAxisEvent_set_type, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLControllerAxisEvent_timestamp_FIELD_READER
  mrb_define_method(mrb, SDLControllerAxisEvent_class, "timestamp", mrb_SDL_SDLControllerAxisEvent_get_timestamp, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLControllerAxisEvent_timestamp_FIELD_WRITER
  mrb_define_method(mrb, SDLControllerAxisEvent_class, "timestamp=", mrb_SDL_SDLControllerAxisEvent_set_timestamp, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLControllerAxisEvent_which_FIELD_READER
  mrb_define_method(mrb, SDLControllerAxisEvent_class, "which", mrb_SDL_SDLControllerAxisEvent_get_which, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLControllerAxisEvent_which_FIELD_WRITER
  mrb_define_method(mrb, SDLControllerAxisEvent_class, "which=", mrb_SDL_SDLControllerAxisEvent_set_which, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLControllerAxisEvent_axis_FIELD_READER
  mrb_define_method(mrb, SDLControllerAxisEvent_class, "axis", mrb_SDL_SDLControllerAxisEvent_get_axis, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLControllerAxisEvent_axis_FIELD_WRITER
  mrb_define_method(mrb, SDLControllerAxisEvent_class, "axis=", mrb_SDL_SDLControllerAxisEvent_set_axis, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLControllerAxisEvent_padding1_FIELD_READER
  mrb_define_method(mrb, SDLControllerAxisEvent_class, "padding1", mrb_SDL_SDLControllerAxisEvent_get_padding1, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLControllerAxisEvent_padding1_FIELD_WRITER
  mrb_define_method(mrb, SDLControllerAxisEvent_class, "padding1=", mrb_SDL_SDLControllerAxisEvent_set_padding1, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLControllerAxisEvent_padding2_FIELD_READER
  mrb_define_method(mrb, SDLControllerAxisEvent_class, "padding2", mrb_SDL_SDLControllerAxisEvent_get_padding2, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLControllerAxisEvent_padding2_FIELD_WRITER
  mrb_define_method(mrb, SDLControllerAxisEvent_class, "padding2=", mrb_SDL_SDLControllerAxisEvent_set_padding2, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLControllerAxisEvent_padding3_FIELD_READER
  mrb_define_method(mrb, SDLControllerAxisEvent_class, "padding3", mrb_SDL_SDLControllerAxisEvent_get_padding3, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLControllerAxisEvent_padding3_FIELD_WRITER
  mrb_define_method(mrb, SDLControllerAxisEvent_class, "padding3=", mrb_SDL_SDLControllerAxisEvent_set_padding3, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLControllerAxisEvent_value_FIELD_READER
  mrb_define_method(mrb, SDLControllerAxisEvent_class, "value", mrb_SDL_SDLControllerAxisEvent_get_value, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLControllerAxisEvent_value_FIELD_WRITER
  mrb_define_method(mrb, SDLControllerAxisEvent_class, "value=", mrb_SDL_SDLControllerAxisEvent_set_value, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLControllerAxisEvent_padding4_FIELD_READER
  mrb_define_method(mrb, SDLControllerAxisEvent_class, "padding4", mrb_SDL_SDLControllerAxisEvent_get_padding4, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLControllerAxisEvent_padding4_FIELD_WRITER
  mrb_define_method(mrb, SDLControllerAxisEvent_class, "padding4=", mrb_SDL_SDLControllerAxisEvent_set_padding4, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
