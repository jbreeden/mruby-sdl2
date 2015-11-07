/*
 * struct SDL_HapticLeftRight
 * Defined in file SDL_haptic.h @ line 665
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_SDL.h"

#if BIND_SDLHapticLeftRight_TYPE

/*
 * Class Methods
 */

#if BIND_SDLHapticLeftRight_INITIALIZE
mrb_value
mrb_SDL_SDLHapticLeftRight_initialize(mrb_state* mrb, mrb_value self) {
  struct SDL_HapticLeftRight* native_object = (struct SDL_HapticLeftRight*)malloc(sizeof(struct SDL_HapticLeftRight));
  mruby_gift_SDL_HapticLeftRight_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_SDL_SDLHapticLeftRight_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLHapticLeftRight.disown only accepts objects of type SDL::SDLHapticLeftRight");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_SDL_SDLHapticLeftRight_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLHapticLeftRight.belongs_to_ruby only accepts objects of type SDL::SDLHapticLeftRight");
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

#if BIND_SDLHapticLeftRight_type_FIELD_READER
/* get_type
 *
 * Return Type: Uint16
 */
mrb_value
mrb_SDL_SDLHapticLeftRight_get_type(mrb_state* mrb, mrb_value self) {
  struct SDL_HapticLeftRight * native_self = mruby_unbox_SDL_HapticLeftRight(self);

  Uint16 native_field = native_self->type;

  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLHapticLeftRight_type_FIELD_WRITER
/* set_type
 *
 * Parameters:
 * - value: Uint16
 */
mrb_value
mrb_SDL_SDLHapticLeftRight_set_type(mrb_state* mrb, mrb_value self) {
  struct SDL_HapticLeftRight * native_self = mruby_unbox_SDL_HapticLeftRight(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) { mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected"); return mrb_nil_value(); }

  Uint16 native_field = mrb_fixnum(ruby_field);

  native_self->type = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLHapticLeftRight_length_FIELD_READER
/* get_length
 *
 * Return Type: Uint32
 */
mrb_value
mrb_SDL_SDLHapticLeftRight_get_length(mrb_state* mrb, mrb_value self) {
  struct SDL_HapticLeftRight * native_self = mruby_unbox_SDL_HapticLeftRight(self);

  Uint32 native_field = native_self->length;

  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLHapticLeftRight_length_FIELD_WRITER
/* set_length
 *
 * Parameters:
 * - value: Uint32
 */
mrb_value
mrb_SDL_SDLHapticLeftRight_set_length(mrb_state* mrb, mrb_value self) {
  struct SDL_HapticLeftRight * native_self = mruby_unbox_SDL_HapticLeftRight(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) { mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected"); return mrb_nil_value(); }

  Uint32 native_field = mrb_fixnum(ruby_field);

  native_self->length = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLHapticLeftRight_large_magnitude_FIELD_READER
/* get_large_magnitude
 *
 * Return Type: Uint16
 */
mrb_value
mrb_SDL_SDLHapticLeftRight_get_large_magnitude(mrb_state* mrb, mrb_value self) {
  struct SDL_HapticLeftRight * native_self = mruby_unbox_SDL_HapticLeftRight(self);

  Uint16 native_field = native_self->large_magnitude;

  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLHapticLeftRight_large_magnitude_FIELD_WRITER
/* set_large_magnitude
 *
 * Parameters:
 * - value: Uint16
 */
mrb_value
mrb_SDL_SDLHapticLeftRight_set_large_magnitude(mrb_state* mrb, mrb_value self) {
  struct SDL_HapticLeftRight * native_self = mruby_unbox_SDL_HapticLeftRight(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) { mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected"); return mrb_nil_value(); }

  Uint16 native_field = mrb_fixnum(ruby_field);

  native_self->large_magnitude = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLHapticLeftRight_small_magnitude_FIELD_READER
/* get_small_magnitude
 *
 * Return Type: Uint16
 */
mrb_value
mrb_SDL_SDLHapticLeftRight_get_small_magnitude(mrb_state* mrb, mrb_value self) {
  struct SDL_HapticLeftRight * native_self = mruby_unbox_SDL_HapticLeftRight(self);

  Uint16 native_field = native_self->small_magnitude;

  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLHapticLeftRight_small_magnitude_FIELD_WRITER
/* set_small_magnitude
 *
 * Parameters:
 * - value: Uint16
 */
mrb_value
mrb_SDL_SDLHapticLeftRight_set_small_magnitude(mrb_state* mrb, mrb_value self) {
  struct SDL_HapticLeftRight * native_self = mruby_unbox_SDL_HapticLeftRight(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) { mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected"); return mrb_nil_value(); }

  Uint16 native_field = mrb_fixnum(ruby_field);

  native_self->small_magnitude = native_field;

  return ruby_field;
}
#endif


void mrb_SDL_SDLHapticLeftRight_init(mrb_state* mrb) {
  RClass* SDLHapticLeftRight_class = mrb_define_class_under(mrb, SDL_module(mrb), "HapticLeftRight", mrb->object_class);
  MRB_SET_INSTANCE_TT(SDLHapticLeftRight_class, MRB_TT_DATA);

#if BIND_SDLHapticLeftRight_INITIALIZE
  mrb_define_method(mrb, SDLHapticLeftRight_class, "initialize", mrb_SDL_SDLHapticLeftRight_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, SDLHapticLeftRight_class, "disown", mrb_SDL_SDLHapticLeftRight_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, SDLHapticLeftRight_class, "belongs_to_ruby?", mrb_SDL_SDLHapticLeftRight_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_SDLHapticLeftRight_type_FIELD_READER
  mrb_define_method(mrb, SDLHapticLeftRight_class, "type", mrb_SDL_SDLHapticLeftRight_get_type, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLHapticLeftRight_type_FIELD_WRITER
  mrb_define_method(mrb, SDLHapticLeftRight_class, "type=", mrb_SDL_SDLHapticLeftRight_set_type, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLHapticLeftRight_length_FIELD_READER
  mrb_define_method(mrb, SDLHapticLeftRight_class, "length", mrb_SDL_SDLHapticLeftRight_get_length, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLHapticLeftRight_length_FIELD_WRITER
  mrb_define_method(mrb, SDLHapticLeftRight_class, "length=", mrb_SDL_SDLHapticLeftRight_set_length, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLHapticLeftRight_large_magnitude_FIELD_READER
  mrb_define_method(mrb, SDLHapticLeftRight_class, "large_magnitude", mrb_SDL_SDLHapticLeftRight_get_large_magnitude, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLHapticLeftRight_large_magnitude_FIELD_WRITER
  mrb_define_method(mrb, SDLHapticLeftRight_class, "large_magnitude=", mrb_SDL_SDLHapticLeftRight_set_large_magnitude, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLHapticLeftRight_small_magnitude_FIELD_READER
  mrb_define_method(mrb, SDLHapticLeftRight_class, "small_magnitude", mrb_SDL_SDLHapticLeftRight_get_small_magnitude, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLHapticLeftRight_small_magnitude_FIELD_WRITER
  mrb_define_method(mrb, SDLHapticLeftRight_class, "small_magnitude=", mrb_SDL_SDLHapticLeftRight_set_small_magnitude, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
