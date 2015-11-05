/*
 * struct SDL_WindowEvent
 * Defined in file SDL_events.h @ line 163
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_SDL.h"

#if BIND_SDLWindowEvent_TYPE

/*
 * Class Methods
 */

#if BIND_SDLWindowEvent_INITIALIZE
mrb_value
mrb_SDL_SDLWindowEvent_initialize(mrb_state* mrb, mrb_value self) {
  struct SDL_WindowEvent* native_object = (struct SDL_WindowEvent*)malloc(sizeof(struct SDL_WindowEvent));
  mruby_gift_struct SDL_WindowEvent_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_SDL_SDLWindowEvent_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLWindowEvent.disown only accepts objects of type SDL::SDLWindowEvent");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_SDL_SDLWindowEvent_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLWindowEvent.belongs_to_ruby only accepts objects of type SDL::SDLWindowEvent");
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

#if BIND_SDLWindowEvent_type_FIELD
/* get_type
 *
 * Return Type: Uint32
 */
mrb_value
mrb_SDL_SDLWindowEvent_get_type(mrb_state* mrb, mrb_value self) {
  struct SDL_WindowEvent * native_self = mruby_unbox_struct SDL_WindowEvent(self);

  Uint32 native_field = native_self->type;

  mrb_value ruby_field = TODO_mruby_box_Uint32(mrb, native_field);

  return ruby_field;
}

/* set_type
 *
 * Parameters:
 * - value: Uint32
 */
mrb_value
mrb_SDL_SDLWindowEvent_set_type(mrb_state* mrb, mrb_value self) {
  struct SDL_WindowEvent * native_self = mruby_unbox_struct SDL_WindowEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Uint32(ruby_field);

  Uint32 native_field = TODO_mruby_unbox_Uint32(ruby_field);

  native_self->type = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLWindowEvent_timestamp_FIELD
/* get_timestamp
 *
 * Return Type: Uint32
 */
mrb_value
mrb_SDL_SDLWindowEvent_get_timestamp(mrb_state* mrb, mrb_value self) {
  struct SDL_WindowEvent * native_self = mruby_unbox_struct SDL_WindowEvent(self);

  Uint32 native_field = native_self->timestamp;

  mrb_value ruby_field = TODO_mruby_box_Uint32(mrb, native_field);

  return ruby_field;
}

/* set_timestamp
 *
 * Parameters:
 * - value: Uint32
 */
mrb_value
mrb_SDL_SDLWindowEvent_set_timestamp(mrb_state* mrb, mrb_value self) {
  struct SDL_WindowEvent * native_self = mruby_unbox_struct SDL_WindowEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Uint32(ruby_field);

  Uint32 native_field = TODO_mruby_unbox_Uint32(ruby_field);

  native_self->timestamp = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLWindowEvent_windowID_FIELD
/* get_windowID
 *
 * Return Type: Uint32
 */
mrb_value
mrb_SDL_SDLWindowEvent_get_windowID(mrb_state* mrb, mrb_value self) {
  struct SDL_WindowEvent * native_self = mruby_unbox_struct SDL_WindowEvent(self);

  Uint32 native_field = native_self->windowID;

  mrb_value ruby_field = TODO_mruby_box_Uint32(mrb, native_field);

  return ruby_field;
}

/* set_windowID
 *
 * Parameters:
 * - value: Uint32
 */
mrb_value
mrb_SDL_SDLWindowEvent_set_windowID(mrb_state* mrb, mrb_value self) {
  struct SDL_WindowEvent * native_self = mruby_unbox_struct SDL_WindowEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Uint32(ruby_field);

  Uint32 native_field = TODO_mruby_unbox_Uint32(ruby_field);

  native_self->windowID = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLWindowEvent_event_FIELD
/* get_event
 *
 * Return Type: Uint8
 */
mrb_value
mrb_SDL_SDLWindowEvent_get_event(mrb_state* mrb, mrb_value self) {
  struct SDL_WindowEvent * native_self = mruby_unbox_struct SDL_WindowEvent(self);

  Uint8 native_field = native_self->event;

  mrb_value ruby_field = TODO_mruby_box_Uint8(mrb, native_field);

  return ruby_field;
}

/* set_event
 *
 * Parameters:
 * - value: Uint8
 */
mrb_value
mrb_SDL_SDLWindowEvent_set_event(mrb_state* mrb, mrb_value self) {
  struct SDL_WindowEvent * native_self = mruby_unbox_struct SDL_WindowEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Uint8(ruby_field);

  Uint8 native_field = TODO_mruby_unbox_Uint8(ruby_field);

  native_self->event = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLWindowEvent_padding1_FIELD
/* get_padding1
 *
 * Return Type: Uint8
 */
mrb_value
mrb_SDL_SDLWindowEvent_get_padding1(mrb_state* mrb, mrb_value self) {
  struct SDL_WindowEvent * native_self = mruby_unbox_struct SDL_WindowEvent(self);

  Uint8 native_field = native_self->padding1;

  mrb_value ruby_field = TODO_mruby_box_Uint8(mrb, native_field);

  return ruby_field;
}

/* set_padding1
 *
 * Parameters:
 * - value: Uint8
 */
mrb_value
mrb_SDL_SDLWindowEvent_set_padding1(mrb_state* mrb, mrb_value self) {
  struct SDL_WindowEvent * native_self = mruby_unbox_struct SDL_WindowEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Uint8(ruby_field);

  Uint8 native_field = TODO_mruby_unbox_Uint8(ruby_field);

  native_self->padding1 = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLWindowEvent_padding2_FIELD
/* get_padding2
 *
 * Return Type: Uint8
 */
mrb_value
mrb_SDL_SDLWindowEvent_get_padding2(mrb_state* mrb, mrb_value self) {
  struct SDL_WindowEvent * native_self = mruby_unbox_struct SDL_WindowEvent(self);

  Uint8 native_field = native_self->padding2;

  mrb_value ruby_field = TODO_mruby_box_Uint8(mrb, native_field);

  return ruby_field;
}

/* set_padding2
 *
 * Parameters:
 * - value: Uint8
 */
mrb_value
mrb_SDL_SDLWindowEvent_set_padding2(mrb_state* mrb, mrb_value self) {
  struct SDL_WindowEvent * native_self = mruby_unbox_struct SDL_WindowEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Uint8(ruby_field);

  Uint8 native_field = TODO_mruby_unbox_Uint8(ruby_field);

  native_self->padding2 = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLWindowEvent_padding3_FIELD
/* get_padding3
 *
 * Return Type: Uint8
 */
mrb_value
mrb_SDL_SDLWindowEvent_get_padding3(mrb_state* mrb, mrb_value self) {
  struct SDL_WindowEvent * native_self = mruby_unbox_struct SDL_WindowEvent(self);

  Uint8 native_field = native_self->padding3;

  mrb_value ruby_field = TODO_mruby_box_Uint8(mrb, native_field);

  return ruby_field;
}

/* set_padding3
 *
 * Parameters:
 * - value: Uint8
 */
mrb_value
mrb_SDL_SDLWindowEvent_set_padding3(mrb_state* mrb, mrb_value self) {
  struct SDL_WindowEvent * native_self = mruby_unbox_struct SDL_WindowEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Uint8(ruby_field);

  Uint8 native_field = TODO_mruby_unbox_Uint8(ruby_field);

  native_self->padding3 = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLWindowEvent_data1_FIELD
/* get_data1
 *
 * Return Type: Sint32
 */
mrb_value
mrb_SDL_SDLWindowEvent_get_data1(mrb_state* mrb, mrb_value self) {
  struct SDL_WindowEvent * native_self = mruby_unbox_struct SDL_WindowEvent(self);

  Sint32 native_field = native_self->data1;

  mrb_value ruby_field = TODO_mruby_box_Sint32(mrb, native_field);

  return ruby_field;
}

/* set_data1
 *
 * Parameters:
 * - value: Sint32
 */
mrb_value
mrb_SDL_SDLWindowEvent_set_data1(mrb_state* mrb, mrb_value self) {
  struct SDL_WindowEvent * native_self = mruby_unbox_struct SDL_WindowEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Sint32(ruby_field);

  Sint32 native_field = TODO_mruby_unbox_Sint32(ruby_field);

  native_self->data1 = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLWindowEvent_data2_FIELD
/* get_data2
 *
 * Return Type: Sint32
 */
mrb_value
mrb_SDL_SDLWindowEvent_get_data2(mrb_state* mrb, mrb_value self) {
  struct SDL_WindowEvent * native_self = mruby_unbox_struct SDL_WindowEvent(self);

  Sint32 native_field = native_self->data2;

  mrb_value ruby_field = TODO_mruby_box_Sint32(mrb, native_field);

  return ruby_field;
}

/* set_data2
 *
 * Parameters:
 * - value: Sint32
 */
mrb_value
mrb_SDL_SDLWindowEvent_set_data2(mrb_state* mrb, mrb_value self) {
  struct SDL_WindowEvent * native_self = mruby_unbox_struct SDL_WindowEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Sint32(ruby_field);

  Sint32 native_field = TODO_mruby_unbox_Sint32(ruby_field);

  native_self->data2 = native_field;

  return ruby_field;
}
#endif


void mrb_SDL_SDLWindowEvent_init(mrb_state* mrb) {
  RClass* SDLWindowEvent_class = mrb_define_class_under(mrb, SDL_module(mrb), "SDLWindowEvent", mrb->object_class);
  MRB_SET_INSTANCE_TT(SDLWindowEvent_class, MRB_TT_DATA);

#if BIND_SDLWindowEvent_INITIALIZE
  mrb_define_method(mrb, SDLWindowEvent_class, "initialize", mrb_SDL_SDLWindowEvent_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, SDLWindowEvent_class, "disown", mrb_SDL_SDLWindowEvent_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, SDLWindowEvent_class, "belongs_to_ruby?", mrb_SDL_SDLWindowEvent_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_SDLWindowEvent_type_FIELD
  mrb_define_method(mrb, SDLWindowEvent_class, "type", mrb_SDL_SDLWindowEvent_get_type, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, SDLWindowEvent_class, "type=", mrb_SDL_SDLWindowEvent_set_type, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLWindowEvent_timestamp_FIELD
  mrb_define_method(mrb, SDLWindowEvent_class, "timestamp", mrb_SDL_SDLWindowEvent_get_timestamp, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, SDLWindowEvent_class, "timestamp=", mrb_SDL_SDLWindowEvent_set_timestamp, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLWindowEvent_windowID_FIELD
  mrb_define_method(mrb, SDLWindowEvent_class, "windowID", mrb_SDL_SDLWindowEvent_get_windowID, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, SDLWindowEvent_class, "windowID=", mrb_SDL_SDLWindowEvent_set_windowID, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLWindowEvent_event_FIELD
  mrb_define_method(mrb, SDLWindowEvent_class, "event", mrb_SDL_SDLWindowEvent_get_event, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, SDLWindowEvent_class, "event=", mrb_SDL_SDLWindowEvent_set_event, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLWindowEvent_padding1_FIELD
  mrb_define_method(mrb, SDLWindowEvent_class, "padding1", mrb_SDL_SDLWindowEvent_get_padding1, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, SDLWindowEvent_class, "padding1=", mrb_SDL_SDLWindowEvent_set_padding1, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLWindowEvent_padding2_FIELD
  mrb_define_method(mrb, SDLWindowEvent_class, "padding2", mrb_SDL_SDLWindowEvent_get_padding2, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, SDLWindowEvent_class, "padding2=", mrb_SDL_SDLWindowEvent_set_padding2, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLWindowEvent_padding3_FIELD
  mrb_define_method(mrb, SDLWindowEvent_class, "padding3", mrb_SDL_SDLWindowEvent_get_padding3, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, SDLWindowEvent_class, "padding3=", mrb_SDL_SDLWindowEvent_set_padding3, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLWindowEvent_data1_FIELD
  mrb_define_method(mrb, SDLWindowEvent_class, "data1", mrb_SDL_SDLWindowEvent_get_data1, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, SDLWindowEvent_class, "data1=", mrb_SDL_SDLWindowEvent_set_data1, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLWindowEvent_data2_FIELD
  mrb_define_method(mrb, SDLWindowEvent_class, "data2", mrb_SDL_SDLWindowEvent_get_data2, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, SDLWindowEvent_class, "data2=", mrb_SDL_SDLWindowEvent_set_data2, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
