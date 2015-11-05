/*
 * struct SDL_SysWMinfo
 * Defined in file SDL_syswm.h @ line 172
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_SDL.h"

#if BIND_SDLSysWMinfo_TYPE

/*
 * Class Methods
 */

#if BIND_SDLSysWMinfo_INITIALIZE
mrb_value
mrb_SDL_SDLSysWMinfo_initialize(mrb_state* mrb, mrb_value self) {
  struct SDL_SysWMinfo* native_object = (struct SDL_SysWMinfo*)malloc(sizeof(struct SDL_SysWMinfo));
  mruby_gift_struct SDL_SysWMinfo_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_SDL_SDLSysWMinfo_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLSysWMinfo.disown only accepts objects of type SDL::SDLSysWMinfo");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_SDL_SDLSysWMinfo_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLSysWMinfo.belongs_to_ruby only accepts objects of type SDL::SDLSysWMinfo");
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

#if BIND_SDLSysWMinfo_version_FIELD
/* get_version
 *
 * Return Type: SDL_version
 */
mrb_value
mrb_SDL_SDLSysWMinfo_get_version(mrb_state* mrb, mrb_value self) {
  struct SDL_SysWMinfo * native_self = mruby_unbox_struct SDL_SysWMinfo(self);

  SDL_version native_field = native_self->version;

  mrb_value ruby_field = TODO_mruby_box_SDL_version(mrb, native_field);

  return ruby_field;
}

/* set_version
 *
 * Parameters:
 * - value: SDL_version
 */
mrb_value
mrb_SDL_SDLSysWMinfo_set_version(mrb_state* mrb, mrb_value self) {
  struct SDL_SysWMinfo * native_self = mruby_unbox_struct SDL_SysWMinfo(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_SDL_version(ruby_field);

  SDL_version native_field = TODO_mruby_unbox_SDL_version(ruby_field);

  native_self->version = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLSysWMinfo_subsystem_FIELD
/* get_subsystem
 *
 * Return Type: SDL_SYSWM_TYPE
 */
mrb_value
mrb_SDL_SDLSysWMinfo_get_subsystem(mrb_state* mrb, mrb_value self) {
  struct SDL_SysWMinfo * native_self = mruby_unbox_struct SDL_SysWMinfo(self);

  SDL_SYSWM_TYPE native_field = native_self->subsystem;

  mrb_value ruby_field = TODO_mruby_box_SDL_SYSWM_TYPE(mrb, native_field);

  return ruby_field;
}

/* set_subsystem
 *
 * Parameters:
 * - value: SDL_SYSWM_TYPE
 */
mrb_value
mrb_SDL_SDLSysWMinfo_set_subsystem(mrb_state* mrb, mrb_value self) {
  struct SDL_SysWMinfo * native_self = mruby_unbox_struct SDL_SysWMinfo(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_SDL_SYSWM_TYPE(ruby_field);

  SDL_SYSWM_TYPE native_field = TODO_mruby_unbox_SDL_SYSWM_TYPE(ruby_field);

  native_self->subsystem = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLSysWMinfo_info_FIELD
/* get_info
 *
 * Return Type: union (anonymous union at ./headers/SDL_syswm.h:176:5)
 */
mrb_value
mrb_SDL_SDLSysWMinfo_get_info(mrb_state* mrb, mrb_value self) {
  struct SDL_SysWMinfo * native_self = mruby_unbox_struct SDL_SysWMinfo(self);

  union (anonymous union at ./headers/SDL_syswm.h:176:5) native_field = native_self->info;

  mrb_value ruby_field = TODO_mruby_box_union_LPAREN_anonymous_union_at_./headers/SDL_syswm.h:176:5_RPAREN(mrb, native_field);

  return ruby_field;
}

/* set_info
 *
 * Parameters:
 * - value: union (anonymous union at ./headers/SDL_syswm.h:176:5)
 */
mrb_value
mrb_SDL_SDLSysWMinfo_set_info(mrb_state* mrb, mrb_value self) {
  struct SDL_SysWMinfo * native_self = mruby_unbox_struct SDL_SysWMinfo(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_union_LPAREN_anonymous_union_at_./headers/SDL_syswm.h:176:5_RPAREN(ruby_field);

  union (anonymous union at ./headers/SDL_syswm.h:176:5) native_field = TODO_mruby_unbox_union_LPAREN_anonymous_union_at_./headers/SDL_syswm.h:176:5_RPAREN(ruby_field);

  native_self->info = native_field;

  return ruby_field;
}
#endif


void mrb_SDL_SDLSysWMinfo_init(mrb_state* mrb) {
  RClass* SDLSysWMinfo_class = mrb_define_class_under(mrb, SDL_module(mrb), "SDLSysWMinfo", mrb->object_class);
  MRB_SET_INSTANCE_TT(SDLSysWMinfo_class, MRB_TT_DATA);

#if BIND_SDLSysWMinfo_INITIALIZE
  mrb_define_method(mrb, SDLSysWMinfo_class, "initialize", mrb_SDL_SDLSysWMinfo_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, SDLSysWMinfo_class, "disown", mrb_SDL_SDLSysWMinfo_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, SDLSysWMinfo_class, "belongs_to_ruby?", mrb_SDL_SDLSysWMinfo_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_SDLSysWMinfo_version_FIELD
  mrb_define_method(mrb, SDLSysWMinfo_class, "version", mrb_SDL_SDLSysWMinfo_get_version, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, SDLSysWMinfo_class, "version=", mrb_SDL_SDLSysWMinfo_set_version, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLSysWMinfo_subsystem_FIELD
  mrb_define_method(mrb, SDLSysWMinfo_class, "subsystem", mrb_SDL_SDLSysWMinfo_get_subsystem, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, SDLSysWMinfo_class, "subsystem=", mrb_SDL_SDLSysWMinfo_set_subsystem, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLSysWMinfo_info_FIELD
  mrb_define_method(mrb, SDLSysWMinfo_class, "info", mrb_SDL_SDLSysWMinfo_get_info, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, SDLSysWMinfo_class, "info=", mrb_SDL_SDLSysWMinfo_set_info, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
