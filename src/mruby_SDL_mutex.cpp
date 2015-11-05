/*
 * struct SDL_mutex
 * Defined in file SDL_mutex.h @ line 58
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_SDL.h"

#if BIND_SDLMutex_TYPE

/*
 * Class Methods
 */

#if BIND_SDLMutex_INITIALIZE
mrb_value
mrb_SDL_SDLMutex_initialize(mrb_state* mrb, mrb_value self) {
  struct SDL_mutex* native_object = (struct SDL_mutex*)malloc(sizeof(struct SDL_mutex));
  mruby_gift_struct SDL_mutex_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_SDL_SDLMutex_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLMutex.disown only accepts objects of type SDL::SDLMutex");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_SDL_SDLMutex_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLMutex.belongs_to_ruby only accepts objects of type SDL::SDLMutex");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}


void mrb_SDL_SDLMutex_init(mrb_state* mrb) {
  RClass* SDLMutex_class = mrb_define_class_under(mrb, SDL_module(mrb), "SDLMutex", mrb->object_class);
  MRB_SET_INSTANCE_TT(SDLMutex_class, MRB_TT_DATA);

#if BIND_SDLMutex_INITIALIZE
  mrb_define_method(mrb, SDLMutex_class, "initialize", mrb_SDL_SDLMutex_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, SDLMutex_class, "disown", mrb_SDL_SDLMutex_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, SDLMutex_class, "belongs_to_ruby?", mrb_SDL_SDLMutex_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif