/*
 * struct SDL_AudioCVT
 * Defined in file SDL_audio.h @ line 179
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_SDL.h"

#if BIND_SDLAudioCVT_TYPE

/*
 * Class Methods
 */

#if BIND_SDLAudioCVT_INITIALIZE
mrb_value
mrb_SDL_SDLAudioCVT_initialize(mrb_state* mrb, mrb_value self) {
  struct SDL_AudioCVT* native_object = (struct SDL_AudioCVT*)malloc(sizeof(struct SDL_AudioCVT));
  mruby_gift_struct SDL_AudioCVT_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_SDL_SDLAudioCVT_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLAudioCVT.disown only accepts objects of type SDL::SDLAudioCVT");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_SDL_SDLAudioCVT_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLAudioCVT.belongs_to_ruby only accepts objects of type SDL::SDLAudioCVT");
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

#if BIND_SDLAudioCVT_needed_FIELD_READER
/* get_needed
 *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDLAudioCVT_get_needed(mrb_state* mrb, mrb_value self) {
  struct SDL_AudioCVT * native_self = mruby_unbox_struct SDL_AudioCVT(self);

  int native_field = native_self->needed;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLAudioCVT_needed_FIELD_WRITER
/* set_needed
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SDL_SDLAudioCVT_set_needed(mrb_state* mrb, mrb_value self) {
  struct SDL_AudioCVT * native_self = mruby_unbox_struct SDL_AudioCVT(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->needed = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLAudioCVT_src_format_FIELD_READER
/* get_src_format
 *
 * Return Type: SDL_AudioFormat
 */
mrb_value
mrb_SDL_SDLAudioCVT_get_src_format(mrb_state* mrb, mrb_value self) {
  struct SDL_AudioCVT * native_self = mruby_unbox_struct SDL_AudioCVT(self);

  SDL_AudioFormat native_field = native_self->src_format;

  mrb_value ruby_field = TODO_mruby_box_Uint16(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLAudioCVT_src_format_FIELD_WRITER
/* set_src_format
 *
 * Parameters:
 * - value: SDL_AudioFormat
 */
mrb_value
mrb_SDL_SDLAudioCVT_set_src_format(mrb_state* mrb, mrb_value self) {
  struct SDL_AudioCVT * native_self = mruby_unbox_struct SDL_AudioCVT(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Uint16(ruby_field);

  Uint16 native_field = TODO_mruby_unbox_Uint16(ruby_field);

  native_self->src_format = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLAudioCVT_dst_format_FIELD_READER
/* get_dst_format
 *
 * Return Type: SDL_AudioFormat
 */
mrb_value
mrb_SDL_SDLAudioCVT_get_dst_format(mrb_state* mrb, mrb_value self) {
  struct SDL_AudioCVT * native_self = mruby_unbox_struct SDL_AudioCVT(self);

  SDL_AudioFormat native_field = native_self->dst_format;

  mrb_value ruby_field = TODO_mruby_box_Uint16(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLAudioCVT_dst_format_FIELD_WRITER
/* set_dst_format
 *
 * Parameters:
 * - value: SDL_AudioFormat
 */
mrb_value
mrb_SDL_SDLAudioCVT_set_dst_format(mrb_state* mrb, mrb_value self) {
  struct SDL_AudioCVT * native_self = mruby_unbox_struct SDL_AudioCVT(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Uint16(ruby_field);

  Uint16 native_field = TODO_mruby_unbox_Uint16(ruby_field);

  native_self->dst_format = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLAudioCVT_rate_incr_FIELD_READER
/* get_rate_incr
 *
 * Return Type: double
 */
mrb_value
mrb_SDL_SDLAudioCVT_get_rate_incr(mrb_state* mrb, mrb_value self) {
  struct SDL_AudioCVT * native_self = mruby_unbox_struct SDL_AudioCVT(self);

  double native_field = native_self->rate_incr;

  mrb_value ruby_field = mrb_float_value(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLAudioCVT_rate_incr_FIELD_WRITER
/* set_rate_incr
 *
 * Parameters:
 * - value: double
 */
mrb_value
mrb_SDL_SDLAudioCVT_set_rate_incr(mrb_state* mrb, mrb_value self) {
  struct SDL_AudioCVT * native_self = mruby_unbox_struct SDL_AudioCVT(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->float_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Float expected");
    return mrb_nil_value();
  }

  double native_field = mrb_float(ruby_field);

  native_self->rate_incr = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLAudioCVT_buf_FIELD_READER
/* get_buf
 *
 * Return Type: Uint8 *
 */
mrb_value
mrb_SDL_SDLAudioCVT_get_buf(mrb_state* mrb, mrb_value self) {
  struct SDL_AudioCVT * native_self = mruby_unbox_struct SDL_AudioCVT(self);

  Uint8 * native_field = native_self->buf;

  mrb_value ruby_field = TODO_mruby_box_Uint8_PTR(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLAudioCVT_buf_FIELD_WRITER
/* set_buf
 *
 * Parameters:
 * - value: Uint8 *
 */
mrb_value
mrb_SDL_SDLAudioCVT_set_buf(mrb_state* mrb, mrb_value self) {
  struct SDL_AudioCVT * native_self = mruby_unbox_struct SDL_AudioCVT(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_Uint8_PTR(ruby_field);

  Uint8 * native_field = TODO_mruby_unbox_Uint8_PTR(ruby_field);

  native_self->buf = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLAudioCVT_len_FIELD_READER
/* get_len
 *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDLAudioCVT_get_len(mrb_state* mrb, mrb_value self) {
  struct SDL_AudioCVT * native_self = mruby_unbox_struct SDL_AudioCVT(self);

  int native_field = native_self->len;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLAudioCVT_len_FIELD_WRITER
/* set_len
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SDL_SDLAudioCVT_set_len(mrb_state* mrb, mrb_value self) {
  struct SDL_AudioCVT * native_self = mruby_unbox_struct SDL_AudioCVT(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->len = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLAudioCVT_len_cvt_FIELD_READER
/* get_len_cvt
 *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDLAudioCVT_get_len_cvt(mrb_state* mrb, mrb_value self) {
  struct SDL_AudioCVT * native_self = mruby_unbox_struct SDL_AudioCVT(self);

  int native_field = native_self->len_cvt;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLAudioCVT_len_cvt_FIELD_WRITER
/* set_len_cvt
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SDL_SDLAudioCVT_set_len_cvt(mrb_state* mrb, mrb_value self) {
  struct SDL_AudioCVT * native_self = mruby_unbox_struct SDL_AudioCVT(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->len_cvt = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLAudioCVT_len_mult_FIELD_READER
/* get_len_mult
 *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDLAudioCVT_get_len_mult(mrb_state* mrb, mrb_value self) {
  struct SDL_AudioCVT * native_self = mruby_unbox_struct SDL_AudioCVT(self);

  int native_field = native_self->len_mult;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLAudioCVT_len_mult_FIELD_WRITER
/* set_len_mult
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SDL_SDLAudioCVT_set_len_mult(mrb_state* mrb, mrb_value self) {
  struct SDL_AudioCVT * native_self = mruby_unbox_struct SDL_AudioCVT(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->len_mult = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLAudioCVT_len_ratio_FIELD_READER
/* get_len_ratio
 *
 * Return Type: double
 */
mrb_value
mrb_SDL_SDLAudioCVT_get_len_ratio(mrb_state* mrb, mrb_value self) {
  struct SDL_AudioCVT * native_self = mruby_unbox_struct SDL_AudioCVT(self);

  double native_field = native_self->len_ratio;

  mrb_value ruby_field = mrb_float_value(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLAudioCVT_len_ratio_FIELD_WRITER
/* set_len_ratio
 *
 * Parameters:
 * - value: double
 */
mrb_value
mrb_SDL_SDLAudioCVT_set_len_ratio(mrb_state* mrb, mrb_value self) {
  struct SDL_AudioCVT * native_self = mruby_unbox_struct SDL_AudioCVT(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->float_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Float expected");
    return mrb_nil_value();
  }

  double native_field = mrb_float(ruby_field);

  native_self->len_ratio = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLAudioCVT_filters_FIELD_READER
/* get_filters
 *
 * Return Type: SDL_AudioFilter [10]
 */
mrb_value
mrb_SDL_SDLAudioCVT_get_filters(mrb_state* mrb, mrb_value self) {
  struct SDL_AudioCVT * native_self = mruby_unbox_struct SDL_AudioCVT(self);

  SDL_AudioFilter [10] native_field = native_self->filters;

  mrb_value ruby_field = TODO_mruby_box_SDL_AudioFilter_[10](mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLAudioCVT_filters_FIELD_WRITER
/* set_filters
 *
 * Parameters:
 * - value: SDL_AudioFilter [10]
 */
mrb_value
mrb_SDL_SDLAudioCVT_set_filters(mrb_state* mrb, mrb_value self) {
  struct SDL_AudioCVT * native_self = mruby_unbox_struct SDL_AudioCVT(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_SDL_AudioFilter_[10](ruby_field);

  SDL_AudioFilter [10] native_field = TODO_mruby_unbox_SDL_AudioFilter_[10](ruby_field);

  native_self->filters = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLAudioCVT_filter_index_FIELD_READER
/* get_filter_index
 *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDLAudioCVT_get_filter_index(mrb_state* mrb, mrb_value self) {
  struct SDL_AudioCVT * native_self = mruby_unbox_struct SDL_AudioCVT(self);

  int native_field = native_self->filter_index;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLAudioCVT_filter_index_FIELD_WRITER
/* set_filter_index
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SDL_SDLAudioCVT_set_filter_index(mrb_state* mrb, mrb_value self) {
  struct SDL_AudioCVT * native_self = mruby_unbox_struct SDL_AudioCVT(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->filter_index = native_field;

  return ruby_field;
}
#endif


void mrb_SDL_SDLAudioCVT_init(mrb_state* mrb) {
  RClass* SDLAudioCVT_class = mrb_define_class_under(mrb, SDL_module(mrb), "SDLAudioCVT", mrb->object_class);
  MRB_SET_INSTANCE_TT(SDLAudioCVT_class, MRB_TT_DATA);

#if BIND_SDLAudioCVT_INITIALIZE
  mrb_define_method(mrb, SDLAudioCVT_class, "initialize", mrb_SDL_SDLAudioCVT_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, SDLAudioCVT_class, "disown", mrb_SDL_SDLAudioCVT_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, SDLAudioCVT_class, "belongs_to_ruby?", mrb_SDL_SDLAudioCVT_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_SDLAudioCVT_needed_FIELD_READER
  mrb_define_method(mrb, SDLAudioCVT_class, "needed", mrb_SDL_SDLAudioCVT_get_needed, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLAudioCVT_needed_FIELD_WRITER
  mrb_define_method(mrb, SDLAudioCVT_class, "needed=", mrb_SDL_SDLAudioCVT_set_needed, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLAudioCVT_src_format_FIELD_READER
  mrb_define_method(mrb, SDLAudioCVT_class, "src_format", mrb_SDL_SDLAudioCVT_get_src_format, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLAudioCVT_src_format_FIELD_WRITER
  mrb_define_method(mrb, SDLAudioCVT_class, "src_format=", mrb_SDL_SDLAudioCVT_set_src_format, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLAudioCVT_dst_format_FIELD_READER
  mrb_define_method(mrb, SDLAudioCVT_class, "dst_format", mrb_SDL_SDLAudioCVT_get_dst_format, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLAudioCVT_dst_format_FIELD_WRITER
  mrb_define_method(mrb, SDLAudioCVT_class, "dst_format=", mrb_SDL_SDLAudioCVT_set_dst_format, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLAudioCVT_rate_incr_FIELD_READER
  mrb_define_method(mrb, SDLAudioCVT_class, "rate_incr", mrb_SDL_SDLAudioCVT_get_rate_incr, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLAudioCVT_rate_incr_FIELD_WRITER
  mrb_define_method(mrb, SDLAudioCVT_class, "rate_incr=", mrb_SDL_SDLAudioCVT_set_rate_incr, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLAudioCVT_buf_FIELD_READER
  mrb_define_method(mrb, SDLAudioCVT_class, "buf", mrb_SDL_SDLAudioCVT_get_buf, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLAudioCVT_buf_FIELD_WRITER
  mrb_define_method(mrb, SDLAudioCVT_class, "buf=", mrb_SDL_SDLAudioCVT_set_buf, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLAudioCVT_len_FIELD_READER
  mrb_define_method(mrb, SDLAudioCVT_class, "len", mrb_SDL_SDLAudioCVT_get_len, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLAudioCVT_len_FIELD_WRITER
  mrb_define_method(mrb, SDLAudioCVT_class, "len=", mrb_SDL_SDLAudioCVT_set_len, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLAudioCVT_len_cvt_FIELD_READER
  mrb_define_method(mrb, SDLAudioCVT_class, "len_cvt", mrb_SDL_SDLAudioCVT_get_len_cvt, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLAudioCVT_len_cvt_FIELD_WRITER
  mrb_define_method(mrb, SDLAudioCVT_class, "len_cvt=", mrb_SDL_SDLAudioCVT_set_len_cvt, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLAudioCVT_len_mult_FIELD_READER
  mrb_define_method(mrb, SDLAudioCVT_class, "len_mult", mrb_SDL_SDLAudioCVT_get_len_mult, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLAudioCVT_len_mult_FIELD_WRITER
  mrb_define_method(mrb, SDLAudioCVT_class, "len_mult=", mrb_SDL_SDLAudioCVT_set_len_mult, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLAudioCVT_len_ratio_FIELD_READER
  mrb_define_method(mrb, SDLAudioCVT_class, "len_ratio", mrb_SDL_SDLAudioCVT_get_len_ratio, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLAudioCVT_len_ratio_FIELD_WRITER
  mrb_define_method(mrb, SDLAudioCVT_class, "len_ratio=", mrb_SDL_SDLAudioCVT_set_len_ratio, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLAudioCVT_filters_FIELD_READER
  mrb_define_method(mrb, SDLAudioCVT_class, "filters", mrb_SDL_SDLAudioCVT_get_filters, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLAudioCVT_filters_FIELD_WRITER
  mrb_define_method(mrb, SDLAudioCVT_class, "filters=", mrb_SDL_SDLAudioCVT_set_filters, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLAudioCVT_filter_index_FIELD_READER
  mrb_define_method(mrb, SDLAudioCVT_class, "filter_index", mrb_SDL_SDLAudioCVT_get_filter_index, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLAudioCVT_filter_index_FIELD_WRITER
  mrb_define_method(mrb, SDLAudioCVT_class, "filter_index=", mrb_SDL_SDLAudioCVT_set_filter_index, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
