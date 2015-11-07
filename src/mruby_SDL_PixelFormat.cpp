/*
 * struct SDL_PixelFormat
 * Defined in file SDL_pixels.h @ line 274
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_SDL.h"

#if BIND_SDLPixelFormat_TYPE

/*
 * Class Methods
 */

#if BIND_SDLPixelFormat_INITIALIZE
mrb_value
mrb_SDL_SDLPixelFormat_initialize(mrb_state* mrb, mrb_value self) {
  struct SDL_PixelFormat* native_object = (struct SDL_PixelFormat*)malloc(sizeof(struct SDL_PixelFormat));
  mruby_gift_SDL_PixelFormat_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_SDL_SDLPixelFormat_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLPixelFormat.disown only accepts objects of type SDL::SDLPixelFormat");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_SDL_SDLPixelFormat_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLPixelFormat.belongs_to_ruby only accepts objects of type SDL::SDLPixelFormat");
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

#if BIND_SDLPixelFormat_format_FIELD_READER
/* get_format
 *
 * Return Type: Uint32
 */
mrb_value
mrb_SDL_SDLPixelFormat_get_format(mrb_state* mrb, mrb_value self) {
  struct SDL_PixelFormat * native_self = mruby_unbox_SDL_PixelFormat(self);

  Uint32 native_field = native_self->format;

  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLPixelFormat_format_FIELD_WRITER
/* set_format
 *
 * Parameters:
 * - value: Uint32
 */
mrb_value
mrb_SDL_SDLPixelFormat_set_format(mrb_state* mrb, mrb_value self) {
  struct SDL_PixelFormat * native_self = mruby_unbox_SDL_PixelFormat(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) { mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected"); return mrb_nil_value(); }

  Uint32 native_field = mrb_fixnum(ruby_field);

  native_self->format = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLPixelFormat_palette_FIELD_READER
/* get_palette
 *
 * Return Type: SDL_Palette *
 */
mrb_value
mrb_SDL_SDLPixelFormat_get_palette(mrb_state* mrb, mrb_value self) {
  struct SDL_PixelFormat * native_self = mruby_unbox_SDL_PixelFormat(self);

  SDL_Palette * native_field = native_self->palette;

  mrb_value ruby_field = (native_field == NULL ? mrb_nil_value() : mruby_box_SDL_Palette(mrb, native_field));

  return ruby_field;
}
#endif

#if BIND_SDLPixelFormat_palette_FIELD_WRITER
/* set_palette
 *
 * Parameters:
 * - value: SDL_Palette *
 */
mrb_value
mrb_SDL_SDLPixelFormat_set_palette(mrb_state* mrb, mrb_value self) {
  struct SDL_PixelFormat * native_self = mruby_unbox_SDL_PixelFormat(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, SDLPalette_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLPalette expected");
    return mrb_nil_value();
  }

  SDL_Palette * native_field = (mrb_nil_p(ruby_field) ? NULL : mruby_unbox_SDL_Palette(ruby_field));

  native_self->palette = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLPixelFormat_BitsPerPixel_FIELD_READER
/* get_BitsPerPixel
 *
 * Return Type: Uint8
 */
mrb_value
mrb_SDL_SDLPixelFormat_get_BitsPerPixel(mrb_state* mrb, mrb_value self) {
  struct SDL_PixelFormat * native_self = mruby_unbox_SDL_PixelFormat(self);

  Uint8 native_field = native_self->BitsPerPixel;

  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLPixelFormat_BitsPerPixel_FIELD_WRITER
/* set_BitsPerPixel
 *
 * Parameters:
 * - value: Uint8
 */
mrb_value
mrb_SDL_SDLPixelFormat_set_BitsPerPixel(mrb_state* mrb, mrb_value self) {
  struct SDL_PixelFormat * native_self = mruby_unbox_SDL_PixelFormat(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) { mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected"); return mrb_nil_value(); }

  Uint8 native_field = mrb_fixnum(ruby_field);

  native_self->BitsPerPixel = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLPixelFormat_BytesPerPixel_FIELD_READER
/* get_BytesPerPixel
 *
 * Return Type: Uint8
 */
mrb_value
mrb_SDL_SDLPixelFormat_get_BytesPerPixel(mrb_state* mrb, mrb_value self) {
  struct SDL_PixelFormat * native_self = mruby_unbox_SDL_PixelFormat(self);

  Uint8 native_field = native_self->BytesPerPixel;

  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLPixelFormat_BytesPerPixel_FIELD_WRITER
/* set_BytesPerPixel
 *
 * Parameters:
 * - value: Uint8
 */
mrb_value
mrb_SDL_SDLPixelFormat_set_BytesPerPixel(mrb_state* mrb, mrb_value self) {
  struct SDL_PixelFormat * native_self = mruby_unbox_SDL_PixelFormat(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) { mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected"); return mrb_nil_value(); }

  Uint8 native_field = mrb_fixnum(ruby_field);

  native_self->BytesPerPixel = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLPixelFormat_padding_FIELD_READER
/* get_padding
 *
 * Return Type: Uint8 [2]
 */
mrb_value
mrb_SDL_SDLPixelFormat_get_padding(mrb_state* mrb, mrb_value self) {
  struct SDL_PixelFormat * native_self = mruby_unbox_SDL_PixelFormat(self);

  Uint8 [2] native_field = native_self->padding;

  mrb_value ruby_field = TODO_mruby_box_Uint8_[2](mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLPixelFormat_padding_FIELD_WRITER
/* set_padding
 *
 * Parameters:
 * - value: Uint8 [2]
 */
mrb_value
mrb_SDL_SDLPixelFormat_set_padding(mrb_state* mrb, mrb_value self) {
  struct SDL_PixelFormat * native_self = mruby_unbox_SDL_PixelFormat(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Uint8_[2](ruby_field);

  Uint8 [2] native_field = mrb_fixnum_[2](ruby_field);

  native_self->padding = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLPixelFormat_Rmask_FIELD_READER
/* get_Rmask
 *
 * Return Type: Uint32
 */
mrb_value
mrb_SDL_SDLPixelFormat_get_Rmask(mrb_state* mrb, mrb_value self) {
  struct SDL_PixelFormat * native_self = mruby_unbox_SDL_PixelFormat(self);

  Uint32 native_field = native_self->Rmask;

  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLPixelFormat_Rmask_FIELD_WRITER
/* set_Rmask
 *
 * Parameters:
 * - value: Uint32
 */
mrb_value
mrb_SDL_SDLPixelFormat_set_Rmask(mrb_state* mrb, mrb_value self) {
  struct SDL_PixelFormat * native_self = mruby_unbox_SDL_PixelFormat(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) { mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected"); return mrb_nil_value(); }

  Uint32 native_field = mrb_fixnum(ruby_field);

  native_self->Rmask = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLPixelFormat_Gmask_FIELD_READER
/* get_Gmask
 *
 * Return Type: Uint32
 */
mrb_value
mrb_SDL_SDLPixelFormat_get_Gmask(mrb_state* mrb, mrb_value self) {
  struct SDL_PixelFormat * native_self = mruby_unbox_SDL_PixelFormat(self);

  Uint32 native_field = native_self->Gmask;

  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLPixelFormat_Gmask_FIELD_WRITER
/* set_Gmask
 *
 * Parameters:
 * - value: Uint32
 */
mrb_value
mrb_SDL_SDLPixelFormat_set_Gmask(mrb_state* mrb, mrb_value self) {
  struct SDL_PixelFormat * native_self = mruby_unbox_SDL_PixelFormat(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) { mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected"); return mrb_nil_value(); }

  Uint32 native_field = mrb_fixnum(ruby_field);

  native_self->Gmask = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLPixelFormat_Bmask_FIELD_READER
/* get_Bmask
 *
 * Return Type: Uint32
 */
mrb_value
mrb_SDL_SDLPixelFormat_get_Bmask(mrb_state* mrb, mrb_value self) {
  struct SDL_PixelFormat * native_self = mruby_unbox_SDL_PixelFormat(self);

  Uint32 native_field = native_self->Bmask;

  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLPixelFormat_Bmask_FIELD_WRITER
/* set_Bmask
 *
 * Parameters:
 * - value: Uint32
 */
mrb_value
mrb_SDL_SDLPixelFormat_set_Bmask(mrb_state* mrb, mrb_value self) {
  struct SDL_PixelFormat * native_self = mruby_unbox_SDL_PixelFormat(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) { mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected"); return mrb_nil_value(); }

  Uint32 native_field = mrb_fixnum(ruby_field);

  native_self->Bmask = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLPixelFormat_Amask_FIELD_READER
/* get_Amask
 *
 * Return Type: Uint32
 */
mrb_value
mrb_SDL_SDLPixelFormat_get_Amask(mrb_state* mrb, mrb_value self) {
  struct SDL_PixelFormat * native_self = mruby_unbox_SDL_PixelFormat(self);

  Uint32 native_field = native_self->Amask;

  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLPixelFormat_Amask_FIELD_WRITER
/* set_Amask
 *
 * Parameters:
 * - value: Uint32
 */
mrb_value
mrb_SDL_SDLPixelFormat_set_Amask(mrb_state* mrb, mrb_value self) {
  struct SDL_PixelFormat * native_self = mruby_unbox_SDL_PixelFormat(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) { mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected"); return mrb_nil_value(); }

  Uint32 native_field = mrb_fixnum(ruby_field);

  native_self->Amask = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLPixelFormat_Rloss_FIELD_READER
/* get_Rloss
 *
 * Return Type: Uint8
 */
mrb_value
mrb_SDL_SDLPixelFormat_get_Rloss(mrb_state* mrb, mrb_value self) {
  struct SDL_PixelFormat * native_self = mruby_unbox_SDL_PixelFormat(self);

  Uint8 native_field = native_self->Rloss;

  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLPixelFormat_Rloss_FIELD_WRITER
/* set_Rloss
 *
 * Parameters:
 * - value: Uint8
 */
mrb_value
mrb_SDL_SDLPixelFormat_set_Rloss(mrb_state* mrb, mrb_value self) {
  struct SDL_PixelFormat * native_self = mruby_unbox_SDL_PixelFormat(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) { mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected"); return mrb_nil_value(); }

  Uint8 native_field = mrb_fixnum(ruby_field);

  native_self->Rloss = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLPixelFormat_Gloss_FIELD_READER
/* get_Gloss
 *
 * Return Type: Uint8
 */
mrb_value
mrb_SDL_SDLPixelFormat_get_Gloss(mrb_state* mrb, mrb_value self) {
  struct SDL_PixelFormat * native_self = mruby_unbox_SDL_PixelFormat(self);

  Uint8 native_field = native_self->Gloss;

  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLPixelFormat_Gloss_FIELD_WRITER
/* set_Gloss
 *
 * Parameters:
 * - value: Uint8
 */
mrb_value
mrb_SDL_SDLPixelFormat_set_Gloss(mrb_state* mrb, mrb_value self) {
  struct SDL_PixelFormat * native_self = mruby_unbox_SDL_PixelFormat(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) { mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected"); return mrb_nil_value(); }

  Uint8 native_field = mrb_fixnum(ruby_field);

  native_self->Gloss = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLPixelFormat_Bloss_FIELD_READER
/* get_Bloss
 *
 * Return Type: Uint8
 */
mrb_value
mrb_SDL_SDLPixelFormat_get_Bloss(mrb_state* mrb, mrb_value self) {
  struct SDL_PixelFormat * native_self = mruby_unbox_SDL_PixelFormat(self);

  Uint8 native_field = native_self->Bloss;

  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLPixelFormat_Bloss_FIELD_WRITER
/* set_Bloss
 *
 * Parameters:
 * - value: Uint8
 */
mrb_value
mrb_SDL_SDLPixelFormat_set_Bloss(mrb_state* mrb, mrb_value self) {
  struct SDL_PixelFormat * native_self = mruby_unbox_SDL_PixelFormat(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) { mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected"); return mrb_nil_value(); }

  Uint8 native_field = mrb_fixnum(ruby_field);

  native_self->Bloss = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLPixelFormat_Aloss_FIELD_READER
/* get_Aloss
 *
 * Return Type: Uint8
 */
mrb_value
mrb_SDL_SDLPixelFormat_get_Aloss(mrb_state* mrb, mrb_value self) {
  struct SDL_PixelFormat * native_self = mruby_unbox_SDL_PixelFormat(self);

  Uint8 native_field = native_self->Aloss;

  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLPixelFormat_Aloss_FIELD_WRITER
/* set_Aloss
 *
 * Parameters:
 * - value: Uint8
 */
mrb_value
mrb_SDL_SDLPixelFormat_set_Aloss(mrb_state* mrb, mrb_value self) {
  struct SDL_PixelFormat * native_self = mruby_unbox_SDL_PixelFormat(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) { mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected"); return mrb_nil_value(); }

  Uint8 native_field = mrb_fixnum(ruby_field);

  native_self->Aloss = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLPixelFormat_Rshift_FIELD_READER
/* get_Rshift
 *
 * Return Type: Uint8
 */
mrb_value
mrb_SDL_SDLPixelFormat_get_Rshift(mrb_state* mrb, mrb_value self) {
  struct SDL_PixelFormat * native_self = mruby_unbox_SDL_PixelFormat(self);

  Uint8 native_field = native_self->Rshift;

  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLPixelFormat_Rshift_FIELD_WRITER
/* set_Rshift
 *
 * Parameters:
 * - value: Uint8
 */
mrb_value
mrb_SDL_SDLPixelFormat_set_Rshift(mrb_state* mrb, mrb_value self) {
  struct SDL_PixelFormat * native_self = mruby_unbox_SDL_PixelFormat(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) { mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected"); return mrb_nil_value(); }

  Uint8 native_field = mrb_fixnum(ruby_field);

  native_self->Rshift = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLPixelFormat_Gshift_FIELD_READER
/* get_Gshift
 *
 * Return Type: Uint8
 */
mrb_value
mrb_SDL_SDLPixelFormat_get_Gshift(mrb_state* mrb, mrb_value self) {
  struct SDL_PixelFormat * native_self = mruby_unbox_SDL_PixelFormat(self);

  Uint8 native_field = native_self->Gshift;

  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLPixelFormat_Gshift_FIELD_WRITER
/* set_Gshift
 *
 * Parameters:
 * - value: Uint8
 */
mrb_value
mrb_SDL_SDLPixelFormat_set_Gshift(mrb_state* mrb, mrb_value self) {
  struct SDL_PixelFormat * native_self = mruby_unbox_SDL_PixelFormat(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) { mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected"); return mrb_nil_value(); }

  Uint8 native_field = mrb_fixnum(ruby_field);

  native_self->Gshift = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLPixelFormat_Bshift_FIELD_READER
/* get_Bshift
 *
 * Return Type: Uint8
 */
mrb_value
mrb_SDL_SDLPixelFormat_get_Bshift(mrb_state* mrb, mrb_value self) {
  struct SDL_PixelFormat * native_self = mruby_unbox_SDL_PixelFormat(self);

  Uint8 native_field = native_self->Bshift;

  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLPixelFormat_Bshift_FIELD_WRITER
/* set_Bshift
 *
 * Parameters:
 * - value: Uint8
 */
mrb_value
mrb_SDL_SDLPixelFormat_set_Bshift(mrb_state* mrb, mrb_value self) {
  struct SDL_PixelFormat * native_self = mruby_unbox_SDL_PixelFormat(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) { mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected"); return mrb_nil_value(); }

  Uint8 native_field = mrb_fixnum(ruby_field);

  native_self->Bshift = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLPixelFormat_Ashift_FIELD_READER
/* get_Ashift
 *
 * Return Type: Uint8
 */
mrb_value
mrb_SDL_SDLPixelFormat_get_Ashift(mrb_state* mrb, mrb_value self) {
  struct SDL_PixelFormat * native_self = mruby_unbox_SDL_PixelFormat(self);

  Uint8 native_field = native_self->Ashift;

  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLPixelFormat_Ashift_FIELD_WRITER
/* set_Ashift
 *
 * Parameters:
 * - value: Uint8
 */
mrb_value
mrb_SDL_SDLPixelFormat_set_Ashift(mrb_state* mrb, mrb_value self) {
  struct SDL_PixelFormat * native_self = mruby_unbox_SDL_PixelFormat(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) { mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected"); return mrb_nil_value(); }

  Uint8 native_field = mrb_fixnum(ruby_field);

  native_self->Ashift = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLPixelFormat_refcount_FIELD_READER
/* get_refcount
 *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDLPixelFormat_get_refcount(mrb_state* mrb, mrb_value self) {
  struct SDL_PixelFormat * native_self = mruby_unbox_SDL_PixelFormat(self);

  int native_field = native_self->refcount;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLPixelFormat_refcount_FIELD_WRITER
/* set_refcount
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SDL_SDLPixelFormat_set_refcount(mrb_state* mrb, mrb_value self) {
  struct SDL_PixelFormat * native_self = mruby_unbox_SDL_PixelFormat(self);
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

#if BIND_SDLPixelFormat_next_FIELD_READER
/* get_next
 *
 * Return Type: struct SDL_PixelFormat *
 */
mrb_value
mrb_SDL_SDLPixelFormat_get_next(mrb_state* mrb, mrb_value self) {
  struct SDL_PixelFormat * native_self = mruby_unbox_SDL_PixelFormat(self);

  struct SDL_PixelFormat * native_field = native_self->next;

  mrb_value ruby_field = (native_field == NULL ? mrb_nil_value() : mruby_box_SDL_PixelFormat(mrb, native_field));

  return ruby_field;
}
#endif

#if BIND_SDLPixelFormat_next_FIELD_WRITER
/* set_next
 *
 * Parameters:
 * - value: struct SDL_PixelFormat *
 */
mrb_value
mrb_SDL_SDLPixelFormat_set_next(mrb_state* mrb, mrb_value self) {
  struct SDL_PixelFormat * native_self = mruby_unbox_SDL_PixelFormat(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, SDLPixelFormat_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLPixelFormat expected");
    return mrb_nil_value();
  }

  struct SDL_PixelFormat * native_field = (mrb_nil_p(ruby_field) ? NULL : mruby_unbox_SDL_PixelFormat(ruby_field));

  native_self->next = native_field;

  return ruby_field;
}
#endif


void mrb_SDL_SDLPixelFormat_init(mrb_state* mrb) {
  RClass* SDLPixelFormat_class = mrb_define_class_under(mrb, SDL_module(mrb), "PixelFormat", mrb->object_class);
  MRB_SET_INSTANCE_TT(SDLPixelFormat_class, MRB_TT_DATA);

#if BIND_SDLPixelFormat_INITIALIZE
  mrb_define_method(mrb, SDLPixelFormat_class, "initialize", mrb_SDL_SDLPixelFormat_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, SDLPixelFormat_class, "disown", mrb_SDL_SDLPixelFormat_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, SDLPixelFormat_class, "belongs_to_ruby?", mrb_SDL_SDLPixelFormat_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_SDLPixelFormat_format_FIELD_READER
  mrb_define_method(mrb, SDLPixelFormat_class, "format", mrb_SDL_SDLPixelFormat_get_format, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLPixelFormat_format_FIELD_WRITER
  mrb_define_method(mrb, SDLPixelFormat_class, "format=", mrb_SDL_SDLPixelFormat_set_format, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLPixelFormat_palette_FIELD_READER
  mrb_define_method(mrb, SDLPixelFormat_class, "palette", mrb_SDL_SDLPixelFormat_get_palette, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLPixelFormat_palette_FIELD_WRITER
  mrb_define_method(mrb, SDLPixelFormat_class, "palette=", mrb_SDL_SDLPixelFormat_set_palette, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLPixelFormat_BitsPerPixel_FIELD_READER
  mrb_define_method(mrb, SDLPixelFormat_class, "BitsPerPixel", mrb_SDL_SDLPixelFormat_get_BitsPerPixel, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLPixelFormat_BitsPerPixel_FIELD_WRITER
  mrb_define_method(mrb, SDLPixelFormat_class, "BitsPerPixel=", mrb_SDL_SDLPixelFormat_set_BitsPerPixel, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLPixelFormat_BytesPerPixel_FIELD_READER
  mrb_define_method(mrb, SDLPixelFormat_class, "BytesPerPixel", mrb_SDL_SDLPixelFormat_get_BytesPerPixel, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLPixelFormat_BytesPerPixel_FIELD_WRITER
  mrb_define_method(mrb, SDLPixelFormat_class, "BytesPerPixel=", mrb_SDL_SDLPixelFormat_set_BytesPerPixel, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLPixelFormat_padding_FIELD_READER
  mrb_define_method(mrb, SDLPixelFormat_class, "padding", mrb_SDL_SDLPixelFormat_get_padding, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLPixelFormat_padding_FIELD_WRITER
  mrb_define_method(mrb, SDLPixelFormat_class, "padding=", mrb_SDL_SDLPixelFormat_set_padding, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLPixelFormat_Rmask_FIELD_READER
  mrb_define_method(mrb, SDLPixelFormat_class, "Rmask", mrb_SDL_SDLPixelFormat_get_Rmask, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLPixelFormat_Rmask_FIELD_WRITER
  mrb_define_method(mrb, SDLPixelFormat_class, "Rmask=", mrb_SDL_SDLPixelFormat_set_Rmask, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLPixelFormat_Gmask_FIELD_READER
  mrb_define_method(mrb, SDLPixelFormat_class, "Gmask", mrb_SDL_SDLPixelFormat_get_Gmask, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLPixelFormat_Gmask_FIELD_WRITER
  mrb_define_method(mrb, SDLPixelFormat_class, "Gmask=", mrb_SDL_SDLPixelFormat_set_Gmask, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLPixelFormat_Bmask_FIELD_READER
  mrb_define_method(mrb, SDLPixelFormat_class, "Bmask", mrb_SDL_SDLPixelFormat_get_Bmask, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLPixelFormat_Bmask_FIELD_WRITER
  mrb_define_method(mrb, SDLPixelFormat_class, "Bmask=", mrb_SDL_SDLPixelFormat_set_Bmask, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLPixelFormat_Amask_FIELD_READER
  mrb_define_method(mrb, SDLPixelFormat_class, "Amask", mrb_SDL_SDLPixelFormat_get_Amask, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLPixelFormat_Amask_FIELD_WRITER
  mrb_define_method(mrb, SDLPixelFormat_class, "Amask=", mrb_SDL_SDLPixelFormat_set_Amask, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLPixelFormat_Rloss_FIELD_READER
  mrb_define_method(mrb, SDLPixelFormat_class, "Rloss", mrb_SDL_SDLPixelFormat_get_Rloss, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLPixelFormat_Rloss_FIELD_WRITER
  mrb_define_method(mrb, SDLPixelFormat_class, "Rloss=", mrb_SDL_SDLPixelFormat_set_Rloss, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLPixelFormat_Gloss_FIELD_READER
  mrb_define_method(mrb, SDLPixelFormat_class, "Gloss", mrb_SDL_SDLPixelFormat_get_Gloss, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLPixelFormat_Gloss_FIELD_WRITER
  mrb_define_method(mrb, SDLPixelFormat_class, "Gloss=", mrb_SDL_SDLPixelFormat_set_Gloss, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLPixelFormat_Bloss_FIELD_READER
  mrb_define_method(mrb, SDLPixelFormat_class, "Bloss", mrb_SDL_SDLPixelFormat_get_Bloss, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLPixelFormat_Bloss_FIELD_WRITER
  mrb_define_method(mrb, SDLPixelFormat_class, "Bloss=", mrb_SDL_SDLPixelFormat_set_Bloss, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLPixelFormat_Aloss_FIELD_READER
  mrb_define_method(mrb, SDLPixelFormat_class, "Aloss", mrb_SDL_SDLPixelFormat_get_Aloss, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLPixelFormat_Aloss_FIELD_WRITER
  mrb_define_method(mrb, SDLPixelFormat_class, "Aloss=", mrb_SDL_SDLPixelFormat_set_Aloss, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLPixelFormat_Rshift_FIELD_READER
  mrb_define_method(mrb, SDLPixelFormat_class, "Rshift", mrb_SDL_SDLPixelFormat_get_Rshift, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLPixelFormat_Rshift_FIELD_WRITER
  mrb_define_method(mrb, SDLPixelFormat_class, "Rshift=", mrb_SDL_SDLPixelFormat_set_Rshift, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLPixelFormat_Gshift_FIELD_READER
  mrb_define_method(mrb, SDLPixelFormat_class, "Gshift", mrb_SDL_SDLPixelFormat_get_Gshift, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLPixelFormat_Gshift_FIELD_WRITER
  mrb_define_method(mrb, SDLPixelFormat_class, "Gshift=", mrb_SDL_SDLPixelFormat_set_Gshift, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLPixelFormat_Bshift_FIELD_READER
  mrb_define_method(mrb, SDLPixelFormat_class, "Bshift", mrb_SDL_SDLPixelFormat_get_Bshift, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLPixelFormat_Bshift_FIELD_WRITER
  mrb_define_method(mrb, SDLPixelFormat_class, "Bshift=", mrb_SDL_SDLPixelFormat_set_Bshift, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLPixelFormat_Ashift_FIELD_READER
  mrb_define_method(mrb, SDLPixelFormat_class, "Ashift", mrb_SDL_SDLPixelFormat_get_Ashift, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLPixelFormat_Ashift_FIELD_WRITER
  mrb_define_method(mrb, SDLPixelFormat_class, "Ashift=", mrb_SDL_SDLPixelFormat_set_Ashift, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLPixelFormat_refcount_FIELD_READER
  mrb_define_method(mrb, SDLPixelFormat_class, "refcount", mrb_SDL_SDLPixelFormat_get_refcount, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLPixelFormat_refcount_FIELD_WRITER
  mrb_define_method(mrb, SDLPixelFormat_class, "refcount=", mrb_SDL_SDLPixelFormat_set_refcount, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLPixelFormat_next_FIELD_READER
  mrb_define_method(mrb, SDLPixelFormat_class, "next", mrb_SDL_SDLPixelFormat_get_next, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLPixelFormat_next_FIELD_WRITER
  mrb_define_method(mrb, SDLPixelFormat_class, "next=", mrb_SDL_SDLPixelFormat_set_next, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
