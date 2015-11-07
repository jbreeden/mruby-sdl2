/*
 * struct SDL_DropEvent
 * Defined in file SDL_events.h @ line 439
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_SDL.h"

#if BIND_SDLDropEvent_TYPE

/*
 * Class Methods
 */

#if BIND_SDLDropEvent_INITIALIZE
mrb_value
mrb_SDL_SDLDropEvent_initialize(mrb_state* mrb, mrb_value self) {
  struct SDL_DropEvent* native_object = (struct SDL_DropEvent*)malloc(sizeof(struct SDL_DropEvent));
  mruby_gift_struct SDL_DropEvent_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_SDL_SDLDropEvent_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLDropEvent.disown only accepts objects of type SDL::SDLDropEvent");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_SDL_SDLDropEvent_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLDropEvent.belongs_to_ruby only accepts objects of type SDL::SDLDropEvent");
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

#if BIND_SDLDropEvent_type_FIELD_READER
/* get_type
 *
 * Return Type: Uint32
 */
mrb_value
mrb_SDL_SDLDropEvent_get_type(mrb_state* mrb, mrb_value self) {
  struct SDL_DropEvent * native_self = mruby_unbox_struct SDL_DropEvent(self);

  Uint32 native_field = native_self->type;

  mrb_value ruby_field = TODO_mruby_box_Uint32(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLDropEvent_type_FIELD_WRITER
/* set_type
 *
 * Parameters:
 * - value: Uint32
 */
mrb_value
mrb_SDL_SDLDropEvent_set_type(mrb_state* mrb, mrb_value self) {
  struct SDL_DropEvent * native_self = mruby_unbox_struct SDL_DropEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Uint32(ruby_field);

  Uint32 native_field = TODO_mruby_unbox_Uint32(ruby_field);

  native_self->type = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLDropEvent_timestamp_FIELD_READER
/* get_timestamp
 *
 * Return Type: Uint32
 */
mrb_value
mrb_SDL_SDLDropEvent_get_timestamp(mrb_state* mrb, mrb_value self) {
  struct SDL_DropEvent * native_self = mruby_unbox_struct SDL_DropEvent(self);

  Uint32 native_field = native_self->timestamp;

  mrb_value ruby_field = TODO_mruby_box_Uint32(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLDropEvent_timestamp_FIELD_WRITER
/* set_timestamp
 *
 * Parameters:
 * - value: Uint32
 */
mrb_value
mrb_SDL_SDLDropEvent_set_timestamp(mrb_state* mrb, mrb_value self) {
  struct SDL_DropEvent * native_self = mruby_unbox_struct SDL_DropEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Uint32(ruby_field);

  Uint32 native_field = TODO_mruby_unbox_Uint32(ruby_field);

  native_self->timestamp = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLDropEvent_file_FIELD_READER
/* get_file
 *
 * Return Type: char *
 */
mrb_value
mrb_SDL_SDLDropEvent_get_file(mrb_state* mrb, mrb_value self) {
  struct SDL_DropEvent * native_self = mruby_unbox_struct SDL_DropEvent(self);

  char * native_field = native_self->file;

  mrb_value ruby_field = mrb_str_new_cstr(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLDropEvent_file_FIELD_WRITER
/* set_file
 *
 * Parameters:
 * - value: char *
 */
mrb_value
mrb_SDL_SDLDropEvent_set_file(mrb_state* mrb, mrb_value self) {
  struct SDL_DropEvent * native_self = mruby_unbox_struct SDL_DropEvent(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }

  /* WARNING: Allocating new memory to create 'char *' from 'const char *'.
   *          Please verify that this memory is cleaned up correctly.
   *
   *          Has this been verified? [No]
   */
  char * native_field = strdup(mrb_string_value_cstr(mrb, &ruby_field));

  native_self->file = native_field;

  return ruby_field;
}
#endif


void mrb_SDL_SDLDropEvent_init(mrb_state* mrb) {
  RClass* SDLDropEvent_class = mrb_define_class_under(mrb, SDL_module(mrb), "DropEvent", mrb->object_class);
  MRB_SET_INSTANCE_TT(SDLDropEvent_class, MRB_TT_DATA);

#if BIND_SDLDropEvent_INITIALIZE
  mrb_define_method(mrb, SDLDropEvent_class, "initialize", mrb_SDL_SDLDropEvent_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, SDLDropEvent_class, "disown", mrb_SDL_SDLDropEvent_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, SDLDropEvent_class, "belongs_to_ruby?", mrb_SDL_SDLDropEvent_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_SDLDropEvent_type_FIELD_READER
  mrb_define_method(mrb, SDLDropEvent_class, "type", mrb_SDL_SDLDropEvent_get_type, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLDropEvent_type_FIELD_WRITER
  mrb_define_method(mrb, SDLDropEvent_class, "type=", mrb_SDL_SDLDropEvent_set_type, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLDropEvent_timestamp_FIELD_READER
  mrb_define_method(mrb, SDLDropEvent_class, "timestamp", mrb_SDL_SDLDropEvent_get_timestamp, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLDropEvent_timestamp_FIELD_WRITER
  mrb_define_method(mrb, SDLDropEvent_class, "timestamp=", mrb_SDL_SDLDropEvent_set_timestamp, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLDropEvent_file_FIELD_READER
  mrb_define_method(mrb, SDLDropEvent_class, "file", mrb_SDL_SDLDropEvent_get_file, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLDropEvent_file_FIELD_WRITER
  mrb_define_method(mrb, SDLDropEvent_class, "file=", mrb_SDL_SDLDropEvent_set_file, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
