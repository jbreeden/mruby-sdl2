/*
 * struct SDL_HapticCustom
 * Defined in file SDL_haptic.h @ line 691
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_SDL.h"

#if BIND_SDLHapticCustom_TYPE

/*
 * Class Methods
 */

#if BIND_SDLHapticCustom_INITIALIZE
mrb_value
mrb_SDL_SDLHapticCustom_initialize(mrb_state* mrb, mrb_value self) {
  struct SDL_HapticCustom* native_object = (struct SDL_HapticCustom*)malloc(sizeof(struct SDL_HapticCustom));
  mruby_gift_struct SDL_HapticCustom_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_SDL_SDLHapticCustom_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLHapticCustom.disown only accepts objects of type SDL::SDLHapticCustom");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_SDL_SDLHapticCustom_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLHapticCustom.belongs_to_ruby only accepts objects of type SDL::SDLHapticCustom");
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

#if BIND_SDLHapticCustom_type_FIELD
/* get_type
 *
 * Return Type: Uint16
 */
mrb_value
mrb_SDL_SDLHapticCustom_get_type(mrb_state* mrb, mrb_value self) {
  struct SDL_HapticCustom * native_self = mruby_unbox_struct SDL_HapticCustom(self);

  Uint16 native_field = native_self->type;

  mrb_value ruby_field = TODO_mruby_box_Uint16(mrb, native_field);

  return ruby_field;
}

/* set_type
 *
 * Parameters:
 * - value: Uint16
 */
mrb_value
mrb_SDL_SDLHapticCustom_set_type(mrb_state* mrb, mrb_value self) {
  struct SDL_HapticCustom * native_self = mruby_unbox_struct SDL_HapticCustom(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Uint16(ruby_field);

  Uint16 native_field = TODO_mruby_unbox_Uint16(ruby_field);

  native_self->type = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLHapticCustom_direction_FIELD
/* get_direction
 *
 * Return Type: SDL_HapticDirection
 */
mrb_value
mrb_SDL_SDLHapticCustom_get_direction(mrb_state* mrb, mrb_value self) {
  struct SDL_HapticCustom * native_self = mruby_unbox_struct SDL_HapticCustom(self);

  SDL_HapticDirection native_field = native_self->direction;

  mrb_value ruby_field = TODO_mruby_box_SDL_HapticDirection(mrb, native_field);

  return ruby_field;
}

/* set_direction
 *
 * Parameters:
 * - value: SDL_HapticDirection
 */
mrb_value
mrb_SDL_SDLHapticCustom_set_direction(mrb_state* mrb, mrb_value self) {
  struct SDL_HapticCustom * native_self = mruby_unbox_struct SDL_HapticCustom(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_SDL_HapticDirection(ruby_field);

  SDL_HapticDirection native_field = TODO_mruby_unbox_SDL_HapticDirection(ruby_field);

  native_self->direction = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLHapticCustom_length_FIELD
/* get_length
 *
 * Return Type: Uint32
 */
mrb_value
mrb_SDL_SDLHapticCustom_get_length(mrb_state* mrb, mrb_value self) {
  struct SDL_HapticCustom * native_self = mruby_unbox_struct SDL_HapticCustom(self);

  Uint32 native_field = native_self->length;

  mrb_value ruby_field = TODO_mruby_box_Uint32(mrb, native_field);

  return ruby_field;
}

/* set_length
 *
 * Parameters:
 * - value: Uint32
 */
mrb_value
mrb_SDL_SDLHapticCustom_set_length(mrb_state* mrb, mrb_value self) {
  struct SDL_HapticCustom * native_self = mruby_unbox_struct SDL_HapticCustom(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Uint32(ruby_field);

  Uint32 native_field = TODO_mruby_unbox_Uint32(ruby_field);

  native_self->length = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLHapticCustom_delay_FIELD
/* get_delay
 *
 * Return Type: Uint16
 */
mrb_value
mrb_SDL_SDLHapticCustom_get_delay(mrb_state* mrb, mrb_value self) {
  struct SDL_HapticCustom * native_self = mruby_unbox_struct SDL_HapticCustom(self);

  Uint16 native_field = native_self->delay;

  mrb_value ruby_field = TODO_mruby_box_Uint16(mrb, native_field);

  return ruby_field;
}

/* set_delay
 *
 * Parameters:
 * - value: Uint16
 */
mrb_value
mrb_SDL_SDLHapticCustom_set_delay(mrb_state* mrb, mrb_value self) {
  struct SDL_HapticCustom * native_self = mruby_unbox_struct SDL_HapticCustom(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Uint16(ruby_field);

  Uint16 native_field = TODO_mruby_unbox_Uint16(ruby_field);

  native_self->delay = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLHapticCustom_button_FIELD
/* get_button
 *
 * Return Type: Uint16
 */
mrb_value
mrb_SDL_SDLHapticCustom_get_button(mrb_state* mrb, mrb_value self) {
  struct SDL_HapticCustom * native_self = mruby_unbox_struct SDL_HapticCustom(self);

  Uint16 native_field = native_self->button;

  mrb_value ruby_field = TODO_mruby_box_Uint16(mrb, native_field);

  return ruby_field;
}

/* set_button
 *
 * Parameters:
 * - value: Uint16
 */
mrb_value
mrb_SDL_SDLHapticCustom_set_button(mrb_state* mrb, mrb_value self) {
  struct SDL_HapticCustom * native_self = mruby_unbox_struct SDL_HapticCustom(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Uint16(ruby_field);

  Uint16 native_field = TODO_mruby_unbox_Uint16(ruby_field);

  native_self->button = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLHapticCustom_interval_FIELD
/* get_interval
 *
 * Return Type: Uint16
 */
mrb_value
mrb_SDL_SDLHapticCustom_get_interval(mrb_state* mrb, mrb_value self) {
  struct SDL_HapticCustom * native_self = mruby_unbox_struct SDL_HapticCustom(self);

  Uint16 native_field = native_self->interval;

  mrb_value ruby_field = TODO_mruby_box_Uint16(mrb, native_field);

  return ruby_field;
}

/* set_interval
 *
 * Parameters:
 * - value: Uint16
 */
mrb_value
mrb_SDL_SDLHapticCustom_set_interval(mrb_state* mrb, mrb_value self) {
  struct SDL_HapticCustom * native_self = mruby_unbox_struct SDL_HapticCustom(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Uint16(ruby_field);

  Uint16 native_field = TODO_mruby_unbox_Uint16(ruby_field);

  native_self->interval = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLHapticCustom_channels_FIELD
/* get_channels
 *
 * Return Type: Uint8
 */
mrb_value
mrb_SDL_SDLHapticCustom_get_channels(mrb_state* mrb, mrb_value self) {
  struct SDL_HapticCustom * native_self = mruby_unbox_struct SDL_HapticCustom(self);

  Uint8 native_field = native_self->channels;

  mrb_value ruby_field = TODO_mruby_box_Uint8(mrb, native_field);

  return ruby_field;
}

/* set_channels
 *
 * Parameters:
 * - value: Uint8
 */
mrb_value
mrb_SDL_SDLHapticCustom_set_channels(mrb_state* mrb, mrb_value self) {
  struct SDL_HapticCustom * native_self = mruby_unbox_struct SDL_HapticCustom(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Uint8(ruby_field);

  Uint8 native_field = TODO_mruby_unbox_Uint8(ruby_field);

  native_self->channels = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLHapticCustom_period_FIELD
/* get_period
 *
 * Return Type: Uint16
 */
mrb_value
mrb_SDL_SDLHapticCustom_get_period(mrb_state* mrb, mrb_value self) {
  struct SDL_HapticCustom * native_self = mruby_unbox_struct SDL_HapticCustom(self);

  Uint16 native_field = native_self->period;

  mrb_value ruby_field = TODO_mruby_box_Uint16(mrb, native_field);

  return ruby_field;
}

/* set_period
 *
 * Parameters:
 * - value: Uint16
 */
mrb_value
mrb_SDL_SDLHapticCustom_set_period(mrb_state* mrb, mrb_value self) {
  struct SDL_HapticCustom * native_self = mruby_unbox_struct SDL_HapticCustom(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Uint16(ruby_field);

  Uint16 native_field = TODO_mruby_unbox_Uint16(ruby_field);

  native_self->period = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLHapticCustom_samples_FIELD
/* get_samples
 *
 * Return Type: Uint16
 */
mrb_value
mrb_SDL_SDLHapticCustom_get_samples(mrb_state* mrb, mrb_value self) {
  struct SDL_HapticCustom * native_self = mruby_unbox_struct SDL_HapticCustom(self);

  Uint16 native_field = native_self->samples;

  mrb_value ruby_field = TODO_mruby_box_Uint16(mrb, native_field);

  return ruby_field;
}

/* set_samples
 *
 * Parameters:
 * - value: Uint16
 */
mrb_value
mrb_SDL_SDLHapticCustom_set_samples(mrb_state* mrb, mrb_value self) {
  struct SDL_HapticCustom * native_self = mruby_unbox_struct SDL_HapticCustom(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Uint16(ruby_field);

  Uint16 native_field = TODO_mruby_unbox_Uint16(ruby_field);

  native_self->samples = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLHapticCustom_data_FIELD
/* get_data
 *
 * Return Type: Uint16 *
 */
mrb_value
mrb_SDL_SDLHapticCustom_get_data(mrb_state* mrb, mrb_value self) {
  struct SDL_HapticCustom * native_self = mruby_unbox_struct SDL_HapticCustom(self);

  Uint16 * native_field = native_self->data;

  mrb_value ruby_field = TODO_mruby_box_Uint16_PTR(mrb, native_field);

  return ruby_field;
}

/* set_data
 *
 * Parameters:
 * - value: Uint16 *
 */
mrb_value
mrb_SDL_SDLHapticCustom_set_data(mrb_state* mrb, mrb_value self) {
  struct SDL_HapticCustom * native_self = mruby_unbox_struct SDL_HapticCustom(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Uint16_PTR(ruby_field);

  Uint16 * native_field = TODO_mruby_unbox_Uint16_PTR(ruby_field);

  native_self->data = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLHapticCustom_attack_length_FIELD
/* get_attack_length
 *
 * Return Type: Uint16
 */
mrb_value
mrb_SDL_SDLHapticCustom_get_attack_length(mrb_state* mrb, mrb_value self) {
  struct SDL_HapticCustom * native_self = mruby_unbox_struct SDL_HapticCustom(self);

  Uint16 native_field = native_self->attack_length;

  mrb_value ruby_field = TODO_mruby_box_Uint16(mrb, native_field);

  return ruby_field;
}

/* set_attack_length
 *
 * Parameters:
 * - value: Uint16
 */
mrb_value
mrb_SDL_SDLHapticCustom_set_attack_length(mrb_state* mrb, mrb_value self) {
  struct SDL_HapticCustom * native_self = mruby_unbox_struct SDL_HapticCustom(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Uint16(ruby_field);

  Uint16 native_field = TODO_mruby_unbox_Uint16(ruby_field);

  native_self->attack_length = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLHapticCustom_attack_level_FIELD
/* get_attack_level
 *
 * Return Type: Uint16
 */
mrb_value
mrb_SDL_SDLHapticCustom_get_attack_level(mrb_state* mrb, mrb_value self) {
  struct SDL_HapticCustom * native_self = mruby_unbox_struct SDL_HapticCustom(self);

  Uint16 native_field = native_self->attack_level;

  mrb_value ruby_field = TODO_mruby_box_Uint16(mrb, native_field);

  return ruby_field;
}

/* set_attack_level
 *
 * Parameters:
 * - value: Uint16
 */
mrb_value
mrb_SDL_SDLHapticCustom_set_attack_level(mrb_state* mrb, mrb_value self) {
  struct SDL_HapticCustom * native_self = mruby_unbox_struct SDL_HapticCustom(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Uint16(ruby_field);

  Uint16 native_field = TODO_mruby_unbox_Uint16(ruby_field);

  native_self->attack_level = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLHapticCustom_fade_length_FIELD
/* get_fade_length
 *
 * Return Type: Uint16
 */
mrb_value
mrb_SDL_SDLHapticCustom_get_fade_length(mrb_state* mrb, mrb_value self) {
  struct SDL_HapticCustom * native_self = mruby_unbox_struct SDL_HapticCustom(self);

  Uint16 native_field = native_self->fade_length;

  mrb_value ruby_field = TODO_mruby_box_Uint16(mrb, native_field);

  return ruby_field;
}

/* set_fade_length
 *
 * Parameters:
 * - value: Uint16
 */
mrb_value
mrb_SDL_SDLHapticCustom_set_fade_length(mrb_state* mrb, mrb_value self) {
  struct SDL_HapticCustom * native_self = mruby_unbox_struct SDL_HapticCustom(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Uint16(ruby_field);

  Uint16 native_field = TODO_mruby_unbox_Uint16(ruby_field);

  native_self->fade_length = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLHapticCustom_fade_level_FIELD
/* get_fade_level
 *
 * Return Type: Uint16
 */
mrb_value
mrb_SDL_SDLHapticCustom_get_fade_level(mrb_state* mrb, mrb_value self) {
  struct SDL_HapticCustom * native_self = mruby_unbox_struct SDL_HapticCustom(self);

  Uint16 native_field = native_self->fade_level;

  mrb_value ruby_field = TODO_mruby_box_Uint16(mrb, native_field);

  return ruby_field;
}

/* set_fade_level
 *
 * Parameters:
 * - value: Uint16
 */
mrb_value
mrb_SDL_SDLHapticCustom_set_fade_level(mrb_state* mrb, mrb_value self) {
  struct SDL_HapticCustom * native_self = mruby_unbox_struct SDL_HapticCustom(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Uint16(ruby_field);

  Uint16 native_field = TODO_mruby_unbox_Uint16(ruby_field);

  native_self->fade_level = native_field;

  return ruby_field;
}
#endif


void mrb_SDL_SDLHapticCustom_init(mrb_state* mrb) {
  RClass* SDLHapticCustom_class = mrb_define_class_under(mrb, SDL_module(mrb), "SDLHapticCustom", mrb->object_class);
  MRB_SET_INSTANCE_TT(SDLHapticCustom_class, MRB_TT_DATA);

#if BIND_SDLHapticCustom_INITIALIZE
  mrb_define_method(mrb, SDLHapticCustom_class, "initialize", mrb_SDL_SDLHapticCustom_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, SDLHapticCustom_class, "disown", mrb_SDL_SDLHapticCustom_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, SDLHapticCustom_class, "belongs_to_ruby?", mrb_SDL_SDLHapticCustom_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_SDLHapticCustom_type_FIELD
  mrb_define_method(mrb, SDLHapticCustom_class, "type", mrb_SDL_SDLHapticCustom_get_type, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, SDLHapticCustom_class, "type=", mrb_SDL_SDLHapticCustom_set_type, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLHapticCustom_direction_FIELD
  mrb_define_method(mrb, SDLHapticCustom_class, "direction", mrb_SDL_SDLHapticCustom_get_direction, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, SDLHapticCustom_class, "direction=", mrb_SDL_SDLHapticCustom_set_direction, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLHapticCustom_length_FIELD
  mrb_define_method(mrb, SDLHapticCustom_class, "length", mrb_SDL_SDLHapticCustom_get_length, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, SDLHapticCustom_class, "length=", mrb_SDL_SDLHapticCustom_set_length, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLHapticCustom_delay_FIELD
  mrb_define_method(mrb, SDLHapticCustom_class, "delay", mrb_SDL_SDLHapticCustom_get_delay, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, SDLHapticCustom_class, "delay=", mrb_SDL_SDLHapticCustom_set_delay, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLHapticCustom_button_FIELD
  mrb_define_method(mrb, SDLHapticCustom_class, "button", mrb_SDL_SDLHapticCustom_get_button, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, SDLHapticCustom_class, "button=", mrb_SDL_SDLHapticCustom_set_button, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLHapticCustom_interval_FIELD
  mrb_define_method(mrb, SDLHapticCustom_class, "interval", mrb_SDL_SDLHapticCustom_get_interval, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, SDLHapticCustom_class, "interval=", mrb_SDL_SDLHapticCustom_set_interval, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLHapticCustom_channels_FIELD
  mrb_define_method(mrb, SDLHapticCustom_class, "channels", mrb_SDL_SDLHapticCustom_get_channels, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, SDLHapticCustom_class, "channels=", mrb_SDL_SDLHapticCustom_set_channels, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLHapticCustom_period_FIELD
  mrb_define_method(mrb, SDLHapticCustom_class, "period", mrb_SDL_SDLHapticCustom_get_period, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, SDLHapticCustom_class, "period=", mrb_SDL_SDLHapticCustom_set_period, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLHapticCustom_samples_FIELD
  mrb_define_method(mrb, SDLHapticCustom_class, "samples", mrb_SDL_SDLHapticCustom_get_samples, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, SDLHapticCustom_class, "samples=", mrb_SDL_SDLHapticCustom_set_samples, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLHapticCustom_data_FIELD
  mrb_define_method(mrb, SDLHapticCustom_class, "data", mrb_SDL_SDLHapticCustom_get_data, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, SDLHapticCustom_class, "data=", mrb_SDL_SDLHapticCustom_set_data, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLHapticCustom_attack_length_FIELD
  mrb_define_method(mrb, SDLHapticCustom_class, "attack_length", mrb_SDL_SDLHapticCustom_get_attack_length, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, SDLHapticCustom_class, "attack_length=", mrb_SDL_SDLHapticCustom_set_attack_length, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLHapticCustom_attack_level_FIELD
  mrb_define_method(mrb, SDLHapticCustom_class, "attack_level", mrb_SDL_SDLHapticCustom_get_attack_level, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, SDLHapticCustom_class, "attack_level=", mrb_SDL_SDLHapticCustom_set_attack_level, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLHapticCustom_fade_length_FIELD
  mrb_define_method(mrb, SDLHapticCustom_class, "fade_length", mrb_SDL_SDLHapticCustom_get_fade_length, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, SDLHapticCustom_class, "fade_length=", mrb_SDL_SDLHapticCustom_set_fade_length, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLHapticCustom_fade_level_FIELD
  mrb_define_method(mrb, SDLHapticCustom_class, "fade_level", mrb_SDL_SDLHapticCustom_get_fade_level, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, SDLHapticCustom_class, "fade_level=", mrb_SDL_SDLHapticCustom_set_fade_level, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
