/*
 * SDLTest_Md5Context
 * Defined in file SDL_test_md5.h @ line 71
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_SDL.h"

#if BIND_SDLTestMd5Context_TYPE

/*
 * Class Methods
 */

#if BIND_SDLTestMd5Context_INITIALIZE
mrb_value
mrb_SDL_SDLTestMd5Context_initialize(mrb_state* mrb, mrb_value self) {
  SDLTest_Md5Context* native_object = (SDLTest_Md5Context*)malloc(sizeof(SDLTest_Md5Context));
  mruby_gift_SDLTest_Md5Context_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_SDL_SDLTestMd5Context_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLTestMd5Context.disown only accepts objects of type SDL::SDLTestMd5Context");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_SDL_SDLTestMd5Context_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLTestMd5Context.belongs_to_ruby only accepts objects of type SDL::SDLTestMd5Context");
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

#if BIND_SDLTestMd5Context_i_FIELD_READER
/* get_i
 *
 * Return Type: MD5UINT4 [2]
 */
mrb_value
mrb_SDL_SDLTestMd5Context_get_i(mrb_state* mrb, mrb_value self) {
  SDLTest_Md5Context * native_self = mruby_unbox_SDLTest_Md5Context(self);

  MD5UINT4 [2] native_field = native_self->i;

  mrb_value ruby_field = TODO_mruby_box_MD5UINT4_[2](mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLTestMd5Context_i_FIELD_WRITER
/* set_i
 *
 * Parameters:
 * - value: MD5UINT4 [2]
 */
mrb_value
mrb_SDL_SDLTestMd5Context_set_i(mrb_state* mrb, mrb_value self) {
  SDLTest_Md5Context * native_self = mruby_unbox_SDLTest_Md5Context(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_MD5UINT4_[2](ruby_field);

  MD5UINT4 [2] native_field = TODO_mruby_unbox_MD5UINT4_[2](ruby_field);

  native_self->i = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLTestMd5Context_buf_FIELD_READER
/* get_buf
 *
 * Return Type: MD5UINT4 [4]
 */
mrb_value
mrb_SDL_SDLTestMd5Context_get_buf(mrb_state* mrb, mrb_value self) {
  SDLTest_Md5Context * native_self = mruby_unbox_SDLTest_Md5Context(self);

  MD5UINT4 [4] native_field = native_self->buf;

  mrb_value ruby_field = TODO_mruby_box_MD5UINT4_[4](mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLTestMd5Context_buf_FIELD_WRITER
/* set_buf
 *
 * Parameters:
 * - value: MD5UINT4 [4]
 */
mrb_value
mrb_SDL_SDLTestMd5Context_set_buf(mrb_state* mrb, mrb_value self) {
  SDLTest_Md5Context * native_self = mruby_unbox_SDLTest_Md5Context(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_MD5UINT4_[4](ruby_field);

  MD5UINT4 [4] native_field = TODO_mruby_unbox_MD5UINT4_[4](ruby_field);

  native_self->buf = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLTestMd5Context_in_FIELD_READER
/* get_in
 *
 * Return Type: unsigned char [64]
 */
mrb_value
mrb_SDL_SDLTestMd5Context_get_in(mrb_state* mrb, mrb_value self) {
  SDLTest_Md5Context * native_self = mruby_unbox_SDLTest_Md5Context(self);

  unsigned char [64] native_field = native_self->in;

  mrb_value ruby_field = TODO_mruby_box_unsigned_char_[64](mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLTestMd5Context_in_FIELD_WRITER
/* set_in
 *
 * Parameters:
 * - value: unsigned char [64]
 */
mrb_value
mrb_SDL_SDLTestMd5Context_set_in(mrb_state* mrb, mrb_value self) {
  SDLTest_Md5Context * native_self = mruby_unbox_SDLTest_Md5Context(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_unsigned_char_[64](ruby_field);

  unsigned char [64] native_field = TODO_mruby_unbox_unsigned_char_[64](ruby_field);

  native_self->in = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLTestMd5Context_digest_FIELD_READER
/* get_digest
 *
 * Return Type: unsigned char [16]
 */
mrb_value
mrb_SDL_SDLTestMd5Context_get_digest(mrb_state* mrb, mrb_value self) {
  SDLTest_Md5Context * native_self = mruby_unbox_SDLTest_Md5Context(self);

  unsigned char [16] native_field = native_self->digest;

  mrb_value ruby_field = TODO_mruby_box_unsigned_char_[16](mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLTestMd5Context_digest_FIELD_WRITER
/* set_digest
 *
 * Parameters:
 * - value: unsigned char [16]
 */
mrb_value
mrb_SDL_SDLTestMd5Context_set_digest(mrb_state* mrb, mrb_value self) {
  SDLTest_Md5Context * native_self = mruby_unbox_SDLTest_Md5Context(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_unsigned_char_[16](ruby_field);

  unsigned char [16] native_field = TODO_mruby_unbox_unsigned_char_[16](ruby_field);

  native_self->digest = native_field;

  return ruby_field;
}
#endif


void mrb_SDL_SDLTestMd5Context_init(mrb_state* mrb) {
  RClass* SDLTestMd5Context_class = mrb_define_class_under(mrb, SDL_module(mrb), "SDLTestMd5Context", mrb->object_class);
  MRB_SET_INSTANCE_TT(SDLTestMd5Context_class, MRB_TT_DATA);

#if BIND_SDLTestMd5Context_INITIALIZE
  mrb_define_method(mrb, SDLTestMd5Context_class, "initialize", mrb_SDL_SDLTestMd5Context_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, SDLTestMd5Context_class, "disown", mrb_SDL_SDLTestMd5Context_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, SDLTestMd5Context_class, "belongs_to_ruby?", mrb_SDL_SDLTestMd5Context_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_SDLTestMd5Context_i_FIELD_READER
  mrb_define_method(mrb, SDLTestMd5Context_class, "i", mrb_SDL_SDLTestMd5Context_get_i, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLTestMd5Context_i_FIELD_WRITER
  mrb_define_method(mrb, SDLTestMd5Context_class, "i=", mrb_SDL_SDLTestMd5Context_set_i, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLTestMd5Context_buf_FIELD_READER
  mrb_define_method(mrb, SDLTestMd5Context_class, "buf", mrb_SDL_SDLTestMd5Context_get_buf, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLTestMd5Context_buf_FIELD_WRITER
  mrb_define_method(mrb, SDLTestMd5Context_class, "buf=", mrb_SDL_SDLTestMd5Context_set_buf, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLTestMd5Context_in_FIELD_READER
  mrb_define_method(mrb, SDLTestMd5Context_class, "in", mrb_SDL_SDLTestMd5Context_get_in, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLTestMd5Context_in_FIELD_WRITER
  mrb_define_method(mrb, SDLTestMd5Context_class, "in=", mrb_SDL_SDLTestMd5Context_set_in, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLTestMd5Context_digest_FIELD_READER
  mrb_define_method(mrb, SDLTestMd5Context_class, "digest", mrb_SDL_SDLTestMd5Context_get_digest, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLTestMd5Context_digest_FIELD_WRITER
  mrb_define_method(mrb, SDLTestMd5Context_class, "digest=", mrb_SDL_SDLTestMd5Context_set_digest, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
