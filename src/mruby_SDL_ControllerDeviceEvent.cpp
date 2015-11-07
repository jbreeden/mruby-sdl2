/*
 * struct SDL_ControllerDeviceEvent
 * Defined in file SDL_events.h @ line 376
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_SDL.h"

#if BIND_SDLControllerDeviceEvent_TYPE

/*
 * Class Methods
 */

#if BIND_SDLControllerDeviceEvent_INITIALIZE
mrb_value
mrb_SDL_SDLControllerDeviceEvent_initialize(mrb_state* mrb, mrb_value self) {
  struct SDL_ControllerDeviceEvent* native_object = (struct SDL_ControllerDeviceEvent*)malloc(sizeof(struct SDL_ControllerDeviceEvent));
  mruby_gift_struct SDL_ControllerDeviceEvent_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_SDL_SDLControllerDeviceEvent_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLControllerDeviceEvent.disown only accepts objects of type SDL::SDLControllerDeviceEvent");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_SDL_SDLControllerDeviceEvent_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLControllerDeviceEvent.belongs_to_ruby only accepts objects of type SDL::SDLControllerDeviceEvent");
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

#if BIND_SDLControllerDeviceEvent_type_FIELD_READER
/* get_type
 *
 * Return Type: Uint32
 */
mrb_value
mrb_SDL_SDLControllerDeviceEvent_get_type(mrb_state* mrb, mrb_value self) {
  struct SDL_ControllerDeviceEvent * native_self = mruby_unbox_struct SDL_ControllerDeviceEvent(self);

  Uint32 native_field = native_self->type;

  mrb_value ruby_field = TODO_mruby_box_Uint32(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLControllerDeviceEvent_type_FIELD_WRITER
/* set_type
 *
 * Parameters:
 * - value: Uint32
 */
mrb_value
mrb_SDL_SDLControllerDeviceEvent_set_type(mrb_state* mrb, mrb_value self) {
  struct SDL_ControllerDeviceEvent * native_self = mruby_unbox_struct SDL_ControllerDeviceEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Uint32(ruby_field);

  Uint32 native_field = TODO_mruby_unbox_Uint32(ruby_field);

  native_self->type = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLControllerDeviceEvent_timestamp_FIELD_READER
/* get_timestamp
 *
 * Return Type: Uint32
 */
mrb_value
mrb_SDL_SDLControllerDeviceEvent_get_timestamp(mrb_state* mrb, mrb_value self) {
  struct SDL_ControllerDeviceEvent * native_self = mruby_unbox_struct SDL_ControllerDeviceEvent(self);

  Uint32 native_field = native_self->timestamp;

  mrb_value ruby_field = TODO_mruby_box_Uint32(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLControllerDeviceEvent_timestamp_FIELD_WRITER
/* set_timestamp
 *
 * Parameters:
 * - value: Uint32
 */
mrb_value
mrb_SDL_SDLControllerDeviceEvent_set_timestamp(mrb_state* mrb, mrb_value self) {
  struct SDL_ControllerDeviceEvent * native_self = mruby_unbox_struct SDL_ControllerDeviceEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Uint32(ruby_field);

  Uint32 native_field = TODO_mruby_unbox_Uint32(ruby_field);

  native_self->timestamp = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLControllerDeviceEvent_which_FIELD_READER
/* get_which
 *
 * Return Type: Sint32
 */
mrb_value
mrb_SDL_SDLControllerDeviceEvent_get_which(mrb_state* mrb, mrb_value self) {
  struct SDL_ControllerDeviceEvent * native_self = mruby_unbox_struct SDL_ControllerDeviceEvent(self);

  Sint32 native_field = native_self->which;

  mrb_value ruby_field = TODO_mruby_box_Sint32(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLControllerDeviceEvent_which_FIELD_WRITER
/* set_which
 *
 * Parameters:
 * - value: Sint32
 */
mrb_value
mrb_SDL_SDLControllerDeviceEvent_set_which(mrb_state* mrb, mrb_value self) {
  struct SDL_ControllerDeviceEvent * native_self = mruby_unbox_struct SDL_ControllerDeviceEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Sint32(ruby_field);

  Sint32 native_field = TODO_mruby_unbox_Sint32(ruby_field);

  native_self->which = native_field;

  return ruby_field;
}
#endif


void mrb_SDL_SDLControllerDeviceEvent_init(mrb_state* mrb) {
  RClass* SDLControllerDeviceEvent_class = mrb_define_class_under(mrb, SDL_module(mrb), "ControllerDeviceEvent", mrb->object_class);
  MRB_SET_INSTANCE_TT(SDLControllerDeviceEvent_class, MRB_TT_DATA);

#if BIND_SDLControllerDeviceEvent_INITIALIZE
  mrb_define_method(mrb, SDLControllerDeviceEvent_class, "initialize", mrb_SDL_SDLControllerDeviceEvent_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, SDLControllerDeviceEvent_class, "disown", mrb_SDL_SDLControllerDeviceEvent_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, SDLControllerDeviceEvent_class, "belongs_to_ruby?", mrb_SDL_SDLControllerDeviceEvent_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_SDLControllerDeviceEvent_type_FIELD_READER
  mrb_define_method(mrb, SDLControllerDeviceEvent_class, "type", mrb_SDL_SDLControllerDeviceEvent_get_type, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLControllerDeviceEvent_type_FIELD_WRITER
  mrb_define_method(mrb, SDLControllerDeviceEvent_class, "type=", mrb_SDL_SDLControllerDeviceEvent_set_type, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLControllerDeviceEvent_timestamp_FIELD_READER
  mrb_define_method(mrb, SDLControllerDeviceEvent_class, "timestamp", mrb_SDL_SDLControllerDeviceEvent_get_timestamp, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLControllerDeviceEvent_timestamp_FIELD_WRITER
  mrb_define_method(mrb, SDLControllerDeviceEvent_class, "timestamp=", mrb_SDL_SDLControllerDeviceEvent_set_timestamp, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLControllerDeviceEvent_which_FIELD_READER
  mrb_define_method(mrb, SDLControllerDeviceEvent_class, "which", mrb_SDL_SDLControllerDeviceEvent_get_which, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLControllerDeviceEvent_which_FIELD_WRITER
  mrb_define_method(mrb, SDLControllerDeviceEvent_class, "which=", mrb_SDL_SDLControllerDeviceEvent_set_which, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
