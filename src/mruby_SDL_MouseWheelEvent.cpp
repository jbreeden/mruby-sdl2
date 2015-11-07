/*
 * struct SDL_MouseWheelEvent
 * Defined in file SDL_events.h @ line 254
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_SDL.h"

#if BIND_SDLMouseWheelEvent_TYPE

/*
 * Class Methods
 */

#if BIND_SDLMouseWheelEvent_INITIALIZE
mrb_value
mrb_SDL_SDLMouseWheelEvent_initialize(mrb_state* mrb, mrb_value self) {
  struct SDL_MouseWheelEvent* native_object = (struct SDL_MouseWheelEvent*)malloc(sizeof(struct SDL_MouseWheelEvent));
  mruby_gift_struct SDL_MouseWheelEvent_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_SDL_SDLMouseWheelEvent_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLMouseWheelEvent.disown only accepts objects of type SDL::SDLMouseWheelEvent");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_SDL_SDLMouseWheelEvent_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLMouseWheelEvent.belongs_to_ruby only accepts objects of type SDL::SDLMouseWheelEvent");
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

#if BIND_SDLMouseWheelEvent_type_FIELD_READER
/* get_type
 *
 * Return Type: Uint32
 */
mrb_value
mrb_SDL_SDLMouseWheelEvent_get_type(mrb_state* mrb, mrb_value self) {
  struct SDL_MouseWheelEvent * native_self = mruby_unbox_struct SDL_MouseWheelEvent(self);

  Uint32 native_field = native_self->type;

  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLMouseWheelEvent_type_FIELD_WRITER
/* set_type
 *
 * Parameters:
 * - value: Uint32
 */
mrb_value
mrb_SDL_SDLMouseWheelEvent_set_type(mrb_state* mrb, mrb_value self) {
  struct SDL_MouseWheelEvent * native_self = mruby_unbox_struct SDL_MouseWheelEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) { mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected"); return mrb_nil_value(); }

  Uint32 native_field = mrb_fixnum(ruby_field);

  native_self->type = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLMouseWheelEvent_timestamp_FIELD_READER
/* get_timestamp
 *
 * Return Type: Uint32
 */
mrb_value
mrb_SDL_SDLMouseWheelEvent_get_timestamp(mrb_state* mrb, mrb_value self) {
  struct SDL_MouseWheelEvent * native_self = mruby_unbox_struct SDL_MouseWheelEvent(self);

  Uint32 native_field = native_self->timestamp;

  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLMouseWheelEvent_timestamp_FIELD_WRITER
/* set_timestamp
 *
 * Parameters:
 * - value: Uint32
 */
mrb_value
mrb_SDL_SDLMouseWheelEvent_set_timestamp(mrb_state* mrb, mrb_value self) {
  struct SDL_MouseWheelEvent * native_self = mruby_unbox_struct SDL_MouseWheelEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) { mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected"); return mrb_nil_value(); }

  Uint32 native_field = mrb_fixnum(ruby_field);

  native_self->timestamp = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLMouseWheelEvent_windowID_FIELD_READER
/* get_windowID
 *
 * Return Type: Uint32
 */
mrb_value
mrb_SDL_SDLMouseWheelEvent_get_windowID(mrb_state* mrb, mrb_value self) {
  struct SDL_MouseWheelEvent * native_self = mruby_unbox_struct SDL_MouseWheelEvent(self);

  Uint32 native_field = native_self->windowID;

  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLMouseWheelEvent_windowID_FIELD_WRITER
/* set_windowID
 *
 * Parameters:
 * - value: Uint32
 */
mrb_value
mrb_SDL_SDLMouseWheelEvent_set_windowID(mrb_state* mrb, mrb_value self) {
  struct SDL_MouseWheelEvent * native_self = mruby_unbox_struct SDL_MouseWheelEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) { mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected"); return mrb_nil_value(); }

  Uint32 native_field = mrb_fixnum(ruby_field);

  native_self->windowID = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLMouseWheelEvent_which_FIELD_READER
/* get_which
 *
 * Return Type: Uint32
 */
mrb_value
mrb_SDL_SDLMouseWheelEvent_get_which(mrb_state* mrb, mrb_value self) {
  struct SDL_MouseWheelEvent * native_self = mruby_unbox_struct SDL_MouseWheelEvent(self);

  Uint32 native_field = native_self->which;

  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLMouseWheelEvent_which_FIELD_WRITER
/* set_which
 *
 * Parameters:
 * - value: Uint32
 */
mrb_value
mrb_SDL_SDLMouseWheelEvent_set_which(mrb_state* mrb, mrb_value self) {
  struct SDL_MouseWheelEvent * native_self = mruby_unbox_struct SDL_MouseWheelEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) { mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected"); return mrb_nil_value(); }

  Uint32 native_field = mrb_fixnum(ruby_field);

  native_self->which = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLMouseWheelEvent_x_FIELD_READER
/* get_x
 *
 * Return Type: Sint32
 */
mrb_value
mrb_SDL_SDLMouseWheelEvent_get_x(mrb_state* mrb, mrb_value self) {
  struct SDL_MouseWheelEvent * native_self = mruby_unbox_struct SDL_MouseWheelEvent(self);

  Sint32 native_field = native_self->x;

  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLMouseWheelEvent_x_FIELD_WRITER
/* set_x
 *
 * Parameters:
 * - value: Sint32
 */
mrb_value
mrb_SDL_SDLMouseWheelEvent_set_x(mrb_state* mrb, mrb_value self) {
  struct SDL_MouseWheelEvent * native_self = mruby_unbox_struct SDL_MouseWheelEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) { mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected"); return mrb_nil_value(); }

  Sint32 native_field = mrb_fixnum(ruby_field);

  native_self->x = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLMouseWheelEvent_y_FIELD_READER
/* get_y
 *
 * Return Type: Sint32
 */
mrb_value
mrb_SDL_SDLMouseWheelEvent_get_y(mrb_state* mrb, mrb_value self) {
  struct SDL_MouseWheelEvent * native_self = mruby_unbox_struct SDL_MouseWheelEvent(self);

  Sint32 native_field = native_self->y;

  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLMouseWheelEvent_y_FIELD_WRITER
/* set_y
 *
 * Parameters:
 * - value: Sint32
 */
mrb_value
mrb_SDL_SDLMouseWheelEvent_set_y(mrb_state* mrb, mrb_value self) {
  struct SDL_MouseWheelEvent * native_self = mruby_unbox_struct SDL_MouseWheelEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) { mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected"); return mrb_nil_value(); }

  Sint32 native_field = mrb_fixnum(ruby_field);

  native_self->y = native_field;

  return ruby_field;
}
#endif


void mrb_SDL_SDLMouseWheelEvent_init(mrb_state* mrb) {
  RClass* SDLMouseWheelEvent_class = mrb_define_class_under(mrb, SDL_module(mrb), "MouseWheelEvent", mrb->object_class);
  MRB_SET_INSTANCE_TT(SDLMouseWheelEvent_class, MRB_TT_DATA);

#if BIND_SDLMouseWheelEvent_INITIALIZE
  mrb_define_method(mrb, SDLMouseWheelEvent_class, "initialize", mrb_SDL_SDLMouseWheelEvent_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, SDLMouseWheelEvent_class, "disown", mrb_SDL_SDLMouseWheelEvent_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, SDLMouseWheelEvent_class, "belongs_to_ruby?", mrb_SDL_SDLMouseWheelEvent_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_SDLMouseWheelEvent_type_FIELD_READER
  mrb_define_method(mrb, SDLMouseWheelEvent_class, "type", mrb_SDL_SDLMouseWheelEvent_get_type, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLMouseWheelEvent_type_FIELD_WRITER
  mrb_define_method(mrb, SDLMouseWheelEvent_class, "type=", mrb_SDL_SDLMouseWheelEvent_set_type, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLMouseWheelEvent_timestamp_FIELD_READER
  mrb_define_method(mrb, SDLMouseWheelEvent_class, "timestamp", mrb_SDL_SDLMouseWheelEvent_get_timestamp, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLMouseWheelEvent_timestamp_FIELD_WRITER
  mrb_define_method(mrb, SDLMouseWheelEvent_class, "timestamp=", mrb_SDL_SDLMouseWheelEvent_set_timestamp, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLMouseWheelEvent_windowID_FIELD_READER
  mrb_define_method(mrb, SDLMouseWheelEvent_class, "windowID", mrb_SDL_SDLMouseWheelEvent_get_windowID, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLMouseWheelEvent_windowID_FIELD_WRITER
  mrb_define_method(mrb, SDLMouseWheelEvent_class, "windowID=", mrb_SDL_SDLMouseWheelEvent_set_windowID, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLMouseWheelEvent_which_FIELD_READER
  mrb_define_method(mrb, SDLMouseWheelEvent_class, "which", mrb_SDL_SDLMouseWheelEvent_get_which, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLMouseWheelEvent_which_FIELD_WRITER
  mrb_define_method(mrb, SDLMouseWheelEvent_class, "which=", mrb_SDL_SDLMouseWheelEvent_set_which, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLMouseWheelEvent_x_FIELD_READER
  mrb_define_method(mrb, SDLMouseWheelEvent_class, "x", mrb_SDL_SDLMouseWheelEvent_get_x, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLMouseWheelEvent_x_FIELD_WRITER
  mrb_define_method(mrb, SDLMouseWheelEvent_class, "x=", mrb_SDL_SDLMouseWheelEvent_set_x, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLMouseWheelEvent_y_FIELD_READER
  mrb_define_method(mrb, SDLMouseWheelEvent_class, "y", mrb_SDL_SDLMouseWheelEvent_get_y, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLMouseWheelEvent_y_FIELD_WRITER
  mrb_define_method(mrb, SDLMouseWheelEvent_class, "y=", mrb_SDL_SDLMouseWheelEvent_set_y, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
