/*
 * struct SDL_UserEvent
 * Defined in file SDL_events.h @ line 468
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_SDL.h"

#if BIND_SDLUserEvent_TYPE

/*
 * Class Methods
 */

#if BIND_SDLUserEvent_INITIALIZE
mrb_value
mrb_SDL_SDLUserEvent_initialize(mrb_state* mrb, mrb_value self) {
  struct SDL_UserEvent* native_object = (struct SDL_UserEvent*)malloc(sizeof(struct SDL_UserEvent));
  mruby_gift_struct SDL_UserEvent_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_SDL_SDLUserEvent_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLUserEvent.disown only accepts objects of type SDL::SDLUserEvent");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_SDL_SDLUserEvent_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLUserEvent.belongs_to_ruby only accepts objects of type SDL::SDLUserEvent");
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

#if BIND_SDLUserEvent_type_FIELD_READER
/* get_type
 *
 * Return Type: Uint32
 */
mrb_value
mrb_SDL_SDLUserEvent_get_type(mrb_state* mrb, mrb_value self) {
  struct SDL_UserEvent * native_self = mruby_unbox_struct SDL_UserEvent(self);

  Uint32 native_field = native_self->type;

  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLUserEvent_type_FIELD_WRITER
/* set_type
 *
 * Parameters:
 * - value: Uint32
 */
mrb_value
mrb_SDL_SDLUserEvent_set_type(mrb_state* mrb, mrb_value self) {
  struct SDL_UserEvent * native_self = mruby_unbox_struct SDL_UserEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) { mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected"); return mrb_nil_value(); }

  Uint32 native_field = mrb_fixnum(ruby_field);

  native_self->type = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLUserEvent_timestamp_FIELD_READER
/* get_timestamp
 *
 * Return Type: Uint32
 */
mrb_value
mrb_SDL_SDLUserEvent_get_timestamp(mrb_state* mrb, mrb_value self) {
  struct SDL_UserEvent * native_self = mruby_unbox_struct SDL_UserEvent(self);

  Uint32 native_field = native_self->timestamp;

  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLUserEvent_timestamp_FIELD_WRITER
/* set_timestamp
 *
 * Parameters:
 * - value: Uint32
 */
mrb_value
mrb_SDL_SDLUserEvent_set_timestamp(mrb_state* mrb, mrb_value self) {
  struct SDL_UserEvent * native_self = mruby_unbox_struct SDL_UserEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) { mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected"); return mrb_nil_value(); }

  Uint32 native_field = mrb_fixnum(ruby_field);

  native_self->timestamp = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLUserEvent_windowID_FIELD_READER
/* get_windowID
 *
 * Return Type: Uint32
 */
mrb_value
mrb_SDL_SDLUserEvent_get_windowID(mrb_state* mrb, mrb_value self) {
  struct SDL_UserEvent * native_self = mruby_unbox_struct SDL_UserEvent(self);

  Uint32 native_field = native_self->windowID;

  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLUserEvent_windowID_FIELD_WRITER
/* set_windowID
 *
 * Parameters:
 * - value: Uint32
 */
mrb_value
mrb_SDL_SDLUserEvent_set_windowID(mrb_state* mrb, mrb_value self) {
  struct SDL_UserEvent * native_self = mruby_unbox_struct SDL_UserEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) { mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected"); return mrb_nil_value(); }

  Uint32 native_field = mrb_fixnum(ruby_field);

  native_self->windowID = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLUserEvent_code_FIELD_READER
/* get_code
 *
 * Return Type: Sint32
 */
mrb_value
mrb_SDL_SDLUserEvent_get_code(mrb_state* mrb, mrb_value self) {
  struct SDL_UserEvent * native_self = mruby_unbox_struct SDL_UserEvent(self);

  Sint32 native_field = native_self->code;

  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLUserEvent_code_FIELD_WRITER
/* set_code
 *
 * Parameters:
 * - value: Sint32
 */
mrb_value
mrb_SDL_SDLUserEvent_set_code(mrb_state* mrb, mrb_value self) {
  struct SDL_UserEvent * native_self = mruby_unbox_struct SDL_UserEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) { mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected"); return mrb_nil_value(); }

  Sint32 native_field = mrb_fixnum(ruby_field);

  native_self->code = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLUserEvent_data1_FIELD_READER
/* get_data1
 *
 * Return Type: void *
 */
mrb_value
mrb_SDL_SDLUserEvent_get_data1(mrb_state* mrb, mrb_value self) {
  struct SDL_UserEvent * native_self = mruby_unbox_struct SDL_UserEvent(self);

  void * native_field = native_self->data1;

  mrb_value ruby_field = TODO_mruby_box_void_PTR(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLUserEvent_data1_FIELD_WRITER
/* set_data1
 *
 * Parameters:
 * - value: void *
 */
mrb_value
mrb_SDL_SDLUserEvent_set_data1(mrb_state* mrb, mrb_value self) {
  struct SDL_UserEvent * native_self = mruby_unbox_struct SDL_UserEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_void_PTR(ruby_field);

  void * native_field = TODO_mruby_unbox_void_PTR(ruby_field);

  native_self->data1 = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLUserEvent_data2_FIELD_READER
/* get_data2
 *
 * Return Type: void *
 */
mrb_value
mrb_SDL_SDLUserEvent_get_data2(mrb_state* mrb, mrb_value self) {
  struct SDL_UserEvent * native_self = mruby_unbox_struct SDL_UserEvent(self);

  void * native_field = native_self->data2;

  mrb_value ruby_field = TODO_mruby_box_void_PTR(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLUserEvent_data2_FIELD_WRITER
/* set_data2
 *
 * Parameters:
 * - value: void *
 */
mrb_value
mrb_SDL_SDLUserEvent_set_data2(mrb_state* mrb, mrb_value self) {
  struct SDL_UserEvent * native_self = mruby_unbox_struct SDL_UserEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_void_PTR(ruby_field);

  void * native_field = TODO_mruby_unbox_void_PTR(ruby_field);

  native_self->data2 = native_field;

  return ruby_field;
}
#endif


void mrb_SDL_SDLUserEvent_init(mrb_state* mrb) {
  RClass* SDLUserEvent_class = mrb_define_class_under(mrb, SDL_module(mrb), "UserEvent", mrb->object_class);
  MRB_SET_INSTANCE_TT(SDLUserEvent_class, MRB_TT_DATA);

#if BIND_SDLUserEvent_INITIALIZE
  mrb_define_method(mrb, SDLUserEvent_class, "initialize", mrb_SDL_SDLUserEvent_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, SDLUserEvent_class, "disown", mrb_SDL_SDLUserEvent_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, SDLUserEvent_class, "belongs_to_ruby?", mrb_SDL_SDLUserEvent_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_SDLUserEvent_type_FIELD_READER
  mrb_define_method(mrb, SDLUserEvent_class, "type", mrb_SDL_SDLUserEvent_get_type, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLUserEvent_type_FIELD_WRITER
  mrb_define_method(mrb, SDLUserEvent_class, "type=", mrb_SDL_SDLUserEvent_set_type, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLUserEvent_timestamp_FIELD_READER
  mrb_define_method(mrb, SDLUserEvent_class, "timestamp", mrb_SDL_SDLUserEvent_get_timestamp, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLUserEvent_timestamp_FIELD_WRITER
  mrb_define_method(mrb, SDLUserEvent_class, "timestamp=", mrb_SDL_SDLUserEvent_set_timestamp, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLUserEvent_windowID_FIELD_READER
  mrb_define_method(mrb, SDLUserEvent_class, "windowID", mrb_SDL_SDLUserEvent_get_windowID, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLUserEvent_windowID_FIELD_WRITER
  mrb_define_method(mrb, SDLUserEvent_class, "windowID=", mrb_SDL_SDLUserEvent_set_windowID, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLUserEvent_code_FIELD_READER
  mrb_define_method(mrb, SDLUserEvent_class, "code", mrb_SDL_SDLUserEvent_get_code, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLUserEvent_code_FIELD_WRITER
  mrb_define_method(mrb, SDLUserEvent_class, "code=", mrb_SDL_SDLUserEvent_set_code, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLUserEvent_data1_FIELD_READER
  mrb_define_method(mrb, SDLUserEvent_class, "data1", mrb_SDL_SDLUserEvent_get_data1, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLUserEvent_data1_FIELD_WRITER
  mrb_define_method(mrb, SDLUserEvent_class, "data1=", mrb_SDL_SDLUserEvent_set_data1, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLUserEvent_data2_FIELD_READER
  mrb_define_method(mrb, SDLUserEvent_class, "data2", mrb_SDL_SDLUserEvent_get_data2, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLUserEvent_data2_FIELD_WRITER
  mrb_define_method(mrb, SDLUserEvent_class, "data2=", mrb_SDL_SDLUserEvent_set_data2, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
