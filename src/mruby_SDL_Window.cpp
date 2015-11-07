/*
 * struct SDL_Window
 * Defined in file SDL_video.h @ line 89
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_SDL.h"

#if BIND_SDLWindow_TYPE

/*
 * Class Methods
 */

#if BIND_SDLWindow_INITIALIZE
mrb_value
mrb_SDL_SDLWindow_initialize(mrb_state* mrb, mrb_value self) {
  struct SDL_Window* native_object = (struct SDL_Window*)malloc(sizeof(struct SDL_Window));
  mruby_gift_struct SDL_Window_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_SDL_SDLWindow_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLWindow.disown only accepts objects of type SDL::SDLWindow");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_SDL_SDLWindow_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLWindow.belongs_to_ruby only accepts objects of type SDL::SDLWindow");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}


void mrb_SDL_SDLWindow_init(mrb_state* mrb) {
  RClass* SDLWindow_class = mrb_define_class_under(mrb, SDL_module(mrb), "Window", mrb->object_class);
  MRB_SET_INSTANCE_TT(SDLWindow_class, MRB_TT_DATA);

#if BIND_SDLWindow_INITIALIZE
  mrb_define_method(mrb, SDLWindow_class, "initialize", mrb_SDL_SDLWindow_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, SDLWindow_class, "disown", mrb_SDL_SDLWindow_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, SDLWindow_class, "belongs_to_ruby?", mrb_SDL_SDLWindow_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
