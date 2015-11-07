/*
 * struct SDL_HapticRamp
 * Defined in file SDL_haptic.h @ line 628
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_SDL.h"

#if BIND_SDLHapticRamp_TYPE

/*
 * Class Methods
 */

#if BIND_SDLHapticRamp_INITIALIZE
mrb_value
mrb_SDL_SDLHapticRamp_initialize(mrb_state* mrb, mrb_value self) {
  struct SDL_HapticRamp* native_object = (struct SDL_HapticRamp*)malloc(sizeof(struct SDL_HapticRamp));
  mruby_gift_SDL_HapticRamp_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_SDL_SDLHapticRamp_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLHapticRamp.disown only accepts objects of type SDL::SDLHapticRamp");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_SDL_SDLHapticRamp_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLHapticRamp.belongs_to_ruby only accepts objects of type SDL::SDLHapticRamp");
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

#if BIND_SDLHapticRamp_type_FIELD_READER
/* get_type
 *
 * Return Type: Uint16
 */
mrb_value
mrb_SDL_SDLHapticRamp_get_type(mrb_state* mrb, mrb_value self) {
  struct SDL_HapticRamp * native_self = mruby_unbox_SDL_HapticRamp(self);

  Uint16 native_field = native_self->type;

  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLHapticRamp_type_FIELD_WRITER
/* set_type
 *
 * Parameters:
 * - value: Uint16
 */
mrb_value
mrb_SDL_SDLHapticRamp_set_type(mrb_state* mrb, mrb_value self) {
  struct SDL_HapticRamp * native_self = mruby_unbox_SDL_HapticRamp(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) { mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected"); return mrb_nil_value(); }

  Uint16 native_field = mrb_fixnum(ruby_field);

  native_self->type = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLHapticRamp_direction_FIELD_READER
/* get_direction
 *
 * Return Type: SDL_HapticDirection
 */
mrb_value
mrb_SDL_SDLHapticRamp_get_direction(mrb_state* mrb, mrb_value self) {
  struct SDL_HapticRamp * native_self = mruby_unbox_SDL_HapticRamp(self);

  SDL_HapticDirection native_field = native_self->direction;

  mrb_value ruby_field = TODO_mruby_box_SDL_HapticDirection(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLHapticRamp_direction_FIELD_WRITER
/* set_direction
 *
 * Parameters:
 * - value: SDL_HapticDirection
 */
mrb_value
mrb_SDL_SDLHapticRamp_set_direction(mrb_state* mrb, mrb_value self) {
  struct SDL_HapticRamp * native_self = mruby_unbox_SDL_HapticRamp(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_SDL_HapticDirection(ruby_field);

  SDL_HapticDirection native_field = TODO_mruby_unbox_SDL_HapticDirection(ruby_field);

  native_self->direction = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLHapticRamp_length_FIELD_READER
/* get_length
 *
 * Return Type: Uint32
 */
mrb_value
mrb_SDL_SDLHapticRamp_get_length(mrb_state* mrb, mrb_value self) {
  struct SDL_HapticRamp * native_self = mruby_unbox_SDL_HapticRamp(self);

  Uint32 native_field = native_self->length;

  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLHapticRamp_length_FIELD_WRITER
/* set_length
 *
 * Parameters:
 * - value: Uint32
 */
mrb_value
mrb_SDL_SDLHapticRamp_set_length(mrb_state* mrb, mrb_value self) {
  struct SDL_HapticRamp * native_self = mruby_unbox_SDL_HapticRamp(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) { mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected"); return mrb_nil_value(); }

  Uint32 native_field = mrb_fixnum(ruby_field);

  native_self->length = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLHapticRamp_delay_FIELD_READER
/* get_delay
 *
 * Return Type: Uint16
 */
mrb_value
mrb_SDL_SDLHapticRamp_get_delay(mrb_state* mrb, mrb_value self) {
  struct SDL_HapticRamp * native_self = mruby_unbox_SDL_HapticRamp(self);

  Uint16 native_field = native_self->delay;

  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLHapticRamp_delay_FIELD_WRITER
/* set_delay
 *
 * Parameters:
 * - value: Uint16
 */
mrb_value
mrb_SDL_SDLHapticRamp_set_delay(mrb_state* mrb, mrb_value self) {
  struct SDL_HapticRamp * native_self = mruby_unbox_SDL_HapticRamp(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) { mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected"); return mrb_nil_value(); }

  Uint16 native_field = mrb_fixnum(ruby_field);

  native_self->delay = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLHapticRamp_button_FIELD_READER
/* get_button
 *
 * Return Type: Uint16
 */
mrb_value
mrb_SDL_SDLHapticRamp_get_button(mrb_state* mrb, mrb_value self) {
  struct SDL_HapticRamp * native_self = mruby_unbox_SDL_HapticRamp(self);

  Uint16 native_field = native_self->button;

  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLHapticRamp_button_FIELD_WRITER
/* set_button
 *
 * Parameters:
 * - value: Uint16
 */
mrb_value
mrb_SDL_SDLHapticRamp_set_button(mrb_state* mrb, mrb_value self) {
  struct SDL_HapticRamp * native_self = mruby_unbox_SDL_HapticRamp(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) { mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected"); return mrb_nil_value(); }

  Uint16 native_field = mrb_fixnum(ruby_field);

  native_self->button = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLHapticRamp_interval_FIELD_READER
/* get_interval
 *
 * Return Type: Uint16
 */
mrb_value
mrb_SDL_SDLHapticRamp_get_interval(mrb_state* mrb, mrb_value self) {
  struct SDL_HapticRamp * native_self = mruby_unbox_SDL_HapticRamp(self);

  Uint16 native_field = native_self->interval;

  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLHapticRamp_interval_FIELD_WRITER
/* set_interval
 *
 * Parameters:
 * - value: Uint16
 */
mrb_value
mrb_SDL_SDLHapticRamp_set_interval(mrb_state* mrb, mrb_value self) {
  struct SDL_HapticRamp * native_self = mruby_unbox_SDL_HapticRamp(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) { mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected"); return mrb_nil_value(); }

  Uint16 native_field = mrb_fixnum(ruby_field);

  native_self->interval = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLHapticRamp_start_FIELD_READER
/* get_start
 *
 * Return Type: Sint16
 */
mrb_value
mrb_SDL_SDLHapticRamp_get_start(mrb_state* mrb, mrb_value self) {
  struct SDL_HapticRamp * native_self = mruby_unbox_SDL_HapticRamp(self);

  Sint16 native_field = native_self->start;

  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLHapticRamp_start_FIELD_WRITER
/* set_start
 *
 * Parameters:
 * - value: Sint16
 */
mrb_value
mrb_SDL_SDLHapticRamp_set_start(mrb_state* mrb, mrb_value self) {
  struct SDL_HapticRamp * native_self = mruby_unbox_SDL_HapticRamp(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) { mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected"); return mrb_nil_value(); }

  Sint16 native_field = mrb_fixnum(ruby_field);

  native_self->start = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLHapticRamp_end_FIELD_READER
/* get_end
 *
 * Return Type: Sint16
 */
mrb_value
mrb_SDL_SDLHapticRamp_get_end(mrb_state* mrb, mrb_value self) {
  struct SDL_HapticRamp * native_self = mruby_unbox_SDL_HapticRamp(self);

  Sint16 native_field = native_self->end;

  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLHapticRamp_end_FIELD_WRITER
/* set_end
 *
 * Parameters:
 * - value: Sint16
 */
mrb_value
mrb_SDL_SDLHapticRamp_set_end(mrb_state* mrb, mrb_value self) {
  struct SDL_HapticRamp * native_self = mruby_unbox_SDL_HapticRamp(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) { mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected"); return mrb_nil_value(); }

  Sint16 native_field = mrb_fixnum(ruby_field);

  native_self->end = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLHapticRamp_attack_length_FIELD_READER
/* get_attack_length
 *
 * Return Type: Uint16
 */
mrb_value
mrb_SDL_SDLHapticRamp_get_attack_length(mrb_state* mrb, mrb_value self) {
  struct SDL_HapticRamp * native_self = mruby_unbox_SDL_HapticRamp(self);

  Uint16 native_field = native_self->attack_length;

  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLHapticRamp_attack_length_FIELD_WRITER
/* set_attack_length
 *
 * Parameters:
 * - value: Uint16
 */
mrb_value
mrb_SDL_SDLHapticRamp_set_attack_length(mrb_state* mrb, mrb_value self) {
  struct SDL_HapticRamp * native_self = mruby_unbox_SDL_HapticRamp(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) { mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected"); return mrb_nil_value(); }

  Uint16 native_field = mrb_fixnum(ruby_field);

  native_self->attack_length = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLHapticRamp_attack_level_FIELD_READER
/* get_attack_level
 *
 * Return Type: Uint16
 */
mrb_value
mrb_SDL_SDLHapticRamp_get_attack_level(mrb_state* mrb, mrb_value self) {
  struct SDL_HapticRamp * native_self = mruby_unbox_SDL_HapticRamp(self);

  Uint16 native_field = native_self->attack_level;

  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLHapticRamp_attack_level_FIELD_WRITER
/* set_attack_level
 *
 * Parameters:
 * - value: Uint16
 */
mrb_value
mrb_SDL_SDLHapticRamp_set_attack_level(mrb_state* mrb, mrb_value self) {
  struct SDL_HapticRamp * native_self = mruby_unbox_SDL_HapticRamp(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) { mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected"); return mrb_nil_value(); }

  Uint16 native_field = mrb_fixnum(ruby_field);

  native_self->attack_level = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLHapticRamp_fade_length_FIELD_READER
/* get_fade_length
 *
 * Return Type: Uint16
 */
mrb_value
mrb_SDL_SDLHapticRamp_get_fade_length(mrb_state* mrb, mrb_value self) {
  struct SDL_HapticRamp * native_self = mruby_unbox_SDL_HapticRamp(self);

  Uint16 native_field = native_self->fade_length;

  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLHapticRamp_fade_length_FIELD_WRITER
/* set_fade_length
 *
 * Parameters:
 * - value: Uint16
 */
mrb_value
mrb_SDL_SDLHapticRamp_set_fade_length(mrb_state* mrb, mrb_value self) {
  struct SDL_HapticRamp * native_self = mruby_unbox_SDL_HapticRamp(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) { mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected"); return mrb_nil_value(); }

  Uint16 native_field = mrb_fixnum(ruby_field);

  native_self->fade_length = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLHapticRamp_fade_level_FIELD_READER
/* get_fade_level
 *
 * Return Type: Uint16
 */
mrb_value
mrb_SDL_SDLHapticRamp_get_fade_level(mrb_state* mrb, mrb_value self) {
  struct SDL_HapticRamp * native_self = mruby_unbox_SDL_HapticRamp(self);

  Uint16 native_field = native_self->fade_level;

  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLHapticRamp_fade_level_FIELD_WRITER
/* set_fade_level
 *
 * Parameters:
 * - value: Uint16
 */
mrb_value
mrb_SDL_SDLHapticRamp_set_fade_level(mrb_state* mrb, mrb_value self) {
  struct SDL_HapticRamp * native_self = mruby_unbox_SDL_HapticRamp(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) { mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected"); return mrb_nil_value(); }

  Uint16 native_field = mrb_fixnum(ruby_field);

  native_self->fade_level = native_field;

  return ruby_field;
}
#endif


void mrb_SDL_SDLHapticRamp_init(mrb_state* mrb) {
  RClass* SDLHapticRamp_class = mrb_define_class_under(mrb, SDL_module(mrb), "HapticRamp", mrb->object_class);
  MRB_SET_INSTANCE_TT(SDLHapticRamp_class, MRB_TT_DATA);

#if BIND_SDLHapticRamp_INITIALIZE
  mrb_define_method(mrb, SDLHapticRamp_class, "initialize", mrb_SDL_SDLHapticRamp_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, SDLHapticRamp_class, "disown", mrb_SDL_SDLHapticRamp_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, SDLHapticRamp_class, "belongs_to_ruby?", mrb_SDL_SDLHapticRamp_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_SDLHapticRamp_type_FIELD_READER
  mrb_define_method(mrb, SDLHapticRamp_class, "type", mrb_SDL_SDLHapticRamp_get_type, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLHapticRamp_type_FIELD_WRITER
  mrb_define_method(mrb, SDLHapticRamp_class, "type=", mrb_SDL_SDLHapticRamp_set_type, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLHapticRamp_direction_FIELD_READER
  mrb_define_method(mrb, SDLHapticRamp_class, "direction", mrb_SDL_SDLHapticRamp_get_direction, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLHapticRamp_direction_FIELD_WRITER
  mrb_define_method(mrb, SDLHapticRamp_class, "direction=", mrb_SDL_SDLHapticRamp_set_direction, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLHapticRamp_length_FIELD_READER
  mrb_define_method(mrb, SDLHapticRamp_class, "length", mrb_SDL_SDLHapticRamp_get_length, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLHapticRamp_length_FIELD_WRITER
  mrb_define_method(mrb, SDLHapticRamp_class, "length=", mrb_SDL_SDLHapticRamp_set_length, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLHapticRamp_delay_FIELD_READER
  mrb_define_method(mrb, SDLHapticRamp_class, "delay", mrb_SDL_SDLHapticRamp_get_delay, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLHapticRamp_delay_FIELD_WRITER
  mrb_define_method(mrb, SDLHapticRamp_class, "delay=", mrb_SDL_SDLHapticRamp_set_delay, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLHapticRamp_button_FIELD_READER
  mrb_define_method(mrb, SDLHapticRamp_class, "button", mrb_SDL_SDLHapticRamp_get_button, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLHapticRamp_button_FIELD_WRITER
  mrb_define_method(mrb, SDLHapticRamp_class, "button=", mrb_SDL_SDLHapticRamp_set_button, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLHapticRamp_interval_FIELD_READER
  mrb_define_method(mrb, SDLHapticRamp_class, "interval", mrb_SDL_SDLHapticRamp_get_interval, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLHapticRamp_interval_FIELD_WRITER
  mrb_define_method(mrb, SDLHapticRamp_class, "interval=", mrb_SDL_SDLHapticRamp_set_interval, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLHapticRamp_start_FIELD_READER
  mrb_define_method(mrb, SDLHapticRamp_class, "start", mrb_SDL_SDLHapticRamp_get_start, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLHapticRamp_start_FIELD_WRITER
  mrb_define_method(mrb, SDLHapticRamp_class, "start=", mrb_SDL_SDLHapticRamp_set_start, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLHapticRamp_end_FIELD_READER
  mrb_define_method(mrb, SDLHapticRamp_class, "end", mrb_SDL_SDLHapticRamp_get_end, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLHapticRamp_end_FIELD_WRITER
  mrb_define_method(mrb, SDLHapticRamp_class, "end=", mrb_SDL_SDLHapticRamp_set_end, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLHapticRamp_attack_length_FIELD_READER
  mrb_define_method(mrb, SDLHapticRamp_class, "attack_length", mrb_SDL_SDLHapticRamp_get_attack_length, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLHapticRamp_attack_length_FIELD_WRITER
  mrb_define_method(mrb, SDLHapticRamp_class, "attack_length=", mrb_SDL_SDLHapticRamp_set_attack_length, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLHapticRamp_attack_level_FIELD_READER
  mrb_define_method(mrb, SDLHapticRamp_class, "attack_level", mrb_SDL_SDLHapticRamp_get_attack_level, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLHapticRamp_attack_level_FIELD_WRITER
  mrb_define_method(mrb, SDLHapticRamp_class, "attack_level=", mrb_SDL_SDLHapticRamp_set_attack_level, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLHapticRamp_fade_length_FIELD_READER
  mrb_define_method(mrb, SDLHapticRamp_class, "fade_length", mrb_SDL_SDLHapticRamp_get_fade_length, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLHapticRamp_fade_length_FIELD_WRITER
  mrb_define_method(mrb, SDLHapticRamp_class, "fade_length=", mrb_SDL_SDLHapticRamp_set_fade_length, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLHapticRamp_fade_level_FIELD_READER
  mrb_define_method(mrb, SDLHapticRamp_class, "fade_level", mrb_SDL_SDLHapticRamp_get_fade_level, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLHapticRamp_fade_level_FIELD_WRITER
  mrb_define_method(mrb, SDLHapticRamp_class, "fade_level=", mrb_SDL_SDLHapticRamp_set_fade_level, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
