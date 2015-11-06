/*
 * struct SDL_ControllerButtonEvent
 * Defined in file SDL_events.h @ line 361
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_SDL.h"

#if BIND_SDLControllerButtonEvent_TYPE

/*
 * Class Methods
 */

#if BIND_SDLControllerButtonEvent_INITIALIZE
mrb_value
mrb_SDL_SDLControllerButtonEvent_initialize(mrb_state* mrb, mrb_value self) {
  struct SDL_ControllerButtonEvent* native_object = (struct SDL_ControllerButtonEvent*)malloc(sizeof(struct SDL_ControllerButtonEvent));
  mruby_gift_struct SDL_ControllerButtonEvent_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_SDL_SDLControllerButtonEvent_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLControllerButtonEvent.disown only accepts objects of type SDL::SDLControllerButtonEvent");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_SDL_SDLControllerButtonEvent_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLControllerButtonEvent.belongs_to_ruby only accepts objects of type SDL::SDLControllerButtonEvent");
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

#if BIND_SDLControllerButtonEvent_type_FIELD_READER
/* get_type
 *
 * Return Type: Uint32
 */
mrb_value
mrb_SDL_SDLControllerButtonEvent_get_type(mrb_state* mrb, mrb_value self) {
  struct SDL_ControllerButtonEvent * native_self = mruby_unbox_struct SDL_ControllerButtonEvent(self);

  Uint32 native_field = native_self->type;

  mrb_value ruby_field = TODO_mruby_box_Uint32(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLControllerButtonEvent_type_FIELD_WRITER
/* set_type
 *
 * Parameters:
 * - value: Uint32
 */
mrb_value
mrb_SDL_SDLControllerButtonEvent_set_type(mrb_state* mrb, mrb_value self) {
  struct SDL_ControllerButtonEvent * native_self = mruby_unbox_struct SDL_ControllerButtonEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Uint32(ruby_field);

  Uint32 native_field = TODO_mruby_unbox_Uint32(ruby_field);

  native_self->type = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLControllerButtonEvent_timestamp_FIELD_READER
/* get_timestamp
 *
 * Return Type: Uint32
 */
mrb_value
mrb_SDL_SDLControllerButtonEvent_get_timestamp(mrb_state* mrb, mrb_value self) {
  struct SDL_ControllerButtonEvent * native_self = mruby_unbox_struct SDL_ControllerButtonEvent(self);

  Uint32 native_field = native_self->timestamp;

  mrb_value ruby_field = TODO_mruby_box_Uint32(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLControllerButtonEvent_timestamp_FIELD_WRITER
/* set_timestamp
 *
 * Parameters:
 * - value: Uint32
 */
mrb_value
mrb_SDL_SDLControllerButtonEvent_set_timestamp(mrb_state* mrb, mrb_value self) {
  struct SDL_ControllerButtonEvent * native_self = mruby_unbox_struct SDL_ControllerButtonEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Uint32(ruby_field);

  Uint32 native_field = TODO_mruby_unbox_Uint32(ruby_field);

  native_self->timestamp = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLControllerButtonEvent_which_FIELD_READER
/* get_which
 *
 * Return Type: SDL_JoystickID
 */
mrb_value
mrb_SDL_SDLControllerButtonEvent_get_which(mrb_state* mrb, mrb_value self) {
  struct SDL_ControllerButtonEvent * native_self = mruby_unbox_struct SDL_ControllerButtonEvent(self);

  SDL_JoystickID native_field = native_self->which;

  mrb_value ruby_field = TODO_mruby_box_Sint32(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLControllerButtonEvent_which_FIELD_WRITER
/* set_which
 *
 * Parameters:
 * - value: SDL_JoystickID
 */
mrb_value
mrb_SDL_SDLControllerButtonEvent_set_which(mrb_state* mrb, mrb_value self) {
  struct SDL_ControllerButtonEvent * native_self = mruby_unbox_struct SDL_ControllerButtonEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Sint32(ruby_field);

  Sint32 native_field = TODO_mruby_unbox_Sint32(ruby_field);

  native_self->which = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLControllerButtonEvent_button_FIELD_READER
/* get_button
 *
 * Return Type: Uint8
 */
mrb_value
mrb_SDL_SDLControllerButtonEvent_get_button(mrb_state* mrb, mrb_value self) {
  struct SDL_ControllerButtonEvent * native_self = mruby_unbox_struct SDL_ControllerButtonEvent(self);

  Uint8 native_field = native_self->button;

  mrb_value ruby_field = TODO_mruby_box_Uint8(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLControllerButtonEvent_button_FIELD_WRITER
/* set_button
 *
 * Parameters:
 * - value: Uint8
 */
mrb_value
mrb_SDL_SDLControllerButtonEvent_set_button(mrb_state* mrb, mrb_value self) {
  struct SDL_ControllerButtonEvent * native_self = mruby_unbox_struct SDL_ControllerButtonEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Uint8(ruby_field);

  Uint8 native_field = TODO_mruby_unbox_Uint8(ruby_field);

  native_self->button = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLControllerButtonEvent_state_FIELD_READER
/* get_state
 *
 * Return Type: Uint8
 */
mrb_value
mrb_SDL_SDLControllerButtonEvent_get_state(mrb_state* mrb, mrb_value self) {
  struct SDL_ControllerButtonEvent * native_self = mruby_unbox_struct SDL_ControllerButtonEvent(self);

  Uint8 native_field = native_self->state;

  mrb_value ruby_field = TODO_mruby_box_Uint8(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLControllerButtonEvent_state_FIELD_WRITER
/* set_state
 *
 * Parameters:
 * - value: Uint8
 */
mrb_value
mrb_SDL_SDLControllerButtonEvent_set_state(mrb_state* mrb, mrb_value self) {
  struct SDL_ControllerButtonEvent * native_self = mruby_unbox_struct SDL_ControllerButtonEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Uint8(ruby_field);

  Uint8 native_field = TODO_mruby_unbox_Uint8(ruby_field);

  native_self->state = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLControllerButtonEvent_padding1_FIELD_READER
/* get_padding1
 *
 * Return Type: Uint8
 */
mrb_value
mrb_SDL_SDLControllerButtonEvent_get_padding1(mrb_state* mrb, mrb_value self) {
  struct SDL_ControllerButtonEvent * native_self = mruby_unbox_struct SDL_ControllerButtonEvent(self);

  Uint8 native_field = native_self->padding1;

  mrb_value ruby_field = TODO_mruby_box_Uint8(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLControllerButtonEvent_padding1_FIELD_WRITER
/* set_padding1
 *
 * Parameters:
 * - value: Uint8
 */
mrb_value
mrb_SDL_SDLControllerButtonEvent_set_padding1(mrb_state* mrb, mrb_value self) {
  struct SDL_ControllerButtonEvent * native_self = mruby_unbox_struct SDL_ControllerButtonEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Uint8(ruby_field);

  Uint8 native_field = TODO_mruby_unbox_Uint8(ruby_field);

  native_self->padding1 = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLControllerButtonEvent_padding2_FIELD_READER
/* get_padding2
 *
 * Return Type: Uint8
 */
mrb_value
mrb_SDL_SDLControllerButtonEvent_get_padding2(mrb_state* mrb, mrb_value self) {
  struct SDL_ControllerButtonEvent * native_self = mruby_unbox_struct SDL_ControllerButtonEvent(self);

  Uint8 native_field = native_self->padding2;

  mrb_value ruby_field = TODO_mruby_box_Uint8(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLControllerButtonEvent_padding2_FIELD_WRITER
/* set_padding2
 *
 * Parameters:
 * - value: Uint8
 */
mrb_value
mrb_SDL_SDLControllerButtonEvent_set_padding2(mrb_state* mrb, mrb_value self) {
  struct SDL_ControllerButtonEvent * native_self = mruby_unbox_struct SDL_ControllerButtonEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Uint8(ruby_field);

  Uint8 native_field = TODO_mruby_unbox_Uint8(ruby_field);

  native_self->padding2 = native_field;

  return ruby_field;
}
#endif


void mrb_SDL_SDLControllerButtonEvent_init(mrb_state* mrb) {
  RClass* SDLControllerButtonEvent_class = mrb_define_class_under(mrb, SDL_module(mrb), "SDLControllerButtonEvent", mrb->object_class);
  MRB_SET_INSTANCE_TT(SDLControllerButtonEvent_class, MRB_TT_DATA);

#if BIND_SDLControllerButtonEvent_INITIALIZE
  mrb_define_method(mrb, SDLControllerButtonEvent_class, "initialize", mrb_SDL_SDLControllerButtonEvent_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, SDLControllerButtonEvent_class, "disown", mrb_SDL_SDLControllerButtonEvent_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, SDLControllerButtonEvent_class, "belongs_to_ruby?", mrb_SDL_SDLControllerButtonEvent_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_SDLControllerButtonEvent_type_FIELD_READER
  mrb_define_method(mrb, SDLControllerButtonEvent_class, "type", mrb_SDL_SDLControllerButtonEvent_get_type, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLControllerButtonEvent_type_FIELD_WRITER
  mrb_define_method(mrb, SDLControllerButtonEvent_class, "type=", mrb_SDL_SDLControllerButtonEvent_set_type, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLControllerButtonEvent_timestamp_FIELD_READER
  mrb_define_method(mrb, SDLControllerButtonEvent_class, "timestamp", mrb_SDL_SDLControllerButtonEvent_get_timestamp, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLControllerButtonEvent_timestamp_FIELD_WRITER
  mrb_define_method(mrb, SDLControllerButtonEvent_class, "timestamp=", mrb_SDL_SDLControllerButtonEvent_set_timestamp, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLControllerButtonEvent_which_FIELD_READER
  mrb_define_method(mrb, SDLControllerButtonEvent_class, "which", mrb_SDL_SDLControllerButtonEvent_get_which, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLControllerButtonEvent_which_FIELD_WRITER
  mrb_define_method(mrb, SDLControllerButtonEvent_class, "which=", mrb_SDL_SDLControllerButtonEvent_set_which, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLControllerButtonEvent_button_FIELD_READER
  mrb_define_method(mrb, SDLControllerButtonEvent_class, "button", mrb_SDL_SDLControllerButtonEvent_get_button, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLControllerButtonEvent_button_FIELD_WRITER
  mrb_define_method(mrb, SDLControllerButtonEvent_class, "button=", mrb_SDL_SDLControllerButtonEvent_set_button, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLControllerButtonEvent_state_FIELD_READER
  mrb_define_method(mrb, SDLControllerButtonEvent_class, "state", mrb_SDL_SDLControllerButtonEvent_get_state, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLControllerButtonEvent_state_FIELD_WRITER
  mrb_define_method(mrb, SDLControllerButtonEvent_class, "state=", mrb_SDL_SDLControllerButtonEvent_set_state, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLControllerButtonEvent_padding1_FIELD_READER
  mrb_define_method(mrb, SDLControllerButtonEvent_class, "padding1", mrb_SDL_SDLControllerButtonEvent_get_padding1, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLControllerButtonEvent_padding1_FIELD_WRITER
  mrb_define_method(mrb, SDLControllerButtonEvent_class, "padding1=", mrb_SDL_SDLControllerButtonEvent_set_padding1, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLControllerButtonEvent_padding2_FIELD_READER
  mrb_define_method(mrb, SDLControllerButtonEvent_class, "padding2", mrb_SDL_SDLControllerButtonEvent_get_padding2, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLControllerButtonEvent_padding2_FIELD_WRITER
  mrb_define_method(mrb, SDLControllerButtonEvent_class, "padding2=", mrb_SDL_SDLControllerButtonEvent_set_padding2, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
