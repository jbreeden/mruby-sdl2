/*
 * struct SDL_SysWMmsg
 * Defined in file SDL_events.h @ line 479
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_SDL.h"

#if BIND_SDLSysWMmsg_TYPE

/*
 * Class Methods
 */

#if BIND_SDLSysWMmsg_INITIALIZE
mrb_value
mrb_SDL_SDLSysWMmsg_initialize(mrb_state* mrb, mrb_value self) {
  struct SDL_SysWMmsg* native_object = (struct SDL_SysWMmsg*)malloc(sizeof(struct SDL_SysWMmsg));
  mruby_gift_struct SDL_SysWMmsg_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_SDL_SDLSysWMmsg_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLSysWMmsg.disown only accepts objects of type SDL::SDLSysWMmsg");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_SDL_SDLSysWMmsg_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLSysWMmsg.belongs_to_ruby only accepts objects of type SDL::SDLSysWMmsg");
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

#if BIND_SDLSysWMmsg_version_FIELD_READER
/* get_version
 *
 * Return Type: SDL_version
 */
mrb_value
mrb_SDL_SDLSysWMmsg_get_version(mrb_state* mrb, mrb_value self) {
  struct SDL_SysWMmsg * native_self = mruby_unbox_struct SDL_SysWMmsg(self);

  SDL_version native_field = native_self->version;

  mrb_value ruby_field = TODO_mruby_box_SDL_version(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLSysWMmsg_version_FIELD_WRITER
/* set_version
 *
 * Parameters:
 * - value: SDL_version
 */
mrb_value
mrb_SDL_SDLSysWMmsg_set_version(mrb_state* mrb, mrb_value self) {
  struct SDL_SysWMmsg * native_self = mruby_unbox_struct SDL_SysWMmsg(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_SDL_version(ruby_field);

  SDL_version native_field = TODO_mruby_unbox_SDL_version(ruby_field);

  native_self->version = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLSysWMmsg_subsystem_FIELD_READER
/* get_subsystem
 *
 * Return Type: SDL_SYSWM_TYPE
 */
mrb_value
mrb_SDL_SDLSysWMmsg_get_subsystem(mrb_state* mrb, mrb_value self) {
  struct SDL_SysWMmsg * native_self = mruby_unbox_struct SDL_SysWMmsg(self);

  SDL_SYSWM_TYPE native_field = native_self->subsystem;

  mrb_value ruby_field = TODO_mruby_box_SDL_SYSWM_TYPE(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLSysWMmsg_subsystem_FIELD_WRITER
/* set_subsystem
 *
 * Parameters:
 * - value: SDL_SYSWM_TYPE
 */
mrb_value
mrb_SDL_SDLSysWMmsg_set_subsystem(mrb_state* mrb, mrb_value self) {
  struct SDL_SysWMmsg * native_self = mruby_unbox_struct SDL_SysWMmsg(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_SDL_SYSWM_TYPE(ruby_field);

  SDL_SYSWM_TYPE native_field = TODO_mruby_unbox_SDL_SYSWM_TYPE(ruby_field);

  native_self->subsystem = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLSysWMmsg_msg_FIELD_READER
/* get_msg
 *
 * Return Type: union (anonymous union at ./sdl/SDL2-2.0.3/include//SDL_syswm.h:129:5)
 */
mrb_value
mrb_SDL_SDLSysWMmsg_get_msg(mrb_state* mrb, mrb_value self) {
  struct SDL_SysWMmsg * native_self = mruby_unbox_struct SDL_SysWMmsg(self);

  union (anonymous union at ./sdl/SDL2-2.0.3/include//SDL_syswm.h:129:5) native_field = native_self->msg;

  mrb_value ruby_field = TODO_mruby_box_union_LPAREN_anonymous_union_at_./sdl/SDL2-2.0.3/include//SDL_syswm.h:129:5_RPAREN(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLSysWMmsg_msg_FIELD_WRITER
/* set_msg
 *
 * Parameters:
 * - value: union (anonymous union at ./sdl/SDL2-2.0.3/include//SDL_syswm.h:129:5)
 */
mrb_value
mrb_SDL_SDLSysWMmsg_set_msg(mrb_state* mrb, mrb_value self) {
  struct SDL_SysWMmsg * native_self = mruby_unbox_struct SDL_SysWMmsg(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_union_LPAREN_anonymous_union_at_./sdl/SDL2-2.0.3/include//SDL_syswm.h:129:5_RPAREN(ruby_field);

  union (anonymous union at ./sdl/SDL2-2.0.3/include//SDL_syswm.h:129:5) native_field = TODO_mruby_unbox_union_LPAREN_anonymous_union_at_./sdl/SDL2-2.0.3/include//SDL_syswm.h:129:5_RPAREN(ruby_field);

  native_self->msg = native_field;

  return ruby_field;
}
#endif


void mrb_SDL_SDLSysWMmsg_init(mrb_state* mrb) {
  RClass* SDLSysWMmsg_class = mrb_define_class_under(mrb, SDL_module(mrb), "SDLSysWMmsg", mrb->object_class);
  MRB_SET_INSTANCE_TT(SDLSysWMmsg_class, MRB_TT_DATA);

#if BIND_SDLSysWMmsg_INITIALIZE
  mrb_define_method(mrb, SDLSysWMmsg_class, "initialize", mrb_SDL_SDLSysWMmsg_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, SDLSysWMmsg_class, "disown", mrb_SDL_SDLSysWMmsg_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, SDLSysWMmsg_class, "belongs_to_ruby?", mrb_SDL_SDLSysWMmsg_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_SDLSysWMmsg_version_FIELD_READER
  mrb_define_method(mrb, SDLSysWMmsg_class, "version", mrb_SDL_SDLSysWMmsg_get_version, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLSysWMmsg_version_FIELD_WRITER
  mrb_define_method(mrb, SDLSysWMmsg_class, "version=", mrb_SDL_SDLSysWMmsg_set_version, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLSysWMmsg_subsystem_FIELD_READER
  mrb_define_method(mrb, SDLSysWMmsg_class, "subsystem", mrb_SDL_SDLSysWMmsg_get_subsystem, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLSysWMmsg_subsystem_FIELD_WRITER
  mrb_define_method(mrb, SDLSysWMmsg_class, "subsystem=", mrb_SDL_SDLSysWMmsg_set_subsystem, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLSysWMmsg_msg_FIELD_READER
  mrb_define_method(mrb, SDLSysWMmsg_class, "msg", mrb_SDL_SDLSysWMmsg_get_msg, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLSysWMmsg_msg_FIELD_WRITER
  mrb_define_method(mrb, SDLSysWMmsg_class, "msg=", mrb_SDL_SDLSysWMmsg_set_msg, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
