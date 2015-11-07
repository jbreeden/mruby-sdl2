/*
 * struct SDL_KeyboardEvent
 * Defined in file SDL_events.h @ line 179
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_SDL.h"

#if BIND_SDLKeyboardEvent_TYPE

/*
 * Class Methods
 */

#if BIND_SDLKeyboardEvent_INITIALIZE
mrb_value
mrb_SDL_SDLKeyboardEvent_initialize(mrb_state* mrb, mrb_value self) {
  struct SDL_KeyboardEvent* native_object = (struct SDL_KeyboardEvent*)malloc(sizeof(struct SDL_KeyboardEvent));
  mruby_gift_struct SDL_KeyboardEvent_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_SDL_SDLKeyboardEvent_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLKeyboardEvent.disown only accepts objects of type SDL::SDLKeyboardEvent");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_SDL_SDLKeyboardEvent_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLKeyboardEvent.belongs_to_ruby only accepts objects of type SDL::SDLKeyboardEvent");
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

#if BIND_SDLKeyboardEvent_type_FIELD_READER
/* get_type
 *
 * Return Type: Uint32
 */
mrb_value
mrb_SDL_SDLKeyboardEvent_get_type(mrb_state* mrb, mrb_value self) {
  struct SDL_KeyboardEvent * native_self = mruby_unbox_struct SDL_KeyboardEvent(self);

  Uint32 native_field = native_self->type;

  mrb_value ruby_field = TODO_mruby_box_Uint32(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLKeyboardEvent_type_FIELD_WRITER
/* set_type
 *
 * Parameters:
 * - value: Uint32
 */
mrb_value
mrb_SDL_SDLKeyboardEvent_set_type(mrb_state* mrb, mrb_value self) {
  struct SDL_KeyboardEvent * native_self = mruby_unbox_struct SDL_KeyboardEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Uint32(ruby_field);

  Uint32 native_field = TODO_mruby_unbox_Uint32(ruby_field);

  native_self->type = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLKeyboardEvent_timestamp_FIELD_READER
/* get_timestamp
 *
 * Return Type: Uint32
 */
mrb_value
mrb_SDL_SDLKeyboardEvent_get_timestamp(mrb_state* mrb, mrb_value self) {
  struct SDL_KeyboardEvent * native_self = mruby_unbox_struct SDL_KeyboardEvent(self);

  Uint32 native_field = native_self->timestamp;

  mrb_value ruby_field = TODO_mruby_box_Uint32(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLKeyboardEvent_timestamp_FIELD_WRITER
/* set_timestamp
 *
 * Parameters:
 * - value: Uint32
 */
mrb_value
mrb_SDL_SDLKeyboardEvent_set_timestamp(mrb_state* mrb, mrb_value self) {
  struct SDL_KeyboardEvent * native_self = mruby_unbox_struct SDL_KeyboardEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Uint32(ruby_field);

  Uint32 native_field = TODO_mruby_unbox_Uint32(ruby_field);

  native_self->timestamp = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLKeyboardEvent_windowID_FIELD_READER
/* get_windowID
 *
 * Return Type: Uint32
 */
mrb_value
mrb_SDL_SDLKeyboardEvent_get_windowID(mrb_state* mrb, mrb_value self) {
  struct SDL_KeyboardEvent * native_self = mruby_unbox_struct SDL_KeyboardEvent(self);

  Uint32 native_field = native_self->windowID;

  mrb_value ruby_field = TODO_mruby_box_Uint32(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLKeyboardEvent_windowID_FIELD_WRITER
/* set_windowID
 *
 * Parameters:
 * - value: Uint32
 */
mrb_value
mrb_SDL_SDLKeyboardEvent_set_windowID(mrb_state* mrb, mrb_value self) {
  struct SDL_KeyboardEvent * native_self = mruby_unbox_struct SDL_KeyboardEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Uint32(ruby_field);

  Uint32 native_field = TODO_mruby_unbox_Uint32(ruby_field);

  native_self->windowID = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLKeyboardEvent_state_FIELD_READER
/* get_state
 *
 * Return Type: Uint8
 */
mrb_value
mrb_SDL_SDLKeyboardEvent_get_state(mrb_state* mrb, mrb_value self) {
  struct SDL_KeyboardEvent * native_self = mruby_unbox_struct SDL_KeyboardEvent(self);

  Uint8 native_field = native_self->state;

  mrb_value ruby_field = TODO_mruby_box_Uint8(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLKeyboardEvent_state_FIELD_WRITER
/* set_state
 *
 * Parameters:
 * - value: Uint8
 */
mrb_value
mrb_SDL_SDLKeyboardEvent_set_state(mrb_state* mrb, mrb_value self) {
  struct SDL_KeyboardEvent * native_self = mruby_unbox_struct SDL_KeyboardEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Uint8(ruby_field);

  Uint8 native_field = TODO_mruby_unbox_Uint8(ruby_field);

  native_self->state = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLKeyboardEvent_repeat_FIELD_READER
/* get_repeat
 *
 * Return Type: Uint8
 */
mrb_value
mrb_SDL_SDLKeyboardEvent_get_repeat(mrb_state* mrb, mrb_value self) {
  struct SDL_KeyboardEvent * native_self = mruby_unbox_struct SDL_KeyboardEvent(self);

  Uint8 native_field = native_self->repeat;

  mrb_value ruby_field = TODO_mruby_box_Uint8(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLKeyboardEvent_repeat_FIELD_WRITER
/* set_repeat
 *
 * Parameters:
 * - value: Uint8
 */
mrb_value
mrb_SDL_SDLKeyboardEvent_set_repeat(mrb_state* mrb, mrb_value self) {
  struct SDL_KeyboardEvent * native_self = mruby_unbox_struct SDL_KeyboardEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Uint8(ruby_field);

  Uint8 native_field = TODO_mruby_unbox_Uint8(ruby_field);

  native_self->repeat = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLKeyboardEvent_padding2_FIELD_READER
/* get_padding2
 *
 * Return Type: Uint8
 */
mrb_value
mrb_SDL_SDLKeyboardEvent_get_padding2(mrb_state* mrb, mrb_value self) {
  struct SDL_KeyboardEvent * native_self = mruby_unbox_struct SDL_KeyboardEvent(self);

  Uint8 native_field = native_self->padding2;

  mrb_value ruby_field = TODO_mruby_box_Uint8(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLKeyboardEvent_padding2_FIELD_WRITER
/* set_padding2
 *
 * Parameters:
 * - value: Uint8
 */
mrb_value
mrb_SDL_SDLKeyboardEvent_set_padding2(mrb_state* mrb, mrb_value self) {
  struct SDL_KeyboardEvent * native_self = mruby_unbox_struct SDL_KeyboardEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Uint8(ruby_field);

  Uint8 native_field = TODO_mruby_unbox_Uint8(ruby_field);

  native_self->padding2 = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLKeyboardEvent_padding3_FIELD_READER
/* get_padding3
 *
 * Return Type: Uint8
 */
mrb_value
mrb_SDL_SDLKeyboardEvent_get_padding3(mrb_state* mrb, mrb_value self) {
  struct SDL_KeyboardEvent * native_self = mruby_unbox_struct SDL_KeyboardEvent(self);

  Uint8 native_field = native_self->padding3;

  mrb_value ruby_field = TODO_mruby_box_Uint8(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLKeyboardEvent_padding3_FIELD_WRITER
/* set_padding3
 *
 * Parameters:
 * - value: Uint8
 */
mrb_value
mrb_SDL_SDLKeyboardEvent_set_padding3(mrb_state* mrb, mrb_value self) {
  struct SDL_KeyboardEvent * native_self = mruby_unbox_struct SDL_KeyboardEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Uint8(ruby_field);

  Uint8 native_field = TODO_mruby_unbox_Uint8(ruby_field);

  native_self->padding3 = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLKeyboardEvent_keysym_FIELD_READER
/* get_keysym
 *
 * Return Type: SDL_Keysym
 */
mrb_value
mrb_SDL_SDLKeyboardEvent_get_keysym(mrb_state* mrb, mrb_value self) {
  struct SDL_KeyboardEvent * native_self = mruby_unbox_struct SDL_KeyboardEvent(self);

  SDL_Keysym native_field = native_self->keysym;

  mrb_value ruby_field = TODO_mruby_box_SDL_Keysym(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLKeyboardEvent_keysym_FIELD_WRITER
/* set_keysym
 *
 * Parameters:
 * - value: SDL_Keysym
 */
mrb_value
mrb_SDL_SDLKeyboardEvent_set_keysym(mrb_state* mrb, mrb_value self) {
  struct SDL_KeyboardEvent * native_self = mruby_unbox_struct SDL_KeyboardEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_SDL_Keysym(ruby_field);

  SDL_Keysym native_field = TODO_mruby_unbox_SDL_Keysym(ruby_field);

  native_self->keysym = native_field;

  return ruby_field;
}
#endif


void mrb_SDL_SDLKeyboardEvent_init(mrb_state* mrb) {
  RClass* SDLKeyboardEvent_class = mrb_define_class_under(mrb, SDL_module(mrb), "KeyboardEvent", mrb->object_class);
  MRB_SET_INSTANCE_TT(SDLKeyboardEvent_class, MRB_TT_DATA);

#if BIND_SDLKeyboardEvent_INITIALIZE
  mrb_define_method(mrb, SDLKeyboardEvent_class, "initialize", mrb_SDL_SDLKeyboardEvent_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, SDLKeyboardEvent_class, "disown", mrb_SDL_SDLKeyboardEvent_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, SDLKeyboardEvent_class, "belongs_to_ruby?", mrb_SDL_SDLKeyboardEvent_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_SDLKeyboardEvent_type_FIELD_READER
  mrb_define_method(mrb, SDLKeyboardEvent_class, "type", mrb_SDL_SDLKeyboardEvent_get_type, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLKeyboardEvent_type_FIELD_WRITER
  mrb_define_method(mrb, SDLKeyboardEvent_class, "type=", mrb_SDL_SDLKeyboardEvent_set_type, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLKeyboardEvent_timestamp_FIELD_READER
  mrb_define_method(mrb, SDLKeyboardEvent_class, "timestamp", mrb_SDL_SDLKeyboardEvent_get_timestamp, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLKeyboardEvent_timestamp_FIELD_WRITER
  mrb_define_method(mrb, SDLKeyboardEvent_class, "timestamp=", mrb_SDL_SDLKeyboardEvent_set_timestamp, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLKeyboardEvent_windowID_FIELD_READER
  mrb_define_method(mrb, SDLKeyboardEvent_class, "windowID", mrb_SDL_SDLKeyboardEvent_get_windowID, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLKeyboardEvent_windowID_FIELD_WRITER
  mrb_define_method(mrb, SDLKeyboardEvent_class, "windowID=", mrb_SDL_SDLKeyboardEvent_set_windowID, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLKeyboardEvent_state_FIELD_READER
  mrb_define_method(mrb, SDLKeyboardEvent_class, "state", mrb_SDL_SDLKeyboardEvent_get_state, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLKeyboardEvent_state_FIELD_WRITER
  mrb_define_method(mrb, SDLKeyboardEvent_class, "state=", mrb_SDL_SDLKeyboardEvent_set_state, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLKeyboardEvent_repeat_FIELD_READER
  mrb_define_method(mrb, SDLKeyboardEvent_class, "repeat", mrb_SDL_SDLKeyboardEvent_get_repeat, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLKeyboardEvent_repeat_FIELD_WRITER
  mrb_define_method(mrb, SDLKeyboardEvent_class, "repeat=", mrb_SDL_SDLKeyboardEvent_set_repeat, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLKeyboardEvent_padding2_FIELD_READER
  mrb_define_method(mrb, SDLKeyboardEvent_class, "padding2", mrb_SDL_SDLKeyboardEvent_get_padding2, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLKeyboardEvent_padding2_FIELD_WRITER
  mrb_define_method(mrb, SDLKeyboardEvent_class, "padding2=", mrb_SDL_SDLKeyboardEvent_set_padding2, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLKeyboardEvent_padding3_FIELD_READER
  mrb_define_method(mrb, SDLKeyboardEvent_class, "padding3", mrb_SDL_SDLKeyboardEvent_get_padding3, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLKeyboardEvent_padding3_FIELD_WRITER
  mrb_define_method(mrb, SDLKeyboardEvent_class, "padding3=", mrb_SDL_SDLKeyboardEvent_set_padding3, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLKeyboardEvent_keysym_FIELD_READER
  mrb_define_method(mrb, SDLKeyboardEvent_class, "keysym", mrb_SDL_SDLKeyboardEvent_get_keysym, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLKeyboardEvent_keysym_FIELD_WRITER
  mrb_define_method(mrb, SDLKeyboardEvent_class, "keysym=", mrb_SDL_SDLKeyboardEvent_set_keysym, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
