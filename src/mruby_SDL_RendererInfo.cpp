/*
 * struct SDL_RendererInfo
 * Defined in file SDL_render.h @ line 78
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_SDL.h"

#if BIND_SDLRendererInfo_TYPE

/*
 * Class Methods
 */

#if BIND_SDLRendererInfo_INITIALIZE
mrb_value
mrb_SDL_SDLRendererInfo_initialize(mrb_state* mrb, mrb_value self) {
  struct SDL_RendererInfo* native_object = (struct SDL_RendererInfo*)malloc(sizeof(struct SDL_RendererInfo));
  mruby_gift_struct SDL_RendererInfo_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_SDL_SDLRendererInfo_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLRendererInfo.disown only accepts objects of type SDL::SDLRendererInfo");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_SDL_SDLRendererInfo_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLRendererInfo.belongs_to_ruby only accepts objects of type SDL::SDLRendererInfo");
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

#if BIND_SDLRendererInfo_name_FIELD_READER
/* get_name
 *
 * Return Type: const char *
 */
mrb_value
mrb_SDL_SDLRendererInfo_get_name(mrb_state* mrb, mrb_value self) {
  struct SDL_RendererInfo * native_self = mruby_unbox_struct SDL_RendererInfo(self);

  const char * native_field = native_self->name;

  mrb_value ruby_field = mrb_str_new_cstr(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLRendererInfo_name_FIELD_WRITER
/* set_name
 *
 * Parameters:
 * - value: const char *
 */
mrb_value
mrb_SDL_SDLRendererInfo_set_name(mrb_state* mrb, mrb_value self) {
  struct SDL_RendererInfo * native_self = mruby_unbox_struct SDL_RendererInfo(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }

  const char * native_field = mrb_string_value_cstr(mrb, &ruby_field);

  native_self->name = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLRendererInfo_flags_FIELD_READER
/* get_flags
 *
 * Return Type: Uint32
 */
mrb_value
mrb_SDL_SDLRendererInfo_get_flags(mrb_state* mrb, mrb_value self) {
  struct SDL_RendererInfo * native_self = mruby_unbox_struct SDL_RendererInfo(self);

  Uint32 native_field = native_self->flags;

  mrb_value ruby_field = TODO_mruby_box_Uint32(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLRendererInfo_flags_FIELD_WRITER
/* set_flags
 *
 * Parameters:
 * - value: Uint32
 */
mrb_value
mrb_SDL_SDLRendererInfo_set_flags(mrb_state* mrb, mrb_value self) {
  struct SDL_RendererInfo * native_self = mruby_unbox_struct SDL_RendererInfo(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Uint32(ruby_field);

  Uint32 native_field = TODO_mruby_unbox_Uint32(ruby_field);

  native_self->flags = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLRendererInfo_num_texture_formats_FIELD_READER
/* get_num_texture_formats
 *
 * Return Type: Uint32
 */
mrb_value
mrb_SDL_SDLRendererInfo_get_num_texture_formats(mrb_state* mrb, mrb_value self) {
  struct SDL_RendererInfo * native_self = mruby_unbox_struct SDL_RendererInfo(self);

  Uint32 native_field = native_self->num_texture_formats;

  mrb_value ruby_field = TODO_mruby_box_Uint32(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLRendererInfo_num_texture_formats_FIELD_WRITER
/* set_num_texture_formats
 *
 * Parameters:
 * - value: Uint32
 */
mrb_value
mrb_SDL_SDLRendererInfo_set_num_texture_formats(mrb_state* mrb, mrb_value self) {
  struct SDL_RendererInfo * native_self = mruby_unbox_struct SDL_RendererInfo(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Uint32(ruby_field);

  Uint32 native_field = TODO_mruby_unbox_Uint32(ruby_field);

  native_self->num_texture_formats = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLRendererInfo_texture_formats_FIELD_READER
/* get_texture_formats
 *
 * Return Type: Uint32 [16]
 */
mrb_value
mrb_SDL_SDLRendererInfo_get_texture_formats(mrb_state* mrb, mrb_value self) {
  struct SDL_RendererInfo * native_self = mruby_unbox_struct SDL_RendererInfo(self);

  Uint32 [16] native_field = native_self->texture_formats;

  mrb_value ruby_field = TODO_mruby_box_Uint32_[16](mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLRendererInfo_texture_formats_FIELD_WRITER
/* set_texture_formats
 *
 * Parameters:
 * - value: Uint32 [16]
 */
mrb_value
mrb_SDL_SDLRendererInfo_set_texture_formats(mrb_state* mrb, mrb_value self) {
  struct SDL_RendererInfo * native_self = mruby_unbox_struct SDL_RendererInfo(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Uint32_[16](ruby_field);

  Uint32 [16] native_field = TODO_mruby_unbox_Uint32_[16](ruby_field);

  native_self->texture_formats = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLRendererInfo_max_texture_width_FIELD_READER
/* get_max_texture_width
 *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDLRendererInfo_get_max_texture_width(mrb_state* mrb, mrb_value self) {
  struct SDL_RendererInfo * native_self = mruby_unbox_struct SDL_RendererInfo(self);

  int native_field = native_self->max_texture_width;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLRendererInfo_max_texture_width_FIELD_WRITER
/* set_max_texture_width
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SDL_SDLRendererInfo_set_max_texture_width(mrb_state* mrb, mrb_value self) {
  struct SDL_RendererInfo * native_self = mruby_unbox_struct SDL_RendererInfo(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->max_texture_width = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLRendererInfo_max_texture_height_FIELD_READER
/* get_max_texture_height
 *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDLRendererInfo_get_max_texture_height(mrb_state* mrb, mrb_value self) {
  struct SDL_RendererInfo * native_self = mruby_unbox_struct SDL_RendererInfo(self);

  int native_field = native_self->max_texture_height;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLRendererInfo_max_texture_height_FIELD_WRITER
/* set_max_texture_height
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SDL_SDLRendererInfo_set_max_texture_height(mrb_state* mrb, mrb_value self) {
  struct SDL_RendererInfo * native_self = mruby_unbox_struct SDL_RendererInfo(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->max_texture_height = native_field;

  return ruby_field;
}
#endif


void mrb_SDL_SDLRendererInfo_init(mrb_state* mrb) {
  RClass* SDLRendererInfo_class = mrb_define_class_under(mrb, SDL_module(mrb), "SDLRendererInfo", mrb->object_class);
  MRB_SET_INSTANCE_TT(SDLRendererInfo_class, MRB_TT_DATA);

#if BIND_SDLRendererInfo_INITIALIZE
  mrb_define_method(mrb, SDLRendererInfo_class, "initialize", mrb_SDL_SDLRendererInfo_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, SDLRendererInfo_class, "disown", mrb_SDL_SDLRendererInfo_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, SDLRendererInfo_class, "belongs_to_ruby?", mrb_SDL_SDLRendererInfo_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_SDLRendererInfo_name_FIELD_READER
  mrb_define_method(mrb, SDLRendererInfo_class, "name", mrb_SDL_SDLRendererInfo_get_name, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLRendererInfo_name_FIELD_WRITER
  mrb_define_method(mrb, SDLRendererInfo_class, "name=", mrb_SDL_SDLRendererInfo_set_name, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLRendererInfo_flags_FIELD_READER
  mrb_define_method(mrb, SDLRendererInfo_class, "flags", mrb_SDL_SDLRendererInfo_get_flags, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLRendererInfo_flags_FIELD_WRITER
  mrb_define_method(mrb, SDLRendererInfo_class, "flags=", mrb_SDL_SDLRendererInfo_set_flags, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLRendererInfo_num_texture_formats_FIELD_READER
  mrb_define_method(mrb, SDLRendererInfo_class, "num_texture_formats", mrb_SDL_SDLRendererInfo_get_num_texture_formats, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLRendererInfo_num_texture_formats_FIELD_WRITER
  mrb_define_method(mrb, SDLRendererInfo_class, "num_texture_formats=", mrb_SDL_SDLRendererInfo_set_num_texture_formats, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLRendererInfo_texture_formats_FIELD_READER
  mrb_define_method(mrb, SDLRendererInfo_class, "texture_formats", mrb_SDL_SDLRendererInfo_get_texture_formats, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLRendererInfo_texture_formats_FIELD_WRITER
  mrb_define_method(mrb, SDLRendererInfo_class, "texture_formats=", mrb_SDL_SDLRendererInfo_set_texture_formats, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLRendererInfo_max_texture_width_FIELD_READER
  mrb_define_method(mrb, SDLRendererInfo_class, "max_texture_width", mrb_SDL_SDLRendererInfo_get_max_texture_width, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLRendererInfo_max_texture_width_FIELD_WRITER
  mrb_define_method(mrb, SDLRendererInfo_class, "max_texture_width=", mrb_SDL_SDLRendererInfo_set_max_texture_width, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLRendererInfo_max_texture_height_FIELD_READER
  mrb_define_method(mrb, SDLRendererInfo_class, "max_texture_height", mrb_SDL_SDLRendererInfo_get_max_texture_height, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLRendererInfo_max_texture_height_FIELD_WRITER
  mrb_define_method(mrb, SDLRendererInfo_class, "max_texture_height=", mrb_SDL_SDLRendererInfo_set_max_texture_height, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
