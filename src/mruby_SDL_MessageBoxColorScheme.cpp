/*
 * SDL_MessageBoxColorScheme
 * Defined in file SDL_messagebox.h @ line 84
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_SDL.h"

#if BIND_SDLMessageBoxColorScheme_TYPE

/*
 * Class Methods
 */

#if BIND_SDLMessageBoxColorScheme_INITIALIZE
mrb_value
mrb_SDL_SDLMessageBoxColorScheme_initialize(mrb_state* mrb, mrb_value self) {
  SDL_MessageBoxColorScheme* native_object = (SDL_MessageBoxColorScheme*)malloc(sizeof(SDL_MessageBoxColorScheme));
  mruby_gift_SDL_MessageBoxColorScheme_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_SDL_SDLMessageBoxColorScheme_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLMessageBoxColorScheme.disown only accepts objects of type SDL::SDLMessageBoxColorScheme");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_SDL_SDLMessageBoxColorScheme_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLMessageBoxColorScheme.belongs_to_ruby only accepts objects of type SDL::SDLMessageBoxColorScheme");
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

#if BIND_SDLMessageBoxColorScheme_colors_FIELD
/* get_colors
 *
 * Return Type: SDL_MessageBoxColor [5]
 */
mrb_value
mrb_SDL_SDLMessageBoxColorScheme_get_colors(mrb_state* mrb, mrb_value self) {
  SDL_MessageBoxColorScheme * native_self = mruby_unbox_SDL_MessageBoxColorScheme(self);

  SDL_MessageBoxColor [5] native_field = native_self->colors;

  mrb_value ruby_field = TODO_mruby_box_SDL_MessageBoxColor_[5](mrb, native_field);

  return ruby_field;
}

/* set_colors
 *
 * Parameters:
 * - value: SDL_MessageBoxColor [5]
 */
mrb_value
mrb_SDL_SDLMessageBoxColorScheme_set_colors(mrb_state* mrb, mrb_value self) {
  SDL_MessageBoxColorScheme * native_self = mruby_unbox_SDL_MessageBoxColorScheme(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_SDL_MessageBoxColor_[5](ruby_field);

  SDL_MessageBoxColor [5] native_field = TODO_mruby_unbox_SDL_MessageBoxColor_[5](ruby_field);

  native_self->colors = native_field;

  return ruby_field;
}
#endif


void mrb_SDL_SDLMessageBoxColorScheme_init(mrb_state* mrb) {
  RClass* SDLMessageBoxColorScheme_class = mrb_define_class_under(mrb, SDL_module(mrb), "SDLMessageBoxColorScheme", mrb->object_class);
  MRB_SET_INSTANCE_TT(SDLMessageBoxColorScheme_class, MRB_TT_DATA);

#if BIND_SDLMessageBoxColorScheme_INITIALIZE
  mrb_define_method(mrb, SDLMessageBoxColorScheme_class, "initialize", mrb_SDL_SDLMessageBoxColorScheme_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, SDLMessageBoxColorScheme_class, "disown", mrb_SDL_SDLMessageBoxColorScheme_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, SDLMessageBoxColorScheme_class, "belongs_to_ruby?", mrb_SDL_SDLMessageBoxColorScheme_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_SDLMessageBoxColorScheme_colors_FIELD
  mrb_define_method(mrb, SDLMessageBoxColorScheme_class, "colors", mrb_SDL_SDLMessageBoxColorScheme_get_colors, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, SDLMessageBoxColorScheme_class, "colors=", mrb_SDL_SDLMessageBoxColorScheme_set_colors, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
