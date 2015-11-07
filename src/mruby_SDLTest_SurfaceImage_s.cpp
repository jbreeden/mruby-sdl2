/*
 * struct SDLTest_SurfaceImage_s
 * Defined in file SDL_test_images.h @ line 50
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_SDL.h"

#if BIND_SDLTestSurfaceImageS_TYPE

/*
 * Class Methods
 */

#if BIND_SDLTestSurfaceImageS_INITIALIZE
mrb_value
mrb_SDL_SDLTestSurfaceImageS_initialize(mrb_state* mrb, mrb_value self) {
  struct SDLTest_SurfaceImage_s* native_object = (struct SDLTest_SurfaceImage_s*)malloc(sizeof(struct SDLTest_SurfaceImage_s));
  mruby_gift_struct SDLTest_SurfaceImage_s_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_SDL_SDLTestSurfaceImageS_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLTestSurfaceImageS.disown only accepts objects of type SDL::SDLTestSurfaceImageS");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_SDL_SDLTestSurfaceImageS_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLTestSurfaceImageS.belongs_to_ruby only accepts objects of type SDL::SDLTestSurfaceImageS");
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

#if BIND_SDLTestSurfaceImageS_width_FIELD_READER
/* get_width
 *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDLTestSurfaceImageS_get_width(mrb_state* mrb, mrb_value self) {
  struct SDLTest_SurfaceImage_s * native_self = mruby_unbox_struct SDLTest_SurfaceImage_s(self);

  int native_field = native_self->width;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLTestSurfaceImageS_width_FIELD_WRITER
/* set_width
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SDL_SDLTestSurfaceImageS_set_width(mrb_state* mrb, mrb_value self) {
  struct SDLTest_SurfaceImage_s * native_self = mruby_unbox_struct SDLTest_SurfaceImage_s(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->width = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLTestSurfaceImageS_height_FIELD_READER
/* get_height
 *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDLTestSurfaceImageS_get_height(mrb_state* mrb, mrb_value self) {
  struct SDLTest_SurfaceImage_s * native_self = mruby_unbox_struct SDLTest_SurfaceImage_s(self);

  int native_field = native_self->height;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLTestSurfaceImageS_height_FIELD_WRITER
/* set_height
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SDL_SDLTestSurfaceImageS_set_height(mrb_state* mrb, mrb_value self) {
  struct SDLTest_SurfaceImage_s * native_self = mruby_unbox_struct SDLTest_SurfaceImage_s(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->height = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLTestSurfaceImageS_bytes_per_pixel_FIELD_READER
/* get_bytes_per_pixel
 *
 * Return Type: unsigned int
 */
mrb_value
mrb_SDL_SDLTestSurfaceImageS_get_bytes_per_pixel(mrb_state* mrb, mrb_value self) {
  struct SDLTest_SurfaceImage_s * native_self = mruby_unbox_struct SDLTest_SurfaceImage_s(self);

  unsigned int native_field = native_self->bytes_per_pixel;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLTestSurfaceImageS_bytes_per_pixel_FIELD_WRITER
/* set_bytes_per_pixel
 *
 * Parameters:
 * - value: unsigned int
 */
mrb_value
mrb_SDL_SDLTestSurfaceImageS_set_bytes_per_pixel(mrb_state* mrb, mrb_value self) {
  struct SDLTest_SurfaceImage_s * native_self = mruby_unbox_struct SDLTest_SurfaceImage_s(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  unsigned int native_field = mrb_fixnum(ruby_field);

  native_self->bytes_per_pixel = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLTestSurfaceImageS_pixel_data_FIELD_READER
/* get_pixel_data
 *
 * Return Type: const char *
 */
mrb_value
mrb_SDL_SDLTestSurfaceImageS_get_pixel_data(mrb_state* mrb, mrb_value self) {
  struct SDLTest_SurfaceImage_s * native_self = mruby_unbox_struct SDLTest_SurfaceImage_s(self);

  const char * native_field = native_self->pixel_data;

  mrb_value ruby_field = mrb_str_new_cstr(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLTestSurfaceImageS_pixel_data_FIELD_WRITER
/* set_pixel_data
 *
 * Parameters:
 * - value: const char *
 */
mrb_value
mrb_SDL_SDLTestSurfaceImageS_set_pixel_data(mrb_state* mrb, mrb_value self) {
  struct SDLTest_SurfaceImage_s * native_self = mruby_unbox_struct SDLTest_SurfaceImage_s(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }

  const char * native_field = mrb_string_value_cstr(mrb, &ruby_field);

  native_self->pixel_data = native_field;

  return ruby_field;
}
#endif


void mrb_SDL_SDLTestSurfaceImageS_init(mrb_state* mrb) {
  RClass* SDLTestSurfaceImageS_class = mrb_define_class_under(mrb, SDL_module(mrb), "TestSurfaceImageS", mrb->object_class);
  MRB_SET_INSTANCE_TT(SDLTestSurfaceImageS_class, MRB_TT_DATA);

#if BIND_SDLTestSurfaceImageS_INITIALIZE
  mrb_define_method(mrb, SDLTestSurfaceImageS_class, "initialize", mrb_SDL_SDLTestSurfaceImageS_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, SDLTestSurfaceImageS_class, "disown", mrb_SDL_SDLTestSurfaceImageS_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, SDLTestSurfaceImageS_class, "belongs_to_ruby?", mrb_SDL_SDLTestSurfaceImageS_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_SDLTestSurfaceImageS_width_FIELD_READER
  mrb_define_method(mrb, SDLTestSurfaceImageS_class, "width", mrb_SDL_SDLTestSurfaceImageS_get_width, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLTestSurfaceImageS_width_FIELD_WRITER
  mrb_define_method(mrb, SDLTestSurfaceImageS_class, "width=", mrb_SDL_SDLTestSurfaceImageS_set_width, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLTestSurfaceImageS_height_FIELD_READER
  mrb_define_method(mrb, SDLTestSurfaceImageS_class, "height", mrb_SDL_SDLTestSurfaceImageS_get_height, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLTestSurfaceImageS_height_FIELD_WRITER
  mrb_define_method(mrb, SDLTestSurfaceImageS_class, "height=", mrb_SDL_SDLTestSurfaceImageS_set_height, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLTestSurfaceImageS_bytes_per_pixel_FIELD_READER
  mrb_define_method(mrb, SDLTestSurfaceImageS_class, "bytes_per_pixel", mrb_SDL_SDLTestSurfaceImageS_get_bytes_per_pixel, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLTestSurfaceImageS_bytes_per_pixel_FIELD_WRITER
  mrb_define_method(mrb, SDLTestSurfaceImageS_class, "bytes_per_pixel=", mrb_SDL_SDLTestSurfaceImageS_set_bytes_per_pixel, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLTestSurfaceImageS_pixel_data_FIELD_READER
  mrb_define_method(mrb, SDLTestSurfaceImageS_class, "pixel_data", mrb_SDL_SDLTestSurfaceImageS_get_pixel_data, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLTestSurfaceImageS_pixel_data_FIELD_WRITER
  mrb_define_method(mrb, SDLTestSurfaceImageS_class, "pixel_data=", mrb_SDL_SDLTestSurfaceImageS_set_pixel_data, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
