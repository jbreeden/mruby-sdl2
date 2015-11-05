/*
 * struct SDLTest_TestSuiteReference
 * Defined in file SDL_test_harness.h @ line 89
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_SDL.h"

#if BIND_SDLTestTestSuiteReference_TYPE

/*
 * Class Methods
 */

#if BIND_SDLTestTestSuiteReference_INITIALIZE
mrb_value
mrb_SDL_SDLTestTestSuiteReference_initialize(mrb_state* mrb, mrb_value self) {
  struct SDLTest_TestSuiteReference* native_object = (struct SDLTest_TestSuiteReference*)malloc(sizeof(struct SDLTest_TestSuiteReference));
  mruby_gift_struct SDLTest_TestSuiteReference_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_SDL_SDLTestTestSuiteReference_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLTestTestSuiteReference.disown only accepts objects of type SDL::SDLTestTestSuiteReference");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_SDL_SDLTestTestSuiteReference_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLTestTestSuiteReference.belongs_to_ruby only accepts objects of type SDL::SDLTestTestSuiteReference");
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

#if BIND_SDLTestTestSuiteReference_name_FIELD
/* get_name
 *
 * Return Type: char *
 */
mrb_value
mrb_SDL_SDLTestTestSuiteReference_get_name(mrb_state* mrb, mrb_value self) {
  struct SDLTest_TestSuiteReference * native_self = mruby_unbox_struct SDLTest_TestSuiteReference(self);

  char * native_field = native_self->name;

  mrb_value ruby_field = mrb_str_new_cstr(mrb, native_field);

  return ruby_field;
}

/* set_name
 *
 * Parameters:
 * - value: char *
 */
mrb_value
mrb_SDL_SDLTestTestSuiteReference_set_name(mrb_state* mrb, mrb_value self) {
  struct SDLTest_TestSuiteReference * native_self = mruby_unbox_struct SDLTest_TestSuiteReference(self);
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

#if BIND_SDLTestTestSuiteReference_testSetUp_FIELD
/* get_testSetUp
 *
 * Return Type: SDLTest_TestCaseSetUpFp
 */
mrb_value
mrb_SDL_SDLTestTestSuiteReference_get_testSetUp(mrb_state* mrb, mrb_value self) {
  struct SDLTest_TestSuiteReference * native_self = mruby_unbox_struct SDLTest_TestSuiteReference(self);

  SDLTest_TestCaseSetUpFp native_field = native_self->testSetUp;

  mrb_value ruby_field = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(mrb, native_field);

  return ruby_field;
}

/* set_testSetUp
 *
 * Parameters:
 * - value: SDLTest_TestCaseSetUpFp
 */
mrb_value
mrb_SDL_SDLTestTestSuiteReference_set_testSetUp(mrb_state* mrb, mrb_value self) {
  struct SDLTest_TestSuiteReference * native_self = mruby_unbox_struct SDLTest_TestSuiteReference(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(ruby_field);

  void (*native_field)(void *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(ruby_field);

  native_self->testSetUp = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLTestTestSuiteReference_testCases_FIELD
/* get_testCases
 *
 * Return Type: const SDLTest_TestCaseReference **
 */
mrb_value
mrb_SDL_SDLTestTestSuiteReference_get_testCases(mrb_state* mrb, mrb_value self) {
  struct SDLTest_TestSuiteReference * native_self = mruby_unbox_struct SDLTest_TestSuiteReference(self);

  const SDLTest_TestCaseReference ** native_field = native_self->testCases;

  mrb_value ruby_field = TODO_mruby_box_SDLTest_TestCaseReference_PTR_PTR(mrb, native_field);

  return ruby_field;
}

/* set_testCases
 *
 * Parameters:
 * - value: const SDLTest_TestCaseReference **
 */
mrb_value
mrb_SDL_SDLTestTestSuiteReference_set_testCases(mrb_state* mrb, mrb_value self) {
  struct SDLTest_TestSuiteReference * native_self = mruby_unbox_struct SDLTest_TestSuiteReference(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_SDLTest_TestCaseReference_PTR_PTR(ruby_field);

  const SDLTest_TestCaseReference ** native_field = TODO_mruby_unbox_SDLTest_TestCaseReference_PTR_PTR(ruby_field);

  native_self->testCases = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLTestTestSuiteReference_testTearDown_FIELD
/* get_testTearDown
 *
 * Return Type: SDLTest_TestCaseTearDownFp
 */
mrb_value
mrb_SDL_SDLTestTestSuiteReference_get_testTearDown(mrb_state* mrb, mrb_value self) {
  struct SDLTest_TestSuiteReference * native_self = mruby_unbox_struct SDLTest_TestSuiteReference(self);

  SDLTest_TestCaseTearDownFp native_field = native_self->testTearDown;

  mrb_value ruby_field = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(mrb, native_field);

  return ruby_field;
}

/* set_testTearDown
 *
 * Parameters:
 * - value: SDLTest_TestCaseTearDownFp
 */
mrb_value
mrb_SDL_SDLTestTestSuiteReference_set_testTearDown(mrb_state* mrb, mrb_value self) {
  struct SDLTest_TestSuiteReference * native_self = mruby_unbox_struct SDLTest_TestSuiteReference(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(ruby_field);

  void (*native_field)(void *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(ruby_field);

  native_self->testTearDown = native_field;

  return ruby_field;
}
#endif


void mrb_SDL_SDLTestTestSuiteReference_init(mrb_state* mrb) {
  RClass* SDLTestTestSuiteReference_class = mrb_define_class_under(mrb, SDL_module(mrb), "SDLTestTestSuiteReference", mrb->object_class);
  MRB_SET_INSTANCE_TT(SDLTestTestSuiteReference_class, MRB_TT_DATA);

#if BIND_SDLTestTestSuiteReference_INITIALIZE
  mrb_define_method(mrb, SDLTestTestSuiteReference_class, "initialize", mrb_SDL_SDLTestTestSuiteReference_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, SDLTestTestSuiteReference_class, "disown", mrb_SDL_SDLTestTestSuiteReference_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, SDLTestTestSuiteReference_class, "belongs_to_ruby?", mrb_SDL_SDLTestTestSuiteReference_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_SDLTestTestSuiteReference_name_FIELD
  mrb_define_method(mrb, SDLTestTestSuiteReference_class, "name", mrb_SDL_SDLTestTestSuiteReference_get_name, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, SDLTestTestSuiteReference_class, "name=", mrb_SDL_SDLTestTestSuiteReference_set_name, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLTestTestSuiteReference_testSetUp_FIELD
  mrb_define_method(mrb, SDLTestTestSuiteReference_class, "testSetUp", mrb_SDL_SDLTestTestSuiteReference_get_testSetUp, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, SDLTestTestSuiteReference_class, "testSetUp=", mrb_SDL_SDLTestTestSuiteReference_set_testSetUp, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLTestTestSuiteReference_testCases_FIELD
  mrb_define_method(mrb, SDLTestTestSuiteReference_class, "testCases", mrb_SDL_SDLTestTestSuiteReference_get_testCases, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, SDLTestTestSuiteReference_class, "testCases=", mrb_SDL_SDLTestTestSuiteReference_set_testCases, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLTestTestSuiteReference_testTearDown_FIELD
  mrb_define_method(mrb, SDLTestTestSuiteReference_class, "testTearDown", mrb_SDL_SDLTestTestSuiteReference_get_testTearDown, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, SDLTestTestSuiteReference_class, "testTearDown=", mrb_SDL_SDLTestTestSuiteReference_set_testTearDown, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
