/*
 * struct SDL_Keysym
 * Defined in file SDL_keyboard.h @ line 47
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_SDL.h"

#if BIND_SDLKeysym_TYPE

/*
 * Class Methods
 */

#if BIND_SDLKeysym_INITIALIZE
mrb_value
mrb_SDL_SDLKeysym_initialize(mrb_state* mrb, mrb_value self) {
  struct SDL_Keysym* native_object = (struct SDL_Keysym*)malloc(sizeof(struct SDL_Keysym));
  mruby_gift_struct SDL_Keysym_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_SDL_SDLKeysym_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLKeysym.disown only accepts objects of type SDL::SDLKeysym");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_SDL_SDLKeysym_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLKeysym.belongs_to_ruby only accepts objects of type SDL::SDLKeysym");
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

#if BIND_SDLKeysym_scancode_FIELD_READER
/* get_scancode
 *
 * Return Type: SDL_Scancode
 */
mrb_value
mrb_SDL_SDLKeysym_get_scancode(mrb_state* mrb, mrb_value self) {
  struct SDL_Keysym * native_self = mruby_unbox_struct SDL_Keysym(self);

  SDL_Scancode native_field = native_self->scancode;

  mrb_value ruby_field = TODO_mruby_box_SDL_Scancode(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLKeysym_scancode_FIELD_WRITER
/* set_scancode
 *
 * Parameters:
 * - value: SDL_Scancode
 */
mrb_value
mrb_SDL_SDLKeysym_set_scancode(mrb_state* mrb, mrb_value self) {
  struct SDL_Keysym * native_self = mruby_unbox_struct SDL_Keysym(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_SDL_Scancode(ruby_field);

  SDL_Scancode native_field = TODO_mruby_unbox_SDL_Scancode(ruby_field);

  native_self->scancode = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLKeysym_sym_FIELD_READER
/* get_sym
 *
 * Return Type: SDL_Keycode
 */
mrb_value
mrb_SDL_SDLKeysym_get_sym(mrb_state* mrb, mrb_value self) {
  struct SDL_Keysym * native_self = mruby_unbox_struct SDL_Keysym(self);

  SDL_Keycode native_field = native_self->sym;

  mrb_value ruby_field = TODO_mruby_box_Sint32(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLKeysym_sym_FIELD_WRITER
/* set_sym
 *
 * Parameters:
 * - value: SDL_Keycode
 */
mrb_value
mrb_SDL_SDLKeysym_set_sym(mrb_state* mrb, mrb_value self) {
  struct SDL_Keysym * native_self = mruby_unbox_struct SDL_Keysym(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Sint32(ruby_field);

  Sint32 native_field = TODO_mruby_unbox_Sint32(ruby_field);

  native_self->sym = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLKeysym_mod_FIELD_READER
/* get_mod
 *
 * Return Type: Uint16
 */
mrb_value
mrb_SDL_SDLKeysym_get_mod(mrb_state* mrb, mrb_value self) {
  struct SDL_Keysym * native_self = mruby_unbox_struct SDL_Keysym(self);

  Uint16 native_field = native_self->mod;

  mrb_value ruby_field = TODO_mruby_box_Uint16(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLKeysym_mod_FIELD_WRITER
/* set_mod
 *
 * Parameters:
 * - value: Uint16
 */
mrb_value
mrb_SDL_SDLKeysym_set_mod(mrb_state* mrb, mrb_value self) {
  struct SDL_Keysym * native_self = mruby_unbox_struct SDL_Keysym(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Uint16(ruby_field);

  Uint16 native_field = TODO_mruby_unbox_Uint16(ruby_field);

  native_self->mod = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLKeysym_unused_FIELD_READER
/* get_unused
 *
 * Return Type: Uint32
 */
mrb_value
mrb_SDL_SDLKeysym_get_unused(mrb_state* mrb, mrb_value self) {
  struct SDL_Keysym * native_self = mruby_unbox_struct SDL_Keysym(self);

  Uint32 native_field = native_self->unused;

  mrb_value ruby_field = TODO_mruby_box_Uint32(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLKeysym_unused_FIELD_WRITER
/* set_unused
 *
 * Parameters:
 * - value: Uint32
 */
mrb_value
mrb_SDL_SDLKeysym_set_unused(mrb_state* mrb, mrb_value self) {
  struct SDL_Keysym * native_self = mruby_unbox_struct SDL_Keysym(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Uint32(ruby_field);

  Uint32 native_field = TODO_mruby_unbox_Uint32(ruby_field);

  native_self->unused = native_field;

  return ruby_field;
}
#endif


void mrb_SDL_SDLKeysym_init(mrb_state* mrb) {
  RClass* SDLKeysym_class = mrb_define_class_under(mrb, SDL_module(mrb), "Keysym", mrb->object_class);
  MRB_SET_INSTANCE_TT(SDLKeysym_class, MRB_TT_DATA);

#if BIND_SDLKeysym_INITIALIZE
  mrb_define_method(mrb, SDLKeysym_class, "initialize", mrb_SDL_SDLKeysym_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, SDLKeysym_class, "disown", mrb_SDL_SDLKeysym_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, SDLKeysym_class, "belongs_to_ruby?", mrb_SDL_SDLKeysym_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_SDLKeysym_scancode_FIELD_READER
  mrb_define_method(mrb, SDLKeysym_class, "scancode", mrb_SDL_SDLKeysym_get_scancode, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLKeysym_scancode_FIELD_WRITER
  mrb_define_method(mrb, SDLKeysym_class, "scancode=", mrb_SDL_SDLKeysym_set_scancode, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLKeysym_sym_FIELD_READER
  mrb_define_method(mrb, SDLKeysym_class, "sym", mrb_SDL_SDLKeysym_get_sym, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLKeysym_sym_FIELD_WRITER
  mrb_define_method(mrb, SDLKeysym_class, "sym=", mrb_SDL_SDLKeysym_set_sym, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLKeysym_mod_FIELD_READER
  mrb_define_method(mrb, SDLKeysym_class, "mod", mrb_SDL_SDLKeysym_get_mod, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLKeysym_mod_FIELD_WRITER
  mrb_define_method(mrb, SDLKeysym_class, "mod=", mrb_SDL_SDLKeysym_set_mod, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLKeysym_unused_FIELD_READER
  mrb_define_method(mrb, SDLKeysym_class, "unused", mrb_SDL_SDLKeysym_get_unused, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLKeysym_unused_FIELD_WRITER
  mrb_define_method(mrb, SDLKeysym_class, "unused=", mrb_SDL_SDLKeysym_set_unused, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
