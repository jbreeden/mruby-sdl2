/*
 * struct SDL_JoyAxisEvent
 * Defined in file SDL_events.h @ line 267
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_SDL.h"

#if BIND_SDLJoyAxisEvent_TYPE

/*
 * Class Methods
 */

#if BIND_SDLJoyAxisEvent_INITIALIZE
mrb_value
mrb_SDL_SDLJoyAxisEvent_initialize(mrb_state* mrb, mrb_value self) {
  struct SDL_JoyAxisEvent* native_object = (struct SDL_JoyAxisEvent*)malloc(sizeof(struct SDL_JoyAxisEvent));
  mruby_gift_struct SDL_JoyAxisEvent_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_SDL_SDLJoyAxisEvent_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLJoyAxisEvent.disown only accepts objects of type SDL::SDLJoyAxisEvent");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_SDL_SDLJoyAxisEvent_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLJoyAxisEvent.belongs_to_ruby only accepts objects of type SDL::SDLJoyAxisEvent");
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

#if BIND_SDLJoyAxisEvent_type_FIELD
/* get_type
 *
 * Return Type: Uint32
 */
mrb_value
mrb_SDL_SDLJoyAxisEvent_get_type(mrb_state* mrb, mrb_value self) {
  struct SDL_JoyAxisEvent * native_self = mruby_unbox_struct SDL_JoyAxisEvent(self);

  Uint32 native_field = native_self->type;

  mrb_value ruby_field = TODO_mruby_box_Uint32(mrb, native_field);

  return ruby_field;
}

/* set_type
 *
 * Parameters:
 * - value: Uint32
 */
mrb_value
mrb_SDL_SDLJoyAxisEvent_set_type(mrb_state* mrb, mrb_value self) {
  struct SDL_JoyAxisEvent * native_self = mruby_unbox_struct SDL_JoyAxisEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Uint32(ruby_field);

  Uint32 native_field = TODO_mruby_unbox_Uint32(ruby_field);

  native_self->type = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLJoyAxisEvent_timestamp_FIELD
/* get_timestamp
 *
 * Return Type: Uint32
 */
mrb_value
mrb_SDL_SDLJoyAxisEvent_get_timestamp(mrb_state* mrb, mrb_value self) {
  struct SDL_JoyAxisEvent * native_self = mruby_unbox_struct SDL_JoyAxisEvent(self);

  Uint32 native_field = native_self->timestamp;

  mrb_value ruby_field = TODO_mruby_box_Uint32(mrb, native_field);

  return ruby_field;
}

/* set_timestamp
 *
 * Parameters:
 * - value: Uint32
 */
mrb_value
mrb_SDL_SDLJoyAxisEvent_set_timestamp(mrb_state* mrb, mrb_value self) {
  struct SDL_JoyAxisEvent * native_self = mruby_unbox_struct SDL_JoyAxisEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Uint32(ruby_field);

  Uint32 native_field = TODO_mruby_unbox_Uint32(ruby_field);

  native_self->timestamp = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLJoyAxisEvent_which_FIELD
/* get_which
 *
 * Return Type: SDL_JoystickID
 */
mrb_value
mrb_SDL_SDLJoyAxisEvent_get_which(mrb_state* mrb, mrb_value self) {
  struct SDL_JoyAxisEvent * native_self = mruby_unbox_struct SDL_JoyAxisEvent(self);

  SDL_JoystickID native_field = native_self->which;

  mrb_value ruby_field = TODO_mruby_box_Sint32(mrb, native_field);

  return ruby_field;
}

/* set_which
 *
 * Parameters:
 * - value: SDL_JoystickID
 */
mrb_value
mrb_SDL_SDLJoyAxisEvent_set_which(mrb_state* mrb, mrb_value self) {
  struct SDL_JoyAxisEvent * native_self = mruby_unbox_struct SDL_JoyAxisEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Sint32(ruby_field);

  Sint32 native_field = TODO_mruby_unbox_Sint32(ruby_field);

  native_self->which = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLJoyAxisEvent_axis_FIELD
/* get_axis
 *
 * Return Type: Uint8
 */
mrb_value
mrb_SDL_SDLJoyAxisEvent_get_axis(mrb_state* mrb, mrb_value self) {
  struct SDL_JoyAxisEvent * native_self = mruby_unbox_struct SDL_JoyAxisEvent(self);

  Uint8 native_field = native_self->axis;

  mrb_value ruby_field = TODO_mruby_box_Uint8(mrb, native_field);

  return ruby_field;
}

/* set_axis
 *
 * Parameters:
 * - value: Uint8
 */
mrb_value
mrb_SDL_SDLJoyAxisEvent_set_axis(mrb_state* mrb, mrb_value self) {
  struct SDL_JoyAxisEvent * native_self = mruby_unbox_struct SDL_JoyAxisEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Uint8(ruby_field);

  Uint8 native_field = TODO_mruby_unbox_Uint8(ruby_field);

  native_self->axis = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLJoyAxisEvent_padding1_FIELD
/* get_padding1
 *
 * Return Type: Uint8
 */
mrb_value
mrb_SDL_SDLJoyAxisEvent_get_padding1(mrb_state* mrb, mrb_value self) {
  struct SDL_JoyAxisEvent * native_self = mruby_unbox_struct SDL_JoyAxisEvent(self);

  Uint8 native_field = native_self->padding1;

  mrb_value ruby_field = TODO_mruby_box_Uint8(mrb, native_field);

  return ruby_field;
}

/* set_padding1
 *
 * Parameters:
 * - value: Uint8
 */
mrb_value
mrb_SDL_SDLJoyAxisEvent_set_padding1(mrb_state* mrb, mrb_value self) {
  struct SDL_JoyAxisEvent * native_self = mruby_unbox_struct SDL_JoyAxisEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Uint8(ruby_field);

  Uint8 native_field = TODO_mruby_unbox_Uint8(ruby_field);

  native_self->padding1 = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLJoyAxisEvent_padding2_FIELD
/* get_padding2
 *
 * Return Type: Uint8
 */
mrb_value
mrb_SDL_SDLJoyAxisEvent_get_padding2(mrb_state* mrb, mrb_value self) {
  struct SDL_JoyAxisEvent * native_self = mruby_unbox_struct SDL_JoyAxisEvent(self);

  Uint8 native_field = native_self->padding2;

  mrb_value ruby_field = TODO_mruby_box_Uint8(mrb, native_field);

  return ruby_field;
}

/* set_padding2
 *
 * Parameters:
 * - value: Uint8
 */
mrb_value
mrb_SDL_SDLJoyAxisEvent_set_padding2(mrb_state* mrb, mrb_value self) {
  struct SDL_JoyAxisEvent * native_self = mruby_unbox_struct SDL_JoyAxisEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Uint8(ruby_field);

  Uint8 native_field = TODO_mruby_unbox_Uint8(ruby_field);

  native_self->padding2 = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLJoyAxisEvent_padding3_FIELD
/* get_padding3
 *
 * Return Type: Uint8
 */
mrb_value
mrb_SDL_SDLJoyAxisEvent_get_padding3(mrb_state* mrb, mrb_value self) {
  struct SDL_JoyAxisEvent * native_self = mruby_unbox_struct SDL_JoyAxisEvent(self);

  Uint8 native_field = native_self->padding3;

  mrb_value ruby_field = TODO_mruby_box_Uint8(mrb, native_field);

  return ruby_field;
}

/* set_padding3
 *
 * Parameters:
 * - value: Uint8
 */
mrb_value
mrb_SDL_SDLJoyAxisEvent_set_padding3(mrb_state* mrb, mrb_value self) {
  struct SDL_JoyAxisEvent * native_self = mruby_unbox_struct SDL_JoyAxisEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Uint8(ruby_field);

  Uint8 native_field = TODO_mruby_unbox_Uint8(ruby_field);

  native_self->padding3 = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLJoyAxisEvent_value_FIELD
/* get_value
 *
 * Return Type: Sint16
 */
mrb_value
mrb_SDL_SDLJoyAxisEvent_get_value(mrb_state* mrb, mrb_value self) {
  struct SDL_JoyAxisEvent * native_self = mruby_unbox_struct SDL_JoyAxisEvent(self);

  Sint16 native_field = native_self->value;

  mrb_value ruby_field = TODO_mruby_box_Sint16(mrb, native_field);

  return ruby_field;
}

/* set_value
 *
 * Parameters:
 * - value: Sint16
 */
mrb_value
mrb_SDL_SDLJoyAxisEvent_set_value(mrb_state* mrb, mrb_value self) {
  struct SDL_JoyAxisEvent * native_self = mruby_unbox_struct SDL_JoyAxisEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Sint16(ruby_field);

  Sint16 native_field = TODO_mruby_unbox_Sint16(ruby_field);

  native_self->value = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLJoyAxisEvent_padding4_FIELD
/* get_padding4
 *
 * Return Type: Uint16
 */
mrb_value
mrb_SDL_SDLJoyAxisEvent_get_padding4(mrb_state* mrb, mrb_value self) {
  struct SDL_JoyAxisEvent * native_self = mruby_unbox_struct SDL_JoyAxisEvent(self);

  Uint16 native_field = native_self->padding4;

  mrb_value ruby_field = TODO_mruby_box_Uint16(mrb, native_field);

  return ruby_field;
}

/* set_padding4
 *
 * Parameters:
 * - value: Uint16
 */
mrb_value
mrb_SDL_SDLJoyAxisEvent_set_padding4(mrb_state* mrb, mrb_value self) {
  struct SDL_JoyAxisEvent * native_self = mruby_unbox_struct SDL_JoyAxisEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Uint16(ruby_field);

  Uint16 native_field = TODO_mruby_unbox_Uint16(ruby_field);

  native_self->padding4 = native_field;

  return ruby_field;
}
#endif


void mrb_SDL_SDLJoyAxisEvent_init(mrb_state* mrb) {
  RClass* SDLJoyAxisEvent_class = mrb_define_class_under(mrb, SDL_module(mrb), "SDLJoyAxisEvent", mrb->object_class);
  MRB_SET_INSTANCE_TT(SDLJoyAxisEvent_class, MRB_TT_DATA);

#if BIND_SDLJoyAxisEvent_INITIALIZE
  mrb_define_method(mrb, SDLJoyAxisEvent_class, "initialize", mrb_SDL_SDLJoyAxisEvent_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, SDLJoyAxisEvent_class, "disown", mrb_SDL_SDLJoyAxisEvent_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, SDLJoyAxisEvent_class, "belongs_to_ruby?", mrb_SDL_SDLJoyAxisEvent_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_SDLJoyAxisEvent_type_FIELD
  mrb_define_method(mrb, SDLJoyAxisEvent_class, "type", mrb_SDL_SDLJoyAxisEvent_get_type, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, SDLJoyAxisEvent_class, "type=", mrb_SDL_SDLJoyAxisEvent_set_type, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLJoyAxisEvent_timestamp_FIELD
  mrb_define_method(mrb, SDLJoyAxisEvent_class, "timestamp", mrb_SDL_SDLJoyAxisEvent_get_timestamp, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, SDLJoyAxisEvent_class, "timestamp=", mrb_SDL_SDLJoyAxisEvent_set_timestamp, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLJoyAxisEvent_which_FIELD
  mrb_define_method(mrb, SDLJoyAxisEvent_class, "which", mrb_SDL_SDLJoyAxisEvent_get_which, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, SDLJoyAxisEvent_class, "which=", mrb_SDL_SDLJoyAxisEvent_set_which, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLJoyAxisEvent_axis_FIELD
  mrb_define_method(mrb, SDLJoyAxisEvent_class, "axis", mrb_SDL_SDLJoyAxisEvent_get_axis, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, SDLJoyAxisEvent_class, "axis=", mrb_SDL_SDLJoyAxisEvent_set_axis, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLJoyAxisEvent_padding1_FIELD
  mrb_define_method(mrb, SDLJoyAxisEvent_class, "padding1", mrb_SDL_SDLJoyAxisEvent_get_padding1, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, SDLJoyAxisEvent_class, "padding1=", mrb_SDL_SDLJoyAxisEvent_set_padding1, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLJoyAxisEvent_padding2_FIELD
  mrb_define_method(mrb, SDLJoyAxisEvent_class, "padding2", mrb_SDL_SDLJoyAxisEvent_get_padding2, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, SDLJoyAxisEvent_class, "padding2=", mrb_SDL_SDLJoyAxisEvent_set_padding2, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLJoyAxisEvent_padding3_FIELD
  mrb_define_method(mrb, SDLJoyAxisEvent_class, "padding3", mrb_SDL_SDLJoyAxisEvent_get_padding3, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, SDLJoyAxisEvent_class, "padding3=", mrb_SDL_SDLJoyAxisEvent_set_padding3, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLJoyAxisEvent_value_FIELD
  mrb_define_method(mrb, SDLJoyAxisEvent_class, "value", mrb_SDL_SDLJoyAxisEvent_get_value, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, SDLJoyAxisEvent_class, "value=", mrb_SDL_SDLJoyAxisEvent_set_value, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLJoyAxisEvent_padding4_FIELD
  mrb_define_method(mrb, SDLJoyAxisEvent_class, "padding4", mrb_SDL_SDLJoyAxisEvent_get_padding4, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, SDLJoyAxisEvent_class, "padding4=", mrb_SDL_SDLJoyAxisEvent_set_padding4, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
