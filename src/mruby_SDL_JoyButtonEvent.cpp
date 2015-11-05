/*
 * struct SDL_JoyButtonEvent
 * Defined in file SDL_events.h @ line 319
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_SDL.h"

#if BIND_SDLJoyButtonEvent_TYPE

/*
 * Class Methods
 */

#if BIND_SDLJoyButtonEvent_INITIALIZE
mrb_value
mrb_SDL_SDLJoyButtonEvent_initialize(mrb_state* mrb, mrb_value self) {
  struct SDL_JoyButtonEvent* native_object = (struct SDL_JoyButtonEvent*)malloc(sizeof(struct SDL_JoyButtonEvent));
  mruby_gift_struct SDL_JoyButtonEvent_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_SDL_SDLJoyButtonEvent_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLJoyButtonEvent.disown only accepts objects of type SDL::SDLJoyButtonEvent");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_SDL_SDLJoyButtonEvent_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLJoyButtonEvent.belongs_to_ruby only accepts objects of type SDL::SDLJoyButtonEvent");
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

#if BIND_SDLJoyButtonEvent_type_FIELD
/* get_type
 *
 * Return Type: Uint32
 */
mrb_value
mrb_SDL_SDLJoyButtonEvent_get_type(mrb_state* mrb, mrb_value self) {
  struct SDL_JoyButtonEvent * native_self = mruby_unbox_struct SDL_JoyButtonEvent(self);

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
mrb_SDL_SDLJoyButtonEvent_set_type(mrb_state* mrb, mrb_value self) {
  struct SDL_JoyButtonEvent * native_self = mruby_unbox_struct SDL_JoyButtonEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Uint32(ruby_field);

  Uint32 native_field = TODO_mruby_unbox_Uint32(ruby_field);

  native_self->type = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLJoyButtonEvent_timestamp_FIELD
/* get_timestamp
 *
 * Return Type: Uint32
 */
mrb_value
mrb_SDL_SDLJoyButtonEvent_get_timestamp(mrb_state* mrb, mrb_value self) {
  struct SDL_JoyButtonEvent * native_self = mruby_unbox_struct SDL_JoyButtonEvent(self);

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
mrb_SDL_SDLJoyButtonEvent_set_timestamp(mrb_state* mrb, mrb_value self) {
  struct SDL_JoyButtonEvent * native_self = mruby_unbox_struct SDL_JoyButtonEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Uint32(ruby_field);

  Uint32 native_field = TODO_mruby_unbox_Uint32(ruby_field);

  native_self->timestamp = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLJoyButtonEvent_which_FIELD
/* get_which
 *
 * Return Type: SDL_JoystickID
 */
mrb_value
mrb_SDL_SDLJoyButtonEvent_get_which(mrb_state* mrb, mrb_value self) {
  struct SDL_JoyButtonEvent * native_self = mruby_unbox_struct SDL_JoyButtonEvent(self);

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
mrb_SDL_SDLJoyButtonEvent_set_which(mrb_state* mrb, mrb_value self) {
  struct SDL_JoyButtonEvent * native_self = mruby_unbox_struct SDL_JoyButtonEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Sint32(ruby_field);

  Sint32 native_field = TODO_mruby_unbox_Sint32(ruby_field);

  native_self->which = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLJoyButtonEvent_button_FIELD
/* get_button
 *
 * Return Type: Uint8
 */
mrb_value
mrb_SDL_SDLJoyButtonEvent_get_button(mrb_state* mrb, mrb_value self) {
  struct SDL_JoyButtonEvent * native_self = mruby_unbox_struct SDL_JoyButtonEvent(self);

  Uint8 native_field = native_self->button;

  mrb_value ruby_field = TODO_mruby_box_Uint8(mrb, native_field);

  return ruby_field;
}

/* set_button
 *
 * Parameters:
 * - value: Uint8
 */
mrb_value
mrb_SDL_SDLJoyButtonEvent_set_button(mrb_state* mrb, mrb_value self) {
  struct SDL_JoyButtonEvent * native_self = mruby_unbox_struct SDL_JoyButtonEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Uint8(ruby_field);

  Uint8 native_field = TODO_mruby_unbox_Uint8(ruby_field);

  native_self->button = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLJoyButtonEvent_state_FIELD
/* get_state
 *
 * Return Type: Uint8
 */
mrb_value
mrb_SDL_SDLJoyButtonEvent_get_state(mrb_state* mrb, mrb_value self) {
  struct SDL_JoyButtonEvent * native_self = mruby_unbox_struct SDL_JoyButtonEvent(self);

  Uint8 native_field = native_self->state;

  mrb_value ruby_field = TODO_mruby_box_Uint8(mrb, native_field);

  return ruby_field;
}

/* set_state
 *
 * Parameters:
 * - value: Uint8
 */
mrb_value
mrb_SDL_SDLJoyButtonEvent_set_state(mrb_state* mrb, mrb_value self) {
  struct SDL_JoyButtonEvent * native_self = mruby_unbox_struct SDL_JoyButtonEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Uint8(ruby_field);

  Uint8 native_field = TODO_mruby_unbox_Uint8(ruby_field);

  native_self->state = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLJoyButtonEvent_padding1_FIELD
/* get_padding1
 *
 * Return Type: Uint8
 */
mrb_value
mrb_SDL_SDLJoyButtonEvent_get_padding1(mrb_state* mrb, mrb_value self) {
  struct SDL_JoyButtonEvent * native_self = mruby_unbox_struct SDL_JoyButtonEvent(self);

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
mrb_SDL_SDLJoyButtonEvent_set_padding1(mrb_state* mrb, mrb_value self) {
  struct SDL_JoyButtonEvent * native_self = mruby_unbox_struct SDL_JoyButtonEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Uint8(ruby_field);

  Uint8 native_field = TODO_mruby_unbox_Uint8(ruby_field);

  native_self->padding1 = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLJoyButtonEvent_padding2_FIELD
/* get_padding2
 *
 * Return Type: Uint8
 */
mrb_value
mrb_SDL_SDLJoyButtonEvent_get_padding2(mrb_state* mrb, mrb_value self) {
  struct SDL_JoyButtonEvent * native_self = mruby_unbox_struct SDL_JoyButtonEvent(self);

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
mrb_SDL_SDLJoyButtonEvent_set_padding2(mrb_state* mrb, mrb_value self) {
  struct SDL_JoyButtonEvent * native_self = mruby_unbox_struct SDL_JoyButtonEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Uint8(ruby_field);

  Uint8 native_field = TODO_mruby_unbox_Uint8(ruby_field);

  native_self->padding2 = native_field;

  return ruby_field;
}
#endif


void mrb_SDL_SDLJoyButtonEvent_init(mrb_state* mrb) {
  RClass* SDLJoyButtonEvent_class = mrb_define_class_under(mrb, SDL_module(mrb), "SDLJoyButtonEvent", mrb->object_class);
  MRB_SET_INSTANCE_TT(SDLJoyButtonEvent_class, MRB_TT_DATA);

#if BIND_SDLJoyButtonEvent_INITIALIZE
  mrb_define_method(mrb, SDLJoyButtonEvent_class, "initialize", mrb_SDL_SDLJoyButtonEvent_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, SDLJoyButtonEvent_class, "disown", mrb_SDL_SDLJoyButtonEvent_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, SDLJoyButtonEvent_class, "belongs_to_ruby?", mrb_SDL_SDLJoyButtonEvent_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_SDLJoyButtonEvent_type_FIELD
  mrb_define_method(mrb, SDLJoyButtonEvent_class, "type", mrb_SDL_SDLJoyButtonEvent_get_type, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, SDLJoyButtonEvent_class, "type=", mrb_SDL_SDLJoyButtonEvent_set_type, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLJoyButtonEvent_timestamp_FIELD
  mrb_define_method(mrb, SDLJoyButtonEvent_class, "timestamp", mrb_SDL_SDLJoyButtonEvent_get_timestamp, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, SDLJoyButtonEvent_class, "timestamp=", mrb_SDL_SDLJoyButtonEvent_set_timestamp, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLJoyButtonEvent_which_FIELD
  mrb_define_method(mrb, SDLJoyButtonEvent_class, "which", mrb_SDL_SDLJoyButtonEvent_get_which, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, SDLJoyButtonEvent_class, "which=", mrb_SDL_SDLJoyButtonEvent_set_which, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLJoyButtonEvent_button_FIELD
  mrb_define_method(mrb, SDLJoyButtonEvent_class, "button", mrb_SDL_SDLJoyButtonEvent_get_button, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, SDLJoyButtonEvent_class, "button=", mrb_SDL_SDLJoyButtonEvent_set_button, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLJoyButtonEvent_state_FIELD
  mrb_define_method(mrb, SDLJoyButtonEvent_class, "state", mrb_SDL_SDLJoyButtonEvent_get_state, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, SDLJoyButtonEvent_class, "state=", mrb_SDL_SDLJoyButtonEvent_set_state, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLJoyButtonEvent_padding1_FIELD
  mrb_define_method(mrb, SDLJoyButtonEvent_class, "padding1", mrb_SDL_SDLJoyButtonEvent_get_padding1, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, SDLJoyButtonEvent_class, "padding1=", mrb_SDL_SDLJoyButtonEvent_set_padding1, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLJoyButtonEvent_padding2_FIELD
  mrb_define_method(mrb, SDLJoyButtonEvent_class, "padding2", mrb_SDL_SDLJoyButtonEvent_get_padding2, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, SDLJoyButtonEvent_class, "padding2=", mrb_SDL_SDLJoyButtonEvent_set_padding2, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
