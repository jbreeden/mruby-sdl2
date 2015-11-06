/*
 * SDL_atomic_t
 * Defined in file SDL_atomic.h @ line 181
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_SDL.h"

#if BIND_SDLAtomicT_TYPE

/*
 * Class Methods
 */

#if BIND_SDLAtomicT_INITIALIZE
mrb_value
mrb_SDL_SDLAtomicT_initialize(mrb_state* mrb, mrb_value self) {
  SDL_atomic_t* native_object = (SDL_atomic_t*)malloc(sizeof(SDL_atomic_t));
  mruby_gift_SDL_atomic_t_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_SDL_SDLAtomicT_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLAtomicT.disown only accepts objects of type SDL::SDLAtomicT");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_SDL_SDLAtomicT_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLAtomicT.belongs_to_ruby only accepts objects of type SDL::SDLAtomicT");
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

#if BIND_SDLAtomicT_value_FIELD_READER
/* get_value
 *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDLAtomicT_get_value(mrb_state* mrb, mrb_value self) {
  SDL_atomic_t * native_self = mruby_unbox_SDL_atomic_t(self);

  int native_field = native_self->value;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLAtomicT_value_FIELD_WRITER
/* set_value
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SDL_SDLAtomicT_set_value(mrb_state* mrb, mrb_value self) {
  SDL_atomic_t * native_self = mruby_unbox_SDL_atomic_t(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->value = native_field;

  return ruby_field;
}
#endif


void mrb_SDL_SDLAtomicT_init(mrb_state* mrb) {
  RClass* SDLAtomicT_class = mrb_define_class_under(mrb, SDL_module(mrb), "SDLAtomicT", mrb->object_class);
  MRB_SET_INSTANCE_TT(SDLAtomicT_class, MRB_TT_DATA);

#if BIND_SDLAtomicT_INITIALIZE
  mrb_define_method(mrb, SDLAtomicT_class, "initialize", mrb_SDL_SDLAtomicT_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, SDLAtomicT_class, "disown", mrb_SDL_SDLAtomicT_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, SDLAtomicT_class, "belongs_to_ruby?", mrb_SDL_SDLAtomicT_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_SDLAtomicT_value_FIELD_READER
  mrb_define_method(mrb, SDLAtomicT_class, "value", mrb_SDL_SDLAtomicT_get_value, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLAtomicT_value_FIELD_WRITER
  mrb_define_method(mrb, SDLAtomicT_class, "value=", mrb_SDL_SDLAtomicT_set_value, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
