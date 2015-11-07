/*
 * SDLTest_Crc32Context
 * Defined in file SDL_test_crc32.h @ line 66
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_SDL.h"

#if BIND_SDLTestCrc32Context_TYPE

/*
 * Class Methods
 */

#if BIND_SDLTestCrc32Context_INITIALIZE
mrb_value
mrb_SDL_SDLTestCrc32Context_initialize(mrb_state* mrb, mrb_value self) {
  SDLTest_Crc32Context* native_object = (SDLTest_Crc32Context*)malloc(sizeof(SDLTest_Crc32Context));
  mruby_gift_SDLTest_Crc32Context_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_SDL_SDLTestCrc32Context_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLTestCrc32Context.disown only accepts objects of type SDL::SDLTestCrc32Context");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_SDL_SDLTestCrc32Context_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLTestCrc32Context.belongs_to_ruby only accepts objects of type SDL::SDLTestCrc32Context");
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

#if BIND_SDLTestCrc32Context_crc32_table_FIELD_READER
/* get_crc32_table
 *
 * Return Type: unsigned int [256]
 */
mrb_value
mrb_SDL_SDLTestCrc32Context_get_crc32_table(mrb_state* mrb, mrb_value self) {
  SDLTest_Crc32Context * native_self = mruby_unbox_SDLTest_Crc32Context(self);

  unsigned int [256] native_field = native_self->crc32_table;

  mrb_value ruby_field = TODO_mruby_box_unsigned_int_[256](mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLTestCrc32Context_crc32_table_FIELD_WRITER
/* set_crc32_table
 *
 * Parameters:
 * - value: unsigned int [256]
 */
mrb_value
mrb_SDL_SDLTestCrc32Context_set_crc32_table(mrb_state* mrb, mrb_value self) {
  SDLTest_Crc32Context * native_self = mruby_unbox_SDLTest_Crc32Context(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_unsigned_int_[256](ruby_field);

  unsigned int [256] native_field = TODO_mruby_unbox_unsigned_int_[256](ruby_field);

  native_self->crc32_table = native_field;

  return ruby_field;
}
#endif


void mrb_SDL_SDLTestCrc32Context_init(mrb_state* mrb) {
  RClass* SDLTestCrc32Context_class = mrb_define_class_under(mrb, SDL_module(mrb), "TestCrc32Context", mrb->object_class);
  MRB_SET_INSTANCE_TT(SDLTestCrc32Context_class, MRB_TT_DATA);

#if BIND_SDLTestCrc32Context_INITIALIZE
  mrb_define_method(mrb, SDLTestCrc32Context_class, "initialize", mrb_SDL_SDLTestCrc32Context_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, SDLTestCrc32Context_class, "disown", mrb_SDL_SDLTestCrc32Context_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, SDLTestCrc32Context_class, "belongs_to_ruby?", mrb_SDL_SDLTestCrc32Context_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_SDLTestCrc32Context_crc32_table_FIELD_READER
  mrb_define_method(mrb, SDLTestCrc32Context_class, "crc32_table", mrb_SDL_SDLTestCrc32Context_get_crc32_table, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLTestCrc32Context_crc32_table_FIELD_WRITER
  mrb_define_method(mrb, SDLTestCrc32Context_class, "crc32_table=", mrb_SDL_SDLTestCrc32Context_set_crc32_table, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
