/*
 * struct SDL_JoyBallEvent
 * Defined in file SDL_events.h @ line 283
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_SDL.h"

#if BIND_SDLJoyBallEvent_TYPE

/*
 * Class Methods
 */

#if BIND_SDLJoyBallEvent_INITIALIZE
mrb_value
mrb_SDL_SDLJoyBallEvent_initialize(mrb_state* mrb, mrb_value self) {
  struct SDL_JoyBallEvent* native_object = (struct SDL_JoyBallEvent*)malloc(sizeof(struct SDL_JoyBallEvent));
  mruby_gift_SDL_JoyBallEvent_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_SDL_SDLJoyBallEvent_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLJoyBallEvent.disown only accepts objects of type SDL::SDLJoyBallEvent");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_SDL_SDLJoyBallEvent_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLJoyBallEvent.belongs_to_ruby only accepts objects of type SDL::SDLJoyBallEvent");
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

#if BIND_SDLJoyBallEvent_type_FIELD_READER
/* get_type
 *
 * Return Type: Uint32
 */
mrb_value
mrb_SDL_SDLJoyBallEvent_get_type(mrb_state* mrb, mrb_value self) {
  struct SDL_JoyBallEvent * native_self = mruby_unbox_SDL_JoyBallEvent(self);

  Uint32 native_field = native_self->type;

  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLJoyBallEvent_type_FIELD_WRITER
/* set_type
 *
 * Parameters:
 * - value: Uint32
 */
mrb_value
mrb_SDL_SDLJoyBallEvent_set_type(mrb_state* mrb, mrb_value self) {
  struct SDL_JoyBallEvent * native_self = mruby_unbox_SDL_JoyBallEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) { mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected"); return mrb_nil_value(); }

  Uint32 native_field = mrb_fixnum(ruby_field);

  native_self->type = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLJoyBallEvent_timestamp_FIELD_READER
/* get_timestamp
 *
 * Return Type: Uint32
 */
mrb_value
mrb_SDL_SDLJoyBallEvent_get_timestamp(mrb_state* mrb, mrb_value self) {
  struct SDL_JoyBallEvent * native_self = mruby_unbox_SDL_JoyBallEvent(self);

  Uint32 native_field = native_self->timestamp;

  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLJoyBallEvent_timestamp_FIELD_WRITER
/* set_timestamp
 *
 * Parameters:
 * - value: Uint32
 */
mrb_value
mrb_SDL_SDLJoyBallEvent_set_timestamp(mrb_state* mrb, mrb_value self) {
  struct SDL_JoyBallEvent * native_self = mruby_unbox_SDL_JoyBallEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) { mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected"); return mrb_nil_value(); }

  Uint32 native_field = mrb_fixnum(ruby_field);

  native_self->timestamp = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLJoyBallEvent_which_FIELD_READER
/* get_which
 *
 * Return Type: SDL_JoystickID
 */
mrb_value
mrb_SDL_SDLJoyBallEvent_get_which(mrb_state* mrb, mrb_value self) {
  struct SDL_JoyBallEvent * native_self = mruby_unbox_SDL_JoyBallEvent(self);

  SDL_JoystickID native_field = native_self->which;

  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLJoyBallEvent_which_FIELD_WRITER
/* set_which
 *
 * Parameters:
 * - value: SDL_JoystickID
 */
mrb_value
mrb_SDL_SDLJoyBallEvent_set_which(mrb_state* mrb, mrb_value self) {
  struct SDL_JoyBallEvent * native_self = mruby_unbox_SDL_JoyBallEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) { mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected"); return mrb_nil_value(); }

  Sint32 native_field = mrb_fixnum(ruby_field);

  native_self->which = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLJoyBallEvent_ball_FIELD_READER
/* get_ball
 *
 * Return Type: Uint8
 */
mrb_value
mrb_SDL_SDLJoyBallEvent_get_ball(mrb_state* mrb, mrb_value self) {
  struct SDL_JoyBallEvent * native_self = mruby_unbox_SDL_JoyBallEvent(self);

  Uint8 native_field = native_self->ball;

  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLJoyBallEvent_ball_FIELD_WRITER
/* set_ball
 *
 * Parameters:
 * - value: Uint8
 */
mrb_value
mrb_SDL_SDLJoyBallEvent_set_ball(mrb_state* mrb, mrb_value self) {
  struct SDL_JoyBallEvent * native_self = mruby_unbox_SDL_JoyBallEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) { mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected"); return mrb_nil_value(); }

  Uint8 native_field = mrb_fixnum(ruby_field);

  native_self->ball = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLJoyBallEvent_padding1_FIELD_READER
/* get_padding1
 *
 * Return Type: Uint8
 */
mrb_value
mrb_SDL_SDLJoyBallEvent_get_padding1(mrb_state* mrb, mrb_value self) {
  struct SDL_JoyBallEvent * native_self = mruby_unbox_SDL_JoyBallEvent(self);

  Uint8 native_field = native_self->padding1;

  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLJoyBallEvent_padding1_FIELD_WRITER
/* set_padding1
 *
 * Parameters:
 * - value: Uint8
 */
mrb_value
mrb_SDL_SDLJoyBallEvent_set_padding1(mrb_state* mrb, mrb_value self) {
  struct SDL_JoyBallEvent * native_self = mruby_unbox_SDL_JoyBallEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) { mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected"); return mrb_nil_value(); }

  Uint8 native_field = mrb_fixnum(ruby_field);

  native_self->padding1 = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLJoyBallEvent_padding2_FIELD_READER
/* get_padding2
 *
 * Return Type: Uint8
 */
mrb_value
mrb_SDL_SDLJoyBallEvent_get_padding2(mrb_state* mrb, mrb_value self) {
  struct SDL_JoyBallEvent * native_self = mruby_unbox_SDL_JoyBallEvent(self);

  Uint8 native_field = native_self->padding2;

  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLJoyBallEvent_padding2_FIELD_WRITER
/* set_padding2
 *
 * Parameters:
 * - value: Uint8
 */
mrb_value
mrb_SDL_SDLJoyBallEvent_set_padding2(mrb_state* mrb, mrb_value self) {
  struct SDL_JoyBallEvent * native_self = mruby_unbox_SDL_JoyBallEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) { mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected"); return mrb_nil_value(); }

  Uint8 native_field = mrb_fixnum(ruby_field);

  native_self->padding2 = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLJoyBallEvent_padding3_FIELD_READER
/* get_padding3
 *
 * Return Type: Uint8
 */
mrb_value
mrb_SDL_SDLJoyBallEvent_get_padding3(mrb_state* mrb, mrb_value self) {
  struct SDL_JoyBallEvent * native_self = mruby_unbox_SDL_JoyBallEvent(self);

  Uint8 native_field = native_self->padding3;

  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLJoyBallEvent_padding3_FIELD_WRITER
/* set_padding3
 *
 * Parameters:
 * - value: Uint8
 */
mrb_value
mrb_SDL_SDLJoyBallEvent_set_padding3(mrb_state* mrb, mrb_value self) {
  struct SDL_JoyBallEvent * native_self = mruby_unbox_SDL_JoyBallEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) { mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected"); return mrb_nil_value(); }

  Uint8 native_field = mrb_fixnum(ruby_field);

  native_self->padding3 = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLJoyBallEvent_xrel_FIELD_READER
/* get_xrel
 *
 * Return Type: Sint16
 */
mrb_value
mrb_SDL_SDLJoyBallEvent_get_xrel(mrb_state* mrb, mrb_value self) {
  struct SDL_JoyBallEvent * native_self = mruby_unbox_SDL_JoyBallEvent(self);

  Sint16 native_field = native_self->xrel;

  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLJoyBallEvent_xrel_FIELD_WRITER
/* set_xrel
 *
 * Parameters:
 * - value: Sint16
 */
mrb_value
mrb_SDL_SDLJoyBallEvent_set_xrel(mrb_state* mrb, mrb_value self) {
  struct SDL_JoyBallEvent * native_self = mruby_unbox_SDL_JoyBallEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) { mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected"); return mrb_nil_value(); }

  Sint16 native_field = mrb_fixnum(ruby_field);

  native_self->xrel = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLJoyBallEvent_yrel_FIELD_READER
/* get_yrel
 *
 * Return Type: Sint16
 */
mrb_value
mrb_SDL_SDLJoyBallEvent_get_yrel(mrb_state* mrb, mrb_value self) {
  struct SDL_JoyBallEvent * native_self = mruby_unbox_SDL_JoyBallEvent(self);

  Sint16 native_field = native_self->yrel;

  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLJoyBallEvent_yrel_FIELD_WRITER
/* set_yrel
 *
 * Parameters:
 * - value: Sint16
 */
mrb_value
mrb_SDL_SDLJoyBallEvent_set_yrel(mrb_state* mrb, mrb_value self) {
  struct SDL_JoyBallEvent * native_self = mruby_unbox_SDL_JoyBallEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) { mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected"); return mrb_nil_value(); }

  Sint16 native_field = mrb_fixnum(ruby_field);

  native_self->yrel = native_field;

  return ruby_field;
}
#endif


void mrb_SDL_SDLJoyBallEvent_init(mrb_state* mrb) {
  RClass* SDLJoyBallEvent_class = mrb_define_class_under(mrb, SDL_module(mrb), "JoyBallEvent", mrb->object_class);
  MRB_SET_INSTANCE_TT(SDLJoyBallEvent_class, MRB_TT_DATA);

#if BIND_SDLJoyBallEvent_INITIALIZE
  mrb_define_method(mrb, SDLJoyBallEvent_class, "initialize", mrb_SDL_SDLJoyBallEvent_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, SDLJoyBallEvent_class, "disown", mrb_SDL_SDLJoyBallEvent_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, SDLJoyBallEvent_class, "belongs_to_ruby?", mrb_SDL_SDLJoyBallEvent_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_SDLJoyBallEvent_type_FIELD_READER
  mrb_define_method(mrb, SDLJoyBallEvent_class, "type", mrb_SDL_SDLJoyBallEvent_get_type, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLJoyBallEvent_type_FIELD_WRITER
  mrb_define_method(mrb, SDLJoyBallEvent_class, "type=", mrb_SDL_SDLJoyBallEvent_set_type, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLJoyBallEvent_timestamp_FIELD_READER
  mrb_define_method(mrb, SDLJoyBallEvent_class, "timestamp", mrb_SDL_SDLJoyBallEvent_get_timestamp, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLJoyBallEvent_timestamp_FIELD_WRITER
  mrb_define_method(mrb, SDLJoyBallEvent_class, "timestamp=", mrb_SDL_SDLJoyBallEvent_set_timestamp, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLJoyBallEvent_which_FIELD_READER
  mrb_define_method(mrb, SDLJoyBallEvent_class, "which", mrb_SDL_SDLJoyBallEvent_get_which, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLJoyBallEvent_which_FIELD_WRITER
  mrb_define_method(mrb, SDLJoyBallEvent_class, "which=", mrb_SDL_SDLJoyBallEvent_set_which, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLJoyBallEvent_ball_FIELD_READER
  mrb_define_method(mrb, SDLJoyBallEvent_class, "ball", mrb_SDL_SDLJoyBallEvent_get_ball, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLJoyBallEvent_ball_FIELD_WRITER
  mrb_define_method(mrb, SDLJoyBallEvent_class, "ball=", mrb_SDL_SDLJoyBallEvent_set_ball, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLJoyBallEvent_padding1_FIELD_READER
  mrb_define_method(mrb, SDLJoyBallEvent_class, "padding1", mrb_SDL_SDLJoyBallEvent_get_padding1, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLJoyBallEvent_padding1_FIELD_WRITER
  mrb_define_method(mrb, SDLJoyBallEvent_class, "padding1=", mrb_SDL_SDLJoyBallEvent_set_padding1, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLJoyBallEvent_padding2_FIELD_READER
  mrb_define_method(mrb, SDLJoyBallEvent_class, "padding2", mrb_SDL_SDLJoyBallEvent_get_padding2, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLJoyBallEvent_padding2_FIELD_WRITER
  mrb_define_method(mrb, SDLJoyBallEvent_class, "padding2=", mrb_SDL_SDLJoyBallEvent_set_padding2, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLJoyBallEvent_padding3_FIELD_READER
  mrb_define_method(mrb, SDLJoyBallEvent_class, "padding3", mrb_SDL_SDLJoyBallEvent_get_padding3, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLJoyBallEvent_padding3_FIELD_WRITER
  mrb_define_method(mrb, SDLJoyBallEvent_class, "padding3=", mrb_SDL_SDLJoyBallEvent_set_padding3, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLJoyBallEvent_xrel_FIELD_READER
  mrb_define_method(mrb, SDLJoyBallEvent_class, "xrel", mrb_SDL_SDLJoyBallEvent_get_xrel, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLJoyBallEvent_xrel_FIELD_WRITER
  mrb_define_method(mrb, SDLJoyBallEvent_class, "xrel=", mrb_SDL_SDLJoyBallEvent_set_xrel, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLJoyBallEvent_yrel_FIELD_READER
  mrb_define_method(mrb, SDLJoyBallEvent_class, "yrel", mrb_SDL_SDLJoyBallEvent_get_yrel, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLJoyBallEvent_yrel_FIELD_WRITER
  mrb_define_method(mrb, SDLJoyBallEvent_class, "yrel=", mrb_SDL_SDLJoyBallEvent_set_yrel, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
