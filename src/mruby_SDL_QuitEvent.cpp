/*
 * struct SDL_QuitEvent
 * Defined in file SDL_events.h @ line 450
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_SDL.h"

#if BIND_SDLQuitEvent_TYPE

/*
 * Class Methods
 */

#if BIND_SDLQuitEvent_INITIALIZE
mrb_value
mrb_SDL_SDLQuitEvent_initialize(mrb_state* mrb, mrb_value self) {
  struct SDL_QuitEvent* native_object = (struct SDL_QuitEvent*)malloc(sizeof(struct SDL_QuitEvent));
  mruby_gift_SDL_QuitEvent_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_SDL_SDLQuitEvent_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLQuitEvent.disown only accepts objects of type SDL::SDLQuitEvent");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_SDL_SDLQuitEvent_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLQuitEvent.belongs_to_ruby only accepts objects of type SDL::SDLQuitEvent");
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

#if BIND_SDLQuitEvent_type_FIELD_READER
/* get_type
 *
 * Return Type: Uint32
 */
mrb_value
mrb_SDL_SDLQuitEvent_get_type(mrb_state* mrb, mrb_value self) {
  struct SDL_QuitEvent * native_self = mruby_unbox_SDL_QuitEvent(self);

  Uint32 native_field = native_self->type;

  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLQuitEvent_type_FIELD_WRITER
/* set_type
 *
 * Parameters:
 * - value: Uint32
 */
mrb_value
mrb_SDL_SDLQuitEvent_set_type(mrb_state* mrb, mrb_value self) {
  struct SDL_QuitEvent * native_self = mruby_unbox_SDL_QuitEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) { mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected"); return mrb_nil_value(); }

  Uint32 native_field = mrb_fixnum(ruby_field);

  native_self->type = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLQuitEvent_timestamp_FIELD_READER
/* get_timestamp
 *
 * Return Type: Uint32
 */
mrb_value
mrb_SDL_SDLQuitEvent_get_timestamp(mrb_state* mrb, mrb_value self) {
  struct SDL_QuitEvent * native_self = mruby_unbox_SDL_QuitEvent(self);

  Uint32 native_field = native_self->timestamp;

  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLQuitEvent_timestamp_FIELD_WRITER
/* set_timestamp
 *
 * Parameters:
 * - value: Uint32
 */
mrb_value
mrb_SDL_SDLQuitEvent_set_timestamp(mrb_state* mrb, mrb_value self) {
  struct SDL_QuitEvent * native_self = mruby_unbox_SDL_QuitEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) { mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected"); return mrb_nil_value(); }

  Uint32 native_field = mrb_fixnum(ruby_field);

  native_self->timestamp = native_field;

  return ruby_field;
}
#endif


void mrb_SDL_SDLQuitEvent_init(mrb_state* mrb) {
  RClass* SDLQuitEvent_class = mrb_define_class_under(mrb, SDL_module(mrb), "QuitEvent", mrb->object_class);
  MRB_SET_INSTANCE_TT(SDLQuitEvent_class, MRB_TT_DATA);

#if BIND_SDLQuitEvent_INITIALIZE
  mrb_define_method(mrb, SDLQuitEvent_class, "initialize", mrb_SDL_SDLQuitEvent_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, SDLQuitEvent_class, "disown", mrb_SDL_SDLQuitEvent_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, SDLQuitEvent_class, "belongs_to_ruby?", mrb_SDL_SDLQuitEvent_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_SDLQuitEvent_type_FIELD_READER
  mrb_define_method(mrb, SDLQuitEvent_class, "type", mrb_SDL_SDLQuitEvent_get_type, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLQuitEvent_type_FIELD_WRITER
  mrb_define_method(mrb, SDLQuitEvent_class, "type=", mrb_SDL_SDLQuitEvent_set_type, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLQuitEvent_timestamp_FIELD_READER
  mrb_define_method(mrb, SDLQuitEvent_class, "timestamp", mrb_SDL_SDLQuitEvent_get_timestamp, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLQuitEvent_timestamp_FIELD_WRITER
  mrb_define_method(mrb, SDLQuitEvent_class, "timestamp=", mrb_SDL_SDLQuitEvent_set_timestamp, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
