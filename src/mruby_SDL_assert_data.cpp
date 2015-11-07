/*
 * struct SDL_assert_data
 * Defined in file SDL_assert.h @ line 107
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_SDL.h"

#if BIND_SDLAssertData_TYPE

/*
 * Class Methods
 */

#if BIND_SDLAssertData_INITIALIZE
mrb_value
mrb_SDL_SDLAssertData_initialize(mrb_state* mrb, mrb_value self) {
  struct SDL_assert_data* native_object = (struct SDL_assert_data*)malloc(sizeof(struct SDL_assert_data));
  mruby_gift_struct SDL_assert_data_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_SDL_SDLAssertData_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLAssertData.disown only accepts objects of type SDL::SDLAssertData");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_SDL_SDLAssertData_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLAssertData.belongs_to_ruby only accepts objects of type SDL::SDLAssertData");
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

#if BIND_SDLAssertData_always_ignore_FIELD_READER
/* get_always_ignore
 *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDLAssertData_get_always_ignore(mrb_state* mrb, mrb_value self) {
  struct SDL_assert_data * native_self = mruby_unbox_struct SDL_assert_data(self);

  int native_field = native_self->always_ignore;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLAssertData_always_ignore_FIELD_WRITER
/* set_always_ignore
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SDL_SDLAssertData_set_always_ignore(mrb_state* mrb, mrb_value self) {
  struct SDL_assert_data * native_self = mruby_unbox_struct SDL_assert_data(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->always_ignore = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLAssertData_trigger_count_FIELD_READER
/* get_trigger_count
 *
 * Return Type: unsigned int
 */
mrb_value
mrb_SDL_SDLAssertData_get_trigger_count(mrb_state* mrb, mrb_value self) {
  struct SDL_assert_data * native_self = mruby_unbox_struct SDL_assert_data(self);

  unsigned int native_field = native_self->trigger_count;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLAssertData_trigger_count_FIELD_WRITER
/* set_trigger_count
 *
 * Parameters:
 * - value: unsigned int
 */
mrb_value
mrb_SDL_SDLAssertData_set_trigger_count(mrb_state* mrb, mrb_value self) {
  struct SDL_assert_data * native_self = mruby_unbox_struct SDL_assert_data(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  unsigned int native_field = mrb_fixnum(ruby_field);

  native_self->trigger_count = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLAssertData_condition_FIELD_READER
/* get_condition
 *
 * Return Type: const char *
 */
mrb_value
mrb_SDL_SDLAssertData_get_condition(mrb_state* mrb, mrb_value self) {
  struct SDL_assert_data * native_self = mruby_unbox_struct SDL_assert_data(self);

  const char * native_field = native_self->condition;

  mrb_value ruby_field = mrb_str_new_cstr(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLAssertData_condition_FIELD_WRITER
/* set_condition
 *
 * Parameters:
 * - value: const char *
 */
mrb_value
mrb_SDL_SDLAssertData_set_condition(mrb_state* mrb, mrb_value self) {
  struct SDL_assert_data * native_self = mruby_unbox_struct SDL_assert_data(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }

  const char * native_field = mrb_string_value_cstr(mrb, &ruby_field);

  native_self->condition = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLAssertData_filename_FIELD_READER
/* get_filename
 *
 * Return Type: const char *
 */
mrb_value
mrb_SDL_SDLAssertData_get_filename(mrb_state* mrb, mrb_value self) {
  struct SDL_assert_data * native_self = mruby_unbox_struct SDL_assert_data(self);

  const char * native_field = native_self->filename;

  mrb_value ruby_field = mrb_str_new_cstr(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLAssertData_filename_FIELD_WRITER
/* set_filename
 *
 * Parameters:
 * - value: const char *
 */
mrb_value
mrb_SDL_SDLAssertData_set_filename(mrb_state* mrb, mrb_value self) {
  struct SDL_assert_data * native_self = mruby_unbox_struct SDL_assert_data(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }

  const char * native_field = mrb_string_value_cstr(mrb, &ruby_field);

  native_self->filename = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLAssertData_linenum_FIELD_READER
/* get_linenum
 *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDLAssertData_get_linenum(mrb_state* mrb, mrb_value self) {
  struct SDL_assert_data * native_self = mruby_unbox_struct SDL_assert_data(self);

  int native_field = native_self->linenum;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLAssertData_linenum_FIELD_WRITER
/* set_linenum
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SDL_SDLAssertData_set_linenum(mrb_state* mrb, mrb_value self) {
  struct SDL_assert_data * native_self = mruby_unbox_struct SDL_assert_data(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->linenum = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLAssertData_function_FIELD_READER
/* get_function
 *
 * Return Type: const char *
 */
mrb_value
mrb_SDL_SDLAssertData_get_function(mrb_state* mrb, mrb_value self) {
  struct SDL_assert_data * native_self = mruby_unbox_struct SDL_assert_data(self);

  const char * native_field = native_self->function;

  mrb_value ruby_field = mrb_str_new_cstr(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLAssertData_function_FIELD_WRITER
/* set_function
 *
 * Parameters:
 * - value: const char *
 */
mrb_value
mrb_SDL_SDLAssertData_set_function(mrb_state* mrb, mrb_value self) {
  struct SDL_assert_data * native_self = mruby_unbox_struct SDL_assert_data(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }

  const char * native_field = mrb_string_value_cstr(mrb, &ruby_field);

  native_self->function = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLAssertData_next_FIELD_READER
/* get_next
 *
 * Return Type: const struct SDL_assert_data *
 */
mrb_value
mrb_SDL_SDLAssertData_get_next(mrb_state* mrb, mrb_value self) {
  struct SDL_assert_data * native_self = mruby_unbox_struct SDL_assert_data(self);

  const struct SDL_assert_data * native_field = native_self->next;

  mrb_value ruby_field = (native_field == NULL ? mrb_nil_value() : mruby_box_SDL_assert_data(mrb, native_field));

  return ruby_field;
}
#endif

#if BIND_SDLAssertData_next_FIELD_WRITER
/* set_next
 *
 * Parameters:
 * - value: const struct SDL_assert_data *
 */
mrb_value
mrb_SDL_SDLAssertData_set_next(mrb_state* mrb, mrb_value self) {
  struct SDL_assert_data * native_self = mruby_unbox_struct SDL_assert_data(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, SDLAssertData_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLAssertData expected");
    return mrb_nil_value();
  }

  const struct SDL_assert_data * native_field = (mrb_nil_p(ruby_field) ? NULL : mruby_unbox_SDL_assert_data(ruby_field));

  native_self->next = native_field;

  return ruby_field;
}
#endif


void mrb_SDL_SDLAssertData_init(mrb_state* mrb) {
  RClass* SDLAssertData_class = mrb_define_class_under(mrb, SDL_module(mrb), "AssertData", mrb->object_class);
  MRB_SET_INSTANCE_TT(SDLAssertData_class, MRB_TT_DATA);

#if BIND_SDLAssertData_INITIALIZE
  mrb_define_method(mrb, SDLAssertData_class, "initialize", mrb_SDL_SDLAssertData_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, SDLAssertData_class, "disown", mrb_SDL_SDLAssertData_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, SDLAssertData_class, "belongs_to_ruby?", mrb_SDL_SDLAssertData_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_SDLAssertData_always_ignore_FIELD_READER
  mrb_define_method(mrb, SDLAssertData_class, "always_ignore", mrb_SDL_SDLAssertData_get_always_ignore, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLAssertData_always_ignore_FIELD_WRITER
  mrb_define_method(mrb, SDLAssertData_class, "always_ignore=", mrb_SDL_SDLAssertData_set_always_ignore, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLAssertData_trigger_count_FIELD_READER
  mrb_define_method(mrb, SDLAssertData_class, "trigger_count", mrb_SDL_SDLAssertData_get_trigger_count, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLAssertData_trigger_count_FIELD_WRITER
  mrb_define_method(mrb, SDLAssertData_class, "trigger_count=", mrb_SDL_SDLAssertData_set_trigger_count, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLAssertData_condition_FIELD_READER
  mrb_define_method(mrb, SDLAssertData_class, "condition", mrb_SDL_SDLAssertData_get_condition, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLAssertData_condition_FIELD_WRITER
  mrb_define_method(mrb, SDLAssertData_class, "condition=", mrb_SDL_SDLAssertData_set_condition, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLAssertData_filename_FIELD_READER
  mrb_define_method(mrb, SDLAssertData_class, "filename", mrb_SDL_SDLAssertData_get_filename, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLAssertData_filename_FIELD_WRITER
  mrb_define_method(mrb, SDLAssertData_class, "filename=", mrb_SDL_SDLAssertData_set_filename, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLAssertData_linenum_FIELD_READER
  mrb_define_method(mrb, SDLAssertData_class, "linenum", mrb_SDL_SDLAssertData_get_linenum, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLAssertData_linenum_FIELD_WRITER
  mrb_define_method(mrb, SDLAssertData_class, "linenum=", mrb_SDL_SDLAssertData_set_linenum, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLAssertData_function_FIELD_READER
  mrb_define_method(mrb, SDLAssertData_class, "function", mrb_SDL_SDLAssertData_get_function, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLAssertData_function_FIELD_WRITER
  mrb_define_method(mrb, SDLAssertData_class, "function=", mrb_SDL_SDLAssertData_set_function, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLAssertData_next_FIELD_READER
  mrb_define_method(mrb, SDLAssertData_class, "next", mrb_SDL_SDLAssertData_get_next, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLAssertData_next_FIELD_WRITER
  mrb_define_method(mrb, SDLAssertData_class, "next=", mrb_SDL_SDLAssertData_set_next, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
