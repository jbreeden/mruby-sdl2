/*
 * struct SDL_HapticDirection
 * Defined in file SDL_haptic.h @ line 439
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_SDL.h"

#if BIND_SDLHapticDirection_TYPE

/*
 * Class Methods
 */

#if BIND_SDLHapticDirection_INITIALIZE
mrb_value
mrb_SDL_SDLHapticDirection_initialize(mrb_state* mrb, mrb_value self) {
  struct SDL_HapticDirection* native_object = (struct SDL_HapticDirection*)malloc(sizeof(struct SDL_HapticDirection));
  mruby_gift_struct SDL_HapticDirection_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_SDL_SDLHapticDirection_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLHapticDirection.disown only accepts objects of type SDL::SDLHapticDirection");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_SDL_SDLHapticDirection_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLHapticDirection.belongs_to_ruby only accepts objects of type SDL::SDLHapticDirection");
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

#if BIND_SDLHapticDirection_type_FIELD
/* get_type
 *
 * Return Type: Uint8
 */
mrb_value
mrb_SDL_SDLHapticDirection_get_type(mrb_state* mrb, mrb_value self) {
  struct SDL_HapticDirection * native_self = mruby_unbox_struct SDL_HapticDirection(self);

  Uint8 native_field = native_self->type;

  mrb_value ruby_field = TODO_mruby_box_Uint8(mrb, native_field);

  return ruby_field;
}

/* set_type
 *
 * Parameters:
 * - value: Uint8
 */
mrb_value
mrb_SDL_SDLHapticDirection_set_type(mrb_state* mrb, mrb_value self) {
  struct SDL_HapticDirection * native_self = mruby_unbox_struct SDL_HapticDirection(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Uint8(ruby_field);

  Uint8 native_field = TODO_mruby_unbox_Uint8(ruby_field);

  native_self->type = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLHapticDirection_dir_FIELD
/* get_dir
 *
 * Return Type: Sint32 [3]
 */
mrb_value
mrb_SDL_SDLHapticDirection_get_dir(mrb_state* mrb, mrb_value self) {
  struct SDL_HapticDirection * native_self = mruby_unbox_struct SDL_HapticDirection(self);

  Sint32 [3] native_field = native_self->dir;

  mrb_value ruby_field = TODO_mruby_box_Sint32_[3](mrb, native_field);

  return ruby_field;
}

/* set_dir
 *
 * Parameters:
 * - value: Sint32 [3]
 */
mrb_value
mrb_SDL_SDLHapticDirection_set_dir(mrb_state* mrb, mrb_value self) {
  struct SDL_HapticDirection * native_self = mruby_unbox_struct SDL_HapticDirection(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Sint32_[3](ruby_field);

  Sint32 [3] native_field = TODO_mruby_unbox_Sint32_[3](ruby_field);

  native_self->dir = native_field;

  return ruby_field;
}
#endif


void mrb_SDL_SDLHapticDirection_init(mrb_state* mrb) {
  RClass* SDLHapticDirection_class = mrb_define_class_under(mrb, SDL_module(mrb), "SDLHapticDirection", mrb->object_class);
  MRB_SET_INSTANCE_TT(SDLHapticDirection_class, MRB_TT_DATA);

#if BIND_SDLHapticDirection_INITIALIZE
  mrb_define_method(mrb, SDLHapticDirection_class, "initialize", mrb_SDL_SDLHapticDirection_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, SDLHapticDirection_class, "disown", mrb_SDL_SDLHapticDirection_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, SDLHapticDirection_class, "belongs_to_ruby?", mrb_SDL_SDLHapticDirection_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_SDLHapticDirection_type_FIELD
  mrb_define_method(mrb, SDLHapticDirection_class, "type", mrb_SDL_SDLHapticDirection_get_type, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, SDLHapticDirection_class, "type=", mrb_SDL_SDLHapticDirection_set_type, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLHapticDirection_dir_FIELD
  mrb_define_method(mrb, SDLHapticDirection_class, "dir", mrb_SDL_SDLHapticDirection_get_dir, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, SDLHapticDirection_class, "dir=", mrb_SDL_SDLHapticDirection_set_dir, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
