/*
 * SDL_MessageBoxButtonData
 * Defined in file SDL_messagebox.h @ line 56
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_SDL.h"

#if BIND_SDLMessageBoxButtonData_TYPE

/*
 * Class Methods
 */

#if BIND_SDLMessageBoxButtonData_INITIALIZE
mrb_value
mrb_SDL_SDLMessageBoxButtonData_initialize(mrb_state* mrb, mrb_value self) {
  SDL_MessageBoxButtonData* native_object = (SDL_MessageBoxButtonData*)malloc(sizeof(SDL_MessageBoxButtonData));
  mruby_gift_SDL_MessageBoxButtonData_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_SDL_SDLMessageBoxButtonData_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLMessageBoxButtonData.disown only accepts objects of type SDL::SDLMessageBoxButtonData");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_SDL_SDLMessageBoxButtonData_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLMessageBoxButtonData.belongs_to_ruby only accepts objects of type SDL::SDLMessageBoxButtonData");
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

#if BIND_SDLMessageBoxButtonData_flags_FIELD
/* get_flags
 *
 * Return Type: Uint32
 */
mrb_value
mrb_SDL_SDLMessageBoxButtonData_get_flags(mrb_state* mrb, mrb_value self) {
  SDL_MessageBoxButtonData * native_self = mruby_unbox_SDL_MessageBoxButtonData(self);

  Uint32 native_field = native_self->flags;

  mrb_value ruby_field = TODO_mruby_box_Uint32(mrb, native_field);

  return ruby_field;
}

/* set_flags
 *
 * Parameters:
 * - value: Uint32
 */
mrb_value
mrb_SDL_SDLMessageBoxButtonData_set_flags(mrb_state* mrb, mrb_value self) {
  SDL_MessageBoxButtonData * native_self = mruby_unbox_SDL_MessageBoxButtonData(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Uint32(ruby_field);

  Uint32 native_field = TODO_mruby_unbox_Uint32(ruby_field);

  native_self->flags = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLMessageBoxButtonData_buttonid_FIELD
/* get_buttonid
 *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDLMessageBoxButtonData_get_buttonid(mrb_state* mrb, mrb_value self) {
  SDL_MessageBoxButtonData * native_self = mruby_unbox_SDL_MessageBoxButtonData(self);

  int native_field = native_self->buttonid;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}

/* set_buttonid
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SDL_SDLMessageBoxButtonData_set_buttonid(mrb_state* mrb, mrb_value self) {
  SDL_MessageBoxButtonData * native_self = mruby_unbox_SDL_MessageBoxButtonData(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->buttonid = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLMessageBoxButtonData_text_FIELD
/* get_text
 *
 * Return Type: const char *
 */
mrb_value
mrb_SDL_SDLMessageBoxButtonData_get_text(mrb_state* mrb, mrb_value self) {
  SDL_MessageBoxButtonData * native_self = mruby_unbox_SDL_MessageBoxButtonData(self);

  const char * native_field = native_self->text;

  mrb_value ruby_field = mrb_str_new_cstr(mrb, native_field);

  return ruby_field;
}

/* set_text
 *
 * Parameters:
 * - value: const char *
 */
mrb_value
mrb_SDL_SDLMessageBoxButtonData_set_text(mrb_state* mrb, mrb_value self) {
  SDL_MessageBoxButtonData * native_self = mruby_unbox_SDL_MessageBoxButtonData(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }

  const char * native_field = mrb_string_value_cstr(mrb, &ruby_field);

  native_self->text = native_field;

  return ruby_field;
}
#endif


void mrb_SDL_SDLMessageBoxButtonData_init(mrb_state* mrb) {
  RClass* SDLMessageBoxButtonData_class = mrb_define_class_under(mrb, SDL_module(mrb), "SDLMessageBoxButtonData", mrb->object_class);
  MRB_SET_INSTANCE_TT(SDLMessageBoxButtonData_class, MRB_TT_DATA);

#if BIND_SDLMessageBoxButtonData_INITIALIZE
  mrb_define_method(mrb, SDLMessageBoxButtonData_class, "initialize", mrb_SDL_SDLMessageBoxButtonData_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, SDLMessageBoxButtonData_class, "disown", mrb_SDL_SDLMessageBoxButtonData_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, SDLMessageBoxButtonData_class, "belongs_to_ruby?", mrb_SDL_SDLMessageBoxButtonData_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_SDLMessageBoxButtonData_flags_FIELD
  mrb_define_method(mrb, SDLMessageBoxButtonData_class, "flags", mrb_SDL_SDLMessageBoxButtonData_get_flags, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, SDLMessageBoxButtonData_class, "flags=", mrb_SDL_SDLMessageBoxButtonData_set_flags, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLMessageBoxButtonData_buttonid_FIELD
  mrb_define_method(mrb, SDLMessageBoxButtonData_class, "buttonid", mrb_SDL_SDLMessageBoxButtonData_get_buttonid, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, SDLMessageBoxButtonData_class, "buttonid=", mrb_SDL_SDLMessageBoxButtonData_set_buttonid, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLMessageBoxButtonData_text_FIELD
  mrb_define_method(mrb, SDLMessageBoxButtonData_class, "text", mrb_SDL_SDLMessageBoxButtonData_get_text, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, SDLMessageBoxButtonData_class, "text=", mrb_SDL_SDLMessageBoxButtonData_set_text, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
