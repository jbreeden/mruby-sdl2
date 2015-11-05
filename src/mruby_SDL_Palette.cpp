/*
 * struct SDL_Palette
 * Defined in file SDL_pixels.h @ line 263
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_SDL.h"

#if BIND_SDLPalette_TYPE

/*
 * Class Methods
 */

#if BIND_SDLPalette_INITIALIZE
mrb_value
mrb_SDL_SDLPalette_initialize(mrb_state* mrb, mrb_value self) {
  struct SDL_Palette* native_object = (struct SDL_Palette*)malloc(sizeof(struct SDL_Palette));
  mruby_gift_struct SDL_Palette_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_SDL_SDLPalette_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLPalette.disown only accepts objects of type SDL::SDLPalette");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_SDL_SDLPalette_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLPalette.belongs_to_ruby only accepts objects of type SDL::SDLPalette");
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

#if BIND_SDLPalette_ncolors_FIELD
/* get_ncolors
 *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDLPalette_get_ncolors(mrb_state* mrb, mrb_value self) {
  struct SDL_Palette * native_self = mruby_unbox_struct SDL_Palette(self);

  int native_field = native_self->ncolors;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}

/* set_ncolors
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SDL_SDLPalette_set_ncolors(mrb_state* mrb, mrb_value self) {
  struct SDL_Palette * native_self = mruby_unbox_struct SDL_Palette(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->ncolors = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLPalette_colors_FIELD
/* get_colors
 *
 * Return Type: SDL_Color *
 */
mrb_value
mrb_SDL_SDLPalette_get_colors(mrb_state* mrb, mrb_value self) {
  struct SDL_Palette * native_self = mruby_unbox_struct SDL_Palette(self);

  SDL_Color * native_field = native_self->colors;

  mrb_value ruby_field = (native_field == NULL ? mrb_nil_value() : mruby_box_SDL_Color(mrb, native_field));

  return ruby_field;
}

/* set_colors
 *
 * Parameters:
 * - value: SDL_Color *
 */
mrb_value
mrb_SDL_SDLPalette_set_colors(mrb_state* mrb, mrb_value self) {
  struct SDL_Palette * native_self = mruby_unbox_struct SDL_Palette(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, SDLColor_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLColor expected");
    return mrb_nil_value();
  }

  SDL_Color * native_field = (mrb_nil_p(ruby_field) ? NULL : mruby_unbox_SDL_Color(ruby_field));

  native_self->colors = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLPalette_version_FIELD
/* get_version
 *
 * Return Type: Uint32
 */
mrb_value
mrb_SDL_SDLPalette_get_version(mrb_state* mrb, mrb_value self) {
  struct SDL_Palette * native_self = mruby_unbox_struct SDL_Palette(self);

  Uint32 native_field = native_self->version;

  mrb_value ruby_field = TODO_mruby_box_Uint32(mrb, native_field);

  return ruby_field;
}

/* set_version
 *
 * Parameters:
 * - value: Uint32
 */
mrb_value
mrb_SDL_SDLPalette_set_version(mrb_state* mrb, mrb_value self) {
  struct SDL_Palette * native_self = mruby_unbox_struct SDL_Palette(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Uint32(ruby_field);

  Uint32 native_field = TODO_mruby_unbox_Uint32(ruby_field);

  native_self->version = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLPalette_refcount_FIELD
/* get_refcount
 *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDLPalette_get_refcount(mrb_state* mrb, mrb_value self) {
  struct SDL_Palette * native_self = mruby_unbox_struct SDL_Palette(self);

  int native_field = native_self->refcount;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}

/* set_refcount
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SDL_SDLPalette_set_refcount(mrb_state* mrb, mrb_value self) {
  struct SDL_Palette * native_self = mruby_unbox_struct SDL_Palette(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->refcount = native_field;

  return ruby_field;
}
#endif


void mrb_SDL_SDLPalette_init(mrb_state* mrb) {
  RClass* SDLPalette_class = mrb_define_class_under(mrb, SDL_module(mrb), "SDLPalette", mrb->object_class);
  MRB_SET_INSTANCE_TT(SDLPalette_class, MRB_TT_DATA);

#if BIND_SDLPalette_INITIALIZE
  mrb_define_method(mrb, SDLPalette_class, "initialize", mrb_SDL_SDLPalette_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, SDLPalette_class, "disown", mrb_SDL_SDLPalette_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, SDLPalette_class, "belongs_to_ruby?", mrb_SDL_SDLPalette_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_SDLPalette_ncolors_FIELD
  mrb_define_method(mrb, SDLPalette_class, "ncolors", mrb_SDL_SDLPalette_get_ncolors, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, SDLPalette_class, "ncolors=", mrb_SDL_SDLPalette_set_ncolors, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLPalette_colors_FIELD
  mrb_define_method(mrb, SDLPalette_class, "colors", mrb_SDL_SDLPalette_get_colors, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, SDLPalette_class, "colors=", mrb_SDL_SDLPalette_set_colors, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLPalette_version_FIELD
  mrb_define_method(mrb, SDLPalette_class, "version", mrb_SDL_SDLPalette_get_version, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, SDLPalette_class, "version=", mrb_SDL_SDLPalette_set_version, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLPalette_refcount_FIELD
  mrb_define_method(mrb, SDLPalette_class, "refcount", mrb_SDL_SDLPalette_get_refcount, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, SDLPalette_class, "refcount=", mrb_SDL_SDLPalette_set_refcount, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
