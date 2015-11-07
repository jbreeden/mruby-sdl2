/*
 * struct SDLTest_TestCaseReference
 * Defined in file SDL_test_harness.h @ line 75
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_SDL.h"

#if BIND_SDLTestTestCaseReference_TYPE

/*
 * Class Methods
 */

#if BIND_SDLTestTestCaseReference_INITIALIZE
mrb_value
mrb_SDL_SDLTestTestCaseReference_initialize(mrb_state* mrb, mrb_value self) {
  struct SDLTest_TestCaseReference* native_object = (struct SDLTest_TestCaseReference*)malloc(sizeof(struct SDLTest_TestCaseReference));
  mruby_gift_struct SDLTest_TestCaseReference_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_SDL_SDLTestTestCaseReference_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLTestTestCaseReference.disown only accepts objects of type SDL::SDLTestTestCaseReference");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_SDL_SDLTestTestCaseReference_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLTestTestCaseReference.belongs_to_ruby only accepts objects of type SDL::SDLTestTestCaseReference");
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

#if BIND_SDLTestTestCaseReference_testCase_FIELD_READER
/* get_testCase
 *
 * Return Type: SDLTest_TestCaseFp
 */
mrb_value
mrb_SDL_SDLTestTestCaseReference_get_testCase(mrb_state* mrb, mrb_value self) {
  struct SDLTest_TestCaseReference * native_self = mruby_unbox_struct SDLTest_TestCaseReference(self);

  SDLTest_TestCaseFp native_field = native_self->testCase;

  mrb_value ruby_field = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLTestTestCaseReference_testCase_FIELD_WRITER
/* set_testCase
 *
 * Parameters:
 * - value: SDLTest_TestCaseFp
 */
mrb_value
mrb_SDL_SDLTestTestCaseReference_set_testCase(mrb_state* mrb, mrb_value self) {
  struct SDLTest_TestCaseReference * native_self = mruby_unbox_struct SDLTest_TestCaseReference(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(ruby_field);

  int (*native_field)(void *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(ruby_field);

  native_self->testCase = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLTestTestCaseReference_name_FIELD_READER
/* get_name
 *
 * Return Type: char *
 */
mrb_value
mrb_SDL_SDLTestTestCaseReference_get_name(mrb_state* mrb, mrb_value self) {
  struct SDLTest_TestCaseReference * native_self = mruby_unbox_struct SDLTest_TestCaseReference(self);

  char * native_field = native_self->name;

  mrb_value ruby_field = mrb_str_new_cstr(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLTestTestCaseReference_name_FIELD_WRITER
/* set_name
 *
 * Parameters:
 * - value: char *
 */
mrb_value
mrb_SDL_SDLTestTestCaseReference_set_name(mrb_state* mrb, mrb_value self) {
  struct SDLTest_TestCaseReference * native_self = mruby_unbox_struct SDLTest_TestCaseReference(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }

  /* WARNING: Allocating new memory to create 'char *' from 'const char *'.
   *          Please verify that this memory is cleaned up correctly.
   *
   *          Has this been verified? [No]
   */
  char * native_field = strdup(mrb_string_value_cstr(mrb, &ruby_field));

  native_self->name = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLTestTestCaseReference_description_FIELD_READER
/* get_description
 *
 * Return Type: char *
 */
mrb_value
mrb_SDL_SDLTestTestCaseReference_get_description(mrb_state* mrb, mrb_value self) {
  struct SDLTest_TestCaseReference * native_self = mruby_unbox_struct SDLTest_TestCaseReference(self);

  char * native_field = native_self->description;

  mrb_value ruby_field = mrb_str_new_cstr(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLTestTestCaseReference_description_FIELD_WRITER
/* set_description
 *
 * Parameters:
 * - value: char *
 */
mrb_value
mrb_SDL_SDLTestTestCaseReference_set_description(mrb_state* mrb, mrb_value self) {
  struct SDLTest_TestCaseReference * native_self = mruby_unbox_struct SDLTest_TestCaseReference(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }

  /* WARNING: Allocating new memory to create 'char *' from 'const char *'.
   *          Please verify that this memory is cleaned up correctly.
   *
   *          Has this been verified? [No]
   */
  char * native_field = strdup(mrb_string_value_cstr(mrb, &ruby_field));

  native_self->description = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLTestTestCaseReference_enabled_FIELD_READER
/* get_enabled
 *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDLTestTestCaseReference_get_enabled(mrb_state* mrb, mrb_value self) {
  struct SDLTest_TestCaseReference * native_self = mruby_unbox_struct SDLTest_TestCaseReference(self);

  int native_field = native_self->enabled;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLTestTestCaseReference_enabled_FIELD_WRITER
/* set_enabled
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SDL_SDLTestTestCaseReference_set_enabled(mrb_state* mrb, mrb_value self) {
  struct SDLTest_TestCaseReference * native_self = mruby_unbox_struct SDLTest_TestCaseReference(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->enabled = native_field;

  return ruby_field;
}
#endif


void mrb_SDL_SDLTestTestCaseReference_init(mrb_state* mrb) {
  RClass* SDLTestTestCaseReference_class = mrb_define_class_under(mrb, SDL_module(mrb), "TestTestCaseReference", mrb->object_class);
  MRB_SET_INSTANCE_TT(SDLTestTestCaseReference_class, MRB_TT_DATA);

#if BIND_SDLTestTestCaseReference_INITIALIZE
  mrb_define_method(mrb, SDLTestTestCaseReference_class, "initialize", mrb_SDL_SDLTestTestCaseReference_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, SDLTestTestCaseReference_class, "disown", mrb_SDL_SDLTestTestCaseReference_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, SDLTestTestCaseReference_class, "belongs_to_ruby?", mrb_SDL_SDLTestTestCaseReference_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_SDLTestTestCaseReference_testCase_FIELD_READER
  mrb_define_method(mrb, SDLTestTestCaseReference_class, "testCase", mrb_SDL_SDLTestTestCaseReference_get_testCase, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLTestTestCaseReference_testCase_FIELD_WRITER
  mrb_define_method(mrb, SDLTestTestCaseReference_class, "testCase=", mrb_SDL_SDLTestTestCaseReference_set_testCase, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLTestTestCaseReference_name_FIELD_READER
  mrb_define_method(mrb, SDLTestTestCaseReference_class, "name", mrb_SDL_SDLTestTestCaseReference_get_name, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLTestTestCaseReference_name_FIELD_WRITER
  mrb_define_method(mrb, SDLTestTestCaseReference_class, "name=", mrb_SDL_SDLTestTestCaseReference_set_name, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLTestTestCaseReference_description_FIELD_READER
  mrb_define_method(mrb, SDLTestTestCaseReference_class, "description", mrb_SDL_SDLTestTestCaseReference_get_description, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLTestTestCaseReference_description_FIELD_WRITER
  mrb_define_method(mrb, SDLTestTestCaseReference_class, "description=", mrb_SDL_SDLTestTestCaseReference_set_description, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLTestTestCaseReference_enabled_FIELD_READER
  mrb_define_method(mrb, SDLTestTestCaseReference_class, "enabled", mrb_SDL_SDLTestTestCaseReference_get_enabled, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLTestTestCaseReference_enabled_FIELD_WRITER
  mrb_define_method(mrb, SDLTestTestCaseReference_class, "enabled=", mrb_SDL_SDLTestTestCaseReference_set_enabled, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
