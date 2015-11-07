/*
 * struct SDL_JoyHatEvent
 * Defined in file SDL_events.h @ line 299
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_SDL.h"

#if BIND_SDLJoyHatEvent_TYPE

/*
 * Class Methods
 */

#if BIND_SDLJoyHatEvent_INITIALIZE
mrb_value
mrb_SDL_SDLJoyHatEvent_initialize(mrb_state* mrb, mrb_value self) {
  struct SDL_JoyHatEvent* native_object = (struct SDL_JoyHatEvent*)malloc(sizeof(struct SDL_JoyHatEvent));
  mruby_gift_struct SDL_JoyHatEvent_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_SDL_SDLJoyHatEvent_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLJoyHatEvent.disown only accepts objects of type SDL::SDLJoyHatEvent");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_SDL_SDLJoyHatEvent_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLJoyHatEvent.belongs_to_ruby only accepts objects of type SDL::SDLJoyHatEvent");
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

#if BIND_SDLJoyHatEvent_type_FIELD_READER
/* get_type
 *
 * Return Type: Uint32
 */
mrb_value
mrb_SDL_SDLJoyHatEvent_get_type(mrb_state* mrb, mrb_value self) {
  struct SDL_JoyHatEvent * native_self = mruby_unbox_struct SDL_JoyHatEvent(self);

  Uint32 native_field = native_self->type;

  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLJoyHatEvent_type_FIELD_WRITER
/* set_type
 *
 * Parameters:
 * - value: Uint32
 */
mrb_value
mrb_SDL_SDLJoyHatEvent_set_type(mrb_state* mrb, mrb_value self) {
  struct SDL_JoyHatEvent * native_self = mruby_unbox_struct SDL_JoyHatEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) { mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected"); return mrb_nil_value(); }

  Uint32 native_field = mrb_fixnum(ruby_field);

  native_self->type = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLJoyHatEvent_timestamp_FIELD_READER
/* get_timestamp
 *
 * Return Type: Uint32
 */
mrb_value
mrb_SDL_SDLJoyHatEvent_get_timestamp(mrb_state* mrb, mrb_value self) {
  struct SDL_JoyHatEvent * native_self = mruby_unbox_struct SDL_JoyHatEvent(self);

  Uint32 native_field = native_self->timestamp;

  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLJoyHatEvent_timestamp_FIELD_WRITER
/* set_timestamp
 *
 * Parameters:
 * - value: Uint32
 */
mrb_value
mrb_SDL_SDLJoyHatEvent_set_timestamp(mrb_state* mrb, mrb_value self) {
  struct SDL_JoyHatEvent * native_self = mruby_unbox_struct SDL_JoyHatEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) { mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected"); return mrb_nil_value(); }

  Uint32 native_field = mrb_fixnum(ruby_field);

  native_self->timestamp = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLJoyHatEvent_which_FIELD_READER
/* get_which
 *
 * Return Type: SDL_JoystickID
 */
mrb_value
mrb_SDL_SDLJoyHatEvent_get_which(mrb_state* mrb, mrb_value self) {
  struct SDL_JoyHatEvent * native_self = mruby_unbox_struct SDL_JoyHatEvent(self);

  SDL_JoystickID native_field = native_self->which;

  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLJoyHatEvent_which_FIELD_WRITER
/* set_which
 *
 * Parameters:
 * - value: SDL_JoystickID
 */
mrb_value
mrb_SDL_SDLJoyHatEvent_set_which(mrb_state* mrb, mrb_value self) {
  struct SDL_JoyHatEvent * native_self = mruby_unbox_struct SDL_JoyHatEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) { mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected"); return mrb_nil_value(); }

  Sint32 native_field = mrb_fixnum(ruby_field);

  native_self->which = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLJoyHatEvent_hat_FIELD_READER
/* get_hat
 *
 * Return Type: Uint8
 */
mrb_value
mrb_SDL_SDLJoyHatEvent_get_hat(mrb_state* mrb, mrb_value self) {
  struct SDL_JoyHatEvent * native_self = mruby_unbox_struct SDL_JoyHatEvent(self);

  Uint8 native_field = native_self->hat;

  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLJoyHatEvent_hat_FIELD_WRITER
/* set_hat
 *
 * Parameters:
 * - value: Uint8
 */
mrb_value
mrb_SDL_SDLJoyHatEvent_set_hat(mrb_state* mrb, mrb_value self) {
  struct SDL_JoyHatEvent * native_self = mruby_unbox_struct SDL_JoyHatEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) { mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected"); return mrb_nil_value(); }

  Uint8 native_field = mrb_fixnum(ruby_field);

  native_self->hat = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLJoyHatEvent_value_FIELD_READER
/* get_value
 *
 * Return Type: Uint8
 */
mrb_value
mrb_SDL_SDLJoyHatEvent_get_value(mrb_state* mrb, mrb_value self) {
  struct SDL_JoyHatEvent * native_self = mruby_unbox_struct SDL_JoyHatEvent(self);

  Uint8 native_field = native_self->value;

  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLJoyHatEvent_value_FIELD_WRITER
/* set_value
 *
 * Parameters:
 * - value: Uint8
 */
mrb_value
mrb_SDL_SDLJoyHatEvent_set_value(mrb_state* mrb, mrb_value self) {
  struct SDL_JoyHatEvent * native_self = mruby_unbox_struct SDL_JoyHatEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) { mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected"); return mrb_nil_value(); }

  Uint8 native_field = mrb_fixnum(ruby_field);

  native_self->value = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLJoyHatEvent_padding1_FIELD_READER
/* get_padding1
 *
 * Return Type: Uint8
 */
mrb_value
mrb_SDL_SDLJoyHatEvent_get_padding1(mrb_state* mrb, mrb_value self) {
  struct SDL_JoyHatEvent * native_self = mruby_unbox_struct SDL_JoyHatEvent(self);

  Uint8 native_field = native_self->padding1;

  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLJoyHatEvent_padding1_FIELD_WRITER
/* set_padding1
 *
 * Parameters:
 * - value: Uint8
 */
mrb_value
mrb_SDL_SDLJoyHatEvent_set_padding1(mrb_state* mrb, mrb_value self) {
  struct SDL_JoyHatEvent * native_self = mruby_unbox_struct SDL_JoyHatEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) { mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected"); return mrb_nil_value(); }

  Uint8 native_field = mrb_fixnum(ruby_field);

  native_self->padding1 = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLJoyHatEvent_padding2_FIELD_READER
/* get_padding2
 *
 * Return Type: Uint8
 */
mrb_value
mrb_SDL_SDLJoyHatEvent_get_padding2(mrb_state* mrb, mrb_value self) {
  struct SDL_JoyHatEvent * native_self = mruby_unbox_struct SDL_JoyHatEvent(self);

  Uint8 native_field = native_self->padding2;

  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLJoyHatEvent_padding2_FIELD_WRITER
/* set_padding2
 *
 * Parameters:
 * - value: Uint8
 */
mrb_value
mrb_SDL_SDLJoyHatEvent_set_padding2(mrb_state* mrb, mrb_value self) {
  struct SDL_JoyHatEvent * native_self = mruby_unbox_struct SDL_JoyHatEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) { mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected"); return mrb_nil_value(); }

  Uint8 native_field = mrb_fixnum(ruby_field);

  native_self->padding2 = native_field;

  return ruby_field;
}
#endif


void mrb_SDL_SDLJoyHatEvent_init(mrb_state* mrb) {
  RClass* SDLJoyHatEvent_class = mrb_define_class_under(mrb, SDL_module(mrb), "JoyHatEvent", mrb->object_class);
  MRB_SET_INSTANCE_TT(SDLJoyHatEvent_class, MRB_TT_DATA);

#if BIND_SDLJoyHatEvent_INITIALIZE
  mrb_define_method(mrb, SDLJoyHatEvent_class, "initialize", mrb_SDL_SDLJoyHatEvent_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, SDLJoyHatEvent_class, "disown", mrb_SDL_SDLJoyHatEvent_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, SDLJoyHatEvent_class, "belongs_to_ruby?", mrb_SDL_SDLJoyHatEvent_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_SDLJoyHatEvent_type_FIELD_READER
  mrb_define_method(mrb, SDLJoyHatEvent_class, "type", mrb_SDL_SDLJoyHatEvent_get_type, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLJoyHatEvent_type_FIELD_WRITER
  mrb_define_method(mrb, SDLJoyHatEvent_class, "type=", mrb_SDL_SDLJoyHatEvent_set_type, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLJoyHatEvent_timestamp_FIELD_READER
  mrb_define_method(mrb, SDLJoyHatEvent_class, "timestamp", mrb_SDL_SDLJoyHatEvent_get_timestamp, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLJoyHatEvent_timestamp_FIELD_WRITER
  mrb_define_method(mrb, SDLJoyHatEvent_class, "timestamp=", mrb_SDL_SDLJoyHatEvent_set_timestamp, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLJoyHatEvent_which_FIELD_READER
  mrb_define_method(mrb, SDLJoyHatEvent_class, "which", mrb_SDL_SDLJoyHatEvent_get_which, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLJoyHatEvent_which_FIELD_WRITER
  mrb_define_method(mrb, SDLJoyHatEvent_class, "which=", mrb_SDL_SDLJoyHatEvent_set_which, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLJoyHatEvent_hat_FIELD_READER
  mrb_define_method(mrb, SDLJoyHatEvent_class, "hat", mrb_SDL_SDLJoyHatEvent_get_hat, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLJoyHatEvent_hat_FIELD_WRITER
  mrb_define_method(mrb, SDLJoyHatEvent_class, "hat=", mrb_SDL_SDLJoyHatEvent_set_hat, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLJoyHatEvent_value_FIELD_READER
  mrb_define_method(mrb, SDLJoyHatEvent_class, "value", mrb_SDL_SDLJoyHatEvent_get_value, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLJoyHatEvent_value_FIELD_WRITER
  mrb_define_method(mrb, SDLJoyHatEvent_class, "value=", mrb_SDL_SDLJoyHatEvent_set_value, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLJoyHatEvent_padding1_FIELD_READER
  mrb_define_method(mrb, SDLJoyHatEvent_class, "padding1", mrb_SDL_SDLJoyHatEvent_get_padding1, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLJoyHatEvent_padding1_FIELD_WRITER
  mrb_define_method(mrb, SDLJoyHatEvent_class, "padding1=", mrb_SDL_SDLJoyHatEvent_set_padding1, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLJoyHatEvent_padding2_FIELD_READER
  mrb_define_method(mrb, SDLJoyHatEvent_class, "padding2", mrb_SDL_SDLJoyHatEvent_get_padding2, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLJoyHatEvent_padding2_FIELD_WRITER
  mrb_define_method(mrb, SDLJoyHatEvent_class, "padding2=", mrb_SDL_SDLJoyHatEvent_set_padding2, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
