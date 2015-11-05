/*
 * struct SDL_SysWMEvent
 * Defined in file SDL_events.h @ line 488
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_SDL.h"

#if BIND_SDLSysWMEvent_TYPE

/*
 * Class Methods
 */

#if BIND_SDLSysWMEvent_INITIALIZE
mrb_value
mrb_SDL_SDLSysWMEvent_initialize(mrb_state* mrb, mrb_value self) {
  struct SDL_SysWMEvent* native_object = (struct SDL_SysWMEvent*)malloc(sizeof(struct SDL_SysWMEvent));
  mruby_gift_struct SDL_SysWMEvent_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_SDL_SDLSysWMEvent_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLSysWMEvent.disown only accepts objects of type SDL::SDLSysWMEvent");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_SDL_SDLSysWMEvent_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLSysWMEvent.belongs_to_ruby only accepts objects of type SDL::SDLSysWMEvent");
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

#if BIND_SDLSysWMEvent_type_FIELD
/* get_type
 *
 * Return Type: Uint32
 */
mrb_value
mrb_SDL_SDLSysWMEvent_get_type(mrb_state* mrb, mrb_value self) {
  struct SDL_SysWMEvent * native_self = mruby_unbox_struct SDL_SysWMEvent(self);

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
mrb_SDL_SDLSysWMEvent_set_type(mrb_state* mrb, mrb_value self) {
  struct SDL_SysWMEvent * native_self = mruby_unbox_struct SDL_SysWMEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Uint32(ruby_field);

  Uint32 native_field = TODO_mruby_unbox_Uint32(ruby_field);

  native_self->type = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLSysWMEvent_timestamp_FIELD
/* get_timestamp
 *
 * Return Type: Uint32
 */
mrb_value
mrb_SDL_SDLSysWMEvent_get_timestamp(mrb_state* mrb, mrb_value self) {
  struct SDL_SysWMEvent * native_self = mruby_unbox_struct SDL_SysWMEvent(self);

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
mrb_SDL_SDLSysWMEvent_set_timestamp(mrb_state* mrb, mrb_value self) {
  struct SDL_SysWMEvent * native_self = mruby_unbox_struct SDL_SysWMEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Uint32(ruby_field);

  Uint32 native_field = TODO_mruby_unbox_Uint32(ruby_field);

  native_self->timestamp = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLSysWMEvent_msg_FIELD
/* get_msg
 *
 * Return Type: SDL_SysWMmsg *
 */
mrb_value
mrb_SDL_SDLSysWMEvent_get_msg(mrb_state* mrb, mrb_value self) {
  struct SDL_SysWMEvent * native_self = mruby_unbox_struct SDL_SysWMEvent(self);

  SDL_SysWMmsg * native_field = native_self->msg;

  mrb_value ruby_field = (native_field == NULL ? mrb_nil_value() : mruby_box_SDL_SysWMmsg(mrb, native_field));

  return ruby_field;
}

/* set_msg
 *
 * Parameters:
 * - value: SDL_SysWMmsg *
 */
mrb_value
mrb_SDL_SDLSysWMEvent_set_msg(mrb_state* mrb, mrb_value self) {
  struct SDL_SysWMEvent * native_self = mruby_unbox_struct SDL_SysWMEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, SDLSysWMmsg_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLSysWMmsg expected");
    return mrb_nil_value();
  }

  SDL_SysWMmsg * native_field = (mrb_nil_p(ruby_field) ? NULL : mruby_unbox_SDL_SysWMmsg(ruby_field));

  native_self->msg = native_field;

  return ruby_field;
}
#endif


void mrb_SDL_SDLSysWMEvent_init(mrb_state* mrb) {
  RClass* SDLSysWMEvent_class = mrb_define_class_under(mrb, SDL_module(mrb), "SDLSysWMEvent", mrb->object_class);
  MRB_SET_INSTANCE_TT(SDLSysWMEvent_class, MRB_TT_DATA);

#if BIND_SDLSysWMEvent_INITIALIZE
  mrb_define_method(mrb, SDLSysWMEvent_class, "initialize", mrb_SDL_SDLSysWMEvent_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, SDLSysWMEvent_class, "disown", mrb_SDL_SDLSysWMEvent_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, SDLSysWMEvent_class, "belongs_to_ruby?", mrb_SDL_SDLSysWMEvent_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_SDLSysWMEvent_type_FIELD
  mrb_define_method(mrb, SDLSysWMEvent_class, "type", mrb_SDL_SDLSysWMEvent_get_type, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, SDLSysWMEvent_class, "type=", mrb_SDL_SDLSysWMEvent_set_type, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLSysWMEvent_timestamp_FIELD
  mrb_define_method(mrb, SDLSysWMEvent_class, "timestamp", mrb_SDL_SDLSysWMEvent_get_timestamp, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, SDLSysWMEvent_class, "timestamp=", mrb_SDL_SDLSysWMEvent_set_timestamp, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLSysWMEvent_msg_FIELD
  mrb_define_method(mrb, SDLSysWMEvent_class, "msg", mrb_SDL_SDLSysWMEvent_get_msg, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, SDLSysWMEvent_class, "msg=", mrb_SDL_SDLSysWMEvent_set_msg, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
