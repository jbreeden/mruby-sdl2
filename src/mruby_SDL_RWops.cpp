/*
 * struct SDL_RWops
 * Defined in file SDL_rwops.h @ line 52
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_SDL.h"

#if BIND_SDLRWops_TYPE

/*
 * Class Methods
 */

#if BIND_SDLRWops_INITIALIZE
mrb_value
mrb_SDL_SDLRWops_initialize(mrb_state* mrb, mrb_value self) {
  struct SDL_RWops* native_object = (struct SDL_RWops*)malloc(sizeof(struct SDL_RWops));
  mruby_gift_struct SDL_RWops_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_SDL_SDLRWops_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLRWops.disown only accepts objects of type SDL::SDLRWops");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_SDL_SDLRWops_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLRWops.belongs_to_ruby only accepts objects of type SDL::SDLRWops");
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

#if BIND_SDLRWops_size_FIELD
/* get_size
 *
 * Return Type: Sint64 (*)(struct SDL_RWops *)
 */
mrb_value
mrb_SDL_SDLRWops_get_size(mrb_state* mrb, mrb_value self) {
  struct SDL_RWops * native_self = mruby_unbox_struct SDL_RWops(self);

  Sint64 (*)(struct SDL_RWops *) native_field = native_self->size;

  mrb_value ruby_field = TODO_mruby_box_Sint64_LPAREN_PTR_RPAREN_LPAREN_SDL_RWops_PTR_RPAREN(mrb, native_field);

  return ruby_field;
}

/* set_size
 *
 * Parameters:
 * - value: Sint64 (*)(struct SDL_RWops *)
 */
mrb_value
mrb_SDL_SDLRWops_set_size(mrb_state* mrb, mrb_value self) {
  struct SDL_RWops * native_self = mruby_unbox_struct SDL_RWops(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Sint64_LPAREN_PTR_RPAREN_LPAREN_SDL_RWops_PTR_RPAREN(ruby_field);

  Sint64 (*native_field)(struct SDL_RWops *) = TODO_mruby_unbox_Sint64_LPAREN_PTR_RPAREN_LPAREN_SDL_RWops_PTR_RPAREN(ruby_field);

  native_self->size = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLRWops_seek_FIELD
/* get_seek
 *
 * Return Type: Sint64 (*)(struct SDL_RWops *, Sint64, int)
 */
mrb_value
mrb_SDL_SDLRWops_get_seek(mrb_state* mrb, mrb_value self) {
  struct SDL_RWops * native_self = mruby_unbox_struct SDL_RWops(self);

  Sint64 (*)(struct SDL_RWops *, Sint64, int) native_field = native_self->seek;

  mrb_value ruby_field = TODO_mruby_box_Sint64_LPAREN_PTR_RPAREN_LPAREN_SDL_RWops_PTR_COMMA_Sint64COMMA_int_RPAREN(mrb, native_field);

  return ruby_field;
}

/* set_seek
 *
 * Parameters:
 * - value: Sint64 (*)(struct SDL_RWops *, Sint64, int)
 */
mrb_value
mrb_SDL_SDLRWops_set_seek(mrb_state* mrb, mrb_value self) {
  struct SDL_RWops * native_self = mruby_unbox_struct SDL_RWops(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Sint64_LPAREN_PTR_RPAREN_LPAREN_SDL_RWops_PTR_COMMA_Sint64COMMA_int_RPAREN(ruby_field);

  Sint64 (*native_field)(struct SDL_RWops *, Sint64, int) = TODO_mruby_unbox_Sint64_LPAREN_PTR_RPAREN_LPAREN_SDL_RWops_PTR_COMMA_Sint64COMMA_int_RPAREN(ruby_field);

  native_self->seek = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLRWops_read_FIELD
/* get_read
 *
 * Return Type: size_t (*)(struct SDL_RWops *, void *, size_t, size_t)
 */
mrb_value
mrb_SDL_SDLRWops_get_read(mrb_state* mrb, mrb_value self) {
  struct SDL_RWops * native_self = mruby_unbox_struct SDL_RWops(self);

  size_t (*)(struct SDL_RWops *, void *, size_t, size_t) native_field = native_self->read;

  mrb_value ruby_field = TODO_mruby_box_size_t_LPAREN_PTR_RPAREN_LPAREN_SDL_RWops_PTR_COMMA_void_PTR_COMMA_size_tCOMMA_size_t_RPAREN(mrb, native_field);

  return ruby_field;
}

/* set_read
 *
 * Parameters:
 * - value: size_t (*)(struct SDL_RWops *, void *, size_t, size_t)
 */
mrb_value
mrb_SDL_SDLRWops_set_read(mrb_state* mrb, mrb_value self) {
  struct SDL_RWops * native_self = mruby_unbox_struct SDL_RWops(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_size_t_LPAREN_PTR_RPAREN_LPAREN_SDL_RWops_PTR_COMMA_void_PTR_COMMA_size_tCOMMA_size_t_RPAREN(ruby_field);

  size_t (*native_field)(struct SDL_RWops *, void *, size_t, size_t) = TODO_mruby_unbox_size_t_LPAREN_PTR_RPAREN_LPAREN_SDL_RWops_PTR_COMMA_void_PTR_COMMA_size_tCOMMA_size_t_RPAREN(ruby_field);

  native_self->read = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLRWops_write_FIELD
/* get_write
 *
 * Return Type: size_t (*)(struct SDL_RWops *, const void *, size_t, size_t)
 */
mrb_value
mrb_SDL_SDLRWops_get_write(mrb_state* mrb, mrb_value self) {
  struct SDL_RWops * native_self = mruby_unbox_struct SDL_RWops(self);

  size_t (*)(struct SDL_RWops *, const void *, size_t, size_t) native_field = native_self->write;

  mrb_value ruby_field = TODO_mruby_box_size_t_LPAREN_PTR_RPAREN_LPAREN_SDL_RWops_PTR_COMMAvoid_PTR_COMMA_size_tCOMMA_size_t_RPAREN(mrb, native_field);

  return ruby_field;
}

/* set_write
 *
 * Parameters:
 * - value: size_t (*)(struct SDL_RWops *, const void *, size_t, size_t)
 */
mrb_value
mrb_SDL_SDLRWops_set_write(mrb_state* mrb, mrb_value self) {
  struct SDL_RWops * native_self = mruby_unbox_struct SDL_RWops(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_size_t_LPAREN_PTR_RPAREN_LPAREN_SDL_RWops_PTR_COMMAvoid_PTR_COMMA_size_tCOMMA_size_t_RPAREN(ruby_field);

  size_t (*native_field)(struct SDL_RWops *, const void *, size_t, size_t) = TODO_mruby_unbox_size_t_LPAREN_PTR_RPAREN_LPAREN_SDL_RWops_PTR_COMMAvoid_PTR_COMMA_size_tCOMMA_size_t_RPAREN(ruby_field);

  native_self->write = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLRWops_close_FIELD
/* get_close
 *
 * Return Type: int (*)(struct SDL_RWops *)
 */
mrb_value
mrb_SDL_SDLRWops_get_close(mrb_state* mrb, mrb_value self) {
  struct SDL_RWops * native_self = mruby_unbox_struct SDL_RWops(self);

  int (*)(struct SDL_RWops *) native_field = native_self->close;

  mrb_value ruby_field = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_SDL_RWops_PTR_RPAREN(mrb, native_field);

  return ruby_field;
}

/* set_close
 *
 * Parameters:
 * - value: int (*)(struct SDL_RWops *)
 */
mrb_value
mrb_SDL_SDLRWops_set_close(mrb_state* mrb, mrb_value self) {
  struct SDL_RWops * native_self = mruby_unbox_struct SDL_RWops(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_SDL_RWops_PTR_RPAREN(ruby_field);

  int (*native_field)(struct SDL_RWops *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_SDL_RWops_PTR_RPAREN(ruby_field);

  native_self->close = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLRWops_type_FIELD
/* get_type
 *
 * Return Type: Uint32
 */
mrb_value
mrb_SDL_SDLRWops_get_type(mrb_state* mrb, mrb_value self) {
  struct SDL_RWops * native_self = mruby_unbox_struct SDL_RWops(self);

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
mrb_SDL_SDLRWops_set_type(mrb_state* mrb, mrb_value self) {
  struct SDL_RWops * native_self = mruby_unbox_struct SDL_RWops(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Uint32(ruby_field);

  Uint32 native_field = TODO_mruby_unbox_Uint32(ruby_field);

  native_self->type = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLRWops_hidden_FIELD
/* get_hidden
 *
 * Return Type: union (anonymous union at ./headers/SDL_rwops.h:94:5)
 */
mrb_value
mrb_SDL_SDLRWops_get_hidden(mrb_state* mrb, mrb_value self) {
  struct SDL_RWops * native_self = mruby_unbox_struct SDL_RWops(self);

  union (anonymous union at ./headers/SDL_rwops.h:94:5) native_field = native_self->hidden;

  mrb_value ruby_field = TODO_mruby_box_union_LPAREN_anonymous_union_at_./headers/SDL_rwops.h:94:5_RPAREN(mrb, native_field);

  return ruby_field;
}

/* set_hidden
 *
 * Parameters:
 * - value: union (anonymous union at ./headers/SDL_rwops.h:94:5)
 */
mrb_value
mrb_SDL_SDLRWops_set_hidden(mrb_state* mrb, mrb_value self) {
  struct SDL_RWops * native_self = mruby_unbox_struct SDL_RWops(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_union_LPAREN_anonymous_union_at_./headers/SDL_rwops.h:94:5_RPAREN(ruby_field);

  union (anonymous union at ./headers/SDL_rwops.h:94:5) native_field = TODO_mruby_unbox_union_LPAREN_anonymous_union_at_./headers/SDL_rwops.h:94:5_RPAREN(ruby_field);

  native_self->hidden = native_field;

  return ruby_field;
}
#endif


void mrb_SDL_SDLRWops_init(mrb_state* mrb) {
  RClass* SDLRWops_class = mrb_define_class_under(mrb, SDL_module(mrb), "SDLRWops", mrb->object_class);
  MRB_SET_INSTANCE_TT(SDLRWops_class, MRB_TT_DATA);

#if BIND_SDLRWops_INITIALIZE
  mrb_define_method(mrb, SDLRWops_class, "initialize", mrb_SDL_SDLRWops_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, SDLRWops_class, "disown", mrb_SDL_SDLRWops_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, SDLRWops_class, "belongs_to_ruby?", mrb_SDL_SDLRWops_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_SDLRWops_size_FIELD
  mrb_define_method(mrb, SDLRWops_class, "size", mrb_SDL_SDLRWops_get_size, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, SDLRWops_class, "size=", mrb_SDL_SDLRWops_set_size, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLRWops_seek_FIELD
  mrb_define_method(mrb, SDLRWops_class, "seek", mrb_SDL_SDLRWops_get_seek, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, SDLRWops_class, "seek=", mrb_SDL_SDLRWops_set_seek, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLRWops_read_FIELD
  mrb_define_method(mrb, SDLRWops_class, "read", mrb_SDL_SDLRWops_get_read, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, SDLRWops_class, "read=", mrb_SDL_SDLRWops_set_read, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLRWops_write_FIELD
  mrb_define_method(mrb, SDLRWops_class, "write", mrb_SDL_SDLRWops_get_write, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, SDLRWops_class, "write=", mrb_SDL_SDLRWops_set_write, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLRWops_close_FIELD
  mrb_define_method(mrb, SDLRWops_class, "close", mrb_SDL_SDLRWops_get_close, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, SDLRWops_class, "close=", mrb_SDL_SDLRWops_set_close, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLRWops_type_FIELD
  mrb_define_method(mrb, SDLRWops_class, "type", mrb_SDL_SDLRWops_get_type, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, SDLRWops_class, "type=", mrb_SDL_SDLRWops_set_type, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLRWops_hidden_FIELD
  mrb_define_method(mrb, SDLRWops_class, "hidden", mrb_SDL_SDLRWops_get_hidden, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, SDLRWops_class, "hidden=", mrb_SDL_SDLRWops_set_hidden, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
