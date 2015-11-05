/*
 * struct SDL_MouseMotionEvent
 * Defined in file SDL_events.h @ line 221
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_SDL.h"

#if BIND_SDLMouseMotionEvent_TYPE

/*
 * Class Methods
 */

#if BIND_SDLMouseMotionEvent_INITIALIZE
mrb_value
mrb_SDL_SDLMouseMotionEvent_initialize(mrb_state* mrb, mrb_value self) {
  struct SDL_MouseMotionEvent* native_object = (struct SDL_MouseMotionEvent*)malloc(sizeof(struct SDL_MouseMotionEvent));
  mruby_gift_struct SDL_MouseMotionEvent_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_SDL_SDLMouseMotionEvent_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLMouseMotionEvent.disown only accepts objects of type SDL::SDLMouseMotionEvent");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_SDL_SDLMouseMotionEvent_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLMouseMotionEvent.belongs_to_ruby only accepts objects of type SDL::SDLMouseMotionEvent");
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

#if BIND_SDLMouseMotionEvent_type_FIELD
/* get_type
 *
 * Return Type: Uint32
 */
mrb_value
mrb_SDL_SDLMouseMotionEvent_get_type(mrb_state* mrb, mrb_value self) {
  struct SDL_MouseMotionEvent * native_self = mruby_unbox_struct SDL_MouseMotionEvent(self);

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
mrb_SDL_SDLMouseMotionEvent_set_type(mrb_state* mrb, mrb_value self) {
  struct SDL_MouseMotionEvent * native_self = mruby_unbox_struct SDL_MouseMotionEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Uint32(ruby_field);

  Uint32 native_field = TODO_mruby_unbox_Uint32(ruby_field);

  native_self->type = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLMouseMotionEvent_timestamp_FIELD
/* get_timestamp
 *
 * Return Type: Uint32
 */
mrb_value
mrb_SDL_SDLMouseMotionEvent_get_timestamp(mrb_state* mrb, mrb_value self) {
  struct SDL_MouseMotionEvent * native_self = mruby_unbox_struct SDL_MouseMotionEvent(self);

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
mrb_SDL_SDLMouseMotionEvent_set_timestamp(mrb_state* mrb, mrb_value self) {
  struct SDL_MouseMotionEvent * native_self = mruby_unbox_struct SDL_MouseMotionEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Uint32(ruby_field);

  Uint32 native_field = TODO_mruby_unbox_Uint32(ruby_field);

  native_self->timestamp = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLMouseMotionEvent_windowID_FIELD
/* get_windowID
 *
 * Return Type: Uint32
 */
mrb_value
mrb_SDL_SDLMouseMotionEvent_get_windowID(mrb_state* mrb, mrb_value self) {
  struct SDL_MouseMotionEvent * native_self = mruby_unbox_struct SDL_MouseMotionEvent(self);

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
mrb_SDL_SDLMouseMotionEvent_set_windowID(mrb_state* mrb, mrb_value self) {
  struct SDL_MouseMotionEvent * native_self = mruby_unbox_struct SDL_MouseMotionEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Uint32(ruby_field);

  Uint32 native_field = TODO_mruby_unbox_Uint32(ruby_field);

  native_self->windowID = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLMouseMotionEvent_which_FIELD
/* get_which
 *
 * Return Type: Uint32
 */
mrb_value
mrb_SDL_SDLMouseMotionEvent_get_which(mrb_state* mrb, mrb_value self) {
  struct SDL_MouseMotionEvent * native_self = mruby_unbox_struct SDL_MouseMotionEvent(self);

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
mrb_SDL_SDLMouseMotionEvent_set_which(mrb_state* mrb, mrb_value self) {
  struct SDL_MouseMotionEvent * native_self = mruby_unbox_struct SDL_MouseMotionEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Uint32(ruby_field);

  Uint32 native_field = TODO_mruby_unbox_Uint32(ruby_field);

  native_self->which = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLMouseMotionEvent_state_FIELD
/* get_state
 *
 * Return Type: Uint32
 */
mrb_value
mrb_SDL_SDLMouseMotionEvent_get_state(mrb_state* mrb, mrb_value self) {
  struct SDL_MouseMotionEvent * native_self = mruby_unbox_struct SDL_MouseMotionEvent(self);

  Uint32 native_field = native_self->state;

  mrb_value ruby_field = TODO_mruby_box_Uint32(mrb, native_field);

  return ruby_field;
}

/* set_state
 *
 * Parameters:
 * - value: Uint32
 */
mrb_value
mrb_SDL_SDLMouseMotionEvent_set_state(mrb_state* mrb, mrb_value self) {
  struct SDL_MouseMotionEvent * native_self = mruby_unbox_struct SDL_MouseMotionEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Uint32(ruby_field);

  Uint32 native_field = TODO_mruby_unbox_Uint32(ruby_field);

  native_self->state = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLMouseMotionEvent_x_FIELD
/* get_x
 *
 * Return Type: Sint32
 */
mrb_value
mrb_SDL_SDLMouseMotionEvent_get_x(mrb_state* mrb, mrb_value self) {
  struct SDL_MouseMotionEvent * native_self = mruby_unbox_struct SDL_MouseMotionEvent(self);

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
mrb_SDL_SDLMouseMotionEvent_set_x(mrb_state* mrb, mrb_value self) {
  struct SDL_MouseMotionEvent * native_self = mruby_unbox_struct SDL_MouseMotionEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Sint32(ruby_field);

  Sint32 native_field = TODO_mruby_unbox_Sint32(ruby_field);

  native_self->x = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLMouseMotionEvent_y_FIELD
/* get_y
 *
 * Return Type: Sint32
 */
mrb_value
mrb_SDL_SDLMouseMotionEvent_get_y(mrb_state* mrb, mrb_value self) {
  struct SDL_MouseMotionEvent * native_self = mruby_unbox_struct SDL_MouseMotionEvent(self);

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
mrb_SDL_SDLMouseMotionEvent_set_y(mrb_state* mrb, mrb_value self) {
  struct SDL_MouseMotionEvent * native_self = mruby_unbox_struct SDL_MouseMotionEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Sint32(ruby_field);

  Sint32 native_field = TODO_mruby_unbox_Sint32(ruby_field);

  native_self->y = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLMouseMotionEvent_xrel_FIELD
/* get_xrel
 *
 * Return Type: Sint32
 */
mrb_value
mrb_SDL_SDLMouseMotionEvent_get_xrel(mrb_state* mrb, mrb_value self) {
  struct SDL_MouseMotionEvent * native_self = mruby_unbox_struct SDL_MouseMotionEvent(self);

  Sint32 native_field = native_self->xrel;

  mrb_value ruby_field = TODO_mruby_box_Sint32(mrb, native_field);

  return ruby_field;
}

/* set_xrel
 *
 * Parameters:
 * - value: Sint32
 */
mrb_value
mrb_SDL_SDLMouseMotionEvent_set_xrel(mrb_state* mrb, mrb_value self) {
  struct SDL_MouseMotionEvent * native_self = mruby_unbox_struct SDL_MouseMotionEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Sint32(ruby_field);

  Sint32 native_field = TODO_mruby_unbox_Sint32(ruby_field);

  native_self->xrel = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLMouseMotionEvent_yrel_FIELD
/* get_yrel
 *
 * Return Type: Sint32
 */
mrb_value
mrb_SDL_SDLMouseMotionEvent_get_yrel(mrb_state* mrb, mrb_value self) {
  struct SDL_MouseMotionEvent * native_self = mruby_unbox_struct SDL_MouseMotionEvent(self);

  Sint32 native_field = native_self->yrel;

  mrb_value ruby_field = TODO_mruby_box_Sint32(mrb, native_field);

  return ruby_field;
}

/* set_yrel
 *
 * Parameters:
 * - value: Sint32
 */
mrb_value
mrb_SDL_SDLMouseMotionEvent_set_yrel(mrb_state* mrb, mrb_value self) {
  struct SDL_MouseMotionEvent * native_self = mruby_unbox_struct SDL_MouseMotionEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Sint32(ruby_field);

  Sint32 native_field = TODO_mruby_unbox_Sint32(ruby_field);

  native_self->yrel = native_field;

  return ruby_field;
}
#endif


void mrb_SDL_SDLMouseMotionEvent_init(mrb_state* mrb) {
  RClass* SDLMouseMotionEvent_class = mrb_define_class_under(mrb, SDL_module(mrb), "SDLMouseMotionEvent", mrb->object_class);
  MRB_SET_INSTANCE_TT(SDLMouseMotionEvent_class, MRB_TT_DATA);

#if BIND_SDLMouseMotionEvent_INITIALIZE
  mrb_define_method(mrb, SDLMouseMotionEvent_class, "initialize", mrb_SDL_SDLMouseMotionEvent_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, SDLMouseMotionEvent_class, "disown", mrb_SDL_SDLMouseMotionEvent_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, SDLMouseMotionEvent_class, "belongs_to_ruby?", mrb_SDL_SDLMouseMotionEvent_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_SDLMouseMotionEvent_type_FIELD
  mrb_define_method(mrb, SDLMouseMotionEvent_class, "type", mrb_SDL_SDLMouseMotionEvent_get_type, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, SDLMouseMotionEvent_class, "type=", mrb_SDL_SDLMouseMotionEvent_set_type, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLMouseMotionEvent_timestamp_FIELD
  mrb_define_method(mrb, SDLMouseMotionEvent_class, "timestamp", mrb_SDL_SDLMouseMotionEvent_get_timestamp, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, SDLMouseMotionEvent_class, "timestamp=", mrb_SDL_SDLMouseMotionEvent_set_timestamp, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLMouseMotionEvent_windowID_FIELD
  mrb_define_method(mrb, SDLMouseMotionEvent_class, "windowID", mrb_SDL_SDLMouseMotionEvent_get_windowID, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, SDLMouseMotionEvent_class, "windowID=", mrb_SDL_SDLMouseMotionEvent_set_windowID, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLMouseMotionEvent_which_FIELD
  mrb_define_method(mrb, SDLMouseMotionEvent_class, "which", mrb_SDL_SDLMouseMotionEvent_get_which, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, SDLMouseMotionEvent_class, "which=", mrb_SDL_SDLMouseMotionEvent_set_which, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLMouseMotionEvent_state_FIELD
  mrb_define_method(mrb, SDLMouseMotionEvent_class, "state", mrb_SDL_SDLMouseMotionEvent_get_state, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, SDLMouseMotionEvent_class, "state=", mrb_SDL_SDLMouseMotionEvent_set_state, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLMouseMotionEvent_x_FIELD
  mrb_define_method(mrb, SDLMouseMotionEvent_class, "x", mrb_SDL_SDLMouseMotionEvent_get_x, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, SDLMouseMotionEvent_class, "x=", mrb_SDL_SDLMouseMotionEvent_set_x, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLMouseMotionEvent_y_FIELD
  mrb_define_method(mrb, SDLMouseMotionEvent_class, "y", mrb_SDL_SDLMouseMotionEvent_get_y, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, SDLMouseMotionEvent_class, "y=", mrb_SDL_SDLMouseMotionEvent_set_y, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLMouseMotionEvent_xrel_FIELD
  mrb_define_method(mrb, SDLMouseMotionEvent_class, "xrel", mrb_SDL_SDLMouseMotionEvent_get_xrel, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, SDLMouseMotionEvent_class, "xrel=", mrb_SDL_SDLMouseMotionEvent_set_xrel, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLMouseMotionEvent_yrel_FIELD
  mrb_define_method(mrb, SDLMouseMotionEvent_class, "yrel", mrb_SDL_SDLMouseMotionEvent_get_yrel, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, SDLMouseMotionEvent_class, "yrel=", mrb_SDL_SDLMouseMotionEvent_set_yrel, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
