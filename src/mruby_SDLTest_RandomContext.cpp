/*
 * SDLTest_RandomContext
 * Defined in file SDL_test_random.h @ line 59
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_SDL.h"

#if BIND_SDLTestRandomContext_TYPE

/*
 * Class Methods
 */

#if BIND_SDLTestRandomContext_INITIALIZE
mrb_value
mrb_SDL_SDLTestRandomContext_initialize(mrb_state* mrb, mrb_value self) {
  SDLTest_RandomContext* native_object = (SDLTest_RandomContext*)malloc(sizeof(SDLTest_RandomContext));
  mruby_gift_SDLTest_RandomContext_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_SDL_SDLTestRandomContext_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLTestRandomContext.disown only accepts objects of type SDL::SDLTestRandomContext");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_SDL_SDLTestRandomContext_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLTestRandomContext.belongs_to_ruby only accepts objects of type SDL::SDLTestRandomContext");
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

#if BIND_SDLTestRandomContext_a_FIELD_READER
/* get_a
 *
 * Return Type: unsigned int
 */
mrb_value
mrb_SDL_SDLTestRandomContext_get_a(mrb_state* mrb, mrb_value self) {
  SDLTest_RandomContext * native_self = mruby_unbox_SDLTest_RandomContext(self);

  unsigned int native_field = native_self->a;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLTestRandomContext_a_FIELD_WRITER
/* set_a
 *
 * Parameters:
 * - value: unsigned int
 */
mrb_value
mrb_SDL_SDLTestRandomContext_set_a(mrb_state* mrb, mrb_value self) {
  SDLTest_RandomContext * native_self = mruby_unbox_SDLTest_RandomContext(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  unsigned int native_field = mrb_fixnum(ruby_field);

  native_self->a = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLTestRandomContext_x_FIELD_READER
/* get_x
 *
 * Return Type: unsigned int
 */
mrb_value
mrb_SDL_SDLTestRandomContext_get_x(mrb_state* mrb, mrb_value self) {
  SDLTest_RandomContext * native_self = mruby_unbox_SDLTest_RandomContext(self);

  unsigned int native_field = native_self->x;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLTestRandomContext_x_FIELD_WRITER
/* set_x
 *
 * Parameters:
 * - value: unsigned int
 */
mrb_value
mrb_SDL_SDLTestRandomContext_set_x(mrb_state* mrb, mrb_value self) {
  SDLTest_RandomContext * native_self = mruby_unbox_SDLTest_RandomContext(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  unsigned int native_field = mrb_fixnum(ruby_field);

  native_self->x = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLTestRandomContext_c_FIELD_READER
/* get_c
 *
 * Return Type: unsigned int
 */
mrb_value
mrb_SDL_SDLTestRandomContext_get_c(mrb_state* mrb, mrb_value self) {
  SDLTest_RandomContext * native_self = mruby_unbox_SDLTest_RandomContext(self);

  unsigned int native_field = native_self->c;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLTestRandomContext_c_FIELD_WRITER
/* set_c
 *
 * Parameters:
 * - value: unsigned int
 */
mrb_value
mrb_SDL_SDLTestRandomContext_set_c(mrb_state* mrb, mrb_value self) {
  SDLTest_RandomContext * native_self = mruby_unbox_SDLTest_RandomContext(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  unsigned int native_field = mrb_fixnum(ruby_field);

  native_self->c = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLTestRandomContext_ah_FIELD_READER
/* get_ah
 *
 * Return Type: unsigned int
 */
mrb_value
mrb_SDL_SDLTestRandomContext_get_ah(mrb_state* mrb, mrb_value self) {
  SDLTest_RandomContext * native_self = mruby_unbox_SDLTest_RandomContext(self);

  unsigned int native_field = native_self->ah;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLTestRandomContext_ah_FIELD_WRITER
/* set_ah
 *
 * Parameters:
 * - value: unsigned int
 */
mrb_value
mrb_SDL_SDLTestRandomContext_set_ah(mrb_state* mrb, mrb_value self) {
  SDLTest_RandomContext * native_self = mruby_unbox_SDLTest_RandomContext(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  unsigned int native_field = mrb_fixnum(ruby_field);

  native_self->ah = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLTestRandomContext_al_FIELD_READER
/* get_al
 *
 * Return Type: unsigned int
 */
mrb_value
mrb_SDL_SDLTestRandomContext_get_al(mrb_state* mrb, mrb_value self) {
  SDLTest_RandomContext * native_self = mruby_unbox_SDLTest_RandomContext(self);

  unsigned int native_field = native_self->al;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLTestRandomContext_al_FIELD_WRITER
/* set_al
 *
 * Parameters:
 * - value: unsigned int
 */
mrb_value
mrb_SDL_SDLTestRandomContext_set_al(mrb_state* mrb, mrb_value self) {
  SDLTest_RandomContext * native_self = mruby_unbox_SDLTest_RandomContext(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  unsigned int native_field = mrb_fixnum(ruby_field);

  native_self->al = native_field;

  return ruby_field;
}
#endif


void mrb_SDL_SDLTestRandomContext_init(mrb_state* mrb) {
  RClass* SDLTestRandomContext_class = mrb_define_class_under(mrb, SDL_module(mrb), "SDLTestRandomContext", mrb->object_class);
  MRB_SET_INSTANCE_TT(SDLTestRandomContext_class, MRB_TT_DATA);

#if BIND_SDLTestRandomContext_INITIALIZE
  mrb_define_method(mrb, SDLTestRandomContext_class, "initialize", mrb_SDL_SDLTestRandomContext_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, SDLTestRandomContext_class, "disown", mrb_SDL_SDLTestRandomContext_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, SDLTestRandomContext_class, "belongs_to_ruby?", mrb_SDL_SDLTestRandomContext_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_SDLTestRandomContext_a_FIELD_READER
  mrb_define_method(mrb, SDLTestRandomContext_class, "a", mrb_SDL_SDLTestRandomContext_get_a, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLTestRandomContext_a_FIELD_WRITER
  mrb_define_method(mrb, SDLTestRandomContext_class, "a=", mrb_SDL_SDLTestRandomContext_set_a, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLTestRandomContext_x_FIELD_READER
  mrb_define_method(mrb, SDLTestRandomContext_class, "x", mrb_SDL_SDLTestRandomContext_get_x, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLTestRandomContext_x_FIELD_WRITER
  mrb_define_method(mrb, SDLTestRandomContext_class, "x=", mrb_SDL_SDLTestRandomContext_set_x, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLTestRandomContext_c_FIELD_READER
  mrb_define_method(mrb, SDLTestRandomContext_class, "c", mrb_SDL_SDLTestRandomContext_get_c, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLTestRandomContext_c_FIELD_WRITER
  mrb_define_method(mrb, SDLTestRandomContext_class, "c=", mrb_SDL_SDLTestRandomContext_set_c, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLTestRandomContext_ah_FIELD_READER
  mrb_define_method(mrb, SDLTestRandomContext_class, "ah", mrb_SDL_SDLTestRandomContext_get_ah, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLTestRandomContext_ah_FIELD_WRITER
  mrb_define_method(mrb, SDLTestRandomContext_class, "ah=", mrb_SDL_SDLTestRandomContext_set_ah, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLTestRandomContext_al_FIELD_READER
  mrb_define_method(mrb, SDLTestRandomContext_class, "al", mrb_SDL_SDLTestRandomContext_get_al, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLTestRandomContext_al_FIELD_WRITER
  mrb_define_method(mrb, SDLTestRandomContext_class, "al=", mrb_SDL_SDLTestRandomContext_set_al, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
