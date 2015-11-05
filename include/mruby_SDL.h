
#ifndef SDL_HEADER
#define SDL_HEADER

/*
 * RClass Macros
 * -------------
 *
 * Macros for retrieving the RClass*'s defined by this gem.
 */

#define SDL_module(mrb) mrb_module_get(mrb, "SDL")
#define SDLAtomicT_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "SDLAtomicT")
#define SDLDisplayMode_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "SDLDisplayMode")
#define SDLJoystickGUID_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "SDLJoystickGUID")
#define SDLMessageBoxButtonData_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "SDLMessageBoxButtonData")
#define SDLMessageBoxColor_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "SDLMessageBoxColor")
#define SDLMessageBoxColorScheme_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "SDLMessageBoxColorScheme")
#define SDLMessageBoxData_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "SDLMessageBoxData")
#define SDLTestCommonState_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "SDLTestCommonState")
#define SDLTestCrc32Context_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "SDLTestCrc32Context")
#define SDLTestMd5Context_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "SDLTestMd5Context")
#define SDLTestRandomContext_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "SDLTestRandomContext")
#define ClContext_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "ClContext")
#define ClEvent_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "ClEvent")
#define NSWindow_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "NSWindow")
#define SDLGameController_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "SDLGameController")
#define SDLHaptic_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "SDLHaptic")
#define SDLIconvT_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "SDLIconvT")
#define SDLJoystick_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "SDLJoystick")
#define SDLAssertData_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "SDLAssertData")
#define SDLAudioCVT_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "SDLAudioCVT")
#define SDLAudioSpec_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "SDLAudioSpec")
#define SDLBlitMap_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "SDLBlitMap")
#define SDLColor_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "SDLColor")
#define SDLCommonEvent_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "SDLCommonEvent")
#define SDLCond_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "SDLCond")
#define SDLControllerAxisEvent_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "SDLControllerAxisEvent")
#define SDLControllerButtonEvent_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "SDLControllerButtonEvent")
#define SDLControllerDeviceEvent_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "SDLControllerDeviceEvent")
#define SDLCursor_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "SDLCursor")
#define SDLDollarGestureEvent_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "SDLDollarGestureEvent")
#define SDLDropEvent_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "SDLDropEvent")
#define SDLFinger_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "SDLFinger")
#define SDLGameControllerButtonBind_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "SDLGameControllerButtonBind")
#define SDLHapticCondition_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "SDLHapticCondition")
#define SDLHapticConstant_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "SDLHapticConstant")
#define SDLHapticCustom_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "SDLHapticCustom")
#define SDLHapticDirection_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "SDLHapticDirection")
#define SDLHapticLeftRight_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "SDLHapticLeftRight")
#define SDLHapticPeriodic_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "SDLHapticPeriodic")
#define SDLHapticRamp_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "SDLHapticRamp")
#define SDLJoyAxisEvent_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "SDLJoyAxisEvent")
#define SDLJoyBallEvent_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "SDLJoyBallEvent")
#define SDLJoyButtonEvent_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "SDLJoyButtonEvent")
#define SDLJoyDeviceEvent_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "SDLJoyDeviceEvent")
#define SDLJoyHatEvent_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "SDLJoyHatEvent")
#define SDLKeyboardEvent_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "SDLKeyboardEvent")
#define SDLKeysym_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "SDLKeysym")
#define SDLMouseButtonEvent_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "SDLMouseButtonEvent")
#define SDLMouseMotionEvent_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "SDLMouseMotionEvent")
#define SDLMouseWheelEvent_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "SDLMouseWheelEvent")
#define SDLMultiGestureEvent_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "SDLMultiGestureEvent")
#define SDLMutex_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "SDLMutex")
#define SDLOSEvent_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "SDLOSEvent")
#define SDLPalette_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "SDLPalette")
#define SDLPixelFormat_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "SDLPixelFormat")
#define SDLPoint_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "SDLPoint")
#define SDLQuitEvent_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "SDLQuitEvent")
#define SDLRect_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "SDLRect")
#define SDLRenderer_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "SDLRenderer")
#define SDLRendererInfo_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "SDLRendererInfo")
#define SDLRWops_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "SDLRWops")
#define SDLSemaphore_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "SDLSemaphore")
#define SDLSurface_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "SDLSurface")
#define SDLSysWMEvent_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "SDLSysWMEvent")
#define SDLSysWMinfo_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "SDLSysWMinfo")
#define SDLSysWMmsg_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "SDLSysWMmsg")
#define SDLTextEditingEvent_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "SDLTextEditingEvent")
#define SDLTextInputEvent_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "SDLTextInputEvent")
#define SDLTexture_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "SDLTexture")
#define SDLThread_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "SDLThread")
#define SDLTouchFingerEvent_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "SDLTouchFingerEvent")
#define SDLUserEvent_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "SDLUserEvent")
#define SDLVersion_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "SDLVersion")
#define SDLWindow_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "SDLWindow")
#define SDLWindowEvent_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "SDLWindowEvent")
#define SDLWindowShapeMode_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "SDLWindowShapeMode")
#define SDLTestSurfaceImageS_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "SDLTestSurfaceImageS")
#define SDLTestTestCaseReference_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "SDLTestTestCaseReference")
#define SDLTestTestSuiteReference_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "SDLTestTestSuiteReference")

/*
 * Class Bindings Options
 * ----------------------
 *
 * Use these macros to configure the generated bindings for classes & structs.
 *
 * Key:
 *
 * BIND_{type name}_TYPE                     : Should we bind the class at all?
 * BIND_{type name}_INITIALIZE               : If the class is bound, should we also bind initialize to malloc a new instance on `new`?
 * BIND_{type name}_{field name}_FIELD       : If the class is bound, should we also bind this field?
 * BIND_{type name}_{function name}_FUNCTION : If the class is bound, should we also bind this member function?
 *
 * Fields & method are disabled by default so that bindings may be added and
 * tested incrementally. The generated bindings are a good start, but they
 * will need to be verified and, sometimes, customized.
 */

#define BIND_SDLAtomicT_TYPE TRUE
#define BIND_SDLAtomicT_INITIALIZE FALSE
#define BIND_SDLAtomicT_value_FIELD FALSE

#define BIND_SDLDisplayMode_TYPE TRUE
#define BIND_SDLDisplayMode_INITIALIZE FALSE
#define BIND_SDLDisplayMode_driverdata_FIELD FALSE
#define BIND_SDLDisplayMode_format_FIELD FALSE
#define BIND_SDLDisplayMode_h_FIELD FALSE
#define BIND_SDLDisplayMode_refresh_rate_FIELD FALSE
#define BIND_SDLDisplayMode_w_FIELD FALSE

#define BIND_SDLJoystickGUID_TYPE TRUE
#define BIND_SDLJoystickGUID_INITIALIZE FALSE
#define BIND_SDLJoystickGUID_data_FIELD FALSE

#define BIND_SDLMessageBoxButtonData_TYPE TRUE
#define BIND_SDLMessageBoxButtonData_INITIALIZE FALSE
#define BIND_SDLMessageBoxButtonData_buttonid_FIELD FALSE
#define BIND_SDLMessageBoxButtonData_flags_FIELD FALSE
#define BIND_SDLMessageBoxButtonData_text_FIELD FALSE

#define BIND_SDLMessageBoxColor_TYPE TRUE
#define BIND_SDLMessageBoxColor_INITIALIZE FALSE
#define BIND_SDLMessageBoxColor_b_FIELD FALSE
#define BIND_SDLMessageBoxColor_g_FIELD FALSE
#define BIND_SDLMessageBoxColor_r_FIELD FALSE

#define BIND_SDLMessageBoxColorScheme_TYPE TRUE
#define BIND_SDLMessageBoxColorScheme_INITIALIZE FALSE
#define BIND_SDLMessageBoxColorScheme_colors_FIELD FALSE

#define BIND_SDLMessageBoxData_TYPE TRUE
#define BIND_SDLMessageBoxData_INITIALIZE FALSE
#define BIND_SDLMessageBoxData_buttons_FIELD FALSE
#define BIND_SDLMessageBoxData_colorScheme_FIELD FALSE
#define BIND_SDLMessageBoxData_flags_FIELD FALSE
#define BIND_SDLMessageBoxData_message_FIELD FALSE
#define BIND_SDLMessageBoxData_numbuttons_FIELD FALSE
#define BIND_SDLMessageBoxData_title_FIELD FALSE
#define BIND_SDLMessageBoxData_window_FIELD FALSE

#define BIND_SDLTestCommonState_TYPE TRUE
#define BIND_SDLTestCommonState_INITIALIZE FALSE
#define BIND_SDLTestCommonState_argv_FIELD FALSE
#define BIND_SDLTestCommonState_audiodriver_FIELD FALSE
#define BIND_SDLTestCommonState_audiospec_FIELD FALSE
#define BIND_SDLTestCommonState_depth_FIELD FALSE
#define BIND_SDLTestCommonState_display_FIELD FALSE
#define BIND_SDLTestCommonState_flags_FIELD FALSE
#define BIND_SDLTestCommonState_gl_accelerated_FIELD FALSE
#define BIND_SDLTestCommonState_gl_accum_alpha_size_FIELD FALSE
#define BIND_SDLTestCommonState_gl_accum_blue_size_FIELD FALSE
#define BIND_SDLTestCommonState_gl_accum_green_size_FIELD FALSE
#define BIND_SDLTestCommonState_gl_accum_red_size_FIELD FALSE
#define BIND_SDLTestCommonState_gl_alpha_size_FIELD FALSE
#define BIND_SDLTestCommonState_gl_blue_size_FIELD FALSE
#define BIND_SDLTestCommonState_gl_buffer_size_FIELD FALSE
#define BIND_SDLTestCommonState_gl_debug_FIELD FALSE
#define BIND_SDLTestCommonState_gl_depth_size_FIELD FALSE
#define BIND_SDLTestCommonState_gl_double_buffer_FIELD FALSE
#define BIND_SDLTestCommonState_gl_green_size_FIELD FALSE
#define BIND_SDLTestCommonState_gl_major_version_FIELD FALSE
#define BIND_SDLTestCommonState_gl_minor_version_FIELD FALSE
#define BIND_SDLTestCommonState_gl_multisamplebuffers_FIELD FALSE
#define BIND_SDLTestCommonState_gl_multisamplesamples_FIELD FALSE
#define BIND_SDLTestCommonState_gl_profile_mask_FIELD FALSE
#define BIND_SDLTestCommonState_gl_red_size_FIELD FALSE
#define BIND_SDLTestCommonState_gl_retained_backing_FIELD FALSE
#define BIND_SDLTestCommonState_gl_stencil_size_FIELD FALSE
#define BIND_SDLTestCommonState_gl_stereo_FIELD FALSE
#define BIND_SDLTestCommonState_logical_h_FIELD FALSE
#define BIND_SDLTestCommonState_logical_w_FIELD FALSE
#define BIND_SDLTestCommonState_num_windows_FIELD FALSE
#define BIND_SDLTestCommonState_refresh_rate_FIELD FALSE
#define BIND_SDLTestCommonState_render_flags_FIELD FALSE
#define BIND_SDLTestCommonState_renderdriver_FIELD FALSE
#define BIND_SDLTestCommonState_renderers_FIELD FALSE
#define BIND_SDLTestCommonState_scale_FIELD FALSE
#define BIND_SDLTestCommonState_skip_renderer_FIELD FALSE
#define BIND_SDLTestCommonState_targets_FIELD FALSE
#define BIND_SDLTestCommonState_verbose_FIELD FALSE
#define BIND_SDLTestCommonState_videodriver_FIELD FALSE
#define BIND_SDLTestCommonState_window_flags_FIELD FALSE
#define BIND_SDLTestCommonState_window_h_FIELD FALSE
#define BIND_SDLTestCommonState_window_icon_FIELD FALSE
#define BIND_SDLTestCommonState_window_maxH_FIELD FALSE
#define BIND_SDLTestCommonState_window_maxW_FIELD FALSE
#define BIND_SDLTestCommonState_window_minH_FIELD FALSE
#define BIND_SDLTestCommonState_window_minW_FIELD FALSE
#define BIND_SDLTestCommonState_window_title_FIELD FALSE
#define BIND_SDLTestCommonState_window_w_FIELD FALSE
#define BIND_SDLTestCommonState_window_x_FIELD FALSE
#define BIND_SDLTestCommonState_window_y_FIELD FALSE
#define BIND_SDLTestCommonState_windows_FIELD FALSE

#define BIND_SDLTestCrc32Context_TYPE TRUE
#define BIND_SDLTestCrc32Context_INITIALIZE FALSE
#define BIND_SDLTestCrc32Context_crc32_table_FIELD FALSE

#define BIND_SDLTestMd5Context_TYPE TRUE
#define BIND_SDLTestMd5Context_INITIALIZE FALSE
#define BIND_SDLTestMd5Context_buf_FIELD FALSE
#define BIND_SDLTestMd5Context_digest_FIELD FALSE
#define BIND_SDLTestMd5Context_i_FIELD FALSE
#define BIND_SDLTestMd5Context_in_FIELD FALSE

#define BIND_SDLTestRandomContext_TYPE TRUE
#define BIND_SDLTestRandomContext_INITIALIZE FALSE
#define BIND_SDLTestRandomContext_a_FIELD FALSE
#define BIND_SDLTestRandomContext_ah_FIELD FALSE
#define BIND_SDLTestRandomContext_al_FIELD FALSE
#define BIND_SDLTestRandomContext_c_FIELD FALSE
#define BIND_SDLTestRandomContext_x_FIELD FALSE

#define BIND_ClContext_TYPE TRUE
#define BIND_ClContext_INITIALIZE FALSE

#define BIND_ClEvent_TYPE TRUE
#define BIND_ClEvent_INITIALIZE FALSE

#define BIND_NSWindow_TYPE TRUE
#define BIND_NSWindow_INITIALIZE FALSE

#define BIND_SDLGameController_TYPE TRUE
#define BIND_SDLGameController_INITIALIZE FALSE

#define BIND_SDLHaptic_TYPE TRUE
#define BIND_SDLHaptic_INITIALIZE FALSE

#define BIND_SDLIconvT_TYPE TRUE
#define BIND_SDLIconvT_INITIALIZE FALSE

#define BIND_SDLJoystick_TYPE TRUE
#define BIND_SDLJoystick_INITIALIZE FALSE

#define BIND_SDLAssertData_TYPE TRUE
#define BIND_SDLAssertData_INITIALIZE FALSE
#define BIND_SDLAssertData_always_ignore_FIELD FALSE
#define BIND_SDLAssertData_condition_FIELD FALSE
#define BIND_SDLAssertData_filename_FIELD FALSE
#define BIND_SDLAssertData_function_FIELD FALSE
#define BIND_SDLAssertData_linenum_FIELD FALSE
#define BIND_SDLAssertData_next_FIELD FALSE
#define BIND_SDLAssertData_trigger_count_FIELD FALSE

#define BIND_SDLAudioCVT_TYPE TRUE
#define BIND_SDLAudioCVT_INITIALIZE FALSE
#define BIND_SDLAudioCVT_buf_FIELD FALSE
#define BIND_SDLAudioCVT_dst_format_FIELD FALSE
#define BIND_SDLAudioCVT_filter_index_FIELD FALSE
#define BIND_SDLAudioCVT_filters_FIELD FALSE
#define BIND_SDLAudioCVT_len_FIELD FALSE
#define BIND_SDLAudioCVT_len_cvt_FIELD FALSE
#define BIND_SDLAudioCVT_len_mult_FIELD FALSE
#define BIND_SDLAudioCVT_len_ratio_FIELD FALSE
#define BIND_SDLAudioCVT_needed_FIELD FALSE
#define BIND_SDLAudioCVT_rate_incr_FIELD FALSE
#define BIND_SDLAudioCVT_src_format_FIELD FALSE

#define BIND_SDLAudioSpec_TYPE TRUE
#define BIND_SDLAudioSpec_INITIALIZE FALSE
#define BIND_SDLAudioSpec_callback_FIELD FALSE
#define BIND_SDLAudioSpec_channels_FIELD FALSE
#define BIND_SDLAudioSpec_format_FIELD FALSE
#define BIND_SDLAudioSpec_freq_FIELD FALSE
#define BIND_SDLAudioSpec_padding_FIELD FALSE
#define BIND_SDLAudioSpec_samples_FIELD FALSE
#define BIND_SDLAudioSpec_silence_FIELD FALSE
#define BIND_SDLAudioSpec_size_FIELD FALSE
#define BIND_SDLAudioSpec_userdata_FIELD FALSE

#define BIND_SDLBlitMap_TYPE TRUE
#define BIND_SDLBlitMap_INITIALIZE FALSE

#define BIND_SDLColor_TYPE TRUE
#define BIND_SDLColor_INITIALIZE FALSE
#define BIND_SDLColor_a_FIELD FALSE
#define BIND_SDLColor_b_FIELD FALSE
#define BIND_SDLColor_g_FIELD FALSE
#define BIND_SDLColor_r_FIELD FALSE

#define BIND_SDLCommonEvent_TYPE TRUE
#define BIND_SDLCommonEvent_INITIALIZE FALSE
#define BIND_SDLCommonEvent_timestamp_FIELD FALSE
#define BIND_SDLCommonEvent_type_FIELD FALSE

#define BIND_SDLCond_TYPE TRUE
#define BIND_SDLCond_INITIALIZE FALSE

#define BIND_SDLControllerAxisEvent_TYPE TRUE
#define BIND_SDLControllerAxisEvent_INITIALIZE FALSE
#define BIND_SDLControllerAxisEvent_axis_FIELD FALSE
#define BIND_SDLControllerAxisEvent_padding1_FIELD FALSE
#define BIND_SDLControllerAxisEvent_padding2_FIELD FALSE
#define BIND_SDLControllerAxisEvent_padding3_FIELD FALSE
#define BIND_SDLControllerAxisEvent_padding4_FIELD FALSE
#define BIND_SDLControllerAxisEvent_timestamp_FIELD FALSE
#define BIND_SDLControllerAxisEvent_type_FIELD FALSE
#define BIND_SDLControllerAxisEvent_value_FIELD FALSE
#define BIND_SDLControllerAxisEvent_which_FIELD FALSE

#define BIND_SDLControllerButtonEvent_TYPE TRUE
#define BIND_SDLControllerButtonEvent_INITIALIZE FALSE
#define BIND_SDLControllerButtonEvent_button_FIELD FALSE
#define BIND_SDLControllerButtonEvent_padding1_FIELD FALSE
#define BIND_SDLControllerButtonEvent_padding2_FIELD FALSE
#define BIND_SDLControllerButtonEvent_state_FIELD FALSE
#define BIND_SDLControllerButtonEvent_timestamp_FIELD FALSE
#define BIND_SDLControllerButtonEvent_type_FIELD FALSE
#define BIND_SDLControllerButtonEvent_which_FIELD FALSE

#define BIND_SDLControllerDeviceEvent_TYPE TRUE
#define BIND_SDLControllerDeviceEvent_INITIALIZE FALSE
#define BIND_SDLControllerDeviceEvent_timestamp_FIELD FALSE
#define BIND_SDLControllerDeviceEvent_type_FIELD FALSE
#define BIND_SDLControllerDeviceEvent_which_FIELD FALSE

#define BIND_SDLCursor_TYPE TRUE
#define BIND_SDLCursor_INITIALIZE FALSE

#define BIND_SDLDollarGestureEvent_TYPE TRUE
#define BIND_SDLDollarGestureEvent_INITIALIZE FALSE
#define BIND_SDLDollarGestureEvent_error_FIELD FALSE
#define BIND_SDLDollarGestureEvent_gestureId_FIELD FALSE
#define BIND_SDLDollarGestureEvent_numFingers_FIELD FALSE
#define BIND_SDLDollarGestureEvent_timestamp_FIELD FALSE
#define BIND_SDLDollarGestureEvent_touchId_FIELD FALSE
#define BIND_SDLDollarGestureEvent_type_FIELD FALSE
#define BIND_SDLDollarGestureEvent_x_FIELD FALSE
#define BIND_SDLDollarGestureEvent_y_FIELD FALSE

#define BIND_SDLDropEvent_TYPE TRUE
#define BIND_SDLDropEvent_INITIALIZE FALSE
#define BIND_SDLDropEvent_file_FIELD FALSE
#define BIND_SDLDropEvent_timestamp_FIELD FALSE
#define BIND_SDLDropEvent_type_FIELD FALSE

#define BIND_SDLFinger_TYPE TRUE
#define BIND_SDLFinger_INITIALIZE FALSE
#define BIND_SDLFinger_id_FIELD FALSE
#define BIND_SDLFinger_pressure_FIELD FALSE
#define BIND_SDLFinger_x_FIELD FALSE
#define BIND_SDLFinger_y_FIELD FALSE

#define BIND_SDLGameControllerButtonBind_TYPE TRUE
#define BIND_SDLGameControllerButtonBind_INITIALIZE FALSE
#define BIND_SDLGameControllerButtonBind_bindType_FIELD FALSE
#define BIND_SDLGameControllerButtonBind_value_FIELD FALSE

#define BIND_SDLHapticCondition_TYPE TRUE
#define BIND_SDLHapticCondition_INITIALIZE FALSE
#define BIND_SDLHapticCondition_button_FIELD FALSE
#define BIND_SDLHapticCondition_center_FIELD FALSE
#define BIND_SDLHapticCondition_deadband_FIELD FALSE
#define BIND_SDLHapticCondition_delay_FIELD FALSE
#define BIND_SDLHapticCondition_direction_FIELD FALSE
#define BIND_SDLHapticCondition_interval_FIELD FALSE
#define BIND_SDLHapticCondition_left_coeff_FIELD FALSE
#define BIND_SDLHapticCondition_left_sat_FIELD FALSE
#define BIND_SDLHapticCondition_length_FIELD FALSE
#define BIND_SDLHapticCondition_right_coeff_FIELD FALSE
#define BIND_SDLHapticCondition_right_sat_FIELD FALSE
#define BIND_SDLHapticCondition_type_FIELD FALSE

#define BIND_SDLHapticConstant_TYPE TRUE
#define BIND_SDLHapticConstant_INITIALIZE FALSE
#define BIND_SDLHapticConstant_attack_length_FIELD FALSE
#define BIND_SDLHapticConstant_attack_level_FIELD FALSE
#define BIND_SDLHapticConstant_button_FIELD FALSE
#define BIND_SDLHapticConstant_delay_FIELD FALSE
#define BIND_SDLHapticConstant_direction_FIELD FALSE
#define BIND_SDLHapticConstant_fade_length_FIELD FALSE
#define BIND_SDLHapticConstant_fade_level_FIELD FALSE
#define BIND_SDLHapticConstant_interval_FIELD FALSE
#define BIND_SDLHapticConstant_length_FIELD FALSE
#define BIND_SDLHapticConstant_level_FIELD FALSE
#define BIND_SDLHapticConstant_type_FIELD FALSE

#define BIND_SDLHapticCustom_TYPE TRUE
#define BIND_SDLHapticCustom_INITIALIZE FALSE
#define BIND_SDLHapticCustom_attack_length_FIELD FALSE
#define BIND_SDLHapticCustom_attack_level_FIELD FALSE
#define BIND_SDLHapticCustom_button_FIELD FALSE
#define BIND_SDLHapticCustom_channels_FIELD FALSE
#define BIND_SDLHapticCustom_data_FIELD FALSE
#define BIND_SDLHapticCustom_delay_FIELD FALSE
#define BIND_SDLHapticCustom_direction_FIELD FALSE
#define BIND_SDLHapticCustom_fade_length_FIELD FALSE
#define BIND_SDLHapticCustom_fade_level_FIELD FALSE
#define BIND_SDLHapticCustom_interval_FIELD FALSE
#define BIND_SDLHapticCustom_length_FIELD FALSE
#define BIND_SDLHapticCustom_period_FIELD FALSE
#define BIND_SDLHapticCustom_samples_FIELD FALSE
#define BIND_SDLHapticCustom_type_FIELD FALSE

#define BIND_SDLHapticDirection_TYPE TRUE
#define BIND_SDLHapticDirection_INITIALIZE FALSE
#define BIND_SDLHapticDirection_dir_FIELD FALSE
#define BIND_SDLHapticDirection_type_FIELD FALSE

#define BIND_SDLHapticLeftRight_TYPE TRUE
#define BIND_SDLHapticLeftRight_INITIALIZE FALSE
#define BIND_SDLHapticLeftRight_large_magnitude_FIELD FALSE
#define BIND_SDLHapticLeftRight_length_FIELD FALSE
#define BIND_SDLHapticLeftRight_small_magnitude_FIELD FALSE
#define BIND_SDLHapticLeftRight_type_FIELD FALSE

#define BIND_SDLHapticPeriodic_TYPE TRUE
#define BIND_SDLHapticPeriodic_INITIALIZE FALSE
#define BIND_SDLHapticPeriodic_attack_length_FIELD FALSE
#define BIND_SDLHapticPeriodic_attack_level_FIELD FALSE
#define BIND_SDLHapticPeriodic_button_FIELD FALSE
#define BIND_SDLHapticPeriodic_delay_FIELD FALSE
#define BIND_SDLHapticPeriodic_direction_FIELD FALSE
#define BIND_SDLHapticPeriodic_fade_length_FIELD FALSE
#define BIND_SDLHapticPeriodic_fade_level_FIELD FALSE
#define BIND_SDLHapticPeriodic_interval_FIELD FALSE
#define BIND_SDLHapticPeriodic_length_FIELD FALSE
#define BIND_SDLHapticPeriodic_magnitude_FIELD FALSE
#define BIND_SDLHapticPeriodic_offset_FIELD FALSE
#define BIND_SDLHapticPeriodic_period_FIELD FALSE
#define BIND_SDLHapticPeriodic_phase_FIELD FALSE
#define BIND_SDLHapticPeriodic_type_FIELD FALSE

#define BIND_SDLHapticRamp_TYPE TRUE
#define BIND_SDLHapticRamp_INITIALIZE FALSE
#define BIND_SDLHapticRamp_attack_length_FIELD FALSE
#define BIND_SDLHapticRamp_attack_level_FIELD FALSE
#define BIND_SDLHapticRamp_button_FIELD FALSE
#define BIND_SDLHapticRamp_delay_FIELD FALSE
#define BIND_SDLHapticRamp_direction_FIELD FALSE
#define BIND_SDLHapticRamp_end_FIELD FALSE
#define BIND_SDLHapticRamp_fade_length_FIELD FALSE
#define BIND_SDLHapticRamp_fade_level_FIELD FALSE
#define BIND_SDLHapticRamp_interval_FIELD FALSE
#define BIND_SDLHapticRamp_length_FIELD FALSE
#define BIND_SDLHapticRamp_start_FIELD FALSE
#define BIND_SDLHapticRamp_type_FIELD FALSE

#define BIND_SDLJoyAxisEvent_TYPE TRUE
#define BIND_SDLJoyAxisEvent_INITIALIZE FALSE
#define BIND_SDLJoyAxisEvent_axis_FIELD FALSE
#define BIND_SDLJoyAxisEvent_padding1_FIELD FALSE
#define BIND_SDLJoyAxisEvent_padding2_FIELD FALSE
#define BIND_SDLJoyAxisEvent_padding3_FIELD FALSE
#define BIND_SDLJoyAxisEvent_padding4_FIELD FALSE
#define BIND_SDLJoyAxisEvent_timestamp_FIELD FALSE
#define BIND_SDLJoyAxisEvent_type_FIELD FALSE
#define BIND_SDLJoyAxisEvent_value_FIELD FALSE
#define BIND_SDLJoyAxisEvent_which_FIELD FALSE

#define BIND_SDLJoyBallEvent_TYPE TRUE
#define BIND_SDLJoyBallEvent_INITIALIZE FALSE
#define BIND_SDLJoyBallEvent_ball_FIELD FALSE
#define BIND_SDLJoyBallEvent_padding1_FIELD FALSE
#define BIND_SDLJoyBallEvent_padding2_FIELD FALSE
#define BIND_SDLJoyBallEvent_padding3_FIELD FALSE
#define BIND_SDLJoyBallEvent_timestamp_FIELD FALSE
#define BIND_SDLJoyBallEvent_type_FIELD FALSE
#define BIND_SDLJoyBallEvent_which_FIELD FALSE
#define BIND_SDLJoyBallEvent_xrel_FIELD FALSE
#define BIND_SDLJoyBallEvent_yrel_FIELD FALSE

#define BIND_SDLJoyButtonEvent_TYPE TRUE
#define BIND_SDLJoyButtonEvent_INITIALIZE FALSE
#define BIND_SDLJoyButtonEvent_button_FIELD FALSE
#define BIND_SDLJoyButtonEvent_padding1_FIELD FALSE
#define BIND_SDLJoyButtonEvent_padding2_FIELD FALSE
#define BIND_SDLJoyButtonEvent_state_FIELD FALSE
#define BIND_SDLJoyButtonEvent_timestamp_FIELD FALSE
#define BIND_SDLJoyButtonEvent_type_FIELD FALSE
#define BIND_SDLJoyButtonEvent_which_FIELD FALSE

#define BIND_SDLJoyDeviceEvent_TYPE TRUE
#define BIND_SDLJoyDeviceEvent_INITIALIZE FALSE
#define BIND_SDLJoyDeviceEvent_timestamp_FIELD FALSE
#define BIND_SDLJoyDeviceEvent_type_FIELD FALSE
#define BIND_SDLJoyDeviceEvent_which_FIELD FALSE

#define BIND_SDLJoyHatEvent_TYPE TRUE
#define BIND_SDLJoyHatEvent_INITIALIZE FALSE
#define BIND_SDLJoyHatEvent_hat_FIELD FALSE
#define BIND_SDLJoyHatEvent_padding1_FIELD FALSE
#define BIND_SDLJoyHatEvent_padding2_FIELD FALSE
#define BIND_SDLJoyHatEvent_timestamp_FIELD FALSE
#define BIND_SDLJoyHatEvent_type_FIELD FALSE
#define BIND_SDLJoyHatEvent_value_FIELD FALSE
#define BIND_SDLJoyHatEvent_which_FIELD FALSE

#define BIND_SDLKeyboardEvent_TYPE TRUE
#define BIND_SDLKeyboardEvent_INITIALIZE FALSE
#define BIND_SDLKeyboardEvent_keysym_FIELD FALSE
#define BIND_SDLKeyboardEvent_padding2_FIELD FALSE
#define BIND_SDLKeyboardEvent_padding3_FIELD FALSE
#define BIND_SDLKeyboardEvent_repeat_FIELD FALSE
#define BIND_SDLKeyboardEvent_state_FIELD FALSE
#define BIND_SDLKeyboardEvent_timestamp_FIELD FALSE
#define BIND_SDLKeyboardEvent_type_FIELD FALSE
#define BIND_SDLKeyboardEvent_windowID_FIELD FALSE

#define BIND_SDLKeysym_TYPE TRUE
#define BIND_SDLKeysym_INITIALIZE FALSE
#define BIND_SDLKeysym_mod_FIELD FALSE
#define BIND_SDLKeysym_scancode_FIELD FALSE
#define BIND_SDLKeysym_sym_FIELD FALSE
#define BIND_SDLKeysym_unused_FIELD FALSE

#define BIND_SDLMouseButtonEvent_TYPE TRUE
#define BIND_SDLMouseButtonEvent_INITIALIZE FALSE
#define BIND_SDLMouseButtonEvent_button_FIELD FALSE
#define BIND_SDLMouseButtonEvent_clicks_FIELD FALSE
#define BIND_SDLMouseButtonEvent_padding1_FIELD FALSE
#define BIND_SDLMouseButtonEvent_state_FIELD FALSE
#define BIND_SDLMouseButtonEvent_timestamp_FIELD FALSE
#define BIND_SDLMouseButtonEvent_type_FIELD FALSE
#define BIND_SDLMouseButtonEvent_which_FIELD FALSE
#define BIND_SDLMouseButtonEvent_windowID_FIELD FALSE
#define BIND_SDLMouseButtonEvent_x_FIELD FALSE
#define BIND_SDLMouseButtonEvent_y_FIELD FALSE

#define BIND_SDLMouseMotionEvent_TYPE TRUE
#define BIND_SDLMouseMotionEvent_INITIALIZE FALSE
#define BIND_SDLMouseMotionEvent_state_FIELD FALSE
#define BIND_SDLMouseMotionEvent_timestamp_FIELD FALSE
#define BIND_SDLMouseMotionEvent_type_FIELD FALSE
#define BIND_SDLMouseMotionEvent_which_FIELD FALSE
#define BIND_SDLMouseMotionEvent_windowID_FIELD FALSE
#define BIND_SDLMouseMotionEvent_x_FIELD FALSE
#define BIND_SDLMouseMotionEvent_xrel_FIELD FALSE
#define BIND_SDLMouseMotionEvent_y_FIELD FALSE
#define BIND_SDLMouseMotionEvent_yrel_FIELD FALSE

#define BIND_SDLMouseWheelEvent_TYPE TRUE
#define BIND_SDLMouseWheelEvent_INITIALIZE FALSE
#define BIND_SDLMouseWheelEvent_timestamp_FIELD FALSE
#define BIND_SDLMouseWheelEvent_type_FIELD FALSE
#define BIND_SDLMouseWheelEvent_which_FIELD FALSE
#define BIND_SDLMouseWheelEvent_windowID_FIELD FALSE
#define BIND_SDLMouseWheelEvent_x_FIELD FALSE
#define BIND_SDLMouseWheelEvent_y_FIELD FALSE

#define BIND_SDLMultiGestureEvent_TYPE TRUE
#define BIND_SDLMultiGestureEvent_INITIALIZE FALSE
#define BIND_SDLMultiGestureEvent_dDist_FIELD FALSE
#define BIND_SDLMultiGestureEvent_dTheta_FIELD FALSE
#define BIND_SDLMultiGestureEvent_numFingers_FIELD FALSE
#define BIND_SDLMultiGestureEvent_padding_FIELD FALSE
#define BIND_SDLMultiGestureEvent_timestamp_FIELD FALSE
#define BIND_SDLMultiGestureEvent_touchId_FIELD FALSE
#define BIND_SDLMultiGestureEvent_type_FIELD FALSE
#define BIND_SDLMultiGestureEvent_x_FIELD FALSE
#define BIND_SDLMultiGestureEvent_y_FIELD FALSE

#define BIND_SDLMutex_TYPE TRUE
#define BIND_SDLMutex_INITIALIZE FALSE

#define BIND_SDLOSEvent_TYPE TRUE
#define BIND_SDLOSEvent_INITIALIZE FALSE
#define BIND_SDLOSEvent_timestamp_FIELD FALSE
#define BIND_SDLOSEvent_type_FIELD FALSE

#define BIND_SDLPalette_TYPE TRUE
#define BIND_SDLPalette_INITIALIZE FALSE
#define BIND_SDLPalette_colors_FIELD FALSE
#define BIND_SDLPalette_ncolors_FIELD FALSE
#define BIND_SDLPalette_refcount_FIELD FALSE
#define BIND_SDLPalette_version_FIELD FALSE

#define BIND_SDLPixelFormat_TYPE TRUE
#define BIND_SDLPixelFormat_INITIALIZE FALSE
#define BIND_SDLPixelFormat_Aloss_FIELD FALSE
#define BIND_SDLPixelFormat_Amask_FIELD FALSE
#define BIND_SDLPixelFormat_Ashift_FIELD FALSE
#define BIND_SDLPixelFormat_BitsPerPixel_FIELD FALSE
#define BIND_SDLPixelFormat_Bloss_FIELD FALSE
#define BIND_SDLPixelFormat_Bmask_FIELD FALSE
#define BIND_SDLPixelFormat_Bshift_FIELD FALSE
#define BIND_SDLPixelFormat_BytesPerPixel_FIELD FALSE
#define BIND_SDLPixelFormat_Gloss_FIELD FALSE
#define BIND_SDLPixelFormat_Gmask_FIELD FALSE
#define BIND_SDLPixelFormat_Gshift_FIELD FALSE
#define BIND_SDLPixelFormat_Rloss_FIELD FALSE
#define BIND_SDLPixelFormat_Rmask_FIELD FALSE
#define BIND_SDLPixelFormat_Rshift_FIELD FALSE
#define BIND_SDLPixelFormat_format_FIELD FALSE
#define BIND_SDLPixelFormat_next_FIELD FALSE
#define BIND_SDLPixelFormat_padding_FIELD FALSE
#define BIND_SDLPixelFormat_palette_FIELD FALSE
#define BIND_SDLPixelFormat_refcount_FIELD FALSE

#define BIND_SDLPoint_TYPE TRUE
#define BIND_SDLPoint_INITIALIZE FALSE
#define BIND_SDLPoint_x_FIELD FALSE
#define BIND_SDLPoint_y_FIELD FALSE

#define BIND_SDLQuitEvent_TYPE TRUE
#define BIND_SDLQuitEvent_INITIALIZE FALSE
#define BIND_SDLQuitEvent_timestamp_FIELD FALSE
#define BIND_SDLQuitEvent_type_FIELD FALSE

#define BIND_SDLRect_TYPE TRUE
#define BIND_SDLRect_INITIALIZE FALSE
#define BIND_SDLRect_h_FIELD FALSE
#define BIND_SDLRect_w_FIELD FALSE
#define BIND_SDLRect_x_FIELD FALSE
#define BIND_SDLRect_y_FIELD FALSE

#define BIND_SDLRenderer_TYPE TRUE
#define BIND_SDLRenderer_INITIALIZE FALSE

#define BIND_SDLRendererInfo_TYPE TRUE
#define BIND_SDLRendererInfo_INITIALIZE FALSE
#define BIND_SDLRendererInfo_flags_FIELD FALSE
#define BIND_SDLRendererInfo_max_texture_height_FIELD FALSE
#define BIND_SDLRendererInfo_max_texture_width_FIELD FALSE
#define BIND_SDLRendererInfo_name_FIELD FALSE
#define BIND_SDLRendererInfo_num_texture_formats_FIELD FALSE
#define BIND_SDLRendererInfo_texture_formats_FIELD FALSE

#define BIND_SDLRWops_TYPE TRUE
#define BIND_SDLRWops_INITIALIZE FALSE
#define BIND_SDLRWops_close_FIELD FALSE
#define BIND_SDLRWops_hidden_FIELD FALSE
#define BIND_SDLRWops_read_FIELD FALSE
#define BIND_SDLRWops_seek_FIELD FALSE
#define BIND_SDLRWops_size_FIELD FALSE
#define BIND_SDLRWops_type_FIELD FALSE
#define BIND_SDLRWops_write_FIELD FALSE

#define BIND_SDLSemaphore_TYPE TRUE
#define BIND_SDLSemaphore_INITIALIZE FALSE

#define BIND_SDLSurface_TYPE TRUE
#define BIND_SDLSurface_INITIALIZE FALSE
#define BIND_SDLSurface_clip_rect_FIELD FALSE
#define BIND_SDLSurface_flags_FIELD FALSE
#define BIND_SDLSurface_format_FIELD FALSE
#define BIND_SDLSurface_h_FIELD FALSE
#define BIND_SDLSurface_lock_data_FIELD FALSE
#define BIND_SDLSurface_locked_FIELD FALSE
#define BIND_SDLSurface_map_FIELD FALSE
#define BIND_SDLSurface_pitch_FIELD FALSE
#define BIND_SDLSurface_pixels_FIELD FALSE
#define BIND_SDLSurface_refcount_FIELD FALSE
#define BIND_SDLSurface_userdata_FIELD FALSE
#define BIND_SDLSurface_w_FIELD FALSE

#define BIND_SDLSysWMEvent_TYPE TRUE
#define BIND_SDLSysWMEvent_INITIALIZE FALSE
#define BIND_SDLSysWMEvent_msg_FIELD FALSE
#define BIND_SDLSysWMEvent_timestamp_FIELD FALSE
#define BIND_SDLSysWMEvent_type_FIELD FALSE

#define BIND_SDLSysWMinfo_TYPE TRUE
#define BIND_SDLSysWMinfo_INITIALIZE FALSE
#define BIND_SDLSysWMinfo_info_FIELD FALSE
#define BIND_SDLSysWMinfo_subsystem_FIELD FALSE
#define BIND_SDLSysWMinfo_version_FIELD FALSE

#define BIND_SDLSysWMmsg_TYPE TRUE
#define BIND_SDLSysWMmsg_INITIALIZE FALSE
#define BIND_SDLSysWMmsg_msg_FIELD FALSE
#define BIND_SDLSysWMmsg_subsystem_FIELD FALSE
#define BIND_SDLSysWMmsg_version_FIELD FALSE

#define BIND_SDLTextEditingEvent_TYPE TRUE
#define BIND_SDLTextEditingEvent_INITIALIZE FALSE
#define BIND_SDLTextEditingEvent_length_FIELD FALSE
#define BIND_SDLTextEditingEvent_start_FIELD FALSE
#define BIND_SDLTextEditingEvent_text_FIELD FALSE
#define BIND_SDLTextEditingEvent_timestamp_FIELD FALSE
#define BIND_SDLTextEditingEvent_type_FIELD FALSE
#define BIND_SDLTextEditingEvent_windowID_FIELD FALSE

#define BIND_SDLTextInputEvent_TYPE TRUE
#define BIND_SDLTextInputEvent_INITIALIZE FALSE
#define BIND_SDLTextInputEvent_text_FIELD FALSE
#define BIND_SDLTextInputEvent_timestamp_FIELD FALSE
#define BIND_SDLTextInputEvent_type_FIELD FALSE
#define BIND_SDLTextInputEvent_windowID_FIELD FALSE

#define BIND_SDLTexture_TYPE TRUE
#define BIND_SDLTexture_INITIALIZE FALSE

#define BIND_SDLThread_TYPE TRUE
#define BIND_SDLThread_INITIALIZE FALSE

#define BIND_SDLTouchFingerEvent_TYPE TRUE
#define BIND_SDLTouchFingerEvent_INITIALIZE FALSE
#define BIND_SDLTouchFingerEvent_dx_FIELD FALSE
#define BIND_SDLTouchFingerEvent_dy_FIELD FALSE
#define BIND_SDLTouchFingerEvent_fingerId_FIELD FALSE
#define BIND_SDLTouchFingerEvent_pressure_FIELD FALSE
#define BIND_SDLTouchFingerEvent_timestamp_FIELD FALSE
#define BIND_SDLTouchFingerEvent_touchId_FIELD FALSE
#define BIND_SDLTouchFingerEvent_type_FIELD FALSE
#define BIND_SDLTouchFingerEvent_x_FIELD FALSE
#define BIND_SDLTouchFingerEvent_y_FIELD FALSE

#define BIND_SDLUserEvent_TYPE TRUE
#define BIND_SDLUserEvent_INITIALIZE FALSE
#define BIND_SDLUserEvent_code_FIELD FALSE
#define BIND_SDLUserEvent_data1_FIELD FALSE
#define BIND_SDLUserEvent_data2_FIELD FALSE
#define BIND_SDLUserEvent_timestamp_FIELD FALSE
#define BIND_SDLUserEvent_type_FIELD FALSE
#define BIND_SDLUserEvent_windowID_FIELD FALSE

#define BIND_SDLVersion_TYPE TRUE
#define BIND_SDLVersion_INITIALIZE FALSE
#define BIND_SDLVersion_major_FIELD FALSE
#define BIND_SDLVersion_minor_FIELD FALSE
#define BIND_SDLVersion_patch_FIELD FALSE

#define BIND_SDLWindow_TYPE TRUE
#define BIND_SDLWindow_INITIALIZE FALSE

#define BIND_SDLWindowEvent_TYPE TRUE
#define BIND_SDLWindowEvent_INITIALIZE FALSE
#define BIND_SDLWindowEvent_data1_FIELD FALSE
#define BIND_SDLWindowEvent_data2_FIELD FALSE
#define BIND_SDLWindowEvent_event_FIELD FALSE
#define BIND_SDLWindowEvent_padding1_FIELD FALSE
#define BIND_SDLWindowEvent_padding2_FIELD FALSE
#define BIND_SDLWindowEvent_padding3_FIELD FALSE
#define BIND_SDLWindowEvent_timestamp_FIELD FALSE
#define BIND_SDLWindowEvent_type_FIELD FALSE
#define BIND_SDLWindowEvent_windowID_FIELD FALSE

#define BIND_SDLWindowShapeMode_TYPE TRUE
#define BIND_SDLWindowShapeMode_INITIALIZE FALSE
#define BIND_SDLWindowShapeMode_mode_FIELD FALSE
#define BIND_SDLWindowShapeMode_parameters_FIELD FALSE

#define BIND_SDLTestSurfaceImageS_TYPE TRUE
#define BIND_SDLTestSurfaceImageS_INITIALIZE FALSE
#define BIND_SDLTestSurfaceImageS_bytes_per_pixel_FIELD FALSE
#define BIND_SDLTestSurfaceImageS_height_FIELD FALSE
#define BIND_SDLTestSurfaceImageS_pixel_data_FIELD FALSE
#define BIND_SDLTestSurfaceImageS_width_FIELD FALSE

#define BIND_SDLTestTestCaseReference_TYPE TRUE
#define BIND_SDLTestTestCaseReference_INITIALIZE FALSE
#define BIND_SDLTestTestCaseReference_description_FIELD FALSE
#define BIND_SDLTestTestCaseReference_enabled_FIELD FALSE
#define BIND_SDLTestTestCaseReference_name_FIELD FALSE
#define BIND_SDLTestTestCaseReference_testCase_FIELD FALSE

#define BIND_SDLTestTestSuiteReference_TYPE TRUE
#define BIND_SDLTestTestSuiteReference_INITIALIZE FALSE
#define BIND_SDLTestTestSuiteReference_name_FIELD FALSE
#define BIND_SDLTestTestSuiteReference_testCases_FIELD FALSE
#define BIND_SDLTestTestSuiteReference_testSetUp_FIELD FALSE
#define BIND_SDLTestTestSuiteReference_testTearDown_FIELD FALSE


/*
 * Global Function Options
 * -----------------------
 *
 * Set these macros to TRUE to enable bindings for these functions.
 * They are disabled initially so that bindings may be added and tested
 * incrementally. The generated bindings are a good start, but they
 * will need to be verified and, sometimes, customized.
 */

 // #define BIND_SDLTest_AssertCheck_FUNCTION FALSE
 // #define BIND_SDLTest_AssertCheck_FUNCTION TRUE
 // #define BIND_SDLTest_AssertPass_FUNCTION FALSE
 // #define BIND_SDLTest_AssertPass_FUNCTION TRUE
 // #define BIND_SDLTest_AssertSummaryToTestResult_FUNCTION FALSE
 // #define BIND_SDLTest_AssertSummaryToTestResult_FUNCTION TRUE
 // #define BIND_SDLTest_Assert_FUNCTION FALSE
 // #define BIND_SDLTest_Assert_FUNCTION TRUE
 // #define BIND_SDLTest_CommonArg_FUNCTION FALSE
 // #define BIND_SDLTest_CommonArg_FUNCTION TRUE
 // #define BIND_SDLTest_CommonCreateState_FUNCTION FALSE
 // #define BIND_SDLTest_CommonEvent_FUNCTION FALSE
 // #define BIND_SDLTest_CommonInit_FUNCTION FALSE
 // #define BIND_SDLTest_CommonInit_FUNCTION TRUE
 // #define BIND_SDLTest_CommonQuit_FUNCTION FALSE
 // #define BIND_SDLTest_CommonQuit_FUNCTION TRUE
 // #define BIND_SDLTest_CommonUsage_FUNCTION FALSE
 // #define BIND_SDLTest_CommonUsage_FUNCTION TRUE
 // #define BIND_SDLTest_CompareSurfaces_FUNCTION FALSE
 // #define BIND_SDLTest_CompareSurfaces_FUNCTION TRUE
 // #define BIND_SDLTest_Crc32CalcBuffer_FUNCTION FALSE
 // #define BIND_SDLTest_Crc32CalcEnd_FUNCTION FALSE
 // #define BIND_SDLTest_Crc32CalcStart_FUNCTION FALSE
 // #define BIND_SDLTest_Crc32Done_FUNCTION FALSE
 // #define BIND_SDLTest_Crc32Done_FUNCTION TRUE
 // #define BIND_SDLTest_Crc32Init_FUNCTION FALSE
 // #define BIND_SDLTest_Crc32Init_FUNCTION TRUE
 // #define BIND_SDLTest_DrawCharacter_FUNCTION FALSE
 // #define BIND_SDLTest_DrawString_FUNCTION FALSE
 // #define BIND_SDLTest_FuzzerInit_FUNCTION FALSE
 // #define BIND_SDLTest_FuzzerInit_FUNCTION TRUE
 // #define BIND_SDLTest_GetFuzzerInvocationCount_FUNCTION FALSE
 // #define BIND_SDLTest_GetFuzzerInvocationCount_FUNCTION TRUE
 // #define BIND_SDLTest_ImageBlitAlpha_FUNCTION FALSE
 // #define BIND_SDLTest_ImageBlitAlpha_FUNCTION TRUE
 // #define BIND_SDLTest_ImageBlitBlendAdd_FUNCTION FALSE
 // #define BIND_SDLTest_ImageBlitBlendAdd_FUNCTION TRUE
 // #define BIND_SDLTest_ImageBlitBlendAll_FUNCTION FALSE
 // #define BIND_SDLTest_ImageBlitBlendAll_FUNCTION TRUE
 // #define BIND_SDLTest_ImageBlitBlendMod_FUNCTION FALSE
 // #define BIND_SDLTest_ImageBlitBlendMod_FUNCTION TRUE
 // #define BIND_SDLTest_ImageBlitBlendNone_FUNCTION FALSE
 // #define BIND_SDLTest_ImageBlitBlendNone_FUNCTION TRUE
 // #define BIND_SDLTest_ImageBlitBlend_FUNCTION FALSE
 // #define BIND_SDLTest_ImageBlitBlend_FUNCTION TRUE
 // #define BIND_SDLTest_ImageBlitColor_FUNCTION FALSE
 // #define BIND_SDLTest_ImageBlitColor_FUNCTION TRUE
 // #define BIND_SDLTest_ImageBlit_FUNCTION FALSE
 // #define BIND_SDLTest_ImageBlit_FUNCTION TRUE
 // #define BIND_SDLTest_ImageFace_FUNCTION FALSE
 // #define BIND_SDLTest_ImageFace_FUNCTION TRUE
 // #define BIND_SDLTest_ImagePrimitivesBlend_FUNCTION FALSE
 // #define BIND_SDLTest_ImagePrimitivesBlend_FUNCTION TRUE
 // #define BIND_SDLTest_ImagePrimitives_FUNCTION FALSE
 // #define BIND_SDLTest_ImagePrimitives_FUNCTION TRUE
 // #define BIND_SDLTest_LogAssertSummary_FUNCTION FALSE
 // #define BIND_SDLTest_LogAssertSummary_FUNCTION TRUE
 // #define BIND_SDLTest_LogError_FUNCTION FALSE
 // #define BIND_SDLTest_LogError_FUNCTION TRUE
 // #define BIND_SDLTest_Log_FUNCTION FALSE
 // #define BIND_SDLTest_Log_FUNCTION TRUE
 // #define BIND_SDLTest_Md5Final_FUNCTION FALSE
 // #define BIND_SDLTest_Md5Final_FUNCTION TRUE
 // #define BIND_SDLTest_Md5Init_FUNCTION FALSE
 // #define BIND_SDLTest_Md5Init_FUNCTION TRUE
 // #define BIND_SDLTest_Md5Update_FUNCTION FALSE
 // #define BIND_SDLTest_RandomAsciiStringOfSize_FUNCTION FALSE
 // #define BIND_SDLTest_RandomAsciiStringOfSize_FUNCTION TRUE
 // #define BIND_SDLTest_RandomAsciiStringWithMaximumLength_FUNCTION FALSE
 // #define BIND_SDLTest_RandomAsciiStringWithMaximumLength_FUNCTION TRUE
 // #define BIND_SDLTest_RandomAsciiString_FUNCTION FALSE
 // #define BIND_SDLTest_RandomAsciiString_FUNCTION TRUE
 // #define BIND_SDLTest_RandomDouble_FUNCTION FALSE
 // #define BIND_SDLTest_RandomDouble_FUNCTION TRUE
 // #define BIND_SDLTest_RandomFloat_FUNCTION FALSE
 // #define BIND_SDLTest_RandomFloat_FUNCTION TRUE
 // #define BIND_SDLTest_RandomInitTime_FUNCTION FALSE
 // #define BIND_SDLTest_RandomInitTime_FUNCTION TRUE
 // #define BIND_SDLTest_RandomInit_FUNCTION FALSE
 // #define BIND_SDLTest_RandomInit_FUNCTION TRUE
 // #define BIND_SDLTest_RandomIntegerInRange_FUNCTION FALSE
 // #define BIND_SDLTest_RandomIntegerInRange_FUNCTION TRUE
 // #define BIND_SDLTest_RandomSint16BoundaryValue_FUNCTION FALSE
 // #define BIND_SDLTest_RandomSint16BoundaryValue_FUNCTION TRUE
 // #define BIND_SDLTest_RandomSint16_FUNCTION FALSE
 // #define BIND_SDLTest_RandomSint16_FUNCTION TRUE
 // #define BIND_SDLTest_RandomSint32BoundaryValue_FUNCTION FALSE
 // #define BIND_SDLTest_RandomSint32BoundaryValue_FUNCTION TRUE
 // #define BIND_SDLTest_RandomSint32_FUNCTION FALSE
 // #define BIND_SDLTest_RandomSint32_FUNCTION TRUE
 // #define BIND_SDLTest_RandomSint64BoundaryValue_FUNCTION FALSE
 // #define BIND_SDLTest_RandomSint64BoundaryValue_FUNCTION TRUE
 // #define BIND_SDLTest_RandomSint64_FUNCTION FALSE
 // #define BIND_SDLTest_RandomSint64_FUNCTION TRUE
 // #define BIND_SDLTest_RandomSint8BoundaryValue_FUNCTION FALSE
 // #define BIND_SDLTest_RandomSint8BoundaryValue_FUNCTION TRUE
 // #define BIND_SDLTest_RandomSint8_FUNCTION FALSE
 // #define BIND_SDLTest_RandomSint8_FUNCTION TRUE
 // #define BIND_SDLTest_RandomUint16BoundaryValue_FUNCTION FALSE
 // #define BIND_SDLTest_RandomUint16BoundaryValue_FUNCTION TRUE
 // #define BIND_SDLTest_RandomUint16_FUNCTION FALSE
 // #define BIND_SDLTest_RandomUint16_FUNCTION TRUE
 // #define BIND_SDLTest_RandomUint32BoundaryValue_FUNCTION FALSE
 // #define BIND_SDLTest_RandomUint32BoundaryValue_FUNCTION TRUE
 // #define BIND_SDLTest_RandomUint32_FUNCTION FALSE
 // #define BIND_SDLTest_RandomUint32_FUNCTION TRUE
 // #define BIND_SDLTest_RandomUint64BoundaryValue_FUNCTION FALSE
 // #define BIND_SDLTest_RandomUint64BoundaryValue_FUNCTION TRUE
 // #define BIND_SDLTest_RandomUint64_FUNCTION FALSE
 // #define BIND_SDLTest_RandomUint64_FUNCTION TRUE
 // #define BIND_SDLTest_RandomUint8BoundaryValue_FUNCTION FALSE
 // #define BIND_SDLTest_RandomUint8BoundaryValue_FUNCTION TRUE
 // #define BIND_SDLTest_RandomUint8_FUNCTION FALSE
 // #define BIND_SDLTest_RandomUint8_FUNCTION TRUE
 // #define BIND_SDLTest_RandomUnitDouble_FUNCTION FALSE
 // #define BIND_SDLTest_RandomUnitDouble_FUNCTION TRUE
 // #define BIND_SDLTest_RandomUnitFloat_FUNCTION FALSE
 // #define BIND_SDLTest_RandomUnitFloat_FUNCTION TRUE
 // #define BIND_SDLTest_Random_FUNCTION FALSE
 // #define BIND_SDLTest_Random_FUNCTION TRUE
 // #define BIND_SDLTest_ResetAssertSummary_FUNCTION FALSE
 // #define BIND_SDLTest_ResetAssertSummary_FUNCTION TRUE
 // #define BIND_SDLTest_RunSuites_FUNCTION FALSE
 // #define BIND_SDLTest_crc32Calc_FUNCTION FALSE
 #define BIND_SDL_AddEventWatch_FUNCTION FALSE
 #define BIND_SDL_AddHintCallback_FUNCTION FALSE
 #define BIND_SDL_AddTimer_FUNCTION FALSE
 #define BIND_SDL_AllocFormat_FUNCTION TRUE
 #define BIND_SDL_AllocFormat_FUNCTION TRUE
 #define BIND_SDL_AllocPalette_FUNCTION TRUE
 #define BIND_SDL_AllocPalette_FUNCTION TRUE
 #define BIND_SDL_AllocRW_FUNCTION TRUE
 #define BIND_SDL_AllocRW_FUNCTION TRUE
 #define BIND_SDL_AtomicAdd_FUNCTION TRUE
 #define BIND_SDL_AtomicAdd_FUNCTION TRUE
 #define BIND_SDL_AtomicCASPtr_FUNCTION FALSE
 #define BIND_SDL_AtomicCAS_FUNCTION TRUE
 #define BIND_SDL_AtomicCAS_FUNCTION TRUE
 #define BIND_SDL_AtomicGetPtr_FUNCTION FALSE
 #define BIND_SDL_AtomicGet_FUNCTION TRUE
 #define BIND_SDL_AtomicGet_FUNCTION TRUE
 #define BIND_SDL_AtomicLock_FUNCTION FALSE
 #define BIND_SDL_AtomicSetPtr_FUNCTION FALSE
 #define BIND_SDL_AtomicSet_FUNCTION TRUE
 #define BIND_SDL_AtomicSet_FUNCTION TRUE
 #define BIND_SDL_AtomicTryLock_FUNCTION FALSE
 #define BIND_SDL_AtomicUnlock_FUNCTION FALSE
 #define BIND_SDL_AudioInit_FUNCTION TRUE
 #define BIND_SDL_AudioInit_FUNCTION TRUE
 #define BIND_SDL_AudioQuit_FUNCTION TRUE
 #define BIND_SDL_AudioQuit_FUNCTION TRUE
 #define BIND_SDL_BuildAudioCVT_FUNCTION TRUE
 #define BIND_SDL_BuildAudioCVT_FUNCTION TRUE
 #define BIND_SDL_CalculateGammaRamp_FUNCTION FALSE
 #define BIND_SDL_ClearError_FUNCTION TRUE
 #define BIND_SDL_ClearError_FUNCTION TRUE
 #define BIND_SDL_ClearHints_FUNCTION TRUE
 #define BIND_SDL_ClearHints_FUNCTION TRUE
 #define BIND_SDL_CloseAudioDevice_FUNCTION TRUE
 #define BIND_SDL_CloseAudioDevice_FUNCTION TRUE
 #define BIND_SDL_CloseAudio_FUNCTION TRUE
 #define BIND_SDL_CloseAudio_FUNCTION TRUE
 #define BIND_SDL_CondBroadcast_FUNCTION TRUE
 #define BIND_SDL_CondBroadcast_FUNCTION TRUE
 #define BIND_SDL_CondSignal_FUNCTION TRUE
 #define BIND_SDL_CondSignal_FUNCTION TRUE
 #define BIND_SDL_CondWaitTimeout_FUNCTION TRUE
 #define BIND_SDL_CondWaitTimeout_FUNCTION TRUE
 #define BIND_SDL_CondWait_FUNCTION TRUE
 #define BIND_SDL_CondWait_FUNCTION TRUE
 #define BIND_SDL_ConvertAudio_FUNCTION TRUE
 #define BIND_SDL_ConvertAudio_FUNCTION TRUE
 #define BIND_SDL_ConvertPixels_FUNCTION FALSE
 #define BIND_SDL_ConvertSurfaceFormat_FUNCTION TRUE
 #define BIND_SDL_ConvertSurfaceFormat_FUNCTION TRUE
 #define BIND_SDL_ConvertSurface_FUNCTION TRUE
 #define BIND_SDL_ConvertSurface_FUNCTION TRUE
 #define BIND_SDL_CreateColorCursor_FUNCTION TRUE
 #define BIND_SDL_CreateColorCursor_FUNCTION TRUE
 #define BIND_SDL_CreateCond_FUNCTION TRUE
 #define BIND_SDL_CreateCond_FUNCTION TRUE
 #define BIND_SDL_CreateCursor_FUNCTION FALSE
 #define BIND_SDL_CreateMutex_FUNCTION TRUE
 #define BIND_SDL_CreateMutex_FUNCTION TRUE
 #define BIND_SDL_CreateRGBSurfaceFrom_FUNCTION FALSE
 #define BIND_SDL_CreateRGBSurface_FUNCTION TRUE
 #define BIND_SDL_CreateRGBSurface_FUNCTION TRUE
 #define BIND_SDL_CreateRenderer_FUNCTION TRUE
 #define BIND_SDL_CreateRenderer_FUNCTION TRUE
 #define BIND_SDL_CreateSemaphore_FUNCTION TRUE
 #define BIND_SDL_CreateSemaphore_FUNCTION TRUE
 #define BIND_SDL_CreateShapedWindow_FUNCTION TRUE
 #define BIND_SDL_CreateShapedWindow_FUNCTION TRUE
 #define BIND_SDL_CreateSoftwareRenderer_FUNCTION TRUE
 #define BIND_SDL_CreateSoftwareRenderer_FUNCTION TRUE
 #define BIND_SDL_CreateSystemCursor_FUNCTION FALSE
 #define BIND_SDL_CreateTextureFromSurface_FUNCTION TRUE
 #define BIND_SDL_CreateTextureFromSurface_FUNCTION TRUE
 #define BIND_SDL_CreateTexture_FUNCTION TRUE
 #define BIND_SDL_CreateTexture_FUNCTION TRUE
 #define BIND_SDL_CreateThread_FUNCTION FALSE
 #define BIND_SDL_CreateWindowAndRenderer_FUNCTION FALSE
 #define BIND_SDL_CreateWindowFrom_FUNCTION FALSE
 #define BIND_SDL_CreateWindow_FUNCTION TRUE
 #define BIND_SDL_CreateWindow_FUNCTION TRUE
 #define BIND_SDL_DelEventWatch_FUNCTION FALSE
 #define BIND_SDL_DelHintCallback_FUNCTION FALSE
 #define BIND_SDL_Delay_FUNCTION TRUE
 #define BIND_SDL_Delay_FUNCTION TRUE
 #define BIND_SDL_DestroyCond_FUNCTION TRUE
 #define BIND_SDL_DestroyCond_FUNCTION TRUE
 #define BIND_SDL_DestroyMutex_FUNCTION TRUE
 #define BIND_SDL_DestroyMutex_FUNCTION TRUE
 #define BIND_SDL_DestroyRenderer_FUNCTION TRUE
 #define BIND_SDL_DestroyRenderer_FUNCTION TRUE
 #define BIND_SDL_DestroySemaphore_FUNCTION TRUE
 #define BIND_SDL_DestroySemaphore_FUNCTION TRUE
 #define BIND_SDL_DestroyTexture_FUNCTION TRUE
 #define BIND_SDL_DestroyTexture_FUNCTION TRUE
 #define BIND_SDL_DestroyWindow_FUNCTION TRUE
 #define BIND_SDL_DestroyWindow_FUNCTION TRUE
 #define BIND_SDL_DetachThread_FUNCTION TRUE
 #define BIND_SDL_DetachThread_FUNCTION TRUE
 #define BIND_SDL_DisableScreenSaver_FUNCTION TRUE
 #define BIND_SDL_DisableScreenSaver_FUNCTION TRUE
 #define BIND_SDL_EnableScreenSaver_FUNCTION TRUE
 #define BIND_SDL_EnableScreenSaver_FUNCTION TRUE
 #define BIND_SDL_EnclosePoints_FUNCTION TRUE
 #define BIND_SDL_EnclosePoints_FUNCTION TRUE
 #define BIND_SDL_Error_FUNCTION FALSE
 #define BIND_SDL_EventState_FUNCTION TRUE
 #define BIND_SDL_EventState_FUNCTION TRUE
 #define BIND_SDL_FillRect_FUNCTION TRUE
 #define BIND_SDL_FillRect_FUNCTION TRUE
 #define BIND_SDL_FillRects_FUNCTION FALSE
 #define BIND_SDL_FillRects_FUNCTION TRUE
 #define BIND_SDL_FilterEvents_FUNCTION FALSE
 #define BIND_SDL_FlushEvent_FUNCTION TRUE
 #define BIND_SDL_FlushEvent_FUNCTION TRUE
 #define BIND_SDL_FlushEvents_FUNCTION TRUE
 #define BIND_SDL_FlushEvents_FUNCTION TRUE
 #define BIND_SDL_FreeCursor_FUNCTION TRUE
 #define BIND_SDL_FreeCursor_FUNCTION TRUE
 #define BIND_SDL_FreeFormat_FUNCTION TRUE
 #define BIND_SDL_FreeFormat_FUNCTION TRUE
 #define BIND_SDL_FreePalette_FUNCTION TRUE
 #define BIND_SDL_FreePalette_FUNCTION TRUE
 #define BIND_SDL_FreeRW_FUNCTION TRUE
 #define BIND_SDL_FreeRW_FUNCTION TRUE
 #define BIND_SDL_FreeSurface_FUNCTION TRUE
 #define BIND_SDL_FreeSurface_FUNCTION TRUE
 #define BIND_SDL_FreeWAV_FUNCTION FALSE
 #define BIND_SDL_GL_BindTexture_FUNCTION FALSE
 #define BIND_SDL_GL_CreateContext_FUNCTION FALSE
 #define BIND_SDL_GL_DeleteContext_FUNCTION FALSE
 #define BIND_SDL_GL_ExtensionSupported_FUNCTION FALSE
 #define BIND_SDL_GL_ExtensionSupported_FUNCTION TRUE
 #define BIND_SDL_GL_GetAttribute_FUNCTION FALSE
 #define BIND_SDL_GL_GetCurrentContext_FUNCTION FALSE
 #define BIND_SDL_GL_GetCurrentWindow_FUNCTION FALSE
 #define BIND_SDL_GL_GetCurrentWindow_FUNCTION TRUE
 #define BIND_SDL_GL_GetDrawableSize_FUNCTION FALSE
 #define BIND_SDL_GL_GetProcAddress_FUNCTION FALSE
 #define BIND_SDL_GL_GetSwapInterval_FUNCTION FALSE
 #define BIND_SDL_GL_GetSwapInterval_FUNCTION TRUE
 #define BIND_SDL_GL_LoadLibrary_FUNCTION FALSE
 #define BIND_SDL_GL_LoadLibrary_FUNCTION TRUE
 #define BIND_SDL_GL_MakeCurrent_FUNCTION FALSE
 #define BIND_SDL_GL_ResetAttributes_FUNCTION FALSE
 #define BIND_SDL_GL_ResetAttributes_FUNCTION TRUE
 #define BIND_SDL_GL_SetAttribute_FUNCTION FALSE
 #define BIND_SDL_GL_SetSwapInterval_FUNCTION FALSE
 #define BIND_SDL_GL_SetSwapInterval_FUNCTION TRUE
 #define BIND_SDL_GL_SwapWindow_FUNCTION FALSE
 #define BIND_SDL_GL_SwapWindow_FUNCTION TRUE
 #define BIND_SDL_GL_UnbindTexture_FUNCTION FALSE
 #define BIND_SDL_GL_UnbindTexture_FUNCTION TRUE
 #define BIND_SDL_GL_UnloadLibrary_FUNCTION FALSE
 #define BIND_SDL_GL_UnloadLibrary_FUNCTION TRUE
 #define BIND_SDL_GameControllerAddMapping_FUNCTION TRUE
 #define BIND_SDL_GameControllerAddMapping_FUNCTION TRUE
 #define BIND_SDL_GameControllerAddMappingsFromRW_FUNCTION TRUE
 #define BIND_SDL_GameControllerAddMappingsFromRW_FUNCTION TRUE
 #define BIND_SDL_GameControllerClose_FUNCTION TRUE
 #define BIND_SDL_GameControllerClose_FUNCTION TRUE
 #define BIND_SDL_GameControllerEventState_FUNCTION TRUE
 #define BIND_SDL_GameControllerEventState_FUNCTION TRUE
 #define BIND_SDL_GameControllerGetAttached_FUNCTION TRUE
 #define BIND_SDL_GameControllerGetAttached_FUNCTION TRUE
 #define BIND_SDL_GameControllerGetAxisFromString_FUNCTION FALSE
 #define BIND_SDL_GameControllerGetAxis_FUNCTION FALSE
 #define BIND_SDL_GameControllerGetBindForAxis_FUNCTION FALSE
 #define BIND_SDL_GameControllerGetBindForButton_FUNCTION FALSE
 #define BIND_SDL_GameControllerGetButtonFromString_FUNCTION FALSE
 #define BIND_SDL_GameControllerGetButton_FUNCTION FALSE
 #define BIND_SDL_GameControllerGetJoystick_FUNCTION FALSE
 #define BIND_SDL_GameControllerGetJoystick_FUNCTION TRUE
 #define BIND_SDL_GameControllerGetStringForAxis_FUNCTION FALSE
 #define BIND_SDL_GameControllerGetStringForButton_FUNCTION FALSE
 #define BIND_SDL_GameControllerMappingForGUID_FUNCTION FALSE
 #define BIND_SDL_GameControllerMappingForGUID_FUNCTION TRUE
 #define BIND_SDL_GameControllerMapping_FUNCTION FALSE
 #define BIND_SDL_GameControllerMapping_FUNCTION TRUE
 #define BIND_SDL_GameControllerNameForIndex_FUNCTION FALSE
 #define BIND_SDL_GameControllerNameForIndex_FUNCTION TRUE
 #define BIND_SDL_GameControllerName_FUNCTION FALSE
 #define BIND_SDL_GameControllerName_FUNCTION TRUE
 #define BIND_SDL_GameControllerOpen_FUNCTION FALSE
 #define BIND_SDL_GameControllerOpen_FUNCTION TRUE
 #define BIND_SDL_GameControllerUpdate_FUNCTION FALSE
 #define BIND_SDL_GameControllerUpdate_FUNCTION TRUE
 #define BIND_SDL_GetAssertionHandler_FUNCTION FALSE
 #define BIND_SDL_GetAssertionReport_FUNCTION FALSE
 #define BIND_SDL_GetAudioDeviceName_FUNCTION FALSE
 #define BIND_SDL_GetAudioDeviceName_FUNCTION TRUE
 #define BIND_SDL_GetAudioDeviceStatus_FUNCTION FALSE
 #define BIND_SDL_GetAudioDriver_FUNCTION TRUE
 #define BIND_SDL_GetAudioDriver_FUNCTION TRUE
 #define BIND_SDL_GetAudioStatus_FUNCTION FALSE
 #define BIND_SDL_GetBasePath_FUNCTION TRUE
 #define BIND_SDL_GetBasePath_FUNCTION TRUE
 #define BIND_SDL_GetCPUCacheLineSize_FUNCTION TRUE
 #define BIND_SDL_GetCPUCacheLineSize_FUNCTION TRUE
 #define BIND_SDL_GetCPUCount_FUNCTION FALSE
 #define BIND_SDL_GetCPUCount_FUNCTION TRUE
 #define BIND_SDL_GetClipRect_FUNCTION TRUE
 #define BIND_SDL_GetClipRect_FUNCTION TRUE
 #define BIND_SDL_GetClipboardText_FUNCTION TRUE
 #define BIND_SDL_GetClipboardText_FUNCTION TRUE
 #define BIND_SDL_GetClosestDisplayMode_FUNCTION TRUE
 #define BIND_SDL_GetClosestDisplayMode_FUNCTION TRUE
 #define BIND_SDL_GetColorKey_FUNCTION TRUE
 #define BIND_SDL_GetColorKey_FUNCTION TRUE
 #define BIND_SDL_GetCurrentAudioDriver_FUNCTION FALSE
 #define BIND_SDL_GetCurrentAudioDriver_FUNCTION TRUE
 #define BIND_SDL_GetCurrentDisplayMode_FUNCTION FALSE
 #define BIND_SDL_GetCurrentDisplayMode_FUNCTION TRUE
 #define BIND_SDL_GetCurrentVideoDriver_FUNCTION FALSE
 #define BIND_SDL_GetCurrentVideoDriver_FUNCTION TRUE
 #define BIND_SDL_GetCursor_FUNCTION FALSE
 #define BIND_SDL_GetCursor_FUNCTION TRUE
 #define BIND_SDL_GetDefaultAssertionHandler_FUNCTION FALSE
 #define BIND_SDL_GetDefaultCursor_FUNCTION FALSE
 #define BIND_SDL_GetDefaultCursor_FUNCTION TRUE
 #define BIND_SDL_GetDesktopDisplayMode_FUNCTION FALSE
 #define BIND_SDL_GetDesktopDisplayMode_FUNCTION TRUE
 #define BIND_SDL_GetDisplayBounds_FUNCTION FALSE
 #define BIND_SDL_GetDisplayBounds_FUNCTION TRUE
 #define BIND_SDL_GetDisplayMode_FUNCTION FALSE
 #define BIND_SDL_GetDisplayMode_FUNCTION TRUE
 #define BIND_SDL_GetDisplayName_FUNCTION FALSE
 #define BIND_SDL_GetDisplayName_FUNCTION TRUE
 #define BIND_SDL_GetError_FUNCTION FALSE
 #define BIND_SDL_GetError_FUNCTION TRUE
 #define BIND_SDL_GetEventFilter_FUNCTION FALSE
 #define BIND_SDL_GetHint_FUNCTION FALSE
 #define BIND_SDL_GetHint_FUNCTION TRUE
 #define BIND_SDL_GetKeyFromName_FUNCTION FALSE
 #define BIND_SDL_GetKeyFromScancode_FUNCTION FALSE
 #define BIND_SDL_GetKeyName_FUNCTION FALSE
 #define BIND_SDL_GetKeyName_FUNCTION TRUE
 #define BIND_SDL_GetKeyboardFocus_FUNCTION FALSE
 #define BIND_SDL_GetKeyboardFocus_FUNCTION TRUE
 #define BIND_SDL_GetKeyboardState_FUNCTION FALSE
 #define BIND_SDL_GetModState_FUNCTION FALSE
 #define BIND_SDL_GetMouseFocus_FUNCTION FALSE
 #define BIND_SDL_GetMouseFocus_FUNCTION TRUE
 #define BIND_SDL_GetMouseState_FUNCTION FALSE
 #define BIND_SDL_GetNumAudioDevices_FUNCTION FALSE
 #define BIND_SDL_GetNumAudioDevices_FUNCTION TRUE
 #define BIND_SDL_GetNumAudioDrivers_FUNCTION FALSE
 #define BIND_SDL_GetNumAudioDrivers_FUNCTION TRUE
 #define BIND_SDL_GetNumDisplayModes_FUNCTION FALSE
 #define BIND_SDL_GetNumDisplayModes_FUNCTION TRUE
 #define BIND_SDL_GetNumRenderDrivers_FUNCTION FALSE
 #define BIND_SDL_GetNumRenderDrivers_FUNCTION TRUE
 #define BIND_SDL_GetNumTouchDevices_FUNCTION FALSE
 #define BIND_SDL_GetNumTouchDevices_FUNCTION TRUE
 #define BIND_SDL_GetNumTouchFingers_FUNCTION FALSE
 #define BIND_SDL_GetNumTouchFingers_FUNCTION TRUE
 #define BIND_SDL_GetNumVideoDisplays_FUNCTION FALSE
 #define BIND_SDL_GetNumVideoDisplays_FUNCTION TRUE
 #define BIND_SDL_GetNumVideoDrivers_FUNCTION FALSE
 #define BIND_SDL_GetNumVideoDrivers_FUNCTION TRUE
 #define BIND_SDL_GetPerformanceCounter_FUNCTION FALSE
 #define BIND_SDL_GetPerformanceFrequency_FUNCTION FALSE
 #define BIND_SDL_GetPixelFormatName_FUNCTION FALSE
 #define BIND_SDL_GetPixelFormatName_FUNCTION TRUE
 #define BIND_SDL_GetPlatform_FUNCTION FALSE
 #define BIND_SDL_GetPlatform_FUNCTION TRUE
 #define BIND_SDL_GetPowerInfo_FUNCTION FALSE
 #define BIND_SDL_GetPrefPath_FUNCTION FALSE
 #define BIND_SDL_GetPrefPath_FUNCTION TRUE
 #define BIND_SDL_GetRGBA_FUNCTION FALSE
 #define BIND_SDL_GetRGB_FUNCTION FALSE
 #define BIND_SDL_GetRelativeMouseMode_FUNCTION FALSE
 #define BIND_SDL_GetRelativeMouseMode_FUNCTION TRUE
 #define BIND_SDL_GetRelativeMouseState_FUNCTION FALSE
 #define BIND_SDL_GetRenderDrawBlendMode_FUNCTION FALSE
 #define BIND_SDL_GetRenderDrawColor_FUNCTION FALSE
 #define BIND_SDL_GetRenderDriverInfo_FUNCTION FALSE
 #define BIND_SDL_GetRenderDriverInfo_FUNCTION TRUE
 #define BIND_SDL_GetRenderTarget_FUNCTION FALSE
 #define BIND_SDL_GetRenderTarget_FUNCTION TRUE
 #define BIND_SDL_GetRendererInfo_FUNCTION FALSE
 #define BIND_SDL_GetRendererInfo_FUNCTION TRUE
 #define BIND_SDL_GetRendererOutputSize_FUNCTION FALSE
 #define BIND_SDL_GetRenderer_FUNCTION FALSE
 #define BIND_SDL_GetRenderer_FUNCTION TRUE
 #define BIND_SDL_GetRevisionNumber_FUNCTION FALSE
 #define BIND_SDL_GetRevisionNumber_FUNCTION TRUE
 #define BIND_SDL_GetRevision_FUNCTION FALSE
 #define BIND_SDL_GetRevision_FUNCTION TRUE
 #define BIND_SDL_GetScancodeFromKey_FUNCTION FALSE
 #define BIND_SDL_GetScancodeFromName_FUNCTION FALSE
 #define BIND_SDL_GetScancodeName_FUNCTION FALSE
 #define BIND_SDL_GetShapedWindowMode_FUNCTION FALSE
 #define BIND_SDL_GetShapedWindowMode_FUNCTION TRUE
 #define BIND_SDL_GetSurfaceAlphaMod_FUNCTION FALSE
 #define BIND_SDL_GetSurfaceBlendMode_FUNCTION FALSE
 #define BIND_SDL_GetSurfaceColorMod_FUNCTION FALSE
 #define BIND_SDL_GetSystemRAM_FUNCTION FALSE
 #define BIND_SDL_GetSystemRAM_FUNCTION TRUE
 #define BIND_SDL_GetTextureAlphaMod_FUNCTION FALSE
 #define BIND_SDL_GetTextureBlendMode_FUNCTION FALSE
 #define BIND_SDL_GetTextureColorMod_FUNCTION FALSE
 #define BIND_SDL_GetThreadID_FUNCTION FALSE
 #define BIND_SDL_GetThreadID_FUNCTION TRUE
 #define BIND_SDL_GetThreadName_FUNCTION FALSE
 #define BIND_SDL_GetThreadName_FUNCTION TRUE
 #define BIND_SDL_GetTicks_FUNCTION FALSE
 #define BIND_SDL_GetTouchDevice_FUNCTION FALSE
 #define BIND_SDL_GetTouchFinger_FUNCTION FALSE
 #define BIND_SDL_GetTouchFinger_FUNCTION TRUE
 #define BIND_SDL_GetVersion_FUNCTION FALSE
 #define BIND_SDL_GetVersion_FUNCTION TRUE
 #define BIND_SDL_GetVideoDriver_FUNCTION FALSE
 #define BIND_SDL_GetVideoDriver_FUNCTION TRUE
 #define BIND_SDL_GetWindowBrightness_FUNCTION FALSE
 #define BIND_SDL_GetWindowBrightness_FUNCTION TRUE
 #define BIND_SDL_GetWindowData_FUNCTION FALSE
 #define BIND_SDL_GetWindowDisplayIndex_FUNCTION FALSE
 #define BIND_SDL_GetWindowDisplayIndex_FUNCTION TRUE
 #define BIND_SDL_GetWindowDisplayMode_FUNCTION FALSE
 #define BIND_SDL_GetWindowDisplayMode_FUNCTION TRUE
 #define BIND_SDL_GetWindowFlags_FUNCTION FALSE
 #define BIND_SDL_GetWindowFromID_FUNCTION FALSE
 #define BIND_SDL_GetWindowFromID_FUNCTION TRUE
 #define BIND_SDL_GetWindowGammaRamp_FUNCTION FALSE
 #define BIND_SDL_GetWindowGrab_FUNCTION FALSE
 #define BIND_SDL_GetWindowGrab_FUNCTION TRUE
 #define BIND_SDL_GetWindowID_FUNCTION FALSE
 #define BIND_SDL_GetWindowMaximumSize_FUNCTION FALSE
 #define BIND_SDL_GetWindowMinimumSize_FUNCTION FALSE
 #define BIND_SDL_GetWindowPixelFormat_FUNCTION FALSE
 #define BIND_SDL_GetWindowPosition_FUNCTION FALSE
 #define BIND_SDL_GetWindowSize_FUNCTION FALSE
 #define BIND_SDL_GetWindowSurface_FUNCTION FALSE
 #define BIND_SDL_GetWindowSurface_FUNCTION TRUE
 #define BIND_SDL_GetWindowTitle_FUNCTION FALSE
 #define BIND_SDL_GetWindowTitle_FUNCTION TRUE
 #define BIND_SDL_GetWindowWMInfo_FUNCTION FALSE
 #define BIND_SDL_GetWindowWMInfo_FUNCTION TRUE
 #define BIND_SDL_HapticClose_FUNCTION FALSE
 #define BIND_SDL_HapticClose_FUNCTION TRUE
 #define BIND_SDL_HapticDestroyEffect_FUNCTION FALSE
 #define BIND_SDL_HapticDestroyEffect_FUNCTION TRUE
 #define BIND_SDL_HapticEffectSupported_FUNCTION FALSE
 #define BIND_SDL_HapticGetEffectStatus_FUNCTION FALSE
 #define BIND_SDL_HapticGetEffectStatus_FUNCTION TRUE
 #define BIND_SDL_HapticIndex_FUNCTION FALSE
 #define BIND_SDL_HapticIndex_FUNCTION TRUE
 #define BIND_SDL_HapticName_FUNCTION FALSE
 #define BIND_SDL_HapticName_FUNCTION TRUE
 #define BIND_SDL_HapticNewEffect_FUNCTION FALSE
 #define BIND_SDL_HapticNumAxes_FUNCTION FALSE
 #define BIND_SDL_HapticNumAxes_FUNCTION TRUE
 #define BIND_SDL_HapticNumEffectsPlaying_FUNCTION FALSE
 #define BIND_SDL_HapticNumEffectsPlaying_FUNCTION TRUE
 #define BIND_SDL_HapticNumEffects_FUNCTION FALSE
 #define BIND_SDL_HapticNumEffects_FUNCTION TRUE
 #define BIND_SDL_HapticOpenFromJoystick_FUNCTION FALSE
 #define BIND_SDL_HapticOpenFromJoystick_FUNCTION TRUE
 #define BIND_SDL_HapticOpenFromMouse_FUNCTION FALSE
 #define BIND_SDL_HapticOpenFromMouse_FUNCTION TRUE
 #define BIND_SDL_HapticOpen_FUNCTION FALSE
 #define BIND_SDL_HapticOpen_FUNCTION TRUE
 #define BIND_SDL_HapticOpened_FUNCTION FALSE
 #define BIND_SDL_HapticOpened_FUNCTION TRUE
 #define BIND_SDL_HapticPause_FUNCTION FALSE
 #define BIND_SDL_HapticPause_FUNCTION TRUE
 #define BIND_SDL_HapticQuery_FUNCTION FALSE
 #define BIND_SDL_HapticQuery_FUNCTION TRUE
 #define BIND_SDL_HapticRumbleInit_FUNCTION FALSE
 #define BIND_SDL_HapticRumbleInit_FUNCTION TRUE
 #define BIND_SDL_HapticRumblePlay_FUNCTION FALSE
 #define BIND_SDL_HapticRumblePlay_FUNCTION TRUE
 #define BIND_SDL_HapticRumbleStop_FUNCTION FALSE
 #define BIND_SDL_HapticRumbleStop_FUNCTION TRUE
 #define BIND_SDL_HapticRumbleSupported_FUNCTION FALSE
 #define BIND_SDL_HapticRumbleSupported_FUNCTION TRUE
 #define BIND_SDL_HapticRunEffect_FUNCTION FALSE
 #define BIND_SDL_HapticRunEffect_FUNCTION TRUE
 #define BIND_SDL_HapticSetAutocenter_FUNCTION FALSE
 #define BIND_SDL_HapticSetAutocenter_FUNCTION TRUE
 #define BIND_SDL_HapticSetGain_FUNCTION FALSE
 #define BIND_SDL_HapticSetGain_FUNCTION TRUE
 #define BIND_SDL_HapticStopAll_FUNCTION FALSE
 #define BIND_SDL_HapticStopAll_FUNCTION TRUE
 #define BIND_SDL_HapticStopEffect_FUNCTION FALSE
 #define BIND_SDL_HapticStopEffect_FUNCTION TRUE
 #define BIND_SDL_HapticUnpause_FUNCTION FALSE
 #define BIND_SDL_HapticUnpause_FUNCTION TRUE
 #define BIND_SDL_HapticUpdateEffect_FUNCTION FALSE
 #define BIND_SDL_Has3DNow_FUNCTION FALSE
 #define BIND_SDL_Has3DNow_FUNCTION TRUE
 #define BIND_SDL_HasAVX_FUNCTION FALSE
 #define BIND_SDL_HasAVX_FUNCTION TRUE
 #define BIND_SDL_HasAltiVec_FUNCTION FALSE
 #define BIND_SDL_HasAltiVec_FUNCTION TRUE
 #define BIND_SDL_HasClipboardText_FUNCTION FALSE
 #define BIND_SDL_HasClipboardText_FUNCTION TRUE
 #define BIND_SDL_HasEvent_FUNCTION FALSE
 #define BIND_SDL_HasEvent_FUNCTION TRUE
 #define BIND_SDL_HasEvents_FUNCTION FALSE
 #define BIND_SDL_HasEvents_FUNCTION TRUE
 #define BIND_SDL_HasIntersection_FUNCTION FALSE
 #define BIND_SDL_HasIntersection_FUNCTION TRUE
 #define BIND_SDL_HasMMX_FUNCTION FALSE
 #define BIND_SDL_HasMMX_FUNCTION TRUE
 #define BIND_SDL_HasRDTSC_FUNCTION FALSE
 #define BIND_SDL_HasRDTSC_FUNCTION TRUE
 #define BIND_SDL_HasSSE2_FUNCTION FALSE
 #define BIND_SDL_HasSSE2_FUNCTION TRUE
 #define BIND_SDL_HasSSE3_FUNCTION FALSE
 #define BIND_SDL_HasSSE3_FUNCTION TRUE
 #define BIND_SDL_HasSSE41_FUNCTION FALSE
 #define BIND_SDL_HasSSE41_FUNCTION TRUE
 #define BIND_SDL_HasSSE42_FUNCTION FALSE
 #define BIND_SDL_HasSSE42_FUNCTION TRUE
 #define BIND_SDL_HasSSE_FUNCTION FALSE
 #define BIND_SDL_HasSSE_FUNCTION TRUE
 #define BIND_SDL_HasScreenKeyboardSupport_FUNCTION FALSE
 #define BIND_SDL_HasScreenKeyboardSupport_FUNCTION TRUE
 #define BIND_SDL_HideWindow_FUNCTION FALSE
 #define BIND_SDL_HideWindow_FUNCTION TRUE
 #define BIND_SDL_InitSubSystem_FUNCTION FALSE
 #define BIND_SDL_InitSubSystem_FUNCTION TRUE
 #define BIND_SDL_Init_FUNCTION TRUE
 #define BIND_SDL_Init_FUNCTION TRUE
 #define BIND_SDL_IntersectRectAndLine_FUNCTION FALSE
 #define BIND_SDL_IntersectRect_FUNCTION FALSE
 #define BIND_SDL_IntersectRect_FUNCTION TRUE
 #define BIND_SDL_IsGameController_FUNCTION FALSE
 #define BIND_SDL_IsGameController_FUNCTION TRUE
 #define BIND_SDL_IsScreenKeyboardShown_FUNCTION FALSE
 #define BIND_SDL_IsScreenKeyboardShown_FUNCTION TRUE
 #define BIND_SDL_IsScreenSaverEnabled_FUNCTION FALSE
 #define BIND_SDL_IsScreenSaverEnabled_FUNCTION TRUE
 #define BIND_SDL_IsShapedWindow_FUNCTION FALSE
 #define BIND_SDL_IsShapedWindow_FUNCTION TRUE
 #define BIND_SDL_IsTextInputActive_FUNCTION FALSE
 #define BIND_SDL_IsTextInputActive_FUNCTION TRUE
 #define BIND_SDL_JoystickClose_FUNCTION FALSE
 #define BIND_SDL_JoystickClose_FUNCTION TRUE
 #define BIND_SDL_JoystickEventState_FUNCTION FALSE
 #define BIND_SDL_JoystickEventState_FUNCTION TRUE
 #define BIND_SDL_JoystickGetAttached_FUNCTION FALSE
 #define BIND_SDL_JoystickGetAttached_FUNCTION TRUE
 #define BIND_SDL_JoystickGetAxis_FUNCTION FALSE
 #define BIND_SDL_JoystickGetBall_FUNCTION FALSE
 #define BIND_SDL_JoystickGetButton_FUNCTION FALSE
 #define BIND_SDL_JoystickGetDeviceGUID_FUNCTION FALSE
 #define BIND_SDL_JoystickGetDeviceGUID_FUNCTION TRUE
 #define BIND_SDL_JoystickGetGUIDFromString_FUNCTION FALSE
 #define BIND_SDL_JoystickGetGUIDFromString_FUNCTION TRUE
 #define BIND_SDL_JoystickGetGUIDString_FUNCTION FALSE
 #define BIND_SDL_JoystickGetGUIDString_FUNCTION TRUE
 #define BIND_SDL_JoystickGetGUID_FUNCTION FALSE
 #define BIND_SDL_JoystickGetGUID_FUNCTION TRUE
 #define BIND_SDL_JoystickGetHat_FUNCTION FALSE
 #define BIND_SDL_JoystickInstanceID_FUNCTION FALSE
 #define BIND_SDL_JoystickIsHaptic_FUNCTION FALSE
 #define BIND_SDL_JoystickIsHaptic_FUNCTION TRUE
 #define BIND_SDL_JoystickNameForIndex_FUNCTION FALSE
 #define BIND_SDL_JoystickNameForIndex_FUNCTION TRUE
 #define BIND_SDL_JoystickName_FUNCTION FALSE
 #define BIND_SDL_JoystickName_FUNCTION TRUE
 #define BIND_SDL_JoystickNumAxes_FUNCTION FALSE
 #define BIND_SDL_JoystickNumAxes_FUNCTION TRUE
 #define BIND_SDL_JoystickNumBalls_FUNCTION FALSE
 #define BIND_SDL_JoystickNumBalls_FUNCTION TRUE
 #define BIND_SDL_JoystickNumButtons_FUNCTION FALSE
 #define BIND_SDL_JoystickNumButtons_FUNCTION TRUE
 #define BIND_SDL_JoystickNumHats_FUNCTION FALSE
 #define BIND_SDL_JoystickNumHats_FUNCTION TRUE
 #define BIND_SDL_JoystickOpen_FUNCTION FALSE
 #define BIND_SDL_JoystickOpen_FUNCTION TRUE
 #define BIND_SDL_JoystickUpdate_FUNCTION FALSE
 #define BIND_SDL_JoystickUpdate_FUNCTION TRUE
 #define BIND_SDL_LoadBMP_RW_FUNCTION FALSE
 #define BIND_SDL_LoadBMP_RW_FUNCTION TRUE
 #define BIND_SDL_LoadDollarTemplates_FUNCTION FALSE
 #define BIND_SDL_LoadDollarTemplates_FUNCTION TRUE
 #define BIND_SDL_LoadFunction_FUNCTION FALSE
 #define BIND_SDL_LoadObject_FUNCTION FALSE
 #define BIND_SDL_LoadWAV_RW_FUNCTION FALSE
 #define BIND_SDL_LockAudioDevice_FUNCTION FALSE
 #define BIND_SDL_LockAudioDevice_FUNCTION TRUE
 #define BIND_SDL_LockAudio_FUNCTION FALSE
 #define BIND_SDL_LockAudio_FUNCTION TRUE
 #define BIND_SDL_LockMutex_FUNCTION FALSE
 #define BIND_SDL_LockMutex_FUNCTION TRUE
 #define BIND_SDL_LockSurface_FUNCTION FALSE
 #define BIND_SDL_LockSurface_FUNCTION TRUE
 #define BIND_SDL_LockTexture_FUNCTION FALSE
 #define BIND_SDL_LogCritical_FUNCTION FALSE
 #define BIND_SDL_LogCritical_FUNCTION TRUE
 #define BIND_SDL_LogDebug_FUNCTION FALSE
 #define BIND_SDL_LogDebug_FUNCTION TRUE
 #define BIND_SDL_LogError_FUNCTION FALSE
 #define BIND_SDL_LogError_FUNCTION TRUE
 #define BIND_SDL_LogGetOutputFunction_FUNCTION FALSE
 #define BIND_SDL_LogGetPriority_FUNCTION FALSE
 #define BIND_SDL_LogInfo_FUNCTION FALSE
 #define BIND_SDL_LogInfo_FUNCTION TRUE
 #define BIND_SDL_LogMessageV_FUNCTION FALSE
 #define BIND_SDL_LogMessage_FUNCTION FALSE
 #define BIND_SDL_LogResetPriorities_FUNCTION FALSE
 #define BIND_SDL_LogResetPriorities_FUNCTION TRUE
 #define BIND_SDL_LogSetAllPriority_FUNCTION FALSE
 #define BIND_SDL_LogSetOutputFunction_FUNCTION FALSE
 #define BIND_SDL_LogSetPriority_FUNCTION FALSE
 #define BIND_SDL_LogVerbose_FUNCTION FALSE
 #define BIND_SDL_LogVerbose_FUNCTION TRUE
 #define BIND_SDL_LogWarn_FUNCTION FALSE
 #define BIND_SDL_LogWarn_FUNCTION TRUE
 #define BIND_SDL_Log_FUNCTION FALSE
 #define BIND_SDL_Log_FUNCTION TRUE
 #define BIND_SDL_LowerBlitScaled_FUNCTION FALSE
 #define BIND_SDL_LowerBlitScaled_FUNCTION TRUE
 #define BIND_SDL_LowerBlit_FUNCTION FALSE
 #define BIND_SDL_LowerBlit_FUNCTION TRUE
 #define BIND_SDL_MapRGBA_FUNCTION FALSE
 #define BIND_SDL_MapRGB_FUNCTION FALSE
 #define BIND_SDL_MasksToPixelFormatEnum_FUNCTION FALSE
 #define BIND_SDL_MaximizeWindow_FUNCTION FALSE
 #define BIND_SDL_MaximizeWindow_FUNCTION TRUE
 #define BIND_SDL_MinimizeWindow_FUNCTION FALSE
 #define BIND_SDL_MinimizeWindow_FUNCTION TRUE
 #define BIND_SDL_MixAudioFormat_FUNCTION FALSE
 #define BIND_SDL_MixAudio_FUNCTION FALSE
 #define BIND_SDL_MostSignificantBitIndex32_FUNCTION FALSE
 #define BIND_SDL_MostSignificantBitIndex32_FUNCTION TRUE
 #define BIND_SDL_MouseIsHaptic_FUNCTION FALSE
 #define BIND_SDL_MouseIsHaptic_FUNCTION TRUE
 #define BIND_SDL_NumHaptics_FUNCTION FALSE
 #define BIND_SDL_NumHaptics_FUNCTION TRUE
 #define BIND_SDL_NumJoysticks_FUNCTION FALSE
 #define BIND_SDL_NumJoysticks_FUNCTION TRUE
 #define BIND_SDL_OpenAudioDevice_FUNCTION FALSE
 #define BIND_SDL_OpenAudio_FUNCTION FALSE
 #define BIND_SDL_OpenAudio_FUNCTION TRUE
 #define BIND_SDL_PauseAudioDevice_FUNCTION FALSE
 #define BIND_SDL_PauseAudioDevice_FUNCTION TRUE
 #define BIND_SDL_PauseAudio_FUNCTION FALSE
 #define BIND_SDL_PauseAudio_FUNCTION TRUE
 #define BIND_SDL_PeepEvents_FUNCTION FALSE
 #define BIND_SDL_PixelFormatEnumToMasks_FUNCTION FALSE
 #define BIND_SDL_PollEvent_FUNCTION FALSE
 #define BIND_SDL_PumpEvents_FUNCTION FALSE
 #define BIND_SDL_PumpEvents_FUNCTION TRUE
 #define BIND_SDL_PushEvent_FUNCTION FALSE
 #define BIND_SDL_QueryTexture_FUNCTION FALSE
 #define BIND_SDL_QuitSubSystem_FUNCTION FALSE
 #define BIND_SDL_QuitSubSystem_FUNCTION TRUE
 #define BIND_SDL_Quit_FUNCTION FALSE
 #define BIND_SDL_Quit_FUNCTION TRUE
 #define BIND_SDL_RWFromConstMem_FUNCTION FALSE
 #define BIND_SDL_RWFromFP_FUNCTION FALSE
 #define BIND_SDL_RWFromFile_FUNCTION FALSE
 #define BIND_SDL_RWFromFile_FUNCTION TRUE
 #define BIND_SDL_RWFromMem_FUNCTION FALSE
 #define BIND_SDL_RaiseWindow_FUNCTION FALSE
 #define BIND_SDL_RaiseWindow_FUNCTION TRUE
 #define BIND_SDL_ReadBE16_FUNCTION FALSE
 #define BIND_SDL_ReadBE32_FUNCTION FALSE
 #define BIND_SDL_ReadBE64_FUNCTION FALSE
 #define BIND_SDL_ReadLE16_FUNCTION FALSE
 #define BIND_SDL_ReadLE32_FUNCTION FALSE
 #define BIND_SDL_ReadLE64_FUNCTION FALSE
 #define BIND_SDL_ReadU8_FUNCTION FALSE
 #define BIND_SDL_RecordGesture_FUNCTION FALSE
 #define BIND_SDL_RecordGesture_FUNCTION TRUE
 #define BIND_SDL_RectEmpty_FUNCTION FALSE
 #define BIND_SDL_RectEmpty_FUNCTION TRUE
 #define BIND_SDL_RectEquals_FUNCTION FALSE
 #define BIND_SDL_RectEquals_FUNCTION TRUE
 #define BIND_SDL_RegisterEvents_FUNCTION FALSE
 #define BIND_SDL_RemoveTimer_FUNCTION FALSE
 #define BIND_SDL_RemoveTimer_FUNCTION TRUE
 #define BIND_SDL_RenderClear_FUNCTION FALSE
 #define BIND_SDL_RenderClear_FUNCTION TRUE
 #define BIND_SDL_RenderCopyEx_FUNCTION FALSE
 #define BIND_SDL_RenderCopy_FUNCTION FALSE
 #define BIND_SDL_RenderCopy_FUNCTION TRUE
 #define BIND_SDL_RenderDrawLine_FUNCTION FALSE
 #define BIND_SDL_RenderDrawLine_FUNCTION TRUE
 #define BIND_SDL_RenderDrawLines_FUNCTION FALSE
 #define BIND_SDL_RenderDrawLines_FUNCTION TRUE
 #define BIND_SDL_RenderDrawPoint_FUNCTION FALSE
 #define BIND_SDL_RenderDrawPoint_FUNCTION TRUE
 #define BIND_SDL_RenderDrawPoints_FUNCTION FALSE
 #define BIND_SDL_RenderDrawPoints_FUNCTION TRUE
 #define BIND_SDL_RenderDrawRect_FUNCTION FALSE
 #define BIND_SDL_RenderDrawRect_FUNCTION TRUE
 #define BIND_SDL_RenderDrawRects_FUNCTION FALSE
 #define BIND_SDL_RenderDrawRects_FUNCTION TRUE
 #define BIND_SDL_RenderFillRect_FUNCTION TRUE
 #define BIND_SDL_RenderFillRects_FUNCTION TRUE
 #define BIND_SDL_RenderGetClipRect_FUNCTION TRUE
 #define BIND_SDL_RenderGetLogicalSize_FUNCTION FALSE
 #define BIND_SDL_RenderGetScale_FUNCTION FALSE
 #define BIND_SDL_RenderGetViewport_FUNCTION TRUE
 #define BIND_SDL_RenderPresent_FUNCTION TRUE
 #define BIND_SDL_RenderReadPixels_FUNCTION FALSE
 #define BIND_SDL_RenderSetClipRect_FUNCTION TRUE
 #define BIND_SDL_RenderSetLogicalSize_FUNCTION TRUE
 #define BIND_SDL_RenderSetScale_FUNCTION TRUE
 #define BIND_SDL_RenderSetViewport_FUNCTION TRUE
 #define BIND_SDL_RenderTargetSupported_FUNCTION TRUE
 #define BIND_SDL_ReportAssertion_FUNCTION FALSE
 #define BIND_SDL_ResetAssertionReport_FUNCTION TRUE
 #define BIND_SDL_RestoreWindow_FUNCTION TRUE
 #define BIND_SDL_SaveAllDollarTemplates_FUNCTION TRUE
 #define BIND_SDL_SaveBMP_RW_FUNCTION TRUE
 #define BIND_SDL_SaveDollarTemplate_FUNCTION TRUE
 #define BIND_SDL_SemPost_FUNCTION TRUE
 #define BIND_SDL_SemTryWait_FUNCTION TRUE
 #define BIND_SDL_SemValue_FUNCTION FALSE
 #define BIND_SDL_SemWaitTimeout_FUNCTION TRUE
 #define BIND_SDL_SemWait_FUNCTION TRUE
 #define BIND_SDL_SetAssertionHandler_FUNCTION FALSE
 #define BIND_SDL_SetClipRect_FUNCTION TRUE
 #define BIND_SDL_SetClipboardText_FUNCTION TRUE
 #define BIND_SDL_SetColorKey_FUNCTION TRUE
 #define BIND_SDL_SetCursor_FUNCTION TRUE
 #define BIND_SDL_SetError_FUNCTION TRUE
 #define BIND_SDL_SetEventFilter_FUNCTION FALSE
 #define BIND_SDL_SetHintWithPriority_FUNCTION FALSE
 #define BIND_SDL_SetHint_FUNCTION TRUE
 #define BIND_SDL_SetMainReady_FUNCTION TRUE
 #define BIND_SDL_SetModState_FUNCTION FALSE
 #define BIND_SDL_SetPaletteColors_FUNCTION TRUE
 #define BIND_SDL_SetPixelFormatPalette_FUNCTION TRUE
 #define BIND_SDL_SetRelativeMouseMode_FUNCTION FALSE
 #define BIND_SDL_SetRenderDrawBlendMode_FUNCTION FALSE
 #define BIND_SDL_SetRenderDrawColor_FUNCTION TRUE
 #define BIND_SDL_SetRenderTarget_FUNCTION TRUE
 #define BIND_SDL_SetSurfaceAlphaMod_FUNCTION TRUE
 #define BIND_SDL_SetSurfaceBlendMode_FUNCTION FALSE
 #define BIND_SDL_SetSurfaceColorMod_FUNCTION TRUE
 #define BIND_SDL_SetSurfacePalette_FUNCTION TRUE
 #define BIND_SDL_SetSurfaceRLE_FUNCTION TRUE
 #define BIND_SDL_SetTextInputRect_FUNCTION TRUE
 #define BIND_SDL_SetTextureAlphaMod_FUNCTION TRUE
 #define BIND_SDL_SetTextureBlendMode_FUNCTION FALSE
 #define BIND_SDL_SetTextureColorMod_FUNCTION TRUE
 #define BIND_SDL_SetThreadPriority_FUNCTION FALSE
 #define BIND_SDL_SetWindowBordered_FUNCTION FALSE
 #define BIND_SDL_SetWindowBrightness_FUNCTION TRUE
 #define BIND_SDL_SetWindowData_FUNCTION FALSE
 #define BIND_SDL_SetWindowDisplayMode_FUNCTION TRUE
 #define BIND_SDL_SetWindowFullscreen_FUNCTION TRUE
 #define BIND_SDL_SetWindowGammaRamp_FUNCTION FALSE
 #define BIND_SDL_SetWindowGrab_FUNCTION FALSE
 #define BIND_SDL_SetWindowIcon_FUNCTION TRUE
 #define BIND_SDL_SetWindowMaximumSize_FUNCTION TRUE
 #define BIND_SDL_SetWindowMinimumSize_FUNCTION TRUE
 #define BIND_SDL_SetWindowPosition_FUNCTION TRUE
 #define BIND_SDL_SetWindowShape_FUNCTION TRUE
 #define BIND_SDL_SetWindowSize_FUNCTION TRUE
 #define BIND_SDL_SetWindowTitle_FUNCTION TRUE
 #define BIND_SDL_ShowCursor_FUNCTION TRUE
 #define BIND_SDL_ShowMessageBox_FUNCTION FALSE
 #define BIND_SDL_ShowSimpleMessageBox_FUNCTION TRUE
 #define BIND_SDL_ShowWindow_FUNCTION TRUE
 #define BIND_SDL_SoftStretch_FUNCTION TRUE
 #define BIND_SDL_StartTextInput_FUNCTION TRUE
 #define BIND_SDL_StopTextInput_FUNCTION TRUE
 #define BIND_SDL_Swap16_FUNCTION FALSE
 #define BIND_SDL_Swap32_FUNCTION FALSE
 #define BIND_SDL_Swap64_FUNCTION FALSE
 #define BIND_SDL_SwapFloat_FUNCTION TRUE
 #define BIND_SDL_TLSCreate_FUNCTION TRUE
 #define BIND_SDL_TLSSet_FUNCTION FALSE
 #define BIND_SDL_ThreadID_FUNCTION TRUE
 #define BIND_SDL_TryLockMutex_FUNCTION TRUE
 #define BIND_SDL_UnionRect_FUNCTION TRUE
 #define BIND_SDL_UnloadObject_FUNCTION FALSE
 #define BIND_SDL_UnlockAudioDevice_FUNCTION TRUE
 #define BIND_SDL_UnlockAudio_FUNCTION TRUE
 #define BIND_SDL_UnlockMutex_FUNCTION TRUE
 #define BIND_SDL_UnlockSurface_FUNCTION TRUE
 #define BIND_SDL_UnlockTexture_FUNCTION TRUE
 #define BIND_SDL_UpdateTexture_FUNCTION FALSE
 #define BIND_SDL_UpdateWindowSurfaceRects_FUNCTION TRUE
 #define BIND_SDL_UpdateWindowSurface_FUNCTION TRUE
 #define BIND_SDL_UpdateYUVTexture_FUNCTION FALSE
 #define BIND_SDL_UpperBlitScaled_FUNCTION TRUE
 #define BIND_SDL_UpperBlit_FUNCTION TRUE
 #define BIND_SDL_VideoInit_FUNCTION TRUE
 #define BIND_SDL_VideoQuit_FUNCTION TRUE
 #define BIND_SDL_WaitEventTimeout_FUNCTION FALSE
 #define BIND_SDL_WaitEvent_FUNCTION FALSE
 #define BIND_SDL_WaitThread_FUNCTION FALSE
 #define BIND_SDL_WarpMouseInWindow_FUNCTION TRUE
 #define BIND_SDL_WasInit_FUNCTION FALSE
 #define BIND_SDL_WriteBE16_FUNCTION FALSE
 #define BIND_SDL_WriteBE32_FUNCTION FALSE
 #define BIND_SDL_WriteBE64_FUNCTION FALSE
 #define BIND_SDL_WriteLE16_FUNCTION FALSE
 #define BIND_SDL_WriteLE32_FUNCTION FALSE
 #define BIND_SDL_WriteLE64_FUNCTION FALSE
 #define BIND_SDL_WriteU8_FUNCTION FALSE
 #define BIND_SDL_abs_FUNCTION TRUE
 #define BIND_SDL_acos_FUNCTION TRUE
 #define BIND_SDL_asin_FUNCTION TRUE
 #define BIND_SDL_atan2_FUNCTION TRUE
 #define BIND_SDL_atan_FUNCTION TRUE
 #define BIND_SDL_atof_FUNCTION TRUE
 #define BIND_SDL_atoi_FUNCTION TRUE
 #define BIND_SDL_calloc_FUNCTION FALSE
 #define BIND_SDL_ceil_FUNCTION TRUE
 #define BIND_SDL_copysign_FUNCTION TRUE
 #define BIND_SDL_cos_FUNCTION TRUE
 #define BIND_SDL_cosf_FUNCTION TRUE
 #define BIND_SDL_fabs_FUNCTION TRUE
 #define BIND_SDL_floor_FUNCTION TRUE
 #define BIND_SDL_free_FUNCTION FALSE
 #define BIND_SDL_getenv_FUNCTION TRUE
 #define BIND_SDL_iconv_FUNCTION FALSE
 #define BIND_SDL_iconv_close_FUNCTION TRUE
 #define BIND_SDL_iconv_open_FUNCTION TRUE
 #define BIND_SDL_iconv_string_FUNCTION TRUE
 #define BIND_SDL_isdigit_FUNCTION TRUE
 #define BIND_SDL_isspace_FUNCTION TRUE
 #define BIND_SDL_itoa_FUNCTION TRUE
 #define BIND_SDL_lltoa_FUNCTION TRUE
 #define BIND_SDL_log_FUNCTION TRUE
 #define BIND_SDL_ltoa_FUNCTION TRUE
 #define BIND_SDL_main_FUNCTION FALSE
 #define BIND_SDL_malloc_FUNCTION FALSE
 #define BIND_SDL_memcmp_FUNCTION FALSE
 #define BIND_SDL_memcpy4_FUNCTION FALSE
 #define BIND_SDL_memcpy_FUNCTION FALSE
 #define BIND_SDL_memmove_FUNCTION FALSE
 #define BIND_SDL_memset4_FUNCTION FALSE
 #define BIND_SDL_memset_FUNCTION FALSE
 #define BIND_SDL_pow_FUNCTION TRUE
 #define BIND_SDL_qsort_FUNCTION FALSE
 #define BIND_SDL_realloc_FUNCTION FALSE
 #define BIND_SDL_scalbn_FUNCTION TRUE
 #define BIND_SDL_setenv_FUNCTION TRUE
 #define BIND_SDL_sin_FUNCTION TRUE
 #define BIND_SDL_sinf_FUNCTION TRUE
 #define BIND_SDL_snprintf_FUNCTION TRUE
 #define BIND_SDL_sqrt_FUNCTION TRUE
 #define BIND_SDL_sscanf_FUNCTION TRUE
 #define BIND_SDL_strcasecmp_FUNCTION TRUE
 #define BIND_SDL_strchr_FUNCTION TRUE
 #define BIND_SDL_strcmp_FUNCTION TRUE
 #define BIND_SDL_strdup_FUNCTION TRUE
 #define BIND_SDL_strlcat_FUNCTION FALSE
 #define BIND_SDL_strlcpy_FUNCTION FALSE
 #define BIND_SDL_strlen_FUNCTION FALSE
 #define BIND_SDL_strlwr_FUNCTION TRUE
 #define BIND_SDL_strncasecmp_FUNCTION TRUE
 #define BIND_SDL_strncmp_FUNCTION TRUE
 #define BIND_SDL_strrchr_FUNCTION TRUE
 #define BIND_SDL_strrev_FUNCTION TRUE
 #define BIND_SDL_strstr_FUNCTION TRUE
 #define BIND_SDL_strtod_FUNCTION FALSE
 #define BIND_SDL_strtol_FUNCTION FALSE
 #define BIND_SDL_strtoll_FUNCTION FALSE
 #define BIND_SDL_strtoul_FUNCTION FALSE
 #define BIND_SDL_strtoull_FUNCTION FALSE
 #define BIND_SDL_strupr_FUNCTION TRUE
 #define BIND_SDL_tolower_FUNCTION TRUE
 #define BIND_SDL_toupper_FUNCTION TRUE
 #define BIND_SDL_uitoa_FUNCTION TRUE
 #define BIND_SDL_ulltoa_FUNCTION TRUE
 #define BIND_SDL_ultoa_FUNCTION TRUE
 #define BIND_SDL_utf8strlcpy_FUNCTION FALSE
 #define BIND_SDL_vsnprintf_FUNCTION FALSE
 #define BIND_SDL_vsscanf_FUNCTION FALSE
 #define BIND_SDL_wcslcat_FUNCTION FALSE
 #define BIND_SDL_wcslcpy_FUNCTION FALSE
 #define BIND_SDL_wcslen_FUNCTION FALSE

/*
 * Header Files
 * ------------
 *
 * These are the header files that defined the
 * classes and functions for which bindings have
 * been generated. If any of these are not needed
 * they should be commented out.
 *
 * TODO: ONLY the filename is inserted here automatically.
 *       If the file is not directly on the include path,
 *       you will need to prepend the relative path.
 */

#include <stdlib.h>
#include "mruby.h"
#include "mruby/array.h"
#include "mruby/class.h"
#include "mruby/data.h"
#include "mruby/string.h"
#include "mruby/value.h"
#include "mruby/variable.h"
#include "SDL.h"
#include "SDL_assert.h"
#include "SDL_atomic.h"
#include "SDL_audio.h"
#include "SDL_bits.h"
#include "SDL_blendmode.h"
#include "SDL_clipboard.h"
#include "SDL_config.h"
// #include "SDL_config_android.h"
// #include "SDL_config_iphoneos.h"
// #include "SDL_config_macosx.h"
// #include "SDL_config_minimal.h"
// #include "SDL_config_pandora.h"
// #include "SDL_config_psp.h"
// #include "SDL_config_windows.h"
// #include "SDL_config_winrt.h"
// #include "SDL_config_wiz.h"
#include "SDL_cpuinfo.h"
#include "SDL_endian.h"
#include "SDL_error.h"
#include "SDL_events.h"
#include "SDL_filesystem.h"
#include "SDL_gamecontroller.h"
#include "SDL_gesture.h"
#include "SDL_haptic.h"
#include "SDL_hints.h"
#include "SDL_joystick.h"
#include "SDL_keyboard.h"
#include "SDL_keycode.h"
#include "SDL_loadso.h"
#include "SDL_log.h"
#include "SDL_main.h"
#include "SDL_messagebox.h"
#include "SDL_mouse.h"
#include "SDL_mutex.h"
#include "SDL_name.h"
#include "SDL_opengl.h"
// #include "SDL_opengles.h"
// #include "SDL_opengles2.h"
#include "SDL_pixels.h"
#include "SDL_platform.h"
#include "SDL_power.h"
#include "SDL_quit.h"
#include "SDL_rect.h"
#include "SDL_render.h"
#include "SDL_revision.h"
#include "SDL_rwops.h"
#include "SDL_scancode.h"
#include "SDL_shape.h"
#include "SDL_stdinc.h"
#include "SDL_surface.h"
#include "SDL_system.h"
#include "SDL_syswm.h"
#include "SDL_test.h"
#include "SDL_test_assert.h"
#include "SDL_test_common.h"
#include "SDL_test_compare.h"
#include "SDL_test_crc32.h"
#include "SDL_test_font.h"
#include "SDL_test_fuzzer.h"
#include "SDL_test_harness.h"
#include "SDL_test_images.h"
#include "SDL_test_log.h"
#include "SDL_test_md5.h"
#include "SDL_test_random.h"
#include "SDL_thread.h"
#include "SDL_timer.h"
#include "SDL_touch.h"
#include "SDL_version.h"
#include "SDL_video.h"
#include "begin_code.h"

/*
 * Class initialization function declarations
 * ------------------------------------------
 *
 * These declarations are controlled by the macros in the
 * "Class Bindings Options" section above.
 */

#if BIND_SDLAtomicT_TYPE
void mrb_SDL_SDLAtomicT_init(mrb_state* mrb);
#endif
#if BIND_SDLDisplayMode_TYPE
void mrb_SDL_SDLDisplayMode_init(mrb_state* mrb);
#endif
#if BIND_SDLJoystickGUID_TYPE
void mrb_SDL_SDLJoystickGUID_init(mrb_state* mrb);
#endif
#if BIND_SDLMessageBoxButtonData_TYPE
void mrb_SDL_SDLMessageBoxButtonData_init(mrb_state* mrb);
#endif
#if BIND_SDLMessageBoxColor_TYPE
void mrb_SDL_SDLMessageBoxColor_init(mrb_state* mrb);
#endif
#if BIND_SDLMessageBoxColorScheme_TYPE
void mrb_SDL_SDLMessageBoxColorScheme_init(mrb_state* mrb);
#endif
#if BIND_SDLMessageBoxData_TYPE
void mrb_SDL_SDLMessageBoxData_init(mrb_state* mrb);
#endif
#if BIND_SDLTestCommonState_TYPE
void mrb_SDL_SDLTestCommonState_init(mrb_state* mrb);
#endif
#if BIND_SDLTestCrc32Context_TYPE
void mrb_SDL_SDLTestCrc32Context_init(mrb_state* mrb);
#endif
#if BIND_SDLTestMd5Context_TYPE
void mrb_SDL_SDLTestMd5Context_init(mrb_state* mrb);
#endif
#if BIND_SDLTestRandomContext_TYPE
void mrb_SDL_SDLTestRandomContext_init(mrb_state* mrb);
#endif
#if BIND_ClContext_TYPE
void mrb_SDL_ClContext_init(mrb_state* mrb);
#endif
#if BIND_ClEvent_TYPE
void mrb_SDL_ClEvent_init(mrb_state* mrb);
#endif
#if BIND_NSWindow_TYPE
void mrb_SDL_NSWindow_init(mrb_state* mrb);
#endif
#if BIND_SDLGameController_TYPE
void mrb_SDL_SDLGameController_init(mrb_state* mrb);
#endif
#if BIND_SDLHaptic_TYPE
void mrb_SDL_SDLHaptic_init(mrb_state* mrb);
#endif
#if BIND_SDLIconvT_TYPE
void mrb_SDL_SDLIconvT_init(mrb_state* mrb);
#endif
#if BIND_SDLJoystick_TYPE
void mrb_SDL_SDLJoystick_init(mrb_state* mrb);
#endif
#if BIND_SDLAssertData_TYPE
void mrb_SDL_SDLAssertData_init(mrb_state* mrb);
#endif
#if BIND_SDLAudioCVT_TYPE
void mrb_SDL_SDLAudioCVT_init(mrb_state* mrb);
#endif
#if BIND_SDLAudioSpec_TYPE
void mrb_SDL_SDLAudioSpec_init(mrb_state* mrb);
#endif
#if BIND_SDLBlitMap_TYPE
void mrb_SDL_SDLBlitMap_init(mrb_state* mrb);
#endif
#if BIND_SDLColor_TYPE
void mrb_SDL_SDLColor_init(mrb_state* mrb);
#endif
#if BIND_SDLCommonEvent_TYPE
void mrb_SDL_SDLCommonEvent_init(mrb_state* mrb);
#endif
#if BIND_SDLCond_TYPE
void mrb_SDL_SDLCond_init(mrb_state* mrb);
#endif
#if BIND_SDLControllerAxisEvent_TYPE
void mrb_SDL_SDLControllerAxisEvent_init(mrb_state* mrb);
#endif
#if BIND_SDLControllerButtonEvent_TYPE
void mrb_SDL_SDLControllerButtonEvent_init(mrb_state* mrb);
#endif
#if BIND_SDLControllerDeviceEvent_TYPE
void mrb_SDL_SDLControllerDeviceEvent_init(mrb_state* mrb);
#endif
#if BIND_SDLCursor_TYPE
void mrb_SDL_SDLCursor_init(mrb_state* mrb);
#endif
#if BIND_SDLDollarGestureEvent_TYPE
void mrb_SDL_SDLDollarGestureEvent_init(mrb_state* mrb);
#endif
#if BIND_SDLDropEvent_TYPE
void mrb_SDL_SDLDropEvent_init(mrb_state* mrb);
#endif
#if BIND_SDLFinger_TYPE
void mrb_SDL_SDLFinger_init(mrb_state* mrb);
#endif
#if BIND_SDLGameControllerButtonBind_TYPE
void mrb_SDL_SDLGameControllerButtonBind_init(mrb_state* mrb);
#endif
#if BIND_SDLHapticCondition_TYPE
void mrb_SDL_SDLHapticCondition_init(mrb_state* mrb);
#endif
#if BIND_SDLHapticConstant_TYPE
void mrb_SDL_SDLHapticConstant_init(mrb_state* mrb);
#endif
#if BIND_SDLHapticCustom_TYPE
void mrb_SDL_SDLHapticCustom_init(mrb_state* mrb);
#endif
#if BIND_SDLHapticDirection_TYPE
void mrb_SDL_SDLHapticDirection_init(mrb_state* mrb);
#endif
#if BIND_SDLHapticLeftRight_TYPE
void mrb_SDL_SDLHapticLeftRight_init(mrb_state* mrb);
#endif
#if BIND_SDLHapticPeriodic_TYPE
void mrb_SDL_SDLHapticPeriodic_init(mrb_state* mrb);
#endif
#if BIND_SDLHapticRamp_TYPE
void mrb_SDL_SDLHapticRamp_init(mrb_state* mrb);
#endif
#if BIND_SDLJoyAxisEvent_TYPE
void mrb_SDL_SDLJoyAxisEvent_init(mrb_state* mrb);
#endif
#if BIND_SDLJoyBallEvent_TYPE
void mrb_SDL_SDLJoyBallEvent_init(mrb_state* mrb);
#endif
#if BIND_SDLJoyButtonEvent_TYPE
void mrb_SDL_SDLJoyButtonEvent_init(mrb_state* mrb);
#endif
#if BIND_SDLJoyDeviceEvent_TYPE
void mrb_SDL_SDLJoyDeviceEvent_init(mrb_state* mrb);
#endif
#if BIND_SDLJoyHatEvent_TYPE
void mrb_SDL_SDLJoyHatEvent_init(mrb_state* mrb);
#endif
#if BIND_SDLKeyboardEvent_TYPE
void mrb_SDL_SDLKeyboardEvent_init(mrb_state* mrb);
#endif
#if BIND_SDLKeysym_TYPE
void mrb_SDL_SDLKeysym_init(mrb_state* mrb);
#endif
#if BIND_SDLMouseButtonEvent_TYPE
void mrb_SDL_SDLMouseButtonEvent_init(mrb_state* mrb);
#endif
#if BIND_SDLMouseMotionEvent_TYPE
void mrb_SDL_SDLMouseMotionEvent_init(mrb_state* mrb);
#endif
#if BIND_SDLMouseWheelEvent_TYPE
void mrb_SDL_SDLMouseWheelEvent_init(mrb_state* mrb);
#endif
#if BIND_SDLMultiGestureEvent_TYPE
void mrb_SDL_SDLMultiGestureEvent_init(mrb_state* mrb);
#endif
#if BIND_SDLMutex_TYPE
void mrb_SDL_SDLMutex_init(mrb_state* mrb);
#endif
#if BIND_SDLOSEvent_TYPE
void mrb_SDL_SDLOSEvent_init(mrb_state* mrb);
#endif
#if BIND_SDLPalette_TYPE
void mrb_SDL_SDLPalette_init(mrb_state* mrb);
#endif
#if BIND_SDLPixelFormat_TYPE
void mrb_SDL_SDLPixelFormat_init(mrb_state* mrb);
#endif
#if BIND_SDLPoint_TYPE
void mrb_SDL_SDLPoint_init(mrb_state* mrb);
#endif
#if BIND_SDLQuitEvent_TYPE
void mrb_SDL_SDLQuitEvent_init(mrb_state* mrb);
#endif
#if BIND_SDLRect_TYPE
void mrb_SDL_SDLRect_init(mrb_state* mrb);
#endif
#if BIND_SDLRenderer_TYPE
void mrb_SDL_SDLRenderer_init(mrb_state* mrb);
#endif
#if BIND_SDLRendererInfo_TYPE
void mrb_SDL_SDLRendererInfo_init(mrb_state* mrb);
#endif
#if BIND_SDLRWops_TYPE
void mrb_SDL_SDLRWops_init(mrb_state* mrb);
#endif
#if BIND_SDLSemaphore_TYPE
void mrb_SDL_SDLSemaphore_init(mrb_state* mrb);
#endif
#if BIND_SDLSurface_TYPE
void mrb_SDL_SDLSurface_init(mrb_state* mrb);
#endif
#if BIND_SDLSysWMEvent_TYPE
void mrb_SDL_SDLSysWMEvent_init(mrb_state* mrb);
#endif
#if BIND_SDLSysWMinfo_TYPE
void mrb_SDL_SDLSysWMinfo_init(mrb_state* mrb);
#endif
#if BIND_SDLSysWMmsg_TYPE
void mrb_SDL_SDLSysWMmsg_init(mrb_state* mrb);
#endif
#if BIND_SDLTextEditingEvent_TYPE
void mrb_SDL_SDLTextEditingEvent_init(mrb_state* mrb);
#endif
#if BIND_SDLTextInputEvent_TYPE
void mrb_SDL_SDLTextInputEvent_init(mrb_state* mrb);
#endif
#if BIND_SDLTexture_TYPE
void mrb_SDL_SDLTexture_init(mrb_state* mrb);
#endif
#if BIND_SDLThread_TYPE
void mrb_SDL_SDLThread_init(mrb_state* mrb);
#endif
#if BIND_SDLTouchFingerEvent_TYPE
void mrb_SDL_SDLTouchFingerEvent_init(mrb_state* mrb);
#endif
#if BIND_SDLUserEvent_TYPE
void mrb_SDL_SDLUserEvent_init(mrb_state* mrb);
#endif
#if BIND_SDLVersion_TYPE
void mrb_SDL_SDLVersion_init(mrb_state* mrb);
#endif
#if BIND_SDLWindow_TYPE
void mrb_SDL_SDLWindow_init(mrb_state* mrb);
#endif
#if BIND_SDLWindowEvent_TYPE
void mrb_SDL_SDLWindowEvent_init(mrb_state* mrb);
#endif
#if BIND_SDLWindowShapeMode_TYPE
void mrb_SDL_SDLWindowShapeMode_init(mrb_state* mrb);
#endif
#if BIND_SDLTestSurfaceImageS_TYPE
void mrb_SDL_SDLTestSurfaceImageS_init(mrb_state* mrb);
#endif
#if BIND_SDLTestTestCaseReference_TYPE
void mrb_SDL_SDLTestTestCaseReference_init(mrb_state* mrb);
#endif
#if BIND_SDLTestTestSuiteReference_TYPE
void mrb_SDL_SDLTestTestSuiteReference_init(mrb_state* mrb);
#endif

/*
 * Boxing declarations
 * -------------------
 *
 * These declarations are controlled by the macros in the
 * "Class Bindings Options" section above.
 */

/*
* Extra wrapper over native pointer to indicate who owns this memory.
* (Either mruby, and it should be garage collected, or C, and it shouldn't be)
* Considered using the LSB of the pointer itself, but I don't think I can
* be assured that all memory is word-aligned (especially when C libraries
* implement their own memory management techniques like memory pools)
*/
typedef struct mruby_to_native_ref_ {
  /* If true, indicates that the object should be freed when
   * mruby GC's the ruby object containing this pointer. This
   * is set to true when an object is boxed via the `giftwrap`
   * or `gift_{type}_ptr_set` functions.
   */
  unsigned char belongs_to_ruby;

  /* A pointer to the native object */
  void* obj;

  /* For the convenience of the binding writer,
   * the data pointer can be used to associate arbitrary
   * data with a reference to a C object. This could
   * be a function pointer to invoke instead of `free` on GC,
   * a pointer back to the RObject, or even cast to an integer type
   * and used as a bit field. You get the idea...
   */
  void* data;
} mruby_to_native_ref;

#if BIND_SDLAtomicT_TYPE
mrb_value
mruby_box_SDL_atomic_t(mrb_state* mrb, SDL_atomic_t *unboxed);

mrb_value
mruby_giftwrap_SDL_atomic_t(mrb_state* mrb, SDL_atomic_t *unboxed);

void
mruby_set_SDL_atomic_t_data_ptr(mrb_value obj, SDL_atomic_t *unboxed);

void
mruby_gift_SDL_atomic_t_data_ptr(mrb_value obj, SDL_atomic_t *unboxed);

SDL_atomic_t *
mruby_unbox_SDL_atomic_t(mrb_value boxed);
#endif

#if BIND_SDLDisplayMode_TYPE
mrb_value
mruby_box_SDL_DisplayMode(mrb_state* mrb, SDL_DisplayMode *unboxed);

mrb_value
mruby_giftwrap_SDL_DisplayMode(mrb_state* mrb, SDL_DisplayMode *unboxed);

void
mruby_set_SDL_DisplayMode_data_ptr(mrb_value obj, SDL_DisplayMode *unboxed);

void
mruby_gift_SDL_DisplayMode_data_ptr(mrb_value obj, SDL_DisplayMode *unboxed);

SDL_DisplayMode *
mruby_unbox_SDL_DisplayMode(mrb_value boxed);
#endif

#if BIND_SDLJoystickGUID_TYPE
mrb_value
mruby_box_SDL_JoystickGUID(mrb_state* mrb, SDL_JoystickGUID *unboxed);

mrb_value
mruby_giftwrap_SDL_JoystickGUID(mrb_state* mrb, SDL_JoystickGUID *unboxed);

void
mruby_set_SDL_JoystickGUID_data_ptr(mrb_value obj, SDL_JoystickGUID *unboxed);

void
mruby_gift_SDL_JoystickGUID_data_ptr(mrb_value obj, SDL_JoystickGUID *unboxed);

SDL_JoystickGUID *
mruby_unbox_SDL_JoystickGUID(mrb_value boxed);
#endif

#if BIND_SDLMessageBoxButtonData_TYPE
mrb_value
mruby_box_SDL_MessageBoxButtonData(mrb_state* mrb, SDL_MessageBoxButtonData *unboxed);

mrb_value
mruby_giftwrap_SDL_MessageBoxButtonData(mrb_state* mrb, SDL_MessageBoxButtonData *unboxed);

void
mruby_set_SDL_MessageBoxButtonData_data_ptr(mrb_value obj, SDL_MessageBoxButtonData *unboxed);

void
mruby_gift_SDL_MessageBoxButtonData_data_ptr(mrb_value obj, SDL_MessageBoxButtonData *unboxed);

SDL_MessageBoxButtonData *
mruby_unbox_SDL_MessageBoxButtonData(mrb_value boxed);
#endif

#if BIND_SDLMessageBoxColor_TYPE
mrb_value
mruby_box_SDL_MessageBoxColor(mrb_state* mrb, SDL_MessageBoxColor *unboxed);

mrb_value
mruby_giftwrap_SDL_MessageBoxColor(mrb_state* mrb, SDL_MessageBoxColor *unboxed);

void
mruby_set_SDL_MessageBoxColor_data_ptr(mrb_value obj, SDL_MessageBoxColor *unboxed);

void
mruby_gift_SDL_MessageBoxColor_data_ptr(mrb_value obj, SDL_MessageBoxColor *unboxed);

SDL_MessageBoxColor *
mruby_unbox_SDL_MessageBoxColor(mrb_value boxed);
#endif

#if BIND_SDLMessageBoxColorScheme_TYPE
mrb_value
mruby_box_SDL_MessageBoxColorScheme(mrb_state* mrb, SDL_MessageBoxColorScheme *unboxed);

mrb_value
mruby_giftwrap_SDL_MessageBoxColorScheme(mrb_state* mrb, SDL_MessageBoxColorScheme *unboxed);

void
mruby_set_SDL_MessageBoxColorScheme_data_ptr(mrb_value obj, SDL_MessageBoxColorScheme *unboxed);

void
mruby_gift_SDL_MessageBoxColorScheme_data_ptr(mrb_value obj, SDL_MessageBoxColorScheme *unboxed);

SDL_MessageBoxColorScheme *
mruby_unbox_SDL_MessageBoxColorScheme(mrb_value boxed);
#endif

#if BIND_SDLMessageBoxData_TYPE
mrb_value
mruby_box_SDL_MessageBoxData(mrb_state* mrb, SDL_MessageBoxData *unboxed);

mrb_value
mruby_giftwrap_SDL_MessageBoxData(mrb_state* mrb, SDL_MessageBoxData *unboxed);

void
mruby_set_SDL_MessageBoxData_data_ptr(mrb_value obj, SDL_MessageBoxData *unboxed);

void
mruby_gift_SDL_MessageBoxData_data_ptr(mrb_value obj, SDL_MessageBoxData *unboxed);

SDL_MessageBoxData *
mruby_unbox_SDL_MessageBoxData(mrb_value boxed);
#endif

#if BIND_SDLTestCommonState_TYPE
mrb_value
mruby_box_SDLTest_CommonState(mrb_state* mrb, SDLTest_CommonState *unboxed);

mrb_value
mruby_giftwrap_SDLTest_CommonState(mrb_state* mrb, SDLTest_CommonState *unboxed);

void
mruby_set_SDLTest_CommonState_data_ptr(mrb_value obj, SDLTest_CommonState *unboxed);

void
mruby_gift_SDLTest_CommonState_data_ptr(mrb_value obj, SDLTest_CommonState *unboxed);

SDLTest_CommonState *
mruby_unbox_SDLTest_CommonState(mrb_value boxed);
#endif

#if BIND_SDLTestCrc32Context_TYPE
mrb_value
mruby_box_SDLTest_Crc32Context(mrb_state* mrb, SDLTest_Crc32Context *unboxed);

mrb_value
mruby_giftwrap_SDLTest_Crc32Context(mrb_state* mrb, SDLTest_Crc32Context *unboxed);

void
mruby_set_SDLTest_Crc32Context_data_ptr(mrb_value obj, SDLTest_Crc32Context *unboxed);

void
mruby_gift_SDLTest_Crc32Context_data_ptr(mrb_value obj, SDLTest_Crc32Context *unboxed);

SDLTest_Crc32Context *
mruby_unbox_SDLTest_Crc32Context(mrb_value boxed);
#endif

#if BIND_SDLTestMd5Context_TYPE
mrb_value
mruby_box_SDLTest_Md5Context(mrb_state* mrb, SDLTest_Md5Context *unboxed);

mrb_value
mruby_giftwrap_SDLTest_Md5Context(mrb_state* mrb, SDLTest_Md5Context *unboxed);

void
mruby_set_SDLTest_Md5Context_data_ptr(mrb_value obj, SDLTest_Md5Context *unboxed);

void
mruby_gift_SDLTest_Md5Context_data_ptr(mrb_value obj, SDLTest_Md5Context *unboxed);

SDLTest_Md5Context *
mruby_unbox_SDLTest_Md5Context(mrb_value boxed);
#endif

#if BIND_SDLTestRandomContext_TYPE
mrb_value
mruby_box_SDLTest_RandomContext(mrb_state* mrb, SDLTest_RandomContext *unboxed);

mrb_value
mruby_giftwrap_SDLTest_RandomContext(mrb_state* mrb, SDLTest_RandomContext *unboxed);

void
mruby_set_SDLTest_RandomContext_data_ptr(mrb_value obj, SDLTest_RandomContext *unboxed);

void
mruby_gift_SDLTest_RandomContext_data_ptr(mrb_value obj, SDLTest_RandomContext *unboxed);

SDLTest_RandomContext *
mruby_unbox_SDLTest_RandomContext(mrb_value boxed);
#endif

#if BIND_ClContext_TYPE
mrb_value
mruby_box__cl_context(mrb_state* mrb, struct _cl_context *unboxed);

mrb_value
mruby_giftwrap__cl_context(mrb_state* mrb, struct _cl_context *unboxed);

void
mruby_set__cl_context_data_ptr(mrb_value obj, struct _cl_context *unboxed);

void
mruby_gift__cl_context_data_ptr(mrb_value obj, struct _cl_context *unboxed);

struct _cl_context *
mruby_unbox__cl_context(mrb_value boxed);
#endif

#if BIND_ClEvent_TYPE
mrb_value
mruby_box__cl_event(mrb_state* mrb, struct _cl_event *unboxed);

mrb_value
mruby_giftwrap__cl_event(mrb_state* mrb, struct _cl_event *unboxed);

void
mruby_set__cl_event_data_ptr(mrb_value obj, struct _cl_event *unboxed);

void
mruby_gift__cl_event_data_ptr(mrb_value obj, struct _cl_event *unboxed);

struct _cl_event *
mruby_unbox__cl_event(mrb_value boxed);
#endif

#if BIND_NSWindow_TYPE
mrb_value
mruby_box__NSWindow(mrb_state* mrb, struct _NSWindow *unboxed);

mrb_value
mruby_giftwrap__NSWindow(mrb_state* mrb, struct _NSWindow *unboxed);

void
mruby_set__NSWindow_data_ptr(mrb_value obj, struct _NSWindow *unboxed);

void
mruby_gift__NSWindow_data_ptr(mrb_value obj, struct _NSWindow *unboxed);

struct _NSWindow *
mruby_unbox__NSWindow(mrb_value boxed);
#endif

#if BIND_SDLGameController_TYPE
mrb_value
mruby_box__SDL_GameController(mrb_state* mrb, struct _SDL_GameController *unboxed);

mrb_value
mruby_giftwrap__SDL_GameController(mrb_state* mrb, struct _SDL_GameController *unboxed);

void
mruby_set__SDL_GameController_data_ptr(mrb_value obj, struct _SDL_GameController *unboxed);

void
mruby_gift__SDL_GameController_data_ptr(mrb_value obj, struct _SDL_GameController *unboxed);

struct _SDL_GameController *
mruby_unbox__SDL_GameController(mrb_value boxed);
#endif

#if BIND_SDLHaptic_TYPE
mrb_value
mruby_box__SDL_Haptic(mrb_state* mrb, struct _SDL_Haptic *unboxed);

mrb_value
mruby_giftwrap__SDL_Haptic(mrb_state* mrb, struct _SDL_Haptic *unboxed);

void
mruby_set__SDL_Haptic_data_ptr(mrb_value obj, struct _SDL_Haptic *unboxed);

void
mruby_gift__SDL_Haptic_data_ptr(mrb_value obj, struct _SDL_Haptic *unboxed);

struct _SDL_Haptic *
mruby_unbox__SDL_Haptic(mrb_value boxed);
#endif

#if BIND_SDLIconvT_TYPE
mrb_value
mruby_box__SDL_iconv_t(mrb_state* mrb, struct _SDL_iconv_t *unboxed);

mrb_value
mruby_giftwrap__SDL_iconv_t(mrb_state* mrb, struct _SDL_iconv_t *unboxed);

void
mruby_set__SDL_iconv_t_data_ptr(mrb_value obj, struct _SDL_iconv_t *unboxed);

void
mruby_gift__SDL_iconv_t_data_ptr(mrb_value obj, struct _SDL_iconv_t *unboxed);

struct _SDL_iconv_t *
mruby_unbox__SDL_iconv_t(mrb_value boxed);
#endif

#if BIND_SDLJoystick_TYPE
mrb_value
mruby_box__SDL_Joystick(mrb_state* mrb, struct _SDL_Joystick *unboxed);

mrb_value
mruby_giftwrap__SDL_Joystick(mrb_state* mrb, struct _SDL_Joystick *unboxed);

void
mruby_set__SDL_Joystick_data_ptr(mrb_value obj, struct _SDL_Joystick *unboxed);

void
mruby_gift__SDL_Joystick_data_ptr(mrb_value obj, struct _SDL_Joystick *unboxed);

struct _SDL_Joystick *
mruby_unbox__SDL_Joystick(mrb_value boxed);
#endif

#if BIND_SDLAssertData_TYPE
mrb_value
mruby_box_SDL_assert_data(mrb_state* mrb, struct SDL_assert_data *unboxed);

mrb_value
mruby_giftwrap_SDL_assert_data(mrb_state* mrb, struct SDL_assert_data *unboxed);

void
mruby_set_SDL_assert_data_data_ptr(mrb_value obj, struct SDL_assert_data *unboxed);

void
mruby_gift_SDL_assert_data_data_ptr(mrb_value obj, struct SDL_assert_data *unboxed);

struct SDL_assert_data *
mruby_unbox_SDL_assert_data(mrb_value boxed);
#endif

#if BIND_SDLAudioCVT_TYPE
mrb_value
mruby_box_SDL_AudioCVT(mrb_state* mrb, struct SDL_AudioCVT *unboxed);

mrb_value
mruby_giftwrap_SDL_AudioCVT(mrb_state* mrb, struct SDL_AudioCVT *unboxed);

void
mruby_set_SDL_AudioCVT_data_ptr(mrb_value obj, struct SDL_AudioCVT *unboxed);

void
mruby_gift_SDL_AudioCVT_data_ptr(mrb_value obj, struct SDL_AudioCVT *unboxed);

struct SDL_AudioCVT *
mruby_unbox_SDL_AudioCVT(mrb_value boxed);
#endif

#if BIND_SDLAudioSpec_TYPE
mrb_value
mruby_box_SDL_AudioSpec(mrb_state* mrb, struct SDL_AudioSpec *unboxed);

mrb_value
mruby_giftwrap_SDL_AudioSpec(mrb_state* mrb, struct SDL_AudioSpec *unboxed);

void
mruby_set_SDL_AudioSpec_data_ptr(mrb_value obj, struct SDL_AudioSpec *unboxed);

void
mruby_gift_SDL_AudioSpec_data_ptr(mrb_value obj, struct SDL_AudioSpec *unboxed);

struct SDL_AudioSpec *
mruby_unbox_SDL_AudioSpec(mrb_value boxed);
#endif

#if BIND_SDLBlitMap_TYPE
mrb_value
mruby_box_SDL_BlitMap(mrb_state* mrb, struct SDL_BlitMap *unboxed);

mrb_value
mruby_giftwrap_SDL_BlitMap(mrb_state* mrb, struct SDL_BlitMap *unboxed);

void
mruby_set_SDL_BlitMap_data_ptr(mrb_value obj, struct SDL_BlitMap *unboxed);

void
mruby_gift_SDL_BlitMap_data_ptr(mrb_value obj, struct SDL_BlitMap *unboxed);

struct SDL_BlitMap *
mruby_unbox_SDL_BlitMap(mrb_value boxed);
#endif

#if BIND_SDLColor_TYPE
mrb_value
mruby_box_SDL_Color(mrb_state* mrb, struct SDL_Color *unboxed);

mrb_value
mruby_giftwrap_SDL_Color(mrb_state* mrb, struct SDL_Color *unboxed);

void
mruby_set_SDL_Color_data_ptr(mrb_value obj, struct SDL_Color *unboxed);

void
mruby_gift_SDL_Color_data_ptr(mrb_value obj, struct SDL_Color *unboxed);

struct SDL_Color *
mruby_unbox_SDL_Color(mrb_value boxed);
#endif

#if BIND_SDLCommonEvent_TYPE
mrb_value
mruby_box_SDL_CommonEvent(mrb_state* mrb, struct SDL_CommonEvent *unboxed);

mrb_value
mruby_giftwrap_SDL_CommonEvent(mrb_state* mrb, struct SDL_CommonEvent *unboxed);

void
mruby_set_SDL_CommonEvent_data_ptr(mrb_value obj, struct SDL_CommonEvent *unboxed);

void
mruby_gift_SDL_CommonEvent_data_ptr(mrb_value obj, struct SDL_CommonEvent *unboxed);

struct SDL_CommonEvent *
mruby_unbox_SDL_CommonEvent(mrb_value boxed);
#endif

#if BIND_SDLCond_TYPE
mrb_value
mruby_box_SDL_cond(mrb_state* mrb, struct SDL_cond *unboxed);

mrb_value
mruby_giftwrap_SDL_cond(mrb_state* mrb, struct SDL_cond *unboxed);

void
mruby_set_SDL_cond_data_ptr(mrb_value obj, struct SDL_cond *unboxed);

void
mruby_gift_SDL_cond_data_ptr(mrb_value obj, struct SDL_cond *unboxed);

struct SDL_cond *
mruby_unbox_SDL_cond(mrb_value boxed);
#endif

#if BIND_SDLControllerAxisEvent_TYPE
mrb_value
mruby_box_SDL_ControllerAxisEvent(mrb_state* mrb, struct SDL_ControllerAxisEvent *unboxed);

mrb_value
mruby_giftwrap_SDL_ControllerAxisEvent(mrb_state* mrb, struct SDL_ControllerAxisEvent *unboxed);

void
mruby_set_SDL_ControllerAxisEvent_data_ptr(mrb_value obj, struct SDL_ControllerAxisEvent *unboxed);

void
mruby_gift_SDL_ControllerAxisEvent_data_ptr(mrb_value obj, struct SDL_ControllerAxisEvent *unboxed);

struct SDL_ControllerAxisEvent *
mruby_unbox_SDL_ControllerAxisEvent(mrb_value boxed);
#endif

#if BIND_SDLControllerButtonEvent_TYPE
mrb_value
mruby_box_SDL_ControllerButtonEvent(mrb_state* mrb, struct SDL_ControllerButtonEvent *unboxed);

mrb_value
mruby_giftwrap_SDL_ControllerButtonEvent(mrb_state* mrb, struct SDL_ControllerButtonEvent *unboxed);

void
mruby_set_SDL_ControllerButtonEvent_data_ptr(mrb_value obj, struct SDL_ControllerButtonEvent *unboxed);

void
mruby_gift_SDL_ControllerButtonEvent_data_ptr(mrb_value obj, struct SDL_ControllerButtonEvent *unboxed);

struct SDL_ControllerButtonEvent *
mruby_unbox_SDL_ControllerButtonEvent(mrb_value boxed);
#endif

#if BIND_SDLControllerDeviceEvent_TYPE
mrb_value
mruby_box_SDL_ControllerDeviceEvent(mrb_state* mrb, struct SDL_ControllerDeviceEvent *unboxed);

mrb_value
mruby_giftwrap_SDL_ControllerDeviceEvent(mrb_state* mrb, struct SDL_ControllerDeviceEvent *unboxed);

void
mruby_set_SDL_ControllerDeviceEvent_data_ptr(mrb_value obj, struct SDL_ControllerDeviceEvent *unboxed);

void
mruby_gift_SDL_ControllerDeviceEvent_data_ptr(mrb_value obj, struct SDL_ControllerDeviceEvent *unboxed);

struct SDL_ControllerDeviceEvent *
mruby_unbox_SDL_ControllerDeviceEvent(mrb_value boxed);
#endif

#if BIND_SDLCursor_TYPE
mrb_value
mruby_box_SDL_Cursor(mrb_state* mrb, struct SDL_Cursor *unboxed);

mrb_value
mruby_giftwrap_SDL_Cursor(mrb_state* mrb, struct SDL_Cursor *unboxed);

void
mruby_set_SDL_Cursor_data_ptr(mrb_value obj, struct SDL_Cursor *unboxed);

void
mruby_gift_SDL_Cursor_data_ptr(mrb_value obj, struct SDL_Cursor *unboxed);

struct SDL_Cursor *
mruby_unbox_SDL_Cursor(mrb_value boxed);
#endif

#if BIND_SDLDollarGestureEvent_TYPE
mrb_value
mruby_box_SDL_DollarGestureEvent(mrb_state* mrb, struct SDL_DollarGestureEvent *unboxed);

mrb_value
mruby_giftwrap_SDL_DollarGestureEvent(mrb_state* mrb, struct SDL_DollarGestureEvent *unboxed);

void
mruby_set_SDL_DollarGestureEvent_data_ptr(mrb_value obj, struct SDL_DollarGestureEvent *unboxed);

void
mruby_gift_SDL_DollarGestureEvent_data_ptr(mrb_value obj, struct SDL_DollarGestureEvent *unboxed);

struct SDL_DollarGestureEvent *
mruby_unbox_SDL_DollarGestureEvent(mrb_value boxed);
#endif

#if BIND_SDLDropEvent_TYPE
mrb_value
mruby_box_SDL_DropEvent(mrb_state* mrb, struct SDL_DropEvent *unboxed);

mrb_value
mruby_giftwrap_SDL_DropEvent(mrb_state* mrb, struct SDL_DropEvent *unboxed);

void
mruby_set_SDL_DropEvent_data_ptr(mrb_value obj, struct SDL_DropEvent *unboxed);

void
mruby_gift_SDL_DropEvent_data_ptr(mrb_value obj, struct SDL_DropEvent *unboxed);

struct SDL_DropEvent *
mruby_unbox_SDL_DropEvent(mrb_value boxed);
#endif

#if BIND_SDLFinger_TYPE
mrb_value
mruby_box_SDL_Finger(mrb_state* mrb, struct SDL_Finger *unboxed);

mrb_value
mruby_giftwrap_SDL_Finger(mrb_state* mrb, struct SDL_Finger *unboxed);

void
mruby_set_SDL_Finger_data_ptr(mrb_value obj, struct SDL_Finger *unboxed);

void
mruby_gift_SDL_Finger_data_ptr(mrb_value obj, struct SDL_Finger *unboxed);

struct SDL_Finger *
mruby_unbox_SDL_Finger(mrb_value boxed);
#endif

#if BIND_SDLGameControllerButtonBind_TYPE
mrb_value
mruby_box_SDL_GameControllerButtonBind(mrb_state* mrb, struct SDL_GameControllerButtonBind *unboxed);

mrb_value
mruby_giftwrap_SDL_GameControllerButtonBind(mrb_state* mrb, struct SDL_GameControllerButtonBind *unboxed);

void
mruby_set_SDL_GameControllerButtonBind_data_ptr(mrb_value obj, struct SDL_GameControllerButtonBind *unboxed);

void
mruby_gift_SDL_GameControllerButtonBind_data_ptr(mrb_value obj, struct SDL_GameControllerButtonBind *unboxed);

struct SDL_GameControllerButtonBind *
mruby_unbox_SDL_GameControllerButtonBind(mrb_value boxed);
#endif

#if BIND_SDLHapticCondition_TYPE
mrb_value
mruby_box_SDL_HapticCondition(mrb_state* mrb, struct SDL_HapticCondition *unboxed);

mrb_value
mruby_giftwrap_SDL_HapticCondition(mrb_state* mrb, struct SDL_HapticCondition *unboxed);

void
mruby_set_SDL_HapticCondition_data_ptr(mrb_value obj, struct SDL_HapticCondition *unboxed);

void
mruby_gift_SDL_HapticCondition_data_ptr(mrb_value obj, struct SDL_HapticCondition *unboxed);

struct SDL_HapticCondition *
mruby_unbox_SDL_HapticCondition(mrb_value boxed);
#endif

#if BIND_SDLHapticConstant_TYPE
mrb_value
mruby_box_SDL_HapticConstant(mrb_state* mrb, struct SDL_HapticConstant *unboxed);

mrb_value
mruby_giftwrap_SDL_HapticConstant(mrb_state* mrb, struct SDL_HapticConstant *unboxed);

void
mruby_set_SDL_HapticConstant_data_ptr(mrb_value obj, struct SDL_HapticConstant *unboxed);

void
mruby_gift_SDL_HapticConstant_data_ptr(mrb_value obj, struct SDL_HapticConstant *unboxed);

struct SDL_HapticConstant *
mruby_unbox_SDL_HapticConstant(mrb_value boxed);
#endif

#if BIND_SDLHapticCustom_TYPE
mrb_value
mruby_box_SDL_HapticCustom(mrb_state* mrb, struct SDL_HapticCustom *unboxed);

mrb_value
mruby_giftwrap_SDL_HapticCustom(mrb_state* mrb, struct SDL_HapticCustom *unboxed);

void
mruby_set_SDL_HapticCustom_data_ptr(mrb_value obj, struct SDL_HapticCustom *unboxed);

void
mruby_gift_SDL_HapticCustom_data_ptr(mrb_value obj, struct SDL_HapticCustom *unboxed);

struct SDL_HapticCustom *
mruby_unbox_SDL_HapticCustom(mrb_value boxed);
#endif

#if BIND_SDLHapticDirection_TYPE
mrb_value
mruby_box_SDL_HapticDirection(mrb_state* mrb, struct SDL_HapticDirection *unboxed);

mrb_value
mruby_giftwrap_SDL_HapticDirection(mrb_state* mrb, struct SDL_HapticDirection *unboxed);

void
mruby_set_SDL_HapticDirection_data_ptr(mrb_value obj, struct SDL_HapticDirection *unboxed);

void
mruby_gift_SDL_HapticDirection_data_ptr(mrb_value obj, struct SDL_HapticDirection *unboxed);

struct SDL_HapticDirection *
mruby_unbox_SDL_HapticDirection(mrb_value boxed);
#endif

#if BIND_SDLHapticLeftRight_TYPE
mrb_value
mruby_box_SDL_HapticLeftRight(mrb_state* mrb, struct SDL_HapticLeftRight *unboxed);

mrb_value
mruby_giftwrap_SDL_HapticLeftRight(mrb_state* mrb, struct SDL_HapticLeftRight *unboxed);

void
mruby_set_SDL_HapticLeftRight_data_ptr(mrb_value obj, struct SDL_HapticLeftRight *unboxed);

void
mruby_gift_SDL_HapticLeftRight_data_ptr(mrb_value obj, struct SDL_HapticLeftRight *unboxed);

struct SDL_HapticLeftRight *
mruby_unbox_SDL_HapticLeftRight(mrb_value boxed);
#endif

#if BIND_SDLHapticPeriodic_TYPE
mrb_value
mruby_box_SDL_HapticPeriodic(mrb_state* mrb, struct SDL_HapticPeriodic *unboxed);

mrb_value
mruby_giftwrap_SDL_HapticPeriodic(mrb_state* mrb, struct SDL_HapticPeriodic *unboxed);

void
mruby_set_SDL_HapticPeriodic_data_ptr(mrb_value obj, struct SDL_HapticPeriodic *unboxed);

void
mruby_gift_SDL_HapticPeriodic_data_ptr(mrb_value obj, struct SDL_HapticPeriodic *unboxed);

struct SDL_HapticPeriodic *
mruby_unbox_SDL_HapticPeriodic(mrb_value boxed);
#endif

#if BIND_SDLHapticRamp_TYPE
mrb_value
mruby_box_SDL_HapticRamp(mrb_state* mrb, struct SDL_HapticRamp *unboxed);

mrb_value
mruby_giftwrap_SDL_HapticRamp(mrb_state* mrb, struct SDL_HapticRamp *unboxed);

void
mruby_set_SDL_HapticRamp_data_ptr(mrb_value obj, struct SDL_HapticRamp *unboxed);

void
mruby_gift_SDL_HapticRamp_data_ptr(mrb_value obj, struct SDL_HapticRamp *unboxed);

struct SDL_HapticRamp *
mruby_unbox_SDL_HapticRamp(mrb_value boxed);
#endif

#if BIND_SDLJoyAxisEvent_TYPE
mrb_value
mruby_box_SDL_JoyAxisEvent(mrb_state* mrb, struct SDL_JoyAxisEvent *unboxed);

mrb_value
mruby_giftwrap_SDL_JoyAxisEvent(mrb_state* mrb, struct SDL_JoyAxisEvent *unboxed);

void
mruby_set_SDL_JoyAxisEvent_data_ptr(mrb_value obj, struct SDL_JoyAxisEvent *unboxed);

void
mruby_gift_SDL_JoyAxisEvent_data_ptr(mrb_value obj, struct SDL_JoyAxisEvent *unboxed);

struct SDL_JoyAxisEvent *
mruby_unbox_SDL_JoyAxisEvent(mrb_value boxed);
#endif

#if BIND_SDLJoyBallEvent_TYPE
mrb_value
mruby_box_SDL_JoyBallEvent(mrb_state* mrb, struct SDL_JoyBallEvent *unboxed);

mrb_value
mruby_giftwrap_SDL_JoyBallEvent(mrb_state* mrb, struct SDL_JoyBallEvent *unboxed);

void
mruby_set_SDL_JoyBallEvent_data_ptr(mrb_value obj, struct SDL_JoyBallEvent *unboxed);

void
mruby_gift_SDL_JoyBallEvent_data_ptr(mrb_value obj, struct SDL_JoyBallEvent *unboxed);

struct SDL_JoyBallEvent *
mruby_unbox_SDL_JoyBallEvent(mrb_value boxed);
#endif

#if BIND_SDLJoyButtonEvent_TYPE
mrb_value
mruby_box_SDL_JoyButtonEvent(mrb_state* mrb, struct SDL_JoyButtonEvent *unboxed);

mrb_value
mruby_giftwrap_SDL_JoyButtonEvent(mrb_state* mrb, struct SDL_JoyButtonEvent *unboxed);

void
mruby_set_SDL_JoyButtonEvent_data_ptr(mrb_value obj, struct SDL_JoyButtonEvent *unboxed);

void
mruby_gift_SDL_JoyButtonEvent_data_ptr(mrb_value obj, struct SDL_JoyButtonEvent *unboxed);

struct SDL_JoyButtonEvent *
mruby_unbox_SDL_JoyButtonEvent(mrb_value boxed);
#endif

#if BIND_SDLJoyDeviceEvent_TYPE
mrb_value
mruby_box_SDL_JoyDeviceEvent(mrb_state* mrb, struct SDL_JoyDeviceEvent *unboxed);

mrb_value
mruby_giftwrap_SDL_JoyDeviceEvent(mrb_state* mrb, struct SDL_JoyDeviceEvent *unboxed);

void
mruby_set_SDL_JoyDeviceEvent_data_ptr(mrb_value obj, struct SDL_JoyDeviceEvent *unboxed);

void
mruby_gift_SDL_JoyDeviceEvent_data_ptr(mrb_value obj, struct SDL_JoyDeviceEvent *unboxed);

struct SDL_JoyDeviceEvent *
mruby_unbox_SDL_JoyDeviceEvent(mrb_value boxed);
#endif

#if BIND_SDLJoyHatEvent_TYPE
mrb_value
mruby_box_SDL_JoyHatEvent(mrb_state* mrb, struct SDL_JoyHatEvent *unboxed);

mrb_value
mruby_giftwrap_SDL_JoyHatEvent(mrb_state* mrb, struct SDL_JoyHatEvent *unboxed);

void
mruby_set_SDL_JoyHatEvent_data_ptr(mrb_value obj, struct SDL_JoyHatEvent *unboxed);

void
mruby_gift_SDL_JoyHatEvent_data_ptr(mrb_value obj, struct SDL_JoyHatEvent *unboxed);

struct SDL_JoyHatEvent *
mruby_unbox_SDL_JoyHatEvent(mrb_value boxed);
#endif

#if BIND_SDLKeyboardEvent_TYPE
mrb_value
mruby_box_SDL_KeyboardEvent(mrb_state* mrb, struct SDL_KeyboardEvent *unboxed);

mrb_value
mruby_giftwrap_SDL_KeyboardEvent(mrb_state* mrb, struct SDL_KeyboardEvent *unboxed);

void
mruby_set_SDL_KeyboardEvent_data_ptr(mrb_value obj, struct SDL_KeyboardEvent *unboxed);

void
mruby_gift_SDL_KeyboardEvent_data_ptr(mrb_value obj, struct SDL_KeyboardEvent *unboxed);

struct SDL_KeyboardEvent *
mruby_unbox_SDL_KeyboardEvent(mrb_value boxed);
#endif

#if BIND_SDLKeysym_TYPE
mrb_value
mruby_box_SDL_Keysym(mrb_state* mrb, struct SDL_Keysym *unboxed);

mrb_value
mruby_giftwrap_SDL_Keysym(mrb_state* mrb, struct SDL_Keysym *unboxed);

void
mruby_set_SDL_Keysym_data_ptr(mrb_value obj, struct SDL_Keysym *unboxed);

void
mruby_gift_SDL_Keysym_data_ptr(mrb_value obj, struct SDL_Keysym *unboxed);

struct SDL_Keysym *
mruby_unbox_SDL_Keysym(mrb_value boxed);
#endif

#if BIND_SDLMouseButtonEvent_TYPE
mrb_value
mruby_box_SDL_MouseButtonEvent(mrb_state* mrb, struct SDL_MouseButtonEvent *unboxed);

mrb_value
mruby_giftwrap_SDL_MouseButtonEvent(mrb_state* mrb, struct SDL_MouseButtonEvent *unboxed);

void
mruby_set_SDL_MouseButtonEvent_data_ptr(mrb_value obj, struct SDL_MouseButtonEvent *unboxed);

void
mruby_gift_SDL_MouseButtonEvent_data_ptr(mrb_value obj, struct SDL_MouseButtonEvent *unboxed);

struct SDL_MouseButtonEvent *
mruby_unbox_SDL_MouseButtonEvent(mrb_value boxed);
#endif

#if BIND_SDLMouseMotionEvent_TYPE
mrb_value
mruby_box_SDL_MouseMotionEvent(mrb_state* mrb, struct SDL_MouseMotionEvent *unboxed);

mrb_value
mruby_giftwrap_SDL_MouseMotionEvent(mrb_state* mrb, struct SDL_MouseMotionEvent *unboxed);

void
mruby_set_SDL_MouseMotionEvent_data_ptr(mrb_value obj, struct SDL_MouseMotionEvent *unboxed);

void
mruby_gift_SDL_MouseMotionEvent_data_ptr(mrb_value obj, struct SDL_MouseMotionEvent *unboxed);

struct SDL_MouseMotionEvent *
mruby_unbox_SDL_MouseMotionEvent(mrb_value boxed);
#endif

#if BIND_SDLMouseWheelEvent_TYPE
mrb_value
mruby_box_SDL_MouseWheelEvent(mrb_state* mrb, struct SDL_MouseWheelEvent *unboxed);

mrb_value
mruby_giftwrap_SDL_MouseWheelEvent(mrb_state* mrb, struct SDL_MouseWheelEvent *unboxed);

void
mruby_set_SDL_MouseWheelEvent_data_ptr(mrb_value obj, struct SDL_MouseWheelEvent *unboxed);

void
mruby_gift_SDL_MouseWheelEvent_data_ptr(mrb_value obj, struct SDL_MouseWheelEvent *unboxed);

struct SDL_MouseWheelEvent *
mruby_unbox_SDL_MouseWheelEvent(mrb_value boxed);
#endif

#if BIND_SDLMultiGestureEvent_TYPE
mrb_value
mruby_box_SDL_MultiGestureEvent(mrb_state* mrb, struct SDL_MultiGestureEvent *unboxed);

mrb_value
mruby_giftwrap_SDL_MultiGestureEvent(mrb_state* mrb, struct SDL_MultiGestureEvent *unboxed);

void
mruby_set_SDL_MultiGestureEvent_data_ptr(mrb_value obj, struct SDL_MultiGestureEvent *unboxed);

void
mruby_gift_SDL_MultiGestureEvent_data_ptr(mrb_value obj, struct SDL_MultiGestureEvent *unboxed);

struct SDL_MultiGestureEvent *
mruby_unbox_SDL_MultiGestureEvent(mrb_value boxed);
#endif

#if BIND_SDLMutex_TYPE
mrb_value
mruby_box_SDL_mutex(mrb_state* mrb, struct SDL_mutex *unboxed);

mrb_value
mruby_giftwrap_SDL_mutex(mrb_state* mrb, struct SDL_mutex *unboxed);

void
mruby_set_SDL_mutex_data_ptr(mrb_value obj, struct SDL_mutex *unboxed);

void
mruby_gift_SDL_mutex_data_ptr(mrb_value obj, struct SDL_mutex *unboxed);

struct SDL_mutex *
mruby_unbox_SDL_mutex(mrb_value boxed);
#endif

#if BIND_SDLOSEvent_TYPE
mrb_value
mruby_box_SDL_OSEvent(mrb_state* mrb, struct SDL_OSEvent *unboxed);

mrb_value
mruby_giftwrap_SDL_OSEvent(mrb_state* mrb, struct SDL_OSEvent *unboxed);

void
mruby_set_SDL_OSEvent_data_ptr(mrb_value obj, struct SDL_OSEvent *unboxed);

void
mruby_gift_SDL_OSEvent_data_ptr(mrb_value obj, struct SDL_OSEvent *unboxed);

struct SDL_OSEvent *
mruby_unbox_SDL_OSEvent(mrb_value boxed);
#endif

#if BIND_SDLPalette_TYPE
mrb_value
mruby_box_SDL_Palette(mrb_state* mrb, struct SDL_Palette *unboxed);

mrb_value
mruby_giftwrap_SDL_Palette(mrb_state* mrb, struct SDL_Palette *unboxed);

void
mruby_set_SDL_Palette_data_ptr(mrb_value obj, struct SDL_Palette *unboxed);

void
mruby_gift_SDL_Palette_data_ptr(mrb_value obj, struct SDL_Palette *unboxed);

struct SDL_Palette *
mruby_unbox_SDL_Palette(mrb_value boxed);
#endif

#if BIND_SDLPixelFormat_TYPE
mrb_value
mruby_box_SDL_PixelFormat(mrb_state* mrb, struct SDL_PixelFormat *unboxed);

mrb_value
mruby_giftwrap_SDL_PixelFormat(mrb_state* mrb, struct SDL_PixelFormat *unboxed);

void
mruby_set_SDL_PixelFormat_data_ptr(mrb_value obj, struct SDL_PixelFormat *unboxed);

void
mruby_gift_SDL_PixelFormat_data_ptr(mrb_value obj, struct SDL_PixelFormat *unboxed);

struct SDL_PixelFormat *
mruby_unbox_SDL_PixelFormat(mrb_value boxed);
#endif

#if BIND_SDLPoint_TYPE
mrb_value
mruby_box_SDL_Point(mrb_state* mrb, struct SDL_Point *unboxed);

mrb_value
mruby_giftwrap_SDL_Point(mrb_state* mrb, struct SDL_Point *unboxed);

void
mruby_set_SDL_Point_data_ptr(mrb_value obj, struct SDL_Point *unboxed);

void
mruby_gift_SDL_Point_data_ptr(mrb_value obj, struct SDL_Point *unboxed);

struct SDL_Point *
mruby_unbox_SDL_Point(mrb_value boxed);
#endif

#if BIND_SDLQuitEvent_TYPE
mrb_value
mruby_box_SDL_QuitEvent(mrb_state* mrb, struct SDL_QuitEvent *unboxed);

mrb_value
mruby_giftwrap_SDL_QuitEvent(mrb_state* mrb, struct SDL_QuitEvent *unboxed);

void
mruby_set_SDL_QuitEvent_data_ptr(mrb_value obj, struct SDL_QuitEvent *unboxed);

void
mruby_gift_SDL_QuitEvent_data_ptr(mrb_value obj, struct SDL_QuitEvent *unboxed);

struct SDL_QuitEvent *
mruby_unbox_SDL_QuitEvent(mrb_value boxed);
#endif

#if BIND_SDLRect_TYPE
mrb_value
mruby_box_SDL_Rect(mrb_state* mrb, struct SDL_Rect *unboxed);

mrb_value
mruby_giftwrap_SDL_Rect(mrb_state* mrb, struct SDL_Rect *unboxed);

void
mruby_set_SDL_Rect_data_ptr(mrb_value obj, struct SDL_Rect *unboxed);

void
mruby_gift_SDL_Rect_data_ptr(mrb_value obj, struct SDL_Rect *unboxed);

struct SDL_Rect *
mruby_unbox_SDL_Rect(mrb_value boxed);
#endif

#if BIND_SDLRenderer_TYPE
mrb_value
mruby_box_SDL_Renderer(mrb_state* mrb, struct SDL_Renderer *unboxed);

mrb_value
mruby_giftwrap_SDL_Renderer(mrb_state* mrb, struct SDL_Renderer *unboxed);

void
mruby_set_SDL_Renderer_data_ptr(mrb_value obj, struct SDL_Renderer *unboxed);

void
mruby_gift_SDL_Renderer_data_ptr(mrb_value obj, struct SDL_Renderer *unboxed);

struct SDL_Renderer *
mruby_unbox_SDL_Renderer(mrb_value boxed);
#endif

#if BIND_SDLRendererInfo_TYPE
mrb_value
mruby_box_SDL_RendererInfo(mrb_state* mrb, struct SDL_RendererInfo *unboxed);

mrb_value
mruby_giftwrap_SDL_RendererInfo(mrb_state* mrb, struct SDL_RendererInfo *unboxed);

void
mruby_set_SDL_RendererInfo_data_ptr(mrb_value obj, struct SDL_RendererInfo *unboxed);

void
mruby_gift_SDL_RendererInfo_data_ptr(mrb_value obj, struct SDL_RendererInfo *unboxed);

struct SDL_RendererInfo *
mruby_unbox_SDL_RendererInfo(mrb_value boxed);
#endif

#if BIND_SDLRWops_TYPE
mrb_value
mruby_box_SDL_RWops(mrb_state* mrb, struct SDL_RWops *unboxed);

mrb_value
mruby_giftwrap_SDL_RWops(mrb_state* mrb, struct SDL_RWops *unboxed);

void
mruby_set_SDL_RWops_data_ptr(mrb_value obj, struct SDL_RWops *unboxed);

void
mruby_gift_SDL_RWops_data_ptr(mrb_value obj, struct SDL_RWops *unboxed);

struct SDL_RWops *
mruby_unbox_SDL_RWops(mrb_value boxed);
#endif

#if BIND_SDLSemaphore_TYPE
mrb_value
mruby_box_SDL_semaphore(mrb_state* mrb, struct SDL_semaphore *unboxed);

mrb_value
mruby_giftwrap_SDL_semaphore(mrb_state* mrb, struct SDL_semaphore *unboxed);

void
mruby_set_SDL_semaphore_data_ptr(mrb_value obj, struct SDL_semaphore *unboxed);

void
mruby_gift_SDL_semaphore_data_ptr(mrb_value obj, struct SDL_semaphore *unboxed);

struct SDL_semaphore *
mruby_unbox_SDL_semaphore(mrb_value boxed);
#endif

#if BIND_SDLSurface_TYPE
mrb_value
mruby_box_SDL_Surface(mrb_state* mrb, struct SDL_Surface *unboxed);

mrb_value
mruby_giftwrap_SDL_Surface(mrb_state* mrb, struct SDL_Surface *unboxed);

void
mruby_set_SDL_Surface_data_ptr(mrb_value obj, struct SDL_Surface *unboxed);

void
mruby_gift_SDL_Surface_data_ptr(mrb_value obj, struct SDL_Surface *unboxed);

struct SDL_Surface *
mruby_unbox_SDL_Surface(mrb_value boxed);
#endif

#if BIND_SDLSysWMEvent_TYPE
mrb_value
mruby_box_SDL_SysWMEvent(mrb_state* mrb, struct SDL_SysWMEvent *unboxed);

mrb_value
mruby_giftwrap_SDL_SysWMEvent(mrb_state* mrb, struct SDL_SysWMEvent *unboxed);

void
mruby_set_SDL_SysWMEvent_data_ptr(mrb_value obj, struct SDL_SysWMEvent *unboxed);

void
mruby_gift_SDL_SysWMEvent_data_ptr(mrb_value obj, struct SDL_SysWMEvent *unboxed);

struct SDL_SysWMEvent *
mruby_unbox_SDL_SysWMEvent(mrb_value boxed);
#endif

#if BIND_SDLSysWMinfo_TYPE
mrb_value
mruby_box_SDL_SysWMinfo(mrb_state* mrb, struct SDL_SysWMinfo *unboxed);

mrb_value
mruby_giftwrap_SDL_SysWMinfo(mrb_state* mrb, struct SDL_SysWMinfo *unboxed);

void
mruby_set_SDL_SysWMinfo_data_ptr(mrb_value obj, struct SDL_SysWMinfo *unboxed);

void
mruby_gift_SDL_SysWMinfo_data_ptr(mrb_value obj, struct SDL_SysWMinfo *unboxed);

struct SDL_SysWMinfo *
mruby_unbox_SDL_SysWMinfo(mrb_value boxed);
#endif

#if BIND_SDLSysWMmsg_TYPE
mrb_value
mruby_box_SDL_SysWMmsg(mrb_state* mrb, struct SDL_SysWMmsg *unboxed);

mrb_value
mruby_giftwrap_SDL_SysWMmsg(mrb_state* mrb, struct SDL_SysWMmsg *unboxed);

void
mruby_set_SDL_SysWMmsg_data_ptr(mrb_value obj, struct SDL_SysWMmsg *unboxed);

void
mruby_gift_SDL_SysWMmsg_data_ptr(mrb_value obj, struct SDL_SysWMmsg *unboxed);

struct SDL_SysWMmsg *
mruby_unbox_SDL_SysWMmsg(mrb_value boxed);
#endif

#if BIND_SDLTextEditingEvent_TYPE
mrb_value
mruby_box_SDL_TextEditingEvent(mrb_state* mrb, struct SDL_TextEditingEvent *unboxed);

mrb_value
mruby_giftwrap_SDL_TextEditingEvent(mrb_state* mrb, struct SDL_TextEditingEvent *unboxed);

void
mruby_set_SDL_TextEditingEvent_data_ptr(mrb_value obj, struct SDL_TextEditingEvent *unboxed);

void
mruby_gift_SDL_TextEditingEvent_data_ptr(mrb_value obj, struct SDL_TextEditingEvent *unboxed);

struct SDL_TextEditingEvent *
mruby_unbox_SDL_TextEditingEvent(mrb_value boxed);
#endif

#if BIND_SDLTextInputEvent_TYPE
mrb_value
mruby_box_SDL_TextInputEvent(mrb_state* mrb, struct SDL_TextInputEvent *unboxed);

mrb_value
mruby_giftwrap_SDL_TextInputEvent(mrb_state* mrb, struct SDL_TextInputEvent *unboxed);

void
mruby_set_SDL_TextInputEvent_data_ptr(mrb_value obj, struct SDL_TextInputEvent *unboxed);

void
mruby_gift_SDL_TextInputEvent_data_ptr(mrb_value obj, struct SDL_TextInputEvent *unboxed);

struct SDL_TextInputEvent *
mruby_unbox_SDL_TextInputEvent(mrb_value boxed);
#endif

#if BIND_SDLTexture_TYPE
mrb_value
mruby_box_SDL_Texture(mrb_state* mrb, struct SDL_Texture *unboxed);

mrb_value
mruby_giftwrap_SDL_Texture(mrb_state* mrb, struct SDL_Texture *unboxed);

void
mruby_set_SDL_Texture_data_ptr(mrb_value obj, struct SDL_Texture *unboxed);

void
mruby_gift_SDL_Texture_data_ptr(mrb_value obj, struct SDL_Texture *unboxed);

struct SDL_Texture *
mruby_unbox_SDL_Texture(mrb_value boxed);
#endif

#if BIND_SDLThread_TYPE
mrb_value
mruby_box_SDL_Thread(mrb_state* mrb, struct SDL_Thread *unboxed);

mrb_value
mruby_giftwrap_SDL_Thread(mrb_state* mrb, struct SDL_Thread *unboxed);

void
mruby_set_SDL_Thread_data_ptr(mrb_value obj, struct SDL_Thread *unboxed);

void
mruby_gift_SDL_Thread_data_ptr(mrb_value obj, struct SDL_Thread *unboxed);

struct SDL_Thread *
mruby_unbox_SDL_Thread(mrb_value boxed);
#endif

#if BIND_SDLTouchFingerEvent_TYPE
mrb_value
mruby_box_SDL_TouchFingerEvent(mrb_state* mrb, struct SDL_TouchFingerEvent *unboxed);

mrb_value
mruby_giftwrap_SDL_TouchFingerEvent(mrb_state* mrb, struct SDL_TouchFingerEvent *unboxed);

void
mruby_set_SDL_TouchFingerEvent_data_ptr(mrb_value obj, struct SDL_TouchFingerEvent *unboxed);

void
mruby_gift_SDL_TouchFingerEvent_data_ptr(mrb_value obj, struct SDL_TouchFingerEvent *unboxed);

struct SDL_TouchFingerEvent *
mruby_unbox_SDL_TouchFingerEvent(mrb_value boxed);
#endif

#if BIND_SDLUserEvent_TYPE
mrb_value
mruby_box_SDL_UserEvent(mrb_state* mrb, struct SDL_UserEvent *unboxed);

mrb_value
mruby_giftwrap_SDL_UserEvent(mrb_state* mrb, struct SDL_UserEvent *unboxed);

void
mruby_set_SDL_UserEvent_data_ptr(mrb_value obj, struct SDL_UserEvent *unboxed);

void
mruby_gift_SDL_UserEvent_data_ptr(mrb_value obj, struct SDL_UserEvent *unboxed);

struct SDL_UserEvent *
mruby_unbox_SDL_UserEvent(mrb_value boxed);
#endif

#if BIND_SDLVersion_TYPE
mrb_value
mruby_box_SDL_version(mrb_state* mrb, struct SDL_version *unboxed);

mrb_value
mruby_giftwrap_SDL_version(mrb_state* mrb, struct SDL_version *unboxed);

void
mruby_set_SDL_version_data_ptr(mrb_value obj, struct SDL_version *unboxed);

void
mruby_gift_SDL_version_data_ptr(mrb_value obj, struct SDL_version *unboxed);

struct SDL_version *
mruby_unbox_SDL_version(mrb_value boxed);
#endif

#if BIND_SDLWindow_TYPE
mrb_value
mruby_box_SDL_Window(mrb_state* mrb, struct SDL_Window *unboxed);

mrb_value
mruby_giftwrap_SDL_Window(mrb_state* mrb, struct SDL_Window *unboxed);

void
mruby_set_SDL_Window_data_ptr(mrb_value obj, struct SDL_Window *unboxed);

void
mruby_gift_SDL_Window_data_ptr(mrb_value obj, struct SDL_Window *unboxed);

struct SDL_Window *
mruby_unbox_SDL_Window(mrb_value boxed);
#endif

#if BIND_SDLWindowEvent_TYPE
mrb_value
mruby_box_SDL_WindowEvent(mrb_state* mrb, struct SDL_WindowEvent *unboxed);

mrb_value
mruby_giftwrap_SDL_WindowEvent(mrb_state* mrb, struct SDL_WindowEvent *unboxed);

void
mruby_set_SDL_WindowEvent_data_ptr(mrb_value obj, struct SDL_WindowEvent *unboxed);

void
mruby_gift_SDL_WindowEvent_data_ptr(mrb_value obj, struct SDL_WindowEvent *unboxed);

struct SDL_WindowEvent *
mruby_unbox_SDL_WindowEvent(mrb_value boxed);
#endif

#if BIND_SDLWindowShapeMode_TYPE
mrb_value
mruby_box_SDL_WindowShapeMode(mrb_state* mrb, struct SDL_WindowShapeMode *unboxed);

mrb_value
mruby_giftwrap_SDL_WindowShapeMode(mrb_state* mrb, struct SDL_WindowShapeMode *unboxed);

void
mruby_set_SDL_WindowShapeMode_data_ptr(mrb_value obj, struct SDL_WindowShapeMode *unboxed);

void
mruby_gift_SDL_WindowShapeMode_data_ptr(mrb_value obj, struct SDL_WindowShapeMode *unboxed);

struct SDL_WindowShapeMode *
mruby_unbox_SDL_WindowShapeMode(mrb_value boxed);
#endif

#if BIND_SDLTestSurfaceImageS_TYPE
mrb_value
mruby_box_SDLTest_SurfaceImage_s(mrb_state* mrb, struct SDLTest_SurfaceImage_s *unboxed);

mrb_value
mruby_giftwrap_SDLTest_SurfaceImage_s(mrb_state* mrb, struct SDLTest_SurfaceImage_s *unboxed);

void
mruby_set_SDLTest_SurfaceImage_s_data_ptr(mrb_value obj, struct SDLTest_SurfaceImage_s *unboxed);

void
mruby_gift_SDLTest_SurfaceImage_s_data_ptr(mrb_value obj, struct SDLTest_SurfaceImage_s *unboxed);

struct SDLTest_SurfaceImage_s *
mruby_unbox_SDLTest_SurfaceImage_s(mrb_value boxed);
#endif

#if BIND_SDLTestTestCaseReference_TYPE
mrb_value
mruby_box_SDLTest_TestCaseReference(mrb_state* mrb, struct SDLTest_TestCaseReference *unboxed);

mrb_value
mruby_giftwrap_SDLTest_TestCaseReference(mrb_state* mrb, struct SDLTest_TestCaseReference *unboxed);

void
mruby_set_SDLTest_TestCaseReference_data_ptr(mrb_value obj, struct SDLTest_TestCaseReference *unboxed);

void
mruby_gift_SDLTest_TestCaseReference_data_ptr(mrb_value obj, struct SDLTest_TestCaseReference *unboxed);

struct SDLTest_TestCaseReference *
mruby_unbox_SDLTest_TestCaseReference(mrb_value boxed);
#endif

#if BIND_SDLTestTestSuiteReference_TYPE
mrb_value
mruby_box_SDLTest_TestSuiteReference(mrb_state* mrb, struct SDLTest_TestSuiteReference *unboxed);

mrb_value
mruby_giftwrap_SDLTest_TestSuiteReference(mrb_state* mrb, struct SDLTest_TestSuiteReference *unboxed);

void
mruby_set_SDLTest_TestSuiteReference_data_ptr(mrb_value obj, struct SDLTest_TestSuiteReference *unboxed);

void
mruby_gift_SDLTest_TestSuiteReference_data_ptr(mrb_value obj, struct SDLTest_TestSuiteReference *unboxed);

struct SDLTest_TestSuiteReference *
mruby_unbox_SDLTest_TestSuiteReference(mrb_value boxed);
#endif


/*
 * Macro definition function declaration
 * -------------------------------------
 */
void mruby_SDL_define_macro_constants(mrb_state* mrb);

#endif
