/*
 * TODO: INCLUDES
 */

#include "mruby_SDL.h"

#ifdef __cplusplus
extern "C" {
#endif

#if BIND_IMG_Init_FUNCTION
#define IMG_Init_REQUIRED_ARGC 1
#define IMG_Init_OPTIONAL_ARGC 0
/* IMG_Init
 *
 * Parameters:
 * - flags: int
 * Return Type: int
 */
mrb_value
mrb_SDL_IMG_Init(mrb_state* mrb, mrb_value self) {
  mrb_value flags;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &flags);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, flags, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_flags = mrb_fixnum(flags);

  /* Invocation */
  int result = IMG_Init(native_flags);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_IMG_isBMP_FUNCTION
#define IMG_isBMP_REQUIRED_ARGC 1
#define IMG_isBMP_OPTIONAL_ARGC 0
/* IMG_isBMP
 *
 * Parameters:
 * - src: struct SDL_RWops *
 * Return Type: int
 */
mrb_value
mrb_SDL_IMG_isBMP(mrb_state* mrb, mrb_value self) {
  mrb_value src;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &src);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, src, SDLRWops_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRWops expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_RWops * native_src = (mrb_nil_p(src) ? NULL : mruby_unbox_SDL_RWops(src));

  /* Invocation */
  int result = IMG_isBMP(native_src);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_IMG_isCUR_FUNCTION
#define IMG_isCUR_REQUIRED_ARGC 1
#define IMG_isCUR_OPTIONAL_ARGC 0
/* IMG_isCUR
 *
 * Parameters:
 * - src: struct SDL_RWops *
 * Return Type: int
 */
mrb_value
mrb_SDL_IMG_isCUR(mrb_state* mrb, mrb_value self) {
  mrb_value src;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &src);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, src, SDLRWops_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRWops expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_RWops * native_src = (mrb_nil_p(src) ? NULL : mruby_unbox_SDL_RWops(src));

  /* Invocation */
  int result = IMG_isCUR(native_src);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_IMG_isGIF_FUNCTION
#define IMG_isGIF_REQUIRED_ARGC 1
#define IMG_isGIF_OPTIONAL_ARGC 0
/* IMG_isGIF
 *
 * Parameters:
 * - src: struct SDL_RWops *
 * Return Type: int
 */
mrb_value
mrb_SDL_IMG_isGIF(mrb_state* mrb, mrb_value self) {
  mrb_value src;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &src);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, src, SDLRWops_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRWops expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_RWops * native_src = (mrb_nil_p(src) ? NULL : mruby_unbox_SDL_RWops(src));

  /* Invocation */
  int result = IMG_isGIF(native_src);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_IMG_isICO_FUNCTION
#define IMG_isICO_REQUIRED_ARGC 1
#define IMG_isICO_OPTIONAL_ARGC 0
/* IMG_isICO
 *
 * Parameters:
 * - src: struct SDL_RWops *
 * Return Type: int
 */
mrb_value
mrb_SDL_IMG_isICO(mrb_state* mrb, mrb_value self) {
  mrb_value src;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &src);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, src, SDLRWops_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRWops expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_RWops * native_src = (mrb_nil_p(src) ? NULL : mruby_unbox_SDL_RWops(src));

  /* Invocation */
  int result = IMG_isICO(native_src);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_IMG_isJPG_FUNCTION
#define IMG_isJPG_REQUIRED_ARGC 1
#define IMG_isJPG_OPTIONAL_ARGC 0
/* IMG_isJPG
 *
 * Parameters:
 * - src: struct SDL_RWops *
 * Return Type: int
 */
mrb_value
mrb_SDL_IMG_isJPG(mrb_state* mrb, mrb_value self) {
  mrb_value src;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &src);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, src, SDLRWops_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRWops expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_RWops * native_src = (mrb_nil_p(src) ? NULL : mruby_unbox_SDL_RWops(src));

  /* Invocation */
  int result = IMG_isJPG(native_src);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_IMG_isLBM_FUNCTION
#define IMG_isLBM_REQUIRED_ARGC 1
#define IMG_isLBM_OPTIONAL_ARGC 0
/* IMG_isLBM
 *
 * Parameters:
 * - src: struct SDL_RWops *
 * Return Type: int
 */
mrb_value
mrb_SDL_IMG_isLBM(mrb_state* mrb, mrb_value self) {
  mrb_value src;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &src);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, src, SDLRWops_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRWops expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_RWops * native_src = (mrb_nil_p(src) ? NULL : mruby_unbox_SDL_RWops(src));

  /* Invocation */
  int result = IMG_isLBM(native_src);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_IMG_isPCX_FUNCTION
#define IMG_isPCX_REQUIRED_ARGC 1
#define IMG_isPCX_OPTIONAL_ARGC 0
/* IMG_isPCX
 *
 * Parameters:
 * - src: struct SDL_RWops *
 * Return Type: int
 */
mrb_value
mrb_SDL_IMG_isPCX(mrb_state* mrb, mrb_value self) {
  mrb_value src;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &src);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, src, SDLRWops_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRWops expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_RWops * native_src = (mrb_nil_p(src) ? NULL : mruby_unbox_SDL_RWops(src));

  /* Invocation */
  int result = IMG_isPCX(native_src);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_IMG_isPNG_FUNCTION
#define IMG_isPNG_REQUIRED_ARGC 1
#define IMG_isPNG_OPTIONAL_ARGC 0
/* IMG_isPNG
 *
 * Parameters:
 * - src: struct SDL_RWops *
 * Return Type: int
 */
mrb_value
mrb_SDL_IMG_isPNG(mrb_state* mrb, mrb_value self) {
  mrb_value src;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &src);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, src, SDLRWops_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRWops expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_RWops * native_src = (mrb_nil_p(src) ? NULL : mruby_unbox_SDL_RWops(src));

  /* Invocation */
  int result = IMG_isPNG(native_src);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_IMG_isPNM_FUNCTION
#define IMG_isPNM_REQUIRED_ARGC 1
#define IMG_isPNM_OPTIONAL_ARGC 0
/* IMG_isPNM
 *
 * Parameters:
 * - src: struct SDL_RWops *
 * Return Type: int
 */
mrb_value
mrb_SDL_IMG_isPNM(mrb_state* mrb, mrb_value self) {
  mrb_value src;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &src);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, src, SDLRWops_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRWops expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_RWops * native_src = (mrb_nil_p(src) ? NULL : mruby_unbox_SDL_RWops(src));

  /* Invocation */
  int result = IMG_isPNM(native_src);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_IMG_isTIF_FUNCTION
#define IMG_isTIF_REQUIRED_ARGC 1
#define IMG_isTIF_OPTIONAL_ARGC 0
/* IMG_isTIF
 *
 * Parameters:
 * - src: struct SDL_RWops *
 * Return Type: int
 */
mrb_value
mrb_SDL_IMG_isTIF(mrb_state* mrb, mrb_value self) {
  mrb_value src;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &src);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, src, SDLRWops_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRWops expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_RWops * native_src = (mrb_nil_p(src) ? NULL : mruby_unbox_SDL_RWops(src));

  /* Invocation */
  int result = IMG_isTIF(native_src);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_IMG_isWEBP_FUNCTION
#define IMG_isWEBP_REQUIRED_ARGC 1
#define IMG_isWEBP_OPTIONAL_ARGC 0
/* IMG_isWEBP
 *
 * Parameters:
 * - src: struct SDL_RWops *
 * Return Type: int
 */
mrb_value
mrb_SDL_IMG_isWEBP(mrb_state* mrb, mrb_value self) {
  mrb_value src;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &src);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, src, SDLRWops_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRWops expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_RWops * native_src = (mrb_nil_p(src) ? NULL : mruby_unbox_SDL_RWops(src));

  /* Invocation */
  int result = IMG_isWEBP(native_src);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_IMG_isXCF_FUNCTION
#define IMG_isXCF_REQUIRED_ARGC 1
#define IMG_isXCF_OPTIONAL_ARGC 0
/* IMG_isXCF
 *
 * Parameters:
 * - src: struct SDL_RWops *
 * Return Type: int
 */
mrb_value
mrb_SDL_IMG_isXCF(mrb_state* mrb, mrb_value self) {
  mrb_value src;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &src);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, src, SDLRWops_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRWops expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_RWops * native_src = (mrb_nil_p(src) ? NULL : mruby_unbox_SDL_RWops(src));

  /* Invocation */
  int result = IMG_isXCF(native_src);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_IMG_isXPM_FUNCTION
#define IMG_isXPM_REQUIRED_ARGC 1
#define IMG_isXPM_OPTIONAL_ARGC 0
/* IMG_isXPM
 *
 * Parameters:
 * - src: struct SDL_RWops *
 * Return Type: int
 */
mrb_value
mrb_SDL_IMG_isXPM(mrb_state* mrb, mrb_value self) {
  mrb_value src;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &src);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, src, SDLRWops_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRWops expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_RWops * native_src = (mrb_nil_p(src) ? NULL : mruby_unbox_SDL_RWops(src));

  /* Invocation */
  int result = IMG_isXPM(native_src);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_IMG_isXV_FUNCTION
#define IMG_isXV_REQUIRED_ARGC 1
#define IMG_isXV_OPTIONAL_ARGC 0
/* IMG_isXV
 *
 * Parameters:
 * - src: struct SDL_RWops *
 * Return Type: int
 */
mrb_value
mrb_SDL_IMG_isXV(mrb_state* mrb, mrb_value self) {
  mrb_value src;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &src);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, src, SDLRWops_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRWops expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_RWops * native_src = (mrb_nil_p(src) ? NULL : mruby_unbox_SDL_RWops(src));

  /* Invocation */
  int result = IMG_isXV(native_src);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_IMG_Linked_Version_FUNCTION
#define IMG_Linked_Version_REQUIRED_ARGC 0
#define IMG_Linked_Version_OPTIONAL_ARGC 0
/* IMG_Linked_Version
 *
 * Parameters: None
 * Return Type: const SDL_version *
 */
mrb_value
mrb_SDL_IMG_Linked_Version(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  const SDL_version * result = IMG_Linked_Version();

  /* Box the return value */
  mrb_value return_value = (result == NULL ? mrb_nil_value() : mruby_box_SDL_version(mrb, result));

  return return_value;
}
#endif

#if BIND_IMG_Load_FUNCTION
#define IMG_Load_REQUIRED_ARGC 1
#define IMG_Load_OPTIONAL_ARGC 0
/* IMG_Load
 *
 * Parameters:
 * - file: const char *
 * Return Type: SDL_Surface *
 */
mrb_value
mrb_SDL_IMG_Load(mrb_state* mrb, mrb_value self) {
  mrb_value file;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &file);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, file, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  const char * native_file = mrb_string_value_cstr(mrb, &file);

  /* Invocation */
  SDL_Surface * result = IMG_Load(native_file);

  /* Box the return value */
  mrb_value return_value = (result == NULL ? mrb_nil_value() : mruby_box_SDL_Surface(mrb, result));

  return return_value;
}
#endif

#if BIND_IMG_Load_RW_FUNCTION
#define IMG_Load_RW_REQUIRED_ARGC 2
#define IMG_Load_RW_OPTIONAL_ARGC 0
/* IMG_Load_RW
 *
 * Parameters:
 * - src: struct SDL_RWops *
 * - freesrc: int
 * Return Type: SDL_Surface *
 */
mrb_value
mrb_SDL_IMG_Load_RW(mrb_state* mrb, mrb_value self) {
  mrb_value src;
  mrb_value freesrc;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &src, &freesrc);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, src, SDLRWops_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRWops expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, freesrc, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_RWops * native_src = (mrb_nil_p(src) ? NULL : mruby_unbox_SDL_RWops(src));

  int native_freesrc = mrb_fixnum(freesrc);

  /* Invocation */
  SDL_Surface * result = IMG_Load_RW(native_src, native_freesrc);

  /* Box the return value */
  mrb_value return_value = (result == NULL ? mrb_nil_value() : mruby_box_SDL_Surface(mrb, result));

  return return_value;
}
#endif

#if BIND_IMG_LoadBMP_RW_FUNCTION
#define IMG_LoadBMP_RW_REQUIRED_ARGC 1
#define IMG_LoadBMP_RW_OPTIONAL_ARGC 0
/* IMG_LoadBMP_RW
 *
 * Parameters:
 * - src: struct SDL_RWops *
 * Return Type: SDL_Surface *
 */
mrb_value
mrb_SDL_IMG_LoadBMP_RW(mrb_state* mrb, mrb_value self) {
  mrb_value src;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &src);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, src, SDLRWops_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRWops expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_RWops * native_src = (mrb_nil_p(src) ? NULL : mruby_unbox_SDL_RWops(src));

  /* Invocation */
  SDL_Surface * result = IMG_LoadBMP_RW(native_src);

  /* Box the return value */
  mrb_value return_value = (result == NULL ? mrb_nil_value() : mruby_box_SDL_Surface(mrb, result));

  return return_value;
}
#endif

#if BIND_IMG_LoadCUR_RW_FUNCTION
#define IMG_LoadCUR_RW_REQUIRED_ARGC 1
#define IMG_LoadCUR_RW_OPTIONAL_ARGC 0
/* IMG_LoadCUR_RW
 *
 * Parameters:
 * - src: struct SDL_RWops *
 * Return Type: SDL_Surface *
 */
mrb_value
mrb_SDL_IMG_LoadCUR_RW(mrb_state* mrb, mrb_value self) {
  mrb_value src;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &src);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, src, SDLRWops_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRWops expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_RWops * native_src = (mrb_nil_p(src) ? NULL : mruby_unbox_SDL_RWops(src));

  /* Invocation */
  SDL_Surface * result = IMG_LoadCUR_RW(native_src);

  /* Box the return value */
  mrb_value return_value = (result == NULL ? mrb_nil_value() : mruby_box_SDL_Surface(mrb, result));

  return return_value;
}
#endif

#if BIND_IMG_LoadGIF_RW_FUNCTION
#define IMG_LoadGIF_RW_REQUIRED_ARGC 1
#define IMG_LoadGIF_RW_OPTIONAL_ARGC 0
/* IMG_LoadGIF_RW
 *
 * Parameters:
 * - src: struct SDL_RWops *
 * Return Type: SDL_Surface *
 */
mrb_value
mrb_SDL_IMG_LoadGIF_RW(mrb_state* mrb, mrb_value self) {
  mrb_value src;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &src);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, src, SDLRWops_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRWops expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_RWops * native_src = (mrb_nil_p(src) ? NULL : mruby_unbox_SDL_RWops(src));

  /* Invocation */
  SDL_Surface * result = IMG_LoadGIF_RW(native_src);

  /* Box the return value */
  mrb_value return_value = (result == NULL ? mrb_nil_value() : mruby_box_SDL_Surface(mrb, result));

  return return_value;
}
#endif

#if BIND_IMG_LoadICO_RW_FUNCTION
#define IMG_LoadICO_RW_REQUIRED_ARGC 1
#define IMG_LoadICO_RW_OPTIONAL_ARGC 0
/* IMG_LoadICO_RW
 *
 * Parameters:
 * - src: struct SDL_RWops *
 * Return Type: SDL_Surface *
 */
mrb_value
mrb_SDL_IMG_LoadICO_RW(mrb_state* mrb, mrb_value self) {
  mrb_value src;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &src);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, src, SDLRWops_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRWops expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_RWops * native_src = (mrb_nil_p(src) ? NULL : mruby_unbox_SDL_RWops(src));

  /* Invocation */
  SDL_Surface * result = IMG_LoadICO_RW(native_src);

  /* Box the return value */
  mrb_value return_value = (result == NULL ? mrb_nil_value() : mruby_box_SDL_Surface(mrb, result));

  return return_value;
}
#endif

#if BIND_IMG_LoadJPG_RW_FUNCTION
#define IMG_LoadJPG_RW_REQUIRED_ARGC 1
#define IMG_LoadJPG_RW_OPTIONAL_ARGC 0
/* IMG_LoadJPG_RW
 *
 * Parameters:
 * - src: struct SDL_RWops *
 * Return Type: SDL_Surface *
 */
mrb_value
mrb_SDL_IMG_LoadJPG_RW(mrb_state* mrb, mrb_value self) {
  mrb_value src;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &src);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, src, SDLRWops_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRWops expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_RWops * native_src = (mrb_nil_p(src) ? NULL : mruby_unbox_SDL_RWops(src));

  /* Invocation */
  SDL_Surface * result = IMG_LoadJPG_RW(native_src);

  /* Box the return value */
  mrb_value return_value = (result == NULL ? mrb_nil_value() : mruby_box_SDL_Surface(mrb, result));

  return return_value;
}
#endif

#if BIND_IMG_LoadLBM_RW_FUNCTION
#define IMG_LoadLBM_RW_REQUIRED_ARGC 1
#define IMG_LoadLBM_RW_OPTIONAL_ARGC 0
/* IMG_LoadLBM_RW
 *
 * Parameters:
 * - src: struct SDL_RWops *
 * Return Type: SDL_Surface *
 */
mrb_value
mrb_SDL_IMG_LoadLBM_RW(mrb_state* mrb, mrb_value self) {
  mrb_value src;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &src);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, src, SDLRWops_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRWops expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_RWops * native_src = (mrb_nil_p(src) ? NULL : mruby_unbox_SDL_RWops(src));

  /* Invocation */
  SDL_Surface * result = IMG_LoadLBM_RW(native_src);

  /* Box the return value */
  mrb_value return_value = (result == NULL ? mrb_nil_value() : mruby_box_SDL_Surface(mrb, result));

  return return_value;
}
#endif

#if BIND_IMG_LoadPCX_RW_FUNCTION
#define IMG_LoadPCX_RW_REQUIRED_ARGC 1
#define IMG_LoadPCX_RW_OPTIONAL_ARGC 0
/* IMG_LoadPCX_RW
 *
 * Parameters:
 * - src: struct SDL_RWops *
 * Return Type: SDL_Surface *
 */
mrb_value
mrb_SDL_IMG_LoadPCX_RW(mrb_state* mrb, mrb_value self) {
  mrb_value src;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &src);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, src, SDLRWops_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRWops expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_RWops * native_src = (mrb_nil_p(src) ? NULL : mruby_unbox_SDL_RWops(src));

  /* Invocation */
  SDL_Surface * result = IMG_LoadPCX_RW(native_src);

  /* Box the return value */
  mrb_value return_value = (result == NULL ? mrb_nil_value() : mruby_box_SDL_Surface(mrb, result));

  return return_value;
}
#endif

#if BIND_IMG_LoadPNG_RW_FUNCTION
#define IMG_LoadPNG_RW_REQUIRED_ARGC 1
#define IMG_LoadPNG_RW_OPTIONAL_ARGC 0
/* IMG_LoadPNG_RW
 *
 * Parameters:
 * - src: struct SDL_RWops *
 * Return Type: SDL_Surface *
 */
mrb_value
mrb_SDL_IMG_LoadPNG_RW(mrb_state* mrb, mrb_value self) {
  mrb_value src;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &src);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, src, SDLRWops_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRWops expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_RWops * native_src = (mrb_nil_p(src) ? NULL : mruby_unbox_SDL_RWops(src));

  /* Invocation */
  SDL_Surface * result = IMG_LoadPNG_RW(native_src);

  /* Box the return value */
  mrb_value return_value = (result == NULL ? mrb_nil_value() : mruby_box_SDL_Surface(mrb, result));

  return return_value;
}
#endif

#if BIND_IMG_LoadPNM_RW_FUNCTION
#define IMG_LoadPNM_RW_REQUIRED_ARGC 1
#define IMG_LoadPNM_RW_OPTIONAL_ARGC 0
/* IMG_LoadPNM_RW
 *
 * Parameters:
 * - src: struct SDL_RWops *
 * Return Type: SDL_Surface *
 */
mrb_value
mrb_SDL_IMG_LoadPNM_RW(mrb_state* mrb, mrb_value self) {
  mrb_value src;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &src);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, src, SDLRWops_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRWops expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_RWops * native_src = (mrb_nil_p(src) ? NULL : mruby_unbox_SDL_RWops(src));

  /* Invocation */
  SDL_Surface * result = IMG_LoadPNM_RW(native_src);

  /* Box the return value */
  mrb_value return_value = (result == NULL ? mrb_nil_value() : mruby_box_SDL_Surface(mrb, result));

  return return_value;
}
#endif

#if BIND_IMG_LoadTexture_FUNCTION
#define IMG_LoadTexture_REQUIRED_ARGC 2
#define IMG_LoadTexture_OPTIONAL_ARGC 0
/* IMG_LoadTexture
 *
 * Parameters:
 * - renderer: struct SDL_Renderer *
 * - file: const char *
 * Return Type: SDL_Texture *
 */
mrb_value
mrb_SDL_IMG_LoadTexture(mrb_state* mrb, mrb_value self) {
  mrb_value renderer;
  mrb_value file;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &renderer, &file);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, renderer, SDLRenderer_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRenderer expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, file, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_Renderer * native_renderer = (mrb_nil_p(renderer) ? NULL : mruby_unbox_SDL_Renderer(renderer));

  const char * native_file = mrb_string_value_cstr(mrb, &file);

  /* Invocation */
  SDL_Texture * result = IMG_LoadTexture(native_renderer, native_file);

  /* Box the return value */
  mrb_value return_value = (result == NULL ? mrb_nil_value() : mruby_box_SDL_Texture(mrb, result));

  return return_value;
}
#endif

#if BIND_IMG_LoadTexture_RW_FUNCTION
#define IMG_LoadTexture_RW_REQUIRED_ARGC 3
#define IMG_LoadTexture_RW_OPTIONAL_ARGC 0
/* IMG_LoadTexture_RW
 *
 * Parameters:
 * - renderer: struct SDL_Renderer *
 * - src: struct SDL_RWops *
 * - freesrc: int
 * Return Type: SDL_Texture *
 */
mrb_value
mrb_SDL_IMG_LoadTexture_RW(mrb_state* mrb, mrb_value self) {
  mrb_value renderer;
  mrb_value src;
  mrb_value freesrc;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &renderer, &src, &freesrc);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, renderer, SDLRenderer_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRenderer expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, src, SDLRWops_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRWops expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, freesrc, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_Renderer * native_renderer = (mrb_nil_p(renderer) ? NULL : mruby_unbox_SDL_Renderer(renderer));

  struct SDL_RWops * native_src = (mrb_nil_p(src) ? NULL : mruby_unbox_SDL_RWops(src));

  int native_freesrc = mrb_fixnum(freesrc);

  /* Invocation */
  SDL_Texture * result = IMG_LoadTexture_RW(native_renderer, native_src, native_freesrc);

  /* Box the return value */
  mrb_value return_value = (result == NULL ? mrb_nil_value() : mruby_box_SDL_Texture(mrb, result));

  return return_value;
}
#endif

#if BIND_IMG_LoadTextureTyped_RW_FUNCTION
#define IMG_LoadTextureTyped_RW_REQUIRED_ARGC 4
#define IMG_LoadTextureTyped_RW_OPTIONAL_ARGC 0
/* IMG_LoadTextureTyped_RW
 *
 * Parameters:
 * - renderer: struct SDL_Renderer *
 * - src: struct SDL_RWops *
 * - freesrc: int
 * - type: const char *
 * Return Type: SDL_Texture *
 */
mrb_value
mrb_SDL_IMG_LoadTextureTyped_RW(mrb_state* mrb, mrb_value self) {
  mrb_value renderer;
  mrb_value src;
  mrb_value freesrc;
  mrb_value type;

  /* Fetch the args */
  mrb_get_args(mrb, "oooo", &renderer, &src, &freesrc, &type);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, renderer, SDLRenderer_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRenderer expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, src, SDLRWops_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRWops expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, freesrc, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, type, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_Renderer * native_renderer = (mrb_nil_p(renderer) ? NULL : mruby_unbox_SDL_Renderer(renderer));

  struct SDL_RWops * native_src = (mrb_nil_p(src) ? NULL : mruby_unbox_SDL_RWops(src));

  int native_freesrc = mrb_fixnum(freesrc);

  const char * native_type = mrb_string_value_cstr(mrb, &type);

  /* Invocation */
  SDL_Texture * result = IMG_LoadTextureTyped_RW(native_renderer, native_src, native_freesrc, native_type);

  /* Box the return value */
  mrb_value return_value = (result == NULL ? mrb_nil_value() : mruby_box_SDL_Texture(mrb, result));

  return return_value;
}
#endif

#if BIND_IMG_LoadTGA_RW_FUNCTION
#define IMG_LoadTGA_RW_REQUIRED_ARGC 1
#define IMG_LoadTGA_RW_OPTIONAL_ARGC 0
/* IMG_LoadTGA_RW
 *
 * Parameters:
 * - src: struct SDL_RWops *
 * Return Type: SDL_Surface *
 */
mrb_value
mrb_SDL_IMG_LoadTGA_RW(mrb_state* mrb, mrb_value self) {
  mrb_value src;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &src);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, src, SDLRWops_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRWops expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_RWops * native_src = (mrb_nil_p(src) ? NULL : mruby_unbox_SDL_RWops(src));

  /* Invocation */
  SDL_Surface * result = IMG_LoadTGA_RW(native_src);

  /* Box the return value */
  mrb_value return_value = (result == NULL ? mrb_nil_value() : mruby_box_SDL_Surface(mrb, result));

  return return_value;
}
#endif

#if BIND_IMG_LoadTIF_RW_FUNCTION
#define IMG_LoadTIF_RW_REQUIRED_ARGC 1
#define IMG_LoadTIF_RW_OPTIONAL_ARGC 0
/* IMG_LoadTIF_RW
 *
 * Parameters:
 * - src: struct SDL_RWops *
 * Return Type: SDL_Surface *
 */
mrb_value
mrb_SDL_IMG_LoadTIF_RW(mrb_state* mrb, mrb_value self) {
  mrb_value src;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &src);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, src, SDLRWops_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRWops expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_RWops * native_src = (mrb_nil_p(src) ? NULL : mruby_unbox_SDL_RWops(src));

  /* Invocation */
  SDL_Surface * result = IMG_LoadTIF_RW(native_src);

  /* Box the return value */
  mrb_value return_value = (result == NULL ? mrb_nil_value() : mruby_box_SDL_Surface(mrb, result));

  return return_value;
}
#endif

#if BIND_IMG_LoadTyped_RW_FUNCTION
#define IMG_LoadTyped_RW_REQUIRED_ARGC 3
#define IMG_LoadTyped_RW_OPTIONAL_ARGC 0
/* IMG_LoadTyped_RW
 *
 * Parameters:
 * - src: struct SDL_RWops *
 * - freesrc: int
 * - type: const char *
 * Return Type: SDL_Surface *
 */
mrb_value
mrb_SDL_IMG_LoadTyped_RW(mrb_state* mrb, mrb_value self) {
  mrb_value src;
  mrb_value freesrc;
  mrb_value type;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &src, &freesrc, &type);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, src, SDLRWops_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRWops expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, freesrc, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, type, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_RWops * native_src = (mrb_nil_p(src) ? NULL : mruby_unbox_SDL_RWops(src));

  int native_freesrc = mrb_fixnum(freesrc);

  const char * native_type = mrb_string_value_cstr(mrb, &type);

  /* Invocation */
  SDL_Surface * result = IMG_LoadTyped_RW(native_src, native_freesrc, native_type);

  /* Box the return value */
  mrb_value return_value = (result == NULL ? mrb_nil_value() : mruby_box_SDL_Surface(mrb, result));

  return return_value;
}
#endif

#if BIND_IMG_LoadWEBP_RW_FUNCTION
#define IMG_LoadWEBP_RW_REQUIRED_ARGC 1
#define IMG_LoadWEBP_RW_OPTIONAL_ARGC 0
/* IMG_LoadWEBP_RW
 *
 * Parameters:
 * - src: struct SDL_RWops *
 * Return Type: SDL_Surface *
 */
mrb_value
mrb_SDL_IMG_LoadWEBP_RW(mrb_state* mrb, mrb_value self) {
  mrb_value src;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &src);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, src, SDLRWops_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRWops expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_RWops * native_src = (mrb_nil_p(src) ? NULL : mruby_unbox_SDL_RWops(src));

  /* Invocation */
  SDL_Surface * result = IMG_LoadWEBP_RW(native_src);

  /* Box the return value */
  mrb_value return_value = (result == NULL ? mrb_nil_value() : mruby_box_SDL_Surface(mrb, result));

  return return_value;
}
#endif

#if BIND_IMG_LoadXCF_RW_FUNCTION
#define IMG_LoadXCF_RW_REQUIRED_ARGC 1
#define IMG_LoadXCF_RW_OPTIONAL_ARGC 0
/* IMG_LoadXCF_RW
 *
 * Parameters:
 * - src: struct SDL_RWops *
 * Return Type: SDL_Surface *
 */
mrb_value
mrb_SDL_IMG_LoadXCF_RW(mrb_state* mrb, mrb_value self) {
  mrb_value src;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &src);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, src, SDLRWops_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRWops expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_RWops * native_src = (mrb_nil_p(src) ? NULL : mruby_unbox_SDL_RWops(src));

  /* Invocation */
  SDL_Surface * result = IMG_LoadXCF_RW(native_src);

  /* Box the return value */
  mrb_value return_value = (result == NULL ? mrb_nil_value() : mruby_box_SDL_Surface(mrb, result));

  return return_value;
}
#endif

#if BIND_IMG_LoadXPM_RW_FUNCTION
#define IMG_LoadXPM_RW_REQUIRED_ARGC 1
#define IMG_LoadXPM_RW_OPTIONAL_ARGC 0
/* IMG_LoadXPM_RW
 *
 * Parameters:
 * - src: struct SDL_RWops *
 * Return Type: SDL_Surface *
 */
mrb_value
mrb_SDL_IMG_LoadXPM_RW(mrb_state* mrb, mrb_value self) {
  mrb_value src;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &src);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, src, SDLRWops_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRWops expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_RWops * native_src = (mrb_nil_p(src) ? NULL : mruby_unbox_SDL_RWops(src));

  /* Invocation */
  SDL_Surface * result = IMG_LoadXPM_RW(native_src);

  /* Box the return value */
  mrb_value return_value = (result == NULL ? mrb_nil_value() : mruby_box_SDL_Surface(mrb, result));

  return return_value;
}
#endif

#if BIND_IMG_LoadXV_RW_FUNCTION
#define IMG_LoadXV_RW_REQUIRED_ARGC 1
#define IMG_LoadXV_RW_OPTIONAL_ARGC 0
/* IMG_LoadXV_RW
 *
 * Parameters:
 * - src: struct SDL_RWops *
 * Return Type: SDL_Surface *
 */
mrb_value
mrb_SDL_IMG_LoadXV_RW(mrb_state* mrb, mrb_value self) {
  mrb_value src;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &src);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, src, SDLRWops_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRWops expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_RWops * native_src = (mrb_nil_p(src) ? NULL : mruby_unbox_SDL_RWops(src));

  /* Invocation */
  SDL_Surface * result = IMG_LoadXV_RW(native_src);

  /* Box the return value */
  mrb_value return_value = (result == NULL ? mrb_nil_value() : mruby_box_SDL_Surface(mrb, result));

  return return_value;
}
#endif

#if BIND_IMG_Quit_FUNCTION
#define IMG_Quit_REQUIRED_ARGC 0
#define IMG_Quit_OPTIONAL_ARGC 0
/* IMG_Quit
 *
 * Parameters: None
 * Return Type: void
 */
mrb_value
mrb_SDL_IMG_Quit(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  IMG_Quit();

  return mrb_nil_value();
}
#endif

#if BIND_IMG_ReadXPMFromArray_FUNCTION
#define IMG_ReadXPMFromArray_REQUIRED_ARGC 1
#define IMG_ReadXPMFromArray_OPTIONAL_ARGC 0
/* IMG_ReadXPMFromArray
 *
 * Parameters:
 * - xpm: char **
 * Return Type: SDL_Surface *
 */
mrb_value
mrb_SDL_IMG_ReadXPMFromArray(mrb_state* mrb, mrb_value self) {
  mrb_value xpm;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &xpm);


  /* Type checking */
  TODO_type_check_char_PTR_PTR(xpm);


  /* Unbox parameters */
  char ** native_xpm = TODO_mruby_unbox_char_PTR_PTR(xpm);

  /* Invocation */
  SDL_Surface * result = IMG_ReadXPMFromArray(native_xpm);

  /* Box the return value */
  mrb_value return_value = (result == NULL ? mrb_nil_value() : mruby_box_SDL_Surface(mrb, result));

  return return_value;
}
#endif

#if BIND_IMG_SavePNG_FUNCTION
#define IMG_SavePNG_REQUIRED_ARGC 2
#define IMG_SavePNG_OPTIONAL_ARGC 0
/* IMG_SavePNG
 *
 * Parameters:
 * - surface: struct SDL_Surface *
 * - file: const char *
 * Return Type: int
 */
mrb_value
mrb_SDL_IMG_SavePNG(mrb_state* mrb, mrb_value self) {
  mrb_value surface;
  mrb_value file;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &surface, &file);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, surface, SDLSurface_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLSurface expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, file, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_Surface * native_surface = (mrb_nil_p(surface) ? NULL : mruby_unbox_SDL_Surface(surface));

  const char * native_file = mrb_string_value_cstr(mrb, &file);

  /* Invocation */
  int result = IMG_SavePNG(native_surface, native_file);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_IMG_SavePNG_RW_FUNCTION
#define IMG_SavePNG_RW_REQUIRED_ARGC 3
#define IMG_SavePNG_RW_OPTIONAL_ARGC 0
/* IMG_SavePNG_RW
 *
 * Parameters:
 * - surface: struct SDL_Surface *
 * - dst: struct SDL_RWops *
 * - freedst: int
 * Return Type: int
 */
mrb_value
mrb_SDL_IMG_SavePNG_RW(mrb_state* mrb, mrb_value self) {
  mrb_value surface;
  mrb_value dst;
  mrb_value freedst;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &surface, &dst, &freedst);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, surface, SDLSurface_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLSurface expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, dst, SDLRWops_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRWops expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, freedst, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_Surface * native_surface = (mrb_nil_p(surface) ? NULL : mruby_unbox_SDL_Surface(surface));

  struct SDL_RWops * native_dst = (mrb_nil_p(dst) ? NULL : mruby_unbox_SDL_RWops(dst));

  int native_freedst = mrb_fixnum(freedst);

  /* Invocation */
  int result = IMG_SavePNG_RW(native_surface, native_dst, native_freedst);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_abs_FUNCTION
#define SDL_abs_REQUIRED_ARGC 1
#define SDL_abs_OPTIONAL_ARGC 0
/* SDL_abs
 *
 * Parameters:
 * - x: int
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_abs(mrb_state* mrb, mrb_value self) {
  mrb_value x;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &x);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, x, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_x = mrb_fixnum(x);

  /* Invocation */
  int result = SDL_abs(native_x);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_acos_FUNCTION
#define SDL_acos_REQUIRED_ARGC 1
#define SDL_acos_OPTIONAL_ARGC 0
/* SDL_acos
 *
 * Parameters:
 * - x: double
 * Return Type: double
 */
mrb_value
mrb_SDL_SDL_acos(mrb_state* mrb, mrb_value self) {
  mrb_value x;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &x);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, x, mrb->float_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Float expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  double native_x = mrb_float(x);

  /* Invocation */
  double result = SDL_acos(native_x);

  /* Box the return value */
  mrb_value return_value = mrb_float_value(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_AddEventWatch_FUNCTION
#define SDL_AddEventWatch_REQUIRED_ARGC 2
#define SDL_AddEventWatch_OPTIONAL_ARGC 0
/* SDL_AddEventWatch
 *
 * Parameters:
 * - filter: int (*)(void *, union SDL_Event *)
 * - userdata: void *
 * Return Type: void
 */
mrb_value
mrb_SDL_SDL_AddEventWatch(mrb_state* mrb, mrb_value self) {
  mrb_value filter;
  mrb_value userdata;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &filter, &userdata);


  /* Type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_void_PTR_COMMA_union_SDL_Event_PTR_RPAREN(filter);
  TODO_type_check_void_PTR(userdata);


  /* Unbox parameters */
  int (*native_filter)(void *, union SDL_Event *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_void_PTR_COMMA_union_SDL_Event_PTR_RPAREN(filter);

  void * native_userdata = TODO_mruby_unbox_void_PTR(userdata);

  /* Invocation */
  SDL_AddEventWatch(native_filter, native_userdata);

  return mrb_nil_value();
}
#endif

#if BIND_SDL_AddHintCallback_FUNCTION
#define SDL_AddHintCallback_REQUIRED_ARGC 3
#define SDL_AddHintCallback_OPTIONAL_ARGC 0
/* SDL_AddHintCallback
 *
 * Parameters:
 * - name: const char *
 * - callback: void (*)(void *, const char *, const char *, const char *)
 * - userdata: void *
 * Return Type: void
 */
mrb_value
mrb_SDL_SDL_AddHintCallback(mrb_state* mrb, mrb_value self) {
  mrb_value name;
  mrb_value callback;
  mrb_value userdata;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &name, &callback, &userdata);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, name, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_COMMAchar_PTR_COMMA_const_char_PTR_COMMA_const_char_PTR_RPAREN(callback);
  TODO_type_check_void_PTR(userdata);


  /* Unbox parameters */
  const char * native_name = mrb_string_value_cstr(mrb, &name);

  void (*native_callback)(void *, const char *, const char *, const char *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_COMMAchar_PTR_COMMA_const_char_PTR_COMMA_const_char_PTR_RPAREN(callback);

  void * native_userdata = TODO_mruby_unbox_void_PTR(userdata);

  /* Invocation */
  SDL_AddHintCallback(native_name, native_callback, native_userdata);

  return mrb_nil_value();
}
#endif

#if BIND_SDL_AddTimer_FUNCTION
#define SDL_AddTimer_REQUIRED_ARGC 3
#define SDL_AddTimer_OPTIONAL_ARGC 0
/* SDL_AddTimer
 *
 * Parameters:
 * - interval: unsigned int
 * - callback: unsigned int (*)(unsigned int, void *)
 * - param: void *
 * Return Type: SDL_TimerID
 */
mrb_value
mrb_SDL_SDL_AddTimer(mrb_state* mrb, mrb_value self) {
  mrb_value interval;
  mrb_value callback;
  mrb_value param;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &interval, &callback, &param);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, interval, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_unsigned_int_LPAREN_PTR_RPAREN_LPAREN_unsigned_intCOMMA_void_PTR_RPAREN(callback);
  TODO_type_check_void_PTR(param);


  /* Unbox parameters */
  unsigned int native_interval = mrb_fixnum(interval);

  unsigned int (*native_callback)(unsigned int, void *) = TODO_mruby_unbox_unsigned_int_LPAREN_PTR_RPAREN_LPAREN_unsigned_intCOMMA_void_PTR_RPAREN(callback);

  void * native_param = TODO_mruby_unbox_void_PTR(param);

  /* Invocation */
  SDL_TimerID result = SDL_AddTimer(native_interval, native_callback, native_param);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_AllocFormat_FUNCTION
#define SDL_AllocFormat_REQUIRED_ARGC 1
#define SDL_AllocFormat_OPTIONAL_ARGC 0
/* SDL_AllocFormat
 *
 * Parameters:
 * - pixel_format: unsigned int
 * Return Type: SDL_PixelFormat *
 */
mrb_value
mrb_SDL_SDL_AllocFormat(mrb_state* mrb, mrb_value self) {
  mrb_value pixel_format;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &pixel_format);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, pixel_format, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  unsigned int native_pixel_format = mrb_fixnum(pixel_format);

  /* Invocation */
  SDL_PixelFormat * result = SDL_AllocFormat(native_pixel_format);

  /* Box the return value */
  mrb_value return_value = (result == NULL ? mrb_nil_value() : mruby_box_SDL_PixelFormat(mrb, result));

  return return_value;
}
#endif

#if BIND_SDL_AllocPalette_FUNCTION
#define SDL_AllocPalette_REQUIRED_ARGC 1
#define SDL_AllocPalette_OPTIONAL_ARGC 0
/* SDL_AllocPalette
 *
 * Parameters:
 * - ncolors: int
 * Return Type: SDL_Palette *
 */
mrb_value
mrb_SDL_SDL_AllocPalette(mrb_state* mrb, mrb_value self) {
  mrb_value ncolors;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &ncolors);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, ncolors, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_ncolors = mrb_fixnum(ncolors);

  /* Invocation */
  SDL_Palette * result = SDL_AllocPalette(native_ncolors);

  /* Box the return value */
  mrb_value return_value = (result == NULL ? mrb_nil_value() : mruby_box_SDL_Palette(mrb, result));

  return return_value;
}
#endif

#if BIND_SDL_AllocRW_FUNCTION
#define SDL_AllocRW_REQUIRED_ARGC 0
#define SDL_AllocRW_OPTIONAL_ARGC 0
/* SDL_AllocRW
 *
 * Parameters: None
 * Return Type: SDL_RWops *
 */
mrb_value
mrb_SDL_SDL_AllocRW(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  SDL_RWops * result = SDL_AllocRW();

  /* Box the return value */
  mrb_value return_value = (result == NULL ? mrb_nil_value() : mruby_box_SDL_RWops(mrb, result));

  return return_value;
}
#endif

#if BIND_SDL_asin_FUNCTION
#define SDL_asin_REQUIRED_ARGC 1
#define SDL_asin_OPTIONAL_ARGC 0
/* SDL_asin
 *
 * Parameters:
 * - x: double
 * Return Type: double
 */
mrb_value
mrb_SDL_SDL_asin(mrb_state* mrb, mrb_value self) {
  mrb_value x;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &x);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, x, mrb->float_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Float expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  double native_x = mrb_float(x);

  /* Invocation */
  double result = SDL_asin(native_x);

  /* Box the return value */
  mrb_value return_value = mrb_float_value(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_atan_FUNCTION
#define SDL_atan_REQUIRED_ARGC 1
#define SDL_atan_OPTIONAL_ARGC 0
/* SDL_atan
 *
 * Parameters:
 * - x: double
 * Return Type: double
 */
mrb_value
mrb_SDL_SDL_atan(mrb_state* mrb, mrb_value self) {
  mrb_value x;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &x);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, x, mrb->float_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Float expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  double native_x = mrb_float(x);

  /* Invocation */
  double result = SDL_atan(native_x);

  /* Box the return value */
  mrb_value return_value = mrb_float_value(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_atan2_FUNCTION
#define SDL_atan2_REQUIRED_ARGC 2
#define SDL_atan2_OPTIONAL_ARGC 0
/* SDL_atan2
 *
 * Parameters:
 * - x: double
 * - y: double
 * Return Type: double
 */
mrb_value
mrb_SDL_SDL_atan2(mrb_state* mrb, mrb_value self) {
  mrb_value x;
  mrb_value y;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &x, &y);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, x, mrb->float_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Float expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, y, mrb->float_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Float expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  double native_x = mrb_float(x);

  double native_y = mrb_float(y);

  /* Invocation */
  double result = SDL_atan2(native_x, native_y);

  /* Box the return value */
  mrb_value return_value = mrb_float_value(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_atof_FUNCTION
#define SDL_atof_REQUIRED_ARGC 1
#define SDL_atof_OPTIONAL_ARGC 0
/* SDL_atof
 *
 * Parameters:
 * - str: const char *
 * Return Type: double
 */
mrb_value
mrb_SDL_SDL_atof(mrb_state* mrb, mrb_value self) {
  mrb_value str;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &str);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, str, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  const char * native_str = mrb_string_value_cstr(mrb, &str);

  /* Invocation */
  double result = SDL_atof(native_str);

  /* Box the return value */
  mrb_value return_value = mrb_float_value(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_atoi_FUNCTION
#define SDL_atoi_REQUIRED_ARGC 1
#define SDL_atoi_OPTIONAL_ARGC 0
/* SDL_atoi
 *
 * Parameters:
 * - str: const char *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_atoi(mrb_state* mrb, mrb_value self) {
  mrb_value str;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &str);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, str, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  const char * native_str = mrb_string_value_cstr(mrb, &str);

  /* Invocation */
  int result = SDL_atoi(native_str);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_AtomicAdd_FUNCTION
#define SDL_AtomicAdd_REQUIRED_ARGC 2
#define SDL_AtomicAdd_OPTIONAL_ARGC 0
/* SDL_AtomicAdd
 *
 * Parameters:
 * - a: SDL_atomic_t *
 * - v: int
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_AtomicAdd(mrb_state* mrb, mrb_value self) {
  mrb_value a;
  mrb_value v;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &a, &v);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, a, SDLAtomicT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLAtomicT expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, v, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  SDL_atomic_t * native_a = (mrb_nil_p(a) ? NULL : mruby_unbox_SDL_atomic_t(a));

  int native_v = mrb_fixnum(v);

  /* Invocation */
  int result = SDL_AtomicAdd(native_a, native_v);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_AtomicCAS_FUNCTION
#define SDL_AtomicCAS_REQUIRED_ARGC 3
#define SDL_AtomicCAS_OPTIONAL_ARGC 0
/* SDL_AtomicCAS
 *
 * Parameters:
 * - a: SDL_atomic_t *
 * - oldval: int
 * - newval: int
 * Return Type: SDL_bool
 */
mrb_value
mrb_SDL_SDL_AtomicCAS(mrb_state* mrb, mrb_value self) {
  mrb_value a;
  mrb_value oldval;
  mrb_value newval;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &a, &oldval, &newval);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, a, SDLAtomicT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLAtomicT expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, oldval, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, newval, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  SDL_atomic_t * native_a = (mrb_nil_p(a) ? NULL : mruby_unbox_SDL_atomic_t(a));

  int native_oldval = mrb_fixnum(oldval);

  int native_newval = mrb_fixnum(newval);

  /* Invocation */
  SDL_bool result = SDL_AtomicCAS(native_a, native_oldval, native_newval);

  /* Box the return value */
  mrb_value return_value = mrb_bool_value((mrb_bool)result);

  return return_value;
}
#endif

#if BIND_SDL_AtomicCASPtr_FUNCTION
#define SDL_AtomicCASPtr_REQUIRED_ARGC 3
#define SDL_AtomicCASPtr_OPTIONAL_ARGC 0
/* SDL_AtomicCASPtr
 *
 * Parameters:
 * - a: void **
 * - oldval: void *
 * - newval: void *
 * Return Type: SDL_bool
 */
mrb_value
mrb_SDL_SDL_AtomicCASPtr(mrb_state* mrb, mrb_value self) {
  mrb_value a;
  mrb_value oldval;
  mrb_value newval;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &a, &oldval, &newval);


  /* Type checking */
  TODO_type_check_void_PTR_PTR(a);
  TODO_type_check_void_PTR(oldval);
  TODO_type_check_void_PTR(newval);


  /* Unbox parameters */
  void ** native_a = TODO_mruby_unbox_void_PTR_PTR(a);

  void * native_oldval = TODO_mruby_unbox_void_PTR(oldval);

  void * native_newval = TODO_mruby_unbox_void_PTR(newval);

  /* Invocation */
  SDL_bool result = SDL_AtomicCASPtr(native_a, native_oldval, native_newval);

  /* Box the return value */
  mrb_value return_value = mrb_bool_value((mrb_bool)result);

  return return_value;
}
#endif

#if BIND_SDL_AtomicGet_FUNCTION
#define SDL_AtomicGet_REQUIRED_ARGC 1
#define SDL_AtomicGet_OPTIONAL_ARGC 0
/* SDL_AtomicGet
 *
 * Parameters:
 * - a: SDL_atomic_t *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_AtomicGet(mrb_state* mrb, mrb_value self) {
  mrb_value a;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &a);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, a, SDLAtomicT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLAtomicT expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  SDL_atomic_t * native_a = (mrb_nil_p(a) ? NULL : mruby_unbox_SDL_atomic_t(a));

  /* Invocation */
  int result = SDL_AtomicGet(native_a);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_AtomicGetPtr_FUNCTION
#define SDL_AtomicGetPtr_REQUIRED_ARGC 1
#define SDL_AtomicGetPtr_OPTIONAL_ARGC 0
/* SDL_AtomicGetPtr
 *
 * Parameters:
 * - a: void **
 * Return Type: void *
 */
mrb_value
mrb_SDL_SDL_AtomicGetPtr(mrb_state* mrb, mrb_value self) {
  mrb_value a;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &a);


  /* Type checking */
  TODO_type_check_void_PTR_PTR(a);


  /* Unbox parameters */
  void ** native_a = TODO_mruby_unbox_void_PTR_PTR(a);

  /* Invocation */
  void * result = SDL_AtomicGetPtr(native_a);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_void_PTR(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_AtomicLock_FUNCTION
#define SDL_AtomicLock_REQUIRED_ARGC 1
#define SDL_AtomicLock_OPTIONAL_ARGC 0
/* SDL_AtomicLock
 *
 * Parameters:
 * - lock: int *
 * Return Type: void
 */
mrb_value
mrb_SDL_SDL_AtomicLock(mrb_state* mrb, mrb_value self) {
  mrb_value lock;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &lock);


  /* Type checking */
  TODO_type_check_int_PTR(lock);


  /* Unbox parameters */
  int * native_lock = TODO_mruby_unbox_int_PTR(lock);

  /* Invocation */
  SDL_AtomicLock(native_lock);

  return mrb_nil_value();
}
#endif

#if BIND_SDL_AtomicSet_FUNCTION
#define SDL_AtomicSet_REQUIRED_ARGC 2
#define SDL_AtomicSet_OPTIONAL_ARGC 0
/* SDL_AtomicSet
 *
 * Parameters:
 * - a: SDL_atomic_t *
 * - v: int
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_AtomicSet(mrb_state* mrb, mrb_value self) {
  mrb_value a;
  mrb_value v;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &a, &v);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, a, SDLAtomicT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLAtomicT expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, v, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  SDL_atomic_t * native_a = (mrb_nil_p(a) ? NULL : mruby_unbox_SDL_atomic_t(a));

  int native_v = mrb_fixnum(v);

  /* Invocation */
  int result = SDL_AtomicSet(native_a, native_v);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_AtomicSetPtr_FUNCTION
#define SDL_AtomicSetPtr_REQUIRED_ARGC 2
#define SDL_AtomicSetPtr_OPTIONAL_ARGC 0
/* SDL_AtomicSetPtr
 *
 * Parameters:
 * - a: void **
 * - v: void *
 * Return Type: void *
 */
mrb_value
mrb_SDL_SDL_AtomicSetPtr(mrb_state* mrb, mrb_value self) {
  mrb_value a;
  mrb_value v;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &a, &v);


  /* Type checking */
  TODO_type_check_void_PTR_PTR(a);
  TODO_type_check_void_PTR(v);


  /* Unbox parameters */
  void ** native_a = TODO_mruby_unbox_void_PTR_PTR(a);

  void * native_v = TODO_mruby_unbox_void_PTR(v);

  /* Invocation */
  void * result = SDL_AtomicSetPtr(native_a, native_v);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_void_PTR(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_AtomicTryLock_FUNCTION
#define SDL_AtomicTryLock_REQUIRED_ARGC 1
#define SDL_AtomicTryLock_OPTIONAL_ARGC 0
/* SDL_AtomicTryLock
 *
 * Parameters:
 * - lock: int *
 * Return Type: SDL_bool
 */
mrb_value
mrb_SDL_SDL_AtomicTryLock(mrb_state* mrb, mrb_value self) {
  mrb_value lock;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &lock);


  /* Type checking */
  TODO_type_check_int_PTR(lock);


  /* Unbox parameters */
  int * native_lock = TODO_mruby_unbox_int_PTR(lock);

  /* Invocation */
  SDL_bool result = SDL_AtomicTryLock(native_lock);

  /* Box the return value */
  mrb_value return_value = mrb_bool_value((mrb_bool)result);

  return return_value;
}
#endif

#if BIND_SDL_AtomicUnlock_FUNCTION
#define SDL_AtomicUnlock_REQUIRED_ARGC 1
#define SDL_AtomicUnlock_OPTIONAL_ARGC 0
/* SDL_AtomicUnlock
 *
 * Parameters:
 * - lock: int *
 * Return Type: void
 */
mrb_value
mrb_SDL_SDL_AtomicUnlock(mrb_state* mrb, mrb_value self) {
  mrb_value lock;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &lock);


  /* Type checking */
  TODO_type_check_int_PTR(lock);


  /* Unbox parameters */
  int * native_lock = TODO_mruby_unbox_int_PTR(lock);

  /* Invocation */
  SDL_AtomicUnlock(native_lock);

  return mrb_nil_value();
}
#endif

#if BIND_SDL_AudioInit_FUNCTION
#define SDL_AudioInit_REQUIRED_ARGC 1
#define SDL_AudioInit_OPTIONAL_ARGC 0
/* SDL_AudioInit
 *
 * Parameters:
 * - driver_name: const char *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_AudioInit(mrb_state* mrb, mrb_value self) {
  mrb_value driver_name;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &driver_name);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, driver_name, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  const char * native_driver_name = mrb_string_value_cstr(mrb, &driver_name);

  /* Invocation */
  int result = SDL_AudioInit(native_driver_name);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_AudioQuit_FUNCTION
#define SDL_AudioQuit_REQUIRED_ARGC 0
#define SDL_AudioQuit_OPTIONAL_ARGC 0
/* SDL_AudioQuit
 *
 * Parameters: None
 * Return Type: void
 */
mrb_value
mrb_SDL_SDL_AudioQuit(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  SDL_AudioQuit();

  return mrb_nil_value();
}
#endif

#if BIND_SDL_BuildAudioCVT_FUNCTION
#define SDL_BuildAudioCVT_REQUIRED_ARGC 7
#define SDL_BuildAudioCVT_OPTIONAL_ARGC 0
/* SDL_BuildAudioCVT
 *
 * Parameters:
 * - cvt: struct SDL_AudioCVT *
 * - src_format: unsigned short
 * - src_channels: unsigned char
 * - src_rate: int
 * - dst_format: unsigned short
 * - dst_channels: unsigned char
 * - dst_rate: int
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_BuildAudioCVT(mrb_state* mrb, mrb_value self) {
  mrb_value cvt;
  mrb_value src_format;
  mrb_value src_channels;
  mrb_value src_rate;
  mrb_value dst_format;
  mrb_value dst_channels;
  mrb_value dst_rate;

  /* Fetch the args */
  mrb_get_args(mrb, "ooooooo", &cvt, &src_format, &src_channels, &src_rate, &dst_format, &dst_channels, &dst_rate);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, cvt, SDLAudioCVT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLAudioCVT expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, src_format, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, src_channels, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, src_rate, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, dst_format, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, dst_channels, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, dst_rate, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_AudioCVT * native_cvt = (mrb_nil_p(cvt) ? NULL : mruby_unbox_SDL_AudioCVT(cvt));

  unsigned short native_src_format = mrb_fixnum(src_format);

  unsigned char native_src_channels = *mrb_string_value_ptr(mrb, src_channels);

  int native_src_rate = mrb_fixnum(src_rate);

  unsigned short native_dst_format = mrb_fixnum(dst_format);

  unsigned char native_dst_channels = *mrb_string_value_ptr(mrb, dst_channels);

  int native_dst_rate = mrb_fixnum(dst_rate);

  /* Invocation */
  int result = SDL_BuildAudioCVT(native_cvt, native_src_format, native_src_channels, native_src_rate, native_dst_format, native_dst_channels, native_dst_rate);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_CalculateGammaRamp_FUNCTION
#define SDL_CalculateGammaRamp_REQUIRED_ARGC 2
#define SDL_CalculateGammaRamp_OPTIONAL_ARGC 0
/* SDL_CalculateGammaRamp
 *
 * Parameters:
 * - gamma: float
 * - ramp: unsigned short *
 * Return Type: void
 */
mrb_value
mrb_SDL_SDL_CalculateGammaRamp(mrb_state* mrb, mrb_value self) {
  mrb_value gamma;
  mrb_value ramp;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &gamma, &ramp);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, gamma, mrb->float_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Float expected");
    return mrb_nil_value();
  }
  TODO_type_check_unsigned_short_PTR(ramp);


  /* Unbox parameters */
  float native_gamma = mrb_float(gamma);

  unsigned short * native_ramp = TODO_mruby_unbox_unsigned_short_PTR(ramp);

  /* Invocation */
  SDL_CalculateGammaRamp(native_gamma, native_ramp);

  return mrb_nil_value();
}
#endif

#if BIND_SDL_calloc_FUNCTION
#define SDL_calloc_REQUIRED_ARGC 2
#define SDL_calloc_OPTIONAL_ARGC 0
/* SDL_calloc
 *
 * Parameters:
 * - nmemb: unsigned long
 * - size: unsigned long
 * Return Type: void *
 */
mrb_value
mrb_SDL_SDL_calloc(mrb_state* mrb, mrb_value self) {
  mrb_value nmemb;
  mrb_value size;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &nmemb, &size);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, nmemb, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, size, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  unsigned long native_nmemb = mrb_fixnum(nmemb);

  unsigned long native_size = mrb_fixnum(size);

  /* Invocation */
  void * result = SDL_calloc(native_nmemb, native_size);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_void_PTR(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_ceil_FUNCTION
#define SDL_ceil_REQUIRED_ARGC 1
#define SDL_ceil_OPTIONAL_ARGC 0
/* SDL_ceil
 *
 * Parameters:
 * - x: double
 * Return Type: double
 */
mrb_value
mrb_SDL_SDL_ceil(mrb_state* mrb, mrb_value self) {
  mrb_value x;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &x);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, x, mrb->float_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Float expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  double native_x = mrb_float(x);

  /* Invocation */
  double result = SDL_ceil(native_x);

  /* Box the return value */
  mrb_value return_value = mrb_float_value(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_ClearError_FUNCTION
#define SDL_ClearError_REQUIRED_ARGC 0
#define SDL_ClearError_OPTIONAL_ARGC 0
/* SDL_ClearError
 *
 * Parameters: None
 * Return Type: void
 */
mrb_value
mrb_SDL_SDL_ClearError(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  SDL_ClearError();

  return mrb_nil_value();
}
#endif

#if BIND_SDL_ClearHints_FUNCTION
#define SDL_ClearHints_REQUIRED_ARGC 0
#define SDL_ClearHints_OPTIONAL_ARGC 0
/* SDL_ClearHints
 *
 * Parameters: None
 * Return Type: void
 */
mrb_value
mrb_SDL_SDL_ClearHints(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  SDL_ClearHints();

  return mrb_nil_value();
}
#endif

#if BIND_SDL_CloseAudio_FUNCTION
#define SDL_CloseAudio_REQUIRED_ARGC 0
#define SDL_CloseAudio_OPTIONAL_ARGC 0
/* SDL_CloseAudio
 *
 * Parameters: None
 * Return Type: void
 */
mrb_value
mrb_SDL_SDL_CloseAudio(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  SDL_CloseAudio();

  return mrb_nil_value();
}
#endif

#if BIND_SDL_CloseAudioDevice_FUNCTION
#define SDL_CloseAudioDevice_REQUIRED_ARGC 1
#define SDL_CloseAudioDevice_OPTIONAL_ARGC 0
/* SDL_CloseAudioDevice
 *
 * Parameters:
 * - dev: unsigned int
 * Return Type: void
 */
mrb_value
mrb_SDL_SDL_CloseAudioDevice(mrb_state* mrb, mrb_value self) {
  mrb_value dev;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &dev);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, dev, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  unsigned int native_dev = mrb_fixnum(dev);

  /* Invocation */
  SDL_CloseAudioDevice(native_dev);

  return mrb_nil_value();
}
#endif

#if BIND_SDL_CondBroadcast_FUNCTION
#define SDL_CondBroadcast_REQUIRED_ARGC 1
#define SDL_CondBroadcast_OPTIONAL_ARGC 0
/* SDL_CondBroadcast
 *
 * Parameters:
 * - cond: struct SDL_cond *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_CondBroadcast(mrb_state* mrb, mrb_value self) {
  mrb_value cond;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &cond);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, cond, SDLCond_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLCond expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_cond * native_cond = (mrb_nil_p(cond) ? NULL : mruby_unbox_SDL_cond(cond));

  /* Invocation */
  int result = SDL_CondBroadcast(native_cond);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_CondSignal_FUNCTION
#define SDL_CondSignal_REQUIRED_ARGC 1
#define SDL_CondSignal_OPTIONAL_ARGC 0
/* SDL_CondSignal
 *
 * Parameters:
 * - cond: struct SDL_cond *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_CondSignal(mrb_state* mrb, mrb_value self) {
  mrb_value cond;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &cond);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, cond, SDLCond_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLCond expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_cond * native_cond = (mrb_nil_p(cond) ? NULL : mruby_unbox_SDL_cond(cond));

  /* Invocation */
  int result = SDL_CondSignal(native_cond);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_CondWait_FUNCTION
#define SDL_CondWait_REQUIRED_ARGC 2
#define SDL_CondWait_OPTIONAL_ARGC 0
/* SDL_CondWait
 *
 * Parameters:
 * - cond: struct SDL_cond *
 * - mutex: struct SDL_mutex *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_CondWait(mrb_state* mrb, mrb_value self) {
  mrb_value cond;
  mrb_value mutex;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &cond, &mutex);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, cond, SDLCond_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLCond expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, mutex, SDLMutex_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLMutex expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_cond * native_cond = (mrb_nil_p(cond) ? NULL : mruby_unbox_SDL_cond(cond));

  struct SDL_mutex * native_mutex = (mrb_nil_p(mutex) ? NULL : mruby_unbox_SDL_mutex(mutex));

  /* Invocation */
  int result = SDL_CondWait(native_cond, native_mutex);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_CondWaitTimeout_FUNCTION
#define SDL_CondWaitTimeout_REQUIRED_ARGC 3
#define SDL_CondWaitTimeout_OPTIONAL_ARGC 0
/* SDL_CondWaitTimeout
 *
 * Parameters:
 * - cond: struct SDL_cond *
 * - mutex: struct SDL_mutex *
 * - ms: unsigned int
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_CondWaitTimeout(mrb_state* mrb, mrb_value self) {
  mrb_value cond;
  mrb_value mutex;
  mrb_value ms;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &cond, &mutex, &ms);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, cond, SDLCond_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLCond expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, mutex, SDLMutex_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLMutex expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, ms, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_cond * native_cond = (mrb_nil_p(cond) ? NULL : mruby_unbox_SDL_cond(cond));

  struct SDL_mutex * native_mutex = (mrb_nil_p(mutex) ? NULL : mruby_unbox_SDL_mutex(mutex));

  unsigned int native_ms = mrb_fixnum(ms);

  /* Invocation */
  int result = SDL_CondWaitTimeout(native_cond, native_mutex, native_ms);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_ConvertAudio_FUNCTION
#define SDL_ConvertAudio_REQUIRED_ARGC 1
#define SDL_ConvertAudio_OPTIONAL_ARGC 0
/* SDL_ConvertAudio
 *
 * Parameters:
 * - cvt: struct SDL_AudioCVT *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_ConvertAudio(mrb_state* mrb, mrb_value self) {
  mrb_value cvt;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &cvt);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, cvt, SDLAudioCVT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLAudioCVT expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_AudioCVT * native_cvt = (mrb_nil_p(cvt) ? NULL : mruby_unbox_SDL_AudioCVT(cvt));

  /* Invocation */
  int result = SDL_ConvertAudio(native_cvt);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_ConvertPixels_FUNCTION
#define SDL_ConvertPixels_REQUIRED_ARGC 8
#define SDL_ConvertPixels_OPTIONAL_ARGC 0
/* SDL_ConvertPixels
 *
 * Parameters:
 * - width: int
 * - height: int
 * - src_format: unsigned int
 * - src: const void *
 * - src_pitch: int
 * - dst_format: unsigned int
 * - dst: void *
 * - dst_pitch: int
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_ConvertPixels(mrb_state* mrb, mrb_value self) {
  mrb_value width;
  mrb_value height;
  mrb_value src_format;
  mrb_value src;
  mrb_value src_pitch;
  mrb_value dst_format;
  mrb_value dst;
  mrb_value dst_pitch;

  /* Fetch the args */
  mrb_get_args(mrb, "oooooooo", &width, &height, &src_format, &src, &src_pitch, &dst_format, &dst, &dst_pitch);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, width, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, height, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, src_format, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR(src);
  if (!mrb_obj_is_kind_of(mrb, src_pitch, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, dst_format, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR(dst);
  if (!mrb_obj_is_kind_of(mrb, dst_pitch, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_width = mrb_fixnum(width);

  int native_height = mrb_fixnum(height);

  unsigned int native_src_format = mrb_fixnum(src_format);

  const void * native_src = TODO_mruby_unbox_void_PTR(src);

  int native_src_pitch = mrb_fixnum(src_pitch);

  unsigned int native_dst_format = mrb_fixnum(dst_format);

  void * native_dst = TODO_mruby_unbox_void_PTR(dst);

  int native_dst_pitch = mrb_fixnum(dst_pitch);

  /* Invocation */
  int result = SDL_ConvertPixels(native_width, native_height, native_src_format, native_src, native_src_pitch, native_dst_format, native_dst, native_dst_pitch);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_ConvertSurface_FUNCTION
#define SDL_ConvertSurface_REQUIRED_ARGC 3
#define SDL_ConvertSurface_OPTIONAL_ARGC 0
/* SDL_ConvertSurface
 *
 * Parameters:
 * - src: struct SDL_Surface *
 * - fmt: const struct SDL_PixelFormat *
 * - flags: unsigned int
 * Return Type: SDL_Surface *
 */
mrb_value
mrb_SDL_SDL_ConvertSurface(mrb_state* mrb, mrb_value self) {
  mrb_value src;
  mrb_value fmt;
  mrb_value flags;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &src, &fmt, &flags);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, src, SDLSurface_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLSurface expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, fmt, SDLPixelFormat_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLPixelFormat expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, flags, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_Surface * native_src = (mrb_nil_p(src) ? NULL : mruby_unbox_SDL_Surface(src));

  const struct SDL_PixelFormat * native_fmt = (mrb_nil_p(fmt) ? NULL : mruby_unbox_SDL_PixelFormat(fmt));

  unsigned int native_flags = mrb_fixnum(flags);

  /* Invocation */
  SDL_Surface * result = SDL_ConvertSurface(native_src, native_fmt, native_flags);

  /* Box the return value */
  mrb_value return_value = (result == NULL ? mrb_nil_value() : mruby_box_SDL_Surface(mrb, result));

  return return_value;
}
#endif

#if BIND_SDL_ConvertSurfaceFormat_FUNCTION
#define SDL_ConvertSurfaceFormat_REQUIRED_ARGC 3
#define SDL_ConvertSurfaceFormat_OPTIONAL_ARGC 0
/* SDL_ConvertSurfaceFormat
 *
 * Parameters:
 * - src: struct SDL_Surface *
 * - pixel_format: unsigned int
 * - flags: unsigned int
 * Return Type: SDL_Surface *
 */
mrb_value
mrb_SDL_SDL_ConvertSurfaceFormat(mrb_state* mrb, mrb_value self) {
  mrb_value src;
  mrb_value pixel_format;
  mrb_value flags;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &src, &pixel_format, &flags);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, src, SDLSurface_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLSurface expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, pixel_format, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, flags, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_Surface * native_src = (mrb_nil_p(src) ? NULL : mruby_unbox_SDL_Surface(src));

  unsigned int native_pixel_format = mrb_fixnum(pixel_format);

  unsigned int native_flags = mrb_fixnum(flags);

  /* Invocation */
  SDL_Surface * result = SDL_ConvertSurfaceFormat(native_src, native_pixel_format, native_flags);

  /* Box the return value */
  mrb_value return_value = (result == NULL ? mrb_nil_value() : mruby_box_SDL_Surface(mrb, result));

  return return_value;
}
#endif

#if BIND_SDL_copysign_FUNCTION
#define SDL_copysign_REQUIRED_ARGC 2
#define SDL_copysign_OPTIONAL_ARGC 0
/* SDL_copysign
 *
 * Parameters:
 * - x: double
 * - y: double
 * Return Type: double
 */
mrb_value
mrb_SDL_SDL_copysign(mrb_state* mrb, mrb_value self) {
  mrb_value x;
  mrb_value y;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &x, &y);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, x, mrb->float_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Float expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, y, mrb->float_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Float expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  double native_x = mrb_float(x);

  double native_y = mrb_float(y);

  /* Invocation */
  double result = SDL_copysign(native_x, native_y);

  /* Box the return value */
  mrb_value return_value = mrb_float_value(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_cos_FUNCTION
#define SDL_cos_REQUIRED_ARGC 1
#define SDL_cos_OPTIONAL_ARGC 0
/* SDL_cos
 *
 * Parameters:
 * - x: double
 * Return Type: double
 */
mrb_value
mrb_SDL_SDL_cos(mrb_state* mrb, mrb_value self) {
  mrb_value x;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &x);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, x, mrb->float_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Float expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  double native_x = mrb_float(x);

  /* Invocation */
  double result = SDL_cos(native_x);

  /* Box the return value */
  mrb_value return_value = mrb_float_value(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_cosf_FUNCTION
#define SDL_cosf_REQUIRED_ARGC 1
#define SDL_cosf_OPTIONAL_ARGC 0
/* SDL_cosf
 *
 * Parameters:
 * - x: float
 * Return Type: float
 */
mrb_value
mrb_SDL_SDL_cosf(mrb_state* mrb, mrb_value self) {
  mrb_value x;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &x);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, x, mrb->float_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Float expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  float native_x = mrb_float(x);

  /* Invocation */
  float result = SDL_cosf(native_x);

  /* Box the return value */
  mrb_value return_value = mrb_float_value(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_CreateColorCursor_FUNCTION
#define SDL_CreateColorCursor_REQUIRED_ARGC 3
#define SDL_CreateColorCursor_OPTIONAL_ARGC 0
/* SDL_CreateColorCursor
 *
 * Parameters:
 * - surface: struct SDL_Surface *
 * - hot_x: int
 * - hot_y: int
 * Return Type: SDL_Cursor *
 */
mrb_value
mrb_SDL_SDL_CreateColorCursor(mrb_state* mrb, mrb_value self) {
  mrb_value surface;
  mrb_value hot_x;
  mrb_value hot_y;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &surface, &hot_x, &hot_y);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, surface, SDLSurface_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLSurface expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, hot_x, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, hot_y, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_Surface * native_surface = (mrb_nil_p(surface) ? NULL : mruby_unbox_SDL_Surface(surface));

  int native_hot_x = mrb_fixnum(hot_x);

  int native_hot_y = mrb_fixnum(hot_y);

  /* Invocation */
  SDL_Cursor * result = SDL_CreateColorCursor(native_surface, native_hot_x, native_hot_y);

  /* Box the return value */
  mrb_value return_value = (result == NULL ? mrb_nil_value() : mruby_box_SDL_Cursor(mrb, result));

  return return_value;
}
#endif

#if BIND_SDL_CreateCond_FUNCTION
#define SDL_CreateCond_REQUIRED_ARGC 0
#define SDL_CreateCond_OPTIONAL_ARGC 0
/* SDL_CreateCond
 *
 * Parameters: None
 * Return Type: SDL_cond *
 */
mrb_value
mrb_SDL_SDL_CreateCond(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  SDL_cond * result = SDL_CreateCond();

  /* Box the return value */
  mrb_value return_value = (result == NULL ? mrb_nil_value() : mruby_box_SDL_cond(mrb, result));

  return return_value;
}
#endif

#if BIND_SDL_CreateCursor_FUNCTION
#define SDL_CreateCursor_REQUIRED_ARGC 6
#define SDL_CreateCursor_OPTIONAL_ARGC 0
/* SDL_CreateCursor
 *
 * Parameters:
 * - data: const unsigned char *
 * - mask: const unsigned char *
 * - w: int
 * - h: int
 * - hot_x: int
 * - hot_y: int
 * Return Type: SDL_Cursor *
 */
mrb_value
mrb_SDL_SDL_CreateCursor(mrb_state* mrb, mrb_value self) {
  mrb_value data;
  mrb_value mask;
  mrb_value w;
  mrb_value h;
  mrb_value hot_x;
  mrb_value hot_y;

  /* Fetch the args */
  mrb_get_args(mrb, "oooooo", &data, &mask, &w, &h, &hot_x, &hot_y);


  /* Type checking */
  TODO_type_check_unsigned_char_PTR(data);
  TODO_type_check_unsigned_char_PTR(mask);
  if (!mrb_obj_is_kind_of(mrb, w, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, h, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, hot_x, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, hot_y, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  const unsigned char * native_data = TODO_mruby_unbox_unsigned_char_PTR(data);

  const unsigned char * native_mask = TODO_mruby_unbox_unsigned_char_PTR(mask);

  int native_w = mrb_fixnum(w);

  int native_h = mrb_fixnum(h);

  int native_hot_x = mrb_fixnum(hot_x);

  int native_hot_y = mrb_fixnum(hot_y);

  /* Invocation */
  SDL_Cursor * result = SDL_CreateCursor(native_data, native_mask, native_w, native_h, native_hot_x, native_hot_y);

  /* Box the return value */
  mrb_value return_value = (result == NULL ? mrb_nil_value() : mruby_box_SDL_Cursor(mrb, result));

  return return_value;
}
#endif

#if BIND_SDL_CreateMutex_FUNCTION
#define SDL_CreateMutex_REQUIRED_ARGC 0
#define SDL_CreateMutex_OPTIONAL_ARGC 0
/* SDL_CreateMutex
 *
 * Parameters: None
 * Return Type: SDL_mutex *
 */
mrb_value
mrb_SDL_SDL_CreateMutex(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  SDL_mutex * result = SDL_CreateMutex();

  /* Box the return value */
  mrb_value return_value = (result == NULL ? mrb_nil_value() : mruby_box_SDL_mutex(mrb, result));

  return return_value;
}
#endif

#if BIND_SDL_CreateRenderer_FUNCTION
#define SDL_CreateRenderer_REQUIRED_ARGC 3
#define SDL_CreateRenderer_OPTIONAL_ARGC 0
/* SDL_CreateRenderer
 *
 * Parameters:
 * - window: struct SDL_Window *
 * - index: int
 * - flags: unsigned int
 * Return Type: SDL_Renderer *
 */
mrb_value
mrb_SDL_SDL_CreateRenderer(mrb_state* mrb, mrb_value self) {
  mrb_value window;
  mrb_value index;
  mrb_value flags;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &window, &index, &flags);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, window, SDLWindow_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLWindow expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, index, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, flags, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_Window * native_window = (mrb_nil_p(window) ? NULL : mruby_unbox_SDL_Window(window));

  int native_index = mrb_fixnum(index);

  unsigned int native_flags = mrb_fixnum(flags);

  /* Invocation */
  SDL_Renderer * result = SDL_CreateRenderer(native_window, native_index, native_flags);

  /* Box the return value */
  mrb_value return_value = (result == NULL ? mrb_nil_value() : mruby_box_SDL_Renderer(mrb, result));

  return return_value;
}
#endif

#if BIND_SDL_CreateRGBSurface_FUNCTION
#define SDL_CreateRGBSurface_REQUIRED_ARGC 8
#define SDL_CreateRGBSurface_OPTIONAL_ARGC 0
/* SDL_CreateRGBSurface
 *
 * Parameters:
 * - flags: unsigned int
 * - width: int
 * - height: int
 * - depth: int
 * - Rmask: unsigned int
 * - Gmask: unsigned int
 * - Bmask: unsigned int
 * - Amask: unsigned int
 * Return Type: SDL_Surface *
 */
mrb_value
mrb_SDL_SDL_CreateRGBSurface(mrb_state* mrb, mrb_value self) {
  mrb_value flags;
  mrb_value width;
  mrb_value height;
  mrb_value depth;
  mrb_value Rmask;
  mrb_value Gmask;
  mrb_value Bmask;
  mrb_value Amask;

  /* Fetch the args */
  mrb_get_args(mrb, "oooooooo", &flags, &width, &height, &depth, &Rmask, &Gmask, &Bmask, &Amask);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, flags, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, width, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, height, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, depth, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, Rmask, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, Gmask, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, Bmask, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, Amask, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  unsigned int native_flags = mrb_fixnum(flags);

  int native_width = mrb_fixnum(width);

  int native_height = mrb_fixnum(height);

  int native_depth = mrb_fixnum(depth);

  unsigned int native_Rmask = mrb_fixnum(Rmask);

  unsigned int native_Gmask = mrb_fixnum(Gmask);

  unsigned int native_Bmask = mrb_fixnum(Bmask);

  unsigned int native_Amask = mrb_fixnum(Amask);

  /* Invocation */
  SDL_Surface * result = SDL_CreateRGBSurface(native_flags, native_width, native_height, native_depth, native_Rmask, native_Gmask, native_Bmask, native_Amask);

  /* Box the return value */
  mrb_value return_value = (result == NULL ? mrb_nil_value() : mruby_box_SDL_Surface(mrb, result));

  return return_value;
}
#endif

#if BIND_SDL_CreateRGBSurfaceFrom_FUNCTION
#define SDL_CreateRGBSurfaceFrom_REQUIRED_ARGC 9
#define SDL_CreateRGBSurfaceFrom_OPTIONAL_ARGC 0
/* SDL_CreateRGBSurfaceFrom
 *
 * Parameters:
 * - pixels: void *
 * - width: int
 * - height: int
 * - depth: int
 * - pitch: int
 * - Rmask: unsigned int
 * - Gmask: unsigned int
 * - Bmask: unsigned int
 * - Amask: unsigned int
 * Return Type: SDL_Surface *
 */
mrb_value
mrb_SDL_SDL_CreateRGBSurfaceFrom(mrb_state* mrb, mrb_value self) {
  mrb_value pixels;
  mrb_value width;
  mrb_value height;
  mrb_value depth;
  mrb_value pitch;
  mrb_value Rmask;
  mrb_value Gmask;
  mrb_value Bmask;
  mrb_value Amask;

  /* Fetch the args */
  mrb_get_args(mrb, "ooooooooo", &pixels, &width, &height, &depth, &pitch, &Rmask, &Gmask, &Bmask, &Amask);


  /* Type checking */
  TODO_type_check_void_PTR(pixels);
  if (!mrb_obj_is_kind_of(mrb, width, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, height, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, depth, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, pitch, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, Rmask, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, Gmask, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, Bmask, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, Amask, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  void * native_pixels = TODO_mruby_unbox_void_PTR(pixels);

  int native_width = mrb_fixnum(width);

  int native_height = mrb_fixnum(height);

  int native_depth = mrb_fixnum(depth);

  int native_pitch = mrb_fixnum(pitch);

  unsigned int native_Rmask = mrb_fixnum(Rmask);

  unsigned int native_Gmask = mrb_fixnum(Gmask);

  unsigned int native_Bmask = mrb_fixnum(Bmask);

  unsigned int native_Amask = mrb_fixnum(Amask);

  /* Invocation */
  SDL_Surface * result = SDL_CreateRGBSurfaceFrom(native_pixels, native_width, native_height, native_depth, native_pitch, native_Rmask, native_Gmask, native_Bmask, native_Amask);

  /* Box the return value */
  mrb_value return_value = (result == NULL ? mrb_nil_value() : mruby_box_SDL_Surface(mrb, result));

  return return_value;
}
#endif

#if BIND_SDL_CreateSemaphore_FUNCTION
#define SDL_CreateSemaphore_REQUIRED_ARGC 1
#define SDL_CreateSemaphore_OPTIONAL_ARGC 0
/* SDL_CreateSemaphore
 *
 * Parameters:
 * - initial_value: unsigned int
 * Return Type: SDL_sem *
 */
mrb_value
mrb_SDL_SDL_CreateSemaphore(mrb_state* mrb, mrb_value self) {
  mrb_value initial_value;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &initial_value);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, initial_value, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  unsigned int native_initial_value = mrb_fixnum(initial_value);

  /* Invocation */
  SDL_sem * result = SDL_CreateSemaphore(native_initial_value);

  /* Box the return value */
  mrb_value return_value = (result == NULL ? mrb_nil_value() : mruby_box_SDL_semaphore(mrb, result));

  return return_value;
}
#endif

#if BIND_SDL_CreateShapedWindow_FUNCTION
#define SDL_CreateShapedWindow_REQUIRED_ARGC 6
#define SDL_CreateShapedWindow_OPTIONAL_ARGC 0
/* SDL_CreateShapedWindow
 *
 * Parameters:
 * - title: const char *
 * - x: unsigned int
 * - y: unsigned int
 * - w: unsigned int
 * - h: unsigned int
 * - flags: unsigned int
 * Return Type: SDL_Window *
 */
mrb_value
mrb_SDL_SDL_CreateShapedWindow(mrb_state* mrb, mrb_value self) {
  mrb_value title;
  mrb_value x;
  mrb_value y;
  mrb_value w;
  mrb_value h;
  mrb_value flags;

  /* Fetch the args */
  mrb_get_args(mrb, "oooooo", &title, &x, &y, &w, &h, &flags);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, title, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, x, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, y, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, w, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, h, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, flags, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  const char * native_title = mrb_string_value_cstr(mrb, &title);

  unsigned int native_x = mrb_fixnum(x);

  unsigned int native_y = mrb_fixnum(y);

  unsigned int native_w = mrb_fixnum(w);

  unsigned int native_h = mrb_fixnum(h);

  unsigned int native_flags = mrb_fixnum(flags);

  /* Invocation */
  SDL_Window * result = SDL_CreateShapedWindow(native_title, native_x, native_y, native_w, native_h, native_flags);

  /* Box the return value */
  mrb_value return_value = (result == NULL ? mrb_nil_value() : mruby_box_SDL_Window(mrb, result));

  return return_value;
}
#endif

#if BIND_SDL_CreateSoftwareRenderer_FUNCTION
#define SDL_CreateSoftwareRenderer_REQUIRED_ARGC 1
#define SDL_CreateSoftwareRenderer_OPTIONAL_ARGC 0
/* SDL_CreateSoftwareRenderer
 *
 * Parameters:
 * - surface: struct SDL_Surface *
 * Return Type: SDL_Renderer *
 */
mrb_value
mrb_SDL_SDL_CreateSoftwareRenderer(mrb_state* mrb, mrb_value self) {
  mrb_value surface;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &surface);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, surface, SDLSurface_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLSurface expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_Surface * native_surface = (mrb_nil_p(surface) ? NULL : mruby_unbox_SDL_Surface(surface));

  /* Invocation */
  SDL_Renderer * result = SDL_CreateSoftwareRenderer(native_surface);

  /* Box the return value */
  mrb_value return_value = (result == NULL ? mrb_nil_value() : mruby_box_SDL_Renderer(mrb, result));

  return return_value;
}
#endif

#if BIND_SDL_CreateSystemCursor_FUNCTION
#define SDL_CreateSystemCursor_REQUIRED_ARGC 1
#define SDL_CreateSystemCursor_OPTIONAL_ARGC 0
/* SDL_CreateSystemCursor
 *
 * Parameters:
 * - id: SDL_SystemCursor
 * Return Type: SDL_Cursor *
 */
mrb_value
mrb_SDL_SDL_CreateSystemCursor(mrb_state* mrb, mrb_value self) {
  mrb_value id;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &id);


  /* Type checking */
  TODO_type_check_SDL_SystemCursor(id);


  /* Unbox parameters */
  SDL_SystemCursor native_id = TODO_mruby_unbox_SDL_SystemCursor(id);

  /* Invocation */
  SDL_Cursor * result = SDL_CreateSystemCursor(native_id);

  /* Box the return value */
  mrb_value return_value = (result == NULL ? mrb_nil_value() : mruby_box_SDL_Cursor(mrb, result));

  return return_value;
}
#endif

#if BIND_SDL_CreateTexture_FUNCTION
#define SDL_CreateTexture_REQUIRED_ARGC 5
#define SDL_CreateTexture_OPTIONAL_ARGC 0
/* SDL_CreateTexture
 *
 * Parameters:
 * - renderer: struct SDL_Renderer *
 * - format: unsigned int
 * - access: int
 * - w: int
 * - h: int
 * Return Type: SDL_Texture *
 */
mrb_value
mrb_SDL_SDL_CreateTexture(mrb_state* mrb, mrb_value self) {
  mrb_value renderer;
  mrb_value format;
  mrb_value access;
  mrb_value w;
  mrb_value h;

  /* Fetch the args */
  mrb_get_args(mrb, "ooooo", &renderer, &format, &access, &w, &h);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, renderer, SDLRenderer_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRenderer expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, format, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, access, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, w, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, h, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_Renderer * native_renderer = (mrb_nil_p(renderer) ? NULL : mruby_unbox_SDL_Renderer(renderer));

  unsigned int native_format = mrb_fixnum(format);

  int native_access = mrb_fixnum(access);

  int native_w = mrb_fixnum(w);

  int native_h = mrb_fixnum(h);

  /* Invocation */
  SDL_Texture * result = SDL_CreateTexture(native_renderer, native_format, native_access, native_w, native_h);

  /* Box the return value */
  mrb_value return_value = (result == NULL ? mrb_nil_value() : mruby_box_SDL_Texture(mrb, result));

  return return_value;
}
#endif

#if BIND_SDL_CreateTextureFromSurface_FUNCTION
#define SDL_CreateTextureFromSurface_REQUIRED_ARGC 2
#define SDL_CreateTextureFromSurface_OPTIONAL_ARGC 0
/* SDL_CreateTextureFromSurface
 *
 * Parameters:
 * - renderer: struct SDL_Renderer *
 * - surface: struct SDL_Surface *
 * Return Type: SDL_Texture *
 */
mrb_value
mrb_SDL_SDL_CreateTextureFromSurface(mrb_state* mrb, mrb_value self) {
  mrb_value renderer;
  mrb_value surface;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &renderer, &surface);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, renderer, SDLRenderer_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRenderer expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, surface, SDLSurface_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLSurface expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_Renderer * native_renderer = (mrb_nil_p(renderer) ? NULL : mruby_unbox_SDL_Renderer(renderer));

  struct SDL_Surface * native_surface = (mrb_nil_p(surface) ? NULL : mruby_unbox_SDL_Surface(surface));

  /* Invocation */
  SDL_Texture * result = SDL_CreateTextureFromSurface(native_renderer, native_surface);

  /* Box the return value */
  mrb_value return_value = (result == NULL ? mrb_nil_value() : mruby_box_SDL_Texture(mrb, result));

  return return_value;
}
#endif

#if BIND_SDL_CreateThread_FUNCTION
#define SDL_CreateThread_REQUIRED_ARGC 3
#define SDL_CreateThread_OPTIONAL_ARGC 0
/* SDL_CreateThread
 *
 * Parameters:
 * - fn: int (*)(void *)
 * - name: const char *
 * - data: void *
 * Return Type: SDL_Thread *
 */
mrb_value
mrb_SDL_SDL_CreateThread(mrb_state* mrb, mrb_value self) {
  mrb_value fn;
  mrb_value name;
  mrb_value data;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &fn, &name, &data);


  /* Type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(fn);
  if (!mrb_obj_is_kind_of(mrb, name, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR(data);


  /* Unbox parameters */
  int (*native_fn)(void *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(fn);

  const char * native_name = mrb_string_value_cstr(mrb, &name);

  void * native_data = TODO_mruby_unbox_void_PTR(data);

  /* Invocation */
  SDL_Thread * result = SDL_CreateThread(native_fn, native_name, native_data);

  /* Box the return value */
  mrb_value return_value = (result == NULL ? mrb_nil_value() : mruby_box_SDL_Thread(mrb, result));

  return return_value;
}
#endif

#if BIND_SDL_CreateWindow_FUNCTION
#define SDL_CreateWindow_REQUIRED_ARGC 6
#define SDL_CreateWindow_OPTIONAL_ARGC 0
/* SDL_CreateWindow
 *
 * Parameters:
 * - title: const char *
 * - x: int
 * - y: int
 * - w: int
 * - h: int
 * - flags: unsigned int
 * Return Type: SDL_Window *
 */
mrb_value
mrb_SDL_SDL_CreateWindow(mrb_state* mrb, mrb_value self) {
  mrb_value title;
  mrb_value x;
  mrb_value y;
  mrb_value w;
  mrb_value h;
  mrb_value flags;

  /* Fetch the args */
  mrb_get_args(mrb, "oooooo", &title, &x, &y, &w, &h, &flags);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, title, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, x, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, y, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, w, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, h, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, flags, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  const char * native_title = mrb_string_value_cstr(mrb, &title);

  int native_x = mrb_fixnum(x);

  int native_y = mrb_fixnum(y);

  int native_w = mrb_fixnum(w);

  int native_h = mrb_fixnum(h);

  unsigned int native_flags = mrb_fixnum(flags);

  /* Invocation */
  SDL_Window * result = SDL_CreateWindow(native_title, native_x, native_y, native_w, native_h, native_flags);

  /* Box the return value */
  mrb_value return_value = (result == NULL ? mrb_nil_value() : mruby_box_SDL_Window(mrb, result));

  return return_value;
}
#endif

#if BIND_SDL_CreateWindowAndRenderer_FUNCTION
#define SDL_CreateWindowAndRenderer_REQUIRED_ARGC 5
#define SDL_CreateWindowAndRenderer_OPTIONAL_ARGC 0
/* SDL_CreateWindowAndRenderer
 *
 * Parameters:
 * - width: int
 * - height: int
 * - window_flags: unsigned int
 * - window: struct SDL_Window **
 * - renderer: struct SDL_Renderer **
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_CreateWindowAndRenderer(mrb_state* mrb, mrb_value self) {
  mrb_value width;
  mrb_value height;
  mrb_value window_flags;
  mrb_value window;
  mrb_value renderer;

  /* Fetch the args */
  mrb_get_args(mrb, "ooooo", &width, &height, &window_flags, &window, &renderer);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, width, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, height, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, window_flags, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_SDL_Window_PTR_PTR(window);
  TODO_type_check_SDL_Renderer_PTR_PTR(renderer);


  /* Unbox parameters */
  int native_width = mrb_fixnum(width);

  int native_height = mrb_fixnum(height);

  unsigned int native_window_flags = mrb_fixnum(window_flags);

  struct SDL_Window ** native_window = TODO_mruby_unbox_SDL_Window_PTR_PTR(window);

  struct SDL_Renderer ** native_renderer = TODO_mruby_unbox_SDL_Renderer_PTR_PTR(renderer);

  /* Invocation */
  int result = SDL_CreateWindowAndRenderer(native_width, native_height, native_window_flags, native_window, native_renderer);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_CreateWindowFrom_FUNCTION
#define SDL_CreateWindowFrom_REQUIRED_ARGC 1
#define SDL_CreateWindowFrom_OPTIONAL_ARGC 0
/* SDL_CreateWindowFrom
 *
 * Parameters:
 * - data: const void *
 * Return Type: SDL_Window *
 */
mrb_value
mrb_SDL_SDL_CreateWindowFrom(mrb_state* mrb, mrb_value self) {
  mrb_value data;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &data);


  /* Type checking */
  TODO_type_check_void_PTR(data);


  /* Unbox parameters */
  const void * native_data = TODO_mruby_unbox_void_PTR(data);

  /* Invocation */
  SDL_Window * result = SDL_CreateWindowFrom(native_data);

  /* Box the return value */
  mrb_value return_value = (result == NULL ? mrb_nil_value() : mruby_box_SDL_Window(mrb, result));

  return return_value;
}
#endif

#if BIND_SDL_Delay_FUNCTION
#define SDL_Delay_REQUIRED_ARGC 1
#define SDL_Delay_OPTIONAL_ARGC 0
/* SDL_Delay
 *
 * Parameters:
 * - ms: unsigned int
 * Return Type: void
 */
mrb_value
mrb_SDL_SDL_Delay(mrb_state* mrb, mrb_value self) {
  mrb_value ms;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &ms);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, ms, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  unsigned int native_ms = mrb_fixnum(ms);

  /* Invocation */
  SDL_Delay(native_ms);

  return mrb_nil_value();
}
#endif

#if BIND_SDL_DelEventWatch_FUNCTION
#define SDL_DelEventWatch_REQUIRED_ARGC 2
#define SDL_DelEventWatch_OPTIONAL_ARGC 0
/* SDL_DelEventWatch
 *
 * Parameters:
 * - filter: int (*)(void *, union SDL_Event *)
 * - userdata: void *
 * Return Type: void
 */
mrb_value
mrb_SDL_SDL_DelEventWatch(mrb_state* mrb, mrb_value self) {
  mrb_value filter;
  mrb_value userdata;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &filter, &userdata);


  /* Type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_void_PTR_COMMA_union_SDL_Event_PTR_RPAREN(filter);
  TODO_type_check_void_PTR(userdata);


  /* Unbox parameters */
  int (*native_filter)(void *, union SDL_Event *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_void_PTR_COMMA_union_SDL_Event_PTR_RPAREN(filter);

  void * native_userdata = TODO_mruby_unbox_void_PTR(userdata);

  /* Invocation */
  SDL_DelEventWatch(native_filter, native_userdata);

  return mrb_nil_value();
}
#endif

#if BIND_SDL_DelHintCallback_FUNCTION
#define SDL_DelHintCallback_REQUIRED_ARGC 3
#define SDL_DelHintCallback_OPTIONAL_ARGC 0
/* SDL_DelHintCallback
 *
 * Parameters:
 * - name: const char *
 * - callback: void (*)(void *, const char *, const char *, const char *)
 * - userdata: void *
 * Return Type: void
 */
mrb_value
mrb_SDL_SDL_DelHintCallback(mrb_state* mrb, mrb_value self) {
  mrb_value name;
  mrb_value callback;
  mrb_value userdata;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &name, &callback, &userdata);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, name, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_COMMAchar_PTR_COMMA_const_char_PTR_COMMA_const_char_PTR_RPAREN(callback);
  TODO_type_check_void_PTR(userdata);


  /* Unbox parameters */
  const char * native_name = mrb_string_value_cstr(mrb, &name);

  void (*native_callback)(void *, const char *, const char *, const char *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_COMMAchar_PTR_COMMA_const_char_PTR_COMMA_const_char_PTR_RPAREN(callback);

  void * native_userdata = TODO_mruby_unbox_void_PTR(userdata);

  /* Invocation */
  SDL_DelHintCallback(native_name, native_callback, native_userdata);

  return mrb_nil_value();
}
#endif

#if BIND_SDL_DestroyCond_FUNCTION
#define SDL_DestroyCond_REQUIRED_ARGC 1
#define SDL_DestroyCond_OPTIONAL_ARGC 0
/* SDL_DestroyCond
 *
 * Parameters:
 * - cond: struct SDL_cond *
 * Return Type: void
 */
mrb_value
mrb_SDL_SDL_DestroyCond(mrb_state* mrb, mrb_value self) {
  mrb_value cond;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &cond);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, cond, SDLCond_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLCond expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_cond * native_cond = (mrb_nil_p(cond) ? NULL : mruby_unbox_SDL_cond(cond));

  /* Invocation */
  SDL_DestroyCond(native_cond);

  return mrb_nil_value();
}
#endif

#if BIND_SDL_DestroyMutex_FUNCTION
#define SDL_DestroyMutex_REQUIRED_ARGC 1
#define SDL_DestroyMutex_OPTIONAL_ARGC 0
/* SDL_DestroyMutex
 *
 * Parameters:
 * - mutex: struct SDL_mutex *
 * Return Type: void
 */
mrb_value
mrb_SDL_SDL_DestroyMutex(mrb_state* mrb, mrb_value self) {
  mrb_value mutex;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &mutex);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, mutex, SDLMutex_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLMutex expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_mutex * native_mutex = (mrb_nil_p(mutex) ? NULL : mruby_unbox_SDL_mutex(mutex));

  /* Invocation */
  SDL_DestroyMutex(native_mutex);

  return mrb_nil_value();
}
#endif

#if BIND_SDL_DestroyRenderer_FUNCTION
#define SDL_DestroyRenderer_REQUIRED_ARGC 1
#define SDL_DestroyRenderer_OPTIONAL_ARGC 0
/* SDL_DestroyRenderer
 *
 * Parameters:
 * - renderer: struct SDL_Renderer *
 * Return Type: void
 */
mrb_value
mrb_SDL_SDL_DestroyRenderer(mrb_state* mrb, mrb_value self) {
  mrb_value renderer;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &renderer);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, renderer, SDLRenderer_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRenderer expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_Renderer * native_renderer = (mrb_nil_p(renderer) ? NULL : mruby_unbox_SDL_Renderer(renderer));

  /* Invocation */
  SDL_DestroyRenderer(native_renderer);

  return mrb_nil_value();
}
#endif

#if BIND_SDL_DestroySemaphore_FUNCTION
#define SDL_DestroySemaphore_REQUIRED_ARGC 1
#define SDL_DestroySemaphore_OPTIONAL_ARGC 0
/* SDL_DestroySemaphore
 *
 * Parameters:
 * - sem: struct SDL_semaphore *
 * Return Type: void
 */
mrb_value
mrb_SDL_SDL_DestroySemaphore(mrb_state* mrb, mrb_value self) {
  mrb_value sem;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &sem);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, sem, SDLSemaphore_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLSemaphore expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_semaphore * native_sem = (mrb_nil_p(sem) ? NULL : mruby_unbox_SDL_semaphore(sem));

  /* Invocation */
  SDL_DestroySemaphore(native_sem);

  return mrb_nil_value();
}
#endif

#if BIND_SDL_DestroyTexture_FUNCTION
#define SDL_DestroyTexture_REQUIRED_ARGC 1
#define SDL_DestroyTexture_OPTIONAL_ARGC 0
/* SDL_DestroyTexture
 *
 * Parameters:
 * - texture: struct SDL_Texture *
 * Return Type: void
 */
mrb_value
mrb_SDL_SDL_DestroyTexture(mrb_state* mrb, mrb_value self) {
  mrb_value texture;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &texture);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, texture, SDLTexture_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLTexture expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_Texture * native_texture = (mrb_nil_p(texture) ? NULL : mruby_unbox_SDL_Texture(texture));

  /* Invocation */
  SDL_DestroyTexture(native_texture);

  return mrb_nil_value();
}
#endif

#if BIND_SDL_DestroyWindow_FUNCTION
#define SDL_DestroyWindow_REQUIRED_ARGC 1
#define SDL_DestroyWindow_OPTIONAL_ARGC 0
/* SDL_DestroyWindow
 *
 * Parameters:
 * - window: struct SDL_Window *
 * Return Type: void
 */
mrb_value
mrb_SDL_SDL_DestroyWindow(mrb_state* mrb, mrb_value self) {
  mrb_value window;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &window);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, window, SDLWindow_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLWindow expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_Window * native_window = (mrb_nil_p(window) ? NULL : mruby_unbox_SDL_Window(window));

  /* Invocation */
  SDL_DestroyWindow(native_window);

  return mrb_nil_value();
}
#endif

#if BIND_SDL_DetachThread_FUNCTION
#define SDL_DetachThread_REQUIRED_ARGC 1
#define SDL_DetachThread_OPTIONAL_ARGC 0
/* SDL_DetachThread
 *
 * Parameters:
 * - thread: struct SDL_Thread *
 * Return Type: void
 */
mrb_value
mrb_SDL_SDL_DetachThread(mrb_state* mrb, mrb_value self) {
  mrb_value thread;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &thread);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, thread, SDLThread_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLThread expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_Thread * native_thread = (mrb_nil_p(thread) ? NULL : mruby_unbox_SDL_Thread(thread));

  /* Invocation */
  SDL_DetachThread(native_thread);

  return mrb_nil_value();
}
#endif

#if BIND_SDL_DisableScreenSaver_FUNCTION
#define SDL_DisableScreenSaver_REQUIRED_ARGC 0
#define SDL_DisableScreenSaver_OPTIONAL_ARGC 0
/* SDL_DisableScreenSaver
 *
 * Parameters: None
 * Return Type: void
 */
mrb_value
mrb_SDL_SDL_DisableScreenSaver(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  SDL_DisableScreenSaver();

  return mrb_nil_value();
}
#endif

#if BIND_SDL_EnableScreenSaver_FUNCTION
#define SDL_EnableScreenSaver_REQUIRED_ARGC 0
#define SDL_EnableScreenSaver_OPTIONAL_ARGC 0
/* SDL_EnableScreenSaver
 *
 * Parameters: None
 * Return Type: void
 */
mrb_value
mrb_SDL_SDL_EnableScreenSaver(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  SDL_EnableScreenSaver();

  return mrb_nil_value();
}
#endif

#if BIND_SDL_EnclosePoints_FUNCTION
#define SDL_EnclosePoints_REQUIRED_ARGC 4
#define SDL_EnclosePoints_OPTIONAL_ARGC 0
/* SDL_EnclosePoints
 *
 * Parameters:
 * - points: const struct SDL_Point *
 * - count: int
 * - clip: const struct SDL_Rect *
 * - result: struct SDL_Rect *
 * Return Type: SDL_bool
 */
mrb_value
mrb_SDL_SDL_EnclosePoints(mrb_state* mrb, mrb_value self) {
  mrb_value points;
  mrb_value count;
  mrb_value clip;
  mrb_value result_param;

  /* Fetch the args */
  mrb_get_args(mrb, "oooo", &points, &count, &clip, &result_param);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, points, SDLPoint_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLPoint expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, count, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, clip, SDLRect_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRect expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, result_param, SDLRect_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRect expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  const struct SDL_Point * native_points = (mrb_nil_p(points) ? NULL : mruby_unbox_SDL_Point(points));

  int native_count = mrb_fixnum(count);

  const struct SDL_Rect * native_clip = (mrb_nil_p(clip) ? NULL : mruby_unbox_SDL_Rect(clip));

  struct SDL_Rect * native_result = (mrb_nil_p(result_param) ? NULL : mruby_unbox_SDL_Rect(result_param));

  /* Invocation */
  SDL_bool result = SDL_EnclosePoints(native_points, native_count, native_clip, native_result);

  /* Box the return value */
  mrb_value return_value = mrb_bool_value((mrb_bool)result);

  return return_value;
}
#endif

#if BIND_SDL_Error_FUNCTION
#define SDL_Error_REQUIRED_ARGC 1
#define SDL_Error_OPTIONAL_ARGC 0
/* SDL_Error
 *
 * Parameters:
 * - code: SDL_errorcode
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_Error(mrb_state* mrb, mrb_value self) {
  mrb_value code;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &code);


  /* Type checking */
  TODO_type_check_SDL_errorcode(code);


  /* Unbox parameters */
  SDL_errorcode native_code = TODO_mruby_unbox_SDL_errorcode(code);

  /* Invocation */
  int result = SDL_Error(native_code);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_EventState_FUNCTION
#define SDL_EventState_REQUIRED_ARGC 2
#define SDL_EventState_OPTIONAL_ARGC 0
/* SDL_EventState
 *
 * Parameters:
 * - type: unsigned int
 * - state: int
 * Return Type: Uint8
 */
mrb_value
mrb_SDL_SDL_EventState(mrb_state* mrb, mrb_value self) {
  mrb_value type;
  mrb_value state;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &type, &state);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, type, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, state, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  unsigned int native_type = mrb_fixnum(type);

  int native_state = mrb_fixnum(state);

  /* Invocation */
  Uint8 result = SDL_EventState(native_type, native_state);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_fabs_FUNCTION
#define SDL_fabs_REQUIRED_ARGC 1
#define SDL_fabs_OPTIONAL_ARGC 0
/* SDL_fabs
 *
 * Parameters:
 * - x: double
 * Return Type: double
 */
mrb_value
mrb_SDL_SDL_fabs(mrb_state* mrb, mrb_value self) {
  mrb_value x;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &x);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, x, mrb->float_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Float expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  double native_x = mrb_float(x);

  /* Invocation */
  double result = SDL_fabs(native_x);

  /* Box the return value */
  mrb_value return_value = mrb_float_value(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_FillRect_FUNCTION
#define SDL_FillRect_REQUIRED_ARGC 3
#define SDL_FillRect_OPTIONAL_ARGC 0
/* SDL_FillRect
 *
 * Parameters:
 * - dst: struct SDL_Surface *
 * - rect: const struct SDL_Rect *
 * - color: unsigned int
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_FillRect(mrb_state* mrb, mrb_value self) {
  mrb_value dst;
  mrb_value rect;
  mrb_value color;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &dst, &rect, &color);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, dst, SDLSurface_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLSurface expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, rect, SDLRect_class(mrb)) && !mrb_nil_p(rect)) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRect expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, color, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_Surface * native_dst = (mrb_nil_p(dst) ? NULL : mruby_unbox_SDL_Surface(dst));

  const struct SDL_Rect * native_rect = (mrb_nil_p(rect) ? NULL : mruby_unbox_SDL_Rect(rect));

  unsigned int native_color = mrb_fixnum(color);

  /* Invocation */
  int result = SDL_FillRect(native_dst, native_rect, native_color);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_FillRects_FUNCTION
#define SDL_FillRects_REQUIRED_ARGC 4
#define SDL_FillRects_OPTIONAL_ARGC 0
/* SDL_FillRects
 *
 * Parameters:
 * - dst: struct SDL_Surface *
 * - rects: const struct SDL_Rect *
 * - count: int
 * - color: unsigned int
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_FillRects(mrb_state* mrb, mrb_value self) {
  mrb_value dst;
  mrb_value rects;
  mrb_value count;
  mrb_value color;

  /* Fetch the args */
  mrb_get_args(mrb, "oooo", &dst, &rects, &count, &color);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, dst, SDLSurface_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLSurface expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, rects, SDLRect_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRect expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, count, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, color, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_Surface * native_dst = (mrb_nil_p(dst) ? NULL : mruby_unbox_SDL_Surface(dst));

  const struct SDL_Rect * native_rects = (mrb_nil_p(rects) ? NULL : mruby_unbox_SDL_Rect(rects));

  int native_count = mrb_fixnum(count);

  unsigned int native_color = mrb_fixnum(color);

  /* Invocation */
  int result = SDL_FillRects(native_dst, native_rects, native_count, native_color);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_FilterEvents_FUNCTION
#define SDL_FilterEvents_REQUIRED_ARGC 2
#define SDL_FilterEvents_OPTIONAL_ARGC 0
/* SDL_FilterEvents
 *
 * Parameters:
 * - filter: int (*)(void *, union SDL_Event *)
 * - userdata: void *
 * Return Type: void
 */
mrb_value
mrb_SDL_SDL_FilterEvents(mrb_state* mrb, mrb_value self) {
  mrb_value filter;
  mrb_value userdata;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &filter, &userdata);


  /* Type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_void_PTR_COMMA_union_SDL_Event_PTR_RPAREN(filter);
  TODO_type_check_void_PTR(userdata);


  /* Unbox parameters */
  int (*native_filter)(void *, union SDL_Event *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_void_PTR_COMMA_union_SDL_Event_PTR_RPAREN(filter);

  void * native_userdata = TODO_mruby_unbox_void_PTR(userdata);

  /* Invocation */
  SDL_FilterEvents(native_filter, native_userdata);

  return mrb_nil_value();
}
#endif

#if BIND_SDL_floor_FUNCTION
#define SDL_floor_REQUIRED_ARGC 1
#define SDL_floor_OPTIONAL_ARGC 0
/* SDL_floor
 *
 * Parameters:
 * - x: double
 * Return Type: double
 */
mrb_value
mrb_SDL_SDL_floor(mrb_state* mrb, mrb_value self) {
  mrb_value x;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &x);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, x, mrb->float_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Float expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  double native_x = mrb_float(x);

  /* Invocation */
  double result = SDL_floor(native_x);

  /* Box the return value */
  mrb_value return_value = mrb_float_value(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_FlushEvent_FUNCTION
#define SDL_FlushEvent_REQUIRED_ARGC 1
#define SDL_FlushEvent_OPTIONAL_ARGC 0
/* SDL_FlushEvent
 *
 * Parameters:
 * - type: unsigned int
 * Return Type: void
 */
mrb_value
mrb_SDL_SDL_FlushEvent(mrb_state* mrb, mrb_value self) {
  mrb_value type;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &type);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, type, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  unsigned int native_type = mrb_fixnum(type);

  /* Invocation */
  SDL_FlushEvent(native_type);

  return mrb_nil_value();
}
#endif

#if BIND_SDL_FlushEvents_FUNCTION
#define SDL_FlushEvents_REQUIRED_ARGC 2
#define SDL_FlushEvents_OPTIONAL_ARGC 0
/* SDL_FlushEvents
 *
 * Parameters:
 * - minType: unsigned int
 * - maxType: unsigned int
 * Return Type: void
 */
mrb_value
mrb_SDL_SDL_FlushEvents(mrb_state* mrb, mrb_value self) {
  mrb_value minType;
  mrb_value maxType;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &minType, &maxType);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, minType, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, maxType, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  unsigned int native_minType = mrb_fixnum(minType);

  unsigned int native_maxType = mrb_fixnum(maxType);

  /* Invocation */
  SDL_FlushEvents(native_minType, native_maxType);

  return mrb_nil_value();
}
#endif

#if BIND_SDL_free_FUNCTION
#define SDL_free_REQUIRED_ARGC 1
#define SDL_free_OPTIONAL_ARGC 0
/* SDL_free
 *
 * Parameters:
 * - mem: void *
 * Return Type: void
 */
mrb_value
mrb_SDL_SDL_free(mrb_state* mrb, mrb_value self) {
  mrb_value mem;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &mem);


  /* Type checking */
  TODO_type_check_void_PTR(mem);


  /* Unbox parameters */
  void * native_mem = TODO_mruby_unbox_void_PTR(mem);

  /* Invocation */
  SDL_free(native_mem);

  return mrb_nil_value();
}
#endif

#if BIND_SDL_FreeCursor_FUNCTION
#define SDL_FreeCursor_REQUIRED_ARGC 1
#define SDL_FreeCursor_OPTIONAL_ARGC 0
/* SDL_FreeCursor
 *
 * Parameters:
 * - cursor: struct SDL_Cursor *
 * Return Type: void
 */
mrb_value
mrb_SDL_SDL_FreeCursor(mrb_state* mrb, mrb_value self) {
  mrb_value cursor;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &cursor);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, cursor, SDLCursor_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLCursor expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_Cursor * native_cursor = (mrb_nil_p(cursor) ? NULL : mruby_unbox_SDL_Cursor(cursor));

  /* Invocation */
  SDL_FreeCursor(native_cursor);

  return mrb_nil_value();
}
#endif

#if BIND_SDL_FreeFormat_FUNCTION
#define SDL_FreeFormat_REQUIRED_ARGC 1
#define SDL_FreeFormat_OPTIONAL_ARGC 0
/* SDL_FreeFormat
 *
 * Parameters:
 * - format: struct SDL_PixelFormat *
 * Return Type: void
 */
mrb_value
mrb_SDL_SDL_FreeFormat(mrb_state* mrb, mrb_value self) {
  mrb_value format;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &format);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, format, SDLPixelFormat_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLPixelFormat expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_PixelFormat * native_format = (mrb_nil_p(format) ? NULL : mruby_unbox_SDL_PixelFormat(format));

  /* Invocation */
  SDL_FreeFormat(native_format);

  return mrb_nil_value();
}
#endif

#if BIND_SDL_FreePalette_FUNCTION
#define SDL_FreePalette_REQUIRED_ARGC 1
#define SDL_FreePalette_OPTIONAL_ARGC 0
/* SDL_FreePalette
 *
 * Parameters:
 * - palette: struct SDL_Palette *
 * Return Type: void
 */
mrb_value
mrb_SDL_SDL_FreePalette(mrb_state* mrb, mrb_value self) {
  mrb_value palette;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &palette);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, palette, SDLPalette_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLPalette expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_Palette * native_palette = (mrb_nil_p(palette) ? NULL : mruby_unbox_SDL_Palette(palette));

  /* Invocation */
  SDL_FreePalette(native_palette);

  return mrb_nil_value();
}
#endif

#if BIND_SDL_FreeRW_FUNCTION
#define SDL_FreeRW_REQUIRED_ARGC 1
#define SDL_FreeRW_OPTIONAL_ARGC 0
/* SDL_FreeRW
 *
 * Parameters:
 * - area: struct SDL_RWops *
 * Return Type: void
 */
mrb_value
mrb_SDL_SDL_FreeRW(mrb_state* mrb, mrb_value self) {
  mrb_value area;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &area);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, area, SDLRWops_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRWops expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_RWops * native_area = (mrb_nil_p(area) ? NULL : mruby_unbox_SDL_RWops(area));

  /* Invocation */
  SDL_FreeRW(native_area);

  return mrb_nil_value();
}
#endif

#if BIND_SDL_FreeSurface_FUNCTION
#define SDL_FreeSurface_REQUIRED_ARGC 1
#define SDL_FreeSurface_OPTIONAL_ARGC 0
/* SDL_FreeSurface
 *
 * Parameters:
 * - surface: struct SDL_Surface *
 * Return Type: void
 */
mrb_value
mrb_SDL_SDL_FreeSurface(mrb_state* mrb, mrb_value self) {
  mrb_value surface;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &surface);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, surface, SDLSurface_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLSurface expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_Surface * native_surface = (mrb_nil_p(surface) ? NULL : mruby_unbox_SDL_Surface(surface));

  /* Invocation */
  SDL_FreeSurface(native_surface);

  return mrb_nil_value();
}
#endif

#if BIND_SDL_FreeWAV_FUNCTION
#define SDL_FreeWAV_REQUIRED_ARGC 1
#define SDL_FreeWAV_OPTIONAL_ARGC 0
/* SDL_FreeWAV
 *
 * Parameters:
 * - audio_buf: unsigned char *
 * Return Type: void
 */
mrb_value
mrb_SDL_SDL_FreeWAV(mrb_state* mrb, mrb_value self) {
  mrb_value audio_buf;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &audio_buf);


  /* Type checking */
  TODO_type_check_unsigned_char_PTR(audio_buf);


  /* Unbox parameters */
  unsigned char * native_audio_buf = TODO_mruby_unbox_unsigned_char_PTR(audio_buf);

  /* Invocation */
  SDL_FreeWAV(native_audio_buf);

  return mrb_nil_value();
}
#endif

#if BIND_SDL_GameControllerAddMapping_FUNCTION
#define SDL_GameControllerAddMapping_REQUIRED_ARGC 1
#define SDL_GameControllerAddMapping_OPTIONAL_ARGC 0
/* SDL_GameControllerAddMapping
 *
 * Parameters:
 * - mappingString: const char *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_GameControllerAddMapping(mrb_state* mrb, mrb_value self) {
  mrb_value mappingString;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &mappingString);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, mappingString, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  const char * native_mappingString = mrb_string_value_cstr(mrb, &mappingString);

  /* Invocation */
  int result = SDL_GameControllerAddMapping(native_mappingString);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_GameControllerAddMappingsFromRW_FUNCTION
#define SDL_GameControllerAddMappingsFromRW_REQUIRED_ARGC 2
#define SDL_GameControllerAddMappingsFromRW_OPTIONAL_ARGC 0
/* SDL_GameControllerAddMappingsFromRW
 *
 * Parameters:
 * - rw: struct SDL_RWops *
 * - freerw: int
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_GameControllerAddMappingsFromRW(mrb_state* mrb, mrb_value self) {
  mrb_value rw;
  mrb_value freerw;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &rw, &freerw);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, rw, SDLRWops_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRWops expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, freerw, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_RWops * native_rw = (mrb_nil_p(rw) ? NULL : mruby_unbox_SDL_RWops(rw));

  int native_freerw = mrb_fixnum(freerw);

  /* Invocation */
  int result = SDL_GameControllerAddMappingsFromRW(native_rw, native_freerw);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_GameControllerClose_FUNCTION
#define SDL_GameControllerClose_REQUIRED_ARGC 1
#define SDL_GameControllerClose_OPTIONAL_ARGC 0
/* SDL_GameControllerClose
 *
 * Parameters:
 * - gamecontroller: struct _SDL_GameController *
 * Return Type: void
 */
mrb_value
mrb_SDL_SDL_GameControllerClose(mrb_state* mrb, mrb_value self) {
  mrb_value gamecontroller;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &gamecontroller);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, gamecontroller, SDLGameController_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLGameController expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _SDL_GameController * native_gamecontroller = (mrb_nil_p(gamecontroller) ? NULL : mruby_unbox__SDL_GameController(gamecontroller));

  /* Invocation */
  SDL_GameControllerClose(native_gamecontroller);

  return mrb_nil_value();
}
#endif

#if BIND_SDL_GameControllerEventState_FUNCTION
#define SDL_GameControllerEventState_REQUIRED_ARGC 1
#define SDL_GameControllerEventState_OPTIONAL_ARGC 0
/* SDL_GameControllerEventState
 *
 * Parameters:
 * - state: int
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_GameControllerEventState(mrb_state* mrb, mrb_value self) {
  mrb_value state;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &state);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, state, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_state = mrb_fixnum(state);

  /* Invocation */
  int result = SDL_GameControllerEventState(native_state);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_GameControllerGetAttached_FUNCTION
#define SDL_GameControllerGetAttached_REQUIRED_ARGC 1
#define SDL_GameControllerGetAttached_OPTIONAL_ARGC 0
/* SDL_GameControllerGetAttached
 *
 * Parameters:
 * - gamecontroller: struct _SDL_GameController *
 * Return Type: SDL_bool
 */
mrb_value
mrb_SDL_SDL_GameControllerGetAttached(mrb_state* mrb, mrb_value self) {
  mrb_value gamecontroller;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &gamecontroller);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, gamecontroller, SDLGameController_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLGameController expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _SDL_GameController * native_gamecontroller = (mrb_nil_p(gamecontroller) ? NULL : mruby_unbox__SDL_GameController(gamecontroller));

  /* Invocation */
  SDL_bool result = SDL_GameControllerGetAttached(native_gamecontroller);

  /* Box the return value */
  mrb_value return_value = mrb_bool_value((mrb_bool)result);

  return return_value;
}
#endif

#if BIND_SDL_GameControllerGetAxis_FUNCTION
#define SDL_GameControllerGetAxis_REQUIRED_ARGC 2
#define SDL_GameControllerGetAxis_OPTIONAL_ARGC 0
/* SDL_GameControllerGetAxis
 *
 * Parameters:
 * - gamecontroller: struct _SDL_GameController *
 * - axis: SDL_GameControllerAxis
 * Return Type: Sint16
 */
mrb_value
mrb_SDL_SDL_GameControllerGetAxis(mrb_state* mrb, mrb_value self) {
  mrb_value gamecontroller;
  mrb_value axis;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &gamecontroller, &axis);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, gamecontroller, SDLGameController_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLGameController expected");
    return mrb_nil_value();
  }
  TODO_type_check_SDL_GameControllerAxis(axis);


  /* Unbox parameters */
  struct _SDL_GameController * native_gamecontroller = (mrb_nil_p(gamecontroller) ? NULL : mruby_unbox__SDL_GameController(gamecontroller));

  SDL_GameControllerAxis native_axis = TODO_mruby_unbox_SDL_GameControllerAxis(axis);

  /* Invocation */
  Sint16 result = SDL_GameControllerGetAxis(native_gamecontroller, native_axis);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_Sint16(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_GameControllerGetAxisFromString_FUNCTION
#define SDL_GameControllerGetAxisFromString_REQUIRED_ARGC 1
#define SDL_GameControllerGetAxisFromString_OPTIONAL_ARGC 0
/* SDL_GameControllerGetAxisFromString
 *
 * Parameters:
 * - pchString: const char *
 * Return Type: SDL_GameControllerAxis
 */
mrb_value
mrb_SDL_SDL_GameControllerGetAxisFromString(mrb_state* mrb, mrb_value self) {
  mrb_value pchString;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &pchString);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, pchString, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  const char * native_pchString = mrb_string_value_cstr(mrb, &pchString);

  /* Invocation */
  SDL_GameControllerAxis result = SDL_GameControllerGetAxisFromString(native_pchString);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_SDL_GameControllerAxis(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_GameControllerGetBindForAxis_FUNCTION
#define SDL_GameControllerGetBindForAxis_REQUIRED_ARGC 2
#define SDL_GameControllerGetBindForAxis_OPTIONAL_ARGC 0
/* SDL_GameControllerGetBindForAxis
 *
 * Parameters:
 * - gamecontroller: struct _SDL_GameController *
 * - axis: SDL_GameControllerAxis
 * Return Type: SDL_GameControllerButtonBind
 */
mrb_value
mrb_SDL_SDL_GameControllerGetBindForAxis(mrb_state* mrb, mrb_value self) {
  mrb_value gamecontroller;
  mrb_value axis;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &gamecontroller, &axis);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, gamecontroller, SDLGameController_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLGameController expected");
    return mrb_nil_value();
  }
  TODO_type_check_SDL_GameControllerAxis(axis);


  /* Unbox parameters */
  struct _SDL_GameController * native_gamecontroller = (mrb_nil_p(gamecontroller) ? NULL : mruby_unbox__SDL_GameController(gamecontroller));

  SDL_GameControllerAxis native_axis = TODO_mruby_unbox_SDL_GameControllerAxis(axis);

  /* Invocation */
  SDL_GameControllerButtonBind result = SDL_GameControllerGetBindForAxis(native_gamecontroller, native_axis);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_SDL_GameControllerButtonBind(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_GameControllerGetBindForButton_FUNCTION
#define SDL_GameControllerGetBindForButton_REQUIRED_ARGC 2
#define SDL_GameControllerGetBindForButton_OPTIONAL_ARGC 0
/* SDL_GameControllerGetBindForButton
 *
 * Parameters:
 * - gamecontroller: struct _SDL_GameController *
 * - button: SDL_GameControllerButton
 * Return Type: SDL_GameControllerButtonBind
 */
mrb_value
mrb_SDL_SDL_GameControllerGetBindForButton(mrb_state* mrb, mrb_value self) {
  mrb_value gamecontroller;
  mrb_value button;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &gamecontroller, &button);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, gamecontroller, SDLGameController_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLGameController expected");
    return mrb_nil_value();
  }
  TODO_type_check_SDL_GameControllerButton(button);


  /* Unbox parameters */
  struct _SDL_GameController * native_gamecontroller = (mrb_nil_p(gamecontroller) ? NULL : mruby_unbox__SDL_GameController(gamecontroller));

  SDL_GameControllerButton native_button = TODO_mruby_unbox_SDL_GameControllerButton(button);

  /* Invocation */
  SDL_GameControllerButtonBind result = SDL_GameControllerGetBindForButton(native_gamecontroller, native_button);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_SDL_GameControllerButtonBind(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_GameControllerGetButton_FUNCTION
#define SDL_GameControllerGetButton_REQUIRED_ARGC 2
#define SDL_GameControllerGetButton_OPTIONAL_ARGC 0
/* SDL_GameControllerGetButton
 *
 * Parameters:
 * - gamecontroller: struct _SDL_GameController *
 * - button: SDL_GameControllerButton
 * Return Type: Uint8
 */
mrb_value
mrb_SDL_SDL_GameControllerGetButton(mrb_state* mrb, mrb_value self) {
  mrb_value gamecontroller;
  mrb_value button;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &gamecontroller, &button);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, gamecontroller, SDLGameController_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLGameController expected");
    return mrb_nil_value();
  }
  TODO_type_check_SDL_GameControllerButton(button);


  /* Unbox parameters */
  struct _SDL_GameController * native_gamecontroller = (mrb_nil_p(gamecontroller) ? NULL : mruby_unbox__SDL_GameController(gamecontroller));

  SDL_GameControllerButton native_button = TODO_mruby_unbox_SDL_GameControllerButton(button);

  /* Invocation */
  Uint8 result = SDL_GameControllerGetButton(native_gamecontroller, native_button);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_Uint8(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_GameControllerGetButtonFromString_FUNCTION
#define SDL_GameControllerGetButtonFromString_REQUIRED_ARGC 1
#define SDL_GameControllerGetButtonFromString_OPTIONAL_ARGC 0
/* SDL_GameControllerGetButtonFromString
 *
 * Parameters:
 * - pchString: const char *
 * Return Type: SDL_GameControllerButton
 */
mrb_value
mrb_SDL_SDL_GameControllerGetButtonFromString(mrb_state* mrb, mrb_value self) {
  mrb_value pchString;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &pchString);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, pchString, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  const char * native_pchString = mrb_string_value_cstr(mrb, &pchString);

  /* Invocation */
  SDL_GameControllerButton result = SDL_GameControllerGetButtonFromString(native_pchString);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_SDL_GameControllerButton(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_GameControllerGetJoystick_FUNCTION
#define SDL_GameControllerGetJoystick_REQUIRED_ARGC 1
#define SDL_GameControllerGetJoystick_OPTIONAL_ARGC 0
/* SDL_GameControllerGetJoystick
 *
 * Parameters:
 * - gamecontroller: struct _SDL_GameController *
 * Return Type: SDL_Joystick *
 */
mrb_value
mrb_SDL_SDL_GameControllerGetJoystick(mrb_state* mrb, mrb_value self) {
  mrb_value gamecontroller;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &gamecontroller);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, gamecontroller, SDLGameController_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLGameController expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _SDL_GameController * native_gamecontroller = (mrb_nil_p(gamecontroller) ? NULL : mruby_unbox__SDL_GameController(gamecontroller));

  /* Invocation */
  SDL_Joystick * result = SDL_GameControllerGetJoystick(native_gamecontroller);

  /* Box the return value */
  mrb_value return_value = (result == NULL ? mrb_nil_value() : mruby_box__SDL_Joystick(mrb, result));

  return return_value;
}
#endif

#if BIND_SDL_GameControllerGetStringForAxis_FUNCTION
#define SDL_GameControllerGetStringForAxis_REQUIRED_ARGC 1
#define SDL_GameControllerGetStringForAxis_OPTIONAL_ARGC 0
/* SDL_GameControllerGetStringForAxis
 *
 * Parameters:
 * - axis: SDL_GameControllerAxis
 * Return Type: const char *
 */
mrb_value
mrb_SDL_SDL_GameControllerGetStringForAxis(mrb_state* mrb, mrb_value self) {
  mrb_value axis;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &axis);


  /* Type checking */
  TODO_type_check_SDL_GameControllerAxis(axis);


  /* Unbox parameters */
  SDL_GameControllerAxis native_axis = TODO_mruby_unbox_SDL_GameControllerAxis(axis);

  /* Invocation */
  const char * result = SDL_GameControllerGetStringForAxis(native_axis);

  /* Box the return value */
  mrb_value return_value = mrb_str_new_cstr(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_GameControllerGetStringForButton_FUNCTION
#define SDL_GameControllerGetStringForButton_REQUIRED_ARGC 1
#define SDL_GameControllerGetStringForButton_OPTIONAL_ARGC 0
/* SDL_GameControllerGetStringForButton
 *
 * Parameters:
 * - button: SDL_GameControllerButton
 * Return Type: const char *
 */
mrb_value
mrb_SDL_SDL_GameControllerGetStringForButton(mrb_state* mrb, mrb_value self) {
  mrb_value button;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &button);


  /* Type checking */
  TODO_type_check_SDL_GameControllerButton(button);


  /* Unbox parameters */
  SDL_GameControllerButton native_button = TODO_mruby_unbox_SDL_GameControllerButton(button);

  /* Invocation */
  const char * result = SDL_GameControllerGetStringForButton(native_button);

  /* Box the return value */
  mrb_value return_value = mrb_str_new_cstr(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_GameControllerMapping_FUNCTION
#define SDL_GameControllerMapping_REQUIRED_ARGC 1
#define SDL_GameControllerMapping_OPTIONAL_ARGC 0
/* SDL_GameControllerMapping
 *
 * Parameters:
 * - gamecontroller: struct _SDL_GameController *
 * Return Type: char *
 */
mrb_value
mrb_SDL_SDL_GameControllerMapping(mrb_state* mrb, mrb_value self) {
  mrb_value gamecontroller;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &gamecontroller);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, gamecontroller, SDLGameController_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLGameController expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _SDL_GameController * native_gamecontroller = (mrb_nil_p(gamecontroller) ? NULL : mruby_unbox__SDL_GameController(gamecontroller));

  /* Invocation */
  char * result = SDL_GameControllerMapping(native_gamecontroller);

  /* Box the return value */
  mrb_value return_value = mrb_str_new_cstr(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_GameControllerMappingForGUID_FUNCTION
#define SDL_GameControllerMappingForGUID_REQUIRED_ARGC 1
#define SDL_GameControllerMappingForGUID_OPTIONAL_ARGC 0
/* SDL_GameControllerMappingForGUID
 *
 * Parameters:
 * - guid: SDL_JoystickGUID
 * Return Type: char *
 */
mrb_value
mrb_SDL_SDL_GameControllerMappingForGUID(mrb_state* mrb, mrb_value self) {
  mrb_value guid;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &guid);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, guid, SDLJoystickGUID_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDL_JoystickGUID expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  SDL_JoystickGUID native_guid = *(mruby_unbox_SDL_JoystickGUID(guid));

  /* Invocation */
  char * result = SDL_GameControllerMappingForGUID(native_guid);

  /* Box the return value */
  mrb_value return_value = mrb_str_new_cstr(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_GameControllerName_FUNCTION
#define SDL_GameControllerName_REQUIRED_ARGC 1
#define SDL_GameControllerName_OPTIONAL_ARGC 0
/* SDL_GameControllerName
 *
 * Parameters:
 * - gamecontroller: struct _SDL_GameController *
 * Return Type: const char *
 */
mrb_value
mrb_SDL_SDL_GameControllerName(mrb_state* mrb, mrb_value self) {
  mrb_value gamecontroller;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &gamecontroller);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, gamecontroller, SDLGameController_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLGameController expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _SDL_GameController * native_gamecontroller = (mrb_nil_p(gamecontroller) ? NULL : mruby_unbox__SDL_GameController(gamecontroller));

  /* Invocation */
  const char * result = SDL_GameControllerName(native_gamecontroller);

  /* Box the return value */
  mrb_value return_value = mrb_str_new_cstr(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_GameControllerNameForIndex_FUNCTION
#define SDL_GameControllerNameForIndex_REQUIRED_ARGC 1
#define SDL_GameControllerNameForIndex_OPTIONAL_ARGC 0
/* SDL_GameControllerNameForIndex
 *
 * Parameters:
 * - joystick_index: int
 * Return Type: const char *
 */
mrb_value
mrb_SDL_SDL_GameControllerNameForIndex(mrb_state* mrb, mrb_value self) {
  mrb_value joystick_index;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &joystick_index);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, joystick_index, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_joystick_index = mrb_fixnum(joystick_index);

  /* Invocation */
  const char * result = SDL_GameControllerNameForIndex(native_joystick_index);

  /* Box the return value */
  mrb_value return_value = mrb_str_new_cstr(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_GameControllerOpen_FUNCTION
#define SDL_GameControllerOpen_REQUIRED_ARGC 1
#define SDL_GameControllerOpen_OPTIONAL_ARGC 0
/* SDL_GameControllerOpen
 *
 * Parameters:
 * - joystick_index: int
 * Return Type: SDL_GameController *
 */
mrb_value
mrb_SDL_SDL_GameControllerOpen(mrb_state* mrb, mrb_value self) {
  mrb_value joystick_index;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &joystick_index);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, joystick_index, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_joystick_index = mrb_fixnum(joystick_index);

  /* Invocation */
  SDL_GameController * result = SDL_GameControllerOpen(native_joystick_index);

  /* Box the return value */
  mrb_value return_value = (result == NULL ? mrb_nil_value() : mruby_box__SDL_GameController(mrb, result));

  return return_value;
}
#endif

#if BIND_SDL_GameControllerUpdate_FUNCTION
#define SDL_GameControllerUpdate_REQUIRED_ARGC 0
#define SDL_GameControllerUpdate_OPTIONAL_ARGC 0
/* SDL_GameControllerUpdate
 *
 * Parameters: None
 * Return Type: void
 */
mrb_value
mrb_SDL_SDL_GameControllerUpdate(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  SDL_GameControllerUpdate();

  return mrb_nil_value();
}
#endif

#if BIND_SDL_GetAssertionHandler_FUNCTION
#define SDL_GetAssertionHandler_REQUIRED_ARGC 1
#define SDL_GetAssertionHandler_OPTIONAL_ARGC 0
/* SDL_GetAssertionHandler
 *
 * Parameters:
 * - puserdata: void **
 * Return Type: SDL_AssertionHandler
 */
mrb_value
mrb_SDL_SDL_GetAssertionHandler(mrb_state* mrb, mrb_value self) {
  mrb_value puserdata;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &puserdata);


  /* Type checking */
  TODO_type_check_void_PTR_PTR(puserdata);


  /* Unbox parameters */
  void ** native_puserdata = TODO_mruby_unbox_void_PTR_PTR(puserdata);

  /* Invocation */
  SDL_AssertionHandler result = SDL_GetAssertionHandler(native_puserdata);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_SDL_AssertionHandler(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_GetAssertionReport_FUNCTION
#define SDL_GetAssertionReport_REQUIRED_ARGC 0
#define SDL_GetAssertionReport_OPTIONAL_ARGC 0
/* SDL_GetAssertionReport
 *
 * Parameters: None
 * Return Type: const SDL_assert_data *
 */
mrb_value
mrb_SDL_SDL_GetAssertionReport(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  const SDL_assert_data * result = SDL_GetAssertionReport();

  /* Box the return value */
  mrb_value return_value = (result == NULL ? mrb_nil_value() : mruby_box_SDL_assert_data(mrb, result));

  return return_value;
}
#endif

#if BIND_SDL_GetAudioDeviceName_FUNCTION
#define SDL_GetAudioDeviceName_REQUIRED_ARGC 2
#define SDL_GetAudioDeviceName_OPTIONAL_ARGC 0
/* SDL_GetAudioDeviceName
 *
 * Parameters:
 * - index: int
 * - iscapture: int
 * Return Type: const char *
 */
mrb_value
mrb_SDL_SDL_GetAudioDeviceName(mrb_state* mrb, mrb_value self) {
  mrb_value index;
  mrb_value iscapture;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &index, &iscapture);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, index, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, iscapture, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_index = mrb_fixnum(index);

  int native_iscapture = mrb_fixnum(iscapture);

  /* Invocation */
  const char * result = SDL_GetAudioDeviceName(native_index, native_iscapture);

  /* Box the return value */
  mrb_value return_value = mrb_str_new_cstr(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_GetAudioDeviceStatus_FUNCTION
#define SDL_GetAudioDeviceStatus_REQUIRED_ARGC 1
#define SDL_GetAudioDeviceStatus_OPTIONAL_ARGC 0
/* SDL_GetAudioDeviceStatus
 *
 * Parameters:
 * - dev: unsigned int
 * Return Type: SDL_AudioStatus
 */
mrb_value
mrb_SDL_SDL_GetAudioDeviceStatus(mrb_state* mrb, mrb_value self) {
  mrb_value dev;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &dev);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, dev, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  unsigned int native_dev = mrb_fixnum(dev);

  /* Invocation */
  SDL_AudioStatus result = SDL_GetAudioDeviceStatus(native_dev);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_SDL_AudioStatus(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_GetAudioDriver_FUNCTION
#define SDL_GetAudioDriver_REQUIRED_ARGC 1
#define SDL_GetAudioDriver_OPTIONAL_ARGC 0
/* SDL_GetAudioDriver
 *
 * Parameters:
 * - index: int
 * Return Type: const char *
 */
mrb_value
mrb_SDL_SDL_GetAudioDriver(mrb_state* mrb, mrb_value self) {
  mrb_value index;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &index);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, index, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_index = mrb_fixnum(index);

  /* Invocation */
  const char * result = SDL_GetAudioDriver(native_index);

  /* Box the return value */
  mrb_value return_value = mrb_str_new_cstr(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_GetAudioStatus_FUNCTION
#define SDL_GetAudioStatus_REQUIRED_ARGC 0
#define SDL_GetAudioStatus_OPTIONAL_ARGC 0
/* SDL_GetAudioStatus
 *
 * Parameters: None
 * Return Type: SDL_AudioStatus
 */
mrb_value
mrb_SDL_SDL_GetAudioStatus(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  SDL_AudioStatus result = SDL_GetAudioStatus();

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_SDL_AudioStatus(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_GetBasePath_FUNCTION
#define SDL_GetBasePath_REQUIRED_ARGC 0
#define SDL_GetBasePath_OPTIONAL_ARGC 0
/* SDL_GetBasePath
 *
 * Parameters: None
 * Return Type: char *
 */
mrb_value
mrb_SDL_SDL_GetBasePath(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  char * result = SDL_GetBasePath();

  /* Box the return value */
  mrb_value return_value = mrb_str_new_cstr(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_GetClipboardText_FUNCTION
#define SDL_GetClipboardText_REQUIRED_ARGC 0
#define SDL_GetClipboardText_OPTIONAL_ARGC 0
/* SDL_GetClipboardText
 *
 * Parameters: None
 * Return Type: char *
 */
mrb_value
mrb_SDL_SDL_GetClipboardText(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  char * result = SDL_GetClipboardText();

  /* Box the return value */
  mrb_value return_value = mrb_str_new_cstr(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_GetClipRect_FUNCTION
#define SDL_GetClipRect_REQUIRED_ARGC 2
#define SDL_GetClipRect_OPTIONAL_ARGC 0
/* SDL_GetClipRect
 *
 * Parameters:
 * - surface: struct SDL_Surface *
 * - rect: struct SDL_Rect *
 * Return Type: void
 */
mrb_value
mrb_SDL_SDL_GetClipRect(mrb_state* mrb, mrb_value self) {
  mrb_value surface;
  mrb_value rect;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &surface, &rect);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, surface, SDLSurface_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLSurface expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, rect, SDLRect_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRect expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_Surface * native_surface = (mrb_nil_p(surface) ? NULL : mruby_unbox_SDL_Surface(surface));

  struct SDL_Rect * native_rect = (mrb_nil_p(rect) ? NULL : mruby_unbox_SDL_Rect(rect));

  /* Invocation */
  SDL_GetClipRect(native_surface, native_rect);

  return mrb_nil_value();
}
#endif

#if BIND_SDL_GetClosestDisplayMode_FUNCTION
#define SDL_GetClosestDisplayMode_REQUIRED_ARGC 3
#define SDL_GetClosestDisplayMode_OPTIONAL_ARGC 0
/* SDL_GetClosestDisplayMode
 *
 * Parameters:
 * - displayIndex: int
 * - mode: const SDL_DisplayMode *
 * - closest: SDL_DisplayMode *
 * Return Type: SDL_DisplayMode *
 */
mrb_value
mrb_SDL_SDL_GetClosestDisplayMode(mrb_state* mrb, mrb_value self) {
  mrb_value displayIndex;
  mrb_value mode;
  mrb_value closest;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &displayIndex, &mode, &closest);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, displayIndex, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, mode, SDLDisplayMode_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLDisplayMode expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, closest, SDLDisplayMode_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLDisplayMode expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_displayIndex = mrb_fixnum(displayIndex);

  const SDL_DisplayMode * native_mode = (mrb_nil_p(mode) ? NULL : mruby_unbox_SDL_DisplayMode(mode));

  SDL_DisplayMode * native_closest = (mrb_nil_p(closest) ? NULL : mruby_unbox_SDL_DisplayMode(closest));

  /* Invocation */
  SDL_DisplayMode * result = SDL_GetClosestDisplayMode(native_displayIndex, native_mode, native_closest);

  /* Box the return value */
  mrb_value return_value = (result == NULL ? mrb_nil_value() : mruby_box_SDL_DisplayMode(mrb, result));

  return return_value;
}
#endif

#if BIND_SDL_GetColorKey_FUNCTION
#define SDL_GetColorKey_REQUIRED_ARGC 2
#define SDL_GetColorKey_OPTIONAL_ARGC 0
/* SDL_GetColorKey
 *
 * Parameters:
 * - surface: struct SDL_Surface *
 * - key: unsigned int *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_GetColorKey(mrb_state* mrb, mrb_value self) {
  mrb_value surface;
  mrb_int key;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &surface, &key);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, surface, SDLSurface_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLSurface expected");
    return mrb_nil_value();
  }

  /* Unbox parameters */
  struct SDL_Surface * native_surface = (mrb_nil_p(surface) ? NULL : mruby_unbox_SDL_Surface(surface));

  /* Invocation */
  int result = SDL_GetColorKey(native_surface, (unsigned int*)&key);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_GetCPUCacheLineSize_FUNCTION
#define SDL_GetCPUCacheLineSize_REQUIRED_ARGC 0
#define SDL_GetCPUCacheLineSize_OPTIONAL_ARGC 0
/* SDL_GetCPUCacheLineSize
 *
 * Parameters: None
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_GetCPUCacheLineSize(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  int result = SDL_GetCPUCacheLineSize();

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_GetCPUCount_FUNCTION
#define SDL_GetCPUCount_REQUIRED_ARGC 0
#define SDL_GetCPUCount_OPTIONAL_ARGC 0
/* SDL_GetCPUCount
 *
 * Parameters: None
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_GetCPUCount(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  int result = SDL_GetCPUCount();

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_GetCurrentAudioDriver_FUNCTION
#define SDL_GetCurrentAudioDriver_REQUIRED_ARGC 0
#define SDL_GetCurrentAudioDriver_OPTIONAL_ARGC 0
/* SDL_GetCurrentAudioDriver
 *
 * Parameters: None
 * Return Type: const char *
 */
mrb_value
mrb_SDL_SDL_GetCurrentAudioDriver(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  const char * result = SDL_GetCurrentAudioDriver();

  /* Box the return value */
  mrb_value return_value = mrb_str_new_cstr(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_GetCurrentDisplayMode_FUNCTION
#define SDL_GetCurrentDisplayMode_REQUIRED_ARGC 2
#define SDL_GetCurrentDisplayMode_OPTIONAL_ARGC 0
/* SDL_GetCurrentDisplayMode
 *
 * Parameters:
 * - displayIndex: int
 * - mode: SDL_DisplayMode *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_GetCurrentDisplayMode(mrb_state* mrb, mrb_value self) {
  mrb_value displayIndex;
  mrb_value mode;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &displayIndex, &mode);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, displayIndex, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, mode, SDLDisplayMode_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLDisplayMode expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_displayIndex = mrb_fixnum(displayIndex);

  SDL_DisplayMode * native_mode = (mrb_nil_p(mode) ? NULL : mruby_unbox_SDL_DisplayMode(mode));

  /* Invocation */
  int result = SDL_GetCurrentDisplayMode(native_displayIndex, native_mode);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_GetCurrentVideoDriver_FUNCTION
#define SDL_GetCurrentVideoDriver_REQUIRED_ARGC 0
#define SDL_GetCurrentVideoDriver_OPTIONAL_ARGC 0
/* SDL_GetCurrentVideoDriver
 *
 * Parameters: None
 * Return Type: const char *
 */
mrb_value
mrb_SDL_SDL_GetCurrentVideoDriver(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  const char * result = SDL_GetCurrentVideoDriver();

  /* Box the return value */
  mrb_value return_value = mrb_str_new_cstr(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_GetCursor_FUNCTION
#define SDL_GetCursor_REQUIRED_ARGC 0
#define SDL_GetCursor_OPTIONAL_ARGC 0
/* SDL_GetCursor
 *
 * Parameters: None
 * Return Type: SDL_Cursor *
 */
mrb_value
mrb_SDL_SDL_GetCursor(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  SDL_Cursor * result = SDL_GetCursor();

  /* Box the return value */
  mrb_value return_value = (result == NULL ? mrb_nil_value() : mruby_box_SDL_Cursor(mrb, result));

  return return_value;
}
#endif

#if BIND_SDL_GetDefaultAssertionHandler_FUNCTION
#define SDL_GetDefaultAssertionHandler_REQUIRED_ARGC 0
#define SDL_GetDefaultAssertionHandler_OPTIONAL_ARGC 0
/* SDL_GetDefaultAssertionHandler
 *
 * Parameters: None
 * Return Type: SDL_AssertionHandler
 */
mrb_value
mrb_SDL_SDL_GetDefaultAssertionHandler(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  SDL_AssertionHandler result = SDL_GetDefaultAssertionHandler();

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_SDL_AssertionHandler(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_GetDefaultCursor_FUNCTION
#define SDL_GetDefaultCursor_REQUIRED_ARGC 0
#define SDL_GetDefaultCursor_OPTIONAL_ARGC 0
/* SDL_GetDefaultCursor
 *
 * Parameters: None
 * Return Type: SDL_Cursor *
 */
mrb_value
mrb_SDL_SDL_GetDefaultCursor(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  SDL_Cursor * result = SDL_GetDefaultCursor();

  /* Box the return value */
  mrb_value return_value = (result == NULL ? mrb_nil_value() : mruby_box_SDL_Cursor(mrb, result));

  return return_value;
}
#endif

#if BIND_SDL_GetDesktopDisplayMode_FUNCTION
#define SDL_GetDesktopDisplayMode_REQUIRED_ARGC 2
#define SDL_GetDesktopDisplayMode_OPTIONAL_ARGC 0
/* SDL_GetDesktopDisplayMode
 *
 * Parameters:
 * - displayIndex: int
 * - mode: SDL_DisplayMode *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_GetDesktopDisplayMode(mrb_state* mrb, mrb_value self) {
  mrb_value displayIndex;
  mrb_value mode;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &displayIndex, &mode);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, displayIndex, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, mode, SDLDisplayMode_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLDisplayMode expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_displayIndex = mrb_fixnum(displayIndex);

  SDL_DisplayMode * native_mode = (mrb_nil_p(mode) ? NULL : mruby_unbox_SDL_DisplayMode(mode));

  /* Invocation */
  int result = SDL_GetDesktopDisplayMode(native_displayIndex, native_mode);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_GetDisplayBounds_FUNCTION
#define SDL_GetDisplayBounds_REQUIRED_ARGC 2
#define SDL_GetDisplayBounds_OPTIONAL_ARGC 0
/* SDL_GetDisplayBounds
 *
 * Parameters:
 * - displayIndex: int
 * - rect: struct SDL_Rect *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_GetDisplayBounds(mrb_state* mrb, mrb_value self) {
  mrb_value displayIndex;
  mrb_value rect;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &displayIndex, &rect);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, displayIndex, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, rect, SDLRect_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRect expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_displayIndex = mrb_fixnum(displayIndex);

  struct SDL_Rect * native_rect = (mrb_nil_p(rect) ? NULL : mruby_unbox_SDL_Rect(rect));

  /* Invocation */
  int result = SDL_GetDisplayBounds(native_displayIndex, native_rect);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_GetDisplayMode_FUNCTION
#define SDL_GetDisplayMode_REQUIRED_ARGC 3
#define SDL_GetDisplayMode_OPTIONAL_ARGC 0
/* SDL_GetDisplayMode
 *
 * Parameters:
 * - displayIndex: int
 * - modeIndex: int
 * - mode: SDL_DisplayMode *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_GetDisplayMode(mrb_state* mrb, mrb_value self) {
  mrb_value displayIndex;
  mrb_value modeIndex;
  mrb_value mode;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &displayIndex, &modeIndex, &mode);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, displayIndex, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, modeIndex, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, mode, SDLDisplayMode_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLDisplayMode expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_displayIndex = mrb_fixnum(displayIndex);

  int native_modeIndex = mrb_fixnum(modeIndex);

  SDL_DisplayMode * native_mode = (mrb_nil_p(mode) ? NULL : mruby_unbox_SDL_DisplayMode(mode));

  /* Invocation */
  int result = SDL_GetDisplayMode(native_displayIndex, native_modeIndex, native_mode);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_GetDisplayName_FUNCTION
#define SDL_GetDisplayName_REQUIRED_ARGC 1
#define SDL_GetDisplayName_OPTIONAL_ARGC 0
/* SDL_GetDisplayName
 *
 * Parameters:
 * - displayIndex: int
 * Return Type: const char *
 */
mrb_value
mrb_SDL_SDL_GetDisplayName(mrb_state* mrb, mrb_value self) {
  mrb_value displayIndex;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &displayIndex);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, displayIndex, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_displayIndex = mrb_fixnum(displayIndex);

  /* Invocation */
  const char * result = SDL_GetDisplayName(native_displayIndex);

  /* Box the return value */
  mrb_value return_value = mrb_str_new_cstr(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_getenv_FUNCTION
#define SDL_getenv_REQUIRED_ARGC 1
#define SDL_getenv_OPTIONAL_ARGC 0
/* SDL_getenv
 *
 * Parameters:
 * - name: const char *
 * Return Type: char *
 */
mrb_value
mrb_SDL_SDL_getenv(mrb_state* mrb, mrb_value self) {
  mrb_value name;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &name);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, name, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  const char * native_name = mrb_string_value_cstr(mrb, &name);

  /* Invocation */
  char * result = SDL_getenv(native_name);

  /* Box the return value */
  mrb_value return_value = mrb_str_new_cstr(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_GetError_FUNCTION
#define SDL_GetError_REQUIRED_ARGC 0
#define SDL_GetError_OPTIONAL_ARGC 0
/* SDL_GetError
 *
 * Parameters: None
 * Return Type: const char *
 */
mrb_value
mrb_SDL_SDL_GetError(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  const char * result = SDL_GetError();

  /* Box the return value */
  mrb_value return_value = mrb_str_new_cstr(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_GetEventFilter_FUNCTION
#define SDL_GetEventFilter_REQUIRED_ARGC 2
#define SDL_GetEventFilter_OPTIONAL_ARGC 0
/* SDL_GetEventFilter
 *
 * Parameters:
 * - filter: int (**)(void *, union SDL_Event *)
 * - userdata: void **
 * Return Type: SDL_bool
 */
mrb_value
mrb_SDL_SDL_GetEventFilter(mrb_state* mrb, mrb_value self) {
  mrb_value filter;
  mrb_value userdata;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &filter, &userdata);


  /* Type checking */
  TODO_type_check_int_LPAREN_PTR_PTR_RPAREN_LPAREN_void_PTR_COMMA_union_SDL_Event_PTR_RPAREN(filter);
  TODO_type_check_void_PTR_PTR(userdata);


  /* Unbox parameters */
  int (**)(void *, union SDL_Event *) native_filter = TODO_mruby_unbox_int_LPAREN_PTR_PTR_RPAREN_LPAREN_void_PTR_COMMA_union_SDL_Event_PTR_RPAREN(filter);

  void ** native_userdata = TODO_mruby_unbox_void_PTR_PTR(userdata);

  /* Invocation */
  SDL_bool result = SDL_GetEventFilter(native_filter, native_userdata);

  /* Box the return value */
  mrb_value return_value = mrb_bool_value((mrb_bool)result);

  return return_value;
}
#endif

#if BIND_SDL_GetHint_FUNCTION
#define SDL_GetHint_REQUIRED_ARGC 1
#define SDL_GetHint_OPTIONAL_ARGC 0
/* SDL_GetHint
 *
 * Parameters:
 * - name: const char *
 * Return Type: const char *
 */
mrb_value
mrb_SDL_SDL_GetHint(mrb_state* mrb, mrb_value self) {
  mrb_value name;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &name);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, name, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  const char * native_name = mrb_string_value_cstr(mrb, &name);

  /* Invocation */
  const char * result = SDL_GetHint(native_name);

  /* Box the return value */
  mrb_value return_value = mrb_str_new_cstr(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_GetKeyboardFocus_FUNCTION
#define SDL_GetKeyboardFocus_REQUIRED_ARGC 0
#define SDL_GetKeyboardFocus_OPTIONAL_ARGC 0
/* SDL_GetKeyboardFocus
 *
 * Parameters: None
 * Return Type: SDL_Window *
 */
mrb_value
mrb_SDL_SDL_GetKeyboardFocus(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  SDL_Window * result = SDL_GetKeyboardFocus();

  /* Box the return value */
  mrb_value return_value = (result == NULL ? mrb_nil_value() : mruby_box_SDL_Window(mrb, result));

  return return_value;
}
#endif

#if BIND_SDL_GetKeyboardState_FUNCTION
#define SDL_GetKeyboardState_REQUIRED_ARGC 1
#define SDL_GetKeyboardState_OPTIONAL_ARGC 0
/* SDL_GetKeyboardState
 *
 * Parameters:
 * - numkeys: int *
 * Return Type: const Uint8 *
 */
mrb_value
mrb_SDL_SDL_GetKeyboardState(mrb_state* mrb, mrb_value self) {
  mrb_value numkeys;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &numkeys);


  /* Type checking */
  TODO_type_check_int_PTR(numkeys);


  /* Unbox parameters */
  int * native_numkeys = TODO_mruby_unbox_int_PTR(numkeys);

  /* Invocation */
  const Uint8 * result = SDL_GetKeyboardState(native_numkeys);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_Uint8_PTR(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_GetKeyFromName_FUNCTION
#define SDL_GetKeyFromName_REQUIRED_ARGC 1
#define SDL_GetKeyFromName_OPTIONAL_ARGC 0
/* SDL_GetKeyFromName
 *
 * Parameters:
 * - name: const char *
 * Return Type: SDL_Keycode
 */
mrb_value
mrb_SDL_SDL_GetKeyFromName(mrb_state* mrb, mrb_value self) {
  mrb_value name;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &name);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, name, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  const char * native_name = mrb_string_value_cstr(mrb, &name);

  /* Invocation */
  SDL_Keycode result = SDL_GetKeyFromName(native_name);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_Sint32(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_GetKeyFromScancode_FUNCTION
#define SDL_GetKeyFromScancode_REQUIRED_ARGC 1
#define SDL_GetKeyFromScancode_OPTIONAL_ARGC 0
/* SDL_GetKeyFromScancode
 *
 * Parameters:
 * - scancode: SDL_Scancode
 * Return Type: SDL_Keycode
 */
mrb_value
mrb_SDL_SDL_GetKeyFromScancode(mrb_state* mrb, mrb_value self) {
  mrb_value scancode;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &scancode);


  /* Type checking */
  TODO_type_check_SDL_Scancode(scancode);


  /* Unbox parameters */
  SDL_Scancode native_scancode = TODO_mruby_unbox_SDL_Scancode(scancode);

  /* Invocation */
  SDL_Keycode result = SDL_GetKeyFromScancode(native_scancode);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_Sint32(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_GetKeyName_FUNCTION
#define SDL_GetKeyName_REQUIRED_ARGC 1
#define SDL_GetKeyName_OPTIONAL_ARGC 0
/* SDL_GetKeyName
 *
 * Parameters:
 * - key: int
 * Return Type: const char *
 */
mrb_value
mrb_SDL_SDL_GetKeyName(mrb_state* mrb, mrb_value self) {
  mrb_value key;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &key);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, key, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_key = mrb_fixnum(key);

  /* Invocation */
  const char * result = SDL_GetKeyName(native_key);

  /* Box the return value */
  mrb_value return_value = mrb_str_new_cstr(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_GetModState_FUNCTION
#define SDL_GetModState_REQUIRED_ARGC 0
#define SDL_GetModState_OPTIONAL_ARGC 0
/* SDL_GetModState
 *
 * Parameters: None
 * Return Type: SDL_Keymod
 */
mrb_value
mrb_SDL_SDL_GetModState(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  SDL_Keymod result = SDL_GetModState();

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_SDL_Keymod(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_GetMouseFocus_FUNCTION
#define SDL_GetMouseFocus_REQUIRED_ARGC 0
#define SDL_GetMouseFocus_OPTIONAL_ARGC 0
/* SDL_GetMouseFocus
 *
 * Parameters: None
 * Return Type: SDL_Window *
 */
mrb_value
mrb_SDL_SDL_GetMouseFocus(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  SDL_Window * result = SDL_GetMouseFocus();

  /* Box the return value */
  mrb_value return_value = (result == NULL ? mrb_nil_value() : mruby_box_SDL_Window(mrb, result));

  return return_value;
}
#endif

#if BIND_SDL_GetMouseState_FUNCTION
#define SDL_GetMouseState_REQUIRED_ARGC 2
#define SDL_GetMouseState_OPTIONAL_ARGC 0
/* SDL_GetMouseState
 *
 * Parameters:
 * - x: int *
 * - y: int *
 * Return Type: Uint32
 */
mrb_value
mrb_SDL_SDL_GetMouseState(mrb_state* mrb, mrb_value self) {
  mrb_value x;
  mrb_value y;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &x, &y);


  /* Type checking */
  TODO_type_check_int_PTR(x);
  TODO_type_check_int_PTR(y);


  /* Unbox parameters */
  int * native_x = TODO_mruby_unbox_int_PTR(x);

  int * native_y = TODO_mruby_unbox_int_PTR(y);

  /* Invocation */
  Uint32 result = SDL_GetMouseState(native_x, native_y);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_Uint32(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_GetNumAudioDevices_FUNCTION
#define SDL_GetNumAudioDevices_REQUIRED_ARGC 1
#define SDL_GetNumAudioDevices_OPTIONAL_ARGC 0
/* SDL_GetNumAudioDevices
 *
 * Parameters:
 * - iscapture: int
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_GetNumAudioDevices(mrb_state* mrb, mrb_value self) {
  mrb_value iscapture;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &iscapture);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, iscapture, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_iscapture = mrb_fixnum(iscapture);

  /* Invocation */
  int result = SDL_GetNumAudioDevices(native_iscapture);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_GetNumAudioDrivers_FUNCTION
#define SDL_GetNumAudioDrivers_REQUIRED_ARGC 0
#define SDL_GetNumAudioDrivers_OPTIONAL_ARGC 0
/* SDL_GetNumAudioDrivers
 *
 * Parameters: None
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_GetNumAudioDrivers(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  int result = SDL_GetNumAudioDrivers();

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_GetNumDisplayModes_FUNCTION
#define SDL_GetNumDisplayModes_REQUIRED_ARGC 1
#define SDL_GetNumDisplayModes_OPTIONAL_ARGC 0
/* SDL_GetNumDisplayModes
 *
 * Parameters:
 * - displayIndex: int
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_GetNumDisplayModes(mrb_state* mrb, mrb_value self) {
  mrb_value displayIndex;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &displayIndex);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, displayIndex, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_displayIndex = mrb_fixnum(displayIndex);

  /* Invocation */
  int result = SDL_GetNumDisplayModes(native_displayIndex);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_GetNumRenderDrivers_FUNCTION
#define SDL_GetNumRenderDrivers_REQUIRED_ARGC 0
#define SDL_GetNumRenderDrivers_OPTIONAL_ARGC 0
/* SDL_GetNumRenderDrivers
 *
 * Parameters: None
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_GetNumRenderDrivers(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  int result = SDL_GetNumRenderDrivers();

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_GetNumTouchDevices_FUNCTION
#define SDL_GetNumTouchDevices_REQUIRED_ARGC 0
#define SDL_GetNumTouchDevices_OPTIONAL_ARGC 0
/* SDL_GetNumTouchDevices
 *
 * Parameters: None
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_GetNumTouchDevices(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  int result = SDL_GetNumTouchDevices();

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_GetNumTouchFingers_FUNCTION
#define SDL_GetNumTouchFingers_REQUIRED_ARGC 1
#define SDL_GetNumTouchFingers_OPTIONAL_ARGC 0
/* SDL_GetNumTouchFingers
 *
 * Parameters:
 * - touchID: long long
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_GetNumTouchFingers(mrb_state* mrb, mrb_value self) {
  mrb_value touchID;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &touchID);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, touchID, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  long long native_touchID = mrb_fixnum(touchID);

  /* Invocation */
  int result = SDL_GetNumTouchFingers(native_touchID);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_GetNumVideoDisplays_FUNCTION
#define SDL_GetNumVideoDisplays_REQUIRED_ARGC 0
#define SDL_GetNumVideoDisplays_OPTIONAL_ARGC 0
/* SDL_GetNumVideoDisplays
 *
 * Parameters: None
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_GetNumVideoDisplays(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  int result = SDL_GetNumVideoDisplays();

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_GetNumVideoDrivers_FUNCTION
#define SDL_GetNumVideoDrivers_REQUIRED_ARGC 0
#define SDL_GetNumVideoDrivers_OPTIONAL_ARGC 0
/* SDL_GetNumVideoDrivers
 *
 * Parameters: None
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_GetNumVideoDrivers(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  int result = SDL_GetNumVideoDrivers();

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_GetPerformanceCounter_FUNCTION
#define SDL_GetPerformanceCounter_REQUIRED_ARGC 0
#define SDL_GetPerformanceCounter_OPTIONAL_ARGC 0
/* SDL_GetPerformanceCounter
 *
 * Parameters: None
 * Return Type: Uint64
 */
mrb_value
mrb_SDL_SDL_GetPerformanceCounter(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  Uint64 result = SDL_GetPerformanceCounter();

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_Uint64(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_GetPerformanceFrequency_FUNCTION
#define SDL_GetPerformanceFrequency_REQUIRED_ARGC 0
#define SDL_GetPerformanceFrequency_OPTIONAL_ARGC 0
/* SDL_GetPerformanceFrequency
 *
 * Parameters: None
 * Return Type: Uint64
 */
mrb_value
mrb_SDL_SDL_GetPerformanceFrequency(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  Uint64 result = SDL_GetPerformanceFrequency();

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_Uint64(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_GetPixelFormatName_FUNCTION
#define SDL_GetPixelFormatName_REQUIRED_ARGC 1
#define SDL_GetPixelFormatName_OPTIONAL_ARGC 0
/* SDL_GetPixelFormatName
 *
 * Parameters:
 * - format: unsigned int
 * Return Type: const char *
 */
mrb_value
mrb_SDL_SDL_GetPixelFormatName(mrb_state* mrb, mrb_value self) {
  mrb_value format;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &format);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, format, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  unsigned int native_format = mrb_fixnum(format);

  /* Invocation */
  const char * result = SDL_GetPixelFormatName(native_format);

  /* Box the return value */
  mrb_value return_value = mrb_str_new_cstr(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_GetPlatform_FUNCTION
#define SDL_GetPlatform_REQUIRED_ARGC 0
#define SDL_GetPlatform_OPTIONAL_ARGC 0
/* SDL_GetPlatform
 *
 * Parameters: None
 * Return Type: const char *
 */
mrb_value
mrb_SDL_SDL_GetPlatform(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  const char * result = SDL_GetPlatform();

  /* Box the return value */
  mrb_value return_value = mrb_str_new_cstr(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_GetPowerInfo_FUNCTION
#define SDL_GetPowerInfo_REQUIRED_ARGC 2
#define SDL_GetPowerInfo_OPTIONAL_ARGC 0
/* SDL_GetPowerInfo
 *
 * Parameters:
 * - secs: int *
 * - pct: int *
 * Return Type: SDL_PowerState
 */
mrb_value
mrb_SDL_SDL_GetPowerInfo(mrb_state* mrb, mrb_value self) {
  mrb_value secs;
  mrb_value pct;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &secs, &pct);


  /* Type checking */
  TODO_type_check_int_PTR(secs);
  TODO_type_check_int_PTR(pct);


  /* Unbox parameters */
  int * native_secs = TODO_mruby_unbox_int_PTR(secs);

  int * native_pct = TODO_mruby_unbox_int_PTR(pct);

  /* Invocation */
  SDL_PowerState result = SDL_GetPowerInfo(native_secs, native_pct);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_SDL_PowerState(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_GetPrefPath_FUNCTION
#define SDL_GetPrefPath_REQUIRED_ARGC 2
#define SDL_GetPrefPath_OPTIONAL_ARGC 0
/* SDL_GetPrefPath
 *
 * Parameters:
 * - org: const char *
 * - app: const char *
 * Return Type: char *
 */
mrb_value
mrb_SDL_SDL_GetPrefPath(mrb_state* mrb, mrb_value self) {
  mrb_value org;
  mrb_value app;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &org, &app);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, org, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, app, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  const char * native_org = mrb_string_value_cstr(mrb, &org);

  const char * native_app = mrb_string_value_cstr(mrb, &app);

  /* Invocation */
  char * result = SDL_GetPrefPath(native_org, native_app);

  /* Box the return value */
  mrb_value return_value = mrb_str_new_cstr(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_GetRelativeMouseMode_FUNCTION
#define SDL_GetRelativeMouseMode_REQUIRED_ARGC 0
#define SDL_GetRelativeMouseMode_OPTIONAL_ARGC 0
/* SDL_GetRelativeMouseMode
 *
 * Parameters: None
 * Return Type: SDL_bool
 */
mrb_value
mrb_SDL_SDL_GetRelativeMouseMode(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  SDL_bool result = SDL_GetRelativeMouseMode();

  /* Box the return value */
  mrb_value return_value = mrb_bool_value((mrb_bool)result);

  return return_value;
}
#endif

#if BIND_SDL_GetRelativeMouseState_FUNCTION
#define SDL_GetRelativeMouseState_REQUIRED_ARGC 2
#define SDL_GetRelativeMouseState_OPTIONAL_ARGC 0
/* SDL_GetRelativeMouseState
 *
 * Parameters:
 * - x: int *
 * - y: int *
 * Return Type: Uint32
 */
mrb_value
mrb_SDL_SDL_GetRelativeMouseState(mrb_state* mrb, mrb_value self) {
  mrb_value x;
  mrb_value y;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &x, &y);


  /* Type checking */
  TODO_type_check_int_PTR(x);
  TODO_type_check_int_PTR(y);


  /* Unbox parameters */
  int * native_x = TODO_mruby_unbox_int_PTR(x);

  int * native_y = TODO_mruby_unbox_int_PTR(y);

  /* Invocation */
  Uint32 result = SDL_GetRelativeMouseState(native_x, native_y);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_Uint32(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_GetRenderDrawBlendMode_FUNCTION
#define SDL_GetRenderDrawBlendMode_REQUIRED_ARGC 2
#define SDL_GetRenderDrawBlendMode_OPTIONAL_ARGC 0
/* SDL_GetRenderDrawBlendMode
 *
 * Parameters:
 * - renderer: struct SDL_Renderer *
 * - blendMode: SDL_BlendMode *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_GetRenderDrawBlendMode(mrb_state* mrb, mrb_value self) {
  mrb_value renderer;
  mrb_value blendMode;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &renderer, &blendMode);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, renderer, SDLRenderer_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRenderer expected");
    return mrb_nil_value();
  }
  TODO_type_check_SDL_BlendMode_PTR(blendMode);


  /* Unbox parameters */
  struct SDL_Renderer * native_renderer = (mrb_nil_p(renderer) ? NULL : mruby_unbox_SDL_Renderer(renderer));

  SDL_BlendMode * native_blendMode = TODO_mruby_unbox_SDL_BlendMode_PTR(blendMode);

  /* Invocation */
  int result = SDL_GetRenderDrawBlendMode(native_renderer, native_blendMode);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_GetRenderDrawColor_FUNCTION
#define SDL_GetRenderDrawColor_REQUIRED_ARGC 5
#define SDL_GetRenderDrawColor_OPTIONAL_ARGC 0
/* SDL_GetRenderDrawColor
 *
 * Parameters:
 * - renderer: struct SDL_Renderer *
 * - r: unsigned char *
 * - g: unsigned char *
 * - b: unsigned char *
 * - a: unsigned char *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_GetRenderDrawColor(mrb_state* mrb, mrb_value self) {
  mrb_value renderer;
  mrb_value r;
  mrb_value g;
  mrb_value b;
  mrb_value a;

  /* Fetch the args */
  mrb_get_args(mrb, "ooooo", &renderer, &r, &g, &b, &a);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, renderer, SDLRenderer_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRenderer expected");
    return mrb_nil_value();
  }
  TODO_type_check_unsigned_char_PTR(r);
  TODO_type_check_unsigned_char_PTR(g);
  TODO_type_check_unsigned_char_PTR(b);
  TODO_type_check_unsigned_char_PTR(a);


  /* Unbox parameters */
  struct SDL_Renderer * native_renderer = (mrb_nil_p(renderer) ? NULL : mruby_unbox_SDL_Renderer(renderer));

  unsigned char * native_r = TODO_mruby_unbox_unsigned_char_PTR(r);

  unsigned char * native_g = TODO_mruby_unbox_unsigned_char_PTR(g);

  unsigned char * native_b = TODO_mruby_unbox_unsigned_char_PTR(b);

  unsigned char * native_a = TODO_mruby_unbox_unsigned_char_PTR(a);

  /* Invocation */
  int result = SDL_GetRenderDrawColor(native_renderer, native_r, native_g, native_b, native_a);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_GetRenderDriverInfo_FUNCTION
#define SDL_GetRenderDriverInfo_REQUIRED_ARGC 2
#define SDL_GetRenderDriverInfo_OPTIONAL_ARGC 0
/* SDL_GetRenderDriverInfo
 *
 * Parameters:
 * - index: int
 * - info: struct SDL_RendererInfo *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_GetRenderDriverInfo(mrb_state* mrb, mrb_value self) {
  mrb_value index;
  mrb_value info;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &index, &info);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, index, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, info, SDLRendererInfo_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRendererInfo expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_index = mrb_fixnum(index);

  struct SDL_RendererInfo * native_info = (mrb_nil_p(info) ? NULL : mruby_unbox_SDL_RendererInfo(info));

  /* Invocation */
  int result = SDL_GetRenderDriverInfo(native_index, native_info);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_GetRenderer_FUNCTION
#define SDL_GetRenderer_REQUIRED_ARGC 1
#define SDL_GetRenderer_OPTIONAL_ARGC 0
/* SDL_GetRenderer
 *
 * Parameters:
 * - window: struct SDL_Window *
 * Return Type: SDL_Renderer *
 */
mrb_value
mrb_SDL_SDL_GetRenderer(mrb_state* mrb, mrb_value self) {
  mrb_value window;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &window);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, window, SDLWindow_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLWindow expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_Window * native_window = (mrb_nil_p(window) ? NULL : mruby_unbox_SDL_Window(window));

  /* Invocation */
  SDL_Renderer * result = SDL_GetRenderer(native_window);

  /* Box the return value */
  mrb_value return_value = (result == NULL ? mrb_nil_value() : mruby_box_SDL_Renderer(mrb, result));

  return return_value;
}
#endif

#if BIND_SDL_GetRendererInfo_FUNCTION
#define SDL_GetRendererInfo_REQUIRED_ARGC 2
#define SDL_GetRendererInfo_OPTIONAL_ARGC 0
/* SDL_GetRendererInfo
 *
 * Parameters:
 * - renderer: struct SDL_Renderer *
 * - info: struct SDL_RendererInfo *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_GetRendererInfo(mrb_state* mrb, mrb_value self) {
  mrb_value renderer;
  mrb_value info;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &renderer, &info);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, renderer, SDLRenderer_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRenderer expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, info, SDLRendererInfo_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRendererInfo expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_Renderer * native_renderer = (mrb_nil_p(renderer) ? NULL : mruby_unbox_SDL_Renderer(renderer));

  struct SDL_RendererInfo * native_info = (mrb_nil_p(info) ? NULL : mruby_unbox_SDL_RendererInfo(info));

  /* Invocation */
  int result = SDL_GetRendererInfo(native_renderer, native_info);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_GetRendererOutputSize_FUNCTION
#define SDL_GetRendererOutputSize_REQUIRED_ARGC 3
#define SDL_GetRendererOutputSize_OPTIONAL_ARGC 0
/* SDL_GetRendererOutputSize
 *
 * Parameters:
 * - renderer: struct SDL_Renderer *
 * - w: int *
 * - h: int *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_GetRendererOutputSize(mrb_state* mrb, mrb_value self) {
  mrb_value renderer;
  mrb_value w;
  mrb_value h;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &renderer, &w, &h);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, renderer, SDLRenderer_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRenderer expected");
    return mrb_nil_value();
  }
  TODO_type_check_int_PTR(w);
  TODO_type_check_int_PTR(h);


  /* Unbox parameters */
  struct SDL_Renderer * native_renderer = (mrb_nil_p(renderer) ? NULL : mruby_unbox_SDL_Renderer(renderer));

  int * native_w = TODO_mruby_unbox_int_PTR(w);

  int * native_h = TODO_mruby_unbox_int_PTR(h);

  /* Invocation */
  int result = SDL_GetRendererOutputSize(native_renderer, native_w, native_h);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_GetRenderTarget_FUNCTION
#define SDL_GetRenderTarget_REQUIRED_ARGC 1
#define SDL_GetRenderTarget_OPTIONAL_ARGC 0
/* SDL_GetRenderTarget
 *
 * Parameters:
 * - renderer: struct SDL_Renderer *
 * Return Type: SDL_Texture *
 */
mrb_value
mrb_SDL_SDL_GetRenderTarget(mrb_state* mrb, mrb_value self) {
  mrb_value renderer;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &renderer);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, renderer, SDLRenderer_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRenderer expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_Renderer * native_renderer = (mrb_nil_p(renderer) ? NULL : mruby_unbox_SDL_Renderer(renderer));

  /* Invocation */
  SDL_Texture * result = SDL_GetRenderTarget(native_renderer);

  /* Box the return value */
  mrb_value return_value = (result == NULL ? mrb_nil_value() : mruby_box_SDL_Texture(mrb, result));

  return return_value;
}
#endif

#if BIND_SDL_GetRevision_FUNCTION
#define SDL_GetRevision_REQUIRED_ARGC 0
#define SDL_GetRevision_OPTIONAL_ARGC 0
/* SDL_GetRevision
 *
 * Parameters: None
 * Return Type: const char *
 */
mrb_value
mrb_SDL_SDL_GetRevision(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  const char * result = SDL_GetRevision();

  /* Box the return value */
  mrb_value return_value = mrb_str_new_cstr(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_GetRevisionNumber_FUNCTION
#define SDL_GetRevisionNumber_REQUIRED_ARGC 0
#define SDL_GetRevisionNumber_OPTIONAL_ARGC 0
/* SDL_GetRevisionNumber
 *
 * Parameters: None
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_GetRevisionNumber(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  int result = SDL_GetRevisionNumber();

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_GetRGB_FUNCTION
#define SDL_GetRGB_REQUIRED_ARGC 5
#define SDL_GetRGB_OPTIONAL_ARGC 0
/* SDL_GetRGB
 *
 * Parameters:
 * - pixel: unsigned int
 * - format: const struct SDL_PixelFormat *
 * - r: unsigned char *
 * - g: unsigned char *
 * - b: unsigned char *
 * Return Type: void
 */
mrb_value
mrb_SDL_SDL_GetRGB(mrb_state* mrb, mrb_value self) {
  mrb_value pixel;
  mrb_value format;
  mrb_value r;
  mrb_value g;
  mrb_value b;

  /* Fetch the args */
  mrb_get_args(mrb, "ooooo", &pixel, &format, &r, &g, &b);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, pixel, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, format, SDLPixelFormat_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLPixelFormat expected");
    return mrb_nil_value();
  }
  TODO_type_check_unsigned_char_PTR(r);
  TODO_type_check_unsigned_char_PTR(g);
  TODO_type_check_unsigned_char_PTR(b);


  /* Unbox parameters */
  unsigned int native_pixel = mrb_fixnum(pixel);

  const struct SDL_PixelFormat * native_format = (mrb_nil_p(format) ? NULL : mruby_unbox_SDL_PixelFormat(format));

  unsigned char * native_r = TODO_mruby_unbox_unsigned_char_PTR(r);

  unsigned char * native_g = TODO_mruby_unbox_unsigned_char_PTR(g);

  unsigned char * native_b = TODO_mruby_unbox_unsigned_char_PTR(b);

  /* Invocation */
  SDL_GetRGB(native_pixel, native_format, native_r, native_g, native_b);

  return mrb_nil_value();
}
#endif

#if BIND_SDL_GetRGBA_FUNCTION
#define SDL_GetRGBA_REQUIRED_ARGC 6
#define SDL_GetRGBA_OPTIONAL_ARGC 0
/* SDL_GetRGBA
 *
 * Parameters:
 * - pixel: unsigned int
 * - format: const struct SDL_PixelFormat *
 * - r: unsigned char *
 * - g: unsigned char *
 * - b: unsigned char *
 * - a: unsigned char *
 * Return Type: void
 */
mrb_value
mrb_SDL_SDL_GetRGBA(mrb_state* mrb, mrb_value self) {
  mrb_value pixel;
  mrb_value format;
  mrb_value r;
  mrb_value g;
  mrb_value b;
  mrb_value a;

  /* Fetch the args */
  mrb_get_args(mrb, "oooooo", &pixel, &format, &r, &g, &b, &a);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, pixel, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, format, SDLPixelFormat_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLPixelFormat expected");
    return mrb_nil_value();
  }
  TODO_type_check_unsigned_char_PTR(r);
  TODO_type_check_unsigned_char_PTR(g);
  TODO_type_check_unsigned_char_PTR(b);
  TODO_type_check_unsigned_char_PTR(a);


  /* Unbox parameters */
  unsigned int native_pixel = mrb_fixnum(pixel);

  const struct SDL_PixelFormat * native_format = (mrb_nil_p(format) ? NULL : mruby_unbox_SDL_PixelFormat(format));

  unsigned char * native_r = TODO_mruby_unbox_unsigned_char_PTR(r);

  unsigned char * native_g = TODO_mruby_unbox_unsigned_char_PTR(g);

  unsigned char * native_b = TODO_mruby_unbox_unsigned_char_PTR(b);

  unsigned char * native_a = TODO_mruby_unbox_unsigned_char_PTR(a);

  /* Invocation */
  SDL_GetRGBA(native_pixel, native_format, native_r, native_g, native_b, native_a);

  return mrb_nil_value();
}
#endif

#if BIND_SDL_GetScancodeFromKey_FUNCTION
#define SDL_GetScancodeFromKey_REQUIRED_ARGC 1
#define SDL_GetScancodeFromKey_OPTIONAL_ARGC 0
/* SDL_GetScancodeFromKey
 *
 * Parameters:
 * - key: int
 * Return Type: SDL_Scancode
 */
mrb_value
mrb_SDL_SDL_GetScancodeFromKey(mrb_state* mrb, mrb_value self) {
  mrb_value key;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &key);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, key, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_key = mrb_fixnum(key);

  /* Invocation */
  SDL_Scancode result = SDL_GetScancodeFromKey(native_key);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_SDL_Scancode(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_GetScancodeFromName_FUNCTION
#define SDL_GetScancodeFromName_REQUIRED_ARGC 1
#define SDL_GetScancodeFromName_OPTIONAL_ARGC 0
/* SDL_GetScancodeFromName
 *
 * Parameters:
 * - name: const char *
 * Return Type: SDL_Scancode
 */
mrb_value
mrb_SDL_SDL_GetScancodeFromName(mrb_state* mrb, mrb_value self) {
  mrb_value name;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &name);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, name, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  const char * native_name = mrb_string_value_cstr(mrb, &name);

  /* Invocation */
  SDL_Scancode result = SDL_GetScancodeFromName(native_name);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_SDL_Scancode(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_GetScancodeName_FUNCTION
#define SDL_GetScancodeName_REQUIRED_ARGC 1
#define SDL_GetScancodeName_OPTIONAL_ARGC 0
/* SDL_GetScancodeName
 *
 * Parameters:
 * - scancode: SDL_Scancode
 * Return Type: const char *
 */
mrb_value
mrb_SDL_SDL_GetScancodeName(mrb_state* mrb, mrb_value self) {
  mrb_value scancode;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &scancode);


  /* Type checking */
  TODO_type_check_SDL_Scancode(scancode);


  /* Unbox parameters */
  SDL_Scancode native_scancode = TODO_mruby_unbox_SDL_Scancode(scancode);

  /* Invocation */
  const char * result = SDL_GetScancodeName(native_scancode);

  /* Box the return value */
  mrb_value return_value = mrb_str_new_cstr(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_GetShapedWindowMode_FUNCTION
#define SDL_GetShapedWindowMode_REQUIRED_ARGC 2
#define SDL_GetShapedWindowMode_OPTIONAL_ARGC 0
/* SDL_GetShapedWindowMode
 *
 * Parameters:
 * - window: struct SDL_Window *
 * - shape_mode: struct SDL_WindowShapeMode *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_GetShapedWindowMode(mrb_state* mrb, mrb_value self) {
  mrb_value window;
  mrb_value shape_mode;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &window, &shape_mode);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, window, SDLWindow_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLWindow expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, shape_mode, SDLWindowShapeMode_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLWindowShapeMode expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_Window * native_window = (mrb_nil_p(window) ? NULL : mruby_unbox_SDL_Window(window));

  struct SDL_WindowShapeMode * native_shape_mode = (mrb_nil_p(shape_mode) ? NULL : mruby_unbox_SDL_WindowShapeMode(shape_mode));

  /* Invocation */
  int result = SDL_GetShapedWindowMode(native_window, native_shape_mode);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_GetSurfaceAlphaMod_FUNCTION
#define SDL_GetSurfaceAlphaMod_REQUIRED_ARGC 2
#define SDL_GetSurfaceAlphaMod_OPTIONAL_ARGC 0
/* SDL_GetSurfaceAlphaMod
 *
 * Parameters:
 * - surface: struct SDL_Surface *
 * - alpha: unsigned char *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_GetSurfaceAlphaMod(mrb_state* mrb, mrb_value self) {
  mrb_value surface;
  mrb_value alpha;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &surface, &alpha);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, surface, SDLSurface_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLSurface expected");
    return mrb_nil_value();
  }
  TODO_type_check_unsigned_char_PTR(alpha);


  /* Unbox parameters */
  struct SDL_Surface * native_surface = (mrb_nil_p(surface) ? NULL : mruby_unbox_SDL_Surface(surface));

  unsigned char * native_alpha = TODO_mruby_unbox_unsigned_char_PTR(alpha);

  /* Invocation */
  int result = SDL_GetSurfaceAlphaMod(native_surface, native_alpha);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_GetSurfaceBlendMode_FUNCTION
#define SDL_GetSurfaceBlendMode_REQUIRED_ARGC 2
#define SDL_GetSurfaceBlendMode_OPTIONAL_ARGC 0
/* SDL_GetSurfaceBlendMode
 *
 * Parameters:
 * - surface: struct SDL_Surface *
 * - blendMode: SDL_BlendMode *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_GetSurfaceBlendMode(mrb_state* mrb, mrb_value self) {
  mrb_value surface;
  mrb_value blendMode;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &surface, &blendMode);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, surface, SDLSurface_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLSurface expected");
    return mrb_nil_value();
  }
  TODO_type_check_SDL_BlendMode_PTR(blendMode);


  /* Unbox parameters */
  struct SDL_Surface * native_surface = (mrb_nil_p(surface) ? NULL : mruby_unbox_SDL_Surface(surface));

  SDL_BlendMode * native_blendMode = TODO_mruby_unbox_SDL_BlendMode_PTR(blendMode);

  /* Invocation */
  int result = SDL_GetSurfaceBlendMode(native_surface, native_blendMode);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_GetSurfaceColorMod_FUNCTION
#define SDL_GetSurfaceColorMod_REQUIRED_ARGC 4
#define SDL_GetSurfaceColorMod_OPTIONAL_ARGC 0
/* SDL_GetSurfaceColorMod
 *
 * Parameters:
 * - surface: struct SDL_Surface *
 * - r: unsigned char *
 * - g: unsigned char *
 * - b: unsigned char *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_GetSurfaceColorMod(mrb_state* mrb, mrb_value self) {
  mrb_value surface;
  mrb_value r;
  mrb_value g;
  mrb_value b;

  /* Fetch the args */
  mrb_get_args(mrb, "oooo", &surface, &r, &g, &b);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, surface, SDLSurface_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLSurface expected");
    return mrb_nil_value();
  }
  TODO_type_check_unsigned_char_PTR(r);
  TODO_type_check_unsigned_char_PTR(g);
  TODO_type_check_unsigned_char_PTR(b);


  /* Unbox parameters */
  struct SDL_Surface * native_surface = (mrb_nil_p(surface) ? NULL : mruby_unbox_SDL_Surface(surface));

  unsigned char * native_r = TODO_mruby_unbox_unsigned_char_PTR(r);

  unsigned char * native_g = TODO_mruby_unbox_unsigned_char_PTR(g);

  unsigned char * native_b = TODO_mruby_unbox_unsigned_char_PTR(b);

  /* Invocation */
  int result = SDL_GetSurfaceColorMod(native_surface, native_r, native_g, native_b);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_GetSystemRAM_FUNCTION
#define SDL_GetSystemRAM_REQUIRED_ARGC 0
#define SDL_GetSystemRAM_OPTIONAL_ARGC 0
/* SDL_GetSystemRAM
 *
 * Parameters: None
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_GetSystemRAM(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  int result = SDL_GetSystemRAM();

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_GetTextureAlphaMod_FUNCTION
#define SDL_GetTextureAlphaMod_REQUIRED_ARGC 2
#define SDL_GetTextureAlphaMod_OPTIONAL_ARGC 0
/* SDL_GetTextureAlphaMod
 *
 * Parameters:
 * - texture: struct SDL_Texture *
 * - alpha: unsigned char *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_GetTextureAlphaMod(mrb_state* mrb, mrb_value self) {
  mrb_value texture;
  mrb_value alpha;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &texture, &alpha);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, texture, SDLTexture_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLTexture expected");
    return mrb_nil_value();
  }
  TODO_type_check_unsigned_char_PTR(alpha);


  /* Unbox parameters */
  struct SDL_Texture * native_texture = (mrb_nil_p(texture) ? NULL : mruby_unbox_SDL_Texture(texture));

  unsigned char * native_alpha = TODO_mruby_unbox_unsigned_char_PTR(alpha);

  /* Invocation */
  int result = SDL_GetTextureAlphaMod(native_texture, native_alpha);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_GetTextureBlendMode_FUNCTION
#define SDL_GetTextureBlendMode_REQUIRED_ARGC 2
#define SDL_GetTextureBlendMode_OPTIONAL_ARGC 0
/* SDL_GetTextureBlendMode
 *
 * Parameters:
 * - texture: struct SDL_Texture *
 * - blendMode: SDL_BlendMode *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_GetTextureBlendMode(mrb_state* mrb, mrb_value self) {
  mrb_value texture;
  mrb_value blendMode;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &texture, &blendMode);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, texture, SDLTexture_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLTexture expected");
    return mrb_nil_value();
  }
  TODO_type_check_SDL_BlendMode_PTR(blendMode);


  /* Unbox parameters */
  struct SDL_Texture * native_texture = (mrb_nil_p(texture) ? NULL : mruby_unbox_SDL_Texture(texture));

  SDL_BlendMode * native_blendMode = TODO_mruby_unbox_SDL_BlendMode_PTR(blendMode);

  /* Invocation */
  int result = SDL_GetTextureBlendMode(native_texture, native_blendMode);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_GetTextureColorMod_FUNCTION
#define SDL_GetTextureColorMod_REQUIRED_ARGC 4
#define SDL_GetTextureColorMod_OPTIONAL_ARGC 0
/* SDL_GetTextureColorMod
 *
 * Parameters:
 * - texture: struct SDL_Texture *
 * - r: unsigned char *
 * - g: unsigned char *
 * - b: unsigned char *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_GetTextureColorMod(mrb_state* mrb, mrb_value self) {
  mrb_value texture;
  mrb_value r;
  mrb_value g;
  mrb_value b;

  /* Fetch the args */
  mrb_get_args(mrb, "oooo", &texture, &r, &g, &b);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, texture, SDLTexture_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLTexture expected");
    return mrb_nil_value();
  }
  TODO_type_check_unsigned_char_PTR(r);
  TODO_type_check_unsigned_char_PTR(g);
  TODO_type_check_unsigned_char_PTR(b);


  /* Unbox parameters */
  struct SDL_Texture * native_texture = (mrb_nil_p(texture) ? NULL : mruby_unbox_SDL_Texture(texture));

  unsigned char * native_r = TODO_mruby_unbox_unsigned_char_PTR(r);

  unsigned char * native_g = TODO_mruby_unbox_unsigned_char_PTR(g);

  unsigned char * native_b = TODO_mruby_unbox_unsigned_char_PTR(b);

  /* Invocation */
  int result = SDL_GetTextureColorMod(native_texture, native_r, native_g, native_b);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_GetThreadID_FUNCTION
#define SDL_GetThreadID_REQUIRED_ARGC 1
#define SDL_GetThreadID_OPTIONAL_ARGC 0
/* SDL_GetThreadID
 *
 * Parameters:
 * - thread: struct SDL_Thread *
 * Return Type: SDL_threadID
 */
mrb_value
mrb_SDL_SDL_GetThreadID(mrb_state* mrb, mrb_value self) {
  mrb_value thread;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &thread);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, thread, SDLThread_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLThread expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_Thread * native_thread = (mrb_nil_p(thread) ? NULL : mruby_unbox_SDL_Thread(thread));

  /* Invocation */
  SDL_threadID result = SDL_GetThreadID(native_thread);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_GetThreadName_FUNCTION
#define SDL_GetThreadName_REQUIRED_ARGC 1
#define SDL_GetThreadName_OPTIONAL_ARGC 0
/* SDL_GetThreadName
 *
 * Parameters:
 * - thread: struct SDL_Thread *
 * Return Type: const char *
 */
mrb_value
mrb_SDL_SDL_GetThreadName(mrb_state* mrb, mrb_value self) {
  mrb_value thread;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &thread);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, thread, SDLThread_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLThread expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_Thread * native_thread = (mrb_nil_p(thread) ? NULL : mruby_unbox_SDL_Thread(thread));

  /* Invocation */
  const char * result = SDL_GetThreadName(native_thread);

  /* Box the return value */
  mrb_value return_value = mrb_str_new_cstr(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_GetTicks_FUNCTION
#define SDL_GetTicks_REQUIRED_ARGC 0
#define SDL_GetTicks_OPTIONAL_ARGC 0
/* SDL_GetTicks
 *
 * Parameters: None
 * Return Type: Uint32
 */
mrb_value
mrb_SDL_SDL_GetTicks(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  Uint32 result = SDL_GetTicks();

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_Uint32(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_GetTouchDevice_FUNCTION
#define SDL_GetTouchDevice_REQUIRED_ARGC 1
#define SDL_GetTouchDevice_OPTIONAL_ARGC 0
/* SDL_GetTouchDevice
 *
 * Parameters:
 * - index: int
 * Return Type: SDL_TouchID
 */
mrb_value
mrb_SDL_SDL_GetTouchDevice(mrb_state* mrb, mrb_value self) {
  mrb_value index;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &index);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, index, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_index = mrb_fixnum(index);

  /* Invocation */
  SDL_TouchID result = SDL_GetTouchDevice(native_index);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_Sint64(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_GetTouchFinger_FUNCTION
#define SDL_GetTouchFinger_REQUIRED_ARGC 2
#define SDL_GetTouchFinger_OPTIONAL_ARGC 0
/* SDL_GetTouchFinger
 *
 * Parameters:
 * - touchID: long long
 * - index: int
 * Return Type: SDL_Finger *
 */
mrb_value
mrb_SDL_SDL_GetTouchFinger(mrb_state* mrb, mrb_value self) {
  mrb_value touchID;
  mrb_value index;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &touchID, &index);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, touchID, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, index, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  long long native_touchID = mrb_fixnum(touchID);

  int native_index = mrb_fixnum(index);

  /* Invocation */
  SDL_Finger * result = SDL_GetTouchFinger(native_touchID, native_index);

  /* Box the return value */
  mrb_value return_value = (result == NULL ? mrb_nil_value() : mruby_box_SDL_Finger(mrb, result));

  return return_value;
}
#endif

#if BIND_SDL_GetVersion_FUNCTION
#define SDL_GetVersion_REQUIRED_ARGC 1
#define SDL_GetVersion_OPTIONAL_ARGC 0
/* SDL_GetVersion
 *
 * Parameters:
 * - ver: struct SDL_version *
 * Return Type: void
 */
mrb_value
mrb_SDL_SDL_GetVersion(mrb_state* mrb, mrb_value self) {
  mrb_value ver;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &ver);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, ver, SDLVersion_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLVersion expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_version * native_ver = (mrb_nil_p(ver) ? NULL : mruby_unbox_SDL_version(ver));

  /* Invocation */
  SDL_GetVersion(native_ver);

  return mrb_nil_value();
}
#endif

#if BIND_SDL_GetVideoDriver_FUNCTION
#define SDL_GetVideoDriver_REQUIRED_ARGC 1
#define SDL_GetVideoDriver_OPTIONAL_ARGC 0
/* SDL_GetVideoDriver
 *
 * Parameters:
 * - index: int
 * Return Type: const char *
 */
mrb_value
mrb_SDL_SDL_GetVideoDriver(mrb_state* mrb, mrb_value self) {
  mrb_value index;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &index);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, index, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_index = mrb_fixnum(index);

  /* Invocation */
  const char * result = SDL_GetVideoDriver(native_index);

  /* Box the return value */
  mrb_value return_value = mrb_str_new_cstr(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_GetWindowBrightness_FUNCTION
#define SDL_GetWindowBrightness_REQUIRED_ARGC 1
#define SDL_GetWindowBrightness_OPTIONAL_ARGC 0
/* SDL_GetWindowBrightness
 *
 * Parameters:
 * - window: struct SDL_Window *
 * Return Type: float
 */
mrb_value
mrb_SDL_SDL_GetWindowBrightness(mrb_state* mrb, mrb_value self) {
  mrb_value window;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &window);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, window, SDLWindow_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLWindow expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_Window * native_window = (mrb_nil_p(window) ? NULL : mruby_unbox_SDL_Window(window));

  /* Invocation */
  float result = SDL_GetWindowBrightness(native_window);

  /* Box the return value */
  mrb_value return_value = mrb_float_value(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_GetWindowData_FUNCTION
#define SDL_GetWindowData_REQUIRED_ARGC 2
#define SDL_GetWindowData_OPTIONAL_ARGC 0
/* SDL_GetWindowData
 *
 * Parameters:
 * - window: struct SDL_Window *
 * - name: const char *
 * Return Type: void *
 */
mrb_value
mrb_SDL_SDL_GetWindowData(mrb_state* mrb, mrb_value self) {
  mrb_value window;
  mrb_value name;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &window, &name);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, window, SDLWindow_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLWindow expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, name, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_Window * native_window = (mrb_nil_p(window) ? NULL : mruby_unbox_SDL_Window(window));

  const char * native_name = mrb_string_value_cstr(mrb, &name);

  /* Invocation */
  void * result = SDL_GetWindowData(native_window, native_name);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_void_PTR(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_GetWindowDisplayIndex_FUNCTION
#define SDL_GetWindowDisplayIndex_REQUIRED_ARGC 1
#define SDL_GetWindowDisplayIndex_OPTIONAL_ARGC 0
/* SDL_GetWindowDisplayIndex
 *
 * Parameters:
 * - window: struct SDL_Window *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_GetWindowDisplayIndex(mrb_state* mrb, mrb_value self) {
  mrb_value window;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &window);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, window, SDLWindow_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLWindow expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_Window * native_window = (mrb_nil_p(window) ? NULL : mruby_unbox_SDL_Window(window));

  /* Invocation */
  int result = SDL_GetWindowDisplayIndex(native_window);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_GetWindowDisplayMode_FUNCTION
#define SDL_GetWindowDisplayMode_REQUIRED_ARGC 2
#define SDL_GetWindowDisplayMode_OPTIONAL_ARGC 0
/* SDL_GetWindowDisplayMode
 *
 * Parameters:
 * - window: struct SDL_Window *
 * - mode: SDL_DisplayMode *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_GetWindowDisplayMode(mrb_state* mrb, mrb_value self) {
  mrb_value window;
  mrb_value mode;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &window, &mode);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, window, SDLWindow_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLWindow expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, mode, SDLDisplayMode_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLDisplayMode expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_Window * native_window = (mrb_nil_p(window) ? NULL : mruby_unbox_SDL_Window(window));

  SDL_DisplayMode * native_mode = (mrb_nil_p(mode) ? NULL : mruby_unbox_SDL_DisplayMode(mode));

  /* Invocation */
  int result = SDL_GetWindowDisplayMode(native_window, native_mode);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_GetWindowFlags_FUNCTION
#define SDL_GetWindowFlags_REQUIRED_ARGC 1
#define SDL_GetWindowFlags_OPTIONAL_ARGC 0
/* SDL_GetWindowFlags
 *
 * Parameters:
 * - window: struct SDL_Window *
 * Return Type: Uint32
 */
mrb_value
mrb_SDL_SDL_GetWindowFlags(mrb_state* mrb, mrb_value self) {
  mrb_value window;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &window);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, window, SDLWindow_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLWindow expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_Window * native_window = (mrb_nil_p(window) ? NULL : mruby_unbox_SDL_Window(window));

  /* Invocation */
  Uint32 result = SDL_GetWindowFlags(native_window);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_Uint32(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_GetWindowFromID_FUNCTION
#define SDL_GetWindowFromID_REQUIRED_ARGC 1
#define SDL_GetWindowFromID_OPTIONAL_ARGC 0
/* SDL_GetWindowFromID
 *
 * Parameters:
 * - id: unsigned int
 * Return Type: SDL_Window *
 */
mrb_value
mrb_SDL_SDL_GetWindowFromID(mrb_state* mrb, mrb_value self) {
  mrb_value id;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &id);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, id, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  unsigned int native_id = mrb_fixnum(id);

  /* Invocation */
  SDL_Window * result = SDL_GetWindowFromID(native_id);

  /* Box the return value */
  mrb_value return_value = (result == NULL ? mrb_nil_value() : mruby_box_SDL_Window(mrb, result));

  return return_value;
}
#endif

#if BIND_SDL_GetWindowGammaRamp_FUNCTION
#define SDL_GetWindowGammaRamp_REQUIRED_ARGC 4
#define SDL_GetWindowGammaRamp_OPTIONAL_ARGC 0
/* SDL_GetWindowGammaRamp
 *
 * Parameters:
 * - window: struct SDL_Window *
 * - red: unsigned short *
 * - green: unsigned short *
 * - blue: unsigned short *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_GetWindowGammaRamp(mrb_state* mrb, mrb_value self) {
  mrb_value window;
  mrb_value red;
  mrb_value green;
  mrb_value blue;

  /* Fetch the args */
  mrb_get_args(mrb, "oooo", &window, &red, &green, &blue);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, window, SDLWindow_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLWindow expected");
    return mrb_nil_value();
  }
  TODO_type_check_unsigned_short_PTR(red);
  TODO_type_check_unsigned_short_PTR(green);
  TODO_type_check_unsigned_short_PTR(blue);


  /* Unbox parameters */
  struct SDL_Window * native_window = (mrb_nil_p(window) ? NULL : mruby_unbox_SDL_Window(window));

  unsigned short * native_red = TODO_mruby_unbox_unsigned_short_PTR(red);

  unsigned short * native_green = TODO_mruby_unbox_unsigned_short_PTR(green);

  unsigned short * native_blue = TODO_mruby_unbox_unsigned_short_PTR(blue);

  /* Invocation */
  int result = SDL_GetWindowGammaRamp(native_window, native_red, native_green, native_blue);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_GetWindowGrab_FUNCTION
#define SDL_GetWindowGrab_REQUIRED_ARGC 1
#define SDL_GetWindowGrab_OPTIONAL_ARGC 0
/* SDL_GetWindowGrab
 *
 * Parameters:
 * - window: struct SDL_Window *
 * Return Type: SDL_bool
 */
mrb_value
mrb_SDL_SDL_GetWindowGrab(mrb_state* mrb, mrb_value self) {
  mrb_value window;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &window);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, window, SDLWindow_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLWindow expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_Window * native_window = (mrb_nil_p(window) ? NULL : mruby_unbox_SDL_Window(window));

  /* Invocation */
  SDL_bool result = SDL_GetWindowGrab(native_window);

  /* Box the return value */
  mrb_value return_value = mrb_bool_value((mrb_bool)result);

  return return_value;
}
#endif

#if BIND_SDL_GetWindowID_FUNCTION
#define SDL_GetWindowID_REQUIRED_ARGC 1
#define SDL_GetWindowID_OPTIONAL_ARGC 0
/* SDL_GetWindowID
 *
 * Parameters:
 * - window: struct SDL_Window *
 * Return Type: Uint32
 */
mrb_value
mrb_SDL_SDL_GetWindowID(mrb_state* mrb, mrb_value self) {
  mrb_value window;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &window);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, window, SDLWindow_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLWindow expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_Window * native_window = (mrb_nil_p(window) ? NULL : mruby_unbox_SDL_Window(window));

  /* Invocation */
  Uint32 result = SDL_GetWindowID(native_window);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_Uint32(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_GetWindowMaximumSize_FUNCTION
#define SDL_GetWindowMaximumSize_REQUIRED_ARGC 3
#define SDL_GetWindowMaximumSize_OPTIONAL_ARGC 0
/* SDL_GetWindowMaximumSize
 *
 * Parameters:
 * - window: struct SDL_Window *
 * - w: int *
 * - h: int *
 * Return Type: void
 */
mrb_value
mrb_SDL_SDL_GetWindowMaximumSize(mrb_state* mrb, mrb_value self) {
  mrb_value window;
  mrb_value w;
  mrb_value h;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &window, &w, &h);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, window, SDLWindow_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLWindow expected");
    return mrb_nil_value();
  }
  TODO_type_check_int_PTR(w);
  TODO_type_check_int_PTR(h);


  /* Unbox parameters */
  struct SDL_Window * native_window = (mrb_nil_p(window) ? NULL : mruby_unbox_SDL_Window(window));

  int * native_w = TODO_mruby_unbox_int_PTR(w);

  int * native_h = TODO_mruby_unbox_int_PTR(h);

  /* Invocation */
  SDL_GetWindowMaximumSize(native_window, native_w, native_h);

  return mrb_nil_value();
}
#endif

#if BIND_SDL_GetWindowMinimumSize_FUNCTION
#define SDL_GetWindowMinimumSize_REQUIRED_ARGC 3
#define SDL_GetWindowMinimumSize_OPTIONAL_ARGC 0
/* SDL_GetWindowMinimumSize
 *
 * Parameters:
 * - window: struct SDL_Window *
 * - w: int *
 * - h: int *
 * Return Type: void
 */
mrb_value
mrb_SDL_SDL_GetWindowMinimumSize(mrb_state* mrb, mrb_value self) {
  mrb_value window;
  mrb_value w;
  mrb_value h;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &window, &w, &h);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, window, SDLWindow_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLWindow expected");
    return mrb_nil_value();
  }
  TODO_type_check_int_PTR(w);
  TODO_type_check_int_PTR(h);


  /* Unbox parameters */
  struct SDL_Window * native_window = (mrb_nil_p(window) ? NULL : mruby_unbox_SDL_Window(window));

  int * native_w = TODO_mruby_unbox_int_PTR(w);

  int * native_h = TODO_mruby_unbox_int_PTR(h);

  /* Invocation */
  SDL_GetWindowMinimumSize(native_window, native_w, native_h);

  return mrb_nil_value();
}
#endif

#if BIND_SDL_GetWindowPixelFormat_FUNCTION
#define SDL_GetWindowPixelFormat_REQUIRED_ARGC 1
#define SDL_GetWindowPixelFormat_OPTIONAL_ARGC 0
/* SDL_GetWindowPixelFormat
 *
 * Parameters:
 * - window: struct SDL_Window *
 * Return Type: Uint32
 */
mrb_value
mrb_SDL_SDL_GetWindowPixelFormat(mrb_state* mrb, mrb_value self) {
  mrb_value window;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &window);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, window, SDLWindow_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLWindow expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_Window * native_window = (mrb_nil_p(window) ? NULL : mruby_unbox_SDL_Window(window));

  /* Invocation */
  Uint32 result = SDL_GetWindowPixelFormat(native_window);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_Uint32(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_GetWindowPosition_FUNCTION
#define SDL_GetWindowPosition_REQUIRED_ARGC 3
#define SDL_GetWindowPosition_OPTIONAL_ARGC 0
/* SDL_GetWindowPosition
 *
 * Parameters:
 * - window: struct SDL_Window *
 * - x: int *
 * - y: int *
 * Return Type: void
 */
mrb_value
mrb_SDL_SDL_GetWindowPosition(mrb_state* mrb, mrb_value self) {
  mrb_value window;
  mrb_value x;
  mrb_value y;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &window, &x, &y);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, window, SDLWindow_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLWindow expected");
    return mrb_nil_value();
  }
  TODO_type_check_int_PTR(x);
  TODO_type_check_int_PTR(y);


  /* Unbox parameters */
  struct SDL_Window * native_window = (mrb_nil_p(window) ? NULL : mruby_unbox_SDL_Window(window));

  int * native_x = TODO_mruby_unbox_int_PTR(x);

  int * native_y = TODO_mruby_unbox_int_PTR(y);

  /* Invocation */
  SDL_GetWindowPosition(native_window, native_x, native_y);

  return mrb_nil_value();
}
#endif

#if BIND_SDL_GetWindowSize_FUNCTION
#define SDL_GetWindowSize_REQUIRED_ARGC 3
#define SDL_GetWindowSize_OPTIONAL_ARGC 0
/* SDL_GetWindowSize
 *
 * Parameters:
 * - window: struct SDL_Window *
 * - w: int *
 * - h: int *
 * Return Type: void
 */
mrb_value
mrb_SDL_SDL_GetWindowSize(mrb_state* mrb, mrb_value self) {
  mrb_value window;
  mrb_value w;
  mrb_value h;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &window, &w, &h);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, window, SDLWindow_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLWindow expected");
    return mrb_nil_value();
  }
  TODO_type_check_int_PTR(w);
  TODO_type_check_int_PTR(h);


  /* Unbox parameters */
  struct SDL_Window * native_window = (mrb_nil_p(window) ? NULL : mruby_unbox_SDL_Window(window));

  int * native_w = TODO_mruby_unbox_int_PTR(w);

  int * native_h = TODO_mruby_unbox_int_PTR(h);

  /* Invocation */
  SDL_GetWindowSize(native_window, native_w, native_h);

  return mrb_nil_value();
}
#endif

#if BIND_SDL_GetWindowSurface_FUNCTION
#define SDL_GetWindowSurface_REQUIRED_ARGC 1
#define SDL_GetWindowSurface_OPTIONAL_ARGC 0
/* SDL_GetWindowSurface
 *
 * Parameters:
 * - window: struct SDL_Window *
 * Return Type: SDL_Surface *
 */
mrb_value
mrb_SDL_SDL_GetWindowSurface(mrb_state* mrb, mrb_value self) {
  mrb_value window;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &window);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, window, SDLWindow_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLWindow expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_Window * native_window = (mrb_nil_p(window) ? NULL : mruby_unbox_SDL_Window(window));

  /* Invocation */
  SDL_Surface * result = SDL_GetWindowSurface(native_window);

  /* Box the return value */
  mrb_value return_value = (result == NULL ? mrb_nil_value() : mruby_box_SDL_Surface(mrb, result));

  return return_value;
}
#endif

#if BIND_SDL_GetWindowTitle_FUNCTION
#define SDL_GetWindowTitle_REQUIRED_ARGC 1
#define SDL_GetWindowTitle_OPTIONAL_ARGC 0
/* SDL_GetWindowTitle
 *
 * Parameters:
 * - window: struct SDL_Window *
 * Return Type: const char *
 */
mrb_value
mrb_SDL_SDL_GetWindowTitle(mrb_state* mrb, mrb_value self) {
  mrb_value window;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &window);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, window, SDLWindow_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLWindow expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_Window * native_window = (mrb_nil_p(window) ? NULL : mruby_unbox_SDL_Window(window));

  /* Invocation */
  const char * result = SDL_GetWindowTitle(native_window);

  /* Box the return value */
  mrb_value return_value = mrb_str_new_cstr(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_GetWindowWMInfo_FUNCTION
#define SDL_GetWindowWMInfo_REQUIRED_ARGC 2
#define SDL_GetWindowWMInfo_OPTIONAL_ARGC 0
/* SDL_GetWindowWMInfo
 *
 * Parameters:
 * - window: struct SDL_Window *
 * - info: struct SDL_SysWMinfo *
 * Return Type: SDL_bool
 */
mrb_value
mrb_SDL_SDL_GetWindowWMInfo(mrb_state* mrb, mrb_value self) {
  mrb_value window;
  mrb_value info;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &window, &info);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, window, SDLWindow_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLWindow expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, info, SDLSysWMinfo_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLSysWMinfo expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_Window * native_window = (mrb_nil_p(window) ? NULL : mruby_unbox_SDL_Window(window));

  struct SDL_SysWMinfo * native_info = (mrb_nil_p(info) ? NULL : mruby_unbox_SDL_SysWMinfo(info));

  /* Invocation */
  SDL_bool result = SDL_GetWindowWMInfo(native_window, native_info);

  /* Box the return value */
  mrb_value return_value = mrb_bool_value((mrb_bool)result);

  return return_value;
}
#endif

#if BIND_SDL_GL_BindTexture_FUNCTION
#define SDL_GL_BindTexture_REQUIRED_ARGC 3
#define SDL_GL_BindTexture_OPTIONAL_ARGC 0
/* SDL_GL_BindTexture
 *
 * Parameters:
 * - texture: struct SDL_Texture *
 * - texw: float *
 * - texh: float *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_GL_BindTexture(mrb_state* mrb, mrb_value self) {
  mrb_value texture;
  mrb_value texw;
  mrb_value texh;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &texture, &texw, &texh);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, texture, SDLTexture_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLTexture expected");
    return mrb_nil_value();
  }
  TODO_type_check_float_PTR(texw);
  TODO_type_check_float_PTR(texh);


  /* Unbox parameters */
  struct SDL_Texture * native_texture = (mrb_nil_p(texture) ? NULL : mruby_unbox_SDL_Texture(texture));

  float * native_texw = TODO_mruby_unbox_float_PTR(texw);

  float * native_texh = TODO_mruby_unbox_float_PTR(texh);

  /* Invocation */
  int result = SDL_GL_BindTexture(native_texture, native_texw, native_texh);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_GL_CreateContext_FUNCTION
#define SDL_GL_CreateContext_REQUIRED_ARGC 1
#define SDL_GL_CreateContext_OPTIONAL_ARGC 0
/* SDL_GL_CreateContext
 *
 * Parameters:
 * - window: struct SDL_Window *
 * Return Type: SDL_GLContext
 */
mrb_value
mrb_SDL_SDL_GL_CreateContext(mrb_state* mrb, mrb_value self) {
  mrb_value window;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &window);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, window, SDLWindow_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLWindow expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_Window * native_window = (mrb_nil_p(window) ? NULL : mruby_unbox_SDL_Window(window));

  /* Invocation */
  SDL_GLContext result = SDL_GL_CreateContext(native_window);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_void_PTR(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_GL_DeleteContext_FUNCTION
#define SDL_GL_DeleteContext_REQUIRED_ARGC 1
#define SDL_GL_DeleteContext_OPTIONAL_ARGC 0
/* SDL_GL_DeleteContext
 *
 * Parameters:
 * - context: void *
 * Return Type: void
 */
mrb_value
mrb_SDL_SDL_GL_DeleteContext(mrb_state* mrb, mrb_value self) {
  mrb_value context;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &context);


  /* Type checking */
  TODO_type_check_void_PTR(context);


  /* Unbox parameters */
  void * native_context = TODO_mruby_unbox_void_PTR(context);

  /* Invocation */
  SDL_GL_DeleteContext(native_context);

  return mrb_nil_value();
}
#endif

#if BIND_SDL_GL_ExtensionSupported_FUNCTION
#define SDL_GL_ExtensionSupported_REQUIRED_ARGC 1
#define SDL_GL_ExtensionSupported_OPTIONAL_ARGC 0
/* SDL_GL_ExtensionSupported
 *
 * Parameters:
 * - extension: const char *
 * Return Type: SDL_bool
 */
mrb_value
mrb_SDL_SDL_GL_ExtensionSupported(mrb_state* mrb, mrb_value self) {
  mrb_value extension;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &extension);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, extension, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  const char * native_extension = mrb_string_value_cstr(mrb, &extension);

  /* Invocation */
  SDL_bool result = SDL_GL_ExtensionSupported(native_extension);

  /* Box the return value */
  mrb_value return_value = mrb_bool_value((mrb_bool)result);

  return return_value;
}
#endif

#if BIND_SDL_GL_GetAttribute_FUNCTION
#define SDL_GL_GetAttribute_REQUIRED_ARGC 2
#define SDL_GL_GetAttribute_OPTIONAL_ARGC 0
/* SDL_GL_GetAttribute
 *
 * Parameters:
 * - attr: SDL_GLattr
 * - value: int *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_GL_GetAttribute(mrb_state* mrb, mrb_value self) {
  mrb_value attr;
  mrb_value value;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &attr, &value);


  /* Type checking */
  TODO_type_check_SDL_GLattr(attr);
  TODO_type_check_int_PTR(value);


  /* Unbox parameters */
  SDL_GLattr native_attr = TODO_mruby_unbox_SDL_GLattr(attr);

  int * native_value = TODO_mruby_unbox_int_PTR(value);

  /* Invocation */
  int result = SDL_GL_GetAttribute(native_attr, native_value);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_GL_GetCurrentContext_FUNCTION
#define SDL_GL_GetCurrentContext_REQUIRED_ARGC 0
#define SDL_GL_GetCurrentContext_OPTIONAL_ARGC 0
/* SDL_GL_GetCurrentContext
 *
 * Parameters: None
 * Return Type: SDL_GLContext
 */
mrb_value
mrb_SDL_SDL_GL_GetCurrentContext(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  SDL_GLContext result = SDL_GL_GetCurrentContext();

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_void_PTR(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_GL_GetCurrentWindow_FUNCTION
#define SDL_GL_GetCurrentWindow_REQUIRED_ARGC 0
#define SDL_GL_GetCurrentWindow_OPTIONAL_ARGC 0
/* SDL_GL_GetCurrentWindow
 *
 * Parameters: None
 * Return Type: SDL_Window *
 */
mrb_value
mrb_SDL_SDL_GL_GetCurrentWindow(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  SDL_Window * result = SDL_GL_GetCurrentWindow();

  /* Box the return value */
  mrb_value return_value = (result == NULL ? mrb_nil_value() : mruby_box_SDL_Window(mrb, result));

  return return_value;
}
#endif

#if BIND_SDL_GL_GetDrawableSize_FUNCTION
#define SDL_GL_GetDrawableSize_REQUIRED_ARGC 3
#define SDL_GL_GetDrawableSize_OPTIONAL_ARGC 0
/* SDL_GL_GetDrawableSize
 *
 * Parameters:
 * - window: struct SDL_Window *
 * - w: int *
 * - h: int *
 * Return Type: void
 */
mrb_value
mrb_SDL_SDL_GL_GetDrawableSize(mrb_state* mrb, mrb_value self) {
  mrb_value window;
  mrb_value w;
  mrb_value h;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &window, &w, &h);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, window, SDLWindow_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLWindow expected");
    return mrb_nil_value();
  }
  TODO_type_check_int_PTR(w);
  TODO_type_check_int_PTR(h);


  /* Unbox parameters */
  struct SDL_Window * native_window = (mrb_nil_p(window) ? NULL : mruby_unbox_SDL_Window(window));

  int * native_w = TODO_mruby_unbox_int_PTR(w);

  int * native_h = TODO_mruby_unbox_int_PTR(h);

  /* Invocation */
  SDL_GL_GetDrawableSize(native_window, native_w, native_h);

  return mrb_nil_value();
}
#endif

#if BIND_SDL_GL_GetProcAddress_FUNCTION
#define SDL_GL_GetProcAddress_REQUIRED_ARGC 1
#define SDL_GL_GetProcAddress_OPTIONAL_ARGC 0
/* SDL_GL_GetProcAddress
 *
 * Parameters:
 * - proc: const char *
 * Return Type: void *
 */
mrb_value
mrb_SDL_SDL_GL_GetProcAddress(mrb_state* mrb, mrb_value self) {
  mrb_value proc;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &proc);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, proc, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  const char * native_proc = mrb_string_value_cstr(mrb, &proc);

  /* Invocation */
  void * result = SDL_GL_GetProcAddress(native_proc);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_void_PTR(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_GL_GetSwapInterval_FUNCTION
#define SDL_GL_GetSwapInterval_REQUIRED_ARGC 0
#define SDL_GL_GetSwapInterval_OPTIONAL_ARGC 0
/* SDL_GL_GetSwapInterval
 *
 * Parameters: None
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_GL_GetSwapInterval(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  int result = SDL_GL_GetSwapInterval();

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_GL_LoadLibrary_FUNCTION
#define SDL_GL_LoadLibrary_REQUIRED_ARGC 1
#define SDL_GL_LoadLibrary_OPTIONAL_ARGC 0
/* SDL_GL_LoadLibrary
 *
 * Parameters:
 * - path: const char *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_GL_LoadLibrary(mrb_state* mrb, mrb_value self) {
  mrb_value path;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &path);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, path, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  const char * native_path = mrb_string_value_cstr(mrb, &path);

  /* Invocation */
  int result = SDL_GL_LoadLibrary(native_path);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_GL_MakeCurrent_FUNCTION
#define SDL_GL_MakeCurrent_REQUIRED_ARGC 2
#define SDL_GL_MakeCurrent_OPTIONAL_ARGC 0
/* SDL_GL_MakeCurrent
 *
 * Parameters:
 * - window: struct SDL_Window *
 * - context: void *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_GL_MakeCurrent(mrb_state* mrb, mrb_value self) {
  mrb_value window;
  mrb_value context;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &window, &context);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, window, SDLWindow_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLWindow expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR(context);


  /* Unbox parameters */
  struct SDL_Window * native_window = (mrb_nil_p(window) ? NULL : mruby_unbox_SDL_Window(window));

  void * native_context = TODO_mruby_unbox_void_PTR(context);

  /* Invocation */
  int result = SDL_GL_MakeCurrent(native_window, native_context);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_GL_ResetAttributes_FUNCTION
#define SDL_GL_ResetAttributes_REQUIRED_ARGC 0
#define SDL_GL_ResetAttributes_OPTIONAL_ARGC 0
/* SDL_GL_ResetAttributes
 *
 * Parameters: None
 * Return Type: void
 */
mrb_value
mrb_SDL_SDL_GL_ResetAttributes(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  SDL_GL_ResetAttributes();

  return mrb_nil_value();
}
#endif

#if BIND_SDL_GL_SetAttribute_FUNCTION
#define SDL_GL_SetAttribute_REQUIRED_ARGC 2
#define SDL_GL_SetAttribute_OPTIONAL_ARGC 0
/* SDL_GL_SetAttribute
 *
 * Parameters:
 * - attr: SDL_GLattr
 * - value: int
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_GL_SetAttribute(mrb_state* mrb, mrb_value self) {
  mrb_value attr;
  mrb_value value;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &attr, &value);


  /* Type checking */
  TODO_type_check_SDL_GLattr(attr);
  if (!mrb_obj_is_kind_of(mrb, value, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  SDL_GLattr native_attr = TODO_mruby_unbox_SDL_GLattr(attr);

  int native_value = mrb_fixnum(value);

  /* Invocation */
  int result = SDL_GL_SetAttribute(native_attr, native_value);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_GL_SetSwapInterval_FUNCTION
#define SDL_GL_SetSwapInterval_REQUIRED_ARGC 1
#define SDL_GL_SetSwapInterval_OPTIONAL_ARGC 0
/* SDL_GL_SetSwapInterval
 *
 * Parameters:
 * - interval: int
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_GL_SetSwapInterval(mrb_state* mrb, mrb_value self) {
  mrb_value interval;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &interval);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, interval, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_interval = mrb_fixnum(interval);

  /* Invocation */
  int result = SDL_GL_SetSwapInterval(native_interval);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_GL_SwapWindow_FUNCTION
#define SDL_GL_SwapWindow_REQUIRED_ARGC 1
#define SDL_GL_SwapWindow_OPTIONAL_ARGC 0
/* SDL_GL_SwapWindow
 *
 * Parameters:
 * - window: struct SDL_Window *
 * Return Type: void
 */
mrb_value
mrb_SDL_SDL_GL_SwapWindow(mrb_state* mrb, mrb_value self) {
  mrb_value window;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &window);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, window, SDLWindow_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLWindow expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_Window * native_window = (mrb_nil_p(window) ? NULL : mruby_unbox_SDL_Window(window));

  /* Invocation */
  SDL_GL_SwapWindow(native_window);

  return mrb_nil_value();
}
#endif

#if BIND_SDL_GL_UnbindTexture_FUNCTION
#define SDL_GL_UnbindTexture_REQUIRED_ARGC 1
#define SDL_GL_UnbindTexture_OPTIONAL_ARGC 0
/* SDL_GL_UnbindTexture
 *
 * Parameters:
 * - texture: struct SDL_Texture *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_GL_UnbindTexture(mrb_state* mrb, mrb_value self) {
  mrb_value texture;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &texture);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, texture, SDLTexture_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLTexture expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_Texture * native_texture = (mrb_nil_p(texture) ? NULL : mruby_unbox_SDL_Texture(texture));

  /* Invocation */
  int result = SDL_GL_UnbindTexture(native_texture);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_GL_UnloadLibrary_FUNCTION
#define SDL_GL_UnloadLibrary_REQUIRED_ARGC 0
#define SDL_GL_UnloadLibrary_OPTIONAL_ARGC 0
/* SDL_GL_UnloadLibrary
 *
 * Parameters: None
 * Return Type: void
 */
mrb_value
mrb_SDL_SDL_GL_UnloadLibrary(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  SDL_GL_UnloadLibrary();

  return mrb_nil_value();
}
#endif

#if BIND_SDL_HapticClose_FUNCTION
#define SDL_HapticClose_REQUIRED_ARGC 1
#define SDL_HapticClose_OPTIONAL_ARGC 0
/* SDL_HapticClose
 *
 * Parameters:
 * - haptic: struct _SDL_Haptic *
 * Return Type: void
 */
mrb_value
mrb_SDL_SDL_HapticClose(mrb_state* mrb, mrb_value self) {
  mrb_value haptic;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &haptic);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, haptic, SDLHaptic_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLHaptic expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _SDL_Haptic * native_haptic = (mrb_nil_p(haptic) ? NULL : mruby_unbox__SDL_Haptic(haptic));

  /* Invocation */
  SDL_HapticClose(native_haptic);

  return mrb_nil_value();
}
#endif

#if BIND_SDL_HapticDestroyEffect_FUNCTION
#define SDL_HapticDestroyEffect_REQUIRED_ARGC 2
#define SDL_HapticDestroyEffect_OPTIONAL_ARGC 0
/* SDL_HapticDestroyEffect
 *
 * Parameters:
 * - haptic: struct _SDL_Haptic *
 * - effect: int
 * Return Type: void
 */
mrb_value
mrb_SDL_SDL_HapticDestroyEffect(mrb_state* mrb, mrb_value self) {
  mrb_value haptic;
  mrb_value effect;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &haptic, &effect);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, haptic, SDLHaptic_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLHaptic expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, effect, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _SDL_Haptic * native_haptic = (mrb_nil_p(haptic) ? NULL : mruby_unbox__SDL_Haptic(haptic));

  int native_effect = mrb_fixnum(effect);

  /* Invocation */
  SDL_HapticDestroyEffect(native_haptic, native_effect);

  return mrb_nil_value();
}
#endif

#if BIND_SDL_HapticEffectSupported_FUNCTION
#define SDL_HapticEffectSupported_REQUIRED_ARGC 2
#define SDL_HapticEffectSupported_OPTIONAL_ARGC 0
/* SDL_HapticEffectSupported
 *
 * Parameters:
 * - haptic: struct _SDL_Haptic *
 * - effect: union SDL_HapticEffect *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_HapticEffectSupported(mrb_state* mrb, mrb_value self) {
  mrb_value haptic;
  mrb_value effect;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &haptic, &effect);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, haptic, SDLHaptic_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLHaptic expected");
    return mrb_nil_value();
  }
  TODO_type_check_union_SDL_HapticEffect_PTR(effect);


  /* Unbox parameters */
  struct _SDL_Haptic * native_haptic = (mrb_nil_p(haptic) ? NULL : mruby_unbox__SDL_Haptic(haptic));

  union SDL_HapticEffect * native_effect = TODO_mruby_unbox_union_SDL_HapticEffect_PTR(effect);

  /* Invocation */
  int result = SDL_HapticEffectSupported(native_haptic, native_effect);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_HapticGetEffectStatus_FUNCTION
#define SDL_HapticGetEffectStatus_REQUIRED_ARGC 2
#define SDL_HapticGetEffectStatus_OPTIONAL_ARGC 0
/* SDL_HapticGetEffectStatus
 *
 * Parameters:
 * - haptic: struct _SDL_Haptic *
 * - effect: int
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_HapticGetEffectStatus(mrb_state* mrb, mrb_value self) {
  mrb_value haptic;
  mrb_value effect;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &haptic, &effect);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, haptic, SDLHaptic_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLHaptic expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, effect, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _SDL_Haptic * native_haptic = (mrb_nil_p(haptic) ? NULL : mruby_unbox__SDL_Haptic(haptic));

  int native_effect = mrb_fixnum(effect);

  /* Invocation */
  int result = SDL_HapticGetEffectStatus(native_haptic, native_effect);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_HapticIndex_FUNCTION
#define SDL_HapticIndex_REQUIRED_ARGC 1
#define SDL_HapticIndex_OPTIONAL_ARGC 0
/* SDL_HapticIndex
 *
 * Parameters:
 * - haptic: struct _SDL_Haptic *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_HapticIndex(mrb_state* mrb, mrb_value self) {
  mrb_value haptic;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &haptic);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, haptic, SDLHaptic_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLHaptic expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _SDL_Haptic * native_haptic = (mrb_nil_p(haptic) ? NULL : mruby_unbox__SDL_Haptic(haptic));

  /* Invocation */
  int result = SDL_HapticIndex(native_haptic);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_HapticName_FUNCTION
#define SDL_HapticName_REQUIRED_ARGC 1
#define SDL_HapticName_OPTIONAL_ARGC 0
/* SDL_HapticName
 *
 * Parameters:
 * - device_index: int
 * Return Type: const char *
 */
mrb_value
mrb_SDL_SDL_HapticName(mrb_state* mrb, mrb_value self) {
  mrb_value device_index;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &device_index);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, device_index, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_device_index = mrb_fixnum(device_index);

  /* Invocation */
  const char * result = SDL_HapticName(native_device_index);

  /* Box the return value */
  mrb_value return_value = mrb_str_new_cstr(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_HapticNewEffect_FUNCTION
#define SDL_HapticNewEffect_REQUIRED_ARGC 2
#define SDL_HapticNewEffect_OPTIONAL_ARGC 0
/* SDL_HapticNewEffect
 *
 * Parameters:
 * - haptic: struct _SDL_Haptic *
 * - effect: union SDL_HapticEffect *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_HapticNewEffect(mrb_state* mrb, mrb_value self) {
  mrb_value haptic;
  mrb_value effect;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &haptic, &effect);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, haptic, SDLHaptic_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLHaptic expected");
    return mrb_nil_value();
  }
  TODO_type_check_union_SDL_HapticEffect_PTR(effect);


  /* Unbox parameters */
  struct _SDL_Haptic * native_haptic = (mrb_nil_p(haptic) ? NULL : mruby_unbox__SDL_Haptic(haptic));

  union SDL_HapticEffect * native_effect = TODO_mruby_unbox_union_SDL_HapticEffect_PTR(effect);

  /* Invocation */
  int result = SDL_HapticNewEffect(native_haptic, native_effect);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_HapticNumAxes_FUNCTION
#define SDL_HapticNumAxes_REQUIRED_ARGC 1
#define SDL_HapticNumAxes_OPTIONAL_ARGC 0
/* SDL_HapticNumAxes
 *
 * Parameters:
 * - haptic: struct _SDL_Haptic *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_HapticNumAxes(mrb_state* mrb, mrb_value self) {
  mrb_value haptic;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &haptic);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, haptic, SDLHaptic_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLHaptic expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _SDL_Haptic * native_haptic = (mrb_nil_p(haptic) ? NULL : mruby_unbox__SDL_Haptic(haptic));

  /* Invocation */
  int result = SDL_HapticNumAxes(native_haptic);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_HapticNumEffects_FUNCTION
#define SDL_HapticNumEffects_REQUIRED_ARGC 1
#define SDL_HapticNumEffects_OPTIONAL_ARGC 0
/* SDL_HapticNumEffects
 *
 * Parameters:
 * - haptic: struct _SDL_Haptic *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_HapticNumEffects(mrb_state* mrb, mrb_value self) {
  mrb_value haptic;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &haptic);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, haptic, SDLHaptic_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLHaptic expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _SDL_Haptic * native_haptic = (mrb_nil_p(haptic) ? NULL : mruby_unbox__SDL_Haptic(haptic));

  /* Invocation */
  int result = SDL_HapticNumEffects(native_haptic);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_HapticNumEffectsPlaying_FUNCTION
#define SDL_HapticNumEffectsPlaying_REQUIRED_ARGC 1
#define SDL_HapticNumEffectsPlaying_OPTIONAL_ARGC 0
/* SDL_HapticNumEffectsPlaying
 *
 * Parameters:
 * - haptic: struct _SDL_Haptic *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_HapticNumEffectsPlaying(mrb_state* mrb, mrb_value self) {
  mrb_value haptic;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &haptic);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, haptic, SDLHaptic_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLHaptic expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _SDL_Haptic * native_haptic = (mrb_nil_p(haptic) ? NULL : mruby_unbox__SDL_Haptic(haptic));

  /* Invocation */
  int result = SDL_HapticNumEffectsPlaying(native_haptic);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_HapticOpen_FUNCTION
#define SDL_HapticOpen_REQUIRED_ARGC 1
#define SDL_HapticOpen_OPTIONAL_ARGC 0
/* SDL_HapticOpen
 *
 * Parameters:
 * - device_index: int
 * Return Type: SDL_Haptic *
 */
mrb_value
mrb_SDL_SDL_HapticOpen(mrb_state* mrb, mrb_value self) {
  mrb_value device_index;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &device_index);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, device_index, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_device_index = mrb_fixnum(device_index);

  /* Invocation */
  SDL_Haptic * result = SDL_HapticOpen(native_device_index);

  /* Box the return value */
  mrb_value return_value = (result == NULL ? mrb_nil_value() : mruby_box__SDL_Haptic(mrb, result));

  return return_value;
}
#endif

#if BIND_SDL_HapticOpened_FUNCTION
#define SDL_HapticOpened_REQUIRED_ARGC 1
#define SDL_HapticOpened_OPTIONAL_ARGC 0
/* SDL_HapticOpened
 *
 * Parameters:
 * - device_index: int
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_HapticOpened(mrb_state* mrb, mrb_value self) {
  mrb_value device_index;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &device_index);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, device_index, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_device_index = mrb_fixnum(device_index);

  /* Invocation */
  int result = SDL_HapticOpened(native_device_index);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_HapticOpenFromJoystick_FUNCTION
#define SDL_HapticOpenFromJoystick_REQUIRED_ARGC 1
#define SDL_HapticOpenFromJoystick_OPTIONAL_ARGC 0
/* SDL_HapticOpenFromJoystick
 *
 * Parameters:
 * - joystick: struct _SDL_Joystick *
 * Return Type: SDL_Haptic *
 */
mrb_value
mrb_SDL_SDL_HapticOpenFromJoystick(mrb_state* mrb, mrb_value self) {
  mrb_value joystick;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &joystick);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, joystick, SDLJoystick_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLJoystick expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _SDL_Joystick * native_joystick = (mrb_nil_p(joystick) ? NULL : mruby_unbox__SDL_Joystick(joystick));

  /* Invocation */
  SDL_Haptic * result = SDL_HapticOpenFromJoystick(native_joystick);

  /* Box the return value */
  mrb_value return_value = (result == NULL ? mrb_nil_value() : mruby_box__SDL_Haptic(mrb, result));

  return return_value;
}
#endif

#if BIND_SDL_HapticOpenFromMouse_FUNCTION
#define SDL_HapticOpenFromMouse_REQUIRED_ARGC 0
#define SDL_HapticOpenFromMouse_OPTIONAL_ARGC 0
/* SDL_HapticOpenFromMouse
 *
 * Parameters: None
 * Return Type: SDL_Haptic *
 */
mrb_value
mrb_SDL_SDL_HapticOpenFromMouse(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  SDL_Haptic * result = SDL_HapticOpenFromMouse();

  /* Box the return value */
  mrb_value return_value = (result == NULL ? mrb_nil_value() : mruby_box__SDL_Haptic(mrb, result));

  return return_value;
}
#endif

#if BIND_SDL_HapticPause_FUNCTION
#define SDL_HapticPause_REQUIRED_ARGC 1
#define SDL_HapticPause_OPTIONAL_ARGC 0
/* SDL_HapticPause
 *
 * Parameters:
 * - haptic: struct _SDL_Haptic *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_HapticPause(mrb_state* mrb, mrb_value self) {
  mrb_value haptic;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &haptic);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, haptic, SDLHaptic_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLHaptic expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _SDL_Haptic * native_haptic = (mrb_nil_p(haptic) ? NULL : mruby_unbox__SDL_Haptic(haptic));

  /* Invocation */
  int result = SDL_HapticPause(native_haptic);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_HapticQuery_FUNCTION
#define SDL_HapticQuery_REQUIRED_ARGC 1
#define SDL_HapticQuery_OPTIONAL_ARGC 0
/* SDL_HapticQuery
 *
 * Parameters:
 * - haptic: struct _SDL_Haptic *
 * Return Type: unsigned int
 */
mrb_value
mrb_SDL_SDL_HapticQuery(mrb_state* mrb, mrb_value self) {
  mrb_value haptic;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &haptic);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, haptic, SDLHaptic_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLHaptic expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _SDL_Haptic * native_haptic = (mrb_nil_p(haptic) ? NULL : mruby_unbox__SDL_Haptic(haptic));

  /* Invocation */
  unsigned int result = SDL_HapticQuery(native_haptic);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_HapticRumbleInit_FUNCTION
#define SDL_HapticRumbleInit_REQUIRED_ARGC 1
#define SDL_HapticRumbleInit_OPTIONAL_ARGC 0
/* SDL_HapticRumbleInit
 *
 * Parameters:
 * - haptic: struct _SDL_Haptic *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_HapticRumbleInit(mrb_state* mrb, mrb_value self) {
  mrb_value haptic;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &haptic);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, haptic, SDLHaptic_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLHaptic expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _SDL_Haptic * native_haptic = (mrb_nil_p(haptic) ? NULL : mruby_unbox__SDL_Haptic(haptic));

  /* Invocation */
  int result = SDL_HapticRumbleInit(native_haptic);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_HapticRumblePlay_FUNCTION
#define SDL_HapticRumblePlay_REQUIRED_ARGC 3
#define SDL_HapticRumblePlay_OPTIONAL_ARGC 0
/* SDL_HapticRumblePlay
 *
 * Parameters:
 * - haptic: struct _SDL_Haptic *
 * - strength: float
 * - length: unsigned int
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_HapticRumblePlay(mrb_state* mrb, mrb_value self) {
  mrb_value haptic;
  mrb_value strength;
  mrb_value length;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &haptic, &strength, &length);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, haptic, SDLHaptic_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLHaptic expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, strength, mrb->float_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Float expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, length, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _SDL_Haptic * native_haptic = (mrb_nil_p(haptic) ? NULL : mruby_unbox__SDL_Haptic(haptic));

  float native_strength = mrb_float(strength);

  unsigned int native_length = mrb_fixnum(length);

  /* Invocation */
  int result = SDL_HapticRumblePlay(native_haptic, native_strength, native_length);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_HapticRumbleStop_FUNCTION
#define SDL_HapticRumbleStop_REQUIRED_ARGC 1
#define SDL_HapticRumbleStop_OPTIONAL_ARGC 0
/* SDL_HapticRumbleStop
 *
 * Parameters:
 * - haptic: struct _SDL_Haptic *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_HapticRumbleStop(mrb_state* mrb, mrb_value self) {
  mrb_value haptic;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &haptic);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, haptic, SDLHaptic_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLHaptic expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _SDL_Haptic * native_haptic = (mrb_nil_p(haptic) ? NULL : mruby_unbox__SDL_Haptic(haptic));

  /* Invocation */
  int result = SDL_HapticRumbleStop(native_haptic);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_HapticRumbleSupported_FUNCTION
#define SDL_HapticRumbleSupported_REQUIRED_ARGC 1
#define SDL_HapticRumbleSupported_OPTIONAL_ARGC 0
/* SDL_HapticRumbleSupported
 *
 * Parameters:
 * - haptic: struct _SDL_Haptic *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_HapticRumbleSupported(mrb_state* mrb, mrb_value self) {
  mrb_value haptic;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &haptic);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, haptic, SDLHaptic_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLHaptic expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _SDL_Haptic * native_haptic = (mrb_nil_p(haptic) ? NULL : mruby_unbox__SDL_Haptic(haptic));

  /* Invocation */
  int result = SDL_HapticRumbleSupported(native_haptic);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_HapticRunEffect_FUNCTION
#define SDL_HapticRunEffect_REQUIRED_ARGC 3
#define SDL_HapticRunEffect_OPTIONAL_ARGC 0
/* SDL_HapticRunEffect
 *
 * Parameters:
 * - haptic: struct _SDL_Haptic *
 * - effect: int
 * - iterations: unsigned int
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_HapticRunEffect(mrb_state* mrb, mrb_value self) {
  mrb_value haptic;
  mrb_value effect;
  mrb_value iterations;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &haptic, &effect, &iterations);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, haptic, SDLHaptic_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLHaptic expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, effect, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, iterations, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _SDL_Haptic * native_haptic = (mrb_nil_p(haptic) ? NULL : mruby_unbox__SDL_Haptic(haptic));

  int native_effect = mrb_fixnum(effect);

  unsigned int native_iterations = mrb_fixnum(iterations);

  /* Invocation */
  int result = SDL_HapticRunEffect(native_haptic, native_effect, native_iterations);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_HapticSetAutocenter_FUNCTION
#define SDL_HapticSetAutocenter_REQUIRED_ARGC 2
#define SDL_HapticSetAutocenter_OPTIONAL_ARGC 0
/* SDL_HapticSetAutocenter
 *
 * Parameters:
 * - haptic: struct _SDL_Haptic *
 * - autocenter: int
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_HapticSetAutocenter(mrb_state* mrb, mrb_value self) {
  mrb_value haptic;
  mrb_value autocenter;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &haptic, &autocenter);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, haptic, SDLHaptic_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLHaptic expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, autocenter, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _SDL_Haptic * native_haptic = (mrb_nil_p(haptic) ? NULL : mruby_unbox__SDL_Haptic(haptic));

  int native_autocenter = mrb_fixnum(autocenter);

  /* Invocation */
  int result = SDL_HapticSetAutocenter(native_haptic, native_autocenter);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_HapticSetGain_FUNCTION
#define SDL_HapticSetGain_REQUIRED_ARGC 2
#define SDL_HapticSetGain_OPTIONAL_ARGC 0
/* SDL_HapticSetGain
 *
 * Parameters:
 * - haptic: struct _SDL_Haptic *
 * - gain: int
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_HapticSetGain(mrb_state* mrb, mrb_value self) {
  mrb_value haptic;
  mrb_value gain;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &haptic, &gain);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, haptic, SDLHaptic_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLHaptic expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, gain, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _SDL_Haptic * native_haptic = (mrb_nil_p(haptic) ? NULL : mruby_unbox__SDL_Haptic(haptic));

  int native_gain = mrb_fixnum(gain);

  /* Invocation */
  int result = SDL_HapticSetGain(native_haptic, native_gain);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_HapticStopAll_FUNCTION
#define SDL_HapticStopAll_REQUIRED_ARGC 1
#define SDL_HapticStopAll_OPTIONAL_ARGC 0
/* SDL_HapticStopAll
 *
 * Parameters:
 * - haptic: struct _SDL_Haptic *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_HapticStopAll(mrb_state* mrb, mrb_value self) {
  mrb_value haptic;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &haptic);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, haptic, SDLHaptic_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLHaptic expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _SDL_Haptic * native_haptic = (mrb_nil_p(haptic) ? NULL : mruby_unbox__SDL_Haptic(haptic));

  /* Invocation */
  int result = SDL_HapticStopAll(native_haptic);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_HapticStopEffect_FUNCTION
#define SDL_HapticStopEffect_REQUIRED_ARGC 2
#define SDL_HapticStopEffect_OPTIONAL_ARGC 0
/* SDL_HapticStopEffect
 *
 * Parameters:
 * - haptic: struct _SDL_Haptic *
 * - effect: int
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_HapticStopEffect(mrb_state* mrb, mrb_value self) {
  mrb_value haptic;
  mrb_value effect;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &haptic, &effect);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, haptic, SDLHaptic_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLHaptic expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, effect, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _SDL_Haptic * native_haptic = (mrb_nil_p(haptic) ? NULL : mruby_unbox__SDL_Haptic(haptic));

  int native_effect = mrb_fixnum(effect);

  /* Invocation */
  int result = SDL_HapticStopEffect(native_haptic, native_effect);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_HapticUnpause_FUNCTION
#define SDL_HapticUnpause_REQUIRED_ARGC 1
#define SDL_HapticUnpause_OPTIONAL_ARGC 0
/* SDL_HapticUnpause
 *
 * Parameters:
 * - haptic: struct _SDL_Haptic *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_HapticUnpause(mrb_state* mrb, mrb_value self) {
  mrb_value haptic;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &haptic);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, haptic, SDLHaptic_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLHaptic expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _SDL_Haptic * native_haptic = (mrb_nil_p(haptic) ? NULL : mruby_unbox__SDL_Haptic(haptic));

  /* Invocation */
  int result = SDL_HapticUnpause(native_haptic);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_HapticUpdateEffect_FUNCTION
#define SDL_HapticUpdateEffect_REQUIRED_ARGC 3
#define SDL_HapticUpdateEffect_OPTIONAL_ARGC 0
/* SDL_HapticUpdateEffect
 *
 * Parameters:
 * - haptic: struct _SDL_Haptic *
 * - effect: int
 * - data: union SDL_HapticEffect *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_HapticUpdateEffect(mrb_state* mrb, mrb_value self) {
  mrb_value haptic;
  mrb_value effect;
  mrb_value data;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &haptic, &effect, &data);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, haptic, SDLHaptic_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLHaptic expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, effect, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_union_SDL_HapticEffect_PTR(data);


  /* Unbox parameters */
  struct _SDL_Haptic * native_haptic = (mrb_nil_p(haptic) ? NULL : mruby_unbox__SDL_Haptic(haptic));

  int native_effect = mrb_fixnum(effect);

  union SDL_HapticEffect * native_data = TODO_mruby_unbox_union_SDL_HapticEffect_PTR(data);

  /* Invocation */
  int result = SDL_HapticUpdateEffect(native_haptic, native_effect, native_data);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_Has3DNow_FUNCTION
#define SDL_Has3DNow_REQUIRED_ARGC 0
#define SDL_Has3DNow_OPTIONAL_ARGC 0
/* SDL_Has3DNow
 *
 * Parameters: None
 * Return Type: SDL_bool
 */
mrb_value
mrb_SDL_SDL_Has3DNow(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  SDL_bool result = SDL_Has3DNow();

  /* Box the return value */
  mrb_value return_value = mrb_bool_value((mrb_bool)result);

  return return_value;
}
#endif

#if BIND_SDL_HasAltiVec_FUNCTION
#define SDL_HasAltiVec_REQUIRED_ARGC 0
#define SDL_HasAltiVec_OPTIONAL_ARGC 0
/* SDL_HasAltiVec
 *
 * Parameters: None
 * Return Type: SDL_bool
 */
mrb_value
mrb_SDL_SDL_HasAltiVec(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  SDL_bool result = SDL_HasAltiVec();

  /* Box the return value */
  mrb_value return_value = mrb_bool_value((mrb_bool)result);

  return return_value;
}
#endif

#if BIND_SDL_HasAVX_FUNCTION
#define SDL_HasAVX_REQUIRED_ARGC 0
#define SDL_HasAVX_OPTIONAL_ARGC 0
/* SDL_HasAVX
 *
 * Parameters: None
 * Return Type: SDL_bool
 */
mrb_value
mrb_SDL_SDL_HasAVX(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  SDL_bool result = SDL_HasAVX();

  /* Box the return value */
  mrb_value return_value = mrb_bool_value((mrb_bool)result);

  return return_value;
}
#endif

#if BIND_SDL_HasClipboardText_FUNCTION
#define SDL_HasClipboardText_REQUIRED_ARGC 0
#define SDL_HasClipboardText_OPTIONAL_ARGC 0
/* SDL_HasClipboardText
 *
 * Parameters: None
 * Return Type: SDL_bool
 */
mrb_value
mrb_SDL_SDL_HasClipboardText(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  SDL_bool result = SDL_HasClipboardText();

  /* Box the return value */
  mrb_value return_value = mrb_bool_value((mrb_bool)result);

  return return_value;
}
#endif

#if BIND_SDL_HasEvent_FUNCTION
#define SDL_HasEvent_REQUIRED_ARGC 1
#define SDL_HasEvent_OPTIONAL_ARGC 0
/* SDL_HasEvent
 *
 * Parameters:
 * - type: unsigned int
 * Return Type: SDL_bool
 */
mrb_value
mrb_SDL_SDL_HasEvent(mrb_state* mrb, mrb_value self) {
  mrb_value type;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &type);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, type, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  unsigned int native_type = mrb_fixnum(type);

  /* Invocation */
  SDL_bool result = SDL_HasEvent(native_type);

  /* Box the return value */
  mrb_value return_value = mrb_bool_value((mrb_bool)result);

  return return_value;
}
#endif

#if BIND_SDL_HasEvents_FUNCTION
#define SDL_HasEvents_REQUIRED_ARGC 2
#define SDL_HasEvents_OPTIONAL_ARGC 0
/* SDL_HasEvents
 *
 * Parameters:
 * - minType: unsigned int
 * - maxType: unsigned int
 * Return Type: SDL_bool
 */
mrb_value
mrb_SDL_SDL_HasEvents(mrb_state* mrb, mrb_value self) {
  mrb_value minType;
  mrb_value maxType;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &minType, &maxType);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, minType, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, maxType, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  unsigned int native_minType = mrb_fixnum(minType);

  unsigned int native_maxType = mrb_fixnum(maxType);

  /* Invocation */
  SDL_bool result = SDL_HasEvents(native_minType, native_maxType);

  /* Box the return value */
  mrb_value return_value = mrb_bool_value((mrb_bool)result);

  return return_value;
}
#endif

#if BIND_SDL_HasIntersection_FUNCTION
#define SDL_HasIntersection_REQUIRED_ARGC 2
#define SDL_HasIntersection_OPTIONAL_ARGC 0
/* SDL_HasIntersection
 *
 * Parameters:
 * - A: const struct SDL_Rect *
 * - B: const struct SDL_Rect *
 * Return Type: SDL_bool
 */
mrb_value
mrb_SDL_SDL_HasIntersection(mrb_state* mrb, mrb_value self) {
  mrb_value A;
  mrb_value B;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &A, &B);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, A, SDLRect_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRect expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, B, SDLRect_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRect expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  const struct SDL_Rect * native_A = (mrb_nil_p(A) ? NULL : mruby_unbox_SDL_Rect(A));

  const struct SDL_Rect * native_B = (mrb_nil_p(B) ? NULL : mruby_unbox_SDL_Rect(B));

  /* Invocation */
  SDL_bool result = SDL_HasIntersection(native_A, native_B);

  /* Box the return value */
  mrb_value return_value = mrb_bool_value((mrb_bool)result);

  return return_value;
}
#endif

#if BIND_SDL_HasMMX_FUNCTION
#define SDL_HasMMX_REQUIRED_ARGC 0
#define SDL_HasMMX_OPTIONAL_ARGC 0
/* SDL_HasMMX
 *
 * Parameters: None
 * Return Type: SDL_bool
 */
mrb_value
mrb_SDL_SDL_HasMMX(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  SDL_bool result = SDL_HasMMX();

  /* Box the return value */
  mrb_value return_value = mrb_bool_value((mrb_bool)result);

  return return_value;
}
#endif

#if BIND_SDL_HasRDTSC_FUNCTION
#define SDL_HasRDTSC_REQUIRED_ARGC 0
#define SDL_HasRDTSC_OPTIONAL_ARGC 0
/* SDL_HasRDTSC
 *
 * Parameters: None
 * Return Type: SDL_bool
 */
mrb_value
mrb_SDL_SDL_HasRDTSC(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  SDL_bool result = SDL_HasRDTSC();

  /* Box the return value */
  mrb_value return_value = mrb_bool_value((mrb_bool)result);

  return return_value;
}
#endif

#if BIND_SDL_HasScreenKeyboardSupport_FUNCTION
#define SDL_HasScreenKeyboardSupport_REQUIRED_ARGC 0
#define SDL_HasScreenKeyboardSupport_OPTIONAL_ARGC 0
/* SDL_HasScreenKeyboardSupport
 *
 * Parameters: None
 * Return Type: SDL_bool
 */
mrb_value
mrb_SDL_SDL_HasScreenKeyboardSupport(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  SDL_bool result = SDL_HasScreenKeyboardSupport();

  /* Box the return value */
  mrb_value return_value = mrb_bool_value((mrb_bool)result);

  return return_value;
}
#endif

#if BIND_SDL_HasSSE_FUNCTION
#define SDL_HasSSE_REQUIRED_ARGC 0
#define SDL_HasSSE_OPTIONAL_ARGC 0
/* SDL_HasSSE
 *
 * Parameters: None
 * Return Type: SDL_bool
 */
mrb_value
mrb_SDL_SDL_HasSSE(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  SDL_bool result = SDL_HasSSE();

  /* Box the return value */
  mrb_value return_value = mrb_bool_value((mrb_bool)result);

  return return_value;
}
#endif

#if BIND_SDL_HasSSE2_FUNCTION
#define SDL_HasSSE2_REQUIRED_ARGC 0
#define SDL_HasSSE2_OPTIONAL_ARGC 0
/* SDL_HasSSE2
 *
 * Parameters: None
 * Return Type: SDL_bool
 */
mrb_value
mrb_SDL_SDL_HasSSE2(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  SDL_bool result = SDL_HasSSE2();

  /* Box the return value */
  mrb_value return_value = mrb_bool_value((mrb_bool)result);

  return return_value;
}
#endif

#if BIND_SDL_HasSSE3_FUNCTION
#define SDL_HasSSE3_REQUIRED_ARGC 0
#define SDL_HasSSE3_OPTIONAL_ARGC 0
/* SDL_HasSSE3
 *
 * Parameters: None
 * Return Type: SDL_bool
 */
mrb_value
mrb_SDL_SDL_HasSSE3(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  SDL_bool result = SDL_HasSSE3();

  /* Box the return value */
  mrb_value return_value = mrb_bool_value((mrb_bool)result);

  return return_value;
}
#endif

#if BIND_SDL_HasSSE41_FUNCTION
#define SDL_HasSSE41_REQUIRED_ARGC 0
#define SDL_HasSSE41_OPTIONAL_ARGC 0
/* SDL_HasSSE41
 *
 * Parameters: None
 * Return Type: SDL_bool
 */
mrb_value
mrb_SDL_SDL_HasSSE41(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  SDL_bool result = SDL_HasSSE41();

  /* Box the return value */
  mrb_value return_value = mrb_bool_value((mrb_bool)result);

  return return_value;
}
#endif

#if BIND_SDL_HasSSE42_FUNCTION
#define SDL_HasSSE42_REQUIRED_ARGC 0
#define SDL_HasSSE42_OPTIONAL_ARGC 0
/* SDL_HasSSE42
 *
 * Parameters: None
 * Return Type: SDL_bool
 */
mrb_value
mrb_SDL_SDL_HasSSE42(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  SDL_bool result = SDL_HasSSE42();

  /* Box the return value */
  mrb_value return_value = mrb_bool_value((mrb_bool)result);

  return return_value;
}
#endif

#if BIND_SDL_HideWindow_FUNCTION
#define SDL_HideWindow_REQUIRED_ARGC 1
#define SDL_HideWindow_OPTIONAL_ARGC 0
/* SDL_HideWindow
 *
 * Parameters:
 * - window: struct SDL_Window *
 * Return Type: void
 */
mrb_value
mrb_SDL_SDL_HideWindow(mrb_state* mrb, mrb_value self) {
  mrb_value window;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &window);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, window, SDLWindow_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLWindow expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_Window * native_window = (mrb_nil_p(window) ? NULL : mruby_unbox_SDL_Window(window));

  /* Invocation */
  SDL_HideWindow(native_window);

  return mrb_nil_value();
}
#endif

#if BIND_SDL_iconv_FUNCTION
#define SDL_iconv_REQUIRED_ARGC 5
#define SDL_iconv_OPTIONAL_ARGC 0
/* SDL_iconv
 *
 * Parameters:
 * - cd: struct _SDL_iconv_t *
 * - inbuf: const char **
 * - inbytesleft: unsigned long *
 * - outbuf: char **
 * - outbytesleft: unsigned long *
 * Return Type: size_t
 */
mrb_value
mrb_SDL_SDL_iconv(mrb_state* mrb, mrb_value self) {
  mrb_value cd;
  mrb_value inbuf;
  mrb_value inbytesleft;
  mrb_value outbuf;
  mrb_value outbytesleft;

  /* Fetch the args */
  mrb_get_args(mrb, "ooooo", &cd, &inbuf, &inbytesleft, &outbuf, &outbytesleft);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, cd, SDLIconvT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLIconvT expected");
    return mrb_nil_value();
  }
  TODO_type_check_char_PTR_PTR(inbuf);
  TODO_type_check_unsigned_long_PTR(inbytesleft);
  TODO_type_check_char_PTR_PTR(outbuf);
  TODO_type_check_unsigned_long_PTR(outbytesleft);


  /* Unbox parameters */
  struct _SDL_iconv_t * native_cd = (mrb_nil_p(cd) ? NULL : mruby_unbox__SDL_iconv_t(cd));

  const char ** native_inbuf = TODO_mruby_unbox_char_PTR_PTR(inbuf);

  unsigned long * native_inbytesleft = TODO_mruby_unbox_unsigned_long_PTR(inbytesleft);

  char ** native_outbuf = TODO_mruby_unbox_char_PTR_PTR(outbuf);

  unsigned long * native_outbytesleft = TODO_mruby_unbox_unsigned_long_PTR(outbytesleft);

  /* Invocation */
  size_t result = SDL_iconv(native_cd, native_inbuf, native_inbytesleft, native_outbuf, native_outbytesleft);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_size_t(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_iconv_close_FUNCTION
#define SDL_iconv_close_REQUIRED_ARGC 1
#define SDL_iconv_close_OPTIONAL_ARGC 0
/* SDL_iconv_close
 *
 * Parameters:
 * - cd: struct _SDL_iconv_t *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_iconv_close(mrb_state* mrb, mrb_value self) {
  mrb_value cd;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &cd);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, cd, SDLIconvT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLIconvT expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _SDL_iconv_t * native_cd = (mrb_nil_p(cd) ? NULL : mruby_unbox__SDL_iconv_t(cd));

  /* Invocation */
  int result = SDL_iconv_close(native_cd);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_iconv_open_FUNCTION
#define SDL_iconv_open_REQUIRED_ARGC 2
#define SDL_iconv_open_OPTIONAL_ARGC 0
/* SDL_iconv_open
 *
 * Parameters:
 * - tocode: const char *
 * - fromcode: const char *
 * Return Type: SDL_iconv_t
 */
mrb_value
mrb_SDL_SDL_iconv_open(mrb_state* mrb, mrb_value self) {
  mrb_value tocode;
  mrb_value fromcode;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &tocode, &fromcode);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, tocode, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, fromcode, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  const char * native_tocode = mrb_string_value_cstr(mrb, &tocode);

  const char * native_fromcode = mrb_string_value_cstr(mrb, &fromcode);

  /* Invocation */
  SDL_iconv_t result = SDL_iconv_open(native_tocode, native_fromcode);

  /* Box the return value */
  mrb_value return_value = (result == NULL ? mrb_nil_value() : mruby_box__SDL_iconv_t(mrb, result));

  return return_value;
}
#endif

#if BIND_SDL_iconv_string_FUNCTION
#define SDL_iconv_string_REQUIRED_ARGC 4
#define SDL_iconv_string_OPTIONAL_ARGC 0
/* SDL_iconv_string
 *
 * Parameters:
 * - tocode: const char *
 * - fromcode: const char *
 * - inbuf: const char *
 * - inbytesleft: unsigned long
 * Return Type: char *
 */
mrb_value
mrb_SDL_SDL_iconv_string(mrb_state* mrb, mrb_value self) {
  mrb_value tocode;
  mrb_value fromcode;
  mrb_value inbuf;
  mrb_value inbytesleft;

  /* Fetch the args */
  mrb_get_args(mrb, "oooo", &tocode, &fromcode, &inbuf, &inbytesleft);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, tocode, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, fromcode, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, inbuf, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, inbytesleft, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  const char * native_tocode = mrb_string_value_cstr(mrb, &tocode);

  const char * native_fromcode = mrb_string_value_cstr(mrb, &fromcode);

  const char * native_inbuf = mrb_string_value_cstr(mrb, &inbuf);

  unsigned long native_inbytesleft = mrb_fixnum(inbytesleft);

  /* Invocation */
  char * result = SDL_iconv_string(native_tocode, native_fromcode, native_inbuf, native_inbytesleft);

  /* Box the return value */
  mrb_value return_value = mrb_str_new_cstr(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_Init_FUNCTION
#define SDL_Init_REQUIRED_ARGC 1
#define SDL_Init_OPTIONAL_ARGC 0
/* SDL_Init
 *
 * Parameters:
 * - flags: unsigned int
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_Init(mrb_state* mrb, mrb_value self) {
  mrb_value flags;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &flags);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, flags, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  unsigned int native_flags = mrb_fixnum(flags);

  /* Invocation */
  int result = SDL_Init(native_flags);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_InitSubSystem_FUNCTION
#define SDL_InitSubSystem_REQUIRED_ARGC 1
#define SDL_InitSubSystem_OPTIONAL_ARGC 0
/* SDL_InitSubSystem
 *
 * Parameters:
 * - flags: unsigned int
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_InitSubSystem(mrb_state* mrb, mrb_value self) {
  mrb_value flags;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &flags);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, flags, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  unsigned int native_flags = mrb_fixnum(flags);

  /* Invocation */
  int result = SDL_InitSubSystem(native_flags);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_IntersectRect_FUNCTION
#define SDL_IntersectRect_REQUIRED_ARGC 3
#define SDL_IntersectRect_OPTIONAL_ARGC 0
/* SDL_IntersectRect
 *
 * Parameters:
 * - A: const struct SDL_Rect *
 * - B: const struct SDL_Rect *
 * - result: struct SDL_Rect *
 * Return Type: SDL_bool
 */
mrb_value
mrb_SDL_SDL_IntersectRect(mrb_state* mrb, mrb_value self) {
  mrb_value A;
  mrb_value B;
  mrb_value result_arg;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &A, &B, &result_arg);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, A, SDLRect_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRect expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, B, SDLRect_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRect expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, result_arg, SDLRect_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRect expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  const struct SDL_Rect * native_A = (mrb_nil_p(A) ? NULL : mruby_unbox_SDL_Rect(A));

  const struct SDL_Rect * native_B = (mrb_nil_p(B) ? NULL : mruby_unbox_SDL_Rect(B));

  struct SDL_Rect * native_result = (mrb_nil_p(result_arg) ? NULL : mruby_unbox_SDL_Rect(result_arg));

  /* Invocation */
  SDL_bool result = SDL_IntersectRect(native_A, native_B, native_result);

  /* Box the return value */
  mrb_value return_value = mrb_bool_value((mrb_bool)result);

  return return_value;
}
#endif

#if BIND_SDL_IntersectRectAndLine_FUNCTION
#define SDL_IntersectRectAndLine_REQUIRED_ARGC 5
#define SDL_IntersectRectAndLine_OPTIONAL_ARGC 0
/* SDL_IntersectRectAndLine
 *
 * Parameters:
 * - rect: const struct SDL_Rect *
 * - X1: int *
 * - Y1: int *
 * - X2: int *
 * - Y2: int *
 * Return Type: SDL_bool
 */
mrb_value
mrb_SDL_SDL_IntersectRectAndLine(mrb_state* mrb, mrb_value self) {
  mrb_value rect;
  mrb_value X1;
  mrb_value Y1;
  mrb_value X2;
  mrb_value Y2;

  /* Fetch the args */
  mrb_get_args(mrb, "ooooo", &rect, &X1, &Y1, &X2, &Y2);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, rect, SDLRect_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRect expected");
    return mrb_nil_value();
  }
  TODO_type_check_int_PTR(X1);
  TODO_type_check_int_PTR(Y1);
  TODO_type_check_int_PTR(X2);
  TODO_type_check_int_PTR(Y2);


  /* Unbox parameters */
  const struct SDL_Rect * native_rect = (mrb_nil_p(rect) ? NULL : mruby_unbox_SDL_Rect(rect));

  int * native_X1 = TODO_mruby_unbox_int_PTR(X1);

  int * native_Y1 = TODO_mruby_unbox_int_PTR(Y1);

  int * native_X2 = TODO_mruby_unbox_int_PTR(X2);

  int * native_Y2 = TODO_mruby_unbox_int_PTR(Y2);

  /* Invocation */
  SDL_bool result = SDL_IntersectRectAndLine(native_rect, native_X1, native_Y1, native_X2, native_Y2);

  /* Box the return value */
  mrb_value return_value = mrb_bool_value((mrb_bool)result);

  return return_value;
}
#endif

#if BIND_SDL_isdigit_FUNCTION
#define SDL_isdigit_REQUIRED_ARGC 1
#define SDL_isdigit_OPTIONAL_ARGC 0
/* SDL_isdigit
 *
 * Parameters:
 * - x: int
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_isdigit(mrb_state* mrb, mrb_value self) {
  mrb_value x;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &x);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, x, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_x = mrb_fixnum(x);

  /* Invocation */
  int result = SDL_isdigit(native_x);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_IsGameController_FUNCTION
#define SDL_IsGameController_REQUIRED_ARGC 1
#define SDL_IsGameController_OPTIONAL_ARGC 0
/* SDL_IsGameController
 *
 * Parameters:
 * - joystick_index: int
 * Return Type: SDL_bool
 */
mrb_value
mrb_SDL_SDL_IsGameController(mrb_state* mrb, mrb_value self) {
  mrb_value joystick_index;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &joystick_index);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, joystick_index, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_joystick_index = mrb_fixnum(joystick_index);

  /* Invocation */
  SDL_bool result = SDL_IsGameController(native_joystick_index);

  /* Box the return value */
  mrb_value return_value = mrb_bool_value((mrb_bool)result);

  return return_value;
}
#endif

#if BIND_SDL_IsScreenKeyboardShown_FUNCTION
#define SDL_IsScreenKeyboardShown_REQUIRED_ARGC 1
#define SDL_IsScreenKeyboardShown_OPTIONAL_ARGC 0
/* SDL_IsScreenKeyboardShown
 *
 * Parameters:
 * - window: struct SDL_Window *
 * Return Type: SDL_bool
 */
mrb_value
mrb_SDL_SDL_IsScreenKeyboardShown(mrb_state* mrb, mrb_value self) {
  mrb_value window;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &window);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, window, SDLWindow_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLWindow expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_Window * native_window = (mrb_nil_p(window) ? NULL : mruby_unbox_SDL_Window(window));

  /* Invocation */
  SDL_bool result = SDL_IsScreenKeyboardShown(native_window);

  /* Box the return value */
  mrb_value return_value = mrb_bool_value((mrb_bool)result);

  return return_value;
}
#endif

#if BIND_SDL_IsScreenSaverEnabled_FUNCTION
#define SDL_IsScreenSaverEnabled_REQUIRED_ARGC 0
#define SDL_IsScreenSaverEnabled_OPTIONAL_ARGC 0
/* SDL_IsScreenSaverEnabled
 *
 * Parameters: None
 * Return Type: SDL_bool
 */
mrb_value
mrb_SDL_SDL_IsScreenSaverEnabled(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  SDL_bool result = SDL_IsScreenSaverEnabled();

  /* Box the return value */
  mrb_value return_value = mrb_bool_value((mrb_bool)result);

  return return_value;
}
#endif

#if BIND_SDL_IsShapedWindow_FUNCTION
#define SDL_IsShapedWindow_REQUIRED_ARGC 1
#define SDL_IsShapedWindow_OPTIONAL_ARGC 0
/* SDL_IsShapedWindow
 *
 * Parameters:
 * - window: const struct SDL_Window *
 * Return Type: SDL_bool
 */
mrb_value
mrb_SDL_SDL_IsShapedWindow(mrb_state* mrb, mrb_value self) {
  mrb_value window;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &window);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, window, SDLWindow_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLWindow expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  const struct SDL_Window * native_window = (mrb_nil_p(window) ? NULL : mruby_unbox_SDL_Window(window));

  /* Invocation */
  SDL_bool result = SDL_IsShapedWindow(native_window);

  /* Box the return value */
  mrb_value return_value = mrb_bool_value((mrb_bool)result);

  return return_value;
}
#endif

#if BIND_SDL_isspace_FUNCTION
#define SDL_isspace_REQUIRED_ARGC 1
#define SDL_isspace_OPTIONAL_ARGC 0
/* SDL_isspace
 *
 * Parameters:
 * - x: int
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_isspace(mrb_state* mrb, mrb_value self) {
  mrb_value x;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &x);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, x, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_x = mrb_fixnum(x);

  /* Invocation */
  int result = SDL_isspace(native_x);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_IsTextInputActive_FUNCTION
#define SDL_IsTextInputActive_REQUIRED_ARGC 0
#define SDL_IsTextInputActive_OPTIONAL_ARGC 0
/* SDL_IsTextInputActive
 *
 * Parameters: None
 * Return Type: SDL_bool
 */
mrb_value
mrb_SDL_SDL_IsTextInputActive(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  SDL_bool result = SDL_IsTextInputActive();

  /* Box the return value */
  mrb_value return_value = mrb_bool_value((mrb_bool)result);

  return return_value;
}
#endif

#if BIND_SDL_itoa_FUNCTION
#define SDL_itoa_REQUIRED_ARGC 3
#define SDL_itoa_OPTIONAL_ARGC 0
/* SDL_itoa
 *
 * Parameters:
 * - value: int
 * - str: char *
 * - radix: int
 * Return Type: char *
 */
mrb_value
mrb_SDL_SDL_itoa(mrb_state* mrb, mrb_value self) {
  mrb_value value;
  mrb_value str;
  mrb_value radix;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &value, &str, &radix);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, value, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, str, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, radix, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_value = mrb_fixnum(value);

  /* WARNING: Allocating new memory to create 'char *' from 'const char *'.
   *          Please verify that this memory is cleaned up correctly.
   *
   *          Has this been verified? [No]
   */
  char * native_str = strdup(mrb_string_value_cstr(mrb, &str));

  int native_radix = mrb_fixnum(radix);

  /* Invocation */
  char * result = SDL_itoa(native_value, native_str, native_radix);

  /* Box the return value */
  mrb_value return_value = mrb_str_new_cstr(mrb, result);

  /* WARNING: Assuming that the new string can be deallocated after the function call.
   *          Please verify that this is correct (the function does not save this parameter).
   *
   *          Has this been verified? [No]
   */
  free(native_str);
  native_str = NULL;

  return return_value;
}
#endif

#if BIND_SDL_JoystickClose_FUNCTION
#define SDL_JoystickClose_REQUIRED_ARGC 1
#define SDL_JoystickClose_OPTIONAL_ARGC 0
/* SDL_JoystickClose
 *
 * Parameters:
 * - joystick: struct _SDL_Joystick *
 * Return Type: void
 */
mrb_value
mrb_SDL_SDL_JoystickClose(mrb_state* mrb, mrb_value self) {
  mrb_value joystick;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &joystick);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, joystick, SDLJoystick_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLJoystick expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _SDL_Joystick * native_joystick = (mrb_nil_p(joystick) ? NULL : mruby_unbox__SDL_Joystick(joystick));

  /* Invocation */
  SDL_JoystickClose(native_joystick);

  return mrb_nil_value();
}
#endif

#if BIND_SDL_JoystickEventState_FUNCTION
#define SDL_JoystickEventState_REQUIRED_ARGC 1
#define SDL_JoystickEventState_OPTIONAL_ARGC 0
/* SDL_JoystickEventState
 *
 * Parameters:
 * - state: int
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_JoystickEventState(mrb_state* mrb, mrb_value self) {
  mrb_value state;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &state);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, state, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_state = mrb_fixnum(state);

  /* Invocation */
  int result = SDL_JoystickEventState(native_state);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_JoystickGetAttached_FUNCTION
#define SDL_JoystickGetAttached_REQUIRED_ARGC 1
#define SDL_JoystickGetAttached_OPTIONAL_ARGC 0
/* SDL_JoystickGetAttached
 *
 * Parameters:
 * - joystick: struct _SDL_Joystick *
 * Return Type: SDL_bool
 */
mrb_value
mrb_SDL_SDL_JoystickGetAttached(mrb_state* mrb, mrb_value self) {
  mrb_value joystick;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &joystick);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, joystick, SDLJoystick_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLJoystick expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _SDL_Joystick * native_joystick = (mrb_nil_p(joystick) ? NULL : mruby_unbox__SDL_Joystick(joystick));

  /* Invocation */
  SDL_bool result = SDL_JoystickGetAttached(native_joystick);

  /* Box the return value */
  mrb_value return_value = mrb_bool_value((mrb_bool)result);

  return return_value;
}
#endif

#if BIND_SDL_JoystickGetAxis_FUNCTION
#define SDL_JoystickGetAxis_REQUIRED_ARGC 2
#define SDL_JoystickGetAxis_OPTIONAL_ARGC 0
/* SDL_JoystickGetAxis
 *
 * Parameters:
 * - joystick: struct _SDL_Joystick *
 * - axis: int
 * Return Type: Sint16
 */
mrb_value
mrb_SDL_SDL_JoystickGetAxis(mrb_state* mrb, mrb_value self) {
  mrb_value joystick;
  mrb_value axis;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &joystick, &axis);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, joystick, SDLJoystick_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLJoystick expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, axis, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _SDL_Joystick * native_joystick = (mrb_nil_p(joystick) ? NULL : mruby_unbox__SDL_Joystick(joystick));

  int native_axis = mrb_fixnum(axis);

  /* Invocation */
  Sint16 result = SDL_JoystickGetAxis(native_joystick, native_axis);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_Sint16(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_JoystickGetBall_FUNCTION
#define SDL_JoystickGetBall_REQUIRED_ARGC 4
#define SDL_JoystickGetBall_OPTIONAL_ARGC 0
/* SDL_JoystickGetBall
 *
 * Parameters:
 * - joystick: struct _SDL_Joystick *
 * - ball: int
 * - dx: int *
 * - dy: int *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_JoystickGetBall(mrb_state* mrb, mrb_value self) {
  mrb_value joystick;
  mrb_value ball;
  mrb_value dx;
  mrb_value dy;

  /* Fetch the args */
  mrb_get_args(mrb, "oooo", &joystick, &ball, &dx, &dy);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, joystick, SDLJoystick_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLJoystick expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, ball, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_int_PTR(dx);
  TODO_type_check_int_PTR(dy);


  /* Unbox parameters */
  struct _SDL_Joystick * native_joystick = (mrb_nil_p(joystick) ? NULL : mruby_unbox__SDL_Joystick(joystick));

  int native_ball = mrb_fixnum(ball);

  int * native_dx = TODO_mruby_unbox_int_PTR(dx);

  int * native_dy = TODO_mruby_unbox_int_PTR(dy);

  /* Invocation */
  int result = SDL_JoystickGetBall(native_joystick, native_ball, native_dx, native_dy);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_JoystickGetButton_FUNCTION
#define SDL_JoystickGetButton_REQUIRED_ARGC 2
#define SDL_JoystickGetButton_OPTIONAL_ARGC 0
/* SDL_JoystickGetButton
 *
 * Parameters:
 * - joystick: struct _SDL_Joystick *
 * - button: int
 * Return Type: Uint8
 */
mrb_value
mrb_SDL_SDL_JoystickGetButton(mrb_state* mrb, mrb_value self) {
  mrb_value joystick;
  mrb_value button;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &joystick, &button);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, joystick, SDLJoystick_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLJoystick expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, button, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _SDL_Joystick * native_joystick = (mrb_nil_p(joystick) ? NULL : mruby_unbox__SDL_Joystick(joystick));

  int native_button = mrb_fixnum(button);

  /* Invocation */
  Uint8 result = SDL_JoystickGetButton(native_joystick, native_button);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_Uint8(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_JoystickGetDeviceGUID_FUNCTION
#define SDL_JoystickGetDeviceGUID_REQUIRED_ARGC 1
#define SDL_JoystickGetDeviceGUID_OPTIONAL_ARGC 0
/* SDL_JoystickGetDeviceGUID
 *
 * Parameters:
 * - device_index: int
 * Return Type: SDL_JoystickGUID
 */
mrb_value
mrb_SDL_SDL_JoystickGetDeviceGUID(mrb_state* mrb, mrb_value self) {
  mrb_value device_index;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &device_index);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, device_index, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_device_index = mrb_fixnum(device_index);

  /* Invocation */
  SDL_JoystickGUID result = SDL_JoystickGetDeviceGUID(native_device_index);

  /* Box the return value */
  /* WARNING: Boxing a pointer to a value type.
   * If this is a stack variable, it will be deleted when this function returns.
   * If a longer lifespan is required, it should be put on the heap - consider
   * customizing this function (or add a `CTypes` definition to cover all instances)
   */
  mrb_value return_value = mruby_box_SDL_JoystickGUID(mrb, &result);

  return return_value;
}
#endif

#if BIND_SDL_JoystickGetGUID_FUNCTION
#define SDL_JoystickGetGUID_REQUIRED_ARGC 1
#define SDL_JoystickGetGUID_OPTIONAL_ARGC 0
/* SDL_JoystickGetGUID
 *
 * Parameters:
 * - joystick: struct _SDL_Joystick *
 * Return Type: SDL_JoystickGUID
 */
mrb_value
mrb_SDL_SDL_JoystickGetGUID(mrb_state* mrb, mrb_value self) {
  mrb_value joystick;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &joystick);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, joystick, SDLJoystick_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLJoystick expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _SDL_Joystick * native_joystick = (mrb_nil_p(joystick) ? NULL : mruby_unbox__SDL_Joystick(joystick));

  /* Invocation */
  SDL_JoystickGUID result = SDL_JoystickGetGUID(native_joystick);

  /* Box the return value */
  /* WARNING: Boxing a pointer to a value type.
   * If this is a stack variable, it will be deleted when this function returns.
   * If a longer lifespan is required, it should be put on the heap - consider
   * customizing this function (or add a `CTypes` definition to cover all instances)
   */
  mrb_value return_value = mruby_box_SDL_JoystickGUID(mrb, &result);

  return return_value;
}
#endif

#if BIND_SDL_JoystickGetGUIDFromString_FUNCTION
#define SDL_JoystickGetGUIDFromString_REQUIRED_ARGC 1
#define SDL_JoystickGetGUIDFromString_OPTIONAL_ARGC 0
/* SDL_JoystickGetGUIDFromString
 *
 * Parameters:
 * - pchGUID: const char *
 * Return Type: SDL_JoystickGUID
 */
mrb_value
mrb_SDL_SDL_JoystickGetGUIDFromString(mrb_state* mrb, mrb_value self) {
  mrb_value pchGUID;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &pchGUID);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, pchGUID, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  const char * native_pchGUID = mrb_string_value_cstr(mrb, &pchGUID);

  /* Invocation */
  SDL_JoystickGUID result = SDL_JoystickGetGUIDFromString(native_pchGUID);

  /* Box the return value */
  /* WARNING: Boxing a pointer to a value type.
   * If this is a stack variable, it will be deleted when this function returns.
   * If a longer lifespan is required, it should be put on the heap - consider
   * customizing this function (or add a `CTypes` definition to cover all instances)
   */
  mrb_value return_value = mruby_box_SDL_JoystickGUID(mrb, &result);

  return return_value;
}
#endif

#if BIND_SDL_JoystickGetGUIDString_FUNCTION
#define SDL_JoystickGetGUIDString_REQUIRED_ARGC 3
#define SDL_JoystickGetGUIDString_OPTIONAL_ARGC 0
/* SDL_JoystickGetGUIDString
 *
 * Parameters:
 * - guid: SDL_JoystickGUID
 * - pszGUID: char *
 * - cbGUID: int
 * Return Type: void
 */
mrb_value
mrb_SDL_SDL_JoystickGetGUIDString(mrb_state* mrb, mrb_value self) {
  mrb_value guid;
  mrb_value pszGUID;
  mrb_value cbGUID;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &guid, &pszGUID, &cbGUID);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, guid, SDLJoystickGUID_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLJoystickGUID expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, pszGUID, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, cbGUID, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  SDL_JoystickGUID native_guid = *(mruby_unbox_SDL_JoystickGUID(guid));

  /* WARNING: Allocating new memory to create 'char *' from 'const char *'.
   *          Please verify that this memory is cleaned up correctly.
   *
   *          Has this been verified? [No]
   */
  char * native_pszGUID = strdup(mrb_string_value_cstr(mrb, &pszGUID));

  int native_cbGUID = mrb_fixnum(cbGUID);

  /* Invocation */
  SDL_JoystickGetGUIDString(native_guid, native_pszGUID, native_cbGUID);

  /* WARNING: Assuming that the new string can be deallocated after the function call.
   *          Please verify that this is correct (the function does not save this parameter).
   *
   *          Has this been verified? [No]
   */
  free(native_pszGUID);
  native_pszGUID = NULL;

  return mrb_nil_value();
}
#endif

#if BIND_SDL_JoystickGetHat_FUNCTION
#define SDL_JoystickGetHat_REQUIRED_ARGC 2
#define SDL_JoystickGetHat_OPTIONAL_ARGC 0
/* SDL_JoystickGetHat
 *
 * Parameters:
 * - joystick: struct _SDL_Joystick *
 * - hat: int
 * Return Type: Uint8
 */
mrb_value
mrb_SDL_SDL_JoystickGetHat(mrb_state* mrb, mrb_value self) {
  mrb_value joystick;
  mrb_value hat;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &joystick, &hat);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, joystick, SDLJoystick_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLJoystick expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, hat, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _SDL_Joystick * native_joystick = (mrb_nil_p(joystick) ? NULL : mruby_unbox__SDL_Joystick(joystick));

  int native_hat = mrb_fixnum(hat);

  /* Invocation */
  Uint8 result = SDL_JoystickGetHat(native_joystick, native_hat);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_Uint8(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_JoystickInstanceID_FUNCTION
#define SDL_JoystickInstanceID_REQUIRED_ARGC 1
#define SDL_JoystickInstanceID_OPTIONAL_ARGC 0
/* SDL_JoystickInstanceID
 *
 * Parameters:
 * - joystick: struct _SDL_Joystick *
 * Return Type: SDL_JoystickID
 */
mrb_value
mrb_SDL_SDL_JoystickInstanceID(mrb_state* mrb, mrb_value self) {
  mrb_value joystick;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &joystick);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, joystick, SDLJoystick_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLJoystick expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _SDL_Joystick * native_joystick = (mrb_nil_p(joystick) ? NULL : mruby_unbox__SDL_Joystick(joystick));

  /* Invocation */
  SDL_JoystickID result = SDL_JoystickInstanceID(native_joystick);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_Sint32(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_JoystickIsHaptic_FUNCTION
#define SDL_JoystickIsHaptic_REQUIRED_ARGC 1
#define SDL_JoystickIsHaptic_OPTIONAL_ARGC 0
/* SDL_JoystickIsHaptic
 *
 * Parameters:
 * - joystick: struct _SDL_Joystick *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_JoystickIsHaptic(mrb_state* mrb, mrb_value self) {
  mrb_value joystick;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &joystick);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, joystick, SDLJoystick_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLJoystick expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _SDL_Joystick * native_joystick = (mrb_nil_p(joystick) ? NULL : mruby_unbox__SDL_Joystick(joystick));

  /* Invocation */
  int result = SDL_JoystickIsHaptic(native_joystick);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_JoystickName_FUNCTION
#define SDL_JoystickName_REQUIRED_ARGC 1
#define SDL_JoystickName_OPTIONAL_ARGC 0
/* SDL_JoystickName
 *
 * Parameters:
 * - joystick: struct _SDL_Joystick *
 * Return Type: const char *
 */
mrb_value
mrb_SDL_SDL_JoystickName(mrb_state* mrb, mrb_value self) {
  mrb_value joystick;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &joystick);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, joystick, SDLJoystick_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLJoystick expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _SDL_Joystick * native_joystick = (mrb_nil_p(joystick) ? NULL : mruby_unbox__SDL_Joystick(joystick));

  /* Invocation */
  const char * result = SDL_JoystickName(native_joystick);

  /* Box the return value */
  mrb_value return_value = mrb_str_new_cstr(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_JoystickNameForIndex_FUNCTION
#define SDL_JoystickNameForIndex_REQUIRED_ARGC 1
#define SDL_JoystickNameForIndex_OPTIONAL_ARGC 0
/* SDL_JoystickNameForIndex
 *
 * Parameters:
 * - device_index: int
 * Return Type: const char *
 */
mrb_value
mrb_SDL_SDL_JoystickNameForIndex(mrb_state* mrb, mrb_value self) {
  mrb_value device_index;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &device_index);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, device_index, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_device_index = mrb_fixnum(device_index);

  /* Invocation */
  const char * result = SDL_JoystickNameForIndex(native_device_index);

  /* Box the return value */
  mrb_value return_value = mrb_str_new_cstr(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_JoystickNumAxes_FUNCTION
#define SDL_JoystickNumAxes_REQUIRED_ARGC 1
#define SDL_JoystickNumAxes_OPTIONAL_ARGC 0
/* SDL_JoystickNumAxes
 *
 * Parameters:
 * - joystick: struct _SDL_Joystick *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_JoystickNumAxes(mrb_state* mrb, mrb_value self) {
  mrb_value joystick;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &joystick);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, joystick, SDLJoystick_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLJoystick expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _SDL_Joystick * native_joystick = (mrb_nil_p(joystick) ? NULL : mruby_unbox__SDL_Joystick(joystick));

  /* Invocation */
  int result = SDL_JoystickNumAxes(native_joystick);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_JoystickNumBalls_FUNCTION
#define SDL_JoystickNumBalls_REQUIRED_ARGC 1
#define SDL_JoystickNumBalls_OPTIONAL_ARGC 0
/* SDL_JoystickNumBalls
 *
 * Parameters:
 * - joystick: struct _SDL_Joystick *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_JoystickNumBalls(mrb_state* mrb, mrb_value self) {
  mrb_value joystick;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &joystick);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, joystick, SDLJoystick_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLJoystick expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _SDL_Joystick * native_joystick = (mrb_nil_p(joystick) ? NULL : mruby_unbox__SDL_Joystick(joystick));

  /* Invocation */
  int result = SDL_JoystickNumBalls(native_joystick);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_JoystickNumButtons_FUNCTION
#define SDL_JoystickNumButtons_REQUIRED_ARGC 1
#define SDL_JoystickNumButtons_OPTIONAL_ARGC 0
/* SDL_JoystickNumButtons
 *
 * Parameters:
 * - joystick: struct _SDL_Joystick *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_JoystickNumButtons(mrb_state* mrb, mrb_value self) {
  mrb_value joystick;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &joystick);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, joystick, SDLJoystick_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLJoystick expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _SDL_Joystick * native_joystick = (mrb_nil_p(joystick) ? NULL : mruby_unbox__SDL_Joystick(joystick));

  /* Invocation */
  int result = SDL_JoystickNumButtons(native_joystick);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_JoystickNumHats_FUNCTION
#define SDL_JoystickNumHats_REQUIRED_ARGC 1
#define SDL_JoystickNumHats_OPTIONAL_ARGC 0
/* SDL_JoystickNumHats
 *
 * Parameters:
 * - joystick: struct _SDL_Joystick *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_JoystickNumHats(mrb_state* mrb, mrb_value self) {
  mrb_value joystick;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &joystick);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, joystick, SDLJoystick_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLJoystick expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _SDL_Joystick * native_joystick = (mrb_nil_p(joystick) ? NULL : mruby_unbox__SDL_Joystick(joystick));

  /* Invocation */
  int result = SDL_JoystickNumHats(native_joystick);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_JoystickOpen_FUNCTION
#define SDL_JoystickOpen_REQUIRED_ARGC 1
#define SDL_JoystickOpen_OPTIONAL_ARGC 0
/* SDL_JoystickOpen
 *
 * Parameters:
 * - device_index: int
 * Return Type: SDL_Joystick *
 */
mrb_value
mrb_SDL_SDL_JoystickOpen(mrb_state* mrb, mrb_value self) {
  mrb_value device_index;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &device_index);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, device_index, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_device_index = mrb_fixnum(device_index);

  /* Invocation */
  SDL_Joystick * result = SDL_JoystickOpen(native_device_index);

  /* Box the return value */
  mrb_value return_value = (result == NULL ? mrb_nil_value() : mruby_box__SDL_Joystick(mrb, result));

  return return_value;
}
#endif

#if BIND_SDL_JoystickUpdate_FUNCTION
#define SDL_JoystickUpdate_REQUIRED_ARGC 0
#define SDL_JoystickUpdate_OPTIONAL_ARGC 0
/* SDL_JoystickUpdate
 *
 * Parameters: None
 * Return Type: void
 */
mrb_value
mrb_SDL_SDL_JoystickUpdate(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  SDL_JoystickUpdate();

  return mrb_nil_value();
}
#endif

#if BIND_SDL_lltoa_FUNCTION
#define SDL_lltoa_REQUIRED_ARGC 3
#define SDL_lltoa_OPTIONAL_ARGC 0
/* SDL_lltoa
 *
 * Parameters:
 * - value: long long
 * - str: char *
 * - radix: int
 * Return Type: char *
 */
mrb_value
mrb_SDL_SDL_lltoa(mrb_state* mrb, mrb_value self) {
  mrb_value value;
  mrb_value str;
  mrb_value radix;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &value, &str, &radix);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, value, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, str, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, radix, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  long long native_value = mrb_fixnum(value);

  /* WARNING: Allocating new memory to create 'char *' from 'const char *'.
   *          Please verify that this memory is cleaned up correctly.
   *
   *          Has this been verified? [No]
   */
  char * native_str = strdup(mrb_string_value_cstr(mrb, &str));

  int native_radix = mrb_fixnum(radix);

  /* Invocation */
  char * result = SDL_lltoa(native_value, native_str, native_radix);

  /* Box the return value */
  mrb_value return_value = mrb_str_new_cstr(mrb, result);

  /* WARNING: Assuming that the new string can be deallocated after the function call.
   *          Please verify that this is correct (the function does not save this parameter).
   *
   *          Has this been verified? [No]
   */
  free(native_str);
  native_str = NULL;

  return return_value;
}
#endif

#if BIND_SDL_LoadBMP_RW_FUNCTION
#define SDL_LoadBMP_RW_REQUIRED_ARGC 2
#define SDL_LoadBMP_RW_OPTIONAL_ARGC 0
/* SDL_LoadBMP_RW
 *
 * Parameters:
 * - src: struct SDL_RWops *
 * - freesrc: int
 * Return Type: SDL_Surface *
 */
mrb_value
mrb_SDL_SDL_LoadBMP_RW(mrb_state* mrb, mrb_value self) {
  mrb_value src;
  mrb_value freesrc;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &src, &freesrc);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, src, SDLRWops_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRWops expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, freesrc, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_RWops * native_src = (mrb_nil_p(src) ? NULL : mruby_unbox_SDL_RWops(src));

  int native_freesrc = mrb_fixnum(freesrc);

  /* Invocation */
  SDL_Surface * result = SDL_LoadBMP_RW(native_src, native_freesrc);

  /* Box the return value */
  mrb_value return_value = (result == NULL ? mrb_nil_value() : mruby_box_SDL_Surface(mrb, result));

  return return_value;
}
#endif

#if BIND_SDL_LoadDollarTemplates_FUNCTION
#define SDL_LoadDollarTemplates_REQUIRED_ARGC 2
#define SDL_LoadDollarTemplates_OPTIONAL_ARGC 0
/* SDL_LoadDollarTemplates
 *
 * Parameters:
 * - touchId: long long
 * - src: struct SDL_RWops *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_LoadDollarTemplates(mrb_state* mrb, mrb_value self) {
  mrb_value touchId;
  mrb_value src;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &touchId, &src);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, touchId, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, src, SDLRWops_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRWops expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  long long native_touchId = mrb_fixnum(touchId);

  struct SDL_RWops * native_src = (mrb_nil_p(src) ? NULL : mruby_unbox_SDL_RWops(src));

  /* Invocation */
  int result = SDL_LoadDollarTemplates(native_touchId, native_src);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_LoadFunction_FUNCTION
#define SDL_LoadFunction_REQUIRED_ARGC 2
#define SDL_LoadFunction_OPTIONAL_ARGC 0
/* SDL_LoadFunction
 *
 * Parameters:
 * - handle: void *
 * - name: const char *
 * Return Type: void *
 */
mrb_value
mrb_SDL_SDL_LoadFunction(mrb_state* mrb, mrb_value self) {
  mrb_value handle;
  mrb_value name;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &handle, &name);


  /* Type checking */
  TODO_type_check_void_PTR(handle);
  if (!mrb_obj_is_kind_of(mrb, name, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  void * native_handle = TODO_mruby_unbox_void_PTR(handle);

  const char * native_name = mrb_string_value_cstr(mrb, &name);

  /* Invocation */
  void * result = SDL_LoadFunction(native_handle, native_name);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_void_PTR(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_LoadObject_FUNCTION
#define SDL_LoadObject_REQUIRED_ARGC 1
#define SDL_LoadObject_OPTIONAL_ARGC 0
/* SDL_LoadObject
 *
 * Parameters:
 * - sofile: const char *
 * Return Type: void *
 */
mrb_value
mrb_SDL_SDL_LoadObject(mrb_state* mrb, mrb_value self) {
  mrb_value sofile;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &sofile);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, sofile, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  const char * native_sofile = mrb_string_value_cstr(mrb, &sofile);

  /* Invocation */
  void * result = SDL_LoadObject(native_sofile);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_void_PTR(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_LoadWAV_RW_FUNCTION
#define SDL_LoadWAV_RW_REQUIRED_ARGC 5
#define SDL_LoadWAV_RW_OPTIONAL_ARGC 0
/* SDL_LoadWAV_RW
 *
 * Parameters:
 * - src: struct SDL_RWops *
 * - freesrc: int
 * - spec: struct SDL_AudioSpec *
 * - audio_buf: unsigned char **
 * - audio_len: unsigned int *
 * Return Type: SDL_AudioSpec *
 */
mrb_value
mrb_SDL_SDL_LoadWAV_RW(mrb_state* mrb, mrb_value self) {
  mrb_value src;
  mrb_value freesrc;
  mrb_value spec;
  mrb_value audio_buf;
  mrb_value audio_len;

  /* Fetch the args */
  mrb_get_args(mrb, "ooooo", &src, &freesrc, &spec, &audio_buf, &audio_len);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, src, SDLRWops_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRWops expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, freesrc, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, spec, SDLAudioSpec_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLAudioSpec expected");
    return mrb_nil_value();
  }
  TODO_type_check_unsigned_char_PTR_PTR(audio_buf);
  TODO_type_check_unsigned_int_PTR(audio_len);


  /* Unbox parameters */
  struct SDL_RWops * native_src = (mrb_nil_p(src) ? NULL : mruby_unbox_SDL_RWops(src));

  int native_freesrc = mrb_fixnum(freesrc);

  struct SDL_AudioSpec * native_spec = (mrb_nil_p(spec) ? NULL : mruby_unbox_SDL_AudioSpec(spec));

  unsigned char ** native_audio_buf = TODO_mruby_unbox_unsigned_char_PTR_PTR(audio_buf);

  unsigned int * native_audio_len = TODO_mruby_unbox_unsigned_int_PTR(audio_len);

  /* Invocation */
  SDL_AudioSpec * result = SDL_LoadWAV_RW(native_src, native_freesrc, native_spec, native_audio_buf, native_audio_len);

  /* Box the return value */
  mrb_value return_value = (result == NULL ? mrb_nil_value() : mruby_box_SDL_AudioSpec(mrb, result));

  return return_value;
}
#endif

#if BIND_SDL_LockAudio_FUNCTION
#define SDL_LockAudio_REQUIRED_ARGC 0
#define SDL_LockAudio_OPTIONAL_ARGC 0
/* SDL_LockAudio
 *
 * Parameters: None
 * Return Type: void
 */
mrb_value
mrb_SDL_SDL_LockAudio(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  SDL_LockAudio();

  return mrb_nil_value();
}
#endif

#if BIND_SDL_LockAudioDevice_FUNCTION
#define SDL_LockAudioDevice_REQUIRED_ARGC 1
#define SDL_LockAudioDevice_OPTIONAL_ARGC 0
/* SDL_LockAudioDevice
 *
 * Parameters:
 * - dev: unsigned int
 * Return Type: void
 */
mrb_value
mrb_SDL_SDL_LockAudioDevice(mrb_state* mrb, mrb_value self) {
  mrb_value dev;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &dev);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, dev, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  unsigned int native_dev = mrb_fixnum(dev);

  /* Invocation */
  SDL_LockAudioDevice(native_dev);

  return mrb_nil_value();
}
#endif

#if BIND_SDL_LockMutex_FUNCTION
#define SDL_LockMutex_REQUIRED_ARGC 1
#define SDL_LockMutex_OPTIONAL_ARGC 0
/* SDL_LockMutex
 *
 * Parameters:
 * - mutex: struct SDL_mutex *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_LockMutex(mrb_state* mrb, mrb_value self) {
  mrb_value mutex;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &mutex);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, mutex, SDLMutex_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLMutex expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_mutex * native_mutex = (mrb_nil_p(mutex) ? NULL : mruby_unbox_SDL_mutex(mutex));

  /* Invocation */
  int result = SDL_LockMutex(native_mutex);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_LockSurface_FUNCTION
#define SDL_LockSurface_REQUIRED_ARGC 1
#define SDL_LockSurface_OPTIONAL_ARGC 0
/* SDL_LockSurface
 *
 * Parameters:
 * - surface: struct SDL_Surface *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_LockSurface(mrb_state* mrb, mrb_value self) {
  mrb_value surface;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &surface);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, surface, SDLSurface_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLSurface expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_Surface * native_surface = (mrb_nil_p(surface) ? NULL : mruby_unbox_SDL_Surface(surface));

  /* Invocation */
  int result = SDL_LockSurface(native_surface);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_LockTexture_FUNCTION
#define SDL_LockTexture_REQUIRED_ARGC 4
#define SDL_LockTexture_OPTIONAL_ARGC 0
/* SDL_LockTexture
 *
 * Parameters:
 * - texture: struct SDL_Texture *
 * - rect: const struct SDL_Rect *
 * - pixels: void **
 * - pitch: int *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_LockTexture(mrb_state* mrb, mrb_value self) {
  mrb_value texture;
  mrb_value rect;
  mrb_value pixels;
  mrb_value pitch;

  /* Fetch the args */
  mrb_get_args(mrb, "oooo", &texture, &rect, &pixels, &pitch);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, texture, SDLTexture_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLTexture expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, rect, SDLRect_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRect expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR_PTR(pixels);
  TODO_type_check_int_PTR(pitch);


  /* Unbox parameters */
  struct SDL_Texture * native_texture = (mrb_nil_p(texture) ? NULL : mruby_unbox_SDL_Texture(texture));

  const struct SDL_Rect * native_rect = (mrb_nil_p(rect) ? NULL : mruby_unbox_SDL_Rect(rect));

  void ** native_pixels = TODO_mruby_unbox_void_PTR_PTR(pixels);

  int * native_pitch = TODO_mruby_unbox_int_PTR(pitch);

  /* Invocation */
  int result = SDL_LockTexture(native_texture, native_rect, native_pixels, native_pitch);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_Log_FUNCTION
#define SDL_Log_REQUIRED_ARGC 1
#define SDL_Log_OPTIONAL_ARGC 0
/* SDL_Log
 *
 * Parameters:
 * - fmt: const char *
 * Return Type: void
 */
mrb_value
mrb_SDL_SDL_Log(mrb_state* mrb, mrb_value self) {
  mrb_value fmt;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &fmt);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, fmt, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  const char * native_fmt = mrb_string_value_cstr(mrb, &fmt);

  /* Invocation */
  SDL_Log(native_fmt);

  return mrb_nil_value();
}
#endif

#if BIND_SDL_log_FUNCTION
#define SDL_log_REQUIRED_ARGC 1
#define SDL_log_OPTIONAL_ARGC 0
/* SDL_log
 *
 * Parameters:
 * - x: double
 * Return Type: double
 */
mrb_value
mrb_SDL_SDL_log(mrb_state* mrb, mrb_value self) {
  mrb_value x;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &x);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, x, mrb->float_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Float expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  double native_x = mrb_float(x);

  /* Invocation */
  double result = SDL_log(native_x);

  /* Box the return value */
  mrb_value return_value = mrb_float_value(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_LogCritical_FUNCTION
#define SDL_LogCritical_REQUIRED_ARGC 2
#define SDL_LogCritical_OPTIONAL_ARGC 0
/* SDL_LogCritical
 *
 * Parameters:
 * - category: int
 * - fmt: const char *
 * Return Type: void
 */
mrb_value
mrb_SDL_SDL_LogCritical(mrb_state* mrb, mrb_value self) {
  mrb_value category;
  mrb_value fmt;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &category, &fmt);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, category, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, fmt, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_category = mrb_fixnum(category);

  const char * native_fmt = mrb_string_value_cstr(mrb, &fmt);

  /* Invocation */
  SDL_LogCritical(native_category, native_fmt);

  return mrb_nil_value();
}
#endif

#if BIND_SDL_LogDebug_FUNCTION
#define SDL_LogDebug_REQUIRED_ARGC 2
#define SDL_LogDebug_OPTIONAL_ARGC 0
/* SDL_LogDebug
 *
 * Parameters:
 * - category: int
 * - fmt: const char *
 * Return Type: void
 */
mrb_value
mrb_SDL_SDL_LogDebug(mrb_state* mrb, mrb_value self) {
  mrb_value category;
  mrb_value fmt;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &category, &fmt);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, category, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, fmt, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_category = mrb_fixnum(category);

  const char * native_fmt = mrb_string_value_cstr(mrb, &fmt);

  /* Invocation */
  SDL_LogDebug(native_category, native_fmt);

  return mrb_nil_value();
}
#endif

#if BIND_SDL_LogError_FUNCTION
#define SDL_LogError_REQUIRED_ARGC 2
#define SDL_LogError_OPTIONAL_ARGC 0
/* SDL_LogError
 *
 * Parameters:
 * - category: int
 * - fmt: const char *
 * Return Type: void
 */
mrb_value
mrb_SDL_SDL_LogError(mrb_state* mrb, mrb_value self) {
  mrb_value category;
  mrb_value fmt;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &category, &fmt);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, category, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, fmt, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_category = mrb_fixnum(category);

  const char * native_fmt = mrb_string_value_cstr(mrb, &fmt);

  /* Invocation */
  SDL_LogError(native_category, native_fmt);

  return mrb_nil_value();
}
#endif

#if BIND_SDL_LogGetOutputFunction_FUNCTION
#define SDL_LogGetOutputFunction_REQUIRED_ARGC 2
#define SDL_LogGetOutputFunction_OPTIONAL_ARGC 0
/* SDL_LogGetOutputFunction
 *
 * Parameters:
 * - callback: void (**)(void *, int, SDL_LogPriority, const char *)
 * - userdata: void **
 * Return Type: void
 */
mrb_value
mrb_SDL_SDL_LogGetOutputFunction(mrb_state* mrb, mrb_value self) {
  mrb_value callback;
  mrb_value userdata;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &callback, &userdata);


  /* Type checking */
  TODO_type_check_void_LPAREN_PTR_PTR_RPAREN_LPAREN_void_PTR_COMMA_intCOMMA_SDL_LogPriorityCOMMAchar_PTR_RPAREN(callback);
  TODO_type_check_void_PTR_PTR(userdata);


  /* Unbox parameters */
  void (**)(void *, int, SDL_LogPriority, const char *) native_callback = TODO_mruby_unbox_void_LPAREN_PTR_PTR_RPAREN_LPAREN_void_PTR_COMMA_intCOMMA_SDL_LogPriorityCOMMAchar_PTR_RPAREN(callback);

  void ** native_userdata = TODO_mruby_unbox_void_PTR_PTR(userdata);

  /* Invocation */
  SDL_LogGetOutputFunction(native_callback, native_userdata);

  return mrb_nil_value();
}
#endif

#if BIND_SDL_LogGetPriority_FUNCTION
#define SDL_LogGetPriority_REQUIRED_ARGC 1
#define SDL_LogGetPriority_OPTIONAL_ARGC 0
/* SDL_LogGetPriority
 *
 * Parameters:
 * - category: int
 * Return Type: SDL_LogPriority
 */
mrb_value
mrb_SDL_SDL_LogGetPriority(mrb_state* mrb, mrb_value self) {
  mrb_value category;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &category);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, category, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_category = mrb_fixnum(category);

  /* Invocation */
  SDL_LogPriority result = SDL_LogGetPriority(native_category);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_SDL_LogPriority(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_LogInfo_FUNCTION
#define SDL_LogInfo_REQUIRED_ARGC 2
#define SDL_LogInfo_OPTIONAL_ARGC 0
/* SDL_LogInfo
 *
 * Parameters:
 * - category: int
 * - fmt: const char *
 * Return Type: void
 */
mrb_value
mrb_SDL_SDL_LogInfo(mrb_state* mrb, mrb_value self) {
  mrb_value category;
  mrb_value fmt;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &category, &fmt);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, category, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, fmt, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_category = mrb_fixnum(category);

  const char * native_fmt = mrb_string_value_cstr(mrb, &fmt);

  /* Invocation */
  SDL_LogInfo(native_category, native_fmt);

  return mrb_nil_value();
}
#endif

#if BIND_SDL_LogMessage_FUNCTION
#define SDL_LogMessage_REQUIRED_ARGC 3
#define SDL_LogMessage_OPTIONAL_ARGC 0
/* SDL_LogMessage
 *
 * Parameters:
 * - category: int
 * - priority: SDL_LogPriority
 * - fmt: const char *
 * Return Type: void
 */
mrb_value
mrb_SDL_SDL_LogMessage(mrb_state* mrb, mrb_value self) {
  mrb_value category;
  mrb_value priority;
  mrb_value fmt;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &category, &priority, &fmt);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, category, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_SDL_LogPriority(priority);
  if (!mrb_obj_is_kind_of(mrb, fmt, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_category = mrb_fixnum(category);

  SDL_LogPriority native_priority = TODO_mruby_unbox_SDL_LogPriority(priority);

  const char * native_fmt = mrb_string_value_cstr(mrb, &fmt);

  /* Invocation */
  SDL_LogMessage(native_category, native_priority, native_fmt);

  return mrb_nil_value();
}
#endif

#if BIND_SDL_LogMessageV_FUNCTION
#define SDL_LogMessageV_REQUIRED_ARGC 4
#define SDL_LogMessageV_OPTIONAL_ARGC 0
/* SDL_LogMessageV
 *
 * Parameters:
 * - category: int
 * - priority: SDL_LogPriority
 * - fmt: const char *
 * - ap: struct __va_list_tag [1]
 * Return Type: void
 */
mrb_value
mrb_SDL_SDL_LogMessageV(mrb_state* mrb, mrb_value self) {
  mrb_value category;
  mrb_value priority;
  mrb_value fmt;
  mrb_value ap;

  /* Fetch the args */
  mrb_get_args(mrb, "oooo", &category, &priority, &fmt, &ap);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, category, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_SDL_LogPriority(priority);
  if (!mrb_obj_is_kind_of(mrb, fmt, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  TODO_type_check___va_list_tag_[1](ap);


  /* Unbox parameters */
  int native_category = mrb_fixnum(category);

  SDL_LogPriority native_priority = TODO_mruby_unbox_SDL_LogPriority(priority);

  const char * native_fmt = mrb_string_value_cstr(mrb, &fmt);

  struct __va_list_tag [1] native_ap = TODO_mruby_unbox___va_list_tag_[1](ap);

  /* Invocation */
  SDL_LogMessageV(native_category, native_priority, native_fmt, native_ap);

  return mrb_nil_value();
}
#endif

#if BIND_SDL_LogResetPriorities_FUNCTION
#define SDL_LogResetPriorities_REQUIRED_ARGC 0
#define SDL_LogResetPriorities_OPTIONAL_ARGC 0
/* SDL_LogResetPriorities
 *
 * Parameters: None
 * Return Type: void
 */
mrb_value
mrb_SDL_SDL_LogResetPriorities(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  SDL_LogResetPriorities();

  return mrb_nil_value();
}
#endif

#if BIND_SDL_LogSetAllPriority_FUNCTION
#define SDL_LogSetAllPriority_REQUIRED_ARGC 1
#define SDL_LogSetAllPriority_OPTIONAL_ARGC 0
/* SDL_LogSetAllPriority
 *
 * Parameters:
 * - priority: SDL_LogPriority
 * Return Type: void
 */
mrb_value
mrb_SDL_SDL_LogSetAllPriority(mrb_state* mrb, mrb_value self) {
  mrb_value priority;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &priority);


  /* Type checking */
  TODO_type_check_SDL_LogPriority(priority);


  /* Unbox parameters */
  SDL_LogPriority native_priority = TODO_mruby_unbox_SDL_LogPriority(priority);

  /* Invocation */
  SDL_LogSetAllPriority(native_priority);

  return mrb_nil_value();
}
#endif

#if BIND_SDL_LogSetOutputFunction_FUNCTION
#define SDL_LogSetOutputFunction_REQUIRED_ARGC 2
#define SDL_LogSetOutputFunction_OPTIONAL_ARGC 0
/* SDL_LogSetOutputFunction
 *
 * Parameters:
 * - callback: void (*)(void *, int, SDL_LogPriority, const char *)
 * - userdata: void *
 * Return Type: void
 */
mrb_value
mrb_SDL_SDL_LogSetOutputFunction(mrb_state* mrb, mrb_value self) {
  mrb_value callback;
  mrb_value userdata;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &callback, &userdata);


  /* Type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_COMMA_intCOMMA_SDL_LogPriorityCOMMAchar_PTR_RPAREN(callback);
  TODO_type_check_void_PTR(userdata);


  /* Unbox parameters */
  void (*native_callback)(void *, int, SDL_LogPriority, const char *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_COMMA_intCOMMA_SDL_LogPriorityCOMMAchar_PTR_RPAREN(callback);

  void * native_userdata = TODO_mruby_unbox_void_PTR(userdata);

  /* Invocation */
  SDL_LogSetOutputFunction(native_callback, native_userdata);

  return mrb_nil_value();
}
#endif

#if BIND_SDL_LogSetPriority_FUNCTION
#define SDL_LogSetPriority_REQUIRED_ARGC 2
#define SDL_LogSetPriority_OPTIONAL_ARGC 0
/* SDL_LogSetPriority
 *
 * Parameters:
 * - category: int
 * - priority: SDL_LogPriority
 * Return Type: void
 */
mrb_value
mrb_SDL_SDL_LogSetPriority(mrb_state* mrb, mrb_value self) {
  mrb_value category;
  mrb_value priority;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &category, &priority);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, category, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_SDL_LogPriority(priority);


  /* Unbox parameters */
  int native_category = mrb_fixnum(category);

  SDL_LogPriority native_priority = TODO_mruby_unbox_SDL_LogPriority(priority);

  /* Invocation */
  SDL_LogSetPriority(native_category, native_priority);

  return mrb_nil_value();
}
#endif

#if BIND_SDL_LogVerbose_FUNCTION
#define SDL_LogVerbose_REQUIRED_ARGC 2
#define SDL_LogVerbose_OPTIONAL_ARGC 0
/* SDL_LogVerbose
 *
 * Parameters:
 * - category: int
 * - fmt: const char *
 * Return Type: void
 */
mrb_value
mrb_SDL_SDL_LogVerbose(mrb_state* mrb, mrb_value self) {
  mrb_value category;
  mrb_value fmt;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &category, &fmt);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, category, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, fmt, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_category = mrb_fixnum(category);

  const char * native_fmt = mrb_string_value_cstr(mrb, &fmt);

  /* Invocation */
  SDL_LogVerbose(native_category, native_fmt);

  return mrb_nil_value();
}
#endif

#if BIND_SDL_LogWarn_FUNCTION
#define SDL_LogWarn_REQUIRED_ARGC 2
#define SDL_LogWarn_OPTIONAL_ARGC 0
/* SDL_LogWarn
 *
 * Parameters:
 * - category: int
 * - fmt: const char *
 * Return Type: void
 */
mrb_value
mrb_SDL_SDL_LogWarn(mrb_state* mrb, mrb_value self) {
  mrb_value category;
  mrb_value fmt;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &category, &fmt);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, category, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, fmt, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_category = mrb_fixnum(category);

  const char * native_fmt = mrb_string_value_cstr(mrb, &fmt);

  /* Invocation */
  SDL_LogWarn(native_category, native_fmt);

  return mrb_nil_value();
}
#endif

#if BIND_SDL_LowerBlit_FUNCTION
#define SDL_LowerBlit_REQUIRED_ARGC 4
#define SDL_LowerBlit_OPTIONAL_ARGC 0
/* SDL_LowerBlit
 *
 * Parameters:
 * - src: struct SDL_Surface *
 * - srcrect: struct SDL_Rect *
 * - dst: struct SDL_Surface *
 * - dstrect: struct SDL_Rect *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_LowerBlit(mrb_state* mrb, mrb_value self) {
  mrb_value src;
  mrb_value srcrect;
  mrb_value dst;
  mrb_value dstrect;

  /* Fetch the args */
  mrb_get_args(mrb, "oooo", &src, &srcrect, &dst, &dstrect);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, src, SDLSurface_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLSurface expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, srcrect, SDLRect_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRect expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, dst, SDLSurface_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLSurface expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, dstrect, SDLRect_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRect expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_Surface * native_src = (mrb_nil_p(src) ? NULL : mruby_unbox_SDL_Surface(src));

  struct SDL_Rect * native_srcrect = (mrb_nil_p(srcrect) ? NULL : mruby_unbox_SDL_Rect(srcrect));

  struct SDL_Surface * native_dst = (mrb_nil_p(dst) ? NULL : mruby_unbox_SDL_Surface(dst));

  struct SDL_Rect * native_dstrect = (mrb_nil_p(dstrect) ? NULL : mruby_unbox_SDL_Rect(dstrect));

  /* Invocation */
  int result = SDL_LowerBlit(native_src, native_srcrect, native_dst, native_dstrect);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_LowerBlitScaled_FUNCTION
#define SDL_LowerBlitScaled_REQUIRED_ARGC 4
#define SDL_LowerBlitScaled_OPTIONAL_ARGC 0
/* SDL_LowerBlitScaled
 *
 * Parameters:
 * - src: struct SDL_Surface *
 * - srcrect: struct SDL_Rect *
 * - dst: struct SDL_Surface *
 * - dstrect: struct SDL_Rect *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_LowerBlitScaled(mrb_state* mrb, mrb_value self) {
  mrb_value src;
  mrb_value srcrect;
  mrb_value dst;
  mrb_value dstrect;

  /* Fetch the args */
  mrb_get_args(mrb, "oooo", &src, &srcrect, &dst, &dstrect);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, src, SDLSurface_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLSurface expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, srcrect, SDLRect_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRect expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, dst, SDLSurface_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLSurface expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, dstrect, SDLRect_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRect expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_Surface * native_src = (mrb_nil_p(src) ? NULL : mruby_unbox_SDL_Surface(src));

  struct SDL_Rect * native_srcrect = (mrb_nil_p(srcrect) ? NULL : mruby_unbox_SDL_Rect(srcrect));

  struct SDL_Surface * native_dst = (mrb_nil_p(dst) ? NULL : mruby_unbox_SDL_Surface(dst));

  struct SDL_Rect * native_dstrect = (mrb_nil_p(dstrect) ? NULL : mruby_unbox_SDL_Rect(dstrect));

  /* Invocation */
  int result = SDL_LowerBlitScaled(native_src, native_srcrect, native_dst, native_dstrect);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_ltoa_FUNCTION
#define SDL_ltoa_REQUIRED_ARGC 3
#define SDL_ltoa_OPTIONAL_ARGC 0
/* SDL_ltoa
 *
 * Parameters:
 * - value: long
 * - str: char *
 * - radix: int
 * Return Type: char *
 */
mrb_value
mrb_SDL_SDL_ltoa(mrb_state* mrb, mrb_value self) {
  mrb_value value;
  mrb_value str;
  mrb_value radix;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &value, &str, &radix);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, value, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, str, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, radix, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  long native_value = mrb_fixnum(value);

  /* WARNING: Allocating new memory to create 'char *' from 'const char *'.
   *          Please verify that this memory is cleaned up correctly.
   *
   *          Has this been verified? [No]
   */
  char * native_str = strdup(mrb_string_value_cstr(mrb, &str));

  int native_radix = mrb_fixnum(radix);

  /* Invocation */
  char * result = SDL_ltoa(native_value, native_str, native_radix);

  /* Box the return value */
  mrb_value return_value = mrb_str_new_cstr(mrb, result);

  /* WARNING: Assuming that the new string can be deallocated after the function call.
   *          Please verify that this is correct (the function does not save this parameter).
   *
   *          Has this been verified? [No]
   */
  free(native_str);
  native_str = NULL;

  return return_value;
}
#endif

#if BIND_SDL_main_FUNCTION
#define SDL_main_REQUIRED_ARGC 2
#define SDL_main_OPTIONAL_ARGC 0
/* SDL_main
 *
 * Parameters:
 * - argc: int
 * - argv: char *[]
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_main(mrb_state* mrb, mrb_value self) {
  mrb_value argc;
  mrb_value argv;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &argc, &argv);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, argc, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_char_PTR_[](argv);


  /* Unbox parameters */
  int native_argc = mrb_fixnum(argc);

  char *[] native_argv = TODO_mruby_unbox_char_PTR_[](argv);

  /* Invocation */
  int result = SDL_main(native_argc, native_argv);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_malloc_FUNCTION
#define SDL_malloc_REQUIRED_ARGC 1
#define SDL_malloc_OPTIONAL_ARGC 0
/* SDL_malloc
 *
 * Parameters:
 * - size: unsigned long
 * Return Type: void *
 */
mrb_value
mrb_SDL_SDL_malloc(mrb_state* mrb, mrb_value self) {
  mrb_value size;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &size);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, size, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  unsigned long native_size = mrb_fixnum(size);

  /* Invocation */
  void * result = SDL_malloc(native_size);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_void_PTR(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_MapRGB_FUNCTION
#define SDL_MapRGB_REQUIRED_ARGC 4
#define SDL_MapRGB_OPTIONAL_ARGC 0
/* SDL_MapRGB
 *
 * Parameters:
 * - format: const struct SDL_PixelFormat *
 * - r: unsigned char
 * - g: unsigned char
 * - b: unsigned char
 * Return Type: Uint32
 */
mrb_value
mrb_SDL_SDL_MapRGB(mrb_state* mrb, mrb_value self) {
  mrb_value format;
  mrb_value r;
  mrb_value g;
  mrb_value b;

  /* Fetch the args */
  mrb_get_args(mrb, "oooo", &format, &r, &g, &b);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, format, SDLPixelFormat_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLPixelFormat expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, r, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, g, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, b, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  const struct SDL_PixelFormat * native_format = (mrb_nil_p(format) ? NULL : mruby_unbox_SDL_PixelFormat(format));

  unsigned char native_r = *mrb_string_value_ptr(mrb, r);

  unsigned char native_g = *mrb_string_value_ptr(mrb, g);

  unsigned char native_b = *mrb_string_value_ptr(mrb, b);

  /* Invocation */
  Uint32 result = SDL_MapRGB(native_format, native_r, native_g, native_b);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_Uint32(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_MapRGBA_FUNCTION
#define SDL_MapRGBA_REQUIRED_ARGC 5
#define SDL_MapRGBA_OPTIONAL_ARGC 0
/* SDL_MapRGBA
 *
 * Parameters:
 * - format: const struct SDL_PixelFormat *
 * - r: unsigned char
 * - g: unsigned char
 * - b: unsigned char
 * - a: unsigned char
 * Return Type: Uint32
 */
mrb_value
mrb_SDL_SDL_MapRGBA(mrb_state* mrb, mrb_value self) {
  mrb_value format;
  mrb_value r;
  mrb_value g;
  mrb_value b;
  mrb_value a;

  /* Fetch the args */
  mrb_get_args(mrb, "ooooo", &format, &r, &g, &b, &a);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, format, SDLPixelFormat_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLPixelFormat expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, r, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, g, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, b, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, a, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  const struct SDL_PixelFormat * native_format = (mrb_nil_p(format) ? NULL : mruby_unbox_SDL_PixelFormat(format));

  unsigned char native_r = *mrb_string_value_ptr(mrb, r);

  unsigned char native_g = *mrb_string_value_ptr(mrb, g);

  unsigned char native_b = *mrb_string_value_ptr(mrb, b);

  unsigned char native_a = *mrb_string_value_ptr(mrb, a);

  /* Invocation */
  Uint32 result = SDL_MapRGBA(native_format, native_r, native_g, native_b, native_a);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_Uint32(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_MasksToPixelFormatEnum_FUNCTION
#define SDL_MasksToPixelFormatEnum_REQUIRED_ARGC 5
#define SDL_MasksToPixelFormatEnum_OPTIONAL_ARGC 0
/* SDL_MasksToPixelFormatEnum
 *
 * Parameters:
 * - bpp: int
 * - Rmask: unsigned int
 * - Gmask: unsigned int
 * - Bmask: unsigned int
 * - Amask: unsigned int
 * Return Type: Uint32
 */
mrb_value
mrb_SDL_SDL_MasksToPixelFormatEnum(mrb_state* mrb, mrb_value self) {
  mrb_value bpp;
  mrb_value Rmask;
  mrb_value Gmask;
  mrb_value Bmask;
  mrb_value Amask;

  /* Fetch the args */
  mrb_get_args(mrb, "ooooo", &bpp, &Rmask, &Gmask, &Bmask, &Amask);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, bpp, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, Rmask, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, Gmask, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, Bmask, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, Amask, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_bpp = mrb_fixnum(bpp);

  unsigned int native_Rmask = mrb_fixnum(Rmask);

  unsigned int native_Gmask = mrb_fixnum(Gmask);

  unsigned int native_Bmask = mrb_fixnum(Bmask);

  unsigned int native_Amask = mrb_fixnum(Amask);

  /* Invocation */
  Uint32 result = SDL_MasksToPixelFormatEnum(native_bpp, native_Rmask, native_Gmask, native_Bmask, native_Amask);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_Uint32(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_MaximizeWindow_FUNCTION
#define SDL_MaximizeWindow_REQUIRED_ARGC 1
#define SDL_MaximizeWindow_OPTIONAL_ARGC 0
/* SDL_MaximizeWindow
 *
 * Parameters:
 * - window: struct SDL_Window *
 * Return Type: void
 */
mrb_value
mrb_SDL_SDL_MaximizeWindow(mrb_state* mrb, mrb_value self) {
  mrb_value window;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &window);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, window, SDLWindow_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLWindow expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_Window * native_window = (mrb_nil_p(window) ? NULL : mruby_unbox_SDL_Window(window));

  /* Invocation */
  SDL_MaximizeWindow(native_window);

  return mrb_nil_value();
}
#endif

#if BIND_SDL_memcmp_FUNCTION
#define SDL_memcmp_REQUIRED_ARGC 3
#define SDL_memcmp_OPTIONAL_ARGC 0
/* SDL_memcmp
 *
 * Parameters:
 * - s1: const void *
 * - s2: const void *
 * - len: unsigned long
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_memcmp(mrb_state* mrb, mrb_value self) {
  mrb_value s1;
  mrb_value s2;
  mrb_value len;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &s1, &s2, &len);


  /* Type checking */
  TODO_type_check_void_PTR(s1);
  TODO_type_check_void_PTR(s2);
  if (!mrb_obj_is_kind_of(mrb, len, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  const void * native_s1 = TODO_mruby_unbox_void_PTR(s1);

  const void * native_s2 = TODO_mruby_unbox_void_PTR(s2);

  unsigned long native_len = mrb_fixnum(len);

  /* Invocation */
  int result = SDL_memcmp(native_s1, native_s2, native_len);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_memcpy_FUNCTION
#define SDL_memcpy_REQUIRED_ARGC 3
#define SDL_memcpy_OPTIONAL_ARGC 0
/* SDL_memcpy
 *
 * Parameters:
 * - dst: void *
 * - src: const void *
 * - len: unsigned long
 * Return Type: void *
 */
mrb_value
mrb_SDL_SDL_memcpy(mrb_state* mrb, mrb_value self) {
  mrb_value dst;
  mrb_value src;
  mrb_value len;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &dst, &src, &len);


  /* Type checking */
  TODO_type_check_void_PTR(dst);
  TODO_type_check_void_PTR(src);
  if (!mrb_obj_is_kind_of(mrb, len, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  void * native_dst = TODO_mruby_unbox_void_PTR(dst);

  const void * native_src = TODO_mruby_unbox_void_PTR(src);

  unsigned long native_len = mrb_fixnum(len);

  /* Invocation */
  void * result = SDL_memcpy(native_dst, native_src, native_len);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_void_PTR(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_memcpy4_FUNCTION
#define SDL_memcpy4_REQUIRED_ARGC 3
#define SDL_memcpy4_OPTIONAL_ARGC 0
/* SDL_memcpy4
 *
 * Parameters:
 * - dst: void *
 * - src: const void *
 * - dwords: unsigned long
 * Return Type: void *
 */
mrb_value
mrb_SDL_SDL_memcpy4(mrb_state* mrb, mrb_value self) {
  mrb_value dst;
  mrb_value src;
  mrb_value dwords;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &dst, &src, &dwords);


  /* Type checking */
  TODO_type_check_void_PTR(dst);
  TODO_type_check_void_PTR(src);
  if (!mrb_obj_is_kind_of(mrb, dwords, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  void * native_dst = TODO_mruby_unbox_void_PTR(dst);

  const void * native_src = TODO_mruby_unbox_void_PTR(src);

  unsigned long native_dwords = mrb_fixnum(dwords);

  /* Invocation */
  void * result = SDL_memcpy4(native_dst, native_src, native_dwords);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_void_PTR(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_memmove_FUNCTION
#define SDL_memmove_REQUIRED_ARGC 3
#define SDL_memmove_OPTIONAL_ARGC 0
/* SDL_memmove
 *
 * Parameters:
 * - dst: void *
 * - src: const void *
 * - len: unsigned long
 * Return Type: void *
 */
mrb_value
mrb_SDL_SDL_memmove(mrb_state* mrb, mrb_value self) {
  mrb_value dst;
  mrb_value src;
  mrb_value len;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &dst, &src, &len);


  /* Type checking */
  TODO_type_check_void_PTR(dst);
  TODO_type_check_void_PTR(src);
  if (!mrb_obj_is_kind_of(mrb, len, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  void * native_dst = TODO_mruby_unbox_void_PTR(dst);

  const void * native_src = TODO_mruby_unbox_void_PTR(src);

  unsigned long native_len = mrb_fixnum(len);

  /* Invocation */
  void * result = SDL_memmove(native_dst, native_src, native_len);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_void_PTR(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_memset_FUNCTION
#define SDL_memset_REQUIRED_ARGC 3
#define SDL_memset_OPTIONAL_ARGC 0
/* SDL_memset
 *
 * Parameters:
 * - dst: void *
 * - c: int
 * - len: unsigned long
 * Return Type: void *
 */
mrb_value
mrb_SDL_SDL_memset(mrb_state* mrb, mrb_value self) {
  mrb_value dst;
  mrb_value c;
  mrb_value len;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &dst, &c, &len);


  /* Type checking */
  TODO_type_check_void_PTR(dst);
  if (!mrb_obj_is_kind_of(mrb, c, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, len, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  void * native_dst = TODO_mruby_unbox_void_PTR(dst);

  int native_c = mrb_fixnum(c);

  unsigned long native_len = mrb_fixnum(len);

  /* Invocation */
  void * result = SDL_memset(native_dst, native_c, native_len);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_void_PTR(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_memset4_FUNCTION
#define SDL_memset4_REQUIRED_ARGC 3
#define SDL_memset4_OPTIONAL_ARGC 0
/* SDL_memset4
 *
 * Parameters:
 * - dst: void *
 * - val: unsigned int
 * - dwords: unsigned long
 * Return Type: void
 */
mrb_value
mrb_SDL_SDL_memset4(mrb_state* mrb, mrb_value self) {
  mrb_value dst;
  mrb_value val;
  mrb_value dwords;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &dst, &val, &dwords);


  /* Type checking */
  TODO_type_check_void_PTR(dst);
  if (!mrb_obj_is_kind_of(mrb, val, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, dwords, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  void * native_dst = TODO_mruby_unbox_void_PTR(dst);

  unsigned int native_val = mrb_fixnum(val);

  unsigned long native_dwords = mrb_fixnum(dwords);

  /* Invocation */
  SDL_memset4(native_dst, native_val, native_dwords);

  return mrb_nil_value();
}
#endif

#if BIND_SDL_MinimizeWindow_FUNCTION
#define SDL_MinimizeWindow_REQUIRED_ARGC 1
#define SDL_MinimizeWindow_OPTIONAL_ARGC 0
/* SDL_MinimizeWindow
 *
 * Parameters:
 * - window: struct SDL_Window *
 * Return Type: void
 */
mrb_value
mrb_SDL_SDL_MinimizeWindow(mrb_state* mrb, mrb_value self) {
  mrb_value window;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &window);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, window, SDLWindow_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLWindow expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_Window * native_window = (mrb_nil_p(window) ? NULL : mruby_unbox_SDL_Window(window));

  /* Invocation */
  SDL_MinimizeWindow(native_window);

  return mrb_nil_value();
}
#endif

#if BIND_SDL_MixAudio_FUNCTION
#define SDL_MixAudio_REQUIRED_ARGC 4
#define SDL_MixAudio_OPTIONAL_ARGC 0
/* SDL_MixAudio
 *
 * Parameters:
 * - dst: unsigned char *
 * - src: const unsigned char *
 * - len: unsigned int
 * - volume: int
 * Return Type: void
 */
mrb_value
mrb_SDL_SDL_MixAudio(mrb_state* mrb, mrb_value self) {
  mrb_value dst;
  mrb_value src;
  mrb_value len;
  mrb_value volume;

  /* Fetch the args */
  mrb_get_args(mrb, "oooo", &dst, &src, &len, &volume);


  /* Type checking */
  TODO_type_check_unsigned_char_PTR(dst);
  TODO_type_check_unsigned_char_PTR(src);
  if (!mrb_obj_is_kind_of(mrb, len, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, volume, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  unsigned char * native_dst = TODO_mruby_unbox_unsigned_char_PTR(dst);

  const unsigned char * native_src = TODO_mruby_unbox_unsigned_char_PTR(src);

  unsigned int native_len = mrb_fixnum(len);

  int native_volume = mrb_fixnum(volume);

  /* Invocation */
  SDL_MixAudio(native_dst, native_src, native_len, native_volume);

  return mrb_nil_value();
}
#endif

#if BIND_SDL_MixAudioFormat_FUNCTION
#define SDL_MixAudioFormat_REQUIRED_ARGC 5
#define SDL_MixAudioFormat_OPTIONAL_ARGC 0
/* SDL_MixAudioFormat
 *
 * Parameters:
 * - dst: unsigned char *
 * - src: const unsigned char *
 * - format: unsigned short
 * - len: unsigned int
 * - volume: int
 * Return Type: void
 */
mrb_value
mrb_SDL_SDL_MixAudioFormat(mrb_state* mrb, mrb_value self) {
  mrb_value dst;
  mrb_value src;
  mrb_value format;
  mrb_value len;
  mrb_value volume;

  /* Fetch the args */
  mrb_get_args(mrb, "ooooo", &dst, &src, &format, &len, &volume);


  /* Type checking */
  TODO_type_check_unsigned_char_PTR(dst);
  TODO_type_check_unsigned_char_PTR(src);
  if (!mrb_obj_is_kind_of(mrb, format, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, len, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, volume, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  unsigned char * native_dst = TODO_mruby_unbox_unsigned_char_PTR(dst);

  const unsigned char * native_src = TODO_mruby_unbox_unsigned_char_PTR(src);

  unsigned short native_format = mrb_fixnum(format);

  unsigned int native_len = mrb_fixnum(len);

  int native_volume = mrb_fixnum(volume);

  /* Invocation */
  SDL_MixAudioFormat(native_dst, native_src, native_format, native_len, native_volume);

  return mrb_nil_value();
}
#endif

#if BIND_SDL_MostSignificantBitIndex32_FUNCTION
#define SDL_MostSignificantBitIndex32_REQUIRED_ARGC 1
#define SDL_MostSignificantBitIndex32_OPTIONAL_ARGC 0
/* SDL_MostSignificantBitIndex32
 *
 * Parameters:
 * - x: unsigned int
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_MostSignificantBitIndex32(mrb_state* mrb, mrb_value self) {
  mrb_value x;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &x);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, x, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  unsigned int native_x = mrb_fixnum(x);

  /* Invocation */
  int result = SDL_MostSignificantBitIndex32(native_x);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_MouseIsHaptic_FUNCTION
#define SDL_MouseIsHaptic_REQUIRED_ARGC 0
#define SDL_MouseIsHaptic_OPTIONAL_ARGC 0
/* SDL_MouseIsHaptic
 *
 * Parameters: None
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_MouseIsHaptic(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  int result = SDL_MouseIsHaptic();

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_NumHaptics_FUNCTION
#define SDL_NumHaptics_REQUIRED_ARGC 0
#define SDL_NumHaptics_OPTIONAL_ARGC 0
/* SDL_NumHaptics
 *
 * Parameters: None
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_NumHaptics(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  int result = SDL_NumHaptics();

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_NumJoysticks_FUNCTION
#define SDL_NumJoysticks_REQUIRED_ARGC 0
#define SDL_NumJoysticks_OPTIONAL_ARGC 0
/* SDL_NumJoysticks
 *
 * Parameters: None
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_NumJoysticks(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  int result = SDL_NumJoysticks();

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_OpenAudio_FUNCTION
#define SDL_OpenAudio_REQUIRED_ARGC 2
#define SDL_OpenAudio_OPTIONAL_ARGC 0
/* SDL_OpenAudio
 *
 * Parameters:
 * - desired: struct SDL_AudioSpec *
 * - obtained: struct SDL_AudioSpec *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_OpenAudio(mrb_state* mrb, mrb_value self) {
  mrb_value desired;
  mrb_value obtained;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &desired, &obtained);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, desired, SDLAudioSpec_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLAudioSpec expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, obtained, SDLAudioSpec_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLAudioSpec expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_AudioSpec * native_desired = (mrb_nil_p(desired) ? NULL : mruby_unbox_SDL_AudioSpec(desired));

  struct SDL_AudioSpec * native_obtained = (mrb_nil_p(obtained) ? NULL : mruby_unbox_SDL_AudioSpec(obtained));

  /* Invocation */
  int result = SDL_OpenAudio(native_desired, native_obtained);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_OpenAudioDevice_FUNCTION
#define SDL_OpenAudioDevice_REQUIRED_ARGC 5
#define SDL_OpenAudioDevice_OPTIONAL_ARGC 0
/* SDL_OpenAudioDevice
 *
 * Parameters:
 * - device: const char *
 * - iscapture: int
 * - desired: const struct SDL_AudioSpec *
 * - obtained: struct SDL_AudioSpec *
 * - allowed_changes: int
 * Return Type: SDL_AudioDeviceID
 */
mrb_value
mrb_SDL_SDL_OpenAudioDevice(mrb_state* mrb, mrb_value self) {
  mrb_value device;
  mrb_value iscapture;
  mrb_value desired;
  mrb_value obtained;
  mrb_value allowed_changes;

  /* Fetch the args */
  mrb_get_args(mrb, "ooooo", &device, &iscapture, &desired, &obtained, &allowed_changes);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, device, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, iscapture, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, desired, SDLAudioSpec_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLAudioSpec expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, obtained, SDLAudioSpec_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLAudioSpec expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, allowed_changes, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  const char * native_device = mrb_string_value_cstr(mrb, &device);

  int native_iscapture = mrb_fixnum(iscapture);

  const struct SDL_AudioSpec * native_desired = (mrb_nil_p(desired) ? NULL : mruby_unbox_SDL_AudioSpec(desired));

  struct SDL_AudioSpec * native_obtained = (mrb_nil_p(obtained) ? NULL : mruby_unbox_SDL_AudioSpec(obtained));

  int native_allowed_changes = mrb_fixnum(allowed_changes);

  /* Invocation */
  SDL_AudioDeviceID result = SDL_OpenAudioDevice(native_device, native_iscapture, native_desired, native_obtained, native_allowed_changes);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_Uint32(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_PauseAudio_FUNCTION
#define SDL_PauseAudio_REQUIRED_ARGC 1
#define SDL_PauseAudio_OPTIONAL_ARGC 0
/* SDL_PauseAudio
 *
 * Parameters:
 * - pause_on: int
 * Return Type: void
 */
mrb_value
mrb_SDL_SDL_PauseAudio(mrb_state* mrb, mrb_value self) {
  mrb_value pause_on;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &pause_on);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, pause_on, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_pause_on = mrb_fixnum(pause_on);

  /* Invocation */
  SDL_PauseAudio(native_pause_on);

  return mrb_nil_value();
}
#endif

#if BIND_SDL_PauseAudioDevice_FUNCTION
#define SDL_PauseAudioDevice_REQUIRED_ARGC 2
#define SDL_PauseAudioDevice_OPTIONAL_ARGC 0
/* SDL_PauseAudioDevice
 *
 * Parameters:
 * - dev: unsigned int
 * - pause_on: int
 * Return Type: void
 */
mrb_value
mrb_SDL_SDL_PauseAudioDevice(mrb_state* mrb, mrb_value self) {
  mrb_value dev;
  mrb_value pause_on;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &dev, &pause_on);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, dev, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, pause_on, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  unsigned int native_dev = mrb_fixnum(dev);

  int native_pause_on = mrb_fixnum(pause_on);

  /* Invocation */
  SDL_PauseAudioDevice(native_dev, native_pause_on);

  return mrb_nil_value();
}
#endif

#if BIND_SDL_PeepEvents_FUNCTION
#define SDL_PeepEvents_REQUIRED_ARGC 5
#define SDL_PeepEvents_OPTIONAL_ARGC 0
/* SDL_PeepEvents
 *
 * Parameters:
 * - events: union SDL_Event *
 * - numevents: int
 * - action: SDL_eventaction
 * - minType: unsigned int
 * - maxType: unsigned int
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_PeepEvents(mrb_state* mrb, mrb_value self) {
  mrb_value events;
  mrb_value numevents;
  mrb_value action;
  mrb_value minType;
  mrb_value maxType;

  /* Fetch the args */
  mrb_get_args(mrb, "ooooo", &events, &numevents, &action, &minType, &maxType);


  /* Type checking */
  TODO_type_check_union_SDL_Event_PTR(events);
  if (!mrb_obj_is_kind_of(mrb, numevents, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_SDL_eventaction(action);
  if (!mrb_obj_is_kind_of(mrb, minType, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, maxType, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  union SDL_Event * native_events = TODO_mruby_unbox_union_SDL_Event_PTR(events);

  int native_numevents = mrb_fixnum(numevents);

  SDL_eventaction native_action = TODO_mruby_unbox_SDL_eventaction(action);

  unsigned int native_minType = mrb_fixnum(minType);

  unsigned int native_maxType = mrb_fixnum(maxType);

  /* Invocation */
  int result = SDL_PeepEvents(native_events, native_numevents, native_action, native_minType, native_maxType);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_PixelFormatEnumToMasks_FUNCTION
#define SDL_PixelFormatEnumToMasks_REQUIRED_ARGC 6
#define SDL_PixelFormatEnumToMasks_OPTIONAL_ARGC 0
/* SDL_PixelFormatEnumToMasks
 *
 * Parameters:
 * - format: unsigned int
 * - bpp: int *
 * - Rmask: unsigned int *
 * - Gmask: unsigned int *
 * - Bmask: unsigned int *
 * - Amask: unsigned int *
 * Return Type: SDL_bool
 */
mrb_value
mrb_SDL_SDL_PixelFormatEnumToMasks(mrb_state* mrb, mrb_value self) {
  mrb_value format;
  mrb_value bpp;
  mrb_value Rmask;
  mrb_value Gmask;
  mrb_value Bmask;
  mrb_value Amask;

  /* Fetch the args */
  mrb_get_args(mrb, "oooooo", &format, &bpp, &Rmask, &Gmask, &Bmask, &Amask);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, format, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_int_PTR(bpp);
  TODO_type_check_unsigned_int_PTR(Rmask);
  TODO_type_check_unsigned_int_PTR(Gmask);
  TODO_type_check_unsigned_int_PTR(Bmask);
  TODO_type_check_unsigned_int_PTR(Amask);


  /* Unbox parameters */
  unsigned int native_format = mrb_fixnum(format);

  int * native_bpp = TODO_mruby_unbox_int_PTR(bpp);

  unsigned int * native_Rmask = TODO_mruby_unbox_unsigned_int_PTR(Rmask);

  unsigned int * native_Gmask = TODO_mruby_unbox_unsigned_int_PTR(Gmask);

  unsigned int * native_Bmask = TODO_mruby_unbox_unsigned_int_PTR(Bmask);

  unsigned int * native_Amask = TODO_mruby_unbox_unsigned_int_PTR(Amask);

  /* Invocation */
  SDL_bool result = SDL_PixelFormatEnumToMasks(native_format, native_bpp, native_Rmask, native_Gmask, native_Bmask, native_Amask);

  /* Box the return value */
  mrb_value return_value = mrb_bool_value((mrb_bool)result);

  return return_value;
}
#endif

#if BIND_SDL_PollEvent_FUNCTION
#define SDL_PollEvent_REQUIRED_ARGC 1
#define SDL_PollEvent_OPTIONAL_ARGC 0
/* SDL_PollEvent
 *
 * Parameters:
 * - event: union SDL_Event *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_PollEvent(mrb_state* mrb, mrb_value self) {
  mrb_value event;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &event);


  /* Type checking */
  TODO_type_check_union_SDL_Event_PTR(event);


  /* Unbox parameters */
  union SDL_Event * native_event = TODO_mruby_unbox_union_SDL_Event_PTR(event);

  /* Invocation */
  int result = SDL_PollEvent(native_event);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_pow_FUNCTION
#define SDL_pow_REQUIRED_ARGC 2
#define SDL_pow_OPTIONAL_ARGC 0
/* SDL_pow
 *
 * Parameters:
 * - x: double
 * - y: double
 * Return Type: double
 */
mrb_value
mrb_SDL_SDL_pow(mrb_state* mrb, mrb_value self) {
  mrb_value x;
  mrb_value y;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &x, &y);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, x, mrb->float_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Float expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, y, mrb->float_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Float expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  double native_x = mrb_float(x);

  double native_y = mrb_float(y);

  /* Invocation */
  double result = SDL_pow(native_x, native_y);

  /* Box the return value */
  mrb_value return_value = mrb_float_value(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_PumpEvents_FUNCTION
#define SDL_PumpEvents_REQUIRED_ARGC 0
#define SDL_PumpEvents_OPTIONAL_ARGC 0
/* SDL_PumpEvents
 *
 * Parameters: None
 * Return Type: void
 */
mrb_value
mrb_SDL_SDL_PumpEvents(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  SDL_PumpEvents();

  return mrb_nil_value();
}
#endif

#if BIND_SDL_PushEvent_FUNCTION
#define SDL_PushEvent_REQUIRED_ARGC 1
#define SDL_PushEvent_OPTIONAL_ARGC 0
/* SDL_PushEvent
 *
 * Parameters:
 * - event: union SDL_Event *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_PushEvent(mrb_state* mrb, mrb_value self) {
  mrb_value event;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &event);


  /* Type checking */
  TODO_type_check_union_SDL_Event_PTR(event);


  /* Unbox parameters */
  union SDL_Event * native_event = TODO_mruby_unbox_union_SDL_Event_PTR(event);

  /* Invocation */
  int result = SDL_PushEvent(native_event);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_qsort_FUNCTION
#define SDL_qsort_REQUIRED_ARGC 4
#define SDL_qsort_OPTIONAL_ARGC 0
/* SDL_qsort
 *
 * Parameters:
 * - base: void *
 * - nmemb: unsigned long
 * - size: unsigned long
 * - compare: int (*)(const void *, const void *)
 * Return Type: void
 */
mrb_value
mrb_SDL_SDL_qsort(mrb_state* mrb, mrb_value self) {
  mrb_value base;
  mrb_value nmemb;
  mrb_value size;
  mrb_value compare;

  /* Fetch the args */
  mrb_get_args(mrb, "oooo", &base, &nmemb, &size, &compare);


  /* Type checking */
  TODO_type_check_void_PTR(base);
  if (!mrb_obj_is_kind_of(mrb, nmemb, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, size, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_void_PTR_COMMA_const_void_PTR_RPAREN(compare);


  /* Unbox parameters */
  void * native_base = TODO_mruby_unbox_void_PTR(base);

  unsigned long native_nmemb = mrb_fixnum(nmemb);

  unsigned long native_size = mrb_fixnum(size);

  int (*native_compare)(const void *, const void *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_void_PTR_COMMA_const_void_PTR_RPAREN(compare);

  /* Invocation */
  SDL_qsort(native_base, native_nmemb, native_size, native_compare);

  return mrb_nil_value();
}
#endif

#if BIND_SDL_QueryTexture_FUNCTION
#define SDL_QueryTexture_REQUIRED_ARGC 5
#define SDL_QueryTexture_OPTIONAL_ARGC 0
/* SDL_QueryTexture
 *
 * Parameters:
 * - texture: struct SDL_Texture *
 * - format: unsigned int *
 * - access: int *
 * - w: int *
 * - h: int *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_QueryTexture(mrb_state* mrb, mrb_value self) {
  mrb_value texture;
  mrb_value format;
  mrb_value access;
  mrb_value w;
  mrb_value h;

  /* Fetch the args */
  mrb_get_args(mrb, "ooooo", &texture, &format, &access, &w, &h);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, texture, SDLTexture_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLTexture expected");
    return mrb_nil_value();
  }
  TODO_type_check_unsigned_int_PTR(format);
  TODO_type_check_int_PTR(access);
  TODO_type_check_int_PTR(w);
  TODO_type_check_int_PTR(h);


  /* Unbox parameters */
  struct SDL_Texture * native_texture = (mrb_nil_p(texture) ? NULL : mruby_unbox_SDL_Texture(texture));

  unsigned int * native_format = TODO_mruby_unbox_unsigned_int_PTR(format);

  int * native_access = TODO_mruby_unbox_int_PTR(access);

  int * native_w = TODO_mruby_unbox_int_PTR(w);

  int * native_h = TODO_mruby_unbox_int_PTR(h);

  /* Invocation */
  int result = SDL_QueryTexture(native_texture, native_format, native_access, native_w, native_h);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_Quit_FUNCTION
#define SDL_Quit_REQUIRED_ARGC 0
#define SDL_Quit_OPTIONAL_ARGC 0
/* SDL_Quit
 *
 * Parameters: None
 * Return Type: void
 */
mrb_value
mrb_SDL_SDL_Quit(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  SDL_Quit();

  return mrb_nil_value();
}
#endif

#if BIND_SDL_QuitSubSystem_FUNCTION
#define SDL_QuitSubSystem_REQUIRED_ARGC 1
#define SDL_QuitSubSystem_OPTIONAL_ARGC 0
/* SDL_QuitSubSystem
 *
 * Parameters:
 * - flags: unsigned int
 * Return Type: void
 */
mrb_value
mrb_SDL_SDL_QuitSubSystem(mrb_state* mrb, mrb_value self) {
  mrb_value flags;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &flags);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, flags, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  unsigned int native_flags = mrb_fixnum(flags);

  /* Invocation */
  SDL_QuitSubSystem(native_flags);

  return mrb_nil_value();
}
#endif

#if BIND_SDL_RaiseWindow_FUNCTION
#define SDL_RaiseWindow_REQUIRED_ARGC 1
#define SDL_RaiseWindow_OPTIONAL_ARGC 0
/* SDL_RaiseWindow
 *
 * Parameters:
 * - window: struct SDL_Window *
 * Return Type: void
 */
mrb_value
mrb_SDL_SDL_RaiseWindow(mrb_state* mrb, mrb_value self) {
  mrb_value window;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &window);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, window, SDLWindow_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLWindow expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_Window * native_window = (mrb_nil_p(window) ? NULL : mruby_unbox_SDL_Window(window));

  /* Invocation */
  SDL_RaiseWindow(native_window);

  return mrb_nil_value();
}
#endif

#if BIND_SDL_ReadBE16_FUNCTION
#define SDL_ReadBE16_REQUIRED_ARGC 1
#define SDL_ReadBE16_OPTIONAL_ARGC 0
/* SDL_ReadBE16
 *
 * Parameters:
 * - src: struct SDL_RWops *
 * Return Type: Uint16
 */
mrb_value
mrb_SDL_SDL_ReadBE16(mrb_state* mrb, mrb_value self) {
  mrb_value src;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &src);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, src, SDLRWops_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRWops expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_RWops * native_src = (mrb_nil_p(src) ? NULL : mruby_unbox_SDL_RWops(src));

  /* Invocation */
  Uint16 result = SDL_ReadBE16(native_src);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_Uint16(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_ReadBE32_FUNCTION
#define SDL_ReadBE32_REQUIRED_ARGC 1
#define SDL_ReadBE32_OPTIONAL_ARGC 0
/* SDL_ReadBE32
 *
 * Parameters:
 * - src: struct SDL_RWops *
 * Return Type: Uint32
 */
mrb_value
mrb_SDL_SDL_ReadBE32(mrb_state* mrb, mrb_value self) {
  mrb_value src;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &src);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, src, SDLRWops_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRWops expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_RWops * native_src = (mrb_nil_p(src) ? NULL : mruby_unbox_SDL_RWops(src));

  /* Invocation */
  Uint32 result = SDL_ReadBE32(native_src);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_Uint32(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_ReadBE64_FUNCTION
#define SDL_ReadBE64_REQUIRED_ARGC 1
#define SDL_ReadBE64_OPTIONAL_ARGC 0
/* SDL_ReadBE64
 *
 * Parameters:
 * - src: struct SDL_RWops *
 * Return Type: Uint64
 */
mrb_value
mrb_SDL_SDL_ReadBE64(mrb_state* mrb, mrb_value self) {
  mrb_value src;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &src);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, src, SDLRWops_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRWops expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_RWops * native_src = (mrb_nil_p(src) ? NULL : mruby_unbox_SDL_RWops(src));

  /* Invocation */
  Uint64 result = SDL_ReadBE64(native_src);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_Uint64(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_ReadLE16_FUNCTION
#define SDL_ReadLE16_REQUIRED_ARGC 1
#define SDL_ReadLE16_OPTIONAL_ARGC 0
/* SDL_ReadLE16
 *
 * Parameters:
 * - src: struct SDL_RWops *
 * Return Type: Uint16
 */
mrb_value
mrb_SDL_SDL_ReadLE16(mrb_state* mrb, mrb_value self) {
  mrb_value src;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &src);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, src, SDLRWops_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRWops expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_RWops * native_src = (mrb_nil_p(src) ? NULL : mruby_unbox_SDL_RWops(src));

  /* Invocation */
  Uint16 result = SDL_ReadLE16(native_src);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_Uint16(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_ReadLE32_FUNCTION
#define SDL_ReadLE32_REQUIRED_ARGC 1
#define SDL_ReadLE32_OPTIONAL_ARGC 0
/* SDL_ReadLE32
 *
 * Parameters:
 * - src: struct SDL_RWops *
 * Return Type: Uint32
 */
mrb_value
mrb_SDL_SDL_ReadLE32(mrb_state* mrb, mrb_value self) {
  mrb_value src;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &src);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, src, SDLRWops_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRWops expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_RWops * native_src = (mrb_nil_p(src) ? NULL : mruby_unbox_SDL_RWops(src));

  /* Invocation */
  Uint32 result = SDL_ReadLE32(native_src);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_Uint32(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_ReadLE64_FUNCTION
#define SDL_ReadLE64_REQUIRED_ARGC 1
#define SDL_ReadLE64_OPTIONAL_ARGC 0
/* SDL_ReadLE64
 *
 * Parameters:
 * - src: struct SDL_RWops *
 * Return Type: Uint64
 */
mrb_value
mrb_SDL_SDL_ReadLE64(mrb_state* mrb, mrb_value self) {
  mrb_value src;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &src);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, src, SDLRWops_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRWops expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_RWops * native_src = (mrb_nil_p(src) ? NULL : mruby_unbox_SDL_RWops(src));

  /* Invocation */
  Uint64 result = SDL_ReadLE64(native_src);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_Uint64(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_ReadU8_FUNCTION
#define SDL_ReadU8_REQUIRED_ARGC 1
#define SDL_ReadU8_OPTIONAL_ARGC 0
/* SDL_ReadU8
 *
 * Parameters:
 * - src: struct SDL_RWops *
 * Return Type: Uint8
 */
mrb_value
mrb_SDL_SDL_ReadU8(mrb_state* mrb, mrb_value self) {
  mrb_value src;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &src);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, src, SDLRWops_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRWops expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_RWops * native_src = (mrb_nil_p(src) ? NULL : mruby_unbox_SDL_RWops(src));

  /* Invocation */
  Uint8 result = SDL_ReadU8(native_src);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_Uint8(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_realloc_FUNCTION
#define SDL_realloc_REQUIRED_ARGC 2
#define SDL_realloc_OPTIONAL_ARGC 0
/* SDL_realloc
 *
 * Parameters:
 * - mem: void *
 * - size: unsigned long
 * Return Type: void *
 */
mrb_value
mrb_SDL_SDL_realloc(mrb_state* mrb, mrb_value self) {
  mrb_value mem;
  mrb_value size;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &mem, &size);


  /* Type checking */
  TODO_type_check_void_PTR(mem);
  if (!mrb_obj_is_kind_of(mrb, size, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  void * native_mem = TODO_mruby_unbox_void_PTR(mem);

  unsigned long native_size = mrb_fixnum(size);

  /* Invocation */
  void * result = SDL_realloc(native_mem, native_size);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_void_PTR(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_RecordGesture_FUNCTION
#define SDL_RecordGesture_REQUIRED_ARGC 1
#define SDL_RecordGesture_OPTIONAL_ARGC 0
/* SDL_RecordGesture
 *
 * Parameters:
 * - touchId: long long
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_RecordGesture(mrb_state* mrb, mrb_value self) {
  mrb_value touchId;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &touchId);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, touchId, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  long long native_touchId = mrb_fixnum(touchId);

  /* Invocation */
  int result = SDL_RecordGesture(native_touchId);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_RectEmpty_FUNCTION
#define SDL_RectEmpty_REQUIRED_ARGC 1
#define SDL_RectEmpty_OPTIONAL_ARGC 0
/* SDL_RectEmpty
 *
 * Parameters:
 * - r: const struct SDL_Rect *
 * Return Type: SDL_bool
 */
mrb_value
mrb_SDL_SDL_RectEmpty(mrb_state* mrb, mrb_value self) {
  mrb_value r;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &r);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, r, SDLRect_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRect expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  const struct SDL_Rect * native_r = (mrb_nil_p(r) ? NULL : mruby_unbox_SDL_Rect(r));

  /* Invocation */
  SDL_bool result = SDL_RectEmpty(native_r);

  /* Box the return value */
  mrb_value return_value = mrb_bool_value((mrb_bool)result);

  return return_value;
}
#endif

#if BIND_SDL_RectEquals_FUNCTION
#define SDL_RectEquals_REQUIRED_ARGC 2
#define SDL_RectEquals_OPTIONAL_ARGC 0
/* SDL_RectEquals
 *
 * Parameters:
 * - a: const struct SDL_Rect *
 * - b: const struct SDL_Rect *
 * Return Type: SDL_bool
 */
mrb_value
mrb_SDL_SDL_RectEquals(mrb_state* mrb, mrb_value self) {
  mrb_value a;
  mrb_value b;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &a, &b);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, a, SDLRect_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRect expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, b, SDLRect_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRect expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  const struct SDL_Rect * native_a = (mrb_nil_p(a) ? NULL : mruby_unbox_SDL_Rect(a));

  const struct SDL_Rect * native_b = (mrb_nil_p(b) ? NULL : mruby_unbox_SDL_Rect(b));

  /* Invocation */
  SDL_bool result = SDL_RectEquals(native_a, native_b);

  /* Box the return value */
  mrb_value return_value = mrb_bool_value((mrb_bool)result);

  return return_value;
}
#endif

#if BIND_SDL_RegisterEvents_FUNCTION
#define SDL_RegisterEvents_REQUIRED_ARGC 1
#define SDL_RegisterEvents_OPTIONAL_ARGC 0
/* SDL_RegisterEvents
 *
 * Parameters:
 * - numevents: int
 * Return Type: Uint32
 */
mrb_value
mrb_SDL_SDL_RegisterEvents(mrb_state* mrb, mrb_value self) {
  mrb_value numevents;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &numevents);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, numevents, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_numevents = mrb_fixnum(numevents);

  /* Invocation */
  Uint32 result = SDL_RegisterEvents(native_numevents);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_Uint32(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_RemoveTimer_FUNCTION
#define SDL_RemoveTimer_REQUIRED_ARGC 1
#define SDL_RemoveTimer_OPTIONAL_ARGC 0
/* SDL_RemoveTimer
 *
 * Parameters:
 * - id: int
 * Return Type: SDL_bool
 */
mrb_value
mrb_SDL_SDL_RemoveTimer(mrb_state* mrb, mrb_value self) {
  mrb_value id;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &id);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, id, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_id = mrb_fixnum(id);

  /* Invocation */
  SDL_bool result = SDL_RemoveTimer(native_id);

  /* Box the return value */
  mrb_value return_value = mrb_bool_value((mrb_bool)result);

  return return_value;
}
#endif

#if BIND_SDL_RenderClear_FUNCTION
#define SDL_RenderClear_REQUIRED_ARGC 1
#define SDL_RenderClear_OPTIONAL_ARGC 0
/* SDL_RenderClear
 *
 * Parameters:
 * - renderer: struct SDL_Renderer *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_RenderClear(mrb_state* mrb, mrb_value self) {
  mrb_value renderer;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &renderer);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, renderer, SDLRenderer_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRenderer expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_Renderer * native_renderer = (mrb_nil_p(renderer) ? NULL : mruby_unbox_SDL_Renderer(renderer));

  /* Invocation */
  int result = SDL_RenderClear(native_renderer);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_RenderCopy_FUNCTION
#define SDL_RenderCopy_REQUIRED_ARGC 4
#define SDL_RenderCopy_OPTIONAL_ARGC 0
/* SDL_RenderCopy
 *
 * Parameters:
 * - renderer: struct SDL_Renderer *
 * - texture: struct SDL_Texture *
 * - srcrect: const struct SDL_Rect *
 * - dstrect: const struct SDL_Rect *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_RenderCopy(mrb_state* mrb, mrb_value self) {
  mrb_value renderer;
  mrb_value texture;
  mrb_value srcrect;
  mrb_value dstrect;

  /* Fetch the args */
  mrb_get_args(mrb, "oooo", &renderer, &texture, &srcrect, &dstrect);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, renderer, SDLRenderer_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRenderer expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, texture, SDLTexture_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLTexture expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, srcrect, SDLRect_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRect expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, dstrect, SDLRect_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRect expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_Renderer * native_renderer = (mrb_nil_p(renderer) ? NULL : mruby_unbox_SDL_Renderer(renderer));

  struct SDL_Texture * native_texture = (mrb_nil_p(texture) ? NULL : mruby_unbox_SDL_Texture(texture));

  const struct SDL_Rect * native_srcrect = (mrb_nil_p(srcrect) ? NULL : mruby_unbox_SDL_Rect(srcrect));

  const struct SDL_Rect * native_dstrect = (mrb_nil_p(dstrect) ? NULL : mruby_unbox_SDL_Rect(dstrect));

  /* Invocation */
  int result = SDL_RenderCopy(native_renderer, native_texture, native_srcrect, native_dstrect);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_RenderCopyEx_FUNCTION
#define SDL_RenderCopyEx_REQUIRED_ARGC 7
#define SDL_RenderCopyEx_OPTIONAL_ARGC 0
/* SDL_RenderCopyEx
 *
 * Parameters:
 * - renderer: struct SDL_Renderer *
 * - texture: struct SDL_Texture *
 * - srcrect: const struct SDL_Rect *
 * - dstrect: const struct SDL_Rect *
 * - angle: const double
 * - center: const struct SDL_Point *
 * - flip: const SDL_RendererFlip
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_RenderCopyEx(mrb_state* mrb, mrb_value self) {
  mrb_value renderer;
  mrb_value texture;
  mrb_value srcrect;
  mrb_value dstrect;
  mrb_value angle;
  mrb_value center;
  mrb_value flip;

  /* Fetch the args */
  mrb_get_args(mrb, "ooooooo", &renderer, &texture, &srcrect, &dstrect, &angle, &center, &flip);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, renderer, SDLRenderer_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRenderer expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, texture, SDLTexture_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLTexture expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, srcrect, SDLRect_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRect expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, dstrect, SDLRect_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRect expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, angle, mrb->float_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Float expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, center, SDLPoint_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLPoint expected");
    return mrb_nil_value();
  }
  TODO_type_check_SDL_RendererFlip(flip);


  /* Unbox parameters */
  struct SDL_Renderer * native_renderer = (mrb_nil_p(renderer) ? NULL : mruby_unbox_SDL_Renderer(renderer));

  struct SDL_Texture * native_texture = (mrb_nil_p(texture) ? NULL : mruby_unbox_SDL_Texture(texture));

  const struct SDL_Rect * native_srcrect = (mrb_nil_p(srcrect) ? NULL : mruby_unbox_SDL_Rect(srcrect));

  const struct SDL_Rect * native_dstrect = (mrb_nil_p(dstrect) ? NULL : mruby_unbox_SDL_Rect(dstrect));

  const double native_angle = mrb_float(angle);

  const struct SDL_Point * native_center = (mrb_nil_p(center) ? NULL : mruby_unbox_SDL_Point(center));

  const SDL_RendererFlip native_flip = TODO_mruby_unbox_SDL_RendererFlip(flip);

  /* Invocation */
  int result = SDL_RenderCopyEx(native_renderer, native_texture, native_srcrect, native_dstrect, native_angle, native_center, native_flip);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_RenderDrawLine_FUNCTION
#define SDL_RenderDrawLine_REQUIRED_ARGC 5
#define SDL_RenderDrawLine_OPTIONAL_ARGC 0
/* SDL_RenderDrawLine
 *
 * Parameters:
 * - renderer: struct SDL_Renderer *
 * - x1: int
 * - y1: int
 * - x2: int
 * - y2: int
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_RenderDrawLine(mrb_state* mrb, mrb_value self) {
  mrb_value renderer;
  mrb_value x1;
  mrb_value y1;
  mrb_value x2;
  mrb_value y2;

  /* Fetch the args */
  mrb_get_args(mrb, "ooooo", &renderer, &x1, &y1, &x2, &y2);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, renderer, SDLRenderer_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRenderer expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, x1, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, y1, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, x2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, y2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_Renderer * native_renderer = (mrb_nil_p(renderer) ? NULL : mruby_unbox_SDL_Renderer(renderer));

  int native_x1 = mrb_fixnum(x1);

  int native_y1 = mrb_fixnum(y1);

  int native_x2 = mrb_fixnum(x2);

  int native_y2 = mrb_fixnum(y2);

  /* Invocation */
  int result = SDL_RenderDrawLine(native_renderer, native_x1, native_y1, native_x2, native_y2);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_RenderDrawLines_FUNCTION
#define SDL_RenderDrawLines_REQUIRED_ARGC 3
#define SDL_RenderDrawLines_OPTIONAL_ARGC 0
/* SDL_RenderDrawLines
 *
 * Parameters:
 * - renderer: struct SDL_Renderer *
 * - points: const struct SDL_Point *
 * - count: int
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_RenderDrawLines(mrb_state* mrb, mrb_value self) {
  mrb_value renderer;
  mrb_value points;
  mrb_value count;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &renderer, &points, &count);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, renderer, SDLRenderer_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRenderer expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, points, SDLPoint_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLPoint expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, count, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_Renderer * native_renderer = (mrb_nil_p(renderer) ? NULL : mruby_unbox_SDL_Renderer(renderer));

  const struct SDL_Point * native_points = (mrb_nil_p(points) ? NULL : mruby_unbox_SDL_Point(points));

  int native_count = mrb_fixnum(count);

  /* Invocation */
  int result = SDL_RenderDrawLines(native_renderer, native_points, native_count);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_RenderDrawPoint_FUNCTION
#define SDL_RenderDrawPoint_REQUIRED_ARGC 3
#define SDL_RenderDrawPoint_OPTIONAL_ARGC 0
/* SDL_RenderDrawPoint
 *
 * Parameters:
 * - renderer: struct SDL_Renderer *
 * - x: int
 * - y: int
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_RenderDrawPoint(mrb_state* mrb, mrb_value self) {
  mrb_value renderer;
  mrb_value x;
  mrb_value y;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &renderer, &x, &y);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, renderer, SDLRenderer_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRenderer expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, x, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, y, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_Renderer * native_renderer = (mrb_nil_p(renderer) ? NULL : mruby_unbox_SDL_Renderer(renderer));

  int native_x = mrb_fixnum(x);

  int native_y = mrb_fixnum(y);

  /* Invocation */
  int result = SDL_RenderDrawPoint(native_renderer, native_x, native_y);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_RenderDrawPoints_FUNCTION
#define SDL_RenderDrawPoints_REQUIRED_ARGC 3
#define SDL_RenderDrawPoints_OPTIONAL_ARGC 0
/* SDL_RenderDrawPoints
 *
 * Parameters:
 * - renderer: struct SDL_Renderer *
 * - points: const struct SDL_Point *
 * - count: int
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_RenderDrawPoints(mrb_state* mrb, mrb_value self) {
  mrb_value renderer;
  mrb_value points;
  mrb_value count;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &renderer, &points, &count);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, renderer, SDLRenderer_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRenderer expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, points, SDLPoint_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLPoint expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, count, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_Renderer * native_renderer = (mrb_nil_p(renderer) ? NULL : mruby_unbox_SDL_Renderer(renderer));

  const struct SDL_Point * native_points = (mrb_nil_p(points) ? NULL : mruby_unbox_SDL_Point(points));

  int native_count = mrb_fixnum(count);

  /* Invocation */
  int result = SDL_RenderDrawPoints(native_renderer, native_points, native_count);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_RenderDrawRect_FUNCTION
#define SDL_RenderDrawRect_REQUIRED_ARGC 2
#define SDL_RenderDrawRect_OPTIONAL_ARGC 0
/* SDL_RenderDrawRect
 *
 * Parameters:
 * - renderer: struct SDL_Renderer *
 * - rect: const struct SDL_Rect *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_RenderDrawRect(mrb_state* mrb, mrb_value self) {
  mrb_value renderer;
  mrb_value rect;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &renderer, &rect);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, renderer, SDLRenderer_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRenderer expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, rect, SDLRect_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRect expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_Renderer * native_renderer = (mrb_nil_p(renderer) ? NULL : mruby_unbox_SDL_Renderer(renderer));

  const struct SDL_Rect * native_rect = (mrb_nil_p(rect) ? NULL : mruby_unbox_SDL_Rect(rect));

  /* Invocation */
  int result = SDL_RenderDrawRect(native_renderer, native_rect);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_RenderDrawRects_FUNCTION
#define SDL_RenderDrawRects_REQUIRED_ARGC 3
#define SDL_RenderDrawRects_OPTIONAL_ARGC 0
/* SDL_RenderDrawRects
 *
 * Parameters:
 * - renderer: struct SDL_Renderer *
 * - rects: const struct SDL_Rect *
 * - count: int
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_RenderDrawRects(mrb_state* mrb, mrb_value self) {
  mrb_value renderer;
  mrb_value rects;
  mrb_value count;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &renderer, &rects, &count);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, renderer, SDLRenderer_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRenderer expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, rects, SDLRect_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRect expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, count, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_Renderer * native_renderer = (mrb_nil_p(renderer) ? NULL : mruby_unbox_SDL_Renderer(renderer));

  const struct SDL_Rect * native_rects = (mrb_nil_p(rects) ? NULL : mruby_unbox_SDL_Rect(rects));

  int native_count = mrb_fixnum(count);

  /* Invocation */
  int result = SDL_RenderDrawRects(native_renderer, native_rects, native_count);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_RenderFillRect_FUNCTION
#define SDL_RenderFillRect_REQUIRED_ARGC 2
#define SDL_RenderFillRect_OPTIONAL_ARGC 0
/* SDL_RenderFillRect
 *
 * Parameters:
 * - renderer: struct SDL_Renderer *
 * - rect: const struct SDL_Rect *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_RenderFillRect(mrb_state* mrb, mrb_value self) {
  mrb_value renderer;
  mrb_value rect;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &renderer, &rect);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, renderer, SDLRenderer_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRenderer expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, rect, SDLRect_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRect expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_Renderer * native_renderer = (mrb_nil_p(renderer) ? NULL : mruby_unbox_SDL_Renderer(renderer));

  const struct SDL_Rect * native_rect = (mrb_nil_p(rect) ? NULL : mruby_unbox_SDL_Rect(rect));

  /* Invocation */
  int result = SDL_RenderFillRect(native_renderer, native_rect);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_RenderFillRects_FUNCTION
#define SDL_RenderFillRects_REQUIRED_ARGC 3
#define SDL_RenderFillRects_OPTIONAL_ARGC 0
/* SDL_RenderFillRects
 *
 * Parameters:
 * - renderer: struct SDL_Renderer *
 * - rects: const struct SDL_Rect *
 * - count: int
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_RenderFillRects(mrb_state* mrb, mrb_value self) {
  mrb_value renderer;
  mrb_value rects;
  mrb_value count;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &renderer, &rects, &count);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, renderer, SDLRenderer_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRenderer expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, rects, SDLRect_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRect expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, count, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_Renderer * native_renderer = (mrb_nil_p(renderer) ? NULL : mruby_unbox_SDL_Renderer(renderer));

  const struct SDL_Rect * native_rects = (mrb_nil_p(rects) ? NULL : mruby_unbox_SDL_Rect(rects));

  int native_count = mrb_fixnum(count);

  /* Invocation */
  int result = SDL_RenderFillRects(native_renderer, native_rects, native_count);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_RenderGetClipRect_FUNCTION
#define SDL_RenderGetClipRect_REQUIRED_ARGC 2
#define SDL_RenderGetClipRect_OPTIONAL_ARGC 0
/* SDL_RenderGetClipRect
 *
 * Parameters:
 * - renderer: struct SDL_Renderer *
 * - rect: struct SDL_Rect *
 * Return Type: void
 */
mrb_value
mrb_SDL_SDL_RenderGetClipRect(mrb_state* mrb, mrb_value self) {
  mrb_value renderer;
  mrb_value rect;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &renderer, &rect);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, renderer, SDLRenderer_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRenderer expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, rect, SDLRect_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRect expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_Renderer * native_renderer = (mrb_nil_p(renderer) ? NULL : mruby_unbox_SDL_Renderer(renderer));

  struct SDL_Rect * native_rect = (mrb_nil_p(rect) ? NULL : mruby_unbox_SDL_Rect(rect));

  /* Invocation */
  SDL_RenderGetClipRect(native_renderer, native_rect);

  return mrb_nil_value();
}
#endif

#if BIND_SDL_RenderGetLogicalSize_FUNCTION
#define SDL_RenderGetLogicalSize_REQUIRED_ARGC 3
#define SDL_RenderGetLogicalSize_OPTIONAL_ARGC 0
/* SDL_RenderGetLogicalSize
 *
 * Parameters:
 * - renderer: struct SDL_Renderer *
 * - w: int *
 * - h: int *
 * Return Type: void
 */
mrb_value
mrb_SDL_SDL_RenderGetLogicalSize(mrb_state* mrb, mrb_value self) {
  mrb_value renderer;
  mrb_value w;
  mrb_value h;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &renderer, &w, &h);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, renderer, SDLRenderer_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRenderer expected");
    return mrb_nil_value();
  }
  TODO_type_check_int_PTR(w);
  TODO_type_check_int_PTR(h);


  /* Unbox parameters */
  struct SDL_Renderer * native_renderer = (mrb_nil_p(renderer) ? NULL : mruby_unbox_SDL_Renderer(renderer));

  int * native_w = TODO_mruby_unbox_int_PTR(w);

  int * native_h = TODO_mruby_unbox_int_PTR(h);

  /* Invocation */
  SDL_RenderGetLogicalSize(native_renderer, native_w, native_h);

  return mrb_nil_value();
}
#endif

#if BIND_SDL_RenderGetScale_FUNCTION
#define SDL_RenderGetScale_REQUIRED_ARGC 3
#define SDL_RenderGetScale_OPTIONAL_ARGC 0
/* SDL_RenderGetScale
 *
 * Parameters:
 * - renderer: struct SDL_Renderer *
 * - scaleX: float *
 * - scaleY: float *
 * Return Type: void
 */
mrb_value
mrb_SDL_SDL_RenderGetScale(mrb_state* mrb, mrb_value self) {
  mrb_value renderer;
  mrb_value scaleX;
  mrb_value scaleY;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &renderer, &scaleX, &scaleY);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, renderer, SDLRenderer_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRenderer expected");
    return mrb_nil_value();
  }
  TODO_type_check_float_PTR(scaleX);
  TODO_type_check_float_PTR(scaleY);


  /* Unbox parameters */
  struct SDL_Renderer * native_renderer = (mrb_nil_p(renderer) ? NULL : mruby_unbox_SDL_Renderer(renderer));

  float * native_scaleX = TODO_mruby_unbox_float_PTR(scaleX);

  float * native_scaleY = TODO_mruby_unbox_float_PTR(scaleY);

  /* Invocation */
  SDL_RenderGetScale(native_renderer, native_scaleX, native_scaleY);

  return mrb_nil_value();
}
#endif

#if BIND_SDL_RenderGetViewport_FUNCTION
#define SDL_RenderGetViewport_REQUIRED_ARGC 2
#define SDL_RenderGetViewport_OPTIONAL_ARGC 0
/* SDL_RenderGetViewport
 *
 * Parameters:
 * - renderer: struct SDL_Renderer *
 * - rect: struct SDL_Rect *
 * Return Type: void
 */
mrb_value
mrb_SDL_SDL_RenderGetViewport(mrb_state* mrb, mrb_value self) {
  mrb_value renderer;
  mrb_value rect;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &renderer, &rect);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, renderer, SDLRenderer_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRenderer expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, rect, SDLRect_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRect expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_Renderer * native_renderer = (mrb_nil_p(renderer) ? NULL : mruby_unbox_SDL_Renderer(renderer));

  struct SDL_Rect * native_rect = (mrb_nil_p(rect) ? NULL : mruby_unbox_SDL_Rect(rect));

  /* Invocation */
  SDL_RenderGetViewport(native_renderer, native_rect);

  return mrb_nil_value();
}
#endif

#if BIND_SDL_RenderPresent_FUNCTION
#define SDL_RenderPresent_REQUIRED_ARGC 1
#define SDL_RenderPresent_OPTIONAL_ARGC 0
/* SDL_RenderPresent
 *
 * Parameters:
 * - renderer: struct SDL_Renderer *
 * Return Type: void
 */
mrb_value
mrb_SDL_SDL_RenderPresent(mrb_state* mrb, mrb_value self) {
  mrb_value renderer;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &renderer);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, renderer, SDLRenderer_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRenderer expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_Renderer * native_renderer = (mrb_nil_p(renderer) ? NULL : mruby_unbox_SDL_Renderer(renderer));

  /* Invocation */
  SDL_RenderPresent(native_renderer);

  return mrb_nil_value();
}
#endif

#if BIND_SDL_RenderReadPixels_FUNCTION
#define SDL_RenderReadPixels_REQUIRED_ARGC 5
#define SDL_RenderReadPixels_OPTIONAL_ARGC 0
/* SDL_RenderReadPixels
 *
 * Parameters:
 * - renderer: struct SDL_Renderer *
 * - rect: const struct SDL_Rect *
 * - format: unsigned int
 * - pixels: void *
 * - pitch: int
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_RenderReadPixels(mrb_state* mrb, mrb_value self) {
  mrb_value renderer;
  mrb_value rect;
  mrb_value format;
  mrb_value pixels;
  mrb_value pitch;

  /* Fetch the args */
  mrb_get_args(mrb, "ooooo", &renderer, &rect, &format, &pixels, &pitch);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, renderer, SDLRenderer_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRenderer expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, rect, SDLRect_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRect expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, format, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR(pixels);
  if (!mrb_obj_is_kind_of(mrb, pitch, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_Renderer * native_renderer = (mrb_nil_p(renderer) ? NULL : mruby_unbox_SDL_Renderer(renderer));

  const struct SDL_Rect * native_rect = (mrb_nil_p(rect) ? NULL : mruby_unbox_SDL_Rect(rect));

  unsigned int native_format = mrb_fixnum(format);

  void * native_pixels = TODO_mruby_unbox_void_PTR(pixels);

  int native_pitch = mrb_fixnum(pitch);

  /* Invocation */
  int result = SDL_RenderReadPixels(native_renderer, native_rect, native_format, native_pixels, native_pitch);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_RenderSetClipRect_FUNCTION
#define SDL_RenderSetClipRect_REQUIRED_ARGC 2
#define SDL_RenderSetClipRect_OPTIONAL_ARGC 0
/* SDL_RenderSetClipRect
 *
 * Parameters:
 * - renderer: struct SDL_Renderer *
 * - rect: const struct SDL_Rect *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_RenderSetClipRect(mrb_state* mrb, mrb_value self) {
  mrb_value renderer;
  mrb_value rect;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &renderer, &rect);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, renderer, SDLRenderer_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRenderer expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, rect, SDLRect_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRect expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_Renderer * native_renderer = (mrb_nil_p(renderer) ? NULL : mruby_unbox_SDL_Renderer(renderer));

  const struct SDL_Rect * native_rect = (mrb_nil_p(rect) ? NULL : mruby_unbox_SDL_Rect(rect));

  /* Invocation */
  int result = SDL_RenderSetClipRect(native_renderer, native_rect);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_RenderSetLogicalSize_FUNCTION
#define SDL_RenderSetLogicalSize_REQUIRED_ARGC 3
#define SDL_RenderSetLogicalSize_OPTIONAL_ARGC 0
/* SDL_RenderSetLogicalSize
 *
 * Parameters:
 * - renderer: struct SDL_Renderer *
 * - w: int
 * - h: int
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_RenderSetLogicalSize(mrb_state* mrb, mrb_value self) {
  mrb_value renderer;
  mrb_value w;
  mrb_value h;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &renderer, &w, &h);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, renderer, SDLRenderer_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRenderer expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, w, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, h, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_Renderer * native_renderer = (mrb_nil_p(renderer) ? NULL : mruby_unbox_SDL_Renderer(renderer));

  int native_w = mrb_fixnum(w);

  int native_h = mrb_fixnum(h);

  /* Invocation */
  int result = SDL_RenderSetLogicalSize(native_renderer, native_w, native_h);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_RenderSetScale_FUNCTION
#define SDL_RenderSetScale_REQUIRED_ARGC 3
#define SDL_RenderSetScale_OPTIONAL_ARGC 0
/* SDL_RenderSetScale
 *
 * Parameters:
 * - renderer: struct SDL_Renderer *
 * - scaleX: float
 * - scaleY: float
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_RenderSetScale(mrb_state* mrb, mrb_value self) {
  mrb_value renderer;
  mrb_value scaleX;
  mrb_value scaleY;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &renderer, &scaleX, &scaleY);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, renderer, SDLRenderer_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRenderer expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, scaleX, mrb->float_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Float expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, scaleY, mrb->float_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Float expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_Renderer * native_renderer = (mrb_nil_p(renderer) ? NULL : mruby_unbox_SDL_Renderer(renderer));

  float native_scaleX = mrb_float(scaleX);

  float native_scaleY = mrb_float(scaleY);

  /* Invocation */
  int result = SDL_RenderSetScale(native_renderer, native_scaleX, native_scaleY);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_RenderSetViewport_FUNCTION
#define SDL_RenderSetViewport_REQUIRED_ARGC 2
#define SDL_RenderSetViewport_OPTIONAL_ARGC 0
/* SDL_RenderSetViewport
 *
 * Parameters:
 * - renderer: struct SDL_Renderer *
 * - rect: const struct SDL_Rect *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_RenderSetViewport(mrb_state* mrb, mrb_value self) {
  mrb_value renderer;
  mrb_value rect;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &renderer, &rect);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, renderer, SDLRenderer_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRenderer expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, rect, SDLRect_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRect expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_Renderer * native_renderer = (mrb_nil_p(renderer) ? NULL : mruby_unbox_SDL_Renderer(renderer));

  const struct SDL_Rect * native_rect = (mrb_nil_p(rect) ? NULL : mruby_unbox_SDL_Rect(rect));

  /* Invocation */
  int result = SDL_RenderSetViewport(native_renderer, native_rect);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_RenderTargetSupported_FUNCTION
#define SDL_RenderTargetSupported_REQUIRED_ARGC 1
#define SDL_RenderTargetSupported_OPTIONAL_ARGC 0
/* SDL_RenderTargetSupported
 *
 * Parameters:
 * - renderer: struct SDL_Renderer *
 * Return Type: SDL_bool
 */
mrb_value
mrb_SDL_SDL_RenderTargetSupported(mrb_state* mrb, mrb_value self) {
  mrb_value renderer;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &renderer);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, renderer, SDLRenderer_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRenderer expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_Renderer * native_renderer = (mrb_nil_p(renderer) ? NULL : mruby_unbox_SDL_Renderer(renderer));

  /* Invocation */
  SDL_bool result = SDL_RenderTargetSupported(native_renderer);

  /* Box the return value */
  mrb_value return_value = mrb_bool_value((mrb_bool)result);

  return return_value;
}
#endif

#if BIND_SDL_ReportAssertion_FUNCTION
#define SDL_ReportAssertion_REQUIRED_ARGC 4
#define SDL_ReportAssertion_OPTIONAL_ARGC 0
/* SDL_ReportAssertion
 *
 * Parameters:
 * - arg1: struct SDL_assert_data *
 * - arg2: const char *
 * - arg3: const char *
 * - arg4: int
 * Return Type: SDL_assert_state
 */
mrb_value
mrb_SDL_SDL_ReportAssertion(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;
  mrb_value arg4;

  /* Fetch the args */
  mrb_get_args(mrb, "oooo", &arg1, &arg2, &arg3, &arg4);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, SDLAssertData_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLAssertData expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg3, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg4, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_assert_data * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_SDL_assert_data(arg1));

  const char * native_arg2 = mrb_string_value_cstr(mrb, &arg2);

  const char * native_arg3 = mrb_string_value_cstr(mrb, &arg3);

  int native_arg4 = mrb_fixnum(arg4);

  /* Invocation */
  SDL_assert_state result = SDL_ReportAssertion(native_arg1, native_arg2, native_arg3, native_arg4);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_SDL_assert_state(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_ResetAssertionReport_FUNCTION
#define SDL_ResetAssertionReport_REQUIRED_ARGC 0
#define SDL_ResetAssertionReport_OPTIONAL_ARGC 0
/* SDL_ResetAssertionReport
 *
 * Parameters: None
 * Return Type: void
 */
mrb_value
mrb_SDL_SDL_ResetAssertionReport(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  SDL_ResetAssertionReport();

  return mrb_nil_value();
}
#endif

#if BIND_SDL_RestoreWindow_FUNCTION
#define SDL_RestoreWindow_REQUIRED_ARGC 1
#define SDL_RestoreWindow_OPTIONAL_ARGC 0
/* SDL_RestoreWindow
 *
 * Parameters:
 * - window: struct SDL_Window *
 * Return Type: void
 */
mrb_value
mrb_SDL_SDL_RestoreWindow(mrb_state* mrb, mrb_value self) {
  mrb_value window;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &window);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, window, SDLWindow_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLWindow expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_Window * native_window = (mrb_nil_p(window) ? NULL : mruby_unbox_SDL_Window(window));

  /* Invocation */
  SDL_RestoreWindow(native_window);

  return mrb_nil_value();
}
#endif

#if BIND_SDL_RWFromConstMem_FUNCTION
#define SDL_RWFromConstMem_REQUIRED_ARGC 2
#define SDL_RWFromConstMem_OPTIONAL_ARGC 0
/* SDL_RWFromConstMem
 *
 * Parameters:
 * - mem: const void *
 * - size: int
 * Return Type: SDL_RWops *
 */
mrb_value
mrb_SDL_SDL_RWFromConstMem(mrb_state* mrb, mrb_value self) {
  mrb_value mem;
  mrb_value size;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &mem, &size);


  /* Type checking */
  TODO_type_check_void_PTR(mem);
  if (!mrb_obj_is_kind_of(mrb, size, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  const void * native_mem = TODO_mruby_unbox_void_PTR(mem);

  int native_size = mrb_fixnum(size);

  /* Invocation */
  SDL_RWops * result = SDL_RWFromConstMem(native_mem, native_size);

  /* Box the return value */
  mrb_value return_value = (result == NULL ? mrb_nil_value() : mruby_box_SDL_RWops(mrb, result));

  return return_value;
}
#endif

#if BIND_SDL_RWFromFile_FUNCTION
#define SDL_RWFromFile_REQUIRED_ARGC 2
#define SDL_RWFromFile_OPTIONAL_ARGC 0
/* SDL_RWFromFile
 *
 * Parameters:
 * - file: const char *
 * - mode: const char *
 * Return Type: SDL_RWops *
 */
mrb_value
mrb_SDL_SDL_RWFromFile(mrb_state* mrb, mrb_value self) {
  mrb_value file;
  mrb_value mode;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &file, &mode);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, file, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, mode, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  const char * native_file = mrb_string_value_cstr(mrb, &file);

  const char * native_mode = mrb_string_value_cstr(mrb, &mode);

  /* Invocation */
  SDL_RWops * result = SDL_RWFromFile(native_file, native_mode);

  /* Box the return value */
  mrb_value return_value = (result == NULL ? mrb_nil_value() : mruby_box_SDL_RWops(mrb, result));

  return return_value;
}
#endif

#if BIND_SDL_RWFromFP_FUNCTION
#define SDL_RWFromFP_REQUIRED_ARGC 2
#define SDL_RWFromFP_OPTIONAL_ARGC 0
/* SDL_RWFromFP
 *
 * Parameters:
 * - fp: struct __sFILE *
 * - autoclose: SDL_bool
 * Return Type: SDL_RWops *
 */
mrb_value
mrb_SDL_SDL_RWFromFP(mrb_state* mrb, mrb_value self) {
  mrb_value fp;
  mrb_value autoclose;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &fp, &autoclose);


  /* Type checking */
  TODO_type_check___sFILE_PTR(fp);
  TODO_type_check_SDL_bool(autoclose);


  /* Unbox parameters */
  struct __sFILE * native_fp = TODO_mruby_unbox___sFILE_PTR(fp);

  SDL_bool native_autoclose = TODO_mruby_unbox_SDL_bool(autoclose);

  /* Invocation */
  SDL_RWops * result = SDL_RWFromFP(native_fp, native_autoclose);

  /* Box the return value */
  mrb_value return_value = (result == NULL ? mrb_nil_value() : mruby_box_SDL_RWops(mrb, result));

  return return_value;
}
#endif

#if BIND_SDL_RWFromMem_FUNCTION
#define SDL_RWFromMem_REQUIRED_ARGC 2
#define SDL_RWFromMem_OPTIONAL_ARGC 0
/* SDL_RWFromMem
 *
 * Parameters:
 * - mem: void *
 * - size: int
 * Return Type: SDL_RWops *
 */
mrb_value
mrb_SDL_SDL_RWFromMem(mrb_state* mrb, mrb_value self) {
  mrb_value mem;
  mrb_value size;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &mem, &size);


  /* Type checking */
  TODO_type_check_void_PTR(mem);
  if (!mrb_obj_is_kind_of(mrb, size, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  void * native_mem = TODO_mruby_unbox_void_PTR(mem);

  int native_size = mrb_fixnum(size);

  /* Invocation */
  SDL_RWops * result = SDL_RWFromMem(native_mem, native_size);

  /* Box the return value */
  mrb_value return_value = (result == NULL ? mrb_nil_value() : mruby_box_SDL_RWops(mrb, result));

  return return_value;
}
#endif

#if BIND_SDL_SaveAllDollarTemplates_FUNCTION
#define SDL_SaveAllDollarTemplates_REQUIRED_ARGC 1
#define SDL_SaveAllDollarTemplates_OPTIONAL_ARGC 0
/* SDL_SaveAllDollarTemplates
 *
 * Parameters:
 * - dst: struct SDL_RWops *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_SaveAllDollarTemplates(mrb_state* mrb, mrb_value self) {
  mrb_value dst;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &dst);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, dst, SDLRWops_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRWops expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_RWops * native_dst = (mrb_nil_p(dst) ? NULL : mruby_unbox_SDL_RWops(dst));

  /* Invocation */
  int result = SDL_SaveAllDollarTemplates(native_dst);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_SaveBMP_RW_FUNCTION
#define SDL_SaveBMP_RW_REQUIRED_ARGC 3
#define SDL_SaveBMP_RW_OPTIONAL_ARGC 0
/* SDL_SaveBMP_RW
 *
 * Parameters:
 * - surface: struct SDL_Surface *
 * - dst: struct SDL_RWops *
 * - freedst: int
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_SaveBMP_RW(mrb_state* mrb, mrb_value self) {
  mrb_value surface;
  mrb_value dst;
  mrb_value freedst;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &surface, &dst, &freedst);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, surface, SDLSurface_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLSurface expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, dst, SDLRWops_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRWops expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, freedst, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_Surface * native_surface = (mrb_nil_p(surface) ? NULL : mruby_unbox_SDL_Surface(surface));

  struct SDL_RWops * native_dst = (mrb_nil_p(dst) ? NULL : mruby_unbox_SDL_RWops(dst));

  int native_freedst = mrb_fixnum(freedst);

  /* Invocation */
  int result = SDL_SaveBMP_RW(native_surface, native_dst, native_freedst);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_SaveDollarTemplate_FUNCTION
#define SDL_SaveDollarTemplate_REQUIRED_ARGC 2
#define SDL_SaveDollarTemplate_OPTIONAL_ARGC 0
/* SDL_SaveDollarTemplate
 *
 * Parameters:
 * - gestureId: long long
 * - dst: struct SDL_RWops *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_SaveDollarTemplate(mrb_state* mrb, mrb_value self) {
  mrb_value gestureId;
  mrb_value dst;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &gestureId, &dst);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, gestureId, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, dst, SDLRWops_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRWops expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  long long native_gestureId = mrb_fixnum(gestureId);

  struct SDL_RWops * native_dst = (mrb_nil_p(dst) ? NULL : mruby_unbox_SDL_RWops(dst));

  /* Invocation */
  int result = SDL_SaveDollarTemplate(native_gestureId, native_dst);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_scalbn_FUNCTION
#define SDL_scalbn_REQUIRED_ARGC 2
#define SDL_scalbn_OPTIONAL_ARGC 0
/* SDL_scalbn
 *
 * Parameters:
 * - x: double
 * - n: int
 * Return Type: double
 */
mrb_value
mrb_SDL_SDL_scalbn(mrb_state* mrb, mrb_value self) {
  mrb_value x;
  mrb_value n;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &x, &n);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, x, mrb->float_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Float expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, n, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  double native_x = mrb_float(x);

  int native_n = mrb_fixnum(n);

  /* Invocation */
  double result = SDL_scalbn(native_x, native_n);

  /* Box the return value */
  mrb_value return_value = mrb_float_value(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_SemPost_FUNCTION
#define SDL_SemPost_REQUIRED_ARGC 1
#define SDL_SemPost_OPTIONAL_ARGC 0
/* SDL_SemPost
 *
 * Parameters:
 * - sem: struct SDL_semaphore *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_SemPost(mrb_state* mrb, mrb_value self) {
  mrb_value sem;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &sem);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, sem, SDLSemaphore_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLSemaphore expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_semaphore * native_sem = (mrb_nil_p(sem) ? NULL : mruby_unbox_SDL_semaphore(sem));

  /* Invocation */
  int result = SDL_SemPost(native_sem);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_SemTryWait_FUNCTION
#define SDL_SemTryWait_REQUIRED_ARGC 1
#define SDL_SemTryWait_OPTIONAL_ARGC 0
/* SDL_SemTryWait
 *
 * Parameters:
 * - sem: struct SDL_semaphore *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_SemTryWait(mrb_state* mrb, mrb_value self) {
  mrb_value sem;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &sem);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, sem, SDLSemaphore_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLSemaphore expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_semaphore * native_sem = (mrb_nil_p(sem) ? NULL : mruby_unbox_SDL_semaphore(sem));

  /* Invocation */
  int result = SDL_SemTryWait(native_sem);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_SemValue_FUNCTION
#define SDL_SemValue_REQUIRED_ARGC 1
#define SDL_SemValue_OPTIONAL_ARGC 0
/* SDL_SemValue
 *
 * Parameters:
 * - sem: struct SDL_semaphore *
 * Return Type: Uint32
 */
mrb_value
mrb_SDL_SDL_SemValue(mrb_state* mrb, mrb_value self) {
  mrb_value sem;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &sem);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, sem, SDLSemaphore_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLSemaphore expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_semaphore * native_sem = (mrb_nil_p(sem) ? NULL : mruby_unbox_SDL_semaphore(sem));

  /* Invocation */
  Uint32 result = SDL_SemValue(native_sem);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_Uint32(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_SemWait_FUNCTION
#define SDL_SemWait_REQUIRED_ARGC 1
#define SDL_SemWait_OPTIONAL_ARGC 0
/* SDL_SemWait
 *
 * Parameters:
 * - sem: struct SDL_semaphore *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_SemWait(mrb_state* mrb, mrb_value self) {
  mrb_value sem;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &sem);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, sem, SDLSemaphore_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLSemaphore expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_semaphore * native_sem = (mrb_nil_p(sem) ? NULL : mruby_unbox_SDL_semaphore(sem));

  /* Invocation */
  int result = SDL_SemWait(native_sem);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_SemWaitTimeout_FUNCTION
#define SDL_SemWaitTimeout_REQUIRED_ARGC 2
#define SDL_SemWaitTimeout_OPTIONAL_ARGC 0
/* SDL_SemWaitTimeout
 *
 * Parameters:
 * - sem: struct SDL_semaphore *
 * - ms: unsigned int
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_SemWaitTimeout(mrb_state* mrb, mrb_value self) {
  mrb_value sem;
  mrb_value ms;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &sem, &ms);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, sem, SDLSemaphore_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLSemaphore expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, ms, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_semaphore * native_sem = (mrb_nil_p(sem) ? NULL : mruby_unbox_SDL_semaphore(sem));

  unsigned int native_ms = mrb_fixnum(ms);

  /* Invocation */
  int result = SDL_SemWaitTimeout(native_sem, native_ms);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_SetAssertionHandler_FUNCTION
#define SDL_SetAssertionHandler_REQUIRED_ARGC 2
#define SDL_SetAssertionHandler_OPTIONAL_ARGC 0
/* SDL_SetAssertionHandler
 *
 * Parameters:
 * - handler: SDL_assert_state (*)(const struct SDL_assert_data *, void *)
 * - userdata: void *
 * Return Type: void
 */
mrb_value
mrb_SDL_SDL_SetAssertionHandler(mrb_state* mrb, mrb_value self) {
  mrb_value handler;
  mrb_value userdata;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &handler, &userdata);


  /* Type checking */
  TODO_type_check_SDL_assert_state_LPAREN_PTR_RPAREN_LPAREN_SDL_assert_data_PTR_COMMA_void_PTR_RPAREN(handler);
  TODO_type_check_void_PTR(userdata);


  /* Unbox parameters */
  SDL_assert_state (*native_handler)(const struct SDL_assert_data *, void *) = TODO_mruby_unbox_SDL_assert_state_LPAREN_PTR_RPAREN_LPAREN_SDL_assert_data_PTR_COMMA_void_PTR_RPAREN(handler);

  void * native_userdata = TODO_mruby_unbox_void_PTR(userdata);

  /* Invocation */
  SDL_SetAssertionHandler(native_handler, native_userdata);

  return mrb_nil_value();
}
#endif

#if BIND_SDL_SetClipboardText_FUNCTION
#define SDL_SetClipboardText_REQUIRED_ARGC 1
#define SDL_SetClipboardText_OPTIONAL_ARGC 0
/* SDL_SetClipboardText
 *
 * Parameters:
 * - text: const char *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_SetClipboardText(mrb_state* mrb, mrb_value self) {
  mrb_value text;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &text);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, text, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }

  /* Unbox parameters */
  const char * native_text = mrb_string_value_cstr(mrb, &text);

  /* Invocation */
  int result = SDL_SetClipboardText(native_text);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_SetClipRect_FUNCTION
#define SDL_SetClipRect_REQUIRED_ARGC 2
#define SDL_SetClipRect_OPTIONAL_ARGC 0
/* SDL_SetClipRect
 *
 * Parameters:
 * - surface: struct SDL_Surface *
 * - rect: const struct SDL_Rect *
 * Return Type: SDL_bool
 */
mrb_value
mrb_SDL_SDL_SetClipRect(mrb_state* mrb, mrb_value self) {
  mrb_value surface;
  mrb_value rect;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &surface, &rect);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, surface, SDLSurface_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLSurface expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, rect, SDLRect_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRect expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_Surface * native_surface = (mrb_nil_p(surface) ? NULL : mruby_unbox_SDL_Surface(surface));

  const struct SDL_Rect * native_rect = (mrb_nil_p(rect) ? NULL : mruby_unbox_SDL_Rect(rect));

  /* Invocation */
  SDL_bool result = SDL_SetClipRect(native_surface, native_rect);

  /* Box the return value */
  mrb_value return_value = mrb_bool_value((mrb_bool)result);

  return return_value;
}
#endif

#if BIND_SDL_SetColorKey_FUNCTION
#define SDL_SetColorKey_REQUIRED_ARGC 3
#define SDL_SetColorKey_OPTIONAL_ARGC 0
/* SDL_SetColorKey
 *
 * Parameters:
 * - surface: struct SDL_Surface *
 * - flag: int
 * - key: unsigned int
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_SetColorKey(mrb_state* mrb, mrb_value self) {
  mrb_value surface;
  mrb_value flag;
  mrb_value key;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &surface, &flag, &key);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, surface, SDLSurface_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLSurface expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, flag, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, key, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_Surface * native_surface = (mrb_nil_p(surface) ? NULL : mruby_unbox_SDL_Surface(surface));

  int native_flag = mrb_fixnum(flag);

  unsigned int native_key = mrb_fixnum(key);

  /* Invocation */
  int result = SDL_SetColorKey(native_surface, native_flag, native_key);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_SetCursor_FUNCTION
#define SDL_SetCursor_REQUIRED_ARGC 1
#define SDL_SetCursor_OPTIONAL_ARGC 0
/* SDL_SetCursor
 *
 * Parameters:
 * - cursor: struct SDL_Cursor *
 * Return Type: void
 */
mrb_value
mrb_SDL_SDL_SetCursor(mrb_state* mrb, mrb_value self) {
  mrb_value cursor;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &cursor);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, cursor, SDLCursor_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLCursor expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_Cursor * native_cursor = (mrb_nil_p(cursor) ? NULL : mruby_unbox_SDL_Cursor(cursor));

  /* Invocation */
  SDL_SetCursor(native_cursor);

  return mrb_nil_value();
}
#endif

#if BIND_SDL_setenv_FUNCTION
#define SDL_setenv_REQUIRED_ARGC 3
#define SDL_setenv_OPTIONAL_ARGC 0
/* SDL_setenv
 *
 * Parameters:
 * - name: const char *
 * - value: const char *
 * - overwrite: int
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_setenv(mrb_state* mrb, mrb_value self) {
  mrb_value name;
  mrb_value value;
  mrb_value overwrite;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &name, &value, &overwrite);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, name, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, value, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, overwrite, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  const char * native_name = mrb_string_value_cstr(mrb, &name);

  const char * native_value = mrb_string_value_cstr(mrb, &value);

  int native_overwrite = mrb_fixnum(overwrite);

  /* Invocation */
  int result = SDL_setenv(native_name, native_value, native_overwrite);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_SetError_FUNCTION
#define SDL_SetError_REQUIRED_ARGC 1
#define SDL_SetError_OPTIONAL_ARGC 0
/* SDL_SetError
 *
 * Parameters:
 * - fmt: const char *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_SetError(mrb_state* mrb, mrb_value self) {
  mrb_value fmt;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &fmt);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, fmt, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  const char * native_fmt = mrb_string_value_cstr(mrb, &fmt);

  /* Invocation */
  int result = SDL_SetError(native_fmt);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_SetEventFilter_FUNCTION
#define SDL_SetEventFilter_REQUIRED_ARGC 2
#define SDL_SetEventFilter_OPTIONAL_ARGC 0
/* SDL_SetEventFilter
 *
 * Parameters:
 * - filter: int (*)(void *, union SDL_Event *)
 * - userdata: void *
 * Return Type: void
 */
mrb_value
mrb_SDL_SDL_SetEventFilter(mrb_state* mrb, mrb_value self) {
  mrb_value filter;
  mrb_value userdata;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &filter, &userdata);


  /* Type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_void_PTR_COMMA_union_SDL_Event_PTR_RPAREN(filter);
  TODO_type_check_void_PTR(userdata);


  /* Unbox parameters */
  int (*native_filter)(void *, union SDL_Event *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_void_PTR_COMMA_union_SDL_Event_PTR_RPAREN(filter);

  void * native_userdata = TODO_mruby_unbox_void_PTR(userdata);

  /* Invocation */
  SDL_SetEventFilter(native_filter, native_userdata);

  return mrb_nil_value();
}
#endif

#if BIND_SDL_SetHint_FUNCTION
#define SDL_SetHint_REQUIRED_ARGC 2
#define SDL_SetHint_OPTIONAL_ARGC 0
/* SDL_SetHint
 *
 * Parameters:
 * - name: const char *
 * - value: const char *
 * Return Type: SDL_bool
 */
mrb_value
mrb_SDL_SDL_SetHint(mrb_state* mrb, mrb_value self) {
  mrb_value name;
  mrb_value value;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &name, &value);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, name, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, value, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  const char * native_name = mrb_string_value_cstr(mrb, &name);

  const char * native_value = mrb_string_value_cstr(mrb, &value);

  /* Invocation */
  SDL_bool result = SDL_SetHint(native_name, native_value);

  /* Box the return value */
  mrb_value return_value = mrb_bool_value((mrb_bool)result);

  return return_value;
}
#endif

#if BIND_SDL_SetHintWithPriority_FUNCTION
#define SDL_SetHintWithPriority_REQUIRED_ARGC 3
#define SDL_SetHintWithPriority_OPTIONAL_ARGC 0
/* SDL_SetHintWithPriority
 *
 * Parameters:
 * - name: const char *
 * - value: const char *
 * - priority: SDL_HintPriority
 * Return Type: SDL_bool
 */
mrb_value
mrb_SDL_SDL_SetHintWithPriority(mrb_state* mrb, mrb_value self) {
  mrb_value name;
  mrb_value value;
  mrb_value priority;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &name, &value, &priority);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, name, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, value, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  TODO_type_check_SDL_HintPriority(priority);


  /* Unbox parameters */
  const char * native_name = mrb_string_value_cstr(mrb, &name);

  const char * native_value = mrb_string_value_cstr(mrb, &value);

  SDL_HintPriority native_priority = TODO_mruby_unbox_SDL_HintPriority(priority);

  /* Invocation */
  SDL_bool result = SDL_SetHintWithPriority(native_name, native_value, native_priority);

  /* Box the return value */
  mrb_value return_value = mrb_bool_value((mrb_bool)result);

  return return_value;
}
#endif

#if BIND_SDL_SetMainReady_FUNCTION
#define SDL_SetMainReady_REQUIRED_ARGC 0
#define SDL_SetMainReady_OPTIONAL_ARGC 0
/* SDL_SetMainReady
 *
 * Parameters: None
 * Return Type: void
 */
mrb_value
mrb_SDL_SDL_SetMainReady(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  SDL_SetMainReady();

  return mrb_nil_value();
}
#endif

#if BIND_SDL_SetModState_FUNCTION
#define SDL_SetModState_REQUIRED_ARGC 1
#define SDL_SetModState_OPTIONAL_ARGC 0
/* SDL_SetModState
 *
 * Parameters:
 * - modstate: SDL_Keymod
 * Return Type: void
 */
mrb_value
mrb_SDL_SDL_SetModState(mrb_state* mrb, mrb_value self) {
  mrb_value modstate;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &modstate);


  /* Type checking */
  TODO_type_check_SDL_Keymod(modstate);


  /* Unbox parameters */
  SDL_Keymod native_modstate = TODO_mruby_unbox_SDL_Keymod(modstate);

  /* Invocation */
  SDL_SetModState(native_modstate);

  return mrb_nil_value();
}
#endif

#if BIND_SDL_SetPaletteColors_FUNCTION
#define SDL_SetPaletteColors_REQUIRED_ARGC 4
#define SDL_SetPaletteColors_OPTIONAL_ARGC 0
/* SDL_SetPaletteColors
 *
 * Parameters:
 * - palette: struct SDL_Palette *
 * - colors: const struct SDL_Color *
 * - firstcolor: int
 * - ncolors: int
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_SetPaletteColors(mrb_state* mrb, mrb_value self) {
  mrb_value palette;
  mrb_value colors;
  mrb_value firstcolor;
  mrb_value ncolors;

  /* Fetch the args */
  mrb_get_args(mrb, "oooo", &palette, &colors, &firstcolor, &ncolors);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, palette, SDLPalette_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLPalette expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, colors, SDLColor_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLColor expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, firstcolor, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, ncolors, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_Palette * native_palette = (mrb_nil_p(palette) ? NULL : mruby_unbox_SDL_Palette(palette));

  const struct SDL_Color * native_colors = (mrb_nil_p(colors) ? NULL : mruby_unbox_SDL_Color(colors));

  int native_firstcolor = mrb_fixnum(firstcolor);

  int native_ncolors = mrb_fixnum(ncolors);

  /* Invocation */
  int result = SDL_SetPaletteColors(native_palette, native_colors, native_firstcolor, native_ncolors);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_SetPixelFormatPalette_FUNCTION
#define SDL_SetPixelFormatPalette_REQUIRED_ARGC 2
#define SDL_SetPixelFormatPalette_OPTIONAL_ARGC 0
/* SDL_SetPixelFormatPalette
 *
 * Parameters:
 * - format: struct SDL_PixelFormat *
 * - palette: struct SDL_Palette *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_SetPixelFormatPalette(mrb_state* mrb, mrb_value self) {
  mrb_value format;
  mrb_value palette;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &format, &palette);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, format, SDLPixelFormat_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLPixelFormat expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, palette, SDLPalette_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLPalette expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_PixelFormat * native_format = (mrb_nil_p(format) ? NULL : mruby_unbox_SDL_PixelFormat(format));

  struct SDL_Palette * native_palette = (mrb_nil_p(palette) ? NULL : mruby_unbox_SDL_Palette(palette));

  /* Invocation */
  int result = SDL_SetPixelFormatPalette(native_format, native_palette);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_SetRelativeMouseMode_FUNCTION
#define SDL_SetRelativeMouseMode_REQUIRED_ARGC 1
#define SDL_SetRelativeMouseMode_OPTIONAL_ARGC 0
/* SDL_SetRelativeMouseMode
 *
 * Parameters:
 * - enabled: SDL_bool
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_SetRelativeMouseMode(mrb_state* mrb, mrb_value self) {
  mrb_value enabled;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &enabled);


  /* Type checking */
  TODO_type_check_SDL_bool(enabled);


  /* Unbox parameters */
  SDL_bool native_enabled = TODO_mruby_unbox_SDL_bool(enabled);

  /* Invocation */
  int result = SDL_SetRelativeMouseMode(native_enabled);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_SetRenderDrawBlendMode_FUNCTION
#define SDL_SetRenderDrawBlendMode_REQUIRED_ARGC 2
#define SDL_SetRenderDrawBlendMode_OPTIONAL_ARGC 0
/* SDL_SetRenderDrawBlendMode
 *
 * Parameters:
 * - renderer: struct SDL_Renderer *
 * - blendMode: SDL_BlendMode
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_SetRenderDrawBlendMode(mrb_state* mrb, mrb_value self) {
  mrb_value renderer;
  mrb_value blendMode;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &renderer, &blendMode);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, renderer, SDLRenderer_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRenderer expected");
    return mrb_nil_value();
  }
  TODO_type_check_SDL_BlendMode(blendMode);


  /* Unbox parameters */
  struct SDL_Renderer * native_renderer = (mrb_nil_p(renderer) ? NULL : mruby_unbox_SDL_Renderer(renderer));

  SDL_BlendMode native_blendMode = TODO_mruby_unbox_SDL_BlendMode(blendMode);

  /* Invocation */
  int result = SDL_SetRenderDrawBlendMode(native_renderer, native_blendMode);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_SetRenderDrawColor_FUNCTION
#define SDL_SetRenderDrawColor_REQUIRED_ARGC 5
#define SDL_SetRenderDrawColor_OPTIONAL_ARGC 0
/* SDL_SetRenderDrawColor
 *
 * Parameters:
 * - renderer: struct SDL_Renderer *
 * - r: unsigned char
 * - g: unsigned char
 * - b: unsigned char
 * - a: unsigned char
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_SetRenderDrawColor(mrb_state* mrb, mrb_value self) {
  mrb_value renderer;
  mrb_value r;
  mrb_value g;
  mrb_value b;
  mrb_value a;

  /* Fetch the args */
  mrb_get_args(mrb, "ooooo", &renderer, &r, &g, &b, &a);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, renderer, SDLRenderer_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRenderer expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, r, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, g, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, b, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, a, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_Renderer * native_renderer = (mrb_nil_p(renderer) ? NULL : mruby_unbox_SDL_Renderer(renderer));

  unsigned char native_r = *mrb_string_value_ptr(mrb, r);

  unsigned char native_g = *mrb_string_value_ptr(mrb, g);

  unsigned char native_b = *mrb_string_value_ptr(mrb, b);

  unsigned char native_a = *mrb_string_value_ptr(mrb, a);

  /* Invocation */
  int result = SDL_SetRenderDrawColor(native_renderer, native_r, native_g, native_b, native_a);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_SetRenderTarget_FUNCTION
#define SDL_SetRenderTarget_REQUIRED_ARGC 2
#define SDL_SetRenderTarget_OPTIONAL_ARGC 0
/* SDL_SetRenderTarget
 *
 * Parameters:
 * - renderer: struct SDL_Renderer *
 * - texture: struct SDL_Texture *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_SetRenderTarget(mrb_state* mrb, mrb_value self) {
  mrb_value renderer;
  mrb_value texture;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &renderer, &texture);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, renderer, SDLRenderer_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRenderer expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, texture, SDLTexture_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLTexture expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_Renderer * native_renderer = (mrb_nil_p(renderer) ? NULL : mruby_unbox_SDL_Renderer(renderer));

  struct SDL_Texture * native_texture = (mrb_nil_p(texture) ? NULL : mruby_unbox_SDL_Texture(texture));

  /* Invocation */
  int result = SDL_SetRenderTarget(native_renderer, native_texture);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_SetSurfaceAlphaMod_FUNCTION
#define SDL_SetSurfaceAlphaMod_REQUIRED_ARGC 2
#define SDL_SetSurfaceAlphaMod_OPTIONAL_ARGC 0
/* SDL_SetSurfaceAlphaMod
 *
 * Parameters:
 * - surface: struct SDL_Surface *
 * - alpha: unsigned char
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_SetSurfaceAlphaMod(mrb_state* mrb, mrb_value self) {
  mrb_value surface;
  mrb_value alpha;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &surface, &alpha);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, surface, SDLSurface_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLSurface expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, alpha, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_Surface * native_surface = (mrb_nil_p(surface) ? NULL : mruby_unbox_SDL_Surface(surface));

  unsigned char native_alpha = *mrb_string_value_ptr(mrb, alpha);

  /* Invocation */
  int result = SDL_SetSurfaceAlphaMod(native_surface, native_alpha);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_SetSurfaceBlendMode_FUNCTION
#define SDL_SetSurfaceBlendMode_REQUIRED_ARGC 2
#define SDL_SetSurfaceBlendMode_OPTIONAL_ARGC 0
/* SDL_SetSurfaceBlendMode
 *
 * Parameters:
 * - surface: struct SDL_Surface *
 * - blendMode: SDL_BlendMode
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_SetSurfaceBlendMode(mrb_state* mrb, mrb_value self) {
  mrb_value surface;
  mrb_value blendMode;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &surface, &blendMode);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, surface, SDLSurface_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLSurface expected");
    return mrb_nil_value();
  }
  TODO_type_check_SDL_BlendMode(blendMode);


  /* Unbox parameters */
  struct SDL_Surface * native_surface = (mrb_nil_p(surface) ? NULL : mruby_unbox_SDL_Surface(surface));

  SDL_BlendMode native_blendMode = TODO_mruby_unbox_SDL_BlendMode(blendMode);

  /* Invocation */
  int result = SDL_SetSurfaceBlendMode(native_surface, native_blendMode);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_SetSurfaceColorMod_FUNCTION
#define SDL_SetSurfaceColorMod_REQUIRED_ARGC 4
#define SDL_SetSurfaceColorMod_OPTIONAL_ARGC 0
/* SDL_SetSurfaceColorMod
 *
 * Parameters:
 * - surface: struct SDL_Surface *
 * - r: unsigned char
 * - g: unsigned char
 * - b: unsigned char
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_SetSurfaceColorMod(mrb_state* mrb, mrb_value self) {
  mrb_value surface;
  mrb_value r;
  mrb_value g;
  mrb_value b;

  /* Fetch the args */
  mrb_get_args(mrb, "oooo", &surface, &r, &g, &b);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, surface, SDLSurface_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLSurface expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, r, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, g, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, b, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_Surface * native_surface = (mrb_nil_p(surface) ? NULL : mruby_unbox_SDL_Surface(surface));

  unsigned char native_r = *mrb_string_value_ptr(mrb, r);

  unsigned char native_g = *mrb_string_value_ptr(mrb, g);

  unsigned char native_b = *mrb_string_value_ptr(mrb, b);

  /* Invocation */
  int result = SDL_SetSurfaceColorMod(native_surface, native_r, native_g, native_b);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_SetSurfacePalette_FUNCTION
#define SDL_SetSurfacePalette_REQUIRED_ARGC 2
#define SDL_SetSurfacePalette_OPTIONAL_ARGC 0
/* SDL_SetSurfacePalette
 *
 * Parameters:
 * - surface: struct SDL_Surface *
 * - palette: struct SDL_Palette *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_SetSurfacePalette(mrb_state* mrb, mrb_value self) {
  mrb_value surface;
  mrb_value palette;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &surface, &palette);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, surface, SDLSurface_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLSurface expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, palette, SDLPalette_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLPalette expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_Surface * native_surface = (mrb_nil_p(surface) ? NULL : mruby_unbox_SDL_Surface(surface));

  struct SDL_Palette * native_palette = (mrb_nil_p(palette) ? NULL : mruby_unbox_SDL_Palette(palette));

  /* Invocation */
  int result = SDL_SetSurfacePalette(native_surface, native_palette);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_SetSurfaceRLE_FUNCTION
#define SDL_SetSurfaceRLE_REQUIRED_ARGC 2
#define SDL_SetSurfaceRLE_OPTIONAL_ARGC 0
/* SDL_SetSurfaceRLE
 *
 * Parameters:
 * - surface: struct SDL_Surface *
 * - flag: int
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_SetSurfaceRLE(mrb_state* mrb, mrb_value self) {
  mrb_value surface;
  mrb_value flag;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &surface, &flag);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, surface, SDLSurface_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLSurface expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, flag, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_Surface * native_surface = (mrb_nil_p(surface) ? NULL : mruby_unbox_SDL_Surface(surface));

  int native_flag = mrb_fixnum(flag);

  /* Invocation */
  int result = SDL_SetSurfaceRLE(native_surface, native_flag);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_SetTextInputRect_FUNCTION
#define SDL_SetTextInputRect_REQUIRED_ARGC 1
#define SDL_SetTextInputRect_OPTIONAL_ARGC 0
/* SDL_SetTextInputRect
 *
 * Parameters:
 * - rect: struct SDL_Rect *
 * Return Type: void
 */
mrb_value
mrb_SDL_SDL_SetTextInputRect(mrb_state* mrb, mrb_value self) {
  mrb_value rect;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &rect);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, rect, SDLRect_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRect expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_Rect * native_rect = (mrb_nil_p(rect) ? NULL : mruby_unbox_SDL_Rect(rect));

  /* Invocation */
  SDL_SetTextInputRect(native_rect);

  return mrb_nil_value();
}
#endif

#if BIND_SDL_SetTextureAlphaMod_FUNCTION
#define SDL_SetTextureAlphaMod_REQUIRED_ARGC 2
#define SDL_SetTextureAlphaMod_OPTIONAL_ARGC 0
/* SDL_SetTextureAlphaMod
 *
 * Parameters:
 * - texture: struct SDL_Texture *
 * - alpha: unsigned char
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_SetTextureAlphaMod(mrb_state* mrb, mrb_value self) {
  mrb_value texture;
  mrb_value alpha;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &texture, &alpha);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, texture, SDLTexture_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLTexture expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, alpha, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_Texture * native_texture = (mrb_nil_p(texture) ? NULL : mruby_unbox_SDL_Texture(texture));

  unsigned char native_alpha = *mrb_string_value_ptr(mrb, alpha);

  /* Invocation */
  int result = SDL_SetTextureAlphaMod(native_texture, native_alpha);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_SetTextureBlendMode_FUNCTION
#define SDL_SetTextureBlendMode_REQUIRED_ARGC 2
#define SDL_SetTextureBlendMode_OPTIONAL_ARGC 0
/* SDL_SetTextureBlendMode
 *
 * Parameters:
 * - texture: struct SDL_Texture *
 * - blendMode: SDL_BlendMode
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_SetTextureBlendMode(mrb_state* mrb, mrb_value self) {
  mrb_value texture;
  mrb_value blendMode;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &texture, &blendMode);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, texture, SDLTexture_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLTexture expected");
    return mrb_nil_value();
  }
  TODO_type_check_SDL_BlendMode(blendMode);


  /* Unbox parameters */
  struct SDL_Texture * native_texture = (mrb_nil_p(texture) ? NULL : mruby_unbox_SDL_Texture(texture));

  SDL_BlendMode native_blendMode = TODO_mruby_unbox_SDL_BlendMode(blendMode);

  /* Invocation */
  int result = SDL_SetTextureBlendMode(native_texture, native_blendMode);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_SetTextureColorMod_FUNCTION
#define SDL_SetTextureColorMod_REQUIRED_ARGC 4
#define SDL_SetTextureColorMod_OPTIONAL_ARGC 0
/* SDL_SetTextureColorMod
 *
 * Parameters:
 * - texture: struct SDL_Texture *
 * - r: unsigned char
 * - g: unsigned char
 * - b: unsigned char
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_SetTextureColorMod(mrb_state* mrb, mrb_value self) {
  mrb_value texture;
  mrb_value r;
  mrb_value g;
  mrb_value b;

  /* Fetch the args */
  mrb_get_args(mrb, "oooo", &texture, &r, &g, &b);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, texture, SDLTexture_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLTexture expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, r, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, g, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, b, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_Texture * native_texture = (mrb_nil_p(texture) ? NULL : mruby_unbox_SDL_Texture(texture));

  unsigned char native_r = *mrb_string_value_ptr(mrb, r);

  unsigned char native_g = *mrb_string_value_ptr(mrb, g);

  unsigned char native_b = *mrb_string_value_ptr(mrb, b);

  /* Invocation */
  int result = SDL_SetTextureColorMod(native_texture, native_r, native_g, native_b);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_SetThreadPriority_FUNCTION
#define SDL_SetThreadPriority_REQUIRED_ARGC 1
#define SDL_SetThreadPriority_OPTIONAL_ARGC 0
/* SDL_SetThreadPriority
 *
 * Parameters:
 * - priority: SDL_ThreadPriority
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_SetThreadPriority(mrb_state* mrb, mrb_value self) {
  mrb_value priority;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &priority);


  /* Type checking */
  TODO_type_check_SDL_ThreadPriority(priority);


  /* Unbox parameters */
  SDL_ThreadPriority native_priority = TODO_mruby_unbox_SDL_ThreadPriority(priority);

  /* Invocation */
  int result = SDL_SetThreadPriority(native_priority);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_SetWindowBordered_FUNCTION
#define SDL_SetWindowBordered_REQUIRED_ARGC 2
#define SDL_SetWindowBordered_OPTIONAL_ARGC 0
/* SDL_SetWindowBordered
 *
 * Parameters:
 * - window: struct SDL_Window *
 * - bordered: SDL_bool
 * Return Type: void
 */
mrb_value
mrb_SDL_SDL_SetWindowBordered(mrb_state* mrb, mrb_value self) {
  mrb_value window;
  mrb_value bordered;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &window, &bordered);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, window, SDLWindow_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLWindow expected");
    return mrb_nil_value();
  }
  TODO_type_check_SDL_bool(bordered);


  /* Unbox parameters */
  struct SDL_Window * native_window = (mrb_nil_p(window) ? NULL : mruby_unbox_SDL_Window(window));

  SDL_bool native_bordered = TODO_mruby_unbox_SDL_bool(bordered);

  /* Invocation */
  SDL_SetWindowBordered(native_window, native_bordered);

  return mrb_nil_value();
}
#endif

#if BIND_SDL_SetWindowBrightness_FUNCTION
#define SDL_SetWindowBrightness_REQUIRED_ARGC 2
#define SDL_SetWindowBrightness_OPTIONAL_ARGC 0
/* SDL_SetWindowBrightness
 *
 * Parameters:
 * - window: struct SDL_Window *
 * - brightness: float
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_SetWindowBrightness(mrb_state* mrb, mrb_value self) {
  mrb_value window;
  mrb_value brightness;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &window, &brightness);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, window, SDLWindow_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLWindow expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, brightness, mrb->float_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Float expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_Window * native_window = (mrb_nil_p(window) ? NULL : mruby_unbox_SDL_Window(window));

  float native_brightness = mrb_float(brightness);

  /* Invocation */
  int result = SDL_SetWindowBrightness(native_window, native_brightness);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_SetWindowData_FUNCTION
#define SDL_SetWindowData_REQUIRED_ARGC 3
#define SDL_SetWindowData_OPTIONAL_ARGC 0
/* SDL_SetWindowData
 *
 * Parameters:
 * - window: struct SDL_Window *
 * - name: const char *
 * - userdata: void *
 * Return Type: void *
 */
mrb_value
mrb_SDL_SDL_SetWindowData(mrb_state* mrb, mrb_value self) {
  mrb_value window;
  mrb_value name;
  mrb_value userdata;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &window, &name, &userdata);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, window, SDLWindow_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLWindow expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, name, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR(userdata);


  /* Unbox parameters */
  struct SDL_Window * native_window = (mrb_nil_p(window) ? NULL : mruby_unbox_SDL_Window(window));

  const char * native_name = mrb_string_value_cstr(mrb, &name);

  void * native_userdata = TODO_mruby_unbox_void_PTR(userdata);

  /* Invocation */
  void * result = SDL_SetWindowData(native_window, native_name, native_userdata);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_void_PTR(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_SetWindowDisplayMode_FUNCTION
#define SDL_SetWindowDisplayMode_REQUIRED_ARGC 2
#define SDL_SetWindowDisplayMode_OPTIONAL_ARGC 0
/* SDL_SetWindowDisplayMode
 *
 * Parameters:
 * - window: struct SDL_Window *
 * - mode: const SDL_DisplayMode *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_SetWindowDisplayMode(mrb_state* mrb, mrb_value self) {
  mrb_value window;
  mrb_value mode;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &window, &mode);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, window, SDLWindow_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLWindow expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, mode, SDLDisplayMode_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLDisplayMode expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_Window * native_window = (mrb_nil_p(window) ? NULL : mruby_unbox_SDL_Window(window));

  const SDL_DisplayMode * native_mode = (mrb_nil_p(mode) ? NULL : mruby_unbox_SDL_DisplayMode(mode));

  /* Invocation */
  int result = SDL_SetWindowDisplayMode(native_window, native_mode);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_SetWindowFullscreen_FUNCTION
#define SDL_SetWindowFullscreen_REQUIRED_ARGC 2
#define SDL_SetWindowFullscreen_OPTIONAL_ARGC 0
/* SDL_SetWindowFullscreen
 *
 * Parameters:
 * - window: struct SDL_Window *
 * - flags: unsigned int
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_SetWindowFullscreen(mrb_state* mrb, mrb_value self) {
  mrb_value window;
  mrb_value flags;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &window, &flags);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, window, SDLWindow_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLWindow expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, flags, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_Window * native_window = (mrb_nil_p(window) ? NULL : mruby_unbox_SDL_Window(window));

  unsigned int native_flags = mrb_fixnum(flags);

  /* Invocation */
  int result = SDL_SetWindowFullscreen(native_window, native_flags);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_SetWindowGammaRamp_FUNCTION
#define SDL_SetWindowGammaRamp_REQUIRED_ARGC 4
#define SDL_SetWindowGammaRamp_OPTIONAL_ARGC 0
/* SDL_SetWindowGammaRamp
 *
 * Parameters:
 * - window: struct SDL_Window *
 * - red: const unsigned short *
 * - green: const unsigned short *
 * - blue: const unsigned short *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_SetWindowGammaRamp(mrb_state* mrb, mrb_value self) {
  mrb_value window;
  mrb_value red;
  mrb_value green;
  mrb_value blue;

  /* Fetch the args */
  mrb_get_args(mrb, "oooo", &window, &red, &green, &blue);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, window, SDLWindow_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLWindow expected");
    return mrb_nil_value();
  }
  TODO_type_check_unsigned_short_PTR(red);
  TODO_type_check_unsigned_short_PTR(green);
  TODO_type_check_unsigned_short_PTR(blue);


  /* Unbox parameters */
  struct SDL_Window * native_window = (mrb_nil_p(window) ? NULL : mruby_unbox_SDL_Window(window));

  const unsigned short * native_red = TODO_mruby_unbox_unsigned_short_PTR(red);

  const unsigned short * native_green = TODO_mruby_unbox_unsigned_short_PTR(green);

  const unsigned short * native_blue = TODO_mruby_unbox_unsigned_short_PTR(blue);

  /* Invocation */
  int result = SDL_SetWindowGammaRamp(native_window, native_red, native_green, native_blue);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_SetWindowGrab_FUNCTION
#define SDL_SetWindowGrab_REQUIRED_ARGC 2
#define SDL_SetWindowGrab_OPTIONAL_ARGC 0
/* SDL_SetWindowGrab
 *
 * Parameters:
 * - window: struct SDL_Window *
 * - grabbed: SDL_bool
 * Return Type: void
 */
mrb_value
mrb_SDL_SDL_SetWindowGrab(mrb_state* mrb, mrb_value self) {
  mrb_value window;
  mrb_value grabbed;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &window, &grabbed);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, window, SDLWindow_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLWindow expected");
    return mrb_nil_value();
  }
  TODO_type_check_SDL_bool(grabbed);


  /* Unbox parameters */
  struct SDL_Window * native_window = (mrb_nil_p(window) ? NULL : mruby_unbox_SDL_Window(window));

  SDL_bool native_grabbed = TODO_mruby_unbox_SDL_bool(grabbed);

  /* Invocation */
  SDL_SetWindowGrab(native_window, native_grabbed);

  return mrb_nil_value();
}
#endif

#if BIND_SDL_SetWindowIcon_FUNCTION
#define SDL_SetWindowIcon_REQUIRED_ARGC 2
#define SDL_SetWindowIcon_OPTIONAL_ARGC 0
/* SDL_SetWindowIcon
 *
 * Parameters:
 * - window: struct SDL_Window *
 * - icon: struct SDL_Surface *
 * Return Type: void
 */
mrb_value
mrb_SDL_SDL_SetWindowIcon(mrb_state* mrb, mrb_value self) {
  mrb_value window;
  mrb_value icon;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &window, &icon);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, window, SDLWindow_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLWindow expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, icon, SDLSurface_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLSurface expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_Window * native_window = (mrb_nil_p(window) ? NULL : mruby_unbox_SDL_Window(window));

  struct SDL_Surface * native_icon = (mrb_nil_p(icon) ? NULL : mruby_unbox_SDL_Surface(icon));

  /* Invocation */
  SDL_SetWindowIcon(native_window, native_icon);

  return mrb_nil_value();
}
#endif

#if BIND_SDL_SetWindowMaximumSize_FUNCTION
#define SDL_SetWindowMaximumSize_REQUIRED_ARGC 3
#define SDL_SetWindowMaximumSize_OPTIONAL_ARGC 0
/* SDL_SetWindowMaximumSize
 *
 * Parameters:
 * - window: struct SDL_Window *
 * - max_w: int
 * - max_h: int
 * Return Type: void
 */
mrb_value
mrb_SDL_SDL_SetWindowMaximumSize(mrb_state* mrb, mrb_value self) {
  mrb_value window;
  mrb_value max_w;
  mrb_value max_h;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &window, &max_w, &max_h);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, window, SDLWindow_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLWindow expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, max_w, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, max_h, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_Window * native_window = (mrb_nil_p(window) ? NULL : mruby_unbox_SDL_Window(window));

  int native_max_w = mrb_fixnum(max_w);

  int native_max_h = mrb_fixnum(max_h);

  /* Invocation */
  SDL_SetWindowMaximumSize(native_window, native_max_w, native_max_h);

  return mrb_nil_value();
}
#endif

#if BIND_SDL_SetWindowMinimumSize_FUNCTION
#define SDL_SetWindowMinimumSize_REQUIRED_ARGC 3
#define SDL_SetWindowMinimumSize_OPTIONAL_ARGC 0
/* SDL_SetWindowMinimumSize
 *
 * Parameters:
 * - window: struct SDL_Window *
 * - min_w: int
 * - min_h: int
 * Return Type: void
 */
mrb_value
mrb_SDL_SDL_SetWindowMinimumSize(mrb_state* mrb, mrb_value self) {
  mrb_value window;
  mrb_value min_w;
  mrb_value min_h;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &window, &min_w, &min_h);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, window, SDLWindow_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLWindow expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, min_w, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, min_h, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_Window * native_window = (mrb_nil_p(window) ? NULL : mruby_unbox_SDL_Window(window));

  int native_min_w = mrb_fixnum(min_w);

  int native_min_h = mrb_fixnum(min_h);

  /* Invocation */
  SDL_SetWindowMinimumSize(native_window, native_min_w, native_min_h);

  return mrb_nil_value();
}
#endif

#if BIND_SDL_SetWindowPosition_FUNCTION
#define SDL_SetWindowPosition_REQUIRED_ARGC 3
#define SDL_SetWindowPosition_OPTIONAL_ARGC 0
/* SDL_SetWindowPosition
 *
 * Parameters:
 * - window: struct SDL_Window *
 * - x: int
 * - y: int
 * Return Type: void
 */
mrb_value
mrb_SDL_SDL_SetWindowPosition(mrb_state* mrb, mrb_value self) {
  mrb_value window;
  mrb_value x;
  mrb_value y;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &window, &x, &y);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, window, SDLWindow_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLWindow expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, x, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, y, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_Window * native_window = (mrb_nil_p(window) ? NULL : mruby_unbox_SDL_Window(window));

  int native_x = mrb_fixnum(x);

  int native_y = mrb_fixnum(y);

  /* Invocation */
  SDL_SetWindowPosition(native_window, native_x, native_y);

  return mrb_nil_value();
}
#endif

#if BIND_SDL_SetWindowShape_FUNCTION
#define SDL_SetWindowShape_REQUIRED_ARGC 3
#define SDL_SetWindowShape_OPTIONAL_ARGC 0
/* SDL_SetWindowShape
 *
 * Parameters:
 * - window: struct SDL_Window *
 * - shape: struct SDL_Surface *
 * - shape_mode: struct SDL_WindowShapeMode *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_SetWindowShape(mrb_state* mrb, mrb_value self) {
  mrb_value window;
  mrb_value shape;
  mrb_value shape_mode;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &window, &shape, &shape_mode);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, window, SDLWindow_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLWindow expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, shape, SDLSurface_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLSurface expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, shape_mode, SDLWindowShapeMode_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLWindowShapeMode expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_Window * native_window = (mrb_nil_p(window) ? NULL : mruby_unbox_SDL_Window(window));

  struct SDL_Surface * native_shape = (mrb_nil_p(shape) ? NULL : mruby_unbox_SDL_Surface(shape));

  struct SDL_WindowShapeMode * native_shape_mode = (mrb_nil_p(shape_mode) ? NULL : mruby_unbox_SDL_WindowShapeMode(shape_mode));

  /* Invocation */
  int result = SDL_SetWindowShape(native_window, native_shape, native_shape_mode);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_SetWindowSize_FUNCTION
#define SDL_SetWindowSize_REQUIRED_ARGC 3
#define SDL_SetWindowSize_OPTIONAL_ARGC 0
/* SDL_SetWindowSize
 *
 * Parameters:
 * - window: struct SDL_Window *
 * - w: int
 * - h: int
 * Return Type: void
 */
mrb_value
mrb_SDL_SDL_SetWindowSize(mrb_state* mrb, mrb_value self) {
  mrb_value window;
  mrb_value w;
  mrb_value h;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &window, &w, &h);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, window, SDLWindow_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLWindow expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, w, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, h, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_Window * native_window = (mrb_nil_p(window) ? NULL : mruby_unbox_SDL_Window(window));

  int native_w = mrb_fixnum(w);

  int native_h = mrb_fixnum(h);

  /* Invocation */
  SDL_SetWindowSize(native_window, native_w, native_h);

  return mrb_nil_value();
}
#endif

#if BIND_SDL_SetWindowTitle_FUNCTION
#define SDL_SetWindowTitle_REQUIRED_ARGC 2
#define SDL_SetWindowTitle_OPTIONAL_ARGC 0
/* SDL_SetWindowTitle
 *
 * Parameters:
 * - window: struct SDL_Window *
 * - title: const char *
 * Return Type: void
 */
mrb_value
mrb_SDL_SDL_SetWindowTitle(mrb_state* mrb, mrb_value self) {
  mrb_value window;
  mrb_value title;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &window, &title);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, window, SDLWindow_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLWindow expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, title, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_Window * native_window = (mrb_nil_p(window) ? NULL : mruby_unbox_SDL_Window(window));

  const char * native_title = mrb_string_value_cstr(mrb, &title);

  /* Invocation */
  SDL_SetWindowTitle(native_window, native_title);

  return mrb_nil_value();
}
#endif

#if BIND_SDL_ShowCursor_FUNCTION
#define SDL_ShowCursor_REQUIRED_ARGC 1
#define SDL_ShowCursor_OPTIONAL_ARGC 0
/* SDL_ShowCursor
 *
 * Parameters:
 * - toggle: int
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_ShowCursor(mrb_state* mrb, mrb_value self) {
  mrb_value toggle;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &toggle);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, toggle, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_toggle = mrb_fixnum(toggle);

  /* Invocation */
  int result = SDL_ShowCursor(native_toggle);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_ShowMessageBox_FUNCTION
#define SDL_ShowMessageBox_REQUIRED_ARGC 2
#define SDL_ShowMessageBox_OPTIONAL_ARGC 0
/* SDL_ShowMessageBox
 *
 * Parameters:
 * - messageboxdata: const SDL_MessageBoxData *
 * - buttonid: int *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_ShowMessageBox(mrb_state* mrb, mrb_value self) {
  mrb_value messageboxdata;
  mrb_value buttonid;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &messageboxdata, &buttonid);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, messageboxdata, SDLMessageBoxData_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLMessageBoxData expected");
    return mrb_nil_value();
  }
  TODO_type_check_int_PTR(buttonid);


  /* Unbox parameters */
  const SDL_MessageBoxData * native_messageboxdata = (mrb_nil_p(messageboxdata) ? NULL : mruby_unbox_SDL_MessageBoxData(messageboxdata));

  int * native_buttonid = TODO_mruby_unbox_int_PTR(buttonid);

  /* Invocation */
  int result = SDL_ShowMessageBox(native_messageboxdata, native_buttonid);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_ShowSimpleMessageBox_FUNCTION
#define SDL_ShowSimpleMessageBox_REQUIRED_ARGC 4
#define SDL_ShowSimpleMessageBox_OPTIONAL_ARGC 0
/* SDL_ShowSimpleMessageBox
 *
 * Parameters:
 * - flags: unsigned int
 * - title: const char *
 * - message: const char *
 * - window: struct SDL_Window *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_ShowSimpleMessageBox(mrb_state* mrb, mrb_value self) {
  mrb_value flags;
  mrb_value title;
  mrb_value message;
  mrb_value window;

  /* Fetch the args */
  mrb_get_args(mrb, "oooo", &flags, &title, &message, &window);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, flags, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, title, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, message, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, window, SDLWindow_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLWindow expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  unsigned int native_flags = mrb_fixnum(flags);

  const char * native_title = mrb_string_value_cstr(mrb, &title);

  const char * native_message = mrb_string_value_cstr(mrb, &message);

  struct SDL_Window * native_window = (mrb_nil_p(window) ? NULL : mruby_unbox_SDL_Window(window));

  /* Invocation */
  int result = SDL_ShowSimpleMessageBox(native_flags, native_title, native_message, native_window);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_ShowWindow_FUNCTION
#define SDL_ShowWindow_REQUIRED_ARGC 1
#define SDL_ShowWindow_OPTIONAL_ARGC 0
/* SDL_ShowWindow
 *
 * Parameters:
 * - window: struct SDL_Window *
 * Return Type: void
 */
mrb_value
mrb_SDL_SDL_ShowWindow(mrb_state* mrb, mrb_value self) {
  mrb_value window;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &window);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, window, SDLWindow_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLWindow expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_Window * native_window = (mrb_nil_p(window) ? NULL : mruby_unbox_SDL_Window(window));

  /* Invocation */
  SDL_ShowWindow(native_window);

  return mrb_nil_value();
}
#endif

#if BIND_SDL_sin_FUNCTION
#define SDL_sin_REQUIRED_ARGC 1
#define SDL_sin_OPTIONAL_ARGC 0
/* SDL_sin
 *
 * Parameters:
 * - x: double
 * Return Type: double
 */
mrb_value
mrb_SDL_SDL_sin(mrb_state* mrb, mrb_value self) {
  mrb_value x;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &x);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, x, mrb->float_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Float expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  double native_x = mrb_float(x);

  /* Invocation */
  double result = SDL_sin(native_x);

  /* Box the return value */
  mrb_value return_value = mrb_float_value(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_sinf_FUNCTION
#define SDL_sinf_REQUIRED_ARGC 1
#define SDL_sinf_OPTIONAL_ARGC 0
/* SDL_sinf
 *
 * Parameters:
 * - x: float
 * Return Type: float
 */
mrb_value
mrb_SDL_SDL_sinf(mrb_state* mrb, mrb_value self) {
  mrb_value x;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &x);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, x, mrb->float_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Float expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  float native_x = mrb_float(x);

  /* Invocation */
  float result = SDL_sinf(native_x);

  /* Box the return value */
  mrb_value return_value = mrb_float_value(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_snprintf_FUNCTION
#define SDL_snprintf_REQUIRED_ARGC 3
#define SDL_snprintf_OPTIONAL_ARGC 0
/* SDL_snprintf
 *
 * Parameters:
 * - text: char *
 * - maxlen: unsigned long
 * - fmt: const char *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_snprintf(mrb_state* mrb, mrb_value self) {
  mrb_value text;
  mrb_value maxlen;
  mrb_value fmt;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &text, &maxlen, &fmt);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, text, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, maxlen, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, fmt, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  /* WARNING: Allocating new memory to create 'char *' from 'const char *'.
   *          Please verify that this memory is cleaned up correctly.
   *
   *          Has this been verified? [No]
   */
  char * native_text = strdup(mrb_string_value_cstr(mrb, &text));

  unsigned long native_maxlen = mrb_fixnum(maxlen);

  const char * native_fmt = mrb_string_value_cstr(mrb, &fmt);

  /* Invocation */
  int result = SDL_snprintf(native_text, native_maxlen, native_fmt);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  /* WARNING: Assuming that the new string can be deallocated after the function call.
   *          Please verify that this is correct (the function does not save this parameter).
   *
   *          Has this been verified? [No]
   */
  free(native_text);
  native_text = NULL;

  return return_value;
}
#endif

#if BIND_SDL_SoftStretch_FUNCTION
#define SDL_SoftStretch_REQUIRED_ARGC 4
#define SDL_SoftStretch_OPTIONAL_ARGC 0
/* SDL_SoftStretch
 *
 * Parameters:
 * - src: struct SDL_Surface *
 * - srcrect: const struct SDL_Rect *
 * - dst: struct SDL_Surface *
 * - dstrect: const struct SDL_Rect *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_SoftStretch(mrb_state* mrb, mrb_value self) {
  mrb_value src;
  mrb_value srcrect;
  mrb_value dst;
  mrb_value dstrect;

  /* Fetch the args */
  mrb_get_args(mrb, "oooo", &src, &srcrect, &dst, &dstrect);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, src, SDLSurface_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLSurface expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, srcrect, SDLRect_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRect expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, dst, SDLSurface_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLSurface expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, dstrect, SDLRect_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRect expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_Surface * native_src = (mrb_nil_p(src) ? NULL : mruby_unbox_SDL_Surface(src));

  const struct SDL_Rect * native_srcrect = (mrb_nil_p(srcrect) ? NULL : mruby_unbox_SDL_Rect(srcrect));

  struct SDL_Surface * native_dst = (mrb_nil_p(dst) ? NULL : mruby_unbox_SDL_Surface(dst));

  const struct SDL_Rect * native_dstrect = (mrb_nil_p(dstrect) ? NULL : mruby_unbox_SDL_Rect(dstrect));

  /* Invocation */
  int result = SDL_SoftStretch(native_src, native_srcrect, native_dst, native_dstrect);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_sqrt_FUNCTION
#define SDL_sqrt_REQUIRED_ARGC 1
#define SDL_sqrt_OPTIONAL_ARGC 0
/* SDL_sqrt
 *
 * Parameters:
 * - x: double
 * Return Type: double
 */
mrb_value
mrb_SDL_SDL_sqrt(mrb_state* mrb, mrb_value self) {
  mrb_value x;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &x);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, x, mrb->float_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Float expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  double native_x = mrb_float(x);

  /* Invocation */
  double result = SDL_sqrt(native_x);

  /* Box the return value */
  mrb_value return_value = mrb_float_value(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_sscanf_FUNCTION
#define SDL_sscanf_REQUIRED_ARGC 2
#define SDL_sscanf_OPTIONAL_ARGC 0
/* SDL_sscanf
 *
 * Parameters:
 * - text: const char *
 * - fmt: const char *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_sscanf(mrb_state* mrb, mrb_value self) {
  mrb_value text;
  mrb_value fmt;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &text, &fmt);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, text, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, fmt, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  const char * native_text = mrb_string_value_cstr(mrb, &text);

  const char * native_fmt = mrb_string_value_cstr(mrb, &fmt);

  /* Invocation */
  int result = SDL_sscanf(native_text, native_fmt);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_StartTextInput_FUNCTION
#define SDL_StartTextInput_REQUIRED_ARGC 0
#define SDL_StartTextInput_OPTIONAL_ARGC 0
/* SDL_StartTextInput
 *
 * Parameters: None
 * Return Type: void
 */
mrb_value
mrb_SDL_SDL_StartTextInput(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  SDL_StartTextInput();

  return mrb_nil_value();
}
#endif

#if BIND_SDL_StopTextInput_FUNCTION
#define SDL_StopTextInput_REQUIRED_ARGC 0
#define SDL_StopTextInput_OPTIONAL_ARGC 0
/* SDL_StopTextInput
 *
 * Parameters: None
 * Return Type: void
 */
mrb_value
mrb_SDL_SDL_StopTextInput(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  SDL_StopTextInput();

  return mrb_nil_value();
}
#endif

#if BIND_SDL_strcasecmp_FUNCTION
#define SDL_strcasecmp_REQUIRED_ARGC 2
#define SDL_strcasecmp_OPTIONAL_ARGC 0
/* SDL_strcasecmp
 *
 * Parameters:
 * - str1: const char *
 * - str2: const char *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_strcasecmp(mrb_state* mrb, mrb_value self) {
  mrb_value str1;
  mrb_value str2;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &str1, &str2);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, str1, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, str2, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  const char * native_str1 = mrb_string_value_cstr(mrb, &str1);

  const char * native_str2 = mrb_string_value_cstr(mrb, &str2);

  /* Invocation */
  int result = SDL_strcasecmp(native_str1, native_str2);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_strchr_FUNCTION
#define SDL_strchr_REQUIRED_ARGC 2
#define SDL_strchr_OPTIONAL_ARGC 0
/* SDL_strchr
 *
 * Parameters:
 * - str: const char *
 * - c: int
 * Return Type: char *
 */
mrb_value
mrb_SDL_SDL_strchr(mrb_state* mrb, mrb_value self) {
  mrb_value str;
  mrb_value c;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &str, &c);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, str, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, c, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  const char * native_str = mrb_string_value_cstr(mrb, &str);

  int native_c = mrb_fixnum(c);

  /* Invocation */
  char * result = SDL_strchr(native_str, native_c);

  /* Box the return value */
  mrb_value return_value = mrb_str_new_cstr(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_strcmp_FUNCTION
#define SDL_strcmp_REQUIRED_ARGC 2
#define SDL_strcmp_OPTIONAL_ARGC 0
/* SDL_strcmp
 *
 * Parameters:
 * - str1: const char *
 * - str2: const char *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_strcmp(mrb_state* mrb, mrb_value self) {
  mrb_value str1;
  mrb_value str2;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &str1, &str2);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, str1, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, str2, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  const char * native_str1 = mrb_string_value_cstr(mrb, &str1);

  const char * native_str2 = mrb_string_value_cstr(mrb, &str2);

  /* Invocation */
  int result = SDL_strcmp(native_str1, native_str2);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_strdup_FUNCTION
#define SDL_strdup_REQUIRED_ARGC 1
#define SDL_strdup_OPTIONAL_ARGC 0
/* SDL_strdup
 *
 * Parameters:
 * - str: const char *
 * Return Type: char *
 */
mrb_value
mrb_SDL_SDL_strdup(mrb_state* mrb, mrb_value self) {
  mrb_value str;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &str);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, str, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  const char * native_str = mrb_string_value_cstr(mrb, &str);

  /* Invocation */
  char * result = SDL_strdup(native_str);

  /* Box the return value */
  mrb_value return_value = mrb_str_new_cstr(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_strlcat_FUNCTION
#define SDL_strlcat_REQUIRED_ARGC 3
#define SDL_strlcat_OPTIONAL_ARGC 0
/* SDL_strlcat
 *
 * Parameters:
 * - dst: char *
 * - src: const char *
 * - maxlen: unsigned long
 * Return Type: size_t
 */
mrb_value
mrb_SDL_SDL_strlcat(mrb_state* mrb, mrb_value self) {
  mrb_value dst;
  mrb_value src;
  mrb_value maxlen;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &dst, &src, &maxlen);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, dst, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, src, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, maxlen, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  /* WARNING: Allocating new memory to create 'char *' from 'const char *'.
   *          Please verify that this memory is cleaned up correctly.
   *
   *          Has this been verified? [No]
   */
  char * native_dst = strdup(mrb_string_value_cstr(mrb, &dst));

  const char * native_src = mrb_string_value_cstr(mrb, &src);

  unsigned long native_maxlen = mrb_fixnum(maxlen);

  /* Invocation */
  size_t result = SDL_strlcat(native_dst, native_src, native_maxlen);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_size_t(mrb, result);

  /* WARNING: Assuming that the new string can be deallocated after the function call.
   *          Please verify that this is correct (the function does not save this parameter).
   *
   *          Has this been verified? [No]
   */
  free(native_dst);
  native_dst = NULL;

  return return_value;
}
#endif

#if BIND_SDL_strlcpy_FUNCTION
#define SDL_strlcpy_REQUIRED_ARGC 3
#define SDL_strlcpy_OPTIONAL_ARGC 0
/* SDL_strlcpy
 *
 * Parameters:
 * - dst: char *
 * - src: const char *
 * - maxlen: unsigned long
 * Return Type: size_t
 */
mrb_value
mrb_SDL_SDL_strlcpy(mrb_state* mrb, mrb_value self) {
  mrb_value dst;
  mrb_value src;
  mrb_value maxlen;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &dst, &src, &maxlen);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, dst, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, src, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, maxlen, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  /* WARNING: Allocating new memory to create 'char *' from 'const char *'.
   *          Please verify that this memory is cleaned up correctly.
   *
   *          Has this been verified? [No]
   */
  char * native_dst = strdup(mrb_string_value_cstr(mrb, &dst));

  const char * native_src = mrb_string_value_cstr(mrb, &src);

  unsigned long native_maxlen = mrb_fixnum(maxlen);

  /* Invocation */
  size_t result = SDL_strlcpy(native_dst, native_src, native_maxlen);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_size_t(mrb, result);

  /* WARNING: Assuming that the new string can be deallocated after the function call.
   *          Please verify that this is correct (the function does not save this parameter).
   *
   *          Has this been verified? [No]
   */
  free(native_dst);
  native_dst = NULL;

  return return_value;
}
#endif

#if BIND_SDL_strlen_FUNCTION
#define SDL_strlen_REQUIRED_ARGC 1
#define SDL_strlen_OPTIONAL_ARGC 0
/* SDL_strlen
 *
 * Parameters:
 * - str: const char *
 * Return Type: size_t
 */
mrb_value
mrb_SDL_SDL_strlen(mrb_state* mrb, mrb_value self) {
  mrb_value str;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &str);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, str, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  const char * native_str = mrb_string_value_cstr(mrb, &str);

  /* Invocation */
  size_t result = SDL_strlen(native_str);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_size_t(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_strlwr_FUNCTION
#define SDL_strlwr_REQUIRED_ARGC 1
#define SDL_strlwr_OPTIONAL_ARGC 0
/* SDL_strlwr
 *
 * Parameters:
 * - str: char *
 * Return Type: char *
 */
mrb_value
mrb_SDL_SDL_strlwr(mrb_state* mrb, mrb_value self) {
  mrb_value str;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &str);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, str, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  /* WARNING: Allocating new memory to create 'char *' from 'const char *'.
   *          Please verify that this memory is cleaned up correctly.
   *
   *          Has this been verified? [No]
   */
  char * native_str = strdup(mrb_string_value_cstr(mrb, &str));

  /* Invocation */
  char * result = SDL_strlwr(native_str);

  /* Box the return value */
  mrb_value return_value = mrb_str_new_cstr(mrb, result);

  /* WARNING: Assuming that the new string can be deallocated after the function call.
   *          Please verify that this is correct (the function does not save this parameter).
   *
   *          Has this been verified? [No]
   */
  free(native_str);
  native_str = NULL;

  return return_value;
}
#endif

#if BIND_SDL_strncasecmp_FUNCTION
#define SDL_strncasecmp_REQUIRED_ARGC 3
#define SDL_strncasecmp_OPTIONAL_ARGC 0
/* SDL_strncasecmp
 *
 * Parameters:
 * - str1: const char *
 * - str2: const char *
 * - len: unsigned long
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_strncasecmp(mrb_state* mrb, mrb_value self) {
  mrb_value str1;
  mrb_value str2;
  mrb_value len;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &str1, &str2, &len);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, str1, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, str2, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, len, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  const char * native_str1 = mrb_string_value_cstr(mrb, &str1);

  const char * native_str2 = mrb_string_value_cstr(mrb, &str2);

  unsigned long native_len = mrb_fixnum(len);

  /* Invocation */
  int result = SDL_strncasecmp(native_str1, native_str2, native_len);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_strncmp_FUNCTION
#define SDL_strncmp_REQUIRED_ARGC 3
#define SDL_strncmp_OPTIONAL_ARGC 0
/* SDL_strncmp
 *
 * Parameters:
 * - str1: const char *
 * - str2: const char *
 * - maxlen: unsigned long
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_strncmp(mrb_state* mrb, mrb_value self) {
  mrb_value str1;
  mrb_value str2;
  mrb_value maxlen;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &str1, &str2, &maxlen);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, str1, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, str2, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, maxlen, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  const char * native_str1 = mrb_string_value_cstr(mrb, &str1);

  const char * native_str2 = mrb_string_value_cstr(mrb, &str2);

  unsigned long native_maxlen = mrb_fixnum(maxlen);

  /* Invocation */
  int result = SDL_strncmp(native_str1, native_str2, native_maxlen);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_strrchr_FUNCTION
#define SDL_strrchr_REQUIRED_ARGC 2
#define SDL_strrchr_OPTIONAL_ARGC 0
/* SDL_strrchr
 *
 * Parameters:
 * - str: const char *
 * - c: int
 * Return Type: char *
 */
mrb_value
mrb_SDL_SDL_strrchr(mrb_state* mrb, mrb_value self) {
  mrb_value str;
  mrb_value c;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &str, &c);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, str, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, c, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  const char * native_str = mrb_string_value_cstr(mrb, &str);

  int native_c = mrb_fixnum(c);

  /* Invocation */
  char * result = SDL_strrchr(native_str, native_c);

  /* Box the return value */
  mrb_value return_value = mrb_str_new_cstr(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_strrev_FUNCTION
#define SDL_strrev_REQUIRED_ARGC 1
#define SDL_strrev_OPTIONAL_ARGC 0
/* SDL_strrev
 *
 * Parameters:
 * - str: char *
 * Return Type: char *
 */
mrb_value
mrb_SDL_SDL_strrev(mrb_state* mrb, mrb_value self) {
  mrb_value str;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &str);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, str, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  /* WARNING: Allocating new memory to create 'char *' from 'const char *'.
   *          Please verify that this memory is cleaned up correctly.
   *
   *          Has this been verified? [No]
   */
  char * native_str = strdup(mrb_string_value_cstr(mrb, &str));

  /* Invocation */
  char * result = SDL_strrev(native_str);

  /* Box the return value */
  mrb_value return_value = mrb_str_new_cstr(mrb, result);

  /* WARNING: Assuming that the new string can be deallocated after the function call.
   *          Please verify that this is correct (the function does not save this parameter).
   *
   *          Has this been verified? [No]
   */
  free(native_str);
  native_str = NULL;

  return return_value;
}
#endif

#if BIND_SDL_strstr_FUNCTION
#define SDL_strstr_REQUIRED_ARGC 2
#define SDL_strstr_OPTIONAL_ARGC 0
/* SDL_strstr
 *
 * Parameters:
 * - haystack: const char *
 * - needle: const char *
 * Return Type: char *
 */
mrb_value
mrb_SDL_SDL_strstr(mrb_state* mrb, mrb_value self) {
  mrb_value haystack;
  mrb_value needle;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &haystack, &needle);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, haystack, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, needle, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  const char * native_haystack = mrb_string_value_cstr(mrb, &haystack);

  const char * native_needle = mrb_string_value_cstr(mrb, &needle);

  /* Invocation */
  char * result = SDL_strstr(native_haystack, native_needle);

  /* Box the return value */
  mrb_value return_value = mrb_str_new_cstr(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_strtod_FUNCTION
#define SDL_strtod_REQUIRED_ARGC 2
#define SDL_strtod_OPTIONAL_ARGC 0
/* SDL_strtod
 *
 * Parameters:
 * - str: const char *
 * - endp: char **
 * Return Type: double
 */
mrb_value
mrb_SDL_SDL_strtod(mrb_state* mrb, mrb_value self) {
  mrb_value str;
  mrb_value endp;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &str, &endp);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, str, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  TODO_type_check_char_PTR_PTR(endp);


  /* Unbox parameters */
  const char * native_str = mrb_string_value_cstr(mrb, &str);

  char ** native_endp = TODO_mruby_unbox_char_PTR_PTR(endp);

  /* Invocation */
  double result = SDL_strtod(native_str, native_endp);

  /* Box the return value */
  mrb_value return_value = mrb_float_value(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_strtol_FUNCTION
#define SDL_strtol_REQUIRED_ARGC 3
#define SDL_strtol_OPTIONAL_ARGC 0
/* SDL_strtol
 *
 * Parameters:
 * - str: const char *
 * - endp: char **
 * - base: int
 * Return Type: long
 */
mrb_value
mrb_SDL_SDL_strtol(mrb_state* mrb, mrb_value self) {
  mrb_value str;
  mrb_value endp;
  mrb_value base;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &str, &endp, &base);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, str, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  TODO_type_check_char_PTR_PTR(endp);
  if (!mrb_obj_is_kind_of(mrb, base, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  const char * native_str = mrb_string_value_cstr(mrb, &str);

  char ** native_endp = TODO_mruby_unbox_char_PTR_PTR(endp);

  int native_base = mrb_fixnum(base);

  /* Invocation */
  long result = SDL_strtol(native_str, native_endp, native_base);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_strtoll_FUNCTION
#define SDL_strtoll_REQUIRED_ARGC 3
#define SDL_strtoll_OPTIONAL_ARGC 0
/* SDL_strtoll
 *
 * Parameters:
 * - str: const char *
 * - endp: char **
 * - base: int
 * Return Type: Sint64
 */
mrb_value
mrb_SDL_SDL_strtoll(mrb_state* mrb, mrb_value self) {
  mrb_value str;
  mrb_value endp;
  mrb_value base;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &str, &endp, &base);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, str, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  TODO_type_check_char_PTR_PTR(endp);
  if (!mrb_obj_is_kind_of(mrb, base, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  const char * native_str = mrb_string_value_cstr(mrb, &str);

  char ** native_endp = TODO_mruby_unbox_char_PTR_PTR(endp);

  int native_base = mrb_fixnum(base);

  /* Invocation */
  Sint64 result = SDL_strtoll(native_str, native_endp, native_base);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_Sint64(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_strtoul_FUNCTION
#define SDL_strtoul_REQUIRED_ARGC 3
#define SDL_strtoul_OPTIONAL_ARGC 0
/* SDL_strtoul
 *
 * Parameters:
 * - str: const char *
 * - endp: char **
 * - base: int
 * Return Type: unsigned long
 */
mrb_value
mrb_SDL_SDL_strtoul(mrb_state* mrb, mrb_value self) {
  mrb_value str;
  mrb_value endp;
  mrb_value base;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &str, &endp, &base);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, str, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  TODO_type_check_char_PTR_PTR(endp);
  if (!mrb_obj_is_kind_of(mrb, base, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  const char * native_str = mrb_string_value_cstr(mrb, &str);

  char ** native_endp = TODO_mruby_unbox_char_PTR_PTR(endp);

  int native_base = mrb_fixnum(base);

  /* Invocation */
  unsigned long result = SDL_strtoul(native_str, native_endp, native_base);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_strtoull_FUNCTION
#define SDL_strtoull_REQUIRED_ARGC 3
#define SDL_strtoull_OPTIONAL_ARGC 0
/* SDL_strtoull
 *
 * Parameters:
 * - str: const char *
 * - endp: char **
 * - base: int
 * Return Type: Uint64
 */
mrb_value
mrb_SDL_SDL_strtoull(mrb_state* mrb, mrb_value self) {
  mrb_value str;
  mrb_value endp;
  mrb_value base;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &str, &endp, &base);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, str, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  TODO_type_check_char_PTR_PTR(endp);
  if (!mrb_obj_is_kind_of(mrb, base, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  const char * native_str = mrb_string_value_cstr(mrb, &str);

  char ** native_endp = TODO_mruby_unbox_char_PTR_PTR(endp);

  int native_base = mrb_fixnum(base);

  /* Invocation */
  Uint64 result = SDL_strtoull(native_str, native_endp, native_base);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_Uint64(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_strupr_FUNCTION
#define SDL_strupr_REQUIRED_ARGC 1
#define SDL_strupr_OPTIONAL_ARGC 0
/* SDL_strupr
 *
 * Parameters:
 * - str: char *
 * Return Type: char *
 */
mrb_value
mrb_SDL_SDL_strupr(mrb_state* mrb, mrb_value self) {
  mrb_value str;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &str);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, str, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  /* WARNING: Allocating new memory to create 'char *' from 'const char *'.
   *          Please verify that this memory is cleaned up correctly.
   *
   *          Has this been verified? [No]
   */
  char * native_str = strdup(mrb_string_value_cstr(mrb, &str));

  /* Invocation */
  char * result = SDL_strupr(native_str);

  /* Box the return value */
  mrb_value return_value = mrb_str_new_cstr(mrb, result);

  /* WARNING: Assuming that the new string can be deallocated after the function call.
   *          Please verify that this is correct (the function does not save this parameter).
   *
   *          Has this been verified? [No]
   */
  free(native_str);
  native_str = NULL;

  return return_value;
}
#endif

#if BIND_SDL_Swap16_FUNCTION
#define SDL_Swap16_REQUIRED_ARGC 1
#define SDL_Swap16_OPTIONAL_ARGC 0
/* SDL_Swap16
 *
 * Parameters:
 * - x: unsigned short
 * Return Type: Uint16
 */
mrb_value
mrb_SDL_SDL_Swap16(mrb_state* mrb, mrb_value self) {
  mrb_value x;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &x);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, x, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  unsigned short native_x = mrb_fixnum(x);

  /* Invocation */
  Uint16 result = SDL_Swap16(native_x);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_Uint16(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_Swap32_FUNCTION
#define SDL_Swap32_REQUIRED_ARGC 1
#define SDL_Swap32_OPTIONAL_ARGC 0
/* SDL_Swap32
 *
 * Parameters:
 * - x: unsigned int
 * Return Type: Uint32
 */
mrb_value
mrb_SDL_SDL_Swap32(mrb_state* mrb, mrb_value self) {
  mrb_value x;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &x);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, x, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  unsigned int native_x = mrb_fixnum(x);

  /* Invocation */
  Uint32 result = SDL_Swap32(native_x);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_Uint32(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_Swap64_FUNCTION
#define SDL_Swap64_REQUIRED_ARGC 1
#define SDL_Swap64_OPTIONAL_ARGC 0
/* SDL_Swap64
 *
 * Parameters:
 * - x: unsigned long long
 * Return Type: Uint64
 */
mrb_value
mrb_SDL_SDL_Swap64(mrb_state* mrb, mrb_value self) {
  mrb_value x;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &x);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, x, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  unsigned long long native_x = mrb_fixnum(x);

  /* Invocation */
  Uint64 result = SDL_Swap64(native_x);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_Uint64(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_SwapFloat_FUNCTION
#define SDL_SwapFloat_REQUIRED_ARGC 1
#define SDL_SwapFloat_OPTIONAL_ARGC 0
/* SDL_SwapFloat
 *
 * Parameters:
 * - x: float
 * Return Type: float
 */
mrb_value
mrb_SDL_SDL_SwapFloat(mrb_state* mrb, mrb_value self) {
  mrb_value x;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &x);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, x, mrb->float_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Float expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  float native_x = mrb_float(x);

  /* Invocation */
  float result = SDL_SwapFloat(native_x);

  /* Box the return value */
  mrb_value return_value = mrb_float_value(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_ThreadID_FUNCTION
#define SDL_ThreadID_REQUIRED_ARGC 0
#define SDL_ThreadID_OPTIONAL_ARGC 0
/* SDL_ThreadID
 *
 * Parameters: None
 * Return Type: SDL_threadID
 */
mrb_value
mrb_SDL_SDL_ThreadID(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  SDL_threadID result = SDL_ThreadID();

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_TLSCreate_FUNCTION
#define SDL_TLSCreate_REQUIRED_ARGC 0
#define SDL_TLSCreate_OPTIONAL_ARGC 0
/* SDL_TLSCreate
 *
 * Parameters: None
 * Return Type: SDL_TLSID
 */
mrb_value
mrb_SDL_SDL_TLSCreate(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  SDL_TLSID result = SDL_TLSCreate();

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_TLSGet_FUNCTION
#define SDL_TLSGet_REQUIRED_ARGC 1
#define SDL_TLSGet_OPTIONAL_ARGC 0
/* SDL_TLSGet
 *
 * Parameters:
 * - id: unsigned int
 * Return Type: void *
 */
mrb_value
mrb_SDL_SDL_TLSGet(mrb_state* mrb, mrb_value self) {
  mrb_value id;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &id);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, id, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  unsigned int native_id = mrb_fixnum(id);

  /* Invocation */
  void * result = SDL_TLSGet(native_id);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_void_PTR(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_TLSSet_FUNCTION
#define SDL_TLSSet_REQUIRED_ARGC 3
#define SDL_TLSSet_OPTIONAL_ARGC 0
/* SDL_TLSSet
 *
 * Parameters:
 * - id: unsigned int
 * - value: const void *
 * - destructor: void (*)(void *)
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_TLSSet(mrb_state* mrb, mrb_value self) {
  mrb_value id;
  mrb_value value;
  mrb_value destructor;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &id, &value, &destructor);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, id, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR(value);
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(destructor);


  /* Unbox parameters */
  unsigned int native_id = mrb_fixnum(id);

  const void * native_value = TODO_mruby_unbox_void_PTR(value);

  void (*native_destructor)(void *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(destructor);

  /* Invocation */
  int result = SDL_TLSSet(native_id, native_value, native_destructor);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_tolower_FUNCTION
#define SDL_tolower_REQUIRED_ARGC 1
#define SDL_tolower_OPTIONAL_ARGC 0
/* SDL_tolower
 *
 * Parameters:
 * - x: int
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_tolower(mrb_state* mrb, mrb_value self) {
  mrb_value x;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &x);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, x, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_x = mrb_fixnum(x);

  /* Invocation */
  int result = SDL_tolower(native_x);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_toupper_FUNCTION
#define SDL_toupper_REQUIRED_ARGC 1
#define SDL_toupper_OPTIONAL_ARGC 0
/* SDL_toupper
 *
 * Parameters:
 * - x: int
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_toupper(mrb_state* mrb, mrb_value self) {
  mrb_value x;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &x);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, x, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_x = mrb_fixnum(x);

  /* Invocation */
  int result = SDL_toupper(native_x);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_TryLockMutex_FUNCTION
#define SDL_TryLockMutex_REQUIRED_ARGC 1
#define SDL_TryLockMutex_OPTIONAL_ARGC 0
/* SDL_TryLockMutex
 *
 * Parameters:
 * - mutex: struct SDL_mutex *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_TryLockMutex(mrb_state* mrb, mrb_value self) {
  mrb_value mutex;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &mutex);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, mutex, SDLMutex_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLMutex expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_mutex * native_mutex = (mrb_nil_p(mutex) ? NULL : mruby_unbox_SDL_mutex(mutex));

  /* Invocation */
  int result = SDL_TryLockMutex(native_mutex);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_uitoa_FUNCTION
#define SDL_uitoa_REQUIRED_ARGC 3
#define SDL_uitoa_OPTIONAL_ARGC 0
/* SDL_uitoa
 *
 * Parameters:
 * - value: unsigned int
 * - str: char *
 * - radix: int
 * Return Type: char *
 */
mrb_value
mrb_SDL_SDL_uitoa(mrb_state* mrb, mrb_value self) {
  mrb_value value;
  mrb_value str;
  mrb_value radix;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &value, &str, &radix);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, value, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, str, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, radix, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  unsigned int native_value = mrb_fixnum(value);

  /* WARNING: Allocating new memory to create 'char *' from 'const char *'.
   *          Please verify that this memory is cleaned up correctly.
   *
   *          Has this been verified? [No]
   */
  char * native_str = strdup(mrb_string_value_cstr(mrb, &str));

  int native_radix = mrb_fixnum(radix);

  /* Invocation */
  char * result = SDL_uitoa(native_value, native_str, native_radix);

  /* Box the return value */
  mrb_value return_value = mrb_str_new_cstr(mrb, result);

  /* WARNING: Assuming that the new string can be deallocated after the function call.
   *          Please verify that this is correct (the function does not save this parameter).
   *
   *          Has this been verified? [No]
   */
  free(native_str);
  native_str = NULL;

  return return_value;
}
#endif

#if BIND_SDL_ulltoa_FUNCTION
#define SDL_ulltoa_REQUIRED_ARGC 3
#define SDL_ulltoa_OPTIONAL_ARGC 0
/* SDL_ulltoa
 *
 * Parameters:
 * - value: unsigned long long
 * - str: char *
 * - radix: int
 * Return Type: char *
 */
mrb_value
mrb_SDL_SDL_ulltoa(mrb_state* mrb, mrb_value self) {
  mrb_value value;
  mrb_value str;
  mrb_value radix;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &value, &str, &radix);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, value, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, str, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, radix, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  unsigned long long native_value = mrb_fixnum(value);

  /* WARNING: Allocating new memory to create 'char *' from 'const char *'.
   *          Please verify that this memory is cleaned up correctly.
   *
   *          Has this been verified? [No]
   */
  char * native_str = strdup(mrb_string_value_cstr(mrb, &str));

  int native_radix = mrb_fixnum(radix);

  /* Invocation */
  char * result = SDL_ulltoa(native_value, native_str, native_radix);

  /* Box the return value */
  mrb_value return_value = mrb_str_new_cstr(mrb, result);

  /* WARNING: Assuming that the new string can be deallocated after the function call.
   *          Please verify that this is correct (the function does not save this parameter).
   *
   *          Has this been verified? [No]
   */
  free(native_str);
  native_str = NULL;

  return return_value;
}
#endif

#if BIND_SDL_ultoa_FUNCTION
#define SDL_ultoa_REQUIRED_ARGC 3
#define SDL_ultoa_OPTIONAL_ARGC 0
/* SDL_ultoa
 *
 * Parameters:
 * - value: unsigned long
 * - str: char *
 * - radix: int
 * Return Type: char *
 */
mrb_value
mrb_SDL_SDL_ultoa(mrb_state* mrb, mrb_value self) {
  mrb_value value;
  mrb_value str;
  mrb_value radix;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &value, &str, &radix);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, value, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, str, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, radix, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  unsigned long native_value = mrb_fixnum(value);

  /* WARNING: Allocating new memory to create 'char *' from 'const char *'.
   *          Please verify that this memory is cleaned up correctly.
   *
   *          Has this been verified? [No]
   */
  char * native_str = strdup(mrb_string_value_cstr(mrb, &str));

  int native_radix = mrb_fixnum(radix);

  /* Invocation */
  char * result = SDL_ultoa(native_value, native_str, native_radix);

  /* Box the return value */
  mrb_value return_value = mrb_str_new_cstr(mrb, result);

  /* WARNING: Assuming that the new string can be deallocated after the function call.
   *          Please verify that this is correct (the function does not save this parameter).
   *
   *          Has this been verified? [No]
   */
  free(native_str);
  native_str = NULL;

  return return_value;
}
#endif

#if BIND_SDL_UnionRect_FUNCTION
#define SDL_UnionRect_REQUIRED_ARGC 3
#define SDL_UnionRect_OPTIONAL_ARGC 0
/* SDL_UnionRect
 *
 * Parameters:
 * - A: const struct SDL_Rect *
 * - B: const struct SDL_Rect *
 * - result: struct SDL_Rect *
 * Return Type: void
 */
mrb_value
mrb_SDL_SDL_UnionRect(mrb_state* mrb, mrb_value self) {
  mrb_value A;
  mrb_value B;
  mrb_value result;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &A, &B, &result);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, A, SDLRect_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRect expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, B, SDLRect_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRect expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, result, SDLRect_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRect expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  const struct SDL_Rect * native_A = (mrb_nil_p(A) ? NULL : mruby_unbox_SDL_Rect(A));

  const struct SDL_Rect * native_B = (mrb_nil_p(B) ? NULL : mruby_unbox_SDL_Rect(B));

  struct SDL_Rect * native_result = (mrb_nil_p(result) ? NULL : mruby_unbox_SDL_Rect(result));

  /* Invocation */
  SDL_UnionRect(native_A, native_B, native_result);

  return mrb_nil_value();
}
#endif

#if BIND_SDL_UnloadObject_FUNCTION
#define SDL_UnloadObject_REQUIRED_ARGC 1
#define SDL_UnloadObject_OPTIONAL_ARGC 0
/* SDL_UnloadObject
 *
 * Parameters:
 * - handle: void *
 * Return Type: void
 */
mrb_value
mrb_SDL_SDL_UnloadObject(mrb_state* mrb, mrb_value self) {
  mrb_value handle;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &handle);


  /* Type checking */
  TODO_type_check_void_PTR(handle);


  /* Unbox parameters */
  void * native_handle = TODO_mruby_unbox_void_PTR(handle);

  /* Invocation */
  SDL_UnloadObject(native_handle);

  return mrb_nil_value();
}
#endif

#if BIND_SDL_UnlockAudio_FUNCTION
#define SDL_UnlockAudio_REQUIRED_ARGC 0
#define SDL_UnlockAudio_OPTIONAL_ARGC 0
/* SDL_UnlockAudio
 *
 * Parameters: None
 * Return Type: void
 */
mrb_value
mrb_SDL_SDL_UnlockAudio(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  SDL_UnlockAudio();

  return mrb_nil_value();
}
#endif

#if BIND_SDL_UnlockAudioDevice_FUNCTION
#define SDL_UnlockAudioDevice_REQUIRED_ARGC 1
#define SDL_UnlockAudioDevice_OPTIONAL_ARGC 0
/* SDL_UnlockAudioDevice
 *
 * Parameters:
 * - dev: unsigned int
 * Return Type: void
 */
mrb_value
mrb_SDL_SDL_UnlockAudioDevice(mrb_state* mrb, mrb_value self) {
  mrb_value dev;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &dev);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, dev, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  unsigned int native_dev = mrb_fixnum(dev);

  /* Invocation */
  SDL_UnlockAudioDevice(native_dev);

  return mrb_nil_value();
}
#endif

#if BIND_SDL_UnlockMutex_FUNCTION
#define SDL_UnlockMutex_REQUIRED_ARGC 1
#define SDL_UnlockMutex_OPTIONAL_ARGC 0
/* SDL_UnlockMutex
 *
 * Parameters:
 * - mutex: struct SDL_mutex *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_UnlockMutex(mrb_state* mrb, mrb_value self) {
  mrb_value mutex;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &mutex);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, mutex, SDLMutex_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLMutex expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_mutex * native_mutex = (mrb_nil_p(mutex) ? NULL : mruby_unbox_SDL_mutex(mutex));

  /* Invocation */
  int result = SDL_UnlockMutex(native_mutex);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_UnlockSurface_FUNCTION
#define SDL_UnlockSurface_REQUIRED_ARGC 1
#define SDL_UnlockSurface_OPTIONAL_ARGC 0
/* SDL_UnlockSurface
 *
 * Parameters:
 * - surface: struct SDL_Surface *
 * Return Type: void
 */
mrb_value
mrb_SDL_SDL_UnlockSurface(mrb_state* mrb, mrb_value self) {
  mrb_value surface;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &surface);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, surface, SDLSurface_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLSurface expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_Surface * native_surface = (mrb_nil_p(surface) ? NULL : mruby_unbox_SDL_Surface(surface));

  /* Invocation */
  SDL_UnlockSurface(native_surface);

  return mrb_nil_value();
}
#endif

#if BIND_SDL_UnlockTexture_FUNCTION
#define SDL_UnlockTexture_REQUIRED_ARGC 1
#define SDL_UnlockTexture_OPTIONAL_ARGC 0
/* SDL_UnlockTexture
 *
 * Parameters:
 * - texture: struct SDL_Texture *
 * Return Type: void
 */
mrb_value
mrb_SDL_SDL_UnlockTexture(mrb_state* mrb, mrb_value self) {
  mrb_value texture;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &texture);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, texture, SDLTexture_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLTexture expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_Texture * native_texture = (mrb_nil_p(texture) ? NULL : mruby_unbox_SDL_Texture(texture));

  /* Invocation */
  SDL_UnlockTexture(native_texture);

  return mrb_nil_value();
}
#endif

#if BIND_SDL_UpdateTexture_FUNCTION
#define SDL_UpdateTexture_REQUIRED_ARGC 4
#define SDL_UpdateTexture_OPTIONAL_ARGC 0
/* SDL_UpdateTexture
 *
 * Parameters:
 * - texture: struct SDL_Texture *
 * - rect: const struct SDL_Rect *
 * - pixels: const void *
 * - pitch: int
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_UpdateTexture(mrb_state* mrb, mrb_value self) {
  mrb_value texture;
  mrb_value rect;
  mrb_value pixels;
  mrb_value pitch;

  /* Fetch the args */
  mrb_get_args(mrb, "oooo", &texture, &rect, &pixels, &pitch);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, texture, SDLTexture_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLTexture expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, rect, SDLRect_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRect expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR(pixels);
  if (!mrb_obj_is_kind_of(mrb, pitch, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_Texture * native_texture = (mrb_nil_p(texture) ? NULL : mruby_unbox_SDL_Texture(texture));

  const struct SDL_Rect * native_rect = (mrb_nil_p(rect) ? NULL : mruby_unbox_SDL_Rect(rect));

  const void * native_pixels = TODO_mruby_unbox_void_PTR(pixels);

  int native_pitch = mrb_fixnum(pitch);

  /* Invocation */
  int result = SDL_UpdateTexture(native_texture, native_rect, native_pixels, native_pitch);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_UpdateWindowSurface_FUNCTION
#define SDL_UpdateWindowSurface_REQUIRED_ARGC 1
#define SDL_UpdateWindowSurface_OPTIONAL_ARGC 0
/* SDL_UpdateWindowSurface
 *
 * Parameters:
 * - window: struct SDL_Window *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_UpdateWindowSurface(mrb_state* mrb, mrb_value self) {
  mrb_value window;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &window);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, window, SDLWindow_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLWindow expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_Window * native_window = (mrb_nil_p(window) ? NULL : mruby_unbox_SDL_Window(window));

  /* Invocation */
  int result = SDL_UpdateWindowSurface(native_window);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_UpdateWindowSurfaceRects_FUNCTION
#define SDL_UpdateWindowSurfaceRects_REQUIRED_ARGC 3
#define SDL_UpdateWindowSurfaceRects_OPTIONAL_ARGC 0
/* SDL_UpdateWindowSurfaceRects
 *
 * Parameters:
 * - window: struct SDL_Window *
 * - rects: const struct SDL_Rect *
 * - numrects: int
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_UpdateWindowSurfaceRects(mrb_state* mrb, mrb_value self) {
  mrb_value window;
  mrb_value rects;
  mrb_value numrects;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &window, &rects, &numrects);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, window, SDLWindow_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLWindow expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, rects, SDLRect_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRect expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, numrects, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_Window * native_window = (mrb_nil_p(window) ? NULL : mruby_unbox_SDL_Window(window));

  const struct SDL_Rect * native_rects = (mrb_nil_p(rects) ? NULL : mruby_unbox_SDL_Rect(rects));

  int native_numrects = mrb_fixnum(numrects);

  /* Invocation */
  int result = SDL_UpdateWindowSurfaceRects(native_window, native_rects, native_numrects);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_UpdateYUVTexture_FUNCTION
#define SDL_UpdateYUVTexture_REQUIRED_ARGC 8
#define SDL_UpdateYUVTexture_OPTIONAL_ARGC 0
/* SDL_UpdateYUVTexture
 *
 * Parameters:
 * - texture: struct SDL_Texture *
 * - rect: const struct SDL_Rect *
 * - Yplane: const unsigned char *
 * - Ypitch: int
 * - Uplane: const unsigned char *
 * - Upitch: int
 * - Vplane: const unsigned char *
 * - Vpitch: int
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_UpdateYUVTexture(mrb_state* mrb, mrb_value self) {
  mrb_value texture;
  mrb_value rect;
  mrb_value Yplane;
  mrb_value Ypitch;
  mrb_value Uplane;
  mrb_value Upitch;
  mrb_value Vplane;
  mrb_value Vpitch;

  /* Fetch the args */
  mrb_get_args(mrb, "oooooooo", &texture, &rect, &Yplane, &Ypitch, &Uplane, &Upitch, &Vplane, &Vpitch);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, texture, SDLTexture_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLTexture expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, rect, SDLRect_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRect expected");
    return mrb_nil_value();
  }
  TODO_type_check_unsigned_char_PTR(Yplane);
  if (!mrb_obj_is_kind_of(mrb, Ypitch, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_unsigned_char_PTR(Uplane);
  if (!mrb_obj_is_kind_of(mrb, Upitch, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_unsigned_char_PTR(Vplane);
  if (!mrb_obj_is_kind_of(mrb, Vpitch, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_Texture * native_texture = (mrb_nil_p(texture) ? NULL : mruby_unbox_SDL_Texture(texture));

  const struct SDL_Rect * native_rect = (mrb_nil_p(rect) ? NULL : mruby_unbox_SDL_Rect(rect));

  const unsigned char * native_Yplane = TODO_mruby_unbox_unsigned_char_PTR(Yplane);

  int native_Ypitch = mrb_fixnum(Ypitch);

  const unsigned char * native_Uplane = TODO_mruby_unbox_unsigned_char_PTR(Uplane);

  int native_Upitch = mrb_fixnum(Upitch);

  const unsigned char * native_Vplane = TODO_mruby_unbox_unsigned_char_PTR(Vplane);

  int native_Vpitch = mrb_fixnum(Vpitch);

  /* Invocation */
  int result = SDL_UpdateYUVTexture(native_texture, native_rect, native_Yplane, native_Ypitch, native_Uplane, native_Upitch, native_Vplane, native_Vpitch);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_UpperBlit_FUNCTION
#define SDL_UpperBlit_REQUIRED_ARGC 4
#define SDL_UpperBlit_OPTIONAL_ARGC 0
/* SDL_UpperBlit
 *
 * Parameters:
 * - src: struct SDL_Surface *
 * - srcrect: const struct SDL_Rect *
 * - dst: struct SDL_Surface *
 * - dstrect: struct SDL_Rect *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_UpperBlit(mrb_state* mrb, mrb_value self) {
  mrb_value src;
  mrb_value srcrect;
  mrb_value dst;
  mrb_value dstrect;

  /* Fetch the args */
  mrb_get_args(mrb, "oooo", &src, &srcrect, &dst, &dstrect);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, src, SDLSurface_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLSurface expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, srcrect, SDLRect_class(mrb)) && !mrb_nil_p(srcrect)) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRect expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, dst, SDLSurface_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLSurface expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, dstrect, SDLRect_class(mrb)) && !mrb_nil_p(srcrect)) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRect expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_Surface * native_src = (mrb_nil_p(src) ? NULL : mruby_unbox_SDL_Surface(src));

  const struct SDL_Rect * native_srcrect = (mrb_nil_p(srcrect) ? NULL : mruby_unbox_SDL_Rect(srcrect));

  struct SDL_Surface * native_dst = (mrb_nil_p(dst) ? NULL : mruby_unbox_SDL_Surface(dst));

  struct SDL_Rect * native_dstrect = (mrb_nil_p(dstrect) ? NULL : mruby_unbox_SDL_Rect(dstrect));

  /* Invocation */
  int result = SDL_UpperBlit(native_src, native_srcrect, native_dst, native_dstrect);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_UpperBlitScaled_FUNCTION
#define SDL_UpperBlitScaled_REQUIRED_ARGC 4
#define SDL_UpperBlitScaled_OPTIONAL_ARGC 0
/* SDL_UpperBlitScaled
 *
 * Parameters:
 * - src: struct SDL_Surface *
 * - srcrect: const struct SDL_Rect *
 * - dst: struct SDL_Surface *
 * - dstrect: struct SDL_Rect *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_UpperBlitScaled(mrb_state* mrb, mrb_value self) {
  mrb_value src;
  mrb_value srcrect;
  mrb_value dst;
  mrb_value dstrect;

  /* Fetch the args */
  mrb_get_args(mrb, "oooo", &src, &srcrect, &dst, &dstrect);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, src, SDLSurface_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLSurface expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, srcrect, SDLRect_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRect expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, dst, SDLSurface_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLSurface expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, dstrect, SDLRect_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRect expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_Surface * native_src = (mrb_nil_p(src) ? NULL : mruby_unbox_SDL_Surface(src));

  const struct SDL_Rect * native_srcrect = (mrb_nil_p(srcrect) ? NULL : mruby_unbox_SDL_Rect(srcrect));

  struct SDL_Surface * native_dst = (mrb_nil_p(dst) ? NULL : mruby_unbox_SDL_Surface(dst));

  struct SDL_Rect * native_dstrect = (mrb_nil_p(dstrect) ? NULL : mruby_unbox_SDL_Rect(dstrect));

  /* Invocation */
  int result = SDL_UpperBlitScaled(native_src, native_srcrect, native_dst, native_dstrect);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_utf8strlcpy_FUNCTION
#define SDL_utf8strlcpy_REQUIRED_ARGC 3
#define SDL_utf8strlcpy_OPTIONAL_ARGC 0
/* SDL_utf8strlcpy
 *
 * Parameters:
 * - dst: char *
 * - src: const char *
 * - dst_bytes: unsigned long
 * Return Type: size_t
 */
mrb_value
mrb_SDL_SDL_utf8strlcpy(mrb_state* mrb, mrb_value self) {
  mrb_value dst;
  mrb_value src;
  mrb_value dst_bytes;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &dst, &src, &dst_bytes);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, dst, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, src, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, dst_bytes, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  /* WARNING: Allocating new memory to create 'char *' from 'const char *'.
   *          Please verify that this memory is cleaned up correctly.
   *
   *          Has this been verified? [No]
   */
  char * native_dst = strdup(mrb_string_value_cstr(mrb, &dst));

  const char * native_src = mrb_string_value_cstr(mrb, &src);

  unsigned long native_dst_bytes = mrb_fixnum(dst_bytes);

  /* Invocation */
  size_t result = SDL_utf8strlcpy(native_dst, native_src, native_dst_bytes);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_size_t(mrb, result);

  /* WARNING: Assuming that the new string can be deallocated after the function call.
   *          Please verify that this is correct (the function does not save this parameter).
   *
   *          Has this been verified? [No]
   */
  free(native_dst);
  native_dst = NULL;

  return return_value;
}
#endif

#if BIND_SDL_VideoInit_FUNCTION
#define SDL_VideoInit_REQUIRED_ARGC 1
#define SDL_VideoInit_OPTIONAL_ARGC 0
/* SDL_VideoInit
 *
 * Parameters:
 * - driver_name: const char *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_VideoInit(mrb_state* mrb, mrb_value self) {
  mrb_value driver_name;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &driver_name);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, driver_name, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  const char * native_driver_name = mrb_string_value_cstr(mrb, &driver_name);

  /* Invocation */
  int result = SDL_VideoInit(native_driver_name);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_VideoQuit_FUNCTION
#define SDL_VideoQuit_REQUIRED_ARGC 0
#define SDL_VideoQuit_OPTIONAL_ARGC 0
/* SDL_VideoQuit
 *
 * Parameters: None
 * Return Type: void
 */
mrb_value
mrb_SDL_SDL_VideoQuit(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  SDL_VideoQuit();

  return mrb_nil_value();
}
#endif

#if BIND_SDL_vsnprintf_FUNCTION
#define SDL_vsnprintf_REQUIRED_ARGC 4
#define SDL_vsnprintf_OPTIONAL_ARGC 0
/* SDL_vsnprintf
 *
 * Parameters:
 * - text: char *
 * - maxlen: unsigned long
 * - fmt: const char *
 * - ap: struct __va_list_tag [1]
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_vsnprintf(mrb_state* mrb, mrb_value self) {
  mrb_value text;
  mrb_value maxlen;
  mrb_value fmt;
  mrb_value ap;

  /* Fetch the args */
  mrb_get_args(mrb, "oooo", &text, &maxlen, &fmt, &ap);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, text, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, maxlen, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, fmt, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  TODO_type_check___va_list_tag_[1](ap);


  /* Unbox parameters */
  /* WARNING: Allocating new memory to create 'char *' from 'const char *'.
   *          Please verify that this memory is cleaned up correctly.
   *
   *          Has this been verified? [No]
   */
  char * native_text = strdup(mrb_string_value_cstr(mrb, &text));

  unsigned long native_maxlen = mrb_fixnum(maxlen);

  const char * native_fmt = mrb_string_value_cstr(mrb, &fmt);

  struct __va_list_tag [1] native_ap = TODO_mruby_unbox___va_list_tag_[1](ap);

  /* Invocation */
  int result = SDL_vsnprintf(native_text, native_maxlen, native_fmt, native_ap);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  /* WARNING: Assuming that the new string can be deallocated after the function call.
   *          Please verify that this is correct (the function does not save this parameter).
   *
   *          Has this been verified? [No]
   */
  free(native_text);
  native_text = NULL;

  return return_value;
}
#endif

#if BIND_SDL_vsscanf_FUNCTION
#define SDL_vsscanf_REQUIRED_ARGC 3
#define SDL_vsscanf_OPTIONAL_ARGC 0
/* SDL_vsscanf
 *
 * Parameters:
 * - text: const char *
 * - fmt: const char *
 * - ap: struct __va_list_tag [1]
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_vsscanf(mrb_state* mrb, mrb_value self) {
  mrb_value text;
  mrb_value fmt;
  mrb_value ap;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &text, &fmt, &ap);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, text, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, fmt, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  TODO_type_check___va_list_tag_[1](ap);


  /* Unbox parameters */
  const char * native_text = mrb_string_value_cstr(mrb, &text);

  const char * native_fmt = mrb_string_value_cstr(mrb, &fmt);

  struct __va_list_tag [1] native_ap = TODO_mruby_unbox___va_list_tag_[1](ap);

  /* Invocation */
  int result = SDL_vsscanf(native_text, native_fmt, native_ap);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_WaitEvent_FUNCTION
#define SDL_WaitEvent_REQUIRED_ARGC 1
#define SDL_WaitEvent_OPTIONAL_ARGC 0
/* SDL_WaitEvent
 *
 * Parameters:
 * - event: union SDL_Event *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_WaitEvent(mrb_state* mrb, mrb_value self) {
  mrb_value event;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &event);


  /* Type checking */
  TODO_type_check_union_SDL_Event_PTR(event);


  /* Unbox parameters */
  union SDL_Event * native_event = TODO_mruby_unbox_union_SDL_Event_PTR(event);

  /* Invocation */
  int result = SDL_WaitEvent(native_event);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_WaitEventTimeout_FUNCTION
#define SDL_WaitEventTimeout_REQUIRED_ARGC 2
#define SDL_WaitEventTimeout_OPTIONAL_ARGC 0
/* SDL_WaitEventTimeout
 *
 * Parameters:
 * - event: union SDL_Event *
 * - timeout: int
 * Return Type: int
 */
mrb_value
mrb_SDL_SDL_WaitEventTimeout(mrb_state* mrb, mrb_value self) {
  mrb_value event;
  mrb_value timeout;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &event, &timeout);


  /* Type checking */
  TODO_type_check_union_SDL_Event_PTR(event);
  if (!mrb_obj_is_kind_of(mrb, timeout, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  union SDL_Event * native_event = TODO_mruby_unbox_union_SDL_Event_PTR(event);

  int native_timeout = mrb_fixnum(timeout);

  /* Invocation */
  int result = SDL_WaitEventTimeout(native_event, native_timeout);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDL_WaitThread_FUNCTION
#define SDL_WaitThread_REQUIRED_ARGC 2
#define SDL_WaitThread_OPTIONAL_ARGC 0
/* SDL_WaitThread
 *
 * Parameters:
 * - thread: struct SDL_Thread *
 * - status: int *
 * Return Type: void
 */
mrb_value
mrb_SDL_SDL_WaitThread(mrb_state* mrb, mrb_value self) {
  mrb_value thread;
  mrb_value status;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &thread, &status);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, thread, SDLThread_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLThread expected");
    return mrb_nil_value();
  }
  TODO_type_check_int_PTR(status);


  /* Unbox parameters */
  struct SDL_Thread * native_thread = (mrb_nil_p(thread) ? NULL : mruby_unbox_SDL_Thread(thread));

  int * native_status = TODO_mruby_unbox_int_PTR(status);

  /* Invocation */
  SDL_WaitThread(native_thread, native_status);

  return mrb_nil_value();
}
#endif

#if BIND_SDL_WarpMouseInWindow_FUNCTION
#define SDL_WarpMouseInWindow_REQUIRED_ARGC 3
#define SDL_WarpMouseInWindow_OPTIONAL_ARGC 0
/* SDL_WarpMouseInWindow
 *
 * Parameters:
 * - window: struct SDL_Window *
 * - x: int
 * - y: int
 * Return Type: void
 */
mrb_value
mrb_SDL_SDL_WarpMouseInWindow(mrb_state* mrb, mrb_value self) {
  mrb_value window;
  mrb_value x;
  mrb_value y;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &window, &x, &y);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, window, SDLWindow_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLWindow expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, x, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, y, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_Window * native_window = (mrb_nil_p(window) ? NULL : mruby_unbox_SDL_Window(window));

  int native_x = mrb_fixnum(x);

  int native_y = mrb_fixnum(y);

  /* Invocation */
  SDL_WarpMouseInWindow(native_window, native_x, native_y);

  return mrb_nil_value();
}
#endif

#if BIND_SDL_WasInit_FUNCTION
#define SDL_WasInit_REQUIRED_ARGC 1
#define SDL_WasInit_OPTIONAL_ARGC 0
/* SDL_WasInit
 *
 * Parameters:
 * - flags: unsigned int
 * Return Type: Uint32
 */
mrb_value
mrb_SDL_SDL_WasInit(mrb_state* mrb, mrb_value self) {
  mrb_value flags;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &flags);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, flags, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  unsigned int native_flags = mrb_fixnum(flags);

  /* Invocation */
  Uint32 result = SDL_WasInit(native_flags);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_Uint32(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_wcslcat_FUNCTION
#define SDL_wcslcat_REQUIRED_ARGC 3
#define SDL_wcslcat_OPTIONAL_ARGC 0
/* SDL_wcslcat
 *
 * Parameters:
 * - dst: int *
 * - src: const int *
 * - maxlen: unsigned long
 * Return Type: size_t
 */
mrb_value
mrb_SDL_SDL_wcslcat(mrb_state* mrb, mrb_value self) {
  mrb_value dst;
  mrb_value src;
  mrb_value maxlen;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &dst, &src, &maxlen);


  /* Type checking */
  TODO_type_check_int_PTR(dst);
  TODO_type_check_int_PTR(src);
  if (!mrb_obj_is_kind_of(mrb, maxlen, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int * native_dst = TODO_mruby_unbox_int_PTR(dst);

  const int * native_src = TODO_mruby_unbox_int_PTR(src);

  unsigned long native_maxlen = mrb_fixnum(maxlen);

  /* Invocation */
  size_t result = SDL_wcslcat(native_dst, native_src, native_maxlen);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_size_t(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_wcslcpy_FUNCTION
#define SDL_wcslcpy_REQUIRED_ARGC 3
#define SDL_wcslcpy_OPTIONAL_ARGC 0
/* SDL_wcslcpy
 *
 * Parameters:
 * - dst: int *
 * - src: const int *
 * - maxlen: unsigned long
 * Return Type: size_t
 */
mrb_value
mrb_SDL_SDL_wcslcpy(mrb_state* mrb, mrb_value self) {
  mrb_value dst;
  mrb_value src;
  mrb_value maxlen;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &dst, &src, &maxlen);


  /* Type checking */
  TODO_type_check_int_PTR(dst);
  TODO_type_check_int_PTR(src);
  if (!mrb_obj_is_kind_of(mrb, maxlen, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int * native_dst = TODO_mruby_unbox_int_PTR(dst);

  const int * native_src = TODO_mruby_unbox_int_PTR(src);

  unsigned long native_maxlen = mrb_fixnum(maxlen);

  /* Invocation */
  size_t result = SDL_wcslcpy(native_dst, native_src, native_maxlen);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_size_t(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_wcslen_FUNCTION
#define SDL_wcslen_REQUIRED_ARGC 1
#define SDL_wcslen_OPTIONAL_ARGC 0
/* SDL_wcslen
 *
 * Parameters:
 * - wstr: const int *
 * Return Type: size_t
 */
mrb_value
mrb_SDL_SDL_wcslen(mrb_state* mrb, mrb_value self) {
  mrb_value wstr;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &wstr);


  /* Type checking */
  TODO_type_check_int_PTR(wstr);


  /* Unbox parameters */
  const int * native_wstr = TODO_mruby_unbox_int_PTR(wstr);

  /* Invocation */
  size_t result = SDL_wcslen(native_wstr);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_size_t(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_WriteBE16_FUNCTION
#define SDL_WriteBE16_REQUIRED_ARGC 2
#define SDL_WriteBE16_OPTIONAL_ARGC 0
/* SDL_WriteBE16
 *
 * Parameters:
 * - dst: struct SDL_RWops *
 * - value: unsigned short
 * Return Type: size_t
 */
mrb_value
mrb_SDL_SDL_WriteBE16(mrb_state* mrb, mrb_value self) {
  mrb_value dst;
  mrb_value value;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &dst, &value);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, dst, SDLRWops_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRWops expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, value, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_RWops * native_dst = (mrb_nil_p(dst) ? NULL : mruby_unbox_SDL_RWops(dst));

  unsigned short native_value = mrb_fixnum(value);

  /* Invocation */
  size_t result = SDL_WriteBE16(native_dst, native_value);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_size_t(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_WriteBE32_FUNCTION
#define SDL_WriteBE32_REQUIRED_ARGC 2
#define SDL_WriteBE32_OPTIONAL_ARGC 0
/* SDL_WriteBE32
 *
 * Parameters:
 * - dst: struct SDL_RWops *
 * - value: unsigned int
 * Return Type: size_t
 */
mrb_value
mrb_SDL_SDL_WriteBE32(mrb_state* mrb, mrb_value self) {
  mrb_value dst;
  mrb_value value;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &dst, &value);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, dst, SDLRWops_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRWops expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, value, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_RWops * native_dst = (mrb_nil_p(dst) ? NULL : mruby_unbox_SDL_RWops(dst));

  unsigned int native_value = mrb_fixnum(value);

  /* Invocation */
  size_t result = SDL_WriteBE32(native_dst, native_value);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_size_t(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_WriteBE64_FUNCTION
#define SDL_WriteBE64_REQUIRED_ARGC 2
#define SDL_WriteBE64_OPTIONAL_ARGC 0
/* SDL_WriteBE64
 *
 * Parameters:
 * - dst: struct SDL_RWops *
 * - value: unsigned long long
 * Return Type: size_t
 */
mrb_value
mrb_SDL_SDL_WriteBE64(mrb_state* mrb, mrb_value self) {
  mrb_value dst;
  mrb_value value;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &dst, &value);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, dst, SDLRWops_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRWops expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, value, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_RWops * native_dst = (mrb_nil_p(dst) ? NULL : mruby_unbox_SDL_RWops(dst));

  unsigned long long native_value = mrb_fixnum(value);

  /* Invocation */
  size_t result = SDL_WriteBE64(native_dst, native_value);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_size_t(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_WriteLE16_FUNCTION
#define SDL_WriteLE16_REQUIRED_ARGC 2
#define SDL_WriteLE16_OPTIONAL_ARGC 0
/* SDL_WriteLE16
 *
 * Parameters:
 * - dst: struct SDL_RWops *
 * - value: unsigned short
 * Return Type: size_t
 */
mrb_value
mrb_SDL_SDL_WriteLE16(mrb_state* mrb, mrb_value self) {
  mrb_value dst;
  mrb_value value;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &dst, &value);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, dst, SDLRWops_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRWops expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, value, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_RWops * native_dst = (mrb_nil_p(dst) ? NULL : mruby_unbox_SDL_RWops(dst));

  unsigned short native_value = mrb_fixnum(value);

  /* Invocation */
  size_t result = SDL_WriteLE16(native_dst, native_value);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_size_t(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_WriteLE32_FUNCTION
#define SDL_WriteLE32_REQUIRED_ARGC 2
#define SDL_WriteLE32_OPTIONAL_ARGC 0
/* SDL_WriteLE32
 *
 * Parameters:
 * - dst: struct SDL_RWops *
 * - value: unsigned int
 * Return Type: size_t
 */
mrb_value
mrb_SDL_SDL_WriteLE32(mrb_state* mrb, mrb_value self) {
  mrb_value dst;
  mrb_value value;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &dst, &value);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, dst, SDLRWops_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRWops expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, value, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_RWops * native_dst = (mrb_nil_p(dst) ? NULL : mruby_unbox_SDL_RWops(dst));

  unsigned int native_value = mrb_fixnum(value);

  /* Invocation */
  size_t result = SDL_WriteLE32(native_dst, native_value);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_size_t(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_WriteLE64_FUNCTION
#define SDL_WriteLE64_REQUIRED_ARGC 2
#define SDL_WriteLE64_OPTIONAL_ARGC 0
/* SDL_WriteLE64
 *
 * Parameters:
 * - dst: struct SDL_RWops *
 * - value: unsigned long long
 * Return Type: size_t
 */
mrb_value
mrb_SDL_SDL_WriteLE64(mrb_state* mrb, mrb_value self) {
  mrb_value dst;
  mrb_value value;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &dst, &value);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, dst, SDLRWops_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRWops expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, value, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_RWops * native_dst = (mrb_nil_p(dst) ? NULL : mruby_unbox_SDL_RWops(dst));

  unsigned long long native_value = mrb_fixnum(value);

  /* Invocation */
  size_t result = SDL_WriteLE64(native_dst, native_value);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_size_t(mrb, result);

  return return_value;
}
#endif

#if BIND_SDL_WriteU8_FUNCTION
#define SDL_WriteU8_REQUIRED_ARGC 2
#define SDL_WriteU8_OPTIONAL_ARGC 0
/* SDL_WriteU8
 *
 * Parameters:
 * - dst: struct SDL_RWops *
 * - value: unsigned char
 * Return Type: size_t
 */
mrb_value
mrb_SDL_SDL_WriteU8(mrb_state* mrb, mrb_value self) {
  mrb_value dst;
  mrb_value value;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &dst, &value);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, dst, SDLRWops_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLRWops expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, value, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_RWops * native_dst = (mrb_nil_p(dst) ? NULL : mruby_unbox_SDL_RWops(dst));

  unsigned char native_value = *mrb_string_value_ptr(mrb, value);

  /* Invocation */
  size_t result = SDL_WriteU8(native_dst, native_value);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_size_t(mrb, result);

  return return_value;
}
#endif

#if BIND_SDLTest_Assert_FUNCTION
#define SDLTest_Assert_REQUIRED_ARGC 2
#define SDLTest_Assert_OPTIONAL_ARGC 0
/* SDLTest_Assert
 *
 * Parameters:
 * - assertCondition: int
 * - assertDescription: const char *
 * Return Type: void
 */
mrb_value
mrb_SDL_SDLTest_Assert(mrb_state* mrb, mrb_value self) {
  mrb_value assertCondition;
  mrb_value assertDescription;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &assertCondition, &assertDescription);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, assertCondition, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, assertDescription, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_assertCondition = mrb_fixnum(assertCondition);

  const char * native_assertDescription = mrb_string_value_cstr(mrb, &assertDescription);

  /* Invocation */
  SDLTest_Assert(native_assertCondition, native_assertDescription);

  return mrb_nil_value();
}
#endif

#if BIND_SDLTest_AssertCheck_FUNCTION
#define SDLTest_AssertCheck_REQUIRED_ARGC 2
#define SDLTest_AssertCheck_OPTIONAL_ARGC 0
/* SDLTest_AssertCheck
 *
 * Parameters:
 * - assertCondition: int
 * - assertDescription: const char *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDLTest_AssertCheck(mrb_state* mrb, mrb_value self) {
  mrb_value assertCondition;
  mrb_value assertDescription;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &assertCondition, &assertDescription);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, assertCondition, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, assertDescription, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_assertCondition = mrb_fixnum(assertCondition);

  const char * native_assertDescription = mrb_string_value_cstr(mrb, &assertDescription);

  /* Invocation */
  int result = SDLTest_AssertCheck(native_assertCondition, native_assertDescription);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDLTest_AssertPass_FUNCTION
#define SDLTest_AssertPass_REQUIRED_ARGC 1
#define SDLTest_AssertPass_OPTIONAL_ARGC 0
/* SDLTest_AssertPass
 *
 * Parameters:
 * - assertDescription: const char *
 * Return Type: void
 */
mrb_value
mrb_SDL_SDLTest_AssertPass(mrb_state* mrb, mrb_value self) {
  mrb_value assertDescription;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &assertDescription);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, assertDescription, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  const char * native_assertDescription = mrb_string_value_cstr(mrb, &assertDescription);

  /* Invocation */
  SDLTest_AssertPass(native_assertDescription);

  return mrb_nil_value();
}
#endif

#if BIND_SDLTest_AssertSummaryToTestResult_FUNCTION
#define SDLTest_AssertSummaryToTestResult_REQUIRED_ARGC 0
#define SDLTest_AssertSummaryToTestResult_OPTIONAL_ARGC 0
/* SDLTest_AssertSummaryToTestResult
 *
 * Parameters: None
 * Return Type: int
 */
mrb_value
mrb_SDL_SDLTest_AssertSummaryToTestResult(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  int result = SDLTest_AssertSummaryToTestResult();

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDLTest_CommonArg_FUNCTION
#define SDLTest_CommonArg_REQUIRED_ARGC 2
#define SDLTest_CommonArg_OPTIONAL_ARGC 0
/* SDLTest_CommonArg
 *
 * Parameters:
 * - state: SDLTest_CommonState *
 * - index: int
 * Return Type: int
 */
mrb_value
mrb_SDL_SDLTest_CommonArg(mrb_state* mrb, mrb_value self) {
  mrb_value state;
  mrb_value index;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &state, &index);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, state, SDLTestCommonState_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLTestCommonState expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, index, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  SDLTest_CommonState * native_state = (mrb_nil_p(state) ? NULL : mruby_unbox_SDLTest_CommonState(state));

  int native_index = mrb_fixnum(index);

  /* Invocation */
  int result = SDLTest_CommonArg(native_state, native_index);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDLTest_CommonCreateState_FUNCTION
#define SDLTest_CommonCreateState_REQUIRED_ARGC 2
#define SDLTest_CommonCreateState_OPTIONAL_ARGC 0
/* SDLTest_CommonCreateState
 *
 * Parameters:
 * - argv: char **
 * - flags: unsigned int
 * Return Type: SDLTest_CommonState *
 */
mrb_value
mrb_SDL_SDLTest_CommonCreateState(mrb_state* mrb, mrb_value self) {
  mrb_value argv;
  mrb_value flags;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &argv, &flags);


  /* Type checking */
  TODO_type_check_char_PTR_PTR(argv);
  if (!mrb_obj_is_kind_of(mrb, flags, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  char ** native_argv = TODO_mruby_unbox_char_PTR_PTR(argv);

  unsigned int native_flags = mrb_fixnum(flags);

  /* Invocation */
  SDLTest_CommonState * result = SDLTest_CommonCreateState(native_argv, native_flags);

  /* Box the return value */
  mrb_value return_value = (result == NULL ? mrb_nil_value() : mruby_box_SDLTest_CommonState(mrb, result));

  return return_value;
}
#endif

#if BIND_SDLTest_CommonEvent_FUNCTION
#define SDLTest_CommonEvent_REQUIRED_ARGC 3
#define SDLTest_CommonEvent_OPTIONAL_ARGC 0
/* SDLTest_CommonEvent
 *
 * Parameters:
 * - state: SDLTest_CommonState *
 * - event: union SDL_Event *
 * - done: int *
 * Return Type: void
 */
mrb_value
mrb_SDL_SDLTest_CommonEvent(mrb_state* mrb, mrb_value self) {
  mrb_value state;
  mrb_value event;
  mrb_value done;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &state, &event, &done);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, state, SDLTestCommonState_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLTestCommonState expected");
    return mrb_nil_value();
  }
  TODO_type_check_union_SDL_Event_PTR(event);
  TODO_type_check_int_PTR(done);


  /* Unbox parameters */
  SDLTest_CommonState * native_state = (mrb_nil_p(state) ? NULL : mruby_unbox_SDLTest_CommonState(state));

  union SDL_Event * native_event = TODO_mruby_unbox_union_SDL_Event_PTR(event);

  int * native_done = TODO_mruby_unbox_int_PTR(done);

  /* Invocation */
  SDLTest_CommonEvent(native_state, native_event, native_done);

  return mrb_nil_value();
}
#endif

#if BIND_SDLTest_CommonInit_FUNCTION
#define SDLTest_CommonInit_REQUIRED_ARGC 1
#define SDLTest_CommonInit_OPTIONAL_ARGC 0
/* SDLTest_CommonInit
 *
 * Parameters:
 * - state: SDLTest_CommonState *
 * Return Type: SDL_bool
 */
mrb_value
mrb_SDL_SDLTest_CommonInit(mrb_state* mrb, mrb_value self) {
  mrb_value state;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &state);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, state, SDLTestCommonState_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLTestCommonState expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  SDLTest_CommonState * native_state = (mrb_nil_p(state) ? NULL : mruby_unbox_SDLTest_CommonState(state));

  /* Invocation */
  SDL_bool result = SDLTest_CommonInit(native_state);

  /* Box the return value */
  mrb_value return_value = mrb_bool_value((mrb_bool)result);

  return return_value;
}
#endif

#if BIND_SDLTest_CommonQuit_FUNCTION
#define SDLTest_CommonQuit_REQUIRED_ARGC 1
#define SDLTest_CommonQuit_OPTIONAL_ARGC 0
/* SDLTest_CommonQuit
 *
 * Parameters:
 * - state: SDLTest_CommonState *
 * Return Type: void
 */
mrb_value
mrb_SDL_SDLTest_CommonQuit(mrb_state* mrb, mrb_value self) {
  mrb_value state;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &state);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, state, SDLTestCommonState_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLTestCommonState expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  SDLTest_CommonState * native_state = (mrb_nil_p(state) ? NULL : mruby_unbox_SDLTest_CommonState(state));

  /* Invocation */
  SDLTest_CommonQuit(native_state);

  return mrb_nil_value();
}
#endif

#if BIND_SDLTest_CommonUsage_FUNCTION
#define SDLTest_CommonUsage_REQUIRED_ARGC 1
#define SDLTest_CommonUsage_OPTIONAL_ARGC 0
/* SDLTest_CommonUsage
 *
 * Parameters:
 * - state: SDLTest_CommonState *
 * Return Type: const char *
 */
mrb_value
mrb_SDL_SDLTest_CommonUsage(mrb_state* mrb, mrb_value self) {
  mrb_value state;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &state);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, state, SDLTestCommonState_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLTestCommonState expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  SDLTest_CommonState * native_state = (mrb_nil_p(state) ? NULL : mruby_unbox_SDLTest_CommonState(state));

  /* Invocation */
  const char * result = SDLTest_CommonUsage(native_state);

  /* Box the return value */
  mrb_value return_value = mrb_str_new_cstr(mrb, result);

  return return_value;
}
#endif

#if BIND_SDLTest_CompareSurfaces_FUNCTION
#define SDLTest_CompareSurfaces_REQUIRED_ARGC 3
#define SDLTest_CompareSurfaces_OPTIONAL_ARGC 0
/* SDLTest_CompareSurfaces
 *
 * Parameters:
 * - surface: struct SDL_Surface *
 * - referenceSurface: struct SDL_Surface *
 * - allowable_error: int
 * Return Type: int
 */
mrb_value
mrb_SDL_SDLTest_CompareSurfaces(mrb_state* mrb, mrb_value self) {
  mrb_value surface;
  mrb_value referenceSurface;
  mrb_value allowable_error;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &surface, &referenceSurface, &allowable_error);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, surface, SDLSurface_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLSurface expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, referenceSurface, SDLSurface_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLSurface expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, allowable_error, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDL_Surface * native_surface = (mrb_nil_p(surface) ? NULL : mruby_unbox_SDL_Surface(surface));

  struct SDL_Surface * native_referenceSurface = (mrb_nil_p(referenceSurface) ? NULL : mruby_unbox_SDL_Surface(referenceSurface));

  int native_allowable_error = mrb_fixnum(allowable_error);

  /* Invocation */
  int result = SDLTest_CompareSurfaces(native_surface, native_referenceSurface, native_allowable_error);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDLTest_crc32Calc_FUNCTION
#define SDLTest_crc32Calc_REQUIRED_ARGC 4
#define SDLTest_crc32Calc_OPTIONAL_ARGC 0
/* SDLTest_crc32Calc
 *
 * Parameters:
 * - crcContext: SDLTest_Crc32Context *
 * - inBuf: unsigned char *
 * - inLen: unsigned int
 * - crc32: unsigned int *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDLTest_crc32Calc(mrb_state* mrb, mrb_value self) {
  mrb_value crcContext;
  mrb_value inBuf;
  mrb_value inLen;
  mrb_value crc32;

  /* Fetch the args */
  mrb_get_args(mrb, "oooo", &crcContext, &inBuf, &inLen, &crc32);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, crcContext, SDLTestCrc32Context_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLTestCrc32Context expected");
    return mrb_nil_value();
  }
  TODO_type_check_unsigned_char_PTR(inBuf);
  if (!mrb_obj_is_kind_of(mrb, inLen, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_unsigned_int_PTR(crc32);


  /* Unbox parameters */
  SDLTest_Crc32Context * native_crcContext = (mrb_nil_p(crcContext) ? NULL : mruby_unbox_SDLTest_Crc32Context(crcContext));

  unsigned char * native_inBuf = TODO_mruby_unbox_unsigned_char_PTR(inBuf);

  unsigned int native_inLen = mrb_fixnum(inLen);

  unsigned int * native_crc32 = TODO_mruby_unbox_unsigned_int_PTR(crc32);

  /* Invocation */
  int result = SDLTest_crc32Calc(native_crcContext, native_inBuf, native_inLen, native_crc32);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDLTest_Crc32CalcBuffer_FUNCTION
#define SDLTest_Crc32CalcBuffer_REQUIRED_ARGC 4
#define SDLTest_Crc32CalcBuffer_OPTIONAL_ARGC 0
/* SDLTest_Crc32CalcBuffer
 *
 * Parameters:
 * - crcContext: SDLTest_Crc32Context *
 * - inBuf: unsigned char *
 * - inLen: unsigned int
 * - crc32: unsigned int *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDLTest_Crc32CalcBuffer(mrb_state* mrb, mrb_value self) {
  mrb_value crcContext;
  mrb_value inBuf;
  mrb_value inLen;
  mrb_value crc32;

  /* Fetch the args */
  mrb_get_args(mrb, "oooo", &crcContext, &inBuf, &inLen, &crc32);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, crcContext, SDLTestCrc32Context_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLTestCrc32Context expected");
    return mrb_nil_value();
  }
  TODO_type_check_unsigned_char_PTR(inBuf);
  if (!mrb_obj_is_kind_of(mrb, inLen, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_unsigned_int_PTR(crc32);


  /* Unbox parameters */
  SDLTest_Crc32Context * native_crcContext = (mrb_nil_p(crcContext) ? NULL : mruby_unbox_SDLTest_Crc32Context(crcContext));

  unsigned char * native_inBuf = TODO_mruby_unbox_unsigned_char_PTR(inBuf);

  unsigned int native_inLen = mrb_fixnum(inLen);

  unsigned int * native_crc32 = TODO_mruby_unbox_unsigned_int_PTR(crc32);

  /* Invocation */
  int result = SDLTest_Crc32CalcBuffer(native_crcContext, native_inBuf, native_inLen, native_crc32);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDLTest_Crc32CalcEnd_FUNCTION
#define SDLTest_Crc32CalcEnd_REQUIRED_ARGC 2
#define SDLTest_Crc32CalcEnd_OPTIONAL_ARGC 0
/* SDLTest_Crc32CalcEnd
 *
 * Parameters:
 * - crcContext: SDLTest_Crc32Context *
 * - crc32: unsigned int *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDLTest_Crc32CalcEnd(mrb_state* mrb, mrb_value self) {
  mrb_value crcContext;
  mrb_value crc32;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &crcContext, &crc32);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, crcContext, SDLTestCrc32Context_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLTestCrc32Context expected");
    return mrb_nil_value();
  }
  TODO_type_check_unsigned_int_PTR(crc32);


  /* Unbox parameters */
  SDLTest_Crc32Context * native_crcContext = (mrb_nil_p(crcContext) ? NULL : mruby_unbox_SDLTest_Crc32Context(crcContext));

  unsigned int * native_crc32 = TODO_mruby_unbox_unsigned_int_PTR(crc32);

  /* Invocation */
  int result = SDLTest_Crc32CalcEnd(native_crcContext, native_crc32);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDLTest_Crc32CalcStart_FUNCTION
#define SDLTest_Crc32CalcStart_REQUIRED_ARGC 2
#define SDLTest_Crc32CalcStart_OPTIONAL_ARGC 0
/* SDLTest_Crc32CalcStart
 *
 * Parameters:
 * - crcContext: SDLTest_Crc32Context *
 * - crc32: unsigned int *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDLTest_Crc32CalcStart(mrb_state* mrb, mrb_value self) {
  mrb_value crcContext;
  mrb_value crc32;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &crcContext, &crc32);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, crcContext, SDLTestCrc32Context_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLTestCrc32Context expected");
    return mrb_nil_value();
  }
  TODO_type_check_unsigned_int_PTR(crc32);


  /* Unbox parameters */
  SDLTest_Crc32Context * native_crcContext = (mrb_nil_p(crcContext) ? NULL : mruby_unbox_SDLTest_Crc32Context(crcContext));

  unsigned int * native_crc32 = TODO_mruby_unbox_unsigned_int_PTR(crc32);

  /* Invocation */
  int result = SDLTest_Crc32CalcStart(native_crcContext, native_crc32);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDLTest_Crc32Done_FUNCTION
#define SDLTest_Crc32Done_REQUIRED_ARGC 1
#define SDLTest_Crc32Done_OPTIONAL_ARGC 0
/* SDLTest_Crc32Done
 *
 * Parameters:
 * - crcContext: SDLTest_Crc32Context *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDLTest_Crc32Done(mrb_state* mrb, mrb_value self) {
  mrb_value crcContext;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &crcContext);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, crcContext, SDLTestCrc32Context_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLTestCrc32Context expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  SDLTest_Crc32Context * native_crcContext = (mrb_nil_p(crcContext) ? NULL : mruby_unbox_SDLTest_Crc32Context(crcContext));

  /* Invocation */
  int result = SDLTest_Crc32Done(native_crcContext);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDLTest_Crc32Init_FUNCTION
#define SDLTest_Crc32Init_REQUIRED_ARGC 1
#define SDLTest_Crc32Init_OPTIONAL_ARGC 0
/* SDLTest_Crc32Init
 *
 * Parameters:
 * - crcContext: SDLTest_Crc32Context *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDLTest_Crc32Init(mrb_state* mrb, mrb_value self) {
  mrb_value crcContext;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &crcContext);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, crcContext, SDLTestCrc32Context_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLTestCrc32Context expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  SDLTest_Crc32Context * native_crcContext = (mrb_nil_p(crcContext) ? NULL : mruby_unbox_SDLTest_Crc32Context(crcContext));

  /* Invocation */
  int result = SDLTest_Crc32Init(native_crcContext);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDLTest_DrawCharacter_FUNCTION
#define SDLTest_DrawCharacter_REQUIRED_ARGC 4
#define SDLTest_DrawCharacter_OPTIONAL_ARGC 0
/* SDLTest_DrawCharacter
 *
 * Parameters:
 * - renderer: int *
 * - x: int
 * - y: int
 * - c: char
 * Return Type: int
 */
mrb_value
mrb_SDL_SDLTest_DrawCharacter(mrb_state* mrb, mrb_value self) {
  mrb_value renderer;
  mrb_value x;
  mrb_value y;
  mrb_value c;

  /* Fetch the args */
  mrb_get_args(mrb, "oooo", &renderer, &x, &y, &c);


  /* Type checking */
  TODO_type_check_int_PTR(renderer);
  if (!mrb_obj_is_kind_of(mrb, x, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, y, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, c, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int * native_renderer = TODO_mruby_unbox_int_PTR(renderer);

  int native_x = mrb_fixnum(x);

  int native_y = mrb_fixnum(y);

  char native_c = *mrb_string_value_ptr(mrb, c);

  /* Invocation */
  int result = SDLTest_DrawCharacter(native_renderer, native_x, native_y, native_c);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDLTest_DrawString_FUNCTION
#define SDLTest_DrawString_REQUIRED_ARGC 4
#define SDLTest_DrawString_OPTIONAL_ARGC 0
/* SDLTest_DrawString
 *
 * Parameters:
 * - renderer: int *
 * - x: int
 * - y: int
 * - s: const char *
 * Return Type: int
 */
mrb_value
mrb_SDL_SDLTest_DrawString(mrb_state* mrb, mrb_value self) {
  mrb_value renderer;
  mrb_value x;
  mrb_value y;
  mrb_value s;

  /* Fetch the args */
  mrb_get_args(mrb, "oooo", &renderer, &x, &y, &s);


  /* Type checking */
  TODO_type_check_int_PTR(renderer);
  if (!mrb_obj_is_kind_of(mrb, x, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, y, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, s, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int * native_renderer = TODO_mruby_unbox_int_PTR(renderer);

  int native_x = mrb_fixnum(x);

  int native_y = mrb_fixnum(y);

  const char * native_s = mrb_string_value_cstr(mrb, &s);

  /* Invocation */
  int result = SDLTest_DrawString(native_renderer, native_x, native_y, native_s);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDLTest_FuzzerInit_FUNCTION
#define SDLTest_FuzzerInit_REQUIRED_ARGC 1
#define SDLTest_FuzzerInit_OPTIONAL_ARGC 0
/* SDLTest_FuzzerInit
 *
 * Parameters:
 * - execKey: int
 * Return Type: void
 */
mrb_value
mrb_SDL_SDLTest_FuzzerInit(mrb_state* mrb, mrb_value self) {
  mrb_value execKey;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &execKey);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, execKey, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_execKey = mrb_fixnum(execKey);

  /* Invocation */
  SDLTest_FuzzerInit(native_execKey);

  return mrb_nil_value();
}
#endif

#if BIND_SDLTest_GetFuzzerInvocationCount_FUNCTION
#define SDLTest_GetFuzzerInvocationCount_REQUIRED_ARGC 0
#define SDLTest_GetFuzzerInvocationCount_OPTIONAL_ARGC 0
/* SDLTest_GetFuzzerInvocationCount
 *
 * Parameters: None
 * Return Type: int
 */
mrb_value
mrb_SDL_SDLTest_GetFuzzerInvocationCount(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  int result = SDLTest_GetFuzzerInvocationCount();

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDLTest_ImageBlit_FUNCTION
#define SDLTest_ImageBlit_REQUIRED_ARGC 0
#define SDLTest_ImageBlit_OPTIONAL_ARGC 0
/* SDLTest_ImageBlit
 *
 * Parameters: None
 * Return Type: SDL_Surface *
 */
mrb_value
mrb_SDL_SDLTest_ImageBlit(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  SDL_Surface * result = SDLTest_ImageBlit();

  /* Box the return value */
  mrb_value return_value = (result == NULL ? mrb_nil_value() : mruby_box_SDL_Surface(mrb, result));

  return return_value;
}
#endif

#if BIND_SDLTest_ImageBlitAlpha_FUNCTION
#define SDLTest_ImageBlitAlpha_REQUIRED_ARGC 0
#define SDLTest_ImageBlitAlpha_OPTIONAL_ARGC 0
/* SDLTest_ImageBlitAlpha
 *
 * Parameters: None
 * Return Type: SDL_Surface *
 */
mrb_value
mrb_SDL_SDLTest_ImageBlitAlpha(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  SDL_Surface * result = SDLTest_ImageBlitAlpha();

  /* Box the return value */
  mrb_value return_value = (result == NULL ? mrb_nil_value() : mruby_box_SDL_Surface(mrb, result));

  return return_value;
}
#endif

#if BIND_SDLTest_ImageBlitBlend_FUNCTION
#define SDLTest_ImageBlitBlend_REQUIRED_ARGC 0
#define SDLTest_ImageBlitBlend_OPTIONAL_ARGC 0
/* SDLTest_ImageBlitBlend
 *
 * Parameters: None
 * Return Type: SDL_Surface *
 */
mrb_value
mrb_SDL_SDLTest_ImageBlitBlend(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  SDL_Surface * result = SDLTest_ImageBlitBlend();

  /* Box the return value */
  mrb_value return_value = (result == NULL ? mrb_nil_value() : mruby_box_SDL_Surface(mrb, result));

  return return_value;
}
#endif

#if BIND_SDLTest_ImageBlitBlendAdd_FUNCTION
#define SDLTest_ImageBlitBlendAdd_REQUIRED_ARGC 0
#define SDLTest_ImageBlitBlendAdd_OPTIONAL_ARGC 0
/* SDLTest_ImageBlitBlendAdd
 *
 * Parameters: None
 * Return Type: SDL_Surface *
 */
mrb_value
mrb_SDL_SDLTest_ImageBlitBlendAdd(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  SDL_Surface * result = SDLTest_ImageBlitBlendAdd();

  /* Box the return value */
  mrb_value return_value = (result == NULL ? mrb_nil_value() : mruby_box_SDL_Surface(mrb, result));

  return return_value;
}
#endif

#if BIND_SDLTest_ImageBlitBlendAll_FUNCTION
#define SDLTest_ImageBlitBlendAll_REQUIRED_ARGC 0
#define SDLTest_ImageBlitBlendAll_OPTIONAL_ARGC 0
/* SDLTest_ImageBlitBlendAll
 *
 * Parameters: None
 * Return Type: SDL_Surface *
 */
mrb_value
mrb_SDL_SDLTest_ImageBlitBlendAll(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  SDL_Surface * result = SDLTest_ImageBlitBlendAll();

  /* Box the return value */
  mrb_value return_value = (result == NULL ? mrb_nil_value() : mruby_box_SDL_Surface(mrb, result));

  return return_value;
}
#endif

#if BIND_SDLTest_ImageBlitBlendMod_FUNCTION
#define SDLTest_ImageBlitBlendMod_REQUIRED_ARGC 0
#define SDLTest_ImageBlitBlendMod_OPTIONAL_ARGC 0
/* SDLTest_ImageBlitBlendMod
 *
 * Parameters: None
 * Return Type: SDL_Surface *
 */
mrb_value
mrb_SDL_SDLTest_ImageBlitBlendMod(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  SDL_Surface * result = SDLTest_ImageBlitBlendMod();

  /* Box the return value */
  mrb_value return_value = (result == NULL ? mrb_nil_value() : mruby_box_SDL_Surface(mrb, result));

  return return_value;
}
#endif

#if BIND_SDLTest_ImageBlitBlendNone_FUNCTION
#define SDLTest_ImageBlitBlendNone_REQUIRED_ARGC 0
#define SDLTest_ImageBlitBlendNone_OPTIONAL_ARGC 0
/* SDLTest_ImageBlitBlendNone
 *
 * Parameters: None
 * Return Type: SDL_Surface *
 */
mrb_value
mrb_SDL_SDLTest_ImageBlitBlendNone(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  SDL_Surface * result = SDLTest_ImageBlitBlendNone();

  /* Box the return value */
  mrb_value return_value = (result == NULL ? mrb_nil_value() : mruby_box_SDL_Surface(mrb, result));

  return return_value;
}
#endif

#if BIND_SDLTest_ImageBlitColor_FUNCTION
#define SDLTest_ImageBlitColor_REQUIRED_ARGC 0
#define SDLTest_ImageBlitColor_OPTIONAL_ARGC 0
/* SDLTest_ImageBlitColor
 *
 * Parameters: None
 * Return Type: SDL_Surface *
 */
mrb_value
mrb_SDL_SDLTest_ImageBlitColor(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  SDL_Surface * result = SDLTest_ImageBlitColor();

  /* Box the return value */
  mrb_value return_value = (result == NULL ? mrb_nil_value() : mruby_box_SDL_Surface(mrb, result));

  return return_value;
}
#endif

#if BIND_SDLTest_ImageFace_FUNCTION
#define SDLTest_ImageFace_REQUIRED_ARGC 0
#define SDLTest_ImageFace_OPTIONAL_ARGC 0
/* SDLTest_ImageFace
 *
 * Parameters: None
 * Return Type: SDL_Surface *
 */
mrb_value
mrb_SDL_SDLTest_ImageFace(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  SDL_Surface * result = SDLTest_ImageFace();

  /* Box the return value */
  mrb_value return_value = (result == NULL ? mrb_nil_value() : mruby_box_SDL_Surface(mrb, result));

  return return_value;
}
#endif

#if BIND_SDLTest_ImagePrimitives_FUNCTION
#define SDLTest_ImagePrimitives_REQUIRED_ARGC 0
#define SDLTest_ImagePrimitives_OPTIONAL_ARGC 0
/* SDLTest_ImagePrimitives
 *
 * Parameters: None
 * Return Type: SDL_Surface *
 */
mrb_value
mrb_SDL_SDLTest_ImagePrimitives(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  SDL_Surface * result = SDLTest_ImagePrimitives();

  /* Box the return value */
  mrb_value return_value = (result == NULL ? mrb_nil_value() : mruby_box_SDL_Surface(mrb, result));

  return return_value;
}
#endif

#if BIND_SDLTest_ImagePrimitivesBlend_FUNCTION
#define SDLTest_ImagePrimitivesBlend_REQUIRED_ARGC 0
#define SDLTest_ImagePrimitivesBlend_OPTIONAL_ARGC 0
/* SDLTest_ImagePrimitivesBlend
 *
 * Parameters: None
 * Return Type: SDL_Surface *
 */
mrb_value
mrb_SDL_SDLTest_ImagePrimitivesBlend(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  SDL_Surface * result = SDLTest_ImagePrimitivesBlend();

  /* Box the return value */
  mrb_value return_value = (result == NULL ? mrb_nil_value() : mruby_box_SDL_Surface(mrb, result));

  return return_value;
}
#endif

#if BIND_SDLTest_Log_FUNCTION
#define SDLTest_Log_REQUIRED_ARGC 1
#define SDLTest_Log_OPTIONAL_ARGC 0
/* SDLTest_Log
 *
 * Parameters:
 * - fmt: const char *
 * Return Type: void
 */
mrb_value
mrb_SDL_SDLTest_Log(mrb_state* mrb, mrb_value self) {
  mrb_value fmt;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &fmt);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, fmt, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  const char * native_fmt = mrb_string_value_cstr(mrb, &fmt);

  /* Invocation */
  SDLTest_Log(native_fmt);

  return mrb_nil_value();
}
#endif

#if BIND_SDLTest_LogAssertSummary_FUNCTION
#define SDLTest_LogAssertSummary_REQUIRED_ARGC 0
#define SDLTest_LogAssertSummary_OPTIONAL_ARGC 0
/* SDLTest_LogAssertSummary
 *
 * Parameters: None
 * Return Type: void
 */
mrb_value
mrb_SDL_SDLTest_LogAssertSummary(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  SDLTest_LogAssertSummary();

  return mrb_nil_value();
}
#endif

#if BIND_SDLTest_LogError_FUNCTION
#define SDLTest_LogError_REQUIRED_ARGC 1
#define SDLTest_LogError_OPTIONAL_ARGC 0
/* SDLTest_LogError
 *
 * Parameters:
 * - fmt: const char *
 * Return Type: void
 */
mrb_value
mrb_SDL_SDLTest_LogError(mrb_state* mrb, mrb_value self) {
  mrb_value fmt;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &fmt);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, fmt, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  const char * native_fmt = mrb_string_value_cstr(mrb, &fmt);

  /* Invocation */
  SDLTest_LogError(native_fmt);

  return mrb_nil_value();
}
#endif

#if BIND_SDLTest_Md5Final_FUNCTION
#define SDLTest_Md5Final_REQUIRED_ARGC 1
#define SDLTest_Md5Final_OPTIONAL_ARGC 0
/* SDLTest_Md5Final
 *
 * Parameters:
 * - mdContext: SDLTest_Md5Context *
 * Return Type: void
 */
mrb_value
mrb_SDL_SDLTest_Md5Final(mrb_state* mrb, mrb_value self) {
  mrb_value mdContext;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &mdContext);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, mdContext, SDLTestMd5Context_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLTestMd5Context expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  SDLTest_Md5Context * native_mdContext = (mrb_nil_p(mdContext) ? NULL : mruby_unbox_SDLTest_Md5Context(mdContext));

  /* Invocation */
  SDLTest_Md5Final(native_mdContext);

  return mrb_nil_value();
}
#endif

#if BIND_SDLTest_Md5Init_FUNCTION
#define SDLTest_Md5Init_REQUIRED_ARGC 1
#define SDLTest_Md5Init_OPTIONAL_ARGC 0
/* SDLTest_Md5Init
 *
 * Parameters:
 * - mdContext: SDLTest_Md5Context *
 * Return Type: void
 */
mrb_value
mrb_SDL_SDLTest_Md5Init(mrb_state* mrb, mrb_value self) {
  mrb_value mdContext;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &mdContext);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, mdContext, SDLTestMd5Context_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLTestMd5Context expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  SDLTest_Md5Context * native_mdContext = (mrb_nil_p(mdContext) ? NULL : mruby_unbox_SDLTest_Md5Context(mdContext));

  /* Invocation */
  SDLTest_Md5Init(native_mdContext);

  return mrb_nil_value();
}
#endif

#if BIND_SDLTest_Md5Update_FUNCTION
#define SDLTest_Md5Update_REQUIRED_ARGC 3
#define SDLTest_Md5Update_OPTIONAL_ARGC 0
/* SDLTest_Md5Update
 *
 * Parameters:
 * - mdContext: SDLTest_Md5Context *
 * - inBuf: unsigned char *
 * - inLen: unsigned int
 * Return Type: void
 */
mrb_value
mrb_SDL_SDLTest_Md5Update(mrb_state* mrb, mrb_value self) {
  mrb_value mdContext;
  mrb_value inBuf;
  mrb_value inLen;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &mdContext, &inBuf, &inLen);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, mdContext, SDLTestMd5Context_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLTestMd5Context expected");
    return mrb_nil_value();
  }
  TODO_type_check_unsigned_char_PTR(inBuf);
  if (!mrb_obj_is_kind_of(mrb, inLen, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  SDLTest_Md5Context * native_mdContext = (mrb_nil_p(mdContext) ? NULL : mruby_unbox_SDLTest_Md5Context(mdContext));

  unsigned char * native_inBuf = TODO_mruby_unbox_unsigned_char_PTR(inBuf);

  unsigned int native_inLen = mrb_fixnum(inLen);

  /* Invocation */
  SDLTest_Md5Update(native_mdContext, native_inBuf, native_inLen);

  return mrb_nil_value();
}
#endif

#if BIND_SDLTest_Random_FUNCTION
#define SDLTest_Random_REQUIRED_ARGC 1
#define SDLTest_Random_OPTIONAL_ARGC 0
/* SDLTest_Random
 *
 * Parameters:
 * - rndContext: SDLTest_RandomContext *
 * Return Type: unsigned int
 */
mrb_value
mrb_SDL_SDLTest_Random(mrb_state* mrb, mrb_value self) {
  mrb_value rndContext;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &rndContext);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, rndContext, SDLTestRandomContext_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLTestRandomContext expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  SDLTest_RandomContext * native_rndContext = (mrb_nil_p(rndContext) ? NULL : mruby_unbox_SDLTest_RandomContext(rndContext));

  /* Invocation */
  unsigned int result = SDLTest_Random(native_rndContext);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDLTest_RandomAsciiString_FUNCTION
#define SDLTest_RandomAsciiString_REQUIRED_ARGC 0
#define SDLTest_RandomAsciiString_OPTIONAL_ARGC 0
/* SDLTest_RandomAsciiString
 *
 * Parameters: None
 * Return Type: char *
 */
mrb_value
mrb_SDL_SDLTest_RandomAsciiString(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  char * result = SDLTest_RandomAsciiString();

  /* Box the return value */
  mrb_value return_value = mrb_str_new_cstr(mrb, result);

  return return_value;
}
#endif

#if BIND_SDLTest_RandomAsciiStringOfSize_FUNCTION
#define SDLTest_RandomAsciiStringOfSize_REQUIRED_ARGC 1
#define SDLTest_RandomAsciiStringOfSize_OPTIONAL_ARGC 0
/* SDLTest_RandomAsciiStringOfSize
 *
 * Parameters:
 * - size: int
 * Return Type: char *
 */
mrb_value
mrb_SDL_SDLTest_RandomAsciiStringOfSize(mrb_state* mrb, mrb_value self) {
  mrb_value size;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &size);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, size, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_size = mrb_fixnum(size);

  /* Invocation */
  char * result = SDLTest_RandomAsciiStringOfSize(native_size);

  /* Box the return value */
  mrb_value return_value = mrb_str_new_cstr(mrb, result);

  return return_value;
}
#endif

#if BIND_SDLTest_RandomAsciiStringWithMaximumLength_FUNCTION
#define SDLTest_RandomAsciiStringWithMaximumLength_REQUIRED_ARGC 1
#define SDLTest_RandomAsciiStringWithMaximumLength_OPTIONAL_ARGC 0
/* SDLTest_RandomAsciiStringWithMaximumLength
 *
 * Parameters:
 * - maxLength: int
 * Return Type: char *
 */
mrb_value
mrb_SDL_SDLTest_RandomAsciiStringWithMaximumLength(mrb_state* mrb, mrb_value self) {
  mrb_value maxLength;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &maxLength);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, maxLength, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_maxLength = mrb_fixnum(maxLength);

  /* Invocation */
  char * result = SDLTest_RandomAsciiStringWithMaximumLength(native_maxLength);

  /* Box the return value */
  mrb_value return_value = mrb_str_new_cstr(mrb, result);

  return return_value;
}
#endif

#if BIND_SDLTest_RandomDouble_FUNCTION
#define SDLTest_RandomDouble_REQUIRED_ARGC 0
#define SDLTest_RandomDouble_OPTIONAL_ARGC 0
/* SDLTest_RandomDouble
 *
 * Parameters: None
 * Return Type: double
 */
mrb_value
mrb_SDL_SDLTest_RandomDouble(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  double result = SDLTest_RandomDouble();

  /* Box the return value */
  mrb_value return_value = mrb_float_value(mrb, result);

  return return_value;
}
#endif

#if BIND_SDLTest_RandomFloat_FUNCTION
#define SDLTest_RandomFloat_REQUIRED_ARGC 0
#define SDLTest_RandomFloat_OPTIONAL_ARGC 0
/* SDLTest_RandomFloat
 *
 * Parameters: None
 * Return Type: float
 */
mrb_value
mrb_SDL_SDLTest_RandomFloat(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  float result = SDLTest_RandomFloat();

  /* Box the return value */
  mrb_value return_value = mrb_float_value(mrb, result);

  return return_value;
}
#endif

#if BIND_SDLTest_RandomInit_FUNCTION
#define SDLTest_RandomInit_REQUIRED_ARGC 3
#define SDLTest_RandomInit_OPTIONAL_ARGC 0
/* SDLTest_RandomInit
 *
 * Parameters:
 * - rndContext: SDLTest_RandomContext *
 * - xi: unsigned int
 * - ci: unsigned int
 * Return Type: void
 */
mrb_value
mrb_SDL_SDLTest_RandomInit(mrb_state* mrb, mrb_value self) {
  mrb_value rndContext;
  mrb_value xi;
  mrb_value ci;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &rndContext, &xi, &ci);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, rndContext, SDLTestRandomContext_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLTestRandomContext expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, xi, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, ci, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  SDLTest_RandomContext * native_rndContext = (mrb_nil_p(rndContext) ? NULL : mruby_unbox_SDLTest_RandomContext(rndContext));

  unsigned int native_xi = mrb_fixnum(xi);

  unsigned int native_ci = mrb_fixnum(ci);

  /* Invocation */
  SDLTest_RandomInit(native_rndContext, native_xi, native_ci);

  return mrb_nil_value();
}
#endif

#if BIND_SDLTest_RandomInitTime_FUNCTION
#define SDLTest_RandomInitTime_REQUIRED_ARGC 1
#define SDLTest_RandomInitTime_OPTIONAL_ARGC 0
/* SDLTest_RandomInitTime
 *
 * Parameters:
 * - rndContext: SDLTest_RandomContext *
 * Return Type: void
 */
mrb_value
mrb_SDL_SDLTest_RandomInitTime(mrb_state* mrb, mrb_value self) {
  mrb_value rndContext;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &rndContext);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, rndContext, SDLTestRandomContext_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SDLTestRandomContext expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  SDLTest_RandomContext * native_rndContext = (mrb_nil_p(rndContext) ? NULL : mruby_unbox_SDLTest_RandomContext(rndContext));

  /* Invocation */
  SDLTest_RandomInitTime(native_rndContext);

  return mrb_nil_value();
}
#endif

#if BIND_SDLTest_RandomIntegerInRange_FUNCTION
#define SDLTest_RandomIntegerInRange_REQUIRED_ARGC 0
#define SDLTest_RandomIntegerInRange_OPTIONAL_ARGC 0
/* SDLTest_RandomIntegerInRange
 *
 * Parameters: None
 * Return Type: int
 */
mrb_value
mrb_SDL_SDLTest_RandomIntegerInRange(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  int result = SDLTest_RandomIntegerInRange();

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDLTest_RandomSint16_FUNCTION
#define SDLTest_RandomSint16_REQUIRED_ARGC 0
#define SDLTest_RandomSint16_OPTIONAL_ARGC 0
/* SDLTest_RandomSint16
 *
 * Parameters: None
 * Return Type: int
 */
mrb_value
mrb_SDL_SDLTest_RandomSint16(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  int result = SDLTest_RandomSint16();

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDLTest_RandomSint16BoundaryValue_FUNCTION
#define SDLTest_RandomSint16BoundaryValue_REQUIRED_ARGC 0
#define SDLTest_RandomSint16BoundaryValue_OPTIONAL_ARGC 0
/* SDLTest_RandomSint16BoundaryValue
 *
 * Parameters: None
 * Return Type: int
 */
mrb_value
mrb_SDL_SDLTest_RandomSint16BoundaryValue(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  int result = SDLTest_RandomSint16BoundaryValue();

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDLTest_RandomSint32_FUNCTION
#define SDLTest_RandomSint32_REQUIRED_ARGC 0
#define SDLTest_RandomSint32_OPTIONAL_ARGC 0
/* SDLTest_RandomSint32
 *
 * Parameters: None
 * Return Type: int
 */
mrb_value
mrb_SDL_SDLTest_RandomSint32(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  int result = SDLTest_RandomSint32();

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDLTest_RandomSint32BoundaryValue_FUNCTION
#define SDLTest_RandomSint32BoundaryValue_REQUIRED_ARGC 0
#define SDLTest_RandomSint32BoundaryValue_OPTIONAL_ARGC 0
/* SDLTest_RandomSint32BoundaryValue
 *
 * Parameters: None
 * Return Type: int
 */
mrb_value
mrb_SDL_SDLTest_RandomSint32BoundaryValue(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  int result = SDLTest_RandomSint32BoundaryValue();

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDLTest_RandomSint64_FUNCTION
#define SDLTest_RandomSint64_REQUIRED_ARGC 0
#define SDLTest_RandomSint64_OPTIONAL_ARGC 0
/* SDLTest_RandomSint64
 *
 * Parameters: None
 * Return Type: int
 */
mrb_value
mrb_SDL_SDLTest_RandomSint64(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  int result = SDLTest_RandomSint64();

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDLTest_RandomSint64BoundaryValue_FUNCTION
#define SDLTest_RandomSint64BoundaryValue_REQUIRED_ARGC 0
#define SDLTest_RandomSint64BoundaryValue_OPTIONAL_ARGC 0
/* SDLTest_RandomSint64BoundaryValue
 *
 * Parameters: None
 * Return Type: int
 */
mrb_value
mrb_SDL_SDLTest_RandomSint64BoundaryValue(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  int result = SDLTest_RandomSint64BoundaryValue();

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDLTest_RandomSint8_FUNCTION
#define SDLTest_RandomSint8_REQUIRED_ARGC 0
#define SDLTest_RandomSint8_OPTIONAL_ARGC 0
/* SDLTest_RandomSint8
 *
 * Parameters: None
 * Return Type: int
 */
mrb_value
mrb_SDL_SDLTest_RandomSint8(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  int result = SDLTest_RandomSint8();

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDLTest_RandomSint8BoundaryValue_FUNCTION
#define SDLTest_RandomSint8BoundaryValue_REQUIRED_ARGC 0
#define SDLTest_RandomSint8BoundaryValue_OPTIONAL_ARGC 0
/* SDLTest_RandomSint8BoundaryValue
 *
 * Parameters: None
 * Return Type: int
 */
mrb_value
mrb_SDL_SDLTest_RandomSint8BoundaryValue(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  int result = SDLTest_RandomSint8BoundaryValue();

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDLTest_RandomUint16_FUNCTION
#define SDLTest_RandomUint16_REQUIRED_ARGC 0
#define SDLTest_RandomUint16_OPTIONAL_ARGC 0
/* SDLTest_RandomUint16
 *
 * Parameters: None
 * Return Type: int
 */
mrb_value
mrb_SDL_SDLTest_RandomUint16(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  int result = SDLTest_RandomUint16();

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDLTest_RandomUint16BoundaryValue_FUNCTION
#define SDLTest_RandomUint16BoundaryValue_REQUIRED_ARGC 0
#define SDLTest_RandomUint16BoundaryValue_OPTIONAL_ARGC 0
/* SDLTest_RandomUint16BoundaryValue
 *
 * Parameters: None
 * Return Type: int
 */
mrb_value
mrb_SDL_SDLTest_RandomUint16BoundaryValue(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  int result = SDLTest_RandomUint16BoundaryValue();

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDLTest_RandomUint32_FUNCTION
#define SDLTest_RandomUint32_REQUIRED_ARGC 0
#define SDLTest_RandomUint32_OPTIONAL_ARGC 0
/* SDLTest_RandomUint32
 *
 * Parameters: None
 * Return Type: int
 */
mrb_value
mrb_SDL_SDLTest_RandomUint32(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  int result = SDLTest_RandomUint32();

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDLTest_RandomUint32BoundaryValue_FUNCTION
#define SDLTest_RandomUint32BoundaryValue_REQUIRED_ARGC 0
#define SDLTest_RandomUint32BoundaryValue_OPTIONAL_ARGC 0
/* SDLTest_RandomUint32BoundaryValue
 *
 * Parameters: None
 * Return Type: int
 */
mrb_value
mrb_SDL_SDLTest_RandomUint32BoundaryValue(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  int result = SDLTest_RandomUint32BoundaryValue();

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDLTest_RandomUint64_FUNCTION
#define SDLTest_RandomUint64_REQUIRED_ARGC 0
#define SDLTest_RandomUint64_OPTIONAL_ARGC 0
/* SDLTest_RandomUint64
 *
 * Parameters: None
 * Return Type: int
 */
mrb_value
mrb_SDL_SDLTest_RandomUint64(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  int result = SDLTest_RandomUint64();

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDLTest_RandomUint64BoundaryValue_FUNCTION
#define SDLTest_RandomUint64BoundaryValue_REQUIRED_ARGC 0
#define SDLTest_RandomUint64BoundaryValue_OPTIONAL_ARGC 0
/* SDLTest_RandomUint64BoundaryValue
 *
 * Parameters: None
 * Return Type: int
 */
mrb_value
mrb_SDL_SDLTest_RandomUint64BoundaryValue(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  int result = SDLTest_RandomUint64BoundaryValue();

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDLTest_RandomUint8_FUNCTION
#define SDLTest_RandomUint8_REQUIRED_ARGC 0
#define SDLTest_RandomUint8_OPTIONAL_ARGC 0
/* SDLTest_RandomUint8
 *
 * Parameters: None
 * Return Type: int
 */
mrb_value
mrb_SDL_SDLTest_RandomUint8(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  int result = SDLTest_RandomUint8();

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDLTest_RandomUint8BoundaryValue_FUNCTION
#define SDLTest_RandomUint8BoundaryValue_REQUIRED_ARGC 0
#define SDLTest_RandomUint8BoundaryValue_OPTIONAL_ARGC 0
/* SDLTest_RandomUint8BoundaryValue
 *
 * Parameters: None
 * Return Type: int
 */
mrb_value
mrb_SDL_SDLTest_RandomUint8BoundaryValue(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  int result = SDLTest_RandomUint8BoundaryValue();

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_SDLTest_RandomUnitDouble_FUNCTION
#define SDLTest_RandomUnitDouble_REQUIRED_ARGC 0
#define SDLTest_RandomUnitDouble_OPTIONAL_ARGC 0
/* SDLTest_RandomUnitDouble
 *
 * Parameters: None
 * Return Type: double
 */
mrb_value
mrb_SDL_SDLTest_RandomUnitDouble(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  double result = SDLTest_RandomUnitDouble();

  /* Box the return value */
  mrb_value return_value = mrb_float_value(mrb, result);

  return return_value;
}
#endif

#if BIND_SDLTest_RandomUnitFloat_FUNCTION
#define SDLTest_RandomUnitFloat_REQUIRED_ARGC 0
#define SDLTest_RandomUnitFloat_OPTIONAL_ARGC 0
/* SDLTest_RandomUnitFloat
 *
 * Parameters: None
 * Return Type: float
 */
mrb_value
mrb_SDL_SDLTest_RandomUnitFloat(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  float result = SDLTest_RandomUnitFloat();

  /* Box the return value */
  mrb_value return_value = mrb_float_value(mrb, result);

  return return_value;
}
#endif

#if BIND_SDLTest_ResetAssertSummary_FUNCTION
#define SDLTest_ResetAssertSummary_REQUIRED_ARGC 0
#define SDLTest_ResetAssertSummary_OPTIONAL_ARGC 0
/* SDLTest_ResetAssertSummary
 *
 * Parameters: None
 * Return Type: void
 */
mrb_value
mrb_SDL_SDLTest_ResetAssertSummary(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  SDLTest_ResetAssertSummary();

  return mrb_nil_value();
}
#endif

#if BIND_SDLTest_RunSuites_FUNCTION
#define SDLTest_RunSuites_REQUIRED_ARGC 5
#define SDLTest_RunSuites_OPTIONAL_ARGC 0
/* SDLTest_RunSuites
 *
 * Parameters:
 * - testSuites: struct SDLTest_TestSuiteReference *[]
 * - userRunSeed: const char *
 * - userExecKey: int
 * - filter: const char *
 * - testIterations: int
 * Return Type: int
 */
mrb_value
mrb_SDL_SDLTest_RunSuites(mrb_state* mrb, mrb_value self) {
  mrb_value testSuites;
  mrb_value userRunSeed;
  mrb_value userExecKey;
  mrb_value filter;
  mrb_value testIterations;

  /* Fetch the args */
  mrb_get_args(mrb, "ooooo", &testSuites, &userRunSeed, &userExecKey, &filter, &testIterations);


  /* Type checking */
  TODO_type_check_SDLTest_TestSuiteReference_PTR_[](testSuites);
  if (!mrb_obj_is_kind_of(mrb, userRunSeed, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, userExecKey, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, filter, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, testIterations, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct SDLTest_TestSuiteReference *[] native_testSuites = TODO_mruby_unbox_SDLTest_TestSuiteReference_PTR_[](testSuites);

  const char * native_userRunSeed = mrb_string_value_cstr(mrb, &userRunSeed);

  int native_userExecKey = mrb_fixnum(userExecKey);

  const char * native_filter = mrb_string_value_cstr(mrb, &filter);

  int native_testIterations = mrb_fixnum(testIterations);

  /* Invocation */
  int result = SDLTest_RunSuites(native_testSuites, native_userRunSeed, native_userExecKey, native_filter, native_testIterations);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif


void mrb_mruby_sdl_gem_init(mrb_state* mrb) {
  RClass* SDL_module = mrb_define_module(mrb, "SDL");
  mruby_SDL_define_macro_constants(mrb);

  /*
   * Initialize class bindings
   */
#if BIND_SDLAtomicT_TYPE
  mrb_SDL_SDLAtomicT_init(mrb);
#endif
#if BIND_SDLDisplayMode_TYPE
  mrb_SDL_SDLDisplayMode_init(mrb);
#endif
#if BIND_SDLJoystickGUID_TYPE
  mrb_SDL_SDLJoystickGUID_init(mrb);
#endif
#if BIND_SDLMessageBoxButtonData_TYPE
  mrb_SDL_SDLMessageBoxButtonData_init(mrb);
#endif
#if BIND_SDLMessageBoxColor_TYPE
  mrb_SDL_SDLMessageBoxColor_init(mrb);
#endif
#if BIND_SDLMessageBoxColorScheme_TYPE
  mrb_SDL_SDLMessageBoxColorScheme_init(mrb);
#endif
#if BIND_SDLMessageBoxData_TYPE
  mrb_SDL_SDLMessageBoxData_init(mrb);
#endif
#if BIND_SDLTestCommonState_TYPE
  mrb_SDL_SDLTestCommonState_init(mrb);
#endif
#if BIND_SDLTestCrc32Context_TYPE
  mrb_SDL_SDLTestCrc32Context_init(mrb);
#endif
#if BIND_SDLTestMd5Context_TYPE
  mrb_SDL_SDLTestMd5Context_init(mrb);
#endif
#if BIND_SDLTestRandomContext_TYPE
  mrb_SDL_SDLTestRandomContext_init(mrb);
#endif
#if BIND_ClContext_TYPE
  mrb_SDL_ClContext_init(mrb);
#endif
#if BIND_ClEvent_TYPE
  mrb_SDL_ClEvent_init(mrb);
#endif
#if BIND_NSWindow_TYPE
  mrb_SDL_NSWindow_init(mrb);
#endif
#if BIND_SDLGameController_TYPE
  mrb_SDL_SDLGameController_init(mrb);
#endif
#if BIND_SDLHaptic_TYPE
  mrb_SDL_SDLHaptic_init(mrb);
#endif
#if BIND_SDLIconvT_TYPE
  mrb_SDL_SDLIconvT_init(mrb);
#endif
#if BIND_SDLJoystick_TYPE
  mrb_SDL_SDLJoystick_init(mrb);
#endif
#if BIND_SDLAssertData_TYPE
  mrb_SDL_SDLAssertData_init(mrb);
#endif
#if BIND_SDLAudioCVT_TYPE
  mrb_SDL_SDLAudioCVT_init(mrb);
#endif
#if BIND_SDLAudioSpec_TYPE
  mrb_SDL_SDLAudioSpec_init(mrb);
#endif
#if BIND_SDLBlitMap_TYPE
  mrb_SDL_SDLBlitMap_init(mrb);
#endif
#if BIND_SDLColor_TYPE
  mrb_SDL_SDLColor_init(mrb);
#endif
#if BIND_SDLCommonEvent_TYPE
  mrb_SDL_SDLCommonEvent_init(mrb);
#endif
#if BIND_SDLCond_TYPE
  mrb_SDL_SDLCond_init(mrb);
#endif
#if BIND_SDLControllerAxisEvent_TYPE
  mrb_SDL_SDLControllerAxisEvent_init(mrb);
#endif
#if BIND_SDLControllerButtonEvent_TYPE
  mrb_SDL_SDLControllerButtonEvent_init(mrb);
#endif
#if BIND_SDLControllerDeviceEvent_TYPE
  mrb_SDL_SDLControllerDeviceEvent_init(mrb);
#endif
#if BIND_SDLCursor_TYPE
  mrb_SDL_SDLCursor_init(mrb);
#endif
#if BIND_SDLDollarGestureEvent_TYPE
  mrb_SDL_SDLDollarGestureEvent_init(mrb);
#endif
#if BIND_SDLDropEvent_TYPE
  mrb_SDL_SDLDropEvent_init(mrb);
#endif
#if BIND_SDLFinger_TYPE
  mrb_SDL_SDLFinger_init(mrb);
#endif
#if BIND_SDLGameControllerButtonBind_TYPE
  mrb_SDL_SDLGameControllerButtonBind_init(mrb);
#endif
#if BIND_SDLHapticCondition_TYPE
  mrb_SDL_SDLHapticCondition_init(mrb);
#endif
#if BIND_SDLHapticConstant_TYPE
  mrb_SDL_SDLHapticConstant_init(mrb);
#endif
#if BIND_SDLHapticCustom_TYPE
  mrb_SDL_SDLHapticCustom_init(mrb);
#endif
#if BIND_SDLHapticDirection_TYPE
  mrb_SDL_SDLHapticDirection_init(mrb);
#endif
#if BIND_SDLHapticLeftRight_TYPE
  mrb_SDL_SDLHapticLeftRight_init(mrb);
#endif
#if BIND_SDLHapticPeriodic_TYPE
  mrb_SDL_SDLHapticPeriodic_init(mrb);
#endif
#if BIND_SDLHapticRamp_TYPE
  mrb_SDL_SDLHapticRamp_init(mrb);
#endif
#if BIND_SDLJoyAxisEvent_TYPE
  mrb_SDL_SDLJoyAxisEvent_init(mrb);
#endif
#if BIND_SDLJoyBallEvent_TYPE
  mrb_SDL_SDLJoyBallEvent_init(mrb);
#endif
#if BIND_SDLJoyButtonEvent_TYPE
  mrb_SDL_SDLJoyButtonEvent_init(mrb);
#endif
#if BIND_SDLJoyDeviceEvent_TYPE
  mrb_SDL_SDLJoyDeviceEvent_init(mrb);
#endif
#if BIND_SDLJoyHatEvent_TYPE
  mrb_SDL_SDLJoyHatEvent_init(mrb);
#endif
#if BIND_SDLKeyboardEvent_TYPE
  mrb_SDL_SDLKeyboardEvent_init(mrb);
#endif
#if BIND_SDLKeysym_TYPE
  mrb_SDL_SDLKeysym_init(mrb);
#endif
#if BIND_SDLMouseButtonEvent_TYPE
  mrb_SDL_SDLMouseButtonEvent_init(mrb);
#endif
#if BIND_SDLMouseMotionEvent_TYPE
  mrb_SDL_SDLMouseMotionEvent_init(mrb);
#endif
#if BIND_SDLMouseWheelEvent_TYPE
  mrb_SDL_SDLMouseWheelEvent_init(mrb);
#endif
#if BIND_SDLMultiGestureEvent_TYPE
  mrb_SDL_SDLMultiGestureEvent_init(mrb);
#endif
#if BIND_SDLMutex_TYPE
  mrb_SDL_SDLMutex_init(mrb);
#endif
#if BIND_SDLOSEvent_TYPE
  mrb_SDL_SDLOSEvent_init(mrb);
#endif
#if BIND_SDLPalette_TYPE
  mrb_SDL_SDLPalette_init(mrb);
#endif
#if BIND_SDLPixelFormat_TYPE
  mrb_SDL_SDLPixelFormat_init(mrb);
#endif
#if BIND_SDLPoint_TYPE
  mrb_SDL_SDLPoint_init(mrb);
#endif
#if BIND_SDLQuitEvent_TYPE
  mrb_SDL_SDLQuitEvent_init(mrb);
#endif
#if BIND_SDLRect_TYPE
  mrb_SDL_SDLRect_init(mrb);
#endif
#if BIND_SDLRenderer_TYPE
  mrb_SDL_SDLRenderer_init(mrb);
#endif
#if BIND_SDLRendererInfo_TYPE
  mrb_SDL_SDLRendererInfo_init(mrb);
#endif
#if BIND_SDLRWops_TYPE
  mrb_SDL_SDLRWops_init(mrb);
#endif
#if BIND_SDLSemaphore_TYPE
  mrb_SDL_SDLSemaphore_init(mrb);
#endif
#if BIND_SDLSurface_TYPE
  mrb_SDL_SDLSurface_init(mrb);
#endif
#if BIND_SDLSysWMEvent_TYPE
  mrb_SDL_SDLSysWMEvent_init(mrb);
#endif
#if BIND_SDLSysWMinfo_TYPE
  mrb_SDL_SDLSysWMinfo_init(mrb);
#endif
#if BIND_SDLSysWMmsg_TYPE
  mrb_SDL_SDLSysWMmsg_init(mrb);
#endif
#if BIND_SDLTextEditingEvent_TYPE
  mrb_SDL_SDLTextEditingEvent_init(mrb);
#endif
#if BIND_SDLTextInputEvent_TYPE
  mrb_SDL_SDLTextInputEvent_init(mrb);
#endif
#if BIND_SDLTexture_TYPE
  mrb_SDL_SDLTexture_init(mrb);
#endif
#if BIND_SDLThread_TYPE
  mrb_SDL_SDLThread_init(mrb);
#endif
#if BIND_SDLTouchFingerEvent_TYPE
  mrb_SDL_SDLTouchFingerEvent_init(mrb);
#endif
#if BIND_SDLUserEvent_TYPE
  mrb_SDL_SDLUserEvent_init(mrb);
#endif
#if BIND_SDLVersion_TYPE
  mrb_SDL_SDLVersion_init(mrb);
#endif
#if BIND_SDLWindow_TYPE
  mrb_SDL_SDLWindow_init(mrb);
#endif
#if BIND_SDLWindowEvent_TYPE
  mrb_SDL_SDLWindowEvent_init(mrb);
#endif
#if BIND_SDLWindowShapeMode_TYPE
  mrb_SDL_SDLWindowShapeMode_init(mrb);
#endif
#if BIND_SDLTestSurfaceImageS_TYPE
  mrb_SDL_SDLTestSurfaceImageS_init(mrb);
#endif
#if BIND_SDLTestTestCaseReference_TYPE
  mrb_SDL_SDLTestTestCaseReference_init(mrb);
#endif
#if BIND_SDLTestTestSuiteReference_TYPE
  mrb_SDL_SDLTestTestSuiteReference_init(mrb);
#endif

  /*
   * Global Functions
   */
#if BIND_IMG_Init_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "IMG_Init", mrb_SDL_IMG_Init, MRB_ARGS_ARG(IMG_Init_REQUIRED_ARGC, IMG_Init_OPTIONAL_ARGC));
#endif
#if BIND_IMG_isBMP_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "IMG_isBMP", mrb_SDL_IMG_isBMP, MRB_ARGS_ARG(IMG_isBMP_REQUIRED_ARGC, IMG_isBMP_OPTIONAL_ARGC));
#endif
#if BIND_IMG_isCUR_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "IMG_isCUR", mrb_SDL_IMG_isCUR, MRB_ARGS_ARG(IMG_isCUR_REQUIRED_ARGC, IMG_isCUR_OPTIONAL_ARGC));
#endif
#if BIND_IMG_isGIF_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "IMG_isGIF", mrb_SDL_IMG_isGIF, MRB_ARGS_ARG(IMG_isGIF_REQUIRED_ARGC, IMG_isGIF_OPTIONAL_ARGC));
#endif
#if BIND_IMG_isICO_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "IMG_isICO", mrb_SDL_IMG_isICO, MRB_ARGS_ARG(IMG_isICO_REQUIRED_ARGC, IMG_isICO_OPTIONAL_ARGC));
#endif
#if BIND_IMG_isJPG_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "IMG_isJPG", mrb_SDL_IMG_isJPG, MRB_ARGS_ARG(IMG_isJPG_REQUIRED_ARGC, IMG_isJPG_OPTIONAL_ARGC));
#endif
#if BIND_IMG_isLBM_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "IMG_isLBM", mrb_SDL_IMG_isLBM, MRB_ARGS_ARG(IMG_isLBM_REQUIRED_ARGC, IMG_isLBM_OPTIONAL_ARGC));
#endif
#if BIND_IMG_isPCX_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "IMG_isPCX", mrb_SDL_IMG_isPCX, MRB_ARGS_ARG(IMG_isPCX_REQUIRED_ARGC, IMG_isPCX_OPTIONAL_ARGC));
#endif
#if BIND_IMG_isPNG_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "IMG_isPNG", mrb_SDL_IMG_isPNG, MRB_ARGS_ARG(IMG_isPNG_REQUIRED_ARGC, IMG_isPNG_OPTIONAL_ARGC));
#endif
#if BIND_IMG_isPNM_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "IMG_isPNM", mrb_SDL_IMG_isPNM, MRB_ARGS_ARG(IMG_isPNM_REQUIRED_ARGC, IMG_isPNM_OPTIONAL_ARGC));
#endif
#if BIND_IMG_isTIF_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "IMG_isTIF", mrb_SDL_IMG_isTIF, MRB_ARGS_ARG(IMG_isTIF_REQUIRED_ARGC, IMG_isTIF_OPTIONAL_ARGC));
#endif
#if BIND_IMG_isWEBP_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "IMG_isWEBP", mrb_SDL_IMG_isWEBP, MRB_ARGS_ARG(IMG_isWEBP_REQUIRED_ARGC, IMG_isWEBP_OPTIONAL_ARGC));
#endif
#if BIND_IMG_isXCF_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "IMG_isXCF", mrb_SDL_IMG_isXCF, MRB_ARGS_ARG(IMG_isXCF_REQUIRED_ARGC, IMG_isXCF_OPTIONAL_ARGC));
#endif
#if BIND_IMG_isXPM_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "IMG_isXPM", mrb_SDL_IMG_isXPM, MRB_ARGS_ARG(IMG_isXPM_REQUIRED_ARGC, IMG_isXPM_OPTIONAL_ARGC));
#endif
#if BIND_IMG_isXV_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "IMG_isXV", mrb_SDL_IMG_isXV, MRB_ARGS_ARG(IMG_isXV_REQUIRED_ARGC, IMG_isXV_OPTIONAL_ARGC));
#endif
#if BIND_IMG_Linked_Version_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "IMG_Linked_Version", mrb_SDL_IMG_Linked_Version, MRB_ARGS_ARG(IMG_Linked_Version_REQUIRED_ARGC, IMG_Linked_Version_OPTIONAL_ARGC));
#endif
#if BIND_IMG_Load_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "IMG_Load", mrb_SDL_IMG_Load, MRB_ARGS_ARG(IMG_Load_REQUIRED_ARGC, IMG_Load_OPTIONAL_ARGC));
#endif
#if BIND_IMG_Load_RW_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "IMG_Load_RW", mrb_SDL_IMG_Load_RW, MRB_ARGS_ARG(IMG_Load_RW_REQUIRED_ARGC, IMG_Load_RW_OPTIONAL_ARGC));
#endif
#if BIND_IMG_LoadBMP_RW_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "IMG_LoadBMP_RW", mrb_SDL_IMG_LoadBMP_RW, MRB_ARGS_ARG(IMG_LoadBMP_RW_REQUIRED_ARGC, IMG_LoadBMP_RW_OPTIONAL_ARGC));
#endif
#if BIND_IMG_LoadCUR_RW_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "IMG_LoadCUR_RW", mrb_SDL_IMG_LoadCUR_RW, MRB_ARGS_ARG(IMG_LoadCUR_RW_REQUIRED_ARGC, IMG_LoadCUR_RW_OPTIONAL_ARGC));
#endif
#if BIND_IMG_LoadGIF_RW_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "IMG_LoadGIF_RW", mrb_SDL_IMG_LoadGIF_RW, MRB_ARGS_ARG(IMG_LoadGIF_RW_REQUIRED_ARGC, IMG_LoadGIF_RW_OPTIONAL_ARGC));
#endif
#if BIND_IMG_LoadICO_RW_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "IMG_LoadICO_RW", mrb_SDL_IMG_LoadICO_RW, MRB_ARGS_ARG(IMG_LoadICO_RW_REQUIRED_ARGC, IMG_LoadICO_RW_OPTIONAL_ARGC));
#endif
#if BIND_IMG_LoadJPG_RW_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "IMG_LoadJPG_RW", mrb_SDL_IMG_LoadJPG_RW, MRB_ARGS_ARG(IMG_LoadJPG_RW_REQUIRED_ARGC, IMG_LoadJPG_RW_OPTIONAL_ARGC));
#endif
#if BIND_IMG_LoadLBM_RW_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "IMG_LoadLBM_RW", mrb_SDL_IMG_LoadLBM_RW, MRB_ARGS_ARG(IMG_LoadLBM_RW_REQUIRED_ARGC, IMG_LoadLBM_RW_OPTIONAL_ARGC));
#endif
#if BIND_IMG_LoadPCX_RW_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "IMG_LoadPCX_RW", mrb_SDL_IMG_LoadPCX_RW, MRB_ARGS_ARG(IMG_LoadPCX_RW_REQUIRED_ARGC, IMG_LoadPCX_RW_OPTIONAL_ARGC));
#endif
#if BIND_IMG_LoadPNG_RW_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "IMG_LoadPNG_RW", mrb_SDL_IMG_LoadPNG_RW, MRB_ARGS_ARG(IMG_LoadPNG_RW_REQUIRED_ARGC, IMG_LoadPNG_RW_OPTIONAL_ARGC));
#endif
#if BIND_IMG_LoadPNM_RW_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "IMG_LoadPNM_RW", mrb_SDL_IMG_LoadPNM_RW, MRB_ARGS_ARG(IMG_LoadPNM_RW_REQUIRED_ARGC, IMG_LoadPNM_RW_OPTIONAL_ARGC));
#endif
#if BIND_IMG_LoadTexture_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "IMG_LoadTexture", mrb_SDL_IMG_LoadTexture, MRB_ARGS_ARG(IMG_LoadTexture_REQUIRED_ARGC, IMG_LoadTexture_OPTIONAL_ARGC));
#endif
#if BIND_IMG_LoadTexture_RW_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "IMG_LoadTexture_RW", mrb_SDL_IMG_LoadTexture_RW, MRB_ARGS_ARG(IMG_LoadTexture_RW_REQUIRED_ARGC, IMG_LoadTexture_RW_OPTIONAL_ARGC));
#endif
#if BIND_IMG_LoadTextureTyped_RW_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "IMG_LoadTextureTyped_RW", mrb_SDL_IMG_LoadTextureTyped_RW, MRB_ARGS_ARG(IMG_LoadTextureTyped_RW_REQUIRED_ARGC, IMG_LoadTextureTyped_RW_OPTIONAL_ARGC));
#endif
#if BIND_IMG_LoadTGA_RW_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "IMG_LoadTGA_RW", mrb_SDL_IMG_LoadTGA_RW, MRB_ARGS_ARG(IMG_LoadTGA_RW_REQUIRED_ARGC, IMG_LoadTGA_RW_OPTIONAL_ARGC));
#endif
#if BIND_IMG_LoadTIF_RW_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "IMG_LoadTIF_RW", mrb_SDL_IMG_LoadTIF_RW, MRB_ARGS_ARG(IMG_LoadTIF_RW_REQUIRED_ARGC, IMG_LoadTIF_RW_OPTIONAL_ARGC));
#endif
#if BIND_IMG_LoadTyped_RW_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "IMG_LoadTyped_RW", mrb_SDL_IMG_LoadTyped_RW, MRB_ARGS_ARG(IMG_LoadTyped_RW_REQUIRED_ARGC, IMG_LoadTyped_RW_OPTIONAL_ARGC));
#endif
#if BIND_IMG_LoadWEBP_RW_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "IMG_LoadWEBP_RW", mrb_SDL_IMG_LoadWEBP_RW, MRB_ARGS_ARG(IMG_LoadWEBP_RW_REQUIRED_ARGC, IMG_LoadWEBP_RW_OPTIONAL_ARGC));
#endif
#if BIND_IMG_LoadXCF_RW_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "IMG_LoadXCF_RW", mrb_SDL_IMG_LoadXCF_RW, MRB_ARGS_ARG(IMG_LoadXCF_RW_REQUIRED_ARGC, IMG_LoadXCF_RW_OPTIONAL_ARGC));
#endif
#if BIND_IMG_LoadXPM_RW_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "IMG_LoadXPM_RW", mrb_SDL_IMG_LoadXPM_RW, MRB_ARGS_ARG(IMG_LoadXPM_RW_REQUIRED_ARGC, IMG_LoadXPM_RW_OPTIONAL_ARGC));
#endif
#if BIND_IMG_LoadXV_RW_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "IMG_LoadXV_RW", mrb_SDL_IMG_LoadXV_RW, MRB_ARGS_ARG(IMG_LoadXV_RW_REQUIRED_ARGC, IMG_LoadXV_RW_OPTIONAL_ARGC));
#endif
#if BIND_IMG_Quit_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "IMG_Quit", mrb_SDL_IMG_Quit, MRB_ARGS_ARG(IMG_Quit_REQUIRED_ARGC, IMG_Quit_OPTIONAL_ARGC));
#endif
#if BIND_IMG_ReadXPMFromArray_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "IMG_ReadXPMFromArray", mrb_SDL_IMG_ReadXPMFromArray, MRB_ARGS_ARG(IMG_ReadXPMFromArray_REQUIRED_ARGC, IMG_ReadXPMFromArray_OPTIONAL_ARGC));
#endif
#if BIND_IMG_SavePNG_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "IMG_SavePNG", mrb_SDL_IMG_SavePNG, MRB_ARGS_ARG(IMG_SavePNG_REQUIRED_ARGC, IMG_SavePNG_OPTIONAL_ARGC));
#endif
#if BIND_IMG_SavePNG_RW_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "IMG_SavePNG_RW", mrb_SDL_IMG_SavePNG_RW, MRB_ARGS_ARG(IMG_SavePNG_RW_REQUIRED_ARGC, IMG_SavePNG_RW_OPTIONAL_ARGC));
#endif
#if BIND_SDL_abs_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_abs", mrb_SDL_SDL_abs, MRB_ARGS_ARG(SDL_abs_REQUIRED_ARGC, SDL_abs_OPTIONAL_ARGC));
#endif
#if BIND_SDL_acos_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_acos", mrb_SDL_SDL_acos, MRB_ARGS_ARG(SDL_acos_REQUIRED_ARGC, SDL_acos_OPTIONAL_ARGC));
#endif
#if BIND_SDL_AddEventWatch_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_AddEventWatch", mrb_SDL_SDL_AddEventWatch, MRB_ARGS_ARG(SDL_AddEventWatch_REQUIRED_ARGC, SDL_AddEventWatch_OPTIONAL_ARGC));
#endif
#if BIND_SDL_AddHintCallback_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_AddHintCallback", mrb_SDL_SDL_AddHintCallback, MRB_ARGS_ARG(SDL_AddHintCallback_REQUIRED_ARGC, SDL_AddHintCallback_OPTIONAL_ARGC));
#endif
#if BIND_SDL_AddTimer_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_AddTimer", mrb_SDL_SDL_AddTimer, MRB_ARGS_ARG(SDL_AddTimer_REQUIRED_ARGC, SDL_AddTimer_OPTIONAL_ARGC));
#endif
#if BIND_SDL_AllocFormat_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_AllocFormat", mrb_SDL_SDL_AllocFormat, MRB_ARGS_ARG(SDL_AllocFormat_REQUIRED_ARGC, SDL_AllocFormat_OPTIONAL_ARGC));
#endif
#if BIND_SDL_AllocPalette_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_AllocPalette", mrb_SDL_SDL_AllocPalette, MRB_ARGS_ARG(SDL_AllocPalette_REQUIRED_ARGC, SDL_AllocPalette_OPTIONAL_ARGC));
#endif
#if BIND_SDL_AllocRW_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_AllocRW", mrb_SDL_SDL_AllocRW, MRB_ARGS_ARG(SDL_AllocRW_REQUIRED_ARGC, SDL_AllocRW_OPTIONAL_ARGC));
#endif
#if BIND_SDL_asin_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_asin", mrb_SDL_SDL_asin, MRB_ARGS_ARG(SDL_asin_REQUIRED_ARGC, SDL_asin_OPTIONAL_ARGC));
#endif
#if BIND_SDL_atan_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_atan", mrb_SDL_SDL_atan, MRB_ARGS_ARG(SDL_atan_REQUIRED_ARGC, SDL_atan_OPTIONAL_ARGC));
#endif
#if BIND_SDL_atan2_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_atan2", mrb_SDL_SDL_atan2, MRB_ARGS_ARG(SDL_atan2_REQUIRED_ARGC, SDL_atan2_OPTIONAL_ARGC));
#endif
#if BIND_SDL_atof_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_atof", mrb_SDL_SDL_atof, MRB_ARGS_ARG(SDL_atof_REQUIRED_ARGC, SDL_atof_OPTIONAL_ARGC));
#endif
#if BIND_SDL_atoi_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_atoi", mrb_SDL_SDL_atoi, MRB_ARGS_ARG(SDL_atoi_REQUIRED_ARGC, SDL_atoi_OPTIONAL_ARGC));
#endif
#if BIND_SDL_AtomicAdd_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_AtomicAdd", mrb_SDL_SDL_AtomicAdd, MRB_ARGS_ARG(SDL_AtomicAdd_REQUIRED_ARGC, SDL_AtomicAdd_OPTIONAL_ARGC));
#endif
#if BIND_SDL_AtomicCAS_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_AtomicCAS", mrb_SDL_SDL_AtomicCAS, MRB_ARGS_ARG(SDL_AtomicCAS_REQUIRED_ARGC, SDL_AtomicCAS_OPTIONAL_ARGC));
#endif
#if BIND_SDL_AtomicCASPtr_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_AtomicCASPtr", mrb_SDL_SDL_AtomicCASPtr, MRB_ARGS_ARG(SDL_AtomicCASPtr_REQUIRED_ARGC, SDL_AtomicCASPtr_OPTIONAL_ARGC));
#endif
#if BIND_SDL_AtomicGet_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_AtomicGet", mrb_SDL_SDL_AtomicGet, MRB_ARGS_ARG(SDL_AtomicGet_REQUIRED_ARGC, SDL_AtomicGet_OPTIONAL_ARGC));
#endif
#if BIND_SDL_AtomicGetPtr_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_AtomicGetPtr", mrb_SDL_SDL_AtomicGetPtr, MRB_ARGS_ARG(SDL_AtomicGetPtr_REQUIRED_ARGC, SDL_AtomicGetPtr_OPTIONAL_ARGC));
#endif
#if BIND_SDL_AtomicLock_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_AtomicLock", mrb_SDL_SDL_AtomicLock, MRB_ARGS_ARG(SDL_AtomicLock_REQUIRED_ARGC, SDL_AtomicLock_OPTIONAL_ARGC));
#endif
#if BIND_SDL_AtomicSet_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_AtomicSet", mrb_SDL_SDL_AtomicSet, MRB_ARGS_ARG(SDL_AtomicSet_REQUIRED_ARGC, SDL_AtomicSet_OPTIONAL_ARGC));
#endif
#if BIND_SDL_AtomicSetPtr_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_AtomicSetPtr", mrb_SDL_SDL_AtomicSetPtr, MRB_ARGS_ARG(SDL_AtomicSetPtr_REQUIRED_ARGC, SDL_AtomicSetPtr_OPTIONAL_ARGC));
#endif
#if BIND_SDL_AtomicTryLock_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_AtomicTryLock", mrb_SDL_SDL_AtomicTryLock, MRB_ARGS_ARG(SDL_AtomicTryLock_REQUIRED_ARGC, SDL_AtomicTryLock_OPTIONAL_ARGC));
#endif
#if BIND_SDL_AtomicUnlock_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_AtomicUnlock", mrb_SDL_SDL_AtomicUnlock, MRB_ARGS_ARG(SDL_AtomicUnlock_REQUIRED_ARGC, SDL_AtomicUnlock_OPTIONAL_ARGC));
#endif
#if BIND_SDL_AudioInit_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_AudioInit", mrb_SDL_SDL_AudioInit, MRB_ARGS_ARG(SDL_AudioInit_REQUIRED_ARGC, SDL_AudioInit_OPTIONAL_ARGC));
#endif
#if BIND_SDL_AudioQuit_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_AudioQuit", mrb_SDL_SDL_AudioQuit, MRB_ARGS_ARG(SDL_AudioQuit_REQUIRED_ARGC, SDL_AudioQuit_OPTIONAL_ARGC));
#endif
#if BIND_SDL_BuildAudioCVT_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_BuildAudioCVT", mrb_SDL_SDL_BuildAudioCVT, MRB_ARGS_ARG(SDL_BuildAudioCVT_REQUIRED_ARGC, SDL_BuildAudioCVT_OPTIONAL_ARGC));
#endif
#if BIND_SDL_CalculateGammaRamp_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_CalculateGammaRamp", mrb_SDL_SDL_CalculateGammaRamp, MRB_ARGS_ARG(SDL_CalculateGammaRamp_REQUIRED_ARGC, SDL_CalculateGammaRamp_OPTIONAL_ARGC));
#endif
#if BIND_SDL_calloc_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_calloc", mrb_SDL_SDL_calloc, MRB_ARGS_ARG(SDL_calloc_REQUIRED_ARGC, SDL_calloc_OPTIONAL_ARGC));
#endif
#if BIND_SDL_ceil_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_ceil", mrb_SDL_SDL_ceil, MRB_ARGS_ARG(SDL_ceil_REQUIRED_ARGC, SDL_ceil_OPTIONAL_ARGC));
#endif
#if BIND_SDL_ClearError_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_ClearError", mrb_SDL_SDL_ClearError, MRB_ARGS_ARG(SDL_ClearError_REQUIRED_ARGC, SDL_ClearError_OPTIONAL_ARGC));
#endif
#if BIND_SDL_ClearHints_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_ClearHints", mrb_SDL_SDL_ClearHints, MRB_ARGS_ARG(SDL_ClearHints_REQUIRED_ARGC, SDL_ClearHints_OPTIONAL_ARGC));
#endif
#if BIND_SDL_CloseAudio_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_CloseAudio", mrb_SDL_SDL_CloseAudio, MRB_ARGS_ARG(SDL_CloseAudio_REQUIRED_ARGC, SDL_CloseAudio_OPTIONAL_ARGC));
#endif
#if BIND_SDL_CloseAudioDevice_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_CloseAudioDevice", mrb_SDL_SDL_CloseAudioDevice, MRB_ARGS_ARG(SDL_CloseAudioDevice_REQUIRED_ARGC, SDL_CloseAudioDevice_OPTIONAL_ARGC));
#endif
#if BIND_SDL_CondBroadcast_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_CondBroadcast", mrb_SDL_SDL_CondBroadcast, MRB_ARGS_ARG(SDL_CondBroadcast_REQUIRED_ARGC, SDL_CondBroadcast_OPTIONAL_ARGC));
#endif
#if BIND_SDL_CondSignal_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_CondSignal", mrb_SDL_SDL_CondSignal, MRB_ARGS_ARG(SDL_CondSignal_REQUIRED_ARGC, SDL_CondSignal_OPTIONAL_ARGC));
#endif
#if BIND_SDL_CondWait_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_CondWait", mrb_SDL_SDL_CondWait, MRB_ARGS_ARG(SDL_CondWait_REQUIRED_ARGC, SDL_CondWait_OPTIONAL_ARGC));
#endif
#if BIND_SDL_CondWaitTimeout_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_CondWaitTimeout", mrb_SDL_SDL_CondWaitTimeout, MRB_ARGS_ARG(SDL_CondWaitTimeout_REQUIRED_ARGC, SDL_CondWaitTimeout_OPTIONAL_ARGC));
#endif
#if BIND_SDL_ConvertAudio_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_ConvertAudio", mrb_SDL_SDL_ConvertAudio, MRB_ARGS_ARG(SDL_ConvertAudio_REQUIRED_ARGC, SDL_ConvertAudio_OPTIONAL_ARGC));
#endif
#if BIND_SDL_ConvertPixels_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_ConvertPixels", mrb_SDL_SDL_ConvertPixels, MRB_ARGS_ARG(SDL_ConvertPixels_REQUIRED_ARGC, SDL_ConvertPixels_OPTIONAL_ARGC));
#endif
#if BIND_SDL_ConvertSurface_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_ConvertSurface", mrb_SDL_SDL_ConvertSurface, MRB_ARGS_ARG(SDL_ConvertSurface_REQUIRED_ARGC, SDL_ConvertSurface_OPTIONAL_ARGC));
#endif
#if BIND_SDL_ConvertSurfaceFormat_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_ConvertSurfaceFormat", mrb_SDL_SDL_ConvertSurfaceFormat, MRB_ARGS_ARG(SDL_ConvertSurfaceFormat_REQUIRED_ARGC, SDL_ConvertSurfaceFormat_OPTIONAL_ARGC));
#endif
#if BIND_SDL_copysign_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_copysign", mrb_SDL_SDL_copysign, MRB_ARGS_ARG(SDL_copysign_REQUIRED_ARGC, SDL_copysign_OPTIONAL_ARGC));
#endif
#if BIND_SDL_cos_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_cos", mrb_SDL_SDL_cos, MRB_ARGS_ARG(SDL_cos_REQUIRED_ARGC, SDL_cos_OPTIONAL_ARGC));
#endif
#if BIND_SDL_cosf_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_cosf", mrb_SDL_SDL_cosf, MRB_ARGS_ARG(SDL_cosf_REQUIRED_ARGC, SDL_cosf_OPTIONAL_ARGC));
#endif
#if BIND_SDL_CreateColorCursor_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_CreateColorCursor", mrb_SDL_SDL_CreateColorCursor, MRB_ARGS_ARG(SDL_CreateColorCursor_REQUIRED_ARGC, SDL_CreateColorCursor_OPTIONAL_ARGC));
#endif
#if BIND_SDL_CreateCond_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_CreateCond", mrb_SDL_SDL_CreateCond, MRB_ARGS_ARG(SDL_CreateCond_REQUIRED_ARGC, SDL_CreateCond_OPTIONAL_ARGC));
#endif
#if BIND_SDL_CreateCursor_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_CreateCursor", mrb_SDL_SDL_CreateCursor, MRB_ARGS_ARG(SDL_CreateCursor_REQUIRED_ARGC, SDL_CreateCursor_OPTIONAL_ARGC));
#endif
#if BIND_SDL_CreateMutex_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_CreateMutex", mrb_SDL_SDL_CreateMutex, MRB_ARGS_ARG(SDL_CreateMutex_REQUIRED_ARGC, SDL_CreateMutex_OPTIONAL_ARGC));
#endif
#if BIND_SDL_CreateRenderer_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_CreateRenderer", mrb_SDL_SDL_CreateRenderer, MRB_ARGS_ARG(SDL_CreateRenderer_REQUIRED_ARGC, SDL_CreateRenderer_OPTIONAL_ARGC));
#endif
#if BIND_SDL_CreateRGBSurface_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_CreateRGBSurface", mrb_SDL_SDL_CreateRGBSurface, MRB_ARGS_ARG(SDL_CreateRGBSurface_REQUIRED_ARGC, SDL_CreateRGBSurface_OPTIONAL_ARGC));
#endif
#if BIND_SDL_CreateRGBSurfaceFrom_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_CreateRGBSurfaceFrom", mrb_SDL_SDL_CreateRGBSurfaceFrom, MRB_ARGS_ARG(SDL_CreateRGBSurfaceFrom_REQUIRED_ARGC, SDL_CreateRGBSurfaceFrom_OPTIONAL_ARGC));
#endif
#if BIND_SDL_CreateSemaphore_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_CreateSemaphore", mrb_SDL_SDL_CreateSemaphore, MRB_ARGS_ARG(SDL_CreateSemaphore_REQUIRED_ARGC, SDL_CreateSemaphore_OPTIONAL_ARGC));
#endif
#if BIND_SDL_CreateShapedWindow_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_CreateShapedWindow", mrb_SDL_SDL_CreateShapedWindow, MRB_ARGS_ARG(SDL_CreateShapedWindow_REQUIRED_ARGC, SDL_CreateShapedWindow_OPTIONAL_ARGC));
#endif
#if BIND_SDL_CreateSoftwareRenderer_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_CreateSoftwareRenderer", mrb_SDL_SDL_CreateSoftwareRenderer, MRB_ARGS_ARG(SDL_CreateSoftwareRenderer_REQUIRED_ARGC, SDL_CreateSoftwareRenderer_OPTIONAL_ARGC));
#endif
#if BIND_SDL_CreateSystemCursor_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_CreateSystemCursor", mrb_SDL_SDL_CreateSystemCursor, MRB_ARGS_ARG(SDL_CreateSystemCursor_REQUIRED_ARGC, SDL_CreateSystemCursor_OPTIONAL_ARGC));
#endif
#if BIND_SDL_CreateTexture_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_CreateTexture", mrb_SDL_SDL_CreateTexture, MRB_ARGS_ARG(SDL_CreateTexture_REQUIRED_ARGC, SDL_CreateTexture_OPTIONAL_ARGC));
#endif
#if BIND_SDL_CreateTextureFromSurface_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_CreateTextureFromSurface", mrb_SDL_SDL_CreateTextureFromSurface, MRB_ARGS_ARG(SDL_CreateTextureFromSurface_REQUIRED_ARGC, SDL_CreateTextureFromSurface_OPTIONAL_ARGC));
#endif
#if BIND_SDL_CreateThread_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_CreateThread", mrb_SDL_SDL_CreateThread, MRB_ARGS_ARG(SDL_CreateThread_REQUIRED_ARGC, SDL_CreateThread_OPTIONAL_ARGC));
#endif
#if BIND_SDL_CreateWindow_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_CreateWindow", mrb_SDL_SDL_CreateWindow, MRB_ARGS_ARG(SDL_CreateWindow_REQUIRED_ARGC, SDL_CreateWindow_OPTIONAL_ARGC));
#endif
#if BIND_SDL_CreateWindowAndRenderer_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_CreateWindowAndRenderer", mrb_SDL_SDL_CreateWindowAndRenderer, MRB_ARGS_ARG(SDL_CreateWindowAndRenderer_REQUIRED_ARGC, SDL_CreateWindowAndRenderer_OPTIONAL_ARGC));
#endif
#if BIND_SDL_CreateWindowFrom_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_CreateWindowFrom", mrb_SDL_SDL_CreateWindowFrom, MRB_ARGS_ARG(SDL_CreateWindowFrom_REQUIRED_ARGC, SDL_CreateWindowFrom_OPTIONAL_ARGC));
#endif
#if BIND_SDL_Delay_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_Delay", mrb_SDL_SDL_Delay, MRB_ARGS_ARG(SDL_Delay_REQUIRED_ARGC, SDL_Delay_OPTIONAL_ARGC));
#endif
#if BIND_SDL_DelEventWatch_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_DelEventWatch", mrb_SDL_SDL_DelEventWatch, MRB_ARGS_ARG(SDL_DelEventWatch_REQUIRED_ARGC, SDL_DelEventWatch_OPTIONAL_ARGC));
#endif
#if BIND_SDL_DelHintCallback_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_DelHintCallback", mrb_SDL_SDL_DelHintCallback, MRB_ARGS_ARG(SDL_DelHintCallback_REQUIRED_ARGC, SDL_DelHintCallback_OPTIONAL_ARGC));
#endif
#if BIND_SDL_DestroyCond_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_DestroyCond", mrb_SDL_SDL_DestroyCond, MRB_ARGS_ARG(SDL_DestroyCond_REQUIRED_ARGC, SDL_DestroyCond_OPTIONAL_ARGC));
#endif
#if BIND_SDL_DestroyMutex_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_DestroyMutex", mrb_SDL_SDL_DestroyMutex, MRB_ARGS_ARG(SDL_DestroyMutex_REQUIRED_ARGC, SDL_DestroyMutex_OPTIONAL_ARGC));
#endif
#if BIND_SDL_DestroyRenderer_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_DestroyRenderer", mrb_SDL_SDL_DestroyRenderer, MRB_ARGS_ARG(SDL_DestroyRenderer_REQUIRED_ARGC, SDL_DestroyRenderer_OPTIONAL_ARGC));
#endif
#if BIND_SDL_DestroySemaphore_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_DestroySemaphore", mrb_SDL_SDL_DestroySemaphore, MRB_ARGS_ARG(SDL_DestroySemaphore_REQUIRED_ARGC, SDL_DestroySemaphore_OPTIONAL_ARGC));
#endif
#if BIND_SDL_DestroyTexture_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_DestroyTexture", mrb_SDL_SDL_DestroyTexture, MRB_ARGS_ARG(SDL_DestroyTexture_REQUIRED_ARGC, SDL_DestroyTexture_OPTIONAL_ARGC));
#endif
#if BIND_SDL_DestroyWindow_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_DestroyWindow", mrb_SDL_SDL_DestroyWindow, MRB_ARGS_ARG(SDL_DestroyWindow_REQUIRED_ARGC, SDL_DestroyWindow_OPTIONAL_ARGC));
#endif
#if BIND_SDL_DetachThread_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_DetachThread", mrb_SDL_SDL_DetachThread, MRB_ARGS_ARG(SDL_DetachThread_REQUIRED_ARGC, SDL_DetachThread_OPTIONAL_ARGC));
#endif
#if BIND_SDL_DisableScreenSaver_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_DisableScreenSaver", mrb_SDL_SDL_DisableScreenSaver, MRB_ARGS_ARG(SDL_DisableScreenSaver_REQUIRED_ARGC, SDL_DisableScreenSaver_OPTIONAL_ARGC));
#endif
#if BIND_SDL_EnableScreenSaver_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_EnableScreenSaver", mrb_SDL_SDL_EnableScreenSaver, MRB_ARGS_ARG(SDL_EnableScreenSaver_REQUIRED_ARGC, SDL_EnableScreenSaver_OPTIONAL_ARGC));
#endif
#if BIND_SDL_EnclosePoints_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_EnclosePoints", mrb_SDL_SDL_EnclosePoints, MRB_ARGS_ARG(SDL_EnclosePoints_REQUIRED_ARGC, SDL_EnclosePoints_OPTIONAL_ARGC));
#endif
#if BIND_SDL_Error_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_Error", mrb_SDL_SDL_Error, MRB_ARGS_ARG(SDL_Error_REQUIRED_ARGC, SDL_Error_OPTIONAL_ARGC));
#endif
#if BIND_SDL_EventState_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_EventState", mrb_SDL_SDL_EventState, MRB_ARGS_ARG(SDL_EventState_REQUIRED_ARGC, SDL_EventState_OPTIONAL_ARGC));
#endif
#if BIND_SDL_fabs_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_fabs", mrb_SDL_SDL_fabs, MRB_ARGS_ARG(SDL_fabs_REQUIRED_ARGC, SDL_fabs_OPTIONAL_ARGC));
#endif
#if BIND_SDL_FillRect_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_FillRect", mrb_SDL_SDL_FillRect, MRB_ARGS_ARG(SDL_FillRect_REQUIRED_ARGC, SDL_FillRect_OPTIONAL_ARGC));
#endif
#if BIND_SDL_FillRects_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_FillRects", mrb_SDL_SDL_FillRects, MRB_ARGS_ARG(SDL_FillRects_REQUIRED_ARGC, SDL_FillRects_OPTIONAL_ARGC));
#endif
#if BIND_SDL_FilterEvents_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_FilterEvents", mrb_SDL_SDL_FilterEvents, MRB_ARGS_ARG(SDL_FilterEvents_REQUIRED_ARGC, SDL_FilterEvents_OPTIONAL_ARGC));
#endif
#if BIND_SDL_floor_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_floor", mrb_SDL_SDL_floor, MRB_ARGS_ARG(SDL_floor_REQUIRED_ARGC, SDL_floor_OPTIONAL_ARGC));
#endif
#if BIND_SDL_FlushEvent_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_FlushEvent", mrb_SDL_SDL_FlushEvent, MRB_ARGS_ARG(SDL_FlushEvent_REQUIRED_ARGC, SDL_FlushEvent_OPTIONAL_ARGC));
#endif
#if BIND_SDL_FlushEvents_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_FlushEvents", mrb_SDL_SDL_FlushEvents, MRB_ARGS_ARG(SDL_FlushEvents_REQUIRED_ARGC, SDL_FlushEvents_OPTIONAL_ARGC));
#endif
#if BIND_SDL_free_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_free", mrb_SDL_SDL_free, MRB_ARGS_ARG(SDL_free_REQUIRED_ARGC, SDL_free_OPTIONAL_ARGC));
#endif
#if BIND_SDL_FreeCursor_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_FreeCursor", mrb_SDL_SDL_FreeCursor, MRB_ARGS_ARG(SDL_FreeCursor_REQUIRED_ARGC, SDL_FreeCursor_OPTIONAL_ARGC));
#endif
#if BIND_SDL_FreeFormat_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_FreeFormat", mrb_SDL_SDL_FreeFormat, MRB_ARGS_ARG(SDL_FreeFormat_REQUIRED_ARGC, SDL_FreeFormat_OPTIONAL_ARGC));
#endif
#if BIND_SDL_FreePalette_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_FreePalette", mrb_SDL_SDL_FreePalette, MRB_ARGS_ARG(SDL_FreePalette_REQUIRED_ARGC, SDL_FreePalette_OPTIONAL_ARGC));
#endif
#if BIND_SDL_FreeRW_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_FreeRW", mrb_SDL_SDL_FreeRW, MRB_ARGS_ARG(SDL_FreeRW_REQUIRED_ARGC, SDL_FreeRW_OPTIONAL_ARGC));
#endif
#if BIND_SDL_FreeSurface_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_FreeSurface", mrb_SDL_SDL_FreeSurface, MRB_ARGS_ARG(SDL_FreeSurface_REQUIRED_ARGC, SDL_FreeSurface_OPTIONAL_ARGC));
#endif
#if BIND_SDL_FreeWAV_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_FreeWAV", mrb_SDL_SDL_FreeWAV, MRB_ARGS_ARG(SDL_FreeWAV_REQUIRED_ARGC, SDL_FreeWAV_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GameControllerAddMapping_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GameControllerAddMapping", mrb_SDL_SDL_GameControllerAddMapping, MRB_ARGS_ARG(SDL_GameControllerAddMapping_REQUIRED_ARGC, SDL_GameControllerAddMapping_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GameControllerAddMappingsFromRW_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GameControllerAddMappingsFromRW", mrb_SDL_SDL_GameControllerAddMappingsFromRW, MRB_ARGS_ARG(SDL_GameControllerAddMappingsFromRW_REQUIRED_ARGC, SDL_GameControllerAddMappingsFromRW_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GameControllerClose_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GameControllerClose", mrb_SDL_SDL_GameControllerClose, MRB_ARGS_ARG(SDL_GameControllerClose_REQUIRED_ARGC, SDL_GameControllerClose_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GameControllerEventState_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GameControllerEventState", mrb_SDL_SDL_GameControllerEventState, MRB_ARGS_ARG(SDL_GameControllerEventState_REQUIRED_ARGC, SDL_GameControllerEventState_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GameControllerGetAttached_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GameControllerGetAttached", mrb_SDL_SDL_GameControllerGetAttached, MRB_ARGS_ARG(SDL_GameControllerGetAttached_REQUIRED_ARGC, SDL_GameControllerGetAttached_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GameControllerGetAxis_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GameControllerGetAxis", mrb_SDL_SDL_GameControllerGetAxis, MRB_ARGS_ARG(SDL_GameControllerGetAxis_REQUIRED_ARGC, SDL_GameControllerGetAxis_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GameControllerGetAxisFromString_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GameControllerGetAxisFromString", mrb_SDL_SDL_GameControllerGetAxisFromString, MRB_ARGS_ARG(SDL_GameControllerGetAxisFromString_REQUIRED_ARGC, SDL_GameControllerGetAxisFromString_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GameControllerGetBindForAxis_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GameControllerGetBindForAxis", mrb_SDL_SDL_GameControllerGetBindForAxis, MRB_ARGS_ARG(SDL_GameControllerGetBindForAxis_REQUIRED_ARGC, SDL_GameControllerGetBindForAxis_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GameControllerGetBindForButton_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GameControllerGetBindForButton", mrb_SDL_SDL_GameControllerGetBindForButton, MRB_ARGS_ARG(SDL_GameControllerGetBindForButton_REQUIRED_ARGC, SDL_GameControllerGetBindForButton_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GameControllerGetButton_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GameControllerGetButton", mrb_SDL_SDL_GameControllerGetButton, MRB_ARGS_ARG(SDL_GameControllerGetButton_REQUIRED_ARGC, SDL_GameControllerGetButton_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GameControllerGetButtonFromString_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GameControllerGetButtonFromString", mrb_SDL_SDL_GameControllerGetButtonFromString, MRB_ARGS_ARG(SDL_GameControllerGetButtonFromString_REQUIRED_ARGC, SDL_GameControllerGetButtonFromString_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GameControllerGetJoystick_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GameControllerGetJoystick", mrb_SDL_SDL_GameControllerGetJoystick, MRB_ARGS_ARG(SDL_GameControllerGetJoystick_REQUIRED_ARGC, SDL_GameControllerGetJoystick_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GameControllerGetStringForAxis_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GameControllerGetStringForAxis", mrb_SDL_SDL_GameControllerGetStringForAxis, MRB_ARGS_ARG(SDL_GameControllerGetStringForAxis_REQUIRED_ARGC, SDL_GameControllerGetStringForAxis_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GameControllerGetStringForButton_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GameControllerGetStringForButton", mrb_SDL_SDL_GameControllerGetStringForButton, MRB_ARGS_ARG(SDL_GameControllerGetStringForButton_REQUIRED_ARGC, SDL_GameControllerGetStringForButton_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GameControllerMapping_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GameControllerMapping", mrb_SDL_SDL_GameControllerMapping, MRB_ARGS_ARG(SDL_GameControllerMapping_REQUIRED_ARGC, SDL_GameControllerMapping_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GameControllerMappingForGUID_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GameControllerMappingForGUID", mrb_SDL_SDL_GameControllerMappingForGUID, MRB_ARGS_ARG(SDL_GameControllerMappingForGUID_REQUIRED_ARGC, SDL_GameControllerMappingForGUID_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GameControllerName_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GameControllerName", mrb_SDL_SDL_GameControllerName, MRB_ARGS_ARG(SDL_GameControllerName_REQUIRED_ARGC, SDL_GameControllerName_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GameControllerNameForIndex_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GameControllerNameForIndex", mrb_SDL_SDL_GameControllerNameForIndex, MRB_ARGS_ARG(SDL_GameControllerNameForIndex_REQUIRED_ARGC, SDL_GameControllerNameForIndex_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GameControllerOpen_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GameControllerOpen", mrb_SDL_SDL_GameControllerOpen, MRB_ARGS_ARG(SDL_GameControllerOpen_REQUIRED_ARGC, SDL_GameControllerOpen_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GameControllerUpdate_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GameControllerUpdate", mrb_SDL_SDL_GameControllerUpdate, MRB_ARGS_ARG(SDL_GameControllerUpdate_REQUIRED_ARGC, SDL_GameControllerUpdate_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GetAssertionHandler_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GetAssertionHandler", mrb_SDL_SDL_GetAssertionHandler, MRB_ARGS_ARG(SDL_GetAssertionHandler_REQUIRED_ARGC, SDL_GetAssertionHandler_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GetAssertionReport_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GetAssertionReport", mrb_SDL_SDL_GetAssertionReport, MRB_ARGS_ARG(SDL_GetAssertionReport_REQUIRED_ARGC, SDL_GetAssertionReport_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GetAudioDeviceName_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GetAudioDeviceName", mrb_SDL_SDL_GetAudioDeviceName, MRB_ARGS_ARG(SDL_GetAudioDeviceName_REQUIRED_ARGC, SDL_GetAudioDeviceName_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GetAudioDeviceStatus_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GetAudioDeviceStatus", mrb_SDL_SDL_GetAudioDeviceStatus, MRB_ARGS_ARG(SDL_GetAudioDeviceStatus_REQUIRED_ARGC, SDL_GetAudioDeviceStatus_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GetAudioDriver_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GetAudioDriver", mrb_SDL_SDL_GetAudioDriver, MRB_ARGS_ARG(SDL_GetAudioDriver_REQUIRED_ARGC, SDL_GetAudioDriver_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GetAudioStatus_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GetAudioStatus", mrb_SDL_SDL_GetAudioStatus, MRB_ARGS_ARG(SDL_GetAudioStatus_REQUIRED_ARGC, SDL_GetAudioStatus_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GetBasePath_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GetBasePath", mrb_SDL_SDL_GetBasePath, MRB_ARGS_ARG(SDL_GetBasePath_REQUIRED_ARGC, SDL_GetBasePath_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GetClipboardText_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GetClipboardText", mrb_SDL_SDL_GetClipboardText, MRB_ARGS_ARG(SDL_GetClipboardText_REQUIRED_ARGC, SDL_GetClipboardText_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GetClipRect_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GetClipRect", mrb_SDL_SDL_GetClipRect, MRB_ARGS_ARG(SDL_GetClipRect_REQUIRED_ARGC, SDL_GetClipRect_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GetClosestDisplayMode_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GetClosestDisplayMode", mrb_SDL_SDL_GetClosestDisplayMode, MRB_ARGS_ARG(SDL_GetClosestDisplayMode_REQUIRED_ARGC, SDL_GetClosestDisplayMode_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GetColorKey_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GetColorKey", mrb_SDL_SDL_GetColorKey, MRB_ARGS_ARG(SDL_GetColorKey_REQUIRED_ARGC, SDL_GetColorKey_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GetCPUCacheLineSize_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GetCPUCacheLineSize", mrb_SDL_SDL_GetCPUCacheLineSize, MRB_ARGS_ARG(SDL_GetCPUCacheLineSize_REQUIRED_ARGC, SDL_GetCPUCacheLineSize_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GetCPUCount_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GetCPUCount", mrb_SDL_SDL_GetCPUCount, MRB_ARGS_ARG(SDL_GetCPUCount_REQUIRED_ARGC, SDL_GetCPUCount_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GetCurrentAudioDriver_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GetCurrentAudioDriver", mrb_SDL_SDL_GetCurrentAudioDriver, MRB_ARGS_ARG(SDL_GetCurrentAudioDriver_REQUIRED_ARGC, SDL_GetCurrentAudioDriver_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GetCurrentDisplayMode_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GetCurrentDisplayMode", mrb_SDL_SDL_GetCurrentDisplayMode, MRB_ARGS_ARG(SDL_GetCurrentDisplayMode_REQUIRED_ARGC, SDL_GetCurrentDisplayMode_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GetCurrentVideoDriver_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GetCurrentVideoDriver", mrb_SDL_SDL_GetCurrentVideoDriver, MRB_ARGS_ARG(SDL_GetCurrentVideoDriver_REQUIRED_ARGC, SDL_GetCurrentVideoDriver_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GetCursor_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GetCursor", mrb_SDL_SDL_GetCursor, MRB_ARGS_ARG(SDL_GetCursor_REQUIRED_ARGC, SDL_GetCursor_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GetDefaultAssertionHandler_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GetDefaultAssertionHandler", mrb_SDL_SDL_GetDefaultAssertionHandler, MRB_ARGS_ARG(SDL_GetDefaultAssertionHandler_REQUIRED_ARGC, SDL_GetDefaultAssertionHandler_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GetDefaultCursor_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GetDefaultCursor", mrb_SDL_SDL_GetDefaultCursor, MRB_ARGS_ARG(SDL_GetDefaultCursor_REQUIRED_ARGC, SDL_GetDefaultCursor_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GetDesktopDisplayMode_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GetDesktopDisplayMode", mrb_SDL_SDL_GetDesktopDisplayMode, MRB_ARGS_ARG(SDL_GetDesktopDisplayMode_REQUIRED_ARGC, SDL_GetDesktopDisplayMode_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GetDisplayBounds_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GetDisplayBounds", mrb_SDL_SDL_GetDisplayBounds, MRB_ARGS_ARG(SDL_GetDisplayBounds_REQUIRED_ARGC, SDL_GetDisplayBounds_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GetDisplayMode_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GetDisplayMode", mrb_SDL_SDL_GetDisplayMode, MRB_ARGS_ARG(SDL_GetDisplayMode_REQUIRED_ARGC, SDL_GetDisplayMode_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GetDisplayName_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GetDisplayName", mrb_SDL_SDL_GetDisplayName, MRB_ARGS_ARG(SDL_GetDisplayName_REQUIRED_ARGC, SDL_GetDisplayName_OPTIONAL_ARGC));
#endif
#if BIND_SDL_getenv_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_getenv", mrb_SDL_SDL_getenv, MRB_ARGS_ARG(SDL_getenv_REQUIRED_ARGC, SDL_getenv_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GetError_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GetError", mrb_SDL_SDL_GetError, MRB_ARGS_ARG(SDL_GetError_REQUIRED_ARGC, SDL_GetError_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GetEventFilter_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GetEventFilter", mrb_SDL_SDL_GetEventFilter, MRB_ARGS_ARG(SDL_GetEventFilter_REQUIRED_ARGC, SDL_GetEventFilter_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GetHint_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GetHint", mrb_SDL_SDL_GetHint, MRB_ARGS_ARG(SDL_GetHint_REQUIRED_ARGC, SDL_GetHint_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GetKeyboardFocus_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GetKeyboardFocus", mrb_SDL_SDL_GetKeyboardFocus, MRB_ARGS_ARG(SDL_GetKeyboardFocus_REQUIRED_ARGC, SDL_GetKeyboardFocus_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GetKeyboardState_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GetKeyboardState", mrb_SDL_SDL_GetKeyboardState, MRB_ARGS_ARG(SDL_GetKeyboardState_REQUIRED_ARGC, SDL_GetKeyboardState_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GetKeyFromName_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GetKeyFromName", mrb_SDL_SDL_GetKeyFromName, MRB_ARGS_ARG(SDL_GetKeyFromName_REQUIRED_ARGC, SDL_GetKeyFromName_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GetKeyFromScancode_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GetKeyFromScancode", mrb_SDL_SDL_GetKeyFromScancode, MRB_ARGS_ARG(SDL_GetKeyFromScancode_REQUIRED_ARGC, SDL_GetKeyFromScancode_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GetKeyName_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GetKeyName", mrb_SDL_SDL_GetKeyName, MRB_ARGS_ARG(SDL_GetKeyName_REQUIRED_ARGC, SDL_GetKeyName_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GetModState_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GetModState", mrb_SDL_SDL_GetModState, MRB_ARGS_ARG(SDL_GetModState_REQUIRED_ARGC, SDL_GetModState_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GetMouseFocus_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GetMouseFocus", mrb_SDL_SDL_GetMouseFocus, MRB_ARGS_ARG(SDL_GetMouseFocus_REQUIRED_ARGC, SDL_GetMouseFocus_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GetMouseState_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GetMouseState", mrb_SDL_SDL_GetMouseState, MRB_ARGS_ARG(SDL_GetMouseState_REQUIRED_ARGC, SDL_GetMouseState_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GetNumAudioDevices_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GetNumAudioDevices", mrb_SDL_SDL_GetNumAudioDevices, MRB_ARGS_ARG(SDL_GetNumAudioDevices_REQUIRED_ARGC, SDL_GetNumAudioDevices_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GetNumAudioDrivers_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GetNumAudioDrivers", mrb_SDL_SDL_GetNumAudioDrivers, MRB_ARGS_ARG(SDL_GetNumAudioDrivers_REQUIRED_ARGC, SDL_GetNumAudioDrivers_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GetNumDisplayModes_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GetNumDisplayModes", mrb_SDL_SDL_GetNumDisplayModes, MRB_ARGS_ARG(SDL_GetNumDisplayModes_REQUIRED_ARGC, SDL_GetNumDisplayModes_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GetNumRenderDrivers_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GetNumRenderDrivers", mrb_SDL_SDL_GetNumRenderDrivers, MRB_ARGS_ARG(SDL_GetNumRenderDrivers_REQUIRED_ARGC, SDL_GetNumRenderDrivers_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GetNumTouchDevices_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GetNumTouchDevices", mrb_SDL_SDL_GetNumTouchDevices, MRB_ARGS_ARG(SDL_GetNumTouchDevices_REQUIRED_ARGC, SDL_GetNumTouchDevices_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GetNumTouchFingers_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GetNumTouchFingers", mrb_SDL_SDL_GetNumTouchFingers, MRB_ARGS_ARG(SDL_GetNumTouchFingers_REQUIRED_ARGC, SDL_GetNumTouchFingers_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GetNumVideoDisplays_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GetNumVideoDisplays", mrb_SDL_SDL_GetNumVideoDisplays, MRB_ARGS_ARG(SDL_GetNumVideoDisplays_REQUIRED_ARGC, SDL_GetNumVideoDisplays_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GetNumVideoDrivers_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GetNumVideoDrivers", mrb_SDL_SDL_GetNumVideoDrivers, MRB_ARGS_ARG(SDL_GetNumVideoDrivers_REQUIRED_ARGC, SDL_GetNumVideoDrivers_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GetPerformanceCounter_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GetPerformanceCounter", mrb_SDL_SDL_GetPerformanceCounter, MRB_ARGS_ARG(SDL_GetPerformanceCounter_REQUIRED_ARGC, SDL_GetPerformanceCounter_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GetPerformanceFrequency_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GetPerformanceFrequency", mrb_SDL_SDL_GetPerformanceFrequency, MRB_ARGS_ARG(SDL_GetPerformanceFrequency_REQUIRED_ARGC, SDL_GetPerformanceFrequency_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GetPixelFormatName_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GetPixelFormatName", mrb_SDL_SDL_GetPixelFormatName, MRB_ARGS_ARG(SDL_GetPixelFormatName_REQUIRED_ARGC, SDL_GetPixelFormatName_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GetPlatform_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GetPlatform", mrb_SDL_SDL_GetPlatform, MRB_ARGS_ARG(SDL_GetPlatform_REQUIRED_ARGC, SDL_GetPlatform_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GetPowerInfo_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GetPowerInfo", mrb_SDL_SDL_GetPowerInfo, MRB_ARGS_ARG(SDL_GetPowerInfo_REQUIRED_ARGC, SDL_GetPowerInfo_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GetPrefPath_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GetPrefPath", mrb_SDL_SDL_GetPrefPath, MRB_ARGS_ARG(SDL_GetPrefPath_REQUIRED_ARGC, SDL_GetPrefPath_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GetRelativeMouseMode_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GetRelativeMouseMode", mrb_SDL_SDL_GetRelativeMouseMode, MRB_ARGS_ARG(SDL_GetRelativeMouseMode_REQUIRED_ARGC, SDL_GetRelativeMouseMode_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GetRelativeMouseState_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GetRelativeMouseState", mrb_SDL_SDL_GetRelativeMouseState, MRB_ARGS_ARG(SDL_GetRelativeMouseState_REQUIRED_ARGC, SDL_GetRelativeMouseState_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GetRenderDrawBlendMode_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GetRenderDrawBlendMode", mrb_SDL_SDL_GetRenderDrawBlendMode, MRB_ARGS_ARG(SDL_GetRenderDrawBlendMode_REQUIRED_ARGC, SDL_GetRenderDrawBlendMode_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GetRenderDrawColor_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GetRenderDrawColor", mrb_SDL_SDL_GetRenderDrawColor, MRB_ARGS_ARG(SDL_GetRenderDrawColor_REQUIRED_ARGC, SDL_GetRenderDrawColor_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GetRenderDriverInfo_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GetRenderDriverInfo", mrb_SDL_SDL_GetRenderDriverInfo, MRB_ARGS_ARG(SDL_GetRenderDriverInfo_REQUIRED_ARGC, SDL_GetRenderDriverInfo_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GetRenderer_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GetRenderer", mrb_SDL_SDL_GetRenderer, MRB_ARGS_ARG(SDL_GetRenderer_REQUIRED_ARGC, SDL_GetRenderer_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GetRendererInfo_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GetRendererInfo", mrb_SDL_SDL_GetRendererInfo, MRB_ARGS_ARG(SDL_GetRendererInfo_REQUIRED_ARGC, SDL_GetRendererInfo_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GetRendererOutputSize_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GetRendererOutputSize", mrb_SDL_SDL_GetRendererOutputSize, MRB_ARGS_ARG(SDL_GetRendererOutputSize_REQUIRED_ARGC, SDL_GetRendererOutputSize_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GetRenderTarget_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GetRenderTarget", mrb_SDL_SDL_GetRenderTarget, MRB_ARGS_ARG(SDL_GetRenderTarget_REQUIRED_ARGC, SDL_GetRenderTarget_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GetRevision_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GetRevision", mrb_SDL_SDL_GetRevision, MRB_ARGS_ARG(SDL_GetRevision_REQUIRED_ARGC, SDL_GetRevision_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GetRevisionNumber_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GetRevisionNumber", mrb_SDL_SDL_GetRevisionNumber, MRB_ARGS_ARG(SDL_GetRevisionNumber_REQUIRED_ARGC, SDL_GetRevisionNumber_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GetRGB_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GetRGB", mrb_SDL_SDL_GetRGB, MRB_ARGS_ARG(SDL_GetRGB_REQUIRED_ARGC, SDL_GetRGB_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GetRGBA_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GetRGBA", mrb_SDL_SDL_GetRGBA, MRB_ARGS_ARG(SDL_GetRGBA_REQUIRED_ARGC, SDL_GetRGBA_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GetScancodeFromKey_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GetScancodeFromKey", mrb_SDL_SDL_GetScancodeFromKey, MRB_ARGS_ARG(SDL_GetScancodeFromKey_REQUIRED_ARGC, SDL_GetScancodeFromKey_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GetScancodeFromName_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GetScancodeFromName", mrb_SDL_SDL_GetScancodeFromName, MRB_ARGS_ARG(SDL_GetScancodeFromName_REQUIRED_ARGC, SDL_GetScancodeFromName_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GetScancodeName_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GetScancodeName", mrb_SDL_SDL_GetScancodeName, MRB_ARGS_ARG(SDL_GetScancodeName_REQUIRED_ARGC, SDL_GetScancodeName_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GetShapedWindowMode_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GetShapedWindowMode", mrb_SDL_SDL_GetShapedWindowMode, MRB_ARGS_ARG(SDL_GetShapedWindowMode_REQUIRED_ARGC, SDL_GetShapedWindowMode_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GetSurfaceAlphaMod_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GetSurfaceAlphaMod", mrb_SDL_SDL_GetSurfaceAlphaMod, MRB_ARGS_ARG(SDL_GetSurfaceAlphaMod_REQUIRED_ARGC, SDL_GetSurfaceAlphaMod_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GetSurfaceBlendMode_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GetSurfaceBlendMode", mrb_SDL_SDL_GetSurfaceBlendMode, MRB_ARGS_ARG(SDL_GetSurfaceBlendMode_REQUIRED_ARGC, SDL_GetSurfaceBlendMode_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GetSurfaceColorMod_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GetSurfaceColorMod", mrb_SDL_SDL_GetSurfaceColorMod, MRB_ARGS_ARG(SDL_GetSurfaceColorMod_REQUIRED_ARGC, SDL_GetSurfaceColorMod_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GetSystemRAM_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GetSystemRAM", mrb_SDL_SDL_GetSystemRAM, MRB_ARGS_ARG(SDL_GetSystemRAM_REQUIRED_ARGC, SDL_GetSystemRAM_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GetTextureAlphaMod_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GetTextureAlphaMod", mrb_SDL_SDL_GetTextureAlphaMod, MRB_ARGS_ARG(SDL_GetTextureAlphaMod_REQUIRED_ARGC, SDL_GetTextureAlphaMod_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GetTextureBlendMode_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GetTextureBlendMode", mrb_SDL_SDL_GetTextureBlendMode, MRB_ARGS_ARG(SDL_GetTextureBlendMode_REQUIRED_ARGC, SDL_GetTextureBlendMode_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GetTextureColorMod_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GetTextureColorMod", mrb_SDL_SDL_GetTextureColorMod, MRB_ARGS_ARG(SDL_GetTextureColorMod_REQUIRED_ARGC, SDL_GetTextureColorMod_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GetThreadID_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GetThreadID", mrb_SDL_SDL_GetThreadID, MRB_ARGS_ARG(SDL_GetThreadID_REQUIRED_ARGC, SDL_GetThreadID_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GetThreadName_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GetThreadName", mrb_SDL_SDL_GetThreadName, MRB_ARGS_ARG(SDL_GetThreadName_REQUIRED_ARGC, SDL_GetThreadName_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GetTicks_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GetTicks", mrb_SDL_SDL_GetTicks, MRB_ARGS_ARG(SDL_GetTicks_REQUIRED_ARGC, SDL_GetTicks_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GetTouchDevice_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GetTouchDevice", mrb_SDL_SDL_GetTouchDevice, MRB_ARGS_ARG(SDL_GetTouchDevice_REQUIRED_ARGC, SDL_GetTouchDevice_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GetTouchFinger_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GetTouchFinger", mrb_SDL_SDL_GetTouchFinger, MRB_ARGS_ARG(SDL_GetTouchFinger_REQUIRED_ARGC, SDL_GetTouchFinger_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GetVersion_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GetVersion", mrb_SDL_SDL_GetVersion, MRB_ARGS_ARG(SDL_GetVersion_REQUIRED_ARGC, SDL_GetVersion_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GetVideoDriver_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GetVideoDriver", mrb_SDL_SDL_GetVideoDriver, MRB_ARGS_ARG(SDL_GetVideoDriver_REQUIRED_ARGC, SDL_GetVideoDriver_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GetWindowBrightness_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GetWindowBrightness", mrb_SDL_SDL_GetWindowBrightness, MRB_ARGS_ARG(SDL_GetWindowBrightness_REQUIRED_ARGC, SDL_GetWindowBrightness_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GetWindowData_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GetWindowData", mrb_SDL_SDL_GetWindowData, MRB_ARGS_ARG(SDL_GetWindowData_REQUIRED_ARGC, SDL_GetWindowData_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GetWindowDisplayIndex_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GetWindowDisplayIndex", mrb_SDL_SDL_GetWindowDisplayIndex, MRB_ARGS_ARG(SDL_GetWindowDisplayIndex_REQUIRED_ARGC, SDL_GetWindowDisplayIndex_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GetWindowDisplayMode_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GetWindowDisplayMode", mrb_SDL_SDL_GetWindowDisplayMode, MRB_ARGS_ARG(SDL_GetWindowDisplayMode_REQUIRED_ARGC, SDL_GetWindowDisplayMode_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GetWindowFlags_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GetWindowFlags", mrb_SDL_SDL_GetWindowFlags, MRB_ARGS_ARG(SDL_GetWindowFlags_REQUIRED_ARGC, SDL_GetWindowFlags_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GetWindowFromID_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GetWindowFromID", mrb_SDL_SDL_GetWindowFromID, MRB_ARGS_ARG(SDL_GetWindowFromID_REQUIRED_ARGC, SDL_GetWindowFromID_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GetWindowGammaRamp_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GetWindowGammaRamp", mrb_SDL_SDL_GetWindowGammaRamp, MRB_ARGS_ARG(SDL_GetWindowGammaRamp_REQUIRED_ARGC, SDL_GetWindowGammaRamp_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GetWindowGrab_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GetWindowGrab", mrb_SDL_SDL_GetWindowGrab, MRB_ARGS_ARG(SDL_GetWindowGrab_REQUIRED_ARGC, SDL_GetWindowGrab_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GetWindowID_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GetWindowID", mrb_SDL_SDL_GetWindowID, MRB_ARGS_ARG(SDL_GetWindowID_REQUIRED_ARGC, SDL_GetWindowID_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GetWindowMaximumSize_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GetWindowMaximumSize", mrb_SDL_SDL_GetWindowMaximumSize, MRB_ARGS_ARG(SDL_GetWindowMaximumSize_REQUIRED_ARGC, SDL_GetWindowMaximumSize_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GetWindowMinimumSize_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GetWindowMinimumSize", mrb_SDL_SDL_GetWindowMinimumSize, MRB_ARGS_ARG(SDL_GetWindowMinimumSize_REQUIRED_ARGC, SDL_GetWindowMinimumSize_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GetWindowPixelFormat_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GetWindowPixelFormat", mrb_SDL_SDL_GetWindowPixelFormat, MRB_ARGS_ARG(SDL_GetWindowPixelFormat_REQUIRED_ARGC, SDL_GetWindowPixelFormat_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GetWindowPosition_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GetWindowPosition", mrb_SDL_SDL_GetWindowPosition, MRB_ARGS_ARG(SDL_GetWindowPosition_REQUIRED_ARGC, SDL_GetWindowPosition_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GetWindowSize_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GetWindowSize", mrb_SDL_SDL_GetWindowSize, MRB_ARGS_ARG(SDL_GetWindowSize_REQUIRED_ARGC, SDL_GetWindowSize_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GetWindowSurface_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GetWindowSurface", mrb_SDL_SDL_GetWindowSurface, MRB_ARGS_ARG(SDL_GetWindowSurface_REQUIRED_ARGC, SDL_GetWindowSurface_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GetWindowTitle_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GetWindowTitle", mrb_SDL_SDL_GetWindowTitle, MRB_ARGS_ARG(SDL_GetWindowTitle_REQUIRED_ARGC, SDL_GetWindowTitle_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GetWindowWMInfo_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GetWindowWMInfo", mrb_SDL_SDL_GetWindowWMInfo, MRB_ARGS_ARG(SDL_GetWindowWMInfo_REQUIRED_ARGC, SDL_GetWindowWMInfo_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GL_BindTexture_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GL_BindTexture", mrb_SDL_SDL_GL_BindTexture, MRB_ARGS_ARG(SDL_GL_BindTexture_REQUIRED_ARGC, SDL_GL_BindTexture_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GL_CreateContext_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GL_CreateContext", mrb_SDL_SDL_GL_CreateContext, MRB_ARGS_ARG(SDL_GL_CreateContext_REQUIRED_ARGC, SDL_GL_CreateContext_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GL_DeleteContext_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GL_DeleteContext", mrb_SDL_SDL_GL_DeleteContext, MRB_ARGS_ARG(SDL_GL_DeleteContext_REQUIRED_ARGC, SDL_GL_DeleteContext_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GL_ExtensionSupported_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GL_ExtensionSupported", mrb_SDL_SDL_GL_ExtensionSupported, MRB_ARGS_ARG(SDL_GL_ExtensionSupported_REQUIRED_ARGC, SDL_GL_ExtensionSupported_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GL_GetAttribute_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GL_GetAttribute", mrb_SDL_SDL_GL_GetAttribute, MRB_ARGS_ARG(SDL_GL_GetAttribute_REQUIRED_ARGC, SDL_GL_GetAttribute_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GL_GetCurrentContext_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GL_GetCurrentContext", mrb_SDL_SDL_GL_GetCurrentContext, MRB_ARGS_ARG(SDL_GL_GetCurrentContext_REQUIRED_ARGC, SDL_GL_GetCurrentContext_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GL_GetCurrentWindow_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GL_GetCurrentWindow", mrb_SDL_SDL_GL_GetCurrentWindow, MRB_ARGS_ARG(SDL_GL_GetCurrentWindow_REQUIRED_ARGC, SDL_GL_GetCurrentWindow_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GL_GetDrawableSize_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GL_GetDrawableSize", mrb_SDL_SDL_GL_GetDrawableSize, MRB_ARGS_ARG(SDL_GL_GetDrawableSize_REQUIRED_ARGC, SDL_GL_GetDrawableSize_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GL_GetProcAddress_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GL_GetProcAddress", mrb_SDL_SDL_GL_GetProcAddress, MRB_ARGS_ARG(SDL_GL_GetProcAddress_REQUIRED_ARGC, SDL_GL_GetProcAddress_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GL_GetSwapInterval_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GL_GetSwapInterval", mrb_SDL_SDL_GL_GetSwapInterval, MRB_ARGS_ARG(SDL_GL_GetSwapInterval_REQUIRED_ARGC, SDL_GL_GetSwapInterval_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GL_LoadLibrary_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GL_LoadLibrary", mrb_SDL_SDL_GL_LoadLibrary, MRB_ARGS_ARG(SDL_GL_LoadLibrary_REQUIRED_ARGC, SDL_GL_LoadLibrary_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GL_MakeCurrent_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GL_MakeCurrent", mrb_SDL_SDL_GL_MakeCurrent, MRB_ARGS_ARG(SDL_GL_MakeCurrent_REQUIRED_ARGC, SDL_GL_MakeCurrent_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GL_ResetAttributes_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GL_ResetAttributes", mrb_SDL_SDL_GL_ResetAttributes, MRB_ARGS_ARG(SDL_GL_ResetAttributes_REQUIRED_ARGC, SDL_GL_ResetAttributes_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GL_SetAttribute_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GL_SetAttribute", mrb_SDL_SDL_GL_SetAttribute, MRB_ARGS_ARG(SDL_GL_SetAttribute_REQUIRED_ARGC, SDL_GL_SetAttribute_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GL_SetSwapInterval_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GL_SetSwapInterval", mrb_SDL_SDL_GL_SetSwapInterval, MRB_ARGS_ARG(SDL_GL_SetSwapInterval_REQUIRED_ARGC, SDL_GL_SetSwapInterval_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GL_SwapWindow_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GL_SwapWindow", mrb_SDL_SDL_GL_SwapWindow, MRB_ARGS_ARG(SDL_GL_SwapWindow_REQUIRED_ARGC, SDL_GL_SwapWindow_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GL_UnbindTexture_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GL_UnbindTexture", mrb_SDL_SDL_GL_UnbindTexture, MRB_ARGS_ARG(SDL_GL_UnbindTexture_REQUIRED_ARGC, SDL_GL_UnbindTexture_OPTIONAL_ARGC));
#endif
#if BIND_SDL_GL_UnloadLibrary_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_GL_UnloadLibrary", mrb_SDL_SDL_GL_UnloadLibrary, MRB_ARGS_ARG(SDL_GL_UnloadLibrary_REQUIRED_ARGC, SDL_GL_UnloadLibrary_OPTIONAL_ARGC));
#endif
#if BIND_SDL_HapticClose_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_HapticClose", mrb_SDL_SDL_HapticClose, MRB_ARGS_ARG(SDL_HapticClose_REQUIRED_ARGC, SDL_HapticClose_OPTIONAL_ARGC));
#endif
#if BIND_SDL_HapticDestroyEffect_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_HapticDestroyEffect", mrb_SDL_SDL_HapticDestroyEffect, MRB_ARGS_ARG(SDL_HapticDestroyEffect_REQUIRED_ARGC, SDL_HapticDestroyEffect_OPTIONAL_ARGC));
#endif
#if BIND_SDL_HapticEffectSupported_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_HapticEffectSupported", mrb_SDL_SDL_HapticEffectSupported, MRB_ARGS_ARG(SDL_HapticEffectSupported_REQUIRED_ARGC, SDL_HapticEffectSupported_OPTIONAL_ARGC));
#endif
#if BIND_SDL_HapticGetEffectStatus_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_HapticGetEffectStatus", mrb_SDL_SDL_HapticGetEffectStatus, MRB_ARGS_ARG(SDL_HapticGetEffectStatus_REQUIRED_ARGC, SDL_HapticGetEffectStatus_OPTIONAL_ARGC));
#endif
#if BIND_SDL_HapticIndex_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_HapticIndex", mrb_SDL_SDL_HapticIndex, MRB_ARGS_ARG(SDL_HapticIndex_REQUIRED_ARGC, SDL_HapticIndex_OPTIONAL_ARGC));
#endif
#if BIND_SDL_HapticName_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_HapticName", mrb_SDL_SDL_HapticName, MRB_ARGS_ARG(SDL_HapticName_REQUIRED_ARGC, SDL_HapticName_OPTIONAL_ARGC));
#endif
#if BIND_SDL_HapticNewEffect_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_HapticNewEffect", mrb_SDL_SDL_HapticNewEffect, MRB_ARGS_ARG(SDL_HapticNewEffect_REQUIRED_ARGC, SDL_HapticNewEffect_OPTIONAL_ARGC));
#endif
#if BIND_SDL_HapticNumAxes_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_HapticNumAxes", mrb_SDL_SDL_HapticNumAxes, MRB_ARGS_ARG(SDL_HapticNumAxes_REQUIRED_ARGC, SDL_HapticNumAxes_OPTIONAL_ARGC));
#endif
#if BIND_SDL_HapticNumEffects_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_HapticNumEffects", mrb_SDL_SDL_HapticNumEffects, MRB_ARGS_ARG(SDL_HapticNumEffects_REQUIRED_ARGC, SDL_HapticNumEffects_OPTIONAL_ARGC));
#endif
#if BIND_SDL_HapticNumEffectsPlaying_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_HapticNumEffectsPlaying", mrb_SDL_SDL_HapticNumEffectsPlaying, MRB_ARGS_ARG(SDL_HapticNumEffectsPlaying_REQUIRED_ARGC, SDL_HapticNumEffectsPlaying_OPTIONAL_ARGC));
#endif
#if BIND_SDL_HapticOpen_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_HapticOpen", mrb_SDL_SDL_HapticOpen, MRB_ARGS_ARG(SDL_HapticOpen_REQUIRED_ARGC, SDL_HapticOpen_OPTIONAL_ARGC));
#endif
#if BIND_SDL_HapticOpened_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_HapticOpened", mrb_SDL_SDL_HapticOpened, MRB_ARGS_ARG(SDL_HapticOpened_REQUIRED_ARGC, SDL_HapticOpened_OPTIONAL_ARGC));
#endif
#if BIND_SDL_HapticOpenFromJoystick_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_HapticOpenFromJoystick", mrb_SDL_SDL_HapticOpenFromJoystick, MRB_ARGS_ARG(SDL_HapticOpenFromJoystick_REQUIRED_ARGC, SDL_HapticOpenFromJoystick_OPTIONAL_ARGC));
#endif
#if BIND_SDL_HapticOpenFromMouse_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_HapticOpenFromMouse", mrb_SDL_SDL_HapticOpenFromMouse, MRB_ARGS_ARG(SDL_HapticOpenFromMouse_REQUIRED_ARGC, SDL_HapticOpenFromMouse_OPTIONAL_ARGC));
#endif
#if BIND_SDL_HapticPause_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_HapticPause", mrb_SDL_SDL_HapticPause, MRB_ARGS_ARG(SDL_HapticPause_REQUIRED_ARGC, SDL_HapticPause_OPTIONAL_ARGC));
#endif
#if BIND_SDL_HapticQuery_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_HapticQuery", mrb_SDL_SDL_HapticQuery, MRB_ARGS_ARG(SDL_HapticQuery_REQUIRED_ARGC, SDL_HapticQuery_OPTIONAL_ARGC));
#endif
#if BIND_SDL_HapticRumbleInit_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_HapticRumbleInit", mrb_SDL_SDL_HapticRumbleInit, MRB_ARGS_ARG(SDL_HapticRumbleInit_REQUIRED_ARGC, SDL_HapticRumbleInit_OPTIONAL_ARGC));
#endif
#if BIND_SDL_HapticRumblePlay_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_HapticRumblePlay", mrb_SDL_SDL_HapticRumblePlay, MRB_ARGS_ARG(SDL_HapticRumblePlay_REQUIRED_ARGC, SDL_HapticRumblePlay_OPTIONAL_ARGC));
#endif
#if BIND_SDL_HapticRumbleStop_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_HapticRumbleStop", mrb_SDL_SDL_HapticRumbleStop, MRB_ARGS_ARG(SDL_HapticRumbleStop_REQUIRED_ARGC, SDL_HapticRumbleStop_OPTIONAL_ARGC));
#endif
#if BIND_SDL_HapticRumbleSupported_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_HapticRumbleSupported", mrb_SDL_SDL_HapticRumbleSupported, MRB_ARGS_ARG(SDL_HapticRumbleSupported_REQUIRED_ARGC, SDL_HapticRumbleSupported_OPTIONAL_ARGC));
#endif
#if BIND_SDL_HapticRunEffect_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_HapticRunEffect", mrb_SDL_SDL_HapticRunEffect, MRB_ARGS_ARG(SDL_HapticRunEffect_REQUIRED_ARGC, SDL_HapticRunEffect_OPTIONAL_ARGC));
#endif
#if BIND_SDL_HapticSetAutocenter_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_HapticSetAutocenter", mrb_SDL_SDL_HapticSetAutocenter, MRB_ARGS_ARG(SDL_HapticSetAutocenter_REQUIRED_ARGC, SDL_HapticSetAutocenter_OPTIONAL_ARGC));
#endif
#if BIND_SDL_HapticSetGain_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_HapticSetGain", mrb_SDL_SDL_HapticSetGain, MRB_ARGS_ARG(SDL_HapticSetGain_REQUIRED_ARGC, SDL_HapticSetGain_OPTIONAL_ARGC));
#endif
#if BIND_SDL_HapticStopAll_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_HapticStopAll", mrb_SDL_SDL_HapticStopAll, MRB_ARGS_ARG(SDL_HapticStopAll_REQUIRED_ARGC, SDL_HapticStopAll_OPTIONAL_ARGC));
#endif
#if BIND_SDL_HapticStopEffect_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_HapticStopEffect", mrb_SDL_SDL_HapticStopEffect, MRB_ARGS_ARG(SDL_HapticStopEffect_REQUIRED_ARGC, SDL_HapticStopEffect_OPTIONAL_ARGC));
#endif
#if BIND_SDL_HapticUnpause_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_HapticUnpause", mrb_SDL_SDL_HapticUnpause, MRB_ARGS_ARG(SDL_HapticUnpause_REQUIRED_ARGC, SDL_HapticUnpause_OPTIONAL_ARGC));
#endif
#if BIND_SDL_HapticUpdateEffect_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_HapticUpdateEffect", mrb_SDL_SDL_HapticUpdateEffect, MRB_ARGS_ARG(SDL_HapticUpdateEffect_REQUIRED_ARGC, SDL_HapticUpdateEffect_OPTIONAL_ARGC));
#endif
#if BIND_SDL_Has3DNow_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_Has3DNow", mrb_SDL_SDL_Has3DNow, MRB_ARGS_ARG(SDL_Has3DNow_REQUIRED_ARGC, SDL_Has3DNow_OPTIONAL_ARGC));
#endif
#if BIND_SDL_HasAltiVec_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_HasAltiVec", mrb_SDL_SDL_HasAltiVec, MRB_ARGS_ARG(SDL_HasAltiVec_REQUIRED_ARGC, SDL_HasAltiVec_OPTIONAL_ARGC));
#endif
#if BIND_SDL_HasAVX_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_HasAVX", mrb_SDL_SDL_HasAVX, MRB_ARGS_ARG(SDL_HasAVX_REQUIRED_ARGC, SDL_HasAVX_OPTIONAL_ARGC));
#endif
#if BIND_SDL_HasClipboardText_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_HasClipboardText", mrb_SDL_SDL_HasClipboardText, MRB_ARGS_ARG(SDL_HasClipboardText_REQUIRED_ARGC, SDL_HasClipboardText_OPTIONAL_ARGC));
#endif
#if BIND_SDL_HasEvent_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_HasEvent", mrb_SDL_SDL_HasEvent, MRB_ARGS_ARG(SDL_HasEvent_REQUIRED_ARGC, SDL_HasEvent_OPTIONAL_ARGC));
#endif
#if BIND_SDL_HasEvents_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_HasEvents", mrb_SDL_SDL_HasEvents, MRB_ARGS_ARG(SDL_HasEvents_REQUIRED_ARGC, SDL_HasEvents_OPTIONAL_ARGC));
#endif
#if BIND_SDL_HasIntersection_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_HasIntersection", mrb_SDL_SDL_HasIntersection, MRB_ARGS_ARG(SDL_HasIntersection_REQUIRED_ARGC, SDL_HasIntersection_OPTIONAL_ARGC));
#endif
#if BIND_SDL_HasMMX_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_HasMMX", mrb_SDL_SDL_HasMMX, MRB_ARGS_ARG(SDL_HasMMX_REQUIRED_ARGC, SDL_HasMMX_OPTIONAL_ARGC));
#endif
#if BIND_SDL_HasRDTSC_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_HasRDTSC", mrb_SDL_SDL_HasRDTSC, MRB_ARGS_ARG(SDL_HasRDTSC_REQUIRED_ARGC, SDL_HasRDTSC_OPTIONAL_ARGC));
#endif
#if BIND_SDL_HasScreenKeyboardSupport_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_HasScreenKeyboardSupport", mrb_SDL_SDL_HasScreenKeyboardSupport, MRB_ARGS_ARG(SDL_HasScreenKeyboardSupport_REQUIRED_ARGC, SDL_HasScreenKeyboardSupport_OPTIONAL_ARGC));
#endif
#if BIND_SDL_HasSSE_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_HasSSE", mrb_SDL_SDL_HasSSE, MRB_ARGS_ARG(SDL_HasSSE_REQUIRED_ARGC, SDL_HasSSE_OPTIONAL_ARGC));
#endif
#if BIND_SDL_HasSSE2_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_HasSSE2", mrb_SDL_SDL_HasSSE2, MRB_ARGS_ARG(SDL_HasSSE2_REQUIRED_ARGC, SDL_HasSSE2_OPTIONAL_ARGC));
#endif
#if BIND_SDL_HasSSE3_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_HasSSE3", mrb_SDL_SDL_HasSSE3, MRB_ARGS_ARG(SDL_HasSSE3_REQUIRED_ARGC, SDL_HasSSE3_OPTIONAL_ARGC));
#endif
#if BIND_SDL_HasSSE41_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_HasSSE41", mrb_SDL_SDL_HasSSE41, MRB_ARGS_ARG(SDL_HasSSE41_REQUIRED_ARGC, SDL_HasSSE41_OPTIONAL_ARGC));
#endif
#if BIND_SDL_HasSSE42_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_HasSSE42", mrb_SDL_SDL_HasSSE42, MRB_ARGS_ARG(SDL_HasSSE42_REQUIRED_ARGC, SDL_HasSSE42_OPTIONAL_ARGC));
#endif
#if BIND_SDL_HideWindow_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_HideWindow", mrb_SDL_SDL_HideWindow, MRB_ARGS_ARG(SDL_HideWindow_REQUIRED_ARGC, SDL_HideWindow_OPTIONAL_ARGC));
#endif
#if BIND_SDL_iconv_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_iconv", mrb_SDL_SDL_iconv, MRB_ARGS_ARG(SDL_iconv_REQUIRED_ARGC, SDL_iconv_OPTIONAL_ARGC));
#endif
#if BIND_SDL_iconv_close_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_iconv_close", mrb_SDL_SDL_iconv_close, MRB_ARGS_ARG(SDL_iconv_close_REQUIRED_ARGC, SDL_iconv_close_OPTIONAL_ARGC));
#endif
#if BIND_SDL_iconv_open_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_iconv_open", mrb_SDL_SDL_iconv_open, MRB_ARGS_ARG(SDL_iconv_open_REQUIRED_ARGC, SDL_iconv_open_OPTIONAL_ARGC));
#endif
#if BIND_SDL_iconv_string_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_iconv_string", mrb_SDL_SDL_iconv_string, MRB_ARGS_ARG(SDL_iconv_string_REQUIRED_ARGC, SDL_iconv_string_OPTIONAL_ARGC));
#endif
#if BIND_SDL_Init_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_Init", mrb_SDL_SDL_Init, MRB_ARGS_ARG(SDL_Init_REQUIRED_ARGC, SDL_Init_OPTIONAL_ARGC));
#endif
#if BIND_SDL_InitSubSystem_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_InitSubSystem", mrb_SDL_SDL_InitSubSystem, MRB_ARGS_ARG(SDL_InitSubSystem_REQUIRED_ARGC, SDL_InitSubSystem_OPTIONAL_ARGC));
#endif
#if BIND_SDL_IntersectRect_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_IntersectRect", mrb_SDL_SDL_IntersectRect, MRB_ARGS_ARG(SDL_IntersectRect_REQUIRED_ARGC, SDL_IntersectRect_OPTIONAL_ARGC));
#endif
#if BIND_SDL_IntersectRectAndLine_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_IntersectRectAndLine", mrb_SDL_SDL_IntersectRectAndLine, MRB_ARGS_ARG(SDL_IntersectRectAndLine_REQUIRED_ARGC, SDL_IntersectRectAndLine_OPTIONAL_ARGC));
#endif
#if BIND_SDL_isdigit_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_isdigit", mrb_SDL_SDL_isdigit, MRB_ARGS_ARG(SDL_isdigit_REQUIRED_ARGC, SDL_isdigit_OPTIONAL_ARGC));
#endif
#if BIND_SDL_IsGameController_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_IsGameController", mrb_SDL_SDL_IsGameController, MRB_ARGS_ARG(SDL_IsGameController_REQUIRED_ARGC, SDL_IsGameController_OPTIONAL_ARGC));
#endif
#if BIND_SDL_IsScreenKeyboardShown_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_IsScreenKeyboardShown", mrb_SDL_SDL_IsScreenKeyboardShown, MRB_ARGS_ARG(SDL_IsScreenKeyboardShown_REQUIRED_ARGC, SDL_IsScreenKeyboardShown_OPTIONAL_ARGC));
#endif
#if BIND_SDL_IsScreenSaverEnabled_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_IsScreenSaverEnabled", mrb_SDL_SDL_IsScreenSaverEnabled, MRB_ARGS_ARG(SDL_IsScreenSaverEnabled_REQUIRED_ARGC, SDL_IsScreenSaverEnabled_OPTIONAL_ARGC));
#endif
#if BIND_SDL_IsShapedWindow_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_IsShapedWindow", mrb_SDL_SDL_IsShapedWindow, MRB_ARGS_ARG(SDL_IsShapedWindow_REQUIRED_ARGC, SDL_IsShapedWindow_OPTIONAL_ARGC));
#endif
#if BIND_SDL_isspace_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_isspace", mrb_SDL_SDL_isspace, MRB_ARGS_ARG(SDL_isspace_REQUIRED_ARGC, SDL_isspace_OPTIONAL_ARGC));
#endif
#if BIND_SDL_IsTextInputActive_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_IsTextInputActive", mrb_SDL_SDL_IsTextInputActive, MRB_ARGS_ARG(SDL_IsTextInputActive_REQUIRED_ARGC, SDL_IsTextInputActive_OPTIONAL_ARGC));
#endif
#if BIND_SDL_itoa_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_itoa", mrb_SDL_SDL_itoa, MRB_ARGS_ARG(SDL_itoa_REQUIRED_ARGC, SDL_itoa_OPTIONAL_ARGC));
#endif
#if BIND_SDL_JoystickClose_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_JoystickClose", mrb_SDL_SDL_JoystickClose, MRB_ARGS_ARG(SDL_JoystickClose_REQUIRED_ARGC, SDL_JoystickClose_OPTIONAL_ARGC));
#endif
#if BIND_SDL_JoystickEventState_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_JoystickEventState", mrb_SDL_SDL_JoystickEventState, MRB_ARGS_ARG(SDL_JoystickEventState_REQUIRED_ARGC, SDL_JoystickEventState_OPTIONAL_ARGC));
#endif
#if BIND_SDL_JoystickGetAttached_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_JoystickGetAttached", mrb_SDL_SDL_JoystickGetAttached, MRB_ARGS_ARG(SDL_JoystickGetAttached_REQUIRED_ARGC, SDL_JoystickGetAttached_OPTIONAL_ARGC));
#endif
#if BIND_SDL_JoystickGetAxis_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_JoystickGetAxis", mrb_SDL_SDL_JoystickGetAxis, MRB_ARGS_ARG(SDL_JoystickGetAxis_REQUIRED_ARGC, SDL_JoystickGetAxis_OPTIONAL_ARGC));
#endif
#if BIND_SDL_JoystickGetBall_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_JoystickGetBall", mrb_SDL_SDL_JoystickGetBall, MRB_ARGS_ARG(SDL_JoystickGetBall_REQUIRED_ARGC, SDL_JoystickGetBall_OPTIONAL_ARGC));
#endif
#if BIND_SDL_JoystickGetButton_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_JoystickGetButton", mrb_SDL_SDL_JoystickGetButton, MRB_ARGS_ARG(SDL_JoystickGetButton_REQUIRED_ARGC, SDL_JoystickGetButton_OPTIONAL_ARGC));
#endif
#if BIND_SDL_JoystickGetDeviceGUID_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_JoystickGetDeviceGUID", mrb_SDL_SDL_JoystickGetDeviceGUID, MRB_ARGS_ARG(SDL_JoystickGetDeviceGUID_REQUIRED_ARGC, SDL_JoystickGetDeviceGUID_OPTIONAL_ARGC));
#endif
#if BIND_SDL_JoystickGetGUID_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_JoystickGetGUID", mrb_SDL_SDL_JoystickGetGUID, MRB_ARGS_ARG(SDL_JoystickGetGUID_REQUIRED_ARGC, SDL_JoystickGetGUID_OPTIONAL_ARGC));
#endif
#if BIND_SDL_JoystickGetGUIDFromString_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_JoystickGetGUIDFromString", mrb_SDL_SDL_JoystickGetGUIDFromString, MRB_ARGS_ARG(SDL_JoystickGetGUIDFromString_REQUIRED_ARGC, SDL_JoystickGetGUIDFromString_OPTIONAL_ARGC));
#endif
#if BIND_SDL_JoystickGetGUIDString_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_JoystickGetGUIDString", mrb_SDL_SDL_JoystickGetGUIDString, MRB_ARGS_ARG(SDL_JoystickGetGUIDString_REQUIRED_ARGC, SDL_JoystickGetGUIDString_OPTIONAL_ARGC));
#endif
#if BIND_SDL_JoystickGetHat_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_JoystickGetHat", mrb_SDL_SDL_JoystickGetHat, MRB_ARGS_ARG(SDL_JoystickGetHat_REQUIRED_ARGC, SDL_JoystickGetHat_OPTIONAL_ARGC));
#endif
#if BIND_SDL_JoystickInstanceID_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_JoystickInstanceID", mrb_SDL_SDL_JoystickInstanceID, MRB_ARGS_ARG(SDL_JoystickInstanceID_REQUIRED_ARGC, SDL_JoystickInstanceID_OPTIONAL_ARGC));
#endif
#if BIND_SDL_JoystickIsHaptic_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_JoystickIsHaptic", mrb_SDL_SDL_JoystickIsHaptic, MRB_ARGS_ARG(SDL_JoystickIsHaptic_REQUIRED_ARGC, SDL_JoystickIsHaptic_OPTIONAL_ARGC));
#endif
#if BIND_SDL_JoystickName_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_JoystickName", mrb_SDL_SDL_JoystickName, MRB_ARGS_ARG(SDL_JoystickName_REQUIRED_ARGC, SDL_JoystickName_OPTIONAL_ARGC));
#endif
#if BIND_SDL_JoystickNameForIndex_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_JoystickNameForIndex", mrb_SDL_SDL_JoystickNameForIndex, MRB_ARGS_ARG(SDL_JoystickNameForIndex_REQUIRED_ARGC, SDL_JoystickNameForIndex_OPTIONAL_ARGC));
#endif
#if BIND_SDL_JoystickNumAxes_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_JoystickNumAxes", mrb_SDL_SDL_JoystickNumAxes, MRB_ARGS_ARG(SDL_JoystickNumAxes_REQUIRED_ARGC, SDL_JoystickNumAxes_OPTIONAL_ARGC));
#endif
#if BIND_SDL_JoystickNumBalls_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_JoystickNumBalls", mrb_SDL_SDL_JoystickNumBalls, MRB_ARGS_ARG(SDL_JoystickNumBalls_REQUIRED_ARGC, SDL_JoystickNumBalls_OPTIONAL_ARGC));
#endif
#if BIND_SDL_JoystickNumButtons_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_JoystickNumButtons", mrb_SDL_SDL_JoystickNumButtons, MRB_ARGS_ARG(SDL_JoystickNumButtons_REQUIRED_ARGC, SDL_JoystickNumButtons_OPTIONAL_ARGC));
#endif
#if BIND_SDL_JoystickNumHats_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_JoystickNumHats", mrb_SDL_SDL_JoystickNumHats, MRB_ARGS_ARG(SDL_JoystickNumHats_REQUIRED_ARGC, SDL_JoystickNumHats_OPTIONAL_ARGC));
#endif
#if BIND_SDL_JoystickOpen_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_JoystickOpen", mrb_SDL_SDL_JoystickOpen, MRB_ARGS_ARG(SDL_JoystickOpen_REQUIRED_ARGC, SDL_JoystickOpen_OPTIONAL_ARGC));
#endif
#if BIND_SDL_JoystickUpdate_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_JoystickUpdate", mrb_SDL_SDL_JoystickUpdate, MRB_ARGS_ARG(SDL_JoystickUpdate_REQUIRED_ARGC, SDL_JoystickUpdate_OPTIONAL_ARGC));
#endif
#if BIND_SDL_lltoa_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_lltoa", mrb_SDL_SDL_lltoa, MRB_ARGS_ARG(SDL_lltoa_REQUIRED_ARGC, SDL_lltoa_OPTIONAL_ARGC));
#endif
#if BIND_SDL_LoadBMP_RW_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_LoadBMP_RW", mrb_SDL_SDL_LoadBMP_RW, MRB_ARGS_ARG(SDL_LoadBMP_RW_REQUIRED_ARGC, SDL_LoadBMP_RW_OPTIONAL_ARGC));
#endif
#if BIND_SDL_LoadDollarTemplates_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_LoadDollarTemplates", mrb_SDL_SDL_LoadDollarTemplates, MRB_ARGS_ARG(SDL_LoadDollarTemplates_REQUIRED_ARGC, SDL_LoadDollarTemplates_OPTIONAL_ARGC));
#endif
#if BIND_SDL_LoadFunction_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_LoadFunction", mrb_SDL_SDL_LoadFunction, MRB_ARGS_ARG(SDL_LoadFunction_REQUIRED_ARGC, SDL_LoadFunction_OPTIONAL_ARGC));
#endif
#if BIND_SDL_LoadObject_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_LoadObject", mrb_SDL_SDL_LoadObject, MRB_ARGS_ARG(SDL_LoadObject_REQUIRED_ARGC, SDL_LoadObject_OPTIONAL_ARGC));
#endif
#if BIND_SDL_LoadWAV_RW_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_LoadWAV_RW", mrb_SDL_SDL_LoadWAV_RW, MRB_ARGS_ARG(SDL_LoadWAV_RW_REQUIRED_ARGC, SDL_LoadWAV_RW_OPTIONAL_ARGC));
#endif
#if BIND_SDL_LockAudio_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_LockAudio", mrb_SDL_SDL_LockAudio, MRB_ARGS_ARG(SDL_LockAudio_REQUIRED_ARGC, SDL_LockAudio_OPTIONAL_ARGC));
#endif
#if BIND_SDL_LockAudioDevice_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_LockAudioDevice", mrb_SDL_SDL_LockAudioDevice, MRB_ARGS_ARG(SDL_LockAudioDevice_REQUIRED_ARGC, SDL_LockAudioDevice_OPTIONAL_ARGC));
#endif
#if BIND_SDL_LockMutex_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_LockMutex", mrb_SDL_SDL_LockMutex, MRB_ARGS_ARG(SDL_LockMutex_REQUIRED_ARGC, SDL_LockMutex_OPTIONAL_ARGC));
#endif
#if BIND_SDL_LockSurface_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_LockSurface", mrb_SDL_SDL_LockSurface, MRB_ARGS_ARG(SDL_LockSurface_REQUIRED_ARGC, SDL_LockSurface_OPTIONAL_ARGC));
#endif
#if BIND_SDL_LockTexture_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_LockTexture", mrb_SDL_SDL_LockTexture, MRB_ARGS_ARG(SDL_LockTexture_REQUIRED_ARGC, SDL_LockTexture_OPTIONAL_ARGC));
#endif
#if BIND_SDL_Log_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_Log", mrb_SDL_SDL_Log, MRB_ARGS_ARG(SDL_Log_REQUIRED_ARGC, SDL_Log_OPTIONAL_ARGC));
#endif
#if BIND_SDL_log_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_log", mrb_SDL_SDL_log, MRB_ARGS_ARG(SDL_log_REQUIRED_ARGC, SDL_log_OPTIONAL_ARGC));
#endif
#if BIND_SDL_LogCritical_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_LogCritical", mrb_SDL_SDL_LogCritical, MRB_ARGS_ARG(SDL_LogCritical_REQUIRED_ARGC, SDL_LogCritical_OPTIONAL_ARGC));
#endif
#if BIND_SDL_LogDebug_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_LogDebug", mrb_SDL_SDL_LogDebug, MRB_ARGS_ARG(SDL_LogDebug_REQUIRED_ARGC, SDL_LogDebug_OPTIONAL_ARGC));
#endif
#if BIND_SDL_LogError_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_LogError", mrb_SDL_SDL_LogError, MRB_ARGS_ARG(SDL_LogError_REQUIRED_ARGC, SDL_LogError_OPTIONAL_ARGC));
#endif
#if BIND_SDL_LogGetOutputFunction_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_LogGetOutputFunction", mrb_SDL_SDL_LogGetOutputFunction, MRB_ARGS_ARG(SDL_LogGetOutputFunction_REQUIRED_ARGC, SDL_LogGetOutputFunction_OPTIONAL_ARGC));
#endif
#if BIND_SDL_LogGetPriority_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_LogGetPriority", mrb_SDL_SDL_LogGetPriority, MRB_ARGS_ARG(SDL_LogGetPriority_REQUIRED_ARGC, SDL_LogGetPriority_OPTIONAL_ARGC));
#endif
#if BIND_SDL_LogInfo_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_LogInfo", mrb_SDL_SDL_LogInfo, MRB_ARGS_ARG(SDL_LogInfo_REQUIRED_ARGC, SDL_LogInfo_OPTIONAL_ARGC));
#endif
#if BIND_SDL_LogMessage_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_LogMessage", mrb_SDL_SDL_LogMessage, MRB_ARGS_ARG(SDL_LogMessage_REQUIRED_ARGC, SDL_LogMessage_OPTIONAL_ARGC));
#endif
#if BIND_SDL_LogMessageV_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_LogMessageV", mrb_SDL_SDL_LogMessageV, MRB_ARGS_ARG(SDL_LogMessageV_REQUIRED_ARGC, SDL_LogMessageV_OPTIONAL_ARGC));
#endif
#if BIND_SDL_LogResetPriorities_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_LogResetPriorities", mrb_SDL_SDL_LogResetPriorities, MRB_ARGS_ARG(SDL_LogResetPriorities_REQUIRED_ARGC, SDL_LogResetPriorities_OPTIONAL_ARGC));
#endif
#if BIND_SDL_LogSetAllPriority_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_LogSetAllPriority", mrb_SDL_SDL_LogSetAllPriority, MRB_ARGS_ARG(SDL_LogSetAllPriority_REQUIRED_ARGC, SDL_LogSetAllPriority_OPTIONAL_ARGC));
#endif
#if BIND_SDL_LogSetOutputFunction_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_LogSetOutputFunction", mrb_SDL_SDL_LogSetOutputFunction, MRB_ARGS_ARG(SDL_LogSetOutputFunction_REQUIRED_ARGC, SDL_LogSetOutputFunction_OPTIONAL_ARGC));
#endif
#if BIND_SDL_LogSetPriority_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_LogSetPriority", mrb_SDL_SDL_LogSetPriority, MRB_ARGS_ARG(SDL_LogSetPriority_REQUIRED_ARGC, SDL_LogSetPriority_OPTIONAL_ARGC));
#endif
#if BIND_SDL_LogVerbose_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_LogVerbose", mrb_SDL_SDL_LogVerbose, MRB_ARGS_ARG(SDL_LogVerbose_REQUIRED_ARGC, SDL_LogVerbose_OPTIONAL_ARGC));
#endif
#if BIND_SDL_LogWarn_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_LogWarn", mrb_SDL_SDL_LogWarn, MRB_ARGS_ARG(SDL_LogWarn_REQUIRED_ARGC, SDL_LogWarn_OPTIONAL_ARGC));
#endif
#if BIND_SDL_LowerBlit_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_LowerBlit", mrb_SDL_SDL_LowerBlit, MRB_ARGS_ARG(SDL_LowerBlit_REQUIRED_ARGC, SDL_LowerBlit_OPTIONAL_ARGC));
#endif
#if BIND_SDL_LowerBlitScaled_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_LowerBlitScaled", mrb_SDL_SDL_LowerBlitScaled, MRB_ARGS_ARG(SDL_LowerBlitScaled_REQUIRED_ARGC, SDL_LowerBlitScaled_OPTIONAL_ARGC));
#endif
#if BIND_SDL_ltoa_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_ltoa", mrb_SDL_SDL_ltoa, MRB_ARGS_ARG(SDL_ltoa_REQUIRED_ARGC, SDL_ltoa_OPTIONAL_ARGC));
#endif
#if BIND_SDL_main_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_main", mrb_SDL_SDL_main, MRB_ARGS_ARG(SDL_main_REQUIRED_ARGC, SDL_main_OPTIONAL_ARGC));
#endif
#if BIND_SDL_malloc_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_malloc", mrb_SDL_SDL_malloc, MRB_ARGS_ARG(SDL_malloc_REQUIRED_ARGC, SDL_malloc_OPTIONAL_ARGC));
#endif
#if BIND_SDL_MapRGB_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_MapRGB", mrb_SDL_SDL_MapRGB, MRB_ARGS_ARG(SDL_MapRGB_REQUIRED_ARGC, SDL_MapRGB_OPTIONAL_ARGC));
#endif
#if BIND_SDL_MapRGBA_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_MapRGBA", mrb_SDL_SDL_MapRGBA, MRB_ARGS_ARG(SDL_MapRGBA_REQUIRED_ARGC, SDL_MapRGBA_OPTIONAL_ARGC));
#endif
#if BIND_SDL_MasksToPixelFormatEnum_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_MasksToPixelFormatEnum", mrb_SDL_SDL_MasksToPixelFormatEnum, MRB_ARGS_ARG(SDL_MasksToPixelFormatEnum_REQUIRED_ARGC, SDL_MasksToPixelFormatEnum_OPTIONAL_ARGC));
#endif
#if BIND_SDL_MaximizeWindow_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_MaximizeWindow", mrb_SDL_SDL_MaximizeWindow, MRB_ARGS_ARG(SDL_MaximizeWindow_REQUIRED_ARGC, SDL_MaximizeWindow_OPTIONAL_ARGC));
#endif
#if BIND_SDL_memcmp_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_memcmp", mrb_SDL_SDL_memcmp, MRB_ARGS_ARG(SDL_memcmp_REQUIRED_ARGC, SDL_memcmp_OPTIONAL_ARGC));
#endif
#if BIND_SDL_memcpy_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_memcpy", mrb_SDL_SDL_memcpy, MRB_ARGS_ARG(SDL_memcpy_REQUIRED_ARGC, SDL_memcpy_OPTIONAL_ARGC));
#endif
#if BIND_SDL_memcpy4_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_memcpy4", mrb_SDL_SDL_memcpy4, MRB_ARGS_ARG(SDL_memcpy4_REQUIRED_ARGC, SDL_memcpy4_OPTIONAL_ARGC));
#endif
#if BIND_SDL_memmove_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_memmove", mrb_SDL_SDL_memmove, MRB_ARGS_ARG(SDL_memmove_REQUIRED_ARGC, SDL_memmove_OPTIONAL_ARGC));
#endif
#if BIND_SDL_memset_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_memset", mrb_SDL_SDL_memset, MRB_ARGS_ARG(SDL_memset_REQUIRED_ARGC, SDL_memset_OPTIONAL_ARGC));
#endif
#if BIND_SDL_memset4_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_memset4", mrb_SDL_SDL_memset4, MRB_ARGS_ARG(SDL_memset4_REQUIRED_ARGC, SDL_memset4_OPTIONAL_ARGC));
#endif
#if BIND_SDL_MinimizeWindow_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_MinimizeWindow", mrb_SDL_SDL_MinimizeWindow, MRB_ARGS_ARG(SDL_MinimizeWindow_REQUIRED_ARGC, SDL_MinimizeWindow_OPTIONAL_ARGC));
#endif
#if BIND_SDL_MixAudio_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_MixAudio", mrb_SDL_SDL_MixAudio, MRB_ARGS_ARG(SDL_MixAudio_REQUIRED_ARGC, SDL_MixAudio_OPTIONAL_ARGC));
#endif
#if BIND_SDL_MixAudioFormat_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_MixAudioFormat", mrb_SDL_SDL_MixAudioFormat, MRB_ARGS_ARG(SDL_MixAudioFormat_REQUIRED_ARGC, SDL_MixAudioFormat_OPTIONAL_ARGC));
#endif
#if BIND_SDL_MostSignificantBitIndex32_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_MostSignificantBitIndex32", mrb_SDL_SDL_MostSignificantBitIndex32, MRB_ARGS_ARG(SDL_MostSignificantBitIndex32_REQUIRED_ARGC, SDL_MostSignificantBitIndex32_OPTIONAL_ARGC));
#endif
#if BIND_SDL_MouseIsHaptic_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_MouseIsHaptic", mrb_SDL_SDL_MouseIsHaptic, MRB_ARGS_ARG(SDL_MouseIsHaptic_REQUIRED_ARGC, SDL_MouseIsHaptic_OPTIONAL_ARGC));
#endif
#if BIND_SDL_NumHaptics_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_NumHaptics", mrb_SDL_SDL_NumHaptics, MRB_ARGS_ARG(SDL_NumHaptics_REQUIRED_ARGC, SDL_NumHaptics_OPTIONAL_ARGC));
#endif
#if BIND_SDL_NumJoysticks_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_NumJoysticks", mrb_SDL_SDL_NumJoysticks, MRB_ARGS_ARG(SDL_NumJoysticks_REQUIRED_ARGC, SDL_NumJoysticks_OPTIONAL_ARGC));
#endif
#if BIND_SDL_OpenAudio_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_OpenAudio", mrb_SDL_SDL_OpenAudio, MRB_ARGS_ARG(SDL_OpenAudio_REQUIRED_ARGC, SDL_OpenAudio_OPTIONAL_ARGC));
#endif
#if BIND_SDL_OpenAudioDevice_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_OpenAudioDevice", mrb_SDL_SDL_OpenAudioDevice, MRB_ARGS_ARG(SDL_OpenAudioDevice_REQUIRED_ARGC, SDL_OpenAudioDevice_OPTIONAL_ARGC));
#endif
#if BIND_SDL_PauseAudio_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_PauseAudio", mrb_SDL_SDL_PauseAudio, MRB_ARGS_ARG(SDL_PauseAudio_REQUIRED_ARGC, SDL_PauseAudio_OPTIONAL_ARGC));
#endif
#if BIND_SDL_PauseAudioDevice_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_PauseAudioDevice", mrb_SDL_SDL_PauseAudioDevice, MRB_ARGS_ARG(SDL_PauseAudioDevice_REQUIRED_ARGC, SDL_PauseAudioDevice_OPTIONAL_ARGC));
#endif
#if BIND_SDL_PeepEvents_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_PeepEvents", mrb_SDL_SDL_PeepEvents, MRB_ARGS_ARG(SDL_PeepEvents_REQUIRED_ARGC, SDL_PeepEvents_OPTIONAL_ARGC));
#endif
#if BIND_SDL_PixelFormatEnumToMasks_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_PixelFormatEnumToMasks", mrb_SDL_SDL_PixelFormatEnumToMasks, MRB_ARGS_ARG(SDL_PixelFormatEnumToMasks_REQUIRED_ARGC, SDL_PixelFormatEnumToMasks_OPTIONAL_ARGC));
#endif
#if BIND_SDL_PollEvent_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_PollEvent", mrb_SDL_SDL_PollEvent, MRB_ARGS_ARG(SDL_PollEvent_REQUIRED_ARGC, SDL_PollEvent_OPTIONAL_ARGC));
#endif
#if BIND_SDL_pow_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_pow", mrb_SDL_SDL_pow, MRB_ARGS_ARG(SDL_pow_REQUIRED_ARGC, SDL_pow_OPTIONAL_ARGC));
#endif
#if BIND_SDL_PumpEvents_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_PumpEvents", mrb_SDL_SDL_PumpEvents, MRB_ARGS_ARG(SDL_PumpEvents_REQUIRED_ARGC, SDL_PumpEvents_OPTIONAL_ARGC));
#endif
#if BIND_SDL_PushEvent_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_PushEvent", mrb_SDL_SDL_PushEvent, MRB_ARGS_ARG(SDL_PushEvent_REQUIRED_ARGC, SDL_PushEvent_OPTIONAL_ARGC));
#endif
#if BIND_SDL_qsort_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_qsort", mrb_SDL_SDL_qsort, MRB_ARGS_ARG(SDL_qsort_REQUIRED_ARGC, SDL_qsort_OPTIONAL_ARGC));
#endif
#if BIND_SDL_QueryTexture_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_QueryTexture", mrb_SDL_SDL_QueryTexture, MRB_ARGS_ARG(SDL_QueryTexture_REQUIRED_ARGC, SDL_QueryTexture_OPTIONAL_ARGC));
#endif
#if BIND_SDL_Quit_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_Quit", mrb_SDL_SDL_Quit, MRB_ARGS_ARG(SDL_Quit_REQUIRED_ARGC, SDL_Quit_OPTIONAL_ARGC));
#endif
#if BIND_SDL_QuitSubSystem_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_QuitSubSystem", mrb_SDL_SDL_QuitSubSystem, MRB_ARGS_ARG(SDL_QuitSubSystem_REQUIRED_ARGC, SDL_QuitSubSystem_OPTIONAL_ARGC));
#endif
#if BIND_SDL_RaiseWindow_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_RaiseWindow", mrb_SDL_SDL_RaiseWindow, MRB_ARGS_ARG(SDL_RaiseWindow_REQUIRED_ARGC, SDL_RaiseWindow_OPTIONAL_ARGC));
#endif
#if BIND_SDL_ReadBE16_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_ReadBE16", mrb_SDL_SDL_ReadBE16, MRB_ARGS_ARG(SDL_ReadBE16_REQUIRED_ARGC, SDL_ReadBE16_OPTIONAL_ARGC));
#endif
#if BIND_SDL_ReadBE32_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_ReadBE32", mrb_SDL_SDL_ReadBE32, MRB_ARGS_ARG(SDL_ReadBE32_REQUIRED_ARGC, SDL_ReadBE32_OPTIONAL_ARGC));
#endif
#if BIND_SDL_ReadBE64_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_ReadBE64", mrb_SDL_SDL_ReadBE64, MRB_ARGS_ARG(SDL_ReadBE64_REQUIRED_ARGC, SDL_ReadBE64_OPTIONAL_ARGC));
#endif
#if BIND_SDL_ReadLE16_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_ReadLE16", mrb_SDL_SDL_ReadLE16, MRB_ARGS_ARG(SDL_ReadLE16_REQUIRED_ARGC, SDL_ReadLE16_OPTIONAL_ARGC));
#endif
#if BIND_SDL_ReadLE32_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_ReadLE32", mrb_SDL_SDL_ReadLE32, MRB_ARGS_ARG(SDL_ReadLE32_REQUIRED_ARGC, SDL_ReadLE32_OPTIONAL_ARGC));
#endif
#if BIND_SDL_ReadLE64_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_ReadLE64", mrb_SDL_SDL_ReadLE64, MRB_ARGS_ARG(SDL_ReadLE64_REQUIRED_ARGC, SDL_ReadLE64_OPTIONAL_ARGC));
#endif
#if BIND_SDL_ReadU8_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_ReadU8", mrb_SDL_SDL_ReadU8, MRB_ARGS_ARG(SDL_ReadU8_REQUIRED_ARGC, SDL_ReadU8_OPTIONAL_ARGC));
#endif
#if BIND_SDL_realloc_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_realloc", mrb_SDL_SDL_realloc, MRB_ARGS_ARG(SDL_realloc_REQUIRED_ARGC, SDL_realloc_OPTIONAL_ARGC));
#endif
#if BIND_SDL_RecordGesture_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_RecordGesture", mrb_SDL_SDL_RecordGesture, MRB_ARGS_ARG(SDL_RecordGesture_REQUIRED_ARGC, SDL_RecordGesture_OPTIONAL_ARGC));
#endif
#if BIND_SDL_RectEmpty_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_RectEmpty", mrb_SDL_SDL_RectEmpty, MRB_ARGS_ARG(SDL_RectEmpty_REQUIRED_ARGC, SDL_RectEmpty_OPTIONAL_ARGC));
#endif
#if BIND_SDL_RectEquals_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_RectEquals", mrb_SDL_SDL_RectEquals, MRB_ARGS_ARG(SDL_RectEquals_REQUIRED_ARGC, SDL_RectEquals_OPTIONAL_ARGC));
#endif
#if BIND_SDL_RegisterEvents_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_RegisterEvents", mrb_SDL_SDL_RegisterEvents, MRB_ARGS_ARG(SDL_RegisterEvents_REQUIRED_ARGC, SDL_RegisterEvents_OPTIONAL_ARGC));
#endif
#if BIND_SDL_RemoveTimer_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_RemoveTimer", mrb_SDL_SDL_RemoveTimer, MRB_ARGS_ARG(SDL_RemoveTimer_REQUIRED_ARGC, SDL_RemoveTimer_OPTIONAL_ARGC));
#endif
#if BIND_SDL_RenderClear_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_RenderClear", mrb_SDL_SDL_RenderClear, MRB_ARGS_ARG(SDL_RenderClear_REQUIRED_ARGC, SDL_RenderClear_OPTIONAL_ARGC));
#endif
#if BIND_SDL_RenderCopy_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_RenderCopy", mrb_SDL_SDL_RenderCopy, MRB_ARGS_ARG(SDL_RenderCopy_REQUIRED_ARGC, SDL_RenderCopy_OPTIONAL_ARGC));
#endif
#if BIND_SDL_RenderCopyEx_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_RenderCopyEx", mrb_SDL_SDL_RenderCopyEx, MRB_ARGS_ARG(SDL_RenderCopyEx_REQUIRED_ARGC, SDL_RenderCopyEx_OPTIONAL_ARGC));
#endif
#if BIND_SDL_RenderDrawLine_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_RenderDrawLine", mrb_SDL_SDL_RenderDrawLine, MRB_ARGS_ARG(SDL_RenderDrawLine_REQUIRED_ARGC, SDL_RenderDrawLine_OPTIONAL_ARGC));
#endif
#if BIND_SDL_RenderDrawLines_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_RenderDrawLines", mrb_SDL_SDL_RenderDrawLines, MRB_ARGS_ARG(SDL_RenderDrawLines_REQUIRED_ARGC, SDL_RenderDrawLines_OPTIONAL_ARGC));
#endif
#if BIND_SDL_RenderDrawPoint_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_RenderDrawPoint", mrb_SDL_SDL_RenderDrawPoint, MRB_ARGS_ARG(SDL_RenderDrawPoint_REQUIRED_ARGC, SDL_RenderDrawPoint_OPTIONAL_ARGC));
#endif
#if BIND_SDL_RenderDrawPoints_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_RenderDrawPoints", mrb_SDL_SDL_RenderDrawPoints, MRB_ARGS_ARG(SDL_RenderDrawPoints_REQUIRED_ARGC, SDL_RenderDrawPoints_OPTIONAL_ARGC));
#endif
#if BIND_SDL_RenderDrawRect_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_RenderDrawRect", mrb_SDL_SDL_RenderDrawRect, MRB_ARGS_ARG(SDL_RenderDrawRect_REQUIRED_ARGC, SDL_RenderDrawRect_OPTIONAL_ARGC));
#endif
#if BIND_SDL_RenderDrawRects_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_RenderDrawRects", mrb_SDL_SDL_RenderDrawRects, MRB_ARGS_ARG(SDL_RenderDrawRects_REQUIRED_ARGC, SDL_RenderDrawRects_OPTIONAL_ARGC));
#endif
#if BIND_SDL_RenderFillRect_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_RenderFillRect", mrb_SDL_SDL_RenderFillRect, MRB_ARGS_ARG(SDL_RenderFillRect_REQUIRED_ARGC, SDL_RenderFillRect_OPTIONAL_ARGC));
#endif
#if BIND_SDL_RenderFillRects_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_RenderFillRects", mrb_SDL_SDL_RenderFillRects, MRB_ARGS_ARG(SDL_RenderFillRects_REQUIRED_ARGC, SDL_RenderFillRects_OPTIONAL_ARGC));
#endif
#if BIND_SDL_RenderGetClipRect_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_RenderGetClipRect", mrb_SDL_SDL_RenderGetClipRect, MRB_ARGS_ARG(SDL_RenderGetClipRect_REQUIRED_ARGC, SDL_RenderGetClipRect_OPTIONAL_ARGC));
#endif
#if BIND_SDL_RenderGetLogicalSize_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_RenderGetLogicalSize", mrb_SDL_SDL_RenderGetLogicalSize, MRB_ARGS_ARG(SDL_RenderGetLogicalSize_REQUIRED_ARGC, SDL_RenderGetLogicalSize_OPTIONAL_ARGC));
#endif
#if BIND_SDL_RenderGetScale_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_RenderGetScale", mrb_SDL_SDL_RenderGetScale, MRB_ARGS_ARG(SDL_RenderGetScale_REQUIRED_ARGC, SDL_RenderGetScale_OPTIONAL_ARGC));
#endif
#if BIND_SDL_RenderGetViewport_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_RenderGetViewport", mrb_SDL_SDL_RenderGetViewport, MRB_ARGS_ARG(SDL_RenderGetViewport_REQUIRED_ARGC, SDL_RenderGetViewport_OPTIONAL_ARGC));
#endif
#if BIND_SDL_RenderPresent_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_RenderPresent", mrb_SDL_SDL_RenderPresent, MRB_ARGS_ARG(SDL_RenderPresent_REQUIRED_ARGC, SDL_RenderPresent_OPTIONAL_ARGC));
#endif
#if BIND_SDL_RenderReadPixels_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_RenderReadPixels", mrb_SDL_SDL_RenderReadPixels, MRB_ARGS_ARG(SDL_RenderReadPixels_REQUIRED_ARGC, SDL_RenderReadPixels_OPTIONAL_ARGC));
#endif
#if BIND_SDL_RenderSetClipRect_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_RenderSetClipRect", mrb_SDL_SDL_RenderSetClipRect, MRB_ARGS_ARG(SDL_RenderSetClipRect_REQUIRED_ARGC, SDL_RenderSetClipRect_OPTIONAL_ARGC));
#endif
#if BIND_SDL_RenderSetLogicalSize_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_RenderSetLogicalSize", mrb_SDL_SDL_RenderSetLogicalSize, MRB_ARGS_ARG(SDL_RenderSetLogicalSize_REQUIRED_ARGC, SDL_RenderSetLogicalSize_OPTIONAL_ARGC));
#endif
#if BIND_SDL_RenderSetScale_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_RenderSetScale", mrb_SDL_SDL_RenderSetScale, MRB_ARGS_ARG(SDL_RenderSetScale_REQUIRED_ARGC, SDL_RenderSetScale_OPTIONAL_ARGC));
#endif
#if BIND_SDL_RenderSetViewport_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_RenderSetViewport", mrb_SDL_SDL_RenderSetViewport, MRB_ARGS_ARG(SDL_RenderSetViewport_REQUIRED_ARGC, SDL_RenderSetViewport_OPTIONAL_ARGC));
#endif
#if BIND_SDL_RenderTargetSupported_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_RenderTargetSupported", mrb_SDL_SDL_RenderTargetSupported, MRB_ARGS_ARG(SDL_RenderTargetSupported_REQUIRED_ARGC, SDL_RenderTargetSupported_OPTIONAL_ARGC));
#endif
#if BIND_SDL_ReportAssertion_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_ReportAssertion", mrb_SDL_SDL_ReportAssertion, MRB_ARGS_ARG(SDL_ReportAssertion_REQUIRED_ARGC, SDL_ReportAssertion_OPTIONAL_ARGC));
#endif
#if BIND_SDL_ResetAssertionReport_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_ResetAssertionReport", mrb_SDL_SDL_ResetAssertionReport, MRB_ARGS_ARG(SDL_ResetAssertionReport_REQUIRED_ARGC, SDL_ResetAssertionReport_OPTIONAL_ARGC));
#endif
#if BIND_SDL_RestoreWindow_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_RestoreWindow", mrb_SDL_SDL_RestoreWindow, MRB_ARGS_ARG(SDL_RestoreWindow_REQUIRED_ARGC, SDL_RestoreWindow_OPTIONAL_ARGC));
#endif
#if BIND_SDL_RWFromConstMem_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_RWFromConstMem", mrb_SDL_SDL_RWFromConstMem, MRB_ARGS_ARG(SDL_RWFromConstMem_REQUIRED_ARGC, SDL_RWFromConstMem_OPTIONAL_ARGC));
#endif
#if BIND_SDL_RWFromFile_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_RWFromFile", mrb_SDL_SDL_RWFromFile, MRB_ARGS_ARG(SDL_RWFromFile_REQUIRED_ARGC, SDL_RWFromFile_OPTIONAL_ARGC));
#endif
#if BIND_SDL_RWFromFP_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_RWFromFP", mrb_SDL_SDL_RWFromFP, MRB_ARGS_ARG(SDL_RWFromFP_REQUIRED_ARGC, SDL_RWFromFP_OPTIONAL_ARGC));
#endif
#if BIND_SDL_RWFromMem_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_RWFromMem", mrb_SDL_SDL_RWFromMem, MRB_ARGS_ARG(SDL_RWFromMem_REQUIRED_ARGC, SDL_RWFromMem_OPTIONAL_ARGC));
#endif
#if BIND_SDL_SaveAllDollarTemplates_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_SaveAllDollarTemplates", mrb_SDL_SDL_SaveAllDollarTemplates, MRB_ARGS_ARG(SDL_SaveAllDollarTemplates_REQUIRED_ARGC, SDL_SaveAllDollarTemplates_OPTIONAL_ARGC));
#endif
#if BIND_SDL_SaveBMP_RW_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_SaveBMP_RW", mrb_SDL_SDL_SaveBMP_RW, MRB_ARGS_ARG(SDL_SaveBMP_RW_REQUIRED_ARGC, SDL_SaveBMP_RW_OPTIONAL_ARGC));
#endif
#if BIND_SDL_SaveDollarTemplate_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_SaveDollarTemplate", mrb_SDL_SDL_SaveDollarTemplate, MRB_ARGS_ARG(SDL_SaveDollarTemplate_REQUIRED_ARGC, SDL_SaveDollarTemplate_OPTIONAL_ARGC));
#endif
#if BIND_SDL_scalbn_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_scalbn", mrb_SDL_SDL_scalbn, MRB_ARGS_ARG(SDL_scalbn_REQUIRED_ARGC, SDL_scalbn_OPTIONAL_ARGC));
#endif
#if BIND_SDL_SemPost_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_SemPost", mrb_SDL_SDL_SemPost, MRB_ARGS_ARG(SDL_SemPost_REQUIRED_ARGC, SDL_SemPost_OPTIONAL_ARGC));
#endif
#if BIND_SDL_SemTryWait_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_SemTryWait", mrb_SDL_SDL_SemTryWait, MRB_ARGS_ARG(SDL_SemTryWait_REQUIRED_ARGC, SDL_SemTryWait_OPTIONAL_ARGC));
#endif
#if BIND_SDL_SemValue_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_SemValue", mrb_SDL_SDL_SemValue, MRB_ARGS_ARG(SDL_SemValue_REQUIRED_ARGC, SDL_SemValue_OPTIONAL_ARGC));
#endif
#if BIND_SDL_SemWait_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_SemWait", mrb_SDL_SDL_SemWait, MRB_ARGS_ARG(SDL_SemWait_REQUIRED_ARGC, SDL_SemWait_OPTIONAL_ARGC));
#endif
#if BIND_SDL_SemWaitTimeout_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_SemWaitTimeout", mrb_SDL_SDL_SemWaitTimeout, MRB_ARGS_ARG(SDL_SemWaitTimeout_REQUIRED_ARGC, SDL_SemWaitTimeout_OPTIONAL_ARGC));
#endif
#if BIND_SDL_SetAssertionHandler_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_SetAssertionHandler", mrb_SDL_SDL_SetAssertionHandler, MRB_ARGS_ARG(SDL_SetAssertionHandler_REQUIRED_ARGC, SDL_SetAssertionHandler_OPTIONAL_ARGC));
#endif
#if BIND_SDL_SetClipboardText_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_SetClipboardText", mrb_SDL_SDL_SetClipboardText, MRB_ARGS_ARG(SDL_SetClipboardText_REQUIRED_ARGC, SDL_SetClipboardText_OPTIONAL_ARGC));
#endif
#if BIND_SDL_SetClipRect_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_SetClipRect", mrb_SDL_SDL_SetClipRect, MRB_ARGS_ARG(SDL_SetClipRect_REQUIRED_ARGC, SDL_SetClipRect_OPTIONAL_ARGC));
#endif
#if BIND_SDL_SetColorKey_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_SetColorKey", mrb_SDL_SDL_SetColorKey, MRB_ARGS_ARG(SDL_SetColorKey_REQUIRED_ARGC, SDL_SetColorKey_OPTIONAL_ARGC));
#endif
#if BIND_SDL_SetCursor_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_SetCursor", mrb_SDL_SDL_SetCursor, MRB_ARGS_ARG(SDL_SetCursor_REQUIRED_ARGC, SDL_SetCursor_OPTIONAL_ARGC));
#endif
#if BIND_SDL_setenv_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_setenv", mrb_SDL_SDL_setenv, MRB_ARGS_ARG(SDL_setenv_REQUIRED_ARGC, SDL_setenv_OPTIONAL_ARGC));
#endif
#if BIND_SDL_SetError_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_SetError", mrb_SDL_SDL_SetError, MRB_ARGS_ARG(SDL_SetError_REQUIRED_ARGC, SDL_SetError_OPTIONAL_ARGC));
#endif
#if BIND_SDL_SetEventFilter_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_SetEventFilter", mrb_SDL_SDL_SetEventFilter, MRB_ARGS_ARG(SDL_SetEventFilter_REQUIRED_ARGC, SDL_SetEventFilter_OPTIONAL_ARGC));
#endif
#if BIND_SDL_SetHint_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_SetHint", mrb_SDL_SDL_SetHint, MRB_ARGS_ARG(SDL_SetHint_REQUIRED_ARGC, SDL_SetHint_OPTIONAL_ARGC));
#endif
#if BIND_SDL_SetHintWithPriority_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_SetHintWithPriority", mrb_SDL_SDL_SetHintWithPriority, MRB_ARGS_ARG(SDL_SetHintWithPriority_REQUIRED_ARGC, SDL_SetHintWithPriority_OPTIONAL_ARGC));
#endif
#if BIND_SDL_SetMainReady_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_SetMainReady", mrb_SDL_SDL_SetMainReady, MRB_ARGS_ARG(SDL_SetMainReady_REQUIRED_ARGC, SDL_SetMainReady_OPTIONAL_ARGC));
#endif
#if BIND_SDL_SetModState_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_SetModState", mrb_SDL_SDL_SetModState, MRB_ARGS_ARG(SDL_SetModState_REQUIRED_ARGC, SDL_SetModState_OPTIONAL_ARGC));
#endif
#if BIND_SDL_SetPaletteColors_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_SetPaletteColors", mrb_SDL_SDL_SetPaletteColors, MRB_ARGS_ARG(SDL_SetPaletteColors_REQUIRED_ARGC, SDL_SetPaletteColors_OPTIONAL_ARGC));
#endif
#if BIND_SDL_SetPixelFormatPalette_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_SetPixelFormatPalette", mrb_SDL_SDL_SetPixelFormatPalette, MRB_ARGS_ARG(SDL_SetPixelFormatPalette_REQUIRED_ARGC, SDL_SetPixelFormatPalette_OPTIONAL_ARGC));
#endif
#if BIND_SDL_SetRelativeMouseMode_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_SetRelativeMouseMode", mrb_SDL_SDL_SetRelativeMouseMode, MRB_ARGS_ARG(SDL_SetRelativeMouseMode_REQUIRED_ARGC, SDL_SetRelativeMouseMode_OPTIONAL_ARGC));
#endif
#if BIND_SDL_SetRenderDrawBlendMode_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_SetRenderDrawBlendMode", mrb_SDL_SDL_SetRenderDrawBlendMode, MRB_ARGS_ARG(SDL_SetRenderDrawBlendMode_REQUIRED_ARGC, SDL_SetRenderDrawBlendMode_OPTIONAL_ARGC));
#endif
#if BIND_SDL_SetRenderDrawColor_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_SetRenderDrawColor", mrb_SDL_SDL_SetRenderDrawColor, MRB_ARGS_ARG(SDL_SetRenderDrawColor_REQUIRED_ARGC, SDL_SetRenderDrawColor_OPTIONAL_ARGC));
#endif
#if BIND_SDL_SetRenderTarget_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_SetRenderTarget", mrb_SDL_SDL_SetRenderTarget, MRB_ARGS_ARG(SDL_SetRenderTarget_REQUIRED_ARGC, SDL_SetRenderTarget_OPTIONAL_ARGC));
#endif
#if BIND_SDL_SetSurfaceAlphaMod_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_SetSurfaceAlphaMod", mrb_SDL_SDL_SetSurfaceAlphaMod, MRB_ARGS_ARG(SDL_SetSurfaceAlphaMod_REQUIRED_ARGC, SDL_SetSurfaceAlphaMod_OPTIONAL_ARGC));
#endif
#if BIND_SDL_SetSurfaceBlendMode_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_SetSurfaceBlendMode", mrb_SDL_SDL_SetSurfaceBlendMode, MRB_ARGS_ARG(SDL_SetSurfaceBlendMode_REQUIRED_ARGC, SDL_SetSurfaceBlendMode_OPTIONAL_ARGC));
#endif
#if BIND_SDL_SetSurfaceColorMod_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_SetSurfaceColorMod", mrb_SDL_SDL_SetSurfaceColorMod, MRB_ARGS_ARG(SDL_SetSurfaceColorMod_REQUIRED_ARGC, SDL_SetSurfaceColorMod_OPTIONAL_ARGC));
#endif
#if BIND_SDL_SetSurfacePalette_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_SetSurfacePalette", mrb_SDL_SDL_SetSurfacePalette, MRB_ARGS_ARG(SDL_SetSurfacePalette_REQUIRED_ARGC, SDL_SetSurfacePalette_OPTIONAL_ARGC));
#endif
#if BIND_SDL_SetSurfaceRLE_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_SetSurfaceRLE", mrb_SDL_SDL_SetSurfaceRLE, MRB_ARGS_ARG(SDL_SetSurfaceRLE_REQUIRED_ARGC, SDL_SetSurfaceRLE_OPTIONAL_ARGC));
#endif
#if BIND_SDL_SetTextInputRect_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_SetTextInputRect", mrb_SDL_SDL_SetTextInputRect, MRB_ARGS_ARG(SDL_SetTextInputRect_REQUIRED_ARGC, SDL_SetTextInputRect_OPTIONAL_ARGC));
#endif
#if BIND_SDL_SetTextureAlphaMod_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_SetTextureAlphaMod", mrb_SDL_SDL_SetTextureAlphaMod, MRB_ARGS_ARG(SDL_SetTextureAlphaMod_REQUIRED_ARGC, SDL_SetTextureAlphaMod_OPTIONAL_ARGC));
#endif
#if BIND_SDL_SetTextureBlendMode_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_SetTextureBlendMode", mrb_SDL_SDL_SetTextureBlendMode, MRB_ARGS_ARG(SDL_SetTextureBlendMode_REQUIRED_ARGC, SDL_SetTextureBlendMode_OPTIONAL_ARGC));
#endif
#if BIND_SDL_SetTextureColorMod_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_SetTextureColorMod", mrb_SDL_SDL_SetTextureColorMod, MRB_ARGS_ARG(SDL_SetTextureColorMod_REQUIRED_ARGC, SDL_SetTextureColorMod_OPTIONAL_ARGC));
#endif
#if BIND_SDL_SetThreadPriority_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_SetThreadPriority", mrb_SDL_SDL_SetThreadPriority, MRB_ARGS_ARG(SDL_SetThreadPriority_REQUIRED_ARGC, SDL_SetThreadPriority_OPTIONAL_ARGC));
#endif
#if BIND_SDL_SetWindowBordered_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_SetWindowBordered", mrb_SDL_SDL_SetWindowBordered, MRB_ARGS_ARG(SDL_SetWindowBordered_REQUIRED_ARGC, SDL_SetWindowBordered_OPTIONAL_ARGC));
#endif
#if BIND_SDL_SetWindowBrightness_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_SetWindowBrightness", mrb_SDL_SDL_SetWindowBrightness, MRB_ARGS_ARG(SDL_SetWindowBrightness_REQUIRED_ARGC, SDL_SetWindowBrightness_OPTIONAL_ARGC));
#endif
#if BIND_SDL_SetWindowData_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_SetWindowData", mrb_SDL_SDL_SetWindowData, MRB_ARGS_ARG(SDL_SetWindowData_REQUIRED_ARGC, SDL_SetWindowData_OPTIONAL_ARGC));
#endif
#if BIND_SDL_SetWindowDisplayMode_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_SetWindowDisplayMode", mrb_SDL_SDL_SetWindowDisplayMode, MRB_ARGS_ARG(SDL_SetWindowDisplayMode_REQUIRED_ARGC, SDL_SetWindowDisplayMode_OPTIONAL_ARGC));
#endif
#if BIND_SDL_SetWindowFullscreen_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_SetWindowFullscreen", mrb_SDL_SDL_SetWindowFullscreen, MRB_ARGS_ARG(SDL_SetWindowFullscreen_REQUIRED_ARGC, SDL_SetWindowFullscreen_OPTIONAL_ARGC));
#endif
#if BIND_SDL_SetWindowGammaRamp_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_SetWindowGammaRamp", mrb_SDL_SDL_SetWindowGammaRamp, MRB_ARGS_ARG(SDL_SetWindowGammaRamp_REQUIRED_ARGC, SDL_SetWindowGammaRamp_OPTIONAL_ARGC));
#endif
#if BIND_SDL_SetWindowGrab_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_SetWindowGrab", mrb_SDL_SDL_SetWindowGrab, MRB_ARGS_ARG(SDL_SetWindowGrab_REQUIRED_ARGC, SDL_SetWindowGrab_OPTIONAL_ARGC));
#endif
#if BIND_SDL_SetWindowIcon_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_SetWindowIcon", mrb_SDL_SDL_SetWindowIcon, MRB_ARGS_ARG(SDL_SetWindowIcon_REQUIRED_ARGC, SDL_SetWindowIcon_OPTIONAL_ARGC));
#endif
#if BIND_SDL_SetWindowMaximumSize_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_SetWindowMaximumSize", mrb_SDL_SDL_SetWindowMaximumSize, MRB_ARGS_ARG(SDL_SetWindowMaximumSize_REQUIRED_ARGC, SDL_SetWindowMaximumSize_OPTIONAL_ARGC));
#endif
#if BIND_SDL_SetWindowMinimumSize_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_SetWindowMinimumSize", mrb_SDL_SDL_SetWindowMinimumSize, MRB_ARGS_ARG(SDL_SetWindowMinimumSize_REQUIRED_ARGC, SDL_SetWindowMinimumSize_OPTIONAL_ARGC));
#endif
#if BIND_SDL_SetWindowPosition_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_SetWindowPosition", mrb_SDL_SDL_SetWindowPosition, MRB_ARGS_ARG(SDL_SetWindowPosition_REQUIRED_ARGC, SDL_SetWindowPosition_OPTIONAL_ARGC));
#endif
#if BIND_SDL_SetWindowShape_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_SetWindowShape", mrb_SDL_SDL_SetWindowShape, MRB_ARGS_ARG(SDL_SetWindowShape_REQUIRED_ARGC, SDL_SetWindowShape_OPTIONAL_ARGC));
#endif
#if BIND_SDL_SetWindowSize_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_SetWindowSize", mrb_SDL_SDL_SetWindowSize, MRB_ARGS_ARG(SDL_SetWindowSize_REQUIRED_ARGC, SDL_SetWindowSize_OPTIONAL_ARGC));
#endif
#if BIND_SDL_SetWindowTitle_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_SetWindowTitle", mrb_SDL_SDL_SetWindowTitle, MRB_ARGS_ARG(SDL_SetWindowTitle_REQUIRED_ARGC, SDL_SetWindowTitle_OPTIONAL_ARGC));
#endif
#if BIND_SDL_ShowCursor_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_ShowCursor", mrb_SDL_SDL_ShowCursor, MRB_ARGS_ARG(SDL_ShowCursor_REQUIRED_ARGC, SDL_ShowCursor_OPTIONAL_ARGC));
#endif
#if BIND_SDL_ShowMessageBox_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_ShowMessageBox", mrb_SDL_SDL_ShowMessageBox, MRB_ARGS_ARG(SDL_ShowMessageBox_REQUIRED_ARGC, SDL_ShowMessageBox_OPTIONAL_ARGC));
#endif
#if BIND_SDL_ShowSimpleMessageBox_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_ShowSimpleMessageBox", mrb_SDL_SDL_ShowSimpleMessageBox, MRB_ARGS_ARG(SDL_ShowSimpleMessageBox_REQUIRED_ARGC, SDL_ShowSimpleMessageBox_OPTIONAL_ARGC));
#endif
#if BIND_SDL_ShowWindow_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_ShowWindow", mrb_SDL_SDL_ShowWindow, MRB_ARGS_ARG(SDL_ShowWindow_REQUIRED_ARGC, SDL_ShowWindow_OPTIONAL_ARGC));
#endif
#if BIND_SDL_sin_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_sin", mrb_SDL_SDL_sin, MRB_ARGS_ARG(SDL_sin_REQUIRED_ARGC, SDL_sin_OPTIONAL_ARGC));
#endif
#if BIND_SDL_sinf_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_sinf", mrb_SDL_SDL_sinf, MRB_ARGS_ARG(SDL_sinf_REQUIRED_ARGC, SDL_sinf_OPTIONAL_ARGC));
#endif
#if BIND_SDL_snprintf_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_snprintf", mrb_SDL_SDL_snprintf, MRB_ARGS_ARG(SDL_snprintf_REQUIRED_ARGC, SDL_snprintf_OPTIONAL_ARGC));
#endif
#if BIND_SDL_SoftStretch_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_SoftStretch", mrb_SDL_SDL_SoftStretch, MRB_ARGS_ARG(SDL_SoftStretch_REQUIRED_ARGC, SDL_SoftStretch_OPTIONAL_ARGC));
#endif
#if BIND_SDL_sqrt_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_sqrt", mrb_SDL_SDL_sqrt, MRB_ARGS_ARG(SDL_sqrt_REQUIRED_ARGC, SDL_sqrt_OPTIONAL_ARGC));
#endif
#if BIND_SDL_sscanf_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_sscanf", mrb_SDL_SDL_sscanf, MRB_ARGS_ARG(SDL_sscanf_REQUIRED_ARGC, SDL_sscanf_OPTIONAL_ARGC));
#endif
#if BIND_SDL_StartTextInput_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_StartTextInput", mrb_SDL_SDL_StartTextInput, MRB_ARGS_ARG(SDL_StartTextInput_REQUIRED_ARGC, SDL_StartTextInput_OPTIONAL_ARGC));
#endif
#if BIND_SDL_StopTextInput_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_StopTextInput", mrb_SDL_SDL_StopTextInput, MRB_ARGS_ARG(SDL_StopTextInput_REQUIRED_ARGC, SDL_StopTextInput_OPTIONAL_ARGC));
#endif
#if BIND_SDL_strcasecmp_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_strcasecmp", mrb_SDL_SDL_strcasecmp, MRB_ARGS_ARG(SDL_strcasecmp_REQUIRED_ARGC, SDL_strcasecmp_OPTIONAL_ARGC));
#endif
#if BIND_SDL_strchr_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_strchr", mrb_SDL_SDL_strchr, MRB_ARGS_ARG(SDL_strchr_REQUIRED_ARGC, SDL_strchr_OPTIONAL_ARGC));
#endif
#if BIND_SDL_strcmp_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_strcmp", mrb_SDL_SDL_strcmp, MRB_ARGS_ARG(SDL_strcmp_REQUIRED_ARGC, SDL_strcmp_OPTIONAL_ARGC));
#endif
#if BIND_SDL_strdup_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_strdup", mrb_SDL_SDL_strdup, MRB_ARGS_ARG(SDL_strdup_REQUIRED_ARGC, SDL_strdup_OPTIONAL_ARGC));
#endif
#if BIND_SDL_strlcat_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_strlcat", mrb_SDL_SDL_strlcat, MRB_ARGS_ARG(SDL_strlcat_REQUIRED_ARGC, SDL_strlcat_OPTIONAL_ARGC));
#endif
#if BIND_SDL_strlcpy_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_strlcpy", mrb_SDL_SDL_strlcpy, MRB_ARGS_ARG(SDL_strlcpy_REQUIRED_ARGC, SDL_strlcpy_OPTIONAL_ARGC));
#endif
#if BIND_SDL_strlen_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_strlen", mrb_SDL_SDL_strlen, MRB_ARGS_ARG(SDL_strlen_REQUIRED_ARGC, SDL_strlen_OPTIONAL_ARGC));
#endif
#if BIND_SDL_strlwr_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_strlwr", mrb_SDL_SDL_strlwr, MRB_ARGS_ARG(SDL_strlwr_REQUIRED_ARGC, SDL_strlwr_OPTIONAL_ARGC));
#endif
#if BIND_SDL_strncasecmp_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_strncasecmp", mrb_SDL_SDL_strncasecmp, MRB_ARGS_ARG(SDL_strncasecmp_REQUIRED_ARGC, SDL_strncasecmp_OPTIONAL_ARGC));
#endif
#if BIND_SDL_strncmp_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_strncmp", mrb_SDL_SDL_strncmp, MRB_ARGS_ARG(SDL_strncmp_REQUIRED_ARGC, SDL_strncmp_OPTIONAL_ARGC));
#endif
#if BIND_SDL_strrchr_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_strrchr", mrb_SDL_SDL_strrchr, MRB_ARGS_ARG(SDL_strrchr_REQUIRED_ARGC, SDL_strrchr_OPTIONAL_ARGC));
#endif
#if BIND_SDL_strrev_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_strrev", mrb_SDL_SDL_strrev, MRB_ARGS_ARG(SDL_strrev_REQUIRED_ARGC, SDL_strrev_OPTIONAL_ARGC));
#endif
#if BIND_SDL_strstr_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_strstr", mrb_SDL_SDL_strstr, MRB_ARGS_ARG(SDL_strstr_REQUIRED_ARGC, SDL_strstr_OPTIONAL_ARGC));
#endif
#if BIND_SDL_strtod_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_strtod", mrb_SDL_SDL_strtod, MRB_ARGS_ARG(SDL_strtod_REQUIRED_ARGC, SDL_strtod_OPTIONAL_ARGC));
#endif
#if BIND_SDL_strtol_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_strtol", mrb_SDL_SDL_strtol, MRB_ARGS_ARG(SDL_strtol_REQUIRED_ARGC, SDL_strtol_OPTIONAL_ARGC));
#endif
#if BIND_SDL_strtoll_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_strtoll", mrb_SDL_SDL_strtoll, MRB_ARGS_ARG(SDL_strtoll_REQUIRED_ARGC, SDL_strtoll_OPTIONAL_ARGC));
#endif
#if BIND_SDL_strtoul_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_strtoul", mrb_SDL_SDL_strtoul, MRB_ARGS_ARG(SDL_strtoul_REQUIRED_ARGC, SDL_strtoul_OPTIONAL_ARGC));
#endif
#if BIND_SDL_strtoull_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_strtoull", mrb_SDL_SDL_strtoull, MRB_ARGS_ARG(SDL_strtoull_REQUIRED_ARGC, SDL_strtoull_OPTIONAL_ARGC));
#endif
#if BIND_SDL_strupr_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_strupr", mrb_SDL_SDL_strupr, MRB_ARGS_ARG(SDL_strupr_REQUIRED_ARGC, SDL_strupr_OPTIONAL_ARGC));
#endif
#if BIND_SDL_Swap16_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_Swap16", mrb_SDL_SDL_Swap16, MRB_ARGS_ARG(SDL_Swap16_REQUIRED_ARGC, SDL_Swap16_OPTIONAL_ARGC));
#endif
#if BIND_SDL_Swap32_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_Swap32", mrb_SDL_SDL_Swap32, MRB_ARGS_ARG(SDL_Swap32_REQUIRED_ARGC, SDL_Swap32_OPTIONAL_ARGC));
#endif
#if BIND_SDL_Swap64_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_Swap64", mrb_SDL_SDL_Swap64, MRB_ARGS_ARG(SDL_Swap64_REQUIRED_ARGC, SDL_Swap64_OPTIONAL_ARGC));
#endif
#if BIND_SDL_SwapFloat_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_SwapFloat", mrb_SDL_SDL_SwapFloat, MRB_ARGS_ARG(SDL_SwapFloat_REQUIRED_ARGC, SDL_SwapFloat_OPTIONAL_ARGC));
#endif
#if BIND_SDL_ThreadID_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_ThreadID", mrb_SDL_SDL_ThreadID, MRB_ARGS_ARG(SDL_ThreadID_REQUIRED_ARGC, SDL_ThreadID_OPTIONAL_ARGC));
#endif
#if BIND_SDL_TLSCreate_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_TLSCreate", mrb_SDL_SDL_TLSCreate, MRB_ARGS_ARG(SDL_TLSCreate_REQUIRED_ARGC, SDL_TLSCreate_OPTIONAL_ARGC));
#endif
#if BIND_SDL_TLSGet_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_TLSGet", mrb_SDL_SDL_TLSGet, MRB_ARGS_ARG(SDL_TLSGet_REQUIRED_ARGC, SDL_TLSGet_OPTIONAL_ARGC));
#endif
#if BIND_SDL_TLSSet_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_TLSSet", mrb_SDL_SDL_TLSSet, MRB_ARGS_ARG(SDL_TLSSet_REQUIRED_ARGC, SDL_TLSSet_OPTIONAL_ARGC));
#endif
#if BIND_SDL_tolower_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_tolower", mrb_SDL_SDL_tolower, MRB_ARGS_ARG(SDL_tolower_REQUIRED_ARGC, SDL_tolower_OPTIONAL_ARGC));
#endif
#if BIND_SDL_toupper_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_toupper", mrb_SDL_SDL_toupper, MRB_ARGS_ARG(SDL_toupper_REQUIRED_ARGC, SDL_toupper_OPTIONAL_ARGC));
#endif
#if BIND_SDL_TryLockMutex_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_TryLockMutex", mrb_SDL_SDL_TryLockMutex, MRB_ARGS_ARG(SDL_TryLockMutex_REQUIRED_ARGC, SDL_TryLockMutex_OPTIONAL_ARGC));
#endif
#if BIND_SDL_uitoa_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_uitoa", mrb_SDL_SDL_uitoa, MRB_ARGS_ARG(SDL_uitoa_REQUIRED_ARGC, SDL_uitoa_OPTIONAL_ARGC));
#endif
#if BIND_SDL_ulltoa_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_ulltoa", mrb_SDL_SDL_ulltoa, MRB_ARGS_ARG(SDL_ulltoa_REQUIRED_ARGC, SDL_ulltoa_OPTIONAL_ARGC));
#endif
#if BIND_SDL_ultoa_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_ultoa", mrb_SDL_SDL_ultoa, MRB_ARGS_ARG(SDL_ultoa_REQUIRED_ARGC, SDL_ultoa_OPTIONAL_ARGC));
#endif
#if BIND_SDL_UnionRect_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_UnionRect", mrb_SDL_SDL_UnionRect, MRB_ARGS_ARG(SDL_UnionRect_REQUIRED_ARGC, SDL_UnionRect_OPTIONAL_ARGC));
#endif
#if BIND_SDL_UnloadObject_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_UnloadObject", mrb_SDL_SDL_UnloadObject, MRB_ARGS_ARG(SDL_UnloadObject_REQUIRED_ARGC, SDL_UnloadObject_OPTIONAL_ARGC));
#endif
#if BIND_SDL_UnlockAudio_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_UnlockAudio", mrb_SDL_SDL_UnlockAudio, MRB_ARGS_ARG(SDL_UnlockAudio_REQUIRED_ARGC, SDL_UnlockAudio_OPTIONAL_ARGC));
#endif
#if BIND_SDL_UnlockAudioDevice_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_UnlockAudioDevice", mrb_SDL_SDL_UnlockAudioDevice, MRB_ARGS_ARG(SDL_UnlockAudioDevice_REQUIRED_ARGC, SDL_UnlockAudioDevice_OPTIONAL_ARGC));
#endif
#if BIND_SDL_UnlockMutex_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_UnlockMutex", mrb_SDL_SDL_UnlockMutex, MRB_ARGS_ARG(SDL_UnlockMutex_REQUIRED_ARGC, SDL_UnlockMutex_OPTIONAL_ARGC));
#endif
#if BIND_SDL_UnlockSurface_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_UnlockSurface", mrb_SDL_SDL_UnlockSurface, MRB_ARGS_ARG(SDL_UnlockSurface_REQUIRED_ARGC, SDL_UnlockSurface_OPTIONAL_ARGC));
#endif
#if BIND_SDL_UnlockTexture_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_UnlockTexture", mrb_SDL_SDL_UnlockTexture, MRB_ARGS_ARG(SDL_UnlockTexture_REQUIRED_ARGC, SDL_UnlockTexture_OPTIONAL_ARGC));
#endif
#if BIND_SDL_UpdateTexture_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_UpdateTexture", mrb_SDL_SDL_UpdateTexture, MRB_ARGS_ARG(SDL_UpdateTexture_REQUIRED_ARGC, SDL_UpdateTexture_OPTIONAL_ARGC));
#endif
#if BIND_SDL_UpdateWindowSurface_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_UpdateWindowSurface", mrb_SDL_SDL_UpdateWindowSurface, MRB_ARGS_ARG(SDL_UpdateWindowSurface_REQUIRED_ARGC, SDL_UpdateWindowSurface_OPTIONAL_ARGC));
#endif
#if BIND_SDL_UpdateWindowSurfaceRects_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_UpdateWindowSurfaceRects", mrb_SDL_SDL_UpdateWindowSurfaceRects, MRB_ARGS_ARG(SDL_UpdateWindowSurfaceRects_REQUIRED_ARGC, SDL_UpdateWindowSurfaceRects_OPTIONAL_ARGC));
#endif
#if BIND_SDL_UpdateYUVTexture_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_UpdateYUVTexture", mrb_SDL_SDL_UpdateYUVTexture, MRB_ARGS_ARG(SDL_UpdateYUVTexture_REQUIRED_ARGC, SDL_UpdateYUVTexture_OPTIONAL_ARGC));
#endif
#if BIND_SDL_UpperBlit_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_UpperBlit", mrb_SDL_SDL_UpperBlit, MRB_ARGS_ARG(SDL_UpperBlit_REQUIRED_ARGC, SDL_UpperBlit_OPTIONAL_ARGC));
#endif
#if BIND_SDL_UpperBlitScaled_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_UpperBlitScaled", mrb_SDL_SDL_UpperBlitScaled, MRB_ARGS_ARG(SDL_UpperBlitScaled_REQUIRED_ARGC, SDL_UpperBlitScaled_OPTIONAL_ARGC));
#endif
#if BIND_SDL_utf8strlcpy_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_utf8strlcpy", mrb_SDL_SDL_utf8strlcpy, MRB_ARGS_ARG(SDL_utf8strlcpy_REQUIRED_ARGC, SDL_utf8strlcpy_OPTIONAL_ARGC));
#endif
#if BIND_SDL_VideoInit_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_VideoInit", mrb_SDL_SDL_VideoInit, MRB_ARGS_ARG(SDL_VideoInit_REQUIRED_ARGC, SDL_VideoInit_OPTIONAL_ARGC));
#endif
#if BIND_SDL_VideoQuit_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_VideoQuit", mrb_SDL_SDL_VideoQuit, MRB_ARGS_ARG(SDL_VideoQuit_REQUIRED_ARGC, SDL_VideoQuit_OPTIONAL_ARGC));
#endif
#if BIND_SDL_vsnprintf_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_vsnprintf", mrb_SDL_SDL_vsnprintf, MRB_ARGS_ARG(SDL_vsnprintf_REQUIRED_ARGC, SDL_vsnprintf_OPTIONAL_ARGC));
#endif
#if BIND_SDL_vsscanf_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_vsscanf", mrb_SDL_SDL_vsscanf, MRB_ARGS_ARG(SDL_vsscanf_REQUIRED_ARGC, SDL_vsscanf_OPTIONAL_ARGC));
#endif
#if BIND_SDL_WaitEvent_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_WaitEvent", mrb_SDL_SDL_WaitEvent, MRB_ARGS_ARG(SDL_WaitEvent_REQUIRED_ARGC, SDL_WaitEvent_OPTIONAL_ARGC));
#endif
#if BIND_SDL_WaitEventTimeout_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_WaitEventTimeout", mrb_SDL_SDL_WaitEventTimeout, MRB_ARGS_ARG(SDL_WaitEventTimeout_REQUIRED_ARGC, SDL_WaitEventTimeout_OPTIONAL_ARGC));
#endif
#if BIND_SDL_WaitThread_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_WaitThread", mrb_SDL_SDL_WaitThread, MRB_ARGS_ARG(SDL_WaitThread_REQUIRED_ARGC, SDL_WaitThread_OPTIONAL_ARGC));
#endif
#if BIND_SDL_WarpMouseInWindow_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_WarpMouseInWindow", mrb_SDL_SDL_WarpMouseInWindow, MRB_ARGS_ARG(SDL_WarpMouseInWindow_REQUIRED_ARGC, SDL_WarpMouseInWindow_OPTIONAL_ARGC));
#endif
#if BIND_SDL_WasInit_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_WasInit", mrb_SDL_SDL_WasInit, MRB_ARGS_ARG(SDL_WasInit_REQUIRED_ARGC, SDL_WasInit_OPTIONAL_ARGC));
#endif
#if BIND_SDL_wcslcat_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_wcslcat", mrb_SDL_SDL_wcslcat, MRB_ARGS_ARG(SDL_wcslcat_REQUIRED_ARGC, SDL_wcslcat_OPTIONAL_ARGC));
#endif
#if BIND_SDL_wcslcpy_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_wcslcpy", mrb_SDL_SDL_wcslcpy, MRB_ARGS_ARG(SDL_wcslcpy_REQUIRED_ARGC, SDL_wcslcpy_OPTIONAL_ARGC));
#endif
#if BIND_SDL_wcslen_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_wcslen", mrb_SDL_SDL_wcslen, MRB_ARGS_ARG(SDL_wcslen_REQUIRED_ARGC, SDL_wcslen_OPTIONAL_ARGC));
#endif
#if BIND_SDL_WriteBE16_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_WriteBE16", mrb_SDL_SDL_WriteBE16, MRB_ARGS_ARG(SDL_WriteBE16_REQUIRED_ARGC, SDL_WriteBE16_OPTIONAL_ARGC));
#endif
#if BIND_SDL_WriteBE32_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_WriteBE32", mrb_SDL_SDL_WriteBE32, MRB_ARGS_ARG(SDL_WriteBE32_REQUIRED_ARGC, SDL_WriteBE32_OPTIONAL_ARGC));
#endif
#if BIND_SDL_WriteBE64_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_WriteBE64", mrb_SDL_SDL_WriteBE64, MRB_ARGS_ARG(SDL_WriteBE64_REQUIRED_ARGC, SDL_WriteBE64_OPTIONAL_ARGC));
#endif
#if BIND_SDL_WriteLE16_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_WriteLE16", mrb_SDL_SDL_WriteLE16, MRB_ARGS_ARG(SDL_WriteLE16_REQUIRED_ARGC, SDL_WriteLE16_OPTIONAL_ARGC));
#endif
#if BIND_SDL_WriteLE32_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_WriteLE32", mrb_SDL_SDL_WriteLE32, MRB_ARGS_ARG(SDL_WriteLE32_REQUIRED_ARGC, SDL_WriteLE32_OPTIONAL_ARGC));
#endif
#if BIND_SDL_WriteLE64_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_WriteLE64", mrb_SDL_SDL_WriteLE64, MRB_ARGS_ARG(SDL_WriteLE64_REQUIRED_ARGC, SDL_WriteLE64_OPTIONAL_ARGC));
#endif
#if BIND_SDL_WriteU8_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDL_WriteU8", mrb_SDL_SDL_WriteU8, MRB_ARGS_ARG(SDL_WriteU8_REQUIRED_ARGC, SDL_WriteU8_OPTIONAL_ARGC));
#endif
#if BIND_SDLTest_Assert_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDLTest_Assert", mrb_SDL_SDLTest_Assert, MRB_ARGS_ARG(SDLTest_Assert_REQUIRED_ARGC, SDLTest_Assert_OPTIONAL_ARGC));
#endif
#if BIND_SDLTest_AssertCheck_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDLTest_AssertCheck", mrb_SDL_SDLTest_AssertCheck, MRB_ARGS_ARG(SDLTest_AssertCheck_REQUIRED_ARGC, SDLTest_AssertCheck_OPTIONAL_ARGC));
#endif
#if BIND_SDLTest_AssertPass_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDLTest_AssertPass", mrb_SDL_SDLTest_AssertPass, MRB_ARGS_ARG(SDLTest_AssertPass_REQUIRED_ARGC, SDLTest_AssertPass_OPTIONAL_ARGC));
#endif
#if BIND_SDLTest_AssertSummaryToTestResult_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDLTest_AssertSummaryToTestResult", mrb_SDL_SDLTest_AssertSummaryToTestResult, MRB_ARGS_ARG(SDLTest_AssertSummaryToTestResult_REQUIRED_ARGC, SDLTest_AssertSummaryToTestResult_OPTIONAL_ARGC));
#endif
#if BIND_SDLTest_CommonArg_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDLTest_CommonArg", mrb_SDL_SDLTest_CommonArg, MRB_ARGS_ARG(SDLTest_CommonArg_REQUIRED_ARGC, SDLTest_CommonArg_OPTIONAL_ARGC));
#endif
#if BIND_SDLTest_CommonCreateState_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDLTest_CommonCreateState", mrb_SDL_SDLTest_CommonCreateState, MRB_ARGS_ARG(SDLTest_CommonCreateState_REQUIRED_ARGC, SDLTest_CommonCreateState_OPTIONAL_ARGC));
#endif
#if BIND_SDLTest_CommonEvent_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDLTest_CommonEvent", mrb_SDL_SDLTest_CommonEvent, MRB_ARGS_ARG(SDLTest_CommonEvent_REQUIRED_ARGC, SDLTest_CommonEvent_OPTIONAL_ARGC));
#endif
#if BIND_SDLTest_CommonInit_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDLTest_CommonInit", mrb_SDL_SDLTest_CommonInit, MRB_ARGS_ARG(SDLTest_CommonInit_REQUIRED_ARGC, SDLTest_CommonInit_OPTIONAL_ARGC));
#endif
#if BIND_SDLTest_CommonQuit_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDLTest_CommonQuit", mrb_SDL_SDLTest_CommonQuit, MRB_ARGS_ARG(SDLTest_CommonQuit_REQUIRED_ARGC, SDLTest_CommonQuit_OPTIONAL_ARGC));
#endif
#if BIND_SDLTest_CommonUsage_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDLTest_CommonUsage", mrb_SDL_SDLTest_CommonUsage, MRB_ARGS_ARG(SDLTest_CommonUsage_REQUIRED_ARGC, SDLTest_CommonUsage_OPTIONAL_ARGC));
#endif
#if BIND_SDLTest_CompareSurfaces_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDLTest_CompareSurfaces", mrb_SDL_SDLTest_CompareSurfaces, MRB_ARGS_ARG(SDLTest_CompareSurfaces_REQUIRED_ARGC, SDLTest_CompareSurfaces_OPTIONAL_ARGC));
#endif
#if BIND_SDLTest_crc32Calc_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDLTest_crc32Calc", mrb_SDL_SDLTest_crc32Calc, MRB_ARGS_ARG(SDLTest_crc32Calc_REQUIRED_ARGC, SDLTest_crc32Calc_OPTIONAL_ARGC));
#endif
#if BIND_SDLTest_Crc32CalcBuffer_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDLTest_Crc32CalcBuffer", mrb_SDL_SDLTest_Crc32CalcBuffer, MRB_ARGS_ARG(SDLTest_Crc32CalcBuffer_REQUIRED_ARGC, SDLTest_Crc32CalcBuffer_OPTIONAL_ARGC));
#endif
#if BIND_SDLTest_Crc32CalcEnd_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDLTest_Crc32CalcEnd", mrb_SDL_SDLTest_Crc32CalcEnd, MRB_ARGS_ARG(SDLTest_Crc32CalcEnd_REQUIRED_ARGC, SDLTest_Crc32CalcEnd_OPTIONAL_ARGC));
#endif
#if BIND_SDLTest_Crc32CalcStart_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDLTest_Crc32CalcStart", mrb_SDL_SDLTest_Crc32CalcStart, MRB_ARGS_ARG(SDLTest_Crc32CalcStart_REQUIRED_ARGC, SDLTest_Crc32CalcStart_OPTIONAL_ARGC));
#endif
#if BIND_SDLTest_Crc32Done_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDLTest_Crc32Done", mrb_SDL_SDLTest_Crc32Done, MRB_ARGS_ARG(SDLTest_Crc32Done_REQUIRED_ARGC, SDLTest_Crc32Done_OPTIONAL_ARGC));
#endif
#if BIND_SDLTest_Crc32Init_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDLTest_Crc32Init", mrb_SDL_SDLTest_Crc32Init, MRB_ARGS_ARG(SDLTest_Crc32Init_REQUIRED_ARGC, SDLTest_Crc32Init_OPTIONAL_ARGC));
#endif
#if BIND_SDLTest_DrawCharacter_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDLTest_DrawCharacter", mrb_SDL_SDLTest_DrawCharacter, MRB_ARGS_ARG(SDLTest_DrawCharacter_REQUIRED_ARGC, SDLTest_DrawCharacter_OPTIONAL_ARGC));
#endif
#if BIND_SDLTest_DrawString_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDLTest_DrawString", mrb_SDL_SDLTest_DrawString, MRB_ARGS_ARG(SDLTest_DrawString_REQUIRED_ARGC, SDLTest_DrawString_OPTIONAL_ARGC));
#endif
#if BIND_SDLTest_FuzzerInit_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDLTest_FuzzerInit", mrb_SDL_SDLTest_FuzzerInit, MRB_ARGS_ARG(SDLTest_FuzzerInit_REQUIRED_ARGC, SDLTest_FuzzerInit_OPTIONAL_ARGC));
#endif
#if BIND_SDLTest_GetFuzzerInvocationCount_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDLTest_GetFuzzerInvocationCount", mrb_SDL_SDLTest_GetFuzzerInvocationCount, MRB_ARGS_ARG(SDLTest_GetFuzzerInvocationCount_REQUIRED_ARGC, SDLTest_GetFuzzerInvocationCount_OPTIONAL_ARGC));
#endif
#if BIND_SDLTest_ImageBlit_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDLTest_ImageBlit", mrb_SDL_SDLTest_ImageBlit, MRB_ARGS_ARG(SDLTest_ImageBlit_REQUIRED_ARGC, SDLTest_ImageBlit_OPTIONAL_ARGC));
#endif
#if BIND_SDLTest_ImageBlitAlpha_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDLTest_ImageBlitAlpha", mrb_SDL_SDLTest_ImageBlitAlpha, MRB_ARGS_ARG(SDLTest_ImageBlitAlpha_REQUIRED_ARGC, SDLTest_ImageBlitAlpha_OPTIONAL_ARGC));
#endif
#if BIND_SDLTest_ImageBlitBlend_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDLTest_ImageBlitBlend", mrb_SDL_SDLTest_ImageBlitBlend, MRB_ARGS_ARG(SDLTest_ImageBlitBlend_REQUIRED_ARGC, SDLTest_ImageBlitBlend_OPTIONAL_ARGC));
#endif
#if BIND_SDLTest_ImageBlitBlendAdd_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDLTest_ImageBlitBlendAdd", mrb_SDL_SDLTest_ImageBlitBlendAdd, MRB_ARGS_ARG(SDLTest_ImageBlitBlendAdd_REQUIRED_ARGC, SDLTest_ImageBlitBlendAdd_OPTIONAL_ARGC));
#endif
#if BIND_SDLTest_ImageBlitBlendAll_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDLTest_ImageBlitBlendAll", mrb_SDL_SDLTest_ImageBlitBlendAll, MRB_ARGS_ARG(SDLTest_ImageBlitBlendAll_REQUIRED_ARGC, SDLTest_ImageBlitBlendAll_OPTIONAL_ARGC));
#endif
#if BIND_SDLTest_ImageBlitBlendMod_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDLTest_ImageBlitBlendMod", mrb_SDL_SDLTest_ImageBlitBlendMod, MRB_ARGS_ARG(SDLTest_ImageBlitBlendMod_REQUIRED_ARGC, SDLTest_ImageBlitBlendMod_OPTIONAL_ARGC));
#endif
#if BIND_SDLTest_ImageBlitBlendNone_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDLTest_ImageBlitBlendNone", mrb_SDL_SDLTest_ImageBlitBlendNone, MRB_ARGS_ARG(SDLTest_ImageBlitBlendNone_REQUIRED_ARGC, SDLTest_ImageBlitBlendNone_OPTIONAL_ARGC));
#endif
#if BIND_SDLTest_ImageBlitColor_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDLTest_ImageBlitColor", mrb_SDL_SDLTest_ImageBlitColor, MRB_ARGS_ARG(SDLTest_ImageBlitColor_REQUIRED_ARGC, SDLTest_ImageBlitColor_OPTIONAL_ARGC));
#endif
#if BIND_SDLTest_ImageFace_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDLTest_ImageFace", mrb_SDL_SDLTest_ImageFace, MRB_ARGS_ARG(SDLTest_ImageFace_REQUIRED_ARGC, SDLTest_ImageFace_OPTIONAL_ARGC));
#endif
#if BIND_SDLTest_ImagePrimitives_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDLTest_ImagePrimitives", mrb_SDL_SDLTest_ImagePrimitives, MRB_ARGS_ARG(SDLTest_ImagePrimitives_REQUIRED_ARGC, SDLTest_ImagePrimitives_OPTIONAL_ARGC));
#endif
#if BIND_SDLTest_ImagePrimitivesBlend_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDLTest_ImagePrimitivesBlend", mrb_SDL_SDLTest_ImagePrimitivesBlend, MRB_ARGS_ARG(SDLTest_ImagePrimitivesBlend_REQUIRED_ARGC, SDLTest_ImagePrimitivesBlend_OPTIONAL_ARGC));
#endif
#if BIND_SDLTest_Log_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDLTest_Log", mrb_SDL_SDLTest_Log, MRB_ARGS_ARG(SDLTest_Log_REQUIRED_ARGC, SDLTest_Log_OPTIONAL_ARGC));
#endif
#if BIND_SDLTest_LogAssertSummary_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDLTest_LogAssertSummary", mrb_SDL_SDLTest_LogAssertSummary, MRB_ARGS_ARG(SDLTest_LogAssertSummary_REQUIRED_ARGC, SDLTest_LogAssertSummary_OPTIONAL_ARGC));
#endif
#if BIND_SDLTest_LogError_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDLTest_LogError", mrb_SDL_SDLTest_LogError, MRB_ARGS_ARG(SDLTest_LogError_REQUIRED_ARGC, SDLTest_LogError_OPTIONAL_ARGC));
#endif
#if BIND_SDLTest_Md5Final_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDLTest_Md5Final", mrb_SDL_SDLTest_Md5Final, MRB_ARGS_ARG(SDLTest_Md5Final_REQUIRED_ARGC, SDLTest_Md5Final_OPTIONAL_ARGC));
#endif
#if BIND_SDLTest_Md5Init_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDLTest_Md5Init", mrb_SDL_SDLTest_Md5Init, MRB_ARGS_ARG(SDLTest_Md5Init_REQUIRED_ARGC, SDLTest_Md5Init_OPTIONAL_ARGC));
#endif
#if BIND_SDLTest_Md5Update_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDLTest_Md5Update", mrb_SDL_SDLTest_Md5Update, MRB_ARGS_ARG(SDLTest_Md5Update_REQUIRED_ARGC, SDLTest_Md5Update_OPTIONAL_ARGC));
#endif
#if BIND_SDLTest_Random_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDLTest_Random", mrb_SDL_SDLTest_Random, MRB_ARGS_ARG(SDLTest_Random_REQUIRED_ARGC, SDLTest_Random_OPTIONAL_ARGC));
#endif
#if BIND_SDLTest_RandomAsciiString_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDLTest_RandomAsciiString", mrb_SDL_SDLTest_RandomAsciiString, MRB_ARGS_ARG(SDLTest_RandomAsciiString_REQUIRED_ARGC, SDLTest_RandomAsciiString_OPTIONAL_ARGC));
#endif
#if BIND_SDLTest_RandomAsciiStringOfSize_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDLTest_RandomAsciiStringOfSize", mrb_SDL_SDLTest_RandomAsciiStringOfSize, MRB_ARGS_ARG(SDLTest_RandomAsciiStringOfSize_REQUIRED_ARGC, SDLTest_RandomAsciiStringOfSize_OPTIONAL_ARGC));
#endif
#if BIND_SDLTest_RandomAsciiStringWithMaximumLength_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDLTest_RandomAsciiStringWithMaximumLength", mrb_SDL_SDLTest_RandomAsciiStringWithMaximumLength, MRB_ARGS_ARG(SDLTest_RandomAsciiStringWithMaximumLength_REQUIRED_ARGC, SDLTest_RandomAsciiStringWithMaximumLength_OPTIONAL_ARGC));
#endif
#if BIND_SDLTest_RandomDouble_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDLTest_RandomDouble", mrb_SDL_SDLTest_RandomDouble, MRB_ARGS_ARG(SDLTest_RandomDouble_REQUIRED_ARGC, SDLTest_RandomDouble_OPTIONAL_ARGC));
#endif
#if BIND_SDLTest_RandomFloat_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDLTest_RandomFloat", mrb_SDL_SDLTest_RandomFloat, MRB_ARGS_ARG(SDLTest_RandomFloat_REQUIRED_ARGC, SDLTest_RandomFloat_OPTIONAL_ARGC));
#endif
#if BIND_SDLTest_RandomInit_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDLTest_RandomInit", mrb_SDL_SDLTest_RandomInit, MRB_ARGS_ARG(SDLTest_RandomInit_REQUIRED_ARGC, SDLTest_RandomInit_OPTIONAL_ARGC));
#endif
#if BIND_SDLTest_RandomInitTime_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDLTest_RandomInitTime", mrb_SDL_SDLTest_RandomInitTime, MRB_ARGS_ARG(SDLTest_RandomInitTime_REQUIRED_ARGC, SDLTest_RandomInitTime_OPTIONAL_ARGC));
#endif
#if BIND_SDLTest_RandomIntegerInRange_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDLTest_RandomIntegerInRange", mrb_SDL_SDLTest_RandomIntegerInRange, MRB_ARGS_ARG(SDLTest_RandomIntegerInRange_REQUIRED_ARGC, SDLTest_RandomIntegerInRange_OPTIONAL_ARGC));
#endif
#if BIND_SDLTest_RandomSint16_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDLTest_RandomSint16", mrb_SDL_SDLTest_RandomSint16, MRB_ARGS_ARG(SDLTest_RandomSint16_REQUIRED_ARGC, SDLTest_RandomSint16_OPTIONAL_ARGC));
#endif
#if BIND_SDLTest_RandomSint16BoundaryValue_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDLTest_RandomSint16BoundaryValue", mrb_SDL_SDLTest_RandomSint16BoundaryValue, MRB_ARGS_ARG(SDLTest_RandomSint16BoundaryValue_REQUIRED_ARGC, SDLTest_RandomSint16BoundaryValue_OPTIONAL_ARGC));
#endif
#if BIND_SDLTest_RandomSint32_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDLTest_RandomSint32", mrb_SDL_SDLTest_RandomSint32, MRB_ARGS_ARG(SDLTest_RandomSint32_REQUIRED_ARGC, SDLTest_RandomSint32_OPTIONAL_ARGC));
#endif
#if BIND_SDLTest_RandomSint32BoundaryValue_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDLTest_RandomSint32BoundaryValue", mrb_SDL_SDLTest_RandomSint32BoundaryValue, MRB_ARGS_ARG(SDLTest_RandomSint32BoundaryValue_REQUIRED_ARGC, SDLTest_RandomSint32BoundaryValue_OPTIONAL_ARGC));
#endif
#if BIND_SDLTest_RandomSint64_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDLTest_RandomSint64", mrb_SDL_SDLTest_RandomSint64, MRB_ARGS_ARG(SDLTest_RandomSint64_REQUIRED_ARGC, SDLTest_RandomSint64_OPTIONAL_ARGC));
#endif
#if BIND_SDLTest_RandomSint64BoundaryValue_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDLTest_RandomSint64BoundaryValue", mrb_SDL_SDLTest_RandomSint64BoundaryValue, MRB_ARGS_ARG(SDLTest_RandomSint64BoundaryValue_REQUIRED_ARGC, SDLTest_RandomSint64BoundaryValue_OPTIONAL_ARGC));
#endif
#if BIND_SDLTest_RandomSint8_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDLTest_RandomSint8", mrb_SDL_SDLTest_RandomSint8, MRB_ARGS_ARG(SDLTest_RandomSint8_REQUIRED_ARGC, SDLTest_RandomSint8_OPTIONAL_ARGC));
#endif
#if BIND_SDLTest_RandomSint8BoundaryValue_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDLTest_RandomSint8BoundaryValue", mrb_SDL_SDLTest_RandomSint8BoundaryValue, MRB_ARGS_ARG(SDLTest_RandomSint8BoundaryValue_REQUIRED_ARGC, SDLTest_RandomSint8BoundaryValue_OPTIONAL_ARGC));
#endif
#if BIND_SDLTest_RandomUint16_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDLTest_RandomUint16", mrb_SDL_SDLTest_RandomUint16, MRB_ARGS_ARG(SDLTest_RandomUint16_REQUIRED_ARGC, SDLTest_RandomUint16_OPTIONAL_ARGC));
#endif
#if BIND_SDLTest_RandomUint16BoundaryValue_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDLTest_RandomUint16BoundaryValue", mrb_SDL_SDLTest_RandomUint16BoundaryValue, MRB_ARGS_ARG(SDLTest_RandomUint16BoundaryValue_REQUIRED_ARGC, SDLTest_RandomUint16BoundaryValue_OPTIONAL_ARGC));
#endif
#if BIND_SDLTest_RandomUint32_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDLTest_RandomUint32", mrb_SDL_SDLTest_RandomUint32, MRB_ARGS_ARG(SDLTest_RandomUint32_REQUIRED_ARGC, SDLTest_RandomUint32_OPTIONAL_ARGC));
#endif
#if BIND_SDLTest_RandomUint32BoundaryValue_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDLTest_RandomUint32BoundaryValue", mrb_SDL_SDLTest_RandomUint32BoundaryValue, MRB_ARGS_ARG(SDLTest_RandomUint32BoundaryValue_REQUIRED_ARGC, SDLTest_RandomUint32BoundaryValue_OPTIONAL_ARGC));
#endif
#if BIND_SDLTest_RandomUint64_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDLTest_RandomUint64", mrb_SDL_SDLTest_RandomUint64, MRB_ARGS_ARG(SDLTest_RandomUint64_REQUIRED_ARGC, SDLTest_RandomUint64_OPTIONAL_ARGC));
#endif
#if BIND_SDLTest_RandomUint64BoundaryValue_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDLTest_RandomUint64BoundaryValue", mrb_SDL_SDLTest_RandomUint64BoundaryValue, MRB_ARGS_ARG(SDLTest_RandomUint64BoundaryValue_REQUIRED_ARGC, SDLTest_RandomUint64BoundaryValue_OPTIONAL_ARGC));
#endif
#if BIND_SDLTest_RandomUint8_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDLTest_RandomUint8", mrb_SDL_SDLTest_RandomUint8, MRB_ARGS_ARG(SDLTest_RandomUint8_REQUIRED_ARGC, SDLTest_RandomUint8_OPTIONAL_ARGC));
#endif
#if BIND_SDLTest_RandomUint8BoundaryValue_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDLTest_RandomUint8BoundaryValue", mrb_SDL_SDLTest_RandomUint8BoundaryValue, MRB_ARGS_ARG(SDLTest_RandomUint8BoundaryValue_REQUIRED_ARGC, SDLTest_RandomUint8BoundaryValue_OPTIONAL_ARGC));
#endif
#if BIND_SDLTest_RandomUnitDouble_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDLTest_RandomUnitDouble", mrb_SDL_SDLTest_RandomUnitDouble, MRB_ARGS_ARG(SDLTest_RandomUnitDouble_REQUIRED_ARGC, SDLTest_RandomUnitDouble_OPTIONAL_ARGC));
#endif
#if BIND_SDLTest_RandomUnitFloat_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDLTest_RandomUnitFloat", mrb_SDL_SDLTest_RandomUnitFloat, MRB_ARGS_ARG(SDLTest_RandomUnitFloat_REQUIRED_ARGC, SDLTest_RandomUnitFloat_OPTIONAL_ARGC));
#endif
#if BIND_SDLTest_ResetAssertSummary_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDLTest_ResetAssertSummary", mrb_SDL_SDLTest_ResetAssertSummary, MRB_ARGS_ARG(SDLTest_ResetAssertSummary_REQUIRED_ARGC, SDLTest_ResetAssertSummary_OPTIONAL_ARGC));
#endif
#if BIND_SDLTest_RunSuites_FUNCTION
  mrb_define_class_method(mrb, SDL_module, "SDLTest_RunSuites", mrb_SDL_SDLTest_RunSuites, MRB_ARGS_ARG(SDLTest_RunSuites_REQUIRED_ARGC, SDLTest_RunSuites_OPTIONAL_ARGC));
#endif

}

void mrb_mruby_sdl_gem_final(mrb_state* mrb){

}

#ifdef __cplusplus
}
#endif
