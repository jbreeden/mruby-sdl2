/*
 * struct SDL_Point
 * Defined in file SDL_rect.h @ line 47
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_SDL.h"

#if BIND_SDLPoint_TYPE

/*
 * Class Methods
 */

#if BIND_SDLPoint_INITIALIZE
mrb_value
mrb_SDL_SDLPoint_initialize(mrb_state* mrb, mrb_value self) {
  struct SDL_Point* native_object = (struct SDL_Point*)malloc(sizeof(struct SDL_Point));
  mruby_gift_struct SDL_Point_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_SDL_SDLPoint_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLPoint.disown only accepts objects of type SDL::SDLPoint");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_SDL_SDLPoint_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLPoint.belongs_to_ruby only accepts objects of type SDL::SDLPoint");
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

#if BIND_SDLPoint_x_FIELD
/* get_x
 *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDLPoint_get_x(mrb_state* mrb, mrb_value self) {
  struct SDL_Point * native_self = mruby_unbox_struct SDL_Point(self);

  int native_field = native_self->x;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}

/* set_x
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SDL_SDLPoint_set_x(mrb_state* mrb, mrb_value self) {
  struct SDL_Point * native_self = mruby_unbox_struct SDL_Point(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->x = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLPoint_y_FIELD
/* get_y
 *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDLPoint_get_y(mrb_state* mrb, mrb_value self) {
  struct SDL_Point * native_self = mruby_unbox_struct SDL_Point(self);

  int native_field = native_self->y;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}

/* set_y
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SDL_SDLPoint_set_y(mrb_state* mrb, mrb_value self) {
  struct SDL_Point * native_self = mruby_unbox_struct SDL_Point(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->y = native_field;

  return ruby_field;
}
#endif


void mrb_SDL_SDLPoint_init(mrb_state* mrb) {
  RClass* SDLPoint_class = mrb_define_class_under(mrb, SDL_module(mrb), "SDLPoint", mrb->object_class);
  MRB_SET_INSTANCE_TT(SDLPoint_class, MRB_TT_DATA);

#if BIND_SDLPoint_INITIALIZE
  mrb_define_method(mrb, SDLPoint_class, "initialize", mrb_SDL_SDLPoint_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, SDLPoint_class, "disown", mrb_SDL_SDLPoint_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, SDLPoint_class, "belongs_to_ruby?", mrb_SDL_SDLPoint_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_SDLPoint_x_FIELD
  mrb_define_method(mrb, SDLPoint_class, "x", mrb_SDL_SDLPoint_get_x, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, SDLPoint_class, "x=", mrb_SDL_SDLPoint_set_x, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLPoint_y_FIELD
  mrb_define_method(mrb, SDLPoint_class, "y", mrb_SDL_SDLPoint_get_y, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, SDLPoint_class, "y=", mrb_SDL_SDLPoint_set_y, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
