/*
 * SDLTest_CommonState
 * Defined in file SDL_test_common.h @ line 51
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_SDL.h"

#if BIND_SDLTestCommonState_TYPE

/*
 * Class Methods
 */

#if BIND_SDLTestCommonState_INITIALIZE
mrb_value
mrb_SDL_SDLTestCommonState_initialize(mrb_state* mrb, mrb_value self) {
  SDLTest_CommonState* native_object = (SDLTest_CommonState*)malloc(sizeof(SDLTest_CommonState));
  mruby_gift_SDLTest_CommonState_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_SDL_SDLTestCommonState_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLTestCommonState.disown only accepts objects of type SDL::SDLTestCommonState");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_SDL_SDLTestCommonState_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLTestCommonState.belongs_to_ruby only accepts objects of type SDL::SDLTestCommonState");
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

#if BIND_SDLTestCommonState_argv_FIELD_READER
/* get_argv
 *
 * Return Type: char **
 */
mrb_value
mrb_SDL_SDLTestCommonState_get_argv(mrb_state* mrb, mrb_value self) {
  SDLTest_CommonState * native_self = mruby_unbox_SDLTest_CommonState(self);

  char ** native_field = native_self->argv;

  mrb_value ruby_field = TODO_mruby_box_char_PTR_PTR(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLTestCommonState_argv_FIELD_WRITER
/* set_argv
 *
 * Parameters:
 * - value: char **
 */
mrb_value
mrb_SDL_SDLTestCommonState_set_argv(mrb_state* mrb, mrb_value self) {
  SDLTest_CommonState * native_self = mruby_unbox_SDLTest_CommonState(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_char_PTR_PTR(ruby_field);

  char ** native_field = TODO_mruby_unbox_char_PTR_PTR(ruby_field);

  native_self->argv = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLTestCommonState_flags_FIELD_READER
/* get_flags
 *
 * Return Type: Uint32
 */
mrb_value
mrb_SDL_SDLTestCommonState_get_flags(mrb_state* mrb, mrb_value self) {
  SDLTest_CommonState * native_self = mruby_unbox_SDLTest_CommonState(self);

  Uint32 native_field = native_self->flags;

  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLTestCommonState_flags_FIELD_WRITER
/* set_flags
 *
 * Parameters:
 * - value: Uint32
 */
mrb_value
mrb_SDL_SDLTestCommonState_set_flags(mrb_state* mrb, mrb_value self) {
  SDLTest_CommonState * native_self = mruby_unbox_SDLTest_CommonState(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) { mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected"); return mrb_nil_value(); }

  Uint32 native_field = mrb_fixnum(ruby_field);

  native_self->flags = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLTestCommonState_verbose_FIELD_READER
/* get_verbose
 *
 * Return Type: Uint32
 */
mrb_value
mrb_SDL_SDLTestCommonState_get_verbose(mrb_state* mrb, mrb_value self) {
  SDLTest_CommonState * native_self = mruby_unbox_SDLTest_CommonState(self);

  Uint32 native_field = native_self->verbose;

  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLTestCommonState_verbose_FIELD_WRITER
/* set_verbose
 *
 * Parameters:
 * - value: Uint32
 */
mrb_value
mrb_SDL_SDLTestCommonState_set_verbose(mrb_state* mrb, mrb_value self) {
  SDLTest_CommonState * native_self = mruby_unbox_SDLTest_CommonState(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) { mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected"); return mrb_nil_value(); }

  Uint32 native_field = mrb_fixnum(ruby_field);

  native_self->verbose = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLTestCommonState_videodriver_FIELD_READER
/* get_videodriver
 *
 * Return Type: const char *
 */
mrb_value
mrb_SDL_SDLTestCommonState_get_videodriver(mrb_state* mrb, mrb_value self) {
  SDLTest_CommonState * native_self = mruby_unbox_SDLTest_CommonState(self);

  const char * native_field = native_self->videodriver;

  mrb_value ruby_field = mrb_str_new_cstr(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLTestCommonState_videodriver_FIELD_WRITER
/* set_videodriver
 *
 * Parameters:
 * - value: const char *
 */
mrb_value
mrb_SDL_SDLTestCommonState_set_videodriver(mrb_state* mrb, mrb_value self) {
  SDLTest_CommonState * native_self = mruby_unbox_SDLTest_CommonState(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }

  const char * native_field = mrb_string_value_cstr(mrb, &ruby_field);

  native_self->videodriver = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLTestCommonState_display_FIELD_READER
/* get_display
 *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDLTestCommonState_get_display(mrb_state* mrb, mrb_value self) {
  SDLTest_CommonState * native_self = mruby_unbox_SDLTest_CommonState(self);

  int native_field = native_self->display;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLTestCommonState_display_FIELD_WRITER
/* set_display
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SDL_SDLTestCommonState_set_display(mrb_state* mrb, mrb_value self) {
  SDLTest_CommonState * native_self = mruby_unbox_SDLTest_CommonState(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->display = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLTestCommonState_window_title_FIELD_READER
/* get_window_title
 *
 * Return Type: const char *
 */
mrb_value
mrb_SDL_SDLTestCommonState_get_window_title(mrb_state* mrb, mrb_value self) {
  SDLTest_CommonState * native_self = mruby_unbox_SDLTest_CommonState(self);

  const char * native_field = native_self->window_title;

  mrb_value ruby_field = mrb_str_new_cstr(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLTestCommonState_window_title_FIELD_WRITER
/* set_window_title
 *
 * Parameters:
 * - value: const char *
 */
mrb_value
mrb_SDL_SDLTestCommonState_set_window_title(mrb_state* mrb, mrb_value self) {
  SDLTest_CommonState * native_self = mruby_unbox_SDLTest_CommonState(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }

  const char * native_field = mrb_string_value_cstr(mrb, &ruby_field);

  native_self->window_title = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLTestCommonState_window_icon_FIELD_READER
/* get_window_icon
 *
 * Return Type: const char *
 */
mrb_value
mrb_SDL_SDLTestCommonState_get_window_icon(mrb_state* mrb, mrb_value self) {
  SDLTest_CommonState * native_self = mruby_unbox_SDLTest_CommonState(self);

  const char * native_field = native_self->window_icon;

  mrb_value ruby_field = mrb_str_new_cstr(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLTestCommonState_window_icon_FIELD_WRITER
/* set_window_icon
 *
 * Parameters:
 * - value: const char *
 */
mrb_value
mrb_SDL_SDLTestCommonState_set_window_icon(mrb_state* mrb, mrb_value self) {
  SDLTest_CommonState * native_self = mruby_unbox_SDLTest_CommonState(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }

  const char * native_field = mrb_string_value_cstr(mrb, &ruby_field);

  native_self->window_icon = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLTestCommonState_window_flags_FIELD_READER
/* get_window_flags
 *
 * Return Type: Uint32
 */
mrb_value
mrb_SDL_SDLTestCommonState_get_window_flags(mrb_state* mrb, mrb_value self) {
  SDLTest_CommonState * native_self = mruby_unbox_SDLTest_CommonState(self);

  Uint32 native_field = native_self->window_flags;

  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLTestCommonState_window_flags_FIELD_WRITER
/* set_window_flags
 *
 * Parameters:
 * - value: Uint32
 */
mrb_value
mrb_SDL_SDLTestCommonState_set_window_flags(mrb_state* mrb, mrb_value self) {
  SDLTest_CommonState * native_self = mruby_unbox_SDLTest_CommonState(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) { mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected"); return mrb_nil_value(); }

  Uint32 native_field = mrb_fixnum(ruby_field);

  native_self->window_flags = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLTestCommonState_window_x_FIELD_READER
/* get_window_x
 *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDLTestCommonState_get_window_x(mrb_state* mrb, mrb_value self) {
  SDLTest_CommonState * native_self = mruby_unbox_SDLTest_CommonState(self);

  int native_field = native_self->window_x;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLTestCommonState_window_x_FIELD_WRITER
/* set_window_x
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SDL_SDLTestCommonState_set_window_x(mrb_state* mrb, mrb_value self) {
  SDLTest_CommonState * native_self = mruby_unbox_SDLTest_CommonState(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->window_x = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLTestCommonState_window_y_FIELD_READER
/* get_window_y
 *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDLTestCommonState_get_window_y(mrb_state* mrb, mrb_value self) {
  SDLTest_CommonState * native_self = mruby_unbox_SDLTest_CommonState(self);

  int native_field = native_self->window_y;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLTestCommonState_window_y_FIELD_WRITER
/* set_window_y
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SDL_SDLTestCommonState_set_window_y(mrb_state* mrb, mrb_value self) {
  SDLTest_CommonState * native_self = mruby_unbox_SDLTest_CommonState(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->window_y = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLTestCommonState_window_w_FIELD_READER
/* get_window_w
 *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDLTestCommonState_get_window_w(mrb_state* mrb, mrb_value self) {
  SDLTest_CommonState * native_self = mruby_unbox_SDLTest_CommonState(self);

  int native_field = native_self->window_w;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLTestCommonState_window_w_FIELD_WRITER
/* set_window_w
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SDL_SDLTestCommonState_set_window_w(mrb_state* mrb, mrb_value self) {
  SDLTest_CommonState * native_self = mruby_unbox_SDLTest_CommonState(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->window_w = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLTestCommonState_window_h_FIELD_READER
/* get_window_h
 *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDLTestCommonState_get_window_h(mrb_state* mrb, mrb_value self) {
  SDLTest_CommonState * native_self = mruby_unbox_SDLTest_CommonState(self);

  int native_field = native_self->window_h;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLTestCommonState_window_h_FIELD_WRITER
/* set_window_h
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SDL_SDLTestCommonState_set_window_h(mrb_state* mrb, mrb_value self) {
  SDLTest_CommonState * native_self = mruby_unbox_SDLTest_CommonState(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->window_h = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLTestCommonState_window_minW_FIELD_READER
/* get_window_minW
 *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDLTestCommonState_get_window_minW(mrb_state* mrb, mrb_value self) {
  SDLTest_CommonState * native_self = mruby_unbox_SDLTest_CommonState(self);

  int native_field = native_self->window_minW;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLTestCommonState_window_minW_FIELD_WRITER
/* set_window_minW
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SDL_SDLTestCommonState_set_window_minW(mrb_state* mrb, mrb_value self) {
  SDLTest_CommonState * native_self = mruby_unbox_SDLTest_CommonState(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->window_minW = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLTestCommonState_window_minH_FIELD_READER
/* get_window_minH
 *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDLTestCommonState_get_window_minH(mrb_state* mrb, mrb_value self) {
  SDLTest_CommonState * native_self = mruby_unbox_SDLTest_CommonState(self);

  int native_field = native_self->window_minH;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLTestCommonState_window_minH_FIELD_WRITER
/* set_window_minH
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SDL_SDLTestCommonState_set_window_minH(mrb_state* mrb, mrb_value self) {
  SDLTest_CommonState * native_self = mruby_unbox_SDLTest_CommonState(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->window_minH = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLTestCommonState_window_maxW_FIELD_READER
/* get_window_maxW
 *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDLTestCommonState_get_window_maxW(mrb_state* mrb, mrb_value self) {
  SDLTest_CommonState * native_self = mruby_unbox_SDLTest_CommonState(self);

  int native_field = native_self->window_maxW;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLTestCommonState_window_maxW_FIELD_WRITER
/* set_window_maxW
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SDL_SDLTestCommonState_set_window_maxW(mrb_state* mrb, mrb_value self) {
  SDLTest_CommonState * native_self = mruby_unbox_SDLTest_CommonState(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->window_maxW = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLTestCommonState_window_maxH_FIELD_READER
/* get_window_maxH
 *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDLTestCommonState_get_window_maxH(mrb_state* mrb, mrb_value self) {
  SDLTest_CommonState * native_self = mruby_unbox_SDLTest_CommonState(self);

  int native_field = native_self->window_maxH;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLTestCommonState_window_maxH_FIELD_WRITER
/* set_window_maxH
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SDL_SDLTestCommonState_set_window_maxH(mrb_state* mrb, mrb_value self) {
  SDLTest_CommonState * native_self = mruby_unbox_SDLTest_CommonState(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->window_maxH = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLTestCommonState_logical_w_FIELD_READER
/* get_logical_w
 *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDLTestCommonState_get_logical_w(mrb_state* mrb, mrb_value self) {
  SDLTest_CommonState * native_self = mruby_unbox_SDLTest_CommonState(self);

  int native_field = native_self->logical_w;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLTestCommonState_logical_w_FIELD_WRITER
/* set_logical_w
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SDL_SDLTestCommonState_set_logical_w(mrb_state* mrb, mrb_value self) {
  SDLTest_CommonState * native_self = mruby_unbox_SDLTest_CommonState(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->logical_w = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLTestCommonState_logical_h_FIELD_READER
/* get_logical_h
 *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDLTestCommonState_get_logical_h(mrb_state* mrb, mrb_value self) {
  SDLTest_CommonState * native_self = mruby_unbox_SDLTest_CommonState(self);

  int native_field = native_self->logical_h;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLTestCommonState_logical_h_FIELD_WRITER
/* set_logical_h
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SDL_SDLTestCommonState_set_logical_h(mrb_state* mrb, mrb_value self) {
  SDLTest_CommonState * native_self = mruby_unbox_SDLTest_CommonState(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->logical_h = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLTestCommonState_scale_FIELD_READER
/* get_scale
 *
 * Return Type: float
 */
mrb_value
mrb_SDL_SDLTestCommonState_get_scale(mrb_state* mrb, mrb_value self) {
  SDLTest_CommonState * native_self = mruby_unbox_SDLTest_CommonState(self);

  float native_field = native_self->scale;

  mrb_value ruby_field = mrb_float_value(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLTestCommonState_scale_FIELD_WRITER
/* set_scale
 *
 * Parameters:
 * - value: float
 */
mrb_value
mrb_SDL_SDLTestCommonState_set_scale(mrb_state* mrb, mrb_value self) {
  SDLTest_CommonState * native_self = mruby_unbox_SDLTest_CommonState(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->float_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Float expected");
    return mrb_nil_value();
  }

  float native_field = mrb_float(ruby_field);

  native_self->scale = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLTestCommonState_depth_FIELD_READER
/* get_depth
 *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDLTestCommonState_get_depth(mrb_state* mrb, mrb_value self) {
  SDLTest_CommonState * native_self = mruby_unbox_SDLTest_CommonState(self);

  int native_field = native_self->depth;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLTestCommonState_depth_FIELD_WRITER
/* set_depth
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SDL_SDLTestCommonState_set_depth(mrb_state* mrb, mrb_value self) {
  SDLTest_CommonState * native_self = mruby_unbox_SDLTest_CommonState(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->depth = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLTestCommonState_refresh_rate_FIELD_READER
/* get_refresh_rate
 *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDLTestCommonState_get_refresh_rate(mrb_state* mrb, mrb_value self) {
  SDLTest_CommonState * native_self = mruby_unbox_SDLTest_CommonState(self);

  int native_field = native_self->refresh_rate;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLTestCommonState_refresh_rate_FIELD_WRITER
/* set_refresh_rate
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SDL_SDLTestCommonState_set_refresh_rate(mrb_state* mrb, mrb_value self) {
  SDLTest_CommonState * native_self = mruby_unbox_SDLTest_CommonState(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->refresh_rate = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLTestCommonState_num_windows_FIELD_READER
/* get_num_windows
 *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDLTestCommonState_get_num_windows(mrb_state* mrb, mrb_value self) {
  SDLTest_CommonState * native_self = mruby_unbox_SDLTest_CommonState(self);

  int native_field = native_self->num_windows;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLTestCommonState_num_windows_FIELD_WRITER
/* set_num_windows
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SDL_SDLTestCommonState_set_num_windows(mrb_state* mrb, mrb_value self) {
  SDLTest_CommonState * native_self = mruby_unbox_SDLTest_CommonState(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->num_windows = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLTestCommonState_windows_FIELD_READER
/* get_windows
 *
 * Return Type: SDL_Window **
 */
mrb_value
mrb_SDL_SDLTestCommonState_get_windows(mrb_state* mrb, mrb_value self) {
  SDLTest_CommonState * native_self = mruby_unbox_SDLTest_CommonState(self);

  SDL_Window ** native_field = native_self->windows;

  mrb_value ruby_field = TODO_mruby_box_SDL_Window_PTR_PTR(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLTestCommonState_windows_FIELD_WRITER
/* set_windows
 *
 * Parameters:
 * - value: SDL_Window **
 */
mrb_value
mrb_SDL_SDLTestCommonState_set_windows(mrb_state* mrb, mrb_value self) {
  SDLTest_CommonState * native_self = mruby_unbox_SDLTest_CommonState(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_SDL_Window_PTR_PTR(ruby_field);

  SDL_Window ** native_field = TODO_mruby_unbox_SDL_Window_PTR_PTR(ruby_field);

  native_self->windows = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLTestCommonState_renderdriver_FIELD_READER
/* get_renderdriver
 *
 * Return Type: const char *
 */
mrb_value
mrb_SDL_SDLTestCommonState_get_renderdriver(mrb_state* mrb, mrb_value self) {
  SDLTest_CommonState * native_self = mruby_unbox_SDLTest_CommonState(self);

  const char * native_field = native_self->renderdriver;

  mrb_value ruby_field = mrb_str_new_cstr(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLTestCommonState_renderdriver_FIELD_WRITER
/* set_renderdriver
 *
 * Parameters:
 * - value: const char *
 */
mrb_value
mrb_SDL_SDLTestCommonState_set_renderdriver(mrb_state* mrb, mrb_value self) {
  SDLTest_CommonState * native_self = mruby_unbox_SDLTest_CommonState(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }

  const char * native_field = mrb_string_value_cstr(mrb, &ruby_field);

  native_self->renderdriver = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLTestCommonState_render_flags_FIELD_READER
/* get_render_flags
 *
 * Return Type: Uint32
 */
mrb_value
mrb_SDL_SDLTestCommonState_get_render_flags(mrb_state* mrb, mrb_value self) {
  SDLTest_CommonState * native_self = mruby_unbox_SDLTest_CommonState(self);

  Uint32 native_field = native_self->render_flags;

  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLTestCommonState_render_flags_FIELD_WRITER
/* set_render_flags
 *
 * Parameters:
 * - value: Uint32
 */
mrb_value
mrb_SDL_SDLTestCommonState_set_render_flags(mrb_state* mrb, mrb_value self) {
  SDLTest_CommonState * native_self = mruby_unbox_SDLTest_CommonState(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) { mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected"); return mrb_nil_value(); }

  Uint32 native_field = mrb_fixnum(ruby_field);

  native_self->render_flags = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLTestCommonState_skip_renderer_FIELD_READER
/* get_skip_renderer
 *
 * Return Type: SDL_bool
 */
mrb_value
mrb_SDL_SDLTestCommonState_get_skip_renderer(mrb_state* mrb, mrb_value self) {
  SDLTest_CommonState * native_self = mruby_unbox_SDLTest_CommonState(self);

  SDL_bool native_field = native_self->skip_renderer;

  mrb_value ruby_field = TODO_mruby_box_SDL_bool(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLTestCommonState_skip_renderer_FIELD_WRITER
/* set_skip_renderer
 *
 * Parameters:
 * - value: SDL_bool
 */
mrb_value
mrb_SDL_SDLTestCommonState_set_skip_renderer(mrb_state* mrb, mrb_value self) {
  SDLTest_CommonState * native_self = mruby_unbox_SDLTest_CommonState(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_SDL_bool(ruby_field);

  SDL_bool native_field = TODO_mruby_unbox_SDL_bool(ruby_field);

  native_self->skip_renderer = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLTestCommonState_renderers_FIELD_READER
/* get_renderers
 *
 * Return Type: SDL_Renderer **
 */
mrb_value
mrb_SDL_SDLTestCommonState_get_renderers(mrb_state* mrb, mrb_value self) {
  SDLTest_CommonState * native_self = mruby_unbox_SDLTest_CommonState(self);

  SDL_Renderer ** native_field = native_self->renderers;

  mrb_value ruby_field = TODO_mruby_box_SDL_Renderer_PTR_PTR(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLTestCommonState_renderers_FIELD_WRITER
/* set_renderers
 *
 * Parameters:
 * - value: SDL_Renderer **
 */
mrb_value
mrb_SDL_SDLTestCommonState_set_renderers(mrb_state* mrb, mrb_value self) {
  SDLTest_CommonState * native_self = mruby_unbox_SDLTest_CommonState(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_SDL_Renderer_PTR_PTR(ruby_field);

  SDL_Renderer ** native_field = TODO_mruby_unbox_SDL_Renderer_PTR_PTR(ruby_field);

  native_self->renderers = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLTestCommonState_targets_FIELD_READER
/* get_targets
 *
 * Return Type: SDL_Texture **
 */
mrb_value
mrb_SDL_SDLTestCommonState_get_targets(mrb_state* mrb, mrb_value self) {
  SDLTest_CommonState * native_self = mruby_unbox_SDLTest_CommonState(self);

  SDL_Texture ** native_field = native_self->targets;

  mrb_value ruby_field = TODO_mruby_box_SDL_Texture_PTR_PTR(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLTestCommonState_targets_FIELD_WRITER
/* set_targets
 *
 * Parameters:
 * - value: SDL_Texture **
 */
mrb_value
mrb_SDL_SDLTestCommonState_set_targets(mrb_state* mrb, mrb_value self) {
  SDLTest_CommonState * native_self = mruby_unbox_SDLTest_CommonState(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_SDL_Texture_PTR_PTR(ruby_field);

  SDL_Texture ** native_field = TODO_mruby_unbox_SDL_Texture_PTR_PTR(ruby_field);

  native_self->targets = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLTestCommonState_audiodriver_FIELD_READER
/* get_audiodriver
 *
 * Return Type: const char *
 */
mrb_value
mrb_SDL_SDLTestCommonState_get_audiodriver(mrb_state* mrb, mrb_value self) {
  SDLTest_CommonState * native_self = mruby_unbox_SDLTest_CommonState(self);

  const char * native_field = native_self->audiodriver;

  mrb_value ruby_field = mrb_str_new_cstr(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLTestCommonState_audiodriver_FIELD_WRITER
/* set_audiodriver
 *
 * Parameters:
 * - value: const char *
 */
mrb_value
mrb_SDL_SDLTestCommonState_set_audiodriver(mrb_state* mrb, mrb_value self) {
  SDLTest_CommonState * native_self = mruby_unbox_SDLTest_CommonState(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }

  const char * native_field = mrb_string_value_cstr(mrb, &ruby_field);

  native_self->audiodriver = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLTestCommonState_audiospec_FIELD_READER
/* get_audiospec
 *
 * Return Type: SDL_AudioSpec
 */
mrb_value
mrb_SDL_SDLTestCommonState_get_audiospec(mrb_state* mrb, mrb_value self) {
  SDLTest_CommonState * native_self = mruby_unbox_SDLTest_CommonState(self);

  SDL_AudioSpec native_field = native_self->audiospec;

  mrb_value ruby_field = TODO_mruby_box_SDL_AudioSpec(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLTestCommonState_audiospec_FIELD_WRITER
/* set_audiospec
 *
 * Parameters:
 * - value: SDL_AudioSpec
 */
mrb_value
mrb_SDL_SDLTestCommonState_set_audiospec(mrb_state* mrb, mrb_value self) {
  SDLTest_CommonState * native_self = mruby_unbox_SDLTest_CommonState(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_SDL_AudioSpec(ruby_field);

  SDL_AudioSpec native_field = TODO_mruby_unbox_SDL_AudioSpec(ruby_field);

  native_self->audiospec = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLTestCommonState_gl_red_size_FIELD_READER
/* get_gl_red_size
 *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDLTestCommonState_get_gl_red_size(mrb_state* mrb, mrb_value self) {
  SDLTest_CommonState * native_self = mruby_unbox_SDLTest_CommonState(self);

  int native_field = native_self->gl_red_size;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLTestCommonState_gl_red_size_FIELD_WRITER
/* set_gl_red_size
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SDL_SDLTestCommonState_set_gl_red_size(mrb_state* mrb, mrb_value self) {
  SDLTest_CommonState * native_self = mruby_unbox_SDLTest_CommonState(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->gl_red_size = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLTestCommonState_gl_green_size_FIELD_READER
/* get_gl_green_size
 *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDLTestCommonState_get_gl_green_size(mrb_state* mrb, mrb_value self) {
  SDLTest_CommonState * native_self = mruby_unbox_SDLTest_CommonState(self);

  int native_field = native_self->gl_green_size;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLTestCommonState_gl_green_size_FIELD_WRITER
/* set_gl_green_size
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SDL_SDLTestCommonState_set_gl_green_size(mrb_state* mrb, mrb_value self) {
  SDLTest_CommonState * native_self = mruby_unbox_SDLTest_CommonState(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->gl_green_size = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLTestCommonState_gl_blue_size_FIELD_READER
/* get_gl_blue_size
 *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDLTestCommonState_get_gl_blue_size(mrb_state* mrb, mrb_value self) {
  SDLTest_CommonState * native_self = mruby_unbox_SDLTest_CommonState(self);

  int native_field = native_self->gl_blue_size;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLTestCommonState_gl_blue_size_FIELD_WRITER
/* set_gl_blue_size
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SDL_SDLTestCommonState_set_gl_blue_size(mrb_state* mrb, mrb_value self) {
  SDLTest_CommonState * native_self = mruby_unbox_SDLTest_CommonState(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->gl_blue_size = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLTestCommonState_gl_alpha_size_FIELD_READER
/* get_gl_alpha_size
 *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDLTestCommonState_get_gl_alpha_size(mrb_state* mrb, mrb_value self) {
  SDLTest_CommonState * native_self = mruby_unbox_SDLTest_CommonState(self);

  int native_field = native_self->gl_alpha_size;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLTestCommonState_gl_alpha_size_FIELD_WRITER
/* set_gl_alpha_size
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SDL_SDLTestCommonState_set_gl_alpha_size(mrb_state* mrb, mrb_value self) {
  SDLTest_CommonState * native_self = mruby_unbox_SDLTest_CommonState(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->gl_alpha_size = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLTestCommonState_gl_buffer_size_FIELD_READER
/* get_gl_buffer_size
 *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDLTestCommonState_get_gl_buffer_size(mrb_state* mrb, mrb_value self) {
  SDLTest_CommonState * native_self = mruby_unbox_SDLTest_CommonState(self);

  int native_field = native_self->gl_buffer_size;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLTestCommonState_gl_buffer_size_FIELD_WRITER
/* set_gl_buffer_size
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SDL_SDLTestCommonState_set_gl_buffer_size(mrb_state* mrb, mrb_value self) {
  SDLTest_CommonState * native_self = mruby_unbox_SDLTest_CommonState(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->gl_buffer_size = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLTestCommonState_gl_depth_size_FIELD_READER
/* get_gl_depth_size
 *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDLTestCommonState_get_gl_depth_size(mrb_state* mrb, mrb_value self) {
  SDLTest_CommonState * native_self = mruby_unbox_SDLTest_CommonState(self);

  int native_field = native_self->gl_depth_size;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLTestCommonState_gl_depth_size_FIELD_WRITER
/* set_gl_depth_size
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SDL_SDLTestCommonState_set_gl_depth_size(mrb_state* mrb, mrb_value self) {
  SDLTest_CommonState * native_self = mruby_unbox_SDLTest_CommonState(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->gl_depth_size = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLTestCommonState_gl_stencil_size_FIELD_READER
/* get_gl_stencil_size
 *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDLTestCommonState_get_gl_stencil_size(mrb_state* mrb, mrb_value self) {
  SDLTest_CommonState * native_self = mruby_unbox_SDLTest_CommonState(self);

  int native_field = native_self->gl_stencil_size;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLTestCommonState_gl_stencil_size_FIELD_WRITER
/* set_gl_stencil_size
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SDL_SDLTestCommonState_set_gl_stencil_size(mrb_state* mrb, mrb_value self) {
  SDLTest_CommonState * native_self = mruby_unbox_SDLTest_CommonState(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->gl_stencil_size = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLTestCommonState_gl_double_buffer_FIELD_READER
/* get_gl_double_buffer
 *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDLTestCommonState_get_gl_double_buffer(mrb_state* mrb, mrb_value self) {
  SDLTest_CommonState * native_self = mruby_unbox_SDLTest_CommonState(self);

  int native_field = native_self->gl_double_buffer;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLTestCommonState_gl_double_buffer_FIELD_WRITER
/* set_gl_double_buffer
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SDL_SDLTestCommonState_set_gl_double_buffer(mrb_state* mrb, mrb_value self) {
  SDLTest_CommonState * native_self = mruby_unbox_SDLTest_CommonState(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->gl_double_buffer = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLTestCommonState_gl_accum_red_size_FIELD_READER
/* get_gl_accum_red_size
 *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDLTestCommonState_get_gl_accum_red_size(mrb_state* mrb, mrb_value self) {
  SDLTest_CommonState * native_self = mruby_unbox_SDLTest_CommonState(self);

  int native_field = native_self->gl_accum_red_size;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLTestCommonState_gl_accum_red_size_FIELD_WRITER
/* set_gl_accum_red_size
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SDL_SDLTestCommonState_set_gl_accum_red_size(mrb_state* mrb, mrb_value self) {
  SDLTest_CommonState * native_self = mruby_unbox_SDLTest_CommonState(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->gl_accum_red_size = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLTestCommonState_gl_accum_green_size_FIELD_READER
/* get_gl_accum_green_size
 *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDLTestCommonState_get_gl_accum_green_size(mrb_state* mrb, mrb_value self) {
  SDLTest_CommonState * native_self = mruby_unbox_SDLTest_CommonState(self);

  int native_field = native_self->gl_accum_green_size;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLTestCommonState_gl_accum_green_size_FIELD_WRITER
/* set_gl_accum_green_size
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SDL_SDLTestCommonState_set_gl_accum_green_size(mrb_state* mrb, mrb_value self) {
  SDLTest_CommonState * native_self = mruby_unbox_SDLTest_CommonState(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->gl_accum_green_size = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLTestCommonState_gl_accum_blue_size_FIELD_READER
/* get_gl_accum_blue_size
 *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDLTestCommonState_get_gl_accum_blue_size(mrb_state* mrb, mrb_value self) {
  SDLTest_CommonState * native_self = mruby_unbox_SDLTest_CommonState(self);

  int native_field = native_self->gl_accum_blue_size;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLTestCommonState_gl_accum_blue_size_FIELD_WRITER
/* set_gl_accum_blue_size
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SDL_SDLTestCommonState_set_gl_accum_blue_size(mrb_state* mrb, mrb_value self) {
  SDLTest_CommonState * native_self = mruby_unbox_SDLTest_CommonState(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->gl_accum_blue_size = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLTestCommonState_gl_accum_alpha_size_FIELD_READER
/* get_gl_accum_alpha_size
 *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDLTestCommonState_get_gl_accum_alpha_size(mrb_state* mrb, mrb_value self) {
  SDLTest_CommonState * native_self = mruby_unbox_SDLTest_CommonState(self);

  int native_field = native_self->gl_accum_alpha_size;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLTestCommonState_gl_accum_alpha_size_FIELD_WRITER
/* set_gl_accum_alpha_size
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SDL_SDLTestCommonState_set_gl_accum_alpha_size(mrb_state* mrb, mrb_value self) {
  SDLTest_CommonState * native_self = mruby_unbox_SDLTest_CommonState(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->gl_accum_alpha_size = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLTestCommonState_gl_stereo_FIELD_READER
/* get_gl_stereo
 *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDLTestCommonState_get_gl_stereo(mrb_state* mrb, mrb_value self) {
  SDLTest_CommonState * native_self = mruby_unbox_SDLTest_CommonState(self);

  int native_field = native_self->gl_stereo;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLTestCommonState_gl_stereo_FIELD_WRITER
/* set_gl_stereo
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SDL_SDLTestCommonState_set_gl_stereo(mrb_state* mrb, mrb_value self) {
  SDLTest_CommonState * native_self = mruby_unbox_SDLTest_CommonState(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->gl_stereo = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLTestCommonState_gl_multisamplebuffers_FIELD_READER
/* get_gl_multisamplebuffers
 *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDLTestCommonState_get_gl_multisamplebuffers(mrb_state* mrb, mrb_value self) {
  SDLTest_CommonState * native_self = mruby_unbox_SDLTest_CommonState(self);

  int native_field = native_self->gl_multisamplebuffers;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLTestCommonState_gl_multisamplebuffers_FIELD_WRITER
/* set_gl_multisamplebuffers
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SDL_SDLTestCommonState_set_gl_multisamplebuffers(mrb_state* mrb, mrb_value self) {
  SDLTest_CommonState * native_self = mruby_unbox_SDLTest_CommonState(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->gl_multisamplebuffers = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLTestCommonState_gl_multisamplesamples_FIELD_READER
/* get_gl_multisamplesamples
 *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDLTestCommonState_get_gl_multisamplesamples(mrb_state* mrb, mrb_value self) {
  SDLTest_CommonState * native_self = mruby_unbox_SDLTest_CommonState(self);

  int native_field = native_self->gl_multisamplesamples;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLTestCommonState_gl_multisamplesamples_FIELD_WRITER
/* set_gl_multisamplesamples
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SDL_SDLTestCommonState_set_gl_multisamplesamples(mrb_state* mrb, mrb_value self) {
  SDLTest_CommonState * native_self = mruby_unbox_SDLTest_CommonState(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->gl_multisamplesamples = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLTestCommonState_gl_retained_backing_FIELD_READER
/* get_gl_retained_backing
 *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDLTestCommonState_get_gl_retained_backing(mrb_state* mrb, mrb_value self) {
  SDLTest_CommonState * native_self = mruby_unbox_SDLTest_CommonState(self);

  int native_field = native_self->gl_retained_backing;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLTestCommonState_gl_retained_backing_FIELD_WRITER
/* set_gl_retained_backing
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SDL_SDLTestCommonState_set_gl_retained_backing(mrb_state* mrb, mrb_value self) {
  SDLTest_CommonState * native_self = mruby_unbox_SDLTest_CommonState(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->gl_retained_backing = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLTestCommonState_gl_accelerated_FIELD_READER
/* get_gl_accelerated
 *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDLTestCommonState_get_gl_accelerated(mrb_state* mrb, mrb_value self) {
  SDLTest_CommonState * native_self = mruby_unbox_SDLTest_CommonState(self);

  int native_field = native_self->gl_accelerated;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLTestCommonState_gl_accelerated_FIELD_WRITER
/* set_gl_accelerated
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SDL_SDLTestCommonState_set_gl_accelerated(mrb_state* mrb, mrb_value self) {
  SDLTest_CommonState * native_self = mruby_unbox_SDLTest_CommonState(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->gl_accelerated = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLTestCommonState_gl_major_version_FIELD_READER
/* get_gl_major_version
 *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDLTestCommonState_get_gl_major_version(mrb_state* mrb, mrb_value self) {
  SDLTest_CommonState * native_self = mruby_unbox_SDLTest_CommonState(self);

  int native_field = native_self->gl_major_version;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLTestCommonState_gl_major_version_FIELD_WRITER
/* set_gl_major_version
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SDL_SDLTestCommonState_set_gl_major_version(mrb_state* mrb, mrb_value self) {
  SDLTest_CommonState * native_self = mruby_unbox_SDLTest_CommonState(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->gl_major_version = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLTestCommonState_gl_minor_version_FIELD_READER
/* get_gl_minor_version
 *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDLTestCommonState_get_gl_minor_version(mrb_state* mrb, mrb_value self) {
  SDLTest_CommonState * native_self = mruby_unbox_SDLTest_CommonState(self);

  int native_field = native_self->gl_minor_version;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLTestCommonState_gl_minor_version_FIELD_WRITER
/* set_gl_minor_version
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SDL_SDLTestCommonState_set_gl_minor_version(mrb_state* mrb, mrb_value self) {
  SDLTest_CommonState * native_self = mruby_unbox_SDLTest_CommonState(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->gl_minor_version = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLTestCommonState_gl_debug_FIELD_READER
/* get_gl_debug
 *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDLTestCommonState_get_gl_debug(mrb_state* mrb, mrb_value self) {
  SDLTest_CommonState * native_self = mruby_unbox_SDLTest_CommonState(self);

  int native_field = native_self->gl_debug;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLTestCommonState_gl_debug_FIELD_WRITER
/* set_gl_debug
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SDL_SDLTestCommonState_set_gl_debug(mrb_state* mrb, mrb_value self) {
  SDLTest_CommonState * native_self = mruby_unbox_SDLTest_CommonState(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->gl_debug = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLTestCommonState_gl_profile_mask_FIELD_READER
/* get_gl_profile_mask
 *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDLTestCommonState_get_gl_profile_mask(mrb_state* mrb, mrb_value self) {
  SDLTest_CommonState * native_self = mruby_unbox_SDLTest_CommonState(self);

  int native_field = native_self->gl_profile_mask;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLTestCommonState_gl_profile_mask_FIELD_WRITER
/* set_gl_profile_mask
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SDL_SDLTestCommonState_set_gl_profile_mask(mrb_state* mrb, mrb_value self) {
  SDLTest_CommonState * native_self = mruby_unbox_SDLTest_CommonState(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->gl_profile_mask = native_field;

  return ruby_field;
}
#endif


void mrb_SDL_SDLTestCommonState_init(mrb_state* mrb) {
  RClass* SDLTestCommonState_class = mrb_define_class_under(mrb, SDL_module(mrb), "TestCommonState", mrb->object_class);
  MRB_SET_INSTANCE_TT(SDLTestCommonState_class, MRB_TT_DATA);

#if BIND_SDLTestCommonState_INITIALIZE
  mrb_define_method(mrb, SDLTestCommonState_class, "initialize", mrb_SDL_SDLTestCommonState_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, SDLTestCommonState_class, "disown", mrb_SDL_SDLTestCommonState_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, SDLTestCommonState_class, "belongs_to_ruby?", mrb_SDL_SDLTestCommonState_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_SDLTestCommonState_argv_FIELD_READER
  mrb_define_method(mrb, SDLTestCommonState_class, "argv", mrb_SDL_SDLTestCommonState_get_argv, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLTestCommonState_argv_FIELD_WRITER
  mrb_define_method(mrb, SDLTestCommonState_class, "argv=", mrb_SDL_SDLTestCommonState_set_argv, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLTestCommonState_flags_FIELD_READER
  mrb_define_method(mrb, SDLTestCommonState_class, "flags", mrb_SDL_SDLTestCommonState_get_flags, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLTestCommonState_flags_FIELD_WRITER
  mrb_define_method(mrb, SDLTestCommonState_class, "flags=", mrb_SDL_SDLTestCommonState_set_flags, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLTestCommonState_verbose_FIELD_READER
  mrb_define_method(mrb, SDLTestCommonState_class, "verbose", mrb_SDL_SDLTestCommonState_get_verbose, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLTestCommonState_verbose_FIELD_WRITER
  mrb_define_method(mrb, SDLTestCommonState_class, "verbose=", mrb_SDL_SDLTestCommonState_set_verbose, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLTestCommonState_videodriver_FIELD_READER
  mrb_define_method(mrb, SDLTestCommonState_class, "videodriver", mrb_SDL_SDLTestCommonState_get_videodriver, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLTestCommonState_videodriver_FIELD_WRITER
  mrb_define_method(mrb, SDLTestCommonState_class, "videodriver=", mrb_SDL_SDLTestCommonState_set_videodriver, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLTestCommonState_display_FIELD_READER
  mrb_define_method(mrb, SDLTestCommonState_class, "display", mrb_SDL_SDLTestCommonState_get_display, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLTestCommonState_display_FIELD_WRITER
  mrb_define_method(mrb, SDLTestCommonState_class, "display=", mrb_SDL_SDLTestCommonState_set_display, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLTestCommonState_window_title_FIELD_READER
  mrb_define_method(mrb, SDLTestCommonState_class, "window_title", mrb_SDL_SDLTestCommonState_get_window_title, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLTestCommonState_window_title_FIELD_WRITER
  mrb_define_method(mrb, SDLTestCommonState_class, "window_title=", mrb_SDL_SDLTestCommonState_set_window_title, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLTestCommonState_window_icon_FIELD_READER
  mrb_define_method(mrb, SDLTestCommonState_class, "window_icon", mrb_SDL_SDLTestCommonState_get_window_icon, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLTestCommonState_window_icon_FIELD_WRITER
  mrb_define_method(mrb, SDLTestCommonState_class, "window_icon=", mrb_SDL_SDLTestCommonState_set_window_icon, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLTestCommonState_window_flags_FIELD_READER
  mrb_define_method(mrb, SDLTestCommonState_class, "window_flags", mrb_SDL_SDLTestCommonState_get_window_flags, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLTestCommonState_window_flags_FIELD_WRITER
  mrb_define_method(mrb, SDLTestCommonState_class, "window_flags=", mrb_SDL_SDLTestCommonState_set_window_flags, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLTestCommonState_window_x_FIELD_READER
  mrb_define_method(mrb, SDLTestCommonState_class, "window_x", mrb_SDL_SDLTestCommonState_get_window_x, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLTestCommonState_window_x_FIELD_WRITER
  mrb_define_method(mrb, SDLTestCommonState_class, "window_x=", mrb_SDL_SDLTestCommonState_set_window_x, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLTestCommonState_window_y_FIELD_READER
  mrb_define_method(mrb, SDLTestCommonState_class, "window_y", mrb_SDL_SDLTestCommonState_get_window_y, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLTestCommonState_window_y_FIELD_WRITER
  mrb_define_method(mrb, SDLTestCommonState_class, "window_y=", mrb_SDL_SDLTestCommonState_set_window_y, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLTestCommonState_window_w_FIELD_READER
  mrb_define_method(mrb, SDLTestCommonState_class, "window_w", mrb_SDL_SDLTestCommonState_get_window_w, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLTestCommonState_window_w_FIELD_WRITER
  mrb_define_method(mrb, SDLTestCommonState_class, "window_w=", mrb_SDL_SDLTestCommonState_set_window_w, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLTestCommonState_window_h_FIELD_READER
  mrb_define_method(mrb, SDLTestCommonState_class, "window_h", mrb_SDL_SDLTestCommonState_get_window_h, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLTestCommonState_window_h_FIELD_WRITER
  mrb_define_method(mrb, SDLTestCommonState_class, "window_h=", mrb_SDL_SDLTestCommonState_set_window_h, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLTestCommonState_window_minW_FIELD_READER
  mrb_define_method(mrb, SDLTestCommonState_class, "window_minW", mrb_SDL_SDLTestCommonState_get_window_minW, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLTestCommonState_window_minW_FIELD_WRITER
  mrb_define_method(mrb, SDLTestCommonState_class, "window_minW=", mrb_SDL_SDLTestCommonState_set_window_minW, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLTestCommonState_window_minH_FIELD_READER
  mrb_define_method(mrb, SDLTestCommonState_class, "window_minH", mrb_SDL_SDLTestCommonState_get_window_minH, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLTestCommonState_window_minH_FIELD_WRITER
  mrb_define_method(mrb, SDLTestCommonState_class, "window_minH=", mrb_SDL_SDLTestCommonState_set_window_minH, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLTestCommonState_window_maxW_FIELD_READER
  mrb_define_method(mrb, SDLTestCommonState_class, "window_maxW", mrb_SDL_SDLTestCommonState_get_window_maxW, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLTestCommonState_window_maxW_FIELD_WRITER
  mrb_define_method(mrb, SDLTestCommonState_class, "window_maxW=", mrb_SDL_SDLTestCommonState_set_window_maxW, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLTestCommonState_window_maxH_FIELD_READER
  mrb_define_method(mrb, SDLTestCommonState_class, "window_maxH", mrb_SDL_SDLTestCommonState_get_window_maxH, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLTestCommonState_window_maxH_FIELD_WRITER
  mrb_define_method(mrb, SDLTestCommonState_class, "window_maxH=", mrb_SDL_SDLTestCommonState_set_window_maxH, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLTestCommonState_logical_w_FIELD_READER
  mrb_define_method(mrb, SDLTestCommonState_class, "logical_w", mrb_SDL_SDLTestCommonState_get_logical_w, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLTestCommonState_logical_w_FIELD_WRITER
  mrb_define_method(mrb, SDLTestCommonState_class, "logical_w=", mrb_SDL_SDLTestCommonState_set_logical_w, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLTestCommonState_logical_h_FIELD_READER
  mrb_define_method(mrb, SDLTestCommonState_class, "logical_h", mrb_SDL_SDLTestCommonState_get_logical_h, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLTestCommonState_logical_h_FIELD_WRITER
  mrb_define_method(mrb, SDLTestCommonState_class, "logical_h=", mrb_SDL_SDLTestCommonState_set_logical_h, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLTestCommonState_scale_FIELD_READER
  mrb_define_method(mrb, SDLTestCommonState_class, "scale", mrb_SDL_SDLTestCommonState_get_scale, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLTestCommonState_scale_FIELD_WRITER
  mrb_define_method(mrb, SDLTestCommonState_class, "scale=", mrb_SDL_SDLTestCommonState_set_scale, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLTestCommonState_depth_FIELD_READER
  mrb_define_method(mrb, SDLTestCommonState_class, "depth", mrb_SDL_SDLTestCommonState_get_depth, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLTestCommonState_depth_FIELD_WRITER
  mrb_define_method(mrb, SDLTestCommonState_class, "depth=", mrb_SDL_SDLTestCommonState_set_depth, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLTestCommonState_refresh_rate_FIELD_READER
  mrb_define_method(mrb, SDLTestCommonState_class, "refresh_rate", mrb_SDL_SDLTestCommonState_get_refresh_rate, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLTestCommonState_refresh_rate_FIELD_WRITER
  mrb_define_method(mrb, SDLTestCommonState_class, "refresh_rate=", mrb_SDL_SDLTestCommonState_set_refresh_rate, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLTestCommonState_num_windows_FIELD_READER
  mrb_define_method(mrb, SDLTestCommonState_class, "num_windows", mrb_SDL_SDLTestCommonState_get_num_windows, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLTestCommonState_num_windows_FIELD_WRITER
  mrb_define_method(mrb, SDLTestCommonState_class, "num_windows=", mrb_SDL_SDLTestCommonState_set_num_windows, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLTestCommonState_windows_FIELD_READER
  mrb_define_method(mrb, SDLTestCommonState_class, "windows", mrb_SDL_SDLTestCommonState_get_windows, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLTestCommonState_windows_FIELD_WRITER
  mrb_define_method(mrb, SDLTestCommonState_class, "windows=", mrb_SDL_SDLTestCommonState_set_windows, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLTestCommonState_renderdriver_FIELD_READER
  mrb_define_method(mrb, SDLTestCommonState_class, "renderdriver", mrb_SDL_SDLTestCommonState_get_renderdriver, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLTestCommonState_renderdriver_FIELD_WRITER
  mrb_define_method(mrb, SDLTestCommonState_class, "renderdriver=", mrb_SDL_SDLTestCommonState_set_renderdriver, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLTestCommonState_render_flags_FIELD_READER
  mrb_define_method(mrb, SDLTestCommonState_class, "render_flags", mrb_SDL_SDLTestCommonState_get_render_flags, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLTestCommonState_render_flags_FIELD_WRITER
  mrb_define_method(mrb, SDLTestCommonState_class, "render_flags=", mrb_SDL_SDLTestCommonState_set_render_flags, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLTestCommonState_skip_renderer_FIELD_READER
  mrb_define_method(mrb, SDLTestCommonState_class, "skip_renderer", mrb_SDL_SDLTestCommonState_get_skip_renderer, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLTestCommonState_skip_renderer_FIELD_WRITER
  mrb_define_method(mrb, SDLTestCommonState_class, "skip_renderer=", mrb_SDL_SDLTestCommonState_set_skip_renderer, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLTestCommonState_renderers_FIELD_READER
  mrb_define_method(mrb, SDLTestCommonState_class, "renderers", mrb_SDL_SDLTestCommonState_get_renderers, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLTestCommonState_renderers_FIELD_WRITER
  mrb_define_method(mrb, SDLTestCommonState_class, "renderers=", mrb_SDL_SDLTestCommonState_set_renderers, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLTestCommonState_targets_FIELD_READER
  mrb_define_method(mrb, SDLTestCommonState_class, "targets", mrb_SDL_SDLTestCommonState_get_targets, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLTestCommonState_targets_FIELD_WRITER
  mrb_define_method(mrb, SDLTestCommonState_class, "targets=", mrb_SDL_SDLTestCommonState_set_targets, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLTestCommonState_audiodriver_FIELD_READER
  mrb_define_method(mrb, SDLTestCommonState_class, "audiodriver", mrb_SDL_SDLTestCommonState_get_audiodriver, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLTestCommonState_audiodriver_FIELD_WRITER
  mrb_define_method(mrb, SDLTestCommonState_class, "audiodriver=", mrb_SDL_SDLTestCommonState_set_audiodriver, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLTestCommonState_audiospec_FIELD_READER
  mrb_define_method(mrb, SDLTestCommonState_class, "audiospec", mrb_SDL_SDLTestCommonState_get_audiospec, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLTestCommonState_audiospec_FIELD_WRITER
  mrb_define_method(mrb, SDLTestCommonState_class, "audiospec=", mrb_SDL_SDLTestCommonState_set_audiospec, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLTestCommonState_gl_red_size_FIELD_READER
  mrb_define_method(mrb, SDLTestCommonState_class, "gl_red_size", mrb_SDL_SDLTestCommonState_get_gl_red_size, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLTestCommonState_gl_red_size_FIELD_WRITER
  mrb_define_method(mrb, SDLTestCommonState_class, "gl_red_size=", mrb_SDL_SDLTestCommonState_set_gl_red_size, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLTestCommonState_gl_green_size_FIELD_READER
  mrb_define_method(mrb, SDLTestCommonState_class, "gl_green_size", mrb_SDL_SDLTestCommonState_get_gl_green_size, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLTestCommonState_gl_green_size_FIELD_WRITER
  mrb_define_method(mrb, SDLTestCommonState_class, "gl_green_size=", mrb_SDL_SDLTestCommonState_set_gl_green_size, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLTestCommonState_gl_blue_size_FIELD_READER
  mrb_define_method(mrb, SDLTestCommonState_class, "gl_blue_size", mrb_SDL_SDLTestCommonState_get_gl_blue_size, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLTestCommonState_gl_blue_size_FIELD_WRITER
  mrb_define_method(mrb, SDLTestCommonState_class, "gl_blue_size=", mrb_SDL_SDLTestCommonState_set_gl_blue_size, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLTestCommonState_gl_alpha_size_FIELD_READER
  mrb_define_method(mrb, SDLTestCommonState_class, "gl_alpha_size", mrb_SDL_SDLTestCommonState_get_gl_alpha_size, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLTestCommonState_gl_alpha_size_FIELD_WRITER
  mrb_define_method(mrb, SDLTestCommonState_class, "gl_alpha_size=", mrb_SDL_SDLTestCommonState_set_gl_alpha_size, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLTestCommonState_gl_buffer_size_FIELD_READER
  mrb_define_method(mrb, SDLTestCommonState_class, "gl_buffer_size", mrb_SDL_SDLTestCommonState_get_gl_buffer_size, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLTestCommonState_gl_buffer_size_FIELD_WRITER
  mrb_define_method(mrb, SDLTestCommonState_class, "gl_buffer_size=", mrb_SDL_SDLTestCommonState_set_gl_buffer_size, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLTestCommonState_gl_depth_size_FIELD_READER
  mrb_define_method(mrb, SDLTestCommonState_class, "gl_depth_size", mrb_SDL_SDLTestCommonState_get_gl_depth_size, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLTestCommonState_gl_depth_size_FIELD_WRITER
  mrb_define_method(mrb, SDLTestCommonState_class, "gl_depth_size=", mrb_SDL_SDLTestCommonState_set_gl_depth_size, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLTestCommonState_gl_stencil_size_FIELD_READER
  mrb_define_method(mrb, SDLTestCommonState_class, "gl_stencil_size", mrb_SDL_SDLTestCommonState_get_gl_stencil_size, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLTestCommonState_gl_stencil_size_FIELD_WRITER
  mrb_define_method(mrb, SDLTestCommonState_class, "gl_stencil_size=", mrb_SDL_SDLTestCommonState_set_gl_stencil_size, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLTestCommonState_gl_double_buffer_FIELD_READER
  mrb_define_method(mrb, SDLTestCommonState_class, "gl_double_buffer", mrb_SDL_SDLTestCommonState_get_gl_double_buffer, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLTestCommonState_gl_double_buffer_FIELD_WRITER
  mrb_define_method(mrb, SDLTestCommonState_class, "gl_double_buffer=", mrb_SDL_SDLTestCommonState_set_gl_double_buffer, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLTestCommonState_gl_accum_red_size_FIELD_READER
  mrb_define_method(mrb, SDLTestCommonState_class, "gl_accum_red_size", mrb_SDL_SDLTestCommonState_get_gl_accum_red_size, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLTestCommonState_gl_accum_red_size_FIELD_WRITER
  mrb_define_method(mrb, SDLTestCommonState_class, "gl_accum_red_size=", mrb_SDL_SDLTestCommonState_set_gl_accum_red_size, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLTestCommonState_gl_accum_green_size_FIELD_READER
  mrb_define_method(mrb, SDLTestCommonState_class, "gl_accum_green_size", mrb_SDL_SDLTestCommonState_get_gl_accum_green_size, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLTestCommonState_gl_accum_green_size_FIELD_WRITER
  mrb_define_method(mrb, SDLTestCommonState_class, "gl_accum_green_size=", mrb_SDL_SDLTestCommonState_set_gl_accum_green_size, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLTestCommonState_gl_accum_blue_size_FIELD_READER
  mrb_define_method(mrb, SDLTestCommonState_class, "gl_accum_blue_size", mrb_SDL_SDLTestCommonState_get_gl_accum_blue_size, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLTestCommonState_gl_accum_blue_size_FIELD_WRITER
  mrb_define_method(mrb, SDLTestCommonState_class, "gl_accum_blue_size=", mrb_SDL_SDLTestCommonState_set_gl_accum_blue_size, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLTestCommonState_gl_accum_alpha_size_FIELD_READER
  mrb_define_method(mrb, SDLTestCommonState_class, "gl_accum_alpha_size", mrb_SDL_SDLTestCommonState_get_gl_accum_alpha_size, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLTestCommonState_gl_accum_alpha_size_FIELD_WRITER
  mrb_define_method(mrb, SDLTestCommonState_class, "gl_accum_alpha_size=", mrb_SDL_SDLTestCommonState_set_gl_accum_alpha_size, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLTestCommonState_gl_stereo_FIELD_READER
  mrb_define_method(mrb, SDLTestCommonState_class, "gl_stereo", mrb_SDL_SDLTestCommonState_get_gl_stereo, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLTestCommonState_gl_stereo_FIELD_WRITER
  mrb_define_method(mrb, SDLTestCommonState_class, "gl_stereo=", mrb_SDL_SDLTestCommonState_set_gl_stereo, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLTestCommonState_gl_multisamplebuffers_FIELD_READER
  mrb_define_method(mrb, SDLTestCommonState_class, "gl_multisamplebuffers", mrb_SDL_SDLTestCommonState_get_gl_multisamplebuffers, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLTestCommonState_gl_multisamplebuffers_FIELD_WRITER
  mrb_define_method(mrb, SDLTestCommonState_class, "gl_multisamplebuffers=", mrb_SDL_SDLTestCommonState_set_gl_multisamplebuffers, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLTestCommonState_gl_multisamplesamples_FIELD_READER
  mrb_define_method(mrb, SDLTestCommonState_class, "gl_multisamplesamples", mrb_SDL_SDLTestCommonState_get_gl_multisamplesamples, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLTestCommonState_gl_multisamplesamples_FIELD_WRITER
  mrb_define_method(mrb, SDLTestCommonState_class, "gl_multisamplesamples=", mrb_SDL_SDLTestCommonState_set_gl_multisamplesamples, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLTestCommonState_gl_retained_backing_FIELD_READER
  mrb_define_method(mrb, SDLTestCommonState_class, "gl_retained_backing", mrb_SDL_SDLTestCommonState_get_gl_retained_backing, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLTestCommonState_gl_retained_backing_FIELD_WRITER
  mrb_define_method(mrb, SDLTestCommonState_class, "gl_retained_backing=", mrb_SDL_SDLTestCommonState_set_gl_retained_backing, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLTestCommonState_gl_accelerated_FIELD_READER
  mrb_define_method(mrb, SDLTestCommonState_class, "gl_accelerated", mrb_SDL_SDLTestCommonState_get_gl_accelerated, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLTestCommonState_gl_accelerated_FIELD_WRITER
  mrb_define_method(mrb, SDLTestCommonState_class, "gl_accelerated=", mrb_SDL_SDLTestCommonState_set_gl_accelerated, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLTestCommonState_gl_major_version_FIELD_READER
  mrb_define_method(mrb, SDLTestCommonState_class, "gl_major_version", mrb_SDL_SDLTestCommonState_get_gl_major_version, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLTestCommonState_gl_major_version_FIELD_WRITER
  mrb_define_method(mrb, SDLTestCommonState_class, "gl_major_version=", mrb_SDL_SDLTestCommonState_set_gl_major_version, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLTestCommonState_gl_minor_version_FIELD_READER
  mrb_define_method(mrb, SDLTestCommonState_class, "gl_minor_version", mrb_SDL_SDLTestCommonState_get_gl_minor_version, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLTestCommonState_gl_minor_version_FIELD_WRITER
  mrb_define_method(mrb, SDLTestCommonState_class, "gl_minor_version=", mrb_SDL_SDLTestCommonState_set_gl_minor_version, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLTestCommonState_gl_debug_FIELD_READER
  mrb_define_method(mrb, SDLTestCommonState_class, "gl_debug", mrb_SDL_SDLTestCommonState_get_gl_debug, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLTestCommonState_gl_debug_FIELD_WRITER
  mrb_define_method(mrb, SDLTestCommonState_class, "gl_debug=", mrb_SDL_SDLTestCommonState_set_gl_debug, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLTestCommonState_gl_profile_mask_FIELD_READER
  mrb_define_method(mrb, SDLTestCommonState_class, "gl_profile_mask", mrb_SDL_SDLTestCommonState_get_gl_profile_mask, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLTestCommonState_gl_profile_mask_FIELD_WRITER
  mrb_define_method(mrb, SDLTestCommonState_class, "gl_profile_mask=", mrb_SDL_SDLTestCommonState_set_gl_profile_mask, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
