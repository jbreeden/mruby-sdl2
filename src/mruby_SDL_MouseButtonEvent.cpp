/*
 * struct SDL_MouseButtonEvent
 * Defined in file SDL_events.h @ line 237
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_SDL.h"

#if BIND_SDLMouseButtonEvent_TYPE

/*
 * Class Methods
 */

#if BIND_SDLMouseButtonEvent_INITIALIZE
mrb_value
mrb_SDL_SDLMouseButtonEvent_initialize(mrb_state* mrb, mrb_value self) {
  struct SDL_MouseButtonEvent* native_object = (struct SDL_MouseButtonEvent*)malloc(sizeof(struct SDL_MouseButtonEvent));
  mruby_gift_struct SDL_MouseButtonEvent_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_SDL_SDLMouseButtonEvent_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLMouseButtonEvent.disown only accepts objects of type SDL::SDLMouseButtonEvent");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_SDL_SDLMouseButtonEvent_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLMouseButtonEvent.belongs_to_ruby only accepts objects of type SDL::SDLMouseButtonEvent");
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

#if BIND_SDLMouseButtonEvent_type_FIELD
/* get_type
 *
 * Return Type: Uint32
 */
mrb_value
mrb_SDL_SDLMouseButtonEvent_get_type(mrb_state* mrb, mrb_value self) {
  struct SDL_MouseButtonEvent * native_self = mruby_unbox_struct SDL_MouseButtonEvent(self);

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
mrb_SDL_SDLMouseButtonEvent_set_type(mrb_state* mrb, mrb_value self) {
  struct SDL_MouseButtonEvent * native_self = mruby_unbox_struct SDL_MouseButtonEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Uint32(ruby_field);

  Uint32 native_field = TODO_mruby_unbox_Uint32(ruby_field);

  native_self->type = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLMouseButtonEvent_timestamp_FIELD
/* get_timestamp
 *
 * Return Type: Uint32
 */
mrb_value
mrb_SDL_SDLMouseButtonEvent_get_timestamp(mrb_state* mrb, mrb_value self) {
  struct SDL_MouseButtonEvent * native_self = mruby_unbox_struct SDL_MouseButtonEvent(self);

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
mrb_SDL_SDLMouseButtonEvent_set_timestamp(mrb_state* mrb, mrb_value self) {
  struct SDL_MouseButtonEvent * native_self = mruby_unbox_struct SDL_MouseButtonEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Uint32(ruby_field);

  Uint32 native_field = TODO_mruby_unbox_Uint32(ruby_field);

  native_self->timestamp = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLMouseButtonEvent_windowID_FIELD
/* get_windowID
 *
 * Return Type: Uint32
 */
mrb_value
mrb_SDL_SDLMouseButtonEvent_get_windowID(mrb_state* mrb, mrb_value self) {
  struct SDL_MouseButtonEvent * native_self = mruby_unbox_struct SDL_MouseButtonEvent(self);

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
mrb_SDL_SDLMouseButtonEvent_set_windowID(mrb_state* mrb, mrb_value self) {
  struct SDL_MouseButtonEvent * native_self = mruby_unbox_struct SDL_MouseButtonEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Uint32(ruby_field);

  Uint32 native_field = TODO_mruby_unbox_Uint32(ruby_field);

  native_self->windowID = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLMouseButtonEvent_which_FIELD
/* get_which
 *
 * Return Type: Uint32
 */
mrb_value
mrb_SDL_SDLMouseButtonEvent_get_which(mrb_state* mrb, mrb_value self) {
  struct SDL_MouseButtonEvent * native_self = mruby_unbox_struct SDL_MouseButtonEvent(self);

  Uint32 native_field = native_self->which;

  mrb_value ruby_field = TODO_mruby_box_Uint32(mrb, native_field);

  return ruby_field;
}

/* set_which
 *
 * Parameters:
 * - value: Uint32
 */
mrb_value
mrb_SDL_SDLMouseButtonEvent_set_which(mrb_state* mrb, mrb_value self) {
  struct SDL_MouseButtonEvent * native_self = mruby_unbox_struct SDL_MouseButtonEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Uint32(ruby_field);

  Uint32 native_field = TODO_mruby_unbox_Uint32(ruby_field);

  native_self->which = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLMouseButtonEvent_button_FIELD
/* get_button
 *
 * Return Type: Uint8
 */
mrb_value
mrb_SDL_SDLMouseButtonEvent_get_button(mrb_state* mrb, mrb_value self) {
  struct SDL_MouseButtonEvent * native_self = mruby_unbox_struct SDL_MouseButtonEvent(self);

  Uint8 native_field = native_self->button;

  mrb_value ruby_field = TODO_mruby_box_Uint8(mrb, native_field);

  return ruby_field;
}

/* set_button
 *
 * Parameters:
 * - value: Uint8
 */
mrb_value
mrb_SDL_SDLMouseButtonEvent_set_button(mrb_state* mrb, mrb_value self) {
  struct SDL_MouseButtonEvent * native_self = mruby_unbox_struct SDL_MouseButtonEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Uint8(ruby_field);

  Uint8 native_field = TODO_mruby_unbox_Uint8(ruby_field);

  native_self->button = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLMouseButtonEvent_state_FIELD
/* get_state
 *
 * Return Type: Uint8
 */
mrb_value
mrb_SDL_SDLMouseButtonEvent_get_state(mrb_state* mrb, mrb_value self) {
  struct SDL_MouseButtonEvent * native_self = mruby_unbox_struct SDL_MouseButtonEvent(self);

  Uint8 native_field = native_self->state;

  mrb_value ruby_field = TODO_mruby_box_Uint8(mrb, native_field);

  return ruby_field;
}

/* set_state
 *
 * Parameters:
 * - value: Uint8
 */
mrb_value
mrb_SDL_SDLMouseButtonEvent_set_state(mrb_state* mrb, mrb_value self) {
  struct SDL_MouseButtonEvent * native_self = mruby_unbox_struct SDL_MouseButtonEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Uint8(ruby_field);

  Uint8 native_field = TODO_mruby_unbox_Uint8(ruby_field);

  native_self->state = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLMouseButtonEvent_clicks_FIELD
/* get_clicks
 *
 * Return Type: Uint8
 */
mrb_value
mrb_SDL_SDLMouseButtonEvent_get_clicks(mrb_state* mrb, mrb_value self) {
  struct SDL_MouseButtonEvent * native_self = mruby_unbox_struct SDL_MouseButtonEvent(self);

  Uint8 native_field = native_self->clicks;

  mrb_value ruby_field = TODO_mruby_box_Uint8(mrb, native_field);

  return ruby_field;
}

/* set_clicks
 *
 * Parameters:
 * - value: Uint8
 */
mrb_value
mrb_SDL_SDLMouseButtonEvent_set_clicks(mrb_state* mrb, mrb_value self) {
  struct SDL_MouseButtonEvent * native_self = mruby_unbox_struct SDL_MouseButtonEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Uint8(ruby_field);

  Uint8 native_field = TODO_mruby_unbox_Uint8(ruby_field);

  native_self->clicks = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLMouseButtonEvent_padding1_FIELD
/* get_padding1
 *
 * Return Type: Uint8
 */
mrb_value
mrb_SDL_SDLMouseButtonEvent_get_padding1(mrb_state* mrb, mrb_value self) {
  struct SDL_MouseButtonEvent * native_self = mruby_unbox_struct SDL_MouseButtonEvent(self);

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
mrb_SDL_SDLMouseButtonEvent_set_padding1(mrb_state* mrb, mrb_value self) {
  struct SDL_MouseButtonEvent * native_self = mruby_unbox_struct SDL_MouseButtonEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Uint8(ruby_field);

  Uint8 native_field = TODO_mruby_unbox_Uint8(ruby_field);

  native_self->padding1 = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLMouseButtonEvent_x_FIELD
/* get_x
 *
 * Return Type: Sint32
 */
mrb_value
mrb_SDL_SDLMouseButtonEvent_get_x(mrb_state* mrb, mrb_value self) {
  struct SDL_MouseButtonEvent * native_self = mruby_unbox_struct SDL_MouseButtonEvent(self);

  Sint32 native_field = native_self->x;

  mrb_value ruby_field = TODO_mruby_box_Sint32(mrb, native_field);

  return ruby_field;
}

/* set_x
 *
 * Parameters:
 * - value: Sint32
 */
mrb_value
mrb_SDL_SDLMouseButtonEvent_set_x(mrb_state* mrb, mrb_value self) {
  struct SDL_MouseButtonEvent * native_self = mruby_unbox_struct SDL_MouseButtonEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Sint32(ruby_field);

  Sint32 native_field = TODO_mruby_unbox_Sint32(ruby_field);

  native_self->x = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLMouseButtonEvent_y_FIELD
/* get_y
 *
 * Return Type: Sint32
 */
mrb_value
mrb_SDL_SDLMouseButtonEvent_get_y(mrb_state* mrb, mrb_value self) {
  struct SDL_MouseButtonEvent * native_self = mruby_unbox_struct SDL_MouseButtonEvent(self);

  Sint32 native_field = native_self->y;

  mrb_value ruby_field = TODO_mruby_box_Sint32(mrb, native_field);

  return ruby_field;
}

/* set_y
 *
 * Parameters:
 * - value: Sint32
 */
mrb_value
mrb_SDL_SDLMouseButtonEvent_set_y(mrb_state* mrb, mrb_value self) {
  struct SDL_MouseButtonEvent * native_self = mruby_unbox_struct SDL_MouseButtonEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Sint32(ruby_field);

  Sint32 native_field = TODO_mruby_unbox_Sint32(ruby_field);

  native_self->y = native_field;

  return ruby_field;
}
#endif


void mrb_SDL_SDLMouseButtonEvent_init(mrb_state* mrb) {
  RClass* SDLMouseButtonEvent_class = mrb_define_class_under(mrb, SDL_module(mrb), "SDLMouseButtonEvent", mrb->object_class);
  MRB_SET_INSTANCE_TT(SDLMouseButtonEvent_class, MRB_TT_DATA);

#if BIND_SDLMouseButtonEvent_INITIALIZE
  mrb_define_method(mrb, SDLMouseButtonEvent_class, "initialize", mrb_SDL_SDLMouseButtonEvent_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, SDLMouseButtonEvent_class, "disown", mrb_SDL_SDLMouseButtonEvent_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, SDLMouseButtonEvent_class, "belongs_to_ruby?", mrb_SDL_SDLMouseButtonEvent_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_SDLMouseButtonEvent_type_FIELD
  mrb_define_method(mrb, SDLMouseButtonEvent_class, "type", mrb_SDL_SDLMouseButtonEvent_get_type, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, SDLMouseButtonEvent_class, "type=", mrb_SDL_SDLMouseButtonEvent_set_type, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLMouseButtonEvent_timestamp_FIELD
  mrb_define_method(mrb, SDLMouseButtonEvent_class, "timestamp", mrb_SDL_SDLMouseButtonEvent_get_timestamp, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, SDLMouseButtonEvent_class, "timestamp=", mrb_SDL_SDLMouseButtonEvent_set_timestamp, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLMouseButtonEvent_windowID_FIELD
  mrb_define_method(mrb, SDLMouseButtonEvent_class, "windowID", mrb_SDL_SDLMouseButtonEvent_get_windowID, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, SDLMouseButtonEvent_class, "windowID=", mrb_SDL_SDLMouseButtonEvent_set_windowID, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLMouseButtonEvent_which_FIELD
  mrb_define_method(mrb, SDLMouseButtonEvent_class, "which", mrb_SDL_SDLMouseButtonEvent_get_which, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, SDLMouseButtonEvent_class, "which=", mrb_SDL_SDLMouseButtonEvent_set_which, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLMouseButtonEvent_button_FIELD
  mrb_define_method(mrb, SDLMouseButtonEvent_class, "button", mrb_SDL_SDLMouseButtonEvent_get_button, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, SDLMouseButtonEvent_class, "button=", mrb_SDL_SDLMouseButtonEvent_set_button, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLMouseButtonEvent_state_FIELD
  mrb_define_method(mrb, SDLMouseButtonEvent_class, "state", mrb_SDL_SDLMouseButtonEvent_get_state, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, SDLMouseButtonEvent_class, "state=", mrb_SDL_SDLMouseButtonEvent_set_state, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLMouseButtonEvent_clicks_FIELD
  mrb_define_method(mrb, SDLMouseButtonEvent_class, "clicks", mrb_SDL_SDLMouseButtonEvent_get_clicks, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, SDLMouseButtonEvent_class, "clicks=", mrb_SDL_SDLMouseButtonEvent_set_clicks, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLMouseButtonEvent_padding1_FIELD
  mrb_define_method(mrb, SDLMouseButtonEvent_class, "padding1", mrb_SDL_SDLMouseButtonEvent_get_padding1, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, SDLMouseButtonEvent_class, "padding1=", mrb_SDL_SDLMouseButtonEvent_set_padding1, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLMouseButtonEvent_x_FIELD
  mrb_define_method(mrb, SDLMouseButtonEvent_class, "x", mrb_SDL_SDLMouseButtonEvent_get_x, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, SDLMouseButtonEvent_class, "x=", mrb_SDL_SDLMouseButtonEvent_set_x, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLMouseButtonEvent_y_FIELD
  mrb_define_method(mrb, SDLMouseButtonEvent_class, "y", mrb_SDL_SDLMouseButtonEvent_get_y, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, SDLMouseButtonEvent_class, "y=", mrb_SDL_SDLMouseButtonEvent_set_y, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
