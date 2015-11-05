/*
 * struct _SDL_Haptic
 * Defined in file SDL_haptic.h @ line 134
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_SDL.h"

#if BIND_SDLHaptic_TYPE

/*
 * Class Methods
 */

#if BIND_SDLHaptic_INITIALIZE
mrb_value
mrb_SDL_SDLHaptic_initialize(mrb_state* mrb, mrb_value self) {
  struct _SDL_Haptic* native_object = (struct _SDL_Haptic*)malloc(sizeof(struct _SDL_Haptic));
  mruby_gift_struct _SDL_Haptic_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_SDL_SDLHaptic_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLHaptic.disown only accepts objects of type SDL::SDLHaptic");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_SDL_SDLHaptic_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLHaptic.belongs_to_ruby only accepts objects of type SDL::SDLHaptic");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}


void mrb_SDL_SDLHaptic_init(mrb_state* mrb) {
  RClass* SDLHaptic_class = mrb_define_class_under(mrb, SDL_module(mrb), "SDLHaptic", mrb->object_class);
  MRB_SET_INSTANCE_TT(SDLHaptic_class, MRB_TT_DATA);

#if BIND_SDLHaptic_INITIALIZE
  mrb_define_method(mrb, SDLHaptic_class, "initialize", mrb_SDL_SDLHaptic_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, SDLHaptic_class, "disown", mrb_SDL_SDLHaptic_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, SDLHaptic_class, "belongs_to_ruby?", mrb_SDL_SDLHaptic_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
