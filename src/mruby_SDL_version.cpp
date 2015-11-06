/*
 * struct SDL_version
 * Defined in file SDL_version.h @ line 51
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_SDL.h"

#if BIND_SDLVersion_TYPE

/*
 * Class Methods
 */

#if BIND_SDLVersion_INITIALIZE
mrb_value
mrb_SDL_SDLVersion_initialize(mrb_state* mrb, mrb_value self) {
  struct SDL_version* native_object = (struct SDL_version*)malloc(sizeof(struct SDL_version));
  mruby_gift_struct SDL_version_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_SDL_SDLVersion_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLVersion.disown only accepts objects of type SDL::SDLVersion");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_SDL_SDLVersion_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLVersion.belongs_to_ruby only accepts objects of type SDL::SDLVersion");
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

#if BIND_SDLVersion_major_FIELD_READER
/* get_major
 *
 * Return Type: Uint8
 */
mrb_value
mrb_SDL_SDLVersion_get_major(mrb_state* mrb, mrb_value self) {
  struct SDL_version * native_self = mruby_unbox_struct SDL_version(self);

  Uint8 native_field = native_self->major;

  mrb_value ruby_field = TODO_mruby_box_Uint8(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLVersion_major_FIELD_WRITER
/* set_major
 *
 * Parameters:
 * - value: Uint8
 */
mrb_value
mrb_SDL_SDLVersion_set_major(mrb_state* mrb, mrb_value self) {
  struct SDL_version * native_self = mruby_unbox_struct SDL_version(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Uint8(ruby_field);

  Uint8 native_field = TODO_mruby_unbox_Uint8(ruby_field);

  native_self->major = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLVersion_minor_FIELD_READER
/* get_minor
 *
 * Return Type: Uint8
 */
mrb_value
mrb_SDL_SDLVersion_get_minor(mrb_state* mrb, mrb_value self) {
  struct SDL_version * native_self = mruby_unbox_struct SDL_version(self);

  Uint8 native_field = native_self->minor;

  mrb_value ruby_field = TODO_mruby_box_Uint8(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLVersion_minor_FIELD_WRITER
/* set_minor
 *
 * Parameters:
 * - value: Uint8
 */
mrb_value
mrb_SDL_SDLVersion_set_minor(mrb_state* mrb, mrb_value self) {
  struct SDL_version * native_self = mruby_unbox_struct SDL_version(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Uint8(ruby_field);

  Uint8 native_field = TODO_mruby_unbox_Uint8(ruby_field);

  native_self->minor = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLVersion_patch_FIELD_READER
/* get_patch
 *
 * Return Type: Uint8
 */
mrb_value
mrb_SDL_SDLVersion_get_patch(mrb_state* mrb, mrb_value self) {
  struct SDL_version * native_self = mruby_unbox_struct SDL_version(self);

  Uint8 native_field = native_self->patch;

  mrb_value ruby_field = TODO_mruby_box_Uint8(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLVersion_patch_FIELD_WRITER
/* set_patch
 *
 * Parameters:
 * - value: Uint8
 */
mrb_value
mrb_SDL_SDLVersion_set_patch(mrb_state* mrb, mrb_value self) {
  struct SDL_version * native_self = mruby_unbox_struct SDL_version(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Uint8(ruby_field);

  Uint8 native_field = TODO_mruby_unbox_Uint8(ruby_field);

  native_self->patch = native_field;

  return ruby_field;
}
#endif


void mrb_SDL_SDLVersion_init(mrb_state* mrb) {
  RClass* SDLVersion_class = mrb_define_class_under(mrb, SDL_module(mrb), "SDLVersion", mrb->object_class);
  MRB_SET_INSTANCE_TT(SDLVersion_class, MRB_TT_DATA);

#if BIND_SDLVersion_INITIALIZE
  mrb_define_method(mrb, SDLVersion_class, "initialize", mrb_SDL_SDLVersion_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, SDLVersion_class, "disown", mrb_SDL_SDLVersion_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, SDLVersion_class, "belongs_to_ruby?", mrb_SDL_SDLVersion_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_SDLVersion_major_FIELD_READER
  mrb_define_method(mrb, SDLVersion_class, "major", mrb_SDL_SDLVersion_get_major, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLVersion_major_FIELD_WRITER
  mrb_define_method(mrb, SDLVersion_class, "major=", mrb_SDL_SDLVersion_set_major, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLVersion_minor_FIELD_READER
  mrb_define_method(mrb, SDLVersion_class, "minor", mrb_SDL_SDLVersion_get_minor, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLVersion_minor_FIELD_WRITER
  mrb_define_method(mrb, SDLVersion_class, "minor=", mrb_SDL_SDLVersion_set_minor, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLVersion_patch_FIELD_READER
  mrb_define_method(mrb, SDLVersion_class, "patch", mrb_SDL_SDLVersion_get_patch, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLVersion_patch_FIELD_WRITER
  mrb_define_method(mrb, SDLVersion_class, "patch=", mrb_SDL_SDLVersion_set_patch, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
