#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Action`1<DUCK.Tween.AbstractAnimation>
struct Action_1_tF01F5AD578B24D6EEEC764F4148D803D5AB28A75;
// DUCK.Tween.DelegateAnimation`1<DUCK.Tween.ScaleAnimation>
struct DelegateAnimation_1_t00679B3B1BE6AF8388660703663CB806F9EE35C3;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08;
// System.Func`1<DUCK.Tween.ScaleAnimation>
struct Func_1_tBE73E41AD3336D6E49C3B9420A4F443AF0EF16F2;
// System.Func`2<System.Single,System.Single>
struct Func_2_t10AC82CE8886E423467ACF3C9F68E7DA50E26149;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.Color32[]
struct Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t0C9E436904E570F798885BC6F264C7AE6608B5C6;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.Material[]
struct MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t81DC8CE2ED156F9CA996E2DC8A64A973A156D615;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t5271ED3FC5D741D05A220867865A1DA1EB04919A;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_t6295BD0FE7FDE873A040F84487061A1902B0B552;
// TMPro.TextAlignmentOptions[]
struct TextAlignmentOptionsU5BU5D_tF6615B91E0768E42EC9238537B063FF09EE04AD1;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_tB233FC88865130D0B1EA18DA685C2AF41FB134F7;
// DUCK.Tween.AbstractAnimation
struct AbstractAnimation_t22CE6A8097588867157BF863FEAC246E552B3185;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Exception
struct Exception_t;
// DUCK.Tween.IAnimationDriver
struct IAnimationDriver_t2867F654190F259C4B25C0B5BD2D62552C8DD0EB;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_tAE063F84A60E1058FCA4E3EA9F555D3462641F7D;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tE514951184806899FE23EC4FA6112A5F2038CECF;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// Menu
struct Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// NativeAPI
struct NativeAPI_tCF1B87942D24DC16E49B82348757D460312951F7;
// NativeiOSMethodHandler
struct NativeiOSMethodHandler_tA026872F39B357B22612A573D338CDC8687867CE;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// System.Threading.SynchronizationContext
struct SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069;
// TMPro.TMP_Character
struct TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t07C769A1F1F85B545DD32357826E08F569E3D902;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714;
// TMPro.TMP_Text
struct TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262;
// TMPro.TMP_TextElement
struct TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547;
// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// iNativeMethodHandler
struct iNativeMethodHandler_t2780DAD5B3EDC7492EC23F2FB044FBB47AE8F5C3;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;

IL2CPP_EXTERN_C RuntimeClass* Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AgnosticMethodHandler_tFE85058BECE4BC6B7D6125F16F7F888D9F11C4C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t10AC82CE8886E423467ACF3C9F68E7DA50E26149_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NativeiOSMethodHandler_tA026872F39B357B22612A573D338CDC8687867CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral46417730E643D51DA6AED2427C7D25CA50033A86;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CAnimateHeartU3Ed__10_t014BA4D6E985BF6DE304D6D371FE8A2B0D2C56B6_mD9C00CD79823F3EFC71833E887B82C67546BBCB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Easing_InOutBack_mA69FC2561E67CD8B0F4B8FACA491EB617ED1850C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m4F0F14ACA9CE9640DCA30B2651BAF3A917998BCB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Menu_U3CAnimateHeartU3Eb__10_0_mAC3642175BBE3B4D39D2F413D969AD11B5744F8F_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// DUCK.Tween.AbstractAnimation
struct AbstractAnimation_t22CE6A8097588867157BF863FEAC246E552B3185  : public RuntimeObject
{
public:
	// System.Boolean DUCK.Tween.AbstractAnimation::<IsPlaying>k__BackingField
	bool ___U3CIsPlayingU3Ek__BackingField_0;
	// System.Boolean DUCK.Tween.AbstractAnimation::<IsLooping>k__BackingField
	bool ___U3CIsLoopingU3Ek__BackingField_1;
	// System.Boolean DUCK.Tween.AbstractAnimation::<IsPaused>k__BackingField
	bool ___U3CIsPausedU3Ek__BackingField_2;
	// System.Action DUCK.Tween.AbstractAnimation::onCompleteCallback
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___onCompleteCallback_3;
	// System.Action DUCK.Tween.AbstractAnimation::onAbortCallback
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___onAbortCallback_4;

public:
	inline static int32_t get_offset_of_U3CIsPlayingU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(AbstractAnimation_t22CE6A8097588867157BF863FEAC246E552B3185, ___U3CIsPlayingU3Ek__BackingField_0)); }
	inline bool get_U3CIsPlayingU3Ek__BackingField_0() const { return ___U3CIsPlayingU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CIsPlayingU3Ek__BackingField_0() { return &___U3CIsPlayingU3Ek__BackingField_0; }
	inline void set_U3CIsPlayingU3Ek__BackingField_0(bool value)
	{
		___U3CIsPlayingU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CIsLoopingU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AbstractAnimation_t22CE6A8097588867157BF863FEAC246E552B3185, ___U3CIsLoopingU3Ek__BackingField_1)); }
	inline bool get_U3CIsLoopingU3Ek__BackingField_1() const { return ___U3CIsLoopingU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CIsLoopingU3Ek__BackingField_1() { return &___U3CIsLoopingU3Ek__BackingField_1; }
	inline void set_U3CIsLoopingU3Ek__BackingField_1(bool value)
	{
		___U3CIsLoopingU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CIsPausedU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(AbstractAnimation_t22CE6A8097588867157BF863FEAC246E552B3185, ___U3CIsPausedU3Ek__BackingField_2)); }
	inline bool get_U3CIsPausedU3Ek__BackingField_2() const { return ___U3CIsPausedU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CIsPausedU3Ek__BackingField_2() { return &___U3CIsPausedU3Ek__BackingField_2; }
	inline void set_U3CIsPausedU3Ek__BackingField_2(bool value)
	{
		___U3CIsPausedU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_onCompleteCallback_3() { return static_cast<int32_t>(offsetof(AbstractAnimation_t22CE6A8097588867157BF863FEAC246E552B3185, ___onCompleteCallback_3)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_onCompleteCallback_3() const { return ___onCompleteCallback_3; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_onCompleteCallback_3() { return &___onCompleteCallback_3; }
	inline void set_onCompleteCallback_3(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___onCompleteCallback_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onCompleteCallback_3), (void*)value);
	}

	inline static int32_t get_offset_of_onAbortCallback_4() { return static_cast<int32_t>(offsetof(AbstractAnimation_t22CE6A8097588867157BF863FEAC246E552B3185, ___onAbortCallback_4)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_onAbortCallback_4() const { return ___onAbortCallback_4; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_onAbortCallback_4() { return &___onAbortCallback_4; }
	inline void set_onAbortCallback_4(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___onAbortCallback_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onAbortCallback_4), (void*)value);
	}
};


// DefaultNamespace.AgnosticMethodHandler
struct AgnosticMethodHandler_tFE85058BECE4BC6B7D6125F16F7F888D9F11C4C2  : public RuntimeObject
{
public:

public:
};

struct AgnosticMethodHandler_tFE85058BECE4BC6B7D6125F16F7F888D9F11C4C2_StaticFields
{
public:
	// iNativeMethodHandler DefaultNamespace.AgnosticMethodHandler::MethodHandler
	iNativeMethodHandler_t2780DAD5B3EDC7492EC23F2FB044FBB47AE8F5C3 * ___MethodHandler_0;

public:
	inline static int32_t get_offset_of_MethodHandler_0() { return static_cast<int32_t>(offsetof(AgnosticMethodHandler_tFE85058BECE4BC6B7D6125F16F7F888D9F11C4C2_StaticFields, ___MethodHandler_0)); }
	inline iNativeMethodHandler_t2780DAD5B3EDC7492EC23F2FB044FBB47AE8F5C3 * get_MethodHandler_0() const { return ___MethodHandler_0; }
	inline iNativeMethodHandler_t2780DAD5B3EDC7492EC23F2FB044FBB47AE8F5C3 ** get_address_of_MethodHandler_0() { return &___MethodHandler_0; }
	inline void set_MethodHandler_0(iNativeMethodHandler_t2780DAD5B3EDC7492EC23F2FB044FBB47AE8F5C3 * value)
	{
		___MethodHandler_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MethodHandler_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// UnityEngine.UIElements.Experimental.Easing
struct Easing_t341D4891B20AA8D3545292FD414F7D2047A2A164  : public RuntimeObject
{
public:

public:
};


// NativeAPI
struct NativeAPI_tCF1B87942D24DC16E49B82348757D460312951F7  : public RuntimeObject
{
public:

public:
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// iNativeMethodHandler
struct iNativeMethodHandler_t2780DAD5B3EDC7492EC23F2FB044FBB47AE8F5C3  : public RuntimeObject
{
public:

public:
};


// TMPro.TMP_RichTextTagStack`1<System.Int32>
struct TMP_RichTextTagStack_1_t84ED35F1394C27DB285E413F24F5096C74045666 
{
public:
	// T[] TMPro.TMP_RichTextTagStack`1::m_ItemStack
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___m_ItemStack_0;
	// System.Int32 TMPro.TMP_RichTextTagStack`1::m_Index
	int32_t ___m_Index_1;
	// System.Int32 TMPro.TMP_RichTextTagStack`1::m_Capacity
	int32_t ___m_Capacity_2;
	// T TMPro.TMP_RichTextTagStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_3;

public:
	inline static int32_t get_offset_of_m_ItemStack_0() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t84ED35F1394C27DB285E413F24F5096C74045666, ___m_ItemStack_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_m_ItemStack_0() const { return ___m_ItemStack_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_m_ItemStack_0() { return &___m_ItemStack_0; }
	inline void set_m_ItemStack_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___m_ItemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ItemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Index_1() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t84ED35F1394C27DB285E413F24F5096C74045666, ___m_Index_1)); }
	inline int32_t get_m_Index_1() const { return ___m_Index_1; }
	inline int32_t* get_address_of_m_Index_1() { return &___m_Index_1; }
	inline void set_m_Index_1(int32_t value)
	{
		___m_Index_1 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_2() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t84ED35F1394C27DB285E413F24F5096C74045666, ___m_Capacity_2)); }
	inline int32_t get_m_Capacity_2() const { return ___m_Capacity_2; }
	inline int32_t* get_address_of_m_Capacity_2() { return &___m_Capacity_2; }
	inline void set_m_Capacity_2(int32_t value)
	{
		___m_Capacity_2 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_3() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t84ED35F1394C27DB285E413F24F5096C74045666, ___m_DefaultItem_3)); }
	inline int32_t get_m_DefaultItem_3() const { return ___m_DefaultItem_3; }
	inline int32_t* get_address_of_m_DefaultItem_3() { return &___m_DefaultItem_3; }
	inline void set_m_DefaultItem_3(int32_t value)
	{
		___m_DefaultItem_3 = value;
	}
};


// TMPro.TMP_RichTextTagStack`1<System.Single>
struct TMP_RichTextTagStack_1_t36D1FD4270DC89CAF634A577A41355D7839A1A75 
{
public:
	// T[] TMPro.TMP_RichTextTagStack`1::m_ItemStack
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___m_ItemStack_0;
	// System.Int32 TMPro.TMP_RichTextTagStack`1::m_Index
	int32_t ___m_Index_1;
	// System.Int32 TMPro.TMP_RichTextTagStack`1::m_Capacity
	int32_t ___m_Capacity_2;
	// T TMPro.TMP_RichTextTagStack`1::m_DefaultItem
	float ___m_DefaultItem_3;

public:
	inline static int32_t get_offset_of_m_ItemStack_0() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t36D1FD4270DC89CAF634A577A41355D7839A1A75, ___m_ItemStack_0)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_m_ItemStack_0() const { return ___m_ItemStack_0; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_m_ItemStack_0() { return &___m_ItemStack_0; }
	inline void set_m_ItemStack_0(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___m_ItemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ItemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Index_1() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t36D1FD4270DC89CAF634A577A41355D7839A1A75, ___m_Index_1)); }
	inline int32_t get_m_Index_1() const { return ___m_Index_1; }
	inline int32_t* get_address_of_m_Index_1() { return &___m_Index_1; }
	inline void set_m_Index_1(int32_t value)
	{
		___m_Index_1 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_2() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t36D1FD4270DC89CAF634A577A41355D7839A1A75, ___m_Capacity_2)); }
	inline int32_t get_m_Capacity_2() const { return ___m_Capacity_2; }
	inline int32_t* get_address_of_m_Capacity_2() { return &___m_Capacity_2; }
	inline void set_m_Capacity_2(int32_t value)
	{
		___m_Capacity_2 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_3() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t36D1FD4270DC89CAF634A577A41355D7839A1A75, ___m_DefaultItem_3)); }
	inline float get_m_DefaultItem_3() const { return ___m_DefaultItem_3; }
	inline float* get_address_of_m_DefaultItem_3() { return &___m_DefaultItem_3; }
	inline void set_m_DefaultItem_3(float value)
	{
		___m_DefaultItem_3 = value;
	}
};


// TMPro.TMP_RichTextTagStack`1<TMPro.TMP_ColorGradient>
struct TMP_RichTextTagStack_1_t342372E460C6C5BFFFE5FF1A57DEE7E855012961 
{
public:
	// T[] TMPro.TMP_RichTextTagStack`1::m_ItemStack
	TMP_ColorGradientU5BU5D_t5271ED3FC5D741D05A220867865A1DA1EB04919A* ___m_ItemStack_0;
	// System.Int32 TMPro.TMP_RichTextTagStack`1::m_Index
	int32_t ___m_Index_1;
	// System.Int32 TMPro.TMP_RichTextTagStack`1::m_Capacity
	int32_t ___m_Capacity_2;
	// T TMPro.TMP_RichTextTagStack`1::m_DefaultItem
	TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * ___m_DefaultItem_3;

public:
	inline static int32_t get_offset_of_m_ItemStack_0() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t342372E460C6C5BFFFE5FF1A57DEE7E855012961, ___m_ItemStack_0)); }
	inline TMP_ColorGradientU5BU5D_t5271ED3FC5D741D05A220867865A1DA1EB04919A* get_m_ItemStack_0() const { return ___m_ItemStack_0; }
	inline TMP_ColorGradientU5BU5D_t5271ED3FC5D741D05A220867865A1DA1EB04919A** get_address_of_m_ItemStack_0() { return &___m_ItemStack_0; }
	inline void set_m_ItemStack_0(TMP_ColorGradientU5BU5D_t5271ED3FC5D741D05A220867865A1DA1EB04919A* value)
	{
		___m_ItemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ItemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Index_1() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t342372E460C6C5BFFFE5FF1A57DEE7E855012961, ___m_Index_1)); }
	inline int32_t get_m_Index_1() const { return ___m_Index_1; }
	inline int32_t* get_address_of_m_Index_1() { return &___m_Index_1; }
	inline void set_m_Index_1(int32_t value)
	{
		___m_Index_1 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_2() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t342372E460C6C5BFFFE5FF1A57DEE7E855012961, ___m_Capacity_2)); }
	inline int32_t get_m_Capacity_2() const { return ___m_Capacity_2; }
	inline int32_t* get_address_of_m_Capacity_2() { return &___m_Capacity_2; }
	inline void set_m_Capacity_2(int32_t value)
	{
		___m_Capacity_2 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_3() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t342372E460C6C5BFFFE5FF1A57DEE7E855012961, ___m_DefaultItem_3)); }
	inline TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * get_m_DefaultItem_3() const { return ___m_DefaultItem_3; }
	inline TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 ** get_address_of_m_DefaultItem_3() { return &___m_DefaultItem_3; }
	inline void set_m_DefaultItem_3(TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * value)
	{
		___m_DefaultItem_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DefaultItem_3), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 
{
public:
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___m_defaultContextAction_1;

public:
	inline static int32_t get_offset_of_m_stateMachine_0() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34, ___m_stateMachine_0)); }
	inline RuntimeObject* get_m_stateMachine_0() const { return ___m_stateMachine_0; }
	inline RuntimeObject** get_address_of_m_stateMachine_0() { return &___m_stateMachine_0; }
	inline void set_m_stateMachine_0(RuntimeObject* value)
	{
		___m_stateMachine_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateMachine_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_defaultContextAction_1() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34, ___m_defaultContextAction_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_m_defaultContextAction_1() const { return ___m_defaultContextAction_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_m_defaultContextAction_1() { return &___m_defaultContextAction_1; }
	inline void set_m_defaultContextAction_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___m_defaultContextAction_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_defaultContextAction_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};

// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.Color32
struct Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_rgba_0() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___rgba_0)); }
	inline int32_t get_rgba_0() const { return ___rgba_0; }
	inline int32_t* get_address_of_rgba_0() { return &___rgba_0; }
	inline void set_rgba_0(int32_t value)
	{
		___rgba_0 = value;
	}

	inline static int32_t get_offset_of_r_1() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___r_1)); }
	inline uint8_t get_r_1() const { return ___r_1; }
	inline uint8_t* get_address_of_r_1() { return &___r_1; }
	inline void set_r_1(uint8_t value)
	{
		___r_1 = value;
	}

	inline static int32_t get_offset_of_g_2() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___g_2)); }
	inline uint8_t get_g_2() const { return ___g_2; }
	inline uint8_t* get_address_of_g_2() { return &___g_2; }
	inline void set_g_2(uint8_t value)
	{
		___g_2 = value;
	}

	inline static int32_t get_offset_of_b_3() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___b_3)); }
	inline uint8_t get_b_3() const { return ___b_3; }
	inline uint8_t* get_address_of_b_3() { return &___b_3; }
	inline void set_b_3(uint8_t value)
	{
		___b_3 = value;
	}

	inline static int32_t get_offset_of_a_4() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___a_4)); }
	inline uint8_t get_a_4() const { return ___a_4; }
	inline uint8_t* get_address_of_a_4() { return &___a_4; }
	inline void set_a_4(uint8_t value)
	{
		___a_4 = value;
	}
};


// DUCK.Tween.DelegateAnimation
struct DelegateAnimation_t4593CED8089437492F7EF9113CB438E1ACC18DFB  : public AbstractAnimation_t22CE6A8097588867157BF863FEAC246E552B3185
{
public:
	// DUCK.Tween.IAnimationDriver DUCK.Tween.DelegateAnimation::animationDriver
	RuntimeObject* ___animationDriver_5;
	// DUCK.Tween.AbstractAnimation DUCK.Tween.DelegateAnimation::<Animation>k__BackingField
	AbstractAnimation_t22CE6A8097588867157BF863FEAC246E552B3185 * ___U3CAnimationU3Ek__BackingField_6;
	// System.Action`1<DUCK.Tween.AbstractAnimation> DUCK.Tween.DelegateAnimation::<OnAnimationCreated>k__BackingField
	Action_1_tF01F5AD578B24D6EEEC764F4148D803D5AB28A75 * ___U3COnAnimationCreatedU3Ek__BackingField_7;
	// System.Action DUCK.Tween.DelegateAnimation::speedChangeRequest
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___speedChangeRequest_8;
	// System.Action DUCK.Tween.DelegateAnimation::reverseChangeRequest
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___reverseChangeRequest_9;

public:
	inline static int32_t get_offset_of_animationDriver_5() { return static_cast<int32_t>(offsetof(DelegateAnimation_t4593CED8089437492F7EF9113CB438E1ACC18DFB, ___animationDriver_5)); }
	inline RuntimeObject* get_animationDriver_5() const { return ___animationDriver_5; }
	inline RuntimeObject** get_address_of_animationDriver_5() { return &___animationDriver_5; }
	inline void set_animationDriver_5(RuntimeObject* value)
	{
		___animationDriver_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___animationDriver_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAnimationU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(DelegateAnimation_t4593CED8089437492F7EF9113CB438E1ACC18DFB, ___U3CAnimationU3Ek__BackingField_6)); }
	inline AbstractAnimation_t22CE6A8097588867157BF863FEAC246E552B3185 * get_U3CAnimationU3Ek__BackingField_6() const { return ___U3CAnimationU3Ek__BackingField_6; }
	inline AbstractAnimation_t22CE6A8097588867157BF863FEAC246E552B3185 ** get_address_of_U3CAnimationU3Ek__BackingField_6() { return &___U3CAnimationU3Ek__BackingField_6; }
	inline void set_U3CAnimationU3Ek__BackingField_6(AbstractAnimation_t22CE6A8097588867157BF863FEAC246E552B3185 * value)
	{
		___U3CAnimationU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAnimationU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnAnimationCreatedU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(DelegateAnimation_t4593CED8089437492F7EF9113CB438E1ACC18DFB, ___U3COnAnimationCreatedU3Ek__BackingField_7)); }
	inline Action_1_tF01F5AD578B24D6EEEC764F4148D803D5AB28A75 * get_U3COnAnimationCreatedU3Ek__BackingField_7() const { return ___U3COnAnimationCreatedU3Ek__BackingField_7; }
	inline Action_1_tF01F5AD578B24D6EEEC764F4148D803D5AB28A75 ** get_address_of_U3COnAnimationCreatedU3Ek__BackingField_7() { return &___U3COnAnimationCreatedU3Ek__BackingField_7; }
	inline void set_U3COnAnimationCreatedU3Ek__BackingField_7(Action_1_tF01F5AD578B24D6EEEC764F4148D803D5AB28A75 * value)
	{
		___U3COnAnimationCreatedU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnAnimationCreatedU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_speedChangeRequest_8() { return static_cast<int32_t>(offsetof(DelegateAnimation_t4593CED8089437492F7EF9113CB438E1ACC18DFB, ___speedChangeRequest_8)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_speedChangeRequest_8() const { return ___speedChangeRequest_8; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_speedChangeRequest_8() { return &___speedChangeRequest_8; }
	inline void set_speedChangeRequest_8(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___speedChangeRequest_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___speedChangeRequest_8), (void*)value);
	}

	inline static int32_t get_offset_of_reverseChangeRequest_9() { return static_cast<int32_t>(offsetof(DelegateAnimation_t4593CED8089437492F7EF9113CB438E1ACC18DFB, ___reverseChangeRequest_9)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_reverseChangeRequest_9() const { return ___reverseChangeRequest_9; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_reverseChangeRequest_9() { return &___reverseChangeRequest_9; }
	inline void set_reverseChangeRequest_9(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___reverseChangeRequest_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reverseChangeRequest_9), (void*)value);
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// TMPro.MaterialReference
struct MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B 
{
public:
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;

public:
	inline static int32_t get_offset_of_index_0() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___index_0)); }
	inline int32_t get_index_0() const { return ___index_0; }
	inline int32_t* get_address_of_index_0() { return &___index_0; }
	inline void set_index_0(int32_t value)
	{
		___index_0 = value;
	}

	inline static int32_t get_offset_of_fontAsset_1() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___fontAsset_1)); }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * get_fontAsset_1() const { return ___fontAsset_1; }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 ** get_address_of_fontAsset_1() { return &___fontAsset_1; }
	inline void set_fontAsset_1(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * value)
	{
		___fontAsset_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fontAsset_1), (void*)value);
	}

	inline static int32_t get_offset_of_spriteAsset_2() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___spriteAsset_2)); }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * get_spriteAsset_2() const { return ___spriteAsset_2; }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 ** get_address_of_spriteAsset_2() { return &___spriteAsset_2; }
	inline void set_spriteAsset_2(TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * value)
	{
		___spriteAsset_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spriteAsset_2), (void*)value);
	}

	inline static int32_t get_offset_of_material_3() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___material_3)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_material_3() const { return ___material_3; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_material_3() { return &___material_3; }
	inline void set_material_3(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___material_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___material_3), (void*)value);
	}

	inline static int32_t get_offset_of_isDefaultMaterial_4() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___isDefaultMaterial_4)); }
	inline bool get_isDefaultMaterial_4() const { return ___isDefaultMaterial_4; }
	inline bool* get_address_of_isDefaultMaterial_4() { return &___isDefaultMaterial_4; }
	inline void set_isDefaultMaterial_4(bool value)
	{
		___isDefaultMaterial_4 = value;
	}

	inline static int32_t get_offset_of_isFallbackMaterial_5() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___isFallbackMaterial_5)); }
	inline bool get_isFallbackMaterial_5() const { return ___isFallbackMaterial_5; }
	inline bool* get_address_of_isFallbackMaterial_5() { return &___isFallbackMaterial_5; }
	inline void set_isFallbackMaterial_5(bool value)
	{
		___isFallbackMaterial_5 = value;
	}

	inline static int32_t get_offset_of_fallbackMaterial_6() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___fallbackMaterial_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_fallbackMaterial_6() const { return ___fallbackMaterial_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_fallbackMaterial_6() { return &___fallbackMaterial_6; }
	inline void set_fallbackMaterial_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___fallbackMaterial_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fallbackMaterial_6), (void*)value);
	}

	inline static int32_t get_offset_of_padding_7() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___padding_7)); }
	inline float get_padding_7() const { return ___padding_7; }
	inline float* get_address_of_padding_7() { return &___padding_7; }
	inline void set_padding_7(float value)
	{
		___padding_7 = value;
	}

	inline static int32_t get_offset_of_referenceCount_8() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___referenceCount_8)); }
	inline int32_t get_referenceCount_8() const { return ___referenceCount_8; }
	inline int32_t* get_address_of_referenceCount_8() { return &___referenceCount_8; }
	inline void set_referenceCount_8(int32_t value)
	{
		___referenceCount_8 = value;
	}
};

// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___fontAsset_1;
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___spriteAsset_2;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___fontAsset_1;
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___spriteAsset_2;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___identityMatrix_17 = value;
	}
};


// NativeiOSMethodHandler
struct NativeiOSMethodHandler_tA026872F39B357B22612A573D338CDC8687867CE  : public iNativeMethodHandler_t2780DAD5B3EDC7492EC23F2FB044FBB47AE8F5C3
{
public:

public:
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9 
{
public:
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;

public:
	inline static int32_t get_offset_of_bold_0() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___bold_0)); }
	inline uint8_t get_bold_0() const { return ___bold_0; }
	inline uint8_t* get_address_of_bold_0() { return &___bold_0; }
	inline void set_bold_0(uint8_t value)
	{
		___bold_0 = value;
	}

	inline static int32_t get_offset_of_italic_1() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___italic_1)); }
	inline uint8_t get_italic_1() const { return ___italic_1; }
	inline uint8_t* get_address_of_italic_1() { return &___italic_1; }
	inline void set_italic_1(uint8_t value)
	{
		___italic_1 = value;
	}

	inline static int32_t get_offset_of_underline_2() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___underline_2)); }
	inline uint8_t get_underline_2() const { return ___underline_2; }
	inline uint8_t* get_address_of_underline_2() { return &___underline_2; }
	inline void set_underline_2(uint8_t value)
	{
		___underline_2 = value;
	}

	inline static int32_t get_offset_of_strikethrough_3() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___strikethrough_3)); }
	inline uint8_t get_strikethrough_3() const { return ___strikethrough_3; }
	inline uint8_t* get_address_of_strikethrough_3() { return &___strikethrough_3; }
	inline void set_strikethrough_3(uint8_t value)
	{
		___strikethrough_3 = value;
	}

	inline static int32_t get_offset_of_highlight_4() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___highlight_4)); }
	inline uint8_t get_highlight_4() const { return ___highlight_4; }
	inline uint8_t* get_address_of_highlight_4() { return &___highlight_4; }
	inline void set_highlight_4(uint8_t value)
	{
		___highlight_4 = value;
	}

	inline static int32_t get_offset_of_superscript_5() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___superscript_5)); }
	inline uint8_t get_superscript_5() const { return ___superscript_5; }
	inline uint8_t* get_address_of_superscript_5() { return &___superscript_5; }
	inline void set_superscript_5(uint8_t value)
	{
		___superscript_5 = value;
	}

	inline static int32_t get_offset_of_subscript_6() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___subscript_6)); }
	inline uint8_t get_subscript_6() const { return ___subscript_6; }
	inline uint8_t* get_address_of_subscript_6() { return &___subscript_6; }
	inline void set_subscript_6(uint8_t value)
	{
		___subscript_6 = value;
	}

	inline static int32_t get_offset_of_uppercase_7() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___uppercase_7)); }
	inline uint8_t get_uppercase_7() const { return ___uppercase_7; }
	inline uint8_t* get_address_of_uppercase_7() { return &___uppercase_7; }
	inline void set_uppercase_7(uint8_t value)
	{
		___uppercase_7 = value;
	}

	inline static int32_t get_offset_of_lowercase_8() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___lowercase_8)); }
	inline uint8_t get_lowercase_8() const { return ___lowercase_8; }
	inline uint8_t* get_address_of_lowercase_8() { return &___lowercase_8; }
	inline void set_lowercase_8(uint8_t value)
	{
		___lowercase_8 = value;
	}

	inline static int32_t get_offset_of_smallcaps_9() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___smallcaps_9)); }
	inline uint8_t get_smallcaps_9() const { return ___smallcaps_9; }
	inline uint8_t* get_address_of_smallcaps_9() { return &___smallcaps_9; }
	inline void set_smallcaps_9(uint8_t value)
	{
		___smallcaps_9 = value;
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// DUCK.Tween.DelegateAnimation`1<DUCK.Tween.ScaleAnimation>
struct DelegateAnimation_1_t00679B3B1BE6AF8388660703663CB806F9EE35C3  : public DelegateAnimation_t4593CED8089437492F7EF9113CB438E1ACC18DFB
{
public:
	// System.Func`1<T> DUCK.Tween.DelegateAnimation`1::animationCreationFunction
	Func_1_tBE73E41AD3336D6E49C3B9420A4F443AF0EF16F2 * ___animationCreationFunction_10;

public:
	inline static int32_t get_offset_of_animationCreationFunction_10() { return static_cast<int32_t>(offsetof(DelegateAnimation_1_t00679B3B1BE6AF8388660703663CB806F9EE35C3, ___animationCreationFunction_10)); }
	inline Func_1_tBE73E41AD3336D6E49C3B9420A4F443AF0EF16F2 * get_animationCreationFunction_10() const { return ___animationCreationFunction_10; }
	inline Func_1_tBE73E41AD3336D6E49C3B9420A4F443AF0EF16F2 ** get_address_of_animationCreationFunction_10() { return &___animationCreationFunction_10; }
	inline void set_animationCreationFunction_10(Func_1_tBE73E41AD3336D6E49C3B9420A4F443AF0EF16F2 * value)
	{
		___animationCreationFunction_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___animationCreationFunction_10), (void*)value);
	}
};


// TMPro.TMP_RichTextTagStack`1<UnityEngine.Color32>
struct TMP_RichTextTagStack_1_t1C19F739424A83939314F52144105F01D10F4C59 
{
public:
	// T[] TMPro.TMP_RichTextTagStack`1::m_ItemStack
	Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* ___m_ItemStack_0;
	// System.Int32 TMPro.TMP_RichTextTagStack`1::m_Index
	int32_t ___m_Index_1;
	// System.Int32 TMPro.TMP_RichTextTagStack`1::m_Capacity
	int32_t ___m_Capacity_2;
	// T TMPro.TMP_RichTextTagStack`1::m_DefaultItem
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_DefaultItem_3;

public:
	inline static int32_t get_offset_of_m_ItemStack_0() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t1C19F739424A83939314F52144105F01D10F4C59, ___m_ItemStack_0)); }
	inline Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* get_m_ItemStack_0() const { return ___m_ItemStack_0; }
	inline Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2** get_address_of_m_ItemStack_0() { return &___m_ItemStack_0; }
	inline void set_m_ItemStack_0(Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* value)
	{
		___m_ItemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ItemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Index_1() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t1C19F739424A83939314F52144105F01D10F4C59, ___m_Index_1)); }
	inline int32_t get_m_Index_1() const { return ___m_Index_1; }
	inline int32_t* get_address_of_m_Index_1() { return &___m_Index_1; }
	inline void set_m_Index_1(int32_t value)
	{
		___m_Index_1 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_2() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t1C19F739424A83939314F52144105F01D10F4C59, ___m_Capacity_2)); }
	inline int32_t get_m_Capacity_2() const { return ___m_Capacity_2; }
	inline int32_t* get_address_of_m_Capacity_2() { return &___m_Capacity_2; }
	inline void set_m_Capacity_2(int32_t value)
	{
		___m_Capacity_2 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_3() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t1C19F739424A83939314F52144105F01D10F4C59, ___m_DefaultItem_3)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_DefaultItem_3() const { return ___m_DefaultItem_3; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_DefaultItem_3() { return &___m_DefaultItem_3; }
	inline void set_m_DefaultItem_3(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_DefaultItem_3 = value;
	}
};


// TMPro.TMP_RichTextTagStack`1<TMPro.MaterialReference>
struct TMP_RichTextTagStack_1_t6295DEFD74CDCC6DA9F178985F0C6992364AC718 
{
public:
	// T[] TMPro.TMP_RichTextTagStack`1::m_ItemStack
	MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD* ___m_ItemStack_0;
	// System.Int32 TMPro.TMP_RichTextTagStack`1::m_Index
	int32_t ___m_Index_1;
	// System.Int32 TMPro.TMP_RichTextTagStack`1::m_Capacity
	int32_t ___m_Capacity_2;
	// T TMPro.TMP_RichTextTagStack`1::m_DefaultItem
	MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B  ___m_DefaultItem_3;

public:
	inline static int32_t get_offset_of_m_ItemStack_0() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t6295DEFD74CDCC6DA9F178985F0C6992364AC718, ___m_ItemStack_0)); }
	inline MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD* get_m_ItemStack_0() const { return ___m_ItemStack_0; }
	inline MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD** get_address_of_m_ItemStack_0() { return &___m_ItemStack_0; }
	inline void set_m_ItemStack_0(MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD* value)
	{
		___m_ItemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ItemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Index_1() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t6295DEFD74CDCC6DA9F178985F0C6992364AC718, ___m_Index_1)); }
	inline int32_t get_m_Index_1() const { return ___m_Index_1; }
	inline int32_t* get_address_of_m_Index_1() { return &___m_Index_1; }
	inline void set_m_Index_1(int32_t value)
	{
		___m_Index_1 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_2() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t6295DEFD74CDCC6DA9F178985F0C6992364AC718, ___m_Capacity_2)); }
	inline int32_t get_m_Capacity_2() const { return ___m_Capacity_2; }
	inline int32_t* get_address_of_m_Capacity_2() { return &___m_Capacity_2; }
	inline void set_m_Capacity_2(int32_t value)
	{
		___m_Capacity_2 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_3() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t6295DEFD74CDCC6DA9F178985F0C6992364AC718, ___m_DefaultItem_3)); }
	inline MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B  get_m_DefaultItem_3() const { return ___m_DefaultItem_3; }
	inline MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B * get_address_of_m_DefaultItem_3() { return &___m_DefaultItem_3; }
	inline void set_m_DefaultItem_3(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B  value)
	{
		___m_DefaultItem_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_3))->___fontAsset_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_3))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_3))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_3))->___fallbackMaterial_6), (void*)NULL);
		#endif
	}
};


// System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 
{
public:
	// System.Threading.SynchronizationContext System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_synchronizationContext
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___m_synchronizationContext_0;
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_task
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_synchronizationContext_0() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6, ___m_synchronizationContext_0)); }
	inline SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * get_m_synchronizationContext_0() const { return ___m_synchronizationContext_0; }
	inline SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 ** get_address_of_m_synchronizationContext_0() { return &___m_synchronizationContext_0; }
	inline void set_m_synchronizationContext_0(SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * value)
	{
		___m_synchronizationContext_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_synchronizationContext_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6, ___m_task_2)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_task_2() const { return ___m_task_2; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6_marshaled_pinvoke
{
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_pinvoke ___m_coreState_1;
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_2;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6_marshaled_com
{
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_com ___m_coreState_1;
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_2;
};

// TMPro.ColorMode
struct ColorMode_t2C99ABBE35C08A863709500BFBBD6784D7114C09 
{
public:
	// System.Int32 TMPro.ColorMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ColorMode_t2C99ABBE35C08A863709500BFBBD6784D7114C09, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// TMPro.Extents
struct Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA 
{
public:
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___min_0;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___max_1;

public:
	inline static int32_t get_offset_of_min_0() { return static_cast<int32_t>(offsetof(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA, ___min_0)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_min_0() const { return ___min_0; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_min_0() { return &___min_0; }
	inline void set_min_0(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___min_0 = value;
	}

	inline static int32_t get_offset_of_max_1() { return static_cast<int32_t>(offsetof(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA, ___max_1)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_max_1() const { return ___max_1; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_max_1() { return &___max_1; }
	inline void set_max_1(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___max_1 = value;
	}
};


// TMPro.FontStyles
struct FontStyles_tAB9AC2C8316219AE73612ED4DD60417C14B5B74C 
{
public:
	// System.Int32 TMPro.FontStyles::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FontStyles_tAB9AC2C8316219AE73612ED4DD60417C14B5B74C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.FontWeight
struct FontWeight_tBF8B23C3A4F63D5602FEC93BE775C93CA4DDDC26 
{
public:
	// System.Int32 TMPro.FontWeight::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FontWeight_tBF8B23C3A4F63D5602FEC93BE775C93CA4DDDC26, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// TMPro.TMP_TextElementType
struct TMP_TextElementType_t4BDF96DA2071216188B19EB33C35912BD185ECA3 
{
public:
	// System.Int32 TMPro.TMP_TextElementType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TMP_TextElementType_t4BDF96DA2071216188B19EB33C35912BD185ECA3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TextAlignmentOptions
struct TextAlignmentOptions_t682AC2BC382B468C04A23B008505ACCBF826AD63 
{
public:
	// System.Int32 TMPro.TextAlignmentOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextAlignmentOptions_t682AC2BC382B468C04A23B008505ACCBF826AD63, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TextOverflowModes
struct TextOverflowModes_t3E5E40446E0C1088788010EE07323B45DB7549C6 
{
public:
	// System.Int32 TMPro.TextOverflowModes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextOverflowModes_t3E5E40446E0C1088788010EE07323B45DB7549C6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TextRenderFlags
struct TextRenderFlags_tBA599FEF207E56A80860B6266E3C9F57B59CA9F4 
{
public:
	// System.Int32 TMPro.TextRenderFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextRenderFlags_tBA599FEF207E56A80860B6266E3C9F57B59CA9F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TextureMappingOptions
struct TextureMappingOptions_t9FA25F9B2D01E6B7D8DA8761AAED241D285A285A 
{
public:
	// System.Int32 TMPro.TextureMappingOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureMappingOptions_t9FA25F9B2D01E6B7D8DA8761AAED241D285A285A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.VertexGradient
struct VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D 
{
public:
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___bottomRight_3;

public:
	inline static int32_t get_offset_of_topLeft_0() { return static_cast<int32_t>(offsetof(VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D, ___topLeft_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_topLeft_0() const { return ___topLeft_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_topLeft_0() { return &___topLeft_0; }
	inline void set_topLeft_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___topLeft_0 = value;
	}

	inline static int32_t get_offset_of_topRight_1() { return static_cast<int32_t>(offsetof(VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D, ___topRight_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_topRight_1() const { return ___topRight_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_topRight_1() { return &___topRight_1; }
	inline void set_topRight_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___topRight_1 = value;
	}

	inline static int32_t get_offset_of_bottomLeft_2() { return static_cast<int32_t>(offsetof(VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D, ___bottomLeft_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_bottomLeft_2() const { return ___bottomLeft_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_bottomLeft_2() { return &___bottomLeft_2; }
	inline void set_bottomLeft_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___bottomLeft_2 = value;
	}

	inline static int32_t get_offset_of_bottomRight_3() { return static_cast<int32_t>(offsetof(VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D, ___bottomRight_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_bottomRight_3() const { return ___bottomRight_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_bottomRight_3() { return &___bottomRight_3; }
	inline void set_bottomRight_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___bottomRight_3 = value;
	}
};


// TMPro.VertexSortingOrder
struct VertexSortingOrder_t8D099B77634C901CB5D2497AEAC94127E9DE013B 
{
public:
	// System.Int32 TMPro.VertexSortingOrder::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VertexSortingOrder_t8D099B77634C901CB5D2497AEAC94127E9DE013B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TMP_Text/TextInputSources
struct TextInputSources_t8A0451130450FC08C5847209E7551F27F5CAF4D0 
{
public:
	// System.Int32 TMPro.TMP_Text/TextInputSources::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextInputSources_t8A0451130450FC08C5847209E7551F27F5CAF4D0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TMP_RichTextTagStack`1<TMPro.FontWeight>
struct TMP_RichTextTagStack_1_tB7224278867423278E1287BE6995BFABF4CFD72E 
{
public:
	// T[] TMPro.TMP_RichTextTagStack`1::m_ItemStack
	FontWeightU5BU5D_t0C9E436904E570F798885BC6F264C7AE6608B5C6* ___m_ItemStack_0;
	// System.Int32 TMPro.TMP_RichTextTagStack`1::m_Index
	int32_t ___m_Index_1;
	// System.Int32 TMPro.TMP_RichTextTagStack`1::m_Capacity
	int32_t ___m_Capacity_2;
	// T TMPro.TMP_RichTextTagStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_3;

public:
	inline static int32_t get_offset_of_m_ItemStack_0() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_tB7224278867423278E1287BE6995BFABF4CFD72E, ___m_ItemStack_0)); }
	inline FontWeightU5BU5D_t0C9E436904E570F798885BC6F264C7AE6608B5C6* get_m_ItemStack_0() const { return ___m_ItemStack_0; }
	inline FontWeightU5BU5D_t0C9E436904E570F798885BC6F264C7AE6608B5C6** get_address_of_m_ItemStack_0() { return &___m_ItemStack_0; }
	inline void set_m_ItemStack_0(FontWeightU5BU5D_t0C9E436904E570F798885BC6F264C7AE6608B5C6* value)
	{
		___m_ItemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ItemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Index_1() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_tB7224278867423278E1287BE6995BFABF4CFD72E, ___m_Index_1)); }
	inline int32_t get_m_Index_1() const { return ___m_Index_1; }
	inline int32_t* get_address_of_m_Index_1() { return &___m_Index_1; }
	inline void set_m_Index_1(int32_t value)
	{
		___m_Index_1 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_2() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_tB7224278867423278E1287BE6995BFABF4CFD72E, ___m_Capacity_2)); }
	inline int32_t get_m_Capacity_2() const { return ___m_Capacity_2; }
	inline int32_t* get_address_of_m_Capacity_2() { return &___m_Capacity_2; }
	inline void set_m_Capacity_2(int32_t value)
	{
		___m_Capacity_2 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_3() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_tB7224278867423278E1287BE6995BFABF4CFD72E, ___m_DefaultItem_3)); }
	inline int32_t get_m_DefaultItem_3() const { return ___m_DefaultItem_3; }
	inline int32_t* get_address_of_m_DefaultItem_3() { return &___m_DefaultItem_3; }
	inline void set_m_DefaultItem_3(int32_t value)
	{
		___m_DefaultItem_3 = value;
	}
};


// TMPro.TMP_RichTextTagStack`1<TMPro.TextAlignmentOptions>
struct TMP_RichTextTagStack_1_tC6B5B65212F3889D62C6EFC7FEE828485D7B9A10 
{
public:
	// T[] TMPro.TMP_RichTextTagStack`1::m_ItemStack
	TextAlignmentOptionsU5BU5D_tF6615B91E0768E42EC9238537B063FF09EE04AD1* ___m_ItemStack_0;
	// System.Int32 TMPro.TMP_RichTextTagStack`1::m_Index
	int32_t ___m_Index_1;
	// System.Int32 TMPro.TMP_RichTextTagStack`1::m_Capacity
	int32_t ___m_Capacity_2;
	// T TMPro.TMP_RichTextTagStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_3;

public:
	inline static int32_t get_offset_of_m_ItemStack_0() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_tC6B5B65212F3889D62C6EFC7FEE828485D7B9A10, ___m_ItemStack_0)); }
	inline TextAlignmentOptionsU5BU5D_tF6615B91E0768E42EC9238537B063FF09EE04AD1* get_m_ItemStack_0() const { return ___m_ItemStack_0; }
	inline TextAlignmentOptionsU5BU5D_tF6615B91E0768E42EC9238537B063FF09EE04AD1** get_address_of_m_ItemStack_0() { return &___m_ItemStack_0; }
	inline void set_m_ItemStack_0(TextAlignmentOptionsU5BU5D_tF6615B91E0768E42EC9238537B063FF09EE04AD1* value)
	{
		___m_ItemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ItemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Index_1() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_tC6B5B65212F3889D62C6EFC7FEE828485D7B9A10, ___m_Index_1)); }
	inline int32_t get_m_Index_1() const { return ___m_Index_1; }
	inline int32_t* get_address_of_m_Index_1() { return &___m_Index_1; }
	inline void set_m_Index_1(int32_t value)
	{
		___m_Index_1 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_2() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_tC6B5B65212F3889D62C6EFC7FEE828485D7B9A10, ___m_Capacity_2)); }
	inline int32_t get_m_Capacity_2() const { return ___m_Capacity_2; }
	inline int32_t* get_address_of_m_Capacity_2() { return &___m_Capacity_2; }
	inline void set_m_Capacity_2(int32_t value)
	{
		___m_Capacity_2 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_3() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_tC6B5B65212F3889D62C6EFC7FEE828485D7B9A10, ___m_DefaultItem_3)); }
	inline int32_t get_m_DefaultItem_3() const { return ___m_DefaultItem_3; }
	inline int32_t* get_address_of_m_DefaultItem_3() { return &___m_DefaultItem_3; }
	inline void set_m_DefaultItem_3(int32_t value)
	{
		___m_DefaultItem_3 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7 
{
public:
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.TextAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  ___lineExtents_19;

public:
	inline static int32_t get_offset_of_controlCharacterCount_0() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___controlCharacterCount_0)); }
	inline int32_t get_controlCharacterCount_0() const { return ___controlCharacterCount_0; }
	inline int32_t* get_address_of_controlCharacterCount_0() { return &___controlCharacterCount_0; }
	inline void set_controlCharacterCount_0(int32_t value)
	{
		___controlCharacterCount_0 = value;
	}

	inline static int32_t get_offset_of_characterCount_1() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___characterCount_1)); }
	inline int32_t get_characterCount_1() const { return ___characterCount_1; }
	inline int32_t* get_address_of_characterCount_1() { return &___characterCount_1; }
	inline void set_characterCount_1(int32_t value)
	{
		___characterCount_1 = value;
	}

	inline static int32_t get_offset_of_visibleCharacterCount_2() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___visibleCharacterCount_2)); }
	inline int32_t get_visibleCharacterCount_2() const { return ___visibleCharacterCount_2; }
	inline int32_t* get_address_of_visibleCharacterCount_2() { return &___visibleCharacterCount_2; }
	inline void set_visibleCharacterCount_2(int32_t value)
	{
		___visibleCharacterCount_2 = value;
	}

	inline static int32_t get_offset_of_spaceCount_3() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___spaceCount_3)); }
	inline int32_t get_spaceCount_3() const { return ___spaceCount_3; }
	inline int32_t* get_address_of_spaceCount_3() { return &___spaceCount_3; }
	inline void set_spaceCount_3(int32_t value)
	{
		___spaceCount_3 = value;
	}

	inline static int32_t get_offset_of_wordCount_4() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___wordCount_4)); }
	inline int32_t get_wordCount_4() const { return ___wordCount_4; }
	inline int32_t* get_address_of_wordCount_4() { return &___wordCount_4; }
	inline void set_wordCount_4(int32_t value)
	{
		___wordCount_4 = value;
	}

	inline static int32_t get_offset_of_firstCharacterIndex_5() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___firstCharacterIndex_5)); }
	inline int32_t get_firstCharacterIndex_5() const { return ___firstCharacterIndex_5; }
	inline int32_t* get_address_of_firstCharacterIndex_5() { return &___firstCharacterIndex_5; }
	inline void set_firstCharacterIndex_5(int32_t value)
	{
		___firstCharacterIndex_5 = value;
	}

	inline static int32_t get_offset_of_firstVisibleCharacterIndex_6() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___firstVisibleCharacterIndex_6)); }
	inline int32_t get_firstVisibleCharacterIndex_6() const { return ___firstVisibleCharacterIndex_6; }
	inline int32_t* get_address_of_firstVisibleCharacterIndex_6() { return &___firstVisibleCharacterIndex_6; }
	inline void set_firstVisibleCharacterIndex_6(int32_t value)
	{
		___firstVisibleCharacterIndex_6 = value;
	}

	inline static int32_t get_offset_of_lastCharacterIndex_7() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___lastCharacterIndex_7)); }
	inline int32_t get_lastCharacterIndex_7() const { return ___lastCharacterIndex_7; }
	inline int32_t* get_address_of_lastCharacterIndex_7() { return &___lastCharacterIndex_7; }
	inline void set_lastCharacterIndex_7(int32_t value)
	{
		___lastCharacterIndex_7 = value;
	}

	inline static int32_t get_offset_of_lastVisibleCharacterIndex_8() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___lastVisibleCharacterIndex_8)); }
	inline int32_t get_lastVisibleCharacterIndex_8() const { return ___lastVisibleCharacterIndex_8; }
	inline int32_t* get_address_of_lastVisibleCharacterIndex_8() { return &___lastVisibleCharacterIndex_8; }
	inline void set_lastVisibleCharacterIndex_8(int32_t value)
	{
		___lastVisibleCharacterIndex_8 = value;
	}

	inline static int32_t get_offset_of_length_9() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___length_9)); }
	inline float get_length_9() const { return ___length_9; }
	inline float* get_address_of_length_9() { return &___length_9; }
	inline void set_length_9(float value)
	{
		___length_9 = value;
	}

	inline static int32_t get_offset_of_lineHeight_10() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___lineHeight_10)); }
	inline float get_lineHeight_10() const { return ___lineHeight_10; }
	inline float* get_address_of_lineHeight_10() { return &___lineHeight_10; }
	inline void set_lineHeight_10(float value)
	{
		___lineHeight_10 = value;
	}

	inline static int32_t get_offset_of_ascender_11() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___ascender_11)); }
	inline float get_ascender_11() const { return ___ascender_11; }
	inline float* get_address_of_ascender_11() { return &___ascender_11; }
	inline void set_ascender_11(float value)
	{
		___ascender_11 = value;
	}

	inline static int32_t get_offset_of_baseline_12() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___baseline_12)); }
	inline float get_baseline_12() const { return ___baseline_12; }
	inline float* get_address_of_baseline_12() { return &___baseline_12; }
	inline void set_baseline_12(float value)
	{
		___baseline_12 = value;
	}

	inline static int32_t get_offset_of_descender_13() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___descender_13)); }
	inline float get_descender_13() const { return ___descender_13; }
	inline float* get_address_of_descender_13() { return &___descender_13; }
	inline void set_descender_13(float value)
	{
		___descender_13 = value;
	}

	inline static int32_t get_offset_of_maxAdvance_14() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___maxAdvance_14)); }
	inline float get_maxAdvance_14() const { return ___maxAdvance_14; }
	inline float* get_address_of_maxAdvance_14() { return &___maxAdvance_14; }
	inline void set_maxAdvance_14(float value)
	{
		___maxAdvance_14 = value;
	}

	inline static int32_t get_offset_of_width_15() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___width_15)); }
	inline float get_width_15() const { return ___width_15; }
	inline float* get_address_of_width_15() { return &___width_15; }
	inline void set_width_15(float value)
	{
		___width_15 = value;
	}

	inline static int32_t get_offset_of_marginLeft_16() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___marginLeft_16)); }
	inline float get_marginLeft_16() const { return ___marginLeft_16; }
	inline float* get_address_of_marginLeft_16() { return &___marginLeft_16; }
	inline void set_marginLeft_16(float value)
	{
		___marginLeft_16 = value;
	}

	inline static int32_t get_offset_of_marginRight_17() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___marginRight_17)); }
	inline float get_marginRight_17() const { return ___marginRight_17; }
	inline float* get_address_of_marginRight_17() { return &___marginRight_17; }
	inline void set_marginRight_17(float value)
	{
		___marginRight_17 = value;
	}

	inline static int32_t get_offset_of_alignment_18() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___alignment_18)); }
	inline int32_t get_alignment_18() const { return ___alignment_18; }
	inline int32_t* get_address_of_alignment_18() { return &___alignment_18; }
	inline void set_alignment_18(int32_t value)
	{
		___alignment_18 = value;
	}

	inline static int32_t get_offset_of_lineExtents_19() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___lineExtents_19)); }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  get_lineExtents_19() const { return ___lineExtents_19; }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA * get_address_of_lineExtents_19() { return &___lineExtents_19; }
	inline void set_lineExtents_19(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  value)
	{
		___lineExtents_19 = value;
	}
};


// Menu/<AnimateHeart>d__10
struct U3CAnimateHeartU3Ed__10_t014BA4D6E985BF6DE304D6D371FE8A2B0D2C56B6 
{
public:
	// System.Int32 Menu/<AnimateHeart>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder Menu/<AnimateHeart>d__10::<>t__builder
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  ___U3CU3Et__builder_1;
	// Menu Menu/<AnimateHeart>d__10::<>4__this
	Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CAnimateHeartU3Ed__10_t014BA4D6E985BF6DE304D6D371FE8A2B0D2C56B6, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CAnimateHeartU3Ed__10_t014BA4D6E985BF6DE304D6D371FE8A2B0D2C56B6, ___U3CU3Et__builder_1)); }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CAnimateHeartU3Ed__10_t014BA4D6E985BF6DE304D6D371FE8A2B0D2C56B6, ___U3CU3E4__this_2)); }
	inline Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// System.Func`2<System.Single,System.Single>
struct Func_2_t10AC82CE8886E423467ACF3C9F68E7DA50E26149  : public MulticastDelegate_t
{
public:

public:
};


// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// TMPro.WordWrapState
struct WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99 
{
public:
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_14;
	// System.Single TMPro.WordWrapState::previousLineAscender
	float ___previousLineAscender_15;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_16;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_17;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_18;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_19;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_20;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_21;
	// System.Single TMPro.WordWrapState::fontScale
	float ___fontScale_22;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_23;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_24;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_25;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_26;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * ___textInfo_27;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7  ___lineInfo_28;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___vertexColor_29;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___underlineColor_30;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___strikethroughColor_31;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___highlightColor_32;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  ___basicStyleStack_33;
	// TMPro.TMP_RichTextTagStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_RichTextTagStack_1_t1C19F739424A83939314F52144105F01D10F4C59  ___colorStack_34;
	// TMPro.TMP_RichTextTagStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_RichTextTagStack_1_t1C19F739424A83939314F52144105F01D10F4C59  ___underlineColorStack_35;
	// TMPro.TMP_RichTextTagStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_RichTextTagStack_1_t1C19F739424A83939314F52144105F01D10F4C59  ___strikethroughColorStack_36;
	// TMPro.TMP_RichTextTagStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_RichTextTagStack_1_t1C19F739424A83939314F52144105F01D10F4C59  ___highlightColorStack_37;
	// TMPro.TMP_RichTextTagStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_RichTextTagStack_1_t342372E460C6C5BFFFE5FF1A57DEE7E855012961  ___colorGradientStack_38;
	// TMPro.TMP_RichTextTagStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_RichTextTagStack_1_t36D1FD4270DC89CAF634A577A41355D7839A1A75  ___sizeStack_39;
	// TMPro.TMP_RichTextTagStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_RichTextTagStack_1_t36D1FD4270DC89CAF634A577A41355D7839A1A75  ___indentStack_40;
	// TMPro.TMP_RichTextTagStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_RichTextTagStack_1_tB7224278867423278E1287BE6995BFABF4CFD72E  ___fontWeightStack_41;
	// TMPro.TMP_RichTextTagStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_RichTextTagStack_1_t84ED35F1394C27DB285E413F24F5096C74045666  ___styleStack_42;
	// TMPro.TMP_RichTextTagStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_RichTextTagStack_1_t36D1FD4270DC89CAF634A577A41355D7839A1A75  ___baselineStack_43;
	// TMPro.TMP_RichTextTagStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_RichTextTagStack_1_t84ED35F1394C27DB285E413F24F5096C74045666  ___actionStack_44;
	// TMPro.TMP_RichTextTagStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_RichTextTagStack_1_t6295DEFD74CDCC6DA9F178985F0C6992364AC718  ___materialReferenceStack_45;
	// TMPro.TMP_RichTextTagStack`1<TMPro.TextAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_RichTextTagStack_1_tC6B5B65212F3889D62C6EFC7FEE828485D7B9A10  ___lineJustificationStack_46;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_47;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___currentFontAsset_48;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___currentSpriteAsset_49;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___currentMaterial_50;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_51;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  ___meshExtents_52;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_53;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_54;

public:
	inline static int32_t get_offset_of_previous_WordBreak_0() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___previous_WordBreak_0)); }
	inline int32_t get_previous_WordBreak_0() const { return ___previous_WordBreak_0; }
	inline int32_t* get_address_of_previous_WordBreak_0() { return &___previous_WordBreak_0; }
	inline void set_previous_WordBreak_0(int32_t value)
	{
		___previous_WordBreak_0 = value;
	}

	inline static int32_t get_offset_of_total_CharacterCount_1() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___total_CharacterCount_1)); }
	inline int32_t get_total_CharacterCount_1() const { return ___total_CharacterCount_1; }
	inline int32_t* get_address_of_total_CharacterCount_1() { return &___total_CharacterCount_1; }
	inline void set_total_CharacterCount_1(int32_t value)
	{
		___total_CharacterCount_1 = value;
	}

	inline static int32_t get_offset_of_visible_CharacterCount_2() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___visible_CharacterCount_2)); }
	inline int32_t get_visible_CharacterCount_2() const { return ___visible_CharacterCount_2; }
	inline int32_t* get_address_of_visible_CharacterCount_2() { return &___visible_CharacterCount_2; }
	inline void set_visible_CharacterCount_2(int32_t value)
	{
		___visible_CharacterCount_2 = value;
	}

	inline static int32_t get_offset_of_visible_SpriteCount_3() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___visible_SpriteCount_3)); }
	inline int32_t get_visible_SpriteCount_3() const { return ___visible_SpriteCount_3; }
	inline int32_t* get_address_of_visible_SpriteCount_3() { return &___visible_SpriteCount_3; }
	inline void set_visible_SpriteCount_3(int32_t value)
	{
		___visible_SpriteCount_3 = value;
	}

	inline static int32_t get_offset_of_visible_LinkCount_4() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___visible_LinkCount_4)); }
	inline int32_t get_visible_LinkCount_4() const { return ___visible_LinkCount_4; }
	inline int32_t* get_address_of_visible_LinkCount_4() { return &___visible_LinkCount_4; }
	inline void set_visible_LinkCount_4(int32_t value)
	{
		___visible_LinkCount_4 = value;
	}

	inline static int32_t get_offset_of_firstCharacterIndex_5() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___firstCharacterIndex_5)); }
	inline int32_t get_firstCharacterIndex_5() const { return ___firstCharacterIndex_5; }
	inline int32_t* get_address_of_firstCharacterIndex_5() { return &___firstCharacterIndex_5; }
	inline void set_firstCharacterIndex_5(int32_t value)
	{
		___firstCharacterIndex_5 = value;
	}

	inline static int32_t get_offset_of_firstVisibleCharacterIndex_6() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___firstVisibleCharacterIndex_6)); }
	inline int32_t get_firstVisibleCharacterIndex_6() const { return ___firstVisibleCharacterIndex_6; }
	inline int32_t* get_address_of_firstVisibleCharacterIndex_6() { return &___firstVisibleCharacterIndex_6; }
	inline void set_firstVisibleCharacterIndex_6(int32_t value)
	{
		___firstVisibleCharacterIndex_6 = value;
	}

	inline static int32_t get_offset_of_lastCharacterIndex_7() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___lastCharacterIndex_7)); }
	inline int32_t get_lastCharacterIndex_7() const { return ___lastCharacterIndex_7; }
	inline int32_t* get_address_of_lastCharacterIndex_7() { return &___lastCharacterIndex_7; }
	inline void set_lastCharacterIndex_7(int32_t value)
	{
		___lastCharacterIndex_7 = value;
	}

	inline static int32_t get_offset_of_lastVisibleCharIndex_8() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___lastVisibleCharIndex_8)); }
	inline int32_t get_lastVisibleCharIndex_8() const { return ___lastVisibleCharIndex_8; }
	inline int32_t* get_address_of_lastVisibleCharIndex_8() { return &___lastVisibleCharIndex_8; }
	inline void set_lastVisibleCharIndex_8(int32_t value)
	{
		___lastVisibleCharIndex_8 = value;
	}

	inline static int32_t get_offset_of_lineNumber_9() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___lineNumber_9)); }
	inline int32_t get_lineNumber_9() const { return ___lineNumber_9; }
	inline int32_t* get_address_of_lineNumber_9() { return &___lineNumber_9; }
	inline void set_lineNumber_9(int32_t value)
	{
		___lineNumber_9 = value;
	}

	inline static int32_t get_offset_of_maxCapHeight_10() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___maxCapHeight_10)); }
	inline float get_maxCapHeight_10() const { return ___maxCapHeight_10; }
	inline float* get_address_of_maxCapHeight_10() { return &___maxCapHeight_10; }
	inline void set_maxCapHeight_10(float value)
	{
		___maxCapHeight_10 = value;
	}

	inline static int32_t get_offset_of_maxAscender_11() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___maxAscender_11)); }
	inline float get_maxAscender_11() const { return ___maxAscender_11; }
	inline float* get_address_of_maxAscender_11() { return &___maxAscender_11; }
	inline void set_maxAscender_11(float value)
	{
		___maxAscender_11 = value;
	}

	inline static int32_t get_offset_of_maxDescender_12() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___maxDescender_12)); }
	inline float get_maxDescender_12() const { return ___maxDescender_12; }
	inline float* get_address_of_maxDescender_12() { return &___maxDescender_12; }
	inline void set_maxDescender_12(float value)
	{
		___maxDescender_12 = value;
	}

	inline static int32_t get_offset_of_maxLineAscender_13() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___maxLineAscender_13)); }
	inline float get_maxLineAscender_13() const { return ___maxLineAscender_13; }
	inline float* get_address_of_maxLineAscender_13() { return &___maxLineAscender_13; }
	inline void set_maxLineAscender_13(float value)
	{
		___maxLineAscender_13 = value;
	}

	inline static int32_t get_offset_of_maxLineDescender_14() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___maxLineDescender_14)); }
	inline float get_maxLineDescender_14() const { return ___maxLineDescender_14; }
	inline float* get_address_of_maxLineDescender_14() { return &___maxLineDescender_14; }
	inline void set_maxLineDescender_14(float value)
	{
		___maxLineDescender_14 = value;
	}

	inline static int32_t get_offset_of_previousLineAscender_15() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___previousLineAscender_15)); }
	inline float get_previousLineAscender_15() const { return ___previousLineAscender_15; }
	inline float* get_address_of_previousLineAscender_15() { return &___previousLineAscender_15; }
	inline void set_previousLineAscender_15(float value)
	{
		___previousLineAscender_15 = value;
	}

	inline static int32_t get_offset_of_xAdvance_16() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___xAdvance_16)); }
	inline float get_xAdvance_16() const { return ___xAdvance_16; }
	inline float* get_address_of_xAdvance_16() { return &___xAdvance_16; }
	inline void set_xAdvance_16(float value)
	{
		___xAdvance_16 = value;
	}

	inline static int32_t get_offset_of_preferredWidth_17() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___preferredWidth_17)); }
	inline float get_preferredWidth_17() const { return ___preferredWidth_17; }
	inline float* get_address_of_preferredWidth_17() { return &___preferredWidth_17; }
	inline void set_preferredWidth_17(float value)
	{
		___preferredWidth_17 = value;
	}

	inline static int32_t get_offset_of_preferredHeight_18() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___preferredHeight_18)); }
	inline float get_preferredHeight_18() const { return ___preferredHeight_18; }
	inline float* get_address_of_preferredHeight_18() { return &___preferredHeight_18; }
	inline void set_preferredHeight_18(float value)
	{
		___preferredHeight_18 = value;
	}

	inline static int32_t get_offset_of_previousLineScale_19() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___previousLineScale_19)); }
	inline float get_previousLineScale_19() const { return ___previousLineScale_19; }
	inline float* get_address_of_previousLineScale_19() { return &___previousLineScale_19; }
	inline void set_previousLineScale_19(float value)
	{
		___previousLineScale_19 = value;
	}

	inline static int32_t get_offset_of_wordCount_20() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___wordCount_20)); }
	inline int32_t get_wordCount_20() const { return ___wordCount_20; }
	inline int32_t* get_address_of_wordCount_20() { return &___wordCount_20; }
	inline void set_wordCount_20(int32_t value)
	{
		___wordCount_20 = value;
	}

	inline static int32_t get_offset_of_fontStyle_21() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___fontStyle_21)); }
	inline int32_t get_fontStyle_21() const { return ___fontStyle_21; }
	inline int32_t* get_address_of_fontStyle_21() { return &___fontStyle_21; }
	inline void set_fontStyle_21(int32_t value)
	{
		___fontStyle_21 = value;
	}

	inline static int32_t get_offset_of_fontScale_22() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___fontScale_22)); }
	inline float get_fontScale_22() const { return ___fontScale_22; }
	inline float* get_address_of_fontScale_22() { return &___fontScale_22; }
	inline void set_fontScale_22(float value)
	{
		___fontScale_22 = value;
	}

	inline static int32_t get_offset_of_fontScaleMultiplier_23() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___fontScaleMultiplier_23)); }
	inline float get_fontScaleMultiplier_23() const { return ___fontScaleMultiplier_23; }
	inline float* get_address_of_fontScaleMultiplier_23() { return &___fontScaleMultiplier_23; }
	inline void set_fontScaleMultiplier_23(float value)
	{
		___fontScaleMultiplier_23 = value;
	}

	inline static int32_t get_offset_of_currentFontSize_24() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___currentFontSize_24)); }
	inline float get_currentFontSize_24() const { return ___currentFontSize_24; }
	inline float* get_address_of_currentFontSize_24() { return &___currentFontSize_24; }
	inline void set_currentFontSize_24(float value)
	{
		___currentFontSize_24 = value;
	}

	inline static int32_t get_offset_of_baselineOffset_25() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___baselineOffset_25)); }
	inline float get_baselineOffset_25() const { return ___baselineOffset_25; }
	inline float* get_address_of_baselineOffset_25() { return &___baselineOffset_25; }
	inline void set_baselineOffset_25(float value)
	{
		___baselineOffset_25 = value;
	}

	inline static int32_t get_offset_of_lineOffset_26() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___lineOffset_26)); }
	inline float get_lineOffset_26() const { return ___lineOffset_26; }
	inline float* get_address_of_lineOffset_26() { return &___lineOffset_26; }
	inline void set_lineOffset_26(float value)
	{
		___lineOffset_26 = value;
	}

	inline static int32_t get_offset_of_textInfo_27() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___textInfo_27)); }
	inline TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * get_textInfo_27() const { return ___textInfo_27; }
	inline TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 ** get_address_of_textInfo_27() { return &___textInfo_27; }
	inline void set_textInfo_27(TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * value)
	{
		___textInfo_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textInfo_27), (void*)value);
	}

	inline static int32_t get_offset_of_lineInfo_28() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___lineInfo_28)); }
	inline TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7  get_lineInfo_28() const { return ___lineInfo_28; }
	inline TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7 * get_address_of_lineInfo_28() { return &___lineInfo_28; }
	inline void set_lineInfo_28(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7  value)
	{
		___lineInfo_28 = value;
	}

	inline static int32_t get_offset_of_vertexColor_29() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___vertexColor_29)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_vertexColor_29() const { return ___vertexColor_29; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_vertexColor_29() { return &___vertexColor_29; }
	inline void set_vertexColor_29(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___vertexColor_29 = value;
	}

	inline static int32_t get_offset_of_underlineColor_30() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___underlineColor_30)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_underlineColor_30() const { return ___underlineColor_30; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_underlineColor_30() { return &___underlineColor_30; }
	inline void set_underlineColor_30(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___underlineColor_30 = value;
	}

	inline static int32_t get_offset_of_strikethroughColor_31() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___strikethroughColor_31)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_strikethroughColor_31() const { return ___strikethroughColor_31; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_strikethroughColor_31() { return &___strikethroughColor_31; }
	inline void set_strikethroughColor_31(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___strikethroughColor_31 = value;
	}

	inline static int32_t get_offset_of_highlightColor_32() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___highlightColor_32)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_highlightColor_32() const { return ___highlightColor_32; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_highlightColor_32() { return &___highlightColor_32; }
	inline void set_highlightColor_32(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___highlightColor_32 = value;
	}

	inline static int32_t get_offset_of_basicStyleStack_33() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___basicStyleStack_33)); }
	inline TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  get_basicStyleStack_33() const { return ___basicStyleStack_33; }
	inline TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9 * get_address_of_basicStyleStack_33() { return &___basicStyleStack_33; }
	inline void set_basicStyleStack_33(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  value)
	{
		___basicStyleStack_33 = value;
	}

	inline static int32_t get_offset_of_colorStack_34() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___colorStack_34)); }
	inline TMP_RichTextTagStack_1_t1C19F739424A83939314F52144105F01D10F4C59  get_colorStack_34() const { return ___colorStack_34; }
	inline TMP_RichTextTagStack_1_t1C19F739424A83939314F52144105F01D10F4C59 * get_address_of_colorStack_34() { return &___colorStack_34; }
	inline void set_colorStack_34(TMP_RichTextTagStack_1_t1C19F739424A83939314F52144105F01D10F4C59  value)
	{
		___colorStack_34 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorStack_34))->___m_ItemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_underlineColorStack_35() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___underlineColorStack_35)); }
	inline TMP_RichTextTagStack_1_t1C19F739424A83939314F52144105F01D10F4C59  get_underlineColorStack_35() const { return ___underlineColorStack_35; }
	inline TMP_RichTextTagStack_1_t1C19F739424A83939314F52144105F01D10F4C59 * get_address_of_underlineColorStack_35() { return &___underlineColorStack_35; }
	inline void set_underlineColorStack_35(TMP_RichTextTagStack_1_t1C19F739424A83939314F52144105F01D10F4C59  value)
	{
		___underlineColorStack_35 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___underlineColorStack_35))->___m_ItemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_strikethroughColorStack_36() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___strikethroughColorStack_36)); }
	inline TMP_RichTextTagStack_1_t1C19F739424A83939314F52144105F01D10F4C59  get_strikethroughColorStack_36() const { return ___strikethroughColorStack_36; }
	inline TMP_RichTextTagStack_1_t1C19F739424A83939314F52144105F01D10F4C59 * get_address_of_strikethroughColorStack_36() { return &___strikethroughColorStack_36; }
	inline void set_strikethroughColorStack_36(TMP_RichTextTagStack_1_t1C19F739424A83939314F52144105F01D10F4C59  value)
	{
		___strikethroughColorStack_36 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___strikethroughColorStack_36))->___m_ItemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_highlightColorStack_37() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___highlightColorStack_37)); }
	inline TMP_RichTextTagStack_1_t1C19F739424A83939314F52144105F01D10F4C59  get_highlightColorStack_37() const { return ___highlightColorStack_37; }
	inline TMP_RichTextTagStack_1_t1C19F739424A83939314F52144105F01D10F4C59 * get_address_of_highlightColorStack_37() { return &___highlightColorStack_37; }
	inline void set_highlightColorStack_37(TMP_RichTextTagStack_1_t1C19F739424A83939314F52144105F01D10F4C59  value)
	{
		___highlightColorStack_37 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___highlightColorStack_37))->___m_ItemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorGradientStack_38() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___colorGradientStack_38)); }
	inline TMP_RichTextTagStack_1_t342372E460C6C5BFFFE5FF1A57DEE7E855012961  get_colorGradientStack_38() const { return ___colorGradientStack_38; }
	inline TMP_RichTextTagStack_1_t342372E460C6C5BFFFE5FF1A57DEE7E855012961 * get_address_of_colorGradientStack_38() { return &___colorGradientStack_38; }
	inline void set_colorGradientStack_38(TMP_RichTextTagStack_1_t342372E460C6C5BFFFE5FF1A57DEE7E855012961  value)
	{
		___colorGradientStack_38 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorGradientStack_38))->___m_ItemStack_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorGradientStack_38))->___m_DefaultItem_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_sizeStack_39() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___sizeStack_39)); }
	inline TMP_RichTextTagStack_1_t36D1FD4270DC89CAF634A577A41355D7839A1A75  get_sizeStack_39() const { return ___sizeStack_39; }
	inline TMP_RichTextTagStack_1_t36D1FD4270DC89CAF634A577A41355D7839A1A75 * get_address_of_sizeStack_39() { return &___sizeStack_39; }
	inline void set_sizeStack_39(TMP_RichTextTagStack_1_t36D1FD4270DC89CAF634A577A41355D7839A1A75  value)
	{
		___sizeStack_39 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___sizeStack_39))->___m_ItemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_indentStack_40() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___indentStack_40)); }
	inline TMP_RichTextTagStack_1_t36D1FD4270DC89CAF634A577A41355D7839A1A75  get_indentStack_40() const { return ___indentStack_40; }
	inline TMP_RichTextTagStack_1_t36D1FD4270DC89CAF634A577A41355D7839A1A75 * get_address_of_indentStack_40() { return &___indentStack_40; }
	inline void set_indentStack_40(TMP_RichTextTagStack_1_t36D1FD4270DC89CAF634A577A41355D7839A1A75  value)
	{
		___indentStack_40 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___indentStack_40))->___m_ItemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_fontWeightStack_41() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___fontWeightStack_41)); }
	inline TMP_RichTextTagStack_1_tB7224278867423278E1287BE6995BFABF4CFD72E  get_fontWeightStack_41() const { return ___fontWeightStack_41; }
	inline TMP_RichTextTagStack_1_tB7224278867423278E1287BE6995BFABF4CFD72E * get_address_of_fontWeightStack_41() { return &___fontWeightStack_41; }
	inline void set_fontWeightStack_41(TMP_RichTextTagStack_1_tB7224278867423278E1287BE6995BFABF4CFD72E  value)
	{
		___fontWeightStack_41 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___fontWeightStack_41))->___m_ItemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_styleStack_42() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___styleStack_42)); }
	inline TMP_RichTextTagStack_1_t84ED35F1394C27DB285E413F24F5096C74045666  get_styleStack_42() const { return ___styleStack_42; }
	inline TMP_RichTextTagStack_1_t84ED35F1394C27DB285E413F24F5096C74045666 * get_address_of_styleStack_42() { return &___styleStack_42; }
	inline void set_styleStack_42(TMP_RichTextTagStack_1_t84ED35F1394C27DB285E413F24F5096C74045666  value)
	{
		___styleStack_42 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___styleStack_42))->___m_ItemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_baselineStack_43() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___baselineStack_43)); }
	inline TMP_RichTextTagStack_1_t36D1FD4270DC89CAF634A577A41355D7839A1A75  get_baselineStack_43() const { return ___baselineStack_43; }
	inline TMP_RichTextTagStack_1_t36D1FD4270DC89CAF634A577A41355D7839A1A75 * get_address_of_baselineStack_43() { return &___baselineStack_43; }
	inline void set_baselineStack_43(TMP_RichTextTagStack_1_t36D1FD4270DC89CAF634A577A41355D7839A1A75  value)
	{
		___baselineStack_43 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___baselineStack_43))->___m_ItemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_actionStack_44() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___actionStack_44)); }
	inline TMP_RichTextTagStack_1_t84ED35F1394C27DB285E413F24F5096C74045666  get_actionStack_44() const { return ___actionStack_44; }
	inline TMP_RichTextTagStack_1_t84ED35F1394C27DB285E413F24F5096C74045666 * get_address_of_actionStack_44() { return &___actionStack_44; }
	inline void set_actionStack_44(TMP_RichTextTagStack_1_t84ED35F1394C27DB285E413F24F5096C74045666  value)
	{
		___actionStack_44 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___actionStack_44))->___m_ItemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_materialReferenceStack_45() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___materialReferenceStack_45)); }
	inline TMP_RichTextTagStack_1_t6295DEFD74CDCC6DA9F178985F0C6992364AC718  get_materialReferenceStack_45() const { return ___materialReferenceStack_45; }
	inline TMP_RichTextTagStack_1_t6295DEFD74CDCC6DA9F178985F0C6992364AC718 * get_address_of_materialReferenceStack_45() { return &___materialReferenceStack_45; }
	inline void set_materialReferenceStack_45(TMP_RichTextTagStack_1_t6295DEFD74CDCC6DA9F178985F0C6992364AC718  value)
	{
		___materialReferenceStack_45 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___materialReferenceStack_45))->___m_ItemStack_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___materialReferenceStack_45))->___m_DefaultItem_3))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___materialReferenceStack_45))->___m_DefaultItem_3))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___materialReferenceStack_45))->___m_DefaultItem_3))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___materialReferenceStack_45))->___m_DefaultItem_3))->___fallbackMaterial_6), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_lineJustificationStack_46() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___lineJustificationStack_46)); }
	inline TMP_RichTextTagStack_1_tC6B5B65212F3889D62C6EFC7FEE828485D7B9A10  get_lineJustificationStack_46() const { return ___lineJustificationStack_46; }
	inline TMP_RichTextTagStack_1_tC6B5B65212F3889D62C6EFC7FEE828485D7B9A10 * get_address_of_lineJustificationStack_46() { return &___lineJustificationStack_46; }
	inline void set_lineJustificationStack_46(TMP_RichTextTagStack_1_tC6B5B65212F3889D62C6EFC7FEE828485D7B9A10  value)
	{
		___lineJustificationStack_46 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___lineJustificationStack_46))->___m_ItemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_spriteAnimationID_47() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___spriteAnimationID_47)); }
	inline int32_t get_spriteAnimationID_47() const { return ___spriteAnimationID_47; }
	inline int32_t* get_address_of_spriteAnimationID_47() { return &___spriteAnimationID_47; }
	inline void set_spriteAnimationID_47(int32_t value)
	{
		___spriteAnimationID_47 = value;
	}

	inline static int32_t get_offset_of_currentFontAsset_48() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___currentFontAsset_48)); }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * get_currentFontAsset_48() const { return ___currentFontAsset_48; }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 ** get_address_of_currentFontAsset_48() { return &___currentFontAsset_48; }
	inline void set_currentFontAsset_48(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * value)
	{
		___currentFontAsset_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentFontAsset_48), (void*)value);
	}

	inline static int32_t get_offset_of_currentSpriteAsset_49() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___currentSpriteAsset_49)); }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * get_currentSpriteAsset_49() const { return ___currentSpriteAsset_49; }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 ** get_address_of_currentSpriteAsset_49() { return &___currentSpriteAsset_49; }
	inline void set_currentSpriteAsset_49(TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * value)
	{
		___currentSpriteAsset_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentSpriteAsset_49), (void*)value);
	}

	inline static int32_t get_offset_of_currentMaterial_50() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___currentMaterial_50)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_currentMaterial_50() const { return ___currentMaterial_50; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_currentMaterial_50() { return &___currentMaterial_50; }
	inline void set_currentMaterial_50(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___currentMaterial_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentMaterial_50), (void*)value);
	}

	inline static int32_t get_offset_of_currentMaterialIndex_51() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___currentMaterialIndex_51)); }
	inline int32_t get_currentMaterialIndex_51() const { return ___currentMaterialIndex_51; }
	inline int32_t* get_address_of_currentMaterialIndex_51() { return &___currentMaterialIndex_51; }
	inline void set_currentMaterialIndex_51(int32_t value)
	{
		___currentMaterialIndex_51 = value;
	}

	inline static int32_t get_offset_of_meshExtents_52() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___meshExtents_52)); }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  get_meshExtents_52() const { return ___meshExtents_52; }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA * get_address_of_meshExtents_52() { return &___meshExtents_52; }
	inline void set_meshExtents_52(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  value)
	{
		___meshExtents_52 = value;
	}

	inline static int32_t get_offset_of_tagNoParsing_53() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___tagNoParsing_53)); }
	inline bool get_tagNoParsing_53() const { return ___tagNoParsing_53; }
	inline bool* get_address_of_tagNoParsing_53() { return &___tagNoParsing_53; }
	inline void set_tagNoParsing_53(bool value)
	{
		___tagNoParsing_53 = value;
	}

	inline static int32_t get_offset_of_isNonBreakingSpace_54() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___isNonBreakingSpace_54)); }
	inline bool get_isNonBreakingSpace_54() const { return ___isNonBreakingSpace_54; }
	inline bool* get_address_of_isNonBreakingSpace_54() { return &___isNonBreakingSpace_54; }
	inline void set_isNonBreakingSpace_54(bool value)
	{
		___isNonBreakingSpace_54 = value;
	}
};

// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___maxLineAscender_13;
	float ___maxLineDescender_14;
	float ___previousLineAscender_15;
	float ___xAdvance_16;
	float ___preferredWidth_17;
	float ___preferredHeight_18;
	float ___previousLineScale_19;
	int32_t ___wordCount_20;
	int32_t ___fontStyle_21;
	float ___fontScale_22;
	float ___fontScaleMultiplier_23;
	float ___currentFontSize_24;
	float ___baselineOffset_25;
	float ___lineOffset_26;
	TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * ___textInfo_27;
	TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7  ___lineInfo_28;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___vertexColor_29;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___underlineColor_30;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___strikethroughColor_31;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___highlightColor_32;
	TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  ___basicStyleStack_33;
	TMP_RichTextTagStack_1_t1C19F739424A83939314F52144105F01D10F4C59  ___colorStack_34;
	TMP_RichTextTagStack_1_t1C19F739424A83939314F52144105F01D10F4C59  ___underlineColorStack_35;
	TMP_RichTextTagStack_1_t1C19F739424A83939314F52144105F01D10F4C59  ___strikethroughColorStack_36;
	TMP_RichTextTagStack_1_t1C19F739424A83939314F52144105F01D10F4C59  ___highlightColorStack_37;
	TMP_RichTextTagStack_1_t342372E460C6C5BFFFE5FF1A57DEE7E855012961  ___colorGradientStack_38;
	TMP_RichTextTagStack_1_t36D1FD4270DC89CAF634A577A41355D7839A1A75  ___sizeStack_39;
	TMP_RichTextTagStack_1_t36D1FD4270DC89CAF634A577A41355D7839A1A75  ___indentStack_40;
	TMP_RichTextTagStack_1_tB7224278867423278E1287BE6995BFABF4CFD72E  ___fontWeightStack_41;
	TMP_RichTextTagStack_1_t84ED35F1394C27DB285E413F24F5096C74045666  ___styleStack_42;
	TMP_RichTextTagStack_1_t36D1FD4270DC89CAF634A577A41355D7839A1A75  ___baselineStack_43;
	TMP_RichTextTagStack_1_t84ED35F1394C27DB285E413F24F5096C74045666  ___actionStack_44;
	TMP_RichTextTagStack_1_t6295DEFD74CDCC6DA9F178985F0C6992364AC718  ___materialReferenceStack_45;
	TMP_RichTextTagStack_1_tC6B5B65212F3889D62C6EFC7FEE828485D7B9A10  ___lineJustificationStack_46;
	int32_t ___spriteAnimationID_47;
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___currentFontAsset_48;
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___currentSpriteAsset_49;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___currentMaterial_50;
	int32_t ___currentMaterialIndex_51;
	Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  ___meshExtents_52;
	int32_t ___tagNoParsing_53;
	int32_t ___isNonBreakingSpace_54;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___maxLineAscender_13;
	float ___maxLineDescender_14;
	float ___previousLineAscender_15;
	float ___xAdvance_16;
	float ___preferredWidth_17;
	float ___preferredHeight_18;
	float ___previousLineScale_19;
	int32_t ___wordCount_20;
	int32_t ___fontStyle_21;
	float ___fontScale_22;
	float ___fontScaleMultiplier_23;
	float ___currentFontSize_24;
	float ___baselineOffset_25;
	float ___lineOffset_26;
	TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * ___textInfo_27;
	TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7  ___lineInfo_28;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___vertexColor_29;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___underlineColor_30;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___strikethroughColor_31;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___highlightColor_32;
	TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  ___basicStyleStack_33;
	TMP_RichTextTagStack_1_t1C19F739424A83939314F52144105F01D10F4C59  ___colorStack_34;
	TMP_RichTextTagStack_1_t1C19F739424A83939314F52144105F01D10F4C59  ___underlineColorStack_35;
	TMP_RichTextTagStack_1_t1C19F739424A83939314F52144105F01D10F4C59  ___strikethroughColorStack_36;
	TMP_RichTextTagStack_1_t1C19F739424A83939314F52144105F01D10F4C59  ___highlightColorStack_37;
	TMP_RichTextTagStack_1_t342372E460C6C5BFFFE5FF1A57DEE7E855012961  ___colorGradientStack_38;
	TMP_RichTextTagStack_1_t36D1FD4270DC89CAF634A577A41355D7839A1A75  ___sizeStack_39;
	TMP_RichTextTagStack_1_t36D1FD4270DC89CAF634A577A41355D7839A1A75  ___indentStack_40;
	TMP_RichTextTagStack_1_tB7224278867423278E1287BE6995BFABF4CFD72E  ___fontWeightStack_41;
	TMP_RichTextTagStack_1_t84ED35F1394C27DB285E413F24F5096C74045666  ___styleStack_42;
	TMP_RichTextTagStack_1_t36D1FD4270DC89CAF634A577A41355D7839A1A75  ___baselineStack_43;
	TMP_RichTextTagStack_1_t84ED35F1394C27DB285E413F24F5096C74045666  ___actionStack_44;
	TMP_RichTextTagStack_1_t6295DEFD74CDCC6DA9F178985F0C6992364AC718  ___materialReferenceStack_45;
	TMP_RichTextTagStack_1_tC6B5B65212F3889D62C6EFC7FEE828485D7B9A10  ___lineJustificationStack_46;
	int32_t ___spriteAnimationID_47;
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___currentFontAsset_48;
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___currentSpriteAsset_49;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___currentMaterial_50;
	int32_t ___currentMaterialIndex_51;
	Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  ___meshExtents_52;
	int32_t ___tagNoParsing_53;
	int32_t ___isNonBreakingSpace_54;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// Menu
struct Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// TMPro.TextMeshProUGUI Menu::inputText
	TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1 * ___inputText_4;
	// TMPro.TextMeshProUGUI Menu::nativeMessageText
	TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1 * ___nativeMessageText_5;
	// UnityEngine.Transform Menu::nativeHeartbeatImage
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___nativeHeartbeatImage_6;
	// TMPro.TextMeshProUGUI Menu::errorMessageText
	TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1 * ___errorMessageText_7;

public:
	inline static int32_t get_offset_of_inputText_4() { return static_cast<int32_t>(offsetof(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6, ___inputText_4)); }
	inline TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1 * get_inputText_4() const { return ___inputText_4; }
	inline TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1 ** get_address_of_inputText_4() { return &___inputText_4; }
	inline void set_inputText_4(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1 * value)
	{
		___inputText_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputText_4), (void*)value);
	}

	inline static int32_t get_offset_of_nativeMessageText_5() { return static_cast<int32_t>(offsetof(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6, ___nativeMessageText_5)); }
	inline TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1 * get_nativeMessageText_5() const { return ___nativeMessageText_5; }
	inline TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1 ** get_address_of_nativeMessageText_5() { return &___nativeMessageText_5; }
	inline void set_nativeMessageText_5(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1 * value)
	{
		___nativeMessageText_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nativeMessageText_5), (void*)value);
	}

	inline static int32_t get_offset_of_nativeHeartbeatImage_6() { return static_cast<int32_t>(offsetof(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6, ___nativeHeartbeatImage_6)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_nativeHeartbeatImage_6() const { return ___nativeHeartbeatImage_6; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_nativeHeartbeatImage_6() { return &___nativeHeartbeatImage_6; }
	inline void set_nativeHeartbeatImage_6(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___nativeHeartbeatImage_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nativeHeartbeatImage_6), (void*)value);
	}

	inline static int32_t get_offset_of_errorMessageText_7() { return static_cast<int32_t>(offsetof(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6, ___errorMessageText_7)); }
	inline TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1 * get_errorMessageText_7() const { return ___errorMessageText_7; }
	inline TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1 ** get_address_of_errorMessageText_7() { return &___errorMessageText_7; }
	inline void set_errorMessageText_7(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1 * value)
	{
		___errorMessageText_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___errorMessageText_7), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// TMPro.TMP_Text
struct TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_36;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_37;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___m_fontAsset_38;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___m_currentFontAsset_39;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_40;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_sharedMaterial_41;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_currentMaterial_42;
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD* ___m_materialReferences_43;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * ___m_materialReferenceIndexLookup_44;
	// TMPro.TMP_RichTextTagStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_RichTextTagStack_1_t6295DEFD74CDCC6DA9F178985F0C6992364AC718  ___m_materialReferenceStack_45;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_46;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* ___m_fontSharedMaterials_47;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_fontMaterial_48;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* ___m_fontMaterials_49;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_50;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_fontColor32_51;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_fontColor_52;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_underlineColor_54;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_strikethroughColor_55;
	// UnityEngine.Color32 TMPro.TMP_Text::m_highlightColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_highlightColor_56;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_highlightPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_highlightPadding_57;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_58;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_59;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D  ___m_fontColorGradient_60;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * ___m_fontColorGradientPreset_61;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___m_spriteAsset_62;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_63;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_64;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_spriteColor_65;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_66;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_faceColor_67;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_outlineColor_68;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_69;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_70;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_71;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_72;
	// TMPro.TMP_RichTextTagStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_RichTextTagStack_1_t36D1FD4270DC89CAF634A577A41355D7839A1A75  ___m_sizeStack_73;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_74;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_75;
	// TMPro.TMP_RichTextTagStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_RichTextTagStack_1_tB7224278867423278E1287BE6995BFABF4CFD72E  ___m_FontWeightStack_76;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_77;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_78;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_79;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_80;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_81;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_82;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_83;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  ___m_fontStyleStack_84;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_85;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_86;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_87;
	// TMPro.TMP_RichTextTagStack`1<TMPro.TextAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_RichTextTagStack_1_tC6B5B65212F3889D62C6EFC7FEE828485D7B9A10  ___m_lineJustificationStack_88;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_textContainerLocalCorners_89;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_90;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_91;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_92;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_93;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_94;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_95;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_96;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_97;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_98;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_99;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_100;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_101;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_102;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_103;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_104;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_105;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_106;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_107;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * ___m_linkedTextComponent_108;
	// System.Boolean TMPro.TMP_Text::m_isLinkedTextComponent
	bool ___m_isLinkedTextComponent_109;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_110;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_111;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_112;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_113;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_114;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_115;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_116;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_117;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_118;
	// System.Boolean TMPro.TMP_Text::m_ignoreRectMaskCulling
	bool ___m_ignoreRectMaskCulling_119;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_120;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_121;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_122;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_123;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_124;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_125;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_126;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_127;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_128;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_129;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_130;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_131;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_132;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_133;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_margin_134;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_135;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_136;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_137;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_138;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_139;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * ___m_textInfo_140;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_141;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_142;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_transform_143;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_rectTransform_144;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_145;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_146;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_mesh_147;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_148;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t07C769A1F1F85B545DD32357826E08F569E3D902 * ___m_spriteAnimator_149;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_150;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_151;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_152;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_153;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_154;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_155;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tE514951184806899FE23EC4FA6112A5F2038CECF * ___m_LayoutElement_156;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_157;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_158;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_159;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_160;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_161;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_162;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_163;
	// System.Int32 TMPro.TMP_Text::m_recursiveCount
	int32_t ___m_recursiveCount_164;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_165;
	// System.Boolean TMPro.TMP_Text::m_isCalculateSizeRequired
	bool ___m_isCalculateSizeRequired_166;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_167;
	// System.Boolean TMPro.TMP_Text::m_verticesAlreadyDirty
	bool ___m_verticesAlreadyDirty_168;
	// System.Boolean TMPro.TMP_Text::m_layoutAlreadyDirty
	bool ___m_layoutAlreadyDirty_169;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_170;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_171;
	// System.Boolean TMPro.TMP_Text::m_isInputParsingRequired
	bool ___m_isInputParsingRequired_172;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_173;
	// System.String TMPro.TMP_Text::old_text
	String_t* ___old_text_174;
	// System.Single TMPro.TMP_Text::m_fontScale
	float ___m_fontScale_175;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_176;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___m_htmlTag_177;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t81DC8CE2ED156F9CA996E2DC8A64A973A156D615* ___m_xmlAttribute_178;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___m_attributeParameterValues_179;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_180;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_181;
	// TMPro.TMP_RichTextTagStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_RichTextTagStack_1_t36D1FD4270DC89CAF634A577A41355D7839A1A75  ___m_indentStack_182;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_183;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_184;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___m_FXMatrix_185;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_186;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextParsingBuffer
	UnicodeCharU5BU5D_tB233FC88865130D0B1EA18DA685C2AF41FB134F7* ___m_TextParsingBuffer_187;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970* ___m_internalCharacterInfo_188;
	// System.Char[] TMPro.TMP_Text::m_input_CharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___m_input_CharArray_189;
	// System.Int32 TMPro.TMP_Text::m_charArray_Length
	int32_t ___m_charArray_Length_190;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_191;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  ___m_SavedWordWrapState_192;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  ___m_SavedLineState_193;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_194;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_195;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_196;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_197;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_198;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_199;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_200;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_201;
	// System.Single TMPro.TMP_Text::m_maxAscender
	float ___m_maxAscender_202;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_203;
	// System.Single TMPro.TMP_Text::m_maxDescender
	float ___m_maxDescender_204;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_205;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_206;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_207;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_208;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  ___m_meshExtents_209;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_htmlColor_210;
	// TMPro.TMP_RichTextTagStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_RichTextTagStack_1_t1C19F739424A83939314F52144105F01D10F4C59  ___m_colorStack_211;
	// TMPro.TMP_RichTextTagStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_RichTextTagStack_1_t1C19F739424A83939314F52144105F01D10F4C59  ___m_underlineColorStack_212;
	// TMPro.TMP_RichTextTagStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_RichTextTagStack_1_t1C19F739424A83939314F52144105F01D10F4C59  ___m_strikethroughColorStack_213;
	// TMPro.TMP_RichTextTagStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_highlightColorStack
	TMP_RichTextTagStack_1_t1C19F739424A83939314F52144105F01D10F4C59  ___m_highlightColorStack_214;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * ___m_colorGradientPreset_215;
	// TMPro.TMP_RichTextTagStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_RichTextTagStack_1_t342372E460C6C5BFFFE5FF1A57DEE7E855012961  ___m_colorGradientStack_216;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_217;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_218;
	// TMPro.TMP_RichTextTagStack`1<System.Int32> TMPro.TMP_Text::m_styleStack
	TMP_RichTextTagStack_1_t84ED35F1394C27DB285E413F24F5096C74045666  ___m_styleStack_219;
	// TMPro.TMP_RichTextTagStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_RichTextTagStack_1_t84ED35F1394C27DB285E413F24F5096C74045666  ___m_actionStack_220;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_221;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_222;
	// TMPro.TMP_RichTextTagStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_RichTextTagStack_1_t36D1FD4270DC89CAF634A577A41355D7839A1A75  ___m_baselineOffsetStack_223;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_224;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_225;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832 * ___m_cached_TextElement_226;
	// TMPro.TMP_Character TMPro.TMP_Text::m_cached_Underline_Character
	TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C * ___m_cached_Underline_Character_227;
	// TMPro.TMP_Character TMPro.TMP_Text::m_cached_Ellipsis_Character
	TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C * ___m_cached_Ellipsis_Character_228;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___m_defaultSpriteAsset_229;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___m_currentSpriteAsset_230;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_231;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_232;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_233;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_234;
	// System.Single[] TMPro.TMP_Text::k_Power
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___k_Power_235;

public:
	inline static int32_t get_offset_of_m_text_36() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_text_36)); }
	inline String_t* get_m_text_36() const { return ___m_text_36; }
	inline String_t** get_address_of_m_text_36() { return &___m_text_36; }
	inline void set_m_text_36(String_t* value)
	{
		___m_text_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_text_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_isRightToLeft_37() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isRightToLeft_37)); }
	inline bool get_m_isRightToLeft_37() const { return ___m_isRightToLeft_37; }
	inline bool* get_address_of_m_isRightToLeft_37() { return &___m_isRightToLeft_37; }
	inline void set_m_isRightToLeft_37(bool value)
	{
		___m_isRightToLeft_37 = value;
	}

	inline static int32_t get_offset_of_m_fontAsset_38() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontAsset_38)); }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * get_m_fontAsset_38() const { return ___m_fontAsset_38; }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 ** get_address_of_m_fontAsset_38() { return &___m_fontAsset_38; }
	inline void set_m_fontAsset_38(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * value)
	{
		___m_fontAsset_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontAsset_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_currentFontAsset_39() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_currentFontAsset_39)); }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * get_m_currentFontAsset_39() const { return ___m_currentFontAsset_39; }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 ** get_address_of_m_currentFontAsset_39() { return &___m_currentFontAsset_39; }
	inline void set_m_currentFontAsset_39(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * value)
	{
		___m_currentFontAsset_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_currentFontAsset_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_isSDFShader_40() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isSDFShader_40)); }
	inline bool get_m_isSDFShader_40() const { return ___m_isSDFShader_40; }
	inline bool* get_address_of_m_isSDFShader_40() { return &___m_isSDFShader_40; }
	inline void set_m_isSDFShader_40(bool value)
	{
		___m_isSDFShader_40 = value;
	}

	inline static int32_t get_offset_of_m_sharedMaterial_41() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_sharedMaterial_41)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_sharedMaterial_41() const { return ___m_sharedMaterial_41; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_sharedMaterial_41() { return &___m_sharedMaterial_41; }
	inline void set_m_sharedMaterial_41(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_sharedMaterial_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_sharedMaterial_41), (void*)value);
	}

	inline static int32_t get_offset_of_m_currentMaterial_42() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_currentMaterial_42)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_currentMaterial_42() const { return ___m_currentMaterial_42; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_currentMaterial_42() { return &___m_currentMaterial_42; }
	inline void set_m_currentMaterial_42(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_currentMaterial_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_currentMaterial_42), (void*)value);
	}

	inline static int32_t get_offset_of_m_materialReferences_43() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_materialReferences_43)); }
	inline MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD* get_m_materialReferences_43() const { return ___m_materialReferences_43; }
	inline MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD** get_address_of_m_materialReferences_43() { return &___m_materialReferences_43; }
	inline void set_m_materialReferences_43(MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD* value)
	{
		___m_materialReferences_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_materialReferences_43), (void*)value);
	}

	inline static int32_t get_offset_of_m_materialReferenceIndexLookup_44() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_materialReferenceIndexLookup_44)); }
	inline Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * get_m_materialReferenceIndexLookup_44() const { return ___m_materialReferenceIndexLookup_44; }
	inline Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 ** get_address_of_m_materialReferenceIndexLookup_44() { return &___m_materialReferenceIndexLookup_44; }
	inline void set_m_materialReferenceIndexLookup_44(Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * value)
	{
		___m_materialReferenceIndexLookup_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_materialReferenceIndexLookup_44), (void*)value);
	}

	inline static int32_t get_offset_of_m_materialReferenceStack_45() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_materialReferenceStack_45)); }
	inline TMP_RichTextTagStack_1_t6295DEFD74CDCC6DA9F178985F0C6992364AC718  get_m_materialReferenceStack_45() const { return ___m_materialReferenceStack_45; }
	inline TMP_RichTextTagStack_1_t6295DEFD74CDCC6DA9F178985F0C6992364AC718 * get_address_of_m_materialReferenceStack_45() { return &___m_materialReferenceStack_45; }
	inline void set_m_materialReferenceStack_45(TMP_RichTextTagStack_1_t6295DEFD74CDCC6DA9F178985F0C6992364AC718  value)
	{
		___m_materialReferenceStack_45 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_materialReferenceStack_45))->___m_ItemStack_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_materialReferenceStack_45))->___m_DefaultItem_3))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_materialReferenceStack_45))->___m_DefaultItem_3))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_materialReferenceStack_45))->___m_DefaultItem_3))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_materialReferenceStack_45))->___m_DefaultItem_3))->___fallbackMaterial_6), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_currentMaterialIndex_46() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_currentMaterialIndex_46)); }
	inline int32_t get_m_currentMaterialIndex_46() const { return ___m_currentMaterialIndex_46; }
	inline int32_t* get_address_of_m_currentMaterialIndex_46() { return &___m_currentMaterialIndex_46; }
	inline void set_m_currentMaterialIndex_46(int32_t value)
	{
		___m_currentMaterialIndex_46 = value;
	}

	inline static int32_t get_offset_of_m_fontSharedMaterials_47() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontSharedMaterials_47)); }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* get_m_fontSharedMaterials_47() const { return ___m_fontSharedMaterials_47; }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492** get_address_of_m_fontSharedMaterials_47() { return &___m_fontSharedMaterials_47; }
	inline void set_m_fontSharedMaterials_47(MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* value)
	{
		___m_fontSharedMaterials_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontSharedMaterials_47), (void*)value);
	}

	inline static int32_t get_offset_of_m_fontMaterial_48() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontMaterial_48)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_fontMaterial_48() const { return ___m_fontMaterial_48; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_fontMaterial_48() { return &___m_fontMaterial_48; }
	inline void set_m_fontMaterial_48(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_fontMaterial_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontMaterial_48), (void*)value);
	}

	inline static int32_t get_offset_of_m_fontMaterials_49() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontMaterials_49)); }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* get_m_fontMaterials_49() const { return ___m_fontMaterials_49; }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492** get_address_of_m_fontMaterials_49() { return &___m_fontMaterials_49; }
	inline void set_m_fontMaterials_49(MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* value)
	{
		___m_fontMaterials_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontMaterials_49), (void*)value);
	}

	inline static int32_t get_offset_of_m_isMaterialDirty_50() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isMaterialDirty_50)); }
	inline bool get_m_isMaterialDirty_50() const { return ___m_isMaterialDirty_50; }
	inline bool* get_address_of_m_isMaterialDirty_50() { return &___m_isMaterialDirty_50; }
	inline void set_m_isMaterialDirty_50(bool value)
	{
		___m_isMaterialDirty_50 = value;
	}

	inline static int32_t get_offset_of_m_fontColor32_51() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontColor32_51)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_fontColor32_51() const { return ___m_fontColor32_51; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_fontColor32_51() { return &___m_fontColor32_51; }
	inline void set_m_fontColor32_51(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_fontColor32_51 = value;
	}

	inline static int32_t get_offset_of_m_fontColor_52() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontColor_52)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_fontColor_52() const { return ___m_fontColor_52; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_fontColor_52() { return &___m_fontColor_52; }
	inline void set_m_fontColor_52(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_fontColor_52 = value;
	}

	inline static int32_t get_offset_of_m_underlineColor_54() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_underlineColor_54)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_underlineColor_54() const { return ___m_underlineColor_54; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_underlineColor_54() { return &___m_underlineColor_54; }
	inline void set_m_underlineColor_54(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_underlineColor_54 = value;
	}

	inline static int32_t get_offset_of_m_strikethroughColor_55() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_strikethroughColor_55)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_strikethroughColor_55() const { return ___m_strikethroughColor_55; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_strikethroughColor_55() { return &___m_strikethroughColor_55; }
	inline void set_m_strikethroughColor_55(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_strikethroughColor_55 = value;
	}

	inline static int32_t get_offset_of_m_highlightColor_56() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_highlightColor_56)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_highlightColor_56() const { return ___m_highlightColor_56; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_highlightColor_56() { return &___m_highlightColor_56; }
	inline void set_m_highlightColor_56(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_highlightColor_56 = value;
	}

	inline static int32_t get_offset_of_m_highlightPadding_57() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_highlightPadding_57)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_highlightPadding_57() const { return ___m_highlightPadding_57; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_highlightPadding_57() { return &___m_highlightPadding_57; }
	inline void set_m_highlightPadding_57(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_highlightPadding_57 = value;
	}

	inline static int32_t get_offset_of_m_enableVertexGradient_58() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_enableVertexGradient_58)); }
	inline bool get_m_enableVertexGradient_58() const { return ___m_enableVertexGradient_58; }
	inline bool* get_address_of_m_enableVertexGradient_58() { return &___m_enableVertexGradient_58; }
	inline void set_m_enableVertexGradient_58(bool value)
	{
		___m_enableVertexGradient_58 = value;
	}

	inline static int32_t get_offset_of_m_colorMode_59() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_colorMode_59)); }
	inline int32_t get_m_colorMode_59() const { return ___m_colorMode_59; }
	inline int32_t* get_address_of_m_colorMode_59() { return &___m_colorMode_59; }
	inline void set_m_colorMode_59(int32_t value)
	{
		___m_colorMode_59 = value;
	}

	inline static int32_t get_offset_of_m_fontColorGradient_60() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontColorGradient_60)); }
	inline VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D  get_m_fontColorGradient_60() const { return ___m_fontColorGradient_60; }
	inline VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D * get_address_of_m_fontColorGradient_60() { return &___m_fontColorGradient_60; }
	inline void set_m_fontColorGradient_60(VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D  value)
	{
		___m_fontColorGradient_60 = value;
	}

	inline static int32_t get_offset_of_m_fontColorGradientPreset_61() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontColorGradientPreset_61)); }
	inline TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * get_m_fontColorGradientPreset_61() const { return ___m_fontColorGradientPreset_61; }
	inline TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 ** get_address_of_m_fontColorGradientPreset_61() { return &___m_fontColorGradientPreset_61; }
	inline void set_m_fontColorGradientPreset_61(TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * value)
	{
		___m_fontColorGradientPreset_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontColorGradientPreset_61), (void*)value);
	}

	inline static int32_t get_offset_of_m_spriteAsset_62() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_spriteAsset_62)); }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * get_m_spriteAsset_62() const { return ___m_spriteAsset_62; }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 ** get_address_of_m_spriteAsset_62() { return &___m_spriteAsset_62; }
	inline void set_m_spriteAsset_62(TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * value)
	{
		___m_spriteAsset_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_spriteAsset_62), (void*)value);
	}

	inline static int32_t get_offset_of_m_tintAllSprites_63() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_tintAllSprites_63)); }
	inline bool get_m_tintAllSprites_63() const { return ___m_tintAllSprites_63; }
	inline bool* get_address_of_m_tintAllSprites_63() { return &___m_tintAllSprites_63; }
	inline void set_m_tintAllSprites_63(bool value)
	{
		___m_tintAllSprites_63 = value;
	}

	inline static int32_t get_offset_of_m_tintSprite_64() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_tintSprite_64)); }
	inline bool get_m_tintSprite_64() const { return ___m_tintSprite_64; }
	inline bool* get_address_of_m_tintSprite_64() { return &___m_tintSprite_64; }
	inline void set_m_tintSprite_64(bool value)
	{
		___m_tintSprite_64 = value;
	}

	inline static int32_t get_offset_of_m_spriteColor_65() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_spriteColor_65)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_spriteColor_65() const { return ___m_spriteColor_65; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_spriteColor_65() { return &___m_spriteColor_65; }
	inline void set_m_spriteColor_65(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_spriteColor_65 = value;
	}

	inline static int32_t get_offset_of_m_overrideHtmlColors_66() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_overrideHtmlColors_66)); }
	inline bool get_m_overrideHtmlColors_66() const { return ___m_overrideHtmlColors_66; }
	inline bool* get_address_of_m_overrideHtmlColors_66() { return &___m_overrideHtmlColors_66; }
	inline void set_m_overrideHtmlColors_66(bool value)
	{
		___m_overrideHtmlColors_66 = value;
	}

	inline static int32_t get_offset_of_m_faceColor_67() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_faceColor_67)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_faceColor_67() const { return ___m_faceColor_67; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_faceColor_67() { return &___m_faceColor_67; }
	inline void set_m_faceColor_67(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_faceColor_67 = value;
	}

	inline static int32_t get_offset_of_m_outlineColor_68() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_outlineColor_68)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_outlineColor_68() const { return ___m_outlineColor_68; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_outlineColor_68() { return &___m_outlineColor_68; }
	inline void set_m_outlineColor_68(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_outlineColor_68 = value;
	}

	inline static int32_t get_offset_of_m_outlineWidth_69() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_outlineWidth_69)); }
	inline float get_m_outlineWidth_69() const { return ___m_outlineWidth_69; }
	inline float* get_address_of_m_outlineWidth_69() { return &___m_outlineWidth_69; }
	inline void set_m_outlineWidth_69(float value)
	{
		___m_outlineWidth_69 = value;
	}

	inline static int32_t get_offset_of_m_fontSize_70() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontSize_70)); }
	inline float get_m_fontSize_70() const { return ___m_fontSize_70; }
	inline float* get_address_of_m_fontSize_70() { return &___m_fontSize_70; }
	inline void set_m_fontSize_70(float value)
	{
		___m_fontSize_70 = value;
	}

	inline static int32_t get_offset_of_m_currentFontSize_71() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_currentFontSize_71)); }
	inline float get_m_currentFontSize_71() const { return ___m_currentFontSize_71; }
	inline float* get_address_of_m_currentFontSize_71() { return &___m_currentFontSize_71; }
	inline void set_m_currentFontSize_71(float value)
	{
		___m_currentFontSize_71 = value;
	}

	inline static int32_t get_offset_of_m_fontSizeBase_72() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontSizeBase_72)); }
	inline float get_m_fontSizeBase_72() const { return ___m_fontSizeBase_72; }
	inline float* get_address_of_m_fontSizeBase_72() { return &___m_fontSizeBase_72; }
	inline void set_m_fontSizeBase_72(float value)
	{
		___m_fontSizeBase_72 = value;
	}

	inline static int32_t get_offset_of_m_sizeStack_73() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_sizeStack_73)); }
	inline TMP_RichTextTagStack_1_t36D1FD4270DC89CAF634A577A41355D7839A1A75  get_m_sizeStack_73() const { return ___m_sizeStack_73; }
	inline TMP_RichTextTagStack_1_t36D1FD4270DC89CAF634A577A41355D7839A1A75 * get_address_of_m_sizeStack_73() { return &___m_sizeStack_73; }
	inline void set_m_sizeStack_73(TMP_RichTextTagStack_1_t36D1FD4270DC89CAF634A577A41355D7839A1A75  value)
	{
		___m_sizeStack_73 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_sizeStack_73))->___m_ItemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_fontWeight_74() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontWeight_74)); }
	inline int32_t get_m_fontWeight_74() const { return ___m_fontWeight_74; }
	inline int32_t* get_address_of_m_fontWeight_74() { return &___m_fontWeight_74; }
	inline void set_m_fontWeight_74(int32_t value)
	{
		___m_fontWeight_74 = value;
	}

	inline static int32_t get_offset_of_m_FontWeightInternal_75() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_FontWeightInternal_75)); }
	inline int32_t get_m_FontWeightInternal_75() const { return ___m_FontWeightInternal_75; }
	inline int32_t* get_address_of_m_FontWeightInternal_75() { return &___m_FontWeightInternal_75; }
	inline void set_m_FontWeightInternal_75(int32_t value)
	{
		___m_FontWeightInternal_75 = value;
	}

	inline static int32_t get_offset_of_m_FontWeightStack_76() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_FontWeightStack_76)); }
	inline TMP_RichTextTagStack_1_tB7224278867423278E1287BE6995BFABF4CFD72E  get_m_FontWeightStack_76() const { return ___m_FontWeightStack_76; }
	inline TMP_RichTextTagStack_1_tB7224278867423278E1287BE6995BFABF4CFD72E * get_address_of_m_FontWeightStack_76() { return &___m_FontWeightStack_76; }
	inline void set_m_FontWeightStack_76(TMP_RichTextTagStack_1_tB7224278867423278E1287BE6995BFABF4CFD72E  value)
	{
		___m_FontWeightStack_76 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_FontWeightStack_76))->___m_ItemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_enableAutoSizing_77() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_enableAutoSizing_77)); }
	inline bool get_m_enableAutoSizing_77() const { return ___m_enableAutoSizing_77; }
	inline bool* get_address_of_m_enableAutoSizing_77() { return &___m_enableAutoSizing_77; }
	inline void set_m_enableAutoSizing_77(bool value)
	{
		___m_enableAutoSizing_77 = value;
	}

	inline static int32_t get_offset_of_m_maxFontSize_78() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxFontSize_78)); }
	inline float get_m_maxFontSize_78() const { return ___m_maxFontSize_78; }
	inline float* get_address_of_m_maxFontSize_78() { return &___m_maxFontSize_78; }
	inline void set_m_maxFontSize_78(float value)
	{
		___m_maxFontSize_78 = value;
	}

	inline static int32_t get_offset_of_m_minFontSize_79() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_minFontSize_79)); }
	inline float get_m_minFontSize_79() const { return ___m_minFontSize_79; }
	inline float* get_address_of_m_minFontSize_79() { return &___m_minFontSize_79; }
	inline void set_m_minFontSize_79(float value)
	{
		___m_minFontSize_79 = value;
	}

	inline static int32_t get_offset_of_m_fontSizeMin_80() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontSizeMin_80)); }
	inline float get_m_fontSizeMin_80() const { return ___m_fontSizeMin_80; }
	inline float* get_address_of_m_fontSizeMin_80() { return &___m_fontSizeMin_80; }
	inline void set_m_fontSizeMin_80(float value)
	{
		___m_fontSizeMin_80 = value;
	}

	inline static int32_t get_offset_of_m_fontSizeMax_81() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontSizeMax_81)); }
	inline float get_m_fontSizeMax_81() const { return ___m_fontSizeMax_81; }
	inline float* get_address_of_m_fontSizeMax_81() { return &___m_fontSizeMax_81; }
	inline void set_m_fontSizeMax_81(float value)
	{
		___m_fontSizeMax_81 = value;
	}

	inline static int32_t get_offset_of_m_fontStyle_82() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontStyle_82)); }
	inline int32_t get_m_fontStyle_82() const { return ___m_fontStyle_82; }
	inline int32_t* get_address_of_m_fontStyle_82() { return &___m_fontStyle_82; }
	inline void set_m_fontStyle_82(int32_t value)
	{
		___m_fontStyle_82 = value;
	}

	inline static int32_t get_offset_of_m_FontStyleInternal_83() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_FontStyleInternal_83)); }
	inline int32_t get_m_FontStyleInternal_83() const { return ___m_FontStyleInternal_83; }
	inline int32_t* get_address_of_m_FontStyleInternal_83() { return &___m_FontStyleInternal_83; }
	inline void set_m_FontStyleInternal_83(int32_t value)
	{
		___m_FontStyleInternal_83 = value;
	}

	inline static int32_t get_offset_of_m_fontStyleStack_84() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontStyleStack_84)); }
	inline TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  get_m_fontStyleStack_84() const { return ___m_fontStyleStack_84; }
	inline TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9 * get_address_of_m_fontStyleStack_84() { return &___m_fontStyleStack_84; }
	inline void set_m_fontStyleStack_84(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  value)
	{
		___m_fontStyleStack_84 = value;
	}

	inline static int32_t get_offset_of_m_isUsingBold_85() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isUsingBold_85)); }
	inline bool get_m_isUsingBold_85() const { return ___m_isUsingBold_85; }
	inline bool* get_address_of_m_isUsingBold_85() { return &___m_isUsingBold_85; }
	inline void set_m_isUsingBold_85(bool value)
	{
		___m_isUsingBold_85 = value;
	}

	inline static int32_t get_offset_of_m_textAlignment_86() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_textAlignment_86)); }
	inline int32_t get_m_textAlignment_86() const { return ___m_textAlignment_86; }
	inline int32_t* get_address_of_m_textAlignment_86() { return &___m_textAlignment_86; }
	inline void set_m_textAlignment_86(int32_t value)
	{
		___m_textAlignment_86 = value;
	}

	inline static int32_t get_offset_of_m_lineJustification_87() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineJustification_87)); }
	inline int32_t get_m_lineJustification_87() const { return ___m_lineJustification_87; }
	inline int32_t* get_address_of_m_lineJustification_87() { return &___m_lineJustification_87; }
	inline void set_m_lineJustification_87(int32_t value)
	{
		___m_lineJustification_87 = value;
	}

	inline static int32_t get_offset_of_m_lineJustificationStack_88() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineJustificationStack_88)); }
	inline TMP_RichTextTagStack_1_tC6B5B65212F3889D62C6EFC7FEE828485D7B9A10  get_m_lineJustificationStack_88() const { return ___m_lineJustificationStack_88; }
	inline TMP_RichTextTagStack_1_tC6B5B65212F3889D62C6EFC7FEE828485D7B9A10 * get_address_of_m_lineJustificationStack_88() { return &___m_lineJustificationStack_88; }
	inline void set_m_lineJustificationStack_88(TMP_RichTextTagStack_1_tC6B5B65212F3889D62C6EFC7FEE828485D7B9A10  value)
	{
		___m_lineJustificationStack_88 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_lineJustificationStack_88))->___m_ItemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_textContainerLocalCorners_89() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_textContainerLocalCorners_89)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_textContainerLocalCorners_89() const { return ___m_textContainerLocalCorners_89; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_textContainerLocalCorners_89() { return &___m_textContainerLocalCorners_89; }
	inline void set_m_textContainerLocalCorners_89(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_textContainerLocalCorners_89 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_textContainerLocalCorners_89), (void*)value);
	}

	inline static int32_t get_offset_of_m_characterSpacing_90() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_characterSpacing_90)); }
	inline float get_m_characterSpacing_90() const { return ___m_characterSpacing_90; }
	inline float* get_address_of_m_characterSpacing_90() { return &___m_characterSpacing_90; }
	inline void set_m_characterSpacing_90(float value)
	{
		___m_characterSpacing_90 = value;
	}

	inline static int32_t get_offset_of_m_cSpacing_91() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_cSpacing_91)); }
	inline float get_m_cSpacing_91() const { return ___m_cSpacing_91; }
	inline float* get_address_of_m_cSpacing_91() { return &___m_cSpacing_91; }
	inline void set_m_cSpacing_91(float value)
	{
		___m_cSpacing_91 = value;
	}

	inline static int32_t get_offset_of_m_monoSpacing_92() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_monoSpacing_92)); }
	inline float get_m_monoSpacing_92() const { return ___m_monoSpacing_92; }
	inline float* get_address_of_m_monoSpacing_92() { return &___m_monoSpacing_92; }
	inline void set_m_monoSpacing_92(float value)
	{
		___m_monoSpacing_92 = value;
	}

	inline static int32_t get_offset_of_m_wordSpacing_93() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_wordSpacing_93)); }
	inline float get_m_wordSpacing_93() const { return ___m_wordSpacing_93; }
	inline float* get_address_of_m_wordSpacing_93() { return &___m_wordSpacing_93; }
	inline void set_m_wordSpacing_93(float value)
	{
		___m_wordSpacing_93 = value;
	}

	inline static int32_t get_offset_of_m_lineSpacing_94() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineSpacing_94)); }
	inline float get_m_lineSpacing_94() const { return ___m_lineSpacing_94; }
	inline float* get_address_of_m_lineSpacing_94() { return &___m_lineSpacing_94; }
	inline void set_m_lineSpacing_94(float value)
	{
		___m_lineSpacing_94 = value;
	}

	inline static int32_t get_offset_of_m_lineSpacingDelta_95() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineSpacingDelta_95)); }
	inline float get_m_lineSpacingDelta_95() const { return ___m_lineSpacingDelta_95; }
	inline float* get_address_of_m_lineSpacingDelta_95() { return &___m_lineSpacingDelta_95; }
	inline void set_m_lineSpacingDelta_95(float value)
	{
		___m_lineSpacingDelta_95 = value;
	}

	inline static int32_t get_offset_of_m_lineHeight_96() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineHeight_96)); }
	inline float get_m_lineHeight_96() const { return ___m_lineHeight_96; }
	inline float* get_address_of_m_lineHeight_96() { return &___m_lineHeight_96; }
	inline void set_m_lineHeight_96(float value)
	{
		___m_lineHeight_96 = value;
	}

	inline static int32_t get_offset_of_m_lineSpacingMax_97() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineSpacingMax_97)); }
	inline float get_m_lineSpacingMax_97() const { return ___m_lineSpacingMax_97; }
	inline float* get_address_of_m_lineSpacingMax_97() { return &___m_lineSpacingMax_97; }
	inline void set_m_lineSpacingMax_97(float value)
	{
		___m_lineSpacingMax_97 = value;
	}

	inline static int32_t get_offset_of_m_paragraphSpacing_98() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_paragraphSpacing_98)); }
	inline float get_m_paragraphSpacing_98() const { return ___m_paragraphSpacing_98; }
	inline float* get_address_of_m_paragraphSpacing_98() { return &___m_paragraphSpacing_98; }
	inline void set_m_paragraphSpacing_98(float value)
	{
		___m_paragraphSpacing_98 = value;
	}

	inline static int32_t get_offset_of_m_charWidthMaxAdj_99() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_charWidthMaxAdj_99)); }
	inline float get_m_charWidthMaxAdj_99() const { return ___m_charWidthMaxAdj_99; }
	inline float* get_address_of_m_charWidthMaxAdj_99() { return &___m_charWidthMaxAdj_99; }
	inline void set_m_charWidthMaxAdj_99(float value)
	{
		___m_charWidthMaxAdj_99 = value;
	}

	inline static int32_t get_offset_of_m_charWidthAdjDelta_100() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_charWidthAdjDelta_100)); }
	inline float get_m_charWidthAdjDelta_100() const { return ___m_charWidthAdjDelta_100; }
	inline float* get_address_of_m_charWidthAdjDelta_100() { return &___m_charWidthAdjDelta_100; }
	inline void set_m_charWidthAdjDelta_100(float value)
	{
		___m_charWidthAdjDelta_100 = value;
	}

	inline static int32_t get_offset_of_m_enableWordWrapping_101() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_enableWordWrapping_101)); }
	inline bool get_m_enableWordWrapping_101() const { return ___m_enableWordWrapping_101; }
	inline bool* get_address_of_m_enableWordWrapping_101() { return &___m_enableWordWrapping_101; }
	inline void set_m_enableWordWrapping_101(bool value)
	{
		___m_enableWordWrapping_101 = value;
	}

	inline static int32_t get_offset_of_m_isCharacterWrappingEnabled_102() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isCharacterWrappingEnabled_102)); }
	inline bool get_m_isCharacterWrappingEnabled_102() const { return ___m_isCharacterWrappingEnabled_102; }
	inline bool* get_address_of_m_isCharacterWrappingEnabled_102() { return &___m_isCharacterWrappingEnabled_102; }
	inline void set_m_isCharacterWrappingEnabled_102(bool value)
	{
		___m_isCharacterWrappingEnabled_102 = value;
	}

	inline static int32_t get_offset_of_m_isNonBreakingSpace_103() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isNonBreakingSpace_103)); }
	inline bool get_m_isNonBreakingSpace_103() const { return ___m_isNonBreakingSpace_103; }
	inline bool* get_address_of_m_isNonBreakingSpace_103() { return &___m_isNonBreakingSpace_103; }
	inline void set_m_isNonBreakingSpace_103(bool value)
	{
		___m_isNonBreakingSpace_103 = value;
	}

	inline static int32_t get_offset_of_m_isIgnoringAlignment_104() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isIgnoringAlignment_104)); }
	inline bool get_m_isIgnoringAlignment_104() const { return ___m_isIgnoringAlignment_104; }
	inline bool* get_address_of_m_isIgnoringAlignment_104() { return &___m_isIgnoringAlignment_104; }
	inline void set_m_isIgnoringAlignment_104(bool value)
	{
		___m_isIgnoringAlignment_104 = value;
	}

	inline static int32_t get_offset_of_m_wordWrappingRatios_105() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_wordWrappingRatios_105)); }
	inline float get_m_wordWrappingRatios_105() const { return ___m_wordWrappingRatios_105; }
	inline float* get_address_of_m_wordWrappingRatios_105() { return &___m_wordWrappingRatios_105; }
	inline void set_m_wordWrappingRatios_105(float value)
	{
		___m_wordWrappingRatios_105 = value;
	}

	inline static int32_t get_offset_of_m_overflowMode_106() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_overflowMode_106)); }
	inline int32_t get_m_overflowMode_106() const { return ___m_overflowMode_106; }
	inline int32_t* get_address_of_m_overflowMode_106() { return &___m_overflowMode_106; }
	inline void set_m_overflowMode_106(int32_t value)
	{
		___m_overflowMode_106 = value;
	}

	inline static int32_t get_offset_of_m_firstOverflowCharacterIndex_107() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_firstOverflowCharacterIndex_107)); }
	inline int32_t get_m_firstOverflowCharacterIndex_107() const { return ___m_firstOverflowCharacterIndex_107; }
	inline int32_t* get_address_of_m_firstOverflowCharacterIndex_107() { return &___m_firstOverflowCharacterIndex_107; }
	inline void set_m_firstOverflowCharacterIndex_107(int32_t value)
	{
		___m_firstOverflowCharacterIndex_107 = value;
	}

	inline static int32_t get_offset_of_m_linkedTextComponent_108() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_linkedTextComponent_108)); }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * get_m_linkedTextComponent_108() const { return ___m_linkedTextComponent_108; }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 ** get_address_of_m_linkedTextComponent_108() { return &___m_linkedTextComponent_108; }
	inline void set_m_linkedTextComponent_108(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * value)
	{
		___m_linkedTextComponent_108 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_linkedTextComponent_108), (void*)value);
	}

	inline static int32_t get_offset_of_m_isLinkedTextComponent_109() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isLinkedTextComponent_109)); }
	inline bool get_m_isLinkedTextComponent_109() const { return ___m_isLinkedTextComponent_109; }
	inline bool* get_address_of_m_isLinkedTextComponent_109() { return &___m_isLinkedTextComponent_109; }
	inline void set_m_isLinkedTextComponent_109(bool value)
	{
		___m_isLinkedTextComponent_109 = value;
	}

	inline static int32_t get_offset_of_m_isTextTruncated_110() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isTextTruncated_110)); }
	inline bool get_m_isTextTruncated_110() const { return ___m_isTextTruncated_110; }
	inline bool* get_address_of_m_isTextTruncated_110() { return &___m_isTextTruncated_110; }
	inline void set_m_isTextTruncated_110(bool value)
	{
		___m_isTextTruncated_110 = value;
	}

	inline static int32_t get_offset_of_m_enableKerning_111() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_enableKerning_111)); }
	inline bool get_m_enableKerning_111() const { return ___m_enableKerning_111; }
	inline bool* get_address_of_m_enableKerning_111() { return &___m_enableKerning_111; }
	inline void set_m_enableKerning_111(bool value)
	{
		___m_enableKerning_111 = value;
	}

	inline static int32_t get_offset_of_m_enableExtraPadding_112() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_enableExtraPadding_112)); }
	inline bool get_m_enableExtraPadding_112() const { return ___m_enableExtraPadding_112; }
	inline bool* get_address_of_m_enableExtraPadding_112() { return &___m_enableExtraPadding_112; }
	inline void set_m_enableExtraPadding_112(bool value)
	{
		___m_enableExtraPadding_112 = value;
	}

	inline static int32_t get_offset_of_checkPaddingRequired_113() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___checkPaddingRequired_113)); }
	inline bool get_checkPaddingRequired_113() const { return ___checkPaddingRequired_113; }
	inline bool* get_address_of_checkPaddingRequired_113() { return &___checkPaddingRequired_113; }
	inline void set_checkPaddingRequired_113(bool value)
	{
		___checkPaddingRequired_113 = value;
	}

	inline static int32_t get_offset_of_m_isRichText_114() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isRichText_114)); }
	inline bool get_m_isRichText_114() const { return ___m_isRichText_114; }
	inline bool* get_address_of_m_isRichText_114() { return &___m_isRichText_114; }
	inline void set_m_isRichText_114(bool value)
	{
		___m_isRichText_114 = value;
	}

	inline static int32_t get_offset_of_m_parseCtrlCharacters_115() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_parseCtrlCharacters_115)); }
	inline bool get_m_parseCtrlCharacters_115() const { return ___m_parseCtrlCharacters_115; }
	inline bool* get_address_of_m_parseCtrlCharacters_115() { return &___m_parseCtrlCharacters_115; }
	inline void set_m_parseCtrlCharacters_115(bool value)
	{
		___m_parseCtrlCharacters_115 = value;
	}

	inline static int32_t get_offset_of_m_isOverlay_116() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isOverlay_116)); }
	inline bool get_m_isOverlay_116() const { return ___m_isOverlay_116; }
	inline bool* get_address_of_m_isOverlay_116() { return &___m_isOverlay_116; }
	inline void set_m_isOverlay_116(bool value)
	{
		___m_isOverlay_116 = value;
	}

	inline static int32_t get_offset_of_m_isOrthographic_117() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isOrthographic_117)); }
	inline bool get_m_isOrthographic_117() const { return ___m_isOrthographic_117; }
	inline bool* get_address_of_m_isOrthographic_117() { return &___m_isOrthographic_117; }
	inline void set_m_isOrthographic_117(bool value)
	{
		___m_isOrthographic_117 = value;
	}

	inline static int32_t get_offset_of_m_isCullingEnabled_118() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isCullingEnabled_118)); }
	inline bool get_m_isCullingEnabled_118() const { return ___m_isCullingEnabled_118; }
	inline bool* get_address_of_m_isCullingEnabled_118() { return &___m_isCullingEnabled_118; }
	inline void set_m_isCullingEnabled_118(bool value)
	{
		___m_isCullingEnabled_118 = value;
	}

	inline static int32_t get_offset_of_m_ignoreRectMaskCulling_119() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_ignoreRectMaskCulling_119)); }
	inline bool get_m_ignoreRectMaskCulling_119() const { return ___m_ignoreRectMaskCulling_119; }
	inline bool* get_address_of_m_ignoreRectMaskCulling_119() { return &___m_ignoreRectMaskCulling_119; }
	inline void set_m_ignoreRectMaskCulling_119(bool value)
	{
		___m_ignoreRectMaskCulling_119 = value;
	}

	inline static int32_t get_offset_of_m_ignoreCulling_120() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_ignoreCulling_120)); }
	inline bool get_m_ignoreCulling_120() const { return ___m_ignoreCulling_120; }
	inline bool* get_address_of_m_ignoreCulling_120() { return &___m_ignoreCulling_120; }
	inline void set_m_ignoreCulling_120(bool value)
	{
		___m_ignoreCulling_120 = value;
	}

	inline static int32_t get_offset_of_m_horizontalMapping_121() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_horizontalMapping_121)); }
	inline int32_t get_m_horizontalMapping_121() const { return ___m_horizontalMapping_121; }
	inline int32_t* get_address_of_m_horizontalMapping_121() { return &___m_horizontalMapping_121; }
	inline void set_m_horizontalMapping_121(int32_t value)
	{
		___m_horizontalMapping_121 = value;
	}

	inline static int32_t get_offset_of_m_verticalMapping_122() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_verticalMapping_122)); }
	inline int32_t get_m_verticalMapping_122() const { return ___m_verticalMapping_122; }
	inline int32_t* get_address_of_m_verticalMapping_122() { return &___m_verticalMapping_122; }
	inline void set_m_verticalMapping_122(int32_t value)
	{
		___m_verticalMapping_122 = value;
	}

	inline static int32_t get_offset_of_m_uvLineOffset_123() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_uvLineOffset_123)); }
	inline float get_m_uvLineOffset_123() const { return ___m_uvLineOffset_123; }
	inline float* get_address_of_m_uvLineOffset_123() { return &___m_uvLineOffset_123; }
	inline void set_m_uvLineOffset_123(float value)
	{
		___m_uvLineOffset_123 = value;
	}

	inline static int32_t get_offset_of_m_renderMode_124() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_renderMode_124)); }
	inline int32_t get_m_renderMode_124() const { return ___m_renderMode_124; }
	inline int32_t* get_address_of_m_renderMode_124() { return &___m_renderMode_124; }
	inline void set_m_renderMode_124(int32_t value)
	{
		___m_renderMode_124 = value;
	}

	inline static int32_t get_offset_of_m_geometrySortingOrder_125() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_geometrySortingOrder_125)); }
	inline int32_t get_m_geometrySortingOrder_125() const { return ___m_geometrySortingOrder_125; }
	inline int32_t* get_address_of_m_geometrySortingOrder_125() { return &___m_geometrySortingOrder_125; }
	inline void set_m_geometrySortingOrder_125(int32_t value)
	{
		___m_geometrySortingOrder_125 = value;
	}

	inline static int32_t get_offset_of_m_VertexBufferAutoSizeReduction_126() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_VertexBufferAutoSizeReduction_126)); }
	inline bool get_m_VertexBufferAutoSizeReduction_126() const { return ___m_VertexBufferAutoSizeReduction_126; }
	inline bool* get_address_of_m_VertexBufferAutoSizeReduction_126() { return &___m_VertexBufferAutoSizeReduction_126; }
	inline void set_m_VertexBufferAutoSizeReduction_126(bool value)
	{
		___m_VertexBufferAutoSizeReduction_126 = value;
	}

	inline static int32_t get_offset_of_m_firstVisibleCharacter_127() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_firstVisibleCharacter_127)); }
	inline int32_t get_m_firstVisibleCharacter_127() const { return ___m_firstVisibleCharacter_127; }
	inline int32_t* get_address_of_m_firstVisibleCharacter_127() { return &___m_firstVisibleCharacter_127; }
	inline void set_m_firstVisibleCharacter_127(int32_t value)
	{
		___m_firstVisibleCharacter_127 = value;
	}

	inline static int32_t get_offset_of_m_maxVisibleCharacters_128() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxVisibleCharacters_128)); }
	inline int32_t get_m_maxVisibleCharacters_128() const { return ___m_maxVisibleCharacters_128; }
	inline int32_t* get_address_of_m_maxVisibleCharacters_128() { return &___m_maxVisibleCharacters_128; }
	inline void set_m_maxVisibleCharacters_128(int32_t value)
	{
		___m_maxVisibleCharacters_128 = value;
	}

	inline static int32_t get_offset_of_m_maxVisibleWords_129() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxVisibleWords_129)); }
	inline int32_t get_m_maxVisibleWords_129() const { return ___m_maxVisibleWords_129; }
	inline int32_t* get_address_of_m_maxVisibleWords_129() { return &___m_maxVisibleWords_129; }
	inline void set_m_maxVisibleWords_129(int32_t value)
	{
		___m_maxVisibleWords_129 = value;
	}

	inline static int32_t get_offset_of_m_maxVisibleLines_130() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxVisibleLines_130)); }
	inline int32_t get_m_maxVisibleLines_130() const { return ___m_maxVisibleLines_130; }
	inline int32_t* get_address_of_m_maxVisibleLines_130() { return &___m_maxVisibleLines_130; }
	inline void set_m_maxVisibleLines_130(int32_t value)
	{
		___m_maxVisibleLines_130 = value;
	}

	inline static int32_t get_offset_of_m_useMaxVisibleDescender_131() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_useMaxVisibleDescender_131)); }
	inline bool get_m_useMaxVisibleDescender_131() const { return ___m_useMaxVisibleDescender_131; }
	inline bool* get_address_of_m_useMaxVisibleDescender_131() { return &___m_useMaxVisibleDescender_131; }
	inline void set_m_useMaxVisibleDescender_131(bool value)
	{
		___m_useMaxVisibleDescender_131 = value;
	}

	inline static int32_t get_offset_of_m_pageToDisplay_132() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_pageToDisplay_132)); }
	inline int32_t get_m_pageToDisplay_132() const { return ___m_pageToDisplay_132; }
	inline int32_t* get_address_of_m_pageToDisplay_132() { return &___m_pageToDisplay_132; }
	inline void set_m_pageToDisplay_132(int32_t value)
	{
		___m_pageToDisplay_132 = value;
	}

	inline static int32_t get_offset_of_m_isNewPage_133() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isNewPage_133)); }
	inline bool get_m_isNewPage_133() const { return ___m_isNewPage_133; }
	inline bool* get_address_of_m_isNewPage_133() { return &___m_isNewPage_133; }
	inline void set_m_isNewPage_133(bool value)
	{
		___m_isNewPage_133 = value;
	}

	inline static int32_t get_offset_of_m_margin_134() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_margin_134)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_margin_134() const { return ___m_margin_134; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_margin_134() { return &___m_margin_134; }
	inline void set_m_margin_134(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_margin_134 = value;
	}

	inline static int32_t get_offset_of_m_marginLeft_135() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_marginLeft_135)); }
	inline float get_m_marginLeft_135() const { return ___m_marginLeft_135; }
	inline float* get_address_of_m_marginLeft_135() { return &___m_marginLeft_135; }
	inline void set_m_marginLeft_135(float value)
	{
		___m_marginLeft_135 = value;
	}

	inline static int32_t get_offset_of_m_marginRight_136() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_marginRight_136)); }
	inline float get_m_marginRight_136() const { return ___m_marginRight_136; }
	inline float* get_address_of_m_marginRight_136() { return &___m_marginRight_136; }
	inline void set_m_marginRight_136(float value)
	{
		___m_marginRight_136 = value;
	}

	inline static int32_t get_offset_of_m_marginWidth_137() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_marginWidth_137)); }
	inline float get_m_marginWidth_137() const { return ___m_marginWidth_137; }
	inline float* get_address_of_m_marginWidth_137() { return &___m_marginWidth_137; }
	inline void set_m_marginWidth_137(float value)
	{
		___m_marginWidth_137 = value;
	}

	inline static int32_t get_offset_of_m_marginHeight_138() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_marginHeight_138)); }
	inline float get_m_marginHeight_138() const { return ___m_marginHeight_138; }
	inline float* get_address_of_m_marginHeight_138() { return &___m_marginHeight_138; }
	inline void set_m_marginHeight_138(float value)
	{
		___m_marginHeight_138 = value;
	}

	inline static int32_t get_offset_of_m_width_139() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_width_139)); }
	inline float get_m_width_139() const { return ___m_width_139; }
	inline float* get_address_of_m_width_139() { return &___m_width_139; }
	inline void set_m_width_139(float value)
	{
		___m_width_139 = value;
	}

	inline static int32_t get_offset_of_m_textInfo_140() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_textInfo_140)); }
	inline TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * get_m_textInfo_140() const { return ___m_textInfo_140; }
	inline TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 ** get_address_of_m_textInfo_140() { return &___m_textInfo_140; }
	inline void set_m_textInfo_140(TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * value)
	{
		___m_textInfo_140 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_textInfo_140), (void*)value);
	}

	inline static int32_t get_offset_of_m_havePropertiesChanged_141() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_havePropertiesChanged_141)); }
	inline bool get_m_havePropertiesChanged_141() const { return ___m_havePropertiesChanged_141; }
	inline bool* get_address_of_m_havePropertiesChanged_141() { return &___m_havePropertiesChanged_141; }
	inline void set_m_havePropertiesChanged_141(bool value)
	{
		___m_havePropertiesChanged_141 = value;
	}

	inline static int32_t get_offset_of_m_isUsingLegacyAnimationComponent_142() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isUsingLegacyAnimationComponent_142)); }
	inline bool get_m_isUsingLegacyAnimationComponent_142() const { return ___m_isUsingLegacyAnimationComponent_142; }
	inline bool* get_address_of_m_isUsingLegacyAnimationComponent_142() { return &___m_isUsingLegacyAnimationComponent_142; }
	inline void set_m_isUsingLegacyAnimationComponent_142(bool value)
	{
		___m_isUsingLegacyAnimationComponent_142 = value;
	}

	inline static int32_t get_offset_of_m_transform_143() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_transform_143)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_transform_143() const { return ___m_transform_143; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_transform_143() { return &___m_transform_143; }
	inline void set_m_transform_143(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_transform_143 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_transform_143), (void*)value);
	}

	inline static int32_t get_offset_of_m_rectTransform_144() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_rectTransform_144)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_rectTransform_144() const { return ___m_rectTransform_144; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_rectTransform_144() { return &___m_rectTransform_144; }
	inline void set_m_rectTransform_144(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_rectTransform_144 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_rectTransform_144), (void*)value);
	}

	inline static int32_t get_offset_of_U3CautoSizeTextContainerU3Ek__BackingField_145() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___U3CautoSizeTextContainerU3Ek__BackingField_145)); }
	inline bool get_U3CautoSizeTextContainerU3Ek__BackingField_145() const { return ___U3CautoSizeTextContainerU3Ek__BackingField_145; }
	inline bool* get_address_of_U3CautoSizeTextContainerU3Ek__BackingField_145() { return &___U3CautoSizeTextContainerU3Ek__BackingField_145; }
	inline void set_U3CautoSizeTextContainerU3Ek__BackingField_145(bool value)
	{
		___U3CautoSizeTextContainerU3Ek__BackingField_145 = value;
	}

	inline static int32_t get_offset_of_m_autoSizeTextContainer_146() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_autoSizeTextContainer_146)); }
	inline bool get_m_autoSizeTextContainer_146() const { return ___m_autoSizeTextContainer_146; }
	inline bool* get_address_of_m_autoSizeTextContainer_146() { return &___m_autoSizeTextContainer_146; }
	inline void set_m_autoSizeTextContainer_146(bool value)
	{
		___m_autoSizeTextContainer_146 = value;
	}

	inline static int32_t get_offset_of_m_mesh_147() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_mesh_147)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_mesh_147() const { return ___m_mesh_147; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_mesh_147() { return &___m_mesh_147; }
	inline void set_m_mesh_147(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_mesh_147 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_mesh_147), (void*)value);
	}

	inline static int32_t get_offset_of_m_isVolumetricText_148() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isVolumetricText_148)); }
	inline bool get_m_isVolumetricText_148() const { return ___m_isVolumetricText_148; }
	inline bool* get_address_of_m_isVolumetricText_148() { return &___m_isVolumetricText_148; }
	inline void set_m_isVolumetricText_148(bool value)
	{
		___m_isVolumetricText_148 = value;
	}

	inline static int32_t get_offset_of_m_spriteAnimator_149() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_spriteAnimator_149)); }
	inline TMP_SpriteAnimator_t07C769A1F1F85B545DD32357826E08F569E3D902 * get_m_spriteAnimator_149() const { return ___m_spriteAnimator_149; }
	inline TMP_SpriteAnimator_t07C769A1F1F85B545DD32357826E08F569E3D902 ** get_address_of_m_spriteAnimator_149() { return &___m_spriteAnimator_149; }
	inline void set_m_spriteAnimator_149(TMP_SpriteAnimator_t07C769A1F1F85B545DD32357826E08F569E3D902 * value)
	{
		___m_spriteAnimator_149 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_spriteAnimator_149), (void*)value);
	}

	inline static int32_t get_offset_of_m_flexibleHeight_150() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_flexibleHeight_150)); }
	inline float get_m_flexibleHeight_150() const { return ___m_flexibleHeight_150; }
	inline float* get_address_of_m_flexibleHeight_150() { return &___m_flexibleHeight_150; }
	inline void set_m_flexibleHeight_150(float value)
	{
		___m_flexibleHeight_150 = value;
	}

	inline static int32_t get_offset_of_m_flexibleWidth_151() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_flexibleWidth_151)); }
	inline float get_m_flexibleWidth_151() const { return ___m_flexibleWidth_151; }
	inline float* get_address_of_m_flexibleWidth_151() { return &___m_flexibleWidth_151; }
	inline void set_m_flexibleWidth_151(float value)
	{
		___m_flexibleWidth_151 = value;
	}

	inline static int32_t get_offset_of_m_minWidth_152() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_minWidth_152)); }
	inline float get_m_minWidth_152() const { return ___m_minWidth_152; }
	inline float* get_address_of_m_minWidth_152() { return &___m_minWidth_152; }
	inline void set_m_minWidth_152(float value)
	{
		___m_minWidth_152 = value;
	}

	inline static int32_t get_offset_of_m_minHeight_153() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_minHeight_153)); }
	inline float get_m_minHeight_153() const { return ___m_minHeight_153; }
	inline float* get_address_of_m_minHeight_153() { return &___m_minHeight_153; }
	inline void set_m_minHeight_153(float value)
	{
		___m_minHeight_153 = value;
	}

	inline static int32_t get_offset_of_m_maxWidth_154() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxWidth_154)); }
	inline float get_m_maxWidth_154() const { return ___m_maxWidth_154; }
	inline float* get_address_of_m_maxWidth_154() { return &___m_maxWidth_154; }
	inline void set_m_maxWidth_154(float value)
	{
		___m_maxWidth_154 = value;
	}

	inline static int32_t get_offset_of_m_maxHeight_155() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxHeight_155)); }
	inline float get_m_maxHeight_155() const { return ___m_maxHeight_155; }
	inline float* get_address_of_m_maxHeight_155() { return &___m_maxHeight_155; }
	inline void set_m_maxHeight_155(float value)
	{
		___m_maxHeight_155 = value;
	}

	inline static int32_t get_offset_of_m_LayoutElement_156() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_LayoutElement_156)); }
	inline LayoutElement_tE514951184806899FE23EC4FA6112A5F2038CECF * get_m_LayoutElement_156() const { return ___m_LayoutElement_156; }
	inline LayoutElement_tE514951184806899FE23EC4FA6112A5F2038CECF ** get_address_of_m_LayoutElement_156() { return &___m_LayoutElement_156; }
	inline void set_m_LayoutElement_156(LayoutElement_tE514951184806899FE23EC4FA6112A5F2038CECF * value)
	{
		___m_LayoutElement_156 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LayoutElement_156), (void*)value);
	}

	inline static int32_t get_offset_of_m_preferredWidth_157() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_preferredWidth_157)); }
	inline float get_m_preferredWidth_157() const { return ___m_preferredWidth_157; }
	inline float* get_address_of_m_preferredWidth_157() { return &___m_preferredWidth_157; }
	inline void set_m_preferredWidth_157(float value)
	{
		___m_preferredWidth_157 = value;
	}

	inline static int32_t get_offset_of_m_renderedWidth_158() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_renderedWidth_158)); }
	inline float get_m_renderedWidth_158() const { return ___m_renderedWidth_158; }
	inline float* get_address_of_m_renderedWidth_158() { return &___m_renderedWidth_158; }
	inline void set_m_renderedWidth_158(float value)
	{
		___m_renderedWidth_158 = value;
	}

	inline static int32_t get_offset_of_m_isPreferredWidthDirty_159() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isPreferredWidthDirty_159)); }
	inline bool get_m_isPreferredWidthDirty_159() const { return ___m_isPreferredWidthDirty_159; }
	inline bool* get_address_of_m_isPreferredWidthDirty_159() { return &___m_isPreferredWidthDirty_159; }
	inline void set_m_isPreferredWidthDirty_159(bool value)
	{
		___m_isPreferredWidthDirty_159 = value;
	}

	inline static int32_t get_offset_of_m_preferredHeight_160() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_preferredHeight_160)); }
	inline float get_m_preferredHeight_160() const { return ___m_preferredHeight_160; }
	inline float* get_address_of_m_preferredHeight_160() { return &___m_preferredHeight_160; }
	inline void set_m_preferredHeight_160(float value)
	{
		___m_preferredHeight_160 = value;
	}

	inline static int32_t get_offset_of_m_renderedHeight_161() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_renderedHeight_161)); }
	inline float get_m_renderedHeight_161() const { return ___m_renderedHeight_161; }
	inline float* get_address_of_m_renderedHeight_161() { return &___m_renderedHeight_161; }
	inline void set_m_renderedHeight_161(float value)
	{
		___m_renderedHeight_161 = value;
	}

	inline static int32_t get_offset_of_m_isPreferredHeightDirty_162() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isPreferredHeightDirty_162)); }
	inline bool get_m_isPreferredHeightDirty_162() const { return ___m_isPreferredHeightDirty_162; }
	inline bool* get_address_of_m_isPreferredHeightDirty_162() { return &___m_isPreferredHeightDirty_162; }
	inline void set_m_isPreferredHeightDirty_162(bool value)
	{
		___m_isPreferredHeightDirty_162 = value;
	}

	inline static int32_t get_offset_of_m_isCalculatingPreferredValues_163() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isCalculatingPreferredValues_163)); }
	inline bool get_m_isCalculatingPreferredValues_163() const { return ___m_isCalculatingPreferredValues_163; }
	inline bool* get_address_of_m_isCalculatingPreferredValues_163() { return &___m_isCalculatingPreferredValues_163; }
	inline void set_m_isCalculatingPreferredValues_163(bool value)
	{
		___m_isCalculatingPreferredValues_163 = value;
	}

	inline static int32_t get_offset_of_m_recursiveCount_164() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_recursiveCount_164)); }
	inline int32_t get_m_recursiveCount_164() const { return ___m_recursiveCount_164; }
	inline int32_t* get_address_of_m_recursiveCount_164() { return &___m_recursiveCount_164; }
	inline void set_m_recursiveCount_164(int32_t value)
	{
		___m_recursiveCount_164 = value;
	}

	inline static int32_t get_offset_of_m_layoutPriority_165() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_layoutPriority_165)); }
	inline int32_t get_m_layoutPriority_165() const { return ___m_layoutPriority_165; }
	inline int32_t* get_address_of_m_layoutPriority_165() { return &___m_layoutPriority_165; }
	inline void set_m_layoutPriority_165(int32_t value)
	{
		___m_layoutPriority_165 = value;
	}

	inline static int32_t get_offset_of_m_isCalculateSizeRequired_166() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isCalculateSizeRequired_166)); }
	inline bool get_m_isCalculateSizeRequired_166() const { return ___m_isCalculateSizeRequired_166; }
	inline bool* get_address_of_m_isCalculateSizeRequired_166() { return &___m_isCalculateSizeRequired_166; }
	inline void set_m_isCalculateSizeRequired_166(bool value)
	{
		___m_isCalculateSizeRequired_166 = value;
	}

	inline static int32_t get_offset_of_m_isLayoutDirty_167() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isLayoutDirty_167)); }
	inline bool get_m_isLayoutDirty_167() const { return ___m_isLayoutDirty_167; }
	inline bool* get_address_of_m_isLayoutDirty_167() { return &___m_isLayoutDirty_167; }
	inline void set_m_isLayoutDirty_167(bool value)
	{
		___m_isLayoutDirty_167 = value;
	}

	inline static int32_t get_offset_of_m_verticesAlreadyDirty_168() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_verticesAlreadyDirty_168)); }
	inline bool get_m_verticesAlreadyDirty_168() const { return ___m_verticesAlreadyDirty_168; }
	inline bool* get_address_of_m_verticesAlreadyDirty_168() { return &___m_verticesAlreadyDirty_168; }
	inline void set_m_verticesAlreadyDirty_168(bool value)
	{
		___m_verticesAlreadyDirty_168 = value;
	}

	inline static int32_t get_offset_of_m_layoutAlreadyDirty_169() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_layoutAlreadyDirty_169)); }
	inline bool get_m_layoutAlreadyDirty_169() const { return ___m_layoutAlreadyDirty_169; }
	inline bool* get_address_of_m_layoutAlreadyDirty_169() { return &___m_layoutAlreadyDirty_169; }
	inline void set_m_layoutAlreadyDirty_169(bool value)
	{
		___m_layoutAlreadyDirty_169 = value;
	}

	inline static int32_t get_offset_of_m_isAwake_170() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isAwake_170)); }
	inline bool get_m_isAwake_170() const { return ___m_isAwake_170; }
	inline bool* get_address_of_m_isAwake_170() { return &___m_isAwake_170; }
	inline void set_m_isAwake_170(bool value)
	{
		___m_isAwake_170 = value;
	}

	inline static int32_t get_offset_of_m_isWaitingOnResourceLoad_171() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isWaitingOnResourceLoad_171)); }
	inline bool get_m_isWaitingOnResourceLoad_171() const { return ___m_isWaitingOnResourceLoad_171; }
	inline bool* get_address_of_m_isWaitingOnResourceLoad_171() { return &___m_isWaitingOnResourceLoad_171; }
	inline void set_m_isWaitingOnResourceLoad_171(bool value)
	{
		___m_isWaitingOnResourceLoad_171 = value;
	}

	inline static int32_t get_offset_of_m_isInputParsingRequired_172() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isInputParsingRequired_172)); }
	inline bool get_m_isInputParsingRequired_172() const { return ___m_isInputParsingRequired_172; }
	inline bool* get_address_of_m_isInputParsingRequired_172() { return &___m_isInputParsingRequired_172; }
	inline void set_m_isInputParsingRequired_172(bool value)
	{
		___m_isInputParsingRequired_172 = value;
	}

	inline static int32_t get_offset_of_m_inputSource_173() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_inputSource_173)); }
	inline int32_t get_m_inputSource_173() const { return ___m_inputSource_173; }
	inline int32_t* get_address_of_m_inputSource_173() { return &___m_inputSource_173; }
	inline void set_m_inputSource_173(int32_t value)
	{
		___m_inputSource_173 = value;
	}

	inline static int32_t get_offset_of_old_text_174() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___old_text_174)); }
	inline String_t* get_old_text_174() const { return ___old_text_174; }
	inline String_t** get_address_of_old_text_174() { return &___old_text_174; }
	inline void set_old_text_174(String_t* value)
	{
		___old_text_174 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___old_text_174), (void*)value);
	}

	inline static int32_t get_offset_of_m_fontScale_175() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontScale_175)); }
	inline float get_m_fontScale_175() const { return ___m_fontScale_175; }
	inline float* get_address_of_m_fontScale_175() { return &___m_fontScale_175; }
	inline void set_m_fontScale_175(float value)
	{
		___m_fontScale_175 = value;
	}

	inline static int32_t get_offset_of_m_fontScaleMultiplier_176() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontScaleMultiplier_176)); }
	inline float get_m_fontScaleMultiplier_176() const { return ___m_fontScaleMultiplier_176; }
	inline float* get_address_of_m_fontScaleMultiplier_176() { return &___m_fontScaleMultiplier_176; }
	inline void set_m_fontScaleMultiplier_176(float value)
	{
		___m_fontScaleMultiplier_176 = value;
	}

	inline static int32_t get_offset_of_m_htmlTag_177() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_htmlTag_177)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_m_htmlTag_177() const { return ___m_htmlTag_177; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_m_htmlTag_177() { return &___m_htmlTag_177; }
	inline void set_m_htmlTag_177(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___m_htmlTag_177 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_htmlTag_177), (void*)value);
	}

	inline static int32_t get_offset_of_m_xmlAttribute_178() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_xmlAttribute_178)); }
	inline RichTextTagAttributeU5BU5D_t81DC8CE2ED156F9CA996E2DC8A64A973A156D615* get_m_xmlAttribute_178() const { return ___m_xmlAttribute_178; }
	inline RichTextTagAttributeU5BU5D_t81DC8CE2ED156F9CA996E2DC8A64A973A156D615** get_address_of_m_xmlAttribute_178() { return &___m_xmlAttribute_178; }
	inline void set_m_xmlAttribute_178(RichTextTagAttributeU5BU5D_t81DC8CE2ED156F9CA996E2DC8A64A973A156D615* value)
	{
		___m_xmlAttribute_178 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_xmlAttribute_178), (void*)value);
	}

	inline static int32_t get_offset_of_m_attributeParameterValues_179() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_attributeParameterValues_179)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_m_attributeParameterValues_179() const { return ___m_attributeParameterValues_179; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_m_attributeParameterValues_179() { return &___m_attributeParameterValues_179; }
	inline void set_m_attributeParameterValues_179(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___m_attributeParameterValues_179 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_attributeParameterValues_179), (void*)value);
	}

	inline static int32_t get_offset_of_tag_LineIndent_180() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___tag_LineIndent_180)); }
	inline float get_tag_LineIndent_180() const { return ___tag_LineIndent_180; }
	inline float* get_address_of_tag_LineIndent_180() { return &___tag_LineIndent_180; }
	inline void set_tag_LineIndent_180(float value)
	{
		___tag_LineIndent_180 = value;
	}

	inline static int32_t get_offset_of_tag_Indent_181() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___tag_Indent_181)); }
	inline float get_tag_Indent_181() const { return ___tag_Indent_181; }
	inline float* get_address_of_tag_Indent_181() { return &___tag_Indent_181; }
	inline void set_tag_Indent_181(float value)
	{
		___tag_Indent_181 = value;
	}

	inline static int32_t get_offset_of_m_indentStack_182() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_indentStack_182)); }
	inline TMP_RichTextTagStack_1_t36D1FD4270DC89CAF634A577A41355D7839A1A75  get_m_indentStack_182() const { return ___m_indentStack_182; }
	inline TMP_RichTextTagStack_1_t36D1FD4270DC89CAF634A577A41355D7839A1A75 * get_address_of_m_indentStack_182() { return &___m_indentStack_182; }
	inline void set_m_indentStack_182(TMP_RichTextTagStack_1_t36D1FD4270DC89CAF634A577A41355D7839A1A75  value)
	{
		___m_indentStack_182 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_indentStack_182))->___m_ItemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_tag_NoParsing_183() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___tag_NoParsing_183)); }
	inline bool get_tag_NoParsing_183() const { return ___tag_NoParsing_183; }
	inline bool* get_address_of_tag_NoParsing_183() { return &___tag_NoParsing_183; }
	inline void set_tag_NoParsing_183(bool value)
	{
		___tag_NoParsing_183 = value;
	}

	inline static int32_t get_offset_of_m_isParsingText_184() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isParsingText_184)); }
	inline bool get_m_isParsingText_184() const { return ___m_isParsingText_184; }
	inline bool* get_address_of_m_isParsingText_184() { return &___m_isParsingText_184; }
	inline void set_m_isParsingText_184(bool value)
	{
		___m_isParsingText_184 = value;
	}

	inline static int32_t get_offset_of_m_FXMatrix_185() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_FXMatrix_185)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_m_FXMatrix_185() const { return ___m_FXMatrix_185; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_m_FXMatrix_185() { return &___m_FXMatrix_185; }
	inline void set_m_FXMatrix_185(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___m_FXMatrix_185 = value;
	}

	inline static int32_t get_offset_of_m_isFXMatrixSet_186() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isFXMatrixSet_186)); }
	inline bool get_m_isFXMatrixSet_186() const { return ___m_isFXMatrixSet_186; }
	inline bool* get_address_of_m_isFXMatrixSet_186() { return &___m_isFXMatrixSet_186; }
	inline void set_m_isFXMatrixSet_186(bool value)
	{
		___m_isFXMatrixSet_186 = value;
	}

	inline static int32_t get_offset_of_m_TextParsingBuffer_187() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_TextParsingBuffer_187)); }
	inline UnicodeCharU5BU5D_tB233FC88865130D0B1EA18DA685C2AF41FB134F7* get_m_TextParsingBuffer_187() const { return ___m_TextParsingBuffer_187; }
	inline UnicodeCharU5BU5D_tB233FC88865130D0B1EA18DA685C2AF41FB134F7** get_address_of_m_TextParsingBuffer_187() { return &___m_TextParsingBuffer_187; }
	inline void set_m_TextParsingBuffer_187(UnicodeCharU5BU5D_tB233FC88865130D0B1EA18DA685C2AF41FB134F7* value)
	{
		___m_TextParsingBuffer_187 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextParsingBuffer_187), (void*)value);
	}

	inline static int32_t get_offset_of_m_internalCharacterInfo_188() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_internalCharacterInfo_188)); }
	inline TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970* get_m_internalCharacterInfo_188() const { return ___m_internalCharacterInfo_188; }
	inline TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970** get_address_of_m_internalCharacterInfo_188() { return &___m_internalCharacterInfo_188; }
	inline void set_m_internalCharacterInfo_188(TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970* value)
	{
		___m_internalCharacterInfo_188 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_internalCharacterInfo_188), (void*)value);
	}

	inline static int32_t get_offset_of_m_input_CharArray_189() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_input_CharArray_189)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_m_input_CharArray_189() const { return ___m_input_CharArray_189; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_m_input_CharArray_189() { return &___m_input_CharArray_189; }
	inline void set_m_input_CharArray_189(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___m_input_CharArray_189 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_input_CharArray_189), (void*)value);
	}

	inline static int32_t get_offset_of_m_charArray_Length_190() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_charArray_Length_190)); }
	inline int32_t get_m_charArray_Length_190() const { return ___m_charArray_Length_190; }
	inline int32_t* get_address_of_m_charArray_Length_190() { return &___m_charArray_Length_190; }
	inline void set_m_charArray_Length_190(int32_t value)
	{
		___m_charArray_Length_190 = value;
	}

	inline static int32_t get_offset_of_m_totalCharacterCount_191() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_totalCharacterCount_191)); }
	inline int32_t get_m_totalCharacterCount_191() const { return ___m_totalCharacterCount_191; }
	inline int32_t* get_address_of_m_totalCharacterCount_191() { return &___m_totalCharacterCount_191; }
	inline void set_m_totalCharacterCount_191(int32_t value)
	{
		___m_totalCharacterCount_191 = value;
	}

	inline static int32_t get_offset_of_m_SavedWordWrapState_192() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_SavedWordWrapState_192)); }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  get_m_SavedWordWrapState_192() const { return ___m_SavedWordWrapState_192; }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99 * get_address_of_m_SavedWordWrapState_192() { return &___m_SavedWordWrapState_192; }
	inline void set_m_SavedWordWrapState_192(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  value)
	{
		___m_SavedWordWrapState_192 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedWordWrapState_192))->___textInfo_27), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_192))->___colorStack_34))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_192))->___underlineColorStack_35))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_192))->___strikethroughColorStack_36))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_192))->___highlightColorStack_37))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_192))->___colorGradientStack_38))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_192))->___colorGradientStack_38))->___m_DefaultItem_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_192))->___sizeStack_39))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_192))->___indentStack_40))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_192))->___fontWeightStack_41))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_192))->___styleStack_42))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_192))->___baselineStack_43))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_192))->___actionStack_44))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_192))->___materialReferenceStack_45))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedWordWrapState_192))->___materialReferenceStack_45))->___m_DefaultItem_3))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedWordWrapState_192))->___materialReferenceStack_45))->___m_DefaultItem_3))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedWordWrapState_192))->___materialReferenceStack_45))->___m_DefaultItem_3))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedWordWrapState_192))->___materialReferenceStack_45))->___m_DefaultItem_3))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_192))->___lineJustificationStack_46))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedWordWrapState_192))->___currentFontAsset_48), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedWordWrapState_192))->___currentSpriteAsset_49), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedWordWrapState_192))->___currentMaterial_50), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_SavedLineState_193() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_SavedLineState_193)); }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  get_m_SavedLineState_193() const { return ___m_SavedLineState_193; }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99 * get_address_of_m_SavedLineState_193() { return &___m_SavedLineState_193; }
	inline void set_m_SavedLineState_193(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  value)
	{
		___m_SavedLineState_193 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLineState_193))->___textInfo_27), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_193))->___colorStack_34))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_193))->___underlineColorStack_35))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_193))->___strikethroughColorStack_36))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_193))->___highlightColorStack_37))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_193))->___colorGradientStack_38))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_193))->___colorGradientStack_38))->___m_DefaultItem_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_193))->___sizeStack_39))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_193))->___indentStack_40))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_193))->___fontWeightStack_41))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_193))->___styleStack_42))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_193))->___baselineStack_43))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_193))->___actionStack_44))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_193))->___materialReferenceStack_45))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLineState_193))->___materialReferenceStack_45))->___m_DefaultItem_3))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLineState_193))->___materialReferenceStack_45))->___m_DefaultItem_3))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLineState_193))->___materialReferenceStack_45))->___m_DefaultItem_3))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLineState_193))->___materialReferenceStack_45))->___m_DefaultItem_3))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_193))->___lineJustificationStack_46))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLineState_193))->___currentFontAsset_48), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLineState_193))->___currentSpriteAsset_49), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLineState_193))->___currentMaterial_50), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_characterCount_194() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_characterCount_194)); }
	inline int32_t get_m_characterCount_194() const { return ___m_characterCount_194; }
	inline int32_t* get_address_of_m_characterCount_194() { return &___m_characterCount_194; }
	inline void set_m_characterCount_194(int32_t value)
	{
		___m_characterCount_194 = value;
	}

	inline static int32_t get_offset_of_m_firstCharacterOfLine_195() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_firstCharacterOfLine_195)); }
	inline int32_t get_m_firstCharacterOfLine_195() const { return ___m_firstCharacterOfLine_195; }
	inline int32_t* get_address_of_m_firstCharacterOfLine_195() { return &___m_firstCharacterOfLine_195; }
	inline void set_m_firstCharacterOfLine_195(int32_t value)
	{
		___m_firstCharacterOfLine_195 = value;
	}

	inline static int32_t get_offset_of_m_firstVisibleCharacterOfLine_196() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_firstVisibleCharacterOfLine_196)); }
	inline int32_t get_m_firstVisibleCharacterOfLine_196() const { return ___m_firstVisibleCharacterOfLine_196; }
	inline int32_t* get_address_of_m_firstVisibleCharacterOfLine_196() { return &___m_firstVisibleCharacterOfLine_196; }
	inline void set_m_firstVisibleCharacterOfLine_196(int32_t value)
	{
		___m_firstVisibleCharacterOfLine_196 = value;
	}

	inline static int32_t get_offset_of_m_lastCharacterOfLine_197() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lastCharacterOfLine_197)); }
	inline int32_t get_m_lastCharacterOfLine_197() const { return ___m_lastCharacterOfLine_197; }
	inline int32_t* get_address_of_m_lastCharacterOfLine_197() { return &___m_lastCharacterOfLine_197; }
	inline void set_m_lastCharacterOfLine_197(int32_t value)
	{
		___m_lastCharacterOfLine_197 = value;
	}

	inline static int32_t get_offset_of_m_lastVisibleCharacterOfLine_198() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lastVisibleCharacterOfLine_198)); }
	inline int32_t get_m_lastVisibleCharacterOfLine_198() const { return ___m_lastVisibleCharacterOfLine_198; }
	inline int32_t* get_address_of_m_lastVisibleCharacterOfLine_198() { return &___m_lastVisibleCharacterOfLine_198; }
	inline void set_m_lastVisibleCharacterOfLine_198(int32_t value)
	{
		___m_lastVisibleCharacterOfLine_198 = value;
	}

	inline static int32_t get_offset_of_m_lineNumber_199() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineNumber_199)); }
	inline int32_t get_m_lineNumber_199() const { return ___m_lineNumber_199; }
	inline int32_t* get_address_of_m_lineNumber_199() { return &___m_lineNumber_199; }
	inline void set_m_lineNumber_199(int32_t value)
	{
		___m_lineNumber_199 = value;
	}

	inline static int32_t get_offset_of_m_lineVisibleCharacterCount_200() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineVisibleCharacterCount_200)); }
	inline int32_t get_m_lineVisibleCharacterCount_200() const { return ___m_lineVisibleCharacterCount_200; }
	inline int32_t* get_address_of_m_lineVisibleCharacterCount_200() { return &___m_lineVisibleCharacterCount_200; }
	inline void set_m_lineVisibleCharacterCount_200(int32_t value)
	{
		___m_lineVisibleCharacterCount_200 = value;
	}

	inline static int32_t get_offset_of_m_pageNumber_201() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_pageNumber_201)); }
	inline int32_t get_m_pageNumber_201() const { return ___m_pageNumber_201; }
	inline int32_t* get_address_of_m_pageNumber_201() { return &___m_pageNumber_201; }
	inline void set_m_pageNumber_201(int32_t value)
	{
		___m_pageNumber_201 = value;
	}

	inline static int32_t get_offset_of_m_maxAscender_202() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxAscender_202)); }
	inline float get_m_maxAscender_202() const { return ___m_maxAscender_202; }
	inline float* get_address_of_m_maxAscender_202() { return &___m_maxAscender_202; }
	inline void set_m_maxAscender_202(float value)
	{
		___m_maxAscender_202 = value;
	}

	inline static int32_t get_offset_of_m_maxCapHeight_203() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxCapHeight_203)); }
	inline float get_m_maxCapHeight_203() const { return ___m_maxCapHeight_203; }
	inline float* get_address_of_m_maxCapHeight_203() { return &___m_maxCapHeight_203; }
	inline void set_m_maxCapHeight_203(float value)
	{
		___m_maxCapHeight_203 = value;
	}

	inline static int32_t get_offset_of_m_maxDescender_204() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxDescender_204)); }
	inline float get_m_maxDescender_204() const { return ___m_maxDescender_204; }
	inline float* get_address_of_m_maxDescender_204() { return &___m_maxDescender_204; }
	inline void set_m_maxDescender_204(float value)
	{
		___m_maxDescender_204 = value;
	}

	inline static int32_t get_offset_of_m_maxLineAscender_205() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxLineAscender_205)); }
	inline float get_m_maxLineAscender_205() const { return ___m_maxLineAscender_205; }
	inline float* get_address_of_m_maxLineAscender_205() { return &___m_maxLineAscender_205; }
	inline void set_m_maxLineAscender_205(float value)
	{
		___m_maxLineAscender_205 = value;
	}

	inline static int32_t get_offset_of_m_maxLineDescender_206() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxLineDescender_206)); }
	inline float get_m_maxLineDescender_206() const { return ___m_maxLineDescender_206; }
	inline float* get_address_of_m_maxLineDescender_206() { return &___m_maxLineDescender_206; }
	inline void set_m_maxLineDescender_206(float value)
	{
		___m_maxLineDescender_206 = value;
	}

	inline static int32_t get_offset_of_m_startOfLineAscender_207() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_startOfLineAscender_207)); }
	inline float get_m_startOfLineAscender_207() const { return ___m_startOfLineAscender_207; }
	inline float* get_address_of_m_startOfLineAscender_207() { return &___m_startOfLineAscender_207; }
	inline void set_m_startOfLineAscender_207(float value)
	{
		___m_startOfLineAscender_207 = value;
	}

	inline static int32_t get_offset_of_m_lineOffset_208() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineOffset_208)); }
	inline float get_m_lineOffset_208() const { return ___m_lineOffset_208; }
	inline float* get_address_of_m_lineOffset_208() { return &___m_lineOffset_208; }
	inline void set_m_lineOffset_208(float value)
	{
		___m_lineOffset_208 = value;
	}

	inline static int32_t get_offset_of_m_meshExtents_209() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_meshExtents_209)); }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  get_m_meshExtents_209() const { return ___m_meshExtents_209; }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA * get_address_of_m_meshExtents_209() { return &___m_meshExtents_209; }
	inline void set_m_meshExtents_209(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  value)
	{
		___m_meshExtents_209 = value;
	}

	inline static int32_t get_offset_of_m_htmlColor_210() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_htmlColor_210)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_htmlColor_210() const { return ___m_htmlColor_210; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_htmlColor_210() { return &___m_htmlColor_210; }
	inline void set_m_htmlColor_210(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_htmlColor_210 = value;
	}

	inline static int32_t get_offset_of_m_colorStack_211() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_colorStack_211)); }
	inline TMP_RichTextTagStack_1_t1C19F739424A83939314F52144105F01D10F4C59  get_m_colorStack_211() const { return ___m_colorStack_211; }
	inline TMP_RichTextTagStack_1_t1C19F739424A83939314F52144105F01D10F4C59 * get_address_of_m_colorStack_211() { return &___m_colorStack_211; }
	inline void set_m_colorStack_211(TMP_RichTextTagStack_1_t1C19F739424A83939314F52144105F01D10F4C59  value)
	{
		___m_colorStack_211 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_colorStack_211))->___m_ItemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_underlineColorStack_212() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_underlineColorStack_212)); }
	inline TMP_RichTextTagStack_1_t1C19F739424A83939314F52144105F01D10F4C59  get_m_underlineColorStack_212() const { return ___m_underlineColorStack_212; }
	inline TMP_RichTextTagStack_1_t1C19F739424A83939314F52144105F01D10F4C59 * get_address_of_m_underlineColorStack_212() { return &___m_underlineColorStack_212; }
	inline void set_m_underlineColorStack_212(TMP_RichTextTagStack_1_t1C19F739424A83939314F52144105F01D10F4C59  value)
	{
		___m_underlineColorStack_212 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_underlineColorStack_212))->___m_ItemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_strikethroughColorStack_213() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_strikethroughColorStack_213)); }
	inline TMP_RichTextTagStack_1_t1C19F739424A83939314F52144105F01D10F4C59  get_m_strikethroughColorStack_213() const { return ___m_strikethroughColorStack_213; }
	inline TMP_RichTextTagStack_1_t1C19F739424A83939314F52144105F01D10F4C59 * get_address_of_m_strikethroughColorStack_213() { return &___m_strikethroughColorStack_213; }
	inline void set_m_strikethroughColorStack_213(TMP_RichTextTagStack_1_t1C19F739424A83939314F52144105F01D10F4C59  value)
	{
		___m_strikethroughColorStack_213 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_strikethroughColorStack_213))->___m_ItemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_highlightColorStack_214() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_highlightColorStack_214)); }
	inline TMP_RichTextTagStack_1_t1C19F739424A83939314F52144105F01D10F4C59  get_m_highlightColorStack_214() const { return ___m_highlightColorStack_214; }
	inline TMP_RichTextTagStack_1_t1C19F739424A83939314F52144105F01D10F4C59 * get_address_of_m_highlightColorStack_214() { return &___m_highlightColorStack_214; }
	inline void set_m_highlightColorStack_214(TMP_RichTextTagStack_1_t1C19F739424A83939314F52144105F01D10F4C59  value)
	{
		___m_highlightColorStack_214 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_highlightColorStack_214))->___m_ItemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_colorGradientPreset_215() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_colorGradientPreset_215)); }
	inline TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * get_m_colorGradientPreset_215() const { return ___m_colorGradientPreset_215; }
	inline TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 ** get_address_of_m_colorGradientPreset_215() { return &___m_colorGradientPreset_215; }
	inline void set_m_colorGradientPreset_215(TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * value)
	{
		___m_colorGradientPreset_215 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_colorGradientPreset_215), (void*)value);
	}

	inline static int32_t get_offset_of_m_colorGradientStack_216() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_colorGradientStack_216)); }
	inline TMP_RichTextTagStack_1_t342372E460C6C5BFFFE5FF1A57DEE7E855012961  get_m_colorGradientStack_216() const { return ___m_colorGradientStack_216; }
	inline TMP_RichTextTagStack_1_t342372E460C6C5BFFFE5FF1A57DEE7E855012961 * get_address_of_m_colorGradientStack_216() { return &___m_colorGradientStack_216; }
	inline void set_m_colorGradientStack_216(TMP_RichTextTagStack_1_t342372E460C6C5BFFFE5FF1A57DEE7E855012961  value)
	{
		___m_colorGradientStack_216 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_colorGradientStack_216))->___m_ItemStack_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_colorGradientStack_216))->___m_DefaultItem_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_tabSpacing_217() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_tabSpacing_217)); }
	inline float get_m_tabSpacing_217() const { return ___m_tabSpacing_217; }
	inline float* get_address_of_m_tabSpacing_217() { return &___m_tabSpacing_217; }
	inline void set_m_tabSpacing_217(float value)
	{
		___m_tabSpacing_217 = value;
	}

	inline static int32_t get_offset_of_m_spacing_218() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_spacing_218)); }
	inline float get_m_spacing_218() const { return ___m_spacing_218; }
	inline float* get_address_of_m_spacing_218() { return &___m_spacing_218; }
	inline void set_m_spacing_218(float value)
	{
		___m_spacing_218 = value;
	}

	inline static int32_t get_offset_of_m_styleStack_219() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_styleStack_219)); }
	inline TMP_RichTextTagStack_1_t84ED35F1394C27DB285E413F24F5096C74045666  get_m_styleStack_219() const { return ___m_styleStack_219; }
	inline TMP_RichTextTagStack_1_t84ED35F1394C27DB285E413F24F5096C74045666 * get_address_of_m_styleStack_219() { return &___m_styleStack_219; }
	inline void set_m_styleStack_219(TMP_RichTextTagStack_1_t84ED35F1394C27DB285E413F24F5096C74045666  value)
	{
		___m_styleStack_219 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_styleStack_219))->___m_ItemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_actionStack_220() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_actionStack_220)); }
	inline TMP_RichTextTagStack_1_t84ED35F1394C27DB285E413F24F5096C74045666  get_m_actionStack_220() const { return ___m_actionStack_220; }
	inline TMP_RichTextTagStack_1_t84ED35F1394C27DB285E413F24F5096C74045666 * get_address_of_m_actionStack_220() { return &___m_actionStack_220; }
	inline void set_m_actionStack_220(TMP_RichTextTagStack_1_t84ED35F1394C27DB285E413F24F5096C74045666  value)
	{
		___m_actionStack_220 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_actionStack_220))->___m_ItemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_padding_221() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_padding_221)); }
	inline float get_m_padding_221() const { return ___m_padding_221; }
	inline float* get_address_of_m_padding_221() { return &___m_padding_221; }
	inline void set_m_padding_221(float value)
	{
		___m_padding_221 = value;
	}

	inline static int32_t get_offset_of_m_baselineOffset_222() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_baselineOffset_222)); }
	inline float get_m_baselineOffset_222() const { return ___m_baselineOffset_222; }
	inline float* get_address_of_m_baselineOffset_222() { return &___m_baselineOffset_222; }
	inline void set_m_baselineOffset_222(float value)
	{
		___m_baselineOffset_222 = value;
	}

	inline static int32_t get_offset_of_m_baselineOffsetStack_223() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_baselineOffsetStack_223)); }
	inline TMP_RichTextTagStack_1_t36D1FD4270DC89CAF634A577A41355D7839A1A75  get_m_baselineOffsetStack_223() const { return ___m_baselineOffsetStack_223; }
	inline TMP_RichTextTagStack_1_t36D1FD4270DC89CAF634A577A41355D7839A1A75 * get_address_of_m_baselineOffsetStack_223() { return &___m_baselineOffsetStack_223; }
	inline void set_m_baselineOffsetStack_223(TMP_RichTextTagStack_1_t36D1FD4270DC89CAF634A577A41355D7839A1A75  value)
	{
		___m_baselineOffsetStack_223 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_baselineOffsetStack_223))->___m_ItemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_xAdvance_224() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_xAdvance_224)); }
	inline float get_m_xAdvance_224() const { return ___m_xAdvance_224; }
	inline float* get_address_of_m_xAdvance_224() { return &___m_xAdvance_224; }
	inline void set_m_xAdvance_224(float value)
	{
		___m_xAdvance_224 = value;
	}

	inline static int32_t get_offset_of_m_textElementType_225() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_textElementType_225)); }
	inline int32_t get_m_textElementType_225() const { return ___m_textElementType_225; }
	inline int32_t* get_address_of_m_textElementType_225() { return &___m_textElementType_225; }
	inline void set_m_textElementType_225(int32_t value)
	{
		___m_textElementType_225 = value;
	}

	inline static int32_t get_offset_of_m_cached_TextElement_226() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_cached_TextElement_226)); }
	inline TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832 * get_m_cached_TextElement_226() const { return ___m_cached_TextElement_226; }
	inline TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832 ** get_address_of_m_cached_TextElement_226() { return &___m_cached_TextElement_226; }
	inline void set_m_cached_TextElement_226(TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832 * value)
	{
		___m_cached_TextElement_226 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cached_TextElement_226), (void*)value);
	}

	inline static int32_t get_offset_of_m_cached_Underline_Character_227() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_cached_Underline_Character_227)); }
	inline TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C * get_m_cached_Underline_Character_227() const { return ___m_cached_Underline_Character_227; }
	inline TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C ** get_address_of_m_cached_Underline_Character_227() { return &___m_cached_Underline_Character_227; }
	inline void set_m_cached_Underline_Character_227(TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C * value)
	{
		___m_cached_Underline_Character_227 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cached_Underline_Character_227), (void*)value);
	}

	inline static int32_t get_offset_of_m_cached_Ellipsis_Character_228() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_cached_Ellipsis_Character_228)); }
	inline TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C * get_m_cached_Ellipsis_Character_228() const { return ___m_cached_Ellipsis_Character_228; }
	inline TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C ** get_address_of_m_cached_Ellipsis_Character_228() { return &___m_cached_Ellipsis_Character_228; }
	inline void set_m_cached_Ellipsis_Character_228(TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C * value)
	{
		___m_cached_Ellipsis_Character_228 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cached_Ellipsis_Character_228), (void*)value);
	}

	inline static int32_t get_offset_of_m_defaultSpriteAsset_229() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_defaultSpriteAsset_229)); }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * get_m_defaultSpriteAsset_229() const { return ___m_defaultSpriteAsset_229; }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 ** get_address_of_m_defaultSpriteAsset_229() { return &___m_defaultSpriteAsset_229; }
	inline void set_m_defaultSpriteAsset_229(TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * value)
	{
		___m_defaultSpriteAsset_229 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_defaultSpriteAsset_229), (void*)value);
	}

	inline static int32_t get_offset_of_m_currentSpriteAsset_230() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_currentSpriteAsset_230)); }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * get_m_currentSpriteAsset_230() const { return ___m_currentSpriteAsset_230; }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 ** get_address_of_m_currentSpriteAsset_230() { return &___m_currentSpriteAsset_230; }
	inline void set_m_currentSpriteAsset_230(TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * value)
	{
		___m_currentSpriteAsset_230 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_currentSpriteAsset_230), (void*)value);
	}

	inline static int32_t get_offset_of_m_spriteCount_231() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_spriteCount_231)); }
	inline int32_t get_m_spriteCount_231() const { return ___m_spriteCount_231; }
	inline int32_t* get_address_of_m_spriteCount_231() { return &___m_spriteCount_231; }
	inline void set_m_spriteCount_231(int32_t value)
	{
		___m_spriteCount_231 = value;
	}

	inline static int32_t get_offset_of_m_spriteIndex_232() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_spriteIndex_232)); }
	inline int32_t get_m_spriteIndex_232() const { return ___m_spriteIndex_232; }
	inline int32_t* get_address_of_m_spriteIndex_232() { return &___m_spriteIndex_232; }
	inline void set_m_spriteIndex_232(int32_t value)
	{
		___m_spriteIndex_232 = value;
	}

	inline static int32_t get_offset_of_m_spriteAnimationID_233() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_spriteAnimationID_233)); }
	inline int32_t get_m_spriteAnimationID_233() const { return ___m_spriteAnimationID_233; }
	inline int32_t* get_address_of_m_spriteAnimationID_233() { return &___m_spriteAnimationID_233; }
	inline void set_m_spriteAnimationID_233(int32_t value)
	{
		___m_spriteAnimationID_233 = value;
	}

	inline static int32_t get_offset_of_m_ignoreActiveState_234() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_ignoreActiveState_234)); }
	inline bool get_m_ignoreActiveState_234() const { return ___m_ignoreActiveState_234; }
	inline bool* get_address_of_m_ignoreActiveState_234() { return &___m_ignoreActiveState_234; }
	inline void set_m_ignoreActiveState_234(bool value)
	{
		___m_ignoreActiveState_234 = value;
	}

	inline static int32_t get_offset_of_k_Power_235() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___k_Power_235)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_k_Power_235() const { return ___k_Power_235; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_k_Power_235() { return &___k_Power_235; }
	inline void set_k_Power_235(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___k_Power_235 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___k_Power_235), (void*)value);
	}
};

struct TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields
{
public:
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___s_colorWhite_53;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___k_LargePositiveVector2_236;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___k_LargeNegativeVector2_237;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_238;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_239;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_240;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_241;

public:
	inline static int32_t get_offset_of_s_colorWhite_53() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___s_colorWhite_53)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_s_colorWhite_53() const { return ___s_colorWhite_53; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_s_colorWhite_53() { return &___s_colorWhite_53; }
	inline void set_s_colorWhite_53(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___s_colorWhite_53 = value;
	}

	inline static int32_t get_offset_of_k_LargePositiveVector2_236() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___k_LargePositiveVector2_236)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_k_LargePositiveVector2_236() const { return ___k_LargePositiveVector2_236; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_k_LargePositiveVector2_236() { return &___k_LargePositiveVector2_236; }
	inline void set_k_LargePositiveVector2_236(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___k_LargePositiveVector2_236 = value;
	}

	inline static int32_t get_offset_of_k_LargeNegativeVector2_237() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___k_LargeNegativeVector2_237)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_k_LargeNegativeVector2_237() const { return ___k_LargeNegativeVector2_237; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_k_LargeNegativeVector2_237() { return &___k_LargeNegativeVector2_237; }
	inline void set_k_LargeNegativeVector2_237(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___k_LargeNegativeVector2_237 = value;
	}

	inline static int32_t get_offset_of_k_LargePositiveFloat_238() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___k_LargePositiveFloat_238)); }
	inline float get_k_LargePositiveFloat_238() const { return ___k_LargePositiveFloat_238; }
	inline float* get_address_of_k_LargePositiveFloat_238() { return &___k_LargePositiveFloat_238; }
	inline void set_k_LargePositiveFloat_238(float value)
	{
		___k_LargePositiveFloat_238 = value;
	}

	inline static int32_t get_offset_of_k_LargeNegativeFloat_239() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___k_LargeNegativeFloat_239)); }
	inline float get_k_LargeNegativeFloat_239() const { return ___k_LargeNegativeFloat_239; }
	inline float* get_address_of_k_LargeNegativeFloat_239() { return &___k_LargeNegativeFloat_239; }
	inline void set_k_LargeNegativeFloat_239(float value)
	{
		___k_LargeNegativeFloat_239 = value;
	}

	inline static int32_t get_offset_of_k_LargePositiveInt_240() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___k_LargePositiveInt_240)); }
	inline int32_t get_k_LargePositiveInt_240() const { return ___k_LargePositiveInt_240; }
	inline int32_t* get_address_of_k_LargePositiveInt_240() { return &___k_LargePositiveInt_240; }
	inline void set_k_LargePositiveInt_240(int32_t value)
	{
		___k_LargePositiveInt_240 = value;
	}

	inline static int32_t get_offset_of_k_LargeNegativeInt_241() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___k_LargeNegativeInt_241)); }
	inline int32_t get_k_LargeNegativeInt_241() const { return ___k_LargeNegativeInt_241; }
	inline int32_t* get_address_of_k_LargeNegativeInt_241() { return &___k_LargeNegativeInt_241; }
	inline void set_k_LargeNegativeInt_241(int32_t value)
	{
		___k_LargeNegativeInt_241 = value;
	}
};


// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1  : public TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262
{
public:
	// System.Boolean TMPro.TextMeshProUGUI::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_242;
	// TMPro.TMP_SubMeshUI[] TMPro.TextMeshProUGUI::m_subTextObjects
	TMP_SubMeshUIU5BU5D_t6295BD0FE7FDE873A040F84487061A1902B0B552* ___m_subTextObjects_243;
	// System.Single TMPro.TextMeshProUGUI::m_previousLossyScaleY
	float ___m_previousLossyScaleY_244;
	// UnityEngine.Vector3[] TMPro.TextMeshProUGUI::m_RectTransformCorners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_RectTransformCorners_245;
	// UnityEngine.CanvasRenderer TMPro.TextMeshProUGUI::m_canvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_canvasRenderer_246;
	// UnityEngine.Canvas TMPro.TextMeshProUGUI::m_canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_canvas_247;
	// System.Boolean TMPro.TextMeshProUGUI::m_isFirstAllocation
	bool ___m_isFirstAllocation_248;
	// System.Int32 TMPro.TextMeshProUGUI::m_max_characters
	int32_t ___m_max_characters_249;
	// System.Boolean TMPro.TextMeshProUGUI::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_250;
	// UnityEngine.Material TMPro.TextMeshProUGUI::m_baseMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_baseMaterial_251;
	// System.Boolean TMPro.TextMeshProUGUI::m_isScrollRegionSet
	bool ___m_isScrollRegionSet_252;
	// System.Int32 TMPro.TextMeshProUGUI::m_stencilID
	int32_t ___m_stencilID_253;
	// UnityEngine.Vector4 TMPro.TextMeshProUGUI::m_maskOffset
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_maskOffset_254;
	// UnityEngine.Matrix4x4 TMPro.TextMeshProUGUI::m_EnvMapMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___m_EnvMapMatrix_255;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_256;
	// System.Int32 TMPro.TextMeshProUGUI::m_recursiveCountA
	int32_t ___m_recursiveCountA_257;
	// System.Int32 TMPro.TextMeshProUGUI::loopCountA
	int32_t ___loopCountA_258;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRebuildingLayout
	bool ___m_isRebuildingLayout_259;

public:
	inline static int32_t get_offset_of_m_hasFontAssetChanged_242() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1, ___m_hasFontAssetChanged_242)); }
	inline bool get_m_hasFontAssetChanged_242() const { return ___m_hasFontAssetChanged_242; }
	inline bool* get_address_of_m_hasFontAssetChanged_242() { return &___m_hasFontAssetChanged_242; }
	inline void set_m_hasFontAssetChanged_242(bool value)
	{
		___m_hasFontAssetChanged_242 = value;
	}

	inline static int32_t get_offset_of_m_subTextObjects_243() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1, ___m_subTextObjects_243)); }
	inline TMP_SubMeshUIU5BU5D_t6295BD0FE7FDE873A040F84487061A1902B0B552* get_m_subTextObjects_243() const { return ___m_subTextObjects_243; }
	inline TMP_SubMeshUIU5BU5D_t6295BD0FE7FDE873A040F84487061A1902B0B552** get_address_of_m_subTextObjects_243() { return &___m_subTextObjects_243; }
	inline void set_m_subTextObjects_243(TMP_SubMeshUIU5BU5D_t6295BD0FE7FDE873A040F84487061A1902B0B552* value)
	{
		___m_subTextObjects_243 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_subTextObjects_243), (void*)value);
	}

	inline static int32_t get_offset_of_m_previousLossyScaleY_244() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1, ___m_previousLossyScaleY_244)); }
	inline float get_m_previousLossyScaleY_244() const { return ___m_previousLossyScaleY_244; }
	inline float* get_address_of_m_previousLossyScaleY_244() { return &___m_previousLossyScaleY_244; }
	inline void set_m_previousLossyScaleY_244(float value)
	{
		___m_previousLossyScaleY_244 = value;
	}

	inline static int32_t get_offset_of_m_RectTransformCorners_245() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1, ___m_RectTransformCorners_245)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_RectTransformCorners_245() const { return ___m_RectTransformCorners_245; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_RectTransformCorners_245() { return &___m_RectTransformCorners_245; }
	inline void set_m_RectTransformCorners_245(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_RectTransformCorners_245 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransformCorners_245), (void*)value);
	}

	inline static int32_t get_offset_of_m_canvasRenderer_246() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1, ___m_canvasRenderer_246)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_canvasRenderer_246() const { return ___m_canvasRenderer_246; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_canvasRenderer_246() { return &___m_canvasRenderer_246; }
	inline void set_m_canvasRenderer_246(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_canvasRenderer_246 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_canvasRenderer_246), (void*)value);
	}

	inline static int32_t get_offset_of_m_canvas_247() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1, ___m_canvas_247)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_canvas_247() const { return ___m_canvas_247; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_canvas_247() { return &___m_canvas_247; }
	inline void set_m_canvas_247(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_canvas_247 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_canvas_247), (void*)value);
	}

	inline static int32_t get_offset_of_m_isFirstAllocation_248() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1, ___m_isFirstAllocation_248)); }
	inline bool get_m_isFirstAllocation_248() const { return ___m_isFirstAllocation_248; }
	inline bool* get_address_of_m_isFirstAllocation_248() { return &___m_isFirstAllocation_248; }
	inline void set_m_isFirstAllocation_248(bool value)
	{
		___m_isFirstAllocation_248 = value;
	}

	inline static int32_t get_offset_of_m_max_characters_249() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1, ___m_max_characters_249)); }
	inline int32_t get_m_max_characters_249() const { return ___m_max_characters_249; }
	inline int32_t* get_address_of_m_max_characters_249() { return &___m_max_characters_249; }
	inline void set_m_max_characters_249(int32_t value)
	{
		___m_max_characters_249 = value;
	}

	inline static int32_t get_offset_of_m_isMaskingEnabled_250() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1, ___m_isMaskingEnabled_250)); }
	inline bool get_m_isMaskingEnabled_250() const { return ___m_isMaskingEnabled_250; }
	inline bool* get_address_of_m_isMaskingEnabled_250() { return &___m_isMaskingEnabled_250; }
	inline void set_m_isMaskingEnabled_250(bool value)
	{
		___m_isMaskingEnabled_250 = value;
	}

	inline static int32_t get_offset_of_m_baseMaterial_251() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1, ___m_baseMaterial_251)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_baseMaterial_251() const { return ___m_baseMaterial_251; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_baseMaterial_251() { return &___m_baseMaterial_251; }
	inline void set_m_baseMaterial_251(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_baseMaterial_251 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_baseMaterial_251), (void*)value);
	}

	inline static int32_t get_offset_of_m_isScrollRegionSet_252() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1, ___m_isScrollRegionSet_252)); }
	inline bool get_m_isScrollRegionSet_252() const { return ___m_isScrollRegionSet_252; }
	inline bool* get_address_of_m_isScrollRegionSet_252() { return &___m_isScrollRegionSet_252; }
	inline void set_m_isScrollRegionSet_252(bool value)
	{
		___m_isScrollRegionSet_252 = value;
	}

	inline static int32_t get_offset_of_m_stencilID_253() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1, ___m_stencilID_253)); }
	inline int32_t get_m_stencilID_253() const { return ___m_stencilID_253; }
	inline int32_t* get_address_of_m_stencilID_253() { return &___m_stencilID_253; }
	inline void set_m_stencilID_253(int32_t value)
	{
		___m_stencilID_253 = value;
	}

	inline static int32_t get_offset_of_m_maskOffset_254() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1, ___m_maskOffset_254)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_maskOffset_254() const { return ___m_maskOffset_254; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_maskOffset_254() { return &___m_maskOffset_254; }
	inline void set_m_maskOffset_254(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_maskOffset_254 = value;
	}

	inline static int32_t get_offset_of_m_EnvMapMatrix_255() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1, ___m_EnvMapMatrix_255)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_m_EnvMapMatrix_255() const { return ___m_EnvMapMatrix_255; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_m_EnvMapMatrix_255() { return &___m_EnvMapMatrix_255; }
	inline void set_m_EnvMapMatrix_255(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___m_EnvMapMatrix_255 = value;
	}

	inline static int32_t get_offset_of_m_isRegisteredForEvents_256() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1, ___m_isRegisteredForEvents_256)); }
	inline bool get_m_isRegisteredForEvents_256() const { return ___m_isRegisteredForEvents_256; }
	inline bool* get_address_of_m_isRegisteredForEvents_256() { return &___m_isRegisteredForEvents_256; }
	inline void set_m_isRegisteredForEvents_256(bool value)
	{
		___m_isRegisteredForEvents_256 = value;
	}

	inline static int32_t get_offset_of_m_recursiveCountA_257() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1, ___m_recursiveCountA_257)); }
	inline int32_t get_m_recursiveCountA_257() const { return ___m_recursiveCountA_257; }
	inline int32_t* get_address_of_m_recursiveCountA_257() { return &___m_recursiveCountA_257; }
	inline void set_m_recursiveCountA_257(int32_t value)
	{
		___m_recursiveCountA_257 = value;
	}

	inline static int32_t get_offset_of_loopCountA_258() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1, ___loopCountA_258)); }
	inline int32_t get_loopCountA_258() const { return ___loopCountA_258; }
	inline int32_t* get_address_of_loopCountA_258() { return &___loopCountA_258; }
	inline void set_loopCountA_258(int32_t value)
	{
		___loopCountA_258 = value;
	}

	inline static int32_t get_offset_of_m_isRebuildingLayout_259() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1, ___m_isRebuildingLayout_259)); }
	inline bool get_m_isRebuildingLayout_259() const { return ___m_isRebuildingLayout_259; }
	inline bool* get_address_of_m_isRebuildingLayout_259() { return &___m_isRebuildingLayout_259; }
	inline void set_m_isRebuildingLayout_259(bool value)
	{
		___m_isRebuildingLayout_259 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif


// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<Menu/<AnimateHeart>d__10>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CAnimateHeartU3Ed__10_t014BA4D6E985BF6DE304D6D371FE8A2B0D2C56B6_mD9C00CD79823F3EFC71833E887B82C67546BBCB4_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, U3CAnimateHeartU3Ed__10_t014BA4D6E985BF6DE304D6D371FE8A2B0D2C56B6 * ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Func`2<System.Single,System.Single>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m4F0F14ACA9CE9640DCA30B2651BAF3A917998BCB_gshared (Func_2_t10AC82CE8886E423467ACF3C9F68E7DA50E26149 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);

// System.Void NativeiOSMethodHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeiOSMethodHandler__ctor_m2DE1C32AA5B7721023C839FE0AD68AE0EB334C1A (NativeiOSMethodHandler_tA026872F39B357B22612A573D338CDC8687867CE * __this, const RuntimeMethod* method);
// System.String TMPro.TMP_Text::get_text()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TMP_Text_get_text_mAB219B1C68CECE146EC8F10E4E9B9EEA27562A83_inline (TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * __this, const RuntimeMethod* method);
// System.Void Menu::HandleException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_HandleException_mB916DC7858A26DC096748CCBE3DC8B7EF44708D6 (Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * __this, Exception_t * ___ex0, const RuntimeMethod* method);
// System.Void TMPro.TMP_Text::set_text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_Text_set_text_m956A422501E9D0D5F12188FD328BD9B982214931 (TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Menu::AnimateHeart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_AnimateHeart_mD3CC3211F6232D960A30DA09F07EF96DD0CD45B0 (Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.AsyncVoidMethodBuilder System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  AsyncVoidMethodBuilder_Create_m878314259623CC47A2EBAEEF2F8E8D6B61560FA5 (const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<Menu/<AnimateHeart>d__10>(!!0&)
inline void AsyncVoidMethodBuilder_Start_TisU3CAnimateHeartU3Ed__10_t014BA4D6E985BF6DE304D6D371FE8A2B0D2C56B6_mD9C00CD79823F3EFC71833E887B82C67546BBCB4 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, U3CAnimateHeartU3Ed__10_t014BA4D6E985BF6DE304D6D371FE8A2B0D2C56B6 * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, U3CAnimateHeartU3Ed__10_t014BA4D6E985BF6DE304D6D371FE8A2B0D2C56B6 *, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CAnimateHeartU3Ed__10_t014BA4D6E985BF6DE304D6D371FE8A2B0D2C56B6_mD9C00CD79823F3EFC71833E887B82C67546BBCB4_gshared)(__this, ___stateMachine0, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void System.Func`2<System.Single,System.Single>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m4F0F14ACA9CE9640DCA30B2651BAF3A917998BCB (Func_2_t10AC82CE8886E423467ACF3C9F68E7DA50E26149 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t10AC82CE8886E423467ACF3C9F68E7DA50E26149 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m4F0F14ACA9CE9640DCA30B2651BAF3A917998BCB_gshared)(__this, ___object0, ___method1, method);
}
// DUCK.Tween.DelegateAnimation`1<DUCK.Tween.ScaleAnimation> DUCK.Tween.Extensions.TransformAnimationExtensions::ScaleTo(UnityEngine.Transform,UnityEngine.Vector3,System.Single,System.Func`2<System.Single,System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DelegateAnimation_1_t00679B3B1BE6AF8388660703663CB806F9EE35C3 * TransformAnimationExtensions_ScaleTo_m753DC5D9CC3A2EFD350774F9ACAA8152C01C1F62 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transform0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___to1, float ___duration2, Func_2_t10AC82CE8886E423467ACF3C9F68E7DA50E26149 * ___easingFunction3, const RuntimeMethod* method);
// System.Void DUCK.Tween.AbstractAnimation::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AbstractAnimation_Play_m8506F931ED6F36CB7F96D61F37835F6F8614F8E1 (AbstractAnimation_t22CE6A8097588867157BF863FEAC246E552B3185 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void NativeAPI::quitApplication()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAPI_quitApplication_mFD978681145BFE6BEAD92CDFE7EBD57CEBF9D5FB (const RuntimeMethod* method);
// System.Void NativeAPI::minimizeApplication()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAPI_minimizeApplication_m5ADF5EE69D16A287D7638CFA9DD60844F57318C7 (const RuntimeMethod* method);
// System.Void NativeAPI::sendMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAPI_sendMessage_m47E81C95BFE68F0348E73FFB6DD7CF6D54120D4D (String_t* ___message0, const RuntimeMethod* method);
// System.Void iNativeMethodHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iNativeMethodHandler__ctor_mBF9C99B80F6B34150659FB50094CD321AB4979BC (iNativeMethodHandler_t2780DAD5B3EDC7492EC23F2FB044FBB47AE8F5C3 * __this, const RuntimeMethod* method);
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, const RuntimeMethod* method);
// System.Void Menu/<AnimateHeart>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateHeartU3Ed__10_MoveNext_mC9165F5175F6E958848F9120096F1C56BC260890 (U3CAnimateHeartU3Ed__10_t014BA4D6E985BF6DE304D6D371FE8A2B0D2C56B6 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetStateMachine_m1ED99BE03B146D8A7117E299EBA5D74999EB52D7 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void Menu/<AnimateHeart>d__10::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateHeartU3Ed__10_SetStateMachine_m07FE178E51DE53DB41EA80A229B7E2E8DDBEA5B4 (U3CAnimateHeartU3Ed__10_t014BA4D6E985BF6DE304D6D371FE8A2B0D2C56B6 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
IL2CPP_EXTERN_C void DEFAULT_CALL quitApplication();
IL2CPP_EXTERN_C void DEFAULT_CALL minimizeApplication();
IL2CPP_EXTERN_C void DEFAULT_CALL sendMessage(char*);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DefaultNamespace.AgnosticMethodHandler::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AgnosticMethodHandler__cctor_mD0D7544D3A2A34495BF53C3AA517EDF8DE3ACF90 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AgnosticMethodHandler_tFE85058BECE4BC6B7D6125F16F7F888D9F11C4C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeiOSMethodHandler_tA026872F39B357B22612A573D338CDC8687867CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MethodHandler = new NativeiOSMethodHandler();
		NativeiOSMethodHandler_tA026872F39B357B22612A573D338CDC8687867CE * L_0 = (NativeiOSMethodHandler_tA026872F39B357B22612A573D338CDC8687867CE *)il2cpp_codegen_object_new(NativeiOSMethodHandler_tA026872F39B357B22612A573D338CDC8687867CE_il2cpp_TypeInfo_var);
		NativeiOSMethodHandler__ctor_m2DE1C32AA5B7721023C839FE0AD68AE0EB334C1A(L_0, /*hidden argument*/NULL);
		((AgnosticMethodHandler_tFE85058BECE4BC6B7D6125F16F7F888D9F11C4C2_StaticFields*)il2cpp_codegen_static_fields_for(AgnosticMethodHandler_tFE85058BECE4BC6B7D6125F16F7F888D9F11C4C2_il2cpp_TypeInfo_var))->set_MethodHandler_0(L_0);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Menu::SendMessageToNativeApp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_SendMessageToNativeApp_m9ECDF5F5B60367CFC118479ACDE233BB76C5E16A (Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AgnosticMethodHandler_tFE85058BECE4BC6B7D6125F16F7F888D9F11C4C2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		// AgnosticMethodHandler.MethodHandler.SendMessage(inputText.text);
		IL2CPP_RUNTIME_CLASS_INIT(AgnosticMethodHandler_tFE85058BECE4BC6B7D6125F16F7F888D9F11C4C2_il2cpp_TypeInfo_var);
		iNativeMethodHandler_t2780DAD5B3EDC7492EC23F2FB044FBB47AE8F5C3 * L_0 = ((AgnosticMethodHandler_tFE85058BECE4BC6B7D6125F16F7F888D9F11C4C2_StaticFields*)il2cpp_codegen_static_fields_for(AgnosticMethodHandler_tFE85058BECE4BC6B7D6125F16F7F888D9F11C4C2_il2cpp_TypeInfo_var))->get_MethodHandler_0();
		TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1 * L_1 = __this->get_inputText_4();
		NullCheck(L_1);
		String_t* L_2;
		L_2 = TMP_Text_get_text_mAB219B1C68CECE146EC8F10E4E9B9EEA27562A83_inline(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(6 /* System.Void iNativeMethodHandler::SendMessage(System.String) */, L_0, L_2);
		// }
		goto IL_0021;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{ // begin catch(System.Exception)
		// catch (Exception ex)
		V_0 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		// HandleException(ex);
		Exception_t * L_3 = V_0;
		Menu_HandleException_mB916DC7858A26DC096748CCBE3DC8B7EF44708D6(__this, L_3, /*hidden argument*/NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0021;
	} // end catch (depth: 1)

IL_0021:
	{
		// }
		return;
	}
}
// System.Void Menu::ShowHostMainWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_ShowHostMainWindow_mA988E045D5392D05EC3590DB8D5AFCAE3641B514 (Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AgnosticMethodHandler_tFE85058BECE4BC6B7D6125F16F7F888D9F11C4C2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		// AgnosticMethodHandler.MethodHandler.MinimizeApplication();
		IL2CPP_RUNTIME_CLASS_INIT(AgnosticMethodHandler_tFE85058BECE4BC6B7D6125F16F7F888D9F11C4C2_il2cpp_TypeInfo_var);
		iNativeMethodHandler_t2780DAD5B3EDC7492EC23F2FB044FBB47AE8F5C3 * L_0 = ((AgnosticMethodHandler_tFE85058BECE4BC6B7D6125F16F7F888D9F11C4C2_StaticFields*)il2cpp_codegen_static_fields_for(AgnosticMethodHandler_tFE85058BECE4BC6B7D6125F16F7F888D9F11C4C2_il2cpp_TypeInfo_var))->get_MethodHandler_0();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(5 /* System.Void iNativeMethodHandler::MinimizeApplication() */, L_0);
		// } catch(Exception ex)
		goto IL_0016;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_000c;
		}
		throw e;
	}

CATCH_000c:
	{ // begin catch(System.Exception)
		// } catch(Exception ex)
		V_0 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		// HandleException(ex);
		Exception_t * L_1 = V_0;
		Menu_HandleException_mB916DC7858A26DC096748CCBE3DC8B7EF44708D6(__this, L_1, /*hidden argument*/NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0016;
	} // end catch (depth: 1)

IL_0016:
	{
		// }
		return;
	}
}
// System.Void Menu::OnNativeMessageReceived(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_OnNativeMessageReceived_m645987E08FCC841FA64CEABCE0E45FF690118F39 (Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	{
		// nativeMessageText.text = message;
		TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1 * L_0 = __this->get_nativeMessageText_5();
		String_t* L_1 = ___message0;
		NullCheck(L_0);
		TMP_Text_set_text_m956A422501E9D0D5F12188FD328BD9B982214931(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Menu::TriggerHeartBeat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_TriggerHeartBeat_mD919BD9D733D82D6B718AF5A88970EAC0AFDC29A (Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * __this, const RuntimeMethod* method)
{
	{
		// AnimateHeart();
		Menu_AnimateHeart_mD3CC3211F6232D960A30DA09F07EF96DD0CD45B0(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Menu::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_Quit_mF5140403CBCE5B22464EC07E3AB8CDF21E748303 (Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AgnosticMethodHandler_tFE85058BECE4BC6B7D6125F16F7F888D9F11C4C2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		// AgnosticMethodHandler.MethodHandler.QuitApplication();
		IL2CPP_RUNTIME_CLASS_INIT(AgnosticMethodHandler_tFE85058BECE4BC6B7D6125F16F7F888D9F11C4C2_il2cpp_TypeInfo_var);
		iNativeMethodHandler_t2780DAD5B3EDC7492EC23F2FB044FBB47AE8F5C3 * L_0 = ((AgnosticMethodHandler_tFE85058BECE4BC6B7D6125F16F7F888D9F11C4C2_StaticFields*)il2cpp_codegen_static_fields_for(AgnosticMethodHandler_tFE85058BECE4BC6B7D6125F16F7F888D9F11C4C2_il2cpp_TypeInfo_var))->get_MethodHandler_0();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(4 /* System.Void iNativeMethodHandler::QuitApplication() */, L_0);
		// } catch(Exception ex)
		goto IL_0016;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_000c;
		}
		throw e;
	}

CATCH_000c:
	{ // begin catch(System.Exception)
		// } catch(Exception ex)
		V_0 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		// HandleException(ex);
		Exception_t * L_1 = V_0;
		Menu_HandleException_mB916DC7858A26DC096748CCBE3DC8B7EF44708D6(__this, L_1, /*hidden argument*/NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0016;
	} // end catch (depth: 1)

IL_0016:
	{
		// }
		return;
	}
}
// System.Void Menu::HandleException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_HandleException_mB916DC7858A26DC096748CCBE3DC8B7EF44708D6 (Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * __this, Exception_t * ___ex0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46417730E643D51DA6AED2427C7D25CA50033A86);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string exceptionMessage = string.Format("Exception thrown when sending message: {0}", ex.ToString());
		Exception_t * L_0 = ___ex0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		String_t* L_2;
		L_2 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral46417730E643D51DA6AED2427C7D25CA50033A86, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// Debug.LogWarning(exceptionMessage);
		String_t* L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(L_3, /*hidden argument*/NULL);
		// errorMessageText.text = exceptionMessage;
		TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1 * L_4 = __this->get_errorMessageText_7();
		String_t* L_5 = V_0;
		NullCheck(L_4);
		TMP_Text_set_text_m956A422501E9D0D5F12188FD328BD9B982214931(L_4, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Menu::AnimateHeart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_AnimateHeart_mD3CC3211F6232D960A30DA09F07EF96DD0CD45B0 (Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3CAnimateHeartU3Ed__10_t014BA4D6E985BF6DE304D6D371FE8A2B0D2C56B6_mD9C00CD79823F3EFC71833E887B82C67546BBCB4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CAnimateHeartU3Ed__10_t014BA4D6E985BF6DE304D6D371FE8A2B0D2C56B6  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  L_0;
		L_0 = AsyncVoidMethodBuilder_Create_m878314259623CC47A2EBAEEF2F8E8D6B61560FA5(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_0);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CAnimateHeartU3Ed__10_t014BA4D6E985BF6DE304D6D371FE8A2B0D2C56B6  L_1 = V_0;
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  L_2 = L_1.get_U3CU3Et__builder_1();
		V_1 = L_2;
		AsyncVoidMethodBuilder_Start_TisU3CAnimateHeartU3Ed__10_t014BA4D6E985BF6DE304D6D371FE8A2B0D2C56B6_mD9C00CD79823F3EFC71833E887B82C67546BBCB4((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)(&V_1), (U3CAnimateHeartU3Ed__10_t014BA4D6E985BF6DE304D6D371FE8A2B0D2C56B6 *)(&V_0), /*hidden argument*/AsyncVoidMethodBuilder_Start_TisU3CAnimateHeartU3Ed__10_t014BA4D6E985BF6DE304D6D371FE8A2B0D2C56B6_mD9C00CD79823F3EFC71833E887B82C67546BBCB4_RuntimeMethod_var);
		return;
	}
}
// System.Void Menu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu__ctor_m7EE9043A2E9DD126B6F69DD8AE3BC9CBDF6E2134 (Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Menu::<AnimateHeart>b__10_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_U3CAnimateHeartU3Eb__10_0_mAC3642175BBE3B4D39D2F413D969AD11B5744F8F (Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Easing_InOutBack_mA69FC2561E67CD8B0F4B8FACA491EB617ED1850C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_m4F0F14ACA9CE9640DCA30B2651BAF3A917998BCB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t10AC82CE8886E423467ACF3C9F68E7DA50E26149_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// () => { nativeHeartbeatImage.ScaleTo(new Vector3(1f, 1f, 1f), .3f, Easing.InOutBack).Play(); }
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_nativeHeartbeatImage_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_1), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		Func_2_t10AC82CE8886E423467ACF3C9F68E7DA50E26149 * L_2 = (Func_2_t10AC82CE8886E423467ACF3C9F68E7DA50E26149 *)il2cpp_codegen_object_new(Func_2_t10AC82CE8886E423467ACF3C9F68E7DA50E26149_il2cpp_TypeInfo_var);
		Func_2__ctor_m4F0F14ACA9CE9640DCA30B2651BAF3A917998BCB(L_2, NULL, (intptr_t)((intptr_t)Easing_InOutBack_mA69FC2561E67CD8B0F4B8FACA491EB617ED1850C_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m4F0F14ACA9CE9640DCA30B2651BAF3A917998BCB_RuntimeMethod_var);
		DelegateAnimation_1_t00679B3B1BE6AF8388660703663CB806F9EE35C3 * L_3;
		L_3 = TransformAnimationExtensions_ScaleTo_m753DC5D9CC3A2EFD350774F9ACAA8152C01C1F62(L_0, L_1, (0.300000012f), L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		AbstractAnimation_Play_m8506F931ED6F36CB7F96D61F37835F6F8614F8E1(L_3, /*hidden argument*/NULL);
		// () => { nativeHeartbeatImage.ScaleTo(new Vector3(1f, 1f, 1f), .3f, Easing.InOutBack).Play(); }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void NativeAPI::quitApplication()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAPI_quitApplication_mFD978681145BFE6BEAD92CDFE7EBD57CEBF9D5FB (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(quitApplication)();

}
// System.Void NativeAPI::minimizeApplication()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAPI_minimizeApplication_m5ADF5EE69D16A287D7638CFA9DD60844F57318C7 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(minimizeApplication)();

}
// System.Void NativeAPI::sendMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAPI_sendMessage_m47E81C95BFE68F0348E73FFB6DD7CF6D54120D4D (String_t* ___message0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___message0' to native representation
	char* ____message0_marshaled = NULL;
	____message0_marshaled = il2cpp_codegen_marshal_string(___message0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(sendMessage)(____message0_marshaled);

	// Marshaling cleanup of parameter '___message0' native representation
	il2cpp_codegen_marshal_free(____message0_marshaled);
	____message0_marshaled = NULL;

}
// System.Void NativeAPI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAPI__ctor_m078F288AC03B02E77E2017CB3EBD3E42B9FED0E4 (NativeAPI_tCF1B87942D24DC16E49B82348757D460312951F7 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void NativeiOSMethodHandler::QuitApplication()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeiOSMethodHandler_QuitApplication_m33459DB32206D0A3D0C421E4200A2E4C1488700C (NativeiOSMethodHandler_tA026872F39B357B22612A573D338CDC8687867CE * __this, const RuntimeMethod* method)
{
	{
		// NativeAPI.quitApplication();
		NativeAPI_quitApplication_mFD978681145BFE6BEAD92CDFE7EBD57CEBF9D5FB(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void NativeiOSMethodHandler::MinimizeApplication()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeiOSMethodHandler_MinimizeApplication_mF691C2BB5DDD35537982434C23AA83B6AB8827F8 (NativeiOSMethodHandler_tA026872F39B357B22612A573D338CDC8687867CE * __this, const RuntimeMethod* method)
{
	{
		// NativeAPI.minimizeApplication();
		NativeAPI_minimizeApplication_m5ADF5EE69D16A287D7638CFA9DD60844F57318C7(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void NativeiOSMethodHandler::SendMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeiOSMethodHandler_SendMessage_mE6FF6C6E6358F8D838A005C7B362475E2937175D (NativeiOSMethodHandler_tA026872F39B357B22612A573D338CDC8687867CE * __this, String_t* ___message0, const RuntimeMethod* method)
{
	{
		// NativeAPI.sendMessage(message);
		String_t* L_0 = ___message0;
		NativeAPI_sendMessage_m47E81C95BFE68F0348E73FFB6DD7CF6D54120D4D(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void NativeiOSMethodHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeiOSMethodHandler__ctor_m2DE1C32AA5B7721023C839FE0AD68AE0EB334C1A (NativeiOSMethodHandler_tA026872F39B357B22612A573D338CDC8687867CE * __this, const RuntimeMethod* method)
{
	{
		iNativeMethodHandler__ctor_mBF9C99B80F6B34150659FB50094CD321AB4979BC(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void iNativeMethodHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iNativeMethodHandler__ctor_mBF9C99B80F6B34150659FB50094CD321AB4979BC (iNativeMethodHandler_t2780DAD5B3EDC7492EC23F2FB044FBB47AE8F5C3 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Menu/<AnimateHeart>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateHeartU3Ed__10_MoveNext_mC9165F5175F6E958848F9120096F1C56BC260890 (U3CAnimateHeartU3Ed__10_t014BA4D6E985BF6DE304D6D371FE8A2B0D2C56B6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Easing_InOutBack_mA69FC2561E67CD8B0F4B8FACA491EB617ED1850C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_m4F0F14ACA9CE9640DCA30B2651BAF3A917998BCB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t10AC82CE8886E423467ACF3C9F68E7DA50E26149_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Menu_U3CAnimateHeartU3Eb__10_0_mAC3642175BBE3B4D39D2F413D969AD11B5744F8F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * V_0 = NULL;
	Exception_t * V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * L_0 = __this->get_U3CU3E4__this_2();
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		// nativeHeartbeatImage.ScaleTo(new Vector3(1.2f, 1.2f, 1.2f), .3f, Easing.InOutBack).Play(
		//     () => { nativeHeartbeatImage.ScaleTo(new Vector3(1f, 1f, 1f), .3f, Easing.InOutBack).Play(); }
		// );
		Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * L_1 = V_0;
		NullCheck(L_1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = L_1->get_nativeHeartbeatImage_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_3), (1.20000005f), (1.20000005f), (1.20000005f), /*hidden argument*/NULL);
		Func_2_t10AC82CE8886E423467ACF3C9F68E7DA50E26149 * L_4 = (Func_2_t10AC82CE8886E423467ACF3C9F68E7DA50E26149 *)il2cpp_codegen_object_new(Func_2_t10AC82CE8886E423467ACF3C9F68E7DA50E26149_il2cpp_TypeInfo_var);
		Func_2__ctor_m4F0F14ACA9CE9640DCA30B2651BAF3A917998BCB(L_4, NULL, (intptr_t)((intptr_t)Easing_InOutBack_mA69FC2561E67CD8B0F4B8FACA491EB617ED1850C_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m4F0F14ACA9CE9640DCA30B2651BAF3A917998BCB_RuntimeMethod_var);
		DelegateAnimation_1_t00679B3B1BE6AF8388660703663CB806F9EE35C3 * L_5;
		L_5 = TransformAnimationExtensions_ScaleTo_m753DC5D9CC3A2EFD350774F9ACAA8152C01C1F62(L_2, L_3, (0.300000012f), L_4, /*hidden argument*/NULL);
		Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * L_6 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_7, L_6, (intptr_t)((intptr_t)Menu_U3CAnimateHeartU3Eb__10_0_mAC3642175BBE3B4D39D2F413D969AD11B5744F8F_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_5);
		VirtActionInvoker2< Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * >::Invoke(5 /* System.Void DUCK.Tween.AbstractAnimation::Play(System.Action,System.Action) */, L_5, L_7, (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)NULL);
		goto IL_0062;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_004b;
		}
		throw e;
	}

CATCH_004b:
	{ // begin catch(System.Exception)
		V_1 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_8 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_9 = V_1;
		AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_8, L_9, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0075;
	} // end catch (depth: 1)

IL_0062:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_10 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_10, /*hidden argument*/NULL);
	}

IL_0075:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CAnimateHeartU3Ed__10_MoveNext_mC9165F5175F6E958848F9120096F1C56BC260890_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CAnimateHeartU3Ed__10_t014BA4D6E985BF6DE304D6D371FE8A2B0D2C56B6 * _thisAdjusted = reinterpret_cast<U3CAnimateHeartU3Ed__10_t014BA4D6E985BF6DE304D6D371FE8A2B0D2C56B6 *>(__this + _offset);
	U3CAnimateHeartU3Ed__10_MoveNext_mC9165F5175F6E958848F9120096F1C56BC260890(_thisAdjusted, method);
}
// System.Void Menu/<AnimateHeart>d__10::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateHeartU3Ed__10_SetStateMachine_m07FE178E51DE53DB41EA80A229B7E2E8DDBEA5B4 (U3CAnimateHeartU3Ed__10_t014BA4D6E985BF6DE304D6D371FE8A2B0D2C56B6 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m1ED99BE03B146D8A7117E299EBA5D74999EB52D7((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CAnimateHeartU3Ed__10_SetStateMachine_m07FE178E51DE53DB41EA80A229B7E2E8DDBEA5B4_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CAnimateHeartU3Ed__10_t014BA4D6E985BF6DE304D6D371FE8A2B0D2C56B6 * _thisAdjusted = reinterpret_cast<U3CAnimateHeartU3Ed__10_t014BA4D6E985BF6DE304D6D371FE8A2B0D2C56B6 *>(__this + _offset);
	U3CAnimateHeartU3Ed__10_SetStateMachine_m07FE178E51DE53DB41EA80A229B7E2E8DDBEA5B4(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TMP_Text_get_text_mAB219B1C68CECE146EC8F10E4E9B9EEA27562A83_inline (TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_text; }
		String_t* L_0 = __this->get_m_text_36();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
