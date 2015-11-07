/*
 * struct SDL_HapticCondition
 * Defined in file SDL_haptic.h @ line 591
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_SDL.h"

#if BIND_SDLHapticCondition_TYPE

/*
 * Class Methods
 */

#if BIND_SDLHapticCondition_INITIALIZE
mrb_value
mrb_SDL_SDLHapticCondition_initialize(mrb_state* mrb, mrb_value self) {
  struct SDL_HapticCondition* native_object = (struct SDL_HapticCondition*)malloc(sizeof(struct SDL_HapticCondition));
  mruby_gift_struct SDL_HapticCondition_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_SDL_SDLHapticCondition_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLHapticCondition.disown only accepts objects of type SDL::SDLHapticCondition");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_SDL_SDLHapticCondition_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLHapticCondition.belongs_to_ruby only accepts objects of type SDL::SDLHapticCondition");
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

#if BIND_SDLHapticCondition_type_FIELD_READER
/* get_type
 *
 * Return Type: Uint16
 */
mrb_value
mrb_SDL_SDLHapticCondition_get_type(mrb_state* mrb, mrb_value self) {
  struct SDL_HapticCondition * native_self = mruby_unbox_struct SDL_HapticCondition(self);

  Uint16 native_field = native_self->type;

  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLHapticCondition_type_FIELD_WRITER
/* set_type
 *
 * Parameters:
 * - value: Uint16
 */
mrb_value
mrb_SDL_SDLHapticCondition_set_type(mrb_state* mrb, mrb_value self) {
  struct SDL_HapticCondition * native_self = mruby_unbox_struct SDL_HapticCondition(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) { mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected"); return mrb_nil_value(); }

  Uint16 native_field = mrb_fixnum(ruby_field);

  native_self->type = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLHapticCondition_direction_FIELD_READER
/* get_direction
 *
 * Return Type: SDL_HapticDirection
 */
mrb_value
mrb_SDL_SDLHapticCondition_get_direction(mrb_state* mrb, mrb_value self) {
  struct SDL_HapticCondition * native_self = mruby_unbox_struct SDL_HapticCondition(self);

  SDL_HapticDirection native_field = native_self->direction;

  mrb_value ruby_field = TODO_mruby_box_SDL_HapticDirection(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLHapticCondition_direction_FIELD_WRITER
/* set_direction
 *
 * Parameters:
 * - value: SDL_HapticDirection
 */
mrb_value
mrb_SDL_SDLHapticCondition_set_direction(mrb_state* mrb, mrb_value self) {
  struct SDL_HapticCondition * native_self = mruby_unbox_struct SDL_HapticCondition(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_SDL_HapticDirection(ruby_field);

  SDL_HapticDirection native_field = TODO_mruby_unbox_SDL_HapticDirection(ruby_field);

  native_self->direction = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLHapticCondition_length_FIELD_READER
/* get_length
 *
 * Return Type: Uint32
 */
mrb_value
mrb_SDL_SDLHapticCondition_get_length(mrb_state* mrb, mrb_value self) {
  struct SDL_HapticCondition * native_self = mruby_unbox_struct SDL_HapticCondition(self);

  Uint32 native_field = native_self->length;

  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLHapticCondition_length_FIELD_WRITER
/* set_length
 *
 * Parameters:
 * - value: Uint32
 */
mrb_value
mrb_SDL_SDLHapticCondition_set_length(mrb_state* mrb, mrb_value self) {
  struct SDL_HapticCondition * native_self = mruby_unbox_struct SDL_HapticCondition(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) { mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected"); return mrb_nil_value(); }

  Uint32 native_field = mrb_fixnum(ruby_field);

  native_self->length = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLHapticCondition_delay_FIELD_READER
/* get_delay
 *
 * Return Type: Uint16
 */
mrb_value
mrb_SDL_SDLHapticCondition_get_delay(mrb_state* mrb, mrb_value self) {
  struct SDL_HapticCondition * native_self = mruby_unbox_struct SDL_HapticCondition(self);

  Uint16 native_field = native_self->delay;

  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLHapticCondition_delay_FIELD_WRITER
/* set_delay
 *
 * Parameters:
 * - value: Uint16
 */
mrb_value
mrb_SDL_SDLHapticCondition_set_delay(mrb_state* mrb, mrb_value self) {
  struct SDL_HapticCondition * native_self = mruby_unbox_struct SDL_HapticCondition(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) { mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected"); return mrb_nil_value(); }

  Uint16 native_field = mrb_fixnum(ruby_field);

  native_self->delay = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLHapticCondition_button_FIELD_READER
/* get_button
 *
 * Return Type: Uint16
 */
mrb_value
mrb_SDL_SDLHapticCondition_get_button(mrb_state* mrb, mrb_value self) {
  struct SDL_HapticCondition * native_self = mruby_unbox_struct SDL_HapticCondition(self);

  Uint16 native_field = native_self->button;

  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLHapticCondition_button_FIELD_WRITER
/* set_button
 *
 * Parameters:
 * - value: Uint16
 */
mrb_value
mrb_SDL_SDLHapticCondition_set_button(mrb_state* mrb, mrb_value self) {
  struct SDL_HapticCondition * native_self = mruby_unbox_struct SDL_HapticCondition(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) { mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected"); return mrb_nil_value(); }

  Uint16 native_field = mrb_fixnum(ruby_field);

  native_self->button = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLHapticCondition_interval_FIELD_READER
/* get_interval
 *
 * Return Type: Uint16
 */
mrb_value
mrb_SDL_SDLHapticCondition_get_interval(mrb_state* mrb, mrb_value self) {
  struct SDL_HapticCondition * native_self = mruby_unbox_struct SDL_HapticCondition(self);

  Uint16 native_field = native_self->interval;

  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLHapticCondition_interval_FIELD_WRITER
/* set_interval
 *
 * Parameters:
 * - value: Uint16
 */
mrb_value
mrb_SDL_SDLHapticCondition_set_interval(mrb_state* mrb, mrb_value self) {
  struct SDL_HapticCondition * native_self = mruby_unbox_struct SDL_HapticCondition(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) { mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected"); return mrb_nil_value(); }

  Uint16 native_field = mrb_fixnum(ruby_field);

  native_self->interval = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLHapticCondition_right_sat_FIELD_READER
/* get_right_sat
 *
 * Return Type: Uint16 [3]
 */
mrb_value
mrb_SDL_SDLHapticCondition_get_right_sat(mrb_state* mrb, mrb_value self) {
  struct SDL_HapticCondition * native_self = mruby_unbox_struct SDL_HapticCondition(self);

  Uint16 [3] native_field = native_self->right_sat;

  mrb_value ruby_field = TODO_mruby_box_Uint16_[3](mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLHapticCondition_right_sat_FIELD_WRITER
/* set_right_sat
 *
 * Parameters:
 * - value: Uint16 [3]
 */
mrb_value
mrb_SDL_SDLHapticCondition_set_right_sat(mrb_state* mrb, mrb_value self) {
  struct SDL_HapticCondition * native_self = mruby_unbox_struct SDL_HapticCondition(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Uint16_[3](ruby_field);

  Uint16 [3] native_field = mrb_fixnum_[3](ruby_field);

  native_self->right_sat = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLHapticCondition_left_sat_FIELD_READER
/* get_left_sat
 *
 * Return Type: Uint16 [3]
 */
mrb_value
mrb_SDL_SDLHapticCondition_get_left_sat(mrb_state* mrb, mrb_value self) {
  struct SDL_HapticCondition * native_self = mruby_unbox_struct SDL_HapticCondition(self);

  Uint16 [3] native_field = native_self->left_sat;

  mrb_value ruby_field = TODO_mruby_box_Uint16_[3](mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLHapticCondition_left_sat_FIELD_WRITER
/* set_left_sat
 *
 * Parameters:
 * - value: Uint16 [3]
 */
mrb_value
mrb_SDL_SDLHapticCondition_set_left_sat(mrb_state* mrb, mrb_value self) {
  struct SDL_HapticCondition * native_self = mruby_unbox_struct SDL_HapticCondition(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Uint16_[3](ruby_field);

  Uint16 [3] native_field = mrb_fixnum_[3](ruby_field);

  native_self->left_sat = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLHapticCondition_right_coeff_FIELD_READER
/* get_right_coeff
 *
 * Return Type: Sint16 [3]
 */
mrb_value
mrb_SDL_SDLHapticCondition_get_right_coeff(mrb_state* mrb, mrb_value self) {
  struct SDL_HapticCondition * native_self = mruby_unbox_struct SDL_HapticCondition(self);

  Sint16 [3] native_field = native_self->right_coeff;

  mrb_value ruby_field = mrb_fixnum_value_[3](mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLHapticCondition_right_coeff_FIELD_WRITER
/* set_right_coeff
 *
 * Parameters:
 * - value: Sint16 [3]
 */
mrb_value
mrb_SDL_SDLHapticCondition_set_right_coeff(mrb_state* mrb, mrb_value self) {
  struct SDL_HapticCondition * native_self = mruby_unbox_struct SDL_HapticCondition(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Sint16_[3](ruby_field);

  Sint16 [3] native_field = mrb_fixnum_[3](ruby_field);

  native_self->right_coeff = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLHapticCondition_left_coeff_FIELD_READER
/* get_left_coeff
 *
 * Return Type: Sint16 [3]
 */
mrb_value
mrb_SDL_SDLHapticCondition_get_left_coeff(mrb_state* mrb, mrb_value self) {
  struct SDL_HapticCondition * native_self = mruby_unbox_struct SDL_HapticCondition(self);

  Sint16 [3] native_field = native_self->left_coeff;

  mrb_value ruby_field = mrb_fixnum_value_[3](mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLHapticCondition_left_coeff_FIELD_WRITER
/* set_left_coeff
 *
 * Parameters:
 * - value: Sint16 [3]
 */
mrb_value
mrb_SDL_SDLHapticCondition_set_left_coeff(mrb_state* mrb, mrb_value self) {
  struct SDL_HapticCondition * native_self = mruby_unbox_struct SDL_HapticCondition(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Sint16_[3](ruby_field);

  Sint16 [3] native_field = mrb_fixnum_[3](ruby_field);

  native_self->left_coeff = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLHapticCondition_deadband_FIELD_READER
/* get_deadband
 *
 * Return Type: Uint16 [3]
 */
mrb_value
mrb_SDL_SDLHapticCondition_get_deadband(mrb_state* mrb, mrb_value self) {
  struct SDL_HapticCondition * native_self = mruby_unbox_struct SDL_HapticCondition(self);

  Uint16 [3] native_field = native_self->deadband;

  mrb_value ruby_field = TODO_mruby_box_Uint16_[3](mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLHapticCondition_deadband_FIELD_WRITER
/* set_deadband
 *
 * Parameters:
 * - value: Uint16 [3]
 */
mrb_value
mrb_SDL_SDLHapticCondition_set_deadband(mrb_state* mrb, mrb_value self) {
  struct SDL_HapticCondition * native_self = mruby_unbox_struct SDL_HapticCondition(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Uint16_[3](ruby_field);

  Uint16 [3] native_field = mrb_fixnum_[3](ruby_field);

  native_self->deadband = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLHapticCondition_center_FIELD_READER
/* get_center
 *
 * Return Type: Sint16 [3]
 */
mrb_value
mrb_SDL_SDLHapticCondition_get_center(mrb_state* mrb, mrb_value self) {
  struct SDL_HapticCondition * native_self = mruby_unbox_struct SDL_HapticCondition(self);

  Sint16 [3] native_field = native_self->center;

  mrb_value ruby_field = mrb_fixnum_value_[3](mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLHapticCondition_center_FIELD_WRITER
/* set_center
 *
 * Parameters:
 * - value: Sint16 [3]
 */
mrb_value
mrb_SDL_SDLHapticCondition_set_center(mrb_state* mrb, mrb_value self) {
  struct SDL_HapticCondition * native_self = mruby_unbox_struct SDL_HapticCondition(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Sint16_[3](ruby_field);

  Sint16 [3] native_field = mrb_fixnum_[3](ruby_field);

  native_self->center = native_field;

  return ruby_field;
}
#endif


void mrb_SDL_SDLHapticCondition_init(mrb_state* mrb) {
  RClass* SDLHapticCondition_class = mrb_define_class_under(mrb, SDL_module(mrb), "HapticCondition", mrb->object_class);
  MRB_SET_INSTANCE_TT(SDLHapticCondition_class, MRB_TT_DATA);

#if BIND_SDLHapticCondition_INITIALIZE
  mrb_define_method(mrb, SDLHapticCondition_class, "initialize", mrb_SDL_SDLHapticCondition_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, SDLHapticCondition_class, "disown", mrb_SDL_SDLHapticCondition_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, SDLHapticCondition_class, "belongs_to_ruby?", mrb_SDL_SDLHapticCondition_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_SDLHapticCondition_type_FIELD_READER
  mrb_define_method(mrb, SDLHapticCondition_class, "type", mrb_SDL_SDLHapticCondition_get_type, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLHapticCondition_type_FIELD_WRITER
  mrb_define_method(mrb, SDLHapticCondition_class, "type=", mrb_SDL_SDLHapticCondition_set_type, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLHapticCondition_direction_FIELD_READER
  mrb_define_method(mrb, SDLHapticCondition_class, "direction", mrb_SDL_SDLHapticCondition_get_direction, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLHapticCondition_direction_FIELD_WRITER
  mrb_define_method(mrb, SDLHapticCondition_class, "direction=", mrb_SDL_SDLHapticCondition_set_direction, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLHapticCondition_length_FIELD_READER
  mrb_define_method(mrb, SDLHapticCondition_class, "length", mrb_SDL_SDLHapticCondition_get_length, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLHapticCondition_length_FIELD_WRITER
  mrb_define_method(mrb, SDLHapticCondition_class, "length=", mrb_SDL_SDLHapticCondition_set_length, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLHapticCondition_delay_FIELD_READER
  mrb_define_method(mrb, SDLHapticCondition_class, "delay", mrb_SDL_SDLHapticCondition_get_delay, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLHapticCondition_delay_FIELD_WRITER
  mrb_define_method(mrb, SDLHapticCondition_class, "delay=", mrb_SDL_SDLHapticCondition_set_delay, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLHapticCondition_button_FIELD_READER
  mrb_define_method(mrb, SDLHapticCondition_class, "button", mrb_SDL_SDLHapticCondition_get_button, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLHapticCondition_button_FIELD_WRITER
  mrb_define_method(mrb, SDLHapticCondition_class, "button=", mrb_SDL_SDLHapticCondition_set_button, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLHapticCondition_interval_FIELD_READER
  mrb_define_method(mrb, SDLHapticCondition_class, "interval", mrb_SDL_SDLHapticCondition_get_interval, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLHapticCondition_interval_FIELD_WRITER
  mrb_define_method(mrb, SDLHapticCondition_class, "interval=", mrb_SDL_SDLHapticCondition_set_interval, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLHapticCondition_right_sat_FIELD_READER
  mrb_define_method(mrb, SDLHapticCondition_class, "right_sat", mrb_SDL_SDLHapticCondition_get_right_sat, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLHapticCondition_right_sat_FIELD_WRITER
  mrb_define_method(mrb, SDLHapticCondition_class, "right_sat=", mrb_SDL_SDLHapticCondition_set_right_sat, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLHapticCondition_left_sat_FIELD_READER
  mrb_define_method(mrb, SDLHapticCondition_class, "left_sat", mrb_SDL_SDLHapticCondition_get_left_sat, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLHapticCondition_left_sat_FIELD_WRITER
  mrb_define_method(mrb, SDLHapticCondition_class, "left_sat=", mrb_SDL_SDLHapticCondition_set_left_sat, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLHapticCondition_right_coeff_FIELD_READER
  mrb_define_method(mrb, SDLHapticCondition_class, "right_coeff", mrb_SDL_SDLHapticCondition_get_right_coeff, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLHapticCondition_right_coeff_FIELD_WRITER
  mrb_define_method(mrb, SDLHapticCondition_class, "right_coeff=", mrb_SDL_SDLHapticCondition_set_right_coeff, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLHapticCondition_left_coeff_FIELD_READER
  mrb_define_method(mrb, SDLHapticCondition_class, "left_coeff", mrb_SDL_SDLHapticCondition_get_left_coeff, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLHapticCondition_left_coeff_FIELD_WRITER
  mrb_define_method(mrb, SDLHapticCondition_class, "left_coeff=", mrb_SDL_SDLHapticCondition_set_left_coeff, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLHapticCondition_deadband_FIELD_READER
  mrb_define_method(mrb, SDLHapticCondition_class, "deadband", mrb_SDL_SDLHapticCondition_get_deadband, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLHapticCondition_deadband_FIELD_WRITER
  mrb_define_method(mrb, SDLHapticCondition_class, "deadband=", mrb_SDL_SDLHapticCondition_set_deadband, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLHapticCondition_center_FIELD_READER
  mrb_define_method(mrb, SDLHapticCondition_class, "center", mrb_SDL_SDLHapticCondition_get_center, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLHapticCondition_center_FIELD_WRITER
  mrb_define_method(mrb, SDLHapticCondition_class, "center=", mrb_SDL_SDLHapticCondition_set_center, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
