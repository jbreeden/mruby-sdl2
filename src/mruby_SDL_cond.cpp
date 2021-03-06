/*
 * struct SDL_cond
 * Defined in file SDL_mutex.h @ line 166
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_SDL.h"

#if BIND_SDLCond_TYPE

/*
 * Class Methods
 */

#if BIND_SDLCond_INITIALIZE
mrb_value
mrb_SDL_SDLCond_initialize(mrb_state* mrb, mrb_value self) {
  struct SDL_cond* native_object = (struct SDL_cond*)malloc(sizeof(struct SDL_cond));
  mruby_gift_SDL_cond_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_SDL_SDLCond_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLCond.disown only accepts objects of type SDL::SDLCond");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_SDL_SDLCond_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLCond.belongs_to_ruby only accepts objects of type SDL::SDLCond");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}


void mrb_SDL_SDLCond_init(mrb_state* mrb) {
  RClass* SDLCond_class = mrb_define_class_under(mrb, SDL_module(mrb), "Cond", mrb->object_class);
  MRB_SET_INSTANCE_TT(SDLCond_class, MRB_TT_DATA);

#if BIND_SDLCond_INITIALIZE
  mrb_define_method(mrb, SDLCond_class, "initialize", mrb_SDL_SDLCond_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, SDLCond_class, "disown", mrb_SDL_SDLCond_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, SDLCond_class, "belongs_to_ruby?", mrb_SDL_SDLCond_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
