/*
 * struct SDL_AudioSpec
 * Defined in file SDL_audio.h @ line 165
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_SDL.h"

#if BIND_SDLAudioSpec_TYPE

/*
 * Class Methods
 */

#if BIND_SDLAudioSpec_INITIALIZE
mrb_value
mrb_SDL_SDLAudioSpec_initialize(mrb_state* mrb, mrb_value self) {
  struct SDL_AudioSpec* native_object = (struct SDL_AudioSpec*)malloc(sizeof(struct SDL_AudioSpec));
  mruby_gift_struct SDL_AudioSpec_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_SDL_SDLAudioSpec_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLAudioSpec.disown only accepts objects of type SDL::SDLAudioSpec");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_SDL_SDLAudioSpec_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL::SDLAudioSpec.belongs_to_ruby only accepts objects of type SDL::SDLAudioSpec");
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

#if BIND_SDLAudioSpec_freq_FIELD_READER
/* get_freq
 *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDLAudioSpec_get_freq(mrb_state* mrb, mrb_value self) {
  struct SDL_AudioSpec * native_self = mruby_unbox_struct SDL_AudioSpec(self);

  int native_field = native_self->freq;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLAudioSpec_freq_FIELD_WRITER
/* set_freq
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SDL_SDLAudioSpec_set_freq(mrb_state* mrb, mrb_value self) {
  struct SDL_AudioSpec * native_self = mruby_unbox_struct SDL_AudioSpec(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->freq = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLAudioSpec_format_FIELD_READER
/* get_format
 *
 * Return Type: SDL_AudioFormat
 */
mrb_value
mrb_SDL_SDLAudioSpec_get_format(mrb_state* mrb, mrb_value self) {
  struct SDL_AudioSpec * native_self = mruby_unbox_struct SDL_AudioSpec(self);

  SDL_AudioFormat native_field = native_self->format;

  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLAudioSpec_format_FIELD_WRITER
/* set_format
 *
 * Parameters:
 * - value: SDL_AudioFormat
 */
mrb_value
mrb_SDL_SDLAudioSpec_set_format(mrb_state* mrb, mrb_value self) {
  struct SDL_AudioSpec * native_self = mruby_unbox_struct SDL_AudioSpec(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) { mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected"); return mrb_nil_value(); }

  Uint16 native_field = mrb_fixnum(ruby_field);

  native_self->format = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLAudioSpec_channels_FIELD_READER
/* get_channels
 *
 * Return Type: Uint8
 */
mrb_value
mrb_SDL_SDLAudioSpec_get_channels(mrb_state* mrb, mrb_value self) {
  struct SDL_AudioSpec * native_self = mruby_unbox_struct SDL_AudioSpec(self);

  Uint8 native_field = native_self->channels;

  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLAudioSpec_channels_FIELD_WRITER
/* set_channels
 *
 * Parameters:
 * - value: Uint8
 */
mrb_value
mrb_SDL_SDLAudioSpec_set_channels(mrb_state* mrb, mrb_value self) {
  struct SDL_AudioSpec * native_self = mruby_unbox_struct SDL_AudioSpec(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) { mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected"); return mrb_nil_value(); }

  Uint8 native_field = mrb_fixnum(ruby_field);

  native_self->channels = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLAudioSpec_silence_FIELD_READER
/* get_silence
 *
 * Return Type: Uint8
 */
mrb_value
mrb_SDL_SDLAudioSpec_get_silence(mrb_state* mrb, mrb_value self) {
  struct SDL_AudioSpec * native_self = mruby_unbox_struct SDL_AudioSpec(self);

  Uint8 native_field = native_self->silence;

  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLAudioSpec_silence_FIELD_WRITER
/* set_silence
 *
 * Parameters:
 * - value: Uint8
 */
mrb_value
mrb_SDL_SDLAudioSpec_set_silence(mrb_state* mrb, mrb_value self) {
  struct SDL_AudioSpec * native_self = mruby_unbox_struct SDL_AudioSpec(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) { mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected"); return mrb_nil_value(); }

  Uint8 native_field = mrb_fixnum(ruby_field);

  native_self->silence = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLAudioSpec_samples_FIELD_READER
/* get_samples
 *
 * Return Type: Uint16
 */
mrb_value
mrb_SDL_SDLAudioSpec_get_samples(mrb_state* mrb, mrb_value self) {
  struct SDL_AudioSpec * native_self = mruby_unbox_struct SDL_AudioSpec(self);

  Uint16 native_field = native_self->samples;

  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLAudioSpec_samples_FIELD_WRITER
/* set_samples
 *
 * Parameters:
 * - value: Uint16
 */
mrb_value
mrb_SDL_SDLAudioSpec_set_samples(mrb_state* mrb, mrb_value self) {
  struct SDL_AudioSpec * native_self = mruby_unbox_struct SDL_AudioSpec(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) { mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected"); return mrb_nil_value(); }

  Uint16 native_field = mrb_fixnum(ruby_field);

  native_self->samples = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLAudioSpec_padding_FIELD_READER
/* get_padding
 *
 * Return Type: Uint16
 */
mrb_value
mrb_SDL_SDLAudioSpec_get_padding(mrb_state* mrb, mrb_value self) {
  struct SDL_AudioSpec * native_self = mruby_unbox_struct SDL_AudioSpec(self);

  Uint16 native_field = native_self->padding;

  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLAudioSpec_padding_FIELD_WRITER
/* set_padding
 *
 * Parameters:
 * - value: Uint16
 */
mrb_value
mrb_SDL_SDLAudioSpec_set_padding(mrb_state* mrb, mrb_value self) {
  struct SDL_AudioSpec * native_self = mruby_unbox_struct SDL_AudioSpec(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) { mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected"); return mrb_nil_value(); }

  Uint16 native_field = mrb_fixnum(ruby_field);

  native_self->padding = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLAudioSpec_size_FIELD_READER
/* get_size
 *
 * Return Type: Uint32
 */
mrb_value
mrb_SDL_SDLAudioSpec_get_size(mrb_state* mrb, mrb_value self) {
  struct SDL_AudioSpec * native_self = mruby_unbox_struct SDL_AudioSpec(self);

  Uint32 native_field = native_self->size;

  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SDLAudioSpec_size_FIELD_WRITER
/* set_size
 *
 * Parameters:
 * - value: Uint32
 */
mrb_value
mrb_SDL_SDLAudioSpec_set_size(mrb_state* mrb, mrb_value self) {
  struct SDL_AudioSpec * native_self = mruby_unbox_struct SDL_AudioSpec(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) { mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected"); return mrb_nil_value(); }

  Uint32 native_field = mrb_fixnum(ruby_field);

  native_self->size = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLAudioSpec_callback_FIELD_READER
/* get_callback
 *
 * Return Type: SDL_AudioCallback
 */
mrb_value
mrb_SDL_SDLAudioSpec_get_callback(mrb_state* mrb, mrb_value self) {
  struct SDL_AudioSpec * native_self = mruby_unbox_struct SDL_AudioSpec(self);

  SDL_AudioCallback native_field = native_self->callback;

  mrb_value ruby_field = TODO_mruby_box_SDL_AudioCallback(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLAudioSpec_callback_FIELD_WRITER
/* set_callback
 *
 * Parameters:
 * - value: SDL_AudioCallback
 */
mrb_value
mrb_SDL_SDLAudioSpec_set_callback(mrb_state* mrb, mrb_value self) {
  struct SDL_AudioSpec * native_self = mruby_unbox_struct SDL_AudioSpec(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_SDL_AudioCallback(ruby_field);

  SDL_AudioCallback native_field = TODO_mruby_unbox_SDL_AudioCallback(ruby_field);

  native_self->callback = native_field;

  return ruby_field;
}
#endif

#if BIND_SDLAudioSpec_userdata_FIELD_READER
/* get_userdata
 *
 * Return Type: void *
 */
mrb_value
mrb_SDL_SDLAudioSpec_get_userdata(mrb_state* mrb, mrb_value self) {
  struct SDL_AudioSpec * native_self = mruby_unbox_struct SDL_AudioSpec(self);

  void * native_field = native_self->userdata;

  mrb_value ruby_field = TODO_mruby_box_void_PTR(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_SDLAudioSpec_userdata_FIELD_WRITER
/* set_userdata
 *
 * Parameters:
 * - value: void *
 */
mrb_value
mrb_SDL_SDLAudioSpec_set_userdata(mrb_state* mrb, mrb_value self) {
  struct SDL_AudioSpec * native_self = mruby_unbox_struct SDL_AudioSpec(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_void_PTR(ruby_field);

  void * native_field = TODO_mruby_unbox_void_PTR(ruby_field);

  native_self->userdata = native_field;

  return ruby_field;
}
#endif


void mrb_SDL_SDLAudioSpec_init(mrb_state* mrb) {
  RClass* SDLAudioSpec_class = mrb_define_class_under(mrb, SDL_module(mrb), "AudioSpec", mrb->object_class);
  MRB_SET_INSTANCE_TT(SDLAudioSpec_class, MRB_TT_DATA);

#if BIND_SDLAudioSpec_INITIALIZE
  mrb_define_method(mrb, SDLAudioSpec_class, "initialize", mrb_SDL_SDLAudioSpec_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, SDLAudioSpec_class, "disown", mrb_SDL_SDLAudioSpec_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, SDLAudioSpec_class, "belongs_to_ruby?", mrb_SDL_SDLAudioSpec_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_SDLAudioSpec_freq_FIELD_READER
  mrb_define_method(mrb, SDLAudioSpec_class, "freq", mrb_SDL_SDLAudioSpec_get_freq, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLAudioSpec_freq_FIELD_WRITER
  mrb_define_method(mrb, SDLAudioSpec_class, "freq=", mrb_SDL_SDLAudioSpec_set_freq, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLAudioSpec_format_FIELD_READER
  mrb_define_method(mrb, SDLAudioSpec_class, "format", mrb_SDL_SDLAudioSpec_get_format, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLAudioSpec_format_FIELD_WRITER
  mrb_define_method(mrb, SDLAudioSpec_class, "format=", mrb_SDL_SDLAudioSpec_set_format, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLAudioSpec_channels_FIELD_READER
  mrb_define_method(mrb, SDLAudioSpec_class, "channels", mrb_SDL_SDLAudioSpec_get_channels, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLAudioSpec_channels_FIELD_WRITER
  mrb_define_method(mrb, SDLAudioSpec_class, "channels=", mrb_SDL_SDLAudioSpec_set_channels, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLAudioSpec_silence_FIELD_READER
  mrb_define_method(mrb, SDLAudioSpec_class, "silence", mrb_SDL_SDLAudioSpec_get_silence, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLAudioSpec_silence_FIELD_WRITER
  mrb_define_method(mrb, SDLAudioSpec_class, "silence=", mrb_SDL_SDLAudioSpec_set_silence, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLAudioSpec_samples_FIELD_READER
  mrb_define_method(mrb, SDLAudioSpec_class, "samples", mrb_SDL_SDLAudioSpec_get_samples, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLAudioSpec_samples_FIELD_WRITER
  mrb_define_method(mrb, SDLAudioSpec_class, "samples=", mrb_SDL_SDLAudioSpec_set_samples, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLAudioSpec_padding_FIELD_READER
  mrb_define_method(mrb, SDLAudioSpec_class, "padding", mrb_SDL_SDLAudioSpec_get_padding, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLAudioSpec_padding_FIELD_WRITER
  mrb_define_method(mrb, SDLAudioSpec_class, "padding=", mrb_SDL_SDLAudioSpec_set_padding, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLAudioSpec_size_FIELD_READER
  mrb_define_method(mrb, SDLAudioSpec_class, "size", mrb_SDL_SDLAudioSpec_get_size, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLAudioSpec_size_FIELD_WRITER
  mrb_define_method(mrb, SDLAudioSpec_class, "size=", mrb_SDL_SDLAudioSpec_set_size, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLAudioSpec_callback_FIELD_READER
  mrb_define_method(mrb, SDLAudioSpec_class, "callback", mrb_SDL_SDLAudioSpec_get_callback, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLAudioSpec_callback_FIELD_WRITER
  mrb_define_method(mrb, SDLAudioSpec_class, "callback=", mrb_SDL_SDLAudioSpec_set_callback, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SDLAudioSpec_userdata_FIELD_READER
  mrb_define_method(mrb, SDLAudioSpec_class, "userdata", mrb_SDL_SDLAudioSpec_get_userdata, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SDLAudioSpec_userdata_FIELD_WRITER
  mrb_define_method(mrb, SDLAudioSpec_class, "userdata=", mrb_SDL_SDLAudioSpec_set_userdata, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
