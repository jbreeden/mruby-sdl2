/*
 * SDL_MessageBoxData
 * Defined in file SDL_messagebox.h @ line 92
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_SDL.h"

#if BIND_SDLMessageBoxData_TYPE

/*
 * Class Methods
 */

#if BIND_SDLMessageBoxData_INITIALIZE
mrb_value
mrb_SDL_SDLMessageBoxData_initialize(mrb_state* mrb, mrb_value self) {
  SDL_MessageBoxData* native_object = (SDL_MessageBoxData*)malloc(sizeof(SDL_MessageBoxData));
  mruby_gift_SDL_MessageBoxData_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_SDL_SDLMessageBoxData_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLMessageBoxData.disown only accepts objects of type SDL::SDLMessageBoxData");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_SDL_SDLMessageBoxData_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLMessageBoxData.belongs_to_ruby only accepts objects of type SDL::SDLMessageBoxData");
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

#if BIND_SDLMessageBoxData_flags_FIELD_READER
/* get_flags
 *
 * Return Type: Uint32
 */
mrb_value
mrb_SDL_SDLMessageBoxData_get_flags(mrb_state* mrb, mrb_value self) {
  SDL_MessageBoxData * native_self = mruby_unbox_SDL_MessageBoxData(self);

  Uint32 native_field = native_self->flags;

  mrb_value ruby_field = TODO_mruby_box_Uint32(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLMessageBoxData_flags_FIELD_WRITER
/* set_flags
 *
 * Parameters:
 * - value: Uint32
 */
mrb_value
mrb_SDL_SDLMessageBoxData_set_flags(mrb_state* mrb, mrb_value self) {
  SDL_MessageBoxData * native_self = mruby_unbox_SDL_MessageBoxData(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Uint32(ruby_field);

  Uint32 native_field = TODO_mruby_unbox_Uint32(ruby_field);

  native_self->flags = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLMessageBoxData_window_FIELD_READER
/* get_window
 *
 * Return Type: SDL_Window *
 */
mrb_value
mrb_SDL_SDLMessageBoxData_get_window(mrb_state* mrb, mrb_value self) {
  SDL_MessageBoxData * native_self = mruby_unbox_SDL_MessageBoxData(self);

  SDL_Window * native_field = native_self->window;

  mrb_value ruby_field = (native_field == NULL ? mrb_nil_value() : mruby_box_SDL_Window(mrb, native_field));

  return ruby_field;
}
#endif

#if BIND_SDLMessageBoxData_window_FIELD_WRITER
/* set_window
 *
 * Parameters:
 * - value: SDL_Window *
 */
mrb_value
mrb_SDL_SDLMessageBoxData_set_window(mrb_state* mrb, mrb_value self) {
  SDL_MessageBoxData * native_self = mruby_unbox_SDL_MessageBoxData(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, SDLWindow_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLWindow expected");
    return mrb_nil_value();
  }

  SDL_Window * native_field = (mrb_nil_p(ruby_field) ? NULL : mruby_unbox_SDL_Window(ruby_field));

  native_self->window = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLMessageBoxData_title_FIELD_READER
/* get_title
 *
 * Return Type: const char *
 */
mrb_value
mrb_SDL_SDLMessageBoxData_get_title(mrb_state* mrb, mrb_value self) {
  SDL_MessageBoxData * native_self = mruby_unbox_SDL_MessageBoxData(self);

  const char * native_field = native_self->title;

  mrb_value ruby_field = mrb_str_new_cstr(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLMessageBoxData_title_FIELD_WRITER
/* set_title
 *
 * Parameters:
 * - value: const char *
 */
mrb_value
mrb_SDL_SDLMessageBoxData_set_title(mrb_state* mrb, mrb_value self) {
  SDL_MessageBoxData * native_self = mruby_unbox_SDL_MessageBoxData(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }

  const char * native_field = mrb_string_value_cstr(mrb, &ruby_field);

  native_self->title = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLMessageBoxData_message_FIELD_READER
/* get_message
 *
 * Return Type: const char *
 */
mrb_value
mrb_SDL_SDLMessageBoxData_get_message(mrb_state* mrb, mrb_value self) {
  SDL_MessageBoxData * native_self = mruby_unbox_SDL_MessageBoxData(self);

  const char * native_field = native_self->message;

  mrb_value ruby_field = mrb_str_new_cstr(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLMessageBoxData_message_FIELD_WRITER
/* set_message
 *
 * Parameters:
 * - value: const char *
 */
mrb_value
mrb_SDL_SDLMessageBoxData_set_message(mrb_state* mrb, mrb_value self) {
  SDL_MessageBoxData * native_self = mruby_unbox_SDL_MessageBoxData(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }

  const char * native_field = mrb_string_value_cstr(mrb, &ruby_field);

  native_self->message = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLMessageBoxData_numbuttons_FIELD_READER
/* get_numbuttons
 *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDLMessageBoxData_get_numbuttons(mrb_state* mrb, mrb_value self) {
  SDL_MessageBoxData * native_self = mruby_unbox_SDL_MessageBoxData(self);

  int native_field = native_self->numbuttons;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLMessageBoxData_numbuttons_FIELD_WRITER
/* set_numbuttons
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SDL_SDLMessageBoxData_set_numbuttons(mrb_state* mrb, mrb_value self) {
  SDL_MessageBoxData * native_self = mruby_unbox_SDL_MessageBoxData(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->numbuttons = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLMessageBoxData_buttons_FIELD_READER
/* get_buttons
 *
 * Return Type: const SDL_MessageBoxButtonData *
 */
mrb_value
mrb_SDL_SDLMessageBoxData_get_buttons(mrb_state* mrb, mrb_value self) {
  SDL_MessageBoxData * native_self = mruby_unbox_SDL_MessageBoxData(self);

  const SDL_MessageBoxButtonData * native_field = native_self->buttons;

  mrb_value ruby_field = (native_field == NULL ? mrb_nil_value() : mruby_box_SDL_MessageBoxButtonData(mrb, native_field));

  return ruby_field;
}
#endif

#if BIND_SDLMessageBoxData_buttons_FIELD_WRITER
/* set_buttons
 *
 * Parameters:
 * - value: const SDL_MessageBoxButtonData *
 */
mrb_value
mrb_SDL_SDLMessageBoxData_set_buttons(mrb_state* mrb, mrb_value self) {
  SDL_MessageBoxData * native_self = mruby_unbox_SDL_MessageBoxData(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, SDLMessageBoxButtonData_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLMessageBoxButtonData expected");
    return mrb_nil_value();
  }

  const SDL_MessageBoxButtonData * native_field = (mrb_nil_p(ruby_field) ? NULL : mruby_unbox_SDL_MessageBoxButtonData(ruby_field));

  native_self->buttons = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLMessageBoxData_colorScheme_FIELD_READER
/* get_colorScheme
 *
 * Return Type: const SDL_MessageBoxColorScheme *
 */
mrb_value
mrb_SDL_SDLMessageBoxData_get_colorScheme(mrb_state* mrb, mrb_value self) {
  SDL_MessageBoxData * native_self = mruby_unbox_SDL_MessageBoxData(self);

  const SDL_MessageBoxColorScheme * native_field = native_self->colorScheme;

  mrb_value ruby_field = (native_field == NULL ? mrb_nil_value() : mruby_box_SDL_MessageBoxColorScheme(mrb, native_field));

  return ruby_field;
}
#endif

#if BIND_SDLMessageBoxData_colorScheme_FIELD_WRITER
/* set_colorScheme
 *
 * Parameters:
 * - value: const SDL_MessageBoxColorScheme *
 */
mrb_value
mrb_SDL_SDLMessageBoxData_set_colorScheme(mrb_state* mrb, mrb_value self) {
  SDL_MessageBoxData * native_self = mruby_unbox_SDL_MessageBoxData(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, SDLMessageBoxColorScheme_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLMessageBoxColorScheme expected");
    return mrb_nil_value();
  }

  const SDL_MessageBoxColorScheme * native_field = (mrb_nil_p(ruby_field) ? NULL : mruby_unbox_SDL_MessageBoxColorScheme(ruby_field));

  native_self->colorScheme = native_field;

  return ruby_field;
}
#endif


void mrb_SDL_SDLMessageBoxData_init(mrb_state* mrb) {
  RClass* SDLMessageBoxData_class = mrb_define_class_under(mrb, SDL_module(mrb), "SDLMessageBoxData", mrb->object_class);
  MRB_SET_INSTANCE_TT(SDLMessageBoxData_class, MRB_TT_DATA);

#if BIND_SDLMessageBoxData_INITIALIZE
  mrb_define_method(mrb, SDLMessageBoxData_class, "initialize", mrb_SDL_SDLMessageBoxData_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, SDLMessageBoxData_class, "disown", mrb_SDL_SDLMessageBoxData_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, SDLMessageBoxData_class, "belongs_to_ruby?", mrb_SDL_SDLMessageBoxData_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_SDLMessageBoxData_flags_FIELD_READER
  mrb_define_method(mrb, SDLMessageBoxData_class, "flags", mrb_SDL_SDLMessageBoxData_get_flags, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLMessageBoxData_flags_FIELD_WRITER
  mrb_define_method(mrb, SDLMessageBoxData_class, "flags=", mrb_SDL_SDLMessageBoxData_set_flags, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLMessageBoxData_window_FIELD_READER
  mrb_define_method(mrb, SDLMessageBoxData_class, "window", mrb_SDL_SDLMessageBoxData_get_window, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLMessageBoxData_window_FIELD_WRITER
  mrb_define_method(mrb, SDLMessageBoxData_class, "window=", mrb_SDL_SDLMessageBoxData_set_window, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLMessageBoxData_title_FIELD_READER
  mrb_define_method(mrb, SDLMessageBoxData_class, "title", mrb_SDL_SDLMessageBoxData_get_title, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLMessageBoxData_title_FIELD_WRITER
  mrb_define_method(mrb, SDLMessageBoxData_class, "title=", mrb_SDL_SDLMessageBoxData_set_title, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLMessageBoxData_message_FIELD_READER
  mrb_define_method(mrb, SDLMessageBoxData_class, "message", mrb_SDL_SDLMessageBoxData_get_message, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLMessageBoxData_message_FIELD_WRITER
  mrb_define_method(mrb, SDLMessageBoxData_class, "message=", mrb_SDL_SDLMessageBoxData_set_message, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLMessageBoxData_numbuttons_FIELD_READER
  mrb_define_method(mrb, SDLMessageBoxData_class, "numbuttons", mrb_SDL_SDLMessageBoxData_get_numbuttons, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLMessageBoxData_numbuttons_FIELD_WRITER
  mrb_define_method(mrb, SDLMessageBoxData_class, "numbuttons=", mrb_SDL_SDLMessageBoxData_set_numbuttons, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLMessageBoxData_buttons_FIELD_READER
  mrb_define_method(mrb, SDLMessageBoxData_class, "buttons", mrb_SDL_SDLMessageBoxData_get_buttons, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLMessageBoxData_buttons_FIELD_WRITER
  mrb_define_method(mrb, SDLMessageBoxData_class, "buttons=", mrb_SDL_SDLMessageBoxData_set_buttons, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLMessageBoxData_colorScheme_FIELD_READER
  mrb_define_method(mrb, SDLMessageBoxData_class, "colorScheme", mrb_SDL_SDLMessageBoxData_get_colorScheme, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLMessageBoxData_colorScheme_FIELD_WRITER
  mrb_define_method(mrb, SDLMessageBoxData_class, "colorScheme=", mrb_SDL_SDLMessageBoxData_set_colorScheme, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
