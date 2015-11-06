/*
 * struct SDL_TextEditingEvent
 * Defined in file SDL_events.h @ line 195
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_SDL.h"

#if BIND_SDLTextEditingEvent_TYPE

/*
 * Class Methods
 */

#if BIND_SDLTextEditingEvent_INITIALIZE
mrb_value
mrb_SDL_SDLTextEditingEvent_initialize(mrb_state* mrb, mrb_value self) {
  struct SDL_TextEditingEvent* native_object = (struct SDL_TextEditingEvent*)malloc(sizeof(struct SDL_TextEditingEvent));
  mruby_gift_struct SDL_TextEditingEvent_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_SDL_SDLTextEditingEvent_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLTextEditingEvent.disown only accepts objects of type SDL::SDLTextEditingEvent");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_SDL_SDLTextEditingEvent_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLTextEditingEvent.belongs_to_ruby only accepts objects of type SDL::SDLTextEditingEvent");
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

#if BIND_SDLTextEditingEvent_type_FIELD_READER
/* get_type
 *
 * Return Type: Uint32
 */
mrb_value
mrb_SDL_SDLTextEditingEvent_get_type(mrb_state* mrb, mrb_value self) {
  struct SDL_TextEditingEvent * native_self = mruby_unbox_struct SDL_TextEditingEvent(self);

  Uint32 native_field = native_self->type;

  mrb_value ruby_field = TODO_mruby_box_Uint32(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLTextEditingEvent_type_FIELD_WRITER
/* set_type
 *
 * Parameters:
 * - value: Uint32
 */
mrb_value
mrb_SDL_SDLTextEditingEvent_set_type(mrb_state* mrb, mrb_value self) {
  struct SDL_TextEditingEvent * native_self = mruby_unbox_struct SDL_TextEditingEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Uint32(ruby_field);

  Uint32 native_field = TODO_mruby_unbox_Uint32(ruby_field);

  native_self->type = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLTextEditingEvent_timestamp_FIELD_READER
/* get_timestamp
 *
 * Return Type: Uint32
 */
mrb_value
mrb_SDL_SDLTextEditingEvent_get_timestamp(mrb_state* mrb, mrb_value self) {
  struct SDL_TextEditingEvent * native_self = mruby_unbox_struct SDL_TextEditingEvent(self);

  Uint32 native_field = native_self->timestamp;

  mrb_value ruby_field = TODO_mruby_box_Uint32(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLTextEditingEvent_timestamp_FIELD_WRITER
/* set_timestamp
 *
 * Parameters:
 * - value: Uint32
 */
mrb_value
mrb_SDL_SDLTextEditingEvent_set_timestamp(mrb_state* mrb, mrb_value self) {
  struct SDL_TextEditingEvent * native_self = mruby_unbox_struct SDL_TextEditingEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Uint32(ruby_field);

  Uint32 native_field = TODO_mruby_unbox_Uint32(ruby_field);

  native_self->timestamp = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLTextEditingEvent_windowID_FIELD_READER
/* get_windowID
 *
 * Return Type: Uint32
 */
mrb_value
mrb_SDL_SDLTextEditingEvent_get_windowID(mrb_state* mrb, mrb_value self) {
  struct SDL_TextEditingEvent * native_self = mruby_unbox_struct SDL_TextEditingEvent(self);

  Uint32 native_field = native_self->windowID;

  mrb_value ruby_field = TODO_mruby_box_Uint32(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLTextEditingEvent_windowID_FIELD_WRITER
/* set_windowID
 *
 * Parameters:
 * - value: Uint32
 */
mrb_value
mrb_SDL_SDLTextEditingEvent_set_windowID(mrb_state* mrb, mrb_value self) {
  struct SDL_TextEditingEvent * native_self = mruby_unbox_struct SDL_TextEditingEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Uint32(ruby_field);

  Uint32 native_field = TODO_mruby_unbox_Uint32(ruby_field);

  native_self->windowID = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLTextEditingEvent_text_FIELD_READER
/* get_text
 *
 * Return Type: char [32]
 */
mrb_value
mrb_SDL_SDLTextEditingEvent_get_text(mrb_state* mrb, mrb_value self) {
  struct SDL_TextEditingEvent * native_self = mruby_unbox_struct SDL_TextEditingEvent(self);

  char [32] native_field = native_self->text;

  mrb_value ruby_field = TODO_mruby_box_char_[32](mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLTextEditingEvent_text_FIELD_WRITER
/* set_text
 *
 * Parameters:
 * - value: char [32]
 */
mrb_value
mrb_SDL_SDLTextEditingEvent_set_text(mrb_state* mrb, mrb_value self) {
  struct SDL_TextEditingEvent * native_self = mruby_unbox_struct SDL_TextEditingEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_char_[32](ruby_field);

  char [32] native_field = TODO_mruby_unbox_char_[32](ruby_field);

  native_self->text = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLTextEditingEvent_start_FIELD_READER
/* get_start
 *
 * Return Type: Sint32
 */
mrb_value
mrb_SDL_SDLTextEditingEvent_get_start(mrb_state* mrb, mrb_value self) {
  struct SDL_TextEditingEvent * native_self = mruby_unbox_struct SDL_TextEditingEvent(self);

  Sint32 native_field = native_self->start;

  mrb_value ruby_field = TODO_mruby_box_Sint32(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLTextEditingEvent_start_FIELD_WRITER
/* set_start
 *
 * Parameters:
 * - value: Sint32
 */
mrb_value
mrb_SDL_SDLTextEditingEvent_set_start(mrb_state* mrb, mrb_value self) {
  struct SDL_TextEditingEvent * native_self = mruby_unbox_struct SDL_TextEditingEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Sint32(ruby_field);

  Sint32 native_field = TODO_mruby_unbox_Sint32(ruby_field);

  native_self->start = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLTextEditingEvent_length_FIELD_READER
/* get_length
 *
 * Return Type: Sint32
 */
mrb_value
mrb_SDL_SDLTextEditingEvent_get_length(mrb_state* mrb, mrb_value self) {
  struct SDL_TextEditingEvent * native_self = mruby_unbox_struct SDL_TextEditingEvent(self);

  Sint32 native_field = native_self->length;

  mrb_value ruby_field = TODO_mruby_box_Sint32(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLTextEditingEvent_length_FIELD_WRITER
/* set_length
 *
 * Parameters:
 * - value: Sint32
 */
mrb_value
mrb_SDL_SDLTextEditingEvent_set_length(mrb_state* mrb, mrb_value self) {
  struct SDL_TextEditingEvent * native_self = mruby_unbox_struct SDL_TextEditingEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Sint32(ruby_field);

  Sint32 native_field = TODO_mruby_unbox_Sint32(ruby_field);

  native_self->length = native_field;

  return ruby_field;
}
#endif


void mrb_SDL_SDLTextEditingEvent_init(mrb_state* mrb) {
  RClass* SDLTextEditingEvent_class = mrb_define_class_under(mrb, SDL_module(mrb), "SDLTextEditingEvent", mrb->object_class);
  MRB_SET_INSTANCE_TT(SDLTextEditingEvent_class, MRB_TT_DATA);

#if BIND_SDLTextEditingEvent_INITIALIZE
  mrb_define_method(mrb, SDLTextEditingEvent_class, "initialize", mrb_SDL_SDLTextEditingEvent_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, SDLTextEditingEvent_class, "disown", mrb_SDL_SDLTextEditingEvent_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, SDLTextEditingEvent_class, "belongs_to_ruby?", mrb_SDL_SDLTextEditingEvent_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_SDLTextEditingEvent_type_FIELD_READER
  mrb_define_method(mrb, SDLTextEditingEvent_class, "type", mrb_SDL_SDLTextEditingEvent_get_type, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLTextEditingEvent_type_FIELD_WRITER
  mrb_define_method(mrb, SDLTextEditingEvent_class, "type=", mrb_SDL_SDLTextEditingEvent_set_type, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLTextEditingEvent_timestamp_FIELD_READER
  mrb_define_method(mrb, SDLTextEditingEvent_class, "timestamp", mrb_SDL_SDLTextEditingEvent_get_timestamp, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLTextEditingEvent_timestamp_FIELD_WRITER
  mrb_define_method(mrb, SDLTextEditingEvent_class, "timestamp=", mrb_SDL_SDLTextEditingEvent_set_timestamp, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLTextEditingEvent_windowID_FIELD_READER
  mrb_define_method(mrb, SDLTextEditingEvent_class, "windowID", mrb_SDL_SDLTextEditingEvent_get_windowID, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLTextEditingEvent_windowID_FIELD_WRITER
  mrb_define_method(mrb, SDLTextEditingEvent_class, "windowID=", mrb_SDL_SDLTextEditingEvent_set_windowID, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLTextEditingEvent_text_FIELD_READER
  mrb_define_method(mrb, SDLTextEditingEvent_class, "text", mrb_SDL_SDLTextEditingEvent_get_text, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLTextEditingEvent_text_FIELD_WRITER
  mrb_define_method(mrb, SDLTextEditingEvent_class, "text=", mrb_SDL_SDLTextEditingEvent_set_text, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLTextEditingEvent_start_FIELD_READER
  mrb_define_method(mrb, SDLTextEditingEvent_class, "start", mrb_SDL_SDLTextEditingEvent_get_start, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLTextEditingEvent_start_FIELD_WRITER
  mrb_define_method(mrb, SDLTextEditingEvent_class, "start=", mrb_SDL_SDLTextEditingEvent_set_start, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLTextEditingEvent_length_FIELD_READER
  mrb_define_method(mrb, SDLTextEditingEvent_class, "length", mrb_SDL_SDLTextEditingEvent_get_length, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLTextEditingEvent_length_FIELD_WRITER
  mrb_define_method(mrb, SDLTextEditingEvent_class, "length=", mrb_SDL_SDLTextEditingEvent_set_length, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
