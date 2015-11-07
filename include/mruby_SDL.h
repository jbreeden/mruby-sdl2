
#ifndef SDL_HEADER
#define SDL_HEADER

/*
 * RClass Macros
 * -------------
 *
 * Macros for retrieving the RClass*'s defined by this gem.
 */

#define SDL_module(mrb) mrb_module_get(mrb, "SDL")
#define ChunkInfo_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "ChunkInfo")
#define Code_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "Code")
#define DistoStats_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "DistoStats")
#define Float2_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "Float2")
#define Float3_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "Float3")
#define Float4_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "Float4")
#define Float4X4_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "Float4X4")
#define GzState_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "GzState")
#define HTreeGroup_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "HTreeGroup")
#define HuffmanTreeCode_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "HuffmanTreeCode")
#define HuffmanTreeNode_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "HuffmanTreeNode")
#define HuffmanTreeToken_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "HuffmanTreeToken")
#define JHUFFTBL_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "JHUFFTBL")
#define JpegComponentInfo_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "JpegComponentInfo")
#define JpegScanInfo_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "JpegScanInfo")
#define JpegTransformInfo_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "JpegTransformInfo")
#define JQUANTTBL_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "JQUANTTBL")
#define MIRData_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "MIRData")
#define MIRWindow_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "MIRWindow")
#define NativeWindowFactory_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "NativeWindowFactory")
#define PixOrCopy_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "PixOrCopy")
#define PngImage_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "PngImage")
#define SDLAtomicT_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "AtomicT")
#define SDLAudioRateFilters_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "AudioRateFilters")
#define SDLAudioStreamer_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "AudioStreamer")
#define SDLAudioTypeFilters_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "AudioTypeFilters")
#define SDLBlitFuncEntry_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "BlitFuncEntry")
#define SDLBlitInfo_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "BlitInfo")
#define SDLDisplayData_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "DisplayData")
#define SDLDisplayMode_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "DisplayMode")
#define SDLDisplayModeData_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "DisplayModeData")
#define SDLFPoint_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "FPoint")
#define SDLFRect_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "FRect")
#define SDLJoystickGUID_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "JoystickGUID")
#define SDLMessageBoxButtonData_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "MessageBoxButtonData")
#define SDLMessageBoxColor_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "MessageBoxColor")
#define SDLMessageBoxColorScheme_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "MessageBoxColorScheme")
#define SDLMessageBoxData_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "MessageBoxData")
#define SDLMouse_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "Mouse")
#define SDLMouseClickState_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "MouseClickState")
#define SDLMouseData_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "MouseData")
#define SDLQuadTreeChildren_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "QuadTreeChildren")
#define SDLShapeData_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "ShapeData")
#define SDLShapeTree_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "ShapeTree")
#define SDLTLSData_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "TLSData")
#define SDLVideoData_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "VideoData")
#define SDLWindowData_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "WindowData")
#define SDLTestCommonState_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "TestCommonState")
#define SDLTestCrc32Context_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "TestCrc32Context")
#define SDLTestMd5Context_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "TestMd5Context")
#define SDLTestRandomContext_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "TestRandomContext")
#define ClContext_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "ClContext")
#define ClEvent_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "ClEvent")
#define DFBCursorData_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "DFBCursorData")
#define DFBDeviceData_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "DFBDeviceData")
#define DFBDisplayData_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "DFBDisplayData")
#define DFBKeyboardData_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "DFBKeyboardData")
#define DFBTheme_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "DFBTheme")
#define DFBWindowData_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "DFBWindowData")
#define MainprogInfo_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "MainprogInfo")
#define NSWindow_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "NSWindow")
#define RPICursorData_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "RPICursorData")
#define SDLGameController_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "GameController")
#define SDLHaptic_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "Haptic")
#define SDLIconvT_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "IconvT")
#define SDLJoystick_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "Joystick")
#define TIFFField_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "TIFFField")
#define TIFFFieldArray_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "TIFFFieldArray")
#define TIFFImageIter_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "TIFFImageIter")
#define TIFFRGBAImage_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "TIFFRGBAImage")
#define TOUCHINPUT_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "TOUCHINPUT")
#define AudioBootStrap_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "AudioBootStrap")
#define AxisCorrect_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "AxisCorrect")
#define BackingStoreStruct_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "BackingStoreStruct")
#define Balldelta_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "Balldelta")
#define CdjpegProgressMgr_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "CdjpegProgressMgr")
#define Chunk_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "Chunk")
#define CjpegSourceStruct_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "CjpegSourceStruct")
#define ClientInfo_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "ClientInfo")
#define CtDataS_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "CtDataS")
#define DetailedTiming_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "DetailedTiming")
#define DjpegDestStruct_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "DjpegDestStruct")
#define GLShaderContext_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "GLShaderContext")
#define GzHeaderS_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "GzHeaderS")
#define GzFileS_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "GzFileS")
#define HapticEffect_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "HapticEffect")
#define HapticHwdata_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "HapticHwdata")
#define HapticHweffect_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "HapticHweffect")
#define HuffmanTree_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "HuffmanTree")
#define HwdataBall_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "HwdataBall")
#define HwdataHat_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "HwdataHat")
#define IDirect3D9_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "IDirect3D9")
#define IEnumTfContexts_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "IEnumTfContexts")
#define IEnumTfDocumentMgrs_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "IEnumTfDocumentMgrs")
#define IEnumTfFunctionProviders_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "IEnumTfFunctionProviders")
#define IEnumTfUIElements_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "IEnumTfUIElements")
#define InflateState_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "InflateState")
#define InputT_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "InputT")
#define InternalState_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "InternalState")
#define ITfCandidateListUIElement_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "ITfCandidateListUIElement")
#define ITfCandidateListUIElementVtbl_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "ITfCandidateListUIElementVtbl")
#define ITfClientId_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "ITfClientId")
#define ITfCompartmentMgr_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "ITfCompartmentMgr")
#define ITfContext_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "ITfContext")
#define ITfDocumentMgr_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "ITfDocumentMgr")
#define ITfDocumentMgrVtbl_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "ITfDocumentMgrVtbl")
#define ITfFunctionProvider_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "ITfFunctionProvider")
#define ITfInputProcessorProfileActivationSink_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "ITfInputProcessorProfileActivationSink")
#define ITfInputProcessorProfileActivationSinkVtbl_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "ITfInputProcessorProfileActivationSinkVtbl")
#define ITfReadingInformationUIElement_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "ITfReadingInformationUIElement")
#define ITfReadingInformationUIElementVtbl_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "ITfReadingInformationUIElementVtbl")
#define ITfSource_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "ITfSource")
#define ITfSourceVtbl_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "ITfSourceVtbl")
#define ITfThreadMgr_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "ITfThreadMgr")
#define ITfThreadMgrEx_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "ITfThreadMgrEx")
#define ITfThreadMgrExVtbl_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "ITfThreadMgrExVtbl")
#define ITfThreadMgrVtbl_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "ITfThreadMgrVtbl")
#define ITfUIElement_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "ITfUIElement")
#define ITfUIElementMgr_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "ITfUIElementMgr")
#define ITfUIElementMgrVtbl_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "ITfUIElementMgrVtbl")
#define ITfUIElementSink_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "ITfUIElementSink")
#define ITfUIElementSinkVtbl_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "ITfUIElementSinkVtbl")
#define ITfUIElementVtbl_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "ITfUIElementVtbl")
#define JoystickHwdata_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "JoystickHwdata")
#define JpegCCoefController_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "JpegCCoefController")
#define JpegCMainController_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "JpegCMainController")
#define JpegCPrepController_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "JpegCPrepController")
#define JpegColorConverter_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "JpegColorConverter")
#define JpegColorDeconverter_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "JpegColorDeconverter")
#define JpegColorQuantizer_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "JpegColorQuantizer")
#define JpegCommonStruct_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "JpegCommonStruct")
#define JpegCompMaster_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "JpegCompMaster")
#define JpegCompressStruct_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "JpegCompressStruct")
#define JpegDCoefController_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "JpegDCoefController")
#define JpegDMainController_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "JpegDMainController")
#define JpegDPostController_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "JpegDPostController")
#define JpegDecompMaster_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "JpegDecompMaster")
#define JpegDecompressStruct_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "JpegDecompressStruct")
#define JpegDestinationMgr_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "JpegDestinationMgr")
#define JpegDownsampler_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "JpegDownsampler")
#define JpegEntropyDecoder_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "JpegEntropyDecoder")
#define JpegEntropyEncoder_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "JpegEntropyEncoder")
#define JpegErrorMgr_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "JpegErrorMgr")
#define JpegForwardDct_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "JpegForwardDct")
#define JpegInputController_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "JpegInputController")
#define JpegInverseDct_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "JpegInverseDct")
#define JpegMarkerReader_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "JpegMarkerReader")
#define JpegMarkerStruct_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "JpegMarkerStruct")
#define JpegMarkerWriter_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "JpegMarkerWriter")
#define JpegMemoryMgr_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "JpegMemoryMgr")
#define JpegProgressMgr_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "JpegProgressMgr")
#define JpegSourceMgr_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "JpegSourceMgr")
#define JpegUpsampler_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "JpegUpsampler")
#define JvirtBarrayControl_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "JvirtBarrayControl")
#define JvirtSarrayControl_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "JvirtSarrayControl")
#define Metadata_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "Metadata")
#define MetadataPayload_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "MetadataPayload")
#define MonitorInfo_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "MonitorInfo")
#define PngColor16Struct_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "PngColor16Struct")
#define PngColor8Struct_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "PngColor8Struct")
#define PngColorStruct_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "PngColorStruct")
#define PngControl_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "PngControl")
#define PngInfoDef_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "PngInfoDef")
#define PngRowInfoStruct_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "PngRowInfoStruct")
#define PngSPLTEntryStruct_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "PngSPLTEntryStruct")
#define PngSPLTStruct_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "PngSPLTStruct")
#define PngStructDef_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "PngStructDef")
#define PngTextStruct_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "PngTextStruct")
#define PngTimeStruct_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "PngTimeStruct")
#define PngUnknownChunkT_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "PngUnknownChunkT")
#define Rasterfile_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "Rasterfile")
#define RecElement_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "RecElement")
#define SDLAssertData_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "AssertData")
#define SDLAudioCVT_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "AudioCVT")
#define SDLAudioDevice_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "AudioDevice")
#define SDLAudioDriver_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "AudioDriver")
#define SDLAudioDriverImpl_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "AudioDriverImpl")
#define SDLAudioSpec_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "AudioSpec")
#define SDLBlitMap_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "BlitMap")
#define SDLColor_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "Color")
#define SDLCommonEvent_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "CommonEvent")
#define SDLCond_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "Cond")
#define SDLControllerAxisEvent_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "ControllerAxisEvent")
#define SDLControllerButtonEvent_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "ControllerButtonEvent")
#define SDLControllerDeviceEvent_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "ControllerDeviceEvent")
#define SDLCursor_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "Cursor")
#define SDLDisplayData_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "DisplayData")
#define SDLDollarGestureEvent_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "DollarGestureEvent")
#define SDLDropEvent_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "DropEvent")
#define SDLError_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "Error")
#define SDLFinger_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "Finger")
#define SDLGameControllerButtonBind_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "GameControllerButtonBind")
#define SDLGLDriverData_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "GLDriverData")
#define SDLHapticCondition_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "HapticCondition")
#define SDLHapticConstant_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "HapticConstant")
#define SDLHapticCustom_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "HapticCustom")
#define SDLHapticDirection_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "HapticDirection")
#define SDLHapticLeftRight_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "HapticLeftRight")
#define SDLHapticPeriodic_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "HapticPeriodic")
#define SDLHapticRamp_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "HapticRamp")
#define SDLJoyAxisEvent_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "JoyAxisEvent")
#define SDLJoyBallEvent_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "JoyBallEvent")
#define SDLJoyButtonEvent_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "JoyButtonEvent")
#define SDLJoyDeviceEvent_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "JoyDeviceEvent")
#define SDLJoyHatEvent_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "JoyHatEvent")
#define SDLJoylistItem_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "JoylistItem")
#define SDLKeyboardEvent_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "KeyboardEvent")
#define SDLKeysym_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "Keysym")
#define SDLMouseButtonEvent_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "MouseButtonEvent")
#define SDLMouseMotionEvent_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "MouseMotionEvent")
#define SDLMouseWheelEvent_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "MouseWheelEvent")
#define SDLMultiGestureEvent_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "MultiGestureEvent")
#define SDLMutex_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "Mutex")
#define SDLOSEvent_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "OSEvent")
#define SDLPalette_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "Palette")
#define SDLPixelFormat_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "PixelFormat")
#define SDLPoint_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "Point")
#define SDLPrivateAudioData_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "PrivateAudioData")
#define SDLPrivateGLESData_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "PrivateGLESData")
#define SDLQuitEvent_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "QuitEvent")
#define SDLRect_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "Rect")
#define SDLRenderDriver_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "RenderDriver")
#define SDLRenderer_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "Renderer")
#define SDLRendererInfo_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "RendererInfo")
#define SDLRWops_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "RWops")
#define SDLSemaphore_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "Semaphore")
#define SDLShapeDriver_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "ShapeDriver")
#define SDLShapeTree_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "ShapeTree")
#define SDLSurface_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "Surface")
#define SDLSWYUVTexture_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "SWYUVTexture")
#define SDLSysWMEvent_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "SysWMEvent")
#define SDLSysWMinfo_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "SysWMinfo")
#define SDLSysWMmsg_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "SysWMmsg")
#define SDLTextEditingEvent_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "TextEditingEvent")
#define SDLTextInputEvent_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "TextInputEvent")
#define SDLTexture_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "Texture")
#define SDLThread_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "Thread")
#define SDLTouch_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "Touch")
#define SDLTouchFingerEvent_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "TouchFingerEvent")
#define SDLUserEvent_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "UserEvent")
#define SDLVersion_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "Version")
#define SDLVideoData_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "VideoData")
#define SDLVideoDevice_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "VideoDevice")
#define SDLVideoDisplay_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "VideoDisplay")
#define SDLWaylandInput_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "WaylandInput")
#define SDLWindow_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "Window")
#define SDLWindowData_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "WindowData")
#define SDLWindowEvent_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "WindowEvent")
#define SDLWindowShapeMode_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "WindowShapeMode")
#define SDLWindowShaper_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "WindowShaper")
#define SDLWindowUserData_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "WindowUserData")
#define SDLTestSurfaceImageS_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "TestSurfaceImageS")
#define SDLTestTestCaseReference_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "TestTestCaseReference")
#define SDLTestTestSuiteReference_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "TestTestSuiteReference")
#define SioHdl_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "SioHdl")
#define StaticTreeDescS_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "StaticTreeDescS")
#define Tableentry_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "Tableentry")
#define TagINPUTCONTEXT2_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "TagINPUTCONTEXT2")
#define Tiff_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "Tiff")
#define Timing_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "Timing")
#define TinflDecompressorTag_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "TinflDecompressorTag")
#define TmUnzS_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "TmUnzS")
#define TmZipS_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "TmZipS")
#define TreeDescS_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "TreeDescS")
#define Unz64FilePosS_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "Unz64FilePosS")
#define UnzFileInfo64S_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "UnzFileInfo64S")
#define UnzFileInfoS_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "UnzFileInfoS")
#define UnzFilePosS_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "UnzFilePosS")
#define UnzGlobalInfo64S_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "UnzGlobalInfo64S")
#define UnzGlobalInfoS_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "UnzGlobalInfoS")
#define VideoBootStrap_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "VideoBootStrap")
#define VP8BitReader_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "VP8BitReader")
#define VP8BitWriter_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "VP8BitWriter")
#define VP8Decoder_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "VP8Decoder")
#define VP8Encoder_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "VP8Encoder")
#define VP8Histogram_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "VP8Histogram")
#define VP8Io_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "VP8Io")
#define VP8LTransform_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "VP8LTransform")
#define VP8Matrix_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "VP8Matrix")
#define VP8Tokens_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "VP8Tokens")
#define WaveFMT_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "WaveFMT")
#define WebPAuxStats_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "WebPAuxStats")
#define WebPBitstreamFeatures_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "WebPBitstreamFeatures")
#define WebPChunk_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "WebPChunk")
#define WebPChunkIterator_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "WebPChunkIterator")
#define WebPConfig_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "WebPConfig")
#define WebPData_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "WebPData")
#define WebPDecBuffer_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "WebPDecBuffer")
#define WebPDecoderConfig_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "WebPDecoderConfig")
#define WebPDecoderOptions_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "WebPDecoderOptions")
#define WebPDecParams_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "WebPDecParams")
#define WebPDemuxer_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "WebPDemuxer")
#define WebPIDecoder_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "WebPIDecoder")
#define WebPIterator_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "WebPIterator")
#define WebPMemoryWriter_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "WebPMemoryWriter")
#define WebPMux_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "WebPMux")
#define WebPMuxAnimParams_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "WebPMuxAnimParams")
#define WebPMuxFrameInfo_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "WebPMuxFrameInfo")
#define WebPMuxImage_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "WebPMuxImage")
#define WebPPicture_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "WebPPicture")
#define WebPRGBABuffer_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "WebPRGBABuffer")
#define WebPYUVABuffer_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "WebPYUVABuffer")
#define WlCompositor_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "WlCompositor")
#define WlCursor_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "WlCursor")
#define WlCursorTheme_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "WlCursorTheme")
#define WlDisplay_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "WlDisplay")
#define WlEglWindow_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "WlEglWindow")
#define WlEventQueue_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "WlEventQueue")
#define WlInterface_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "WlInterface")
#define WlList_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "WlList")
#define WlOutput_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "WlOutput")
#define WlPointer_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "WlPointer")
#define WlProxy_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "WlProxy")
#define WlRegistry_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "WlRegistry")
#define WlShell_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "WlShell")
#define WlShellSurface_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "WlShellSurface")
#define WlShm_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "WlShm")
#define WlSurface_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "WlSurface")
#define XAUDIO2DEVICEDETAILS_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "XAUDIO2DEVICEDETAILS")
#define XGenericEventCookie_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "XGenericEventCookie")
#define XkbContext_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "XkbContext")
#define Xtiff_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "Xtiff")
#define XTIFFDirectory_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "XTIFFDirectory")
#define ZStreamS_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "ZStreamS")
#define ZlibFilefunc6432DefS_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "ZlibFilefunc6432DefS")
#define ZlibFilefunc64DefS_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "ZlibFilefunc64DefS")
#define ZlibFilefuncDefS_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "ZlibFilefuncDefS")
#define TdeflCompressor_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "TdeflCompressor")
#define TdeflOutputBuffer_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "TdeflOutputBuffer")
#define TdeflSymFreq_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "TdeflSymFreq")
#define TIFFCIELabToRGB_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "TIFFCIELabToRGB")
#define TIFFCodec_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "TIFFCodec")
#define TIFFDirectory_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "TIFFDirectory")
#define TIFFDirEntry_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "TIFFDirEntry")
#define TIFFDisplay_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "TIFFDisplay")
#define TIFFFaxTabEnt_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "TIFFFaxTabEnt")
#define TIFFFieldInfo_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "TIFFFieldInfo")
#define TIFFHeaderBig_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "TIFFHeaderBig")
#define TIFFHeaderClassic_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "TIFFHeaderClassic")
#define TIFFHeaderCommon_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "TIFFHeaderCommon")
#define TIFFOvrCache_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "TIFFOvrCache")
#define TIFFPredictorState_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "TIFFPredictorState")
#define TIFFTagMethods_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "TIFFTagMethods")
#define TIFFTagValue_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "TIFFTagValue")
#define TIFFYCbCrToRGB_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "TIFFYCbCrToRGB")
#define TinflHuffTable_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "TinflHuffTable")
#define TSFSink_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "TSFSink")
#define UIKitKeyInfo_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "UIKitKeyInfo")
#define VP8EncIterator_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "VP8EncIterator")
#define VP8FilterHeader_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "VP8FilterHeader")
#define VP8FInfo_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "VP8FInfo")
#define VP8FrameHeader_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "VP8FrameHeader")
#define VP8LBackwardRefs_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "VP8LBackwardRefs")
#define VP8LBitReader_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "VP8LBitReader")
#define VP8LBitWriter_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "VP8LBitWriter")
#define VP8LColorCache_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "VP8LColorCache")
#define VP8LDecoder_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "VP8LDecoder")
#define VP8LEncoder_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "VP8LEncoder")
#define VP8LHistogram_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "VP8LHistogram")
#define VP8LHistogramSet_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "VP8LHistogramSet")
#define VP8LMetadata_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "VP8LMetadata")
#define VP8MB_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "VP8MB")
#define VP8MBInfo_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "VP8MBInfo")
#define VP8ModeScore_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "VP8ModeScore")
#define VP8PictureHeader_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "VP8PictureHeader")
#define VP8Proba_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "VP8Proba")
#define VP8QuantMatrix_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "VP8QuantMatrix")
#define VP8SegmentHeader_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "VP8SegmentHeader")
#define VP8SegmentInfo_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "VP8SegmentInfo")
#define VP8TBuffer_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "VP8TBuffer")
#define VP8ThreadContext_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "VP8ThreadContext")
#define WebPHeaderStructure_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "WebPHeaderStructure")
#define WebPRescaler_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "WebPRescaler")
#define WebPWorker_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "WebPWorker")
#define XINPUTGAMEPADEX_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "XINPUTGAMEPADEX")
#define XINPUTSTATEEX_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "XINPUTSTATEEX")
#define ZipFileinfo_class(mrb) mrb_class_get_under(mrb, SDL_module(mrb), "ZipFileinfo")

/*
 * Class Bindings Options
 * ----------------------
 *
 * Use these macros to configure the generated bindings for classes & structs.
 *
 * Key:
 *
 * BIND_{type name}_TYPE                      : Should we bind the class at all?
 * BIND_{type name}_INITIALIZE                : If the class is bound, should we also bind initialize to malloc a new instance on `new`?
 * BIND_{type name}_{field name}_FIELD_READER : If the class is bound, should we also bind a reader for this field?
 * BIND_{type name}_{field name}_FIELD_WRITER : If the class is bound, should we also bind a writer for this field?
 * BIND_{type name}_{function name}_FUNCTION  : If the class is bound, should we also bind this member function?
 *
 * Fields & method are disabled by default so that bindings may be added and
 * tested incrementally. The generated bindings are a good start, but they
 * will need to be verified and, sometimes, customized.
 */

#define BIND_ChunkInfo_TYPE TRUE
#define BIND_ChunkInfo_INITIALIZE FALSE
#define BIND_ChunkInfo_id_FIELD_READER FALSE
#define BIND_ChunkInfo_id_FIELD_WRITER FALSE
#define BIND_ChunkInfo_size_FIELD_READER FALSE
#define BIND_ChunkInfo_size_FIELD_WRITER FALSE
#define BIND_ChunkInfo_tag_FIELD_READER FALSE
#define BIND_ChunkInfo_tag_FIELD_WRITER FALSE

#define BIND_Code_TYPE TRUE
#define BIND_Code_INITIALIZE FALSE
#define BIND_Code_bits_FIELD_READER FALSE
#define BIND_Code_bits_FIELD_WRITER FALSE
#define BIND_Code_bits_FIELD_READER FALSE
#define BIND_Code_bits_FIELD_WRITER FALSE
#define BIND_Code_op_FIELD_READER FALSE
#define BIND_Code_op_FIELD_WRITER FALSE
#define BIND_Code_op_FIELD_READER FALSE
#define BIND_Code_op_FIELD_WRITER FALSE
#define BIND_Code_val_FIELD_READER FALSE
#define BIND_Code_val_FIELD_WRITER FALSE
#define BIND_Code_val_FIELD_READER FALSE
#define BIND_Code_val_FIELD_WRITER FALSE

#define BIND_DistoStats_TYPE TRUE
#define BIND_DistoStats_INITIALIZE FALSE
#define BIND_DistoStats_w_FIELD_READER FALSE
#define BIND_DistoStats_w_FIELD_WRITER FALSE
#define BIND_DistoStats_xm_FIELD_READER FALSE
#define BIND_DistoStats_xm_FIELD_WRITER FALSE
#define BIND_DistoStats_xxm_FIELD_READER FALSE
#define BIND_DistoStats_xxm_FIELD_WRITER FALSE
#define BIND_DistoStats_xym_FIELD_READER FALSE
#define BIND_DistoStats_xym_FIELD_WRITER FALSE
#define BIND_DistoStats_ym_FIELD_READER FALSE
#define BIND_DistoStats_ym_FIELD_WRITER FALSE
#define BIND_DistoStats_yym_FIELD_READER FALSE
#define BIND_DistoStats_yym_FIELD_WRITER FALSE

#define BIND_Float2_TYPE TRUE
#define BIND_Float2_INITIALIZE FALSE
#define BIND_Float2_x_FIELD_READER FALSE
#define BIND_Float2_x_FIELD_WRITER FALSE
#define BIND_Float2_y_FIELD_READER FALSE
#define BIND_Float2_y_FIELD_WRITER FALSE

#define BIND_Float3_TYPE TRUE
#define BIND_Float3_INITIALIZE FALSE
#define BIND_Float3_x_FIELD_READER FALSE
#define BIND_Float3_x_FIELD_WRITER FALSE
#define BIND_Float3_y_FIELD_READER FALSE
#define BIND_Float3_y_FIELD_WRITER FALSE
#define BIND_Float3_z_FIELD_READER FALSE
#define BIND_Float3_z_FIELD_WRITER FALSE

#define BIND_Float4_TYPE TRUE
#define BIND_Float4_INITIALIZE FALSE
#define BIND_Float4_w_FIELD_READER FALSE
#define BIND_Float4_w_FIELD_WRITER FALSE
#define BIND_Float4_x_FIELD_READER FALSE
#define BIND_Float4_x_FIELD_WRITER FALSE
#define BIND_Float4_y_FIELD_READER FALSE
#define BIND_Float4_y_FIELD_WRITER FALSE
#define BIND_Float4_z_FIELD_READER FALSE
#define BIND_Float4_z_FIELD_WRITER FALSE

#define BIND_Float4X4_TYPE TRUE
#define BIND_Float4X4_INITIALIZE FALSE

#define BIND_GzState_TYPE TRUE
#define BIND_GzState_INITIALIZE FALSE
#define BIND_GzState_direct_FIELD_READER FALSE
#define BIND_GzState_direct_FIELD_WRITER FALSE
#define BIND_GzState_eof_FIELD_READER FALSE
#define BIND_GzState_eof_FIELD_WRITER FALSE
#define BIND_GzState_err_FIELD_READER FALSE
#define BIND_GzState_err_FIELD_WRITER FALSE
#define BIND_GzState_fd_FIELD_READER FALSE
#define BIND_GzState_fd_FIELD_WRITER FALSE
#define BIND_GzState_how_FIELD_READER FALSE
#define BIND_GzState_how_FIELD_WRITER FALSE
#define BIND_GzState_in_FIELD_READER FALSE
#define BIND_GzState_in_FIELD_WRITER FALSE
#define BIND_GzState_level_FIELD_READER FALSE
#define BIND_GzState_level_FIELD_WRITER FALSE
#define BIND_GzState_mode_FIELD_READER FALSE
#define BIND_GzState_mode_FIELD_WRITER FALSE
#define BIND_GzState_msg_FIELD_READER FALSE
#define BIND_GzState_msg_FIELD_WRITER FALSE
#define BIND_GzState_out_FIELD_READER FALSE
#define BIND_GzState_out_FIELD_WRITER FALSE
#define BIND_GzState_past_FIELD_READER FALSE
#define BIND_GzState_past_FIELD_WRITER FALSE
#define BIND_GzState_path_FIELD_READER FALSE
#define BIND_GzState_path_FIELD_WRITER FALSE
#define BIND_GzState_seek_FIELD_READER FALSE
#define BIND_GzState_seek_FIELD_WRITER FALSE
#define BIND_GzState_size_FIELD_READER FALSE
#define BIND_GzState_size_FIELD_WRITER FALSE
#define BIND_GzState_skip_FIELD_READER FALSE
#define BIND_GzState_skip_FIELD_WRITER FALSE
#define BIND_GzState_start_FIELD_READER FALSE
#define BIND_GzState_start_FIELD_WRITER FALSE
#define BIND_GzState_strategy_FIELD_READER FALSE
#define BIND_GzState_strategy_FIELD_WRITER FALSE
#define BIND_GzState_strm_FIELD_READER FALSE
#define BIND_GzState_strm_FIELD_WRITER FALSE
#define BIND_GzState_want_FIELD_READER FALSE
#define BIND_GzState_want_FIELD_WRITER FALSE
#define BIND_GzState_x_FIELD_READER FALSE
#define BIND_GzState_x_FIELD_WRITER FALSE

#define BIND_HTreeGroup_TYPE TRUE
#define BIND_HTreeGroup_INITIALIZE FALSE
#define BIND_HTreeGroup_htrees__FIELD_READER FALSE
#define BIND_HTreeGroup_htrees__FIELD_WRITER FALSE

#define BIND_HuffmanTreeCode_TYPE TRUE
#define BIND_HuffmanTreeCode_INITIALIZE FALSE
#define BIND_HuffmanTreeCode_code_lengths_FIELD_READER FALSE
#define BIND_HuffmanTreeCode_code_lengths_FIELD_WRITER FALSE
#define BIND_HuffmanTreeCode_codes_FIELD_READER FALSE
#define BIND_HuffmanTreeCode_codes_FIELD_WRITER FALSE
#define BIND_HuffmanTreeCode_num_symbols_FIELD_READER FALSE
#define BIND_HuffmanTreeCode_num_symbols_FIELD_WRITER FALSE

#define BIND_HuffmanTreeNode_TYPE TRUE
#define BIND_HuffmanTreeNode_INITIALIZE FALSE
#define BIND_HuffmanTreeNode_children__FIELD_READER FALSE
#define BIND_HuffmanTreeNode_children__FIELD_WRITER FALSE
#define BIND_HuffmanTreeNode_symbol__FIELD_READER FALSE
#define BIND_HuffmanTreeNode_symbol__FIELD_WRITER FALSE

#define BIND_HuffmanTreeToken_TYPE TRUE
#define BIND_HuffmanTreeToken_INITIALIZE FALSE
#define BIND_HuffmanTreeToken_code_FIELD_READER FALSE
#define BIND_HuffmanTreeToken_code_FIELD_WRITER FALSE
#define BIND_HuffmanTreeToken_extra_bits_FIELD_READER FALSE
#define BIND_HuffmanTreeToken_extra_bits_FIELD_WRITER FALSE

#define BIND_JHUFFTBL_TYPE TRUE
#define BIND_JHUFFTBL_INITIALIZE FALSE
#define BIND_JHUFFTBL_bits_FIELD_READER FALSE
#define BIND_JHUFFTBL_bits_FIELD_WRITER FALSE
#define BIND_JHUFFTBL_bits_FIELD_READER FALSE
#define BIND_JHUFFTBL_bits_FIELD_WRITER FALSE
#define BIND_JHUFFTBL_huffval_FIELD_READER FALSE
#define BIND_JHUFFTBL_huffval_FIELD_WRITER FALSE
#define BIND_JHUFFTBL_huffval_FIELD_READER FALSE
#define BIND_JHUFFTBL_huffval_FIELD_WRITER FALSE
#define BIND_JHUFFTBL_sent_table_FIELD_READER FALSE
#define BIND_JHUFFTBL_sent_table_FIELD_WRITER FALSE
#define BIND_JHUFFTBL_sent_table_FIELD_READER FALSE
#define BIND_JHUFFTBL_sent_table_FIELD_WRITER FALSE

#define BIND_JpegComponentInfo_TYPE TRUE
#define BIND_JpegComponentInfo_INITIALIZE FALSE
#define BIND_JpegComponentInfo_DCT_h_scaled_size_FIELD_READER FALSE
#define BIND_JpegComponentInfo_DCT_h_scaled_size_FIELD_WRITER FALSE
#define BIND_JpegComponentInfo_DCT_h_scaled_size_FIELD_READER FALSE
#define BIND_JpegComponentInfo_DCT_h_scaled_size_FIELD_WRITER FALSE
#define BIND_JpegComponentInfo_DCT_v_scaled_size_FIELD_READER FALSE
#define BIND_JpegComponentInfo_DCT_v_scaled_size_FIELD_WRITER FALSE
#define BIND_JpegComponentInfo_DCT_v_scaled_size_FIELD_READER FALSE
#define BIND_JpegComponentInfo_DCT_v_scaled_size_FIELD_WRITER FALSE
#define BIND_JpegComponentInfo_MCU_blocks_FIELD_READER FALSE
#define BIND_JpegComponentInfo_MCU_blocks_FIELD_WRITER FALSE
#define BIND_JpegComponentInfo_MCU_blocks_FIELD_READER FALSE
#define BIND_JpegComponentInfo_MCU_blocks_FIELD_WRITER FALSE
#define BIND_JpegComponentInfo_MCU_height_FIELD_READER FALSE
#define BIND_JpegComponentInfo_MCU_height_FIELD_WRITER FALSE
#define BIND_JpegComponentInfo_MCU_height_FIELD_READER FALSE
#define BIND_JpegComponentInfo_MCU_height_FIELD_WRITER FALSE
#define BIND_JpegComponentInfo_MCU_sample_width_FIELD_READER FALSE
#define BIND_JpegComponentInfo_MCU_sample_width_FIELD_WRITER FALSE
#define BIND_JpegComponentInfo_MCU_sample_width_FIELD_READER FALSE
#define BIND_JpegComponentInfo_MCU_sample_width_FIELD_WRITER FALSE
#define BIND_JpegComponentInfo_MCU_width_FIELD_READER FALSE
#define BIND_JpegComponentInfo_MCU_width_FIELD_WRITER FALSE
#define BIND_JpegComponentInfo_MCU_width_FIELD_READER FALSE
#define BIND_JpegComponentInfo_MCU_width_FIELD_WRITER FALSE
#define BIND_JpegComponentInfo_ac_tbl_no_FIELD_READER FALSE
#define BIND_JpegComponentInfo_ac_tbl_no_FIELD_WRITER FALSE
#define BIND_JpegComponentInfo_ac_tbl_no_FIELD_READER FALSE
#define BIND_JpegComponentInfo_ac_tbl_no_FIELD_WRITER FALSE
#define BIND_JpegComponentInfo_component_id_FIELD_READER FALSE
#define BIND_JpegComponentInfo_component_id_FIELD_WRITER FALSE
#define BIND_JpegComponentInfo_component_id_FIELD_READER FALSE
#define BIND_JpegComponentInfo_component_id_FIELD_WRITER FALSE
#define BIND_JpegComponentInfo_component_index_FIELD_READER FALSE
#define BIND_JpegComponentInfo_component_index_FIELD_WRITER FALSE
#define BIND_JpegComponentInfo_component_index_FIELD_READER FALSE
#define BIND_JpegComponentInfo_component_index_FIELD_WRITER FALSE
#define BIND_JpegComponentInfo_component_needed_FIELD_READER FALSE
#define BIND_JpegComponentInfo_component_needed_FIELD_WRITER FALSE
#define BIND_JpegComponentInfo_component_needed_FIELD_READER FALSE
#define BIND_JpegComponentInfo_component_needed_FIELD_WRITER FALSE
#define BIND_JpegComponentInfo_dc_tbl_no_FIELD_READER FALSE
#define BIND_JpegComponentInfo_dc_tbl_no_FIELD_WRITER FALSE
#define BIND_JpegComponentInfo_dc_tbl_no_FIELD_READER FALSE
#define BIND_JpegComponentInfo_dc_tbl_no_FIELD_WRITER FALSE
#define BIND_JpegComponentInfo_dct_table_FIELD_READER FALSE
#define BIND_JpegComponentInfo_dct_table_FIELD_WRITER FALSE
#define BIND_JpegComponentInfo_dct_table_FIELD_READER FALSE
#define BIND_JpegComponentInfo_dct_table_FIELD_WRITER FALSE
#define BIND_JpegComponentInfo_downsampled_height_FIELD_READER FALSE
#define BIND_JpegComponentInfo_downsampled_height_FIELD_WRITER FALSE
#define BIND_JpegComponentInfo_downsampled_height_FIELD_READER FALSE
#define BIND_JpegComponentInfo_downsampled_height_FIELD_WRITER FALSE
#define BIND_JpegComponentInfo_downsampled_width_FIELD_READER FALSE
#define BIND_JpegComponentInfo_downsampled_width_FIELD_WRITER FALSE
#define BIND_JpegComponentInfo_downsampled_width_FIELD_READER FALSE
#define BIND_JpegComponentInfo_downsampled_width_FIELD_WRITER FALSE
#define BIND_JpegComponentInfo_h_samp_factor_FIELD_READER FALSE
#define BIND_JpegComponentInfo_h_samp_factor_FIELD_WRITER FALSE
#define BIND_JpegComponentInfo_h_samp_factor_FIELD_READER FALSE
#define BIND_JpegComponentInfo_h_samp_factor_FIELD_WRITER FALSE
#define BIND_JpegComponentInfo_height_in_blocks_FIELD_READER FALSE
#define BIND_JpegComponentInfo_height_in_blocks_FIELD_WRITER FALSE
#define BIND_JpegComponentInfo_height_in_blocks_FIELD_READER FALSE
#define BIND_JpegComponentInfo_height_in_blocks_FIELD_WRITER FALSE
#define BIND_JpegComponentInfo_last_col_width_FIELD_READER FALSE
#define BIND_JpegComponentInfo_last_col_width_FIELD_WRITER FALSE
#define BIND_JpegComponentInfo_last_col_width_FIELD_READER FALSE
#define BIND_JpegComponentInfo_last_col_width_FIELD_WRITER FALSE
#define BIND_JpegComponentInfo_last_row_height_FIELD_READER FALSE
#define BIND_JpegComponentInfo_last_row_height_FIELD_WRITER FALSE
#define BIND_JpegComponentInfo_last_row_height_FIELD_READER FALSE
#define BIND_JpegComponentInfo_last_row_height_FIELD_WRITER FALSE
#define BIND_JpegComponentInfo_quant_table_FIELD_READER FALSE
#define BIND_JpegComponentInfo_quant_table_FIELD_WRITER FALSE
#define BIND_JpegComponentInfo_quant_table_FIELD_READER FALSE
#define BIND_JpegComponentInfo_quant_table_FIELD_WRITER FALSE
#define BIND_JpegComponentInfo_quant_tbl_no_FIELD_READER FALSE
#define BIND_JpegComponentInfo_quant_tbl_no_FIELD_WRITER FALSE
#define BIND_JpegComponentInfo_quant_tbl_no_FIELD_READER FALSE
#define BIND_JpegComponentInfo_quant_tbl_no_FIELD_WRITER FALSE
#define BIND_JpegComponentInfo_v_samp_factor_FIELD_READER FALSE
#define BIND_JpegComponentInfo_v_samp_factor_FIELD_WRITER FALSE
#define BIND_JpegComponentInfo_v_samp_factor_FIELD_READER FALSE
#define BIND_JpegComponentInfo_v_samp_factor_FIELD_WRITER FALSE
#define BIND_JpegComponentInfo_width_in_blocks_FIELD_READER FALSE
#define BIND_JpegComponentInfo_width_in_blocks_FIELD_WRITER FALSE
#define BIND_JpegComponentInfo_width_in_blocks_FIELD_READER FALSE
#define BIND_JpegComponentInfo_width_in_blocks_FIELD_WRITER FALSE

#define BIND_JpegScanInfo_TYPE TRUE
#define BIND_JpegScanInfo_INITIALIZE FALSE
#define BIND_JpegScanInfo_Ah_FIELD_READER FALSE
#define BIND_JpegScanInfo_Ah_FIELD_WRITER FALSE
#define BIND_JpegScanInfo_Ah_FIELD_READER FALSE
#define BIND_JpegScanInfo_Ah_FIELD_WRITER FALSE
#define BIND_JpegScanInfo_Al_FIELD_READER FALSE
#define BIND_JpegScanInfo_Al_FIELD_WRITER FALSE
#define BIND_JpegScanInfo_Al_FIELD_READER FALSE
#define BIND_JpegScanInfo_Al_FIELD_WRITER FALSE
#define BIND_JpegScanInfo_Se_FIELD_READER FALSE
#define BIND_JpegScanInfo_Se_FIELD_WRITER FALSE
#define BIND_JpegScanInfo_Se_FIELD_READER FALSE
#define BIND_JpegScanInfo_Se_FIELD_WRITER FALSE
#define BIND_JpegScanInfo_Ss_FIELD_READER FALSE
#define BIND_JpegScanInfo_Ss_FIELD_WRITER FALSE
#define BIND_JpegScanInfo_Ss_FIELD_READER FALSE
#define BIND_JpegScanInfo_Ss_FIELD_WRITER FALSE
#define BIND_JpegScanInfo_component_index_FIELD_READER FALSE
#define BIND_JpegScanInfo_component_index_FIELD_WRITER FALSE
#define BIND_JpegScanInfo_component_index_FIELD_READER FALSE
#define BIND_JpegScanInfo_component_index_FIELD_WRITER FALSE
#define BIND_JpegScanInfo_comps_in_scan_FIELD_READER FALSE
#define BIND_JpegScanInfo_comps_in_scan_FIELD_WRITER FALSE
#define BIND_JpegScanInfo_comps_in_scan_FIELD_READER FALSE
#define BIND_JpegScanInfo_comps_in_scan_FIELD_WRITER FALSE

#define BIND_JpegTransformInfo_TYPE TRUE
#define BIND_JpegTransformInfo_INITIALIZE FALSE
#define BIND_JpegTransformInfo_crop_FIELD_READER FALSE
#define BIND_JpegTransformInfo_crop_FIELD_WRITER FALSE
#define BIND_JpegTransformInfo_crop_height_FIELD_READER FALSE
#define BIND_JpegTransformInfo_crop_height_FIELD_WRITER FALSE
#define BIND_JpegTransformInfo_crop_height_set_FIELD_READER FALSE
#define BIND_JpegTransformInfo_crop_height_set_FIELD_WRITER FALSE
#define BIND_JpegTransformInfo_crop_width_FIELD_READER FALSE
#define BIND_JpegTransformInfo_crop_width_FIELD_WRITER FALSE
#define BIND_JpegTransformInfo_crop_width_set_FIELD_READER FALSE
#define BIND_JpegTransformInfo_crop_width_set_FIELD_WRITER FALSE
#define BIND_JpegTransformInfo_crop_xoffset_FIELD_READER FALSE
#define BIND_JpegTransformInfo_crop_xoffset_FIELD_WRITER FALSE
#define BIND_JpegTransformInfo_crop_xoffset_set_FIELD_READER FALSE
#define BIND_JpegTransformInfo_crop_xoffset_set_FIELD_WRITER FALSE
#define BIND_JpegTransformInfo_crop_yoffset_FIELD_READER FALSE
#define BIND_JpegTransformInfo_crop_yoffset_FIELD_WRITER FALSE
#define BIND_JpegTransformInfo_crop_yoffset_set_FIELD_READER FALSE
#define BIND_JpegTransformInfo_crop_yoffset_set_FIELD_WRITER FALSE
#define BIND_JpegTransformInfo_force_grayscale_FIELD_READER FALSE
#define BIND_JpegTransformInfo_force_grayscale_FIELD_WRITER FALSE
#define BIND_JpegTransformInfo_iMCU_sample_height_FIELD_READER FALSE
#define BIND_JpegTransformInfo_iMCU_sample_height_FIELD_WRITER FALSE
#define BIND_JpegTransformInfo_iMCU_sample_width_FIELD_READER FALSE
#define BIND_JpegTransformInfo_iMCU_sample_width_FIELD_WRITER FALSE
#define BIND_JpegTransformInfo_num_components_FIELD_READER FALSE
#define BIND_JpegTransformInfo_num_components_FIELD_WRITER FALSE
#define BIND_JpegTransformInfo_output_height_FIELD_READER FALSE
#define BIND_JpegTransformInfo_output_height_FIELD_WRITER FALSE
#define BIND_JpegTransformInfo_output_width_FIELD_READER FALSE
#define BIND_JpegTransformInfo_output_width_FIELD_WRITER FALSE
#define BIND_JpegTransformInfo_perfect_FIELD_READER FALSE
#define BIND_JpegTransformInfo_perfect_FIELD_WRITER FALSE
#define BIND_JpegTransformInfo_transform_FIELD_READER FALSE
#define BIND_JpegTransformInfo_transform_FIELD_WRITER FALSE
#define BIND_JpegTransformInfo_trim_FIELD_READER FALSE
#define BIND_JpegTransformInfo_trim_FIELD_WRITER FALSE
#define BIND_JpegTransformInfo_workspace_coef_arrays_FIELD_READER FALSE
#define BIND_JpegTransformInfo_workspace_coef_arrays_FIELD_WRITER FALSE
#define BIND_JpegTransformInfo_x_crop_offset_FIELD_READER FALSE
#define BIND_JpegTransformInfo_x_crop_offset_FIELD_WRITER FALSE
#define BIND_JpegTransformInfo_y_crop_offset_FIELD_READER FALSE
#define BIND_JpegTransformInfo_y_crop_offset_FIELD_WRITER FALSE

#define BIND_JQUANTTBL_TYPE TRUE
#define BIND_JQUANTTBL_INITIALIZE FALSE
#define BIND_JQUANTTBL_quantval_FIELD_READER FALSE
#define BIND_JQUANTTBL_quantval_FIELD_WRITER FALSE
#define BIND_JQUANTTBL_quantval_FIELD_READER FALSE
#define BIND_JQUANTTBL_quantval_FIELD_WRITER FALSE
#define BIND_JQUANTTBL_sent_table_FIELD_READER FALSE
#define BIND_JQUANTTBL_sent_table_FIELD_WRITER FALSE
#define BIND_JQUANTTBL_sent_table_FIELD_READER FALSE
#define BIND_JQUANTTBL_sent_table_FIELD_WRITER FALSE

#define BIND_MIRData_TYPE TRUE
#define BIND_MIRData_INITIALIZE FALSE
#define BIND_MIRData_connection_FIELD_READER FALSE
#define BIND_MIRData_connection_FIELD_WRITER FALSE

#define BIND_MIRWindow_TYPE TRUE
#define BIND_MIRWindow_INITIALIZE FALSE
#define BIND_MIRWindow_egl_surface_FIELD_READER FALSE
#define BIND_MIRWindow_egl_surface_FIELD_WRITER FALSE
#define BIND_MIRWindow_mir_data_FIELD_READER FALSE
#define BIND_MIRWindow_mir_data_FIELD_WRITER FALSE
#define BIND_MIRWindow_sdl_window_FIELD_READER FALSE
#define BIND_MIRWindow_sdl_window_FIELD_WRITER FALSE
#define BIND_MIRWindow_surface_FIELD_READER FALSE
#define BIND_MIRWindow_surface_FIELD_WRITER FALSE

#define BIND_NativeWindowFactory_TYPE TRUE
#define BIND_NativeWindowFactory_INITIALIZE FALSE
#define BIND_NativeWindowFactory_CreateNativeWindow_FIELD_READER FALSE
#define BIND_NativeWindowFactory_CreateNativeWindow_FIELD_WRITER FALSE
#define BIND_NativeWindowFactory_DestroyNativeWindow_FIELD_READER FALSE
#define BIND_NativeWindowFactory_DestroyNativeWindow_FIELD_WRITER FALSE
#define BIND_NativeWindowFactory_tag_FIELD_READER FALSE
#define BIND_NativeWindowFactory_tag_FIELD_WRITER FALSE

#define BIND_PixOrCopy_TYPE TRUE
#define BIND_PixOrCopy_INITIALIZE FALSE
#define BIND_PixOrCopy_argb_or_distance_FIELD_READER FALSE
#define BIND_PixOrCopy_argb_or_distance_FIELD_WRITER FALSE
#define BIND_PixOrCopy_len_FIELD_READER FALSE
#define BIND_PixOrCopy_len_FIELD_WRITER FALSE
#define BIND_PixOrCopy_mode_FIELD_READER FALSE
#define BIND_PixOrCopy_mode_FIELD_WRITER FALSE

#define BIND_PngImage_TYPE TRUE
#define BIND_PngImage_INITIALIZE FALSE
#define BIND_PngImage_colormap_entries_FIELD_READER FALSE
#define BIND_PngImage_colormap_entries_FIELD_WRITER FALSE
#define BIND_PngImage_colormap_entries_FIELD_READER FALSE
#define BIND_PngImage_colormap_entries_FIELD_WRITER FALSE
#define BIND_PngImage_flags_FIELD_READER FALSE
#define BIND_PngImage_flags_FIELD_WRITER FALSE
#define BIND_PngImage_flags_FIELD_READER FALSE
#define BIND_PngImage_flags_FIELD_WRITER FALSE
#define BIND_PngImage_format_FIELD_READER FALSE
#define BIND_PngImage_format_FIELD_WRITER FALSE
#define BIND_PngImage_format_FIELD_READER FALSE
#define BIND_PngImage_format_FIELD_WRITER FALSE
#define BIND_PngImage_height_FIELD_READER FALSE
#define BIND_PngImage_height_FIELD_WRITER FALSE
#define BIND_PngImage_height_FIELD_READER FALSE
#define BIND_PngImage_height_FIELD_WRITER FALSE
#define BIND_PngImage_message_FIELD_READER FALSE
#define BIND_PngImage_message_FIELD_WRITER FALSE
#define BIND_PngImage_message_FIELD_READER FALSE
#define BIND_PngImage_message_FIELD_WRITER FALSE
#define BIND_PngImage_opaque_FIELD_READER FALSE
#define BIND_PngImage_opaque_FIELD_WRITER FALSE
#define BIND_PngImage_opaque_FIELD_READER FALSE
#define BIND_PngImage_opaque_FIELD_WRITER FALSE
#define BIND_PngImage_version_FIELD_READER FALSE
#define BIND_PngImage_version_FIELD_WRITER FALSE
#define BIND_PngImage_version_FIELD_READER FALSE
#define BIND_PngImage_version_FIELD_WRITER FALSE
#define BIND_PngImage_warning_or_error_FIELD_READER FALSE
#define BIND_PngImage_warning_or_error_FIELD_WRITER FALSE
#define BIND_PngImage_warning_or_error_FIELD_READER FALSE
#define BIND_PngImage_warning_or_error_FIELD_WRITER FALSE
#define BIND_PngImage_width_FIELD_READER FALSE
#define BIND_PngImage_width_FIELD_WRITER FALSE
#define BIND_PngImage_width_FIELD_READER FALSE
#define BIND_PngImage_width_FIELD_WRITER FALSE

#define BIND_SDLAtomicT_TYPE TRUE
#define BIND_SDLAtomicT_INITIALIZE FALSE
#define BIND_SDLAtomicT_value_FIELD_READER FALSE
#define BIND_SDLAtomicT_value_FIELD_WRITER FALSE

#define BIND_SDLAudioRateFilters_TYPE TRUE
#define BIND_SDLAudioRateFilters_INITIALIZE FALSE
#define BIND_SDLAudioRateFilters_channels_FIELD_READER FALSE
#define BIND_SDLAudioRateFilters_channels_FIELD_WRITER FALSE
#define BIND_SDLAudioRateFilters_filter_FIELD_READER FALSE
#define BIND_SDLAudioRateFilters_filter_FIELD_WRITER FALSE
#define BIND_SDLAudioRateFilters_fmt_FIELD_READER FALSE
#define BIND_SDLAudioRateFilters_fmt_FIELD_WRITER FALSE
#define BIND_SDLAudioRateFilters_multiple_FIELD_READER FALSE
#define BIND_SDLAudioRateFilters_multiple_FIELD_WRITER FALSE
#define BIND_SDLAudioRateFilters_upsample_FIELD_READER FALSE
#define BIND_SDLAudioRateFilters_upsample_FIELD_WRITER FALSE

#define BIND_SDLAudioStreamer_TYPE TRUE
#define BIND_SDLAudioStreamer_INITIALIZE FALSE
#define BIND_SDLAudioStreamer_buffer_FIELD_READER FALSE
#define BIND_SDLAudioStreamer_buffer_FIELD_WRITER FALSE
#define BIND_SDLAudioStreamer_max_len_FIELD_READER FALSE
#define BIND_SDLAudioStreamer_max_len_FIELD_WRITER FALSE
#define BIND_SDLAudioStreamer_read_pos_FIELD_READER FALSE
#define BIND_SDLAudioStreamer_read_pos_FIELD_WRITER FALSE
#define BIND_SDLAudioStreamer_write_pos_FIELD_READER FALSE
#define BIND_SDLAudioStreamer_write_pos_FIELD_WRITER FALSE

#define BIND_SDLAudioTypeFilters_TYPE TRUE
#define BIND_SDLAudioTypeFilters_INITIALIZE FALSE
#define BIND_SDLAudioTypeFilters_dst_fmt_FIELD_READER FALSE
#define BIND_SDLAudioTypeFilters_dst_fmt_FIELD_WRITER FALSE
#define BIND_SDLAudioTypeFilters_filter_FIELD_READER FALSE
#define BIND_SDLAudioTypeFilters_filter_FIELD_WRITER FALSE
#define BIND_SDLAudioTypeFilters_src_fmt_FIELD_READER FALSE
#define BIND_SDLAudioTypeFilters_src_fmt_FIELD_WRITER FALSE

#define BIND_SDLBlitFuncEntry_TYPE TRUE
#define BIND_SDLBlitFuncEntry_INITIALIZE FALSE
#define BIND_SDLBlitFuncEntry_cpu_FIELD_READER FALSE
#define BIND_SDLBlitFuncEntry_cpu_FIELD_WRITER FALSE
#define BIND_SDLBlitFuncEntry_dst_format_FIELD_READER FALSE
#define BIND_SDLBlitFuncEntry_dst_format_FIELD_WRITER FALSE
#define BIND_SDLBlitFuncEntry_flags_FIELD_READER FALSE
#define BIND_SDLBlitFuncEntry_flags_FIELD_WRITER FALSE
#define BIND_SDLBlitFuncEntry_func_FIELD_READER FALSE
#define BIND_SDLBlitFuncEntry_func_FIELD_WRITER FALSE
#define BIND_SDLBlitFuncEntry_src_format_FIELD_READER FALSE
#define BIND_SDLBlitFuncEntry_src_format_FIELD_WRITER FALSE

#define BIND_SDLBlitInfo_TYPE TRUE
#define BIND_SDLBlitInfo_INITIALIZE FALSE
#define BIND_SDLBlitInfo_a_FIELD_READER FALSE
#define BIND_SDLBlitInfo_a_FIELD_WRITER FALSE
#define BIND_SDLBlitInfo_b_FIELD_READER FALSE
#define BIND_SDLBlitInfo_b_FIELD_WRITER FALSE
#define BIND_SDLBlitInfo_colorkey_FIELD_READER FALSE
#define BIND_SDLBlitInfo_colorkey_FIELD_WRITER FALSE
#define BIND_SDLBlitInfo_dst_FIELD_READER FALSE
#define BIND_SDLBlitInfo_dst_FIELD_WRITER FALSE
#define BIND_SDLBlitInfo_dst_fmt_FIELD_READER FALSE
#define BIND_SDLBlitInfo_dst_fmt_FIELD_WRITER FALSE
#define BIND_SDLBlitInfo_dst_h_FIELD_READER FALSE
#define BIND_SDLBlitInfo_dst_h_FIELD_WRITER FALSE
#define BIND_SDLBlitInfo_dst_pitch_FIELD_READER FALSE
#define BIND_SDLBlitInfo_dst_pitch_FIELD_WRITER FALSE
#define BIND_SDLBlitInfo_dst_skip_FIELD_READER FALSE
#define BIND_SDLBlitInfo_dst_skip_FIELD_WRITER FALSE
#define BIND_SDLBlitInfo_dst_w_FIELD_READER FALSE
#define BIND_SDLBlitInfo_dst_w_FIELD_WRITER FALSE
#define BIND_SDLBlitInfo_flags_FIELD_READER FALSE
#define BIND_SDLBlitInfo_flags_FIELD_WRITER FALSE
#define BIND_SDLBlitInfo_g_FIELD_READER FALSE
#define BIND_SDLBlitInfo_g_FIELD_WRITER FALSE
#define BIND_SDLBlitInfo_r_FIELD_READER FALSE
#define BIND_SDLBlitInfo_r_FIELD_WRITER FALSE
#define BIND_SDLBlitInfo_src_FIELD_READER FALSE
#define BIND_SDLBlitInfo_src_FIELD_WRITER FALSE
#define BIND_SDLBlitInfo_src_fmt_FIELD_READER FALSE
#define BIND_SDLBlitInfo_src_fmt_FIELD_WRITER FALSE
#define BIND_SDLBlitInfo_src_h_FIELD_READER FALSE
#define BIND_SDLBlitInfo_src_h_FIELD_WRITER FALSE
#define BIND_SDLBlitInfo_src_pitch_FIELD_READER FALSE
#define BIND_SDLBlitInfo_src_pitch_FIELD_WRITER FALSE
#define BIND_SDLBlitInfo_src_skip_FIELD_READER FALSE
#define BIND_SDLBlitInfo_src_skip_FIELD_WRITER FALSE
#define BIND_SDLBlitInfo_src_w_FIELD_READER FALSE
#define BIND_SDLBlitInfo_src_w_FIELD_WRITER FALSE
#define BIND_SDLBlitInfo_table_FIELD_READER FALSE
#define BIND_SDLBlitInfo_table_FIELD_WRITER FALSE

#define BIND_SDLDisplayData_TYPE TRUE
#define BIND_SDLDisplayData_INITIALIZE FALSE
#define BIND_SDLDisplayData_DeviceName_FIELD_READER FALSE
#define BIND_SDLDisplayData_DeviceName_FIELD_WRITER FALSE
#define BIND_SDLDisplayData_depth_FIELD_READER FALSE
#define BIND_SDLDisplayData_depth_FIELD_WRITER FALSE
#define BIND_SDLDisplayData_display_FIELD_READER FALSE
#define BIND_SDLDisplayData_display_FIELD_WRITER FALSE
#define BIND_SDLDisplayData_scale_FIELD_READER FALSE
#define BIND_SDLDisplayData_scale_FIELD_WRITER FALSE
#define BIND_SDLDisplayData_scanline_pad_FIELD_READER FALSE
#define BIND_SDLDisplayData_scanline_pad_FIELD_WRITER FALSE
#define BIND_SDLDisplayData_screen_FIELD_READER FALSE
#define BIND_SDLDisplayData_screen_FIELD_WRITER FALSE
#define BIND_SDLDisplayData_uiscreen_FIELD_READER FALSE
#define BIND_SDLDisplayData_uiscreen_FIELD_WRITER FALSE
#define BIND_SDLDisplayData_use_vidmode_FIELD_READER FALSE
#define BIND_SDLDisplayData_use_vidmode_FIELD_WRITER FALSE
#define BIND_SDLDisplayData_use_xinerama_FIELD_READER FALSE
#define BIND_SDLDisplayData_use_xinerama_FIELD_WRITER FALSE
#define BIND_SDLDisplayData_use_xrandr_FIELD_READER FALSE
#define BIND_SDLDisplayData_use_xrandr_FIELD_WRITER FALSE
#define BIND_SDLDisplayData_visual_FIELD_READER FALSE
#define BIND_SDLDisplayData_visual_FIELD_WRITER FALSE
#define BIND_SDLDisplayData_x_FIELD_READER FALSE
#define BIND_SDLDisplayData_x_FIELD_WRITER FALSE
#define BIND_SDLDisplayData_y_FIELD_READER FALSE
#define BIND_SDLDisplayData_y_FIELD_WRITER FALSE

#define BIND_SDLDisplayMode_TYPE TRUE
#define BIND_SDLDisplayMode_INITIALIZE FALSE
#define BIND_SDLDisplayMode_driverdata_FIELD_READER FALSE
#define BIND_SDLDisplayMode_driverdata_FIELD_WRITER FALSE
#define BIND_SDLDisplayMode_format_FIELD_READER FALSE
#define BIND_SDLDisplayMode_format_FIELD_WRITER FALSE
#define BIND_SDLDisplayMode_h_FIELD_READER FALSE
#define BIND_SDLDisplayMode_h_FIELD_WRITER FALSE
#define BIND_SDLDisplayMode_refresh_rate_FIELD_READER FALSE
#define BIND_SDLDisplayMode_refresh_rate_FIELD_WRITER FALSE
#define BIND_SDLDisplayMode_w_FIELD_READER FALSE
#define BIND_SDLDisplayMode_w_FIELD_WRITER FALSE

#define BIND_SDLDisplayModeData_TYPE TRUE
#define BIND_SDLDisplayModeData_INITIALIZE FALSE
#define BIND_SDLDisplayModeData_DeviceMode_FIELD_READER FALSE
#define BIND_SDLDisplayModeData_DeviceMode_FIELD_WRITER FALSE
#define BIND_SDLDisplayModeData_ScaleX_FIELD_READER FALSE
#define BIND_SDLDisplayModeData_ScaleX_FIELD_WRITER FALSE
#define BIND_SDLDisplayModeData_ScaleY_FIELD_READER FALSE
#define BIND_SDLDisplayModeData_ScaleY_FIELD_WRITER FALSE
#define BIND_SDLDisplayModeData_Windows_FIELD_READER FALSE
#define BIND_SDLDisplayModeData_Windows_FIELD_WRITER FALSE
#define BIND_SDLDisplayModeData_moderef_FIELD_READER FALSE
#define BIND_SDLDisplayModeData_moderef_FIELD_WRITER FALSE
#define BIND_SDLDisplayModeData_scale_FIELD_READER FALSE
#define BIND_SDLDisplayModeData_scale_FIELD_WRITER FALSE
#define BIND_SDLDisplayModeData_uiscreenmode_FIELD_READER FALSE
#define BIND_SDLDisplayModeData_uiscreenmode_FIELD_WRITER FALSE

#define BIND_SDLFPoint_TYPE TRUE
#define BIND_SDLFPoint_INITIALIZE FALSE
#define BIND_SDLFPoint_x_FIELD_READER FALSE
#define BIND_SDLFPoint_x_FIELD_WRITER FALSE
#define BIND_SDLFPoint_y_FIELD_READER FALSE
#define BIND_SDLFPoint_y_FIELD_WRITER FALSE

#define BIND_SDLFRect_TYPE TRUE
#define BIND_SDLFRect_INITIALIZE FALSE
#define BIND_SDLFRect_h_FIELD_READER FALSE
#define BIND_SDLFRect_h_FIELD_WRITER FALSE
#define BIND_SDLFRect_w_FIELD_READER FALSE
#define BIND_SDLFRect_w_FIELD_WRITER FALSE
#define BIND_SDLFRect_x_FIELD_READER FALSE
#define BIND_SDLFRect_x_FIELD_WRITER FALSE
#define BIND_SDLFRect_y_FIELD_READER FALSE
#define BIND_SDLFRect_y_FIELD_WRITER FALSE

#define BIND_SDLJoystickGUID_TYPE TRUE
#define BIND_SDLJoystickGUID_INITIALIZE FALSE
#define BIND_SDLJoystickGUID_data_FIELD_READER FALSE
#define BIND_SDLJoystickGUID_data_FIELD_WRITER FALSE

#define BIND_SDLMessageBoxButtonData_TYPE TRUE
#define BIND_SDLMessageBoxButtonData_INITIALIZE FALSE
#define BIND_SDLMessageBoxButtonData_buttonid_FIELD_READER FALSE
#define BIND_SDLMessageBoxButtonData_buttonid_FIELD_WRITER FALSE
#define BIND_SDLMessageBoxButtonData_flags_FIELD_READER FALSE
#define BIND_SDLMessageBoxButtonData_flags_FIELD_WRITER FALSE
#define BIND_SDLMessageBoxButtonData_text_FIELD_READER FALSE
#define BIND_SDLMessageBoxButtonData_text_FIELD_WRITER FALSE

#define BIND_SDLMessageBoxColor_TYPE TRUE
#define BIND_SDLMessageBoxColor_INITIALIZE FALSE
#define BIND_SDLMessageBoxColor_b_FIELD_READER FALSE
#define BIND_SDLMessageBoxColor_b_FIELD_WRITER FALSE
#define BIND_SDLMessageBoxColor_g_FIELD_READER FALSE
#define BIND_SDLMessageBoxColor_g_FIELD_WRITER FALSE
#define BIND_SDLMessageBoxColor_r_FIELD_READER FALSE
#define BIND_SDLMessageBoxColor_r_FIELD_WRITER FALSE

#define BIND_SDLMessageBoxColorScheme_TYPE TRUE
#define BIND_SDLMessageBoxColorScheme_INITIALIZE FALSE
#define BIND_SDLMessageBoxColorScheme_colors_FIELD_READER FALSE
#define BIND_SDLMessageBoxColorScheme_colors_FIELD_WRITER FALSE

#define BIND_SDLMessageBoxData_TYPE TRUE
#define BIND_SDLMessageBoxData_INITIALIZE FALSE
#define BIND_SDLMessageBoxData_buttons_FIELD_READER FALSE
#define BIND_SDLMessageBoxData_buttons_FIELD_WRITER FALSE
#define BIND_SDLMessageBoxData_colorScheme_FIELD_READER FALSE
#define BIND_SDLMessageBoxData_colorScheme_FIELD_WRITER FALSE
#define BIND_SDLMessageBoxData_flags_FIELD_READER FALSE
#define BIND_SDLMessageBoxData_flags_FIELD_WRITER FALSE
#define BIND_SDLMessageBoxData_message_FIELD_READER FALSE
#define BIND_SDLMessageBoxData_message_FIELD_WRITER FALSE
#define BIND_SDLMessageBoxData_numbuttons_FIELD_READER FALSE
#define BIND_SDLMessageBoxData_numbuttons_FIELD_WRITER FALSE
#define BIND_SDLMessageBoxData_title_FIELD_READER FALSE
#define BIND_SDLMessageBoxData_title_FIELD_WRITER FALSE
#define BIND_SDLMessageBoxData_window_FIELD_READER FALSE
#define BIND_SDLMessageBoxData_window_FIELD_WRITER FALSE

#define BIND_SDLMouse_TYPE TRUE
#define BIND_SDLMouse_INITIALIZE FALSE
#define BIND_SDLMouse_CreateCursor_FIELD_READER FALSE
#define BIND_SDLMouse_CreateCursor_FIELD_WRITER FALSE
#define BIND_SDLMouse_CreateSystemCursor_FIELD_READER FALSE
#define BIND_SDLMouse_CreateSystemCursor_FIELD_WRITER FALSE
#define BIND_SDLMouse_FreeCursor_FIELD_READER FALSE
#define BIND_SDLMouse_FreeCursor_FIELD_WRITER FALSE
#define BIND_SDLMouse_MoveCursor_FIELD_READER FALSE
#define BIND_SDLMouse_MoveCursor_FIELD_WRITER FALSE
#define BIND_SDLMouse_SetRelativeMouseMode_FIELD_READER FALSE
#define BIND_SDLMouse_SetRelativeMouseMode_FIELD_WRITER FALSE
#define BIND_SDLMouse_ShowCursor_FIELD_READER FALSE
#define BIND_SDLMouse_ShowCursor_FIELD_WRITER FALSE
#define BIND_SDLMouse_WarpMouse_FIELD_READER FALSE
#define BIND_SDLMouse_WarpMouse_FIELD_WRITER FALSE
#define BIND_SDLMouse_buttonstate_FIELD_READER FALSE
#define BIND_SDLMouse_buttonstate_FIELD_WRITER FALSE
#define BIND_SDLMouse_clickstate_FIELD_READER FALSE
#define BIND_SDLMouse_clickstate_FIELD_WRITER FALSE
#define BIND_SDLMouse_cur_cursor_FIELD_READER FALSE
#define BIND_SDLMouse_cur_cursor_FIELD_WRITER FALSE
#define BIND_SDLMouse_cursor_shown_FIELD_READER FALSE
#define BIND_SDLMouse_cursor_shown_FIELD_WRITER FALSE
#define BIND_SDLMouse_cursors_FIELD_READER FALSE
#define BIND_SDLMouse_cursors_FIELD_WRITER FALSE
#define BIND_SDLMouse_def_cursor_FIELD_READER FALSE
#define BIND_SDLMouse_def_cursor_FIELD_WRITER FALSE
#define BIND_SDLMouse_driverdata_FIELD_READER FALSE
#define BIND_SDLMouse_driverdata_FIELD_WRITER FALSE
#define BIND_SDLMouse_focus_FIELD_READER FALSE
#define BIND_SDLMouse_focus_FIELD_WRITER FALSE
#define BIND_SDLMouse_last_x_FIELD_READER FALSE
#define BIND_SDLMouse_last_x_FIELD_WRITER FALSE
#define BIND_SDLMouse_last_y_FIELD_READER FALSE
#define BIND_SDLMouse_last_y_FIELD_WRITER FALSE
#define BIND_SDLMouse_mouseID_FIELD_READER FALSE
#define BIND_SDLMouse_mouseID_FIELD_WRITER FALSE
#define BIND_SDLMouse_num_clickstates_FIELD_READER FALSE
#define BIND_SDLMouse_num_clickstates_FIELD_WRITER FALSE
#define BIND_SDLMouse_relative_mode_FIELD_READER FALSE
#define BIND_SDLMouse_relative_mode_FIELD_WRITER FALSE
#define BIND_SDLMouse_relative_mode_warp_FIELD_READER FALSE
#define BIND_SDLMouse_relative_mode_warp_FIELD_WRITER FALSE
#define BIND_SDLMouse_x_FIELD_READER FALSE
#define BIND_SDLMouse_x_FIELD_WRITER FALSE
#define BIND_SDLMouse_xdelta_FIELD_READER FALSE
#define BIND_SDLMouse_xdelta_FIELD_WRITER FALSE
#define BIND_SDLMouse_y_FIELD_READER FALSE
#define BIND_SDLMouse_y_FIELD_WRITER FALSE
#define BIND_SDLMouse_ydelta_FIELD_READER FALSE
#define BIND_SDLMouse_ydelta_FIELD_WRITER FALSE

#define BIND_SDLMouseClickState_TYPE TRUE
#define BIND_SDLMouseClickState_INITIALIZE FALSE
#define BIND_SDLMouseClickState_click_count_FIELD_READER FALSE
#define BIND_SDLMouseClickState_click_count_FIELD_WRITER FALSE
#define BIND_SDLMouseClickState_last_timestamp_FIELD_READER FALSE
#define BIND_SDLMouseClickState_last_timestamp_FIELD_WRITER FALSE
#define BIND_SDLMouseClickState_last_x_FIELD_READER FALSE
#define BIND_SDLMouseClickState_last_x_FIELD_WRITER FALSE
#define BIND_SDLMouseClickState_last_y_FIELD_READER FALSE
#define BIND_SDLMouseClickState_last_y_FIELD_WRITER FALSE

#define BIND_SDLMouseData_TYPE TRUE
#define BIND_SDLMouseData_INITIALIZE FALSE
#define BIND_SDLMouseData_lastMoveX_FIELD_READER FALSE
#define BIND_SDLMouseData_lastMoveX_FIELD_WRITER FALSE
#define BIND_SDLMouseData_lastMoveY_FIELD_READER FALSE
#define BIND_SDLMouseData_lastMoveY_FIELD_WRITER FALSE
#define BIND_SDLMouseData_lastWarpX_FIELD_READER FALSE
#define BIND_SDLMouseData_lastWarpX_FIELD_WRITER FALSE
#define BIND_SDLMouseData_lastWarpY_FIELD_READER FALSE
#define BIND_SDLMouseData_lastWarpY_FIELD_WRITER FALSE
#define BIND_SDLMouseData_seenWarp_FIELD_READER FALSE
#define BIND_SDLMouseData_seenWarp_FIELD_WRITER FALSE
#define BIND_SDLMouseData_tapdata_FIELD_READER FALSE
#define BIND_SDLMouseData_tapdata_FIELD_WRITER FALSE

#define BIND_SDLQuadTreeChildren_TYPE TRUE
#define BIND_SDLQuadTreeChildren_INITIALIZE FALSE
#define BIND_SDLQuadTreeChildren_downleft_FIELD_READER FALSE
#define BIND_SDLQuadTreeChildren_downleft_FIELD_WRITER FALSE
#define BIND_SDLQuadTreeChildren_downright_FIELD_READER FALSE
#define BIND_SDLQuadTreeChildren_downright_FIELD_WRITER FALSE
#define BIND_SDLQuadTreeChildren_upleft_FIELD_READER FALSE
#define BIND_SDLQuadTreeChildren_upleft_FIELD_WRITER FALSE
#define BIND_SDLQuadTreeChildren_upright_FIELD_READER FALSE
#define BIND_SDLQuadTreeChildren_upright_FIELD_WRITER FALSE

#define BIND_SDLShapeData_TYPE TRUE
#define BIND_SDLShapeData_INITIALIZE FALSE
#define BIND_SDLShapeData_bitmap_FIELD_READER FALSE
#define BIND_SDLShapeData_bitmap_FIELD_WRITER FALSE
#define BIND_SDLShapeData_bitmapsize_FIELD_READER FALSE
#define BIND_SDLShapeData_bitmapsize_FIELD_WRITER FALSE
#define BIND_SDLShapeData_context_FIELD_READER FALSE
#define BIND_SDLShapeData_context_FIELD_WRITER FALSE
#define BIND_SDLShapeData_mask_tree_FIELD_READER FALSE
#define BIND_SDLShapeData_mask_tree_FIELD_WRITER FALSE
#define BIND_SDLShapeData_saved_FIELD_READER FALSE
#define BIND_SDLShapeData_saved_FIELD_WRITER FALSE
#define BIND_SDLShapeData_shape_FIELD_READER FALSE
#define BIND_SDLShapeData_shape_FIELD_WRITER FALSE
#define BIND_SDLShapeData_surface_FIELD_READER FALSE
#define BIND_SDLShapeData_surface_FIELD_WRITER FALSE

#define BIND_SDLShapeTree_TYPE TRUE
#define BIND_SDLShapeTree_INITIALIZE FALSE
#define BIND_SDLShapeTree_data_FIELD_READER FALSE
#define BIND_SDLShapeTree_data_FIELD_WRITER FALSE
#define BIND_SDLShapeTree_kind_FIELD_READER FALSE
#define BIND_SDLShapeTree_kind_FIELD_WRITER FALSE

#define BIND_SDLTLSData_TYPE TRUE
#define BIND_SDLTLSData_INITIALIZE FALSE
#define BIND_SDLTLSData_array_FIELD_READER FALSE
#define BIND_SDLTLSData_array_FIELD_WRITER FALSE
#define BIND_SDLTLSData_limit_FIELD_READER FALSE
#define BIND_SDLTLSData_limit_FIELD_WRITER FALSE

#define BIND_SDLVideoData_TYPE TRUE
#define BIND_SDLVideoData_INITIALIZE FALSE
#define BIND_SDLVideoData_compositor_FIELD_READER FALSE
#define BIND_SDLVideoData_compositor_FIELD_WRITER FALSE
#define BIND_SDLVideoData_context_FIELD_READER FALSE
#define BIND_SDLVideoData_context_FIELD_WRITER FALSE
#define BIND_SDLVideoData_cursor_theme_FIELD_READER FALSE
#define BIND_SDLVideoData_cursor_theme_FIELD_WRITER FALSE
#define BIND_SDLVideoData_default_cursor_FIELD_READER FALSE
#define BIND_SDLVideoData_default_cursor_FIELD_WRITER FALSE
#define BIND_SDLVideoData_display_FIELD_READER FALSE
#define BIND_SDLVideoData_display_FIELD_WRITER FALSE
#define BIND_SDLVideoData_econf_FIELD_READER FALSE
#define BIND_SDLVideoData_econf_FIELD_WRITER FALSE
#define BIND_SDLVideoData_edpy_FIELD_READER FALSE
#define BIND_SDLVideoData_edpy_FIELD_WRITER FALSE
#define BIND_SDLVideoData_input_FIELD_READER FALSE
#define BIND_SDLVideoData_input_FIELD_WRITER FALSE
#define BIND_SDLVideoData_modes_list_FIELD_READER FALSE
#define BIND_SDLVideoData_modes_list_FIELD_WRITER FALSE
#define BIND_SDLVideoData_output_FIELD_READER FALSE
#define BIND_SDLVideoData_output_FIELD_WRITER FALSE
#define BIND_SDLVideoData_pointer_FIELD_READER FALSE
#define BIND_SDLVideoData_pointer_FIELD_WRITER FALSE
#define BIND_SDLVideoData_registry_FIELD_READER FALSE
#define BIND_SDLVideoData_registry_FIELD_WRITER FALSE
#define BIND_SDLVideoData_screen_allocation_FIELD_READER FALSE
#define BIND_SDLVideoData_screen_allocation_FIELD_WRITER FALSE
#define BIND_SDLVideoData_shell_FIELD_READER FALSE
#define BIND_SDLVideoData_shell_FIELD_WRITER FALSE
#define BIND_SDLVideoData_shm_FIELD_READER FALSE
#define BIND_SDLVideoData_shm_FIELD_WRITER FALSE
#define BIND_SDLVideoData_shm_formats_FIELD_READER FALSE
#define BIND_SDLVideoData_shm_formats_FIELD_WRITER FALSE
#define BIND_SDLVideoData_xkb_context_FIELD_READER FALSE
#define BIND_SDLVideoData_xkb_context_FIELD_WRITER FALSE

#define BIND_SDLWindowData_TYPE TRUE
#define BIND_SDLWindowData_INITIALIZE FALSE
#define BIND_SDLWindowData_colormap_FIELD_READER FALSE
#define BIND_SDLWindowData_colormap_FIELD_WRITER FALSE
#define BIND_SDLWindowData_created_FIELD_READER FALSE
#define BIND_SDLWindowData_created_FIELD_WRITER FALSE
#define BIND_SDLWindowData_created_FIELD_READER FALSE
#define BIND_SDLWindowData_created_FIELD_WRITER FALSE
#define BIND_SDLWindowData_egl_context_FIELD_READER FALSE
#define BIND_SDLWindowData_egl_context_FIELD_WRITER FALSE
#define BIND_SDLWindowData_egl_surface_FIELD_READER FALSE
#define BIND_SDLWindowData_egl_surface_FIELD_WRITER FALSE
#define BIND_SDLWindowData_egl_surface_FIELD_READER FALSE
#define BIND_SDLWindowData_egl_surface_FIELD_WRITER FALSE
#define BIND_SDLWindowData_egl_window_FIELD_READER FALSE
#define BIND_SDLWindowData_egl_window_FIELD_WRITER FALSE
#define BIND_SDLWindowData_expected_resize_FIELD_READER FALSE
#define BIND_SDLWindowData_expected_resize_FIELD_WRITER FALSE
#define BIND_SDLWindowData_fswindow_FIELD_READER FALSE
#define BIND_SDLWindowData_fswindow_FIELD_WRITER FALSE
#define BIND_SDLWindowData_gc_FIELD_READER FALSE
#define BIND_SDLWindowData_gc_FIELD_WRITER FALSE
#define BIND_SDLWindowData_hbm_FIELD_READER FALSE
#define BIND_SDLWindowData_hbm_FIELD_WRITER FALSE
#define BIND_SDLWindowData_hdc_FIELD_READER FALSE
#define BIND_SDLWindowData_hdc_FIELD_WRITER FALSE
#define BIND_SDLWindowData_hwnd_FIELD_READER FALSE
#define BIND_SDLWindowData_hwnd_FIELD_WRITER FALSE
#define BIND_SDLWindowData_ic_FIELD_READER FALSE
#define BIND_SDLWindowData_ic_FIELD_WRITER FALSE
#define BIND_SDLWindowData_in_modal_loop_FIELD_READER FALSE
#define BIND_SDLWindowData_in_modal_loop_FIELD_WRITER FALSE
#define BIND_SDLWindowData_in_title_click_FIELD_READER FALSE
#define BIND_SDLWindowData_in_title_click_FIELD_WRITER FALSE
#define BIND_SDLWindowData_keyboard_device_FIELD_READER FALSE
#define BIND_SDLWindowData_keyboard_device_FIELD_WRITER FALSE
#define BIND_SDLWindowData_last_xconfigure_FIELD_READER FALSE
#define BIND_SDLWindowData_last_xconfigure_FIELD_WRITER FALSE
#define BIND_SDLWindowData_mdc_FIELD_READER FALSE
#define BIND_SDLWindowData_mdc_FIELD_WRITER FALSE
#define BIND_SDLWindowData_mouse_button_flags_FIELD_READER FALSE
#define BIND_SDLWindowData_mouse_button_flags_FIELD_WRITER FALSE
#define BIND_SDLWindowData_native_window_FIELD_READER FALSE
#define BIND_SDLWindowData_native_window_FIELD_WRITER FALSE
#define BIND_SDLWindowData_pending_focus_FIELD_READER FALSE
#define BIND_SDLWindowData_pending_focus_FIELD_WRITER FALSE
#define BIND_SDLWindowData_pending_focus_time_FIELD_READER FALSE
#define BIND_SDLWindowData_pending_focus_time_FIELD_WRITER FALSE
#define BIND_SDLWindowData_sdlwindow_FIELD_READER FALSE
#define BIND_SDLWindowData_sdlwindow_FIELD_WRITER FALSE
#define BIND_SDLWindowData_shell_surface_FIELD_READER FALSE
#define BIND_SDLWindowData_shell_surface_FIELD_WRITER FALSE
#define BIND_SDLWindowData_shminfo_FIELD_READER FALSE
#define BIND_SDLWindowData_shminfo_FIELD_WRITER FALSE
#define BIND_SDLWindowData_surface_FIELD_READER FALSE
#define BIND_SDLWindowData_surface_FIELD_WRITER FALSE
#define BIND_SDLWindowData_use_mitshm_FIELD_READER FALSE
#define BIND_SDLWindowData_use_mitshm_FIELD_WRITER FALSE
#define BIND_SDLWindowData_videodata_FIELD_READER FALSE
#define BIND_SDLWindowData_videodata_FIELD_WRITER FALSE
#define BIND_SDLWindowData_videodata_FIELD_READER FALSE
#define BIND_SDLWindowData_videodata_FIELD_WRITER FALSE
#define BIND_SDLWindowData_visual_FIELD_READER FALSE
#define BIND_SDLWindowData_visual_FIELD_WRITER FALSE
#define BIND_SDLWindowData_waylandData_FIELD_READER FALSE
#define BIND_SDLWindowData_waylandData_FIELD_WRITER FALSE
#define BIND_SDLWindowData_window_FIELD_READER FALSE
#define BIND_SDLWindowData_window_FIELD_WRITER FALSE
#define BIND_SDLWindowData_window_FIELD_READER FALSE
#define BIND_SDLWindowData_window_FIELD_WRITER FALSE
#define BIND_SDLWindowData_wndproc_FIELD_READER FALSE
#define BIND_SDLWindowData_wndproc_FIELD_WRITER FALSE
#define BIND_SDLWindowData_xdnd_req_FIELD_READER FALSE
#define BIND_SDLWindowData_xdnd_req_FIELD_WRITER FALSE
#define BIND_SDLWindowData_xdnd_source_FIELD_READER FALSE
#define BIND_SDLWindowData_xdnd_source_FIELD_WRITER FALSE
#define BIND_SDLWindowData_ximage_FIELD_READER FALSE
#define BIND_SDLWindowData_ximage_FIELD_WRITER FALSE
#define BIND_SDLWindowData_xwindow_FIELD_READER FALSE
#define BIND_SDLWindowData_xwindow_FIELD_WRITER FALSE

#define BIND_SDLTestCommonState_TYPE TRUE
#define BIND_SDLTestCommonState_INITIALIZE FALSE
#define BIND_SDLTestCommonState_argv_FIELD_READER FALSE
#define BIND_SDLTestCommonState_argv_FIELD_WRITER FALSE
#define BIND_SDLTestCommonState_audiodriver_FIELD_READER FALSE
#define BIND_SDLTestCommonState_audiodriver_FIELD_WRITER FALSE
#define BIND_SDLTestCommonState_audiospec_FIELD_READER FALSE
#define BIND_SDLTestCommonState_audiospec_FIELD_WRITER FALSE
#define BIND_SDLTestCommonState_depth_FIELD_READER FALSE
#define BIND_SDLTestCommonState_depth_FIELD_WRITER FALSE
#define BIND_SDLTestCommonState_display_FIELD_READER FALSE
#define BIND_SDLTestCommonState_display_FIELD_WRITER FALSE
#define BIND_SDLTestCommonState_flags_FIELD_READER FALSE
#define BIND_SDLTestCommonState_flags_FIELD_WRITER FALSE
#define BIND_SDLTestCommonState_gl_accelerated_FIELD_READER FALSE
#define BIND_SDLTestCommonState_gl_accelerated_FIELD_WRITER FALSE
#define BIND_SDLTestCommonState_gl_accum_alpha_size_FIELD_READER FALSE
#define BIND_SDLTestCommonState_gl_accum_alpha_size_FIELD_WRITER FALSE
#define BIND_SDLTestCommonState_gl_accum_blue_size_FIELD_READER FALSE
#define BIND_SDLTestCommonState_gl_accum_blue_size_FIELD_WRITER FALSE
#define BIND_SDLTestCommonState_gl_accum_green_size_FIELD_READER FALSE
#define BIND_SDLTestCommonState_gl_accum_green_size_FIELD_WRITER FALSE
#define BIND_SDLTestCommonState_gl_accum_red_size_FIELD_READER FALSE
#define BIND_SDLTestCommonState_gl_accum_red_size_FIELD_WRITER FALSE
#define BIND_SDLTestCommonState_gl_alpha_size_FIELD_READER FALSE
#define BIND_SDLTestCommonState_gl_alpha_size_FIELD_WRITER FALSE
#define BIND_SDLTestCommonState_gl_blue_size_FIELD_READER FALSE
#define BIND_SDLTestCommonState_gl_blue_size_FIELD_WRITER FALSE
#define BIND_SDLTestCommonState_gl_buffer_size_FIELD_READER FALSE
#define BIND_SDLTestCommonState_gl_buffer_size_FIELD_WRITER FALSE
#define BIND_SDLTestCommonState_gl_debug_FIELD_READER FALSE
#define BIND_SDLTestCommonState_gl_debug_FIELD_WRITER FALSE
#define BIND_SDLTestCommonState_gl_depth_size_FIELD_READER FALSE
#define BIND_SDLTestCommonState_gl_depth_size_FIELD_WRITER FALSE
#define BIND_SDLTestCommonState_gl_double_buffer_FIELD_READER FALSE
#define BIND_SDLTestCommonState_gl_double_buffer_FIELD_WRITER FALSE
#define BIND_SDLTestCommonState_gl_green_size_FIELD_READER FALSE
#define BIND_SDLTestCommonState_gl_green_size_FIELD_WRITER FALSE
#define BIND_SDLTestCommonState_gl_major_version_FIELD_READER FALSE
#define BIND_SDLTestCommonState_gl_major_version_FIELD_WRITER FALSE
#define BIND_SDLTestCommonState_gl_minor_version_FIELD_READER FALSE
#define BIND_SDLTestCommonState_gl_minor_version_FIELD_WRITER FALSE
#define BIND_SDLTestCommonState_gl_multisamplebuffers_FIELD_READER FALSE
#define BIND_SDLTestCommonState_gl_multisamplebuffers_FIELD_WRITER FALSE
#define BIND_SDLTestCommonState_gl_multisamplesamples_FIELD_READER FALSE
#define BIND_SDLTestCommonState_gl_multisamplesamples_FIELD_WRITER FALSE
#define BIND_SDLTestCommonState_gl_profile_mask_FIELD_READER FALSE
#define BIND_SDLTestCommonState_gl_profile_mask_FIELD_WRITER FALSE
#define BIND_SDLTestCommonState_gl_red_size_FIELD_READER FALSE
#define BIND_SDLTestCommonState_gl_red_size_FIELD_WRITER FALSE
#define BIND_SDLTestCommonState_gl_retained_backing_FIELD_READER FALSE
#define BIND_SDLTestCommonState_gl_retained_backing_FIELD_WRITER FALSE
#define BIND_SDLTestCommonState_gl_stencil_size_FIELD_READER FALSE
#define BIND_SDLTestCommonState_gl_stencil_size_FIELD_WRITER FALSE
#define BIND_SDLTestCommonState_gl_stereo_FIELD_READER FALSE
#define BIND_SDLTestCommonState_gl_stereo_FIELD_WRITER FALSE
#define BIND_SDLTestCommonState_logical_h_FIELD_READER FALSE
#define BIND_SDLTestCommonState_logical_h_FIELD_WRITER FALSE
#define BIND_SDLTestCommonState_logical_w_FIELD_READER FALSE
#define BIND_SDLTestCommonState_logical_w_FIELD_WRITER FALSE
#define BIND_SDLTestCommonState_num_windows_FIELD_READER FALSE
#define BIND_SDLTestCommonState_num_windows_FIELD_WRITER FALSE
#define BIND_SDLTestCommonState_refresh_rate_FIELD_READER FALSE
#define BIND_SDLTestCommonState_refresh_rate_FIELD_WRITER FALSE
#define BIND_SDLTestCommonState_render_flags_FIELD_READER FALSE
#define BIND_SDLTestCommonState_render_flags_FIELD_WRITER FALSE
#define BIND_SDLTestCommonState_renderdriver_FIELD_READER FALSE
#define BIND_SDLTestCommonState_renderdriver_FIELD_WRITER FALSE
#define BIND_SDLTestCommonState_renderers_FIELD_READER FALSE
#define BIND_SDLTestCommonState_renderers_FIELD_WRITER FALSE
#define BIND_SDLTestCommonState_scale_FIELD_READER FALSE
#define BIND_SDLTestCommonState_scale_FIELD_WRITER FALSE
#define BIND_SDLTestCommonState_skip_renderer_FIELD_READER FALSE
#define BIND_SDLTestCommonState_skip_renderer_FIELD_WRITER FALSE
#define BIND_SDLTestCommonState_targets_FIELD_READER FALSE
#define BIND_SDLTestCommonState_targets_FIELD_WRITER FALSE
#define BIND_SDLTestCommonState_verbose_FIELD_READER FALSE
#define BIND_SDLTestCommonState_verbose_FIELD_WRITER FALSE
#define BIND_SDLTestCommonState_videodriver_FIELD_READER FALSE
#define BIND_SDLTestCommonState_videodriver_FIELD_WRITER FALSE
#define BIND_SDLTestCommonState_window_flags_FIELD_READER FALSE
#define BIND_SDLTestCommonState_window_flags_FIELD_WRITER FALSE
#define BIND_SDLTestCommonState_window_h_FIELD_READER FALSE
#define BIND_SDLTestCommonState_window_h_FIELD_WRITER FALSE
#define BIND_SDLTestCommonState_window_icon_FIELD_READER FALSE
#define BIND_SDLTestCommonState_window_icon_FIELD_WRITER FALSE
#define BIND_SDLTestCommonState_window_maxH_FIELD_READER FALSE
#define BIND_SDLTestCommonState_window_maxH_FIELD_WRITER FALSE
#define BIND_SDLTestCommonState_window_maxW_FIELD_READER FALSE
#define BIND_SDLTestCommonState_window_maxW_FIELD_WRITER FALSE
#define BIND_SDLTestCommonState_window_minH_FIELD_READER FALSE
#define BIND_SDLTestCommonState_window_minH_FIELD_WRITER FALSE
#define BIND_SDLTestCommonState_window_minW_FIELD_READER FALSE
#define BIND_SDLTestCommonState_window_minW_FIELD_WRITER FALSE
#define BIND_SDLTestCommonState_window_title_FIELD_READER FALSE
#define BIND_SDLTestCommonState_window_title_FIELD_WRITER FALSE
#define BIND_SDLTestCommonState_window_w_FIELD_READER FALSE
#define BIND_SDLTestCommonState_window_w_FIELD_WRITER FALSE
#define BIND_SDLTestCommonState_window_x_FIELD_READER FALSE
#define BIND_SDLTestCommonState_window_x_FIELD_WRITER FALSE
#define BIND_SDLTestCommonState_window_y_FIELD_READER FALSE
#define BIND_SDLTestCommonState_window_y_FIELD_WRITER FALSE
#define BIND_SDLTestCommonState_windows_FIELD_READER FALSE
#define BIND_SDLTestCommonState_windows_FIELD_WRITER FALSE

#define BIND_SDLTestCrc32Context_TYPE TRUE
#define BIND_SDLTestCrc32Context_INITIALIZE FALSE
#define BIND_SDLTestCrc32Context_crc32_table_FIELD_READER FALSE
#define BIND_SDLTestCrc32Context_crc32_table_FIELD_WRITER FALSE

#define BIND_SDLTestMd5Context_TYPE TRUE
#define BIND_SDLTestMd5Context_INITIALIZE FALSE
#define BIND_SDLTestMd5Context_buf_FIELD_READER FALSE
#define BIND_SDLTestMd5Context_buf_FIELD_WRITER FALSE
#define BIND_SDLTestMd5Context_digest_FIELD_READER FALSE
#define BIND_SDLTestMd5Context_digest_FIELD_WRITER FALSE
#define BIND_SDLTestMd5Context_i_FIELD_READER FALSE
#define BIND_SDLTestMd5Context_i_FIELD_WRITER FALSE
#define BIND_SDLTestMd5Context_in_FIELD_READER FALSE
#define BIND_SDLTestMd5Context_in_FIELD_WRITER FALSE

#define BIND_SDLTestRandomContext_TYPE TRUE
#define BIND_SDLTestRandomContext_INITIALIZE FALSE
#define BIND_SDLTestRandomContext_a_FIELD_READER FALSE
#define BIND_SDLTestRandomContext_a_FIELD_WRITER FALSE
#define BIND_SDLTestRandomContext_ah_FIELD_READER FALSE
#define BIND_SDLTestRandomContext_ah_FIELD_WRITER FALSE
#define BIND_SDLTestRandomContext_al_FIELD_READER FALSE
#define BIND_SDLTestRandomContext_al_FIELD_WRITER FALSE
#define BIND_SDLTestRandomContext_c_FIELD_READER FALSE
#define BIND_SDLTestRandomContext_c_FIELD_WRITER FALSE
#define BIND_SDLTestRandomContext_x_FIELD_READER FALSE
#define BIND_SDLTestRandomContext_x_FIELD_WRITER FALSE

#define BIND_ClContext_TYPE TRUE
#define BIND_ClContext_INITIALIZE FALSE

#define BIND_ClEvent_TYPE TRUE
#define BIND_ClEvent_INITIALIZE FALSE

#define BIND_DFBCursorData_TYPE TRUE
#define BIND_DFBCursorData_INITIALIZE FALSE
#define BIND_DFBCursorData_hotx_FIELD_READER FALSE
#define BIND_DFBCursorData_hotx_FIELD_WRITER FALSE
#define BIND_DFBCursorData_hoty_FIELD_READER FALSE
#define BIND_DFBCursorData_hoty_FIELD_WRITER FALSE
#define BIND_DFBCursorData_surf_FIELD_READER FALSE
#define BIND_DFBCursorData_surf_FIELD_WRITER FALSE

#define BIND_DFBDeviceData_TYPE TRUE
#define BIND_DFBDeviceData_INITIALIZE FALSE
#define BIND_DFBDeviceData_dfb_FIELD_READER FALSE
#define BIND_DFBDeviceData_dfb_FIELD_WRITER FALSE
#define BIND_DFBDeviceData_events_FIELD_READER FALSE
#define BIND_DFBDeviceData_events_FIELD_WRITER FALSE
#define BIND_DFBDeviceData_firstwin_FIELD_READER FALSE
#define BIND_DFBDeviceData_firstwin_FIELD_WRITER FALSE
#define BIND_DFBDeviceData_grabbed_window_FIELD_READER FALSE
#define BIND_DFBDeviceData_grabbed_window_FIELD_WRITER FALSE
#define BIND_DFBDeviceData_has_own_wm_FIELD_READER FALSE
#define BIND_DFBDeviceData_has_own_wm_FIELD_WRITER FALSE
#define BIND_DFBDeviceData_initialized_FIELD_READER FALSE
#define BIND_DFBDeviceData_initialized_FIELD_WRITER FALSE
#define BIND_DFBDeviceData_keyboard_FIELD_READER FALSE
#define BIND_DFBDeviceData_keyboard_FIELD_WRITER FALSE
#define BIND_DFBDeviceData_mouse_id_FIELD_READER FALSE
#define BIND_DFBDeviceData_mouse_id_FIELD_WRITER FALSE
#define BIND_DFBDeviceData_num_keyboard_FIELD_READER FALSE
#define BIND_DFBDeviceData_num_keyboard_FIELD_WRITER FALSE
#define BIND_DFBDeviceData_num_mice_FIELD_READER FALSE
#define BIND_DFBDeviceData_num_mice_FIELD_WRITER FALSE
#define BIND_DFBDeviceData_use_linux_input_FIELD_READER FALSE
#define BIND_DFBDeviceData_use_linux_input_FIELD_WRITER FALSE
#define BIND_DFBDeviceData_use_yuv_direct_FIELD_READER FALSE
#define BIND_DFBDeviceData_use_yuv_direct_FIELD_WRITER FALSE
#define BIND_DFBDeviceData_use_yuv_underlays_FIELD_READER FALSE
#define BIND_DFBDeviceData_use_yuv_underlays_FIELD_WRITER FALSE

#define BIND_DFBDisplayData_TYPE TRUE
#define BIND_DFBDisplayData_INITIALIZE FALSE
#define BIND_DFBDisplayData_ch_FIELD_READER FALSE
#define BIND_DFBDisplayData_ch_FIELD_WRITER FALSE
#define BIND_DFBDisplayData_cw_FIELD_READER FALSE
#define BIND_DFBDisplayData_cw_FIELD_WRITER FALSE
#define BIND_DFBDisplayData_layer_FIELD_READER FALSE
#define BIND_DFBDisplayData_layer_FIELD_WRITER FALSE
#define BIND_DFBDisplayData_pixelformat_FIELD_READER FALSE
#define BIND_DFBDisplayData_pixelformat_FIELD_WRITER FALSE
#define BIND_DFBDisplayData_vidID_FIELD_READER FALSE
#define BIND_DFBDisplayData_vidID_FIELD_WRITER FALSE
#define BIND_DFBDisplayData_vidIDinuse_FIELD_READER FALSE
#define BIND_DFBDisplayData_vidIDinuse_FIELD_WRITER FALSE
#define BIND_DFBDisplayData_vidlayer_FIELD_READER FALSE
#define BIND_DFBDisplayData_vidlayer_FIELD_WRITER FALSE

#define BIND_DFBKeyboardData_TYPE TRUE
#define BIND_DFBKeyboardData_INITIALIZE FALSE
#define BIND_DFBKeyboardData_id_FIELD_READER FALSE
#define BIND_DFBKeyboardData_id_FIELD_WRITER FALSE
#define BIND_DFBKeyboardData_is_generic_FIELD_READER FALSE
#define BIND_DFBKeyboardData_is_generic_FIELD_WRITER FALSE
#define BIND_DFBKeyboardData_map_FIELD_READER FALSE
#define BIND_DFBKeyboardData_map_FIELD_WRITER FALSE
#define BIND_DFBKeyboardData_map_adjust_FIELD_READER FALSE
#define BIND_DFBKeyboardData_map_adjust_FIELD_WRITER FALSE
#define BIND_DFBKeyboardData_map_size_FIELD_READER FALSE
#define BIND_DFBKeyboardData_map_size_FIELD_WRITER FALSE

#define BIND_DFBTheme_TYPE TRUE
#define BIND_DFBTheme_INITIALIZE FALSE
#define BIND_DFBTheme_bottom_size_FIELD_READER FALSE
#define BIND_DFBTheme_bottom_size_FIELD_WRITER FALSE
#define BIND_DFBTheme_caption_color_FIELD_READER FALSE
#define BIND_DFBTheme_caption_color_FIELD_WRITER FALSE
#define BIND_DFBTheme_caption_size_FIELD_READER FALSE
#define BIND_DFBTheme_caption_size_FIELD_WRITER FALSE
#define BIND_DFBTheme_close_color_FIELD_READER FALSE
#define BIND_DFBTheme_close_color_FIELD_WRITER FALSE
#define BIND_DFBTheme_font_FIELD_READER FALSE
#define BIND_DFBTheme_font_FIELD_WRITER FALSE
#define BIND_DFBTheme_font_color_FIELD_READER FALSE
#define BIND_DFBTheme_font_color_FIELD_WRITER FALSE
#define BIND_DFBTheme_font_size_FIELD_READER FALSE
#define BIND_DFBTheme_font_size_FIELD_WRITER FALSE
#define BIND_DFBTheme_frame_color_FIELD_READER FALSE
#define BIND_DFBTheme_frame_color_FIELD_WRITER FALSE
#define BIND_DFBTheme_left_size_FIELD_READER FALSE
#define BIND_DFBTheme_left_size_FIELD_WRITER FALSE
#define BIND_DFBTheme_max_color_FIELD_READER FALSE
#define BIND_DFBTheme_max_color_FIELD_WRITER FALSE
#define BIND_DFBTheme_right_size_FIELD_READER FALSE
#define BIND_DFBTheme_right_size_FIELD_WRITER FALSE
#define BIND_DFBTheme_top_size_FIELD_READER FALSE
#define BIND_DFBTheme_top_size_FIELD_WRITER FALSE

#define BIND_DFBWindowData_TYPE TRUE
#define BIND_DFBWindowData_INITIALIZE FALSE
#define BIND_DFBWindowData_client_FIELD_READER FALSE
#define BIND_DFBWindowData_client_FIELD_WRITER FALSE
#define BIND_DFBWindowData_dfbwin_FIELD_READER FALSE
#define BIND_DFBWindowData_dfbwin_FIELD_WRITER FALSE
#define BIND_DFBWindowData_eventbuffer_FIELD_READER FALSE
#define BIND_DFBWindowData_eventbuffer_FIELD_WRITER FALSE
#define BIND_DFBWindowData_font_FIELD_READER FALSE
#define BIND_DFBWindowData_font_FIELD_WRITER FALSE
#define BIND_DFBWindowData_icon_FIELD_READER FALSE
#define BIND_DFBWindowData_icon_FIELD_WRITER FALSE
#define BIND_DFBWindowData_is_managed_FIELD_READER FALSE
#define BIND_DFBWindowData_is_managed_FIELD_WRITER FALSE
#define BIND_DFBWindowData_next_FIELD_READER FALSE
#define BIND_DFBWindowData_next_FIELD_WRITER FALSE
#define BIND_DFBWindowData_opacity_FIELD_READER FALSE
#define BIND_DFBWindowData_opacity_FIELD_WRITER FALSE
#define BIND_DFBWindowData_restore_FIELD_READER FALSE
#define BIND_DFBWindowData_restore_FIELD_WRITER FALSE
#define BIND_DFBWindowData_size_FIELD_READER FALSE
#define BIND_DFBWindowData_size_FIELD_WRITER FALSE
#define BIND_DFBWindowData_surface_FIELD_READER FALSE
#define BIND_DFBWindowData_surface_FIELD_WRITER FALSE
#define BIND_DFBWindowData_theme_FIELD_READER FALSE
#define BIND_DFBWindowData_theme_FIELD_WRITER FALSE
#define BIND_DFBWindowData_window_surface_FIELD_READER FALSE
#define BIND_DFBWindowData_window_surface_FIELD_WRITER FALSE
#define BIND_DFBWindowData_wm_grab_FIELD_READER FALSE
#define BIND_DFBWindowData_wm_grab_FIELD_WRITER FALSE
#define BIND_DFBWindowData_wm_lastx_FIELD_READER FALSE
#define BIND_DFBWindowData_wm_lastx_FIELD_WRITER FALSE
#define BIND_DFBWindowData_wm_lasty_FIELD_READER FALSE
#define BIND_DFBWindowData_wm_lasty_FIELD_WRITER FALSE
#define BIND_DFBWindowData_wm_needs_redraw_FIELD_READER FALSE
#define BIND_DFBWindowData_wm_needs_redraw_FIELD_WRITER FALSE

#define BIND_MainprogInfo_TYPE TRUE
#define BIND_MainprogInfo_INITIALIZE FALSE
#define BIND_MainprogInfo_author_FIELD_READER FALSE
#define BIND_MainprogInfo_author_FIELD_WRITER FALSE
#define BIND_MainprogInfo_bg_blue_FIELD_READER FALSE
#define BIND_MainprogInfo_bg_blue_FIELD_WRITER FALSE
#define BIND_MainprogInfo_bg_blue_FIELD_READER FALSE
#define BIND_MainprogInfo_bg_blue_FIELD_WRITER FALSE
#define BIND_MainprogInfo_bg_green_FIELD_READER FALSE
#define BIND_MainprogInfo_bg_green_FIELD_WRITER FALSE
#define BIND_MainprogInfo_bg_green_FIELD_READER FALSE
#define BIND_MainprogInfo_bg_green_FIELD_WRITER FALSE
#define BIND_MainprogInfo_bg_red_FIELD_READER FALSE
#define BIND_MainprogInfo_bg_red_FIELD_WRITER FALSE
#define BIND_MainprogInfo_bg_red_FIELD_READER FALSE
#define BIND_MainprogInfo_bg_red_FIELD_WRITER FALSE
#define BIND_MainprogInfo_channels_FIELD_READER FALSE
#define BIND_MainprogInfo_channels_FIELD_WRITER FALSE
#define BIND_MainprogInfo_copyright_FIELD_READER FALSE
#define BIND_MainprogInfo_copyright_FIELD_WRITER FALSE
#define BIND_MainprogInfo_desc_FIELD_READER FALSE
#define BIND_MainprogInfo_desc_FIELD_WRITER FALSE
#define BIND_MainprogInfo_display_exponent_FIELD_READER FALSE
#define BIND_MainprogInfo_display_exponent_FIELD_WRITER FALSE
#define BIND_MainprogInfo_email_FIELD_READER FALSE
#define BIND_MainprogInfo_email_FIELD_WRITER FALSE
#define BIND_MainprogInfo_filter_FIELD_READER FALSE
#define BIND_MainprogInfo_filter_FIELD_WRITER FALSE
#define BIND_MainprogInfo_gamma_FIELD_READER FALSE
#define BIND_MainprogInfo_gamma_FIELD_WRITER FALSE
#define BIND_MainprogInfo_have_bg_FIELD_READER FALSE
#define BIND_MainprogInfo_have_bg_FIELD_WRITER FALSE
#define BIND_MainprogInfo_have_text_FIELD_READER FALSE
#define BIND_MainprogInfo_have_text_FIELD_WRITER FALSE
#define BIND_MainprogInfo_have_time_FIELD_READER FALSE
#define BIND_MainprogInfo_have_time_FIELD_WRITER FALSE
#define BIND_MainprogInfo_height_FIELD_READER FALSE
#define BIND_MainprogInfo_height_FIELD_WRITER FALSE
#define BIND_MainprogInfo_height_FIELD_READER FALSE
#define BIND_MainprogInfo_height_FIELD_WRITER FALSE
#define BIND_MainprogInfo_image_data_FIELD_READER FALSE
#define BIND_MainprogInfo_image_data_FIELD_WRITER FALSE
#define BIND_MainprogInfo_image_data_FIELD_READER FALSE
#define BIND_MainprogInfo_image_data_FIELD_WRITER FALSE
#define BIND_MainprogInfo_infile_FIELD_READER FALSE
#define BIND_MainprogInfo_infile_FIELD_WRITER FALSE
#define BIND_MainprogInfo_info_ptr_FIELD_READER FALSE
#define BIND_MainprogInfo_info_ptr_FIELD_WRITER FALSE
#define BIND_MainprogInfo_info_ptr_FIELD_READER FALSE
#define BIND_MainprogInfo_info_ptr_FIELD_WRITER FALSE
#define BIND_MainprogInfo_interlaced_FIELD_READER FALSE
#define BIND_MainprogInfo_interlaced_FIELD_WRITER FALSE
#define BIND_MainprogInfo_jmpbuf_FIELD_READER FALSE
#define BIND_MainprogInfo_jmpbuf_FIELD_WRITER FALSE
#define BIND_MainprogInfo_jmpbuf_FIELD_READER FALSE
#define BIND_MainprogInfo_jmpbuf_FIELD_WRITER FALSE
#define BIND_MainprogInfo_mainprog_display_row_FIELD_READER FALSE
#define BIND_MainprogInfo_mainprog_display_row_FIELD_WRITER FALSE
#define BIND_MainprogInfo_mainprog_finish_display_FIELD_READER FALSE
#define BIND_MainprogInfo_mainprog_finish_display_FIELD_WRITER FALSE
#define BIND_MainprogInfo_mainprog_init_FIELD_READER FALSE
#define BIND_MainprogInfo_mainprog_init_FIELD_WRITER FALSE
#define BIND_MainprogInfo_modtime_FIELD_READER FALSE
#define BIND_MainprogInfo_modtime_FIELD_WRITER FALSE
#define BIND_MainprogInfo_need_bgcolor_FIELD_READER FALSE
#define BIND_MainprogInfo_need_bgcolor_FIELD_WRITER FALSE
#define BIND_MainprogInfo_outfile_FIELD_READER FALSE
#define BIND_MainprogInfo_outfile_FIELD_WRITER FALSE
#define BIND_MainprogInfo_pass_FIELD_READER FALSE
#define BIND_MainprogInfo_pass_FIELD_WRITER FALSE
#define BIND_MainprogInfo_passes_FIELD_READER FALSE
#define BIND_MainprogInfo_passes_FIELD_WRITER FALSE
#define BIND_MainprogInfo_png_ptr_FIELD_READER FALSE
#define BIND_MainprogInfo_png_ptr_FIELD_WRITER FALSE
#define BIND_MainprogInfo_png_ptr_FIELD_READER FALSE
#define BIND_MainprogInfo_png_ptr_FIELD_WRITER FALSE
#define BIND_MainprogInfo_pnmtype_FIELD_READER FALSE
#define BIND_MainprogInfo_pnmtype_FIELD_WRITER FALSE
#define BIND_MainprogInfo_row_pointers_FIELD_READER FALSE
#define BIND_MainprogInfo_row_pointers_FIELD_WRITER FALSE
#define BIND_MainprogInfo_row_pointers_FIELD_READER FALSE
#define BIND_MainprogInfo_row_pointers_FIELD_WRITER FALSE
#define BIND_MainprogInfo_rowbytes_FIELD_READER FALSE
#define BIND_MainprogInfo_rowbytes_FIELD_WRITER FALSE
#define BIND_MainprogInfo_sample_depth_FIELD_READER FALSE
#define BIND_MainprogInfo_sample_depth_FIELD_WRITER FALSE
#define BIND_MainprogInfo_state_FIELD_READER FALSE
#define BIND_MainprogInfo_state_FIELD_WRITER FALSE
#define BIND_MainprogInfo_title_FIELD_READER FALSE
#define BIND_MainprogInfo_title_FIELD_WRITER FALSE
#define BIND_MainprogInfo_url_FIELD_READER FALSE
#define BIND_MainprogInfo_url_FIELD_WRITER FALSE
#define BIND_MainprogInfo_width_FIELD_READER FALSE
#define BIND_MainprogInfo_width_FIELD_WRITER FALSE
#define BIND_MainprogInfo_width_FIELD_READER FALSE
#define BIND_MainprogInfo_width_FIELD_WRITER FALSE

#define BIND_NSWindow_TYPE TRUE
#define BIND_NSWindow_INITIALIZE FALSE

#define BIND_RPICursorData_TYPE TRUE
#define BIND_RPICursorData_INITIALIZE FALSE
#define BIND_RPICursorData_element_FIELD_READER FALSE
#define BIND_RPICursorData_element_FIELD_WRITER FALSE
#define BIND_RPICursorData_h_FIELD_READER FALSE
#define BIND_RPICursorData_h_FIELD_WRITER FALSE
#define BIND_RPICursorData_hot_x_FIELD_READER FALSE
#define BIND_RPICursorData_hot_x_FIELD_WRITER FALSE
#define BIND_RPICursorData_hot_y_FIELD_READER FALSE
#define BIND_RPICursorData_hot_y_FIELD_WRITER FALSE
#define BIND_RPICursorData_resource_FIELD_READER FALSE
#define BIND_RPICursorData_resource_FIELD_WRITER FALSE
#define BIND_RPICursorData_w_FIELD_READER FALSE
#define BIND_RPICursorData_w_FIELD_WRITER FALSE

#define BIND_SDLGameController_TYPE TRUE
#define BIND_SDLGameController_INITIALIZE FALSE

#define BIND_SDLHaptic_TYPE TRUE
#define BIND_SDLHaptic_INITIALIZE FALSE
#define BIND_SDLHaptic_effects_FIELD_READER FALSE
#define BIND_SDLHaptic_effects_FIELD_WRITER FALSE
#define BIND_SDLHaptic_hwdata_FIELD_READER FALSE
#define BIND_SDLHaptic_hwdata_FIELD_WRITER FALSE
#define BIND_SDLHaptic_index_FIELD_READER FALSE
#define BIND_SDLHaptic_index_FIELD_WRITER FALSE
#define BIND_SDLHaptic_naxes_FIELD_READER FALSE
#define BIND_SDLHaptic_naxes_FIELD_WRITER FALSE
#define BIND_SDLHaptic_neffects_FIELD_READER FALSE
#define BIND_SDLHaptic_neffects_FIELD_WRITER FALSE
#define BIND_SDLHaptic_next_FIELD_READER FALSE
#define BIND_SDLHaptic_next_FIELD_WRITER FALSE
#define BIND_SDLHaptic_nplaying_FIELD_READER FALSE
#define BIND_SDLHaptic_nplaying_FIELD_WRITER FALSE
#define BIND_SDLHaptic_ref_count_FIELD_READER FALSE
#define BIND_SDLHaptic_ref_count_FIELD_WRITER FALSE
#define BIND_SDLHaptic_rumble_effect_FIELD_READER FALSE
#define BIND_SDLHaptic_rumble_effect_FIELD_WRITER FALSE
#define BIND_SDLHaptic_rumble_id_FIELD_READER FALSE
#define BIND_SDLHaptic_rumble_id_FIELD_WRITER FALSE
#define BIND_SDLHaptic_supported_FIELD_READER FALSE
#define BIND_SDLHaptic_supported_FIELD_WRITER FALSE

#define BIND_SDLIconvT_TYPE TRUE
#define BIND_SDLIconvT_INITIALIZE FALSE

#define BIND_SDLJoystick_TYPE TRUE
#define BIND_SDLJoystick_INITIALIZE FALSE
#define BIND_SDLJoystick_axes_FIELD_READER FALSE
#define BIND_SDLJoystick_axes_FIELD_WRITER FALSE
#define BIND_SDLJoystick_balls_FIELD_READER FALSE
#define BIND_SDLJoystick_balls_FIELD_WRITER FALSE
#define BIND_SDLJoystick_buttons_FIELD_READER FALSE
#define BIND_SDLJoystick_buttons_FIELD_WRITER FALSE
#define BIND_SDLJoystick_closed_FIELD_READER FALSE
#define BIND_SDLJoystick_closed_FIELD_WRITER FALSE
#define BIND_SDLJoystick_hats_FIELD_READER FALSE
#define BIND_SDLJoystick_hats_FIELD_WRITER FALSE
#define BIND_SDLJoystick_hwdata_FIELD_READER FALSE
#define BIND_SDLJoystick_hwdata_FIELD_WRITER FALSE
#define BIND_SDLJoystick_instance_id_FIELD_READER FALSE
#define BIND_SDLJoystick_instance_id_FIELD_WRITER FALSE
#define BIND_SDLJoystick_name_FIELD_READER FALSE
#define BIND_SDLJoystick_name_FIELD_WRITER FALSE
#define BIND_SDLJoystick_naxes_FIELD_READER FALSE
#define BIND_SDLJoystick_naxes_FIELD_WRITER FALSE
#define BIND_SDLJoystick_nballs_FIELD_READER FALSE
#define BIND_SDLJoystick_nballs_FIELD_WRITER FALSE
#define BIND_SDLJoystick_nbuttons_FIELD_READER FALSE
#define BIND_SDLJoystick_nbuttons_FIELD_WRITER FALSE
#define BIND_SDLJoystick_next_FIELD_READER FALSE
#define BIND_SDLJoystick_next_FIELD_WRITER FALSE
#define BIND_SDLJoystick_nhats_FIELD_READER FALSE
#define BIND_SDLJoystick_nhats_FIELD_WRITER FALSE
#define BIND_SDLJoystick_ref_count_FIELD_READER FALSE
#define BIND_SDLJoystick_ref_count_FIELD_WRITER FALSE
#define BIND_SDLJoystick_uncentered_FIELD_READER FALSE
#define BIND_SDLJoystick_uncentered_FIELD_WRITER FALSE

#define BIND_TIFFField_TYPE TRUE
#define BIND_TIFFField_INITIALIZE FALSE
#define BIND_TIFFField_field_bit_FIELD_READER FALSE
#define BIND_TIFFField_field_bit_FIELD_WRITER FALSE
#define BIND_TIFFField_field_name_FIELD_READER FALSE
#define BIND_TIFFField_field_name_FIELD_WRITER FALSE
#define BIND_TIFFField_field_oktochange_FIELD_READER FALSE
#define BIND_TIFFField_field_oktochange_FIELD_WRITER FALSE
#define BIND_TIFFField_field_passcount_FIELD_READER FALSE
#define BIND_TIFFField_field_passcount_FIELD_WRITER FALSE
#define BIND_TIFFField_field_readcount_FIELD_READER FALSE
#define BIND_TIFFField_field_readcount_FIELD_WRITER FALSE
#define BIND_TIFFField_field_subfields_FIELD_READER FALSE
#define BIND_TIFFField_field_subfields_FIELD_WRITER FALSE
#define BIND_TIFFField_field_tag_FIELD_READER FALSE
#define BIND_TIFFField_field_tag_FIELD_WRITER FALSE
#define BIND_TIFFField_field_type_FIELD_READER FALSE
#define BIND_TIFFField_field_type_FIELD_WRITER FALSE
#define BIND_TIFFField_field_writecount_FIELD_READER FALSE
#define BIND_TIFFField_field_writecount_FIELD_WRITER FALSE
#define BIND_TIFFField_get_field_type_FIELD_READER FALSE
#define BIND_TIFFField_get_field_type_FIELD_WRITER FALSE
#define BIND_TIFFField_reserved_FIELD_READER FALSE
#define BIND_TIFFField_reserved_FIELD_WRITER FALSE
#define BIND_TIFFField_set_field_type_FIELD_READER FALSE
#define BIND_TIFFField_set_field_type_FIELD_WRITER FALSE

#define BIND_TIFFFieldArray_TYPE TRUE
#define BIND_TIFFFieldArray_INITIALIZE FALSE
#define BIND_TIFFFieldArray_allocated_size_FIELD_READER FALSE
#define BIND_TIFFFieldArray_allocated_size_FIELD_WRITER FALSE
#define BIND_TIFFFieldArray_count_FIELD_READER FALSE
#define BIND_TIFFFieldArray_count_FIELD_WRITER FALSE
#define BIND_TIFFFieldArray_fields_FIELD_READER FALSE
#define BIND_TIFFFieldArray_fields_FIELD_WRITER FALSE
#define BIND_TIFFFieldArray_type_FIELD_READER FALSE
#define BIND_TIFFFieldArray_type_FIELD_WRITER FALSE

#define BIND_TIFFImageIter_TYPE TRUE
#define BIND_TIFFImageIter_INITIALIZE FALSE
#define BIND_TIFFImageIter_alpha_FIELD_READER FALSE
#define BIND_TIFFImageIter_alpha_FIELD_WRITER FALSE
#define BIND_TIFFImageIter_bitspersample_FIELD_READER FALSE
#define BIND_TIFFImageIter_bitspersample_FIELD_WRITER FALSE
#define BIND_TIFFImageIter_bluecmap_FIELD_READER FALSE
#define BIND_TIFFImageIter_bluecmap_FIELD_WRITER FALSE
#define BIND_TIFFImageIter_callback_FIELD_READER FALSE
#define BIND_TIFFImageIter_callback_FIELD_WRITER FALSE
#define BIND_TIFFImageIter_get_FIELD_READER FALSE
#define BIND_TIFFImageIter_get_FIELD_WRITER FALSE
#define BIND_TIFFImageIter_greencmap_FIELD_READER FALSE
#define BIND_TIFFImageIter_greencmap_FIELD_WRITER FALSE
#define BIND_TIFFImageIter_height_FIELD_READER FALSE
#define BIND_TIFFImageIter_height_FIELD_WRITER FALSE
#define BIND_TIFFImageIter_isContig_FIELD_READER FALSE
#define BIND_TIFFImageIter_isContig_FIELD_WRITER FALSE
#define BIND_TIFFImageIter_orientation_FIELD_READER FALSE
#define BIND_TIFFImageIter_orientation_FIELD_WRITER FALSE
#define BIND_TIFFImageIter_photometric_FIELD_READER FALSE
#define BIND_TIFFImageIter_photometric_FIELD_WRITER FALSE
#define BIND_TIFFImageIter_redcmap_FIELD_READER FALSE
#define BIND_TIFFImageIter_redcmap_FIELD_WRITER FALSE
#define BIND_TIFFImageIter_samplesperpixel_FIELD_READER FALSE
#define BIND_TIFFImageIter_samplesperpixel_FIELD_WRITER FALSE
#define BIND_TIFFImageIter_stoponerr_FIELD_READER FALSE
#define BIND_TIFFImageIter_stoponerr_FIELD_WRITER FALSE
#define BIND_TIFFImageIter_tif_FIELD_READER FALSE
#define BIND_TIFFImageIter_tif_FIELD_WRITER FALSE
#define BIND_TIFFImageIter_width_FIELD_READER FALSE
#define BIND_TIFFImageIter_width_FIELD_WRITER FALSE

#define BIND_TIFFRGBAImage_TYPE TRUE
#define BIND_TIFFRGBAImage_INITIALIZE FALSE
#define BIND_TIFFRGBAImage_BWmap_FIELD_READER FALSE
#define BIND_TIFFRGBAImage_BWmap_FIELD_WRITER FALSE
#define BIND_TIFFRGBAImage_BWmap_FIELD_READER FALSE
#define BIND_TIFFRGBAImage_BWmap_FIELD_WRITER FALSE
#define BIND_TIFFRGBAImage_Bitdepth16To8_FIELD_READER FALSE
#define BIND_TIFFRGBAImage_Bitdepth16To8_FIELD_WRITER FALSE
#define BIND_TIFFRGBAImage_Bitdepth16To8_FIELD_READER FALSE
#define BIND_TIFFRGBAImage_Bitdepth16To8_FIELD_WRITER FALSE
#define BIND_TIFFRGBAImage_Map_FIELD_READER FALSE
#define BIND_TIFFRGBAImage_Map_FIELD_WRITER FALSE
#define BIND_TIFFRGBAImage_Map_FIELD_READER FALSE
#define BIND_TIFFRGBAImage_Map_FIELD_WRITER FALSE
#define BIND_TIFFRGBAImage_PALmap_FIELD_READER FALSE
#define BIND_TIFFRGBAImage_PALmap_FIELD_WRITER FALSE
#define BIND_TIFFRGBAImage_PALmap_FIELD_READER FALSE
#define BIND_TIFFRGBAImage_PALmap_FIELD_WRITER FALSE
#define BIND_TIFFRGBAImage_UaToAa_FIELD_READER FALSE
#define BIND_TIFFRGBAImage_UaToAa_FIELD_WRITER FALSE
#define BIND_TIFFRGBAImage_UaToAa_FIELD_READER FALSE
#define BIND_TIFFRGBAImage_UaToAa_FIELD_WRITER FALSE
#define BIND_TIFFRGBAImage_alpha_FIELD_READER FALSE
#define BIND_TIFFRGBAImage_alpha_FIELD_WRITER FALSE
#define BIND_TIFFRGBAImage_alpha_FIELD_READER FALSE
#define BIND_TIFFRGBAImage_alpha_FIELD_WRITER FALSE
#define BIND_TIFFRGBAImage_bitspersample_FIELD_READER FALSE
#define BIND_TIFFRGBAImage_bitspersample_FIELD_WRITER FALSE
#define BIND_TIFFRGBAImage_bitspersample_FIELD_READER FALSE
#define BIND_TIFFRGBAImage_bitspersample_FIELD_WRITER FALSE
#define BIND_TIFFRGBAImage_bluecmap_FIELD_READER FALSE
#define BIND_TIFFRGBAImage_bluecmap_FIELD_WRITER FALSE
#define BIND_TIFFRGBAImage_bluecmap_FIELD_READER FALSE
#define BIND_TIFFRGBAImage_bluecmap_FIELD_WRITER FALSE
#define BIND_TIFFRGBAImage_cielab_FIELD_READER FALSE
#define BIND_TIFFRGBAImage_cielab_FIELD_WRITER FALSE
#define BIND_TIFFRGBAImage_cielab_FIELD_READER FALSE
#define BIND_TIFFRGBAImage_cielab_FIELD_WRITER FALSE
#define BIND_TIFFRGBAImage_col_offset_FIELD_READER FALSE
#define BIND_TIFFRGBAImage_col_offset_FIELD_WRITER FALSE
#define BIND_TIFFRGBAImage_col_offset_FIELD_READER FALSE
#define BIND_TIFFRGBAImage_col_offset_FIELD_WRITER FALSE
#define BIND_TIFFRGBAImage_get_FIELD_READER FALSE
#define BIND_TIFFRGBAImage_get_FIELD_WRITER FALSE
#define BIND_TIFFRGBAImage_get_FIELD_READER FALSE
#define BIND_TIFFRGBAImage_get_FIELD_WRITER FALSE
#define BIND_TIFFRGBAImage_greencmap_FIELD_READER FALSE
#define BIND_TIFFRGBAImage_greencmap_FIELD_WRITER FALSE
#define BIND_TIFFRGBAImage_greencmap_FIELD_READER FALSE
#define BIND_TIFFRGBAImage_greencmap_FIELD_WRITER FALSE
#define BIND_TIFFRGBAImage_height_FIELD_READER FALSE
#define BIND_TIFFRGBAImage_height_FIELD_WRITER FALSE
#define BIND_TIFFRGBAImage_height_FIELD_READER FALSE
#define BIND_TIFFRGBAImage_height_FIELD_WRITER FALSE
#define BIND_TIFFRGBAImage_isContig_FIELD_READER FALSE
#define BIND_TIFFRGBAImage_isContig_FIELD_WRITER FALSE
#define BIND_TIFFRGBAImage_isContig_FIELD_READER FALSE
#define BIND_TIFFRGBAImage_isContig_FIELD_WRITER FALSE
#define BIND_TIFFRGBAImage_orientation_FIELD_READER FALSE
#define BIND_TIFFRGBAImage_orientation_FIELD_WRITER FALSE
#define BIND_TIFFRGBAImage_orientation_FIELD_READER FALSE
#define BIND_TIFFRGBAImage_orientation_FIELD_WRITER FALSE
#define BIND_TIFFRGBAImage_photometric_FIELD_READER FALSE
#define BIND_TIFFRGBAImage_photometric_FIELD_WRITER FALSE
#define BIND_TIFFRGBAImage_photometric_FIELD_READER FALSE
#define BIND_TIFFRGBAImage_photometric_FIELD_WRITER FALSE
#define BIND_TIFFRGBAImage_put_FIELD_READER FALSE
#define BIND_TIFFRGBAImage_put_FIELD_WRITER FALSE
#define BIND_TIFFRGBAImage_put_FIELD_READER FALSE
#define BIND_TIFFRGBAImage_put_FIELD_WRITER FALSE
#define BIND_TIFFRGBAImage_redcmap_FIELD_READER FALSE
#define BIND_TIFFRGBAImage_redcmap_FIELD_WRITER FALSE
#define BIND_TIFFRGBAImage_redcmap_FIELD_READER FALSE
#define BIND_TIFFRGBAImage_redcmap_FIELD_WRITER FALSE
#define BIND_TIFFRGBAImage_req_orientation_FIELD_READER FALSE
#define BIND_TIFFRGBAImage_req_orientation_FIELD_WRITER FALSE
#define BIND_TIFFRGBAImage_req_orientation_FIELD_READER FALSE
#define BIND_TIFFRGBAImage_req_orientation_FIELD_WRITER FALSE
#define BIND_TIFFRGBAImage_row_offset_FIELD_READER FALSE
#define BIND_TIFFRGBAImage_row_offset_FIELD_WRITER FALSE
#define BIND_TIFFRGBAImage_row_offset_FIELD_READER FALSE
#define BIND_TIFFRGBAImage_row_offset_FIELD_WRITER FALSE
#define BIND_TIFFRGBAImage_samplesperpixel_FIELD_READER FALSE
#define BIND_TIFFRGBAImage_samplesperpixel_FIELD_WRITER FALSE
#define BIND_TIFFRGBAImage_samplesperpixel_FIELD_READER FALSE
#define BIND_TIFFRGBAImage_samplesperpixel_FIELD_WRITER FALSE
#define BIND_TIFFRGBAImage_stoponerr_FIELD_READER FALSE
#define BIND_TIFFRGBAImage_stoponerr_FIELD_WRITER FALSE
#define BIND_TIFFRGBAImage_stoponerr_FIELD_READER FALSE
#define BIND_TIFFRGBAImage_stoponerr_FIELD_WRITER FALSE
#define BIND_TIFFRGBAImage_tif_FIELD_READER FALSE
#define BIND_TIFFRGBAImage_tif_FIELD_WRITER FALSE
#define BIND_TIFFRGBAImage_tif_FIELD_READER FALSE
#define BIND_TIFFRGBAImage_tif_FIELD_WRITER FALSE
#define BIND_TIFFRGBAImage_width_FIELD_READER FALSE
#define BIND_TIFFRGBAImage_width_FIELD_WRITER FALSE
#define BIND_TIFFRGBAImage_width_FIELD_READER FALSE
#define BIND_TIFFRGBAImage_width_FIELD_WRITER FALSE
#define BIND_TIFFRGBAImage_ycbcr_FIELD_READER FALSE
#define BIND_TIFFRGBAImage_ycbcr_FIELD_WRITER FALSE
#define BIND_TIFFRGBAImage_ycbcr_FIELD_READER FALSE
#define BIND_TIFFRGBAImage_ycbcr_FIELD_WRITER FALSE

#define BIND_TOUCHINPUT_TYPE TRUE
#define BIND_TOUCHINPUT_INITIALIZE FALSE
#define BIND_TOUCHINPUT_cxContact_FIELD_READER FALSE
#define BIND_TOUCHINPUT_cxContact_FIELD_WRITER FALSE
#define BIND_TOUCHINPUT_cyContact_FIELD_READER FALSE
#define BIND_TOUCHINPUT_cyContact_FIELD_WRITER FALSE
#define BIND_TOUCHINPUT_dwExtraInfo_FIELD_READER FALSE
#define BIND_TOUCHINPUT_dwExtraInfo_FIELD_WRITER FALSE
#define BIND_TOUCHINPUT_dwFlags_FIELD_READER FALSE
#define BIND_TOUCHINPUT_dwFlags_FIELD_WRITER FALSE
#define BIND_TOUCHINPUT_dwID_FIELD_READER FALSE
#define BIND_TOUCHINPUT_dwID_FIELD_WRITER FALSE
#define BIND_TOUCHINPUT_dwMask_FIELD_READER FALSE
#define BIND_TOUCHINPUT_dwMask_FIELD_WRITER FALSE
#define BIND_TOUCHINPUT_dwTime_FIELD_READER FALSE
#define BIND_TOUCHINPUT_dwTime_FIELD_WRITER FALSE
#define BIND_TOUCHINPUT_hSource_FIELD_READER FALSE
#define BIND_TOUCHINPUT_hSource_FIELD_WRITER FALSE
#define BIND_TOUCHINPUT_x_FIELD_READER FALSE
#define BIND_TOUCHINPUT_x_FIELD_WRITER FALSE
#define BIND_TOUCHINPUT_y_FIELD_READER FALSE
#define BIND_TOUCHINPUT_y_FIELD_WRITER FALSE

#define BIND_AudioBootStrap_TYPE TRUE
#define BIND_AudioBootStrap_INITIALIZE FALSE
#define BIND_AudioBootStrap_demand_only_FIELD_READER FALSE
#define BIND_AudioBootStrap_demand_only_FIELD_WRITER FALSE
#define BIND_AudioBootStrap_desc_FIELD_READER FALSE
#define BIND_AudioBootStrap_desc_FIELD_WRITER FALSE
#define BIND_AudioBootStrap_init_FIELD_READER FALSE
#define BIND_AudioBootStrap_init_FIELD_WRITER FALSE
#define BIND_AudioBootStrap_name_FIELD_READER FALSE
#define BIND_AudioBootStrap_name_FIELD_WRITER FALSE

#define BIND_AxisCorrect_TYPE TRUE
#define BIND_AxisCorrect_INITIALIZE FALSE
#define BIND_AxisCorrect_coef_FIELD_READER FALSE
#define BIND_AxisCorrect_coef_FIELD_WRITER FALSE
#define BIND_AxisCorrect_used_FIELD_READER FALSE
#define BIND_AxisCorrect_used_FIELD_WRITER FALSE

#define BIND_BackingStoreStruct_TYPE TRUE
#define BIND_BackingStoreStruct_INITIALIZE FALSE
#define BIND_BackingStoreStruct_JMETHOD_FIELD_READER FALSE
#define BIND_BackingStoreStruct_JMETHOD_FIELD_WRITER FALSE
#define BIND_BackingStoreStruct_temp_file_FIELD_READER FALSE
#define BIND_BackingStoreStruct_temp_file_FIELD_WRITER FALSE
#define BIND_BackingStoreStruct_temp_name_FIELD_READER FALSE
#define BIND_BackingStoreStruct_temp_name_FIELD_WRITER FALSE

#define BIND_Balldelta_TYPE TRUE
#define BIND_Balldelta_INITIALIZE FALSE
#define BIND_Balldelta_dx_FIELD_READER FALSE
#define BIND_Balldelta_dx_FIELD_WRITER FALSE
#define BIND_Balldelta_dy_FIELD_READER FALSE
#define BIND_Balldelta_dy_FIELD_WRITER FALSE

#define BIND_CdjpegProgressMgr_TYPE TRUE
#define BIND_CdjpegProgressMgr_INITIALIZE FALSE
#define BIND_CdjpegProgressMgr_completed_extra_passes_FIELD_READER FALSE
#define BIND_CdjpegProgressMgr_completed_extra_passes_FIELD_WRITER FALSE
#define BIND_CdjpegProgressMgr_percent_done_FIELD_READER FALSE
#define BIND_CdjpegProgressMgr_percent_done_FIELD_WRITER FALSE
#define BIND_CdjpegProgressMgr_pub_FIELD_READER FALSE
#define BIND_CdjpegProgressMgr_pub_FIELD_WRITER FALSE
#define BIND_CdjpegProgressMgr_total_extra_passes_FIELD_READER FALSE
#define BIND_CdjpegProgressMgr_total_extra_passes_FIELD_WRITER FALSE

#define BIND_Chunk_TYPE TRUE
#define BIND_Chunk_INITIALIZE FALSE
#define BIND_Chunk_data_FIELD_READER FALSE
#define BIND_Chunk_data_FIELD_WRITER FALSE
#define BIND_Chunk_length_FIELD_READER FALSE
#define BIND_Chunk_length_FIELD_WRITER FALSE
#define BIND_Chunk_magic_FIELD_READER FALSE
#define BIND_Chunk_magic_FIELD_WRITER FALSE

#define BIND_CjpegSourceStruct_TYPE TRUE
#define BIND_CjpegSourceStruct_INITIALIZE FALSE
#define BIND_CjpegSourceStruct_buffer_FIELD_READER FALSE
#define BIND_CjpegSourceStruct_buffer_FIELD_WRITER FALSE
#define BIND_CjpegSourceStruct_buffer_height_FIELD_READER FALSE
#define BIND_CjpegSourceStruct_buffer_height_FIELD_WRITER FALSE
#define BIND_CjpegSourceStruct_input_file_FIELD_READER FALSE
#define BIND_CjpegSourceStruct_input_file_FIELD_WRITER FALSE

#define BIND_ClientInfo_TYPE TRUE
#define BIND_ClientInfo_INITIALIZE FALSE
#define BIND_ClientInfo_data_FIELD_READER FALSE
#define BIND_ClientInfo_data_FIELD_WRITER FALSE
#define BIND_ClientInfo_name_FIELD_READER FALSE
#define BIND_ClientInfo_name_FIELD_WRITER FALSE
#define BIND_ClientInfo_next_FIELD_READER FALSE
#define BIND_ClientInfo_next_FIELD_WRITER FALSE

#define BIND_CtDataS_TYPE TRUE
#define BIND_CtDataS_INITIALIZE FALSE
#define BIND_CtDataS_dl_FIELD_READER FALSE
#define BIND_CtDataS_dl_FIELD_WRITER FALSE
#define BIND_CtDataS_fc_FIELD_READER FALSE
#define BIND_CtDataS_fc_FIELD_WRITER FALSE

#define BIND_DetailedTiming_TYPE TRUE
#define BIND_DetailedTiming_INITIALIZE FALSE
#define BIND_DetailedTiming_digital_sync_FIELD_READER FALSE
#define BIND_DetailedTiming_digital_sync_FIELD_WRITER FALSE
#define BIND_DetailedTiming_h_addr_FIELD_READER FALSE
#define BIND_DetailedTiming_h_addr_FIELD_WRITER FALSE
#define BIND_DetailedTiming_h_blank_FIELD_READER FALSE
#define BIND_DetailedTiming_h_blank_FIELD_WRITER FALSE
#define BIND_DetailedTiming_h_front_porch_FIELD_READER FALSE
#define BIND_DetailedTiming_h_front_porch_FIELD_WRITER FALSE
#define BIND_DetailedTiming_h_sync_FIELD_READER FALSE
#define BIND_DetailedTiming_h_sync_FIELD_WRITER FALSE
#define BIND_DetailedTiming_height_mm_FIELD_READER FALSE
#define BIND_DetailedTiming_height_mm_FIELD_WRITER FALSE
#define BIND_DetailedTiming_interlaced_FIELD_READER FALSE
#define BIND_DetailedTiming_interlaced_FIELD_WRITER FALSE
#define BIND_DetailedTiming_pixel_clock_FIELD_READER FALSE
#define BIND_DetailedTiming_pixel_clock_FIELD_WRITER FALSE
#define BIND_DetailedTiming_right_border_FIELD_READER FALSE
#define BIND_DetailedTiming_right_border_FIELD_WRITER FALSE
#define BIND_DetailedTiming_stereo_FIELD_READER FALSE
#define BIND_DetailedTiming_stereo_FIELD_WRITER FALSE
#define BIND_DetailedTiming_top_border_FIELD_READER FALSE
#define BIND_DetailedTiming_top_border_FIELD_WRITER FALSE
#define BIND_DetailedTiming_v_addr_FIELD_READER FALSE
#define BIND_DetailedTiming_v_addr_FIELD_WRITER FALSE
#define BIND_DetailedTiming_v_blank_FIELD_READER FALSE
#define BIND_DetailedTiming_v_blank_FIELD_WRITER FALSE
#define BIND_DetailedTiming_v_front_porch_FIELD_READER FALSE
#define BIND_DetailedTiming_v_front_porch_FIELD_WRITER FALSE
#define BIND_DetailedTiming_v_sync_FIELD_READER FALSE
#define BIND_DetailedTiming_v_sync_FIELD_WRITER FALSE
#define BIND_DetailedTiming_width_mm_FIELD_READER FALSE
#define BIND_DetailedTiming_width_mm_FIELD_WRITER FALSE

#define BIND_DjpegDestStruct_TYPE TRUE
#define BIND_DjpegDestStruct_INITIALIZE FALSE
#define BIND_DjpegDestStruct_buffer_FIELD_READER FALSE
#define BIND_DjpegDestStruct_buffer_FIELD_WRITER FALSE
#define BIND_DjpegDestStruct_buffer_height_FIELD_READER FALSE
#define BIND_DjpegDestStruct_buffer_height_FIELD_WRITER FALSE
#define BIND_DjpegDestStruct_output_file_FIELD_READER FALSE
#define BIND_DjpegDestStruct_output_file_FIELD_WRITER FALSE

#define BIND_GLShaderContext_TYPE TRUE
#define BIND_GLShaderContext_INITIALIZE FALSE

#define BIND_GzHeaderS_TYPE TRUE
#define BIND_GzHeaderS_INITIALIZE FALSE
#define BIND_GzHeaderS_comm_max_FIELD_READER FALSE
#define BIND_GzHeaderS_comm_max_FIELD_WRITER FALSE
#define BIND_GzHeaderS_comm_max_FIELD_READER FALSE
#define BIND_GzHeaderS_comm_max_FIELD_WRITER FALSE
#define BIND_GzHeaderS_comment_FIELD_READER FALSE
#define BIND_GzHeaderS_comment_FIELD_WRITER FALSE
#define BIND_GzHeaderS_comment_FIELD_READER FALSE
#define BIND_GzHeaderS_comment_FIELD_WRITER FALSE
#define BIND_GzHeaderS_done_FIELD_READER FALSE
#define BIND_GzHeaderS_done_FIELD_WRITER FALSE
#define BIND_GzHeaderS_done_FIELD_READER FALSE
#define BIND_GzHeaderS_done_FIELD_WRITER FALSE
#define BIND_GzHeaderS_extra_FIELD_READER FALSE
#define BIND_GzHeaderS_extra_FIELD_WRITER FALSE
#define BIND_GzHeaderS_extra_FIELD_READER FALSE
#define BIND_GzHeaderS_extra_FIELD_WRITER FALSE
#define BIND_GzHeaderS_extra_len_FIELD_READER FALSE
#define BIND_GzHeaderS_extra_len_FIELD_WRITER FALSE
#define BIND_GzHeaderS_extra_len_FIELD_READER FALSE
#define BIND_GzHeaderS_extra_len_FIELD_WRITER FALSE
#define BIND_GzHeaderS_extra_max_FIELD_READER FALSE
#define BIND_GzHeaderS_extra_max_FIELD_WRITER FALSE
#define BIND_GzHeaderS_extra_max_FIELD_READER FALSE
#define BIND_GzHeaderS_extra_max_FIELD_WRITER FALSE
#define BIND_GzHeaderS_hcrc_FIELD_READER FALSE
#define BIND_GzHeaderS_hcrc_FIELD_WRITER FALSE
#define BIND_GzHeaderS_hcrc_FIELD_READER FALSE
#define BIND_GzHeaderS_hcrc_FIELD_WRITER FALSE
#define BIND_GzHeaderS_name_FIELD_READER FALSE
#define BIND_GzHeaderS_name_FIELD_WRITER FALSE
#define BIND_GzHeaderS_name_FIELD_READER FALSE
#define BIND_GzHeaderS_name_FIELD_WRITER FALSE
#define BIND_GzHeaderS_name_max_FIELD_READER FALSE
#define BIND_GzHeaderS_name_max_FIELD_WRITER FALSE
#define BIND_GzHeaderS_name_max_FIELD_READER FALSE
#define BIND_GzHeaderS_name_max_FIELD_WRITER FALSE
#define BIND_GzHeaderS_os_FIELD_READER FALSE
#define BIND_GzHeaderS_os_FIELD_WRITER FALSE
#define BIND_GzHeaderS_os_FIELD_READER FALSE
#define BIND_GzHeaderS_os_FIELD_WRITER FALSE
#define BIND_GzHeaderS_text_FIELD_READER FALSE
#define BIND_GzHeaderS_text_FIELD_WRITER FALSE
#define BIND_GzHeaderS_text_FIELD_READER FALSE
#define BIND_GzHeaderS_text_FIELD_WRITER FALSE
#define BIND_GzHeaderS_time_FIELD_READER FALSE
#define BIND_GzHeaderS_time_FIELD_WRITER FALSE
#define BIND_GzHeaderS_time_FIELD_READER FALSE
#define BIND_GzHeaderS_time_FIELD_WRITER FALSE
#define BIND_GzHeaderS_xflags_FIELD_READER FALSE
#define BIND_GzHeaderS_xflags_FIELD_WRITER FALSE
#define BIND_GzHeaderS_xflags_FIELD_READER FALSE
#define BIND_GzHeaderS_xflags_FIELD_WRITER FALSE

#define BIND_GzFileS_TYPE TRUE
#define BIND_GzFileS_INITIALIZE FALSE
#define BIND_GzFileS_have_FIELD_READER FALSE
#define BIND_GzFileS_have_FIELD_WRITER FALSE
#define BIND_GzFileS_have_FIELD_READER FALSE
#define BIND_GzFileS_have_FIELD_WRITER FALSE
#define BIND_GzFileS_next_FIELD_READER FALSE
#define BIND_GzFileS_next_FIELD_WRITER FALSE
#define BIND_GzFileS_next_FIELD_READER FALSE
#define BIND_GzFileS_next_FIELD_WRITER FALSE
#define BIND_GzFileS_pos_FIELD_READER FALSE
#define BIND_GzFileS_pos_FIELD_WRITER FALSE
#define BIND_GzFileS_pos_FIELD_READER FALSE
#define BIND_GzFileS_pos_FIELD_WRITER FALSE

#define BIND_HapticEffect_TYPE TRUE
#define BIND_HapticEffect_INITIALIZE FALSE
#define BIND_HapticEffect_effect_FIELD_READER FALSE
#define BIND_HapticEffect_effect_FIELD_WRITER FALSE
#define BIND_HapticEffect_hweffect_FIELD_READER FALSE
#define BIND_HapticEffect_hweffect_FIELD_WRITER FALSE

#define BIND_HapticHwdata_TYPE TRUE
#define BIND_HapticHwdata_INITIALIZE FALSE

#define BIND_HapticHweffect_TYPE TRUE
#define BIND_HapticHweffect_INITIALIZE FALSE

#define BIND_HuffmanTree_TYPE TRUE
#define BIND_HuffmanTree_INITIALIZE FALSE
#define BIND_HuffmanTree_max_nodes__FIELD_READER FALSE
#define BIND_HuffmanTree_max_nodes__FIELD_WRITER FALSE
#define BIND_HuffmanTree_num_nodes__FIELD_READER FALSE
#define BIND_HuffmanTree_num_nodes__FIELD_WRITER FALSE
#define BIND_HuffmanTree_root__FIELD_READER FALSE
#define BIND_HuffmanTree_root__FIELD_WRITER FALSE

#define BIND_HwdataBall_TYPE TRUE
#define BIND_HwdataBall_INITIALIZE FALSE
#define BIND_HwdataBall_axis_FIELD_READER FALSE
#define BIND_HwdataBall_axis_FIELD_WRITER FALSE

#define BIND_HwdataHat_TYPE TRUE
#define BIND_HwdataHat_INITIALIZE FALSE
#define BIND_HwdataHat_axis_FIELD_READER FALSE
#define BIND_HwdataHat_axis_FIELD_WRITER FALSE

#define BIND_IDirect3D9_TYPE TRUE
#define BIND_IDirect3D9_INITIALIZE FALSE

#define BIND_IEnumTfContexts_TYPE TRUE
#define BIND_IEnumTfContexts_INITIALIZE FALSE

#define BIND_IEnumTfDocumentMgrs_TYPE TRUE
#define BIND_IEnumTfDocumentMgrs_INITIALIZE FALSE

#define BIND_IEnumTfFunctionProviders_TYPE TRUE
#define BIND_IEnumTfFunctionProviders_INITIALIZE FALSE

#define BIND_IEnumTfUIElements_TYPE TRUE
#define BIND_IEnumTfUIElements_INITIALIZE FALSE

#define BIND_InflateState_TYPE TRUE
#define BIND_InflateState_INITIALIZE FALSE
#define BIND_InflateState__FIELD_READER FALSE
#define BIND_InflateState__FIELD_WRITER FALSE
#define BIND_InflateState__FIELD_READER FALSE
#define BIND_InflateState__FIELD_WRITER FALSE
#define BIND_InflateState_FAR_FIELD_READER FALSE
#define BIND_InflateState_FAR_FIELD_WRITER FALSE
#define BIND_InflateState_FAR_FIELD_READER FALSE
#define BIND_InflateState_FAR_FIELD_WRITER FALSE
#define BIND_InflateState_back_FIELD_READER FALSE
#define BIND_InflateState_back_FIELD_WRITER FALSE
#define BIND_InflateState_bits_FIELD_READER FALSE
#define BIND_InflateState_bits_FIELD_WRITER FALSE
#define BIND_InflateState_check_FIELD_READER FALSE
#define BIND_InflateState_check_FIELD_WRITER FALSE
#define BIND_InflateState_codes_FIELD_READER FALSE
#define BIND_InflateState_codes_FIELD_WRITER FALSE
#define BIND_InflateState_codes_FIELD_READER FALSE
#define BIND_InflateState_codes_FIELD_WRITER FALSE
#define BIND_InflateState_distbits_FIELD_READER FALSE
#define BIND_InflateState_distbits_FIELD_WRITER FALSE
#define BIND_InflateState_dmax_FIELD_READER FALSE
#define BIND_InflateState_dmax_FIELD_WRITER FALSE
#define BIND_InflateState_extra_FIELD_READER FALSE
#define BIND_InflateState_extra_FIELD_WRITER FALSE
#define BIND_InflateState_flags_FIELD_READER FALSE
#define BIND_InflateState_flags_FIELD_WRITER FALSE
#define BIND_InflateState_have_FIELD_READER FALSE
#define BIND_InflateState_have_FIELD_WRITER FALSE
#define BIND_InflateState_have_FIELD_READER FALSE
#define BIND_InflateState_have_FIELD_WRITER FALSE
#define BIND_InflateState_havedict_FIELD_READER FALSE
#define BIND_InflateState_havedict_FIELD_WRITER FALSE
#define BIND_InflateState_head_FIELD_READER FALSE
#define BIND_InflateState_head_FIELD_WRITER FALSE
#define BIND_InflateState_hold_FIELD_READER FALSE
#define BIND_InflateState_hold_FIELD_WRITER FALSE
#define BIND_InflateState_last_FIELD_READER FALSE
#define BIND_InflateState_last_FIELD_WRITER FALSE
#define BIND_InflateState_lenbits_FIELD_READER FALSE
#define BIND_InflateState_lenbits_FIELD_WRITER FALSE
#define BIND_InflateState_length_FIELD_READER FALSE
#define BIND_InflateState_length_FIELD_WRITER FALSE
#define BIND_InflateState_lens_FIELD_READER FALSE
#define BIND_InflateState_lens_FIELD_WRITER FALSE
#define BIND_InflateState_lens_FIELD_READER FALSE
#define BIND_InflateState_lens_FIELD_WRITER FALSE
#define BIND_InflateState_mode_FIELD_READER FALSE
#define BIND_InflateState_mode_FIELD_WRITER FALSE
#define BIND_InflateState_ncode_FIELD_READER FALSE
#define BIND_InflateState_ncode_FIELD_WRITER FALSE
#define BIND_InflateState_ncode_FIELD_READER FALSE
#define BIND_InflateState_ncode_FIELD_WRITER FALSE
#define BIND_InflateState_ndist_FIELD_READER FALSE
#define BIND_InflateState_ndist_FIELD_WRITER FALSE
#define BIND_InflateState_ndist_FIELD_READER FALSE
#define BIND_InflateState_ndist_FIELD_WRITER FALSE
#define BIND_InflateState_nlen_FIELD_READER FALSE
#define BIND_InflateState_nlen_FIELD_WRITER FALSE
#define BIND_InflateState_nlen_FIELD_READER FALSE
#define BIND_InflateState_nlen_FIELD_WRITER FALSE
#define BIND_InflateState_offset_FIELD_READER FALSE
#define BIND_InflateState_offset_FIELD_WRITER FALSE
#define BIND_InflateState_sane_FIELD_READER FALSE
#define BIND_InflateState_sane_FIELD_WRITER FALSE
#define BIND_InflateState_total_FIELD_READER FALSE
#define BIND_InflateState_total_FIELD_WRITER FALSE
#define BIND_InflateState_was_FIELD_READER FALSE
#define BIND_InflateState_was_FIELD_WRITER FALSE
#define BIND_InflateState_wbits_FIELD_READER FALSE
#define BIND_InflateState_wbits_FIELD_WRITER FALSE
#define BIND_InflateState_whave_FIELD_READER FALSE
#define BIND_InflateState_whave_FIELD_WRITER FALSE
#define BIND_InflateState_wnext_FIELD_READER FALSE
#define BIND_InflateState_wnext_FIELD_WRITER FALSE
#define BIND_InflateState_work_FIELD_READER FALSE
#define BIND_InflateState_work_FIELD_WRITER FALSE
#define BIND_InflateState_work_FIELD_READER FALSE
#define BIND_InflateState_work_FIELD_WRITER FALSE
#define BIND_InflateState_wrap_FIELD_READER FALSE
#define BIND_InflateState_wrap_FIELD_WRITER FALSE
#define BIND_InflateState_wsize_FIELD_READER FALSE
#define BIND_InflateState_wsize_FIELD_WRITER FALSE

#define BIND_InputT_TYPE TRUE
#define BIND_InputT_INITIALIZE FALSE
#define BIND_InputT_num_FIELD_READER FALSE
#define BIND_InputT_num_FIELD_WRITER FALSE
#define BIND_InputT_ofs_FIELD_READER FALSE
#define BIND_InputT_ofs_FIELD_WRITER FALSE
#define BIND_InputT_type_FIELD_READER FALSE
#define BIND_InputT_type_FIELD_WRITER FALSE

#define BIND_InternalState_TYPE TRUE
#define BIND_InternalState_INITIALIZE FALSE
#define BIND_InternalState_bi_buf_FIELD_READER FALSE
#define BIND_InternalState_bi_buf_FIELD_WRITER FALSE
#define BIND_InternalState_bi_valid_FIELD_READER FALSE
#define BIND_InternalState_bi_valid_FIELD_WRITER FALSE
#define BIND_InternalState_bl_count_FIELD_READER FALSE
#define BIND_InternalState_bl_count_FIELD_WRITER FALSE
#define BIND_InternalState_bl_desc_FIELD_READER FALSE
#define BIND_InternalState_bl_desc_FIELD_WRITER FALSE
#define BIND_InternalState_bl_tree_FIELD_READER FALSE
#define BIND_InternalState_bl_tree_FIELD_WRITER FALSE
#define BIND_InternalState_block_start_FIELD_READER FALSE
#define BIND_InternalState_block_start_FIELD_WRITER FALSE
#define BIND_InternalState_d_buf_FIELD_READER FALSE
#define BIND_InternalState_d_buf_FIELD_WRITER FALSE
#define BIND_InternalState_d_desc_FIELD_READER FALSE
#define BIND_InternalState_d_desc_FIELD_WRITER FALSE
#define BIND_InternalState_depth_FIELD_READER FALSE
#define BIND_InternalState_depth_FIELD_WRITER FALSE
#define BIND_InternalState_dummy_FIELD_READER FALSE
#define BIND_InternalState_dummy_FIELD_WRITER FALSE
#define BIND_InternalState_dummy_FIELD_READER FALSE
#define BIND_InternalState_dummy_FIELD_WRITER FALSE
#define BIND_InternalState_dyn_dtree_FIELD_READER FALSE
#define BIND_InternalState_dyn_dtree_FIELD_WRITER FALSE
#define BIND_InternalState_dyn_ltree_FIELD_READER FALSE
#define BIND_InternalState_dyn_ltree_FIELD_WRITER FALSE
#define BIND_InternalState_good_match_FIELD_READER FALSE
#define BIND_InternalState_good_match_FIELD_WRITER FALSE
#define BIND_InternalState_gzhead_FIELD_READER FALSE
#define BIND_InternalState_gzhead_FIELD_WRITER FALSE
#define BIND_InternalState_gzindex_FIELD_READER FALSE
#define BIND_InternalState_gzindex_FIELD_WRITER FALSE
#define BIND_InternalState_hash_bits_FIELD_READER FALSE
#define BIND_InternalState_hash_bits_FIELD_WRITER FALSE
#define BIND_InternalState_hash_mask_FIELD_READER FALSE
#define BIND_InternalState_hash_mask_FIELD_WRITER FALSE
#define BIND_InternalState_hash_shift_FIELD_READER FALSE
#define BIND_InternalState_hash_shift_FIELD_WRITER FALSE
#define BIND_InternalState_hash_size_FIELD_READER FALSE
#define BIND_InternalState_hash_size_FIELD_WRITER FALSE
#define BIND_InternalState_head_FIELD_READER FALSE
#define BIND_InternalState_head_FIELD_WRITER FALSE
#define BIND_InternalState_heap_FIELD_READER FALSE
#define BIND_InternalState_heap_FIELD_WRITER FALSE
#define BIND_InternalState_heap_len_FIELD_READER FALSE
#define BIND_InternalState_heap_len_FIELD_WRITER FALSE
#define BIND_InternalState_heap_max_FIELD_READER FALSE
#define BIND_InternalState_heap_max_FIELD_WRITER FALSE
#define BIND_InternalState_high_water_FIELD_READER FALSE
#define BIND_InternalState_high_water_FIELD_WRITER FALSE
#define BIND_InternalState_ins_h_FIELD_READER FALSE
#define BIND_InternalState_ins_h_FIELD_WRITER FALSE
#define BIND_InternalState_insert_FIELD_READER FALSE
#define BIND_InternalState_insert_FIELD_WRITER FALSE
#define BIND_InternalState_l_buf_FIELD_READER FALSE
#define BIND_InternalState_l_buf_FIELD_WRITER FALSE
#define BIND_InternalState_l_desc_FIELD_READER FALSE
#define BIND_InternalState_l_desc_FIELD_WRITER FALSE
#define BIND_InternalState_last_flush_FIELD_READER FALSE
#define BIND_InternalState_last_flush_FIELD_WRITER FALSE
#define BIND_InternalState_last_lit_FIELD_READER FALSE
#define BIND_InternalState_last_lit_FIELD_WRITER FALSE
#define BIND_InternalState_level_FIELD_READER FALSE
#define BIND_InternalState_level_FIELD_WRITER FALSE
#define BIND_InternalState_lit_bufsize_FIELD_READER FALSE
#define BIND_InternalState_lit_bufsize_FIELD_WRITER FALSE
#define BIND_InternalState_lookahead_FIELD_READER FALSE
#define BIND_InternalState_lookahead_FIELD_WRITER FALSE
#define BIND_InternalState_match_available_FIELD_READER FALSE
#define BIND_InternalState_match_available_FIELD_WRITER FALSE
#define BIND_InternalState_match_length_FIELD_READER FALSE
#define BIND_InternalState_match_length_FIELD_WRITER FALSE
#define BIND_InternalState_match_start_FIELD_READER FALSE
#define BIND_InternalState_match_start_FIELD_WRITER FALSE
#define BIND_InternalState_matches_FIELD_READER FALSE
#define BIND_InternalState_matches_FIELD_WRITER FALSE
#define BIND_InternalState_max_chain_length_FIELD_READER FALSE
#define BIND_InternalState_max_chain_length_FIELD_WRITER FALSE
#define BIND_InternalState_max_lazy_match_FIELD_READER FALSE
#define BIND_InternalState_max_lazy_match_FIELD_WRITER FALSE
#define BIND_InternalState_method_FIELD_READER FALSE
#define BIND_InternalState_method_FIELD_WRITER FALSE
#define BIND_InternalState_nice_match_FIELD_READER FALSE
#define BIND_InternalState_nice_match_FIELD_WRITER FALSE
#define BIND_InternalState_opt_len_FIELD_READER FALSE
#define BIND_InternalState_opt_len_FIELD_WRITER FALSE
#define BIND_InternalState_pending_FIELD_READER FALSE
#define BIND_InternalState_pending_FIELD_WRITER FALSE
#define BIND_InternalState_pending_buf_FIELD_READER FALSE
#define BIND_InternalState_pending_buf_FIELD_WRITER FALSE
#define BIND_InternalState_pending_buf_size_FIELD_READER FALSE
#define BIND_InternalState_pending_buf_size_FIELD_WRITER FALSE
#define BIND_InternalState_pending_out_FIELD_READER FALSE
#define BIND_InternalState_pending_out_FIELD_WRITER FALSE
#define BIND_InternalState_prev_FIELD_READER FALSE
#define BIND_InternalState_prev_FIELD_WRITER FALSE
#define BIND_InternalState_prev_length_FIELD_READER FALSE
#define BIND_InternalState_prev_length_FIELD_WRITER FALSE
#define BIND_InternalState_prev_match_FIELD_READER FALSE
#define BIND_InternalState_prev_match_FIELD_WRITER FALSE
#define BIND_InternalState_static_len_FIELD_READER FALSE
#define BIND_InternalState_static_len_FIELD_WRITER FALSE
#define BIND_InternalState_status_FIELD_READER FALSE
#define BIND_InternalState_status_FIELD_WRITER FALSE
#define BIND_InternalState_strategy_FIELD_READER FALSE
#define BIND_InternalState_strategy_FIELD_WRITER FALSE
#define BIND_InternalState_strm_FIELD_READER FALSE
#define BIND_InternalState_strm_FIELD_WRITER FALSE
#define BIND_InternalState_strstart_FIELD_READER FALSE
#define BIND_InternalState_strstart_FIELD_WRITER FALSE
#define BIND_InternalState_w_bits_FIELD_READER FALSE
#define BIND_InternalState_w_bits_FIELD_WRITER FALSE
#define BIND_InternalState_w_mask_FIELD_READER FALSE
#define BIND_InternalState_w_mask_FIELD_WRITER FALSE
#define BIND_InternalState_w_size_FIELD_READER FALSE
#define BIND_InternalState_w_size_FIELD_WRITER FALSE
#define BIND_InternalState_window_FIELD_READER FALSE
#define BIND_InternalState_window_FIELD_WRITER FALSE
#define BIND_InternalState_window_size_FIELD_READER FALSE
#define BIND_InternalState_window_size_FIELD_WRITER FALSE
#define BIND_InternalState_wrap_FIELD_READER FALSE
#define BIND_InternalState_wrap_FIELD_WRITER FALSE

#define BIND_ITfCandidateListUIElement_TYPE TRUE
#define BIND_ITfCandidateListUIElement_INITIALIZE FALSE
#define BIND_ITfCandidateListUIElement_lpVtbl_FIELD_READER FALSE
#define BIND_ITfCandidateListUIElement_lpVtbl_FIELD_WRITER FALSE

#define BIND_ITfCandidateListUIElementVtbl_TYPE TRUE
#define BIND_ITfCandidateListUIElementVtbl_INITIALIZE FALSE
#define BIND_ITfCandidateListUIElementVtbl_HRESULT_FIELD_READER FALSE
#define BIND_ITfCandidateListUIElementVtbl_HRESULT_FIELD_WRITER FALSE
#define BIND_ITfCandidateListUIElementVtbl_ULONG_FIELD_READER FALSE
#define BIND_ITfCandidateListUIElementVtbl_ULONG_FIELD_WRITER FALSE

#define BIND_ITfClientId_TYPE TRUE
#define BIND_ITfClientId_INITIALIZE FALSE

#define BIND_ITfCompartmentMgr_TYPE TRUE
#define BIND_ITfCompartmentMgr_INITIALIZE FALSE

#define BIND_ITfContext_TYPE TRUE
#define BIND_ITfContext_INITIALIZE FALSE

#define BIND_ITfDocumentMgr_TYPE TRUE
#define BIND_ITfDocumentMgr_INITIALIZE FALSE
#define BIND_ITfDocumentMgr_lpVtbl_FIELD_READER FALSE
#define BIND_ITfDocumentMgr_lpVtbl_FIELD_WRITER FALSE

#define BIND_ITfDocumentMgrVtbl_TYPE TRUE
#define BIND_ITfDocumentMgrVtbl_INITIALIZE FALSE
#define BIND_ITfDocumentMgrVtbl_HRESULT_FIELD_READER FALSE
#define BIND_ITfDocumentMgrVtbl_HRESULT_FIELD_WRITER FALSE
#define BIND_ITfDocumentMgrVtbl_ULONG_FIELD_READER FALSE
#define BIND_ITfDocumentMgrVtbl_ULONG_FIELD_WRITER FALSE

#define BIND_ITfFunctionProvider_TYPE TRUE
#define BIND_ITfFunctionProvider_INITIALIZE FALSE

#define BIND_ITfInputProcessorProfileActivationSink_TYPE TRUE
#define BIND_ITfInputProcessorProfileActivationSink_INITIALIZE FALSE
#define BIND_ITfInputProcessorProfileActivationSink_lpVtbl_FIELD_READER FALSE
#define BIND_ITfInputProcessorProfileActivationSink_lpVtbl_FIELD_WRITER FALSE

#define BIND_ITfInputProcessorProfileActivationSinkVtbl_TYPE TRUE
#define BIND_ITfInputProcessorProfileActivationSinkVtbl_INITIALIZE FALSE
#define BIND_ITfInputProcessorProfileActivationSinkVtbl_HRESULT_FIELD_READER FALSE
#define BIND_ITfInputProcessorProfileActivationSinkVtbl_HRESULT_FIELD_WRITER FALSE
#define BIND_ITfInputProcessorProfileActivationSinkVtbl_ULONG_FIELD_READER FALSE
#define BIND_ITfInputProcessorProfileActivationSinkVtbl_ULONG_FIELD_WRITER FALSE

#define BIND_ITfReadingInformationUIElement_TYPE TRUE
#define BIND_ITfReadingInformationUIElement_INITIALIZE FALSE
#define BIND_ITfReadingInformationUIElement_lpVtbl_FIELD_READER FALSE
#define BIND_ITfReadingInformationUIElement_lpVtbl_FIELD_WRITER FALSE

#define BIND_ITfReadingInformationUIElementVtbl_TYPE TRUE
#define BIND_ITfReadingInformationUIElementVtbl_INITIALIZE FALSE
#define BIND_ITfReadingInformationUIElementVtbl_HRESULT_FIELD_READER FALSE
#define BIND_ITfReadingInformationUIElementVtbl_HRESULT_FIELD_WRITER FALSE
#define BIND_ITfReadingInformationUIElementVtbl_ULONG_FIELD_READER FALSE
#define BIND_ITfReadingInformationUIElementVtbl_ULONG_FIELD_WRITER FALSE

#define BIND_ITfSource_TYPE TRUE
#define BIND_ITfSource_INITIALIZE FALSE
#define BIND_ITfSource_lpVtbl_FIELD_READER FALSE
#define BIND_ITfSource_lpVtbl_FIELD_WRITER FALSE

#define BIND_ITfSourceVtbl_TYPE TRUE
#define BIND_ITfSourceVtbl_INITIALIZE FALSE
#define BIND_ITfSourceVtbl_HRESULT_FIELD_READER FALSE
#define BIND_ITfSourceVtbl_HRESULT_FIELD_WRITER FALSE
#define BIND_ITfSourceVtbl_ULONG_FIELD_READER FALSE
#define BIND_ITfSourceVtbl_ULONG_FIELD_WRITER FALSE

#define BIND_ITfThreadMgr_TYPE TRUE
#define BIND_ITfThreadMgr_INITIALIZE FALSE
#define BIND_ITfThreadMgr_lpVtbl_FIELD_READER FALSE
#define BIND_ITfThreadMgr_lpVtbl_FIELD_WRITER FALSE

#define BIND_ITfThreadMgrEx_TYPE TRUE
#define BIND_ITfThreadMgrEx_INITIALIZE FALSE
#define BIND_ITfThreadMgrEx_lpVtbl_FIELD_READER FALSE
#define BIND_ITfThreadMgrEx_lpVtbl_FIELD_WRITER FALSE

#define BIND_ITfThreadMgrExVtbl_TYPE TRUE
#define BIND_ITfThreadMgrExVtbl_INITIALIZE FALSE
#define BIND_ITfThreadMgrExVtbl_HRESULT_FIELD_READER FALSE
#define BIND_ITfThreadMgrExVtbl_HRESULT_FIELD_WRITER FALSE
#define BIND_ITfThreadMgrExVtbl_ULONG_FIELD_READER FALSE
#define BIND_ITfThreadMgrExVtbl_ULONG_FIELD_WRITER FALSE

#define BIND_ITfThreadMgrVtbl_TYPE TRUE
#define BIND_ITfThreadMgrVtbl_INITIALIZE FALSE
#define BIND_ITfThreadMgrVtbl_HRESULT_FIELD_READER FALSE
#define BIND_ITfThreadMgrVtbl_HRESULT_FIELD_WRITER FALSE
#define BIND_ITfThreadMgrVtbl_ULONG_FIELD_READER FALSE
#define BIND_ITfThreadMgrVtbl_ULONG_FIELD_WRITER FALSE

#define BIND_ITfUIElement_TYPE TRUE
#define BIND_ITfUIElement_INITIALIZE FALSE
#define BIND_ITfUIElement_lpVtbl_FIELD_READER FALSE
#define BIND_ITfUIElement_lpVtbl_FIELD_WRITER FALSE

#define BIND_ITfUIElementMgr_TYPE TRUE
#define BIND_ITfUIElementMgr_INITIALIZE FALSE
#define BIND_ITfUIElementMgr_lpVtbl_FIELD_READER FALSE
#define BIND_ITfUIElementMgr_lpVtbl_FIELD_WRITER FALSE

#define BIND_ITfUIElementMgrVtbl_TYPE TRUE
#define BIND_ITfUIElementMgrVtbl_INITIALIZE FALSE
#define BIND_ITfUIElementMgrVtbl_HRESULT_FIELD_READER FALSE
#define BIND_ITfUIElementMgrVtbl_HRESULT_FIELD_WRITER FALSE
#define BIND_ITfUIElementMgrVtbl_ULONG_FIELD_READER FALSE
#define BIND_ITfUIElementMgrVtbl_ULONG_FIELD_WRITER FALSE

#define BIND_ITfUIElementSink_TYPE TRUE
#define BIND_ITfUIElementSink_INITIALIZE FALSE
#define BIND_ITfUIElementSink_lpVtbl_FIELD_READER FALSE
#define BIND_ITfUIElementSink_lpVtbl_FIELD_WRITER FALSE

#define BIND_ITfUIElementSinkVtbl_TYPE TRUE
#define BIND_ITfUIElementSinkVtbl_INITIALIZE FALSE
#define BIND_ITfUIElementSinkVtbl_HRESULT_FIELD_READER FALSE
#define BIND_ITfUIElementSinkVtbl_HRESULT_FIELD_WRITER FALSE
#define BIND_ITfUIElementSinkVtbl_ULONG_FIELD_READER FALSE
#define BIND_ITfUIElementSinkVtbl_ULONG_FIELD_WRITER FALSE

#define BIND_ITfUIElementVtbl_TYPE TRUE
#define BIND_ITfUIElementVtbl_INITIALIZE FALSE
#define BIND_ITfUIElementVtbl_HRESULT_FIELD_READER FALSE
#define BIND_ITfUIElementVtbl_HRESULT_FIELD_WRITER FALSE
#define BIND_ITfUIElementVtbl_ULONG_FIELD_READER FALSE
#define BIND_ITfUIElementVtbl_ULONG_FIELD_WRITER FALSE

#define BIND_JoystickHwdata_TYPE TRUE
#define BIND_JoystickHwdata_INITIALIZE FALSE
#define BIND_JoystickHwdata_Capabilities_FIELD_READER FALSE
#define BIND_JoystickHwdata_Capabilities_FIELD_WRITER FALSE
#define BIND_JoystickHwdata_InputDevice_FIELD_READER FALSE
#define BIND_JoystickHwdata_InputDevice_FIELD_WRITER FALSE
#define BIND_JoystickHwdata_Inputs_FIELD_READER FALSE
#define BIND_JoystickHwdata_Inputs_FIELD_WRITER FALSE
#define BIND_JoystickHwdata_NumInputs_FIELD_READER FALSE
#define BIND_JoystickHwdata_NumInputs_FIELD_WRITER FALSE
#define BIND_JoystickHwdata_NumSliders_FIELD_READER FALSE
#define BIND_JoystickHwdata_NumSliders_FIELD_WRITER FALSE
#define BIND_JoystickHwdata_XInputState_FIELD_READER FALSE
#define BIND_JoystickHwdata_XInputState_FIELD_WRITER FALSE
#define BIND_JoystickHwdata_abs_correct_FIELD_READER FALSE
#define BIND_JoystickHwdata_abs_correct_FIELD_WRITER FALSE
#define BIND_JoystickHwdata_abs_map_FIELD_READER FALSE
#define BIND_JoystickHwdata_abs_map_FIELD_WRITER FALSE
#define BIND_JoystickHwdata_axes_FIELD_READER FALSE
#define BIND_JoystickHwdata_axes_FIELD_WRITER FALSE
#define BIND_JoystickHwdata_bXInputDevice_FIELD_READER FALSE
#define BIND_JoystickHwdata_bXInputDevice_FIELD_WRITER FALSE
#define BIND_JoystickHwdata_bXInputHaptic_FIELD_READER FALSE
#define BIND_JoystickHwdata_bXInputHaptic_FIELD_WRITER FALSE
#define BIND_JoystickHwdata_balls_FIELD_READER FALSE
#define BIND_JoystickHwdata_balls_FIELD_WRITER FALSE
#define BIND_JoystickHwdata_buffered_FIELD_READER FALSE
#define BIND_JoystickHwdata_buffered_FIELD_WRITER FALSE
#define BIND_JoystickHwdata_buttons_FIELD_READER FALSE
#define BIND_JoystickHwdata_buttons_FIELD_WRITER FALSE
#define BIND_JoystickHwdata_currentXInputSlot_FIELD_READER FALSE
#define BIND_JoystickHwdata_currentXInputSlot_FIELD_WRITER FALSE
#define BIND_JoystickHwdata_deviceRef_FIELD_READER FALSE
#define BIND_JoystickHwdata_deviceRef_FIELD_WRITER FALSE
#define BIND_JoystickHwdata_elements_FIELD_READER FALSE
#define BIND_JoystickHwdata_elements_FIELD_WRITER FALSE
#define BIND_JoystickHwdata_fd_FIELD_READER FALSE
#define BIND_JoystickHwdata_fd_FIELD_WRITER FALSE
#define BIND_JoystickHwdata_ffservice_FIELD_READER FALSE
#define BIND_JoystickHwdata_ffservice_FIELD_WRITER FALSE
#define BIND_JoystickHwdata_firstAxis_FIELD_READER FALSE
#define BIND_JoystickHwdata_firstAxis_FIELD_WRITER FALSE
#define BIND_JoystickHwdata_firstButton_FIELD_READER FALSE
#define BIND_JoystickHwdata_firstButton_FIELD_WRITER FALSE
#define BIND_JoystickHwdata_firstHat_FIELD_READER FALSE
#define BIND_JoystickHwdata_firstHat_FIELD_WRITER FALSE
#define BIND_JoystickHwdata_fname_FIELD_READER FALSE
#define BIND_JoystickHwdata_fname_FIELD_WRITER FALSE
#define BIND_JoystickHwdata_fresh_FIELD_READER FALSE
#define BIND_JoystickHwdata_fresh_FIELD_WRITER FALSE
#define BIND_JoystickHwdata_guid_FIELD_READER FALSE
#define BIND_JoystickHwdata_guid_FIELD_WRITER FALSE
#define BIND_JoystickHwdata_guid_FIELD_READER FALSE
#define BIND_JoystickHwdata_guid_FIELD_WRITER FALSE
#define BIND_JoystickHwdata_guid_FIELD_READER FALSE
#define BIND_JoystickHwdata_guid_FIELD_WRITER FALSE
#define BIND_JoystickHwdata_hats_FIELD_READER FALSE
#define BIND_JoystickHwdata_hats_FIELD_WRITER FALSE
#define BIND_JoystickHwdata_hats_FIELD_READER FALSE
#define BIND_JoystickHwdata_hats_FIELD_WRITER FALSE
#define BIND_JoystickHwdata_instance_id_FIELD_READER FALSE
#define BIND_JoystickHwdata_instance_id_FIELD_WRITER FALSE
#define BIND_JoystickHwdata_item_FIELD_READER FALSE
#define BIND_JoystickHwdata_item_FIELD_WRITER FALSE
#define BIND_JoystickHwdata_key_map_FIELD_READER FALSE
#define BIND_JoystickHwdata_key_map_FIELD_WRITER FALSE
#define BIND_JoystickHwdata_pNext_FIELD_READER FALSE
#define BIND_JoystickHwdata_pNext_FIELD_WRITER FALSE
#define BIND_JoystickHwdata_product_FIELD_READER FALSE
#define BIND_JoystickHwdata_product_FIELD_WRITER FALSE
#define BIND_JoystickHwdata_removed_FIELD_READER FALSE
#define BIND_JoystickHwdata_removed_FIELD_WRITER FALSE
#define BIND_JoystickHwdata_removed_FIELD_READER FALSE
#define BIND_JoystickHwdata_removed_FIELD_WRITER FALSE
#define BIND_JoystickHwdata_send_open_Event_FIELD_READER TRUE
#define BIND_JoystickHwdata_send_open_event_FIELD_WRITER FALSE
#define BIND_JoystickHwdata_send_remove_Event_FIELD_READER TRUE
#define BIND_JoystickHwdata_send_remove_event_FIELD_WRITER FALSE
#define BIND_JoystickHwdata_uncentered_FIELD_READER FALSE
#define BIND_JoystickHwdata_uncentered_FIELD_WRITER FALSE
#define BIND_JoystickHwdata_usage_FIELD_READER FALSE
#define BIND_JoystickHwdata_usage_FIELD_WRITER FALSE
#define BIND_JoystickHwdata_usagePage_FIELD_READER FALSE
#define BIND_JoystickHwdata_usagePage_FIELD_WRITER FALSE
#define BIND_JoystickHwdata_userid_FIELD_READER FALSE
#define BIND_JoystickHwdata_userid_FIELD_WRITER FALSE

#define BIND_JpegCCoefController_TYPE TRUE
#define BIND_JpegCCoefController_INITIALIZE FALSE
#define BIND_JpegCCoefController_JMETHOD_FIELD_READER FALSE
#define BIND_JpegCCoefController_JMETHOD_FIELD_WRITER FALSE

#define BIND_JpegCMainController_TYPE TRUE
#define BIND_JpegCMainController_INITIALIZE FALSE
#define BIND_JpegCMainController_JMETHOD_FIELD_READER FALSE
#define BIND_JpegCMainController_JMETHOD_FIELD_WRITER FALSE

#define BIND_JpegCPrepController_TYPE TRUE
#define BIND_JpegCPrepController_INITIALIZE FALSE
#define BIND_JpegCPrepController_JMETHOD_FIELD_READER FALSE
#define BIND_JpegCPrepController_JMETHOD_FIELD_WRITER FALSE

#define BIND_JpegColorConverter_TYPE TRUE
#define BIND_JpegColorConverter_INITIALIZE FALSE
#define BIND_JpegColorConverter_JMETHOD_FIELD_READER FALSE
#define BIND_JpegColorConverter_JMETHOD_FIELD_WRITER FALSE

#define BIND_JpegColorDeconverter_TYPE TRUE
#define BIND_JpegColorDeconverter_INITIALIZE FALSE
#define BIND_JpegColorDeconverter__FIELD_READER FALSE
#define BIND_JpegColorDeconverter__FIELD_WRITER FALSE
#define BIND_JpegColorDeconverter__FIELD_READER FALSE
#define BIND_JpegColorDeconverter__FIELD_WRITER FALSE

#define BIND_JpegColorQuantizer_TYPE TRUE
#define BIND_JpegColorQuantizer_INITIALIZE FALSE
#define BIND_JpegColorQuantizer__FIELD_READER FALSE
#define BIND_JpegColorQuantizer__FIELD_WRITER FALSE
#define BIND_JpegColorQuantizer__FIELD_READER FALSE
#define BIND_JpegColorQuantizer__FIELD_WRITER FALSE
#define BIND_JpegColorQuantizer__FIELD_READER FALSE
#define BIND_JpegColorQuantizer__FIELD_WRITER FALSE
#define BIND_JpegColorQuantizer__FIELD_READER FALSE
#define BIND_JpegColorQuantizer__FIELD_WRITER FALSE

#define BIND_JpegCommonStruct_TYPE TRUE
#define BIND_JpegCommonStruct_INITIALIZE FALSE

#define BIND_JpegCompMaster_TYPE TRUE
#define BIND_JpegCompMaster_INITIALIZE FALSE
#define BIND_JpegCompMaster_JMETHOD_FIELD_READER FALSE
#define BIND_JpegCompMaster_JMETHOD_FIELD_WRITER FALSE
#define BIND_JpegCompMaster_call_pass_startup_FIELD_READER FALSE
#define BIND_JpegCompMaster_call_pass_startup_FIELD_WRITER FALSE
#define BIND_JpegCompMaster_is_last_pass_FIELD_READER FALSE
#define BIND_JpegCompMaster_is_last_pass_FIELD_WRITER FALSE

#define BIND_JpegCompressStruct_TYPE TRUE
#define BIND_JpegCompressStruct_INITIALIZE FALSE
#define BIND_JpegCompressStruct_Ah_FIELD_READER FALSE
#define BIND_JpegCompressStruct_Ah_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_Ah_FIELD_READER FALSE
#define BIND_JpegCompressStruct_Ah_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_Al_FIELD_READER FALSE
#define BIND_JpegCompressStruct_Al_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_Al_FIELD_READER FALSE
#define BIND_JpegCompressStruct_Al_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_CCIR601_sampling_FIELD_READER FALSE
#define BIND_JpegCompressStruct_CCIR601_sampling_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_CCIR601_sampling_FIELD_READER FALSE
#define BIND_JpegCompressStruct_CCIR601_sampling_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_JFIF_major_version_FIELD_READER FALSE
#define BIND_JpegCompressStruct_JFIF_major_version_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_JFIF_major_version_FIELD_READER FALSE
#define BIND_JpegCompressStruct_JFIF_major_version_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_JFIF_minor_version_FIELD_READER FALSE
#define BIND_JpegCompressStruct_JFIF_minor_version_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_JFIF_minor_version_FIELD_READER FALSE
#define BIND_JpegCompressStruct_JFIF_minor_version_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_MCU_membership_FIELD_READER FALSE
#define BIND_JpegCompressStruct_MCU_membership_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_MCU_membership_FIELD_READER FALSE
#define BIND_JpegCompressStruct_MCU_membership_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_MCU_rows_in_scan_FIELD_READER FALSE
#define BIND_JpegCompressStruct_MCU_rows_in_scan_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_MCU_rows_in_scan_FIELD_READER FALSE
#define BIND_JpegCompressStruct_MCU_rows_in_scan_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_MCUs_per_row_FIELD_READER FALSE
#define BIND_JpegCompressStruct_MCUs_per_row_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_MCUs_per_row_FIELD_READER FALSE
#define BIND_JpegCompressStruct_MCUs_per_row_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_Se_FIELD_READER FALSE
#define BIND_JpegCompressStruct_Se_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_Se_FIELD_READER FALSE
#define BIND_JpegCompressStruct_Se_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_Ss_FIELD_READER FALSE
#define BIND_JpegCompressStruct_Ss_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_Ss_FIELD_READER FALSE
#define BIND_JpegCompressStruct_Ss_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_X_density_FIELD_READER FALSE
#define BIND_JpegCompressStruct_X_density_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_X_density_FIELD_READER FALSE
#define BIND_JpegCompressStruct_X_density_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_Y_density_FIELD_READER FALSE
#define BIND_JpegCompressStruct_Y_density_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_Y_density_FIELD_READER FALSE
#define BIND_JpegCompressStruct_Y_density_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_ac_huff_tbl_ptrs_FIELD_READER FALSE
#define BIND_JpegCompressStruct_ac_huff_tbl_ptrs_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_ac_huff_tbl_ptrs_FIELD_READER FALSE
#define BIND_JpegCompressStruct_ac_huff_tbl_ptrs_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_arith_ac_K_FIELD_READER FALSE
#define BIND_JpegCompressStruct_arith_ac_K_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_arith_ac_K_FIELD_READER FALSE
#define BIND_JpegCompressStruct_arith_ac_K_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_arith_code_FIELD_READER FALSE
#define BIND_JpegCompressStruct_arith_code_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_arith_code_FIELD_READER FALSE
#define BIND_JpegCompressStruct_arith_code_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_arith_dc_L_FIELD_READER FALSE
#define BIND_JpegCompressStruct_arith_dc_L_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_arith_dc_L_FIELD_READER FALSE
#define BIND_JpegCompressStruct_arith_dc_L_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_arith_dc_U_FIELD_READER FALSE
#define BIND_JpegCompressStruct_arith_dc_U_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_arith_dc_U_FIELD_READER FALSE
#define BIND_JpegCompressStruct_arith_dc_U_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_block_size_FIELD_READER FALSE
#define BIND_JpegCompressStruct_block_size_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_block_size_FIELD_READER FALSE
#define BIND_JpegCompressStruct_block_size_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_blocks_in_MCU_FIELD_READER FALSE
#define BIND_JpegCompressStruct_blocks_in_MCU_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_blocks_in_MCU_FIELD_READER FALSE
#define BIND_JpegCompressStruct_blocks_in_MCU_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_cconvert_FIELD_READER FALSE
#define BIND_JpegCompressStruct_cconvert_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_cconvert_FIELD_READER FALSE
#define BIND_JpegCompressStruct_cconvert_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_coef_FIELD_READER FALSE
#define BIND_JpegCompressStruct_coef_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_coef_FIELD_READER FALSE
#define BIND_JpegCompressStruct_coef_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_color_transform_FIELD_READER FALSE
#define BIND_JpegCompressStruct_color_transform_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_color_transform_FIELD_READER FALSE
#define BIND_JpegCompressStruct_color_transform_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_comp_info_FIELD_READER FALSE
#define BIND_JpegCompressStruct_comp_info_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_comp_info_FIELD_READER FALSE
#define BIND_JpegCompressStruct_comp_info_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_comps_in_scan_FIELD_READER FALSE
#define BIND_JpegCompressStruct_comps_in_scan_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_comps_in_scan_FIELD_READER FALSE
#define BIND_JpegCompressStruct_comps_in_scan_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_cur_comp_info_FIELD_READER FALSE
#define BIND_JpegCompressStruct_cur_comp_info_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_cur_comp_info_FIELD_READER FALSE
#define BIND_JpegCompressStruct_cur_comp_info_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_data_precision_FIELD_READER FALSE
#define BIND_JpegCompressStruct_data_precision_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_data_precision_FIELD_READER FALSE
#define BIND_JpegCompressStruct_data_precision_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_dc_huff_tbl_ptrs_FIELD_READER FALSE
#define BIND_JpegCompressStruct_dc_huff_tbl_ptrs_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_dc_huff_tbl_ptrs_FIELD_READER FALSE
#define BIND_JpegCompressStruct_dc_huff_tbl_ptrs_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_dct_method_FIELD_READER FALSE
#define BIND_JpegCompressStruct_dct_method_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_dct_method_FIELD_READER FALSE
#define BIND_JpegCompressStruct_dct_method_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_density_unit_FIELD_READER FALSE
#define BIND_JpegCompressStruct_density_unit_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_density_unit_FIELD_READER FALSE
#define BIND_JpegCompressStruct_density_unit_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_dest_FIELD_READER FALSE
#define BIND_JpegCompressStruct_dest_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_dest_FIELD_READER FALSE
#define BIND_JpegCompressStruct_dest_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_do_fancy_downsampling_FIELD_READER FALSE
#define BIND_JpegCompressStruct_do_fancy_downsampling_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_do_fancy_downsampling_FIELD_READER FALSE
#define BIND_JpegCompressStruct_do_fancy_downsampling_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_downsample_FIELD_READER FALSE
#define BIND_JpegCompressStruct_downsample_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_downsample_FIELD_READER FALSE
#define BIND_JpegCompressStruct_downsample_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_entropy_FIELD_READER FALSE
#define BIND_JpegCompressStruct_entropy_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_entropy_FIELD_READER FALSE
#define BIND_JpegCompressStruct_entropy_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_fdct_FIELD_READER FALSE
#define BIND_JpegCompressStruct_fdct_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_fdct_FIELD_READER FALSE
#define BIND_JpegCompressStruct_fdct_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_image_height_FIELD_READER FALSE
#define BIND_JpegCompressStruct_image_height_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_image_height_FIELD_READER FALSE
#define BIND_JpegCompressStruct_image_height_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_image_width_FIELD_READER FALSE
#define BIND_JpegCompressStruct_image_width_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_image_width_FIELD_READER FALSE
#define BIND_JpegCompressStruct_image_width_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_in_color_space_FIELD_READER FALSE
#define BIND_JpegCompressStruct_in_color_space_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_in_color_space_FIELD_READER FALSE
#define BIND_JpegCompressStruct_in_color_space_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_input_components_FIELD_READER FALSE
#define BIND_JpegCompressStruct_input_components_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_input_components_FIELD_READER FALSE
#define BIND_JpegCompressStruct_input_components_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_input_gamma_FIELD_READER FALSE
#define BIND_JpegCompressStruct_input_gamma_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_input_gamma_FIELD_READER FALSE
#define BIND_JpegCompressStruct_input_gamma_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_jpeg_color_space_FIELD_READER FALSE
#define BIND_JpegCompressStruct_jpeg_color_space_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_jpeg_color_space_FIELD_READER FALSE
#define BIND_JpegCompressStruct_jpeg_color_space_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_jpeg_height_FIELD_READER FALSE
#define BIND_JpegCompressStruct_jpeg_height_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_jpeg_height_FIELD_READER FALSE
#define BIND_JpegCompressStruct_jpeg_height_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_jpeg_width_FIELD_READER FALSE
#define BIND_JpegCompressStruct_jpeg_width_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_jpeg_width_FIELD_READER FALSE
#define BIND_JpegCompressStruct_jpeg_width_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_lim_Se_FIELD_READER FALSE
#define BIND_JpegCompressStruct_lim_Se_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_lim_Se_FIELD_READER FALSE
#define BIND_JpegCompressStruct_lim_Se_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_main_FIELD_READER FALSE
#define BIND_JpegCompressStruct_main_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_main_FIELD_READER FALSE
#define BIND_JpegCompressStruct_main_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_marker_FIELD_READER FALSE
#define BIND_JpegCompressStruct_marker_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_marker_FIELD_READER FALSE
#define BIND_JpegCompressStruct_marker_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_master_FIELD_READER FALSE
#define BIND_JpegCompressStruct_master_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_master_FIELD_READER FALSE
#define BIND_JpegCompressStruct_master_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_max_h_samp_factor_FIELD_READER FALSE
#define BIND_JpegCompressStruct_max_h_samp_factor_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_max_h_samp_factor_FIELD_READER FALSE
#define BIND_JpegCompressStruct_max_h_samp_factor_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_max_v_samp_factor_FIELD_READER FALSE
#define BIND_JpegCompressStruct_max_v_samp_factor_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_max_v_samp_factor_FIELD_READER FALSE
#define BIND_JpegCompressStruct_max_v_samp_factor_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_min_DCT_h_scaled_size_FIELD_READER FALSE
#define BIND_JpegCompressStruct_min_DCT_h_scaled_size_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_min_DCT_h_scaled_size_FIELD_READER FALSE
#define BIND_JpegCompressStruct_min_DCT_h_scaled_size_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_min_DCT_v_scaled_size_FIELD_READER FALSE
#define BIND_JpegCompressStruct_min_DCT_v_scaled_size_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_min_DCT_v_scaled_size_FIELD_READER FALSE
#define BIND_JpegCompressStruct_min_DCT_v_scaled_size_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_natural_order_FIELD_READER FALSE
#define BIND_JpegCompressStruct_natural_order_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_natural_order_FIELD_READER FALSE
#define BIND_JpegCompressStruct_natural_order_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_next_scanline_FIELD_READER FALSE
#define BIND_JpegCompressStruct_next_scanline_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_next_scanline_FIELD_READER FALSE
#define BIND_JpegCompressStruct_next_scanline_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_num_components_FIELD_READER FALSE
#define BIND_JpegCompressStruct_num_components_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_num_components_FIELD_READER FALSE
#define BIND_JpegCompressStruct_num_components_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_num_scans_FIELD_READER FALSE
#define BIND_JpegCompressStruct_num_scans_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_num_scans_FIELD_READER FALSE
#define BIND_JpegCompressStruct_num_scans_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_optimize_coding_FIELD_READER FALSE
#define BIND_JpegCompressStruct_optimize_coding_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_optimize_coding_FIELD_READER FALSE
#define BIND_JpegCompressStruct_optimize_coding_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_prep_FIELD_READER FALSE
#define BIND_JpegCompressStruct_prep_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_prep_FIELD_READER FALSE
#define BIND_JpegCompressStruct_prep_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_progressive_mode_FIELD_READER FALSE
#define BIND_JpegCompressStruct_progressive_mode_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_progressive_mode_FIELD_READER FALSE
#define BIND_JpegCompressStruct_progressive_mode_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_q_scale_factor_FIELD_READER FALSE
#define BIND_JpegCompressStruct_q_scale_factor_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_q_scale_factor_FIELD_READER FALSE
#define BIND_JpegCompressStruct_q_scale_factor_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_quant_tbl_ptrs_FIELD_READER FALSE
#define BIND_JpegCompressStruct_quant_tbl_ptrs_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_quant_tbl_ptrs_FIELD_READER FALSE
#define BIND_JpegCompressStruct_quant_tbl_ptrs_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_raw_data_in_FIELD_READER FALSE
#define BIND_JpegCompressStruct_raw_data_in_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_raw_data_in_FIELD_READER FALSE
#define BIND_JpegCompressStruct_raw_data_in_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_restart_in_rows_FIELD_READER FALSE
#define BIND_JpegCompressStruct_restart_in_rows_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_restart_in_rows_FIELD_READER FALSE
#define BIND_JpegCompressStruct_restart_in_rows_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_restart_interval_FIELD_READER FALSE
#define BIND_JpegCompressStruct_restart_interval_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_restart_interval_FIELD_READER FALSE
#define BIND_JpegCompressStruct_restart_interval_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_scale_denom_FIELD_READER FALSE
#define BIND_JpegCompressStruct_scale_denom_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_scale_denom_FIELD_READER FALSE
#define BIND_JpegCompressStruct_scale_denom_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_scale_num_FIELD_READER FALSE
#define BIND_JpegCompressStruct_scale_num_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_scale_num_FIELD_READER FALSE
#define BIND_JpegCompressStruct_scale_num_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_scan_info_FIELD_READER FALSE
#define BIND_JpegCompressStruct_scan_info_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_scan_info_FIELD_READER FALSE
#define BIND_JpegCompressStruct_scan_info_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_script_space_FIELD_READER FALSE
#define BIND_JpegCompressStruct_script_space_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_script_space_FIELD_READER FALSE
#define BIND_JpegCompressStruct_script_space_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_script_space_size_FIELD_READER FALSE
#define BIND_JpegCompressStruct_script_space_size_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_script_space_size_FIELD_READER FALSE
#define BIND_JpegCompressStruct_script_space_size_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_smoothing_factor_FIELD_READER FALSE
#define BIND_JpegCompressStruct_smoothing_factor_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_smoothing_factor_FIELD_READER FALSE
#define BIND_JpegCompressStruct_smoothing_factor_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_total_iMCU_rows_FIELD_READER FALSE
#define BIND_JpegCompressStruct_total_iMCU_rows_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_total_iMCU_rows_FIELD_READER FALSE
#define BIND_JpegCompressStruct_total_iMCU_rows_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_write_Adobe_marker_FIELD_READER FALSE
#define BIND_JpegCompressStruct_write_Adobe_marker_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_write_Adobe_marker_FIELD_READER FALSE
#define BIND_JpegCompressStruct_write_Adobe_marker_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_write_JFIF_header_FIELD_READER FALSE
#define BIND_JpegCompressStruct_write_JFIF_header_FIELD_WRITER FALSE
#define BIND_JpegCompressStruct_write_JFIF_header_FIELD_READER FALSE
#define BIND_JpegCompressStruct_write_JFIF_header_FIELD_WRITER FALSE

#define BIND_JpegDCoefController_TYPE TRUE
#define BIND_JpegDCoefController_INITIALIZE FALSE
#define BIND_JpegDCoefController__FIELD_READER FALSE
#define BIND_JpegDCoefController__FIELD_WRITER FALSE
#define BIND_JpegDCoefController__FIELD_READER FALSE
#define BIND_JpegDCoefController__FIELD_WRITER FALSE
#define BIND_JpegDCoefController__FIELD_READER FALSE
#define BIND_JpegDCoefController__FIELD_WRITER FALSE
#define BIND_JpegDCoefController__FIELD_READER FALSE
#define BIND_JpegDCoefController__FIELD_WRITER FALSE
#define BIND_JpegDCoefController_coef_arrays_FIELD_READER FALSE
#define BIND_JpegDCoefController_coef_arrays_FIELD_WRITER FALSE

#define BIND_JpegDMainController_TYPE TRUE
#define BIND_JpegDMainController_INITIALIZE FALSE
#define BIND_JpegDMainController__FIELD_READER FALSE
#define BIND_JpegDMainController__FIELD_WRITER FALSE
#define BIND_JpegDMainController__FIELD_READER FALSE
#define BIND_JpegDMainController__FIELD_WRITER FALSE

#define BIND_JpegDPostController_TYPE TRUE
#define BIND_JpegDPostController_INITIALIZE FALSE
#define BIND_JpegDPostController__FIELD_READER FALSE
#define BIND_JpegDPostController__FIELD_WRITER FALSE
#define BIND_JpegDPostController__FIELD_READER FALSE
#define BIND_JpegDPostController__FIELD_WRITER FALSE

#define BIND_JpegDecompMaster_TYPE TRUE
#define BIND_JpegDecompMaster_INITIALIZE FALSE
#define BIND_JpegDecompMaster__FIELD_READER FALSE
#define BIND_JpegDecompMaster__FIELD_WRITER FALSE
#define BIND_JpegDecompMaster__FIELD_READER FALSE
#define BIND_JpegDecompMaster__FIELD_WRITER FALSE
#define BIND_JpegDecompMaster_is_dummy_pass_FIELD_READER FALSE
#define BIND_JpegDecompMaster_is_dummy_pass_FIELD_WRITER FALSE

#define BIND_JpegDecompressStruct_TYPE TRUE
#define BIND_JpegDecompressStruct_INITIALIZE FALSE
#define BIND_JpegDecompressStruct_Adobe_transform_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_Adobe_transform_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_Adobe_transform_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_Adobe_transform_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_Ah_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_Ah_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_Ah_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_Ah_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_Al_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_Al_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_Al_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_Al_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_CCIR601_sampling_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_CCIR601_sampling_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_CCIR601_sampling_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_CCIR601_sampling_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_JFIF_major_version_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_JFIF_major_version_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_JFIF_major_version_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_JFIF_major_version_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_JFIF_minor_version_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_JFIF_minor_version_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_JFIF_minor_version_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_JFIF_minor_version_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_MCU_membership_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_MCU_membership_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_MCU_membership_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_MCU_membership_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_MCU_rows_in_scan_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_MCU_rows_in_scan_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_MCU_rows_in_scan_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_MCU_rows_in_scan_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_MCUs_per_row_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_MCUs_per_row_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_MCUs_per_row_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_MCUs_per_row_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_Se_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_Se_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_Se_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_Se_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_Ss_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_Ss_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_Ss_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_Ss_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_X_density_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_X_density_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_X_density_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_X_density_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_Y_density_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_Y_density_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_Y_density_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_Y_density_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_ac_huff_tbl_ptrs_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_ac_huff_tbl_ptrs_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_ac_huff_tbl_ptrs_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_ac_huff_tbl_ptrs_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_actual_number_of_colors_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_actual_number_of_colors_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_actual_number_of_colors_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_actual_number_of_colors_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_arith_ac_K_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_arith_ac_K_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_arith_ac_K_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_arith_ac_K_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_arith_code_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_arith_code_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_arith_code_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_arith_code_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_arith_dc_L_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_arith_dc_L_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_arith_dc_L_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_arith_dc_L_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_arith_dc_U_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_arith_dc_U_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_arith_dc_U_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_arith_dc_U_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_block_size_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_block_size_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_block_size_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_block_size_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_blocks_in_MCU_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_blocks_in_MCU_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_blocks_in_MCU_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_blocks_in_MCU_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_buffered_image_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_buffered_image_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_buffered_image_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_buffered_image_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_cconvert_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_cconvert_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_cconvert_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_cconvert_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_coef_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_coef_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_coef_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_coef_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_coef_bits_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_coef_bits_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_coef_bits_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_coef_bits_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_color_transform_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_color_transform_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_color_transform_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_color_transform_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_colormap_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_colormap_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_colormap_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_colormap_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_comp_info_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_comp_info_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_comp_info_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_comp_info_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_comps_in_scan_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_comps_in_scan_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_comps_in_scan_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_comps_in_scan_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_cquantize_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_cquantize_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_cquantize_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_cquantize_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_cur_comp_info_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_cur_comp_info_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_cur_comp_info_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_cur_comp_info_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_data_precision_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_data_precision_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_data_precision_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_data_precision_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_dc_huff_tbl_ptrs_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_dc_huff_tbl_ptrs_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_dc_huff_tbl_ptrs_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_dc_huff_tbl_ptrs_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_dct_method_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_dct_method_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_dct_method_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_dct_method_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_density_unit_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_density_unit_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_density_unit_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_density_unit_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_desired_number_of_colors_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_desired_number_of_colors_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_desired_number_of_colors_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_desired_number_of_colors_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_dither_mode_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_dither_mode_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_dither_mode_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_dither_mode_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_do_block_smoothing_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_do_block_smoothing_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_do_block_smoothing_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_do_block_smoothing_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_do_fancy_upsampling_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_do_fancy_upsampling_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_do_fancy_upsampling_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_do_fancy_upsampling_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_enable_1pass_quant_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_enable_1pass_quant_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_enable_1pass_quant_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_enable_1pass_quant_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_enable_2pass_quant_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_enable_2pass_quant_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_enable_2pass_quant_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_enable_2pass_quant_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_enable_external_quant_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_enable_external_quant_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_enable_external_quant_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_enable_external_quant_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_entropy_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_entropy_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_entropy_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_entropy_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_idct_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_idct_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_idct_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_idct_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_image_height_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_image_height_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_image_height_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_image_height_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_image_width_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_image_width_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_image_width_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_image_width_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_input_iMCU_row_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_input_iMCU_row_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_input_iMCU_row_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_input_iMCU_row_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_input_scan_number_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_input_scan_number_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_input_scan_number_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_input_scan_number_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_inputctl_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_inputctl_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_inputctl_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_inputctl_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_is_baseline_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_is_baseline_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_is_baseline_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_is_baseline_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_jpeg_color_space_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_jpeg_color_space_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_jpeg_color_space_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_jpeg_color_space_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_lim_Se_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_lim_Se_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_lim_Se_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_lim_Se_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_main_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_main_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_main_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_main_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_marker_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_marker_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_marker_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_marker_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_marker_list_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_marker_list_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_marker_list_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_marker_list_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_master_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_master_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_master_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_master_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_max_h_samp_factor_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_max_h_samp_factor_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_max_h_samp_factor_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_max_h_samp_factor_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_max_v_samp_factor_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_max_v_samp_factor_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_max_v_samp_factor_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_max_v_samp_factor_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_min_DCT_h_scaled_size_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_min_DCT_h_scaled_size_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_min_DCT_h_scaled_size_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_min_DCT_h_scaled_size_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_min_DCT_v_scaled_size_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_min_DCT_v_scaled_size_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_min_DCT_v_scaled_size_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_min_DCT_v_scaled_size_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_natural_order_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_natural_order_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_natural_order_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_natural_order_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_num_components_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_num_components_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_num_components_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_num_components_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_out_color_components_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_out_color_components_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_out_color_components_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_out_color_components_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_out_color_space_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_out_color_space_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_out_color_space_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_out_color_space_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_output_components_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_output_components_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_output_components_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_output_components_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_output_gamma_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_output_gamma_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_output_gamma_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_output_gamma_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_output_height_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_output_height_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_output_height_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_output_height_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_output_iMCU_row_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_output_iMCU_row_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_output_iMCU_row_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_output_iMCU_row_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_output_scan_number_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_output_scan_number_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_output_scan_number_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_output_scan_number_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_output_scanline_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_output_scanline_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_output_scanline_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_output_scanline_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_output_width_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_output_width_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_output_width_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_output_width_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_post_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_post_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_post_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_post_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_progressive_mode_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_progressive_mode_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_progressive_mode_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_progressive_mode_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_quant_tbl_ptrs_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_quant_tbl_ptrs_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_quant_tbl_ptrs_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_quant_tbl_ptrs_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_quantize_colors_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_quantize_colors_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_quantize_colors_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_quantize_colors_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_raw_data_out_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_raw_data_out_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_raw_data_out_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_raw_data_out_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_rec_outbuf_height_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_rec_outbuf_height_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_rec_outbuf_height_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_rec_outbuf_height_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_restart_interval_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_restart_interval_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_restart_interval_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_restart_interval_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_sample_range_limit_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_sample_range_limit_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_sample_range_limit_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_sample_range_limit_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_saw_Adobe_marker_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_saw_Adobe_marker_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_saw_Adobe_marker_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_saw_Adobe_marker_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_saw_JFIF_marker_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_saw_JFIF_marker_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_saw_JFIF_marker_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_saw_JFIF_marker_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_scale_denom_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_scale_denom_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_scale_denom_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_scale_denom_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_scale_num_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_scale_num_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_scale_num_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_scale_num_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_src_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_src_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_src_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_src_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_total_iMCU_rows_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_total_iMCU_rows_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_total_iMCU_rows_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_total_iMCU_rows_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_two_pass_quantize_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_two_pass_quantize_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_two_pass_quantize_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_two_pass_quantize_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_unread_marker_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_unread_marker_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_unread_marker_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_unread_marker_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_upsample_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_upsample_FIELD_WRITER FALSE
#define BIND_JpegDecompressStruct_upsample_FIELD_READER FALSE
#define BIND_JpegDecompressStruct_upsample_FIELD_WRITER FALSE

#define BIND_JpegDestinationMgr_TYPE TRUE
#define BIND_JpegDestinationMgr_INITIALIZE FALSE
#define BIND_JpegDestinationMgr_free_in_buffer_FIELD_READER FALSE
#define BIND_JpegDestinationMgr_free_in_buffer_FIELD_WRITER FALSE
#define BIND_JpegDestinationMgr_free_in_buffer_FIELD_READER FALSE
#define BIND_JpegDestinationMgr_free_in_buffer_FIELD_WRITER FALSE
#define BIND_JpegDestinationMgr_next_output_byte_FIELD_READER FALSE
#define BIND_JpegDestinationMgr_next_output_byte_FIELD_WRITER FALSE
#define BIND_JpegDestinationMgr_next_output_byte_FIELD_READER FALSE
#define BIND_JpegDestinationMgr_next_output_byte_FIELD_WRITER FALSE

#define BIND_JpegDownsampler_TYPE TRUE
#define BIND_JpegDownsampler_INITIALIZE FALSE
#define BIND_JpegDownsampler_JMETHOD_FIELD_READER FALSE
#define BIND_JpegDownsampler_JMETHOD_FIELD_WRITER FALSE
#define BIND_JpegDownsampler_need_context_rows_FIELD_READER FALSE
#define BIND_JpegDownsampler_need_context_rows_FIELD_WRITER FALSE

#define BIND_JpegEntropyDecoder_TYPE TRUE
#define BIND_JpegEntropyDecoder_INITIALIZE FALSE
#define BIND_JpegEntropyDecoder__FIELD_READER FALSE
#define BIND_JpegEntropyDecoder__FIELD_WRITER FALSE
#define BIND_JpegEntropyDecoder_boolean_FIELD_READER FALSE
#define BIND_JpegEntropyDecoder_boolean_FIELD_WRITER FALSE

#define BIND_JpegEntropyEncoder_TYPE TRUE
#define BIND_JpegEntropyEncoder_INITIALIZE FALSE
#define BIND_JpegEntropyEncoder__FIELD_READER FALSE
#define BIND_JpegEntropyEncoder__FIELD_WRITER FALSE
#define BIND_JpegEntropyEncoder__FIELD_READER FALSE
#define BIND_JpegEntropyEncoder__FIELD_WRITER FALSE
#define BIND_JpegEntropyEncoder_boolean_FIELD_READER FALSE
#define BIND_JpegEntropyEncoder_boolean_FIELD_WRITER FALSE

#define BIND_JpegErrorMgr_TYPE TRUE
#define BIND_JpegErrorMgr_INITIALIZE FALSE
#define BIND_JpegErrorMgr_addon_message_table_FIELD_READER FALSE
#define BIND_JpegErrorMgr_addon_message_table_FIELD_WRITER FALSE
#define BIND_JpegErrorMgr_addon_message_table_FIELD_READER FALSE
#define BIND_JpegErrorMgr_addon_message_table_FIELD_WRITER FALSE
#define BIND_JpegErrorMgr_first_addon_message_FIELD_READER FALSE
#define BIND_JpegErrorMgr_first_addon_message_FIELD_WRITER FALSE
#define BIND_JpegErrorMgr_first_addon_message_FIELD_READER FALSE
#define BIND_JpegErrorMgr_first_addon_message_FIELD_WRITER FALSE
#define BIND_JpegErrorMgr_jpeg_message_table_FIELD_READER FALSE
#define BIND_JpegErrorMgr_jpeg_message_table_FIELD_WRITER FALSE
#define BIND_JpegErrorMgr_jpeg_message_table_FIELD_READER FALSE
#define BIND_JpegErrorMgr_jpeg_message_table_FIELD_WRITER FALSE
#define BIND_JpegErrorMgr_last_addon_message_FIELD_READER FALSE
#define BIND_JpegErrorMgr_last_addon_message_FIELD_WRITER FALSE
#define BIND_JpegErrorMgr_last_addon_message_FIELD_READER FALSE
#define BIND_JpegErrorMgr_last_addon_message_FIELD_WRITER FALSE
#define BIND_JpegErrorMgr_last_jpeg_message_FIELD_READER FALSE
#define BIND_JpegErrorMgr_last_jpeg_message_FIELD_WRITER FALSE
#define BIND_JpegErrorMgr_last_jpeg_message_FIELD_READER FALSE
#define BIND_JpegErrorMgr_last_jpeg_message_FIELD_WRITER FALSE
#define BIND_JpegErrorMgr_msg_code_FIELD_READER FALSE
#define BIND_JpegErrorMgr_msg_code_FIELD_WRITER FALSE
#define BIND_JpegErrorMgr_msg_code_FIELD_READER FALSE
#define BIND_JpegErrorMgr_msg_code_FIELD_WRITER FALSE
#define BIND_JpegErrorMgr_msg_parm_FIELD_READER FALSE
#define BIND_JpegErrorMgr_msg_parm_FIELD_WRITER FALSE
#define BIND_JpegErrorMgr_msg_parm_FIELD_READER FALSE
#define BIND_JpegErrorMgr_msg_parm_FIELD_WRITER FALSE
#define BIND_JpegErrorMgr_num_warnings_FIELD_READER FALSE
#define BIND_JpegErrorMgr_num_warnings_FIELD_WRITER FALSE
#define BIND_JpegErrorMgr_num_warnings_FIELD_READER FALSE
#define BIND_JpegErrorMgr_num_warnings_FIELD_WRITER FALSE
#define BIND_JpegErrorMgr_trace_level_FIELD_READER FALSE
#define BIND_JpegErrorMgr_trace_level_FIELD_WRITER FALSE
#define BIND_JpegErrorMgr_trace_level_FIELD_READER FALSE
#define BIND_JpegErrorMgr_trace_level_FIELD_WRITER FALSE

#define BIND_JpegForwardDct_TYPE TRUE
#define BIND_JpegForwardDct_INITIALIZE FALSE
#define BIND_JpegForwardDct__FIELD_READER FALSE
#define BIND_JpegForwardDct__FIELD_WRITER FALSE
#define BIND_JpegForwardDct_forward_DCT_FIELD_READER FALSE
#define BIND_JpegForwardDct_forward_DCT_FIELD_WRITER FALSE

#define BIND_JpegInputController_TYPE TRUE
#define BIND_JpegInputController_INITIALIZE FALSE
#define BIND_JpegInputController__FIELD_READER FALSE
#define BIND_JpegInputController__FIELD_WRITER FALSE
#define BIND_JpegInputController__FIELD_READER FALSE
#define BIND_JpegInputController__FIELD_WRITER FALSE
#define BIND_JpegInputController__FIELD_READER FALSE
#define BIND_JpegInputController__FIELD_WRITER FALSE
#define BIND_JpegInputController__FIELD_READER FALSE
#define BIND_JpegInputController__FIELD_WRITER FALSE
#define BIND_JpegInputController_eoi_reached_FIELD_READER FALSE
#define BIND_JpegInputController_eoi_reached_FIELD_WRITER FALSE
#define BIND_JpegInputController_has_multiple_scans_FIELD_READER FALSE
#define BIND_JpegInputController_has_multiple_scans_FIELD_WRITER FALSE

#define BIND_JpegInverseDct_TYPE TRUE
#define BIND_JpegInverseDct_INITIALIZE FALSE
#define BIND_JpegInverseDct__FIELD_READER FALSE
#define BIND_JpegInverseDct__FIELD_WRITER FALSE
#define BIND_JpegInverseDct_inverse_DCT_FIELD_READER FALSE
#define BIND_JpegInverseDct_inverse_DCT_FIELD_WRITER FALSE

#define BIND_JpegMarkerReader_TYPE TRUE
#define BIND_JpegMarkerReader_INITIALIZE FALSE
#define BIND_JpegMarkerReader__FIELD_READER FALSE
#define BIND_JpegMarkerReader__FIELD_WRITER FALSE
#define BIND_JpegMarkerReader__FIELD_READER FALSE
#define BIND_JpegMarkerReader__FIELD_WRITER FALSE
#define BIND_JpegMarkerReader_discarded_bytes_FIELD_READER FALSE
#define BIND_JpegMarkerReader_discarded_bytes_FIELD_WRITER FALSE
#define BIND_JpegMarkerReader_next_restart_num_FIELD_READER FALSE
#define BIND_JpegMarkerReader_next_restart_num_FIELD_WRITER FALSE
#define BIND_JpegMarkerReader_read_restart_marker_FIELD_READER FALSE
#define BIND_JpegMarkerReader_read_restart_marker_FIELD_WRITER FALSE
#define BIND_JpegMarkerReader_saw_SOF_FIELD_READER FALSE
#define BIND_JpegMarkerReader_saw_SOF_FIELD_WRITER FALSE
#define BIND_JpegMarkerReader_saw_SOI_FIELD_READER FALSE
#define BIND_JpegMarkerReader_saw_SOI_FIELD_WRITER FALSE

#define BIND_JpegMarkerStruct_TYPE TRUE
#define BIND_JpegMarkerStruct_INITIALIZE FALSE
#define BIND_JpegMarkerStruct_data_FIELD_READER FALSE
#define BIND_JpegMarkerStruct_data_FIELD_WRITER FALSE
#define BIND_JpegMarkerStruct_data_FIELD_READER FALSE
#define BIND_JpegMarkerStruct_data_FIELD_WRITER FALSE
#define BIND_JpegMarkerStruct_data_length_FIELD_READER FALSE
#define BIND_JpegMarkerStruct_data_length_FIELD_WRITER FALSE
#define BIND_JpegMarkerStruct_data_length_FIELD_READER FALSE
#define BIND_JpegMarkerStruct_data_length_FIELD_WRITER FALSE
#define BIND_JpegMarkerStruct_marker_FIELD_READER FALSE
#define BIND_JpegMarkerStruct_marker_FIELD_WRITER FALSE
#define BIND_JpegMarkerStruct_marker_FIELD_READER FALSE
#define BIND_JpegMarkerStruct_marker_FIELD_WRITER FALSE
#define BIND_JpegMarkerStruct_next_FIELD_READER FALSE
#define BIND_JpegMarkerStruct_next_FIELD_WRITER FALSE
#define BIND_JpegMarkerStruct_next_FIELD_READER FALSE
#define BIND_JpegMarkerStruct_next_FIELD_WRITER FALSE
#define BIND_JpegMarkerStruct_original_length_FIELD_READER FALSE
#define BIND_JpegMarkerStruct_original_length_FIELD_WRITER FALSE
#define BIND_JpegMarkerStruct_original_length_FIELD_READER FALSE
#define BIND_JpegMarkerStruct_original_length_FIELD_WRITER FALSE

#define BIND_JpegMarkerWriter_TYPE TRUE
#define BIND_JpegMarkerWriter_INITIALIZE FALSE
#define BIND_JpegMarkerWriter__FIELD_READER FALSE
#define BIND_JpegMarkerWriter__FIELD_WRITER FALSE
#define BIND_JpegMarkerWriter__FIELD_READER FALSE
#define BIND_JpegMarkerWriter__FIELD_WRITER FALSE
#define BIND_JpegMarkerWriter__FIELD_READER FALSE
#define BIND_JpegMarkerWriter__FIELD_WRITER FALSE
#define BIND_JpegMarkerWriter__FIELD_READER FALSE
#define BIND_JpegMarkerWriter__FIELD_WRITER FALSE
#define BIND_JpegMarkerWriter__FIELD_READER FALSE
#define BIND_JpegMarkerWriter__FIELD_WRITER FALSE
#define BIND_JpegMarkerWriter__FIELD_READER FALSE
#define BIND_JpegMarkerWriter__FIELD_WRITER FALSE
#define BIND_JpegMarkerWriter__FIELD_READER FALSE
#define BIND_JpegMarkerWriter__FIELD_WRITER FALSE

#define BIND_JpegMemoryMgr_TYPE TRUE
#define BIND_JpegMemoryMgr_INITIALIZE FALSE
#define BIND_JpegMemoryMgr_max_alloc_chunk_FIELD_READER FALSE
#define BIND_JpegMemoryMgr_max_alloc_chunk_FIELD_WRITER FALSE
#define BIND_JpegMemoryMgr_max_alloc_chunk_FIELD_READER FALSE
#define BIND_JpegMemoryMgr_max_alloc_chunk_FIELD_WRITER FALSE
#define BIND_JpegMemoryMgr_max_memory_to_use_FIELD_READER FALSE
#define BIND_JpegMemoryMgr_max_memory_to_use_FIELD_WRITER FALSE
#define BIND_JpegMemoryMgr_max_memory_to_use_FIELD_READER FALSE
#define BIND_JpegMemoryMgr_max_memory_to_use_FIELD_WRITER FALSE

#define BIND_JpegProgressMgr_TYPE TRUE
#define BIND_JpegProgressMgr_INITIALIZE FALSE
#define BIND_JpegProgressMgr_completed_passes_FIELD_READER FALSE
#define BIND_JpegProgressMgr_completed_passes_FIELD_WRITER FALSE
#define BIND_JpegProgressMgr_completed_passes_FIELD_READER FALSE
#define BIND_JpegProgressMgr_completed_passes_FIELD_WRITER FALSE
#define BIND_JpegProgressMgr_pass_counter_FIELD_READER FALSE
#define BIND_JpegProgressMgr_pass_counter_FIELD_WRITER FALSE
#define BIND_JpegProgressMgr_pass_counter_FIELD_READER FALSE
#define BIND_JpegProgressMgr_pass_counter_FIELD_WRITER FALSE
#define BIND_JpegProgressMgr_pass_limit_FIELD_READER FALSE
#define BIND_JpegProgressMgr_pass_limit_FIELD_WRITER FALSE
#define BIND_JpegProgressMgr_pass_limit_FIELD_READER FALSE
#define BIND_JpegProgressMgr_pass_limit_FIELD_WRITER FALSE
#define BIND_JpegProgressMgr_total_passes_FIELD_READER FALSE
#define BIND_JpegProgressMgr_total_passes_FIELD_WRITER FALSE
#define BIND_JpegProgressMgr_total_passes_FIELD_READER FALSE
#define BIND_JpegProgressMgr_total_passes_FIELD_WRITER FALSE

#define BIND_JpegSourceMgr_TYPE TRUE
#define BIND_JpegSourceMgr_INITIALIZE FALSE
#define BIND_JpegSourceMgr_bytes_in_buffer_FIELD_READER FALSE
#define BIND_JpegSourceMgr_bytes_in_buffer_FIELD_WRITER FALSE
#define BIND_JpegSourceMgr_bytes_in_buffer_FIELD_READER FALSE
#define BIND_JpegSourceMgr_bytes_in_buffer_FIELD_WRITER FALSE
#define BIND_JpegSourceMgr_next_input_byte_FIELD_READER FALSE
#define BIND_JpegSourceMgr_next_input_byte_FIELD_WRITER FALSE
#define BIND_JpegSourceMgr_next_input_byte_FIELD_READER FALSE
#define BIND_JpegSourceMgr_next_input_byte_FIELD_WRITER FALSE

#define BIND_JpegUpsampler_TYPE TRUE
#define BIND_JpegUpsampler_INITIALIZE FALSE
#define BIND_JpegUpsampler__FIELD_READER FALSE
#define BIND_JpegUpsampler__FIELD_WRITER FALSE
#define BIND_JpegUpsampler__FIELD_READER FALSE
#define BIND_JpegUpsampler__FIELD_WRITER FALSE
#define BIND_JpegUpsampler_need_context_rows_FIELD_READER FALSE
#define BIND_JpegUpsampler_need_context_rows_FIELD_WRITER FALSE

#define BIND_JvirtBarrayControl_TYPE TRUE
#define BIND_JvirtBarrayControl_INITIALIZE FALSE

#define BIND_JvirtSarrayControl_TYPE TRUE
#define BIND_JvirtSarrayControl_INITIALIZE FALSE

#define BIND_Metadata_TYPE TRUE
#define BIND_Metadata_INITIALIZE FALSE
#define BIND_Metadata_exif_FIELD_READER FALSE
#define BIND_Metadata_exif_FIELD_WRITER FALSE
#define BIND_Metadata_iccp_FIELD_READER FALSE
#define BIND_Metadata_iccp_FIELD_WRITER FALSE
#define BIND_Metadata_xmp_FIELD_READER FALSE
#define BIND_Metadata_xmp_FIELD_WRITER FALSE

#define BIND_MetadataPayload_TYPE TRUE
#define BIND_MetadataPayload_INITIALIZE FALSE
#define BIND_MetadataPayload_bytes_FIELD_READER FALSE
#define BIND_MetadataPayload_bytes_FIELD_WRITER FALSE
#define BIND_MetadataPayload_size_FIELD_READER FALSE
#define BIND_MetadataPayload_size_FIELD_WRITER FALSE

#define BIND_MonitorInfo_TYPE TRUE
#define BIND_MonitorInfo_INITIALIZE FALSE
#define BIND_MonitorInfo_active_off_FIELD_READER FALSE
#define BIND_MonitorInfo_active_off_FIELD_WRITER FALSE
#define BIND_MonitorInfo_aspect_ratio_FIELD_READER FALSE
#define BIND_MonitorInfo_aspect_ratio_FIELD_WRITER FALSE
#define BIND_MonitorInfo_blue_x_FIELD_READER FALSE
#define BIND_MonitorInfo_blue_x_FIELD_WRITER FALSE
#define BIND_MonitorInfo_blue_y_FIELD_READER FALSE
#define BIND_MonitorInfo_blue_y_FIELD_WRITER FALSE
#define BIND_MonitorInfo_checksum_FIELD_READER FALSE
#define BIND_MonitorInfo_checksum_FIELD_WRITER FALSE
#define BIND_MonitorInfo_continuous_frequency_FIELD_READER FALSE
#define BIND_MonitorInfo_continuous_frequency_FIELD_WRITER FALSE
#define BIND_MonitorInfo_detailed_timings_FIELD_READER FALSE
#define BIND_MonitorInfo_detailed_timings_FIELD_WRITER FALSE
#define BIND_MonitorInfo_dsc_product_name_FIELD_READER FALSE
#define BIND_MonitorInfo_dsc_product_name_FIELD_WRITER FALSE
#define BIND_MonitorInfo_dsc_serial_number_FIELD_READER FALSE
#define BIND_MonitorInfo_dsc_serial_number_FIELD_WRITER FALSE
#define BIND_MonitorInfo_dsc_string_FIELD_READER FALSE
#define BIND_MonitorInfo_dsc_string_FIELD_WRITER FALSE
#define BIND_MonitorInfo_established_FIELD_READER FALSE
#define BIND_MonitorInfo_established_FIELD_WRITER FALSE
#define BIND_MonitorInfo_gamma_FIELD_READER FALSE
#define BIND_MonitorInfo_gamma_FIELD_WRITER FALSE
#define BIND_MonitorInfo_green_x_FIELD_READER FALSE
#define BIND_MonitorInfo_green_x_FIELD_WRITER FALSE
#define BIND_MonitorInfo_green_y_FIELD_READER FALSE
#define BIND_MonitorInfo_green_y_FIELD_WRITER FALSE
#define BIND_MonitorInfo_height_mm_FIELD_READER FALSE
#define BIND_MonitorInfo_height_mm_FIELD_WRITER FALSE
#define BIND_MonitorInfo_is_digital_FIELD_READER FALSE
#define BIND_MonitorInfo_is_digital_FIELD_WRITER FALSE
#define BIND_MonitorInfo_major_version_FIELD_READER FALSE
#define BIND_MonitorInfo_major_version_FIELD_WRITER FALSE
#define BIND_MonitorInfo_manufacturer_code_FIELD_READER FALSE
#define BIND_MonitorInfo_manufacturer_code_FIELD_WRITER FALSE
#define BIND_MonitorInfo_minor_version_FIELD_READER FALSE
#define BIND_MonitorInfo_minor_version_FIELD_WRITER FALSE
#define BIND_MonitorInfo_model_year_FIELD_READER FALSE
#define BIND_MonitorInfo_model_year_FIELD_WRITER FALSE
#define BIND_MonitorInfo_n_detailed_timings_FIELD_READER FALSE
#define BIND_MonitorInfo_n_detailed_timings_FIELD_WRITER FALSE
#define BIND_MonitorInfo_preferred_timing_includes_native_FIELD_READER FALSE
#define BIND_MonitorInfo_preferred_timing_includes_native_FIELD_WRITER FALSE
#define BIND_MonitorInfo_product_code_FIELD_READER FALSE
#define BIND_MonitorInfo_product_code_FIELD_WRITER FALSE
#define BIND_MonitorInfo_production_week_FIELD_READER FALSE
#define BIND_MonitorInfo_production_week_FIELD_WRITER FALSE
#define BIND_MonitorInfo_production_year_FIELD_READER FALSE
#define BIND_MonitorInfo_production_year_FIELD_WRITER FALSE
#define BIND_MonitorInfo_red_x_FIELD_READER FALSE
#define BIND_MonitorInfo_red_x_FIELD_WRITER FALSE
#define BIND_MonitorInfo_red_y_FIELD_READER FALSE
#define BIND_MonitorInfo_red_y_FIELD_WRITER FALSE
#define BIND_MonitorInfo_serial_number_FIELD_READER FALSE
#define BIND_MonitorInfo_serial_number_FIELD_WRITER FALSE
#define BIND_MonitorInfo_srgb_is_standard_FIELD_READER FALSE
#define BIND_MonitorInfo_srgb_is_standard_FIELD_WRITER FALSE
#define BIND_MonitorInfo_standard_FIELD_READER FALSE
#define BIND_MonitorInfo_standard_FIELD_WRITER FALSE
#define BIND_MonitorInfo_standby_FIELD_READER FALSE
#define BIND_MonitorInfo_standby_FIELD_WRITER FALSE
#define BIND_MonitorInfo_suspend_FIELD_READER FALSE
#define BIND_MonitorInfo_suspend_FIELD_WRITER FALSE
#define BIND_MonitorInfo_white_x_FIELD_READER FALSE
#define BIND_MonitorInfo_white_x_FIELD_WRITER FALSE
#define BIND_MonitorInfo_white_y_FIELD_READER FALSE
#define BIND_MonitorInfo_white_y_FIELD_WRITER FALSE
#define BIND_MonitorInfo_width_mm_FIELD_READER FALSE
#define BIND_MonitorInfo_width_mm_FIELD_WRITER FALSE

#define BIND_PngColor16Struct_TYPE TRUE
#define BIND_PngColor16Struct_INITIALIZE FALSE
#define BIND_PngColor16Struct_blue_FIELD_READER FALSE
#define BIND_PngColor16Struct_blue_FIELD_WRITER FALSE
#define BIND_PngColor16Struct_blue_FIELD_READER FALSE
#define BIND_PngColor16Struct_blue_FIELD_WRITER FALSE
#define BIND_PngColor16Struct_gray_FIELD_READER FALSE
#define BIND_PngColor16Struct_gray_FIELD_WRITER FALSE
#define BIND_PngColor16Struct_gray_FIELD_READER FALSE
#define BIND_PngColor16Struct_gray_FIELD_WRITER FALSE
#define BIND_PngColor16Struct_green_FIELD_READER FALSE
#define BIND_PngColor16Struct_green_FIELD_WRITER FALSE
#define BIND_PngColor16Struct_green_FIELD_READER FALSE
#define BIND_PngColor16Struct_green_FIELD_WRITER FALSE
#define BIND_PngColor16Struct_index_FIELD_READER FALSE
#define BIND_PngColor16Struct_index_FIELD_WRITER FALSE
#define BIND_PngColor16Struct_index_FIELD_READER FALSE
#define BIND_PngColor16Struct_index_FIELD_WRITER FALSE
#define BIND_PngColor16Struct_red_FIELD_READER FALSE
#define BIND_PngColor16Struct_red_FIELD_WRITER FALSE
#define BIND_PngColor16Struct_red_FIELD_READER FALSE
#define BIND_PngColor16Struct_red_FIELD_WRITER FALSE

#define BIND_PngColor8Struct_TYPE TRUE
#define BIND_PngColor8Struct_INITIALIZE FALSE
#define BIND_PngColor8Struct_alpha_FIELD_READER FALSE
#define BIND_PngColor8Struct_alpha_FIELD_WRITER FALSE
#define BIND_PngColor8Struct_alpha_FIELD_READER FALSE
#define BIND_PngColor8Struct_alpha_FIELD_WRITER FALSE
#define BIND_PngColor8Struct_blue_FIELD_READER FALSE
#define BIND_PngColor8Struct_blue_FIELD_WRITER FALSE
#define BIND_PngColor8Struct_blue_FIELD_READER FALSE
#define BIND_PngColor8Struct_blue_FIELD_WRITER FALSE
#define BIND_PngColor8Struct_gray_FIELD_READER FALSE
#define BIND_PngColor8Struct_gray_FIELD_WRITER FALSE
#define BIND_PngColor8Struct_gray_FIELD_READER FALSE
#define BIND_PngColor8Struct_gray_FIELD_WRITER FALSE
#define BIND_PngColor8Struct_green_FIELD_READER FALSE
#define BIND_PngColor8Struct_green_FIELD_WRITER FALSE
#define BIND_PngColor8Struct_green_FIELD_READER FALSE
#define BIND_PngColor8Struct_green_FIELD_WRITER FALSE
#define BIND_PngColor8Struct_red_FIELD_READER FALSE
#define BIND_PngColor8Struct_red_FIELD_WRITER FALSE
#define BIND_PngColor8Struct_red_FIELD_READER FALSE
#define BIND_PngColor8Struct_red_FIELD_WRITER FALSE

#define BIND_PngColorStruct_TYPE TRUE
#define BIND_PngColorStruct_INITIALIZE FALSE
#define BIND_PngColorStruct_blue_FIELD_READER FALSE
#define BIND_PngColorStruct_blue_FIELD_WRITER FALSE
#define BIND_PngColorStruct_blue_FIELD_READER FALSE
#define BIND_PngColorStruct_blue_FIELD_WRITER FALSE
#define BIND_PngColorStruct_green_FIELD_READER FALSE
#define BIND_PngColorStruct_green_FIELD_WRITER FALSE
#define BIND_PngColorStruct_green_FIELD_READER FALSE
#define BIND_PngColorStruct_green_FIELD_WRITER FALSE
#define BIND_PngColorStruct_red_FIELD_READER FALSE
#define BIND_PngColorStruct_red_FIELD_WRITER FALSE
#define BIND_PngColorStruct_red_FIELD_READER FALSE
#define BIND_PngColorStruct_red_FIELD_WRITER FALSE

#define BIND_PngControl_TYPE TRUE
#define BIND_PngControl_INITIALIZE FALSE
#define BIND_PngControl_error_buf_FIELD_READER FALSE
#define BIND_PngControl_error_buf_FIELD_WRITER FALSE
#define BIND_PngControl_for_write_FIELD_READER FALSE
#define BIND_PngControl_for_write_FIELD_WRITER FALSE
#define BIND_PngControl_info_ptr_FIELD_READER FALSE
#define BIND_PngControl_info_ptr_FIELD_WRITER FALSE
#define BIND_PngControl_memory_FIELD_READER FALSE
#define BIND_PngControl_memory_FIELD_WRITER FALSE
#define BIND_PngControl_owned_file_FIELD_READER FALSE
#define BIND_PngControl_owned_file_FIELD_WRITER FALSE
#define BIND_PngControl_png_ptr_FIELD_READER FALSE
#define BIND_PngControl_png_ptr_FIELD_WRITER FALSE
#define BIND_PngControl_size_FIELD_READER FALSE
#define BIND_PngControl_size_FIELD_WRITER FALSE

#define BIND_PngInfoDef_TYPE TRUE
#define BIND_PngInfoDef_INITIALIZE FALSE
#define BIND_PngInfoDef_bit_depth_FIELD_READER FALSE
#define BIND_PngInfoDef_bit_depth_FIELD_WRITER FALSE
#define BIND_PngInfoDef_channels_FIELD_READER FALSE
#define BIND_PngInfoDef_channels_FIELD_WRITER FALSE
#define BIND_PngInfoDef_color_type_FIELD_READER FALSE
#define BIND_PngInfoDef_color_type_FIELD_WRITER FALSE
#define BIND_PngInfoDef_compression_type_FIELD_READER FALSE
#define BIND_PngInfoDef_compression_type_FIELD_WRITER FALSE
#define BIND_PngInfoDef_filter_type_FIELD_READER FALSE
#define BIND_PngInfoDef_filter_type_FIELD_WRITER FALSE
#define BIND_PngInfoDef_free_me_FIELD_READER FALSE
#define BIND_PngInfoDef_free_me_FIELD_WRITER FALSE
#define BIND_PngInfoDef_height_FIELD_READER FALSE
#define BIND_PngInfoDef_height_FIELD_WRITER FALSE
#define BIND_PngInfoDef_interlace_type_FIELD_READER FALSE
#define BIND_PngInfoDef_interlace_type_FIELD_WRITER FALSE
#define BIND_PngInfoDef_num_palette_FIELD_READER FALSE
#define BIND_PngInfoDef_num_palette_FIELD_WRITER FALSE
#define BIND_PngInfoDef_num_trans_FIELD_READER FALSE
#define BIND_PngInfoDef_num_trans_FIELD_WRITER FALSE
#define BIND_PngInfoDef_palette_FIELD_READER FALSE
#define BIND_PngInfoDef_palette_FIELD_WRITER FALSE
#define BIND_PngInfoDef_pixel_depth_FIELD_READER FALSE
#define BIND_PngInfoDef_pixel_depth_FIELD_WRITER FALSE
#define BIND_PngInfoDef_rowbytes_FIELD_READER FALSE
#define BIND_PngInfoDef_rowbytes_FIELD_WRITER FALSE
#define BIND_PngInfoDef_spare_byte_FIELD_READER FALSE
#define BIND_PngInfoDef_spare_byte_FIELD_WRITER FALSE
#define BIND_PngInfoDef_valid_FIELD_READER FALSE
#define BIND_PngInfoDef_valid_FIELD_WRITER FALSE
#define BIND_PngInfoDef_width_FIELD_READER FALSE
#define BIND_PngInfoDef_width_FIELD_WRITER FALSE

#define BIND_PngRowInfoStruct_TYPE TRUE
#define BIND_PngRowInfoStruct_INITIALIZE FALSE
#define BIND_PngRowInfoStruct_bit_depth_FIELD_READER FALSE
#define BIND_PngRowInfoStruct_bit_depth_FIELD_WRITER FALSE
#define BIND_PngRowInfoStruct_bit_depth_FIELD_READER FALSE
#define BIND_PngRowInfoStruct_bit_depth_FIELD_WRITER FALSE
#define BIND_PngRowInfoStruct_channels_FIELD_READER FALSE
#define BIND_PngRowInfoStruct_channels_FIELD_WRITER FALSE
#define BIND_PngRowInfoStruct_channels_FIELD_READER FALSE
#define BIND_PngRowInfoStruct_channels_FIELD_WRITER FALSE
#define BIND_PngRowInfoStruct_color_type_FIELD_READER FALSE
#define BIND_PngRowInfoStruct_color_type_FIELD_WRITER FALSE
#define BIND_PngRowInfoStruct_color_type_FIELD_READER FALSE
#define BIND_PngRowInfoStruct_color_type_FIELD_WRITER FALSE
#define BIND_PngRowInfoStruct_pixel_depth_FIELD_READER FALSE
#define BIND_PngRowInfoStruct_pixel_depth_FIELD_WRITER FALSE
#define BIND_PngRowInfoStruct_pixel_depth_FIELD_READER FALSE
#define BIND_PngRowInfoStruct_pixel_depth_FIELD_WRITER FALSE
#define BIND_PngRowInfoStruct_rowbytes_FIELD_READER FALSE
#define BIND_PngRowInfoStruct_rowbytes_FIELD_WRITER FALSE
#define BIND_PngRowInfoStruct_rowbytes_FIELD_READER FALSE
#define BIND_PngRowInfoStruct_rowbytes_FIELD_WRITER FALSE
#define BIND_PngRowInfoStruct_width_FIELD_READER FALSE
#define BIND_PngRowInfoStruct_width_FIELD_WRITER FALSE
#define BIND_PngRowInfoStruct_width_FIELD_READER FALSE
#define BIND_PngRowInfoStruct_width_FIELD_WRITER FALSE

#define BIND_PngSPLTEntryStruct_TYPE TRUE
#define BIND_PngSPLTEntryStruct_INITIALIZE FALSE
#define BIND_PngSPLTEntryStruct_alpha_FIELD_READER FALSE
#define BIND_PngSPLTEntryStruct_alpha_FIELD_WRITER FALSE
#define BIND_PngSPLTEntryStruct_alpha_FIELD_READER FALSE
#define BIND_PngSPLTEntryStruct_alpha_FIELD_WRITER FALSE
#define BIND_PngSPLTEntryStruct_blue_FIELD_READER FALSE
#define BIND_PngSPLTEntryStruct_blue_FIELD_WRITER FALSE
#define BIND_PngSPLTEntryStruct_blue_FIELD_READER FALSE
#define BIND_PngSPLTEntryStruct_blue_FIELD_WRITER FALSE
#define BIND_PngSPLTEntryStruct_frequency_FIELD_READER FALSE
#define BIND_PngSPLTEntryStruct_frequency_FIELD_WRITER FALSE
#define BIND_PngSPLTEntryStruct_frequency_FIELD_READER FALSE
#define BIND_PngSPLTEntryStruct_frequency_FIELD_WRITER FALSE
#define BIND_PngSPLTEntryStruct_green_FIELD_READER FALSE
#define BIND_PngSPLTEntryStruct_green_FIELD_WRITER FALSE
#define BIND_PngSPLTEntryStruct_green_FIELD_READER FALSE
#define BIND_PngSPLTEntryStruct_green_FIELD_WRITER FALSE
#define BIND_PngSPLTEntryStruct_red_FIELD_READER FALSE
#define BIND_PngSPLTEntryStruct_red_FIELD_WRITER FALSE
#define BIND_PngSPLTEntryStruct_red_FIELD_READER FALSE
#define BIND_PngSPLTEntryStruct_red_FIELD_WRITER FALSE

#define BIND_PngSPLTStruct_TYPE TRUE
#define BIND_PngSPLTStruct_INITIALIZE FALSE
#define BIND_PngSPLTStruct_depth_FIELD_READER FALSE
#define BIND_PngSPLTStruct_depth_FIELD_WRITER FALSE
#define BIND_PngSPLTStruct_depth_FIELD_READER FALSE
#define BIND_PngSPLTStruct_depth_FIELD_WRITER FALSE
#define BIND_PngSPLTStruct_entries_FIELD_READER FALSE
#define BIND_PngSPLTStruct_entries_FIELD_WRITER FALSE
#define BIND_PngSPLTStruct_entries_FIELD_READER FALSE
#define BIND_PngSPLTStruct_entries_FIELD_WRITER FALSE
#define BIND_PngSPLTStruct_name_FIELD_READER FALSE
#define BIND_PngSPLTStruct_name_FIELD_WRITER FALSE
#define BIND_PngSPLTStruct_name_FIELD_READER FALSE
#define BIND_PngSPLTStruct_name_FIELD_WRITER FALSE
#define BIND_PngSPLTStruct_nentries_FIELD_READER FALSE
#define BIND_PngSPLTStruct_nentries_FIELD_WRITER FALSE
#define BIND_PngSPLTStruct_nentries_FIELD_READER FALSE
#define BIND_PngSPLTStruct_nentries_FIELD_WRITER FALSE

#define BIND_PngStructDef_TYPE TRUE
#define BIND_PngStructDef_INITIALIZE FALSE
#define BIND_PngStructDef_big_prev_row_FIELD_READER FALSE
#define BIND_PngStructDef_big_prev_row_FIELD_WRITER FALSE
#define BIND_PngStructDef_big_row_buf_FIELD_READER FALSE
#define BIND_PngStructDef_big_row_buf_FIELD_WRITER FALSE
#define BIND_PngStructDef_bit_depth_FIELD_READER FALSE
#define BIND_PngStructDef_bit_depth_FIELD_WRITER FALSE
#define BIND_PngStructDef_channels_FIELD_READER FALSE
#define BIND_PngStructDef_channels_FIELD_WRITER FALSE
#define BIND_PngStructDef_chunk_name_FIELD_READER FALSE
#define BIND_PngStructDef_chunk_name_FIELD_WRITER FALSE
#define BIND_PngStructDef_color_type_FIELD_READER FALSE
#define BIND_PngStructDef_color_type_FIELD_WRITER FALSE
#define BIND_PngStructDef_compression_FIELD_READER FALSE
#define BIND_PngStructDef_compression_FIELD_WRITER FALSE
#define BIND_PngStructDef_compression_type_FIELD_READER FALSE
#define BIND_PngStructDef_compression_type_FIELD_WRITER FALSE
#define BIND_PngStructDef_crc_FIELD_READER FALSE
#define BIND_PngStructDef_crc_FIELD_WRITER FALSE
#define BIND_PngStructDef_do_filter_FIELD_READER FALSE
#define BIND_PngStructDef_do_filter_FIELD_WRITER FALSE
#define BIND_PngStructDef_error_fn_FIELD_READER FALSE
#define BIND_PngStructDef_error_fn_FIELD_WRITER FALSE
#define BIND_PngStructDef_error_ptr_FIELD_READER FALSE
#define BIND_PngStructDef_error_ptr_FIELD_WRITER FALSE
#define BIND_PngStructDef_filter_FIELD_READER FALSE
#define BIND_PngStructDef_filter_FIELD_WRITER FALSE
#define BIND_PngStructDef_flags_FIELD_READER FALSE
#define BIND_PngStructDef_flags_FIELD_WRITER FALSE
#define BIND_PngStructDef_free_me_FIELD_READER FALSE
#define BIND_PngStructDef_free_me_FIELD_WRITER FALSE
#define BIND_PngStructDef_height_FIELD_READER FALSE
#define BIND_PngStructDef_height_FIELD_WRITER FALSE
#define BIND_PngStructDef_idat_size_FIELD_READER FALSE
#define BIND_PngStructDef_idat_size_FIELD_WRITER FALSE
#define BIND_PngStructDef_info_rowbytes_FIELD_READER FALSE
#define BIND_PngStructDef_info_rowbytes_FIELD_WRITER FALSE
#define BIND_PngStructDef_interlaced_FIELD_READER FALSE
#define BIND_PngStructDef_interlaced_FIELD_WRITER FALSE
#define BIND_PngStructDef_io_ptr_FIELD_READER FALSE
#define BIND_PngStructDef_io_ptr_FIELD_WRITER FALSE
#define BIND_PngStructDef_iwidth_FIELD_READER FALSE
#define BIND_PngStructDef_iwidth_FIELD_WRITER FALSE
#define BIND_PngStructDef_maximum_pixel_depth_FIELD_READER FALSE
#define BIND_PngStructDef_maximum_pixel_depth_FIELD_WRITER FALSE
#define BIND_PngStructDef_mode_FIELD_READER FALSE
#define BIND_PngStructDef_mode_FIELD_WRITER FALSE
#define BIND_PngStructDef_num_palette_FIELD_READER FALSE
#define BIND_PngStructDef_num_palette_FIELD_WRITER FALSE
#define BIND_PngStructDef_num_rows_FIELD_READER FALSE
#define BIND_PngStructDef_num_rows_FIELD_WRITER FALSE
#define BIND_PngStructDef_num_trans_FIELD_READER FALSE
#define BIND_PngStructDef_num_trans_FIELD_WRITER FALSE
#define BIND_PngStructDef_old_big_row_buf_size_FIELD_READER FALSE
#define BIND_PngStructDef_old_big_row_buf_size_FIELD_WRITER FALSE
#define BIND_PngStructDef_palette_FIELD_READER FALSE
#define BIND_PngStructDef_palette_FIELD_WRITER FALSE
#define BIND_PngStructDef_pass_FIELD_READER FALSE
#define BIND_PngStructDef_pass_FIELD_WRITER FALSE
#define BIND_PngStructDef_pixel_depth_FIELD_READER FALSE
#define BIND_PngStructDef_pixel_depth_FIELD_WRITER FALSE
#define BIND_PngStructDef_prev_row_FIELD_READER FALSE
#define BIND_PngStructDef_prev_row_FIELD_WRITER FALSE
#define BIND_PngStructDef_read_data_fn_FIELD_READER FALSE
#define BIND_PngStructDef_read_data_fn_FIELD_WRITER FALSE
#define BIND_PngStructDef_read_filter_FIELD_READER FALSE
#define BIND_PngStructDef_read_filter_FIELD_WRITER FALSE
#define BIND_PngStructDef_read_row_fn_FIELD_READER FALSE
#define BIND_PngStructDef_read_row_fn_FIELD_WRITER FALSE
#define BIND_PngStructDef_row_buf_FIELD_READER FALSE
#define BIND_PngStructDef_row_buf_FIELD_WRITER FALSE
#define BIND_PngStructDef_row_number_FIELD_READER FALSE
#define BIND_PngStructDef_row_number_FIELD_WRITER FALSE
#define BIND_PngStructDef_rowbytes_FIELD_READER FALSE
#define BIND_PngStructDef_rowbytes_FIELD_WRITER FALSE
#define BIND_PngStructDef_sig_bytes_FIELD_READER FALSE
#define BIND_PngStructDef_sig_bytes_FIELD_WRITER FALSE
#define BIND_PngStructDef_transformations_FIELD_READER FALSE
#define BIND_PngStructDef_transformations_FIELD_WRITER FALSE
#define BIND_PngStructDef_transformed_pixel_depth_FIELD_READER FALSE
#define BIND_PngStructDef_transformed_pixel_depth_FIELD_WRITER FALSE
#define BIND_PngStructDef_usr_bit_depth_FIELD_READER FALSE
#define BIND_PngStructDef_usr_bit_depth_FIELD_WRITER FALSE
#define BIND_PngStructDef_usr_width_FIELD_READER FALSE
#define BIND_PngStructDef_usr_width_FIELD_WRITER FALSE
#define BIND_PngStructDef_width_FIELD_READER FALSE
#define BIND_PngStructDef_width_FIELD_WRITER FALSE
#define BIND_PngStructDef_write_data_fn_FIELD_READER FALSE
#define BIND_PngStructDef_write_data_fn_FIELD_WRITER FALSE
#define BIND_PngStructDef_write_row_fn_FIELD_READER FALSE
#define BIND_PngStructDef_write_row_fn_FIELD_WRITER FALSE
#define BIND_PngStructDef_zowner_FIELD_READER FALSE
#define BIND_PngStructDef_zowner_FIELD_WRITER FALSE
#define BIND_PngStructDef_zstream_FIELD_READER FALSE
#define BIND_PngStructDef_zstream_FIELD_WRITER FALSE

#define BIND_PngTextStruct_TYPE TRUE
#define BIND_PngTextStruct_INITIALIZE FALSE
#define BIND_PngTextStruct_compression_FIELD_READER FALSE
#define BIND_PngTextStruct_compression_FIELD_WRITER FALSE
#define BIND_PngTextStruct_compression_FIELD_READER FALSE
#define BIND_PngTextStruct_compression_FIELD_WRITER FALSE
#define BIND_PngTextStruct_itxt_length_FIELD_READER FALSE
#define BIND_PngTextStruct_itxt_length_FIELD_WRITER FALSE
#define BIND_PngTextStruct_itxt_length_FIELD_READER FALSE
#define BIND_PngTextStruct_itxt_length_FIELD_WRITER FALSE
#define BIND_PngTextStruct_key_FIELD_READER FALSE
#define BIND_PngTextStruct_key_FIELD_WRITER FALSE
#define BIND_PngTextStruct_key_FIELD_READER FALSE
#define BIND_PngTextStruct_key_FIELD_WRITER FALSE
#define BIND_PngTextStruct_lang_FIELD_READER FALSE
#define BIND_PngTextStruct_lang_FIELD_WRITER FALSE
#define BIND_PngTextStruct_lang_FIELD_READER FALSE
#define BIND_PngTextStruct_lang_FIELD_WRITER FALSE
#define BIND_PngTextStruct_lang_key_FIELD_READER FALSE
#define BIND_PngTextStruct_lang_key_FIELD_WRITER FALSE
#define BIND_PngTextStruct_lang_key_FIELD_READER FALSE
#define BIND_PngTextStruct_lang_key_FIELD_WRITER FALSE
#define BIND_PngTextStruct_text_FIELD_READER FALSE
#define BIND_PngTextStruct_text_FIELD_WRITER FALSE
#define BIND_PngTextStruct_text_FIELD_READER FALSE
#define BIND_PngTextStruct_text_FIELD_WRITER FALSE
#define BIND_PngTextStruct_text_length_FIELD_READER FALSE
#define BIND_PngTextStruct_text_length_FIELD_WRITER FALSE
#define BIND_PngTextStruct_text_length_FIELD_READER FALSE
#define BIND_PngTextStruct_text_length_FIELD_WRITER FALSE

#define BIND_PngTimeStruct_TYPE TRUE
#define BIND_PngTimeStruct_INITIALIZE FALSE
#define BIND_PngTimeStruct_day_FIELD_READER FALSE
#define BIND_PngTimeStruct_day_FIELD_WRITER FALSE
#define BIND_PngTimeStruct_day_FIELD_READER FALSE
#define BIND_PngTimeStruct_day_FIELD_WRITER FALSE
#define BIND_PngTimeStruct_hour_FIELD_READER FALSE
#define BIND_PngTimeStruct_hour_FIELD_WRITER FALSE
#define BIND_PngTimeStruct_hour_FIELD_READER FALSE
#define BIND_PngTimeStruct_hour_FIELD_WRITER FALSE
#define BIND_PngTimeStruct_minute_FIELD_READER FALSE
#define BIND_PngTimeStruct_minute_FIELD_WRITER FALSE
#define BIND_PngTimeStruct_minute_FIELD_READER FALSE
#define BIND_PngTimeStruct_minute_FIELD_WRITER FALSE
#define BIND_PngTimeStruct_month_FIELD_READER FALSE
#define BIND_PngTimeStruct_month_FIELD_WRITER FALSE
#define BIND_PngTimeStruct_month_FIELD_READER FALSE
#define BIND_PngTimeStruct_month_FIELD_WRITER FALSE
#define BIND_PngTimeStruct_second_FIELD_READER FALSE
#define BIND_PngTimeStruct_second_FIELD_WRITER FALSE
#define BIND_PngTimeStruct_second_FIELD_READER FALSE
#define BIND_PngTimeStruct_second_FIELD_WRITER FALSE
#define BIND_PngTimeStruct_year_FIELD_READER FALSE
#define BIND_PngTimeStruct_year_FIELD_WRITER FALSE
#define BIND_PngTimeStruct_year_FIELD_READER FALSE
#define BIND_PngTimeStruct_year_FIELD_WRITER FALSE

#define BIND_PngUnknownChunkT_TYPE TRUE
#define BIND_PngUnknownChunkT_INITIALIZE FALSE
#define BIND_PngUnknownChunkT_data_FIELD_READER FALSE
#define BIND_PngUnknownChunkT_data_FIELD_WRITER FALSE
#define BIND_PngUnknownChunkT_data_FIELD_READER FALSE
#define BIND_PngUnknownChunkT_data_FIELD_WRITER FALSE
#define BIND_PngUnknownChunkT_location_FIELD_READER FALSE
#define BIND_PngUnknownChunkT_location_FIELD_WRITER FALSE
#define BIND_PngUnknownChunkT_location_FIELD_READER FALSE
#define BIND_PngUnknownChunkT_location_FIELD_WRITER FALSE
#define BIND_PngUnknownChunkT_name_FIELD_READER FALSE
#define BIND_PngUnknownChunkT_name_FIELD_WRITER FALSE
#define BIND_PngUnknownChunkT_name_FIELD_READER FALSE
#define BIND_PngUnknownChunkT_name_FIELD_WRITER FALSE
#define BIND_PngUnknownChunkT_size_FIELD_READER FALSE
#define BIND_PngUnknownChunkT_size_FIELD_WRITER FALSE
#define BIND_PngUnknownChunkT_size_FIELD_READER FALSE
#define BIND_PngUnknownChunkT_size_FIELD_WRITER FALSE

#define BIND_Rasterfile_TYPE TRUE
#define BIND_Rasterfile_INITIALIZE FALSE
#define BIND_Rasterfile_ras_depth_FIELD_READER FALSE
#define BIND_Rasterfile_ras_depth_FIELD_WRITER FALSE
#define BIND_Rasterfile_ras_height_FIELD_READER FALSE
#define BIND_Rasterfile_ras_height_FIELD_WRITER FALSE
#define BIND_Rasterfile_ras_length_FIELD_READER FALSE
#define BIND_Rasterfile_ras_length_FIELD_WRITER FALSE
#define BIND_Rasterfile_ras_magic_FIELD_READER FALSE
#define BIND_Rasterfile_ras_magic_FIELD_WRITER FALSE
#define BIND_Rasterfile_ras_maplength_FIELD_READER FALSE
#define BIND_Rasterfile_ras_maplength_FIELD_WRITER FALSE
#define BIND_Rasterfile_ras_maptype_FIELD_READER FALSE
#define BIND_Rasterfile_ras_maptype_FIELD_WRITER FALSE
#define BIND_Rasterfile_ras_type_FIELD_READER FALSE
#define BIND_Rasterfile_ras_type_FIELD_WRITER FALSE
#define BIND_Rasterfile_ras_width_FIELD_READER FALSE
#define BIND_Rasterfile_ras_width_FIELD_WRITER FALSE

#define BIND_RecElement_TYPE TRUE
#define BIND_RecElement_INITIALIZE FALSE
#define BIND_RecElement_cookie_FIELD_READER FALSE
#define BIND_RecElement_cookie_FIELD_WRITER FALSE
#define BIND_RecElement_elementRef_FIELD_READER FALSE
#define BIND_RecElement_elementRef_FIELD_WRITER FALSE
#define BIND_RecElement_max_FIELD_READER FALSE
#define BIND_RecElement_max_FIELD_WRITER FALSE
#define BIND_RecElement_maxReport_FIELD_READER FALSE
#define BIND_RecElement_maxReport_FIELD_WRITER FALSE
#define BIND_RecElement_min_FIELD_READER FALSE
#define BIND_RecElement_min_FIELD_WRITER FALSE
#define BIND_RecElement_minReport_FIELD_READER FALSE
#define BIND_RecElement_minReport_FIELD_WRITER FALSE
#define BIND_RecElement_pNext_FIELD_READER FALSE
#define BIND_RecElement_pNext_FIELD_WRITER FALSE
#define BIND_RecElement_usage_FIELD_READER FALSE
#define BIND_RecElement_usage_FIELD_WRITER FALSE
#define BIND_RecElement_usagePage_FIELD_READER FALSE
#define BIND_RecElement_usagePage_FIELD_WRITER FALSE

#define BIND_SDLAssertData_TYPE TRUE
#define BIND_SDLAssertData_INITIALIZE FALSE
#define BIND_SDLAssertData_always_ignore_FIELD_READER FALSE
#define BIND_SDLAssertData_always_ignore_FIELD_WRITER FALSE
#define BIND_SDLAssertData_condition_FIELD_READER FALSE
#define BIND_SDLAssertData_condition_FIELD_WRITER FALSE
#define BIND_SDLAssertData_filename_FIELD_READER FALSE
#define BIND_SDLAssertData_filename_FIELD_WRITER FALSE
#define BIND_SDLAssertData_function_FIELD_READER FALSE
#define BIND_SDLAssertData_function_FIELD_WRITER FALSE
#define BIND_SDLAssertData_linenum_FIELD_READER FALSE
#define BIND_SDLAssertData_linenum_FIELD_WRITER FALSE
#define BIND_SDLAssertData_next_FIELD_READER FALSE
#define BIND_SDLAssertData_next_FIELD_WRITER FALSE
#define BIND_SDLAssertData_trigger_count_FIELD_READER FALSE
#define BIND_SDLAssertData_trigger_count_FIELD_WRITER FALSE

#define BIND_SDLAudioCVT_TYPE TRUE
#define BIND_SDLAudioCVT_INITIALIZE FALSE
#define BIND_SDLAudioCVT_buf_FIELD_READER FALSE
#define BIND_SDLAudioCVT_buf_FIELD_WRITER FALSE
#define BIND_SDLAudioCVT_dst_format_FIELD_READER FALSE
#define BIND_SDLAudioCVT_dst_format_FIELD_WRITER FALSE
#define BIND_SDLAudioCVT_filter_index_FIELD_READER FALSE
#define BIND_SDLAudioCVT_filter_index_FIELD_WRITER FALSE
#define BIND_SDLAudioCVT_filters_FIELD_READER FALSE
#define BIND_SDLAudioCVT_filters_FIELD_WRITER FALSE
#define BIND_SDLAudioCVT_len_FIELD_READER FALSE
#define BIND_SDLAudioCVT_len_FIELD_WRITER FALSE
#define BIND_SDLAudioCVT_len_cvt_FIELD_READER FALSE
#define BIND_SDLAudioCVT_len_cvt_FIELD_WRITER FALSE
#define BIND_SDLAudioCVT_len_mult_FIELD_READER FALSE
#define BIND_SDLAudioCVT_len_mult_FIELD_WRITER FALSE
#define BIND_SDLAudioCVT_len_ratio_FIELD_READER FALSE
#define BIND_SDLAudioCVT_len_ratio_FIELD_WRITER FALSE
#define BIND_SDLAudioCVT_needed_FIELD_READER FALSE
#define BIND_SDLAudioCVT_needed_FIELD_WRITER FALSE
#define BIND_SDLAudioCVT_rate_incr_FIELD_READER FALSE
#define BIND_SDLAudioCVT_rate_incr_FIELD_WRITER FALSE
#define BIND_SDLAudioCVT_src_format_FIELD_READER FALSE
#define BIND_SDLAudioCVT_src_format_FIELD_WRITER FALSE

#define BIND_SDLAudioDevice_TYPE TRUE
#define BIND_SDLAudioDevice_INITIALIZE FALSE
#define BIND_SDLAudioDevice_convert_FIELD_READER FALSE
#define BIND_SDLAudioDevice_convert_FIELD_WRITER FALSE
#define BIND_SDLAudioDevice_enabled_FIELD_READER FALSE
#define BIND_SDLAudioDevice_enabled_FIELD_WRITER FALSE
#define BIND_SDLAudioDevice_fake_stream_FIELD_READER FALSE
#define BIND_SDLAudioDevice_fake_stream_FIELD_WRITER FALSE
#define BIND_SDLAudioDevice_hidden_FIELD_READER FALSE
#define BIND_SDLAudioDevice_hidden_FIELD_WRITER FALSE
#define BIND_SDLAudioDevice_iscapture_FIELD_READER FALSE
#define BIND_SDLAudioDevice_iscapture_FIELD_WRITER FALSE
#define BIND_SDLAudioDevice_mixer_lock_FIELD_READER FALSE
#define BIND_SDLAudioDevice_mixer_lock_FIELD_WRITER FALSE
#define BIND_SDLAudioDevice_opened_FIELD_READER FALSE
#define BIND_SDLAudioDevice_opened_FIELD_WRITER FALSE
#define BIND_SDLAudioDevice_paused_FIELD_READER FALSE
#define BIND_SDLAudioDevice_paused_FIELD_WRITER FALSE
#define BIND_SDLAudioDevice_spec_FIELD_READER FALSE
#define BIND_SDLAudioDevice_spec_FIELD_WRITER FALSE
#define BIND_SDLAudioDevice_streamer_FIELD_READER FALSE
#define BIND_SDLAudioDevice_streamer_FIELD_WRITER FALSE
#define BIND_SDLAudioDevice_thread_FIELD_READER FALSE
#define BIND_SDLAudioDevice_thread_FIELD_WRITER FALSE
#define BIND_SDLAudioDevice_threadid_FIELD_READER FALSE
#define BIND_SDLAudioDevice_threadid_FIELD_WRITER FALSE
#define BIND_SDLAudioDevice_use_streamer_FIELD_READER FALSE
#define BIND_SDLAudioDevice_use_streamer_FIELD_WRITER FALSE

#define BIND_SDLAudioDriver_TYPE TRUE
#define BIND_SDLAudioDriver_INITIALIZE FALSE
#define BIND_SDLAudioDriver_desc_FIELD_READER FALSE
#define BIND_SDLAudioDriver_desc_FIELD_WRITER FALSE
#define BIND_SDLAudioDriver_impl_FIELD_READER FALSE
#define BIND_SDLAudioDriver_impl_FIELD_WRITER FALSE
#define BIND_SDLAudioDriver_inputDeviceCount_FIELD_READER FALSE
#define BIND_SDLAudioDriver_inputDeviceCount_FIELD_WRITER FALSE
#define BIND_SDLAudioDriver_inputDevices_FIELD_READER FALSE
#define BIND_SDLAudioDriver_inputDevices_FIELD_WRITER FALSE
#define BIND_SDLAudioDriver_name_FIELD_READER FALSE
#define BIND_SDLAudioDriver_name_FIELD_WRITER FALSE
#define BIND_SDLAudioDriver_outputDeviceCount_FIELD_READER FALSE
#define BIND_SDLAudioDriver_outputDeviceCount_FIELD_WRITER FALSE
#define BIND_SDLAudioDriver_outputDevices_FIELD_READER FALSE
#define BIND_SDLAudioDriver_outputDevices_FIELD_WRITER FALSE

#define BIND_SDLAudioDriverImpl_TYPE TRUE
#define BIND_SDLAudioDriverImpl_INITIALIZE FALSE
#define BIND_SDLAudioDriverImpl_CloseDevice_FIELD_READER FALSE
#define BIND_SDLAudioDriverImpl_CloseDevice_FIELD_WRITER FALSE
#define BIND_SDLAudioDriverImpl_Deinitialize_FIELD_READER FALSE
#define BIND_SDLAudioDriverImpl_Deinitialize_FIELD_WRITER FALSE
#define BIND_SDLAudioDriverImpl_DetectDevices_FIELD_READER FALSE
#define BIND_SDLAudioDriverImpl_DetectDevices_FIELD_WRITER FALSE
#define BIND_SDLAudioDriverImpl_GetDeviceBuf_FIELD_READER FALSE
#define BIND_SDLAudioDriverImpl_GetDeviceBuf_FIELD_WRITER FALSE
#define BIND_SDLAudioDriverImpl_HasCaptureSupport_FIELD_READER FALSE
#define BIND_SDLAudioDriverImpl_HasCaptureSupport_FIELD_WRITER FALSE
#define BIND_SDLAudioDriverImpl_LockDevice_FIELD_READER FALSE
#define BIND_SDLAudioDriverImpl_LockDevice_FIELD_WRITER FALSE
#define BIND_SDLAudioDriverImpl_OnlyHasDefaultInputDevice_FIELD_READER FALSE
#define BIND_SDLAudioDriverImpl_OnlyHasDefaultInputDevice_FIELD_WRITER FALSE
#define BIND_SDLAudioDriverImpl_OnlyHasDefaultOutputDevice_FIELD_READER FALSE
#define BIND_SDLAudioDriverImpl_OnlyHasDefaultOutputDevice_FIELD_WRITER FALSE
#define BIND_SDLAudioDriverImpl_OpenDevice_FIELD_READER FALSE
#define BIND_SDLAudioDriverImpl_OpenDevice_FIELD_WRITER FALSE
#define BIND_SDLAudioDriverImpl_PlayDevice_FIELD_READER FALSE
#define BIND_SDLAudioDriverImpl_PlayDevice_FIELD_WRITER FALSE
#define BIND_SDLAudioDriverImpl_ProvidesOwnCallbackThread_FIELD_READER FALSE
#define BIND_SDLAudioDriverImpl_ProvidesOwnCallbackThread_FIELD_WRITER FALSE
#define BIND_SDLAudioDriverImpl_SkipMixerLock_FIELD_READER FALSE
#define BIND_SDLAudioDriverImpl_SkipMixerLock_FIELD_WRITER FALSE
#define BIND_SDLAudioDriverImpl_ThreadInit_FIELD_READER FALSE
#define BIND_SDLAudioDriverImpl_ThreadInit_FIELD_WRITER FALSE
#define BIND_SDLAudioDriverImpl_UnlockDevice_FIELD_READER FALSE
#define BIND_SDLAudioDriverImpl_UnlockDevice_FIELD_WRITER FALSE
#define BIND_SDLAudioDriverImpl_WaitDevice_FIELD_READER FALSE
#define BIND_SDLAudioDriverImpl_WaitDevice_FIELD_WRITER FALSE
#define BIND_SDLAudioDriverImpl_WaitDone_FIELD_READER FALSE
#define BIND_SDLAudioDriverImpl_WaitDone_FIELD_WRITER FALSE

#define BIND_SDLAudioSpec_TYPE TRUE
#define BIND_SDLAudioSpec_INITIALIZE FALSE
#define BIND_SDLAudioSpec_callback_FIELD_READER FALSE
#define BIND_SDLAudioSpec_callback_FIELD_WRITER FALSE
#define BIND_SDLAudioSpec_channels_FIELD_READER FALSE
#define BIND_SDLAudioSpec_channels_FIELD_WRITER FALSE
#define BIND_SDLAudioSpec_format_FIELD_READER FALSE
#define BIND_SDLAudioSpec_format_FIELD_WRITER FALSE
#define BIND_SDLAudioSpec_freq_FIELD_READER FALSE
#define BIND_SDLAudioSpec_freq_FIELD_WRITER FALSE
#define BIND_SDLAudioSpec_padding_FIELD_READER FALSE
#define BIND_SDLAudioSpec_padding_FIELD_WRITER FALSE
#define BIND_SDLAudioSpec_samples_FIELD_READER FALSE
#define BIND_SDLAudioSpec_samples_FIELD_WRITER FALSE
#define BIND_SDLAudioSpec_silence_FIELD_READER FALSE
#define BIND_SDLAudioSpec_silence_FIELD_WRITER FALSE
#define BIND_SDLAudioSpec_size_FIELD_READER FALSE
#define BIND_SDLAudioSpec_size_FIELD_WRITER FALSE
#define BIND_SDLAudioSpec_userdata_FIELD_READER FALSE
#define BIND_SDLAudioSpec_userdata_FIELD_WRITER FALSE

#define BIND_SDLBlitMap_TYPE TRUE
#define BIND_SDLBlitMap_INITIALIZE FALSE
#define BIND_SDLBlitMap_blit_FIELD_READER FALSE
#define BIND_SDLBlitMap_blit_FIELD_WRITER FALSE
#define BIND_SDLBlitMap_data_FIELD_READER FALSE
#define BIND_SDLBlitMap_data_FIELD_WRITER FALSE
#define BIND_SDLBlitMap_dst_FIELD_READER FALSE
#define BIND_SDLBlitMap_dst_FIELD_WRITER FALSE
#define BIND_SDLBlitMap_dst_palette_version_FIELD_READER FALSE
#define BIND_SDLBlitMap_dst_palette_version_FIELD_WRITER FALSE
#define BIND_SDLBlitMap_identity_FIELD_READER FALSE
#define BIND_SDLBlitMap_identity_FIELD_WRITER FALSE
#define BIND_SDLBlitMap_info_FIELD_READER FALSE
#define BIND_SDLBlitMap_info_FIELD_WRITER FALSE
#define BIND_SDLBlitMap_src_palette_version_FIELD_READER FALSE
#define BIND_SDLBlitMap_src_palette_version_FIELD_WRITER FALSE

#define BIND_SDLColor_TYPE TRUE
#define BIND_SDLColor_INITIALIZE FALSE
#define BIND_SDLColor_a_FIELD_READER FALSE
#define BIND_SDLColor_a_FIELD_WRITER FALSE
#define BIND_SDLColor_b_FIELD_READER FALSE
#define BIND_SDLColor_b_FIELD_WRITER FALSE
#define BIND_SDLColor_g_FIELD_READER FALSE
#define BIND_SDLColor_g_FIELD_WRITER FALSE
#define BIND_SDLColor_r_FIELD_READER FALSE
#define BIND_SDLColor_r_FIELD_WRITER FALSE

#define BIND_SDLCommonEvent_TYPE TRUE
#define BIND_SDLCommonEvent_INITIALIZE FALSE
#define BIND_SDLCommonEvent_timestamp_FIELD_READER TRUE
#define BIND_SDLCommonEvent_timestamp_FIELD_WRITER FALSE
#define BIND_SDLCommonEvent_type_FIELD_READER TRUE
#define BIND_SDLCommonEvent_type_FIELD_WRITER FALSE

#define BIND_SDLCond_TYPE TRUE
#define BIND_SDLCond_INITIALIZE FALSE

#define BIND_SDLControllerAxisEvent_TYPE TRUE
#define BIND_SDLControllerAxisEvent_INITIALIZE FALSE
#define BIND_SDLControllerAxisEvent_axis_FIELD_READER TRUE
#define BIND_SDLControllerAxisEvent_axis_FIELD_WRITER FALSE
#define BIND_SDLControllerAxisEvent_padding1_FIELD_READER TRUE
#define BIND_SDLControllerAxisEvent_padding1_FIELD_WRITER FALSE
#define BIND_SDLControllerAxisEvent_padding2_FIELD_READER TRUE
#define BIND_SDLControllerAxisEvent_padding2_FIELD_WRITER FALSE
#define BIND_SDLControllerAxisEvent_padding3_FIELD_READER TRUE
#define BIND_SDLControllerAxisEvent_padding3_FIELD_WRITER FALSE
#define BIND_SDLControllerAxisEvent_padding4_FIELD_READER TRUE
#define BIND_SDLControllerAxisEvent_padding4_FIELD_WRITER FALSE
#define BIND_SDLControllerAxisEvent_timestamp_FIELD_READER TRUE
#define BIND_SDLControllerAxisEvent_timestamp_FIELD_WRITER FALSE
#define BIND_SDLControllerAxisEvent_type_FIELD_READER TRUE
#define BIND_SDLControllerAxisEvent_type_FIELD_WRITER FALSE
#define BIND_SDLControllerAxisEvent_value_FIELD_READER TRUE
#define BIND_SDLControllerAxisEvent_value_FIELD_WRITER FALSE
#define BIND_SDLControllerAxisEvent_which_FIELD_READER TRUE
#define BIND_SDLControllerAxisEvent_which_FIELD_WRITER FALSE

#define BIND_SDLControllerButtonEvent_TYPE TRUE
#define BIND_SDLControllerButtonEvent_INITIALIZE FALSE
#define BIND_SDLControllerButtonEvent_button_FIELD_READER TRUE
#define BIND_SDLControllerButtonEvent_button_FIELD_WRITER FALSE
#define BIND_SDLControllerButtonEvent_padding1_FIELD_READER TRUE
#define BIND_SDLControllerButtonEvent_padding1_FIELD_WRITER FALSE
#define BIND_SDLControllerButtonEvent_padding2_FIELD_READER TRUE
#define BIND_SDLControllerButtonEvent_padding2_FIELD_WRITER FALSE
#define BIND_SDLControllerButtonEvent_state_FIELD_READER TRUE
#define BIND_SDLControllerButtonEvent_state_FIELD_WRITER FALSE
#define BIND_SDLControllerButtonEvent_timestamp_FIELD_READER TRUE
#define BIND_SDLControllerButtonEvent_timestamp_FIELD_WRITER FALSE
#define BIND_SDLControllerButtonEvent_type_FIELD_READER TRUE
#define BIND_SDLControllerButtonEvent_type_FIELD_WRITER FALSE
#define BIND_SDLControllerButtonEvent_which_FIELD_READER TRUE
#define BIND_SDLControllerButtonEvent_which_FIELD_WRITER FALSE

#define BIND_SDLControllerDeviceEvent_TYPE TRUE
#define BIND_SDLControllerDeviceEvent_INITIALIZE FALSE
#define BIND_SDLControllerDeviceEvent_timestamp_FIELD_READER TRUE
#define BIND_SDLControllerDeviceEvent_timestamp_FIELD_WRITER FALSE
#define BIND_SDLControllerDeviceEvent_type_FIELD_READER TRUE
#define BIND_SDLControllerDeviceEvent_type_FIELD_WRITER FALSE
#define BIND_SDLControllerDeviceEvent_which_FIELD_READER TRUE
#define BIND_SDLControllerDeviceEvent_which_FIELD_WRITER FALSE

#define BIND_SDLCursor_TYPE TRUE
#define BIND_SDLCursor_INITIALIZE FALSE
#define BIND_SDLCursor_driverdata_FIELD_READER FALSE
#define BIND_SDLCursor_driverdata_FIELD_WRITER FALSE
#define BIND_SDLCursor_next_FIELD_READER FALSE
#define BIND_SDLCursor_next_FIELD_WRITER FALSE

#define BIND_SDLDisplayData_TYPE TRUE
#define BIND_SDLDisplayData_INITIALIZE FALSE
#define BIND_SDLDisplayData_dispman_display_FIELD_READER FALSE
#define BIND_SDLDisplayData_dispman_display_FIELD_WRITER FALSE

#define BIND_SDLDollarGestureEvent_TYPE TRUE
#define BIND_SDLDollarGestureEvent_INITIALIZE FALSE
#define BIND_SDLDollarGestureEvent_error_FIELD_READER TRUE
#define BIND_SDLDollarGestureEvent_error_FIELD_WRITER FALSE
#define BIND_SDLDollarGestureEvent_gestureId_FIELD_READER FALSE
#define BIND_SDLDollarGestureEvent_gestureId_FIELD_WRITER FALSE
#define BIND_SDLDollarGestureEvent_numFingers_FIELD_READER TRUE
#define BIND_SDLDollarGestureEvent_numFingers_FIELD_WRITER FALSE
#define BIND_SDLDollarGestureEvent_timestamp_FIELD_READER TRUE
#define BIND_SDLDollarGestureEvent_timestamp_FIELD_WRITER FALSE
#define BIND_SDLDollarGestureEvent_touchId_FIELD_READER FALSE
#define BIND_SDLDollarGestureEvent_touchId_FIELD_WRITER FALSE
#define BIND_SDLDollarGestureEvent_type_FIELD_READER TRUE
#define BIND_SDLDollarGestureEvent_type_FIELD_WRITER FALSE
#define BIND_SDLDollarGestureEvent_x_FIELD_READER TRUE
#define BIND_SDLDollarGestureEvent_x_FIELD_WRITER FALSE
#define BIND_SDLDollarGestureEvent_y_FIELD_READER TRUE
#define BIND_SDLDollarGestureEvent_y_FIELD_WRITER FALSE

#define BIND_SDLDropEvent_TYPE TRUE
#define BIND_SDLDropEvent_INITIALIZE FALSE
#define BIND_SDLDropEvent_file_FIELD_READER TRUE
#define BIND_SDLDropEvent_file_FIELD_WRITER FALSE
#define BIND_SDLDropEvent_timestamp_FIELD_READER TRUE
#define BIND_SDLDropEvent_timestamp_FIELD_WRITER FALSE
#define BIND_SDLDropEvent_type_FIELD_READER TRUE
#define BIND_SDLDropEvent_type_FIELD_WRITER FALSE

#define BIND_SDLError_TYPE TRUE
#define BIND_SDLError_INITIALIZE FALSE
#define BIND_SDLError_argc_FIELD_READER FALSE
#define BIND_SDLError_argc_FIELD_WRITER FALSE
#define BIND_SDLError_args_FIELD_READER FALSE
#define BIND_SDLError_args_FIELD_WRITER FALSE
#define BIND_SDLError_error_FIELD_READER FALSE
#define BIND_SDLError_error_FIELD_WRITER FALSE
#define BIND_SDLError_key_FIELD_READER FALSE
#define BIND_SDLError_key_FIELD_WRITER FALSE

#define BIND_SDLFinger_TYPE TRUE
#define BIND_SDLFinger_INITIALIZE FALSE
#define BIND_SDLFinger_id_FIELD_READER FALSE
#define BIND_SDLFinger_id_FIELD_WRITER FALSE
#define BIND_SDLFinger_pressure_FIELD_READER FALSE
#define BIND_SDLFinger_pressure_FIELD_WRITER FALSE
#define BIND_SDLFinger_x_FIELD_READER FALSE
#define BIND_SDLFinger_x_FIELD_WRITER FALSE
#define BIND_SDLFinger_y_FIELD_READER FALSE
#define BIND_SDLFinger_y_FIELD_WRITER FALSE

#define BIND_SDLGameControllerButtonBind_TYPE TRUE
#define BIND_SDLGameControllerButtonBind_INITIALIZE FALSE
#define BIND_SDLGameControllerButtonBind_bindType_FIELD_READER FALSE
#define BIND_SDLGameControllerButtonBind_bindType_FIELD_WRITER FALSE
#define BIND_SDLGameControllerButtonBind_value_FIELD_READER FALSE
#define BIND_SDLGameControllerButtonBind_value_FIELD_WRITER FALSE

#define BIND_SDLGLDriverData_TYPE TRUE
#define BIND_SDLGLDriverData_INITIALIZE FALSE
#define BIND_SDLGLDriverData_context_FIELD_READER FALSE
#define BIND_SDLGLDriverData_context_FIELD_WRITER FALSE
#define BIND_SDLGLDriverData_display_FIELD_READER FALSE
#define BIND_SDLGLDriverData_display_FIELD_WRITER FALSE
#define BIND_SDLGLDriverData_surface_FIELD_READER FALSE
#define BIND_SDLGLDriverData_surface_FIELD_WRITER FALSE
#define BIND_SDLGLDriverData_swapinterval_FIELD_READER FALSE
#define BIND_SDLGLDriverData_swapinterval_FIELD_WRITER FALSE

#define BIND_SDLHapticCondition_TYPE TRUE
#define BIND_SDLHapticCondition_INITIALIZE FALSE
#define BIND_SDLHapticCondition_button_FIELD_READER FALSE
#define BIND_SDLHapticCondition_button_FIELD_WRITER FALSE
#define BIND_SDLHapticCondition_center_FIELD_READER FALSE
#define BIND_SDLHapticCondition_center_FIELD_WRITER FALSE
#define BIND_SDLHapticCondition_deadband_FIELD_READER FALSE
#define BIND_SDLHapticCondition_deadband_FIELD_WRITER FALSE
#define BIND_SDLHapticCondition_delay_FIELD_READER FALSE
#define BIND_SDLHapticCondition_delay_FIELD_WRITER FALSE
#define BIND_SDLHapticCondition_direction_FIELD_READER FALSE
#define BIND_SDLHapticCondition_direction_FIELD_WRITER FALSE
#define BIND_SDLHapticCondition_interval_FIELD_READER FALSE
#define BIND_SDLHapticCondition_interval_FIELD_WRITER FALSE
#define BIND_SDLHapticCondition_left_coeff_FIELD_READER FALSE
#define BIND_SDLHapticCondition_left_coeff_FIELD_WRITER FALSE
#define BIND_SDLHapticCondition_left_sat_FIELD_READER FALSE
#define BIND_SDLHapticCondition_left_sat_FIELD_WRITER FALSE
#define BIND_SDLHapticCondition_length_FIELD_READER FALSE
#define BIND_SDLHapticCondition_length_FIELD_WRITER FALSE
#define BIND_SDLHapticCondition_right_coeff_FIELD_READER FALSE
#define BIND_SDLHapticCondition_right_coeff_FIELD_WRITER FALSE
#define BIND_SDLHapticCondition_right_sat_FIELD_READER FALSE
#define BIND_SDLHapticCondition_right_sat_FIELD_WRITER FALSE
#define BIND_SDLHapticCondition_type_FIELD_READER FALSE
#define BIND_SDLHapticCondition_type_FIELD_WRITER FALSE

#define BIND_SDLHapticConstant_TYPE TRUE
#define BIND_SDLHapticConstant_INITIALIZE FALSE
#define BIND_SDLHapticConstant_attack_length_FIELD_READER FALSE
#define BIND_SDLHapticConstant_attack_length_FIELD_WRITER FALSE
#define BIND_SDLHapticConstant_attack_level_FIELD_READER FALSE
#define BIND_SDLHapticConstant_attack_level_FIELD_WRITER FALSE
#define BIND_SDLHapticConstant_button_FIELD_READER FALSE
#define BIND_SDLHapticConstant_button_FIELD_WRITER FALSE
#define BIND_SDLHapticConstant_delay_FIELD_READER FALSE
#define BIND_SDLHapticConstant_delay_FIELD_WRITER FALSE
#define BIND_SDLHapticConstant_direction_FIELD_READER FALSE
#define BIND_SDLHapticConstant_direction_FIELD_WRITER FALSE
#define BIND_SDLHapticConstant_fade_length_FIELD_READER FALSE
#define BIND_SDLHapticConstant_fade_length_FIELD_WRITER FALSE
#define BIND_SDLHapticConstant_fade_level_FIELD_READER FALSE
#define BIND_SDLHapticConstant_fade_level_FIELD_WRITER FALSE
#define BIND_SDLHapticConstant_interval_FIELD_READER FALSE
#define BIND_SDLHapticConstant_interval_FIELD_WRITER FALSE
#define BIND_SDLHapticConstant_length_FIELD_READER FALSE
#define BIND_SDLHapticConstant_length_FIELD_WRITER FALSE
#define BIND_SDLHapticConstant_level_FIELD_READER FALSE
#define BIND_SDLHapticConstant_level_FIELD_WRITER FALSE
#define BIND_SDLHapticConstant_type_FIELD_READER FALSE
#define BIND_SDLHapticConstant_type_FIELD_WRITER FALSE

#define BIND_SDLHapticCustom_TYPE TRUE
#define BIND_SDLHapticCustom_INITIALIZE FALSE
#define BIND_SDLHapticCustom_attack_length_FIELD_READER FALSE
#define BIND_SDLHapticCustom_attack_length_FIELD_WRITER FALSE
#define BIND_SDLHapticCustom_attack_level_FIELD_READER FALSE
#define BIND_SDLHapticCustom_attack_level_FIELD_WRITER FALSE
#define BIND_SDLHapticCustom_button_FIELD_READER FALSE
#define BIND_SDLHapticCustom_button_FIELD_WRITER FALSE
#define BIND_SDLHapticCustom_channels_FIELD_READER FALSE
#define BIND_SDLHapticCustom_channels_FIELD_WRITER FALSE
#define BIND_SDLHapticCustom_data_FIELD_READER FALSE
#define BIND_SDLHapticCustom_data_FIELD_WRITER FALSE
#define BIND_SDLHapticCustom_delay_FIELD_READER FALSE
#define BIND_SDLHapticCustom_delay_FIELD_WRITER FALSE
#define BIND_SDLHapticCustom_direction_FIELD_READER FALSE
#define BIND_SDLHapticCustom_direction_FIELD_WRITER FALSE
#define BIND_SDLHapticCustom_fade_length_FIELD_READER FALSE
#define BIND_SDLHapticCustom_fade_length_FIELD_WRITER FALSE
#define BIND_SDLHapticCustom_fade_level_FIELD_READER FALSE
#define BIND_SDLHapticCustom_fade_level_FIELD_WRITER FALSE
#define BIND_SDLHapticCustom_interval_FIELD_READER FALSE
#define BIND_SDLHapticCustom_interval_FIELD_WRITER FALSE
#define BIND_SDLHapticCustom_length_FIELD_READER FALSE
#define BIND_SDLHapticCustom_length_FIELD_WRITER FALSE
#define BIND_SDLHapticCustom_period_FIELD_READER FALSE
#define BIND_SDLHapticCustom_period_FIELD_WRITER FALSE
#define BIND_SDLHapticCustom_samples_FIELD_READER FALSE
#define BIND_SDLHapticCustom_samples_FIELD_WRITER FALSE
#define BIND_SDLHapticCustom_type_FIELD_READER FALSE
#define BIND_SDLHapticCustom_type_FIELD_WRITER FALSE

#define BIND_SDLHapticDirection_TYPE TRUE
#define BIND_SDLHapticDirection_INITIALIZE FALSE
#define BIND_SDLHapticDirection_dir_FIELD_READER FALSE
#define BIND_SDLHapticDirection_dir_FIELD_WRITER FALSE
#define BIND_SDLHapticDirection_type_FIELD_READER FALSE
#define BIND_SDLHapticDirection_type_FIELD_WRITER FALSE

#define BIND_SDLHapticLeftRight_TYPE TRUE
#define BIND_SDLHapticLeftRight_INITIALIZE FALSE
#define BIND_SDLHapticLeftRight_large_magnitude_FIELD_READER FALSE
#define BIND_SDLHapticLeftRight_large_magnitude_FIELD_WRITER FALSE
#define BIND_SDLHapticLeftRight_length_FIELD_READER FALSE
#define BIND_SDLHapticLeftRight_length_FIELD_WRITER FALSE
#define BIND_SDLHapticLeftRight_small_magnitude_FIELD_READER FALSE
#define BIND_SDLHapticLeftRight_small_magnitude_FIELD_WRITER FALSE
#define BIND_SDLHapticLeftRight_type_FIELD_READER FALSE
#define BIND_SDLHapticLeftRight_type_FIELD_WRITER FALSE

#define BIND_SDLHapticPeriodic_TYPE TRUE
#define BIND_SDLHapticPeriodic_INITIALIZE FALSE
#define BIND_SDLHapticPeriodic_attack_length_FIELD_READER FALSE
#define BIND_SDLHapticPeriodic_attack_length_FIELD_WRITER FALSE
#define BIND_SDLHapticPeriodic_attack_level_FIELD_READER FALSE
#define BIND_SDLHapticPeriodic_attack_level_FIELD_WRITER FALSE
#define BIND_SDLHapticPeriodic_button_FIELD_READER FALSE
#define BIND_SDLHapticPeriodic_button_FIELD_WRITER FALSE
#define BIND_SDLHapticPeriodic_delay_FIELD_READER FALSE
#define BIND_SDLHapticPeriodic_delay_FIELD_WRITER FALSE
#define BIND_SDLHapticPeriodic_direction_FIELD_READER FALSE
#define BIND_SDLHapticPeriodic_direction_FIELD_WRITER FALSE
#define BIND_SDLHapticPeriodic_fade_length_FIELD_READER FALSE
#define BIND_SDLHapticPeriodic_fade_length_FIELD_WRITER FALSE
#define BIND_SDLHapticPeriodic_fade_level_FIELD_READER FALSE
#define BIND_SDLHapticPeriodic_fade_level_FIELD_WRITER FALSE
#define BIND_SDLHapticPeriodic_interval_FIELD_READER FALSE
#define BIND_SDLHapticPeriodic_interval_FIELD_WRITER FALSE
#define BIND_SDLHapticPeriodic_length_FIELD_READER FALSE
#define BIND_SDLHapticPeriodic_length_FIELD_WRITER FALSE
#define BIND_SDLHapticPeriodic_magnitude_FIELD_READER FALSE
#define BIND_SDLHapticPeriodic_magnitude_FIELD_WRITER FALSE
#define BIND_SDLHapticPeriodic_offset_FIELD_READER FALSE
#define BIND_SDLHapticPeriodic_offset_FIELD_WRITER FALSE
#define BIND_SDLHapticPeriodic_period_FIELD_READER FALSE
#define BIND_SDLHapticPeriodic_period_FIELD_WRITER FALSE
#define BIND_SDLHapticPeriodic_phase_FIELD_READER FALSE
#define BIND_SDLHapticPeriodic_phase_FIELD_WRITER FALSE
#define BIND_SDLHapticPeriodic_type_FIELD_READER FALSE
#define BIND_SDLHapticPeriodic_type_FIELD_WRITER FALSE

#define BIND_SDLHapticRamp_TYPE TRUE
#define BIND_SDLHapticRamp_INITIALIZE FALSE
#define BIND_SDLHapticRamp_attack_length_FIELD_READER FALSE
#define BIND_SDLHapticRamp_attack_length_FIELD_WRITER FALSE
#define BIND_SDLHapticRamp_attack_level_FIELD_READER FALSE
#define BIND_SDLHapticRamp_attack_level_FIELD_WRITER FALSE
#define BIND_SDLHapticRamp_button_FIELD_READER FALSE
#define BIND_SDLHapticRamp_button_FIELD_WRITER FALSE
#define BIND_SDLHapticRamp_delay_FIELD_READER FALSE
#define BIND_SDLHapticRamp_delay_FIELD_WRITER FALSE
#define BIND_SDLHapticRamp_direction_FIELD_READER FALSE
#define BIND_SDLHapticRamp_direction_FIELD_WRITER FALSE
#define BIND_SDLHapticRamp_end_FIELD_READER FALSE
#define BIND_SDLHapticRamp_end_FIELD_WRITER FALSE
#define BIND_SDLHapticRamp_fade_length_FIELD_READER FALSE
#define BIND_SDLHapticRamp_fade_length_FIELD_WRITER FALSE
#define BIND_SDLHapticRamp_fade_level_FIELD_READER FALSE
#define BIND_SDLHapticRamp_fade_level_FIELD_WRITER FALSE
#define BIND_SDLHapticRamp_interval_FIELD_READER FALSE
#define BIND_SDLHapticRamp_interval_FIELD_WRITER FALSE
#define BIND_SDLHapticRamp_length_FIELD_READER FALSE
#define BIND_SDLHapticRamp_length_FIELD_WRITER FALSE
#define BIND_SDLHapticRamp_start_FIELD_READER FALSE
#define BIND_SDLHapticRamp_start_FIELD_WRITER FALSE
#define BIND_SDLHapticRamp_type_FIELD_READER FALSE
#define BIND_SDLHapticRamp_type_FIELD_WRITER FALSE

#define BIND_SDLJoyAxisEvent_TYPE TRUE
#define BIND_SDLJoyAxisEvent_INITIALIZE FALSE
#define BIND_SDLJoyAxisEvent_axis_FIELD_READER TRUE
#define BIND_SDLJoyAxisEvent_axis_FIELD_WRITER FALSE
#define BIND_SDLJoyAxisEvent_padding1_FIELD_READER TRUE
#define BIND_SDLJoyAxisEvent_padding1_FIELD_WRITER FALSE
#define BIND_SDLJoyAxisEvent_padding2_FIELD_READER TRUE
#define BIND_SDLJoyAxisEvent_padding2_FIELD_WRITER FALSE
#define BIND_SDLJoyAxisEvent_padding3_FIELD_READER TRUE
#define BIND_SDLJoyAxisEvent_padding3_FIELD_WRITER FALSE
#define BIND_SDLJoyAxisEvent_padding4_FIELD_READER TRUE
#define BIND_SDLJoyAxisEvent_padding4_FIELD_WRITER FALSE
#define BIND_SDLJoyAxisEvent_timestamp_FIELD_READER TRUE
#define BIND_SDLJoyAxisEvent_timestamp_FIELD_WRITER FALSE
#define BIND_SDLJoyAxisEvent_type_FIELD_READER TRUE
#define BIND_SDLJoyAxisEvent_type_FIELD_WRITER FALSE
#define BIND_SDLJoyAxisEvent_value_FIELD_READER TRUE
#define BIND_SDLJoyAxisEvent_value_FIELD_WRITER FALSE
#define BIND_SDLJoyAxisEvent_which_FIELD_READER TRUE
#define BIND_SDLJoyAxisEvent_which_FIELD_WRITER FALSE

#define BIND_SDLJoyBallEvent_TYPE TRUE
#define BIND_SDLJoyBallEvent_INITIALIZE FALSE
#define BIND_SDLJoyBallEvent_ball_FIELD_READER TRUE
#define BIND_SDLJoyBallEvent_ball_FIELD_WRITER FALSE
#define BIND_SDLJoyBallEvent_padding1_FIELD_READER TRUE
#define BIND_SDLJoyBallEvent_padding1_FIELD_WRITER FALSE
#define BIND_SDLJoyBallEvent_padding2_FIELD_READER TRUE
#define BIND_SDLJoyBallEvent_padding2_FIELD_WRITER FALSE
#define BIND_SDLJoyBallEvent_padding3_FIELD_READER TRUE
#define BIND_SDLJoyBallEvent_padding3_FIELD_WRITER FALSE
#define BIND_SDLJoyBallEvent_timestamp_FIELD_READER TRUE
#define BIND_SDLJoyBallEvent_timestamp_FIELD_WRITER FALSE
#define BIND_SDLJoyBallEvent_type_FIELD_READER TRUE
#define BIND_SDLJoyBallEvent_type_FIELD_WRITER FALSE
#define BIND_SDLJoyBallEvent_which_FIELD_READER TRUE
#define BIND_SDLJoyBallEvent_which_FIELD_WRITER FALSE
#define BIND_SDLJoyBallEvent_xrel_FIELD_READER TRUE
#define BIND_SDLJoyBallEvent_xrel_FIELD_WRITER FALSE
#define BIND_SDLJoyBallEvent_yrel_FIELD_READER TRUE
#define BIND_SDLJoyBallEvent_yrel_FIELD_WRITER FALSE

#define BIND_SDLJoyButtonEvent_TYPE TRUE
#define BIND_SDLJoyButtonEvent_INITIALIZE FALSE
#define BIND_SDLJoyButtonEvent_button_FIELD_READER TRUE
#define BIND_SDLJoyButtonEvent_button_FIELD_WRITER FALSE
#define BIND_SDLJoyButtonEvent_padding1_FIELD_READER TRUE
#define BIND_SDLJoyButtonEvent_padding1_FIELD_WRITER FALSE
#define BIND_SDLJoyButtonEvent_padding2_FIELD_READER TRUE
#define BIND_SDLJoyButtonEvent_padding2_FIELD_WRITER FALSE
#define BIND_SDLJoyButtonEvent_state_FIELD_READER TRUE
#define BIND_SDLJoyButtonEvent_state_FIELD_WRITER FALSE
#define BIND_SDLJoyButtonEvent_timestamp_FIELD_READER TRUE
#define BIND_SDLJoyButtonEvent_timestamp_FIELD_WRITER FALSE
#define BIND_SDLJoyButtonEvent_type_FIELD_READER TRUE
#define BIND_SDLJoyButtonEvent_type_FIELD_WRITER FALSE
#define BIND_SDLJoyButtonEvent_which_FIELD_READER TRUE
#define BIND_SDLJoyButtonEvent_which_FIELD_WRITER FALSE

#define BIND_SDLJoyDeviceEvent_TYPE TRUE
#define BIND_SDLJoyDeviceEvent_INITIALIZE FALSE
#define BIND_SDLJoyDeviceEvent_timestamp_FIELD_READER TRUE
#define BIND_SDLJoyDeviceEvent_timestamp_FIELD_WRITER FALSE
#define BIND_SDLJoyDeviceEvent_type_FIELD_READER TRUE
#define BIND_SDLJoyDeviceEvent_type_FIELD_WRITER FALSE
#define BIND_SDLJoyDeviceEvent_which_FIELD_READER TRUE
#define BIND_SDLJoyDeviceEvent_which_FIELD_WRITER FALSE

#define BIND_SDLJoyHatEvent_TYPE TRUE
#define BIND_SDLJoyHatEvent_INITIALIZE FALSE
#define BIND_SDLJoyHatEvent_hat_FIELD_READER TRUE
#define BIND_SDLJoyHatEvent_hat_FIELD_WRITER FALSE
#define BIND_SDLJoyHatEvent_padding1_FIELD_READER TRUE
#define BIND_SDLJoyHatEvent_padding1_FIELD_WRITER FALSE
#define BIND_SDLJoyHatEvent_padding2_FIELD_READER TRUE
#define BIND_SDLJoyHatEvent_padding2_FIELD_WRITER FALSE
#define BIND_SDLJoyHatEvent_timestamp_FIELD_READER TRUE
#define BIND_SDLJoyHatEvent_timestamp_FIELD_WRITER FALSE
#define BIND_SDLJoyHatEvent_type_FIELD_READER TRUE
#define BIND_SDLJoyHatEvent_type_FIELD_WRITER FALSE
#define BIND_SDLJoyHatEvent_value_FIELD_READER TRUE
#define BIND_SDLJoyHatEvent_value_FIELD_WRITER FALSE
#define BIND_SDLJoyHatEvent_which_FIELD_READER TRUE
#define BIND_SDLJoyHatEvent_which_FIELD_WRITER FALSE

#define BIND_SDLJoylistItem_TYPE TRUE
#define BIND_SDLJoylistItem_INITIALIZE FALSE

#define BIND_SDLKeyboardEvent_TYPE TRUE
#define BIND_SDLKeyboardEvent_INITIALIZE FALSE
#define BIND_SDLKeyboardEvent_keysym_FIELD_READER TRUE
#define BIND_SDLKeyboardEvent_keysym_FIELD_WRITER FALSE
#define BIND_SDLKeyboardEvent_padding2_FIELD_READER TRUE
#define BIND_SDLKeyboardEvent_padding2_FIELD_WRITER FALSE
#define BIND_SDLKeyboardEvent_padding3_FIELD_READER TRUE
#define BIND_SDLKeyboardEvent_padding3_FIELD_WRITER FALSE
#define BIND_SDLKeyboardEvent_repeat_FIELD_READER TRUE
#define BIND_SDLKeyboardEvent_repeat_FIELD_WRITER FALSE
#define BIND_SDLKeyboardEvent_state_FIELD_READER TRUE
#define BIND_SDLKeyboardEvent_state_FIELD_WRITER FALSE
#define BIND_SDLKeyboardEvent_timestamp_FIELD_READER TRUE
#define BIND_SDLKeyboardEvent_timestamp_FIELD_WRITER FALSE
#define BIND_SDLKeyboardEvent_type_FIELD_READER TRUE
#define BIND_SDLKeyboardEvent_type_FIELD_WRITER FALSE
#define BIND_SDLKeyboardEvent_windowID_FIELD_READER TRUE
#define BIND_SDLKeyboardEvent_windowID_FIELD_WRITER FALSE

#define BIND_SDLKeysym_TYPE TRUE
#define BIND_SDLKeysym_INITIALIZE FALSE
#define BIND_SDLKeysym_mod_FIELD_READER TRUE
#define BIND_SDLKeysym_mod_FIELD_WRITER FALSE
#define BIND_SDLKeysym_scancode_FIELD_READER TRUE
#define BIND_SDLKeysym_scancode_FIELD_WRITER FALSE
#define BIND_SDLKeysym_sym_FIELD_READER TRUE
#define BIND_SDLKeysym_sym_FIELD_WRITER FALSE
#define BIND_SDLKeysym_unused_FIELD_READER FALSE
#define BIND_SDLKeysym_unused_FIELD_WRITER FALSE

#define BIND_SDLMouseButtonEvent_TYPE TRUE
#define BIND_SDLMouseButtonEvent_INITIALIZE FALSE
#define BIND_SDLMouseButtonEvent_button_FIELD_READER TRUE
#define BIND_SDLMouseButtonEvent_button_FIELD_WRITER FALSE
#define BIND_SDLMouseButtonEvent_clicks_FIELD_READER TRUE
#define BIND_SDLMouseButtonEvent_clicks_FIELD_WRITER FALSE
#define BIND_SDLMouseButtonEvent_padding1_FIELD_READER TRUE
#define BIND_SDLMouseButtonEvent_padding1_FIELD_WRITER FALSE
#define BIND_SDLMouseButtonEvent_state_FIELD_READER TRUE
#define BIND_SDLMouseButtonEvent_state_FIELD_WRITER FALSE
#define BIND_SDLMouseButtonEvent_timestamp_FIELD_READER TRUE
#define BIND_SDLMouseButtonEvent_timestamp_FIELD_WRITER FALSE
#define BIND_SDLMouseButtonEvent_type_FIELD_READER TRUE
#define BIND_SDLMouseButtonEvent_type_FIELD_WRITER FALSE
#define BIND_SDLMouseButtonEvent_which_FIELD_READER TRUE
#define BIND_SDLMouseButtonEvent_which_FIELD_WRITER FALSE
#define BIND_SDLMouseButtonEvent_windowID_FIELD_READER TRUE
#define BIND_SDLMouseButtonEvent_windowID_FIELD_WRITER FALSE
#define BIND_SDLMouseButtonEvent_x_FIELD_READER TRUE
#define BIND_SDLMouseButtonEvent_x_FIELD_WRITER FALSE
#define BIND_SDLMouseButtonEvent_y_FIELD_READER TRUE
#define BIND_SDLMouseButtonEvent_y_FIELD_WRITER FALSE

#define BIND_SDLMouseMotionEvent_TYPE TRUE
#define BIND_SDLMouseMotionEvent_INITIALIZE FALSE
#define BIND_SDLMouseMotionEvent_state_FIELD_READER TRUE
#define BIND_SDLMouseMotionEvent_state_FIELD_WRITER FALSE
#define BIND_SDLMouseMotionEvent_timestamp_FIELD_READER TRUE
#define BIND_SDLMouseMotionEvent_timestamp_FIELD_WRITER FALSE
#define BIND_SDLMouseMotionEvent_type_FIELD_READER TRUE
#define BIND_SDLMouseMotionEvent_type_FIELD_WRITER FALSE
#define BIND_SDLMouseMotionEvent_which_FIELD_READER TRUE
#define BIND_SDLMouseMotionEvent_which_FIELD_WRITER FALSE
#define BIND_SDLMouseMotionEvent_windowID_FIELD_READER TRUE
#define BIND_SDLMouseMotionEvent_windowID_FIELD_WRITER FALSE
#define BIND_SDLMouseMotionEvent_x_FIELD_READER TRUE
#define BIND_SDLMouseMotionEvent_x_FIELD_WRITER FALSE
#define BIND_SDLMouseMotionEvent_xrel_FIELD_READER TRUE
#define BIND_SDLMouseMotionEvent_xrel_FIELD_WRITER FALSE
#define BIND_SDLMouseMotionEvent_y_FIELD_READER TRUE
#define BIND_SDLMouseMotionEvent_y_FIELD_WRITER FALSE
#define BIND_SDLMouseMotionEvent_yrel_FIELD_READER TRUE
#define BIND_SDLMouseMotionEvent_yrel_FIELD_WRITER FALSE

#define BIND_SDLMouseWheelEvent_TYPE TRUE
#define BIND_SDLMouseWheelEvent_INITIALIZE FALSE
#define BIND_SDLMouseWheelEvent_timestamp_FIELD_READER TRUE
#define BIND_SDLMouseWheelEvent_timestamp_FIELD_WRITER FALSE
#define BIND_SDLMouseWheelEvent_type_FIELD_READER TRUE
#define BIND_SDLMouseWheelEvent_type_FIELD_WRITER FALSE
#define BIND_SDLMouseWheelEvent_which_FIELD_READER TRUE
#define BIND_SDLMouseWheelEvent_which_FIELD_WRITER FALSE
#define BIND_SDLMouseWheelEvent_windowID_FIELD_READER TRUE
#define BIND_SDLMouseWheelEvent_windowID_FIELD_WRITER FALSE
#define BIND_SDLMouseWheelEvent_x_FIELD_READER TRUE
#define BIND_SDLMouseWheelEvent_x_FIELD_WRITER FALSE
#define BIND_SDLMouseWheelEvent_y_FIELD_READER TRUE
#define BIND_SDLMouseWheelEvent_y_FIELD_WRITER FALSE

#define BIND_SDLMultiGestureEvent_TYPE TRUE
#define BIND_SDLMultiGestureEvent_INITIALIZE FALSE
#define BIND_SDLMultiGestureEvent_dDist_FIELD_READER TRUE
#define BIND_SDLMultiGestureEvent_dDist_FIELD_WRITER FALSE
#define BIND_SDLMultiGestureEvent_dTheta_FIELD_READER TRUE
#define BIND_SDLMultiGestureEvent_dTheta_FIELD_WRITER FALSE
#define BIND_SDLMultiGestureEvent_numFingers_FIELD_READER TRUE
#define BIND_SDLMultiGestureEvent_numFingers_FIELD_WRITER FALSE
#define BIND_SDLMultiGestureEvent_padding_FIELD_READER TRUE
#define BIND_SDLMultiGestureEvent_padding_FIELD_WRITER FALSE
#define BIND_SDLMultiGestureEvent_timestamp_FIELD_READER TRUE
#define BIND_SDLMultiGestureEvent_timestamp_FIELD_WRITER FALSE
#define BIND_SDLMultiGestureEvent_touchId_FIELD_READER FALSE
#define BIND_SDLMultiGestureEvent_touchId_FIELD_WRITER FALSE
#define BIND_SDLMultiGestureEvent_type_FIELD_READER TRUE
#define BIND_SDLMultiGestureEvent_type_FIELD_WRITER FALSE
#define BIND_SDLMultiGestureEvent_x_FIELD_READER TRUE
#define BIND_SDLMultiGestureEvent_x_FIELD_WRITER FALSE
#define BIND_SDLMultiGestureEvent_y_FIELD_READER TRUE
#define BIND_SDLMultiGestureEvent_y_FIELD_WRITER FALSE

#define BIND_SDLMutex_TYPE TRUE
#define BIND_SDLMutex_INITIALIZE FALSE
#define BIND_SDLMutex_id_FIELD_READER FALSE
#define BIND_SDLMutex_id_FIELD_WRITER FALSE
#define BIND_SDLMutex_std_FIELD_READER FALSE
#define BIND_SDLMutex_std_FIELD_WRITER FALSE

#define BIND_SDLOSEvent_TYPE TRUE
#define BIND_SDLOSEvent_INITIALIZE FALSE
#define BIND_SDLOSEvent_timestamp_FIELD_READER TRUE
#define BIND_SDLOSEvent_timestamp_FIELD_WRITER FALSE
#define BIND_SDLOSEvent_type_FIELD_READER TRUE
#define BIND_SDLOSEvent_type_FIELD_WRITER FALSE

#define BIND_SDLPalette_TYPE TRUE
#define BIND_SDLPalette_INITIALIZE FALSE
#define BIND_SDLPalette_colors_FIELD_READER FALSE
#define BIND_SDLPalette_colors_FIELD_WRITER FALSE
#define BIND_SDLPalette_ncolors_FIELD_READER FALSE
#define BIND_SDLPalette_ncolors_FIELD_WRITER FALSE
#define BIND_SDLPalette_refcount_FIELD_READER FALSE
#define BIND_SDLPalette_refcount_FIELD_WRITER FALSE
#define BIND_SDLPalette_version_FIELD_READER FALSE
#define BIND_SDLPalette_version_FIELD_WRITER FALSE

#define BIND_SDLPixelFormat_TYPE TRUE
#define BIND_SDLPixelFormat_INITIALIZE FALSE
#define BIND_SDLPixelFormat_Aloss_FIELD_READER FALSE
#define BIND_SDLPixelFormat_Aloss_FIELD_WRITER FALSE
#define BIND_SDLPixelFormat_Amask_FIELD_READER FALSE
#define BIND_SDLPixelFormat_Amask_FIELD_WRITER FALSE
#define BIND_SDLPixelFormat_Ashift_FIELD_READER FALSE
#define BIND_SDLPixelFormat_Ashift_FIELD_WRITER FALSE
#define BIND_SDLPixelFormat_BitsPerPixel_FIELD_READER FALSE
#define BIND_SDLPixelFormat_BitsPerPixel_FIELD_WRITER FALSE
#define BIND_SDLPixelFormat_Bloss_FIELD_READER FALSE
#define BIND_SDLPixelFormat_Bloss_FIELD_WRITER FALSE
#define BIND_SDLPixelFormat_Bmask_FIELD_READER FALSE
#define BIND_SDLPixelFormat_Bmask_FIELD_WRITER FALSE
#define BIND_SDLPixelFormat_Bshift_FIELD_READER FALSE
#define BIND_SDLPixelFormat_Bshift_FIELD_WRITER FALSE
#define BIND_SDLPixelFormat_BytesPerPixel_FIELD_READER FALSE
#define BIND_SDLPixelFormat_BytesPerPixel_FIELD_WRITER FALSE
#define BIND_SDLPixelFormat_Gloss_FIELD_READER FALSE
#define BIND_SDLPixelFormat_Gloss_FIELD_WRITER FALSE
#define BIND_SDLPixelFormat_Gmask_FIELD_READER FALSE
#define BIND_SDLPixelFormat_Gmask_FIELD_WRITER FALSE
#define BIND_SDLPixelFormat_Gshift_FIELD_READER FALSE
#define BIND_SDLPixelFormat_Gshift_FIELD_WRITER FALSE
#define BIND_SDLPixelFormat_Rloss_FIELD_READER FALSE
#define BIND_SDLPixelFormat_Rloss_FIELD_WRITER FALSE
#define BIND_SDLPixelFormat_Rmask_FIELD_READER FALSE
#define BIND_SDLPixelFormat_Rmask_FIELD_WRITER FALSE
#define BIND_SDLPixelFormat_Rshift_FIELD_READER FALSE
#define BIND_SDLPixelFormat_Rshift_FIELD_WRITER FALSE
#define BIND_SDLPixelFormat_format_FIELD_READER FALSE
#define BIND_SDLPixelFormat_format_FIELD_WRITER FALSE
#define BIND_SDLPixelFormat_next_FIELD_READER FALSE
#define BIND_SDLPixelFormat_next_FIELD_WRITER FALSE
#define BIND_SDLPixelFormat_padding_FIELD_READER FALSE
#define BIND_SDLPixelFormat_padding_FIELD_WRITER FALSE
#define BIND_SDLPixelFormat_palette_FIELD_READER FALSE
#define BIND_SDLPixelFormat_palette_FIELD_WRITER FALSE
#define BIND_SDLPixelFormat_refcount_FIELD_READER FALSE
#define BIND_SDLPixelFormat_refcount_FIELD_WRITER FALSE

#define BIND_SDLPoint_TYPE TRUE
#define BIND_SDLPoint_INITIALIZE FALSE
#define BIND_SDLPoint_x_FIELD_READER FALSE
#define BIND_SDLPoint_x_FIELD_WRITER FALSE
#define BIND_SDLPoint_y_FIELD_READER FALSE
#define BIND_SDLPoint_y_FIELD_WRITER FALSE

#define BIND_SDLPrivateAudioData_TYPE TRUE
#define BIND_SDLPrivateAudioData_INITIALIZE FALSE
#define BIND_SDLPrivateAudioData_aud_FIELD_READER FALSE
#define BIND_SDLPrivateAudioData_aud_FIELD_WRITER FALSE
#define BIND_SDLPrivateAudioData_audioUnit_FIELD_READER FALSE
#define BIND_SDLPrivateAudioData_audioUnit_FIELD_WRITER FALSE
#define BIND_SDLPrivateAudioData_audioUnitOpened_FIELD_READER FALSE
#define BIND_SDLPrivateAudioData_audioUnitOpened_FIELD_WRITER FALSE
#define BIND_SDLPrivateAudioData_audio_fd_FIELD_READER FALSE
#define BIND_SDLPrivateAudioData_audio_fd_FIELD_WRITER FALSE
#define BIND_SDLPrivateAudioData_audio_fd_FIELD_READER FALSE
#define BIND_SDLPrivateAudioData_audio_fd_FIELD_WRITER FALSE
#define BIND_SDLPrivateAudioData_audio_fd_FIELD_READER FALSE
#define BIND_SDLPrivateAudioData_audio_fd_FIELD_WRITER FALSE
#define BIND_SDLPrivateAudioData_audio_fd_FIELD_READER FALSE
#define BIND_SDLPrivateAudioData_audio_fd_FIELD_WRITER FALSE
#define BIND_SDLPrivateAudioData_audio_fd_FIELD_READER FALSE
#define BIND_SDLPrivateAudioData_audio_fd_FIELD_WRITER FALSE
#define BIND_SDLPrivateAudioData_audio_fd_FIELD_READER FALSE
#define BIND_SDLPrivateAudioData_audio_fd_FIELD_WRITER FALSE
#define BIND_SDLPrivateAudioData_audio_fmt_FIELD_READER FALSE
#define BIND_SDLPrivateAudioData_audio_fmt_FIELD_WRITER FALSE
#define BIND_SDLPrivateAudioData_audio_handle_FIELD_READER FALSE
#define BIND_SDLPrivateAudioData_audio_handle_FIELD_WRITER FALSE
#define BIND_SDLPrivateAudioData_audio_obj_FIELD_READER FALSE
#define BIND_SDLPrivateAudioData_audio_obj_FIELD_WRITER FALSE
#define BIND_SDLPrivateAudioData_audio_sem_FIELD_READER FALSE
#define BIND_SDLPrivateAudioData_audio_sem_FIELD_WRITER FALSE
#define BIND_SDLPrivateAudioData_bps_FIELD_READER FALSE
#define BIND_SDLPrivateAudioData_bps_FIELD_WRITER FALSE
#define BIND_SDLPrivateAudioData_buf_free_FIELD_READER FALSE
#define BIND_SDLPrivateAudioData_buf_free_FIELD_WRITER FALSE
#define BIND_SDLPrivateAudioData_buffer_FIELD_READER FALSE
#define BIND_SDLPrivateAudioData_buffer_FIELD_WRITER FALSE
#define BIND_SDLPrivateAudioData_bufferOffset_FIELD_READER FALSE
#define BIND_SDLPrivateAudioData_bufferOffset_FIELD_WRITER FALSE
#define BIND_SDLPrivateAudioData_bufferSize_FIELD_READER FALSE
#define BIND_SDLPrivateAudioData_bufferSize_FIELD_WRITER FALSE
#define BIND_SDLPrivateAudioData_cardno_FIELD_READER FALSE
#define BIND_SDLPrivateAudioData_cardno_FIELD_WRITER FALSE
#define BIND_SDLPrivateAudioData_channel_FIELD_READER FALSE
#define BIND_SDLPrivateAudioData_channel_FIELD_WRITER FALSE
#define BIND_SDLPrivateAudioData_context_FIELD_READER FALSE
#define BIND_SDLPrivateAudioData_context_FIELD_WRITER FALSE
#define BIND_SDLPrivateAudioData_dev_FIELD_READER FALSE
#define BIND_SDLPrivateAudioData_dev_FIELD_WRITER FALSE
#define BIND_SDLPrivateAudioData_dev_FIELD_READER FALSE
#define BIND_SDLPrivateAudioData_dev_FIELD_WRITER FALSE
#define BIND_SDLPrivateAudioData_deviceID_FIELD_READER FALSE
#define BIND_SDLPrivateAudioData_deviceID_FIELD_WRITER FALSE
#define BIND_SDLPrivateAudioData_deviceno_FIELD_READER FALSE
#define BIND_SDLPrivateAudioData_deviceno_FIELD_WRITER FALSE
#define BIND_SDLPrivateAudioData_flow_FIELD_READER FALSE
#define BIND_SDLPrivateAudioData_flow_FIELD_WRITER FALSE
#define BIND_SDLPrivateAudioData_fragsize_FIELD_READER FALSE
#define BIND_SDLPrivateAudioData_fragsize_FIELD_WRITER FALSE
#define BIND_SDLPrivateAudioData_frame_ticks_FIELD_READER FALSE
#define BIND_SDLPrivateAudioData_frame_ticks_FIELD_WRITER FALSE
#define BIND_SDLPrivateAudioData_frame_ticks_FIELD_READER FALSE
#define BIND_SDLPrivateAudioData_frame_ticks_FIELD_WRITER FALSE
#define BIND_SDLPrivateAudioData_frame_ticks_FIELD_READER FALSE
#define BIND_SDLPrivateAudioData_frame_ticks_FIELD_WRITER FALSE
#define BIND_SDLPrivateAudioData_frame_ticks_FIELD_READER FALSE
#define BIND_SDLPrivateAudioData_frame_ticks_FIELD_WRITER FALSE
#define BIND_SDLPrivateAudioData_frequency_FIELD_READER FALSE
#define BIND_SDLPrivateAudioData_frequency_FIELD_WRITER FALSE
#define BIND_SDLPrivateAudioData_fs_FIELD_READER FALSE
#define BIND_SDLPrivateAudioData_fs_FIELD_WRITER FALSE
#define BIND_SDLPrivateAudioData_hin_FIELD_READER FALSE
#define BIND_SDLPrivateAudioData_hin_FIELD_WRITER FALSE
#define BIND_SDLPrivateAudioData_hout_FIELD_READER FALSE
#define BIND_SDLPrivateAudioData_hout_FIELD_WRITER FALSE
#define BIND_SDLPrivateAudioData_initial_calls_FIELD_READER FALSE
#define BIND_SDLPrivateAudioData_initial_calls_FIELD_WRITER FALSE
#define BIND_SDLPrivateAudioData_iscapture_FIELD_READER FALSE
#define BIND_SDLPrivateAudioData_iscapture_FIELD_WRITER FALSE
#define BIND_SDLPrivateAudioData_last_tv_FIELD_READER FALSE
#define BIND_SDLPrivateAudioData_last_tv_FIELD_WRITER FALSE
#define BIND_SDLPrivateAudioData_lastchunk_FIELD_READER FALSE
#define BIND_SDLPrivateAudioData_lastchunk_FIELD_WRITER FALSE
#define BIND_SDLPrivateAudioData_locked_buf_FIELD_READER FALSE
#define BIND_SDLPrivateAudioData_locked_buf_FIELD_WRITER FALSE
#define BIND_SDLPrivateAudioData_mainloop_FIELD_READER FALSE
#define BIND_SDLPrivateAudioData_mainloop_FIELD_WRITER FALSE
#define BIND_SDLPrivateAudioData_mainloop_api_FIELD_READER FALSE
#define BIND_SDLPrivateAudioData_mainloop_api_FIELD_WRITER FALSE
#define BIND_SDLPrivateAudioData_mixbuf_FIELD_READER FALSE
#define BIND_SDLPrivateAudioData_mixbuf_FIELD_WRITER FALSE
#define BIND_SDLPrivateAudioData_mixbuf_FIELD_READER FALSE
#define BIND_SDLPrivateAudioData_mixbuf_FIELD_WRITER FALSE
#define BIND_SDLPrivateAudioData_mixbuf_FIELD_READER FALSE
#define BIND_SDLPrivateAudioData_mixbuf_FIELD_WRITER FALSE
#define BIND_SDLPrivateAudioData_mixbuf_FIELD_READER FALSE
#define BIND_SDLPrivateAudioData_mixbuf_FIELD_WRITER FALSE
#define BIND_SDLPrivateAudioData_mixbuf_FIELD_READER FALSE
#define BIND_SDLPrivateAudioData_mixbuf_FIELD_WRITER FALSE
#define BIND_SDLPrivateAudioData_mixbuf_FIELD_READER FALSE
#define BIND_SDLPrivateAudioData_mixbuf_FIELD_WRITER FALSE
#define BIND_SDLPrivateAudioData_mixbuf_FIELD_READER FALSE
#define BIND_SDLPrivateAudioData_mixbuf_FIELD_WRITER FALSE
#define BIND_SDLPrivateAudioData_mixbuf_FIELD_READER FALSE
#define BIND_SDLPrivateAudioData_mixbuf_FIELD_WRITER FALSE
#define BIND_SDLPrivateAudioData_mixbuf_FIELD_READER FALSE
#define BIND_SDLPrivateAudioData_mixbuf_FIELD_WRITER FALSE
#define BIND_SDLPrivateAudioData_mixbuf_FIELD_READER FALSE
#define BIND_SDLPrivateAudioData_mixbuf_FIELD_WRITER FALSE
#define BIND_SDLPrivateAudioData_mixbuf_FIELD_READER FALSE
#define BIND_SDLPrivateAudioData_mixbuf_FIELD_WRITER FALSE
#define BIND_SDLPrivateAudioData_mixbuf_FIELD_READER FALSE
#define BIND_SDLPrivateAudioData_mixbuf_FIELD_WRITER FALSE
#define BIND_SDLPrivateAudioData_mixbuf_FIELD_READER FALSE
#define BIND_SDLPrivateAudioData_mixbuf_FIELD_WRITER FALSE
#define BIND_SDLPrivateAudioData_mixbuf_FIELD_READER FALSE
#define BIND_SDLPrivateAudioData_mixbuf_FIELD_WRITER FALSE
#define BIND_SDLPrivateAudioData_mixbuf_FIELD_READER FALSE
#define BIND_SDLPrivateAudioData_mixbuf_FIELD_WRITER FALSE
#define BIND_SDLPrivateAudioData_mixbufs_FIELD_READER FALSE
#define BIND_SDLPrivateAudioData_mixbufs_FIELD_WRITER FALSE
#define BIND_SDLPrivateAudioData_mixlen_FIELD_READER FALSE
#define BIND_SDLPrivateAudioData_mixlen_FIELD_WRITER FALSE
#define BIND_SDLPrivateAudioData_mixlen_FIELD_READER FALSE
#define BIND_SDLPrivateAudioData_mixlen_FIELD_WRITER FALSE
#define BIND_SDLPrivateAudioData_mixlen_FIELD_READER FALSE
#define BIND_SDLPrivateAudioData_mixlen_FIELD_WRITER FALSE
#define BIND_SDLPrivateAudioData_mixlen_FIELD_READER FALSE
#define BIND_SDLPrivateAudioData_mixlen_FIELD_WRITER FALSE
#define BIND_SDLPrivateAudioData_mixlen_FIELD_READER FALSE
#define BIND_SDLPrivateAudioData_mixlen_FIELD_WRITER FALSE
#define BIND_SDLPrivateAudioData_mixlen_FIELD_READER FALSE
#define BIND_SDLPrivateAudioData_mixlen_FIELD_WRITER FALSE
#define BIND_SDLPrivateAudioData_mixlen_FIELD_READER FALSE
#define BIND_SDLPrivateAudioData_mixlen_FIELD_WRITER FALSE
#define BIND_SDLPrivateAudioData_mixlen_FIELD_READER FALSE
#define BIND_SDLPrivateAudioData_mixlen_FIELD_WRITER FALSE
#define BIND_SDLPrivateAudioData_mixlen_FIELD_READER FALSE
#define BIND_SDLPrivateAudioData_mixlen_FIELD_WRITER FALSE
#define BIND_SDLPrivateAudioData_mixlen_FIELD_READER FALSE
#define BIND_SDLPrivateAudioData_mixlen_FIELD_WRITER FALSE
#define BIND_SDLPrivateAudioData_mixlen_FIELD_READER FALSE
#define BIND_SDLPrivateAudioData_mixlen_FIELD_WRITER FALSE
#define BIND_SDLPrivateAudioData_mixlen_FIELD_READER FALSE
#define BIND_SDLPrivateAudioData_mixlen_FIELD_WRITER FALSE
#define BIND_SDLPrivateAudioData_mixlen_FIELD_READER FALSE
#define BIND_SDLPrivateAudioData_mixlen_FIELD_WRITER FALSE
#define BIND_SDLPrivateAudioData_mixsamples_FIELD_READER FALSE
#define BIND_SDLPrivateAudioData_mixsamples_FIELD_WRITER FALSE
#define BIND_SDLPrivateAudioData_next_buffer_FIELD_READER FALSE
#define BIND_SDLPrivateAudioData_next_buffer_FIELD_WRITER FALSE
#define BIND_SDLPrivateAudioData_next_buffer_FIELD_READER FALSE
#define BIND_SDLPrivateAudioData_next_buffer_FIELD_WRITER FALSE
#define BIND_SDLPrivateAudioData_next_frame_FIELD_READER FALSE
#define BIND_SDLPrivateAudioData_next_frame_FIELD_WRITER FALSE
#define BIND_SDLPrivateAudioData_next_frame_FIELD_READER FALSE
#define BIND_SDLPrivateAudioData_next_frame_FIELD_WRITER FALSE
#define BIND_SDLPrivateAudioData_next_frame_FIELD_READER FALSE
#define BIND_SDLPrivateAudioData_next_frame_FIELD_WRITER FALSE
#define BIND_SDLPrivateAudioData_next_frame_FIELD_READER FALSE
#define BIND_SDLPrivateAudioData_next_frame_FIELD_WRITER FALSE
#define BIND_SDLPrivateAudioData_num_buffers_FIELD_READER FALSE
#define BIND_SDLPrivateAudioData_num_buffers_FIELD_WRITER FALSE
#define BIND_SDLPrivateAudioData_output_FIELD_READER FALSE
#define BIND_SDLPrivateAudioData_output_FIELD_WRITER FALSE
#define BIND_SDLPrivateAudioData_parent_FIELD_READER FALSE
#define BIND_SDLPrivateAudioData_parent_FIELD_WRITER FALSE
#define BIND_SDLPrivateAudioData_parent_FIELD_READER FALSE
#define BIND_SDLPrivateAudioData_parent_FIELD_WRITER FALSE
#define BIND_SDLPrivateAudioData_parent_FIELD_READER FALSE
#define BIND_SDLPrivateAudioData_parent_FIELD_WRITER FALSE
#define BIND_SDLPrivateAudioData_pcm_buf_FIELD_READER FALSE
#define BIND_SDLPrivateAudioData_pcm_buf_FIELD_WRITER FALSE
#define BIND_SDLPrivateAudioData_pcm_handle_FIELD_READER FALSE
#define BIND_SDLPrivateAudioData_pcm_handle_FIELD_WRITER FALSE
#define BIND_SDLPrivateAudioData_pcm_len_FIELD_READER FALSE
#define BIND_SDLPrivateAudioData_pcm_len_FIELD_WRITER FALSE
#define BIND_SDLPrivateAudioData_rawbuf_FIELD_READER FALSE
#define BIND_SDLPrivateAudioData_rawbuf_FIELD_WRITER FALSE
#define BIND_SDLPrivateAudioData_really_FIELD_READER FALSE
#define BIND_SDLPrivateAudioData_really_FIELD_WRITER FALSE
#define BIND_SDLPrivateAudioData_sound_FIELD_READER FALSE
#define BIND_SDLPrivateAudioData_sound_FIELD_WRITER FALSE
#define BIND_SDLPrivateAudioData_stream_FIELD_READER FALSE
#define BIND_SDLPrivateAudioData_stream_FIELD_WRITER FALSE
#define BIND_SDLPrivateAudioData_stream_FIELD_READER FALSE
#define BIND_SDLPrivateAudioData_stream_FIELD_WRITER FALSE
#define BIND_SDLPrivateAudioData_stream_FIELD_READER FALSE
#define BIND_SDLPrivateAudioData_stream_FIELD_WRITER FALSE
#define BIND_SDLPrivateAudioData_timeout_on_wait_FIELD_READER FALSE
#define BIND_SDLPrivateAudioData_timeout_on_wait_FIELD_WRITER FALSE
#define BIND_SDLPrivateAudioData_ulaw_buf_FIELD_READER FALSE
#define BIND_SDLPrivateAudioData_ulaw_buf_FIELD_WRITER FALSE
#define BIND_SDLPrivateAudioData_ulaw_only_FIELD_READER FALSE
#define BIND_SDLPrivateAudioData_ulaw_only_FIELD_WRITER FALSE
#define BIND_SDLPrivateAudioData_wavebuf_FIELD_READER FALSE
#define BIND_SDLPrivateAudioData_wavebuf_FIELD_WRITER FALSE
#define BIND_SDLPrivateAudioData_write_delay_FIELD_READER FALSE
#define BIND_SDLPrivateAudioData_write_delay_FIELD_WRITER FALSE
#define BIND_SDLPrivateAudioData_write_delay_FIELD_READER FALSE
#define BIND_SDLPrivateAudioData_write_delay_FIELD_WRITER FALSE
#define BIND_SDLPrivateAudioData_written_FIELD_READER FALSE
#define BIND_SDLPrivateAudioData_written_FIELD_WRITER FALSE
#define BIND_SDLPrivateAudioData_written_FIELD_READER FALSE
#define BIND_SDLPrivateAudioData_written_FIELD_WRITER FALSE

#define BIND_SDLPrivateGLESData_TYPE TRUE
#define BIND_SDLPrivateGLESData_INITIALIZE FALSE

#define BIND_SDLQuitEvent_TYPE TRUE
#define BIND_SDLQuitEvent_INITIALIZE FALSE
#define BIND_SDLQuitEvent_timestamp_FIELD_READER TRUE
#define BIND_SDLQuitEvent_timestamp_FIELD_WRITER FALSE
#define BIND_SDLQuitEvent_type_FIELD_READER TRUE
#define BIND_SDLQuitEvent_type_FIELD_WRITER FALSE

#define BIND_SDLRect_TYPE TRUE
#define BIND_SDLRect_INITIALIZE FALSE
#define BIND_SDLRect_h_FIELD_READER FALSE
#define BIND_SDLRect_h_FIELD_WRITER FALSE
#define BIND_SDLRect_w_FIELD_READER FALSE
#define BIND_SDLRect_w_FIELD_WRITER FALSE
#define BIND_SDLRect_x_FIELD_READER FALSE
#define BIND_SDLRect_x_FIELD_WRITER FALSE
#define BIND_SDLRect_y_FIELD_READER FALSE
#define BIND_SDLRect_y_FIELD_WRITER FALSE

#define BIND_SDLRenderDriver_TYPE TRUE
#define BIND_SDLRenderDriver_INITIALIZE FALSE
#define BIND_SDLRenderDriver_CreateRenderer_FIELD_READER FALSE
#define BIND_SDLRenderDriver_CreateRenderer_FIELD_WRITER FALSE
#define BIND_SDLRenderDriver_info_FIELD_READER FALSE
#define BIND_SDLRenderDriver_info_FIELD_WRITER FALSE

#define BIND_SDLRenderer_TYPE TRUE
#define BIND_SDLRenderer_INITIALIZE FALSE
#define BIND_SDLRenderer_CreateTexture_FIELD_READER FALSE
#define BIND_SDLRenderer_CreateTexture_FIELD_WRITER FALSE
#define BIND_SDLRenderer_DestroyRenderer_FIELD_READER FALSE
#define BIND_SDLRenderer_DestroyRenderer_FIELD_WRITER FALSE
#define BIND_SDLRenderer_DestroyTexture_FIELD_READER FALSE
#define BIND_SDLRenderer_DestroyTexture_FIELD_WRITER FALSE
#define BIND_SDLRenderer_GL_BindTexture_FIELD_READER FALSE
#define BIND_SDLRenderer_GL_BindTexture_FIELD_WRITER FALSE
#define BIND_SDLRenderer_GL_UnbindTexture_FIELD_READER FALSE
#define BIND_SDLRenderer_GL_UnbindTexture_FIELD_WRITER FALSE
#define BIND_SDLRenderer_GetOutputSize_FIELD_READER FALSE
#define BIND_SDLRenderer_GetOutputSize_FIELD_WRITER FALSE
#define BIND_SDLRenderer_LockTexture_FIELD_READER FALSE
#define BIND_SDLRenderer_LockTexture_FIELD_WRITER FALSE
#define BIND_SDLRenderer_RenderClear_FIELD_READER FALSE
#define BIND_SDLRenderer_RenderClear_FIELD_WRITER FALSE
#define BIND_SDLRenderer_RenderCopy_FIELD_READER FALSE
#define BIND_SDLRenderer_RenderCopy_FIELD_WRITER FALSE
#define BIND_SDLRenderer_RenderCopyEx_FIELD_READER FALSE
#define BIND_SDLRenderer_RenderCopyEx_FIELD_WRITER FALSE
#define BIND_SDLRenderer_RenderDrawLines_FIELD_READER FALSE
#define BIND_SDLRenderer_RenderDrawLines_FIELD_WRITER FALSE
#define BIND_SDLRenderer_RenderDrawPoints_FIELD_READER FALSE
#define BIND_SDLRenderer_RenderDrawPoints_FIELD_WRITER FALSE
#define BIND_SDLRenderer_RenderFillRects_FIELD_READER FALSE
#define BIND_SDLRenderer_RenderFillRects_FIELD_WRITER FALSE
#define BIND_SDLRenderer_RenderPresent_FIELD_READER FALSE
#define BIND_SDLRenderer_RenderPresent_FIELD_WRITER FALSE
#define BIND_SDLRenderer_RenderReadPixels_FIELD_READER FALSE
#define BIND_SDLRenderer_RenderReadPixels_FIELD_WRITER FALSE
#define BIND_SDLRenderer_SetRenderTarget_FIELD_READER FALSE
#define BIND_SDLRenderer_SetRenderTarget_FIELD_WRITER FALSE
#define BIND_SDLRenderer_SetTextureAlphaMod_FIELD_READER FALSE
#define BIND_SDLRenderer_SetTextureAlphaMod_FIELD_WRITER FALSE
#define BIND_SDLRenderer_SetTextureBlendMode_FIELD_READER FALSE
#define BIND_SDLRenderer_SetTextureBlendMode_FIELD_WRITER FALSE
#define BIND_SDLRenderer_SetTextureColorMod_FIELD_READER FALSE
#define BIND_SDLRenderer_SetTextureColorMod_FIELD_WRITER FALSE
#define BIND_SDLRenderer_UnlockTexture_FIELD_READER FALSE
#define BIND_SDLRenderer_UnlockTexture_FIELD_WRITER FALSE
#define BIND_SDLRenderer_UpdateClipRect_FIELD_READER FALSE
#define BIND_SDLRenderer_UpdateClipRect_FIELD_WRITER FALSE
#define BIND_SDLRenderer_UpdateTexture_FIELD_READER FALSE
#define BIND_SDLRenderer_UpdateTexture_FIELD_WRITER FALSE
#define BIND_SDLRenderer_UpdateTextureYUV_FIELD_READER FALSE
#define BIND_SDLRenderer_UpdateTextureYUV_FIELD_WRITER FALSE
#define BIND_SDLRenderer_UpdateViewport_FIELD_READER FALSE
#define BIND_SDLRenderer_UpdateViewport_FIELD_WRITER FALSE
#define BIND_SDLRenderer_WindowEvent_FIELD_READER TRUE
#define BIND_SDLRenderer_WindowEvent_FIELD_WRITER FALSE
#define BIND_SDLRenderer_a_FIELD_READER FALSE
#define BIND_SDLRenderer_a_FIELD_WRITER FALSE
#define BIND_SDLRenderer_b_FIELD_READER FALSE
#define BIND_SDLRenderer_b_FIELD_WRITER FALSE
#define BIND_SDLRenderer_blendMode_FIELD_READER FALSE
#define BIND_SDLRenderer_blendMode_FIELD_WRITER FALSE
#define BIND_SDLRenderer_clip_rect_FIELD_READER FALSE
#define BIND_SDLRenderer_clip_rect_FIELD_WRITER FALSE
#define BIND_SDLRenderer_clip_rect_backup_FIELD_READER FALSE
#define BIND_SDLRenderer_clip_rect_backup_FIELD_WRITER FALSE
#define BIND_SDLRenderer_driverdata_FIELD_READER FALSE
#define BIND_SDLRenderer_driverdata_FIELD_WRITER FALSE
#define BIND_SDLRenderer_g_FIELD_READER FALSE
#define BIND_SDLRenderer_g_FIELD_WRITER FALSE
#define BIND_SDLRenderer_hidden_FIELD_READER FALSE
#define BIND_SDLRenderer_hidden_FIELD_WRITER FALSE
#define BIND_SDLRenderer_info_FIELD_READER FALSE
#define BIND_SDLRenderer_info_FIELD_WRITER FALSE
#define BIND_SDLRenderer_logical_h_FIELD_READER FALSE
#define BIND_SDLRenderer_logical_h_FIELD_WRITER FALSE
#define BIND_SDLRenderer_logical_h_backup_FIELD_READER FALSE
#define BIND_SDLRenderer_logical_h_backup_FIELD_WRITER FALSE
#define BIND_SDLRenderer_logical_w_FIELD_READER FALSE
#define BIND_SDLRenderer_logical_w_FIELD_WRITER FALSE
#define BIND_SDLRenderer_logical_w_backup_FIELD_READER FALSE
#define BIND_SDLRenderer_logical_w_backup_FIELD_WRITER FALSE
#define BIND_SDLRenderer_magic_FIELD_READER FALSE
#define BIND_SDLRenderer_magic_FIELD_WRITER FALSE
#define BIND_SDLRenderer_r_FIELD_READER FALSE
#define BIND_SDLRenderer_r_FIELD_WRITER FALSE
#define BIND_SDLRenderer_scale_FIELD_READER FALSE
#define BIND_SDLRenderer_scale_FIELD_WRITER FALSE
#define BIND_SDLRenderer_scale_backup_FIELD_READER FALSE
#define BIND_SDLRenderer_scale_backup_FIELD_WRITER FALSE
#define BIND_SDLRenderer_target_FIELD_READER FALSE
#define BIND_SDLRenderer_target_FIELD_WRITER FALSE
#define BIND_SDLRenderer_textures_FIELD_READER FALSE
#define BIND_SDLRenderer_textures_FIELD_WRITER FALSE
#define BIND_SDLRenderer_viewport_FIELD_READER FALSE
#define BIND_SDLRenderer_viewport_FIELD_WRITER FALSE
#define BIND_SDLRenderer_viewport_backup_FIELD_READER FALSE
#define BIND_SDLRenderer_viewport_backup_FIELD_WRITER FALSE
#define BIND_SDLRenderer_window_FIELD_READER FALSE
#define BIND_SDLRenderer_window_FIELD_WRITER FALSE

#define BIND_SDLRendererInfo_TYPE TRUE
#define BIND_SDLRendererInfo_INITIALIZE FALSE
#define BIND_SDLRendererInfo_flags_FIELD_READER FALSE
#define BIND_SDLRendererInfo_flags_FIELD_WRITER FALSE
#define BIND_SDLRendererInfo_max_texture_height_FIELD_READER FALSE
#define BIND_SDLRendererInfo_max_texture_height_FIELD_WRITER FALSE
#define BIND_SDLRendererInfo_max_texture_width_FIELD_READER FALSE
#define BIND_SDLRendererInfo_max_texture_width_FIELD_WRITER FALSE
#define BIND_SDLRendererInfo_name_FIELD_READER FALSE
#define BIND_SDLRendererInfo_name_FIELD_WRITER FALSE
#define BIND_SDLRendererInfo_num_texture_formats_FIELD_READER FALSE
#define BIND_SDLRendererInfo_num_texture_formats_FIELD_WRITER FALSE
#define BIND_SDLRendererInfo_texture_formats_FIELD_READER FALSE
#define BIND_SDLRendererInfo_texture_formats_FIELD_WRITER FALSE

#define BIND_SDLRWops_TYPE TRUE
#define BIND_SDLRWops_INITIALIZE FALSE
#define BIND_SDLRWops_close_FIELD_READER FALSE
#define BIND_SDLRWops_close_FIELD_WRITER FALSE
#define BIND_SDLRWops_hidden_FIELD_READER FALSE
#define BIND_SDLRWops_hidden_FIELD_WRITER FALSE
#define BIND_SDLRWops_read_FIELD_READER FALSE
#define BIND_SDLRWops_read_FIELD_WRITER FALSE
#define BIND_SDLRWops_seek_FIELD_READER FALSE
#define BIND_SDLRWops_seek_FIELD_WRITER FALSE
#define BIND_SDLRWops_size_FIELD_READER FALSE
#define BIND_SDLRWops_size_FIELD_WRITER FALSE
#define BIND_SDLRWops_type_FIELD_READER FALSE
#define BIND_SDLRWops_type_FIELD_WRITER FALSE
#define BIND_SDLRWops_write_FIELD_READER FALSE
#define BIND_SDLRWops_write_FIELD_WRITER FALSE

#define BIND_SDLSemaphore_TYPE TRUE
#define BIND_SDLSemaphore_INITIALIZE FALSE

#define BIND_SDLShapeDriver_TYPE TRUE
#define BIND_SDLShapeDriver_INITIALIZE FALSE
#define BIND_SDLShapeDriver_CreateShaper_FIELD_READER FALSE
#define BIND_SDLShapeDriver_CreateShaper_FIELD_WRITER FALSE
#define BIND_SDLShapeDriver_ResizeWindowShape_FIELD_READER FALSE
#define BIND_SDLShapeDriver_ResizeWindowShape_FIELD_WRITER FALSE
#define BIND_SDLShapeDriver_SetWindowShape_FIELD_READER FALSE
#define BIND_SDLShapeDriver_SetWindowShape_FIELD_WRITER FALSE

#define BIND_SDLShapeTree_TYPE TRUE
#define BIND_SDLShapeTree_INITIALIZE FALSE

#define BIND_SDLSurface_TYPE TRUE
#define BIND_SDLSurface_INITIALIZE FALSE
#define BIND_SDLSurface_clip_rect_FIELD_READER FALSE
#define BIND_SDLSurface_clip_rect_FIELD_WRITER FALSE
#define BIND_SDLSurface_flags_FIELD_READER FALSE
#define BIND_SDLSurface_flags_FIELD_WRITER FALSE
#define BIND_SDLSurface_format_FIELD_READER FALSE
#define BIND_SDLSurface_format_FIELD_WRITER FALSE
#define BIND_SDLSurface_h_FIELD_READER FALSE
#define BIND_SDLSurface_h_FIELD_WRITER FALSE
#define BIND_SDLSurface_lock_data_FIELD_READER FALSE
#define BIND_SDLSurface_lock_data_FIELD_WRITER FALSE
#define BIND_SDLSurface_locked_FIELD_READER FALSE
#define BIND_SDLSurface_locked_FIELD_WRITER FALSE
#define BIND_SDLSurface_map_FIELD_READER FALSE
#define BIND_SDLSurface_map_FIELD_WRITER FALSE
#define BIND_SDLSurface_pitch_FIELD_READER FALSE
#define BIND_SDLSurface_pitch_FIELD_WRITER FALSE
#define BIND_SDLSurface_pixels_FIELD_READER FALSE
#define BIND_SDLSurface_pixels_FIELD_WRITER FALSE
#define BIND_SDLSurface_refcount_FIELD_READER FALSE
#define BIND_SDLSurface_refcount_FIELD_WRITER FALSE
#define BIND_SDLSurface_userdata_FIELD_READER FALSE
#define BIND_SDLSurface_userdata_FIELD_WRITER FALSE
#define BIND_SDLSurface_w_FIELD_READER FALSE
#define BIND_SDLSurface_w_FIELD_WRITER FALSE

#define BIND_SDLSWYUVTexture_TYPE TRUE
#define BIND_SDLSWYUVTexture_INITIALIZE FALSE
#define BIND_SDLSWYUVTexture_Display1X_FIELD_READER FALSE
#define BIND_SDLSWYUVTexture_Display1X_FIELD_WRITER FALSE
#define BIND_SDLSWYUVTexture_Display2X_FIELD_READER FALSE
#define BIND_SDLSWYUVTexture_Display2X_FIELD_WRITER FALSE
#define BIND_SDLSWYUVTexture_colortab_FIELD_READER FALSE
#define BIND_SDLSWYUVTexture_colortab_FIELD_WRITER FALSE
#define BIND_SDLSWYUVTexture_display_FIELD_READER FALSE
#define BIND_SDLSWYUVTexture_display_FIELD_WRITER FALSE
#define BIND_SDLSWYUVTexture_format_FIELD_READER FALSE
#define BIND_SDLSWYUVTexture_format_FIELD_WRITER FALSE
#define BIND_SDLSWYUVTexture_h_FIELD_READER FALSE
#define BIND_SDLSWYUVTexture_h_FIELD_WRITER FALSE
#define BIND_SDLSWYUVTexture_pitches_FIELD_READER FALSE
#define BIND_SDLSWYUVTexture_pitches_FIELD_WRITER FALSE
#define BIND_SDLSWYUVTexture_pixels_FIELD_READER FALSE
#define BIND_SDLSWYUVTexture_pixels_FIELD_WRITER FALSE
#define BIND_SDLSWYUVTexture_planes_FIELD_READER FALSE
#define BIND_SDLSWYUVTexture_planes_FIELD_WRITER FALSE
#define BIND_SDLSWYUVTexture_rgb_2_pix_FIELD_READER FALSE
#define BIND_SDLSWYUVTexture_rgb_2_pix_FIELD_WRITER FALSE
#define BIND_SDLSWYUVTexture_stretch_FIELD_READER FALSE
#define BIND_SDLSWYUVTexture_stretch_FIELD_WRITER FALSE
#define BIND_SDLSWYUVTexture_target_format_FIELD_READER FALSE
#define BIND_SDLSWYUVTexture_target_format_FIELD_WRITER FALSE
#define BIND_SDLSWYUVTexture_w_FIELD_READER FALSE
#define BIND_SDLSWYUVTexture_w_FIELD_WRITER FALSE

#define BIND_SDLSysWMEvent_TYPE TRUE
#define BIND_SDLSysWMEvent_INITIALIZE FALSE
#define BIND_SDLSysWMEvent_msg_FIELD_READER TRUE
#define BIND_SDLSysWMEvent_msg_FIELD_WRITER FALSE
#define BIND_SDLSysWMEvent_timestamp_FIELD_READER TRUE
#define BIND_SDLSysWMEvent_timestamp_FIELD_WRITER FALSE
#define BIND_SDLSysWMEvent_type_FIELD_READER TRUE
#define BIND_SDLSysWMEvent_type_FIELD_WRITER FALSE

#define BIND_SDLSysWMinfo_TYPE TRUE
#define BIND_SDLSysWMinfo_INITIALIZE FALSE
#define BIND_SDLSysWMinfo_info_FIELD_READER FALSE
#define BIND_SDLSysWMinfo_info_FIELD_WRITER FALSE
#define BIND_SDLSysWMinfo_subsystem_FIELD_READER FALSE
#define BIND_SDLSysWMinfo_subsystem_FIELD_WRITER FALSE
#define BIND_SDLSysWMinfo_version_FIELD_READER FALSE
#define BIND_SDLSysWMinfo_version_FIELD_WRITER FALSE

#define BIND_SDLSysWMmsg_TYPE TRUE
#define BIND_SDLSysWMmsg_INITIALIZE FALSE
#define BIND_SDLSysWMmsg_msg_FIELD_READER FALSE
#define BIND_SDLSysWMmsg_msg_FIELD_WRITER FALSE
#define BIND_SDLSysWMmsg_subsystem_FIELD_READER FALSE
#define BIND_SDLSysWMmsg_subsystem_FIELD_WRITER FALSE
#define BIND_SDLSysWMmsg_version_FIELD_READER FALSE
#define BIND_SDLSysWMmsg_version_FIELD_WRITER FALSE

#define BIND_SDLTextEditingEvent_TYPE TRUE
#define BIND_SDLTextEditingEvent_INITIALIZE FALSE
#define BIND_SDLTextEditingEvent_length_FIELD_READER TRUE
#define BIND_SDLTextEditingEvent_length_FIELD_WRITER FALSE
#define BIND_SDLTextEditingEvent_start_FIELD_READER TRUE
#define BIND_SDLTextEditingEvent_start_FIELD_WRITER FALSE
#define BIND_SDLTextEditingEvent_text_FIELD_READER TRUE
#define BIND_SDLTextEditingEvent_text_FIELD_WRITER FALSE
#define BIND_SDLTextEditingEvent_timestamp_FIELD_READER TRUE
#define BIND_SDLTextEditingEvent_timestamp_FIELD_WRITER FALSE
#define BIND_SDLTextEditingEvent_type_FIELD_READER TRUE
#define BIND_SDLTextEditingEvent_type_FIELD_WRITER FALSE
#define BIND_SDLTextEditingEvent_windowID_FIELD_READER TRUE
#define BIND_SDLTextEditingEvent_windowID_FIELD_WRITER FALSE

#define BIND_SDLTextInputEvent_TYPE TRUE
#define BIND_SDLTextInputEvent_INITIALIZE FALSE
#define BIND_SDLTextInputEvent_text_FIELD_READER TRUE
#define BIND_SDLTextInputEvent_text_FIELD_WRITER FALSE
#define BIND_SDLTextInputEvent_timestamp_FIELD_READER TRUE
#define BIND_SDLTextInputEvent_timestamp_FIELD_WRITER FALSE
#define BIND_SDLTextInputEvent_type_FIELD_READER TRUE
#define BIND_SDLTextInputEvent_type_FIELD_WRITER FALSE
#define BIND_SDLTextInputEvent_windowID_FIELD_READER TRUE
#define BIND_SDLTextInputEvent_windowID_FIELD_WRITER FALSE

#define BIND_SDLTexture_TYPE TRUE
#define BIND_SDLTexture_INITIALIZE FALSE
#define BIND_SDLTexture_a_FIELD_READER FALSE
#define BIND_SDLTexture_a_FIELD_WRITER FALSE
#define BIND_SDLTexture_access_FIELD_READER FALSE
#define BIND_SDLTexture_access_FIELD_WRITER FALSE
#define BIND_SDLTexture_b_FIELD_READER FALSE
#define BIND_SDLTexture_b_FIELD_WRITER FALSE
#define BIND_SDLTexture_blendMode_FIELD_READER FALSE
#define BIND_SDLTexture_blendMode_FIELD_WRITER FALSE
#define BIND_SDLTexture_driverdata_FIELD_READER FALSE
#define BIND_SDLTexture_driverdata_FIELD_WRITER FALSE
#define BIND_SDLTexture_format_FIELD_READER FALSE
#define BIND_SDLTexture_format_FIELD_WRITER FALSE
#define BIND_SDLTexture_g_FIELD_READER FALSE
#define BIND_SDLTexture_g_FIELD_WRITER FALSE
#define BIND_SDLTexture_h_FIELD_READER FALSE
#define BIND_SDLTexture_h_FIELD_WRITER FALSE
#define BIND_SDLTexture_locked_rect_FIELD_READER FALSE
#define BIND_SDLTexture_locked_rect_FIELD_WRITER FALSE
#define BIND_SDLTexture_magic_FIELD_READER FALSE
#define BIND_SDLTexture_magic_FIELD_WRITER FALSE
#define BIND_SDLTexture_modMode_FIELD_READER FALSE
#define BIND_SDLTexture_modMode_FIELD_WRITER FALSE
#define BIND_SDLTexture_native_FIELD_READER FALSE
#define BIND_SDLTexture_native_FIELD_WRITER FALSE
#define BIND_SDLTexture_next_FIELD_READER FALSE
#define BIND_SDLTexture_next_FIELD_WRITER FALSE
#define BIND_SDLTexture_pitch_FIELD_READER FALSE
#define BIND_SDLTexture_pitch_FIELD_WRITER FALSE
#define BIND_SDLTexture_pixels_FIELD_READER FALSE
#define BIND_SDLTexture_pixels_FIELD_WRITER FALSE
#define BIND_SDLTexture_prev_FIELD_READER FALSE
#define BIND_SDLTexture_prev_FIELD_WRITER FALSE
#define BIND_SDLTexture_r_FIELD_READER FALSE
#define BIND_SDLTexture_r_FIELD_WRITER FALSE
#define BIND_SDLTexture_renderer_FIELD_READER FALSE
#define BIND_SDLTexture_renderer_FIELD_WRITER FALSE
#define BIND_SDLTexture_w_FIELD_READER FALSE
#define BIND_SDLTexture_w_FIELD_WRITER FALSE
#define BIND_SDLTexture_yuv_FIELD_READER FALSE
#define BIND_SDLTexture_yuv_FIELD_WRITER FALSE

#define BIND_SDLThread_TYPE TRUE
#define BIND_SDLThread_INITIALIZE FALSE
#define BIND_SDLThread_data_FIELD_READER FALSE
#define BIND_SDLThread_data_FIELD_WRITER FALSE
#define BIND_SDLThread_errbuf_FIELD_READER FALSE
#define BIND_SDLThread_errbuf_FIELD_WRITER FALSE
#define BIND_SDLThread_handle_FIELD_READER FALSE
#define BIND_SDLThread_handle_FIELD_WRITER FALSE
#define BIND_SDLThread_name_FIELD_READER FALSE
#define BIND_SDLThread_name_FIELD_WRITER FALSE
#define BIND_SDLThread_state_FIELD_READER FALSE
#define BIND_SDLThread_state_FIELD_WRITER FALSE
#define BIND_SDLThread_status_FIELD_READER FALSE
#define BIND_SDLThread_status_FIELD_WRITER FALSE
#define BIND_SDLThread_threadid_FIELD_READER FALSE
#define BIND_SDLThread_threadid_FIELD_WRITER FALSE

#define BIND_SDLTouch_TYPE TRUE
#define BIND_SDLTouch_INITIALIZE FALSE
#define BIND_SDLTouch_fingers_FIELD_READER FALSE
#define BIND_SDLTouch_fingers_FIELD_WRITER FALSE
#define BIND_SDLTouch_id_FIELD_READER FALSE
#define BIND_SDLTouch_id_FIELD_WRITER FALSE
#define BIND_SDLTouch_max_fingers_FIELD_READER FALSE
#define BIND_SDLTouch_max_fingers_FIELD_WRITER FALSE
#define BIND_SDLTouch_num_fingers_FIELD_READER FALSE
#define BIND_SDLTouch_num_fingers_FIELD_WRITER FALSE

#define BIND_SDLTouchFingerEvent_TYPE TRUE
#define BIND_SDLTouchFingerEvent_INITIALIZE FALSE
#define BIND_SDLTouchFingerEvent_dx_FIELD_READER TRUE
#define BIND_SDLTouchFingerEvent_dx_FIELD_WRITER FALSE
#define BIND_SDLTouchFingerEvent_dy_FIELD_READER TRUE
#define BIND_SDLTouchFingerEvent_dy_FIELD_WRITER FALSE
#define BIND_SDLTouchFingerEvent_fingerId_FIELD_READER FALSE
#define BIND_SDLTouchFingerEvent_fingerId_FIELD_WRITER FALSE
#define BIND_SDLTouchFingerEvent_pressure_FIELD_READER TRUE
#define BIND_SDLTouchFingerEvent_pressure_FIELD_WRITER FALSE
#define BIND_SDLTouchFingerEvent_timestamp_FIELD_READER TRUE
#define BIND_SDLTouchFingerEvent_timestamp_FIELD_WRITER FALSE
#define BIND_SDLTouchFingerEvent_touchId_FIELD_READER FALSE
#define BIND_SDLTouchFingerEvent_touchId_FIELD_WRITER FALSE
#define BIND_SDLTouchFingerEvent_type_FIELD_READER TRUE
#define BIND_SDLTouchFingerEvent_type_FIELD_WRITER FALSE
#define BIND_SDLTouchFingerEvent_x_FIELD_READER TRUE
#define BIND_SDLTouchFingerEvent_x_FIELD_WRITER FALSE
#define BIND_SDLTouchFingerEvent_y_FIELD_READER TRUE
#define BIND_SDLTouchFingerEvent_y_FIELD_WRITER FALSE

#define BIND_SDLUserEvent_TYPE TRUE
#define BIND_SDLUserEvent_INITIALIZE FALSE
#define BIND_SDLUserEvent_code_FIELD_READER TRUE
#define BIND_SDLUserEvent_code_FIELD_WRITER FALSE
#define BIND_SDLUserEvent_data1_FIELD_READER FALSE
#define BIND_SDLUserEvent_data1_FIELD_WRITER FALSE
#define BIND_SDLUserEvent_data2_FIELD_READER FALSE
#define BIND_SDLUserEvent_data2_FIELD_WRITER FALSE
#define BIND_SDLUserEvent_timestamp_FIELD_READER TRUE
#define BIND_SDLUserEvent_timestamp_FIELD_WRITER FALSE
#define BIND_SDLUserEvent_type_FIELD_READER TRUE
#define BIND_SDLUserEvent_type_FIELD_WRITER FALSE
#define BIND_SDLUserEvent_windowID_FIELD_READER TRUE
#define BIND_SDLUserEvent_windowID_FIELD_WRITER FALSE

#define BIND_SDLVersion_TYPE TRUE
#define BIND_SDLVersion_INITIALIZE FALSE
#define BIND_SDLVersion_major_FIELD_READER FALSE
#define BIND_SDLVersion_major_FIELD_WRITER FALSE
#define BIND_SDLVersion_minor_FIELD_READER FALSE
#define BIND_SDLVersion_minor_FIELD_WRITER FALSE
#define BIND_SDLVersion_patch_FIELD_READER FALSE
#define BIND_SDLVersion_patch_FIELD_WRITER FALSE

#define BIND_SDLVideoData_TYPE TRUE
#define BIND_SDLVideoData_INITIALIZE FALSE
#define BIND_SDLVideoData_LPINPUTCONTEXT2_FIELD_READER FALSE
#define BIND_SDLVideoData_LPINPUTCONTEXT2_FIELD_WRITER FALSE
#define BIND_SDLVideoData_LPVOID_FIELD_READER FALSE
#define BIND_SDLVideoData_LPVOID_FIELD_WRITER FALSE
#define BIND_SDLVideoData_PRIMARY_FIELD_READER FALSE
#define BIND_SDLVideoData_PRIMARY_FIELD_WRITER FALSE
#define BIND_SDLVideoData_UINT_FIELD_READER FALSE
#define BIND_SDLVideoData_UINT_FIELD_WRITER FALSE
#define BIND_SDLVideoData_UTF8_STRING_FIELD_READER FALSE
#define BIND_SDLVideoData_UTF8_STRING_FIELD_WRITER FALSE
#define BIND_SDLVideoData_WINAPI_FIELD_READER FALSE
#define BIND_SDLVideoData_WINAPI_FIELD_WRITER FALSE
#define BIND_SDLVideoData_WM_DELETE_WINDOW_FIELD_READER FALSE
#define BIND_SDLVideoData_WM_DELETE_WINDOW_FIELD_WRITER FALSE
#define BIND_SDLVideoData_WM_PROTOCOLS_FIELD_READER FALSE
#define BIND_SDLVideoData_WM_PROTOCOLS_FIELD_WRITER FALSE
#define BIND_SDLVideoData_XdndActionCopy_FIELD_READER FALSE
#define BIND_SDLVideoData_XdndActionCopy_FIELD_WRITER FALSE
#define BIND_SDLVideoData_XdndDrop_FIELD_READER FALSE
#define BIND_SDLVideoData_XdndDrop_FIELD_WRITER FALSE
#define BIND_SDLVideoData_XdndEnter_FIELD_READER FALSE
#define BIND_SDLVideoData_XdndEnter_FIELD_WRITER FALSE
#define BIND_SDLVideoData_XdndFinished_FIELD_READER FALSE
#define BIND_SDLVideoData_XdndFinished_FIELD_WRITER FALSE
#define BIND_SDLVideoData_XdndPosition_FIELD_READER FALSE
#define BIND_SDLVideoData_XdndPosition_FIELD_WRITER FALSE
#define BIND_SDLVideoData_XdndSelection_FIELD_READER FALSE
#define BIND_SDLVideoData_XdndSelection_FIELD_WRITER FALSE
#define BIND_SDLVideoData_XdndStatus_FIELD_READER FALSE
#define BIND_SDLVideoData_XdndStatus_FIELD_WRITER FALSE
#define BIND_SDLVideoData_XdndTypeList_FIELD_READER FALSE
#define BIND_SDLVideoData_XdndTypeList_FIELD_WRITER FALSE
#define BIND_SDLVideoData__NET_ACTIVE_WINDOW_FIELD_READER FALSE
#define BIND_SDLVideoData__NET_ACTIVE_WINDOW_FIELD_WRITER FALSE
#define BIND_SDLVideoData__NET_WM_ACTION_FULLSCREEN_FIELD_READER FALSE
#define BIND_SDLVideoData__NET_WM_ACTION_FULLSCREEN_FIELD_WRITER FALSE
#define BIND_SDLVideoData__NET_WM_ALLOWED_ACTIONS_FIELD_READER FALSE
#define BIND_SDLVideoData__NET_WM_ALLOWED_ACTIONS_FIELD_WRITER FALSE
#define BIND_SDLVideoData__NET_WM_ICON_FIELD_READER FALSE
#define BIND_SDLVideoData__NET_WM_ICON_FIELD_WRITER FALSE
#define BIND_SDLVideoData__NET_WM_ICON_NAME_FIELD_READER FALSE
#define BIND_SDLVideoData__NET_WM_ICON_NAME_FIELD_WRITER FALSE
#define BIND_SDLVideoData__NET_WM_NAME_FIELD_READER FALSE
#define BIND_SDLVideoData__NET_WM_NAME_FIELD_WRITER FALSE
#define BIND_SDLVideoData__NET_WM_PING_FIELD_READER FALSE
#define BIND_SDLVideoData__NET_WM_PING_FIELD_WRITER FALSE
#define BIND_SDLVideoData__NET_WM_STATE_FIELD_READER FALSE
#define BIND_SDLVideoData__NET_WM_STATE_FIELD_WRITER FALSE
#define BIND_SDLVideoData__NET_WM_STATE_FOCUSED_FIELD_READER FALSE
#define BIND_SDLVideoData__NET_WM_STATE_FOCUSED_FIELD_WRITER FALSE
#define BIND_SDLVideoData__NET_WM_STATE_FULLSCREEN_FIELD_READER FALSE
#define BIND_SDLVideoData__NET_WM_STATE_FULLSCREEN_FIELD_WRITER FALSE
#define BIND_SDLVideoData__NET_WM_STATE_HIDDEN_FIELD_READER FALSE
#define BIND_SDLVideoData__NET_WM_STATE_HIDDEN_FIELD_WRITER FALSE
#define BIND_SDLVideoData__NET_WM_STATE_MAXIMIZED_HORZ_FIELD_READER FALSE
#define BIND_SDLVideoData__NET_WM_STATE_MAXIMIZED_HORZ_FIELD_WRITER FALSE
#define BIND_SDLVideoData__NET_WM_STATE_MAXIMIZED_VERT_FIELD_READER FALSE
#define BIND_SDLVideoData__NET_WM_STATE_MAXIMIZED_VERT_FIELD_WRITER FALSE
#define BIND_SDLVideoData_allow_spaces_FIELD_READER FALSE
#define BIND_SDLVideoData_allow_spaces_FIELD_WRITER FALSE
#define BIND_SDLVideoData_classname_FIELD_READER FALSE
#define BIND_SDLVideoData_classname_FIELD_WRITER FALSE
#define BIND_SDLVideoData_clipboard_count_FIELD_READER FALSE
#define BIND_SDLVideoData_clipboard_count_FIELD_WRITER FALSE
#define BIND_SDLVideoData_clipboard_count_FIELD_READER FALSE
#define BIND_SDLVideoData_clipboard_count_FIELD_WRITER FALSE
#define BIND_SDLVideoData_display_FIELD_READER FALSE
#define BIND_SDLVideoData_display_FIELD_WRITER FALSE
#define BIND_SDLVideoData_egl_display_FIELD_READER FALSE
#define BIND_SDLVideoData_egl_display_FIELD_WRITER FALSE
#define BIND_SDLVideoData_egl_initialized_FIELD_READER FALSE
#define BIND_SDLVideoData_egl_initialized_FIELD_WRITER FALSE
#define BIND_SDLVideoData_egl_initialized_FIELD_READER FALSE
#define BIND_SDLVideoData_egl_initialized_FIELD_WRITER FALSE
#define BIND_SDLVideoData_egl_refcount_FIELD_READER FALSE
#define BIND_SDLVideoData_egl_refcount_FIELD_WRITER FALSE
#define BIND_SDLVideoData_egl_refcount_FIELD_READER FALSE
#define BIND_SDLVideoData_egl_refcount_FIELD_WRITER FALSE
#define BIND_SDLVideoData_egl_refcount_FIELD_READER FALSE
#define BIND_SDLVideoData_egl_refcount_FIELD_WRITER FALSE
#define BIND_SDLVideoData_fieldEdit_FIELD_READER FALSE
#define BIND_SDLVideoData_fieldEdit_FIELD_WRITER FALSE
#define BIND_SDLVideoData_im_FIELD_READER FALSE
#define BIND_SDLVideoData_im_FIELD_WRITER FALSE
#define BIND_SDLVideoData_ime_alpnsinkcookie_FIELD_READER FALSE
#define BIND_SDLVideoData_ime_alpnsinkcookie_FIELD_WRITER FALSE
#define BIND_SDLVideoData_ime_available_FIELD_READER FALSE
#define BIND_SDLVideoData_ime_available_FIELD_WRITER FALSE
#define BIND_SDLVideoData_ime_candcount_FIELD_READER FALSE
#define BIND_SDLVideoData_ime_candcount_FIELD_WRITER FALSE
#define BIND_SDLVideoData_ime_candidates_FIELD_READER FALSE
#define BIND_SDLVideoData_ime_candidates_FIELD_WRITER FALSE
#define BIND_SDLVideoData_ime_candlist_FIELD_READER FALSE
#define BIND_SDLVideoData_ime_candlist_FIELD_WRITER FALSE
#define BIND_SDLVideoData_ime_candlistindexbase_FIELD_READER FALSE
#define BIND_SDLVideoData_ime_candlistindexbase_FIELD_WRITER FALSE
#define BIND_SDLVideoData_ime_candlistrect_FIELD_READER FALSE
#define BIND_SDLVideoData_ime_candlistrect_FIELD_WRITER FALSE
#define BIND_SDLVideoData_ime_candpgsize_FIELD_READER FALSE
#define BIND_SDLVideoData_ime_candpgsize_FIELD_WRITER FALSE
#define BIND_SDLVideoData_ime_candref_FIELD_READER FALSE
#define BIND_SDLVideoData_ime_candref_FIELD_WRITER FALSE
#define BIND_SDLVideoData_ime_candsel_FIELD_READER FALSE
#define BIND_SDLVideoData_ime_candsel_FIELD_WRITER FALSE
#define BIND_SDLVideoData_ime_candvertical_FIELD_READER FALSE
#define BIND_SDLVideoData_ime_candvertical_FIELD_WRITER FALSE
#define BIND_SDLVideoData_ime_com_initialized_FIELD_READER FALSE
#define BIND_SDLVideoData_ime_com_initialized_FIELD_WRITER FALSE
#define BIND_SDLVideoData_ime_composition_FIELD_READER FALSE
#define BIND_SDLVideoData_ime_composition_FIELD_WRITER FALSE
#define BIND_SDLVideoData_ime_convmodesinkcookie_FIELD_READER FALSE
#define BIND_SDLVideoData_ime_convmodesinkcookie_FIELD_WRITER FALSE
#define BIND_SDLVideoData_ime_cursor_FIELD_READER FALSE
#define BIND_SDLVideoData_ime_cursor_FIELD_WRITER FALSE
#define BIND_SDLVideoData_ime_dirty_FIELD_READER FALSE
#define BIND_SDLVideoData_ime_dirty_FIELD_WRITER FALSE
#define BIND_SDLVideoData_ime_enabled_FIELD_READER FALSE
#define BIND_SDLVideoData_ime_enabled_FIELD_WRITER FALSE
#define BIND_SDLVideoData_ime_himc_FIELD_READER FALSE
#define BIND_SDLVideoData_ime_himc_FIELD_WRITER FALSE
#define BIND_SDLVideoData_ime_himm32_FIELD_READER FALSE
#define BIND_SDLVideoData_ime_himm32_FIELD_WRITER FALSE
#define BIND_SDLVideoData_ime_hkl_FIELD_READER FALSE
#define BIND_SDLVideoData_ime_hkl_FIELD_WRITER FALSE
#define BIND_SDLVideoData_ime_hwnd_current_FIELD_READER FALSE
#define BIND_SDLVideoData_ime_hwnd_current_FIELD_WRITER FALSE
#define BIND_SDLVideoData_ime_hwnd_main_FIELD_READER FALSE
#define BIND_SDLVideoData_ime_hwnd_main_FIELD_WRITER FALSE
#define BIND_SDLVideoData_ime_initialized_FIELD_READER FALSE
#define BIND_SDLVideoData_ime_initialized_FIELD_WRITER FALSE
#define BIND_SDLVideoData_ime_ippasink_FIELD_READER FALSE
#define BIND_SDLVideoData_ime_ippasink_FIELD_WRITER FALSE
#define BIND_SDLVideoData_ime_openmodesinkcookie_FIELD_READER FALSE
#define BIND_SDLVideoData_ime_openmodesinkcookie_FIELD_WRITER FALSE
#define BIND_SDLVideoData_ime_readingstring_FIELD_READER FALSE
#define BIND_SDLVideoData_ime_readingstring_FIELD_WRITER FALSE
#define BIND_SDLVideoData_ime_rect_FIELD_READER FALSE
#define BIND_SDLVideoData_ime_rect_FIELD_WRITER FALSE
#define BIND_SDLVideoData_ime_threadmgr_FIELD_READER FALSE
#define BIND_SDLVideoData_ime_threadmgr_FIELD_WRITER FALSE
#define BIND_SDLVideoData_ime_threadmgrex_FIELD_READER FALSE
#define BIND_SDLVideoData_ime_threadmgrex_FIELD_WRITER FALSE
#define BIND_SDLVideoData_ime_uielemsink_FIELD_READER FALSE
#define BIND_SDLVideoData_ime_uielemsink_FIELD_WRITER FALSE
#define BIND_SDLVideoData_ime_uielemsinkcookie_FIELD_READER FALSE
#define BIND_SDLVideoData_ime_uielemsinkcookie_FIELD_WRITER FALSE
#define BIND_SDLVideoData_ime_uiless_FIELD_READER FALSE
#define BIND_SDLVideoData_ime_uiless_FIELD_WRITER FALSE
#define BIND_SDLVideoData_ime_winheight_FIELD_READER FALSE
#define BIND_SDLVideoData_ime_winheight_FIELD_WRITER FALSE
#define BIND_SDLVideoData_ime_winwidth_FIELD_READER FALSE
#define BIND_SDLVideoData_ime_winwidth_FIELD_WRITER FALSE
#define BIND_SDLVideoData_key_layout_FIELD_READER FALSE
#define BIND_SDLVideoData_key_layout_FIELD_WRITER FALSE
#define BIND_SDLVideoData_key_layout_FIELD_READER FALSE
#define BIND_SDLVideoData_key_layout_FIELD_WRITER FALSE
#define BIND_SDLVideoData_modifierFlags_FIELD_READER FALSE
#define BIND_SDLVideoData_modifierFlags_FIELD_WRITER FALSE
#define BIND_SDLVideoData_net_wm_FIELD_READER FALSE
#define BIND_SDLVideoData_net_wm_FIELD_WRITER FALSE
#define BIND_SDLVideoData_numwindows_FIELD_READER FALSE
#define BIND_SDLVideoData_numwindows_FIELD_WRITER FALSE
#define BIND_SDLVideoData_osversion_FIELD_READER FALSE
#define BIND_SDLVideoData_osversion_FIELD_WRITER FALSE
#define BIND_SDLVideoData_pid_FIELD_READER FALSE
#define BIND_SDLVideoData_pid_FIELD_WRITER FALSE
#define BIND_SDLVideoData_render_FIELD_READER FALSE
#define BIND_SDLVideoData_render_FIELD_WRITER FALSE
#define BIND_SDLVideoData_screensaver_activity_FIELD_READER FALSE
#define BIND_SDLVideoData_screensaver_activity_FIELD_WRITER FALSE
#define BIND_SDLVideoData_screensaver_activity_FIELD_READER FALSE
#define BIND_SDLVideoData_screensaver_activity_FIELD_WRITER FALSE
#define BIND_SDLVideoData_selection_waiting_FIELD_READER FALSE
#define BIND_SDLVideoData_selection_waiting_FIELD_WRITER FALSE
#define BIND_SDLVideoData_swapinterval_FIELD_READER FALSE
#define BIND_SDLVideoData_swapinterval_FIELD_WRITER FALSE
#define BIND_SDLVideoData_textRect_FIELD_READER FALSE
#define BIND_SDLVideoData_textRect_FIELD_WRITER FALSE
#define BIND_SDLVideoData_userDLL_FIELD_READER FALSE
#define BIND_SDLVideoData_userDLL_FIELD_WRITER FALSE
#define BIND_SDLVideoData_windowlist_FIELD_READER FALSE
#define BIND_SDLVideoData_windowlist_FIELD_WRITER FALSE
#define BIND_SDLVideoData_windowlistlength_FIELD_READER FALSE
#define BIND_SDLVideoData_windowlistlength_FIELD_WRITER FALSE

#define BIND_SDLVideoDevice_TYPE TRUE
#define BIND_SDLVideoDevice_INITIALIZE FALSE
#define BIND_SDLVideoDevice_CreateWindow_FIELD_READER FALSE
#define BIND_SDLVideoDevice_CreateWindow_FIELD_WRITER FALSE
#define BIND_SDLVideoDevice_CreateWindowFramebuffer_FIELD_READER FALSE
#define BIND_SDLVideoDevice_CreateWindowFramebuffer_FIELD_WRITER FALSE
#define BIND_SDLVideoDevice_CreateWindowFrom_FIELD_READER FALSE
#define BIND_SDLVideoDevice_CreateWindowFrom_FIELD_WRITER FALSE
#define BIND_SDLVideoDevice_DestroyWindow_FIELD_READER FALSE
#define BIND_SDLVideoDevice_DestroyWindow_FIELD_WRITER FALSE
#define BIND_SDLVideoDevice_DestroyWindowFramebuffer_FIELD_READER FALSE
#define BIND_SDLVideoDevice_DestroyWindowFramebuffer_FIELD_WRITER FALSE
#define BIND_SDLVideoDevice_GL_CreateContext_FIELD_READER FALSE
#define BIND_SDLVideoDevice_GL_CreateContext_FIELD_WRITER FALSE
#define BIND_SDLVideoDevice_GL_DeleteContext_FIELD_READER FALSE
#define BIND_SDLVideoDevice_GL_DeleteContext_FIELD_WRITER FALSE
#define BIND_SDLVideoDevice_GL_GetDrawableSize_FIELD_READER FALSE
#define BIND_SDLVideoDevice_GL_GetDrawableSize_FIELD_WRITER FALSE
#define BIND_SDLVideoDevice_GL_GetProcAddress_FIELD_READER FALSE
#define BIND_SDLVideoDevice_GL_GetProcAddress_FIELD_WRITER FALSE
#define BIND_SDLVideoDevice_GL_GetSwapInterval_FIELD_READER FALSE
#define BIND_SDLVideoDevice_GL_GetSwapInterval_FIELD_WRITER FALSE
#define BIND_SDLVideoDevice_GL_LoadLibrary_FIELD_READER FALSE
#define BIND_SDLVideoDevice_GL_LoadLibrary_FIELD_WRITER FALSE
#define BIND_SDLVideoDevice_GL_MakeCurrent_FIELD_READER FALSE
#define BIND_SDLVideoDevice_GL_MakeCurrent_FIELD_WRITER FALSE
#define BIND_SDLVideoDevice_GL_SetSwapInterval_FIELD_READER FALSE
#define BIND_SDLVideoDevice_GL_SetSwapInterval_FIELD_WRITER FALSE
#define BIND_SDLVideoDevice_GL_SwapWindow_FIELD_READER FALSE
#define BIND_SDLVideoDevice_GL_SwapWindow_FIELD_WRITER FALSE
#define BIND_SDLVideoDevice_GL_UnloadLibrary_FIELD_READER FALSE
#define BIND_SDLVideoDevice_GL_UnloadLibrary_FIELD_WRITER FALSE
#define BIND_SDLVideoDevice_GetClipboardText_FIELD_READER FALSE
#define BIND_SDLVideoDevice_GetClipboardText_FIELD_WRITER FALSE
#define BIND_SDLVideoDevice_GetDisplayBounds_FIELD_READER FALSE
#define BIND_SDLVideoDevice_GetDisplayBounds_FIELD_WRITER FALSE
#define BIND_SDLVideoDevice_GetDisplayModes_FIELD_READER FALSE
#define BIND_SDLVideoDevice_GetDisplayModes_FIELD_WRITER FALSE
#define BIND_SDLVideoDevice_GetWindowGammaRamp_FIELD_READER FALSE
#define BIND_SDLVideoDevice_GetWindowGammaRamp_FIELD_WRITER FALSE
#define BIND_SDLVideoDevice_GetWindowWMInfo_FIELD_READER FALSE
#define BIND_SDLVideoDevice_GetWindowWMInfo_FIELD_WRITER FALSE
#define BIND_SDLVideoDevice_HasClipboardText_FIELD_READER FALSE
#define BIND_SDLVideoDevice_HasClipboardText_FIELD_WRITER FALSE
#define BIND_SDLVideoDevice_HasScreenKeyboardSupport_FIELD_READER FALSE
#define BIND_SDLVideoDevice_HasScreenKeyboardSupport_FIELD_WRITER FALSE
#define BIND_SDLVideoDevice_HideScreenKeyboard_FIELD_READER FALSE
#define BIND_SDLVideoDevice_HideScreenKeyboard_FIELD_WRITER FALSE
#define BIND_SDLVideoDevice_HideWindow_FIELD_READER FALSE
#define BIND_SDLVideoDevice_HideWindow_FIELD_WRITER FALSE
#define BIND_SDLVideoDevice_IsScreenKeyboardShown_FIELD_READER FALSE
#define BIND_SDLVideoDevice_IsScreenKeyboardShown_FIELD_WRITER FALSE
#define BIND_SDLVideoDevice_MaximizeWindow_FIELD_READER FALSE
#define BIND_SDLVideoDevice_MaximizeWindow_FIELD_WRITER FALSE
#define BIND_SDLVideoDevice_MinimizeWindow_FIELD_READER FALSE
#define BIND_SDLVideoDevice_MinimizeWindow_FIELD_WRITER FALSE
#define BIND_SDLVideoDevice_OnWindowEnter_FIELD_READER FALSE
#define BIND_SDLVideoDevice_OnWindowEnter_FIELD_WRITER FALSE
#define BIND_SDLVideoDevice_PumpEvents_FIELD_READER FALSE
#define BIND_SDLVideoDevice_PumpEvents_FIELD_WRITER FALSE
#define BIND_SDLVideoDevice_RaiseWindow_FIELD_READER FALSE
#define BIND_SDLVideoDevice_RaiseWindow_FIELD_WRITER FALSE
#define BIND_SDLVideoDevice_RestoreWindow_FIELD_READER FALSE
#define BIND_SDLVideoDevice_RestoreWindow_FIELD_WRITER FALSE
#define BIND_SDLVideoDevice_SetClipboardText_FIELD_READER FALSE
#define BIND_SDLVideoDevice_SetClipboardText_FIELD_WRITER FALSE
#define BIND_SDLVideoDevice_SetDisplayMode_FIELD_READER FALSE
#define BIND_SDLVideoDevice_SetDisplayMode_FIELD_WRITER FALSE
#define BIND_SDLVideoDevice_SetTextInputRect_FIELD_READER FALSE
#define BIND_SDLVideoDevice_SetTextInputRect_FIELD_WRITER FALSE
#define BIND_SDLVideoDevice_SetWindowBordered_FIELD_READER FALSE
#define BIND_SDLVideoDevice_SetWindowBordered_FIELD_WRITER FALSE
#define BIND_SDLVideoDevice_SetWindowFullscreen_FIELD_READER FALSE
#define BIND_SDLVideoDevice_SetWindowFullscreen_FIELD_WRITER FALSE
#define BIND_SDLVideoDevice_SetWindowGammaRamp_FIELD_READER FALSE
#define BIND_SDLVideoDevice_SetWindowGammaRamp_FIELD_WRITER FALSE
#define BIND_SDLVideoDevice_SetWindowGrab_FIELD_READER FALSE
#define BIND_SDLVideoDevice_SetWindowGrab_FIELD_WRITER FALSE
#define BIND_SDLVideoDevice_SetWindowIcon_FIELD_READER FALSE
#define BIND_SDLVideoDevice_SetWindowIcon_FIELD_WRITER FALSE
#define BIND_SDLVideoDevice_SetWindowMaximumSize_FIELD_READER FALSE
#define BIND_SDLVideoDevice_SetWindowMaximumSize_FIELD_WRITER FALSE
#define BIND_SDLVideoDevice_SetWindowMinimumSize_FIELD_READER FALSE
#define BIND_SDLVideoDevice_SetWindowMinimumSize_FIELD_WRITER FALSE
#define BIND_SDLVideoDevice_SetWindowPosition_FIELD_READER FALSE
#define BIND_SDLVideoDevice_SetWindowPosition_FIELD_WRITER FALSE
#define BIND_SDLVideoDevice_SetWindowSize_FIELD_READER FALSE
#define BIND_SDLVideoDevice_SetWindowSize_FIELD_WRITER FALSE
#define BIND_SDLVideoDevice_SetWindowTitle_FIELD_READER FALSE
#define BIND_SDLVideoDevice_SetWindowTitle_FIELD_WRITER FALSE
#define BIND_SDLVideoDevice_ShowMessageBox_FIELD_READER FALSE
#define BIND_SDLVideoDevice_ShowMessageBox_FIELD_WRITER FALSE
#define BIND_SDLVideoDevice_ShowScreenKeyboard_FIELD_READER FALSE
#define BIND_SDLVideoDevice_ShowScreenKeyboard_FIELD_WRITER FALSE
#define BIND_SDLVideoDevice_ShowWindow_FIELD_READER FALSE
#define BIND_SDLVideoDevice_ShowWindow_FIELD_WRITER FALSE
#define BIND_SDLVideoDevice_StartTextInput_FIELD_READER FALSE
#define BIND_SDLVideoDevice_StartTextInput_FIELD_WRITER FALSE
#define BIND_SDLVideoDevice_StopTextInput_FIELD_READER FALSE
#define BIND_SDLVideoDevice_StopTextInput_FIELD_WRITER FALSE
#define BIND_SDLVideoDevice_SuspendScreenSaver_FIELD_READER FALSE
#define BIND_SDLVideoDevice_SuspendScreenSaver_FIELD_WRITER FALSE
#define BIND_SDLVideoDevice_UpdateWindowFramebuffer_FIELD_READER FALSE
#define BIND_SDLVideoDevice_UpdateWindowFramebuffer_FIELD_WRITER FALSE
#define BIND_SDLVideoDevice_VideoInit_FIELD_READER FALSE
#define BIND_SDLVideoDevice_VideoInit_FIELD_WRITER FALSE
#define BIND_SDLVideoDevice_VideoQuit_FIELD_READER FALSE
#define BIND_SDLVideoDevice_VideoQuit_FIELD_WRITER FALSE
#define BIND_SDLVideoDevice_clipboard_text_FIELD_READER FALSE
#define BIND_SDLVideoDevice_clipboard_text_FIELD_WRITER FALSE
#define BIND_SDLVideoDevice_current_glctx_FIELD_READER FALSE
#define BIND_SDLVideoDevice_current_glctx_FIELD_WRITER FALSE
#define BIND_SDLVideoDevice_current_glctx_tls_FIELD_READER FALSE
#define BIND_SDLVideoDevice_current_glctx_tls_FIELD_WRITER FALSE
#define BIND_SDLVideoDevice_current_glwin_FIELD_READER FALSE
#define BIND_SDLVideoDevice_current_glwin_FIELD_WRITER FALSE
#define BIND_SDLVideoDevice_current_glwin_tls_FIELD_READER FALSE
#define BIND_SDLVideoDevice_current_glwin_tls_FIELD_WRITER FALSE
#define BIND_SDLVideoDevice_displays_FIELD_READER FALSE
#define BIND_SDLVideoDevice_displays_FIELD_WRITER FALSE
#define BIND_SDLVideoDevice_driverdata_FIELD_READER FALSE
#define BIND_SDLVideoDevice_driverdata_FIELD_WRITER FALSE
#define BIND_SDLVideoDevice_free_FIELD_READER FALSE
#define BIND_SDLVideoDevice_free_FIELD_WRITER FALSE
#define BIND_SDLVideoDevice_gl_config_FIELD_READER FALSE
#define BIND_SDLVideoDevice_gl_config_FIELD_WRITER FALSE
#define BIND_SDLVideoDevice_gl_data_FIELD_READER FALSE
#define BIND_SDLVideoDevice_gl_data_FIELD_WRITER FALSE
#define BIND_SDLVideoDevice_name_FIELD_READER FALSE
#define BIND_SDLVideoDevice_name_FIELD_WRITER FALSE
#define BIND_SDLVideoDevice_next_object_id_FIELD_READER FALSE
#define BIND_SDLVideoDevice_next_object_id_FIELD_WRITER FALSE
#define BIND_SDLVideoDevice_num_displays_FIELD_READER FALSE
#define BIND_SDLVideoDevice_num_displays_FIELD_WRITER FALSE
#define BIND_SDLVideoDevice_shape_driver_FIELD_READER FALSE
#define BIND_SDLVideoDevice_shape_driver_FIELD_WRITER FALSE
#define BIND_SDLVideoDevice_suspend_screensaver_FIELD_READER FALSE
#define BIND_SDLVideoDevice_suspend_screensaver_FIELD_WRITER FALSE
#define BIND_SDLVideoDevice_window_magic_FIELD_READER FALSE
#define BIND_SDLVideoDevice_window_magic_FIELD_WRITER FALSE
#define BIND_SDLVideoDevice_windows_FIELD_READER FALSE
#define BIND_SDLVideoDevice_windows_FIELD_WRITER FALSE

#define BIND_SDLVideoDisplay_TYPE TRUE
#define BIND_SDLVideoDisplay_INITIALIZE FALSE
#define BIND_SDLVideoDisplay_current_mode_FIELD_READER FALSE
#define BIND_SDLVideoDisplay_current_mode_FIELD_WRITER FALSE
#define BIND_SDLVideoDisplay_desktop_mode_FIELD_READER FALSE
#define BIND_SDLVideoDisplay_desktop_mode_FIELD_WRITER FALSE
#define BIND_SDLVideoDisplay_device_FIELD_READER FALSE
#define BIND_SDLVideoDisplay_device_FIELD_WRITER FALSE
#define BIND_SDLVideoDisplay_display_modes_FIELD_READER FALSE
#define BIND_SDLVideoDisplay_display_modes_FIELD_WRITER FALSE
#define BIND_SDLVideoDisplay_driverdata_FIELD_READER FALSE
#define BIND_SDLVideoDisplay_driverdata_FIELD_WRITER FALSE
#define BIND_SDLVideoDisplay_fullscreen_window_FIELD_READER FALSE
#define BIND_SDLVideoDisplay_fullscreen_window_FIELD_WRITER FALSE
#define BIND_SDLVideoDisplay_max_display_modes_FIELD_READER FALSE
#define BIND_SDLVideoDisplay_max_display_modes_FIELD_WRITER FALSE
#define BIND_SDLVideoDisplay_name_FIELD_READER FALSE
#define BIND_SDLVideoDisplay_name_FIELD_WRITER FALSE
#define BIND_SDLVideoDisplay_num_display_modes_FIELD_READER FALSE
#define BIND_SDLVideoDisplay_num_display_modes_FIELD_WRITER FALSE

#define BIND_SDLWaylandInput_TYPE TRUE
#define BIND_SDLWaylandInput_INITIALIZE FALSE

#define BIND_SDLWindow_TYPE TRUE
#define BIND_SDLWindow_INITIALIZE FALSE
#define BIND_SDLWindow_brightness_FIELD_READER FALSE
#define BIND_SDLWindow_brightness_FIELD_WRITER FALSE
#define BIND_SDLWindow_data_FIELD_READER FALSE
#define BIND_SDLWindow_data_FIELD_WRITER FALSE
#define BIND_SDLWindow_driverdata_FIELD_READER FALSE
#define BIND_SDLWindow_driverdata_FIELD_WRITER FALSE
#define BIND_SDLWindow_flags_FIELD_READER FALSE
#define BIND_SDLWindow_flags_FIELD_WRITER FALSE
#define BIND_SDLWindow_fullscreen_mode_FIELD_READER FALSE
#define BIND_SDLWindow_fullscreen_mode_FIELD_WRITER FALSE
#define BIND_SDLWindow_gamma_FIELD_READER FALSE
#define BIND_SDLWindow_gamma_FIELD_WRITER FALSE
#define BIND_SDLWindow_h_FIELD_READER FALSE
#define BIND_SDLWindow_h_FIELD_WRITER FALSE
#define BIND_SDLWindow_icon_FIELD_READER FALSE
#define BIND_SDLWindow_icon_FIELD_WRITER FALSE
#define BIND_SDLWindow_id_FIELD_READER FALSE
#define BIND_SDLWindow_id_FIELD_WRITER FALSE
#define BIND_SDLWindow_is_destroying_FIELD_READER FALSE
#define BIND_SDLWindow_is_destroying_FIELD_WRITER FALSE
#define BIND_SDLWindow_last_fullscreen_flags_FIELD_READER FALSE
#define BIND_SDLWindow_last_fullscreen_flags_FIELD_WRITER FALSE
#define BIND_SDLWindow_magic_FIELD_READER FALSE
#define BIND_SDLWindow_magic_FIELD_WRITER FALSE
#define BIND_SDLWindow_max_h_FIELD_READER FALSE
#define BIND_SDLWindow_max_h_FIELD_WRITER FALSE
#define BIND_SDLWindow_max_w_FIELD_READER FALSE
#define BIND_SDLWindow_max_w_FIELD_WRITER FALSE
#define BIND_SDLWindow_min_h_FIELD_READER FALSE
#define BIND_SDLWindow_min_h_FIELD_WRITER FALSE
#define BIND_SDLWindow_min_w_FIELD_READER FALSE
#define BIND_SDLWindow_min_w_FIELD_WRITER FALSE
#define BIND_SDLWindow_next_FIELD_READER FALSE
#define BIND_SDLWindow_next_FIELD_WRITER FALSE
#define BIND_SDLWindow_prev_FIELD_READER FALSE
#define BIND_SDLWindow_prev_FIELD_WRITER FALSE
#define BIND_SDLWindow_saved_gamma_FIELD_READER FALSE
#define BIND_SDLWindow_saved_gamma_FIELD_WRITER FALSE
#define BIND_SDLWindow_shaper_FIELD_READER FALSE
#define BIND_SDLWindow_shaper_FIELD_WRITER FALSE
#define BIND_SDLWindow_surface_FIELD_READER FALSE
#define BIND_SDLWindow_surface_FIELD_WRITER FALSE
#define BIND_SDLWindow_surface_valid_FIELD_READER FALSE
#define BIND_SDLWindow_surface_valid_FIELD_WRITER FALSE
#define BIND_SDLWindow_title_FIELD_READER FALSE
#define BIND_SDLWindow_title_FIELD_WRITER FALSE
#define BIND_SDLWindow_w_FIELD_READER FALSE
#define BIND_SDLWindow_w_FIELD_WRITER FALSE
#define BIND_SDLWindow_windowed_FIELD_READER FALSE
#define BIND_SDLWindow_windowed_FIELD_WRITER FALSE
#define BIND_SDLWindow_x_FIELD_READER FALSE
#define BIND_SDLWindow_x_FIELD_WRITER FALSE
#define BIND_SDLWindow_y_FIELD_READER FALSE
#define BIND_SDLWindow_y_FIELD_WRITER FALSE

#define BIND_SDLWindowData_TYPE TRUE
#define BIND_SDLWindowData_INITIALIZE FALSE
#define BIND_SDLWindowData_created_FIELD_READER FALSE
#define BIND_SDLWindowData_created_FIELD_WRITER FALSE
#define BIND_SDLWindowData_dispman_window_FIELD_READER FALSE
#define BIND_SDLWindowData_dispman_window_FIELD_WRITER FALSE
#define BIND_SDLWindowData_gles_attributes_FIELD_READER FALSE
#define BIND_SDLWindowData_gles_attributes_FIELD_WRITER FALSE
#define BIND_SDLWindowData_gles_config_FIELD_READER FALSE
#define BIND_SDLWindowData_gles_config_FIELD_WRITER FALSE
#define BIND_SDLWindowData_gles_configs_FIELD_READER FALSE
#define BIND_SDLWindowData_gles_configs_FIELD_WRITER FALSE
#define BIND_SDLWindowData_gles_context_FIELD_READER FALSE
#define BIND_SDLWindowData_gles_context_FIELD_WRITER FALSE
#define BIND_SDLWindowData_gles_surface_FIELD_READER FALSE
#define BIND_SDLWindowData_gles_surface_FIELD_WRITER FALSE
#define BIND_SDLWindowData_inWindowMove_FIELD_READER FALSE
#define BIND_SDLWindowData_inWindowMove_FIELD_WRITER FALSE
#define BIND_SDLWindowData_listener_FIELD_READER FALSE
#define BIND_SDLWindowData_listener_FIELD_WRITER FALSE
#define BIND_SDLWindowData_nscontexts_FIELD_READER FALSE
#define BIND_SDLWindowData_nscontexts_FIELD_WRITER FALSE
#define BIND_SDLWindowData_nswindow_FIELD_READER FALSE
#define BIND_SDLWindowData_nswindow_FIELD_WRITER FALSE
#define BIND_SDLWindowData_uiwindow_FIELD_READER FALSE
#define BIND_SDLWindowData_uiwindow_FIELD_WRITER FALSE
#define BIND_SDLWindowData_uses_gles_FIELD_READER FALSE
#define BIND_SDLWindowData_uses_gles_FIELD_WRITER FALSE
#define BIND_SDLWindowData_uses_gles_FIELD_READER FALSE
#define BIND_SDLWindowData_uses_gles_FIELD_WRITER FALSE
#define BIND_SDLWindowData_videodata_FIELD_READER FALSE
#define BIND_SDLWindowData_videodata_FIELD_WRITER FALSE
#define BIND_SDLWindowData_view_FIELD_READER FALSE
#define BIND_SDLWindowData_view_FIELD_WRITER FALSE
#define BIND_SDLWindowData_viewcontroller_FIELD_READER FALSE
#define BIND_SDLWindowData_viewcontroller_FIELD_WRITER FALSE
#define BIND_SDLWindowData_window_FIELD_READER FALSE
#define BIND_SDLWindowData_window_FIELD_WRITER FALSE

#define BIND_SDLWindowEvent_TYPE TRUE
#define BIND_SDLWindowEvent_INITIALIZE FALSE
#define BIND_SDLWindowEvent_data1_FIELD_READER TRUE
#define BIND_SDLWindowEvent_data1_FIELD_WRITER FALSE
#define BIND_SDLWindowEvent_data2_FIELD_READER TRUE
#define BIND_SDLWindowEvent_data2_FIELD_WRITER FALSE
#define BIND_SDLWindowEvent_Event_FIELD_READER TRUE
#define BIND_SDLWindowEvent_event_FIELD_WRITER FALSE
#define BIND_SDLWindowEvent_padding1_FIELD_READER TRUE
#define BIND_SDLWindowEvent_padding1_FIELD_WRITER FALSE
#define BIND_SDLWindowEvent_padding2_FIELD_READER TRUE
#define BIND_SDLWindowEvent_padding2_FIELD_WRITER FALSE
#define BIND_SDLWindowEvent_padding3_FIELD_READER TRUE
#define BIND_SDLWindowEvent_padding3_FIELD_WRITER FALSE
#define BIND_SDLWindowEvent_timestamp_FIELD_READER TRUE
#define BIND_SDLWindowEvent_timestamp_FIELD_WRITER FALSE
#define BIND_SDLWindowEvent_type_FIELD_READER TRUE
#define BIND_SDLWindowEvent_type_FIELD_WRITER FALSE
#define BIND_SDLWindowEvent_windowID_FIELD_READER TRUE
#define BIND_SDLWindowEvent_windowID_FIELD_WRITER FALSE

#define BIND_SDLWindowShapeMode_TYPE TRUE
#define BIND_SDLWindowShapeMode_INITIALIZE FALSE
#define BIND_SDLWindowShapeMode_mode_FIELD_READER FALSE
#define BIND_SDLWindowShapeMode_mode_FIELD_WRITER FALSE
#define BIND_SDLWindowShapeMode_parameters_FIELD_READER FALSE
#define BIND_SDLWindowShapeMode_parameters_FIELD_WRITER FALSE

#define BIND_SDLWindowShaper_TYPE TRUE
#define BIND_SDLWindowShaper_INITIALIZE FALSE
#define BIND_SDLWindowShaper_driverdata_FIELD_READER FALSE
#define BIND_SDLWindowShaper_driverdata_FIELD_WRITER FALSE
#define BIND_SDLWindowShaper_hasshape_FIELD_READER FALSE
#define BIND_SDLWindowShaper_hasshape_FIELD_WRITER FALSE
#define BIND_SDLWindowShaper_mode_FIELD_READER FALSE
#define BIND_SDLWindowShaper_mode_FIELD_WRITER FALSE
#define BIND_SDLWindowShaper_userx_FIELD_READER FALSE
#define BIND_SDLWindowShaper_userx_FIELD_WRITER FALSE
#define BIND_SDLWindowShaper_usery_FIELD_READER FALSE
#define BIND_SDLWindowShaper_usery_FIELD_WRITER FALSE
#define BIND_SDLWindowShaper_window_FIELD_READER FALSE
#define BIND_SDLWindowShaper_window_FIELD_WRITER FALSE

#define BIND_SDLWindowUserData_TYPE TRUE
#define BIND_SDLWindowUserData_INITIALIZE FALSE
#define BIND_SDLWindowUserData_data_FIELD_READER FALSE
#define BIND_SDLWindowUserData_data_FIELD_WRITER FALSE
#define BIND_SDLWindowUserData_name_FIELD_READER FALSE
#define BIND_SDLWindowUserData_name_FIELD_WRITER FALSE
#define BIND_SDLWindowUserData_next_FIELD_READER FALSE
#define BIND_SDLWindowUserData_next_FIELD_WRITER FALSE

#define BIND_SDLTestSurfaceImageS_TYPE TRUE
#define BIND_SDLTestSurfaceImageS_INITIALIZE FALSE
#define BIND_SDLTestSurfaceImageS_bytes_per_pixel_FIELD_READER FALSE
#define BIND_SDLTestSurfaceImageS_bytes_per_pixel_FIELD_WRITER FALSE
#define BIND_SDLTestSurfaceImageS_height_FIELD_READER FALSE
#define BIND_SDLTestSurfaceImageS_height_FIELD_WRITER FALSE
#define BIND_SDLTestSurfaceImageS_pixel_data_FIELD_READER FALSE
#define BIND_SDLTestSurfaceImageS_pixel_data_FIELD_WRITER FALSE
#define BIND_SDLTestSurfaceImageS_width_FIELD_READER FALSE
#define BIND_SDLTestSurfaceImageS_width_FIELD_WRITER FALSE

#define BIND_SDLTestTestCaseReference_TYPE TRUE
#define BIND_SDLTestTestCaseReference_INITIALIZE FALSE
#define BIND_SDLTestTestCaseReference_description_FIELD_READER FALSE
#define BIND_SDLTestTestCaseReference_description_FIELD_WRITER FALSE
#define BIND_SDLTestTestCaseReference_enabled_FIELD_READER FALSE
#define BIND_SDLTestTestCaseReference_enabled_FIELD_WRITER FALSE
#define BIND_SDLTestTestCaseReference_name_FIELD_READER FALSE
#define BIND_SDLTestTestCaseReference_name_FIELD_WRITER FALSE
#define BIND_SDLTestTestCaseReference_testCase_FIELD_READER FALSE
#define BIND_SDLTestTestCaseReference_testCase_FIELD_WRITER FALSE

#define BIND_SDLTestTestSuiteReference_TYPE TRUE
#define BIND_SDLTestTestSuiteReference_INITIALIZE FALSE
#define BIND_SDLTestTestSuiteReference_name_FIELD_READER FALSE
#define BIND_SDLTestTestSuiteReference_name_FIELD_WRITER FALSE
#define BIND_SDLTestTestSuiteReference_testCases_FIELD_READER FALSE
#define BIND_SDLTestTestSuiteReference_testCases_FIELD_WRITER FALSE
#define BIND_SDLTestTestSuiteReference_testSetUp_FIELD_READER FALSE
#define BIND_SDLTestTestSuiteReference_testSetUp_FIELD_WRITER FALSE
#define BIND_SDLTestTestSuiteReference_testTearDown_FIELD_READER FALSE
#define BIND_SDLTestTestSuiteReference_testTearDown_FIELD_WRITER FALSE

#define BIND_SioHdl_TYPE TRUE
#define BIND_SioHdl_INITIALIZE FALSE

#define BIND_StaticTreeDescS_TYPE TRUE
#define BIND_StaticTreeDescS_INITIALIZE FALSE

#define BIND_Tableentry_TYPE TRUE
#define BIND_Tableentry_INITIALIZE FALSE
#define BIND_Tableentry_code_FIELD_READER FALSE
#define BIND_Tableentry_code_FIELD_WRITER FALSE
#define BIND_Tableentry_length_FIELD_READER FALSE
#define BIND_Tableentry_length_FIELD_WRITER FALSE
#define BIND_Tableentry_runlen_FIELD_READER FALSE
#define BIND_Tableentry_runlen_FIELD_WRITER FALSE

#define BIND_TagINPUTCONTEXT2_TYPE TRUE
#define BIND_TagINPUTCONTEXT2_INITIALIZE FALSE
#define BIND_TagINPUTCONTEXT2_cfCandForm_FIELD_READER FALSE
#define BIND_TagINPUTCONTEXT2_cfCandForm_FIELD_WRITER FALSE
#define BIND_TagINPUTCONTEXT2_cfCompForm_FIELD_READER FALSE
#define BIND_TagINPUTCONTEXT2_cfCompForm_FIELD_WRITER FALSE
#define BIND_TagINPUTCONTEXT2_dwNumMsgBuf_FIELD_READER FALSE
#define BIND_TagINPUTCONTEXT2_dwNumMsgBuf_FIELD_WRITER FALSE
#define BIND_TagINPUTCONTEXT2_dwReserve_FIELD_READER FALSE
#define BIND_TagINPUTCONTEXT2_dwReserve_FIELD_WRITER FALSE
#define BIND_TagINPUTCONTEXT2_fOpen_FIELD_READER FALSE
#define BIND_TagINPUTCONTEXT2_fOpen_FIELD_WRITER FALSE
#define BIND_TagINPUTCONTEXT2_fdwConversion_FIELD_READER FALSE
#define BIND_TagINPUTCONTEXT2_fdwConversion_FIELD_WRITER FALSE
#define BIND_TagINPUTCONTEXT2_fdwInit_FIELD_READER FALSE
#define BIND_TagINPUTCONTEXT2_fdwInit_FIELD_WRITER FALSE
#define BIND_TagINPUTCONTEXT2_fdwSentence_FIELD_READER FALSE
#define BIND_TagINPUTCONTEXT2_fdwSentence_FIELD_WRITER FALSE
#define BIND_TagINPUTCONTEXT2_hCandInfo_FIELD_READER FALSE
#define BIND_TagINPUTCONTEXT2_hCandInfo_FIELD_WRITER FALSE
#define BIND_TagINPUTCONTEXT2_hCompStr_FIELD_READER FALSE
#define BIND_TagINPUTCONTEXT2_hCompStr_FIELD_WRITER FALSE
#define BIND_TagINPUTCONTEXT2_hGuideLine_FIELD_READER FALSE
#define BIND_TagINPUTCONTEXT2_hGuideLine_FIELD_WRITER FALSE
#define BIND_TagINPUTCONTEXT2_hMsgBuf_FIELD_READER FALSE
#define BIND_TagINPUTCONTEXT2_hMsgBuf_FIELD_WRITER FALSE
#define BIND_TagINPUTCONTEXT2_hPrivate_FIELD_READER FALSE
#define BIND_TagINPUTCONTEXT2_hPrivate_FIELD_WRITER FALSE
#define BIND_TagINPUTCONTEXT2_hWnd_FIELD_READER FALSE
#define BIND_TagINPUTCONTEXT2_hWnd_FIELD_WRITER FALSE
#define BIND_TagINPUTCONTEXT2_lfFont_FIELD_READER FALSE
#define BIND_TagINPUTCONTEXT2_lfFont_FIELD_WRITER FALSE
#define BIND_TagINPUTCONTEXT2_ptSoftKbdPos_FIELD_READER FALSE
#define BIND_TagINPUTCONTEXT2_ptSoftKbdPos_FIELD_WRITER FALSE
#define BIND_TagINPUTCONTEXT2_ptStatusWndPos_FIELD_READER FALSE
#define BIND_TagINPUTCONTEXT2_ptStatusWndPos_FIELD_WRITER FALSE

#define BIND_Tiff_TYPE TRUE
#define BIND_Tiff_INITIALIZE FALSE
#define BIND_Tiff_tif_base_FIELD_READER FALSE
#define BIND_Tiff_tif_base_FIELD_WRITER FALSE
#define BIND_Tiff_tif_cleanup_FIELD_READER FALSE
#define BIND_Tiff_tif_cleanup_FIELD_WRITER FALSE
#define BIND_Tiff_tif_clientdata_FIELD_READER FALSE
#define BIND_Tiff_tif_clientdata_FIELD_WRITER FALSE
#define BIND_Tiff_tif_clientinfo_FIELD_READER FALSE
#define BIND_Tiff_tif_clientinfo_FIELD_WRITER FALSE
#define BIND_Tiff_tif_close_FIELD_READER FALSE
#define BIND_Tiff_tif_close_FIELD_WRITER FALSE
#define BIND_Tiff_tif_closeproc_FIELD_READER FALSE
#define BIND_Tiff_tif_closeproc_FIELD_WRITER FALSE
#define BIND_Tiff_tif_col_FIELD_READER FALSE
#define BIND_Tiff_tif_col_FIELD_WRITER FALSE
#define BIND_Tiff_tif_curdir_FIELD_READER FALSE
#define BIND_Tiff_tif_curdir_FIELD_WRITER FALSE
#define BIND_Tiff_tif_curoff_FIELD_READER FALSE
#define BIND_Tiff_tif_curoff_FIELD_WRITER FALSE
#define BIND_Tiff_tif_curstrip_FIELD_READER FALSE
#define BIND_Tiff_tif_curstrip_FIELD_WRITER FALSE
#define BIND_Tiff_tif_curtile_FIELD_READER FALSE
#define BIND_Tiff_tif_curtile_FIELD_WRITER FALSE
#define BIND_Tiff_tif_customdir_FIELD_READER FALSE
#define BIND_Tiff_tif_customdir_FIELD_WRITER FALSE
#define BIND_Tiff_tif_data_FIELD_READER FALSE
#define BIND_Tiff_tif_data_FIELD_WRITER FALSE
#define BIND_Tiff_tif_dataoff_FIELD_READER FALSE
#define BIND_Tiff_tif_dataoff_FIELD_WRITER FALSE
#define BIND_Tiff_tif_decoderow_FIELD_READER FALSE
#define BIND_Tiff_tif_decoderow_FIELD_WRITER FALSE
#define BIND_Tiff_tif_decodestatus_FIELD_READER FALSE
#define BIND_Tiff_tif_decodestatus_FIELD_WRITER FALSE
#define BIND_Tiff_tif_decodestrip_FIELD_READER FALSE
#define BIND_Tiff_tif_decodestrip_FIELD_WRITER FALSE
#define BIND_Tiff_tif_decodetile_FIELD_READER FALSE
#define BIND_Tiff_tif_decodetile_FIELD_WRITER FALSE
#define BIND_Tiff_tif_defstripsize_FIELD_READER FALSE
#define BIND_Tiff_tif_defstripsize_FIELD_WRITER FALSE
#define BIND_Tiff_tif_deftilesize_FIELD_READER FALSE
#define BIND_Tiff_tif_deftilesize_FIELD_WRITER FALSE
#define BIND_Tiff_tif_dir_FIELD_READER FALSE
#define BIND_Tiff_tif_dir_FIELD_WRITER FALSE
#define BIND_Tiff_tif_dirlist_FIELD_READER FALSE
#define BIND_Tiff_tif_dirlist_FIELD_WRITER FALSE
#define BIND_Tiff_tif_dirlistsize_FIELD_READER FALSE
#define BIND_Tiff_tif_dirlistsize_FIELD_WRITER FALSE
#define BIND_Tiff_tif_dirnumber_FIELD_READER FALSE
#define BIND_Tiff_tif_dirnumber_FIELD_WRITER FALSE
#define BIND_Tiff_tif_diroff_FIELD_READER FALSE
#define BIND_Tiff_tif_diroff_FIELD_WRITER FALSE
#define BIND_Tiff_tif_encoderow_FIELD_READER FALSE
#define BIND_Tiff_tif_encoderow_FIELD_WRITER FALSE
#define BIND_Tiff_tif_encodestatus_FIELD_READER FALSE
#define BIND_Tiff_tif_encodestatus_FIELD_WRITER FALSE
#define BIND_Tiff_tif_encodestrip_FIELD_READER FALSE
#define BIND_Tiff_tif_encodestrip_FIELD_WRITER FALSE
#define BIND_Tiff_tif_encodetile_FIELD_READER FALSE
#define BIND_Tiff_tif_encodetile_FIELD_WRITER FALSE
#define BIND_Tiff_tif_fd_FIELD_READER FALSE
#define BIND_Tiff_tif_fd_FIELD_WRITER FALSE
#define BIND_Tiff_tif_fields_FIELD_READER FALSE
#define BIND_Tiff_tif_fields_FIELD_WRITER FALSE
#define BIND_Tiff_tif_fieldscompat_FIELD_READER FALSE
#define BIND_Tiff_tif_fieldscompat_FIELD_WRITER FALSE
#define BIND_Tiff_tif_fixuptags_FIELD_READER FALSE
#define BIND_Tiff_tif_fixuptags_FIELD_WRITER FALSE
#define BIND_Tiff_tif_flags_FIELD_READER FALSE
#define BIND_Tiff_tif_flags_FIELD_WRITER FALSE
#define BIND_Tiff_tif_foundfield_FIELD_READER FALSE
#define BIND_Tiff_tif_foundfield_FIELD_WRITER FALSE
#define BIND_Tiff_tif_header_FIELD_READER FALSE
#define BIND_Tiff_tif_header_FIELD_WRITER FALSE
#define BIND_Tiff_tif_header_size_FIELD_READER FALSE
#define BIND_Tiff_tif_header_size_FIELD_WRITER FALSE
#define BIND_Tiff_tif_mapproc_FIELD_READER FALSE
#define BIND_Tiff_tif_mapproc_FIELD_WRITER FALSE
#define BIND_Tiff_tif_mode_FIELD_READER FALSE
#define BIND_Tiff_tif_mode_FIELD_WRITER FALSE
#define BIND_Tiff_tif_name_FIELD_READER FALSE
#define BIND_Tiff_tif_name_FIELD_WRITER FALSE
#define BIND_Tiff_tif_nextdiroff_FIELD_READER FALSE
#define BIND_Tiff_tif_nextdiroff_FIELD_WRITER FALSE
#define BIND_Tiff_tif_nfields_FIELD_READER FALSE
#define BIND_Tiff_tif_nfields_FIELD_WRITER FALSE
#define BIND_Tiff_tif_nfieldscompat_FIELD_READER FALSE
#define BIND_Tiff_tif_nfieldscompat_FIELD_WRITER FALSE
#define BIND_Tiff_tif_nsubifd_FIELD_READER FALSE
#define BIND_Tiff_tif_nsubifd_FIELD_WRITER FALSE
#define BIND_Tiff_tif_postdecode_FIELD_READER FALSE
#define BIND_Tiff_tif_postdecode_FIELD_WRITER FALSE
#define BIND_Tiff_tif_postencode_FIELD_READER FALSE
#define BIND_Tiff_tif_postencode_FIELD_WRITER FALSE
#define BIND_Tiff_tif_predecode_FIELD_READER FALSE
#define BIND_Tiff_tif_predecode_FIELD_WRITER FALSE
#define BIND_Tiff_tif_preencode_FIELD_READER FALSE
#define BIND_Tiff_tif_preencode_FIELD_WRITER FALSE
#define BIND_Tiff_tif_rawcc_FIELD_READER FALSE
#define BIND_Tiff_tif_rawcc_FIELD_WRITER FALSE
#define BIND_Tiff_tif_rawcp_FIELD_READER FALSE
#define BIND_Tiff_tif_rawcp_FIELD_WRITER FALSE
#define BIND_Tiff_tif_rawdata_FIELD_READER FALSE
#define BIND_Tiff_tif_rawdata_FIELD_WRITER FALSE
#define BIND_Tiff_tif_rawdataloaded_FIELD_READER FALSE
#define BIND_Tiff_tif_rawdataloaded_FIELD_WRITER FALSE
#define BIND_Tiff_tif_rawdataoff_FIELD_READER FALSE
#define BIND_Tiff_tif_rawdataoff_FIELD_WRITER FALSE
#define BIND_Tiff_tif_rawdatasize_FIELD_READER FALSE
#define BIND_Tiff_tif_rawdatasize_FIELD_WRITER FALSE
#define BIND_Tiff_tif_readproc_FIELD_READER FALSE
#define BIND_Tiff_tif_readproc_FIELD_WRITER FALSE
#define BIND_Tiff_tif_row_FIELD_READER FALSE
#define BIND_Tiff_tif_row_FIELD_WRITER FALSE
#define BIND_Tiff_tif_scanlinesize_FIELD_READER FALSE
#define BIND_Tiff_tif_scanlinesize_FIELD_WRITER FALSE
#define BIND_Tiff_tif_scanlineskew_FIELD_READER FALSE
#define BIND_Tiff_tif_scanlineskew_FIELD_WRITER FALSE
#define BIND_Tiff_tif_seek_FIELD_READER FALSE
#define BIND_Tiff_tif_seek_FIELD_WRITER FALSE
#define BIND_Tiff_tif_seekproc_FIELD_READER FALSE
#define BIND_Tiff_tif_seekproc_FIELD_WRITER FALSE
#define BIND_Tiff_tif_setupdecode_FIELD_READER FALSE
#define BIND_Tiff_tif_setupdecode_FIELD_WRITER FALSE
#define BIND_Tiff_tif_setupencode_FIELD_READER FALSE
#define BIND_Tiff_tif_setupencode_FIELD_WRITER FALSE
#define BIND_Tiff_tif_size_FIELD_READER FALSE
#define BIND_Tiff_tif_size_FIELD_WRITER FALSE
#define BIND_Tiff_tif_sizeproc_FIELD_READER FALSE
#define BIND_Tiff_tif_sizeproc_FIELD_WRITER FALSE
#define BIND_Tiff_tif_subifdoff_FIELD_READER FALSE
#define BIND_Tiff_tif_subifdoff_FIELD_WRITER FALSE
#define BIND_Tiff_tif_tagmethods_FIELD_READER FALSE
#define BIND_Tiff_tif_tagmethods_FIELD_WRITER FALSE
#define BIND_Tiff_tif_tilesize_FIELD_READER FALSE
#define BIND_Tiff_tif_tilesize_FIELD_WRITER FALSE
#define BIND_Tiff_tif_unmapproc_FIELD_READER FALSE
#define BIND_Tiff_tif_unmapproc_FIELD_WRITER FALSE
#define BIND_Tiff_tif_writeproc_FIELD_READER FALSE
#define BIND_Tiff_tif_writeproc_FIELD_WRITER FALSE

#define BIND_Timing_TYPE TRUE
#define BIND_Timing_INITIALIZE FALSE
#define BIND_Timing_frequency_FIELD_READER FALSE
#define BIND_Timing_frequency_FIELD_WRITER FALSE
#define BIND_Timing_height_FIELD_READER FALSE
#define BIND_Timing_height_FIELD_WRITER FALSE
#define BIND_Timing_width_FIELD_READER FALSE
#define BIND_Timing_width_FIELD_WRITER FALSE

#define BIND_TinflDecompressorTag_TYPE TRUE
#define BIND_TinflDecompressorTag_INITIALIZE FALSE
#define BIND_TinflDecompressorTag_m_bit_buf_FIELD_READER FALSE
#define BIND_TinflDecompressorTag_m_bit_buf_FIELD_WRITER FALSE
#define BIND_TinflDecompressorTag_m_check_adler32_FIELD_READER FALSE
#define BIND_TinflDecompressorTag_m_check_adler32_FIELD_WRITER FALSE
#define BIND_TinflDecompressorTag_m_counter_FIELD_READER FALSE
#define BIND_TinflDecompressorTag_m_counter_FIELD_WRITER FALSE
#define BIND_TinflDecompressorTag_m_dist_FIELD_READER FALSE
#define BIND_TinflDecompressorTag_m_dist_FIELD_WRITER FALSE
#define BIND_TinflDecompressorTag_m_dist_from_out_buf_start_FIELD_READER FALSE
#define BIND_TinflDecompressorTag_m_dist_from_out_buf_start_FIELD_WRITER FALSE
#define BIND_TinflDecompressorTag_m_final_FIELD_READER FALSE
#define BIND_TinflDecompressorTag_m_final_FIELD_WRITER FALSE
#define BIND_TinflDecompressorTag_m_len_codes_FIELD_READER FALSE
#define BIND_TinflDecompressorTag_m_len_codes_FIELD_WRITER FALSE
#define BIND_TinflDecompressorTag_m_num_bits_FIELD_READER FALSE
#define BIND_TinflDecompressorTag_m_num_bits_FIELD_WRITER FALSE
#define BIND_TinflDecompressorTag_m_num_extra_FIELD_READER FALSE
#define BIND_TinflDecompressorTag_m_num_extra_FIELD_WRITER FALSE
#define BIND_TinflDecompressorTag_m_raw_header_FIELD_READER FALSE
#define BIND_TinflDecompressorTag_m_raw_header_FIELD_WRITER FALSE
#define BIND_TinflDecompressorTag_m_state_FIELD_READER FALSE
#define BIND_TinflDecompressorTag_m_state_FIELD_WRITER FALSE
#define BIND_TinflDecompressorTag_m_table_sizes_FIELD_READER FALSE
#define BIND_TinflDecompressorTag_m_table_sizes_FIELD_WRITER FALSE
#define BIND_TinflDecompressorTag_m_tables_FIELD_READER FALSE
#define BIND_TinflDecompressorTag_m_tables_FIELD_WRITER FALSE
#define BIND_TinflDecompressorTag_m_type_FIELD_READER FALSE
#define BIND_TinflDecompressorTag_m_type_FIELD_WRITER FALSE
#define BIND_TinflDecompressorTag_m_z_adler32_FIELD_READER FALSE
#define BIND_TinflDecompressorTag_m_z_adler32_FIELD_WRITER FALSE
#define BIND_TinflDecompressorTag_m_zhdr0_FIELD_READER FALSE
#define BIND_TinflDecompressorTag_m_zhdr0_FIELD_WRITER FALSE
#define BIND_TinflDecompressorTag_m_zhdr1_FIELD_READER FALSE
#define BIND_TinflDecompressorTag_m_zhdr1_FIELD_WRITER FALSE

#define BIND_TmUnzS_TYPE TRUE
#define BIND_TmUnzS_INITIALIZE FALSE
#define BIND_TmUnzS_tm_hour_FIELD_READER FALSE
#define BIND_TmUnzS_tm_hour_FIELD_WRITER FALSE
#define BIND_TmUnzS_tm_mday_FIELD_READER FALSE
#define BIND_TmUnzS_tm_mday_FIELD_WRITER FALSE
#define BIND_TmUnzS_tm_min_FIELD_READER FALSE
#define BIND_TmUnzS_tm_min_FIELD_WRITER FALSE
#define BIND_TmUnzS_tm_mon_FIELD_READER FALSE
#define BIND_TmUnzS_tm_mon_FIELD_WRITER FALSE
#define BIND_TmUnzS_tm_sec_FIELD_READER FALSE
#define BIND_TmUnzS_tm_sec_FIELD_WRITER FALSE
#define BIND_TmUnzS_tm_year_FIELD_READER FALSE
#define BIND_TmUnzS_tm_year_FIELD_WRITER FALSE

#define BIND_TmZipS_TYPE TRUE
#define BIND_TmZipS_INITIALIZE FALSE
#define BIND_TmZipS_tm_hour_FIELD_READER FALSE
#define BIND_TmZipS_tm_hour_FIELD_WRITER FALSE
#define BIND_TmZipS_tm_mday_FIELD_READER FALSE
#define BIND_TmZipS_tm_mday_FIELD_WRITER FALSE
#define BIND_TmZipS_tm_min_FIELD_READER FALSE
#define BIND_TmZipS_tm_min_FIELD_WRITER FALSE
#define BIND_TmZipS_tm_mon_FIELD_READER FALSE
#define BIND_TmZipS_tm_mon_FIELD_WRITER FALSE
#define BIND_TmZipS_tm_sec_FIELD_READER FALSE
#define BIND_TmZipS_tm_sec_FIELD_WRITER FALSE
#define BIND_TmZipS_tm_year_FIELD_READER FALSE
#define BIND_TmZipS_tm_year_FIELD_WRITER FALSE

#define BIND_TreeDescS_TYPE TRUE
#define BIND_TreeDescS_INITIALIZE FALSE
#define BIND_TreeDescS_dyn_tree_FIELD_READER FALSE
#define BIND_TreeDescS_dyn_tree_FIELD_WRITER FALSE
#define BIND_TreeDescS_max_code_FIELD_READER FALSE
#define BIND_TreeDescS_max_code_FIELD_WRITER FALSE
#define BIND_TreeDescS_stat_desc_FIELD_READER FALSE
#define BIND_TreeDescS_stat_desc_FIELD_WRITER FALSE

#define BIND_Unz64FilePosS_TYPE TRUE
#define BIND_Unz64FilePosS_INITIALIZE FALSE
#define BIND_Unz64FilePosS_num_of_file_FIELD_READER FALSE
#define BIND_Unz64FilePosS_num_of_file_FIELD_WRITER FALSE
#define BIND_Unz64FilePosS_pos_in_zip_directory_FIELD_READER FALSE
#define BIND_Unz64FilePosS_pos_in_zip_directory_FIELD_WRITER FALSE

#define BIND_UnzFileInfo64S_TYPE TRUE
#define BIND_UnzFileInfo64S_INITIALIZE FALSE
#define BIND_UnzFileInfo64S_compressed_size_FIELD_READER FALSE
#define BIND_UnzFileInfo64S_compressed_size_FIELD_WRITER FALSE
#define BIND_UnzFileInfo64S_compression_method_FIELD_READER FALSE
#define BIND_UnzFileInfo64S_compression_method_FIELD_WRITER FALSE
#define BIND_UnzFileInfo64S_crc_FIELD_READER FALSE
#define BIND_UnzFileInfo64S_crc_FIELD_WRITER FALSE
#define BIND_UnzFileInfo64S_disk_num_start_FIELD_READER FALSE
#define BIND_UnzFileInfo64S_disk_num_start_FIELD_WRITER FALSE
#define BIND_UnzFileInfo64S_dosDate_FIELD_READER FALSE
#define BIND_UnzFileInfo64S_dosDate_FIELD_WRITER FALSE
#define BIND_UnzFileInfo64S_external_fa_FIELD_READER FALSE
#define BIND_UnzFileInfo64S_external_fa_FIELD_WRITER FALSE
#define BIND_UnzFileInfo64S_flag_FIELD_READER FALSE
#define BIND_UnzFileInfo64S_flag_FIELD_WRITER FALSE
#define BIND_UnzFileInfo64S_internal_fa_FIELD_READER FALSE
#define BIND_UnzFileInfo64S_internal_fa_FIELD_WRITER FALSE
#define BIND_UnzFileInfo64S_size_file_comment_FIELD_READER FALSE
#define BIND_UnzFileInfo64S_size_file_comment_FIELD_WRITER FALSE
#define BIND_UnzFileInfo64S_size_file_extra_FIELD_READER FALSE
#define BIND_UnzFileInfo64S_size_file_extra_FIELD_WRITER FALSE
#define BIND_UnzFileInfo64S_size_filename_FIELD_READER FALSE
#define BIND_UnzFileInfo64S_size_filename_FIELD_WRITER FALSE
#define BIND_UnzFileInfo64S_tmu_date_FIELD_READER FALSE
#define BIND_UnzFileInfo64S_tmu_date_FIELD_WRITER FALSE
#define BIND_UnzFileInfo64S_uncompressed_size_FIELD_READER FALSE
#define BIND_UnzFileInfo64S_uncompressed_size_FIELD_WRITER FALSE
#define BIND_UnzFileInfo64S_version_FIELD_READER FALSE
#define BIND_UnzFileInfo64S_version_FIELD_WRITER FALSE
#define BIND_UnzFileInfo64S_version_needed_FIELD_READER FALSE
#define BIND_UnzFileInfo64S_version_needed_FIELD_WRITER FALSE

#define BIND_UnzFileInfoS_TYPE TRUE
#define BIND_UnzFileInfoS_INITIALIZE FALSE
#define BIND_UnzFileInfoS_compressed_size_FIELD_READER FALSE
#define BIND_UnzFileInfoS_compressed_size_FIELD_WRITER FALSE
#define BIND_UnzFileInfoS_compression_method_FIELD_READER FALSE
#define BIND_UnzFileInfoS_compression_method_FIELD_WRITER FALSE
#define BIND_UnzFileInfoS_crc_FIELD_READER FALSE
#define BIND_UnzFileInfoS_crc_FIELD_WRITER FALSE
#define BIND_UnzFileInfoS_disk_num_start_FIELD_READER FALSE
#define BIND_UnzFileInfoS_disk_num_start_FIELD_WRITER FALSE
#define BIND_UnzFileInfoS_dosDate_FIELD_READER FALSE
#define BIND_UnzFileInfoS_dosDate_FIELD_WRITER FALSE
#define BIND_UnzFileInfoS_external_fa_FIELD_READER FALSE
#define BIND_UnzFileInfoS_external_fa_FIELD_WRITER FALSE
#define BIND_UnzFileInfoS_flag_FIELD_READER FALSE
#define BIND_UnzFileInfoS_flag_FIELD_WRITER FALSE
#define BIND_UnzFileInfoS_internal_fa_FIELD_READER FALSE
#define BIND_UnzFileInfoS_internal_fa_FIELD_WRITER FALSE
#define BIND_UnzFileInfoS_size_file_comment_FIELD_READER FALSE
#define BIND_UnzFileInfoS_size_file_comment_FIELD_WRITER FALSE
#define BIND_UnzFileInfoS_size_file_extra_FIELD_READER FALSE
#define BIND_UnzFileInfoS_size_file_extra_FIELD_WRITER FALSE
#define BIND_UnzFileInfoS_size_filename_FIELD_READER FALSE
#define BIND_UnzFileInfoS_size_filename_FIELD_WRITER FALSE
#define BIND_UnzFileInfoS_tmu_date_FIELD_READER FALSE
#define BIND_UnzFileInfoS_tmu_date_FIELD_WRITER FALSE
#define BIND_UnzFileInfoS_uncompressed_size_FIELD_READER FALSE
#define BIND_UnzFileInfoS_uncompressed_size_FIELD_WRITER FALSE
#define BIND_UnzFileInfoS_version_FIELD_READER FALSE
#define BIND_UnzFileInfoS_version_FIELD_WRITER FALSE
#define BIND_UnzFileInfoS_version_needed_FIELD_READER FALSE
#define BIND_UnzFileInfoS_version_needed_FIELD_WRITER FALSE

#define BIND_UnzFilePosS_TYPE TRUE
#define BIND_UnzFilePosS_INITIALIZE FALSE
#define BIND_UnzFilePosS_num_of_file_FIELD_READER FALSE
#define BIND_UnzFilePosS_num_of_file_FIELD_WRITER FALSE
#define BIND_UnzFilePosS_pos_in_zip_directory_FIELD_READER FALSE
#define BIND_UnzFilePosS_pos_in_zip_directory_FIELD_WRITER FALSE

#define BIND_UnzGlobalInfo64S_TYPE TRUE
#define BIND_UnzGlobalInfo64S_INITIALIZE FALSE
#define BIND_UnzGlobalInfo64S_number_entry_FIELD_READER FALSE
#define BIND_UnzGlobalInfo64S_number_entry_FIELD_WRITER FALSE
#define BIND_UnzGlobalInfo64S_size_comment_FIELD_READER FALSE
#define BIND_UnzGlobalInfo64S_size_comment_FIELD_WRITER FALSE

#define BIND_UnzGlobalInfoS_TYPE TRUE
#define BIND_UnzGlobalInfoS_INITIALIZE FALSE
#define BIND_UnzGlobalInfoS_number_entry_FIELD_READER FALSE
#define BIND_UnzGlobalInfoS_number_entry_FIELD_WRITER FALSE
#define BIND_UnzGlobalInfoS_size_comment_FIELD_READER FALSE
#define BIND_UnzGlobalInfoS_size_comment_FIELD_WRITER FALSE

#define BIND_VideoBootStrap_TYPE TRUE
#define BIND_VideoBootStrap_INITIALIZE FALSE
#define BIND_VideoBootStrap_available_FIELD_READER FALSE
#define BIND_VideoBootStrap_available_FIELD_WRITER FALSE
#define BIND_VideoBootStrap_create_FIELD_READER FALSE
#define BIND_VideoBootStrap_create_FIELD_WRITER FALSE
#define BIND_VideoBootStrap_desc_FIELD_READER FALSE
#define BIND_VideoBootStrap_desc_FIELD_WRITER FALSE
#define BIND_VideoBootStrap_name_FIELD_READER FALSE
#define BIND_VideoBootStrap_name_FIELD_WRITER FALSE

#define BIND_VP8BitReader_TYPE TRUE
#define BIND_VP8BitReader_INITIALIZE FALSE
#define BIND_VP8BitReader_bits__FIELD_READER FALSE
#define BIND_VP8BitReader_bits__FIELD_WRITER FALSE
#define BIND_VP8BitReader_buf__FIELD_READER FALSE
#define BIND_VP8BitReader_buf__FIELD_WRITER FALSE
#define BIND_VP8BitReader_buf_end__FIELD_READER FALSE
#define BIND_VP8BitReader_buf_end__FIELD_WRITER FALSE
#define BIND_VP8BitReader_eof__FIELD_READER FALSE
#define BIND_VP8BitReader_eof__FIELD_WRITER FALSE
#define BIND_VP8BitReader_range__FIELD_READER FALSE
#define BIND_VP8BitReader_range__FIELD_WRITER FALSE
#define BIND_VP8BitReader_value__FIELD_READER FALSE
#define BIND_VP8BitReader_value__FIELD_WRITER FALSE

#define BIND_VP8BitWriter_TYPE TRUE
#define BIND_VP8BitWriter_INITIALIZE FALSE
#define BIND_VP8BitWriter_buf__FIELD_READER FALSE
#define BIND_VP8BitWriter_buf__FIELD_WRITER FALSE
#define BIND_VP8BitWriter_error__FIELD_READER FALSE
#define BIND_VP8BitWriter_error__FIELD_WRITER FALSE
#define BIND_VP8BitWriter_max_pos__FIELD_READER FALSE
#define BIND_VP8BitWriter_max_pos__FIELD_WRITER FALSE
#define BIND_VP8BitWriter_nb_bits__FIELD_READER FALSE
#define BIND_VP8BitWriter_nb_bits__FIELD_WRITER FALSE
#define BIND_VP8BitWriter_pos__FIELD_READER FALSE
#define BIND_VP8BitWriter_pos__FIELD_WRITER FALSE
#define BIND_VP8BitWriter_range__FIELD_READER FALSE
#define BIND_VP8BitWriter_range__FIELD_WRITER FALSE
#define BIND_VP8BitWriter_run__FIELD_READER FALSE
#define BIND_VP8BitWriter_run__FIELD_WRITER FALSE
#define BIND_VP8BitWriter_value__FIELD_READER FALSE
#define BIND_VP8BitWriter_value__FIELD_WRITER FALSE

#define BIND_VP8Decoder_TYPE TRUE
#define BIND_VP8Decoder_INITIALIZE FALSE
#define BIND_VP8Decoder_alpha_data__FIELD_READER FALSE
#define BIND_VP8Decoder_alpha_data__FIELD_WRITER FALSE
#define BIND_VP8Decoder_alpha_data_size__FIELD_READER FALSE
#define BIND_VP8Decoder_alpha_data_size__FIELD_WRITER FALSE
#define BIND_VP8Decoder_alpha_plane__FIELD_READER FALSE
#define BIND_VP8Decoder_alpha_plane__FIELD_WRITER FALSE
#define BIND_VP8Decoder_br__FIELD_READER FALSE
#define BIND_VP8Decoder_br__FIELD_WRITER FALSE
#define BIND_VP8Decoder_br_mb_x__FIELD_READER FALSE
#define BIND_VP8Decoder_br_mb_x__FIELD_WRITER FALSE
#define BIND_VP8Decoder_br_mb_y__FIELD_READER FALSE
#define BIND_VP8Decoder_br_mb_y__FIELD_WRITER FALSE
#define BIND_VP8Decoder_buffer_flags__FIELD_READER FALSE
#define BIND_VP8Decoder_buffer_flags__FIELD_WRITER FALSE
#define BIND_VP8Decoder_cache_id__FIELD_READER FALSE
#define BIND_VP8Decoder_cache_id__FIELD_WRITER FALSE
#define BIND_VP8Decoder_cache_u__FIELD_READER FALSE
#define BIND_VP8Decoder_cache_u__FIELD_WRITER FALSE
#define BIND_VP8Decoder_cache_uv_stride__FIELD_READER FALSE
#define BIND_VP8Decoder_cache_uv_stride__FIELD_WRITER FALSE
#define BIND_VP8Decoder_cache_v__FIELD_READER FALSE
#define BIND_VP8Decoder_cache_v__FIELD_WRITER FALSE
#define BIND_VP8Decoder_cache_y__FIELD_READER FALSE
#define BIND_VP8Decoder_cache_y__FIELD_WRITER FALSE
#define BIND_VP8Decoder_cache_y_stride__FIELD_READER FALSE
#define BIND_VP8Decoder_cache_y_stride__FIELD_WRITER FALSE
#define BIND_VP8Decoder_coeffs__FIELD_READER FALSE
#define BIND_VP8Decoder_coeffs__FIELD_WRITER FALSE
#define BIND_VP8Decoder_dqm__FIELD_READER FALSE
#define BIND_VP8Decoder_dqm__FIELD_WRITER FALSE
#define BIND_VP8Decoder_error_msg__FIELD_READER FALSE
#define BIND_VP8Decoder_error_msg__FIELD_WRITER FALSE
#define BIND_VP8Decoder_f_info__FIELD_READER FALSE
#define BIND_VP8Decoder_f_info__FIELD_WRITER FALSE
#define BIND_VP8Decoder_filter_hdr__FIELD_READER FALSE
#define BIND_VP8Decoder_filter_hdr__FIELD_WRITER FALSE
#define BIND_VP8Decoder_filter_row__FIELD_READER FALSE
#define BIND_VP8Decoder_filter_row__FIELD_WRITER FALSE
#define BIND_VP8Decoder_filter_type__FIELD_READER FALSE
#define BIND_VP8Decoder_filter_type__FIELD_WRITER FALSE
#define BIND_VP8Decoder_frm_hdr__FIELD_READER FALSE
#define BIND_VP8Decoder_frm_hdr__FIELD_WRITER FALSE
#define BIND_VP8Decoder_fstrengths__FIELD_READER FALSE
#define BIND_VP8Decoder_fstrengths__FIELD_WRITER FALSE
#define BIND_VP8Decoder_imodes__FIELD_READER FALSE
#define BIND_VP8Decoder_imodes__FIELD_WRITER FALSE
#define BIND_VP8Decoder_intra_l__FIELD_READER FALSE
#define BIND_VP8Decoder_intra_l__FIELD_WRITER FALSE
#define BIND_VP8Decoder_intra_t__FIELD_READER FALSE
#define BIND_VP8Decoder_intra_t__FIELD_WRITER FALSE
#define BIND_VP8Decoder_is_alpha_decoded__FIELD_READER FALSE
#define BIND_VP8Decoder_is_alpha_decoded__FIELD_WRITER FALSE
#define BIND_VP8Decoder_is_i4x4__FIELD_READER FALSE
#define BIND_VP8Decoder_is_i4x4__FIELD_WRITER FALSE
#define BIND_VP8Decoder_layer_colorspace__FIELD_READER FALSE
#define BIND_VP8Decoder_layer_colorspace__FIELD_WRITER FALSE
#define BIND_VP8Decoder_layer_data__FIELD_READER FALSE
#define BIND_VP8Decoder_layer_data__FIELD_WRITER FALSE
#define BIND_VP8Decoder_layer_data_size__FIELD_READER FALSE
#define BIND_VP8Decoder_layer_data_size__FIELD_WRITER FALSE
#define BIND_VP8Decoder_mb_h__FIELD_READER FALSE
#define BIND_VP8Decoder_mb_h__FIELD_WRITER FALSE
#define BIND_VP8Decoder_mb_info__FIELD_READER FALSE
#define BIND_VP8Decoder_mb_info__FIELD_WRITER FALSE
#define BIND_VP8Decoder_mb_w__FIELD_READER FALSE
#define BIND_VP8Decoder_mb_w__FIELD_WRITER FALSE
#define BIND_VP8Decoder_mb_x__FIELD_READER FALSE
#define BIND_VP8Decoder_mb_x__FIELD_WRITER FALSE
#define BIND_VP8Decoder_mb_y__FIELD_READER FALSE
#define BIND_VP8Decoder_mb_y__FIELD_WRITER FALSE
#define BIND_VP8Decoder_mem__FIELD_READER FALSE
#define BIND_VP8Decoder_mem__FIELD_WRITER FALSE
#define BIND_VP8Decoder_mem_size__FIELD_READER FALSE
#define BIND_VP8Decoder_mem_size__FIELD_WRITER FALSE
#define BIND_VP8Decoder_non_zero__FIELD_READER FALSE
#define BIND_VP8Decoder_non_zero__FIELD_WRITER FALSE
#define BIND_VP8Decoder_non_zero_ac__FIELD_READER FALSE
#define BIND_VP8Decoder_non_zero_ac__FIELD_WRITER FALSE
#define BIND_VP8Decoder_num_caches__FIELD_READER FALSE
#define BIND_VP8Decoder_num_caches__FIELD_WRITER FALSE
#define BIND_VP8Decoder_num_parts__FIELD_READER FALSE
#define BIND_VP8Decoder_num_parts__FIELD_WRITER FALSE
#define BIND_VP8Decoder_parts__FIELD_READER FALSE
#define BIND_VP8Decoder_parts__FIELD_WRITER FALSE
#define BIND_VP8Decoder_pic_hdr__FIELD_READER FALSE
#define BIND_VP8Decoder_pic_hdr__FIELD_WRITER FALSE
#define BIND_VP8Decoder_proba__FIELD_READER FALSE
#define BIND_VP8Decoder_proba__FIELD_WRITER FALSE
#define BIND_VP8Decoder_ready__FIELD_READER FALSE
#define BIND_VP8Decoder_ready__FIELD_WRITER FALSE
#define BIND_VP8Decoder_segment__FIELD_READER FALSE
#define BIND_VP8Decoder_segment__FIELD_WRITER FALSE
#define BIND_VP8Decoder_segment_hdr__FIELD_READER FALSE
#define BIND_VP8Decoder_segment_hdr__FIELD_WRITER FALSE
#define BIND_VP8Decoder_skip_p__FIELD_READER FALSE
#define BIND_VP8Decoder_skip_p__FIELD_WRITER FALSE
#define BIND_VP8Decoder_status__FIELD_READER FALSE
#define BIND_VP8Decoder_status__FIELD_WRITER FALSE
#define BIND_VP8Decoder_thread_ctx__FIELD_READER FALSE
#define BIND_VP8Decoder_thread_ctx__FIELD_WRITER FALSE
#define BIND_VP8Decoder_tl_mb_x__FIELD_READER FALSE
#define BIND_VP8Decoder_tl_mb_x__FIELD_WRITER FALSE
#define BIND_VP8Decoder_tl_mb_y__FIELD_READER FALSE
#define BIND_VP8Decoder_tl_mb_y__FIELD_WRITER FALSE
#define BIND_VP8Decoder_u_t__FIELD_READER FALSE
#define BIND_VP8Decoder_u_t__FIELD_WRITER FALSE
#define BIND_VP8Decoder_use_skip_proba__FIELD_READER FALSE
#define BIND_VP8Decoder_use_skip_proba__FIELD_WRITER FALSE
#define BIND_VP8Decoder_use_threads__FIELD_READER FALSE
#define BIND_VP8Decoder_use_threads__FIELD_WRITER FALSE
#define BIND_VP8Decoder_uvmode__FIELD_READER FALSE
#define BIND_VP8Decoder_uvmode__FIELD_WRITER FALSE
#define BIND_VP8Decoder_v_t__FIELD_READER FALSE
#define BIND_VP8Decoder_v_t__FIELD_WRITER FALSE
#define BIND_VP8Decoder_worker__FIELD_READER FALSE
#define BIND_VP8Decoder_worker__FIELD_WRITER FALSE
#define BIND_VP8Decoder_y_t__FIELD_READER FALSE
#define BIND_VP8Decoder_y_t__FIELD_WRITER FALSE
#define BIND_VP8Decoder_yuv_b__FIELD_READER FALSE
#define BIND_VP8Decoder_yuv_b__FIELD_WRITER FALSE

#define BIND_VP8Encoder_TYPE TRUE
#define BIND_VP8Encoder_INITIALIZE FALSE
#define BIND_VP8Encoder_alpha__FIELD_READER FALSE
#define BIND_VP8Encoder_alpha__FIELD_WRITER FALSE
#define BIND_VP8Encoder_alpha_data__FIELD_READER FALSE
#define BIND_VP8Encoder_alpha_data__FIELD_WRITER FALSE
#define BIND_VP8Encoder_alpha_data_size__FIELD_READER FALSE
#define BIND_VP8Encoder_alpha_data_size__FIELD_WRITER FALSE
#define BIND_VP8Encoder_alpha_worker__FIELD_READER FALSE
#define BIND_VP8Encoder_alpha_worker__FIELD_WRITER FALSE
#define BIND_VP8Encoder_base_quant__FIELD_READER FALSE
#define BIND_VP8Encoder_base_quant__FIELD_WRITER FALSE
#define BIND_VP8Encoder_block_count__FIELD_READER FALSE
#define BIND_VP8Encoder_block_count__FIELD_WRITER FALSE
#define BIND_VP8Encoder_bw__FIELD_READER FALSE
#define BIND_VP8Encoder_bw__FIELD_WRITER FALSE
#define BIND_VP8Encoder_coded_size__FIELD_READER FALSE
#define BIND_VP8Encoder_coded_size__FIELD_WRITER FALSE
#define BIND_VP8Encoder_config__FIELD_READER FALSE
#define BIND_VP8Encoder_config__FIELD_WRITER FALSE
#define BIND_VP8Encoder_do_search__FIELD_READER FALSE
#define BIND_VP8Encoder_do_search__FIELD_WRITER FALSE
#define BIND_VP8Encoder_dq_uv_ac__FIELD_READER FALSE
#define BIND_VP8Encoder_dq_uv_ac__FIELD_WRITER FALSE
#define BIND_VP8Encoder_dq_uv_dc__FIELD_READER FALSE
#define BIND_VP8Encoder_dq_uv_dc__FIELD_WRITER FALSE
#define BIND_VP8Encoder_dq_y1_dc__FIELD_READER FALSE
#define BIND_VP8Encoder_dq_y1_dc__FIELD_WRITER FALSE
#define BIND_VP8Encoder_dq_y2_ac__FIELD_READER FALSE
#define BIND_VP8Encoder_dq_y2_ac__FIELD_WRITER FALSE
#define BIND_VP8Encoder_dq_y2_dc__FIELD_READER FALSE
#define BIND_VP8Encoder_dq_y2_dc__FIELD_WRITER FALSE
#define BIND_VP8Encoder_dqm__FIELD_READER FALSE
#define BIND_VP8Encoder_dqm__FIELD_WRITER FALSE
#define BIND_VP8Encoder_filter_hdr__FIELD_READER FALSE
#define BIND_VP8Encoder_filter_hdr__FIELD_WRITER FALSE
#define BIND_VP8Encoder_has_alpha__FIELD_READER FALSE
#define BIND_VP8Encoder_has_alpha__FIELD_WRITER FALSE
#define BIND_VP8Encoder_layer_bw__FIELD_READER FALSE
#define BIND_VP8Encoder_layer_bw__FIELD_WRITER FALSE
#define BIND_VP8Encoder_layer_data__FIELD_READER FALSE
#define BIND_VP8Encoder_layer_data__FIELD_WRITER FALSE
#define BIND_VP8Encoder_layer_data_size__FIELD_READER FALSE
#define BIND_VP8Encoder_layer_data_size__FIELD_WRITER FALSE
#define BIND_VP8Encoder_lf_stats__FIELD_READER FALSE
#define BIND_VP8Encoder_lf_stats__FIELD_WRITER FALSE
#define BIND_VP8Encoder_max_i4_header_bits__FIELD_READER FALSE
#define BIND_VP8Encoder_max_i4_header_bits__FIELD_WRITER FALSE
#define BIND_VP8Encoder_mb_h__FIELD_READER FALSE
#define BIND_VP8Encoder_mb_h__FIELD_WRITER FALSE
#define BIND_VP8Encoder_mb_info__FIELD_READER FALSE
#define BIND_VP8Encoder_mb_info__FIELD_WRITER FALSE
#define BIND_VP8Encoder_mb_w__FIELD_READER FALSE
#define BIND_VP8Encoder_mb_w__FIELD_WRITER FALSE
#define BIND_VP8Encoder_method__FIELD_READER FALSE
#define BIND_VP8Encoder_method__FIELD_WRITER FALSE
#define BIND_VP8Encoder_num_parts__FIELD_READER FALSE
#define BIND_VP8Encoder_num_parts__FIELD_WRITER FALSE
#define BIND_VP8Encoder_nz__FIELD_READER FALSE
#define BIND_VP8Encoder_nz__FIELD_WRITER FALSE
#define BIND_VP8Encoder_parts__FIELD_READER FALSE
#define BIND_VP8Encoder_parts__FIELD_WRITER FALSE
#define BIND_VP8Encoder_percent__FIELD_READER FALSE
#define BIND_VP8Encoder_percent__FIELD_WRITER FALSE
#define BIND_VP8Encoder_pic__FIELD_READER FALSE
#define BIND_VP8Encoder_pic__FIELD_WRITER FALSE
#define BIND_VP8Encoder_preds__FIELD_READER FALSE
#define BIND_VP8Encoder_preds__FIELD_WRITER FALSE
#define BIND_VP8Encoder_preds_w__FIELD_READER FALSE
#define BIND_VP8Encoder_preds_w__FIELD_WRITER FALSE
#define BIND_VP8Encoder_proba__FIELD_READER FALSE
#define BIND_VP8Encoder_proba__FIELD_WRITER FALSE
#define BIND_VP8Encoder_profile__FIELD_READER FALSE
#define BIND_VP8Encoder_profile__FIELD_WRITER FALSE
#define BIND_VP8Encoder_rd_opt_level__FIELD_READER FALSE
#define BIND_VP8Encoder_rd_opt_level__FIELD_WRITER FALSE
#define BIND_VP8Encoder_residual_bytes__FIELD_READER FALSE
#define BIND_VP8Encoder_residual_bytes__FIELD_WRITER FALSE
#define BIND_VP8Encoder_segment_hdr__FIELD_READER FALSE
#define BIND_VP8Encoder_segment_hdr__FIELD_WRITER FALSE
#define BIND_VP8Encoder_sse__FIELD_READER FALSE
#define BIND_VP8Encoder_sse__FIELD_WRITER FALSE
#define BIND_VP8Encoder_sse_count__FIELD_READER FALSE
#define BIND_VP8Encoder_sse_count__FIELD_WRITER FALSE
#define BIND_VP8Encoder_thread_level__FIELD_READER FALSE
#define BIND_VP8Encoder_thread_level__FIELD_WRITER FALSE
#define BIND_VP8Encoder_tokens__FIELD_READER FALSE
#define BIND_VP8Encoder_tokens__FIELD_WRITER FALSE
#define BIND_VP8Encoder_u_left__FIELD_READER FALSE
#define BIND_VP8Encoder_u_left__FIELD_WRITER FALSE
#define BIND_VP8Encoder_use_layer__FIELD_READER FALSE
#define BIND_VP8Encoder_use_layer__FIELD_WRITER FALSE
#define BIND_VP8Encoder_use_tokens__FIELD_READER FALSE
#define BIND_VP8Encoder_use_tokens__FIELD_WRITER FALSE
#define BIND_VP8Encoder_uv_alpha__FIELD_READER FALSE
#define BIND_VP8Encoder_uv_alpha__FIELD_WRITER FALSE
#define BIND_VP8Encoder_uv_top__FIELD_READER FALSE
#define BIND_VP8Encoder_uv_top__FIELD_WRITER FALSE
#define BIND_VP8Encoder_v_left__FIELD_READER FALSE
#define BIND_VP8Encoder_v_left__FIELD_WRITER FALSE
#define BIND_VP8Encoder_y_left__FIELD_READER FALSE
#define BIND_VP8Encoder_y_left__FIELD_WRITER FALSE
#define BIND_VP8Encoder_y_top__FIELD_READER FALSE
#define BIND_VP8Encoder_y_top__FIELD_WRITER FALSE
#define BIND_VP8Encoder_yuv_in__FIELD_READER FALSE
#define BIND_VP8Encoder_yuv_in__FIELD_WRITER FALSE
#define BIND_VP8Encoder_yuv_out2__FIELD_READER FALSE
#define BIND_VP8Encoder_yuv_out2__FIELD_WRITER FALSE
#define BIND_VP8Encoder_yuv_out__FIELD_READER FALSE
#define BIND_VP8Encoder_yuv_out__FIELD_WRITER FALSE
#define BIND_VP8Encoder_yuv_p__FIELD_READER FALSE
#define BIND_VP8Encoder_yuv_p__FIELD_WRITER FALSE

#define BIND_VP8Histogram_TYPE TRUE
#define BIND_VP8Histogram_INITIALIZE FALSE
#define BIND_VP8Histogram_distribution_FIELD_READER FALSE
#define BIND_VP8Histogram_distribution_FIELD_WRITER FALSE

#define BIND_VP8Io_TYPE TRUE
#define BIND_VP8Io_INITIALIZE FALSE
#define BIND_VP8Io_a_FIELD_READER FALSE
#define BIND_VP8Io_a_FIELD_WRITER FALSE
#define BIND_VP8Io_bypass_filtering_FIELD_READER FALSE
#define BIND_VP8Io_bypass_filtering_FIELD_WRITER FALSE
#define BIND_VP8Io_crop_bottom_FIELD_READER FALSE
#define BIND_VP8Io_crop_bottom_FIELD_WRITER FALSE
#define BIND_VP8Io_crop_left_FIELD_READER FALSE
#define BIND_VP8Io_crop_left_FIELD_WRITER FALSE
#define BIND_VP8Io_crop_right_FIELD_READER FALSE
#define BIND_VP8Io_crop_right_FIELD_WRITER FALSE
#define BIND_VP8Io_crop_top_FIELD_READER FALSE
#define BIND_VP8Io_crop_top_FIELD_WRITER FALSE
#define BIND_VP8Io_data_FIELD_READER FALSE
#define BIND_VP8Io_data_FIELD_WRITER FALSE
#define BIND_VP8Io_data_size_FIELD_READER FALSE
#define BIND_VP8Io_data_size_FIELD_WRITER FALSE
#define BIND_VP8Io_fancy_upsampling_FIELD_READER FALSE
#define BIND_VP8Io_fancy_upsampling_FIELD_WRITER FALSE
#define BIND_VP8Io_height_FIELD_READER FALSE
#define BIND_VP8Io_height_FIELD_WRITER FALSE
#define BIND_VP8Io_mb_h_FIELD_READER FALSE
#define BIND_VP8Io_mb_h_FIELD_WRITER FALSE
#define BIND_VP8Io_mb_w_FIELD_READER FALSE
#define BIND_VP8Io_mb_w_FIELD_WRITER FALSE
#define BIND_VP8Io_mb_y_FIELD_READER FALSE
#define BIND_VP8Io_mb_y_FIELD_WRITER FALSE
#define BIND_VP8Io_opaque_FIELD_READER FALSE
#define BIND_VP8Io_opaque_FIELD_WRITER FALSE
#define BIND_VP8Io_put_FIELD_READER FALSE
#define BIND_VP8Io_put_FIELD_WRITER FALSE
#define BIND_VP8Io_scaled_height_FIELD_READER FALSE
#define BIND_VP8Io_scaled_height_FIELD_WRITER FALSE
#define BIND_VP8Io_scaled_width_FIELD_READER FALSE
#define BIND_VP8Io_scaled_width_FIELD_WRITER FALSE
#define BIND_VP8Io_setup_FIELD_READER FALSE
#define BIND_VP8Io_setup_FIELD_WRITER FALSE
#define BIND_VP8Io_teardown_FIELD_READER FALSE
#define BIND_VP8Io_teardown_FIELD_WRITER FALSE
#define BIND_VP8Io_u_FIELD_READER FALSE
#define BIND_VP8Io_u_FIELD_WRITER FALSE
#define BIND_VP8Io_use_cropping_FIELD_READER FALSE
#define BIND_VP8Io_use_cropping_FIELD_WRITER FALSE
#define BIND_VP8Io_use_scaling_FIELD_READER FALSE
#define BIND_VP8Io_use_scaling_FIELD_WRITER FALSE
#define BIND_VP8Io_uv_stride_FIELD_READER FALSE
#define BIND_VP8Io_uv_stride_FIELD_WRITER FALSE
#define BIND_VP8Io_v_FIELD_READER FALSE
#define BIND_VP8Io_v_FIELD_WRITER FALSE
#define BIND_VP8Io_width_FIELD_READER FALSE
#define BIND_VP8Io_width_FIELD_WRITER FALSE
#define BIND_VP8Io_y_FIELD_READER FALSE
#define BIND_VP8Io_y_FIELD_WRITER FALSE
#define BIND_VP8Io_y_stride_FIELD_READER FALSE
#define BIND_VP8Io_y_stride_FIELD_WRITER FALSE

#define BIND_VP8LTransform_TYPE TRUE
#define BIND_VP8LTransform_INITIALIZE FALSE
#define BIND_VP8LTransform_bits__FIELD_READER FALSE
#define BIND_VP8LTransform_bits__FIELD_WRITER FALSE
#define BIND_VP8LTransform_data__FIELD_READER FALSE
#define BIND_VP8LTransform_data__FIELD_WRITER FALSE
#define BIND_VP8LTransform_type__FIELD_READER FALSE
#define BIND_VP8LTransform_type__FIELD_WRITER FALSE
#define BIND_VP8LTransform_xsize__FIELD_READER FALSE
#define BIND_VP8LTransform_xsize__FIELD_WRITER FALSE
#define BIND_VP8LTransform_ysize__FIELD_READER FALSE
#define BIND_VP8LTransform_ysize__FIELD_WRITER FALSE

#define BIND_VP8Matrix_TYPE TRUE
#define BIND_VP8Matrix_INITIALIZE FALSE
#define BIND_VP8Matrix_bias__FIELD_READER FALSE
#define BIND_VP8Matrix_bias__FIELD_WRITER FALSE
#define BIND_VP8Matrix_iq__FIELD_READER FALSE
#define BIND_VP8Matrix_iq__FIELD_WRITER FALSE
#define BIND_VP8Matrix_q__FIELD_READER FALSE
#define BIND_VP8Matrix_q__FIELD_WRITER FALSE
#define BIND_VP8Matrix_sharpen__FIELD_READER FALSE
#define BIND_VP8Matrix_sharpen__FIELD_WRITER FALSE
#define BIND_VP8Matrix_zthresh__FIELD_READER FALSE
#define BIND_VP8Matrix_zthresh__FIELD_WRITER FALSE

#define BIND_VP8Tokens_TYPE TRUE
#define BIND_VP8Tokens_INITIALIZE FALSE

#define BIND_WaveFMT_TYPE TRUE
#define BIND_WaveFMT_INITIALIZE FALSE
#define BIND_WaveFMT_bitspersample_FIELD_READER FALSE
#define BIND_WaveFMT_bitspersample_FIELD_WRITER FALSE
#define BIND_WaveFMT_blockalign_FIELD_READER FALSE
#define BIND_WaveFMT_blockalign_FIELD_WRITER FALSE
#define BIND_WaveFMT_byterate_FIELD_READER FALSE
#define BIND_WaveFMT_byterate_FIELD_WRITER FALSE
#define BIND_WaveFMT_channels_FIELD_READER FALSE
#define BIND_WaveFMT_channels_FIELD_WRITER FALSE
#define BIND_WaveFMT_encoding_FIELD_READER FALSE
#define BIND_WaveFMT_encoding_FIELD_WRITER FALSE
#define BIND_WaveFMT_frequency_FIELD_READER FALSE
#define BIND_WaveFMT_frequency_FIELD_WRITER FALSE

#define BIND_WebPAuxStats_TYPE TRUE
#define BIND_WebPAuxStats_INITIALIZE FALSE
#define BIND_WebPAuxStats_PSNR_FIELD_READER FALSE
#define BIND_WebPAuxStats_PSNR_FIELD_WRITER FALSE
#define BIND_WebPAuxStats_PSNR_FIELD_READER FALSE
#define BIND_WebPAuxStats_PSNR_FIELD_WRITER FALSE
#define BIND_WebPAuxStats_PSNR_FIELD_READER FALSE
#define BIND_WebPAuxStats_PSNR_FIELD_WRITER FALSE
#define BIND_WebPAuxStats_PSNR_FIELD_READER FALSE
#define BIND_WebPAuxStats_PSNR_FIELD_WRITER FALSE
#define BIND_WebPAuxStats_PSNR_FIELD_READER FALSE
#define BIND_WebPAuxStats_PSNR_FIELD_WRITER FALSE
#define BIND_WebPAuxStats_alpha_data_size_FIELD_READER FALSE
#define BIND_WebPAuxStats_alpha_data_size_FIELD_WRITER FALSE
#define BIND_WebPAuxStats_alpha_data_size_FIELD_READER FALSE
#define BIND_WebPAuxStats_alpha_data_size_FIELD_WRITER FALSE
#define BIND_WebPAuxStats_alpha_data_size_FIELD_READER FALSE
#define BIND_WebPAuxStats_alpha_data_size_FIELD_WRITER FALSE
#define BIND_WebPAuxStats_alpha_data_size_FIELD_READER FALSE
#define BIND_WebPAuxStats_alpha_data_size_FIELD_WRITER FALSE
#define BIND_WebPAuxStats_alpha_data_size_FIELD_READER FALSE
#define BIND_WebPAuxStats_alpha_data_size_FIELD_WRITER FALSE
#define BIND_WebPAuxStats_block_count_FIELD_READER FALSE
#define BIND_WebPAuxStats_block_count_FIELD_WRITER FALSE
#define BIND_WebPAuxStats_block_count_FIELD_READER FALSE
#define BIND_WebPAuxStats_block_count_FIELD_WRITER FALSE
#define BIND_WebPAuxStats_block_count_FIELD_READER FALSE
#define BIND_WebPAuxStats_block_count_FIELD_WRITER FALSE
#define BIND_WebPAuxStats_block_count_FIELD_READER FALSE
#define BIND_WebPAuxStats_block_count_FIELD_WRITER FALSE
#define BIND_WebPAuxStats_block_count_FIELD_READER FALSE
#define BIND_WebPAuxStats_block_count_FIELD_WRITER FALSE
#define BIND_WebPAuxStats_cache_bits_FIELD_READER FALSE
#define BIND_WebPAuxStats_cache_bits_FIELD_WRITER FALSE
#define BIND_WebPAuxStats_cache_bits_FIELD_READER FALSE
#define BIND_WebPAuxStats_cache_bits_FIELD_WRITER FALSE
#define BIND_WebPAuxStats_cache_bits_FIELD_READER FALSE
#define BIND_WebPAuxStats_cache_bits_FIELD_WRITER FALSE
#define BIND_WebPAuxStats_cache_bits_FIELD_READER FALSE
#define BIND_WebPAuxStats_cache_bits_FIELD_WRITER FALSE
#define BIND_WebPAuxStats_cache_bits_FIELD_READER FALSE
#define BIND_WebPAuxStats_cache_bits_FIELD_WRITER FALSE
#define BIND_WebPAuxStats_coded_size_FIELD_READER FALSE
#define BIND_WebPAuxStats_coded_size_FIELD_WRITER FALSE
#define BIND_WebPAuxStats_coded_size_FIELD_READER FALSE
#define BIND_WebPAuxStats_coded_size_FIELD_WRITER FALSE
#define BIND_WebPAuxStats_coded_size_FIELD_READER FALSE
#define BIND_WebPAuxStats_coded_size_FIELD_WRITER FALSE
#define BIND_WebPAuxStats_coded_size_FIELD_READER FALSE
#define BIND_WebPAuxStats_coded_size_FIELD_WRITER FALSE
#define BIND_WebPAuxStats_coded_size_FIELD_READER FALSE
#define BIND_WebPAuxStats_coded_size_FIELD_WRITER FALSE
#define BIND_WebPAuxStats_header_bytes_FIELD_READER FALSE
#define BIND_WebPAuxStats_header_bytes_FIELD_WRITER FALSE
#define BIND_WebPAuxStats_header_bytes_FIELD_READER FALSE
#define BIND_WebPAuxStats_header_bytes_FIELD_WRITER FALSE
#define BIND_WebPAuxStats_header_bytes_FIELD_READER FALSE
#define BIND_WebPAuxStats_header_bytes_FIELD_WRITER FALSE
#define BIND_WebPAuxStats_header_bytes_FIELD_READER FALSE
#define BIND_WebPAuxStats_header_bytes_FIELD_WRITER FALSE
#define BIND_WebPAuxStats_header_bytes_FIELD_READER FALSE
#define BIND_WebPAuxStats_header_bytes_FIELD_WRITER FALSE
#define BIND_WebPAuxStats_histogram_bits_FIELD_READER FALSE
#define BIND_WebPAuxStats_histogram_bits_FIELD_WRITER FALSE
#define BIND_WebPAuxStats_histogram_bits_FIELD_READER FALSE
#define BIND_WebPAuxStats_histogram_bits_FIELD_WRITER FALSE
#define BIND_WebPAuxStats_histogram_bits_FIELD_READER FALSE
#define BIND_WebPAuxStats_histogram_bits_FIELD_WRITER FALSE
#define BIND_WebPAuxStats_histogram_bits_FIELD_READER FALSE
#define BIND_WebPAuxStats_histogram_bits_FIELD_WRITER FALSE
#define BIND_WebPAuxStats_histogram_bits_FIELD_READER FALSE
#define BIND_WebPAuxStats_histogram_bits_FIELD_WRITER FALSE
#define BIND_WebPAuxStats_layer_data_size_FIELD_READER FALSE
#define BIND_WebPAuxStats_layer_data_size_FIELD_WRITER FALSE
#define BIND_WebPAuxStats_layer_data_size_FIELD_READER FALSE
#define BIND_WebPAuxStats_layer_data_size_FIELD_WRITER FALSE
#define BIND_WebPAuxStats_layer_data_size_FIELD_READER FALSE
#define BIND_WebPAuxStats_layer_data_size_FIELD_WRITER FALSE
#define BIND_WebPAuxStats_layer_data_size_FIELD_READER FALSE
#define BIND_WebPAuxStats_layer_data_size_FIELD_WRITER FALSE
#define BIND_WebPAuxStats_layer_data_size_FIELD_READER FALSE
#define BIND_WebPAuxStats_layer_data_size_FIELD_WRITER FALSE
#define BIND_WebPAuxStats_lossless_features_FIELD_READER FALSE
#define BIND_WebPAuxStats_lossless_features_FIELD_WRITER FALSE
#define BIND_WebPAuxStats_lossless_features_FIELD_READER FALSE
#define BIND_WebPAuxStats_lossless_features_FIELD_WRITER FALSE
#define BIND_WebPAuxStats_lossless_features_FIELD_READER FALSE
#define BIND_WebPAuxStats_lossless_features_FIELD_WRITER FALSE
#define BIND_WebPAuxStats_lossless_features_FIELD_READER FALSE
#define BIND_WebPAuxStats_lossless_features_FIELD_WRITER FALSE
#define BIND_WebPAuxStats_lossless_features_FIELD_READER FALSE
#define BIND_WebPAuxStats_lossless_features_FIELD_WRITER FALSE
#define BIND_WebPAuxStats_lossless_size_FIELD_READER FALSE
#define BIND_WebPAuxStats_lossless_size_FIELD_WRITER FALSE
#define BIND_WebPAuxStats_lossless_size_FIELD_READER FALSE
#define BIND_WebPAuxStats_lossless_size_FIELD_WRITER FALSE
#define BIND_WebPAuxStats_lossless_size_FIELD_READER FALSE
#define BIND_WebPAuxStats_lossless_size_FIELD_WRITER FALSE
#define BIND_WebPAuxStats_lossless_size_FIELD_READER FALSE
#define BIND_WebPAuxStats_lossless_size_FIELD_WRITER FALSE
#define BIND_WebPAuxStats_lossless_size_FIELD_READER FALSE
#define BIND_WebPAuxStats_lossless_size_FIELD_WRITER FALSE
#define BIND_WebPAuxStats_pad_FIELD_READER FALSE
#define BIND_WebPAuxStats_pad_FIELD_WRITER FALSE
#define BIND_WebPAuxStats_pad_FIELD_READER FALSE
#define BIND_WebPAuxStats_pad_FIELD_WRITER FALSE
#define BIND_WebPAuxStats_pad_FIELD_READER FALSE
#define BIND_WebPAuxStats_pad_FIELD_WRITER FALSE
#define BIND_WebPAuxStats_pad_FIELD_READER FALSE
#define BIND_WebPAuxStats_pad_FIELD_WRITER FALSE
#define BIND_WebPAuxStats_pad_FIELD_READER FALSE
#define BIND_WebPAuxStats_pad_FIELD_WRITER FALSE
#define BIND_WebPAuxStats_palette_size_FIELD_READER FALSE
#define BIND_WebPAuxStats_palette_size_FIELD_WRITER FALSE
#define BIND_WebPAuxStats_palette_size_FIELD_READER FALSE
#define BIND_WebPAuxStats_palette_size_FIELD_WRITER FALSE
#define BIND_WebPAuxStats_palette_size_FIELD_READER FALSE
#define BIND_WebPAuxStats_palette_size_FIELD_WRITER FALSE
#define BIND_WebPAuxStats_palette_size_FIELD_READER FALSE
#define BIND_WebPAuxStats_palette_size_FIELD_WRITER FALSE
#define BIND_WebPAuxStats_palette_size_FIELD_READER FALSE
#define BIND_WebPAuxStats_palette_size_FIELD_WRITER FALSE
#define BIND_WebPAuxStats_residual_bytes_FIELD_READER FALSE
#define BIND_WebPAuxStats_residual_bytes_FIELD_WRITER FALSE
#define BIND_WebPAuxStats_residual_bytes_FIELD_READER FALSE
#define BIND_WebPAuxStats_residual_bytes_FIELD_WRITER FALSE
#define BIND_WebPAuxStats_residual_bytes_FIELD_READER FALSE
#define BIND_WebPAuxStats_residual_bytes_FIELD_WRITER FALSE
#define BIND_WebPAuxStats_residual_bytes_FIELD_READER FALSE
#define BIND_WebPAuxStats_residual_bytes_FIELD_WRITER FALSE
#define BIND_WebPAuxStats_residual_bytes_FIELD_READER FALSE
#define BIND_WebPAuxStats_residual_bytes_FIELD_WRITER FALSE
#define BIND_WebPAuxStats_segment_level_FIELD_READER FALSE
#define BIND_WebPAuxStats_segment_level_FIELD_WRITER FALSE
#define BIND_WebPAuxStats_segment_level_FIELD_READER FALSE
#define BIND_WebPAuxStats_segment_level_FIELD_WRITER FALSE
#define BIND_WebPAuxStats_segment_level_FIELD_READER FALSE
#define BIND_WebPAuxStats_segment_level_FIELD_WRITER FALSE
#define BIND_WebPAuxStats_segment_level_FIELD_READER FALSE
#define BIND_WebPAuxStats_segment_level_FIELD_WRITER FALSE
#define BIND_WebPAuxStats_segment_level_FIELD_READER FALSE
#define BIND_WebPAuxStats_segment_level_FIELD_WRITER FALSE
#define BIND_WebPAuxStats_segment_quant_FIELD_READER FALSE
#define BIND_WebPAuxStats_segment_quant_FIELD_WRITER FALSE
#define BIND_WebPAuxStats_segment_quant_FIELD_READER FALSE
#define BIND_WebPAuxStats_segment_quant_FIELD_WRITER FALSE
#define BIND_WebPAuxStats_segment_quant_FIELD_READER FALSE
#define BIND_WebPAuxStats_segment_quant_FIELD_WRITER FALSE
#define BIND_WebPAuxStats_segment_quant_FIELD_READER FALSE
#define BIND_WebPAuxStats_segment_quant_FIELD_WRITER FALSE
#define BIND_WebPAuxStats_segment_quant_FIELD_READER FALSE
#define BIND_WebPAuxStats_segment_quant_FIELD_WRITER FALSE
#define BIND_WebPAuxStats_segment_size_FIELD_READER FALSE
#define BIND_WebPAuxStats_segment_size_FIELD_WRITER FALSE
#define BIND_WebPAuxStats_segment_size_FIELD_READER FALSE
#define BIND_WebPAuxStats_segment_size_FIELD_WRITER FALSE
#define BIND_WebPAuxStats_segment_size_FIELD_READER FALSE
#define BIND_WebPAuxStats_segment_size_FIELD_WRITER FALSE
#define BIND_WebPAuxStats_segment_size_FIELD_READER FALSE
#define BIND_WebPAuxStats_segment_size_FIELD_WRITER FALSE
#define BIND_WebPAuxStats_segment_size_FIELD_READER FALSE
#define BIND_WebPAuxStats_segment_size_FIELD_WRITER FALSE
#define BIND_WebPAuxStats_transform_bits_FIELD_READER FALSE
#define BIND_WebPAuxStats_transform_bits_FIELD_WRITER FALSE
#define BIND_WebPAuxStats_transform_bits_FIELD_READER FALSE
#define BIND_WebPAuxStats_transform_bits_FIELD_WRITER FALSE
#define BIND_WebPAuxStats_transform_bits_FIELD_READER FALSE
#define BIND_WebPAuxStats_transform_bits_FIELD_WRITER FALSE
#define BIND_WebPAuxStats_transform_bits_FIELD_READER FALSE
#define BIND_WebPAuxStats_transform_bits_FIELD_WRITER FALSE
#define BIND_WebPAuxStats_transform_bits_FIELD_READER FALSE
#define BIND_WebPAuxStats_transform_bits_FIELD_WRITER FALSE

#define BIND_WebPBitstreamFeatures_TYPE TRUE
#define BIND_WebPBitstreamFeatures_INITIALIZE FALSE
#define BIND_WebPBitstreamFeatures_bitstream_version_FIELD_READER FALSE
#define BIND_WebPBitstreamFeatures_bitstream_version_FIELD_WRITER FALSE
#define BIND_WebPBitstreamFeatures_bitstream_version_FIELD_READER FALSE
#define BIND_WebPBitstreamFeatures_bitstream_version_FIELD_WRITER FALSE
#define BIND_WebPBitstreamFeatures_bitstream_version_FIELD_READER FALSE
#define BIND_WebPBitstreamFeatures_bitstream_version_FIELD_WRITER FALSE
#define BIND_WebPBitstreamFeatures_bitstream_version_FIELD_READER FALSE
#define BIND_WebPBitstreamFeatures_bitstream_version_FIELD_WRITER FALSE
#define BIND_WebPBitstreamFeatures_bitstream_version_FIELD_READER FALSE
#define BIND_WebPBitstreamFeatures_bitstream_version_FIELD_WRITER FALSE
#define BIND_WebPBitstreamFeatures_has_alpha_FIELD_READER FALSE
#define BIND_WebPBitstreamFeatures_has_alpha_FIELD_WRITER FALSE
#define BIND_WebPBitstreamFeatures_has_alpha_FIELD_READER FALSE
#define BIND_WebPBitstreamFeatures_has_alpha_FIELD_WRITER FALSE
#define BIND_WebPBitstreamFeatures_has_alpha_FIELD_READER FALSE
#define BIND_WebPBitstreamFeatures_has_alpha_FIELD_WRITER FALSE
#define BIND_WebPBitstreamFeatures_has_alpha_FIELD_READER FALSE
#define BIND_WebPBitstreamFeatures_has_alpha_FIELD_WRITER FALSE
#define BIND_WebPBitstreamFeatures_has_alpha_FIELD_READER FALSE
#define BIND_WebPBitstreamFeatures_has_alpha_FIELD_WRITER FALSE
#define BIND_WebPBitstreamFeatures_has_animation_FIELD_READER FALSE
#define BIND_WebPBitstreamFeatures_has_animation_FIELD_WRITER FALSE
#define BIND_WebPBitstreamFeatures_has_animation_FIELD_READER FALSE
#define BIND_WebPBitstreamFeatures_has_animation_FIELD_WRITER FALSE
#define BIND_WebPBitstreamFeatures_has_animation_FIELD_READER FALSE
#define BIND_WebPBitstreamFeatures_has_animation_FIELD_WRITER FALSE
#define BIND_WebPBitstreamFeatures_has_animation_FIELD_READER FALSE
#define BIND_WebPBitstreamFeatures_has_animation_FIELD_WRITER FALSE
#define BIND_WebPBitstreamFeatures_has_animation_FIELD_READER FALSE
#define BIND_WebPBitstreamFeatures_has_animation_FIELD_WRITER FALSE
#define BIND_WebPBitstreamFeatures_height_FIELD_READER FALSE
#define BIND_WebPBitstreamFeatures_height_FIELD_WRITER FALSE
#define BIND_WebPBitstreamFeatures_height_FIELD_READER FALSE
#define BIND_WebPBitstreamFeatures_height_FIELD_WRITER FALSE
#define BIND_WebPBitstreamFeatures_height_FIELD_READER FALSE
#define BIND_WebPBitstreamFeatures_height_FIELD_WRITER FALSE
#define BIND_WebPBitstreamFeatures_height_FIELD_READER FALSE
#define BIND_WebPBitstreamFeatures_height_FIELD_WRITER FALSE
#define BIND_WebPBitstreamFeatures_height_FIELD_READER FALSE
#define BIND_WebPBitstreamFeatures_height_FIELD_WRITER FALSE
#define BIND_WebPBitstreamFeatures_no_incremental_decoding_FIELD_READER FALSE
#define BIND_WebPBitstreamFeatures_no_incremental_decoding_FIELD_WRITER FALSE
#define BIND_WebPBitstreamFeatures_no_incremental_decoding_FIELD_READER FALSE
#define BIND_WebPBitstreamFeatures_no_incremental_decoding_FIELD_WRITER FALSE
#define BIND_WebPBitstreamFeatures_no_incremental_decoding_FIELD_READER FALSE
#define BIND_WebPBitstreamFeatures_no_incremental_decoding_FIELD_WRITER FALSE
#define BIND_WebPBitstreamFeatures_no_incremental_decoding_FIELD_READER FALSE
#define BIND_WebPBitstreamFeatures_no_incremental_decoding_FIELD_WRITER FALSE
#define BIND_WebPBitstreamFeatures_no_incremental_decoding_FIELD_READER FALSE
#define BIND_WebPBitstreamFeatures_no_incremental_decoding_FIELD_WRITER FALSE
#define BIND_WebPBitstreamFeatures_pad_FIELD_READER FALSE
#define BIND_WebPBitstreamFeatures_pad_FIELD_WRITER FALSE
#define BIND_WebPBitstreamFeatures_pad_FIELD_READER FALSE
#define BIND_WebPBitstreamFeatures_pad_FIELD_WRITER FALSE
#define BIND_WebPBitstreamFeatures_pad_FIELD_READER FALSE
#define BIND_WebPBitstreamFeatures_pad_FIELD_WRITER FALSE
#define BIND_WebPBitstreamFeatures_pad_FIELD_READER FALSE
#define BIND_WebPBitstreamFeatures_pad_FIELD_WRITER FALSE
#define BIND_WebPBitstreamFeatures_pad_FIELD_READER FALSE
#define BIND_WebPBitstreamFeatures_pad_FIELD_WRITER FALSE
#define BIND_WebPBitstreamFeatures_rotate_FIELD_READER FALSE
#define BIND_WebPBitstreamFeatures_rotate_FIELD_WRITER FALSE
#define BIND_WebPBitstreamFeatures_rotate_FIELD_READER FALSE
#define BIND_WebPBitstreamFeatures_rotate_FIELD_WRITER FALSE
#define BIND_WebPBitstreamFeatures_rotate_FIELD_READER FALSE
#define BIND_WebPBitstreamFeatures_rotate_FIELD_WRITER FALSE
#define BIND_WebPBitstreamFeatures_rotate_FIELD_READER FALSE
#define BIND_WebPBitstreamFeatures_rotate_FIELD_WRITER FALSE
#define BIND_WebPBitstreamFeatures_rotate_FIELD_READER FALSE
#define BIND_WebPBitstreamFeatures_rotate_FIELD_WRITER FALSE
#define BIND_WebPBitstreamFeatures_uv_sampling_FIELD_READER FALSE
#define BIND_WebPBitstreamFeatures_uv_sampling_FIELD_WRITER FALSE
#define BIND_WebPBitstreamFeatures_uv_sampling_FIELD_READER FALSE
#define BIND_WebPBitstreamFeatures_uv_sampling_FIELD_WRITER FALSE
#define BIND_WebPBitstreamFeatures_uv_sampling_FIELD_READER FALSE
#define BIND_WebPBitstreamFeatures_uv_sampling_FIELD_WRITER FALSE
#define BIND_WebPBitstreamFeatures_uv_sampling_FIELD_READER FALSE
#define BIND_WebPBitstreamFeatures_uv_sampling_FIELD_WRITER FALSE
#define BIND_WebPBitstreamFeatures_uv_sampling_FIELD_READER FALSE
#define BIND_WebPBitstreamFeatures_uv_sampling_FIELD_WRITER FALSE
#define BIND_WebPBitstreamFeatures_width_FIELD_READER FALSE
#define BIND_WebPBitstreamFeatures_width_FIELD_WRITER FALSE
#define BIND_WebPBitstreamFeatures_width_FIELD_READER FALSE
#define BIND_WebPBitstreamFeatures_width_FIELD_WRITER FALSE
#define BIND_WebPBitstreamFeatures_width_FIELD_READER FALSE
#define BIND_WebPBitstreamFeatures_width_FIELD_WRITER FALSE
#define BIND_WebPBitstreamFeatures_width_FIELD_READER FALSE
#define BIND_WebPBitstreamFeatures_width_FIELD_WRITER FALSE
#define BIND_WebPBitstreamFeatures_width_FIELD_READER FALSE
#define BIND_WebPBitstreamFeatures_width_FIELD_WRITER FALSE

#define BIND_WebPChunk_TYPE TRUE
#define BIND_WebPChunk_INITIALIZE FALSE
#define BIND_WebPChunk_data__FIELD_READER FALSE
#define BIND_WebPChunk_data__FIELD_WRITER FALSE
#define BIND_WebPChunk_next__FIELD_READER FALSE
#define BIND_WebPChunk_next__FIELD_WRITER FALSE
#define BIND_WebPChunk_owner__FIELD_READER FALSE
#define BIND_WebPChunk_owner__FIELD_WRITER FALSE
#define BIND_WebPChunk_tag__FIELD_READER FALSE
#define BIND_WebPChunk_tag__FIELD_WRITER FALSE

#define BIND_WebPChunkIterator_TYPE TRUE
#define BIND_WebPChunkIterator_INITIALIZE FALSE
#define BIND_WebPChunkIterator_chunk_FIELD_READER FALSE
#define BIND_WebPChunkIterator_chunk_FIELD_WRITER FALSE
#define BIND_WebPChunkIterator_chunk_num_FIELD_READER FALSE
#define BIND_WebPChunkIterator_chunk_num_FIELD_WRITER FALSE
#define BIND_WebPChunkIterator_num_chunks_FIELD_READER FALSE
#define BIND_WebPChunkIterator_num_chunks_FIELD_WRITER FALSE
#define BIND_WebPChunkIterator_pad_FIELD_READER FALSE
#define BIND_WebPChunkIterator_pad_FIELD_WRITER FALSE
#define BIND_WebPChunkIterator_private__FIELD_READER FALSE
#define BIND_WebPChunkIterator_private__FIELD_WRITER FALSE

#define BIND_WebPConfig_TYPE TRUE
#define BIND_WebPConfig_INITIALIZE FALSE
#define BIND_WebPConfig_alpha_compression_FIELD_READER FALSE
#define BIND_WebPConfig_alpha_compression_FIELD_WRITER FALSE
#define BIND_WebPConfig_alpha_compression_FIELD_READER FALSE
#define BIND_WebPConfig_alpha_compression_FIELD_WRITER FALSE
#define BIND_WebPConfig_alpha_compression_FIELD_READER FALSE
#define BIND_WebPConfig_alpha_compression_FIELD_WRITER FALSE
#define BIND_WebPConfig_alpha_compression_FIELD_READER FALSE
#define BIND_WebPConfig_alpha_compression_FIELD_WRITER FALSE
#define BIND_WebPConfig_alpha_compression_FIELD_READER FALSE
#define BIND_WebPConfig_alpha_compression_FIELD_WRITER FALSE
#define BIND_WebPConfig_alpha_filtering_FIELD_READER FALSE
#define BIND_WebPConfig_alpha_filtering_FIELD_WRITER FALSE
#define BIND_WebPConfig_alpha_filtering_FIELD_READER FALSE
#define BIND_WebPConfig_alpha_filtering_FIELD_WRITER FALSE
#define BIND_WebPConfig_alpha_filtering_FIELD_READER FALSE
#define BIND_WebPConfig_alpha_filtering_FIELD_WRITER FALSE
#define BIND_WebPConfig_alpha_filtering_FIELD_READER FALSE
#define BIND_WebPConfig_alpha_filtering_FIELD_WRITER FALSE
#define BIND_WebPConfig_alpha_filtering_FIELD_READER FALSE
#define BIND_WebPConfig_alpha_filtering_FIELD_WRITER FALSE
#define BIND_WebPConfig_alpha_quality_FIELD_READER FALSE
#define BIND_WebPConfig_alpha_quality_FIELD_WRITER FALSE
#define BIND_WebPConfig_alpha_quality_FIELD_READER FALSE
#define BIND_WebPConfig_alpha_quality_FIELD_WRITER FALSE
#define BIND_WebPConfig_alpha_quality_FIELD_READER FALSE
#define BIND_WebPConfig_alpha_quality_FIELD_WRITER FALSE
#define BIND_WebPConfig_alpha_quality_FIELD_READER FALSE
#define BIND_WebPConfig_alpha_quality_FIELD_WRITER FALSE
#define BIND_WebPConfig_alpha_quality_FIELD_READER FALSE
#define BIND_WebPConfig_alpha_quality_FIELD_WRITER FALSE
#define BIND_WebPConfig_autofilter_FIELD_READER FALSE
#define BIND_WebPConfig_autofilter_FIELD_WRITER FALSE
#define BIND_WebPConfig_autofilter_FIELD_READER FALSE
#define BIND_WebPConfig_autofilter_FIELD_WRITER FALSE
#define BIND_WebPConfig_autofilter_FIELD_READER FALSE
#define BIND_WebPConfig_autofilter_FIELD_WRITER FALSE
#define BIND_WebPConfig_autofilter_FIELD_READER FALSE
#define BIND_WebPConfig_autofilter_FIELD_WRITER FALSE
#define BIND_WebPConfig_autofilter_FIELD_READER FALSE
#define BIND_WebPConfig_autofilter_FIELD_WRITER FALSE
#define BIND_WebPConfig_emulate_jpeg_size_FIELD_READER FALSE
#define BIND_WebPConfig_emulate_jpeg_size_FIELD_WRITER FALSE
#define BIND_WebPConfig_emulate_jpeg_size_FIELD_READER FALSE
#define BIND_WebPConfig_emulate_jpeg_size_FIELD_WRITER FALSE
#define BIND_WebPConfig_emulate_jpeg_size_FIELD_READER FALSE
#define BIND_WebPConfig_emulate_jpeg_size_FIELD_WRITER FALSE
#define BIND_WebPConfig_emulate_jpeg_size_FIELD_READER FALSE
#define BIND_WebPConfig_emulate_jpeg_size_FIELD_WRITER FALSE
#define BIND_WebPConfig_emulate_jpeg_size_FIELD_READER FALSE
#define BIND_WebPConfig_emulate_jpeg_size_FIELD_WRITER FALSE
#define BIND_WebPConfig_filter_sharpness_FIELD_READER FALSE
#define BIND_WebPConfig_filter_sharpness_FIELD_WRITER FALSE
#define BIND_WebPConfig_filter_sharpness_FIELD_READER FALSE
#define BIND_WebPConfig_filter_sharpness_FIELD_WRITER FALSE
#define BIND_WebPConfig_filter_sharpness_FIELD_READER FALSE
#define BIND_WebPConfig_filter_sharpness_FIELD_WRITER FALSE
#define BIND_WebPConfig_filter_sharpness_FIELD_READER FALSE
#define BIND_WebPConfig_filter_sharpness_FIELD_WRITER FALSE
#define BIND_WebPConfig_filter_sharpness_FIELD_READER FALSE
#define BIND_WebPConfig_filter_sharpness_FIELD_WRITER FALSE
#define BIND_WebPConfig_filter_strength_FIELD_READER FALSE
#define BIND_WebPConfig_filter_strength_FIELD_WRITER FALSE
#define BIND_WebPConfig_filter_strength_FIELD_READER FALSE
#define BIND_WebPConfig_filter_strength_FIELD_WRITER FALSE
#define BIND_WebPConfig_filter_strength_FIELD_READER FALSE
#define BIND_WebPConfig_filter_strength_FIELD_WRITER FALSE
#define BIND_WebPConfig_filter_strength_FIELD_READER FALSE
#define BIND_WebPConfig_filter_strength_FIELD_WRITER FALSE
#define BIND_WebPConfig_filter_strength_FIELD_READER FALSE
#define BIND_WebPConfig_filter_strength_FIELD_WRITER FALSE
#define BIND_WebPConfig_filter_type_FIELD_READER FALSE
#define BIND_WebPConfig_filter_type_FIELD_WRITER FALSE
#define BIND_WebPConfig_filter_type_FIELD_READER FALSE
#define BIND_WebPConfig_filter_type_FIELD_WRITER FALSE
#define BIND_WebPConfig_filter_type_FIELD_READER FALSE
#define BIND_WebPConfig_filter_type_FIELD_WRITER FALSE
#define BIND_WebPConfig_filter_type_FIELD_READER FALSE
#define BIND_WebPConfig_filter_type_FIELD_WRITER FALSE
#define BIND_WebPConfig_filter_type_FIELD_READER FALSE
#define BIND_WebPConfig_filter_type_FIELD_WRITER FALSE
#define BIND_WebPConfig_image_hint_FIELD_READER FALSE
#define BIND_WebPConfig_image_hint_FIELD_WRITER FALSE
#define BIND_WebPConfig_image_hint_FIELD_READER FALSE
#define BIND_WebPConfig_image_hint_FIELD_WRITER FALSE
#define BIND_WebPConfig_image_hint_FIELD_READER FALSE
#define BIND_WebPConfig_image_hint_FIELD_WRITER FALSE
#define BIND_WebPConfig_image_hint_FIELD_READER FALSE
#define BIND_WebPConfig_image_hint_FIELD_WRITER FALSE
#define BIND_WebPConfig_image_hint_FIELD_READER FALSE
#define BIND_WebPConfig_image_hint_FIELD_WRITER FALSE
#define BIND_WebPConfig_lossless_FIELD_READER FALSE
#define BIND_WebPConfig_lossless_FIELD_WRITER FALSE
#define BIND_WebPConfig_lossless_FIELD_READER FALSE
#define BIND_WebPConfig_lossless_FIELD_WRITER FALSE
#define BIND_WebPConfig_lossless_FIELD_READER FALSE
#define BIND_WebPConfig_lossless_FIELD_WRITER FALSE
#define BIND_WebPConfig_lossless_FIELD_READER FALSE
#define BIND_WebPConfig_lossless_FIELD_WRITER FALSE
#define BIND_WebPConfig_lossless_FIELD_READER FALSE
#define BIND_WebPConfig_lossless_FIELD_WRITER FALSE
#define BIND_WebPConfig_low_memory_FIELD_READER FALSE
#define BIND_WebPConfig_low_memory_FIELD_WRITER FALSE
#define BIND_WebPConfig_low_memory_FIELD_READER FALSE
#define BIND_WebPConfig_low_memory_FIELD_WRITER FALSE
#define BIND_WebPConfig_low_memory_FIELD_READER FALSE
#define BIND_WebPConfig_low_memory_FIELD_WRITER FALSE
#define BIND_WebPConfig_low_memory_FIELD_READER FALSE
#define BIND_WebPConfig_low_memory_FIELD_WRITER FALSE
#define BIND_WebPConfig_low_memory_FIELD_READER FALSE
#define BIND_WebPConfig_low_memory_FIELD_WRITER FALSE
#define BIND_WebPConfig_method_FIELD_READER FALSE
#define BIND_WebPConfig_method_FIELD_WRITER FALSE
#define BIND_WebPConfig_method_FIELD_READER FALSE
#define BIND_WebPConfig_method_FIELD_WRITER FALSE
#define BIND_WebPConfig_method_FIELD_READER FALSE
#define BIND_WebPConfig_method_FIELD_WRITER FALSE
#define BIND_WebPConfig_method_FIELD_READER FALSE
#define BIND_WebPConfig_method_FIELD_WRITER FALSE
#define BIND_WebPConfig_method_FIELD_READER FALSE
#define BIND_WebPConfig_method_FIELD_WRITER FALSE
#define BIND_WebPConfig_pad_FIELD_READER FALSE
#define BIND_WebPConfig_pad_FIELD_WRITER FALSE
#define BIND_WebPConfig_pad_FIELD_READER FALSE
#define BIND_WebPConfig_pad_FIELD_WRITER FALSE
#define BIND_WebPConfig_pad_FIELD_READER FALSE
#define BIND_WebPConfig_pad_FIELD_WRITER FALSE
#define BIND_WebPConfig_pad_FIELD_READER FALSE
#define BIND_WebPConfig_pad_FIELD_WRITER FALSE
#define BIND_WebPConfig_pad_FIELD_READER FALSE
#define BIND_WebPConfig_pad_FIELD_WRITER FALSE
#define BIND_WebPConfig_partition_limit_FIELD_READER FALSE
#define BIND_WebPConfig_partition_limit_FIELD_WRITER FALSE
#define BIND_WebPConfig_partition_limit_FIELD_READER FALSE
#define BIND_WebPConfig_partition_limit_FIELD_WRITER FALSE
#define BIND_WebPConfig_partition_limit_FIELD_READER FALSE
#define BIND_WebPConfig_partition_limit_FIELD_WRITER FALSE
#define BIND_WebPConfig_partition_limit_FIELD_READER FALSE
#define BIND_WebPConfig_partition_limit_FIELD_WRITER FALSE
#define BIND_WebPConfig_partition_limit_FIELD_READER FALSE
#define BIND_WebPConfig_partition_limit_FIELD_WRITER FALSE
#define BIND_WebPConfig_partitions_FIELD_READER FALSE
#define BIND_WebPConfig_partitions_FIELD_WRITER FALSE
#define BIND_WebPConfig_partitions_FIELD_READER FALSE
#define BIND_WebPConfig_partitions_FIELD_WRITER FALSE
#define BIND_WebPConfig_partitions_FIELD_READER FALSE
#define BIND_WebPConfig_partitions_FIELD_WRITER FALSE
#define BIND_WebPConfig_partitions_FIELD_READER FALSE
#define BIND_WebPConfig_partitions_FIELD_WRITER FALSE
#define BIND_WebPConfig_partitions_FIELD_READER FALSE
#define BIND_WebPConfig_partitions_FIELD_WRITER FALSE
#define BIND_WebPConfig_pass_FIELD_READER FALSE
#define BIND_WebPConfig_pass_FIELD_WRITER FALSE
#define BIND_WebPConfig_pass_FIELD_READER FALSE
#define BIND_WebPConfig_pass_FIELD_WRITER FALSE
#define BIND_WebPConfig_pass_FIELD_READER FALSE
#define BIND_WebPConfig_pass_FIELD_WRITER FALSE
#define BIND_WebPConfig_pass_FIELD_READER FALSE
#define BIND_WebPConfig_pass_FIELD_WRITER FALSE
#define BIND_WebPConfig_pass_FIELD_READER FALSE
#define BIND_WebPConfig_pass_FIELD_WRITER FALSE
#define BIND_WebPConfig_preprocessing_FIELD_READER FALSE
#define BIND_WebPConfig_preprocessing_FIELD_WRITER FALSE
#define BIND_WebPConfig_preprocessing_FIELD_READER FALSE
#define BIND_WebPConfig_preprocessing_FIELD_WRITER FALSE
#define BIND_WebPConfig_preprocessing_FIELD_READER FALSE
#define BIND_WebPConfig_preprocessing_FIELD_WRITER FALSE
#define BIND_WebPConfig_preprocessing_FIELD_READER FALSE
#define BIND_WebPConfig_preprocessing_FIELD_WRITER FALSE
#define BIND_WebPConfig_preprocessing_FIELD_READER FALSE
#define BIND_WebPConfig_preprocessing_FIELD_WRITER FALSE
#define BIND_WebPConfig_quality_FIELD_READER FALSE
#define BIND_WebPConfig_quality_FIELD_WRITER FALSE
#define BIND_WebPConfig_quality_FIELD_READER FALSE
#define BIND_WebPConfig_quality_FIELD_WRITER FALSE
#define BIND_WebPConfig_quality_FIELD_READER FALSE
#define BIND_WebPConfig_quality_FIELD_WRITER FALSE
#define BIND_WebPConfig_quality_FIELD_READER FALSE
#define BIND_WebPConfig_quality_FIELD_WRITER FALSE
#define BIND_WebPConfig_quality_FIELD_READER FALSE
#define BIND_WebPConfig_quality_FIELD_WRITER FALSE
#define BIND_WebPConfig_segments_FIELD_READER FALSE
#define BIND_WebPConfig_segments_FIELD_WRITER FALSE
#define BIND_WebPConfig_segments_FIELD_READER FALSE
#define BIND_WebPConfig_segments_FIELD_WRITER FALSE
#define BIND_WebPConfig_segments_FIELD_READER FALSE
#define BIND_WebPConfig_segments_FIELD_WRITER FALSE
#define BIND_WebPConfig_segments_FIELD_READER FALSE
#define BIND_WebPConfig_segments_FIELD_WRITER FALSE
#define BIND_WebPConfig_segments_FIELD_READER FALSE
#define BIND_WebPConfig_segments_FIELD_WRITER FALSE
#define BIND_WebPConfig_show_compressed_FIELD_READER FALSE
#define BIND_WebPConfig_show_compressed_FIELD_WRITER FALSE
#define BIND_WebPConfig_show_compressed_FIELD_READER FALSE
#define BIND_WebPConfig_show_compressed_FIELD_WRITER FALSE
#define BIND_WebPConfig_show_compressed_FIELD_READER FALSE
#define BIND_WebPConfig_show_compressed_FIELD_WRITER FALSE
#define BIND_WebPConfig_show_compressed_FIELD_READER FALSE
#define BIND_WebPConfig_show_compressed_FIELD_WRITER FALSE
#define BIND_WebPConfig_show_compressed_FIELD_READER FALSE
#define BIND_WebPConfig_show_compressed_FIELD_WRITER FALSE
#define BIND_WebPConfig_sns_strength_FIELD_READER FALSE
#define BIND_WebPConfig_sns_strength_FIELD_WRITER FALSE
#define BIND_WebPConfig_sns_strength_FIELD_READER FALSE
#define BIND_WebPConfig_sns_strength_FIELD_WRITER FALSE
#define BIND_WebPConfig_sns_strength_FIELD_READER FALSE
#define BIND_WebPConfig_sns_strength_FIELD_WRITER FALSE
#define BIND_WebPConfig_sns_strength_FIELD_READER FALSE
#define BIND_WebPConfig_sns_strength_FIELD_WRITER FALSE
#define BIND_WebPConfig_sns_strength_FIELD_READER FALSE
#define BIND_WebPConfig_sns_strength_FIELD_WRITER FALSE
#define BIND_WebPConfig_target_PSNR_FIELD_READER FALSE
#define BIND_WebPConfig_target_PSNR_FIELD_WRITER FALSE
#define BIND_WebPConfig_target_PSNR_FIELD_READER FALSE
#define BIND_WebPConfig_target_PSNR_FIELD_WRITER FALSE
#define BIND_WebPConfig_target_PSNR_FIELD_READER FALSE
#define BIND_WebPConfig_target_PSNR_FIELD_WRITER FALSE
#define BIND_WebPConfig_target_PSNR_FIELD_READER FALSE
#define BIND_WebPConfig_target_PSNR_FIELD_WRITER FALSE
#define BIND_WebPConfig_target_PSNR_FIELD_READER FALSE
#define BIND_WebPConfig_target_PSNR_FIELD_WRITER FALSE
#define BIND_WebPConfig_target_size_FIELD_READER FALSE
#define BIND_WebPConfig_target_size_FIELD_WRITER FALSE
#define BIND_WebPConfig_target_size_FIELD_READER FALSE
#define BIND_WebPConfig_target_size_FIELD_WRITER FALSE
#define BIND_WebPConfig_target_size_FIELD_READER FALSE
#define BIND_WebPConfig_target_size_FIELD_WRITER FALSE
#define BIND_WebPConfig_target_size_FIELD_READER FALSE
#define BIND_WebPConfig_target_size_FIELD_WRITER FALSE
#define BIND_WebPConfig_target_size_FIELD_READER FALSE
#define BIND_WebPConfig_target_size_FIELD_WRITER FALSE
#define BIND_WebPConfig_thread_level_FIELD_READER FALSE
#define BIND_WebPConfig_thread_level_FIELD_WRITER FALSE
#define BIND_WebPConfig_thread_level_FIELD_READER FALSE
#define BIND_WebPConfig_thread_level_FIELD_WRITER FALSE
#define BIND_WebPConfig_thread_level_FIELD_READER FALSE
#define BIND_WebPConfig_thread_level_FIELD_WRITER FALSE
#define BIND_WebPConfig_thread_level_FIELD_READER FALSE
#define BIND_WebPConfig_thread_level_FIELD_WRITER FALSE
#define BIND_WebPConfig_thread_level_FIELD_READER FALSE
#define BIND_WebPConfig_thread_level_FIELD_WRITER FALSE

#define BIND_WebPData_TYPE TRUE
#define BIND_WebPData_INITIALIZE FALSE
#define BIND_WebPData_bytes_FIELD_READER FALSE
#define BIND_WebPData_bytes_FIELD_WRITER FALSE
#define BIND_WebPData_size_FIELD_READER FALSE
#define BIND_WebPData_size_FIELD_WRITER FALSE

#define BIND_WebPDecBuffer_TYPE TRUE
#define BIND_WebPDecBuffer_INITIALIZE FALSE
#define BIND_WebPDecBuffer_colorspace_FIELD_READER FALSE
#define BIND_WebPDecBuffer_colorspace_FIELD_WRITER FALSE
#define BIND_WebPDecBuffer_colorspace_FIELD_READER FALSE
#define BIND_WebPDecBuffer_colorspace_FIELD_WRITER FALSE
#define BIND_WebPDecBuffer_colorspace_FIELD_READER FALSE
#define BIND_WebPDecBuffer_colorspace_FIELD_WRITER FALSE
#define BIND_WebPDecBuffer_colorspace_FIELD_READER FALSE
#define BIND_WebPDecBuffer_colorspace_FIELD_WRITER FALSE
#define BIND_WebPDecBuffer_colorspace_FIELD_READER FALSE
#define BIND_WebPDecBuffer_colorspace_FIELD_WRITER FALSE
#define BIND_WebPDecBuffer_height_FIELD_READER FALSE
#define BIND_WebPDecBuffer_height_FIELD_WRITER FALSE
#define BIND_WebPDecBuffer_height_FIELD_READER FALSE
#define BIND_WebPDecBuffer_height_FIELD_WRITER FALSE
#define BIND_WebPDecBuffer_height_FIELD_READER FALSE
#define BIND_WebPDecBuffer_height_FIELD_WRITER FALSE
#define BIND_WebPDecBuffer_height_FIELD_READER FALSE
#define BIND_WebPDecBuffer_height_FIELD_WRITER FALSE
#define BIND_WebPDecBuffer_height_FIELD_READER FALSE
#define BIND_WebPDecBuffer_height_FIELD_WRITER FALSE
#define BIND_WebPDecBuffer_is_external_memory_FIELD_READER FALSE
#define BIND_WebPDecBuffer_is_external_memory_FIELD_WRITER FALSE
#define BIND_WebPDecBuffer_is_external_memory_FIELD_READER FALSE
#define BIND_WebPDecBuffer_is_external_memory_FIELD_WRITER FALSE
#define BIND_WebPDecBuffer_is_external_memory_FIELD_READER FALSE
#define BIND_WebPDecBuffer_is_external_memory_FIELD_WRITER FALSE
#define BIND_WebPDecBuffer_is_external_memory_FIELD_READER FALSE
#define BIND_WebPDecBuffer_is_external_memory_FIELD_WRITER FALSE
#define BIND_WebPDecBuffer_is_external_memory_FIELD_READER FALSE
#define BIND_WebPDecBuffer_is_external_memory_FIELD_WRITER FALSE
#define BIND_WebPDecBuffer_pad_FIELD_READER FALSE
#define BIND_WebPDecBuffer_pad_FIELD_WRITER FALSE
#define BIND_WebPDecBuffer_pad_FIELD_READER FALSE
#define BIND_WebPDecBuffer_pad_FIELD_WRITER FALSE
#define BIND_WebPDecBuffer_pad_FIELD_READER FALSE
#define BIND_WebPDecBuffer_pad_FIELD_WRITER FALSE
#define BIND_WebPDecBuffer_pad_FIELD_READER FALSE
#define BIND_WebPDecBuffer_pad_FIELD_WRITER FALSE
#define BIND_WebPDecBuffer_pad_FIELD_READER FALSE
#define BIND_WebPDecBuffer_pad_FIELD_WRITER FALSE
#define BIND_WebPDecBuffer_private_memory_FIELD_READER FALSE
#define BIND_WebPDecBuffer_private_memory_FIELD_WRITER FALSE
#define BIND_WebPDecBuffer_private_memory_FIELD_READER FALSE
#define BIND_WebPDecBuffer_private_memory_FIELD_WRITER FALSE
#define BIND_WebPDecBuffer_private_memory_FIELD_READER FALSE
#define BIND_WebPDecBuffer_private_memory_FIELD_WRITER FALSE
#define BIND_WebPDecBuffer_private_memory_FIELD_READER FALSE
#define BIND_WebPDecBuffer_private_memory_FIELD_WRITER FALSE
#define BIND_WebPDecBuffer_private_memory_FIELD_READER FALSE
#define BIND_WebPDecBuffer_private_memory_FIELD_WRITER FALSE
#define BIND_WebPDecBuffer_u_FIELD_READER FALSE
#define BIND_WebPDecBuffer_u_FIELD_WRITER FALSE
#define BIND_WebPDecBuffer_u_FIELD_READER FALSE
#define BIND_WebPDecBuffer_u_FIELD_WRITER FALSE
#define BIND_WebPDecBuffer_u_FIELD_READER FALSE
#define BIND_WebPDecBuffer_u_FIELD_WRITER FALSE
#define BIND_WebPDecBuffer_u_FIELD_READER FALSE
#define BIND_WebPDecBuffer_u_FIELD_WRITER FALSE
#define BIND_WebPDecBuffer_u_FIELD_READER FALSE
#define BIND_WebPDecBuffer_u_FIELD_WRITER FALSE
#define BIND_WebPDecBuffer_width_FIELD_READER FALSE
#define BIND_WebPDecBuffer_width_FIELD_WRITER FALSE
#define BIND_WebPDecBuffer_width_FIELD_READER FALSE
#define BIND_WebPDecBuffer_width_FIELD_WRITER FALSE
#define BIND_WebPDecBuffer_width_FIELD_READER FALSE
#define BIND_WebPDecBuffer_width_FIELD_WRITER FALSE
#define BIND_WebPDecBuffer_width_FIELD_READER FALSE
#define BIND_WebPDecBuffer_width_FIELD_WRITER FALSE
#define BIND_WebPDecBuffer_width_FIELD_READER FALSE
#define BIND_WebPDecBuffer_width_FIELD_WRITER FALSE

#define BIND_WebPDecoderConfig_TYPE TRUE
#define BIND_WebPDecoderConfig_INITIALIZE FALSE
#define BIND_WebPDecoderConfig_input_FIELD_READER FALSE
#define BIND_WebPDecoderConfig_input_FIELD_WRITER FALSE
#define BIND_WebPDecoderConfig_input_FIELD_READER FALSE
#define BIND_WebPDecoderConfig_input_FIELD_WRITER FALSE
#define BIND_WebPDecoderConfig_input_FIELD_READER FALSE
#define BIND_WebPDecoderConfig_input_FIELD_WRITER FALSE
#define BIND_WebPDecoderConfig_input_FIELD_READER FALSE
#define BIND_WebPDecoderConfig_input_FIELD_WRITER FALSE
#define BIND_WebPDecoderConfig_input_FIELD_READER FALSE
#define BIND_WebPDecoderConfig_input_FIELD_WRITER FALSE
#define BIND_WebPDecoderConfig_options_FIELD_READER FALSE
#define BIND_WebPDecoderConfig_options_FIELD_WRITER FALSE
#define BIND_WebPDecoderConfig_options_FIELD_READER FALSE
#define BIND_WebPDecoderConfig_options_FIELD_WRITER FALSE
#define BIND_WebPDecoderConfig_options_FIELD_READER FALSE
#define BIND_WebPDecoderConfig_options_FIELD_WRITER FALSE
#define BIND_WebPDecoderConfig_options_FIELD_READER FALSE
#define BIND_WebPDecoderConfig_options_FIELD_WRITER FALSE
#define BIND_WebPDecoderConfig_options_FIELD_READER FALSE
#define BIND_WebPDecoderConfig_options_FIELD_WRITER FALSE
#define BIND_WebPDecoderConfig_output_FIELD_READER FALSE
#define BIND_WebPDecoderConfig_output_FIELD_WRITER FALSE
#define BIND_WebPDecoderConfig_output_FIELD_READER FALSE
#define BIND_WebPDecoderConfig_output_FIELD_WRITER FALSE
#define BIND_WebPDecoderConfig_output_FIELD_READER FALSE
#define BIND_WebPDecoderConfig_output_FIELD_WRITER FALSE
#define BIND_WebPDecoderConfig_output_FIELD_READER FALSE
#define BIND_WebPDecoderConfig_output_FIELD_WRITER FALSE
#define BIND_WebPDecoderConfig_output_FIELD_READER FALSE
#define BIND_WebPDecoderConfig_output_FIELD_WRITER FALSE

#define BIND_WebPDecoderOptions_TYPE TRUE
#define BIND_WebPDecoderOptions_INITIALIZE FALSE
#define BIND_WebPDecoderOptions_bypass_filtering_FIELD_READER FALSE
#define BIND_WebPDecoderOptions_bypass_filtering_FIELD_WRITER FALSE
#define BIND_WebPDecoderOptions_bypass_filtering_FIELD_READER FALSE
#define BIND_WebPDecoderOptions_bypass_filtering_FIELD_WRITER FALSE
#define BIND_WebPDecoderOptions_bypass_filtering_FIELD_READER FALSE
#define BIND_WebPDecoderOptions_bypass_filtering_FIELD_WRITER FALSE
#define BIND_WebPDecoderOptions_bypass_filtering_FIELD_READER FALSE
#define BIND_WebPDecoderOptions_bypass_filtering_FIELD_WRITER FALSE
#define BIND_WebPDecoderOptions_bypass_filtering_FIELD_READER FALSE
#define BIND_WebPDecoderOptions_bypass_filtering_FIELD_WRITER FALSE
#define BIND_WebPDecoderOptions_crop_height_FIELD_READER FALSE
#define BIND_WebPDecoderOptions_crop_height_FIELD_WRITER FALSE
#define BIND_WebPDecoderOptions_crop_height_FIELD_READER FALSE
#define BIND_WebPDecoderOptions_crop_height_FIELD_WRITER FALSE
#define BIND_WebPDecoderOptions_crop_height_FIELD_READER FALSE
#define BIND_WebPDecoderOptions_crop_height_FIELD_WRITER FALSE
#define BIND_WebPDecoderOptions_crop_height_FIELD_READER FALSE
#define BIND_WebPDecoderOptions_crop_height_FIELD_WRITER FALSE
#define BIND_WebPDecoderOptions_crop_height_FIELD_READER FALSE
#define BIND_WebPDecoderOptions_crop_height_FIELD_WRITER FALSE
#define BIND_WebPDecoderOptions_crop_left_FIELD_READER FALSE
#define BIND_WebPDecoderOptions_crop_left_FIELD_WRITER FALSE
#define BIND_WebPDecoderOptions_crop_left_FIELD_READER FALSE
#define BIND_WebPDecoderOptions_crop_left_FIELD_WRITER FALSE
#define BIND_WebPDecoderOptions_crop_left_FIELD_READER FALSE
#define BIND_WebPDecoderOptions_crop_left_FIELD_WRITER FALSE
#define BIND_WebPDecoderOptions_crop_left_FIELD_READER FALSE
#define BIND_WebPDecoderOptions_crop_left_FIELD_WRITER FALSE
#define BIND_WebPDecoderOptions_crop_left_FIELD_READER FALSE
#define BIND_WebPDecoderOptions_crop_left_FIELD_WRITER FALSE
#define BIND_WebPDecoderOptions_crop_top_FIELD_READER FALSE
#define BIND_WebPDecoderOptions_crop_top_FIELD_WRITER FALSE
#define BIND_WebPDecoderOptions_crop_top_FIELD_READER FALSE
#define BIND_WebPDecoderOptions_crop_top_FIELD_WRITER FALSE
#define BIND_WebPDecoderOptions_crop_top_FIELD_READER FALSE
#define BIND_WebPDecoderOptions_crop_top_FIELD_WRITER FALSE
#define BIND_WebPDecoderOptions_crop_top_FIELD_READER FALSE
#define BIND_WebPDecoderOptions_crop_top_FIELD_WRITER FALSE
#define BIND_WebPDecoderOptions_crop_top_FIELD_READER FALSE
#define BIND_WebPDecoderOptions_crop_top_FIELD_WRITER FALSE
#define BIND_WebPDecoderOptions_crop_width_FIELD_READER FALSE
#define BIND_WebPDecoderOptions_crop_width_FIELD_WRITER FALSE
#define BIND_WebPDecoderOptions_crop_width_FIELD_READER FALSE
#define BIND_WebPDecoderOptions_crop_width_FIELD_WRITER FALSE
#define BIND_WebPDecoderOptions_crop_width_FIELD_READER FALSE
#define BIND_WebPDecoderOptions_crop_width_FIELD_WRITER FALSE
#define BIND_WebPDecoderOptions_crop_width_FIELD_READER FALSE
#define BIND_WebPDecoderOptions_crop_width_FIELD_WRITER FALSE
#define BIND_WebPDecoderOptions_crop_width_FIELD_READER FALSE
#define BIND_WebPDecoderOptions_crop_width_FIELD_WRITER FALSE
#define BIND_WebPDecoderOptions_force_rotation_FIELD_READER FALSE
#define BIND_WebPDecoderOptions_force_rotation_FIELD_WRITER FALSE
#define BIND_WebPDecoderOptions_force_rotation_FIELD_READER FALSE
#define BIND_WebPDecoderOptions_force_rotation_FIELD_WRITER FALSE
#define BIND_WebPDecoderOptions_force_rotation_FIELD_READER FALSE
#define BIND_WebPDecoderOptions_force_rotation_FIELD_WRITER FALSE
#define BIND_WebPDecoderOptions_force_rotation_FIELD_READER FALSE
#define BIND_WebPDecoderOptions_force_rotation_FIELD_WRITER FALSE
#define BIND_WebPDecoderOptions_force_rotation_FIELD_READER FALSE
#define BIND_WebPDecoderOptions_force_rotation_FIELD_WRITER FALSE
#define BIND_WebPDecoderOptions_no_enhancement_FIELD_READER FALSE
#define BIND_WebPDecoderOptions_no_enhancement_FIELD_WRITER FALSE
#define BIND_WebPDecoderOptions_no_enhancement_FIELD_READER FALSE
#define BIND_WebPDecoderOptions_no_enhancement_FIELD_WRITER FALSE
#define BIND_WebPDecoderOptions_no_enhancement_FIELD_READER FALSE
#define BIND_WebPDecoderOptions_no_enhancement_FIELD_WRITER FALSE
#define BIND_WebPDecoderOptions_no_enhancement_FIELD_READER FALSE
#define BIND_WebPDecoderOptions_no_enhancement_FIELD_WRITER FALSE
#define BIND_WebPDecoderOptions_no_enhancement_FIELD_READER FALSE
#define BIND_WebPDecoderOptions_no_enhancement_FIELD_WRITER FALSE
#define BIND_WebPDecoderOptions_no_fancy_upsampling_FIELD_READER FALSE
#define BIND_WebPDecoderOptions_no_fancy_upsampling_FIELD_WRITER FALSE
#define BIND_WebPDecoderOptions_no_fancy_upsampling_FIELD_READER FALSE
#define BIND_WebPDecoderOptions_no_fancy_upsampling_FIELD_WRITER FALSE
#define BIND_WebPDecoderOptions_no_fancy_upsampling_FIELD_READER FALSE
#define BIND_WebPDecoderOptions_no_fancy_upsampling_FIELD_WRITER FALSE
#define BIND_WebPDecoderOptions_no_fancy_upsampling_FIELD_READER FALSE
#define BIND_WebPDecoderOptions_no_fancy_upsampling_FIELD_WRITER FALSE
#define BIND_WebPDecoderOptions_no_fancy_upsampling_FIELD_READER FALSE
#define BIND_WebPDecoderOptions_no_fancy_upsampling_FIELD_WRITER FALSE
#define BIND_WebPDecoderOptions_pad_FIELD_READER FALSE
#define BIND_WebPDecoderOptions_pad_FIELD_WRITER FALSE
#define BIND_WebPDecoderOptions_pad_FIELD_READER FALSE
#define BIND_WebPDecoderOptions_pad_FIELD_WRITER FALSE
#define BIND_WebPDecoderOptions_pad_FIELD_READER FALSE
#define BIND_WebPDecoderOptions_pad_FIELD_WRITER FALSE
#define BIND_WebPDecoderOptions_pad_FIELD_READER FALSE
#define BIND_WebPDecoderOptions_pad_FIELD_WRITER FALSE
#define BIND_WebPDecoderOptions_pad_FIELD_READER FALSE
#define BIND_WebPDecoderOptions_pad_FIELD_WRITER FALSE
#define BIND_WebPDecoderOptions_scaled_height_FIELD_READER FALSE
#define BIND_WebPDecoderOptions_scaled_height_FIELD_WRITER FALSE
#define BIND_WebPDecoderOptions_scaled_height_FIELD_READER FALSE
#define BIND_WebPDecoderOptions_scaled_height_FIELD_WRITER FALSE
#define BIND_WebPDecoderOptions_scaled_height_FIELD_READER FALSE
#define BIND_WebPDecoderOptions_scaled_height_FIELD_WRITER FALSE
#define BIND_WebPDecoderOptions_scaled_height_FIELD_READER FALSE
#define BIND_WebPDecoderOptions_scaled_height_FIELD_WRITER FALSE
#define BIND_WebPDecoderOptions_scaled_height_FIELD_READER FALSE
#define BIND_WebPDecoderOptions_scaled_height_FIELD_WRITER FALSE
#define BIND_WebPDecoderOptions_scaled_width_FIELD_READER FALSE
#define BIND_WebPDecoderOptions_scaled_width_FIELD_WRITER FALSE
#define BIND_WebPDecoderOptions_scaled_width_FIELD_READER FALSE
#define BIND_WebPDecoderOptions_scaled_width_FIELD_WRITER FALSE
#define BIND_WebPDecoderOptions_scaled_width_FIELD_READER FALSE
#define BIND_WebPDecoderOptions_scaled_width_FIELD_WRITER FALSE
#define BIND_WebPDecoderOptions_scaled_width_FIELD_READER FALSE
#define BIND_WebPDecoderOptions_scaled_width_FIELD_WRITER FALSE
#define BIND_WebPDecoderOptions_scaled_width_FIELD_READER FALSE
#define BIND_WebPDecoderOptions_scaled_width_FIELD_WRITER FALSE
#define BIND_WebPDecoderOptions_use_cropping_FIELD_READER FALSE
#define BIND_WebPDecoderOptions_use_cropping_FIELD_WRITER FALSE
#define BIND_WebPDecoderOptions_use_cropping_FIELD_READER FALSE
#define BIND_WebPDecoderOptions_use_cropping_FIELD_WRITER FALSE
#define BIND_WebPDecoderOptions_use_cropping_FIELD_READER FALSE
#define BIND_WebPDecoderOptions_use_cropping_FIELD_WRITER FALSE
#define BIND_WebPDecoderOptions_use_cropping_FIELD_READER FALSE
#define BIND_WebPDecoderOptions_use_cropping_FIELD_WRITER FALSE
#define BIND_WebPDecoderOptions_use_cropping_FIELD_READER FALSE
#define BIND_WebPDecoderOptions_use_cropping_FIELD_WRITER FALSE
#define BIND_WebPDecoderOptions_use_scaling_FIELD_READER FALSE
#define BIND_WebPDecoderOptions_use_scaling_FIELD_WRITER FALSE
#define BIND_WebPDecoderOptions_use_scaling_FIELD_READER FALSE
#define BIND_WebPDecoderOptions_use_scaling_FIELD_WRITER FALSE
#define BIND_WebPDecoderOptions_use_scaling_FIELD_READER FALSE
#define BIND_WebPDecoderOptions_use_scaling_FIELD_WRITER FALSE
#define BIND_WebPDecoderOptions_use_scaling_FIELD_READER FALSE
#define BIND_WebPDecoderOptions_use_scaling_FIELD_WRITER FALSE
#define BIND_WebPDecoderOptions_use_scaling_FIELD_READER FALSE
#define BIND_WebPDecoderOptions_use_scaling_FIELD_WRITER FALSE
#define BIND_WebPDecoderOptions_use_threads_FIELD_READER FALSE
#define BIND_WebPDecoderOptions_use_threads_FIELD_WRITER FALSE
#define BIND_WebPDecoderOptions_use_threads_FIELD_READER FALSE
#define BIND_WebPDecoderOptions_use_threads_FIELD_WRITER FALSE
#define BIND_WebPDecoderOptions_use_threads_FIELD_READER FALSE
#define BIND_WebPDecoderOptions_use_threads_FIELD_WRITER FALSE
#define BIND_WebPDecoderOptions_use_threads_FIELD_READER FALSE
#define BIND_WebPDecoderOptions_use_threads_FIELD_WRITER FALSE
#define BIND_WebPDecoderOptions_use_threads_FIELD_READER FALSE
#define BIND_WebPDecoderOptions_use_threads_FIELD_WRITER FALSE

#define BIND_WebPDecParams_TYPE TRUE
#define BIND_WebPDecParams_INITIALIZE FALSE
#define BIND_WebPDecParams_emit_FIELD_READER FALSE
#define BIND_WebPDecParams_emit_FIELD_WRITER FALSE
#define BIND_WebPDecParams_emit_alpha_FIELD_READER FALSE
#define BIND_WebPDecParams_emit_alpha_FIELD_WRITER FALSE
#define BIND_WebPDecParams_emit_alpha_row_FIELD_READER FALSE
#define BIND_WebPDecParams_emit_alpha_row_FIELD_WRITER FALSE
#define BIND_WebPDecParams_last_y_FIELD_READER FALSE
#define BIND_WebPDecParams_last_y_FIELD_WRITER FALSE
#define BIND_WebPDecParams_memory_FIELD_READER FALSE
#define BIND_WebPDecParams_memory_FIELD_WRITER FALSE
#define BIND_WebPDecParams_options_FIELD_READER FALSE
#define BIND_WebPDecParams_options_FIELD_WRITER FALSE
#define BIND_WebPDecParams_output_FIELD_READER FALSE
#define BIND_WebPDecParams_output_FIELD_WRITER FALSE
#define BIND_WebPDecParams_scaler_a_FIELD_READER FALSE
#define BIND_WebPDecParams_scaler_a_FIELD_WRITER FALSE
#define BIND_WebPDecParams_scaler_u_FIELD_READER FALSE
#define BIND_WebPDecParams_scaler_u_FIELD_WRITER FALSE
#define BIND_WebPDecParams_scaler_v_FIELD_READER FALSE
#define BIND_WebPDecParams_scaler_v_FIELD_WRITER FALSE
#define BIND_WebPDecParams_scaler_y_FIELD_READER FALSE
#define BIND_WebPDecParams_scaler_y_FIELD_WRITER FALSE
#define BIND_WebPDecParams_tmp_u_FIELD_READER FALSE
#define BIND_WebPDecParams_tmp_u_FIELD_WRITER FALSE
#define BIND_WebPDecParams_tmp_v_FIELD_READER FALSE
#define BIND_WebPDecParams_tmp_v_FIELD_WRITER FALSE
#define BIND_WebPDecParams_tmp_y_FIELD_READER FALSE
#define BIND_WebPDecParams_tmp_y_FIELD_WRITER FALSE

#define BIND_WebPDemuxer_TYPE TRUE
#define BIND_WebPDemuxer_INITIALIZE FALSE

#define BIND_WebPIDecoder_TYPE TRUE
#define BIND_WebPIDecoder_INITIALIZE FALSE

#define BIND_WebPIterator_TYPE TRUE
#define BIND_WebPIterator_INITIALIZE FALSE
#define BIND_WebPIterator_complete_FIELD_READER FALSE
#define BIND_WebPIterator_complete_FIELD_WRITER FALSE
#define BIND_WebPIterator_dispose_method_FIELD_READER FALSE
#define BIND_WebPIterator_dispose_method_FIELD_WRITER FALSE
#define BIND_WebPIterator_duration_FIELD_READER FALSE
#define BIND_WebPIterator_duration_FIELD_WRITER FALSE
#define BIND_WebPIterator_fragment_FIELD_READER FALSE
#define BIND_WebPIterator_fragment_FIELD_WRITER FALSE
#define BIND_WebPIterator_fragment_num_FIELD_READER FALSE
#define BIND_WebPIterator_fragment_num_FIELD_WRITER FALSE
#define BIND_WebPIterator_frame_num_FIELD_READER FALSE
#define BIND_WebPIterator_frame_num_FIELD_WRITER FALSE
#define BIND_WebPIterator_height_FIELD_READER FALSE
#define BIND_WebPIterator_height_FIELD_WRITER FALSE
#define BIND_WebPIterator_num_fragments_FIELD_READER FALSE
#define BIND_WebPIterator_num_fragments_FIELD_WRITER FALSE
#define BIND_WebPIterator_num_frames_FIELD_READER FALSE
#define BIND_WebPIterator_num_frames_FIELD_WRITER FALSE
#define BIND_WebPIterator_pad_FIELD_READER FALSE
#define BIND_WebPIterator_pad_FIELD_WRITER FALSE
#define BIND_WebPIterator_private__FIELD_READER FALSE
#define BIND_WebPIterator_private__FIELD_WRITER FALSE
#define BIND_WebPIterator_width_FIELD_READER FALSE
#define BIND_WebPIterator_width_FIELD_WRITER FALSE
#define BIND_WebPIterator_x_offset_FIELD_READER FALSE
#define BIND_WebPIterator_x_offset_FIELD_WRITER FALSE
#define BIND_WebPIterator_y_offset_FIELD_READER FALSE
#define BIND_WebPIterator_y_offset_FIELD_WRITER FALSE

#define BIND_WebPMemoryWriter_TYPE TRUE
#define BIND_WebPMemoryWriter_INITIALIZE FALSE
#define BIND_WebPMemoryWriter_max_size_FIELD_READER FALSE
#define BIND_WebPMemoryWriter_max_size_FIELD_WRITER FALSE
#define BIND_WebPMemoryWriter_max_size_FIELD_READER FALSE
#define BIND_WebPMemoryWriter_max_size_FIELD_WRITER FALSE
#define BIND_WebPMemoryWriter_max_size_FIELD_READER FALSE
#define BIND_WebPMemoryWriter_max_size_FIELD_WRITER FALSE
#define BIND_WebPMemoryWriter_max_size_FIELD_READER FALSE
#define BIND_WebPMemoryWriter_max_size_FIELD_WRITER FALSE
#define BIND_WebPMemoryWriter_max_size_FIELD_READER FALSE
#define BIND_WebPMemoryWriter_max_size_FIELD_WRITER FALSE
#define BIND_WebPMemoryWriter_mem_FIELD_READER FALSE
#define BIND_WebPMemoryWriter_mem_FIELD_WRITER FALSE
#define BIND_WebPMemoryWriter_mem_FIELD_READER FALSE
#define BIND_WebPMemoryWriter_mem_FIELD_WRITER FALSE
#define BIND_WebPMemoryWriter_mem_FIELD_READER FALSE
#define BIND_WebPMemoryWriter_mem_FIELD_WRITER FALSE
#define BIND_WebPMemoryWriter_mem_FIELD_READER FALSE
#define BIND_WebPMemoryWriter_mem_FIELD_WRITER FALSE
#define BIND_WebPMemoryWriter_mem_FIELD_READER FALSE
#define BIND_WebPMemoryWriter_mem_FIELD_WRITER FALSE
#define BIND_WebPMemoryWriter_pad_FIELD_READER FALSE
#define BIND_WebPMemoryWriter_pad_FIELD_WRITER FALSE
#define BIND_WebPMemoryWriter_pad_FIELD_READER FALSE
#define BIND_WebPMemoryWriter_pad_FIELD_WRITER FALSE
#define BIND_WebPMemoryWriter_pad_FIELD_READER FALSE
#define BIND_WebPMemoryWriter_pad_FIELD_WRITER FALSE
#define BIND_WebPMemoryWriter_pad_FIELD_READER FALSE
#define BIND_WebPMemoryWriter_pad_FIELD_WRITER FALSE
#define BIND_WebPMemoryWriter_pad_FIELD_READER FALSE
#define BIND_WebPMemoryWriter_pad_FIELD_WRITER FALSE
#define BIND_WebPMemoryWriter_size_FIELD_READER FALSE
#define BIND_WebPMemoryWriter_size_FIELD_WRITER FALSE
#define BIND_WebPMemoryWriter_size_FIELD_READER FALSE
#define BIND_WebPMemoryWriter_size_FIELD_WRITER FALSE
#define BIND_WebPMemoryWriter_size_FIELD_READER FALSE
#define BIND_WebPMemoryWriter_size_FIELD_WRITER FALSE
#define BIND_WebPMemoryWriter_size_FIELD_READER FALSE
#define BIND_WebPMemoryWriter_size_FIELD_WRITER FALSE
#define BIND_WebPMemoryWriter_size_FIELD_READER FALSE
#define BIND_WebPMemoryWriter_size_FIELD_WRITER FALSE

#define BIND_WebPMux_TYPE TRUE
#define BIND_WebPMux_INITIALIZE FALSE
#define BIND_WebPMux_anim__FIELD_READER FALSE
#define BIND_WebPMux_anim__FIELD_WRITER FALSE
#define BIND_WebPMux_exif__FIELD_READER FALSE
#define BIND_WebPMux_exif__FIELD_WRITER FALSE
#define BIND_WebPMux_iccp__FIELD_READER FALSE
#define BIND_WebPMux_iccp__FIELD_WRITER FALSE
#define BIND_WebPMux_images__FIELD_READER FALSE
#define BIND_WebPMux_images__FIELD_WRITER FALSE
#define BIND_WebPMux_unknown__FIELD_READER FALSE
#define BIND_WebPMux_unknown__FIELD_WRITER FALSE
#define BIND_WebPMux_vp8x__FIELD_READER FALSE
#define BIND_WebPMux_vp8x__FIELD_WRITER FALSE
#define BIND_WebPMux_xmp__FIELD_READER FALSE
#define BIND_WebPMux_xmp__FIELD_WRITER FALSE

#define BIND_WebPMuxAnimParams_TYPE TRUE
#define BIND_WebPMuxAnimParams_INITIALIZE FALSE
#define BIND_WebPMuxAnimParams_bgcolor_FIELD_READER FALSE
#define BIND_WebPMuxAnimParams_bgcolor_FIELD_WRITER FALSE
#define BIND_WebPMuxAnimParams_loop_count_FIELD_READER FALSE
#define BIND_WebPMuxAnimParams_loop_count_FIELD_WRITER FALSE

#define BIND_WebPMuxFrameInfo_TYPE TRUE
#define BIND_WebPMuxFrameInfo_INITIALIZE FALSE
#define BIND_WebPMuxFrameInfo_bitstream_FIELD_READER FALSE
#define BIND_WebPMuxFrameInfo_bitstream_FIELD_WRITER FALSE
#define BIND_WebPMuxFrameInfo_dispose_method_FIELD_READER FALSE
#define BIND_WebPMuxFrameInfo_dispose_method_FIELD_WRITER FALSE
#define BIND_WebPMuxFrameInfo_duration_FIELD_READER FALSE
#define BIND_WebPMuxFrameInfo_duration_FIELD_WRITER FALSE
#define BIND_WebPMuxFrameInfo_id_FIELD_READER FALSE
#define BIND_WebPMuxFrameInfo_id_FIELD_WRITER FALSE
#define BIND_WebPMuxFrameInfo_pad_FIELD_READER FALSE
#define BIND_WebPMuxFrameInfo_pad_FIELD_WRITER FALSE
#define BIND_WebPMuxFrameInfo_x_offset_FIELD_READER FALSE
#define BIND_WebPMuxFrameInfo_x_offset_FIELD_WRITER FALSE
#define BIND_WebPMuxFrameInfo_y_offset_FIELD_READER FALSE
#define BIND_WebPMuxFrameInfo_y_offset_FIELD_WRITER FALSE

#define BIND_WebPMuxImage_TYPE TRUE
#define BIND_WebPMuxImage_INITIALIZE FALSE
#define BIND_WebPMuxImage_alpha__FIELD_READER FALSE
#define BIND_WebPMuxImage_alpha__FIELD_WRITER FALSE
#define BIND_WebPMuxImage_header__FIELD_READER FALSE
#define BIND_WebPMuxImage_header__FIELD_WRITER FALSE
#define BIND_WebPMuxImage_img__FIELD_READER FALSE
#define BIND_WebPMuxImage_img__FIELD_WRITER FALSE
#define BIND_WebPMuxImage_is_partial__FIELD_READER FALSE
#define BIND_WebPMuxImage_is_partial__FIELD_WRITER FALSE
#define BIND_WebPMuxImage_next__FIELD_READER FALSE
#define BIND_WebPMuxImage_next__FIELD_WRITER FALSE

#define BIND_WebPPicture_TYPE TRUE
#define BIND_WebPPicture_INITIALIZE FALSE
#define BIND_WebPPicture_a_FIELD_READER FALSE
#define BIND_WebPPicture_a_FIELD_WRITER FALSE
#define BIND_WebPPicture_a_FIELD_READER FALSE
#define BIND_WebPPicture_a_FIELD_WRITER FALSE
#define BIND_WebPPicture_a_FIELD_READER FALSE
#define BIND_WebPPicture_a_FIELD_WRITER FALSE
#define BIND_WebPPicture_a_FIELD_READER FALSE
#define BIND_WebPPicture_a_FIELD_WRITER FALSE
#define BIND_WebPPicture_a_FIELD_READER FALSE
#define BIND_WebPPicture_a_FIELD_WRITER FALSE
#define BIND_WebPPicture_a_stride_FIELD_READER FALSE
#define BIND_WebPPicture_a_stride_FIELD_WRITER FALSE
#define BIND_WebPPicture_a_stride_FIELD_READER FALSE
#define BIND_WebPPicture_a_stride_FIELD_WRITER FALSE
#define BIND_WebPPicture_a_stride_FIELD_READER FALSE
#define BIND_WebPPicture_a_stride_FIELD_WRITER FALSE
#define BIND_WebPPicture_a_stride_FIELD_READER FALSE
#define BIND_WebPPicture_a_stride_FIELD_WRITER FALSE
#define BIND_WebPPicture_a_stride_FIELD_READER FALSE
#define BIND_WebPPicture_a_stride_FIELD_WRITER FALSE
#define BIND_WebPPicture_argb_FIELD_READER FALSE
#define BIND_WebPPicture_argb_FIELD_WRITER FALSE
#define BIND_WebPPicture_argb_FIELD_READER FALSE
#define BIND_WebPPicture_argb_FIELD_WRITER FALSE
#define BIND_WebPPicture_argb_FIELD_READER FALSE
#define BIND_WebPPicture_argb_FIELD_WRITER FALSE
#define BIND_WebPPicture_argb_FIELD_READER FALSE
#define BIND_WebPPicture_argb_FIELD_WRITER FALSE
#define BIND_WebPPicture_argb_FIELD_READER FALSE
#define BIND_WebPPicture_argb_FIELD_WRITER FALSE
#define BIND_WebPPicture_argb_stride_FIELD_READER FALSE
#define BIND_WebPPicture_argb_stride_FIELD_WRITER FALSE
#define BIND_WebPPicture_argb_stride_FIELD_READER FALSE
#define BIND_WebPPicture_argb_stride_FIELD_WRITER FALSE
#define BIND_WebPPicture_argb_stride_FIELD_READER FALSE
#define BIND_WebPPicture_argb_stride_FIELD_WRITER FALSE
#define BIND_WebPPicture_argb_stride_FIELD_READER FALSE
#define BIND_WebPPicture_argb_stride_FIELD_WRITER FALSE
#define BIND_WebPPicture_argb_stride_FIELD_READER FALSE
#define BIND_WebPPicture_argb_stride_FIELD_WRITER FALSE
#define BIND_WebPPicture_colorspace_FIELD_READER FALSE
#define BIND_WebPPicture_colorspace_FIELD_WRITER FALSE
#define BIND_WebPPicture_colorspace_FIELD_READER FALSE
#define BIND_WebPPicture_colorspace_FIELD_WRITER FALSE
#define BIND_WebPPicture_colorspace_FIELD_READER FALSE
#define BIND_WebPPicture_colorspace_FIELD_WRITER FALSE
#define BIND_WebPPicture_colorspace_FIELD_READER FALSE
#define BIND_WebPPicture_colorspace_FIELD_WRITER FALSE
#define BIND_WebPPicture_colorspace_FIELD_READER FALSE
#define BIND_WebPPicture_colorspace_FIELD_WRITER FALSE
#define BIND_WebPPicture_custom_ptr_FIELD_READER FALSE
#define BIND_WebPPicture_custom_ptr_FIELD_WRITER FALSE
#define BIND_WebPPicture_custom_ptr_FIELD_READER FALSE
#define BIND_WebPPicture_custom_ptr_FIELD_WRITER FALSE
#define BIND_WebPPicture_custom_ptr_FIELD_READER FALSE
#define BIND_WebPPicture_custom_ptr_FIELD_WRITER FALSE
#define BIND_WebPPicture_custom_ptr_FIELD_READER FALSE
#define BIND_WebPPicture_custom_ptr_FIELD_WRITER FALSE
#define BIND_WebPPicture_custom_ptr_FIELD_READER FALSE
#define BIND_WebPPicture_custom_ptr_FIELD_WRITER FALSE
#define BIND_WebPPicture_error_code_FIELD_READER FALSE
#define BIND_WebPPicture_error_code_FIELD_WRITER FALSE
#define BIND_WebPPicture_error_code_FIELD_READER FALSE
#define BIND_WebPPicture_error_code_FIELD_WRITER FALSE
#define BIND_WebPPicture_error_code_FIELD_READER FALSE
#define BIND_WebPPicture_error_code_FIELD_WRITER FALSE
#define BIND_WebPPicture_error_code_FIELD_READER FALSE
#define BIND_WebPPicture_error_code_FIELD_WRITER FALSE
#define BIND_WebPPicture_error_code_FIELD_READER FALSE
#define BIND_WebPPicture_error_code_FIELD_WRITER FALSE
#define BIND_WebPPicture_extra_info_FIELD_READER FALSE
#define BIND_WebPPicture_extra_info_FIELD_WRITER FALSE
#define BIND_WebPPicture_extra_info_FIELD_READER FALSE
#define BIND_WebPPicture_extra_info_FIELD_WRITER FALSE
#define BIND_WebPPicture_extra_info_FIELD_READER FALSE
#define BIND_WebPPicture_extra_info_FIELD_WRITER FALSE
#define BIND_WebPPicture_extra_info_FIELD_READER FALSE
#define BIND_WebPPicture_extra_info_FIELD_WRITER FALSE
#define BIND_WebPPicture_extra_info_FIELD_READER FALSE
#define BIND_WebPPicture_extra_info_FIELD_WRITER FALSE
#define BIND_WebPPicture_extra_info_type_FIELD_READER FALSE
#define BIND_WebPPicture_extra_info_type_FIELD_WRITER FALSE
#define BIND_WebPPicture_extra_info_type_FIELD_READER FALSE
#define BIND_WebPPicture_extra_info_type_FIELD_WRITER FALSE
#define BIND_WebPPicture_extra_info_type_FIELD_READER FALSE
#define BIND_WebPPicture_extra_info_type_FIELD_WRITER FALSE
#define BIND_WebPPicture_extra_info_type_FIELD_READER FALSE
#define BIND_WebPPicture_extra_info_type_FIELD_WRITER FALSE
#define BIND_WebPPicture_extra_info_type_FIELD_READER FALSE
#define BIND_WebPPicture_extra_info_type_FIELD_WRITER FALSE
#define BIND_WebPPicture_height_FIELD_READER FALSE
#define BIND_WebPPicture_height_FIELD_WRITER FALSE
#define BIND_WebPPicture_height_FIELD_READER FALSE
#define BIND_WebPPicture_height_FIELD_WRITER FALSE
#define BIND_WebPPicture_height_FIELD_READER FALSE
#define BIND_WebPPicture_height_FIELD_WRITER FALSE
#define BIND_WebPPicture_height_FIELD_READER FALSE
#define BIND_WebPPicture_height_FIELD_WRITER FALSE
#define BIND_WebPPicture_height_FIELD_READER FALSE
#define BIND_WebPPicture_height_FIELD_WRITER FALSE
#define BIND_WebPPicture_memory__FIELD_READER FALSE
#define BIND_WebPPicture_memory__FIELD_WRITER FALSE
#define BIND_WebPPicture_memory__FIELD_READER FALSE
#define BIND_WebPPicture_memory__FIELD_WRITER FALSE
#define BIND_WebPPicture_memory__FIELD_READER FALSE
#define BIND_WebPPicture_memory__FIELD_WRITER FALSE
#define BIND_WebPPicture_memory__FIELD_READER FALSE
#define BIND_WebPPicture_memory__FIELD_WRITER FALSE
#define BIND_WebPPicture_memory__FIELD_READER FALSE
#define BIND_WebPPicture_memory__FIELD_WRITER FALSE
#define BIND_WebPPicture_memory_argb__FIELD_READER FALSE
#define BIND_WebPPicture_memory_argb__FIELD_WRITER FALSE
#define BIND_WebPPicture_memory_argb__FIELD_READER FALSE
#define BIND_WebPPicture_memory_argb__FIELD_WRITER FALSE
#define BIND_WebPPicture_memory_argb__FIELD_READER FALSE
#define BIND_WebPPicture_memory_argb__FIELD_WRITER FALSE
#define BIND_WebPPicture_memory_argb__FIELD_READER FALSE
#define BIND_WebPPicture_memory_argb__FIELD_WRITER FALSE
#define BIND_WebPPicture_memory_argb__FIELD_READER FALSE
#define BIND_WebPPicture_memory_argb__FIELD_WRITER FALSE
#define BIND_WebPPicture_pad1_FIELD_READER FALSE
#define BIND_WebPPicture_pad1_FIELD_WRITER FALSE
#define BIND_WebPPicture_pad1_FIELD_READER FALSE
#define BIND_WebPPicture_pad1_FIELD_WRITER FALSE
#define BIND_WebPPicture_pad1_FIELD_READER FALSE
#define BIND_WebPPicture_pad1_FIELD_WRITER FALSE
#define BIND_WebPPicture_pad1_FIELD_READER FALSE
#define BIND_WebPPicture_pad1_FIELD_WRITER FALSE
#define BIND_WebPPicture_pad1_FIELD_READER FALSE
#define BIND_WebPPicture_pad1_FIELD_WRITER FALSE
#define BIND_WebPPicture_pad2_FIELD_READER FALSE
#define BIND_WebPPicture_pad2_FIELD_WRITER FALSE
#define BIND_WebPPicture_pad2_FIELD_READER FALSE
#define BIND_WebPPicture_pad2_FIELD_WRITER FALSE
#define BIND_WebPPicture_pad2_FIELD_READER FALSE
#define BIND_WebPPicture_pad2_FIELD_WRITER FALSE
#define BIND_WebPPicture_pad2_FIELD_READER FALSE
#define BIND_WebPPicture_pad2_FIELD_WRITER FALSE
#define BIND_WebPPicture_pad2_FIELD_READER FALSE
#define BIND_WebPPicture_pad2_FIELD_WRITER FALSE
#define BIND_WebPPicture_pad3_FIELD_READER FALSE
#define BIND_WebPPicture_pad3_FIELD_WRITER FALSE
#define BIND_WebPPicture_pad3_FIELD_READER FALSE
#define BIND_WebPPicture_pad3_FIELD_WRITER FALSE
#define BIND_WebPPicture_pad3_FIELD_READER FALSE
#define BIND_WebPPicture_pad3_FIELD_WRITER FALSE
#define BIND_WebPPicture_pad3_FIELD_READER FALSE
#define BIND_WebPPicture_pad3_FIELD_WRITER FALSE
#define BIND_WebPPicture_pad3_FIELD_READER FALSE
#define BIND_WebPPicture_pad3_FIELD_WRITER FALSE
#define BIND_WebPPicture_pad4_FIELD_READER FALSE
#define BIND_WebPPicture_pad4_FIELD_WRITER FALSE
#define BIND_WebPPicture_pad4_FIELD_READER FALSE
#define BIND_WebPPicture_pad4_FIELD_WRITER FALSE
#define BIND_WebPPicture_pad4_FIELD_READER FALSE
#define BIND_WebPPicture_pad4_FIELD_WRITER FALSE
#define BIND_WebPPicture_pad4_FIELD_READER FALSE
#define BIND_WebPPicture_pad4_FIELD_WRITER FALSE
#define BIND_WebPPicture_pad4_FIELD_READER FALSE
#define BIND_WebPPicture_pad4_FIELD_WRITER FALSE
#define BIND_WebPPicture_pad5_FIELD_READER FALSE
#define BIND_WebPPicture_pad5_FIELD_WRITER FALSE
#define BIND_WebPPicture_pad5_FIELD_READER FALSE
#define BIND_WebPPicture_pad5_FIELD_WRITER FALSE
#define BIND_WebPPicture_pad5_FIELD_READER FALSE
#define BIND_WebPPicture_pad5_FIELD_WRITER FALSE
#define BIND_WebPPicture_pad5_FIELD_READER FALSE
#define BIND_WebPPicture_pad5_FIELD_WRITER FALSE
#define BIND_WebPPicture_pad5_FIELD_READER FALSE
#define BIND_WebPPicture_pad5_FIELD_WRITER FALSE
#define BIND_WebPPicture_progress_hook_FIELD_READER FALSE
#define BIND_WebPPicture_progress_hook_FIELD_WRITER FALSE
#define BIND_WebPPicture_progress_hook_FIELD_READER FALSE
#define BIND_WebPPicture_progress_hook_FIELD_WRITER FALSE
#define BIND_WebPPicture_progress_hook_FIELD_READER FALSE
#define BIND_WebPPicture_progress_hook_FIELD_WRITER FALSE
#define BIND_WebPPicture_progress_hook_FIELD_READER FALSE
#define BIND_WebPPicture_progress_hook_FIELD_WRITER FALSE
#define BIND_WebPPicture_progress_hook_FIELD_READER FALSE
#define BIND_WebPPicture_progress_hook_FIELD_WRITER FALSE
#define BIND_WebPPicture_stats_FIELD_READER FALSE
#define BIND_WebPPicture_stats_FIELD_WRITER FALSE
#define BIND_WebPPicture_stats_FIELD_READER FALSE
#define BIND_WebPPicture_stats_FIELD_WRITER FALSE
#define BIND_WebPPicture_stats_FIELD_READER FALSE
#define BIND_WebPPicture_stats_FIELD_WRITER FALSE
#define BIND_WebPPicture_stats_FIELD_READER FALSE
#define BIND_WebPPicture_stats_FIELD_WRITER FALSE
#define BIND_WebPPicture_stats_FIELD_READER FALSE
#define BIND_WebPPicture_stats_FIELD_WRITER FALSE
#define BIND_WebPPicture_u_FIELD_READER FALSE
#define BIND_WebPPicture_u_FIELD_WRITER FALSE
#define BIND_WebPPicture_u_FIELD_READER FALSE
#define BIND_WebPPicture_u_FIELD_WRITER FALSE
#define BIND_WebPPicture_u_FIELD_READER FALSE
#define BIND_WebPPicture_u_FIELD_WRITER FALSE
#define BIND_WebPPicture_u_FIELD_READER FALSE
#define BIND_WebPPicture_u_FIELD_WRITER FALSE
#define BIND_WebPPicture_u_FIELD_READER FALSE
#define BIND_WebPPicture_u_FIELD_WRITER FALSE
#define BIND_WebPPicture_u0_FIELD_READER FALSE
#define BIND_WebPPicture_u0_FIELD_WRITER FALSE
#define BIND_WebPPicture_u0_FIELD_READER FALSE
#define BIND_WebPPicture_u0_FIELD_WRITER FALSE
#define BIND_WebPPicture_u0_FIELD_READER FALSE
#define BIND_WebPPicture_u0_FIELD_WRITER FALSE
#define BIND_WebPPicture_u0_FIELD_READER FALSE
#define BIND_WebPPicture_u0_FIELD_WRITER FALSE
#define BIND_WebPPicture_u0_FIELD_READER FALSE
#define BIND_WebPPicture_u0_FIELD_WRITER FALSE
#define BIND_WebPPicture_use_argb_FIELD_READER FALSE
#define BIND_WebPPicture_use_argb_FIELD_WRITER FALSE
#define BIND_WebPPicture_use_argb_FIELD_READER FALSE
#define BIND_WebPPicture_use_argb_FIELD_WRITER FALSE
#define BIND_WebPPicture_use_argb_FIELD_READER FALSE
#define BIND_WebPPicture_use_argb_FIELD_WRITER FALSE
#define BIND_WebPPicture_use_argb_FIELD_READER FALSE
#define BIND_WebPPicture_use_argb_FIELD_WRITER FALSE
#define BIND_WebPPicture_use_argb_FIELD_READER FALSE
#define BIND_WebPPicture_use_argb_FIELD_WRITER FALSE
#define BIND_WebPPicture_user_data_FIELD_READER FALSE
#define BIND_WebPPicture_user_data_FIELD_WRITER FALSE
#define BIND_WebPPicture_user_data_FIELD_READER FALSE
#define BIND_WebPPicture_user_data_FIELD_WRITER FALSE
#define BIND_WebPPicture_user_data_FIELD_READER FALSE
#define BIND_WebPPicture_user_data_FIELD_WRITER FALSE
#define BIND_WebPPicture_user_data_FIELD_READER FALSE
#define BIND_WebPPicture_user_data_FIELD_WRITER FALSE
#define BIND_WebPPicture_user_data_FIELD_READER FALSE
#define BIND_WebPPicture_user_data_FIELD_WRITER FALSE
#define BIND_WebPPicture_uv0_stride_FIELD_READER FALSE
#define BIND_WebPPicture_uv0_stride_FIELD_WRITER FALSE
#define BIND_WebPPicture_uv0_stride_FIELD_READER FALSE
#define BIND_WebPPicture_uv0_stride_FIELD_WRITER FALSE
#define BIND_WebPPicture_uv0_stride_FIELD_READER FALSE
#define BIND_WebPPicture_uv0_stride_FIELD_WRITER FALSE
#define BIND_WebPPicture_uv0_stride_FIELD_READER FALSE
#define BIND_WebPPicture_uv0_stride_FIELD_WRITER FALSE
#define BIND_WebPPicture_uv0_stride_FIELD_READER FALSE
#define BIND_WebPPicture_uv0_stride_FIELD_WRITER FALSE
#define BIND_WebPPicture_uv_stride_FIELD_READER FALSE
#define BIND_WebPPicture_uv_stride_FIELD_WRITER FALSE
#define BIND_WebPPicture_uv_stride_FIELD_READER FALSE
#define BIND_WebPPicture_uv_stride_FIELD_WRITER FALSE
#define BIND_WebPPicture_uv_stride_FIELD_READER FALSE
#define BIND_WebPPicture_uv_stride_FIELD_WRITER FALSE
#define BIND_WebPPicture_uv_stride_FIELD_READER FALSE
#define BIND_WebPPicture_uv_stride_FIELD_WRITER FALSE
#define BIND_WebPPicture_uv_stride_FIELD_READER FALSE
#define BIND_WebPPicture_uv_stride_FIELD_WRITER FALSE
#define BIND_WebPPicture_v_FIELD_READER FALSE
#define BIND_WebPPicture_v_FIELD_WRITER FALSE
#define BIND_WebPPicture_v_FIELD_READER FALSE
#define BIND_WebPPicture_v_FIELD_WRITER FALSE
#define BIND_WebPPicture_v_FIELD_READER FALSE
#define BIND_WebPPicture_v_FIELD_WRITER FALSE
#define BIND_WebPPicture_v_FIELD_READER FALSE
#define BIND_WebPPicture_v_FIELD_WRITER FALSE
#define BIND_WebPPicture_v_FIELD_READER FALSE
#define BIND_WebPPicture_v_FIELD_WRITER FALSE
#define BIND_WebPPicture_v0_FIELD_READER FALSE
#define BIND_WebPPicture_v0_FIELD_WRITER FALSE
#define BIND_WebPPicture_v0_FIELD_READER FALSE
#define BIND_WebPPicture_v0_FIELD_WRITER FALSE
#define BIND_WebPPicture_v0_FIELD_READER FALSE
#define BIND_WebPPicture_v0_FIELD_WRITER FALSE
#define BIND_WebPPicture_v0_FIELD_READER FALSE
#define BIND_WebPPicture_v0_FIELD_WRITER FALSE
#define BIND_WebPPicture_v0_FIELD_READER FALSE
#define BIND_WebPPicture_v0_FIELD_WRITER FALSE
#define BIND_WebPPicture_width_FIELD_READER FALSE
#define BIND_WebPPicture_width_FIELD_WRITER FALSE
#define BIND_WebPPicture_width_FIELD_READER FALSE
#define BIND_WebPPicture_width_FIELD_WRITER FALSE
#define BIND_WebPPicture_width_FIELD_READER FALSE
#define BIND_WebPPicture_width_FIELD_WRITER FALSE
#define BIND_WebPPicture_width_FIELD_READER FALSE
#define BIND_WebPPicture_width_FIELD_WRITER FALSE
#define BIND_WebPPicture_width_FIELD_READER FALSE
#define BIND_WebPPicture_width_FIELD_WRITER FALSE
#define BIND_WebPPicture_writer_FIELD_READER FALSE
#define BIND_WebPPicture_writer_FIELD_WRITER FALSE
#define BIND_WebPPicture_writer_FIELD_READER FALSE
#define BIND_WebPPicture_writer_FIELD_WRITER FALSE
#define BIND_WebPPicture_writer_FIELD_READER FALSE
#define BIND_WebPPicture_writer_FIELD_WRITER FALSE
#define BIND_WebPPicture_writer_FIELD_READER FALSE
#define BIND_WebPPicture_writer_FIELD_WRITER FALSE
#define BIND_WebPPicture_writer_FIELD_READER FALSE
#define BIND_WebPPicture_writer_FIELD_WRITER FALSE
#define BIND_WebPPicture_y_FIELD_READER FALSE
#define BIND_WebPPicture_y_FIELD_WRITER FALSE
#define BIND_WebPPicture_y_FIELD_READER FALSE
#define BIND_WebPPicture_y_FIELD_WRITER FALSE
#define BIND_WebPPicture_y_FIELD_READER FALSE
#define BIND_WebPPicture_y_FIELD_WRITER FALSE
#define BIND_WebPPicture_y_FIELD_READER FALSE
#define BIND_WebPPicture_y_FIELD_WRITER FALSE
#define BIND_WebPPicture_y_FIELD_READER FALSE
#define BIND_WebPPicture_y_FIELD_WRITER FALSE
#define BIND_WebPPicture_y_stride_FIELD_READER FALSE
#define BIND_WebPPicture_y_stride_FIELD_WRITER FALSE
#define BIND_WebPPicture_y_stride_FIELD_READER FALSE
#define BIND_WebPPicture_y_stride_FIELD_WRITER FALSE
#define BIND_WebPPicture_y_stride_FIELD_READER FALSE
#define BIND_WebPPicture_y_stride_FIELD_WRITER FALSE
#define BIND_WebPPicture_y_stride_FIELD_READER FALSE
#define BIND_WebPPicture_y_stride_FIELD_WRITER FALSE
#define BIND_WebPPicture_y_stride_FIELD_READER FALSE
#define BIND_WebPPicture_y_stride_FIELD_WRITER FALSE

#define BIND_WebPRGBABuffer_TYPE TRUE
#define BIND_WebPRGBABuffer_INITIALIZE FALSE
#define BIND_WebPRGBABuffer_rgba_FIELD_READER FALSE
#define BIND_WebPRGBABuffer_rgba_FIELD_WRITER FALSE
#define BIND_WebPRGBABuffer_rgba_FIELD_READER FALSE
#define BIND_WebPRGBABuffer_rgba_FIELD_WRITER FALSE
#define BIND_WebPRGBABuffer_rgba_FIELD_READER FALSE
#define BIND_WebPRGBABuffer_rgba_FIELD_WRITER FALSE
#define BIND_WebPRGBABuffer_rgba_FIELD_READER FALSE
#define BIND_WebPRGBABuffer_rgba_FIELD_WRITER FALSE
#define BIND_WebPRGBABuffer_rgba_FIELD_READER FALSE
#define BIND_WebPRGBABuffer_rgba_FIELD_WRITER FALSE
#define BIND_WebPRGBABuffer_size_FIELD_READER FALSE
#define BIND_WebPRGBABuffer_size_FIELD_WRITER FALSE
#define BIND_WebPRGBABuffer_size_FIELD_READER FALSE
#define BIND_WebPRGBABuffer_size_FIELD_WRITER FALSE
#define BIND_WebPRGBABuffer_size_FIELD_READER FALSE
#define BIND_WebPRGBABuffer_size_FIELD_WRITER FALSE
#define BIND_WebPRGBABuffer_size_FIELD_READER FALSE
#define BIND_WebPRGBABuffer_size_FIELD_WRITER FALSE
#define BIND_WebPRGBABuffer_size_FIELD_READER FALSE
#define BIND_WebPRGBABuffer_size_FIELD_WRITER FALSE
#define BIND_WebPRGBABuffer_stride_FIELD_READER FALSE
#define BIND_WebPRGBABuffer_stride_FIELD_WRITER FALSE
#define BIND_WebPRGBABuffer_stride_FIELD_READER FALSE
#define BIND_WebPRGBABuffer_stride_FIELD_WRITER FALSE
#define BIND_WebPRGBABuffer_stride_FIELD_READER FALSE
#define BIND_WebPRGBABuffer_stride_FIELD_WRITER FALSE
#define BIND_WebPRGBABuffer_stride_FIELD_READER FALSE
#define BIND_WebPRGBABuffer_stride_FIELD_WRITER FALSE
#define BIND_WebPRGBABuffer_stride_FIELD_READER FALSE
#define BIND_WebPRGBABuffer_stride_FIELD_WRITER FALSE

#define BIND_WebPYUVABuffer_TYPE TRUE
#define BIND_WebPYUVABuffer_INITIALIZE FALSE
#define BIND_WebPYUVABuffer_a_FIELD_READER FALSE
#define BIND_WebPYUVABuffer_a_FIELD_WRITER FALSE
#define BIND_WebPYUVABuffer_a_FIELD_READER FALSE
#define BIND_WebPYUVABuffer_a_FIELD_WRITER FALSE
#define BIND_WebPYUVABuffer_a_FIELD_READER FALSE
#define BIND_WebPYUVABuffer_a_FIELD_WRITER FALSE
#define BIND_WebPYUVABuffer_a_FIELD_READER FALSE
#define BIND_WebPYUVABuffer_a_FIELD_WRITER FALSE
#define BIND_WebPYUVABuffer_a_FIELD_READER FALSE
#define BIND_WebPYUVABuffer_a_FIELD_WRITER FALSE
#define BIND_WebPYUVABuffer_a_size_FIELD_READER FALSE
#define BIND_WebPYUVABuffer_a_size_FIELD_WRITER FALSE
#define BIND_WebPYUVABuffer_a_size_FIELD_READER FALSE
#define BIND_WebPYUVABuffer_a_size_FIELD_WRITER FALSE
#define BIND_WebPYUVABuffer_a_size_FIELD_READER FALSE
#define BIND_WebPYUVABuffer_a_size_FIELD_WRITER FALSE
#define BIND_WebPYUVABuffer_a_size_FIELD_READER FALSE
#define BIND_WebPYUVABuffer_a_size_FIELD_WRITER FALSE
#define BIND_WebPYUVABuffer_a_size_FIELD_READER FALSE
#define BIND_WebPYUVABuffer_a_size_FIELD_WRITER FALSE
#define BIND_WebPYUVABuffer_a_stride_FIELD_READER FALSE
#define BIND_WebPYUVABuffer_a_stride_FIELD_WRITER FALSE
#define BIND_WebPYUVABuffer_a_stride_FIELD_READER FALSE
#define BIND_WebPYUVABuffer_a_stride_FIELD_WRITER FALSE
#define BIND_WebPYUVABuffer_a_stride_FIELD_READER FALSE
#define BIND_WebPYUVABuffer_a_stride_FIELD_WRITER FALSE
#define BIND_WebPYUVABuffer_a_stride_FIELD_READER FALSE
#define BIND_WebPYUVABuffer_a_stride_FIELD_WRITER FALSE
#define BIND_WebPYUVABuffer_a_stride_FIELD_READER FALSE
#define BIND_WebPYUVABuffer_a_stride_FIELD_WRITER FALSE
#define BIND_WebPYUVABuffer_u_FIELD_READER FALSE
#define BIND_WebPYUVABuffer_u_FIELD_WRITER FALSE
#define BIND_WebPYUVABuffer_u_FIELD_READER FALSE
#define BIND_WebPYUVABuffer_u_FIELD_WRITER FALSE
#define BIND_WebPYUVABuffer_u_FIELD_READER FALSE
#define BIND_WebPYUVABuffer_u_FIELD_WRITER FALSE
#define BIND_WebPYUVABuffer_u_FIELD_READER FALSE
#define BIND_WebPYUVABuffer_u_FIELD_WRITER FALSE
#define BIND_WebPYUVABuffer_u_FIELD_READER FALSE
#define BIND_WebPYUVABuffer_u_FIELD_WRITER FALSE
#define BIND_WebPYUVABuffer_u_size_FIELD_READER FALSE
#define BIND_WebPYUVABuffer_u_size_FIELD_WRITER FALSE
#define BIND_WebPYUVABuffer_u_size_FIELD_READER FALSE
#define BIND_WebPYUVABuffer_u_size_FIELD_WRITER FALSE
#define BIND_WebPYUVABuffer_u_size_FIELD_READER FALSE
#define BIND_WebPYUVABuffer_u_size_FIELD_WRITER FALSE
#define BIND_WebPYUVABuffer_u_size_FIELD_READER FALSE
#define BIND_WebPYUVABuffer_u_size_FIELD_WRITER FALSE
#define BIND_WebPYUVABuffer_u_size_FIELD_READER FALSE
#define BIND_WebPYUVABuffer_u_size_FIELD_WRITER FALSE
#define BIND_WebPYUVABuffer_u_stride_FIELD_READER FALSE
#define BIND_WebPYUVABuffer_u_stride_FIELD_WRITER FALSE
#define BIND_WebPYUVABuffer_u_stride_FIELD_READER FALSE
#define BIND_WebPYUVABuffer_u_stride_FIELD_WRITER FALSE
#define BIND_WebPYUVABuffer_u_stride_FIELD_READER FALSE
#define BIND_WebPYUVABuffer_u_stride_FIELD_WRITER FALSE
#define BIND_WebPYUVABuffer_u_stride_FIELD_READER FALSE
#define BIND_WebPYUVABuffer_u_stride_FIELD_WRITER FALSE
#define BIND_WebPYUVABuffer_u_stride_FIELD_READER FALSE
#define BIND_WebPYUVABuffer_u_stride_FIELD_WRITER FALSE
#define BIND_WebPYUVABuffer_v_FIELD_READER FALSE
#define BIND_WebPYUVABuffer_v_FIELD_WRITER FALSE
#define BIND_WebPYUVABuffer_v_FIELD_READER FALSE
#define BIND_WebPYUVABuffer_v_FIELD_WRITER FALSE
#define BIND_WebPYUVABuffer_v_FIELD_READER FALSE
#define BIND_WebPYUVABuffer_v_FIELD_WRITER FALSE
#define BIND_WebPYUVABuffer_v_FIELD_READER FALSE
#define BIND_WebPYUVABuffer_v_FIELD_WRITER FALSE
#define BIND_WebPYUVABuffer_v_FIELD_READER FALSE
#define BIND_WebPYUVABuffer_v_FIELD_WRITER FALSE
#define BIND_WebPYUVABuffer_v_size_FIELD_READER FALSE
#define BIND_WebPYUVABuffer_v_size_FIELD_WRITER FALSE
#define BIND_WebPYUVABuffer_v_size_FIELD_READER FALSE
#define BIND_WebPYUVABuffer_v_size_FIELD_WRITER FALSE
#define BIND_WebPYUVABuffer_v_size_FIELD_READER FALSE
#define BIND_WebPYUVABuffer_v_size_FIELD_WRITER FALSE
#define BIND_WebPYUVABuffer_v_size_FIELD_READER FALSE
#define BIND_WebPYUVABuffer_v_size_FIELD_WRITER FALSE
#define BIND_WebPYUVABuffer_v_size_FIELD_READER FALSE
#define BIND_WebPYUVABuffer_v_size_FIELD_WRITER FALSE
#define BIND_WebPYUVABuffer_v_stride_FIELD_READER FALSE
#define BIND_WebPYUVABuffer_v_stride_FIELD_WRITER FALSE
#define BIND_WebPYUVABuffer_v_stride_FIELD_READER FALSE
#define BIND_WebPYUVABuffer_v_stride_FIELD_WRITER FALSE
#define BIND_WebPYUVABuffer_v_stride_FIELD_READER FALSE
#define BIND_WebPYUVABuffer_v_stride_FIELD_WRITER FALSE
#define BIND_WebPYUVABuffer_v_stride_FIELD_READER FALSE
#define BIND_WebPYUVABuffer_v_stride_FIELD_WRITER FALSE
#define BIND_WebPYUVABuffer_v_stride_FIELD_READER FALSE
#define BIND_WebPYUVABuffer_v_stride_FIELD_WRITER FALSE
#define BIND_WebPYUVABuffer_y_FIELD_READER FALSE
#define BIND_WebPYUVABuffer_y_FIELD_WRITER FALSE
#define BIND_WebPYUVABuffer_y_FIELD_READER FALSE
#define BIND_WebPYUVABuffer_y_FIELD_WRITER FALSE
#define BIND_WebPYUVABuffer_y_FIELD_READER FALSE
#define BIND_WebPYUVABuffer_y_FIELD_WRITER FALSE
#define BIND_WebPYUVABuffer_y_FIELD_READER FALSE
#define BIND_WebPYUVABuffer_y_FIELD_WRITER FALSE
#define BIND_WebPYUVABuffer_y_FIELD_READER FALSE
#define BIND_WebPYUVABuffer_y_FIELD_WRITER FALSE
#define BIND_WebPYUVABuffer_y_size_FIELD_READER FALSE
#define BIND_WebPYUVABuffer_y_size_FIELD_WRITER FALSE
#define BIND_WebPYUVABuffer_y_size_FIELD_READER FALSE
#define BIND_WebPYUVABuffer_y_size_FIELD_WRITER FALSE
#define BIND_WebPYUVABuffer_y_size_FIELD_READER FALSE
#define BIND_WebPYUVABuffer_y_size_FIELD_WRITER FALSE
#define BIND_WebPYUVABuffer_y_size_FIELD_READER FALSE
#define BIND_WebPYUVABuffer_y_size_FIELD_WRITER FALSE
#define BIND_WebPYUVABuffer_y_size_FIELD_READER FALSE
#define BIND_WebPYUVABuffer_y_size_FIELD_WRITER FALSE
#define BIND_WebPYUVABuffer_y_stride_FIELD_READER FALSE
#define BIND_WebPYUVABuffer_y_stride_FIELD_WRITER FALSE
#define BIND_WebPYUVABuffer_y_stride_FIELD_READER FALSE
#define BIND_WebPYUVABuffer_y_stride_FIELD_WRITER FALSE
#define BIND_WebPYUVABuffer_y_stride_FIELD_READER FALSE
#define BIND_WebPYUVABuffer_y_stride_FIELD_WRITER FALSE
#define BIND_WebPYUVABuffer_y_stride_FIELD_READER FALSE
#define BIND_WebPYUVABuffer_y_stride_FIELD_WRITER FALSE
#define BIND_WebPYUVABuffer_y_stride_FIELD_READER FALSE
#define BIND_WebPYUVABuffer_y_stride_FIELD_WRITER FALSE

#define BIND_WlCompositor_TYPE TRUE
#define BIND_WlCompositor_INITIALIZE FALSE

#define BIND_WlCursor_TYPE TRUE
#define BIND_WlCursor_INITIALIZE FALSE

#define BIND_WlCursorTheme_TYPE TRUE
#define BIND_WlCursorTheme_INITIALIZE FALSE

#define BIND_WlDisplay_TYPE TRUE
#define BIND_WlDisplay_INITIALIZE FALSE

#define BIND_WlEglWindow_TYPE TRUE
#define BIND_WlEglWindow_INITIALIZE FALSE

#define BIND_WlEventQueue_TYPE TRUE
#define BIND_WlEventQueue_INITIALIZE FALSE

#define BIND_WlInterface_TYPE TRUE
#define BIND_WlInterface_INITIALIZE FALSE

#define BIND_WlList_TYPE TRUE
#define BIND_WlList_INITIALIZE FALSE

#define BIND_WlOutput_TYPE TRUE
#define BIND_WlOutput_INITIALIZE FALSE

#define BIND_WlPointer_TYPE TRUE
#define BIND_WlPointer_INITIALIZE FALSE

#define BIND_WlProxy_TYPE TRUE
#define BIND_WlProxy_INITIALIZE FALSE

#define BIND_WlRegistry_TYPE TRUE
#define BIND_WlRegistry_INITIALIZE FALSE

#define BIND_WlShell_TYPE TRUE
#define BIND_WlShell_INITIALIZE FALSE

#define BIND_WlShellSurface_TYPE TRUE
#define BIND_WlShellSurface_INITIALIZE FALSE

#define BIND_WlShm_TYPE TRUE
#define BIND_WlShm_INITIALIZE FALSE

#define BIND_WlSurface_TYPE TRUE
#define BIND_WlSurface_INITIALIZE FALSE

#define BIND_XAUDIO2DEVICEDETAILS_TYPE TRUE
#define BIND_XAUDIO2DEVICEDETAILS_INITIALIZE FALSE
#define BIND_XAUDIO2DEVICEDETAILS_DeviceID_FIELD_READER FALSE
#define BIND_XAUDIO2DEVICEDETAILS_DeviceID_FIELD_WRITER FALSE
#define BIND_XAUDIO2DEVICEDETAILS_DisplayName_FIELD_READER FALSE
#define BIND_XAUDIO2DEVICEDETAILS_DisplayName_FIELD_WRITER FALSE

#define BIND_XGenericEventCookie_TYPE TRUE
#define BIND_XGenericEventCookie_INITIALIZE FALSE

#define BIND_XkbContext_TYPE TRUE
#define BIND_XkbContext_INITIALIZE FALSE

#define BIND_Xtiff_TYPE TRUE
#define BIND_Xtiff_INITIALIZE FALSE
#define BIND_Xtiff_xtif_dir_FIELD_READER FALSE
#define BIND_Xtiff_xtif_dir_FIELD_WRITER FALSE
#define BIND_Xtiff_xtif_flags_FIELD_READER FALSE
#define BIND_Xtiff_xtif_flags_FIELD_WRITER FALSE
#define BIND_Xtiff_xtif_printdir_FIELD_READER FALSE
#define BIND_Xtiff_xtif_printdir_FIELD_WRITER FALSE
#define BIND_Xtiff_xtif_tif_FIELD_READER FALSE
#define BIND_Xtiff_xtif_tif_FIELD_WRITER FALSE
#define BIND_Xtiff_xtif_vgetfield_FIELD_READER FALSE
#define BIND_Xtiff_xtif_vgetfield_FIELD_WRITER FALSE
#define BIND_Xtiff_xtif_vsetfield_FIELD_READER FALSE
#define BIND_Xtiff_xtif_vsetfield_FIELD_WRITER FALSE

#define BIND_XTIFFDirectory_TYPE TRUE
#define BIND_XTIFFDirectory_INITIALIZE FALSE
#define BIND_XTIFFDirectory_xd_example_ascii_FIELD_READER FALSE
#define BIND_XTIFFDirectory_xd_example_ascii_FIELD_WRITER FALSE
#define BIND_XTIFFDirectory_xd_example_multi_FIELD_READER FALSE
#define BIND_XTIFFDirectory_xd_example_multi_FIELD_WRITER FALSE
#define BIND_XTIFFDirectory_xd_example_single_FIELD_READER FALSE
#define BIND_XTIFFDirectory_xd_example_single_FIELD_WRITER FALSE
#define BIND_XTIFFDirectory_xd_num_multi_FIELD_READER FALSE
#define BIND_XTIFFDirectory_xd_num_multi_FIELD_WRITER FALSE

#define BIND_ZStreamS_TYPE TRUE
#define BIND_ZStreamS_INITIALIZE FALSE
#define BIND_ZStreamS_adler_FIELD_READER FALSE
#define BIND_ZStreamS_adler_FIELD_WRITER FALSE
#define BIND_ZStreamS_adler_FIELD_READER FALSE
#define BIND_ZStreamS_adler_FIELD_WRITER FALSE
#define BIND_ZStreamS_avail_in_FIELD_READER FALSE
#define BIND_ZStreamS_avail_in_FIELD_WRITER FALSE
#define BIND_ZStreamS_avail_in_FIELD_READER FALSE
#define BIND_ZStreamS_avail_in_FIELD_WRITER FALSE
#define BIND_ZStreamS_avail_out_FIELD_READER FALSE
#define BIND_ZStreamS_avail_out_FIELD_WRITER FALSE
#define BIND_ZStreamS_avail_out_FIELD_READER FALSE
#define BIND_ZStreamS_avail_out_FIELD_WRITER FALSE
#define BIND_ZStreamS_data_type_FIELD_READER FALSE
#define BIND_ZStreamS_data_type_FIELD_WRITER FALSE
#define BIND_ZStreamS_data_type_FIELD_READER FALSE
#define BIND_ZStreamS_data_type_FIELD_WRITER FALSE
#define BIND_ZStreamS_msg_FIELD_READER FALSE
#define BIND_ZStreamS_msg_FIELD_WRITER FALSE
#define BIND_ZStreamS_msg_FIELD_READER FALSE
#define BIND_ZStreamS_msg_FIELD_WRITER FALSE
#define BIND_ZStreamS_next_in_FIELD_READER FALSE
#define BIND_ZStreamS_next_in_FIELD_WRITER FALSE
#define BIND_ZStreamS_next_in_FIELD_READER FALSE
#define BIND_ZStreamS_next_in_FIELD_WRITER FALSE
#define BIND_ZStreamS_next_out_FIELD_READER FALSE
#define BIND_ZStreamS_next_out_FIELD_WRITER FALSE
#define BIND_ZStreamS_next_out_FIELD_READER FALSE
#define BIND_ZStreamS_next_out_FIELD_WRITER FALSE
#define BIND_ZStreamS_opaque_FIELD_READER FALSE
#define BIND_ZStreamS_opaque_FIELD_WRITER FALSE
#define BIND_ZStreamS_opaque_FIELD_READER FALSE
#define BIND_ZStreamS_opaque_FIELD_WRITER FALSE
#define BIND_ZStreamS_reserved_FIELD_READER FALSE
#define BIND_ZStreamS_reserved_FIELD_WRITER FALSE
#define BIND_ZStreamS_reserved_FIELD_READER FALSE
#define BIND_ZStreamS_reserved_FIELD_WRITER FALSE
#define BIND_ZStreamS_state_FIELD_READER FALSE
#define BIND_ZStreamS_state_FIELD_WRITER FALSE
#define BIND_ZStreamS_state_FIELD_READER FALSE
#define BIND_ZStreamS_state_FIELD_WRITER FALSE
#define BIND_ZStreamS_total_in_FIELD_READER FALSE
#define BIND_ZStreamS_total_in_FIELD_WRITER FALSE
#define BIND_ZStreamS_total_in_FIELD_READER FALSE
#define BIND_ZStreamS_total_in_FIELD_WRITER FALSE
#define BIND_ZStreamS_total_out_FIELD_READER FALSE
#define BIND_ZStreamS_total_out_FIELD_WRITER FALSE
#define BIND_ZStreamS_total_out_FIELD_READER FALSE
#define BIND_ZStreamS_total_out_FIELD_WRITER FALSE
#define BIND_ZStreamS_zalloc_FIELD_READER FALSE
#define BIND_ZStreamS_zalloc_FIELD_WRITER FALSE
#define BIND_ZStreamS_zalloc_FIELD_READER FALSE
#define BIND_ZStreamS_zalloc_FIELD_WRITER FALSE
#define BIND_ZStreamS_zfree_FIELD_READER FALSE
#define BIND_ZStreamS_zfree_FIELD_WRITER FALSE
#define BIND_ZStreamS_zfree_FIELD_READER FALSE
#define BIND_ZStreamS_zfree_FIELD_WRITER FALSE

#define BIND_ZlibFilefunc6432DefS_TYPE TRUE
#define BIND_ZlibFilefunc6432DefS_INITIALIZE FALSE
#define BIND_ZlibFilefunc6432DefS_zfile_func64_FIELD_READER FALSE
#define BIND_ZlibFilefunc6432DefS_zfile_func64_FIELD_WRITER FALSE
#define BIND_ZlibFilefunc6432DefS_zopen32_file_FIELD_READER FALSE
#define BIND_ZlibFilefunc6432DefS_zopen32_file_FIELD_WRITER FALSE
#define BIND_ZlibFilefunc6432DefS_zseek32_file_FIELD_READER FALSE
#define BIND_ZlibFilefunc6432DefS_zseek32_file_FIELD_WRITER FALSE
#define BIND_ZlibFilefunc6432DefS_ztell32_file_FIELD_READER FALSE
#define BIND_ZlibFilefunc6432DefS_ztell32_file_FIELD_WRITER FALSE

#define BIND_ZlibFilefunc64DefS_TYPE TRUE
#define BIND_ZlibFilefunc64DefS_INITIALIZE FALSE
#define BIND_ZlibFilefunc64DefS_opaque_FIELD_READER FALSE
#define BIND_ZlibFilefunc64DefS_opaque_FIELD_WRITER FALSE
#define BIND_ZlibFilefunc64DefS_zclose_file_FIELD_READER FALSE
#define BIND_ZlibFilefunc64DefS_zclose_file_FIELD_WRITER FALSE
#define BIND_ZlibFilefunc64DefS_zerror_file_FIELD_READER FALSE
#define BIND_ZlibFilefunc64DefS_zerror_file_FIELD_WRITER FALSE
#define BIND_ZlibFilefunc64DefS_zopen64_file_FIELD_READER FALSE
#define BIND_ZlibFilefunc64DefS_zopen64_file_FIELD_WRITER FALSE
#define BIND_ZlibFilefunc64DefS_zread_file_FIELD_READER FALSE
#define BIND_ZlibFilefunc64DefS_zread_file_FIELD_WRITER FALSE
#define BIND_ZlibFilefunc64DefS_zseek64_file_FIELD_READER FALSE
#define BIND_ZlibFilefunc64DefS_zseek64_file_FIELD_WRITER FALSE
#define BIND_ZlibFilefunc64DefS_ztell64_file_FIELD_READER FALSE
#define BIND_ZlibFilefunc64DefS_ztell64_file_FIELD_WRITER FALSE
#define BIND_ZlibFilefunc64DefS_zwrite_file_FIELD_READER FALSE
#define BIND_ZlibFilefunc64DefS_zwrite_file_FIELD_WRITER FALSE

#define BIND_ZlibFilefuncDefS_TYPE TRUE
#define BIND_ZlibFilefuncDefS_INITIALIZE FALSE
#define BIND_ZlibFilefuncDefS_opaque_FIELD_READER FALSE
#define BIND_ZlibFilefuncDefS_opaque_FIELD_WRITER FALSE
#define BIND_ZlibFilefuncDefS_zclose_file_FIELD_READER FALSE
#define BIND_ZlibFilefuncDefS_zclose_file_FIELD_WRITER FALSE
#define BIND_ZlibFilefuncDefS_zerror_file_FIELD_READER FALSE
#define BIND_ZlibFilefuncDefS_zerror_file_FIELD_WRITER FALSE
#define BIND_ZlibFilefuncDefS_zopen_file_FIELD_READER FALSE
#define BIND_ZlibFilefuncDefS_zopen_file_FIELD_WRITER FALSE
#define BIND_ZlibFilefuncDefS_zread_file_FIELD_READER FALSE
#define BIND_ZlibFilefuncDefS_zread_file_FIELD_WRITER FALSE
#define BIND_ZlibFilefuncDefS_zseek_file_FIELD_READER FALSE
#define BIND_ZlibFilefuncDefS_zseek_file_FIELD_WRITER FALSE
#define BIND_ZlibFilefuncDefS_ztell_file_FIELD_READER FALSE
#define BIND_ZlibFilefuncDefS_ztell_file_FIELD_WRITER FALSE
#define BIND_ZlibFilefuncDefS_zwrite_file_FIELD_READER FALSE
#define BIND_ZlibFilefuncDefS_zwrite_file_FIELD_WRITER FALSE

#define BIND_TdeflCompressor_TYPE TRUE
#define BIND_TdeflCompressor_INITIALIZE FALSE
#define BIND_TdeflCompressor_m_adler32_FIELD_READER FALSE
#define BIND_TdeflCompressor_m_adler32_FIELD_WRITER FALSE
#define BIND_TdeflCompressor_m_bit_buffer_FIELD_READER FALSE
#define BIND_TdeflCompressor_m_bit_buffer_FIELD_WRITER FALSE
#define BIND_TdeflCompressor_m_bits_in_FIELD_READER FALSE
#define BIND_TdeflCompressor_m_bits_in_FIELD_WRITER FALSE
#define BIND_TdeflCompressor_m_block_index_FIELD_READER FALSE
#define BIND_TdeflCompressor_m_block_index_FIELD_WRITER FALSE
#define BIND_TdeflCompressor_m_dict_FIELD_READER FALSE
#define BIND_TdeflCompressor_m_dict_FIELD_WRITER FALSE
#define BIND_TdeflCompressor_m_dict_size_FIELD_READER FALSE
#define BIND_TdeflCompressor_m_dict_size_FIELD_WRITER FALSE
#define BIND_TdeflCompressor_m_finished_FIELD_READER FALSE
#define BIND_TdeflCompressor_m_finished_FIELD_WRITER FALSE
#define BIND_TdeflCompressor_m_flags_FIELD_READER FALSE
#define BIND_TdeflCompressor_m_flags_FIELD_WRITER FALSE
#define BIND_TdeflCompressor_m_flush_FIELD_READER FALSE
#define BIND_TdeflCompressor_m_flush_FIELD_WRITER FALSE
#define BIND_TdeflCompressor_m_greedy_parsing_FIELD_READER FALSE
#define BIND_TdeflCompressor_m_greedy_parsing_FIELD_WRITER FALSE
#define BIND_TdeflCompressor_m_hash_FIELD_READER FALSE
#define BIND_TdeflCompressor_m_hash_FIELD_WRITER FALSE
#define BIND_TdeflCompressor_m_huff_code_sizes_FIELD_READER FALSE
#define BIND_TdeflCompressor_m_huff_code_sizes_FIELD_WRITER FALSE
#define BIND_TdeflCompressor_m_huff_codes_FIELD_READER FALSE
#define BIND_TdeflCompressor_m_huff_codes_FIELD_WRITER FALSE
#define BIND_TdeflCompressor_m_huff_count_FIELD_READER FALSE
#define BIND_TdeflCompressor_m_huff_count_FIELD_WRITER FALSE
#define BIND_TdeflCompressor_m_lookahead_pos_FIELD_READER FALSE
#define BIND_TdeflCompressor_m_lookahead_pos_FIELD_WRITER FALSE
#define BIND_TdeflCompressor_m_lookahead_size_FIELD_READER FALSE
#define BIND_TdeflCompressor_m_lookahead_size_FIELD_WRITER FALSE
#define BIND_TdeflCompressor_m_lz_code_buf_FIELD_READER FALSE
#define BIND_TdeflCompressor_m_lz_code_buf_FIELD_WRITER FALSE
#define BIND_TdeflCompressor_m_lz_code_buf_dict_pos_FIELD_READER FALSE
#define BIND_TdeflCompressor_m_lz_code_buf_dict_pos_FIELD_WRITER FALSE
#define BIND_TdeflCompressor_m_max_probes_FIELD_READER FALSE
#define BIND_TdeflCompressor_m_max_probes_FIELD_WRITER FALSE
#define BIND_TdeflCompressor_m_next_FIELD_READER FALSE
#define BIND_TdeflCompressor_m_next_FIELD_WRITER FALSE
#define BIND_TdeflCompressor_m_num_flags_left_FIELD_READER FALSE
#define BIND_TdeflCompressor_m_num_flags_left_FIELD_WRITER FALSE
#define BIND_TdeflCompressor_m_out_buf_ofs_FIELD_READER FALSE
#define BIND_TdeflCompressor_m_out_buf_ofs_FIELD_WRITER FALSE
#define BIND_TdeflCompressor_m_output_buf_FIELD_READER FALSE
#define BIND_TdeflCompressor_m_output_buf_FIELD_WRITER FALSE
#define BIND_TdeflCompressor_m_output_flush_ofs_FIELD_READER FALSE
#define BIND_TdeflCompressor_m_output_flush_ofs_FIELD_WRITER FALSE
#define BIND_TdeflCompressor_m_output_flush_remaining_FIELD_READER FALSE
#define BIND_TdeflCompressor_m_output_flush_remaining_FIELD_WRITER FALSE
#define BIND_TdeflCompressor_m_pIn_buf_FIELD_READER FALSE
#define BIND_TdeflCompressor_m_pIn_buf_FIELD_WRITER FALSE
#define BIND_TdeflCompressor_m_pIn_buf_size_FIELD_READER FALSE
#define BIND_TdeflCompressor_m_pIn_buf_size_FIELD_WRITER FALSE
#define BIND_TdeflCompressor_m_pLZ_code_buf_FIELD_READER FALSE
#define BIND_TdeflCompressor_m_pLZ_code_buf_FIELD_WRITER FALSE
#define BIND_TdeflCompressor_m_pLZ_flags_FIELD_READER FALSE
#define BIND_TdeflCompressor_m_pLZ_flags_FIELD_WRITER FALSE
#define BIND_TdeflCompressor_m_pOut_buf_FIELD_READER FALSE
#define BIND_TdeflCompressor_m_pOut_buf_FIELD_WRITER FALSE
#define BIND_TdeflCompressor_m_pOut_buf_size_FIELD_READER FALSE
#define BIND_TdeflCompressor_m_pOut_buf_size_FIELD_WRITER FALSE
#define BIND_TdeflCompressor_m_pOutput_buf_FIELD_READER FALSE
#define BIND_TdeflCompressor_m_pOutput_buf_FIELD_WRITER FALSE
#define BIND_TdeflCompressor_m_pOutput_buf_end_FIELD_READER FALSE
#define BIND_TdeflCompressor_m_pOutput_buf_end_FIELD_WRITER FALSE
#define BIND_TdeflCompressor_m_pPut_buf_func_FIELD_READER FALSE
#define BIND_TdeflCompressor_m_pPut_buf_func_FIELD_WRITER FALSE
#define BIND_TdeflCompressor_m_pPut_buf_user_FIELD_READER FALSE
#define BIND_TdeflCompressor_m_pPut_buf_user_FIELD_WRITER FALSE
#define BIND_TdeflCompressor_m_pSrc_FIELD_READER FALSE
#define BIND_TdeflCompressor_m_pSrc_FIELD_WRITER FALSE
#define BIND_TdeflCompressor_m_prev_return_status_FIELD_READER FALSE
#define BIND_TdeflCompressor_m_prev_return_status_FIELD_WRITER FALSE
#define BIND_TdeflCompressor_m_saved_lit_FIELD_READER FALSE
#define BIND_TdeflCompressor_m_saved_lit_FIELD_WRITER FALSE
#define BIND_TdeflCompressor_m_saved_match_dist_FIELD_READER FALSE
#define BIND_TdeflCompressor_m_saved_match_dist_FIELD_WRITER FALSE
#define BIND_TdeflCompressor_m_saved_match_len_FIELD_READER FALSE
#define BIND_TdeflCompressor_m_saved_match_len_FIELD_WRITER FALSE
#define BIND_TdeflCompressor_m_src_buf_left_FIELD_READER FALSE
#define BIND_TdeflCompressor_m_src_buf_left_FIELD_WRITER FALSE
#define BIND_TdeflCompressor_m_total_lz_bytes_FIELD_READER FALSE
#define BIND_TdeflCompressor_m_total_lz_bytes_FIELD_WRITER FALSE
#define BIND_TdeflCompressor_m_wants_to_finish_FIELD_READER FALSE
#define BIND_TdeflCompressor_m_wants_to_finish_FIELD_WRITER FALSE

#define BIND_TdeflOutputBuffer_TYPE TRUE
#define BIND_TdeflOutputBuffer_INITIALIZE FALSE
#define BIND_TdeflOutputBuffer_m_capacity_FIELD_READER FALSE
#define BIND_TdeflOutputBuffer_m_capacity_FIELD_WRITER FALSE
#define BIND_TdeflOutputBuffer_m_expandable_FIELD_READER FALSE
#define BIND_TdeflOutputBuffer_m_expandable_FIELD_WRITER FALSE
#define BIND_TdeflOutputBuffer_m_pBuf_FIELD_READER FALSE
#define BIND_TdeflOutputBuffer_m_pBuf_FIELD_WRITER FALSE
#define BIND_TdeflOutputBuffer_m_size_FIELD_READER FALSE
#define BIND_TdeflOutputBuffer_m_size_FIELD_WRITER FALSE

#define BIND_TdeflSymFreq_TYPE TRUE
#define BIND_TdeflSymFreq_INITIALIZE FALSE
#define BIND_TdeflSymFreq_m_key_FIELD_READER FALSE
#define BIND_TdeflSymFreq_m_key_FIELD_WRITER FALSE
#define BIND_TdeflSymFreq_m_sym_index_FIELD_READER FALSE
#define BIND_TdeflSymFreq_m_sym_index_FIELD_WRITER FALSE

#define BIND_TIFFCIELabToRGB_TYPE TRUE
#define BIND_TIFFCIELabToRGB_INITIALIZE FALSE
#define BIND_TIFFCIELabToRGB_X0_FIELD_READER FALSE
#define BIND_TIFFCIELabToRGB_X0_FIELD_WRITER FALSE
#define BIND_TIFFCIELabToRGB_X0_FIELD_READER FALSE
#define BIND_TIFFCIELabToRGB_X0_FIELD_WRITER FALSE
#define BIND_TIFFCIELabToRGB_Y0_FIELD_READER FALSE
#define BIND_TIFFCIELabToRGB_Y0_FIELD_WRITER FALSE
#define BIND_TIFFCIELabToRGB_Y0_FIELD_READER FALSE
#define BIND_TIFFCIELabToRGB_Y0_FIELD_WRITER FALSE
#define BIND_TIFFCIELabToRGB_Yb2b_FIELD_READER FALSE
#define BIND_TIFFCIELabToRGB_Yb2b_FIELD_WRITER FALSE
#define BIND_TIFFCIELabToRGB_Yb2b_FIELD_READER FALSE
#define BIND_TIFFCIELabToRGB_Yb2b_FIELD_WRITER FALSE
#define BIND_TIFFCIELabToRGB_Yg2g_FIELD_READER FALSE
#define BIND_TIFFCIELabToRGB_Yg2g_FIELD_WRITER FALSE
#define BIND_TIFFCIELabToRGB_Yg2g_FIELD_READER FALSE
#define BIND_TIFFCIELabToRGB_Yg2g_FIELD_WRITER FALSE
#define BIND_TIFFCIELabToRGB_Yr2r_FIELD_READER FALSE
#define BIND_TIFFCIELabToRGB_Yr2r_FIELD_WRITER FALSE
#define BIND_TIFFCIELabToRGB_Yr2r_FIELD_READER FALSE
#define BIND_TIFFCIELabToRGB_Yr2r_FIELD_WRITER FALSE
#define BIND_TIFFCIELabToRGB_Z0_FIELD_READER FALSE
#define BIND_TIFFCIELabToRGB_Z0_FIELD_WRITER FALSE
#define BIND_TIFFCIELabToRGB_Z0_FIELD_READER FALSE
#define BIND_TIFFCIELabToRGB_Z0_FIELD_WRITER FALSE
#define BIND_TIFFCIELabToRGB_bstep_FIELD_READER FALSE
#define BIND_TIFFCIELabToRGB_bstep_FIELD_WRITER FALSE
#define BIND_TIFFCIELabToRGB_bstep_FIELD_READER FALSE
#define BIND_TIFFCIELabToRGB_bstep_FIELD_WRITER FALSE
#define BIND_TIFFCIELabToRGB_display_FIELD_READER FALSE
#define BIND_TIFFCIELabToRGB_display_FIELD_WRITER FALSE
#define BIND_TIFFCIELabToRGB_display_FIELD_READER FALSE
#define BIND_TIFFCIELabToRGB_display_FIELD_WRITER FALSE
#define BIND_TIFFCIELabToRGB_gstep_FIELD_READER FALSE
#define BIND_TIFFCIELabToRGB_gstep_FIELD_WRITER FALSE
#define BIND_TIFFCIELabToRGB_gstep_FIELD_READER FALSE
#define BIND_TIFFCIELabToRGB_gstep_FIELD_WRITER FALSE
#define BIND_TIFFCIELabToRGB_range_FIELD_READER FALSE
#define BIND_TIFFCIELabToRGB_range_FIELD_WRITER FALSE
#define BIND_TIFFCIELabToRGB_range_FIELD_READER FALSE
#define BIND_TIFFCIELabToRGB_range_FIELD_WRITER FALSE
#define BIND_TIFFCIELabToRGB_rstep_FIELD_READER FALSE
#define BIND_TIFFCIELabToRGB_rstep_FIELD_WRITER FALSE
#define BIND_TIFFCIELabToRGB_rstep_FIELD_READER FALSE
#define BIND_TIFFCIELabToRGB_rstep_FIELD_WRITER FALSE

#define BIND_TIFFCodec_TYPE TRUE
#define BIND_TIFFCodec_INITIALIZE FALSE
#define BIND_TIFFCodec_init_FIELD_READER FALSE
#define BIND_TIFFCodec_init_FIELD_WRITER FALSE
#define BIND_TIFFCodec_init_FIELD_READER FALSE
#define BIND_TIFFCodec_init_FIELD_WRITER FALSE
#define BIND_TIFFCodec_name_FIELD_READER FALSE
#define BIND_TIFFCodec_name_FIELD_WRITER FALSE
#define BIND_TIFFCodec_name_FIELD_READER FALSE
#define BIND_TIFFCodec_name_FIELD_WRITER FALSE
#define BIND_TIFFCodec_scheme_FIELD_READER FALSE
#define BIND_TIFFCodec_scheme_FIELD_WRITER FALSE
#define BIND_TIFFCodec_scheme_FIELD_READER FALSE
#define BIND_TIFFCodec_scheme_FIELD_WRITER FALSE

#define BIND_TIFFDirectory_TYPE TRUE
#define BIND_TIFFDirectory_INITIALIZE FALSE
#define BIND_TIFFDirectory_td_bitspersample_FIELD_READER FALSE
#define BIND_TIFFDirectory_td_bitspersample_FIELD_WRITER FALSE
#define BIND_TIFFDirectory_td_colormap_FIELD_READER FALSE
#define BIND_TIFFDirectory_td_colormap_FIELD_WRITER FALSE
#define BIND_TIFFDirectory_td_compression_FIELD_READER FALSE
#define BIND_TIFFDirectory_td_compression_FIELD_WRITER FALSE
#define BIND_TIFFDirectory_td_customValueCount_FIELD_READER FALSE
#define BIND_TIFFDirectory_td_customValueCount_FIELD_WRITER FALSE
#define BIND_TIFFDirectory_td_customValues_FIELD_READER FALSE
#define BIND_TIFFDirectory_td_customValues_FIELD_WRITER FALSE
#define BIND_TIFFDirectory_td_extrasamples_FIELD_READER FALSE
#define BIND_TIFFDirectory_td_extrasamples_FIELD_WRITER FALSE
#define BIND_TIFFDirectory_td_fieldsset_FIELD_READER FALSE
#define BIND_TIFFDirectory_td_fieldsset_FIELD_WRITER FALSE
#define BIND_TIFFDirectory_td_fillorder_FIELD_READER FALSE
#define BIND_TIFFDirectory_td_fillorder_FIELD_WRITER FALSE
#define BIND_TIFFDirectory_td_halftonehints_FIELD_READER FALSE
#define BIND_TIFFDirectory_td_halftonehints_FIELD_WRITER FALSE
#define BIND_TIFFDirectory_td_imagedepth_FIELD_READER FALSE
#define BIND_TIFFDirectory_td_imagedepth_FIELD_WRITER FALSE
#define BIND_TIFFDirectory_td_imagelength_FIELD_READER FALSE
#define BIND_TIFFDirectory_td_imagelength_FIELD_WRITER FALSE
#define BIND_TIFFDirectory_td_imagewidth_FIELD_READER FALSE
#define BIND_TIFFDirectory_td_imagewidth_FIELD_WRITER FALSE
#define BIND_TIFFDirectory_td_inknames_FIELD_READER FALSE
#define BIND_TIFFDirectory_td_inknames_FIELD_WRITER FALSE
#define BIND_TIFFDirectory_td_inknameslen_FIELD_READER FALSE
#define BIND_TIFFDirectory_td_inknameslen_FIELD_WRITER FALSE
#define BIND_TIFFDirectory_td_maxsamplevalue_FIELD_READER FALSE
#define BIND_TIFFDirectory_td_maxsamplevalue_FIELD_WRITER FALSE
#define BIND_TIFFDirectory_td_minsamplevalue_FIELD_READER FALSE
#define BIND_TIFFDirectory_td_minsamplevalue_FIELD_WRITER FALSE
#define BIND_TIFFDirectory_td_nstrips_FIELD_READER FALSE
#define BIND_TIFFDirectory_td_nstrips_FIELD_WRITER FALSE
#define BIND_TIFFDirectory_td_nsubifd_FIELD_READER FALSE
#define BIND_TIFFDirectory_td_nsubifd_FIELD_WRITER FALSE
#define BIND_TIFFDirectory_td_orientation_FIELD_READER FALSE
#define BIND_TIFFDirectory_td_orientation_FIELD_WRITER FALSE
#define BIND_TIFFDirectory_td_pagenumber_FIELD_READER FALSE
#define BIND_TIFFDirectory_td_pagenumber_FIELD_WRITER FALSE
#define BIND_TIFFDirectory_td_photometric_FIELD_READER FALSE
#define BIND_TIFFDirectory_td_photometric_FIELD_WRITER FALSE
#define BIND_TIFFDirectory_td_planarconfig_FIELD_READER FALSE
#define BIND_TIFFDirectory_td_planarconfig_FIELD_WRITER FALSE
#define BIND_TIFFDirectory_td_refblackwhite_FIELD_READER FALSE
#define BIND_TIFFDirectory_td_refblackwhite_FIELD_WRITER FALSE
#define BIND_TIFFDirectory_td_resolutionunit_FIELD_READER FALSE
#define BIND_TIFFDirectory_td_resolutionunit_FIELD_WRITER FALSE
#define BIND_TIFFDirectory_td_rowsperstrip_FIELD_READER FALSE
#define BIND_TIFFDirectory_td_rowsperstrip_FIELD_WRITER FALSE
#define BIND_TIFFDirectory_td_sampleformat_FIELD_READER FALSE
#define BIND_TIFFDirectory_td_sampleformat_FIELD_WRITER FALSE
#define BIND_TIFFDirectory_td_sampleinfo_FIELD_READER FALSE
#define BIND_TIFFDirectory_td_sampleinfo_FIELD_WRITER FALSE
#define BIND_TIFFDirectory_td_samplesperpixel_FIELD_READER FALSE
#define BIND_TIFFDirectory_td_samplesperpixel_FIELD_WRITER FALSE
#define BIND_TIFFDirectory_td_smaxsamplevalue_FIELD_READER FALSE
#define BIND_TIFFDirectory_td_smaxsamplevalue_FIELD_WRITER FALSE
#define BIND_TIFFDirectory_td_sminsamplevalue_FIELD_READER FALSE
#define BIND_TIFFDirectory_td_sminsamplevalue_FIELD_WRITER FALSE
#define BIND_TIFFDirectory_td_stripbytecount_FIELD_READER FALSE
#define BIND_TIFFDirectory_td_stripbytecount_FIELD_WRITER FALSE
#define BIND_TIFFDirectory_td_stripbytecountsorted_FIELD_READER FALSE
#define BIND_TIFFDirectory_td_stripbytecountsorted_FIELD_WRITER FALSE
#define BIND_TIFFDirectory_td_stripoffset_FIELD_READER FALSE
#define BIND_TIFFDirectory_td_stripoffset_FIELD_WRITER FALSE
#define BIND_TIFFDirectory_td_stripsperimage_FIELD_READER FALSE
#define BIND_TIFFDirectory_td_stripsperimage_FIELD_WRITER FALSE
#define BIND_TIFFDirectory_td_subfiletype_FIELD_READER FALSE
#define BIND_TIFFDirectory_td_subfiletype_FIELD_WRITER FALSE
#define BIND_TIFFDirectory_td_subifd_FIELD_READER FALSE
#define BIND_TIFFDirectory_td_subifd_FIELD_WRITER FALSE
#define BIND_TIFFDirectory_td_threshholding_FIELD_READER FALSE
#define BIND_TIFFDirectory_td_threshholding_FIELD_WRITER FALSE
#define BIND_TIFFDirectory_td_tiledepth_FIELD_READER FALSE
#define BIND_TIFFDirectory_td_tiledepth_FIELD_WRITER FALSE
#define BIND_TIFFDirectory_td_tilelength_FIELD_READER FALSE
#define BIND_TIFFDirectory_td_tilelength_FIELD_WRITER FALSE
#define BIND_TIFFDirectory_td_tilewidth_FIELD_READER FALSE
#define BIND_TIFFDirectory_td_tilewidth_FIELD_WRITER FALSE
#define BIND_TIFFDirectory_td_transferfunction_FIELD_READER FALSE
#define BIND_TIFFDirectory_td_transferfunction_FIELD_WRITER FALSE
#define BIND_TIFFDirectory_td_xposition_FIELD_READER FALSE
#define BIND_TIFFDirectory_td_xposition_FIELD_WRITER FALSE
#define BIND_TIFFDirectory_td_xresolution_FIELD_READER FALSE
#define BIND_TIFFDirectory_td_xresolution_FIELD_WRITER FALSE
#define BIND_TIFFDirectory_td_ycbcrpositioning_FIELD_READER FALSE
#define BIND_TIFFDirectory_td_ycbcrpositioning_FIELD_WRITER FALSE
#define BIND_TIFFDirectory_td_ycbcrsubsampling_FIELD_READER FALSE
#define BIND_TIFFDirectory_td_ycbcrsubsampling_FIELD_WRITER FALSE
#define BIND_TIFFDirectory_td_yposition_FIELD_READER FALSE
#define BIND_TIFFDirectory_td_yposition_FIELD_WRITER FALSE
#define BIND_TIFFDirectory_td_yresolution_FIELD_READER FALSE
#define BIND_TIFFDirectory_td_yresolution_FIELD_WRITER FALSE

#define BIND_TIFFDirEntry_TYPE TRUE
#define BIND_TIFFDirEntry_INITIALIZE FALSE
#define BIND_TIFFDirEntry_tdir_count_FIELD_READER FALSE
#define BIND_TIFFDirEntry_tdir_count_FIELD_WRITER FALSE
#define BIND_TIFFDirEntry_tdir_offset_FIELD_READER FALSE
#define BIND_TIFFDirEntry_tdir_offset_FIELD_WRITER FALSE
#define BIND_TIFFDirEntry_tdir_tag_FIELD_READER FALSE
#define BIND_TIFFDirEntry_tdir_tag_FIELD_WRITER FALSE
#define BIND_TIFFDirEntry_tdir_type_FIELD_READER FALSE
#define BIND_TIFFDirEntry_tdir_type_FIELD_WRITER FALSE

#define BIND_TIFFDisplay_TYPE TRUE
#define BIND_TIFFDisplay_INITIALIZE FALSE
#define BIND_TIFFDisplay_d_Vrwb_FIELD_READER FALSE
#define BIND_TIFFDisplay_d_Vrwb_FIELD_WRITER FALSE
#define BIND_TIFFDisplay_d_Vrwb_FIELD_READER FALSE
#define BIND_TIFFDisplay_d_Vrwb_FIELD_WRITER FALSE
#define BIND_TIFFDisplay_d_Vrwg_FIELD_READER FALSE
#define BIND_TIFFDisplay_d_Vrwg_FIELD_WRITER FALSE
#define BIND_TIFFDisplay_d_Vrwg_FIELD_READER FALSE
#define BIND_TIFFDisplay_d_Vrwg_FIELD_WRITER FALSE
#define BIND_TIFFDisplay_d_Vrwr_FIELD_READER FALSE
#define BIND_TIFFDisplay_d_Vrwr_FIELD_WRITER FALSE
#define BIND_TIFFDisplay_d_Vrwr_FIELD_READER FALSE
#define BIND_TIFFDisplay_d_Vrwr_FIELD_WRITER FALSE
#define BIND_TIFFDisplay_d_Y0B_FIELD_READER FALSE
#define BIND_TIFFDisplay_d_Y0B_FIELD_WRITER FALSE
#define BIND_TIFFDisplay_d_Y0B_FIELD_READER FALSE
#define BIND_TIFFDisplay_d_Y0B_FIELD_WRITER FALSE
#define BIND_TIFFDisplay_d_Y0G_FIELD_READER FALSE
#define BIND_TIFFDisplay_d_Y0G_FIELD_WRITER FALSE
#define BIND_TIFFDisplay_d_Y0G_FIELD_READER FALSE
#define BIND_TIFFDisplay_d_Y0G_FIELD_WRITER FALSE
#define BIND_TIFFDisplay_d_Y0R_FIELD_READER FALSE
#define BIND_TIFFDisplay_d_Y0R_FIELD_WRITER FALSE
#define BIND_TIFFDisplay_d_Y0R_FIELD_READER FALSE
#define BIND_TIFFDisplay_d_Y0R_FIELD_WRITER FALSE
#define BIND_TIFFDisplay_d_YCB_FIELD_READER FALSE
#define BIND_TIFFDisplay_d_YCB_FIELD_WRITER FALSE
#define BIND_TIFFDisplay_d_YCB_FIELD_READER FALSE
#define BIND_TIFFDisplay_d_YCB_FIELD_WRITER FALSE
#define BIND_TIFFDisplay_d_YCG_FIELD_READER FALSE
#define BIND_TIFFDisplay_d_YCG_FIELD_WRITER FALSE
#define BIND_TIFFDisplay_d_YCG_FIELD_READER FALSE
#define BIND_TIFFDisplay_d_YCG_FIELD_WRITER FALSE
#define BIND_TIFFDisplay_d_YCR_FIELD_READER FALSE
#define BIND_TIFFDisplay_d_YCR_FIELD_WRITER FALSE
#define BIND_TIFFDisplay_d_YCR_FIELD_READER FALSE
#define BIND_TIFFDisplay_d_YCR_FIELD_WRITER FALSE
#define BIND_TIFFDisplay_d_gammaB_FIELD_READER FALSE
#define BIND_TIFFDisplay_d_gammaB_FIELD_WRITER FALSE
#define BIND_TIFFDisplay_d_gammaB_FIELD_READER FALSE
#define BIND_TIFFDisplay_d_gammaB_FIELD_WRITER FALSE
#define BIND_TIFFDisplay_d_gammaG_FIELD_READER FALSE
#define BIND_TIFFDisplay_d_gammaG_FIELD_WRITER FALSE
#define BIND_TIFFDisplay_d_gammaG_FIELD_READER FALSE
#define BIND_TIFFDisplay_d_gammaG_FIELD_WRITER FALSE
#define BIND_TIFFDisplay_d_gammaR_FIELD_READER FALSE
#define BIND_TIFFDisplay_d_gammaR_FIELD_WRITER FALSE
#define BIND_TIFFDisplay_d_gammaR_FIELD_READER FALSE
#define BIND_TIFFDisplay_d_gammaR_FIELD_WRITER FALSE
#define BIND_TIFFDisplay_d_mat_FIELD_READER FALSE
#define BIND_TIFFDisplay_d_mat_FIELD_WRITER FALSE
#define BIND_TIFFDisplay_d_mat_FIELD_READER FALSE
#define BIND_TIFFDisplay_d_mat_FIELD_WRITER FALSE

#define BIND_TIFFFaxTabEnt_TYPE TRUE
#define BIND_TIFFFaxTabEnt_INITIALIZE FALSE
#define BIND_TIFFFaxTabEnt_Param_FIELD_READER FALSE
#define BIND_TIFFFaxTabEnt_Param_FIELD_WRITER FALSE
#define BIND_TIFFFaxTabEnt_State_FIELD_READER FALSE
#define BIND_TIFFFaxTabEnt_State_FIELD_WRITER FALSE
#define BIND_TIFFFaxTabEnt_Width_FIELD_READER FALSE
#define BIND_TIFFFaxTabEnt_Width_FIELD_WRITER FALSE

#define BIND_TIFFFieldInfo_TYPE TRUE
#define BIND_TIFFFieldInfo_INITIALIZE FALSE
#define BIND_TIFFFieldInfo_field_bit_FIELD_READER FALSE
#define BIND_TIFFFieldInfo_field_bit_FIELD_WRITER FALSE
#define BIND_TIFFFieldInfo_field_bit_FIELD_READER FALSE
#define BIND_TIFFFieldInfo_field_bit_FIELD_WRITER FALSE
#define BIND_TIFFFieldInfo_field_name_FIELD_READER FALSE
#define BIND_TIFFFieldInfo_field_name_FIELD_WRITER FALSE
#define BIND_TIFFFieldInfo_field_name_FIELD_READER FALSE
#define BIND_TIFFFieldInfo_field_name_FIELD_WRITER FALSE
#define BIND_TIFFFieldInfo_field_oktochange_FIELD_READER FALSE
#define BIND_TIFFFieldInfo_field_oktochange_FIELD_WRITER FALSE
#define BIND_TIFFFieldInfo_field_oktochange_FIELD_READER FALSE
#define BIND_TIFFFieldInfo_field_oktochange_FIELD_WRITER FALSE
#define BIND_TIFFFieldInfo_field_passcount_FIELD_READER FALSE
#define BIND_TIFFFieldInfo_field_passcount_FIELD_WRITER FALSE
#define BIND_TIFFFieldInfo_field_passcount_FIELD_READER FALSE
#define BIND_TIFFFieldInfo_field_passcount_FIELD_WRITER FALSE
#define BIND_TIFFFieldInfo_field_readcount_FIELD_READER FALSE
#define BIND_TIFFFieldInfo_field_readcount_FIELD_WRITER FALSE
#define BIND_TIFFFieldInfo_field_readcount_FIELD_READER FALSE
#define BIND_TIFFFieldInfo_field_readcount_FIELD_WRITER FALSE
#define BIND_TIFFFieldInfo_field_tag_FIELD_READER FALSE
#define BIND_TIFFFieldInfo_field_tag_FIELD_WRITER FALSE
#define BIND_TIFFFieldInfo_field_tag_FIELD_READER FALSE
#define BIND_TIFFFieldInfo_field_tag_FIELD_WRITER FALSE
#define BIND_TIFFFieldInfo_field_type_FIELD_READER FALSE
#define BIND_TIFFFieldInfo_field_type_FIELD_WRITER FALSE
#define BIND_TIFFFieldInfo_field_type_FIELD_READER FALSE
#define BIND_TIFFFieldInfo_field_type_FIELD_WRITER FALSE
#define BIND_TIFFFieldInfo_field_writecount_FIELD_READER FALSE
#define BIND_TIFFFieldInfo_field_writecount_FIELD_WRITER FALSE
#define BIND_TIFFFieldInfo_field_writecount_FIELD_READER FALSE
#define BIND_TIFFFieldInfo_field_writecount_FIELD_WRITER FALSE

#define BIND_TIFFHeaderBig_TYPE TRUE
#define BIND_TIFFHeaderBig_INITIALIZE FALSE
#define BIND_TIFFHeaderBig_tiff_diroff_FIELD_READER FALSE
#define BIND_TIFFHeaderBig_tiff_diroff_FIELD_WRITER FALSE
#define BIND_TIFFHeaderBig_tiff_diroff_FIELD_READER FALSE
#define BIND_TIFFHeaderBig_tiff_diroff_FIELD_WRITER FALSE
#define BIND_TIFFHeaderBig_tiff_magic_FIELD_READER FALSE
#define BIND_TIFFHeaderBig_tiff_magic_FIELD_WRITER FALSE
#define BIND_TIFFHeaderBig_tiff_magic_FIELD_READER FALSE
#define BIND_TIFFHeaderBig_tiff_magic_FIELD_WRITER FALSE
#define BIND_TIFFHeaderBig_tiff_offsetsize_FIELD_READER FALSE
#define BIND_TIFFHeaderBig_tiff_offsetsize_FIELD_WRITER FALSE
#define BIND_TIFFHeaderBig_tiff_offsetsize_FIELD_READER FALSE
#define BIND_TIFFHeaderBig_tiff_offsetsize_FIELD_WRITER FALSE
#define BIND_TIFFHeaderBig_tiff_unused_FIELD_READER FALSE
#define BIND_TIFFHeaderBig_tiff_unused_FIELD_WRITER FALSE
#define BIND_TIFFHeaderBig_tiff_unused_FIELD_READER FALSE
#define BIND_TIFFHeaderBig_tiff_unused_FIELD_WRITER FALSE
#define BIND_TIFFHeaderBig_tiff_version_FIELD_READER FALSE
#define BIND_TIFFHeaderBig_tiff_version_FIELD_WRITER FALSE
#define BIND_TIFFHeaderBig_tiff_version_FIELD_READER FALSE
#define BIND_TIFFHeaderBig_tiff_version_FIELD_WRITER FALSE

#define BIND_TIFFHeaderClassic_TYPE TRUE
#define BIND_TIFFHeaderClassic_INITIALIZE FALSE
#define BIND_TIFFHeaderClassic_tiff_diroff_FIELD_READER FALSE
#define BIND_TIFFHeaderClassic_tiff_diroff_FIELD_WRITER FALSE
#define BIND_TIFFHeaderClassic_tiff_diroff_FIELD_READER FALSE
#define BIND_TIFFHeaderClassic_tiff_diroff_FIELD_WRITER FALSE
#define BIND_TIFFHeaderClassic_tiff_magic_FIELD_READER FALSE
#define BIND_TIFFHeaderClassic_tiff_magic_FIELD_WRITER FALSE
#define BIND_TIFFHeaderClassic_tiff_magic_FIELD_READER FALSE
#define BIND_TIFFHeaderClassic_tiff_magic_FIELD_WRITER FALSE
#define BIND_TIFFHeaderClassic_tiff_version_FIELD_READER FALSE
#define BIND_TIFFHeaderClassic_tiff_version_FIELD_WRITER FALSE
#define BIND_TIFFHeaderClassic_tiff_version_FIELD_READER FALSE
#define BIND_TIFFHeaderClassic_tiff_version_FIELD_WRITER FALSE

#define BIND_TIFFHeaderCommon_TYPE TRUE
#define BIND_TIFFHeaderCommon_INITIALIZE FALSE
#define BIND_TIFFHeaderCommon_tiff_magic_FIELD_READER FALSE
#define BIND_TIFFHeaderCommon_tiff_magic_FIELD_WRITER FALSE
#define BIND_TIFFHeaderCommon_tiff_magic_FIELD_READER FALSE
#define BIND_TIFFHeaderCommon_tiff_magic_FIELD_WRITER FALSE
#define BIND_TIFFHeaderCommon_tiff_version_FIELD_READER FALSE
#define BIND_TIFFHeaderCommon_tiff_version_FIELD_WRITER FALSE
#define BIND_TIFFHeaderCommon_tiff_version_FIELD_READER FALSE
#define BIND_TIFFHeaderCommon_tiff_version_FIELD_WRITER FALSE

#define BIND_TIFFOvrCache_TYPE TRUE
#define BIND_TIFFOvrCache_INITIALIZE FALSE
#define BIND_TIFFOvrCache_bTiled_FIELD_READER FALSE
#define BIND_TIFFOvrCache_bTiled_FIELD_WRITER FALSE
#define BIND_TIFFOvrCache_hTIFF_FIELD_READER FALSE
#define BIND_TIFFOvrCache_hTIFF_FIELD_WRITER FALSE
#define BIND_TIFFOvrCache_nBitsPerPixel_FIELD_READER FALSE
#define BIND_TIFFOvrCache_nBitsPerPixel_FIELD_WRITER FALSE
#define BIND_TIFFOvrCache_nBlockOffset_FIELD_READER FALSE
#define BIND_TIFFOvrCache_nBlockOffset_FIELD_WRITER FALSE
#define BIND_TIFFOvrCache_nBlockXSize_FIELD_READER FALSE
#define BIND_TIFFOvrCache_nBlockXSize_FIELD_WRITER FALSE
#define BIND_TIFFOvrCache_nBlockYSize_FIELD_READER FALSE
#define BIND_TIFFOvrCache_nBlockYSize_FIELD_WRITER FALSE
#define BIND_TIFFOvrCache_nBlocksPerColumn_FIELD_READER FALSE
#define BIND_TIFFOvrCache_nBlocksPerColumn_FIELD_WRITER FALSE
#define BIND_TIFFOvrCache_nBlocksPerRow_FIELD_READER FALSE
#define BIND_TIFFOvrCache_nBlocksPerRow_FIELD_WRITER FALSE
#define BIND_TIFFOvrCache_nBytesPerBlock_FIELD_READER FALSE
#define BIND_TIFFOvrCache_nBytesPerBlock_FIELD_WRITER FALSE
#define BIND_TIFFOvrCache_nBytesPerRow_FIELD_READER FALSE
#define BIND_TIFFOvrCache_nBytesPerRow_FIELD_WRITER FALSE
#define BIND_TIFFOvrCache_nDirOffset_FIELD_READER FALSE
#define BIND_TIFFOvrCache_nDirOffset_FIELD_WRITER FALSE
#define BIND_TIFFOvrCache_nPlanarConfig_FIELD_READER FALSE
#define BIND_TIFFOvrCache_nPlanarConfig_FIELD_WRITER FALSE
#define BIND_TIFFOvrCache_nSamples_FIELD_READER FALSE
#define BIND_TIFFOvrCache_nSamples_FIELD_WRITER FALSE
#define BIND_TIFFOvrCache_nXSize_FIELD_READER FALSE
#define BIND_TIFFOvrCache_nXSize_FIELD_WRITER FALSE
#define BIND_TIFFOvrCache_nYSize_FIELD_READER FALSE
#define BIND_TIFFOvrCache_nYSize_FIELD_WRITER FALSE
#define BIND_TIFFOvrCache_pabyRow1Blocks_FIELD_READER FALSE
#define BIND_TIFFOvrCache_pabyRow1Blocks_FIELD_WRITER FALSE
#define BIND_TIFFOvrCache_pabyRow2Blocks_FIELD_READER FALSE
#define BIND_TIFFOvrCache_pabyRow2Blocks_FIELD_WRITER FALSE

#define BIND_TIFFPredictorState_TYPE TRUE
#define BIND_TIFFPredictorState_INITIALIZE FALSE
#define BIND_TIFFPredictorState_decodepfunc_FIELD_READER FALSE
#define BIND_TIFFPredictorState_decodepfunc_FIELD_WRITER FALSE
#define BIND_TIFFPredictorState_decoderow_FIELD_READER FALSE
#define BIND_TIFFPredictorState_decoderow_FIELD_WRITER FALSE
#define BIND_TIFFPredictorState_decodestrip_FIELD_READER FALSE
#define BIND_TIFFPredictorState_decodestrip_FIELD_WRITER FALSE
#define BIND_TIFFPredictorState_decodetile_FIELD_READER FALSE
#define BIND_TIFFPredictorState_decodetile_FIELD_WRITER FALSE
#define BIND_TIFFPredictorState_encodepfunc_FIELD_READER FALSE
#define BIND_TIFFPredictorState_encodepfunc_FIELD_WRITER FALSE
#define BIND_TIFFPredictorState_encoderow_FIELD_READER FALSE
#define BIND_TIFFPredictorState_encoderow_FIELD_WRITER FALSE
#define BIND_TIFFPredictorState_encodestrip_FIELD_READER FALSE
#define BIND_TIFFPredictorState_encodestrip_FIELD_WRITER FALSE
#define BIND_TIFFPredictorState_encodetile_FIELD_READER FALSE
#define BIND_TIFFPredictorState_encodetile_FIELD_WRITER FALSE
#define BIND_TIFFPredictorState_predictor_FIELD_READER FALSE
#define BIND_TIFFPredictorState_predictor_FIELD_WRITER FALSE
#define BIND_TIFFPredictorState_printdir_FIELD_READER FALSE
#define BIND_TIFFPredictorState_printdir_FIELD_WRITER FALSE
#define BIND_TIFFPredictorState_rowsize_FIELD_READER FALSE
#define BIND_TIFFPredictorState_rowsize_FIELD_WRITER FALSE
#define BIND_TIFFPredictorState_setupdecode_FIELD_READER FALSE
#define BIND_TIFFPredictorState_setupdecode_FIELD_WRITER FALSE
#define BIND_TIFFPredictorState_setupencode_FIELD_READER FALSE
#define BIND_TIFFPredictorState_setupencode_FIELD_WRITER FALSE
#define BIND_TIFFPredictorState_stride_FIELD_READER FALSE
#define BIND_TIFFPredictorState_stride_FIELD_WRITER FALSE
#define BIND_TIFFPredictorState_vgetparent_FIELD_READER FALSE
#define BIND_TIFFPredictorState_vgetparent_FIELD_WRITER FALSE
#define BIND_TIFFPredictorState_vsetparent_FIELD_READER FALSE
#define BIND_TIFFPredictorState_vsetparent_FIELD_WRITER FALSE

#define BIND_TIFFTagMethods_TYPE TRUE
#define BIND_TIFFTagMethods_INITIALIZE FALSE
#define BIND_TIFFTagMethods_printdir_FIELD_READER FALSE
#define BIND_TIFFTagMethods_printdir_FIELD_WRITER FALSE
#define BIND_TIFFTagMethods_printdir_FIELD_READER FALSE
#define BIND_TIFFTagMethods_printdir_FIELD_WRITER FALSE
#define BIND_TIFFTagMethods_vgetfield_FIELD_READER FALSE
#define BIND_TIFFTagMethods_vgetfield_FIELD_WRITER FALSE
#define BIND_TIFFTagMethods_vgetfield_FIELD_READER FALSE
#define BIND_TIFFTagMethods_vgetfield_FIELD_WRITER FALSE
#define BIND_TIFFTagMethods_vsetfield_FIELD_READER FALSE
#define BIND_TIFFTagMethods_vsetfield_FIELD_WRITER FALSE
#define BIND_TIFFTagMethods_vsetfield_FIELD_READER FALSE
#define BIND_TIFFTagMethods_vsetfield_FIELD_WRITER FALSE

#define BIND_TIFFTagValue_TYPE TRUE
#define BIND_TIFFTagValue_INITIALIZE FALSE
#define BIND_TIFFTagValue_count_FIELD_READER FALSE
#define BIND_TIFFTagValue_count_FIELD_WRITER FALSE
#define BIND_TIFFTagValue_info_FIELD_READER FALSE
#define BIND_TIFFTagValue_info_FIELD_WRITER FALSE
#define BIND_TIFFTagValue_value_FIELD_READER FALSE
#define BIND_TIFFTagValue_value_FIELD_WRITER FALSE

#define BIND_TIFFYCbCrToRGB_TYPE TRUE
#define BIND_TIFFYCbCrToRGB_INITIALIZE FALSE
#define BIND_TIFFYCbCrToRGB_Cb_b_tab_FIELD_READER FALSE
#define BIND_TIFFYCbCrToRGB_Cb_b_tab_FIELD_WRITER FALSE
#define BIND_TIFFYCbCrToRGB_Cb_b_tab_FIELD_READER FALSE
#define BIND_TIFFYCbCrToRGB_Cb_b_tab_FIELD_WRITER FALSE
#define BIND_TIFFYCbCrToRGB_Cb_g_tab_FIELD_READER FALSE
#define BIND_TIFFYCbCrToRGB_Cb_g_tab_FIELD_WRITER FALSE
#define BIND_TIFFYCbCrToRGB_Cb_g_tab_FIELD_READER FALSE
#define BIND_TIFFYCbCrToRGB_Cb_g_tab_FIELD_WRITER FALSE
#define BIND_TIFFYCbCrToRGB_Cr_g_tab_FIELD_READER FALSE
#define BIND_TIFFYCbCrToRGB_Cr_g_tab_FIELD_WRITER FALSE
#define BIND_TIFFYCbCrToRGB_Cr_g_tab_FIELD_READER FALSE
#define BIND_TIFFYCbCrToRGB_Cr_g_tab_FIELD_WRITER FALSE
#define BIND_TIFFYCbCrToRGB_Cr_r_tab_FIELD_READER FALSE
#define BIND_TIFFYCbCrToRGB_Cr_r_tab_FIELD_WRITER FALSE
#define BIND_TIFFYCbCrToRGB_Cr_r_tab_FIELD_READER FALSE
#define BIND_TIFFYCbCrToRGB_Cr_r_tab_FIELD_WRITER FALSE
#define BIND_TIFFYCbCrToRGB_Y_tab_FIELD_READER FALSE
#define BIND_TIFFYCbCrToRGB_Y_tab_FIELD_WRITER FALSE
#define BIND_TIFFYCbCrToRGB_Y_tab_FIELD_READER FALSE
#define BIND_TIFFYCbCrToRGB_Y_tab_FIELD_WRITER FALSE
#define BIND_TIFFYCbCrToRGB_clamptab_FIELD_READER FALSE
#define BIND_TIFFYCbCrToRGB_clamptab_FIELD_WRITER FALSE
#define BIND_TIFFYCbCrToRGB_clamptab_FIELD_READER FALSE
#define BIND_TIFFYCbCrToRGB_clamptab_FIELD_WRITER FALSE

#define BIND_TinflHuffTable_TYPE TRUE
#define BIND_TinflHuffTable_INITIALIZE FALSE
#define BIND_TinflHuffTable_m_code_size_FIELD_READER FALSE
#define BIND_TinflHuffTable_m_code_size_FIELD_WRITER FALSE
#define BIND_TinflHuffTable_m_look_up_FIELD_READER FALSE
#define BIND_TinflHuffTable_m_look_up_FIELD_WRITER FALSE
#define BIND_TinflHuffTable_m_tree_FIELD_READER FALSE
#define BIND_TinflHuffTable_m_tree_FIELD_WRITER FALSE

#define BIND_TSFSink_TYPE TRUE
#define BIND_TSFSink_INITIALIZE FALSE
#define BIND_TSFSink_data_FIELD_READER FALSE
#define BIND_TSFSink_data_FIELD_WRITER FALSE
#define BIND_TSFSink_lpVtbl_FIELD_READER FALSE
#define BIND_TSFSink_lpVtbl_FIELD_WRITER FALSE
#define BIND_TSFSink_refcount_FIELD_READER FALSE
#define BIND_TSFSink_refcount_FIELD_WRITER FALSE

#define BIND_UIKitKeyInfo_TYPE TRUE
#define BIND_UIKitKeyInfo_INITIALIZE FALSE
#define BIND_UIKitKeyInfo_code_FIELD_READER FALSE
#define BIND_UIKitKeyInfo_code_FIELD_WRITER FALSE
#define BIND_UIKitKeyInfo_mod_FIELD_READER FALSE
#define BIND_UIKitKeyInfo_mod_FIELD_WRITER FALSE

#define BIND_VP8EncIterator_TYPE TRUE
#define BIND_VP8EncIterator_INITIALIZE FALSE
#define BIND_VP8EncIterator_bit_count__FIELD_READER FALSE
#define BIND_VP8EncIterator_bit_count__FIELD_WRITER FALSE
#define BIND_VP8EncIterator_bw__FIELD_READER FALSE
#define BIND_VP8EncIterator_bw__FIELD_WRITER FALSE
#define BIND_VP8EncIterator_do_trellis__FIELD_READER FALSE
#define BIND_VP8EncIterator_do_trellis__FIELD_WRITER FALSE
#define BIND_VP8EncIterator_done__FIELD_READER FALSE
#define BIND_VP8EncIterator_done__FIELD_WRITER FALSE
#define BIND_VP8EncIterator_enc__FIELD_READER FALSE
#define BIND_VP8EncIterator_enc__FIELD_WRITER FALSE
#define BIND_VP8EncIterator_i4__FIELD_READER FALSE
#define BIND_VP8EncIterator_i4__FIELD_WRITER FALSE
#define BIND_VP8EncIterator_i4_boundary__FIELD_READER FALSE
#define BIND_VP8EncIterator_i4_boundary__FIELD_WRITER FALSE
#define BIND_VP8EncIterator_i4_top__FIELD_READER FALSE
#define BIND_VP8EncIterator_i4_top__FIELD_WRITER FALSE
#define BIND_VP8EncIterator_left_nz__FIELD_READER FALSE
#define BIND_VP8EncIterator_left_nz__FIELD_WRITER FALSE
#define BIND_VP8EncIterator_lf_stats__FIELD_READER FALSE
#define BIND_VP8EncIterator_lf_stats__FIELD_WRITER FALSE
#define BIND_VP8EncIterator_luma_bits__FIELD_READER FALSE
#define BIND_VP8EncIterator_luma_bits__FIELD_WRITER FALSE
#define BIND_VP8EncIterator_mb__FIELD_READER FALSE
#define BIND_VP8EncIterator_mb__FIELD_WRITER FALSE
#define BIND_VP8EncIterator_nz__FIELD_READER FALSE
#define BIND_VP8EncIterator_nz__FIELD_WRITER FALSE
#define BIND_VP8EncIterator_percent0__FIELD_READER FALSE
#define BIND_VP8EncIterator_percent0__FIELD_WRITER FALSE
#define BIND_VP8EncIterator_preds__FIELD_READER FALSE
#define BIND_VP8EncIterator_preds__FIELD_WRITER FALSE
#define BIND_VP8EncIterator_top_nz__FIELD_READER FALSE
#define BIND_VP8EncIterator_top_nz__FIELD_WRITER FALSE
#define BIND_VP8EncIterator_uv_bits__FIELD_READER FALSE
#define BIND_VP8EncIterator_uv_bits__FIELD_WRITER FALSE
#define BIND_VP8EncIterator_uv_offset__FIELD_READER FALSE
#define BIND_VP8EncIterator_uv_offset__FIELD_WRITER FALSE
#define BIND_VP8EncIterator_uv_stride__FIELD_READER FALSE
#define BIND_VP8EncIterator_uv_stride__FIELD_WRITER FALSE
#define BIND_VP8EncIterator_x__FIELD_READER FALSE
#define BIND_VP8EncIterator_x__FIELD_WRITER FALSE
#define BIND_VP8EncIterator_y__FIELD_READER FALSE
#define BIND_VP8EncIterator_y__FIELD_WRITER FALSE
#define BIND_VP8EncIterator_y_offset__FIELD_READER FALSE
#define BIND_VP8EncIterator_y_offset__FIELD_WRITER FALSE
#define BIND_VP8EncIterator_y_stride__FIELD_READER FALSE
#define BIND_VP8EncIterator_y_stride__FIELD_WRITER FALSE
#define BIND_VP8EncIterator_yuv_in__FIELD_READER FALSE
#define BIND_VP8EncIterator_yuv_in__FIELD_WRITER FALSE
#define BIND_VP8EncIterator_yuv_out2__FIELD_READER FALSE
#define BIND_VP8EncIterator_yuv_out2__FIELD_WRITER FALSE
#define BIND_VP8EncIterator_yuv_out__FIELD_READER FALSE
#define BIND_VP8EncIterator_yuv_out__FIELD_WRITER FALSE
#define BIND_VP8EncIterator_yuv_p__FIELD_READER FALSE
#define BIND_VP8EncIterator_yuv_p__FIELD_WRITER FALSE

#define BIND_VP8FilterHeader_TYPE TRUE
#define BIND_VP8FilterHeader_INITIALIZE FALSE
#define BIND_VP8FilterHeader_i4x4_lf_delta__FIELD_READER FALSE
#define BIND_VP8FilterHeader_i4x4_lf_delta__FIELD_WRITER FALSE
#define BIND_VP8FilterHeader_level__FIELD_READER FALSE
#define BIND_VP8FilterHeader_level__FIELD_WRITER FALSE
#define BIND_VP8FilterHeader_level__FIELD_READER FALSE
#define BIND_VP8FilterHeader_level__FIELD_WRITER FALSE
#define BIND_VP8FilterHeader_mode_lf_delta__FIELD_READER FALSE
#define BIND_VP8FilterHeader_mode_lf_delta__FIELD_WRITER FALSE
#define BIND_VP8FilterHeader_ref_lf_delta__FIELD_READER FALSE
#define BIND_VP8FilterHeader_ref_lf_delta__FIELD_WRITER FALSE
#define BIND_VP8FilterHeader_sharpness__FIELD_READER FALSE
#define BIND_VP8FilterHeader_sharpness__FIELD_WRITER FALSE
#define BIND_VP8FilterHeader_sharpness__FIELD_READER FALSE
#define BIND_VP8FilterHeader_sharpness__FIELD_WRITER FALSE
#define BIND_VP8FilterHeader_simple__FIELD_READER FALSE
#define BIND_VP8FilterHeader_simple__FIELD_WRITER FALSE
#define BIND_VP8FilterHeader_simple__FIELD_READER FALSE
#define BIND_VP8FilterHeader_simple__FIELD_WRITER FALSE
#define BIND_VP8FilterHeader_use_lf_delta__FIELD_READER FALSE
#define BIND_VP8FilterHeader_use_lf_delta__FIELD_WRITER FALSE

#define BIND_VP8FInfo_TYPE TRUE
#define BIND_VP8FInfo_INITIALIZE FALSE
#define BIND_VP8FInfo_f_ilevel__FIELD_READER FALSE
#define BIND_VP8FInfo_f_ilevel__FIELD_WRITER FALSE
#define BIND_VP8FInfo_f_inner__FIELD_READER FALSE
#define BIND_VP8FInfo_f_inner__FIELD_WRITER FALSE
#define BIND_VP8FInfo_f_level__FIELD_READER FALSE
#define BIND_VP8FInfo_f_level__FIELD_WRITER FALSE
#define BIND_VP8FInfo_pad__FIELD_READER FALSE
#define BIND_VP8FInfo_pad__FIELD_WRITER FALSE

#define BIND_VP8FrameHeader_TYPE TRUE
#define BIND_VP8FrameHeader_INITIALIZE FALSE
#define BIND_VP8FrameHeader_key_frame__FIELD_READER FALSE
#define BIND_VP8FrameHeader_key_frame__FIELD_WRITER FALSE
#define BIND_VP8FrameHeader_partition_length__FIELD_READER FALSE
#define BIND_VP8FrameHeader_partition_length__FIELD_WRITER FALSE
#define BIND_VP8FrameHeader_profile__FIELD_READER FALSE
#define BIND_VP8FrameHeader_profile__FIELD_WRITER FALSE
#define BIND_VP8FrameHeader_show__FIELD_READER FALSE
#define BIND_VP8FrameHeader_show__FIELD_WRITER FALSE

#define BIND_VP8LBackwardRefs_TYPE TRUE
#define BIND_VP8LBackwardRefs_INITIALIZE FALSE
#define BIND_VP8LBackwardRefs_max_size_FIELD_READER FALSE
#define BIND_VP8LBackwardRefs_max_size_FIELD_WRITER FALSE
#define BIND_VP8LBackwardRefs_refs_FIELD_READER FALSE
#define BIND_VP8LBackwardRefs_refs_FIELD_WRITER FALSE
#define BIND_VP8LBackwardRefs_size_FIELD_READER FALSE
#define BIND_VP8LBackwardRefs_size_FIELD_WRITER FALSE

#define BIND_VP8LBitReader_TYPE TRUE
#define BIND_VP8LBitReader_INITIALIZE FALSE
#define BIND_VP8LBitReader_bit_pos__FIELD_READER FALSE
#define BIND_VP8LBitReader_bit_pos__FIELD_WRITER FALSE
#define BIND_VP8LBitReader_buf__FIELD_READER FALSE
#define BIND_VP8LBitReader_buf__FIELD_WRITER FALSE
#define BIND_VP8LBitReader_eos__FIELD_READER FALSE
#define BIND_VP8LBitReader_eos__FIELD_WRITER FALSE
#define BIND_VP8LBitReader_error__FIELD_READER FALSE
#define BIND_VP8LBitReader_error__FIELD_WRITER FALSE
#define BIND_VP8LBitReader_len__FIELD_READER FALSE
#define BIND_VP8LBitReader_len__FIELD_WRITER FALSE
#define BIND_VP8LBitReader_pos__FIELD_READER FALSE
#define BIND_VP8LBitReader_pos__FIELD_WRITER FALSE
#define BIND_VP8LBitReader_val__FIELD_READER FALSE
#define BIND_VP8LBitReader_val__FIELD_WRITER FALSE

#define BIND_VP8LBitWriter_TYPE TRUE
#define BIND_VP8LBitWriter_INITIALIZE FALSE
#define BIND_VP8LBitWriter_bit_pos__FIELD_READER FALSE
#define BIND_VP8LBitWriter_bit_pos__FIELD_WRITER FALSE
#define BIND_VP8LBitWriter_buf__FIELD_READER FALSE
#define BIND_VP8LBitWriter_buf__FIELD_WRITER FALSE
#define BIND_VP8LBitWriter_error__FIELD_READER FALSE
#define BIND_VP8LBitWriter_error__FIELD_WRITER FALSE
#define BIND_VP8LBitWriter_max_bytes__FIELD_READER FALSE
#define BIND_VP8LBitWriter_max_bytes__FIELD_WRITER FALSE

#define BIND_VP8LColorCache_TYPE TRUE
#define BIND_VP8LColorCache_INITIALIZE FALSE
#define BIND_VP8LColorCache_colors__FIELD_READER FALSE
#define BIND_VP8LColorCache_colors__FIELD_WRITER FALSE
#define BIND_VP8LColorCache_hash_shift__FIELD_READER FALSE
#define BIND_VP8LColorCache_hash_shift__FIELD_WRITER FALSE

#define BIND_VP8LDecoder_TYPE TRUE
#define BIND_VP8LDecoder_INITIALIZE FALSE
#define BIND_VP8LDecoder_action__FIELD_READER FALSE
#define BIND_VP8LDecoder_action__FIELD_WRITER FALSE
#define BIND_VP8LDecoder_argb_cache__FIELD_READER FALSE
#define BIND_VP8LDecoder_argb_cache__FIELD_WRITER FALSE
#define BIND_VP8LDecoder_br__FIELD_READER FALSE
#define BIND_VP8LDecoder_br__FIELD_WRITER FALSE
#define BIND_VP8LDecoder_hdr__FIELD_READER FALSE
#define BIND_VP8LDecoder_hdr__FIELD_WRITER FALSE
#define BIND_VP8LDecoder_height__FIELD_READER FALSE
#define BIND_VP8LDecoder_height__FIELD_WRITER FALSE
#define BIND_VP8LDecoder_io__FIELD_READER FALSE
#define BIND_VP8LDecoder_io__FIELD_WRITER FALSE
#define BIND_VP8LDecoder_last_out_row__FIELD_READER FALSE
#define BIND_VP8LDecoder_last_out_row__FIELD_WRITER FALSE
#define BIND_VP8LDecoder_last_row__FIELD_READER FALSE
#define BIND_VP8LDecoder_last_row__FIELD_WRITER FALSE
#define BIND_VP8LDecoder_next_transform__FIELD_READER FALSE
#define BIND_VP8LDecoder_next_transform__FIELD_WRITER FALSE
#define BIND_VP8LDecoder_output__FIELD_READER FALSE
#define BIND_VP8LDecoder_output__FIELD_WRITER FALSE
#define BIND_VP8LDecoder_pixels__FIELD_READER FALSE
#define BIND_VP8LDecoder_pixels__FIELD_WRITER FALSE
#define BIND_VP8LDecoder_rescaler_FIELD_READER FALSE
#define BIND_VP8LDecoder_rescaler_FIELD_WRITER FALSE
#define BIND_VP8LDecoder_rescaler_memory_FIELD_READER FALSE
#define BIND_VP8LDecoder_rescaler_memory_FIELD_WRITER FALSE
#define BIND_VP8LDecoder_state__FIELD_READER FALSE
#define BIND_VP8LDecoder_state__FIELD_WRITER FALSE
#define BIND_VP8LDecoder_status__FIELD_READER FALSE
#define BIND_VP8LDecoder_status__FIELD_WRITER FALSE
#define BIND_VP8LDecoder_transforms__FIELD_READER FALSE
#define BIND_VP8LDecoder_transforms__FIELD_WRITER FALSE
#define BIND_VP8LDecoder_transforms_seen__FIELD_READER FALSE
#define BIND_VP8LDecoder_transforms_seen__FIELD_WRITER FALSE
#define BIND_VP8LDecoder_width__FIELD_READER FALSE
#define BIND_VP8LDecoder_width__FIELD_WRITER FALSE

#define BIND_VP8LEncoder_TYPE TRUE
#define BIND_VP8LEncoder_INITIALIZE FALSE
#define BIND_VP8LEncoder_argb__FIELD_READER FALSE
#define BIND_VP8LEncoder_argb__FIELD_WRITER FALSE
#define BIND_VP8LEncoder_argb_scratch__FIELD_READER FALSE
#define BIND_VP8LEncoder_argb_scratch__FIELD_WRITER FALSE
#define BIND_VP8LEncoder_cache_bits__FIELD_READER FALSE
#define BIND_VP8LEncoder_cache_bits__FIELD_WRITER FALSE
#define BIND_VP8LEncoder_config__FIELD_READER FALSE
#define BIND_VP8LEncoder_config__FIELD_WRITER FALSE
#define BIND_VP8LEncoder_current_width__FIELD_READER FALSE
#define BIND_VP8LEncoder_current_width__FIELD_WRITER FALSE
#define BIND_VP8LEncoder_histo_bits__FIELD_READER FALSE
#define BIND_VP8LEncoder_histo_bits__FIELD_WRITER FALSE
#define BIND_VP8LEncoder_palette__FIELD_READER FALSE
#define BIND_VP8LEncoder_palette__FIELD_WRITER FALSE
#define BIND_VP8LEncoder_palette_size__FIELD_READER FALSE
#define BIND_VP8LEncoder_palette_size__FIELD_WRITER FALSE
#define BIND_VP8LEncoder_pic__FIELD_READER FALSE
#define BIND_VP8LEncoder_pic__FIELD_WRITER FALSE
#define BIND_VP8LEncoder_transform_bits__FIELD_READER FALSE
#define BIND_VP8LEncoder_transform_bits__FIELD_WRITER FALSE
#define BIND_VP8LEncoder_transform_data__FIELD_READER FALSE
#define BIND_VP8LEncoder_transform_data__FIELD_WRITER FALSE
#define BIND_VP8LEncoder_use_cross_color__FIELD_READER FALSE
#define BIND_VP8LEncoder_use_cross_color__FIELD_WRITER FALSE
#define BIND_VP8LEncoder_use_palette__FIELD_READER FALSE
#define BIND_VP8LEncoder_use_palette__FIELD_WRITER FALSE
#define BIND_VP8LEncoder_use_predict__FIELD_READER FALSE
#define BIND_VP8LEncoder_use_predict__FIELD_WRITER FALSE
#define BIND_VP8LEncoder_use_subtract_green__FIELD_READER FALSE
#define BIND_VP8LEncoder_use_subtract_green__FIELD_WRITER FALSE

#define BIND_VP8LHistogram_TYPE TRUE
#define BIND_VP8LHistogram_INITIALIZE FALSE
#define BIND_VP8LHistogram_alpha__FIELD_READER FALSE
#define BIND_VP8LHistogram_alpha__FIELD_WRITER FALSE
#define BIND_VP8LHistogram_bit_cost__FIELD_READER FALSE
#define BIND_VP8LHistogram_bit_cost__FIELD_WRITER FALSE
#define BIND_VP8LHistogram_blue__FIELD_READER FALSE
#define BIND_VP8LHistogram_blue__FIELD_WRITER FALSE
#define BIND_VP8LHistogram_distance__FIELD_READER FALSE
#define BIND_VP8LHistogram_distance__FIELD_WRITER FALSE
#define BIND_VP8LHistogram_literal__FIELD_READER FALSE
#define BIND_VP8LHistogram_literal__FIELD_WRITER FALSE
#define BIND_VP8LHistogram_palette_code_bits__FIELD_READER FALSE
#define BIND_VP8LHistogram_palette_code_bits__FIELD_WRITER FALSE
#define BIND_VP8LHistogram_red__FIELD_READER FALSE
#define BIND_VP8LHistogram_red__FIELD_WRITER FALSE

#define BIND_VP8LHistogramSet_TYPE TRUE
#define BIND_VP8LHistogramSet_INITIALIZE FALSE
#define BIND_VP8LHistogramSet_histograms_FIELD_READER FALSE
#define BIND_VP8LHistogramSet_histograms_FIELD_WRITER FALSE
#define BIND_VP8LHistogramSet_max_size_FIELD_READER FALSE
#define BIND_VP8LHistogramSet_max_size_FIELD_WRITER FALSE
#define BIND_VP8LHistogramSet_size_FIELD_READER FALSE
#define BIND_VP8LHistogramSet_size_FIELD_WRITER FALSE

#define BIND_VP8LMetadata_TYPE TRUE
#define BIND_VP8LMetadata_INITIALIZE FALSE
#define BIND_VP8LMetadata_color_cache__FIELD_READER FALSE
#define BIND_VP8LMetadata_color_cache__FIELD_WRITER FALSE
#define BIND_VP8LMetadata_color_cache_size__FIELD_READER FALSE
#define BIND_VP8LMetadata_color_cache_size__FIELD_WRITER FALSE
#define BIND_VP8LMetadata_htree_groups__FIELD_READER FALSE
#define BIND_VP8LMetadata_htree_groups__FIELD_WRITER FALSE
#define BIND_VP8LMetadata_huffman_image__FIELD_READER FALSE
#define BIND_VP8LMetadata_huffman_image__FIELD_WRITER FALSE
#define BIND_VP8LMetadata_huffman_mask__FIELD_READER FALSE
#define BIND_VP8LMetadata_huffman_mask__FIELD_WRITER FALSE
#define BIND_VP8LMetadata_huffman_subsample_bits__FIELD_READER FALSE
#define BIND_VP8LMetadata_huffman_subsample_bits__FIELD_WRITER FALSE
#define BIND_VP8LMetadata_huffman_xsize__FIELD_READER FALSE
#define BIND_VP8LMetadata_huffman_xsize__FIELD_WRITER FALSE
#define BIND_VP8LMetadata_num_htree_groups__FIELD_READER FALSE
#define BIND_VP8LMetadata_num_htree_groups__FIELD_WRITER FALSE

#define BIND_VP8MB_TYPE TRUE
#define BIND_VP8MB_INITIALIZE FALSE
#define BIND_VP8MB_nz__FIELD_READER FALSE
#define BIND_VP8MB_nz__FIELD_WRITER FALSE
#define BIND_VP8MB_nz_dc__FIELD_READER FALSE
#define BIND_VP8MB_nz_dc__FIELD_WRITER FALSE

#define BIND_VP8MBInfo_TYPE TRUE
#define BIND_VP8MBInfo_INITIALIZE FALSE
#define BIND_VP8MBInfo_alpha__FIELD_READER FALSE
#define BIND_VP8MBInfo_alpha__FIELD_WRITER FALSE
#define BIND_VP8MBInfo_segment__FIELD_READER FALSE
#define BIND_VP8MBInfo_segment__FIELD_WRITER FALSE
#define BIND_VP8MBInfo_skip__FIELD_READER FALSE
#define BIND_VP8MBInfo_skip__FIELD_WRITER FALSE
#define BIND_VP8MBInfo_type__FIELD_READER FALSE
#define BIND_VP8MBInfo_type__FIELD_WRITER FALSE
#define BIND_VP8MBInfo_uv_mode__FIELD_READER FALSE
#define BIND_VP8MBInfo_uv_mode__FIELD_WRITER FALSE

#define BIND_VP8ModeScore_TYPE TRUE
#define BIND_VP8ModeScore_INITIALIZE FALSE
#define BIND_VP8ModeScore_D_FIELD_READER FALSE
#define BIND_VP8ModeScore_D_FIELD_WRITER FALSE
#define BIND_VP8ModeScore_R_FIELD_READER FALSE
#define BIND_VP8ModeScore_R_FIELD_WRITER FALSE
#define BIND_VP8ModeScore_SD_FIELD_READER FALSE
#define BIND_VP8ModeScore_SD_FIELD_WRITER FALSE
#define BIND_VP8ModeScore_mode_i16_FIELD_READER FALSE
#define BIND_VP8ModeScore_mode_i16_FIELD_WRITER FALSE
#define BIND_VP8ModeScore_mode_uv_FIELD_READER FALSE
#define BIND_VP8ModeScore_mode_uv_FIELD_WRITER FALSE
#define BIND_VP8ModeScore_modes_i4_FIELD_READER FALSE
#define BIND_VP8ModeScore_modes_i4_FIELD_WRITER FALSE
#define BIND_VP8ModeScore_nz_FIELD_READER FALSE
#define BIND_VP8ModeScore_nz_FIELD_WRITER FALSE
#define BIND_VP8ModeScore_score_FIELD_READER FALSE
#define BIND_VP8ModeScore_score_FIELD_WRITER FALSE
#define BIND_VP8ModeScore_uv_levels_FIELD_READER FALSE
#define BIND_VP8ModeScore_uv_levels_FIELD_WRITER FALSE
#define BIND_VP8ModeScore_y_ac_levels_FIELD_READER FALSE
#define BIND_VP8ModeScore_y_ac_levels_FIELD_WRITER FALSE
#define BIND_VP8ModeScore_y_dc_levels_FIELD_READER FALSE
#define BIND_VP8ModeScore_y_dc_levels_FIELD_WRITER FALSE

#define BIND_VP8PictureHeader_TYPE TRUE
#define BIND_VP8PictureHeader_INITIALIZE FALSE
#define BIND_VP8PictureHeader_clamp_type__FIELD_READER FALSE
#define BIND_VP8PictureHeader_clamp_type__FIELD_WRITER FALSE
#define BIND_VP8PictureHeader_colorspace__FIELD_READER FALSE
#define BIND_VP8PictureHeader_colorspace__FIELD_WRITER FALSE
#define BIND_VP8PictureHeader_height__FIELD_READER FALSE
#define BIND_VP8PictureHeader_height__FIELD_WRITER FALSE
#define BIND_VP8PictureHeader_width__FIELD_READER FALSE
#define BIND_VP8PictureHeader_width__FIELD_WRITER FALSE
#define BIND_VP8PictureHeader_xscale__FIELD_READER FALSE
#define BIND_VP8PictureHeader_xscale__FIELD_WRITER FALSE
#define BIND_VP8PictureHeader_yscale__FIELD_READER FALSE
#define BIND_VP8PictureHeader_yscale__FIELD_WRITER FALSE

#define BIND_VP8Proba_TYPE TRUE
#define BIND_VP8Proba_INITIALIZE FALSE
#define BIND_VP8Proba_coeffs__FIELD_READER FALSE
#define BIND_VP8Proba_coeffs__FIELD_WRITER FALSE
#define BIND_VP8Proba_coeffs__FIELD_READER FALSE
#define BIND_VP8Proba_coeffs__FIELD_WRITER FALSE
#define BIND_VP8Proba_dirty__FIELD_READER FALSE
#define BIND_VP8Proba_dirty__FIELD_WRITER FALSE
#define BIND_VP8Proba_level_cost__FIELD_READER FALSE
#define BIND_VP8Proba_level_cost__FIELD_WRITER FALSE
#define BIND_VP8Proba_nb_skip__FIELD_READER FALSE
#define BIND_VP8Proba_nb_skip__FIELD_WRITER FALSE
#define BIND_VP8Proba_segments__FIELD_READER FALSE
#define BIND_VP8Proba_segments__FIELD_WRITER FALSE
#define BIND_VP8Proba_segments__FIELD_READER FALSE
#define BIND_VP8Proba_segments__FIELD_WRITER FALSE
#define BIND_VP8Proba_skip_proba__FIELD_READER FALSE
#define BIND_VP8Proba_skip_proba__FIELD_WRITER FALSE
#define BIND_VP8Proba_stats__FIELD_READER FALSE
#define BIND_VP8Proba_stats__FIELD_WRITER FALSE
#define BIND_VP8Proba_use_skip_proba__FIELD_READER FALSE
#define BIND_VP8Proba_use_skip_proba__FIELD_WRITER FALSE

#define BIND_VP8QuantMatrix_TYPE TRUE
#define BIND_VP8QuantMatrix_INITIALIZE FALSE
#define BIND_VP8QuantMatrix_uv_mat__FIELD_READER FALSE
#define BIND_VP8QuantMatrix_uv_mat__FIELD_WRITER FALSE
#define BIND_VP8QuantMatrix_y1_mat__FIELD_READER FALSE
#define BIND_VP8QuantMatrix_y1_mat__FIELD_WRITER FALSE
#define BIND_VP8QuantMatrix_y2_mat__FIELD_READER FALSE
#define BIND_VP8QuantMatrix_y2_mat__FIELD_WRITER FALSE

#define BIND_VP8SegmentHeader_TYPE TRUE
#define BIND_VP8SegmentHeader_INITIALIZE FALSE
#define BIND_VP8SegmentHeader_absolute_delta__FIELD_READER FALSE
#define BIND_VP8SegmentHeader_absolute_delta__FIELD_WRITER FALSE
#define BIND_VP8SegmentHeader_filter_strength__FIELD_READER FALSE
#define BIND_VP8SegmentHeader_filter_strength__FIELD_WRITER FALSE
#define BIND_VP8SegmentHeader_num_segments__FIELD_READER FALSE
#define BIND_VP8SegmentHeader_num_segments__FIELD_WRITER FALSE
#define BIND_VP8SegmentHeader_quantizer__FIELD_READER FALSE
#define BIND_VP8SegmentHeader_quantizer__FIELD_WRITER FALSE
#define BIND_VP8SegmentHeader_size__FIELD_READER FALSE
#define BIND_VP8SegmentHeader_size__FIELD_WRITER FALSE
#define BIND_VP8SegmentHeader_update_map__FIELD_READER FALSE
#define BIND_VP8SegmentHeader_update_map__FIELD_WRITER FALSE
#define BIND_VP8SegmentHeader_update_map__FIELD_READER FALSE
#define BIND_VP8SegmentHeader_update_map__FIELD_WRITER FALSE
#define BIND_VP8SegmentHeader_use_segment__FIELD_READER FALSE
#define BIND_VP8SegmentHeader_use_segment__FIELD_WRITER FALSE

#define BIND_VP8SegmentInfo_TYPE TRUE
#define BIND_VP8SegmentInfo_INITIALIZE FALSE
#define BIND_VP8SegmentInfo_alpha__FIELD_READER FALSE
#define BIND_VP8SegmentInfo_alpha__FIELD_WRITER FALSE
#define BIND_VP8SegmentInfo_beta__FIELD_READER FALSE
#define BIND_VP8SegmentInfo_beta__FIELD_WRITER FALSE
#define BIND_VP8SegmentInfo_fstrength__FIELD_READER FALSE
#define BIND_VP8SegmentInfo_fstrength__FIELD_WRITER FALSE
#define BIND_VP8SegmentInfo_lambda_i16__FIELD_READER FALSE
#define BIND_VP8SegmentInfo_lambda_i16__FIELD_WRITER FALSE
#define BIND_VP8SegmentInfo_lambda_i4__FIELD_READER FALSE
#define BIND_VP8SegmentInfo_lambda_i4__FIELD_WRITER FALSE
#define BIND_VP8SegmentInfo_lambda_mode__FIELD_READER FALSE
#define BIND_VP8SegmentInfo_lambda_mode__FIELD_WRITER FALSE
#define BIND_VP8SegmentInfo_lambda_trellis__FIELD_READER FALSE
#define BIND_VP8SegmentInfo_lambda_trellis__FIELD_WRITER FALSE
#define BIND_VP8SegmentInfo_lambda_trellis_i16__FIELD_READER FALSE
#define BIND_VP8SegmentInfo_lambda_trellis_i16__FIELD_WRITER FALSE
#define BIND_VP8SegmentInfo_lambda_trellis_i4__FIELD_READER FALSE
#define BIND_VP8SegmentInfo_lambda_trellis_i4__FIELD_WRITER FALSE
#define BIND_VP8SegmentInfo_lambda_trellis_uv__FIELD_READER FALSE
#define BIND_VP8SegmentInfo_lambda_trellis_uv__FIELD_WRITER FALSE
#define BIND_VP8SegmentInfo_lambda_uv__FIELD_READER FALSE
#define BIND_VP8SegmentInfo_lambda_uv__FIELD_WRITER FALSE
#define BIND_VP8SegmentInfo_quant__FIELD_READER FALSE
#define BIND_VP8SegmentInfo_quant__FIELD_WRITER FALSE
#define BIND_VP8SegmentInfo_tlambda__FIELD_READER FALSE
#define BIND_VP8SegmentInfo_tlambda__FIELD_WRITER FALSE
#define BIND_VP8SegmentInfo_uv__FIELD_READER FALSE
#define BIND_VP8SegmentInfo_uv__FIELD_WRITER FALSE
#define BIND_VP8SegmentInfo_y1__FIELD_READER FALSE
#define BIND_VP8SegmentInfo_y1__FIELD_WRITER FALSE
#define BIND_VP8SegmentInfo_y2__FIELD_READER FALSE
#define BIND_VP8SegmentInfo_y2__FIELD_WRITER FALSE

#define BIND_VP8TBuffer_TYPE TRUE
#define BIND_VP8TBuffer_INITIALIZE FALSE
#define BIND_VP8TBuffer_error__FIELD_READER FALSE
#define BIND_VP8TBuffer_error__FIELD_WRITER FALSE
#define BIND_VP8TBuffer_last_page__FIELD_READER FALSE
#define BIND_VP8TBuffer_last_page__FIELD_WRITER FALSE
#define BIND_VP8TBuffer_left__FIELD_READER FALSE
#define BIND_VP8TBuffer_left__FIELD_WRITER FALSE
#define BIND_VP8TBuffer_pages__FIELD_READER FALSE
#define BIND_VP8TBuffer_pages__FIELD_WRITER FALSE
#define BIND_VP8TBuffer_tokens__FIELD_READER FALSE
#define BIND_VP8TBuffer_tokens__FIELD_WRITER FALSE

#define BIND_VP8ThreadContext_TYPE TRUE
#define BIND_VP8ThreadContext_INITIALIZE FALSE
#define BIND_VP8ThreadContext_f_info__FIELD_READER FALSE
#define BIND_VP8ThreadContext_f_info__FIELD_WRITER FALSE
#define BIND_VP8ThreadContext_filter_row__FIELD_READER FALSE
#define BIND_VP8ThreadContext_filter_row__FIELD_WRITER FALSE
#define BIND_VP8ThreadContext_id__FIELD_READER FALSE
#define BIND_VP8ThreadContext_id__FIELD_WRITER FALSE
#define BIND_VP8ThreadContext_io__FIELD_READER FALSE
#define BIND_VP8ThreadContext_io__FIELD_WRITER FALSE
#define BIND_VP8ThreadContext_mb_y__FIELD_READER FALSE
#define BIND_VP8ThreadContext_mb_y__FIELD_WRITER FALSE

#define BIND_WebPHeaderStructure_TYPE TRUE
#define BIND_WebPHeaderStructure_INITIALIZE FALSE
#define BIND_WebPHeaderStructure_alpha_data_FIELD_READER FALSE
#define BIND_WebPHeaderStructure_alpha_data_FIELD_WRITER FALSE
#define BIND_WebPHeaderStructure_alpha_data_size_FIELD_READER FALSE
#define BIND_WebPHeaderStructure_alpha_data_size_FIELD_WRITER FALSE
#define BIND_WebPHeaderStructure_compressed_size_FIELD_READER FALSE
#define BIND_WebPHeaderStructure_compressed_size_FIELD_WRITER FALSE
#define BIND_WebPHeaderStructure_data_FIELD_READER FALSE
#define BIND_WebPHeaderStructure_data_FIELD_WRITER FALSE
#define BIND_WebPHeaderStructure_data_size_FIELD_READER FALSE
#define BIND_WebPHeaderStructure_data_size_FIELD_WRITER FALSE
#define BIND_WebPHeaderStructure_is_lossless_FIELD_READER FALSE
#define BIND_WebPHeaderStructure_is_lossless_FIELD_WRITER FALSE
#define BIND_WebPHeaderStructure_offset_FIELD_READER FALSE
#define BIND_WebPHeaderStructure_offset_FIELD_WRITER FALSE
#define BIND_WebPHeaderStructure_riff_size_FIELD_READER FALSE
#define BIND_WebPHeaderStructure_riff_size_FIELD_WRITER FALSE

#define BIND_WebPRescaler_TYPE TRUE
#define BIND_WebPRescaler_INITIALIZE FALSE
#define BIND_WebPRescaler_dst_FIELD_READER FALSE
#define BIND_WebPRescaler_dst_FIELD_WRITER FALSE
#define BIND_WebPRescaler_dst_height_FIELD_READER FALSE
#define BIND_WebPRescaler_dst_height_FIELD_WRITER FALSE
#define BIND_WebPRescaler_dst_stride_FIELD_READER FALSE
#define BIND_WebPRescaler_dst_stride_FIELD_WRITER FALSE
#define BIND_WebPRescaler_dst_width_FIELD_READER FALSE
#define BIND_WebPRescaler_dst_width_FIELD_WRITER FALSE
#define BIND_WebPRescaler_frow_FIELD_READER FALSE
#define BIND_WebPRescaler_frow_FIELD_WRITER FALSE
#define BIND_WebPRescaler_fx_scale_FIELD_READER FALSE
#define BIND_WebPRescaler_fx_scale_FIELD_WRITER FALSE
#define BIND_WebPRescaler_fxy_scale_FIELD_READER FALSE
#define BIND_WebPRescaler_fxy_scale_FIELD_WRITER FALSE
#define BIND_WebPRescaler_fy_scale_FIELD_READER FALSE
#define BIND_WebPRescaler_fy_scale_FIELD_WRITER FALSE
#define BIND_WebPRescaler_irow_FIELD_READER FALSE
#define BIND_WebPRescaler_irow_FIELD_WRITER FALSE
#define BIND_WebPRescaler_num_channels_FIELD_READER FALSE
#define BIND_WebPRescaler_num_channels_FIELD_WRITER FALSE
#define BIND_WebPRescaler_src_height_FIELD_READER FALSE
#define BIND_WebPRescaler_src_height_FIELD_WRITER FALSE
#define BIND_WebPRescaler_src_width_FIELD_READER FALSE
#define BIND_WebPRescaler_src_width_FIELD_WRITER FALSE
#define BIND_WebPRescaler_x_add_FIELD_READER FALSE
#define BIND_WebPRescaler_x_add_FIELD_WRITER FALSE
#define BIND_WebPRescaler_x_expand_FIELD_READER FALSE
#define BIND_WebPRescaler_x_expand_FIELD_WRITER FALSE
#define BIND_WebPRescaler_x_sub_FIELD_READER FALSE
#define BIND_WebPRescaler_x_sub_FIELD_WRITER FALSE
#define BIND_WebPRescaler_y_accum_FIELD_READER FALSE
#define BIND_WebPRescaler_y_accum_FIELD_WRITER FALSE
#define BIND_WebPRescaler_y_add_FIELD_READER FALSE
#define BIND_WebPRescaler_y_add_FIELD_WRITER FALSE
#define BIND_WebPRescaler_y_sub_FIELD_READER FALSE
#define BIND_WebPRescaler_y_sub_FIELD_WRITER FALSE

#define BIND_WebPWorker_TYPE TRUE
#define BIND_WebPWorker_INITIALIZE FALSE
#define BIND_WebPWorker_data1_FIELD_READER FALSE
#define BIND_WebPWorker_data1_FIELD_WRITER FALSE
#define BIND_WebPWorker_data2_FIELD_READER FALSE
#define BIND_WebPWorker_data2_FIELD_WRITER FALSE
#define BIND_WebPWorker_had_error_FIELD_READER FALSE
#define BIND_WebPWorker_had_error_FIELD_WRITER FALSE
#define BIND_WebPWorker_hook_FIELD_READER FALSE
#define BIND_WebPWorker_hook_FIELD_WRITER FALSE
#define BIND_WebPWorker_status__FIELD_READER FALSE
#define BIND_WebPWorker_status__FIELD_WRITER FALSE

#define BIND_XINPUTGAMEPADEX_TYPE TRUE
#define BIND_XINPUTGAMEPADEX_INITIALIZE FALSE
#define BIND_XINPUTGAMEPADEX_bLeftTrigger_FIELD_READER FALSE
#define BIND_XINPUTGAMEPADEX_bLeftTrigger_FIELD_WRITER FALSE
#define BIND_XINPUTGAMEPADEX_bRightTrigger_FIELD_READER FALSE
#define BIND_XINPUTGAMEPADEX_bRightTrigger_FIELD_WRITER FALSE
#define BIND_XINPUTGAMEPADEX_dwPaddingReserved_FIELD_READER FALSE
#define BIND_XINPUTGAMEPADEX_dwPaddingReserved_FIELD_WRITER FALSE
#define BIND_XINPUTGAMEPADEX_sThumbLX_FIELD_READER FALSE
#define BIND_XINPUTGAMEPADEX_sThumbLX_FIELD_WRITER FALSE
#define BIND_XINPUTGAMEPADEX_sThumbLY_FIELD_READER FALSE
#define BIND_XINPUTGAMEPADEX_sThumbLY_FIELD_WRITER FALSE
#define BIND_XINPUTGAMEPADEX_sThumbRX_FIELD_READER FALSE
#define BIND_XINPUTGAMEPADEX_sThumbRX_FIELD_WRITER FALSE
#define BIND_XINPUTGAMEPADEX_sThumbRY_FIELD_READER FALSE
#define BIND_XINPUTGAMEPADEX_sThumbRY_FIELD_WRITER FALSE
#define BIND_XINPUTGAMEPADEX_wButtons_FIELD_READER FALSE
#define BIND_XINPUTGAMEPADEX_wButtons_FIELD_WRITER FALSE

#define BIND_XINPUTSTATEEX_TYPE TRUE
#define BIND_XINPUTSTATEEX_INITIALIZE FALSE
#define BIND_XINPUTSTATEEX_Gamepad_FIELD_READER FALSE
#define BIND_XINPUTSTATEEX_Gamepad_FIELD_WRITER FALSE
#define BIND_XINPUTSTATEEX_dwPacketNumber_FIELD_READER FALSE
#define BIND_XINPUTSTATEEX_dwPacketNumber_FIELD_WRITER FALSE

#define BIND_ZipFileinfo_TYPE TRUE
#define BIND_ZipFileinfo_INITIALIZE FALSE
#define BIND_ZipFileinfo_dosDate_FIELD_READER FALSE
#define BIND_ZipFileinfo_dosDate_FIELD_WRITER FALSE
#define BIND_ZipFileinfo_external_fa_FIELD_READER FALSE
#define BIND_ZipFileinfo_external_fa_FIELD_WRITER FALSE
#define BIND_ZipFileinfo_internal_fa_FIELD_READER FALSE
#define BIND_ZipFileinfo_internal_fa_FIELD_WRITER FALSE
#define BIND_ZipFileinfo_tmz_date_FIELD_READER FALSE
#define BIND_ZipFileinfo_tmz_date_FIELD_WRITER FALSE

/*
 * Global Function Options
 * -----------------------
 *
 * Set these macros to TRUE to enable bindings for these functions.
 * They are disabled initially so that bindings may be added and tested
 * incrementally. The generated bindings are a good start, but they
 * will need to be verified and, sometimes, customized.
 */

#define BIND_IMG_Init_FUNCTION TRUE
#define BIND_IMG_Linked_Version_FUNCTION FALSE
#define BIND_IMG_LoadBMP_RW_FUNCTION TRUE
#define BIND_IMG_LoadCUR_RW_FUNCTION TRUE
#define BIND_IMG_LoadGIF_RW_FUNCTION TRUE
#define BIND_IMG_LoadICO_RW_FUNCTION TRUE
#define BIND_IMG_LoadJPG_RW_FUNCTION TRUE
#define BIND_IMG_LoadLBM_RW_FUNCTION TRUE
#define BIND_IMG_LoadPCX_RW_FUNCTION TRUE
#define BIND_IMG_LoadPNG_RW_FUNCTION TRUE
#define BIND_IMG_LoadPNM_RW_FUNCTION TRUE
#define BIND_IMG_LoadTGA_RW_FUNCTION TRUE
#define BIND_IMG_LoadTIF_RW_FUNCTION TRUE
#define BIND_IMG_LoadTextureTyped_RW_FUNCTION TRUE
#define BIND_IMG_LoadTexture_FUNCTION TRUE
#define BIND_IMG_LoadTexture_RW_FUNCTION TRUE
#define BIND_IMG_LoadTyped_RW_FUNCTION TRUE
#define BIND_IMG_LoadWEBP_RW_FUNCTION TRUE
#define BIND_IMG_LoadXCF_RW_FUNCTION TRUE
#define BIND_IMG_LoadXPM_RW_FUNCTION TRUE
#define BIND_IMG_LoadXV_RW_FUNCTION TRUE
#define BIND_IMG_Load_FUNCTION TRUE
#define BIND_IMG_Load_RW_FUNCTION TRUE
#define BIND_IMG_Quit_FUNCTION TRUE
#define BIND_IMG_SavePNG_FUNCTION TRUE
#define BIND_IMG_SavePNG_RW_FUNCTION TRUE
#define BIND_IMG_isBMP_FUNCTION TRUE
#define BIND_IMG_isCUR_FUNCTION TRUE
#define BIND_IMG_isGIF_FUNCTION TRUE
#define BIND_IMG_isICO_FUNCTION TRUE
#define BIND_IMG_isJPG_FUNCTION TRUE
#define BIND_IMG_isLBM_FUNCTION TRUE
#define BIND_IMG_isPCX_FUNCTION TRUE
#define BIND_IMG_isPNG_FUNCTION TRUE
#define BIND_IMG_isPNM_FUNCTION TRUE
#define BIND_IMG_isTIF_FUNCTION TRUE
#define BIND_IMG_isWEBP_FUNCTION TRUE
#define BIND_IMG_isXCF_FUNCTION TRUE
#define BIND_IMG_isXPM_FUNCTION TRUE
#define BIND_IMG_isXV_FUNCTION TRUE
#define BIND_SDL_AddEventWatch_FUNCTION FALSE
#define BIND_SDL_AddHintCallback_FUNCTION FALSE
#define BIND_SDL_AddTimer_FUNCTION FALSE
#define BIND_SDL_AllocFormat_FUNCTION TRUE
#define BIND_SDL_AllocPalette_FUNCTION TRUE
#define BIND_SDL_AllocRW_FUNCTION TRUE
#define BIND_SDL_AtomicAdd_FUNCTION TRUE
#define BIND_SDL_AtomicCASPtr_FUNCTION FALSE
#define BIND_SDL_AtomicCAS_FUNCTION TRUE
#define BIND_SDL_AtomicGetPtr_FUNCTION FALSE
#define BIND_SDL_AtomicGet_FUNCTION TRUE
#define BIND_SDL_AtomicLock_FUNCTION FALSE
#define BIND_SDL_AtomicSetPtr_FUNCTION FALSE
#define BIND_SDL_AtomicSet_FUNCTION TRUE
#define BIND_SDL_AtomicTryLock_FUNCTION FALSE
#define BIND_SDL_AtomicUnlock_FUNCTION FALSE
#define BIND_SDL_AudioInit_FUNCTION TRUE
#define BIND_SDL_AudioQuit_FUNCTION TRUE
#define BIND_SDL_BuildAudioCVT_FUNCTION TRUE
#define BIND_SDL_CalculateGammaRamp_FUNCTION FALSE
#define BIND_SDL_ClearError_FUNCTION TRUE
#define BIND_SDL_ClearHints_FUNCTION TRUE
#define BIND_SDL_CloseAudioDevice_FUNCTION TRUE
#define BIND_SDL_CloseAudio_FUNCTION TRUE
#define BIND_SDL_CondBroadcast_FUNCTION TRUE
#define BIND_SDL_CondSignal_FUNCTION TRUE
#define BIND_SDL_CondWaitTimeout_FUNCTION TRUE
#define BIND_SDL_CondWait_FUNCTION TRUE
#define BIND_SDL_ConvertAudio_FUNCTION TRUE
#define BIND_SDL_ConvertPixels_FUNCTION FALSE
#define BIND_SDL_ConvertSurfaceFormat_FUNCTION TRUE
#define BIND_SDL_ConvertSurface_FUNCTION TRUE
#define BIND_SDL_CreateColorCursor_FUNCTION TRUE
#define BIND_SDL_CreateCond_FUNCTION TRUE
#define BIND_SDL_CreateCursor_FUNCTION FALSE
#define BIND_SDL_CreateMutex_FUNCTION TRUE
#define BIND_SDL_CreateRGBSurfaceFrom_FUNCTION FALSE
#define BIND_SDL_CreateRGBSurface_FUNCTION TRUE
#define BIND_SDL_CreateRenderer_FUNCTION TRUE
#define BIND_SDL_CreateSemaphore_FUNCTION TRUE
#define BIND_SDL_CreateShapedWindow_FUNCTION TRUE
#define BIND_SDL_CreateSoftwareRenderer_FUNCTION TRUE
#define BIND_SDL_CreateSystemCursor_FUNCTION FALSE
#define BIND_SDL_CreateTextureFromSurface_FUNCTION TRUE
#define BIND_SDL_CreateTexture_FUNCTION TRUE
#define BIND_SDL_CreateThread_FUNCTION FALSE
#define BIND_SDL_CreateWindowAndRenderer_FUNCTION FALSE
#define BIND_SDL_CreateWindowFrom_FUNCTION FALSE
#define BIND_SDL_CreateWindow_FUNCTION TRUE
#define BIND_SDL_DelEventWatch_FUNCTION FALSE
#define BIND_SDL_DelHintCallback_FUNCTION FALSE
#define BIND_SDL_Delay_FUNCTION TRUE
#define BIND_SDL_DestroyCond_FUNCTION TRUE
#define BIND_SDL_DestroyMutex_FUNCTION TRUE
#define BIND_SDL_DestroyRenderer_FUNCTION TRUE
#define BIND_SDL_DestroySemaphore_FUNCTION TRUE
#define BIND_SDL_DestroyTexture_FUNCTION TRUE
#define BIND_SDL_DestroyWindow_FUNCTION TRUE
#define BIND_SDL_DetachThread_FUNCTION TRUE
#define BIND_SDL_DisableScreenSaver_FUNCTION TRUE
#define BIND_SDL_EnableScreenSaver_FUNCTION TRUE
#define BIND_SDL_EnclosePoints_FUNCTION TRUE
#define BIND_SDL_Error_FUNCTION FALSE
#define BIND_SDL_EventState_FUNCTION TRUE
#define BIND_SDL_FillRect_FUNCTION TRUE
#define BIND_SDL_FillRects_FUNCTION TRUE
#define BIND_SDL_FilterEvents_FUNCTION FALSE
#define BIND_SDL_FlushEvent_FUNCTION TRUE
#define BIND_SDL_FlushEvents_FUNCTION TRUE
#define BIND_SDL_FreeCursor_FUNCTION TRUE
#define BIND_SDL_FreeFormat_FUNCTION TRUE
#define BIND_SDL_FreePalette_FUNCTION TRUE
#define BIND_SDL_FreeRW_FUNCTION TRUE
#define BIND_SDL_FreeSurface_FUNCTION TRUE
#define BIND_SDL_FreeWAV_FUNCTION FALSE
#define BIND_SDL_GL_BindTexture_FUNCTION FALSE
#define BIND_SDL_GL_CreateContext_FUNCTION FALSE
#define BIND_SDL_GL_DeleteContext_FUNCTION FALSE
#define BIND_SDL_GL_ExtensionSupported_FUNCTION TRUE
#define BIND_SDL_GL_GetAttribute_FUNCTION FALSE
#define BIND_SDL_GL_GetCurrentContext_FUNCTION FALSE
#define BIND_SDL_GL_GetCurrentWindow_FUNCTION TRUE
#define BIND_SDL_GL_GetDrawableSize_FUNCTION FALSE
#define BIND_SDL_GL_GetProcAddress_FUNCTION FALSE
#define BIND_SDL_GL_GetSwapInterval_FUNCTION TRUE
#define BIND_SDL_GL_LoadLibrary_FUNCTION TRUE
#define BIND_SDL_GL_MakeCurrent_FUNCTION FALSE
#define BIND_SDL_GL_ResetAttributes_FUNCTION TRUE
#define BIND_SDL_GL_SetAttribute_FUNCTION FALSE
#define BIND_SDL_GL_SetSwapInterval_FUNCTION TRUE
#define BIND_SDL_GL_SwapWindow_FUNCTION TRUE
#define BIND_SDL_GL_UnbindTexture_FUNCTION TRUE
#define BIND_SDL_GL_UnloadLibrary_FUNCTION TRUE
#define BIND_SDL_GameControllerAddMapping_FUNCTION TRUE
#define BIND_SDL_GameControllerAddMappingsFromRW_FUNCTION TRUE
#define BIND_SDL_GameControllerClose_FUNCTION TRUE
#define BIND_SDL_GameControllerEventState_FUNCTION TRUE
#define BIND_SDL_GameControllerGetAttached_FUNCTION TRUE
#define BIND_SDL_GameControllerGetAxisFromString_FUNCTION FALSE
#define BIND_SDL_GameControllerGetAxis_FUNCTION FALSE
#define BIND_SDL_GameControllerGetBindForAxis_FUNCTION FALSE
#define BIND_SDL_GameControllerGetBindForButton_FUNCTION FALSE
#define BIND_SDL_GameControllerGetButtonFromString_FUNCTION FALSE
#define BIND_SDL_GameControllerGetButton_FUNCTION FALSE
#define BIND_SDL_GameControllerGetJoystick_FUNCTION TRUE
#define BIND_SDL_GameControllerGetStringForAxis_FUNCTION FALSE
#define BIND_SDL_GameControllerGetStringForButton_FUNCTION FALSE
#define BIND_SDL_GameControllerMappingForGUID_FUNCTION TRUE
#define BIND_SDL_GameControllerMapping_FUNCTION TRUE
#define BIND_SDL_GameControllerNameForIndex_FUNCTION TRUE
#define BIND_SDL_GameControllerName_FUNCTION TRUE
#define BIND_SDL_GameControllerOpen_FUNCTION TRUE
#define BIND_SDL_GameControllerUpdate_FUNCTION TRUE
#define BIND_SDL_GetAssertionHandler_FUNCTION FALSE
#define BIND_SDL_GetAssertionReport_FUNCTION FALSE
#define BIND_SDL_GetAudioDeviceName_FUNCTION TRUE
#define BIND_SDL_GetAudioDeviceStatus_FUNCTION FALSE
#define BIND_SDL_GetAudioDriver_FUNCTION TRUE
#define BIND_SDL_GetAudioStatus_FUNCTION FALSE
#define BIND_SDL_GetBasePath_FUNCTION TRUE
#define BIND_SDL_GetCPUCacheLineSize_FUNCTION TRUE
#define BIND_SDL_GetCPUCount_FUNCTION TRUE
#define BIND_SDL_GetClipRect_FUNCTION TRUE
#define BIND_SDL_GetClipboardText_FUNCTION TRUE
#define BIND_SDL_GetClosestDisplayMode_FUNCTION TRUE
#define BIND_SDL_GetColorKey_FUNCTION TRUE
#define BIND_SDL_GetCurrentAudioDriver_FUNCTION TRUE
#define BIND_SDL_GetCurrentDisplayMode_FUNCTION TRUE
#define BIND_SDL_GetCurrentVideoDriver_FUNCTION TRUE
#define BIND_SDL_GetCursor_FUNCTION TRUE
#define BIND_SDL_GetDefaultAssertionHandler_FUNCTION FALSE
#define BIND_SDL_GetDefaultCursor_FUNCTION TRUE
#define BIND_SDL_GetDesktopDisplayMode_FUNCTION TRUE
#define BIND_SDL_GetDisplayBounds_FUNCTION TRUE
#define BIND_SDL_GetDisplayMode_FUNCTION TRUE
#define BIND_SDL_GetDisplayName_FUNCTION TRUE
#define BIND_SDL_GetError_FUNCTION TRUE
#define BIND_SDL_GetEventFilter_FUNCTION FALSE
#define BIND_SDL_GetHint_FUNCTION TRUE
#define BIND_SDL_GetKeyFromName_FUNCTION FALSE
#define BIND_SDL_GetKeyFromScancode_FUNCTION FALSE
#define BIND_SDL_GetKeyName_FUNCTION TRUE
#define BIND_SDL_GetKeyboardFocus_FUNCTION TRUE
#define BIND_SDL_GetKeyboardState_FUNCTION FALSE
#define BIND_SDL_GetModState_FUNCTION FALSE
#define BIND_SDL_GetMouseFocus_FUNCTION TRUE
#define BIND_SDL_GetMouseState_FUNCTION FALSE
#define BIND_SDL_GetNumAudioDevices_FUNCTION TRUE
#define BIND_SDL_GetNumAudioDrivers_FUNCTION TRUE
#define BIND_SDL_GetNumDisplayModes_FUNCTION TRUE
#define BIND_SDL_GetNumRenderDrivers_FUNCTION TRUE
#define BIND_SDL_GetNumTouchDevices_FUNCTION TRUE
#define BIND_SDL_GetNumTouchFingers_FUNCTION TRUE
#define BIND_SDL_GetNumVideoDisplays_FUNCTION TRUE
#define BIND_SDL_GetNumVideoDrivers_FUNCTION TRUE
#define BIND_SDL_GetPerformanceCounter_FUNCTION FALSE
#define BIND_SDL_GetPerformanceFrequency_FUNCTION FALSE
#define BIND_SDL_GetPixelFormatName_FUNCTION TRUE
#define BIND_SDL_GetPlatform_FUNCTION TRUE
#define BIND_SDL_GetPowerInfo_FUNCTION FALSE
#define BIND_SDL_GetPrefPath_FUNCTION TRUE
#define BIND_SDL_GetRGBA_FUNCTION FALSE
#define BIND_SDL_GetRGB_FUNCTION FALSE
#define BIND_SDL_GetRelativeMouseMode_FUNCTION TRUE
#define BIND_SDL_GetRelativeMouseState_FUNCTION FALSE
#define BIND_SDL_GetRenderDrawBlendMode_FUNCTION FALSE
#define BIND_SDL_GetRenderDrawColor_FUNCTION FALSE
#define BIND_SDL_GetRenderDriverInfo_FUNCTION TRUE
#define BIND_SDL_GetRenderTarget_FUNCTION TRUE
#define BIND_SDL_GetRendererInfo_FUNCTION TRUE
#define BIND_SDL_GetRendererOutputSize_FUNCTION FALSE
#define BIND_SDL_GetRenderer_FUNCTION TRUE
#define BIND_SDL_GetRevisionNumber_FUNCTION TRUE
#define BIND_SDL_GetRevision_FUNCTION TRUE
#define BIND_SDL_GetScancodeFromKey_FUNCTION FALSE
#define BIND_SDL_GetScancodeFromName_FUNCTION FALSE
#define BIND_SDL_GetScancodeName_FUNCTION FALSE
#define BIND_SDL_GetShapedWindowMode_FUNCTION TRUE
#define BIND_SDL_GetSurfaceAlphaMod_FUNCTION FALSE
#define BIND_SDL_GetSurfaceBlendMode_FUNCTION FALSE
#define BIND_SDL_GetSurfaceColorMod_FUNCTION FALSE
#define BIND_SDL_GetSystemRAM_FUNCTION TRUE
#define BIND_SDL_GetTextureAlphaMod_FUNCTION FALSE
#define BIND_SDL_GetTextureBlendMode_FUNCTION FALSE
#define BIND_SDL_GetTextureColorMod_FUNCTION FALSE
#define BIND_SDL_GetThreadID_FUNCTION TRUE
#define BIND_SDL_GetThreadName_FUNCTION TRUE
#define BIND_SDL_GetTicks_FUNCTION FALSE
#define BIND_SDL_GetTouchDevice_FUNCTION FALSE
#define BIND_SDL_GetTouchFinger_FUNCTION TRUE
#define BIND_SDL_GetVersion_FUNCTION TRUE
#define BIND_SDL_GetVideoDriver_FUNCTION TRUE
#define BIND_SDL_GetWindowBrightness_FUNCTION TRUE
#define BIND_SDL_GetWindowData_FUNCTION FALSE
#define BIND_SDL_GetWindowDisplayIndex_FUNCTION TRUE
#define BIND_SDL_GetWindowDisplayMode_FUNCTION TRUE
#define BIND_SDL_GetWindowFlags_FUNCTION FALSE
#define BIND_SDL_GetWindowFromID_FUNCTION TRUE
#define BIND_SDL_GetWindowGammaRamp_FUNCTION FALSE
#define BIND_SDL_GetWindowGrab_FUNCTION TRUE
#define BIND_SDL_GetWindowID_FUNCTION FALSE
#define BIND_SDL_GetWindowMaximumSize_FUNCTION FALSE
#define BIND_SDL_GetWindowMinimumSize_FUNCTION FALSE
#define BIND_SDL_GetWindowPixelFormat_FUNCTION FALSE
#define BIND_SDL_GetWindowPosition_FUNCTION FALSE
#define BIND_SDL_GetWindowSize_FUNCTION FALSE
#define BIND_SDL_GetWindowSurface_FUNCTION TRUE
#define BIND_SDL_GetWindowTitle_FUNCTION TRUE
#define BIND_SDL_GetWindowWMInfo_FUNCTION TRUE
#define BIND_SDL_HapticClose_FUNCTION TRUE
#define BIND_SDL_HapticDestroyEffect_FUNCTION TRUE
#define BIND_SDL_HapticEffectSupported_FUNCTION FALSE
#define BIND_SDL_HapticGetEffectStatus_FUNCTION TRUE
#define BIND_SDL_HapticIndex_FUNCTION TRUE
#define BIND_SDL_HapticName_FUNCTION TRUE
#define BIND_SDL_HapticNewEffect_FUNCTION FALSE
#define BIND_SDL_HapticNumAxes_FUNCTION TRUE
#define BIND_SDL_HapticNumEffectsPlaying_FUNCTION TRUE
#define BIND_SDL_HapticNumEffects_FUNCTION TRUE
#define BIND_SDL_HapticOpenFromJoystick_FUNCTION TRUE
#define BIND_SDL_HapticOpenFromMouse_FUNCTION TRUE
#define BIND_SDL_HapticOpen_FUNCTION TRUE
#define BIND_SDL_HapticOpened_FUNCTION TRUE
#define BIND_SDL_HapticPause_FUNCTION TRUE
#define BIND_SDL_HapticQuery_FUNCTION TRUE
#define BIND_SDL_HapticRumbleInit_FUNCTION TRUE
#define BIND_SDL_HapticRumblePlay_FUNCTION TRUE
#define BIND_SDL_HapticRumbleStop_FUNCTION TRUE
#define BIND_SDL_HapticRumbleSupported_FUNCTION TRUE
#define BIND_SDL_HapticRunEffect_FUNCTION TRUE
#define BIND_SDL_HapticSetAutocenter_FUNCTION TRUE
#define BIND_SDL_HapticSetGain_FUNCTION TRUE
#define BIND_SDL_HapticStopAll_FUNCTION TRUE
#define BIND_SDL_HapticStopEffect_FUNCTION TRUE
#define BIND_SDL_HapticUnpause_FUNCTION TRUE
#define BIND_SDL_HapticUpdateEffect_FUNCTION FALSE
#define BIND_SDL_Has3DNow_FUNCTION TRUE
#define BIND_SDL_HasAVX_FUNCTION TRUE
#define BIND_SDL_HasAltiVec_FUNCTION TRUE
#define BIND_SDL_HasClipboardText_FUNCTION TRUE
#define BIND_SDL_HasEvent_FUNCTION TRUE
#define BIND_SDL_HasEvents_FUNCTION TRUE
#define BIND_SDL_HasIntersection_FUNCTION TRUE
#define BIND_SDL_HasMMX_FUNCTION TRUE
#define BIND_SDL_HasRDTSC_FUNCTION TRUE
#define BIND_SDL_HasSSE2_FUNCTION TRUE
#define BIND_SDL_HasSSE3_FUNCTION TRUE
#define BIND_SDL_HasSSE41_FUNCTION TRUE
#define BIND_SDL_HasSSE42_FUNCTION TRUE
#define BIND_SDL_HasSSE_FUNCTION TRUE
#define BIND_SDL_HasScreenKeyboardSupport_FUNCTION TRUE
#define BIND_SDL_HideWindow_FUNCTION TRUE
#define BIND_SDL_InitSubSystem_FUNCTION TRUE
#define BIND_SDL_Init_FUNCTION TRUE
#define BIND_SDL_IntersectRectAndLine_FUNCTION FALSE
#define BIND_SDL_IntersectRect_FUNCTION TRUE
#define BIND_SDL_IsGameController_FUNCTION TRUE
#define BIND_SDL_IsScreenKeyboardShown_FUNCTION TRUE
#define BIND_SDL_IsScreenSaverEnabled_FUNCTION TRUE
#define BIND_SDL_IsShapedWindow_FUNCTION TRUE
#define BIND_SDL_IsTextInputActive_FUNCTION TRUE
#define BIND_SDL_JoystickClose_FUNCTION TRUE
#define BIND_SDL_JoystickEventState_FUNCTION TRUE
#define BIND_SDL_JoystickGetAttached_FUNCTION TRUE
#define BIND_SDL_JoystickGetAxis_FUNCTION FALSE
#define BIND_SDL_JoystickGetBall_FUNCTION FALSE
#define BIND_SDL_JoystickGetButton_FUNCTION FALSE
#define BIND_SDL_JoystickGetDeviceGUID_FUNCTION TRUE
#define BIND_SDL_JoystickGetGUIDFromString_FUNCTION TRUE
#define BIND_SDL_JoystickGetGUIDString_FUNCTION TRUE
#define BIND_SDL_JoystickGetGUID_FUNCTION TRUE
#define BIND_SDL_JoystickGetHat_FUNCTION FALSE
#define BIND_SDL_JoystickInstanceID_FUNCTION FALSE
#define BIND_SDL_JoystickIsHaptic_FUNCTION TRUE
#define BIND_SDL_JoystickNameForIndex_FUNCTION TRUE
#define BIND_SDL_JoystickName_FUNCTION TRUE
#define BIND_SDL_JoystickNumAxes_FUNCTION TRUE
#define BIND_SDL_JoystickNumBalls_FUNCTION TRUE
#define BIND_SDL_JoystickNumButtons_FUNCTION TRUE
#define BIND_SDL_JoystickNumHats_FUNCTION TRUE
#define BIND_SDL_JoystickOpen_FUNCTION TRUE
#define BIND_SDL_JoystickUpdate_FUNCTION TRUE
#define BIND_SDL_LoadBMP_RW_FUNCTION TRUE
#define BIND_SDL_LoadDollarTemplates_FUNCTION TRUE
#define BIND_SDL_LoadFunction_FUNCTION FALSE
#define BIND_SDL_LoadObject_FUNCTION FALSE
#define BIND_SDL_LoadWAV_RW_FUNCTION FALSE
#define BIND_SDL_LockAudioDevice_FUNCTION TRUE
#define BIND_SDL_LockAudio_FUNCTION TRUE
#define BIND_SDL_LockMutex_FUNCTION TRUE
#define BIND_SDL_LockSurface_FUNCTION TRUE
#define BIND_SDL_LockTexture_FUNCTION FALSE
#define BIND_SDL_LogCritical_FUNCTION TRUE
#define BIND_SDL_LogDebug_FUNCTION TRUE
#define BIND_SDL_LogError_FUNCTION TRUE
#define BIND_SDL_LogGetOutputFunction_FUNCTION FALSE
#define BIND_SDL_LogGetPriority_FUNCTION FALSE
#define BIND_SDL_LogInfo_FUNCTION TRUE
#define BIND_SDL_LogMessageV_FUNCTION FALSE
#define BIND_SDL_LogMessage_FUNCTION FALSE
#define BIND_SDL_LogResetPriorities_FUNCTION TRUE
#define BIND_SDL_LogSetAllPriority_FUNCTION FALSE
#define BIND_SDL_LogSetOutputFunction_FUNCTION FALSE
#define BIND_SDL_LogSetPriority_FUNCTION FALSE
#define BIND_SDL_LogVerbose_FUNCTION TRUE
#define BIND_SDL_LogWarn_FUNCTION TRUE
#define BIND_SDL_Log_FUNCTION TRUE
#define BIND_SDL_LowerBlitScaled_FUNCTION TRUE
#define BIND_SDL_LowerBlit_FUNCTION TRUE
#define BIND_SDL_MapRGBA_FUNCTION FALSE
#define BIND_SDL_MapRGB_FUNCTION FALSE
#define BIND_SDL_MasksToPixelFormatEnum_FUNCTION FALSE
#define BIND_SDL_MaximizeWindow_FUNCTION TRUE
#define BIND_SDL_MinimizeWindow_FUNCTION TRUE
#define BIND_SDL_MixAudioFormat_FUNCTION FALSE
#define BIND_SDL_MixAudio_FUNCTION FALSE
#define BIND_SDL_MostSignificantBitIndex32_FUNCTION TRUE
#define BIND_SDL_MouseIsHaptic_FUNCTION TRUE
#define BIND_SDL_NumHaptics_FUNCTION TRUE
#define BIND_SDL_NumJoysticks_FUNCTION TRUE
#define BIND_SDL_OpenAudioDevice_FUNCTION FALSE
#define BIND_SDL_OpenAudio_FUNCTION TRUE
#define BIND_SDL_PauseAudioDevice_FUNCTION TRUE
#define BIND_SDL_PauseAudio_FUNCTION TRUE
#define BIND_SDL_PeepEvents_FUNCTION FALSE
#define BIND_SDL_PixelFormatEnumToMasks_FUNCTION FALSE
#define BIND_SDL_PollEvent_FUNCTION TRUE
#define BIND_SDL_PumpEvents_FUNCTION TRUE
#define BIND_SDL_PushEvent_FUNCTION FALSE
#define BIND_SDL_QueryTexture_FUNCTION FALSE
#define BIND_SDL_QuitSubSystem_FUNCTION TRUE
#define BIND_SDL_Quit_FUNCTION TRUE
#define BIND_SDL_RWFromConstMem_FUNCTION FALSE
#define BIND_SDL_RWFromFP_FUNCTION FALSE
#define BIND_SDL_RWFromFile_FUNCTION TRUE
#define BIND_SDL_RWFromMem_FUNCTION FALSE
#define BIND_SDL_RaiseWindow_FUNCTION TRUE
#define BIND_SDL_ReadBE16_FUNCTION FALSE
#define BIND_SDL_ReadBE32_FUNCTION FALSE
#define BIND_SDL_ReadBE64_FUNCTION FALSE
#define BIND_SDL_ReadLE16_FUNCTION FALSE
#define BIND_SDL_ReadLE32_FUNCTION FALSE
#define BIND_SDL_ReadLE64_FUNCTION FALSE
#define BIND_SDL_ReadU8_FUNCTION FALSE
#define BIND_SDL_RecordGesture_FUNCTION TRUE
#define BIND_SDL_RectEmpty_FUNCTION TRUE
#define BIND_SDL_RectEquals_FUNCTION TRUE
#define BIND_SDL_RegisterEvents_FUNCTION FALSE
#define BIND_SDL_RemoveTimer_FUNCTION TRUE
#define BIND_SDL_RenderClear_FUNCTION TRUE
#define BIND_SDL_RenderCopyEx_FUNCTION FALSE
#define BIND_SDL_RenderCopy_FUNCTION TRUE
#define BIND_SDL_RenderDrawLine_FUNCTION TRUE
#define BIND_SDL_RenderDrawLines_FUNCTION TRUE
#define BIND_SDL_RenderDrawPoint_FUNCTION TRUE
#define BIND_SDL_RenderDrawPoints_FUNCTION TRUE
#define BIND_SDL_RenderDrawRect_FUNCTION TRUE
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
 #include "SDL_image.h"
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
