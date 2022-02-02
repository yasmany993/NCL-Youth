#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>



// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
struct CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF;
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
struct CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C;
// System.Diagnostics.DebuggableAttribute
struct DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B;
// System.Runtime.CompilerServices.ExtensionAttribute
struct ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC;
// System.ObsoleteAttribute
struct ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671;
// System.ParamArrayAttribute
struct ParamArrayAttribute_t9DCEB4CDDB8EDDB1124171D4C51FA6069EEA5C5F;
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
struct RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80;
// System.String
struct String_t;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
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

// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
struct CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Int32 System.Runtime.CompilerServices.CompilationRelaxationsAttribute::m_relaxations
	int32_t ___m_relaxations_0;

public:
	inline static int32_t get_offset_of_m_relaxations_0() { return static_cast<int32_t>(offsetof(CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF, ___m_relaxations_0)); }
	inline int32_t get_m_relaxations_0() const { return ___m_relaxations_0; }
	inline int32_t* get_address_of_m_relaxations_0() { return &___m_relaxations_0; }
	inline void set_m_relaxations_0(int32_t value)
	{
		___m_relaxations_0 = value;
	}
};


// System.Runtime.CompilerServices.CompilerGeneratedAttribute
struct CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
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

// System.Runtime.CompilerServices.ExtensionAttribute
struct ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.ObsoleteAttribute
struct ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.ObsoleteAttribute::_message
	String_t* ____message_0;
	// System.Boolean System.ObsoleteAttribute::_error
	bool ____error_1;

public:
	inline static int32_t get_offset_of__message_0() { return static_cast<int32_t>(offsetof(ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671, ____message_0)); }
	inline String_t* get__message_0() const { return ____message_0; }
	inline String_t** get_address_of__message_0() { return &____message_0; }
	inline void set__message_0(String_t* value)
	{
		____message_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_0), (void*)value);
	}

	inline static int32_t get_offset_of__error_1() { return static_cast<int32_t>(offsetof(ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671, ____error_1)); }
	inline bool get__error_1() const { return ____error_1; }
	inline bool* get_address_of__error_1() { return &____error_1; }
	inline void set__error_1(bool value)
	{
		____error_1 = value;
	}
};


// System.ParamArrayAttribute
struct ParamArrayAttribute_t9DCEB4CDDB8EDDB1124171D4C51FA6069EEA5C5F  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
struct RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Boolean System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::m_wrapNonExceptionThrows
	bool ___m_wrapNonExceptionThrows_0;

public:
	inline static int32_t get_offset_of_m_wrapNonExceptionThrows_0() { return static_cast<int32_t>(offsetof(RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80, ___m_wrapNonExceptionThrows_0)); }
	inline bool get_m_wrapNonExceptionThrows_0() const { return ___m_wrapNonExceptionThrows_0; }
	inline bool* get_address_of_m_wrapNonExceptionThrows_0() { return &___m_wrapNonExceptionThrows_0; }
	inline void set_m_wrapNonExceptionThrows_0(bool value)
	{
		___m_wrapNonExceptionThrows_0 = value;
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


// System.Diagnostics.DebuggableAttribute/DebuggingModes
struct DebuggingModes_t279D5B9C012ABA935887CB73C5A63A1F46AF08A8 
{
public:
	// System.Int32 System.Diagnostics.DebuggableAttribute/DebuggingModes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DebuggingModes_t279D5B9C012ABA935887CB73C5A63A1F46AF08A8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Diagnostics.DebuggableAttribute
struct DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Diagnostics.DebuggableAttribute/DebuggingModes System.Diagnostics.DebuggableAttribute::m_debuggingModes
	int32_t ___m_debuggingModes_0;

public:
	inline static int32_t get_offset_of_m_debuggingModes_0() { return static_cast<int32_t>(offsetof(DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B, ___m_debuggingModes_0)); }
	inline int32_t get_m_debuggingModes_0() const { return ___m_debuggingModes_0; }
	inline int32_t* get_address_of_m_debuggingModes_0() { return &___m_debuggingModes_0; }
	inline void set_m_debuggingModes_0(int32_t value)
	{
		___m_debuggingModes_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Void System.Runtime.CompilerServices.CompilationRelaxationsAttribute::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompilationRelaxationsAttribute__ctor_mAC3079EBC4EEAB474EED8208EF95DB39C922333B (CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF * __this, int32_t ___relaxations0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.ExtensionAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute__ctor_m551DDF1438CE97A984571949723F30F44CF7317C (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::set_WrapNonExceptionThrows(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Diagnostics.DebuggableAttribute::.ctor(System.Diagnostics.DebuggableAttribute/DebuggingModes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebuggableAttribute__ctor_m7FF445C8435494A4847123A668D889E692E55550 (DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B * __this, int32_t ___modes0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.CompilerGeneratedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35 (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * __this, const RuntimeMethod* method);
// System.Void System.ParamArrayAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParamArrayAttribute__ctor_mCC72AFF718185BA7B87FD8D9471F1274400C5719 (ParamArrayAttribute_t9DCEB4CDDB8EDDB1124171D4C51FA6069EEA5C5F * __this, const RuntimeMethod* method);
// System.Void System.ObsoleteAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868 (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * __this, String_t* ___message0, const RuntimeMethod* method);
static void Duck_Tween_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF * tmp = (CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF *)cache->attributes[0];
		CompilationRelaxationsAttribute__ctor_mAC3079EBC4EEAB474EED8208EF95DB39C922333B(tmp, 8LL, NULL);
	}
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[1];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
	{
		RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * tmp = (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 *)cache->attributes[2];
		RuntimeCompatibilityAttribute__ctor_m551DDF1438CE97A984571949723F30F44CF7317C(tmp, NULL);
		RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline(tmp, true, NULL);
	}
	{
		DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B * tmp = (DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B *)cache->attributes[3];
		DebuggableAttribute__ctor_m7FF445C8435494A4847123A668D889E692E55550(tmp, 2LL, NULL);
	}
}
static void AbstractAnimation_t22CE6A8097588867157BF863FEAC246E552B3185_CustomAttributesCacheGenerator_U3CIsPlayingU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void AbstractAnimation_t22CE6A8097588867157BF863FEAC246E552B3185_CustomAttributesCacheGenerator_U3CIsLoopingU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void AbstractAnimation_t22CE6A8097588867157BF863FEAC246E552B3185_CustomAttributesCacheGenerator_U3CIsPausedU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void AbstractAnimation_t22CE6A8097588867157BF863FEAC246E552B3185_CustomAttributesCacheGenerator_AbstractAnimation_get_IsPlaying_m457C3F119187DE1A6739652AE35C38E4D67569EE(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void AbstractAnimation_t22CE6A8097588867157BF863FEAC246E552B3185_CustomAttributesCacheGenerator_AbstractAnimation_set_IsPlaying_m27725BD3A3D87F78BB6CA455D82FB0F28C4F56E0(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void AbstractAnimation_t22CE6A8097588867157BF863FEAC246E552B3185_CustomAttributesCacheGenerator_AbstractAnimation_get_IsLooping_mFB6F22C0B8CE882048E749D4212D089C9CC83A3B(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void AbstractAnimation_t22CE6A8097588867157BF863FEAC246E552B3185_CustomAttributesCacheGenerator_AbstractAnimation_set_IsLooping_mAF998BEBC055BE5CD9B65BF1AFD90BB3F8983F27(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void AbstractAnimation_t22CE6A8097588867157BF863FEAC246E552B3185_CustomAttributesCacheGenerator_AbstractAnimation_get_IsPaused_m7C066610245F06E573B97B3B21A1C5020BDF7301(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void AbstractAnimation_t22CE6A8097588867157BF863FEAC246E552B3185_CustomAttributesCacheGenerator_AbstractAnimation_set_IsPaused_m4C788C6655E6481CE5FD3671584E5616028127B2(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void U3CU3Ec__DisplayClass18_0_tF01B3B9436E7C6DFCB5858EEFEAB891363351F7C_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void AnimationCollection_t4B66806A5C9899A308F227A928EAE7CFCF889D51_CustomAttributesCacheGenerator_U3CAnimationsU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void AnimationCollection_t4B66806A5C9899A308F227A928EAE7CFCF889D51_CustomAttributesCacheGenerator_U3CNumberOfAnimationsCompletedU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void AnimationCollection_t4B66806A5C9899A308F227A928EAE7CFCF889D51_CustomAttributesCacheGenerator_AnimationCollection_get_Animations_m652BF5A1D8C3313B0CFCBDEA73B223376E5C5AD5(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void AnimationCollection_t4B66806A5C9899A308F227A928EAE7CFCF889D51_CustomAttributesCacheGenerator_AnimationCollection_set_Animations_m57357DA56FE7B8F6252477F31605F4AE61C4F849(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void AnimationCollection_t4B66806A5C9899A308F227A928EAE7CFCF889D51_CustomAttributesCacheGenerator_AnimationCollection_get_NumberOfAnimationsCompleted_mD20E2ED5BA8AD3D0458DC45E165FA2173E76C8D8(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void AnimationCollection_t4B66806A5C9899A308F227A928EAE7CFCF889D51_CustomAttributesCacheGenerator_AnimationCollection_set_NumberOfAnimationsCompleted_m40907FA2D500CC7B8E37600FF588B43E4843B41E(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void AnimationCollection_t4B66806A5C9899A308F227A928EAE7CFCF889D51_CustomAttributesCacheGenerator_AnimationCollection_Add_mF3C087E11CACA19E6893D67EE5CF1AE8F9CAFEF2____animations0(CustomAttributesCache* cache)
{
	{
		ParamArrayAttribute_t9DCEB4CDDB8EDDB1124171D4C51FA6069EEA5C5F * tmp = (ParamArrayAttribute_t9DCEB4CDDB8EDDB1124171D4C51FA6069EEA5C5F *)cache->attributes[0];
		ParamArrayAttribute__ctor_mCC72AFF718185BA7B87FD8D9471F1274400C5719(tmp, NULL);
	}
}
static void CustomAnimation_t66186A2BAE35BAE427EE947F62DD9EA888372293_CustomAttributesCacheGenerator_U3CCurrentValueU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void CustomAnimation_t66186A2BAE35BAE427EE947F62DD9EA888372293_CustomAttributesCacheGenerator_U3CFromU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void CustomAnimation_t66186A2BAE35BAE427EE947F62DD9EA888372293_CustomAttributesCacheGenerator_U3CToU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void CustomAnimation_t66186A2BAE35BAE427EE947F62DD9EA888372293_CustomAttributesCacheGenerator_CustomAnimation_get_CurrentValue_m9CAE99F5C8A76AFF6741AA3ADE279DA24A55A716(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void CustomAnimation_t66186A2BAE35BAE427EE947F62DD9EA888372293_CustomAttributesCacheGenerator_CustomAnimation_set_CurrentValue_m8AE5F648AD9AEE2E7E23F353B50DBAAA3E01A251(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void CustomAnimation_t66186A2BAE35BAE427EE947F62DD9EA888372293_CustomAttributesCacheGenerator_CustomAnimation_get_From_m70FFE47283CD3C066681171CD1C11C47E4C510BB(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void CustomAnimation_t66186A2BAE35BAE427EE947F62DD9EA888372293_CustomAttributesCacheGenerator_CustomAnimation_set_From_m83B14582A2448AE77FC2B3D019FA33EA1EA22ED5(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void CustomAnimation_t66186A2BAE35BAE427EE947F62DD9EA888372293_CustomAttributesCacheGenerator_CustomAnimation_get_To_m65F0CFFB10F04849B0A0BCB534196EE34D831E02(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void CustomAnimation_t66186A2BAE35BAE427EE947F62DD9EA888372293_CustomAttributesCacheGenerator_CustomAnimation_set_To_mA02B673195F76601131976B14502C950E0BFAFBD(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void CustomAnimation_1_tDC9963ED0E7710DFBBE64CFD329B5AA9D474BD9E_CustomAttributesCacheGenerator_U3CTargetU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void CustomAnimation_1_tDC9963ED0E7710DFBBE64CFD329B5AA9D474BD9E_CustomAttributesCacheGenerator_U3CCurrentValueU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void CustomAnimation_1_tDC9963ED0E7710DFBBE64CFD329B5AA9D474BD9E_CustomAttributesCacheGenerator_U3CFromU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void CustomAnimation_1_tDC9963ED0E7710DFBBE64CFD329B5AA9D474BD9E_CustomAttributesCacheGenerator_U3CToU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void CustomAnimation_1_tDC9963ED0E7710DFBBE64CFD329B5AA9D474BD9E_CustomAttributesCacheGenerator_CustomAnimation_1_get_Target_m3FFAC4865DDFEE2318EC75B5A0B53405B8F59F1F(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void CustomAnimation_1_tDC9963ED0E7710DFBBE64CFD329B5AA9D474BD9E_CustomAttributesCacheGenerator_CustomAnimation_1_set_Target_m883E7DA7D85C596CDAA3357B10A8ED424FB85190(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void CustomAnimation_1_tDC9963ED0E7710DFBBE64CFD329B5AA9D474BD9E_CustomAttributesCacheGenerator_CustomAnimation_1_get_CurrentValue_mD407FF882033956C28B401869828814FC2934E62(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void CustomAnimation_1_tDC9963ED0E7710DFBBE64CFD329B5AA9D474BD9E_CustomAttributesCacheGenerator_CustomAnimation_1_set_CurrentValue_m18C1709B4C56048286CC67EF4051020062F5002B(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void CustomAnimation_1_tDC9963ED0E7710DFBBE64CFD329B5AA9D474BD9E_CustomAttributesCacheGenerator_CustomAnimation_1_get_From_m5705F99F4A4512F11430F02CBB914C0FE8A4294C(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void CustomAnimation_1_tDC9963ED0E7710DFBBE64CFD329B5AA9D474BD9E_CustomAttributesCacheGenerator_CustomAnimation_1_set_From_m460B6AE88DCDFCD2221093AA576B810CDB542166(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void CustomAnimation_1_tDC9963ED0E7710DFBBE64CFD329B5AA9D474BD9E_CustomAttributesCacheGenerator_CustomAnimation_1_get_To_mE552991F9896A6D642D28400C20A63DED58E95A2(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void CustomAnimation_1_tDC9963ED0E7710DFBBE64CFD329B5AA9D474BD9E_CustomAttributesCacheGenerator_CustomAnimation_1_set_To_mB1CC42E8A62184BC4BA122F07F9CEEB6D473A28A(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DelegateAnimation_t4593CED8089437492F7EF9113CB438E1ACC18DFB_CustomAttributesCacheGenerator_U3CAnimationU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DelegateAnimation_t4593CED8089437492F7EF9113CB438E1ACC18DFB_CustomAttributesCacheGenerator_U3COnAnimationCreatedU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DelegateAnimation_t4593CED8089437492F7EF9113CB438E1ACC18DFB_CustomAttributesCacheGenerator_DelegateAnimation_get_Animation_m8A121FD43F1E938E0BB17F576CFAA8D405ECF8C3(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DelegateAnimation_t4593CED8089437492F7EF9113CB438E1ACC18DFB_CustomAttributesCacheGenerator_DelegateAnimation_set_Animation_m33FE3F55944D26FAD15F7624F596CCA105DB5BC7(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DelegateAnimation_t4593CED8089437492F7EF9113CB438E1ACC18DFB_CustomAttributesCacheGenerator_DelegateAnimation_get_OnAnimationCreated_mC2F5746560DA5FB0A020C10FE4855826CEBABF31(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DelegateAnimation_t4593CED8089437492F7EF9113CB438E1ACC18DFB_CustomAttributesCacheGenerator_DelegateAnimation_set_OnAnimationCreated_m6ACACEF68A849C16947112081CB6284920F30ECD(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void U3CU3Ec__DisplayClass16_0_t69608C9A39CB5EEA128A1F0D942D7A48F51B1681_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void U3CU3Ec__DisplayClass17_0_t6B7D8B7396F6E7F63138BA328A047129C52825AA_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void U3CU3Ec__DisplayClass0_0_tAB684C38CFBD7743C868E2B4F050FE6EC506B1C8_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void RendererColorFadeAnimation_t3AC385A2636339A29AEE9BE380CF27923A048069_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x55\x73\x65\x20\x43\x6F\x6C\x6F\x72\x53\x68\x61\x64\x65\x72\x50\x72\x6F\x70\x65\x72\x74\x79\x41\x6E\x69\x6D\x61\x74\x69\x6F\x6E\x20\x69\x6E\x73\x74\x65\x61\x64\x2E"), NULL);
	}
}
static void U3CU3Ec__DisplayClass1_0_t40F355B62EF6A21BC87DC0DDB27B559268E8852E_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TimedAnimation_t7480CEDDD6CD0265E0710F42119CD522278020DC_CustomAttributesCacheGenerator_U3CDefaultDriverU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TimedAnimation_t7480CEDDD6CD0265E0710F42119CD522278020DC_CustomAttributesCacheGenerator_U3CTargetObjectU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TimedAnimation_t7480CEDDD6CD0265E0710F42119CD522278020DC_CustomAttributesCacheGenerator_U3CTargetRectTransformU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TimedAnimation_t7480CEDDD6CD0265E0710F42119CD522278020DC_CustomAttributesCacheGenerator_U3CCurrentTimeU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TimedAnimation_t7480CEDDD6CD0265E0710F42119CD522278020DC_CustomAttributesCacheGenerator_U3CIsReversedU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TimedAnimation_t7480CEDDD6CD0265E0710F42119CD522278020DC_CustomAttributesCacheGenerator_TimedAnimation_get_DefaultDriver_m68576C5460FF01B4DA0D2AEB432EEF1738C6C822(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TimedAnimation_t7480CEDDD6CD0265E0710F42119CD522278020DC_CustomAttributesCacheGenerator_TimedAnimation_set_DefaultDriver_m28958FBDB817940E0A96435EAB8C5D384795F6C6(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TimedAnimation_t7480CEDDD6CD0265E0710F42119CD522278020DC_CustomAttributesCacheGenerator_TimedAnimation_get_TargetObject_mA32635CDF564D7F8A0BD532D01C1FC13CCEE95DF(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TimedAnimation_t7480CEDDD6CD0265E0710F42119CD522278020DC_CustomAttributesCacheGenerator_TimedAnimation_get_TargetRectTransform_mC74E0F90E28836BB78198A09BB1A39D24263C1A7(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TimedAnimation_t7480CEDDD6CD0265E0710F42119CD522278020DC_CustomAttributesCacheGenerator_TimedAnimation_get_CurrentTime_m98988B66C7E974FE8E02EBB134E14346630EE09C(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TimedAnimation_t7480CEDDD6CD0265E0710F42119CD522278020DC_CustomAttributesCacheGenerator_TimedAnimation_set_CurrentTime_m42994EA1F76400E786B739FA4521627626E31E02(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TimedAnimation_t7480CEDDD6CD0265E0710F42119CD522278020DC_CustomAttributesCacheGenerator_TimedAnimation_get_IsReversed_mC4D339A4CD28765F77B19D81AFBA72F99BE73880(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TimedAnimation_t7480CEDDD6CD0265E0710F42119CD522278020DC_CustomAttributesCacheGenerator_TimedAnimation_set_IsReversed_mE3D51A62347F8CDE1E0FBE5DFB913E33D51EC193(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void AnimationExtensions_t62297968EA57E26D55AFC58230D65B0402B09F82_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void AnimationExtensions_t62297968EA57E26D55AFC58230D65B0402B09F82_CustomAttributesCacheGenerator_AnimationExtensions_SafeAbort_mEC3C50596CE55977D853959BFA694D8859EF2C14(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void AnimationExtensions_t62297968EA57E26D55AFC58230D65B0402B09F82_CustomAttributesCacheGenerator_AnimationExtensions_SafeFastFowrward_m2037E8A2C8B2E552DF5AC24599B5595A8672018C(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void AnimationCollectionExtensions_t050A38B9F4F93A37175C95C3D9F794255CBF68E4_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void AnimationCollectionExtensions_t050A38B9F4F93A37175C95C3D9F794255CBF68E4_CustomAttributesCacheGenerator_AnimationCollectionExtensions_ColorFade_m5A206D56115134B407C51127918E83507DF5EBE2(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void AnimationCollectionExtensions_t050A38B9F4F93A37175C95C3D9F794255CBF68E4_CustomAttributesCacheGenerator_AnimationCollectionExtensions_ColorFadeTo_mD2FE4008A10BC6A2E4C9A35D34378C41441C83C4(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void AnimationCollectionExtensions_t050A38B9F4F93A37175C95C3D9F794255CBF68E4_CustomAttributesCacheGenerator_AnimationCollectionExtensions_ColorFade_m7A2CC3A9E8DBA0429382286D4E72BB719AF9DB0D(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void AnimationCollectionExtensions_t050A38B9F4F93A37175C95C3D9F794255CBF68E4_CustomAttributesCacheGenerator_AnimationCollectionExtensions_ColorFadeTo_mEDE143CC3FBEA831BFCD341C6662638BA111BBFA(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void AnimationCollectionExtensions_t050A38B9F4F93A37175C95C3D9F794255CBF68E4_CustomAttributesCacheGenerator_AnimationCollectionExtensions_ColorFade_m6AE205C3700F165A22688F91326387206A8510AD(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void AnimationCollectionExtensions_t050A38B9F4F93A37175C95C3D9F794255CBF68E4_CustomAttributesCacheGenerator_AnimationCollectionExtensions_ColorFadeTo_m2E9EB294DFD3D15AD2E29FC1C224A342BA1CF621(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void AnimationCollectionExtensions_t050A38B9F4F93A37175C95C3D9F794255CBF68E4_CustomAttributesCacheGenerator_AnimationCollectionExtensions_Fade_m75D5125531B5E894AD2F132485238F6771C1F6B1(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void AnimationCollectionExtensions_t050A38B9F4F93A37175C95C3D9F794255CBF68E4_CustomAttributesCacheGenerator_AnimationCollectionExtensions_FadeTo_mBE25422AEEA4041EA9C1A56124F2D9909A85BAA1(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void AnimationCollectionExtensions_t050A38B9F4F93A37175C95C3D9F794255CBF68E4_CustomAttributesCacheGenerator_AnimationCollectionExtensions_Fade_mD237BDF5B59E00B0C0D042BBE589D570EE829378(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void AnimationCollectionExtensions_t050A38B9F4F93A37175C95C3D9F794255CBF68E4_CustomAttributesCacheGenerator_AnimationCollectionExtensions_FadeTo_m43573E4F5F4AC55C14CA1E8DB732CC50614B3D7C(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void AnimationCollectionExtensions_t050A38B9F4F93A37175C95C3D9F794255CBF68E4_CustomAttributesCacheGenerator_AnimationCollectionExtensions_Fade_mD24AECBDC0E895F460868CAAEBA9D61B6D314E01(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void AnimationCollectionExtensions_t050A38B9F4F93A37175C95C3D9F794255CBF68E4_CustomAttributesCacheGenerator_AnimationCollectionExtensions_FadeTo_mAB2448981C6890A4E63352E12C1BA2B5F6C35F8E(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void AnimationCollectionExtensions_t050A38B9F4F93A37175C95C3D9F794255CBF68E4_CustomAttributesCacheGenerator_AnimationCollectionExtensions_Fade_mB946FF54F258ED5D15D8F3D7AFE45DDD93E20D54(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void AnimationCollectionExtensions_t050A38B9F4F93A37175C95C3D9F794255CBF68E4_CustomAttributesCacheGenerator_AnimationCollectionExtensions_FadeTo_mB8B5B2259667DA3952996B67B85479B088CF831F(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void AnimationCollectionExtensions_t050A38B9F4F93A37175C95C3D9F794255CBF68E4_CustomAttributesCacheGenerator_AnimationCollectionExtensions_Wait_mF7064FB2FE1192B383B24C260EC58F134D55F98F(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void AnimationCollectionExtensions_t050A38B9F4F93A37175C95C3D9F794255CBF68E4_CustomAttributesCacheGenerator_AnimationCollectionExtensions_Invoke_mE146AA5E67018306C41EA1A9132399746FCA5303(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void AnimationCollectionExtensions_t050A38B9F4F93A37175C95C3D9F794255CBF68E4_CustomAttributesCacheGenerator_AnimationCollectionExtensions_Activate_m4631D7AAAE58FE76B801FED057C9F64F2AC59BDA(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void AnimationCollectionExtensions_t050A38B9F4F93A37175C95C3D9F794255CBF68E4_CustomAttributesCacheGenerator_AnimationCollectionExtensions_Enable_mA11D3AD941903C49829A8E9A07756553E3F9218F(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void AnimationCollectionExtensions_t050A38B9F4F93A37175C95C3D9F794255CBF68E4_CustomAttributesCacheGenerator_AnimationCollectionExtensions_Sequence_m97D5A7BB2A114B6847DB8EDEE0271B8127F99457(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void AnimationCollectionExtensions_t050A38B9F4F93A37175C95C3D9F794255CBF68E4_CustomAttributesCacheGenerator_AnimationCollectionExtensions_Parallel_m88A2688FFB475413D6F104D683E045316FB40A92(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void AnimationCollectionExtensions_t050A38B9F4F93A37175C95C3D9F794255CBF68E4_CustomAttributesCacheGenerator_AnimationCollectionExtensions_Custom_m77FCCD9A1255CBC6629B7BDA1E33C9A467D05423(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void AnimationCollectionExtensions_t050A38B9F4F93A37175C95C3D9F794255CBF68E4_CustomAttributesCacheGenerator_AnimationCollectionExtensions_Custom_m8613588A4B079042EB54E2784194B3D71A934FA3(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void AnimationCollectionExtensions_t050A38B9F4F93A37175C95C3D9F794255CBF68E4_CustomAttributesCacheGenerator_AnimationCollectionExtensions_BlendShape_m9FC142022628E879B4D6EDB88F2179862ECAC9F3(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void AnimationCollectionExtensions_t050A38B9F4F93A37175C95C3D9F794255CBF68E4_CustomAttributesCacheGenerator_AnimationCollectionExtensions_BlendShapeTo_mA9EDAF6C03E76D7B09B5FBD9A809BFF402853840(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void AnimationCollectionExtensions_t050A38B9F4F93A37175C95C3D9F794255CBF68E4_CustomAttributesCacheGenerator_AnimationCollectionExtensions_Move_mB6CE0D3C2EB2AE32E76D9F7E5517079D43108ED4(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void AnimationCollectionExtensions_t050A38B9F4F93A37175C95C3D9F794255CBF68E4_CustomAttributesCacheGenerator_AnimationCollectionExtensions_MoveAnchor_mD9D2A52BFCA1DCE67D637DB3855AE2B6C22BC790(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void AnimationCollectionExtensions_t050A38B9F4F93A37175C95C3D9F794255CBF68E4_CustomAttributesCacheGenerator_AnimationCollectionExtensions_MoveLocal_m1110B9C4D14C629560920C2BA8ACE5412D190A23(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void AnimationCollectionExtensions_t050A38B9F4F93A37175C95C3D9F794255CBF68E4_CustomAttributesCacheGenerator_AnimationCollectionExtensions_MoveTo_m0CFABAE36C90A2E5BF1B44181106F1609B8C6B7F(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void AnimationCollectionExtensions_t050A38B9F4F93A37175C95C3D9F794255CBF68E4_CustomAttributesCacheGenerator_AnimationCollectionExtensions_MoveAnchorTo_m0A1BE23230286EB1444667FEEE501A2A65680043(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void AnimationCollectionExtensions_t050A38B9F4F93A37175C95C3D9F794255CBF68E4_CustomAttributesCacheGenerator_AnimationCollectionExtensions_MoveRelative_mC6276C32AA29A10825836062D4F5CC5FE3DB33A4(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void AnimationCollectionExtensions_t050A38B9F4F93A37175C95C3D9F794255CBF68E4_CustomAttributesCacheGenerator_AnimationCollectionExtensions_MoveAnchorRelative_m5018B3A367144CF2B8270AE83884D6F88DF36A19(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void AnimationCollectionExtensions_t050A38B9F4F93A37175C95C3D9F794255CBF68E4_CustomAttributesCacheGenerator_AnimationCollectionExtensions_Rotate_m7C2ED1DCB6EF4ACC0A80818F41C38D45C7EAA7E4(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void AnimationCollectionExtensions_t050A38B9F4F93A37175C95C3D9F794255CBF68E4_CustomAttributesCacheGenerator_AnimationCollectionExtensions_Rotate_mF6CA96999E65C5AB2AEFF8656FEA687562B3B8BA(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void AnimationCollectionExtensions_t050A38B9F4F93A37175C95C3D9F794255CBF68E4_CustomAttributesCacheGenerator_AnimationCollectionExtensions_RotateLocal_m6AC8F59ED6F200F9B56611B101C9D1ABD20B500C(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void AnimationCollectionExtensions_t050A38B9F4F93A37175C95C3D9F794255CBF68E4_CustomAttributesCacheGenerator_AnimationCollectionExtensions_RotateLocal_mB286B78666410BE51515893B8CC2185C710D04F3(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void AnimationCollectionExtensions_t050A38B9F4F93A37175C95C3D9F794255CBF68E4_CustomAttributesCacheGenerator_AnimationCollectionExtensions_RotateTo_mAC151D37FCB0701ED49495755D9647DFB20CFD25(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void AnimationCollectionExtensions_t050A38B9F4F93A37175C95C3D9F794255CBF68E4_CustomAttributesCacheGenerator_AnimationCollectionExtensions_RotateTo_m8EBC53C0B740CD0945A7FE674BE24F1FA10945EA(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void AnimationCollectionExtensions_t050A38B9F4F93A37175C95C3D9F794255CBF68E4_CustomAttributesCacheGenerator_AnimationCollectionExtensions_RotateRelative_mEF64972D901103F1C89A9B20F432409CA91408FA(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void AnimationCollectionExtensions_t050A38B9F4F93A37175C95C3D9F794255CBF68E4_CustomAttributesCacheGenerator_AnimationCollectionExtensions_Scale_m5A023E9A6BDEBD279557901820715678942BB0F3(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void AnimationCollectionExtensions_t050A38B9F4F93A37175C95C3D9F794255CBF68E4_CustomAttributesCacheGenerator_AnimationCollectionExtensions_Scale_m2CA7C4491E14F467AA0CD5F50581E4F3A1188AA5(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void AnimationCollectionExtensions_t050A38B9F4F93A37175C95C3D9F794255CBF68E4_CustomAttributesCacheGenerator_AnimationCollectionExtensions_ScaleTo_mF44D5939F24EB2DC24F4597D10A34CBA440FEF3E(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void AnimationCollectionExtensions_t050A38B9F4F93A37175C95C3D9F794255CBF68E4_CustomAttributesCacheGenerator_AnimationCollectionExtensions_ScaleTo_m258976ED38DB70E4AB8491D52B3A264B178F7212(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void AnimationCollectionExtensions_t050A38B9F4F93A37175C95C3D9F794255CBF68E4_CustomAttributesCacheGenerator_AnimationCollectionExtensions_ScaleX_mBF4A9B5E805B0CA9DF669B96BCBC3542D6F7374D(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void AnimationCollectionExtensions_t050A38B9F4F93A37175C95C3D9F794255CBF68E4_CustomAttributesCacheGenerator_AnimationCollectionExtensions_ScaleY_m8DA1D1557193FBEBD569D055AC928D91A4D77CA9(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void AnimationCollectionExtensions_t050A38B9F4F93A37175C95C3D9F794255CBF68E4_CustomAttributesCacheGenerator_AnimationCollectionExtensions_ScaleZ_m586B8828798890E5D74607012A9D7D498025BFE1(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void AnimationCollectionExtensions_t050A38B9F4F93A37175C95C3D9F794255CBF68E4_CustomAttributesCacheGenerator_AnimationCollectionExtensions_Fade_m42324065D44FA7E8CE8DE24F11A0E2B7BCC962C8(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void AnimationCollectionExtensions_t050A38B9F4F93A37175C95C3D9F794255CBF68E4_CustomAttributesCacheGenerator_AnimationCollectionExtensions_FadeTo_m81A503D3D69AB41A4B24BAF72A186C1B4429FB9B(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void AnimationCollectionExtensions_t050A38B9F4F93A37175C95C3D9F794255CBF68E4_CustomAttributesCacheGenerator_AnimationCollectionExtensions_Fade_m097DC0CEAC8A4FB04E3AFADE441D2890C8907448(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void AnimationCollectionExtensions_t050A38B9F4F93A37175C95C3D9F794255CBF68E4_CustomAttributesCacheGenerator_AnimationCollectionExtensions_ColorFade_m802F0E1C84ABF019499E3A441F50CC5B66064522(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void AnimationCollectionExtensions_t050A38B9F4F93A37175C95C3D9F794255CBF68E4_CustomAttributesCacheGenerator_AnimationCollectionExtensions_ColorFadeTo_m8BD9DD35074F0E017CF93F2F17F57AE039BD86EF(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void U3CU3Ec__DisplayClass16_0_tEA5D40D7C7E2AAC7BE326CA7FF2F57BB3B560392_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void U3CU3Ec__DisplayClass17_0_t5BC93EB4BA98813A2C3EA09CDCADF7CFA2715ED5_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void RectTransformAnimationExtensions_t520AB56F18651B88D7E68D8FB61B9E3128E8BBBA_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void RectTransformAnimationExtensions_t520AB56F18651B88D7E68D8FB61B9E3128E8BBBA_CustomAttributesCacheGenerator_RectTransformAnimationExtensions_MoveAnchor_m5B9165CF6F4DE4639A58D21F86DFD7206BC0174E(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void RectTransformAnimationExtensions_t520AB56F18651B88D7E68D8FB61B9E3128E8BBBA_CustomAttributesCacheGenerator_RectTransformAnimationExtensions_MoveAnchorTo_mCD6144E276900CFDA940BA177AC91E6E6F11FBF3(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void RectTransformAnimationExtensions_t520AB56F18651B88D7E68D8FB61B9E3128E8BBBA_CustomAttributesCacheGenerator_RectTransformAnimationExtensions_MoveAnchorRelative_mDD8F845FD4CF46F7C660148FFB304CC5BC2CB04C(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void U3CU3Ec__DisplayClass1_0_t9EF7A8081F307F6FAD821EC5954C4B257C62367B_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void U3CU3Ec__DisplayClass2_0_tA8A178608812965CC1A83741885476DDACF43AC7_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void RendererAnimationExtensions_tDEAABEA3AC18BF912A42C7ED3B61964C89C12A0D_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void RendererAnimationExtensions_tDEAABEA3AC18BF912A42C7ED3B61964C89C12A0D_CustomAttributesCacheGenerator_RendererAnimationExtensions_ColorFade_m8239BC34C539A0466A1D089F1D11E8937AC9D17A(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void RendererAnimationExtensions_tDEAABEA3AC18BF912A42C7ED3B61964C89C12A0D_CustomAttributesCacheGenerator_RendererAnimationExtensions_ColorFade_mCFBD8C31E05DD37B840B5B5B4402910F327532ED(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void RendererAnimationExtensions_tDEAABEA3AC18BF912A42C7ED3B61964C89C12A0D_CustomAttributesCacheGenerator_RendererAnimationExtensions_ColorFade_m83DC953676549150479E984A480D087FA37AD3A3(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void RendererAnimationExtensions_tDEAABEA3AC18BF912A42C7ED3B61964C89C12A0D_CustomAttributesCacheGenerator_RendererAnimationExtensions_ColorFadeTo_mA97929AD6FE9EFF1CC7CA70BD9B5DC5E4B0E955A(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void RendererAnimationExtensions_tDEAABEA3AC18BF912A42C7ED3B61964C89C12A0D_CustomAttributesCacheGenerator_RendererAnimationExtensions_ColorFadeTo_m364377C3D9A875A58D9AB9ACB716080F2E858B02(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void RendererAnimationExtensions_tDEAABEA3AC18BF912A42C7ED3B61964C89C12A0D_CustomAttributesCacheGenerator_RendererAnimationExtensions_ColorFadeTo_m512579F5D6FF9D1355639E9EEDD137DA36B10633(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void RendererAnimationExtensions_tDEAABEA3AC18BF912A42C7ED3B61964C89C12A0D_CustomAttributesCacheGenerator_RendererAnimationExtensions_Fade_m39584AB7B7495646995711E8FDDEAE6521A0BDD6(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void RendererAnimationExtensions_tDEAABEA3AC18BF912A42C7ED3B61964C89C12A0D_CustomAttributesCacheGenerator_RendererAnimationExtensions_FadeTo_m232B9FDECA503CCE37D8D691DEF759F5062FD697(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void RendererAnimationExtensions_tDEAABEA3AC18BF912A42C7ED3B61964C89C12A0D_CustomAttributesCacheGenerator_RendererAnimationExtensions_Fade_m822A93764AD2AB82DCB1DB459F7841CFD12EA465(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void RendererAnimationExtensions_tDEAABEA3AC18BF912A42C7ED3B61964C89C12A0D_CustomAttributesCacheGenerator_RendererAnimationExtensions_FadeTo_m77DDF5E2E9C5E581A93C606C575573CDA25C717D(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void RendererAnimationExtensions_tDEAABEA3AC18BF912A42C7ED3B61964C89C12A0D_CustomAttributesCacheGenerator_RendererAnimationExtensions_Fade_mF911286608B3D1DFEE0CCE996F3227386398D6E6(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void RendererAnimationExtensions_tDEAABEA3AC18BF912A42C7ED3B61964C89C12A0D_CustomAttributesCacheGenerator_RendererAnimationExtensions_Fade_m0349C76D9B7CCA4003DEBA4D007E77FB636882A8(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void RendererAnimationExtensions_tDEAABEA3AC18BF912A42C7ED3B61964C89C12A0D_CustomAttributesCacheGenerator_RendererAnimationExtensions_FadeTo_m59F60A0B37C06CE8F5D6E6A4EE3E5350198A8FA9(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void RendererAnimationExtensions_tDEAABEA3AC18BF912A42C7ED3B61964C89C12A0D_CustomAttributesCacheGenerator_RendererAnimationExtensions_FadeTo_m9D9AA1E4E4DF1378BF0E0018B81039D708F448A1(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void RendererAnimationExtensions_tDEAABEA3AC18BF912A42C7ED3B61964C89C12A0D_CustomAttributesCacheGenerator_RendererAnimationExtensions_Blend_m9504DA57FCC370EEA95350DF91990A7795213406(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void RendererAnimationExtensions_tDEAABEA3AC18BF912A42C7ED3B61964C89C12A0D_CustomAttributesCacheGenerator_RendererAnimationExtensions_BlendTo_m91FC82E2CA9C3D72EC116CC2352E8012D3C8D791(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void U3CU3Ec__DisplayClass5_0_t890A08E163B0C46AE9165AA0F84FEA1033830F84_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void U3CU3Ec__DisplayClass7_0_tDB11A7AB8E8DD1D6A34CDF609884E930EA30A6E7_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void U3CU3Ec__DisplayClass9_0_t62FC53388AACCA8ABBA3019FC4F7BE99A7B8E65B_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void U3CU3Ec__DisplayClass13_0_t5CDF3077B688F7A80BF0FA1F224293938AF790F2_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void U3CU3Ec__DisplayClass15_0_t9E1A94330214FE84C71EEA757C14AACD1CBC8631_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TransformAnimationExtensions_tAA0DBCDD03C7FD564350A968F2FDBDE316479F74_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void TransformAnimationExtensions_tAA0DBCDD03C7FD564350A968F2FDBDE316479F74_CustomAttributesCacheGenerator_TransformAnimationExtensions_Move_m6BACE91816EF55A37ED65D9BCCA202826B0FC96B(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void TransformAnimationExtensions_tAA0DBCDD03C7FD564350A968F2FDBDE316479F74_CustomAttributesCacheGenerator_TransformAnimationExtensions_MoveBetween_m9F732A1665E49EA280E70B93F2700766AF3837A5(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void TransformAnimationExtensions_tAA0DBCDD03C7FD564350A968F2FDBDE316479F74_CustomAttributesCacheGenerator_TransformAnimationExtensions_MoveLocal_mE771CB5E1736F5775C171F6C132A829A7F289A85(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void TransformAnimationExtensions_tAA0DBCDD03C7FD564350A968F2FDBDE316479F74_CustomAttributesCacheGenerator_TransformAnimationExtensions_MoveTo_m1AF645C9778AAE56A856CD09A3A81B6010462263(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void TransformAnimationExtensions_tAA0DBCDD03C7FD564350A968F2FDBDE316479F74_CustomAttributesCacheGenerator_TransformAnimationExtensions_MoveRelative_m480D4B8C89EE3A942C19FD2375963E310AA8A7AA(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void TransformAnimationExtensions_tAA0DBCDD03C7FD564350A968F2FDBDE316479F74_CustomAttributesCacheGenerator_TransformAnimationExtensions_Rotate_m39CE41CDB4D065FBED196F30F415A78235CE6A1B(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void TransformAnimationExtensions_tAA0DBCDD03C7FD564350A968F2FDBDE316479F74_CustomAttributesCacheGenerator_TransformAnimationExtensions_Rotate_mC8D4C256BE6A368751B3A58DBF2C85B0F9B0703D(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void TransformAnimationExtensions_tAA0DBCDD03C7FD564350A968F2FDBDE316479F74_CustomAttributesCacheGenerator_TransformAnimationExtensions_RotateLocal_mA1240CD90587AA8A741F64EB951F3D9BBBEA8F0D(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void TransformAnimationExtensions_tAA0DBCDD03C7FD564350A968F2FDBDE316479F74_CustomAttributesCacheGenerator_TransformAnimationExtensions_RotateLocal_m4DE5D18402AEF47BEA13E24A96F72A1C889DB5EC(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void TransformAnimationExtensions_tAA0DBCDD03C7FD564350A968F2FDBDE316479F74_CustomAttributesCacheGenerator_TransformAnimationExtensions_RotateTo_mB0D6AB85E36E44907FE8839735290C355F56F704(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void TransformAnimationExtensions_tAA0DBCDD03C7FD564350A968F2FDBDE316479F74_CustomAttributesCacheGenerator_TransformAnimationExtensions_RotateTo_m09FBD5C2749D93011F0F35071DEBE0F793BE2CB9(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void TransformAnimationExtensions_tAA0DBCDD03C7FD564350A968F2FDBDE316479F74_CustomAttributesCacheGenerator_TransformAnimationExtensions_RotateRelative_m85A5F8F0B131C8DA399DAEB3BFC96FBCA521C181(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void TransformAnimationExtensions_tAA0DBCDD03C7FD564350A968F2FDBDE316479F74_CustomAttributesCacheGenerator_TransformAnimationExtensions_Scale_m70337D33FEC63604E01EA486D58E76AC8B56FDE4(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void TransformAnimationExtensions_tAA0DBCDD03C7FD564350A968F2FDBDE316479F74_CustomAttributesCacheGenerator_TransformAnimationExtensions_Scale_mAC46E436EAA67C5B87E82178636BF0764C1EB2A8(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void TransformAnimationExtensions_tAA0DBCDD03C7FD564350A968F2FDBDE316479F74_CustomAttributesCacheGenerator_TransformAnimationExtensions_ScaleTo_m753DC5D9CC3A2EFD350774F9ACAA8152C01C1F62(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void TransformAnimationExtensions_tAA0DBCDD03C7FD564350A968F2FDBDE316479F74_CustomAttributesCacheGenerator_TransformAnimationExtensions_ScaleTo_m42B41735C80A708D9B7D1C4D798A0202F04F76FE(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void TransformAnimationExtensions_tAA0DBCDD03C7FD564350A968F2FDBDE316479F74_CustomAttributesCacheGenerator_TransformAnimationExtensions_ScaleX_mE5B99041B655D3A8A946D6FE27C434B743CC6469(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void TransformAnimationExtensions_tAA0DBCDD03C7FD564350A968F2FDBDE316479F74_CustomAttributesCacheGenerator_TransformAnimationExtensions_ScaleY_m67DAEEC992B4BB83A26A4CA4C636558177DFCB4A(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void TransformAnimationExtensions_tAA0DBCDD03C7FD564350A968F2FDBDE316479F74_CustomAttributesCacheGenerator_TransformAnimationExtensions_ScaleZ_mB894A00E9AB336F8B93A3EBC63C1071F66DEAA72(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void U3CU3Ec__DisplayClass1_0_t3DCD0491EFFBC0C7F82B25370415E38D2F1E8405_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void U3CU3Ec__DisplayClass3_0_t05F2DF032A94D0C08C75916444034A2C9B2EFE0C_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void U3CU3Ec__DisplayClass4_0_t24680D5B23AC459FEAD493768685E4C7768CA30F_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void U3CU3Ec__DisplayClass9_0_t1D58B4D274FE3199BBCB295C9F61C2371F9FA5F7_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void U3CU3Ec__DisplayClass10_0_t2F6A0B73C51BC1A5632884A2E033F030BA764BDE_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void U3CU3Ec__DisplayClass11_0_t6557E1CF5FBC96A270BF33BEF6E132FC32963FD0_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void U3CU3Ec__DisplayClass14_0_t66AF5938BF3EE778351E6F53E46629C844E32E25_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void U3CU3Ec__DisplayClass15_0_tAF4B49CC45F17CCA1B0728EB2F371BDDF01EDC1E_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void UIComponentAnimationExtensions_tBBFE307980676A73CCC9C5A85C2F369595A9533A_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void UIComponentAnimationExtensions_tBBFE307980676A73CCC9C5A85C2F369595A9533A_CustomAttributesCacheGenerator_UIComponentAnimationExtensions_Fade_m6B0F649AA60BC78DC0EEF0921737ED618FDA30C5(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void UIComponentAnimationExtensions_tBBFE307980676A73CCC9C5A85C2F369595A9533A_CustomAttributesCacheGenerator_UIComponentAnimationExtensions_FadeTo_mD51C79F883F721F2576060E6D3B659914707022D(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void UIComponentAnimationExtensions_tBBFE307980676A73CCC9C5A85C2F369595A9533A_CustomAttributesCacheGenerator_UIComponentAnimationExtensions_Fade_mC82E9E409460B85FF8AB826476609F88BC172F36(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void UIComponentAnimationExtensions_tBBFE307980676A73CCC9C5A85C2F369595A9533A_CustomAttributesCacheGenerator_UIComponentAnimationExtensions_ColorFade_mC0352C891384DBA169B7A97D67E228BEC192AC8C(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void UIComponentAnimationExtensions_tBBFE307980676A73CCC9C5A85C2F369595A9533A_CustomAttributesCacheGenerator_UIComponentAnimationExtensions_ColorFadeTo_m56BAC95148E06689E28F2730076AA65C28E51906(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void U3CU3Ec__DisplayClass1_0_t70A74E7D8E1039B35BF0268807FEDBA8C90E9A74_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void U3CU3Ec__DisplayClass4_0_t44D89EBA765B6EEFDEB4CF01471A782E99DF3AB7_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Ease_t5A8BA4B42090A5CF0ABEE0C863C3959B5DC1D995_CustomAttributesCacheGenerator_Ease_Combine_mF141F26448D2A69EC1A67808E81940950F8B1D85____easingFuncs0(CustomAttributesCache* cache)
{
	{
		ParamArrayAttribute_t9DCEB4CDDB8EDDB1124171D4C51FA6069EEA5C5F * tmp = (ParamArrayAttribute_t9DCEB4CDDB8EDDB1124171D4C51FA6069EEA5C5F *)cache->attributes[0];
		ParamArrayAttribute__ctor_mCC72AFF718185BA7B87FD8D9471F1274400C5719(tmp, NULL);
	}
}
static void U3CU3Ec__DisplayClass3_0_t4B891A0C1CBB46F03475159BC3B6B4EE9CEFA1F5_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void EasingFunctionStore_tF2947C052A29A1C85E550781359CC19A7658E552_CustomAttributesCacheGenerator_U3CEasingFunctionsU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void EasingFunctionStore_tF2947C052A29A1C85E550781359CC19A7658E552_CustomAttributesCacheGenerator_EasingFunctionStore_get_EasingFunctions_mC8689979F88B982AB7F44A9C6A8CC2A3F96D114B(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void EasingFunctionStore_tF2947C052A29A1C85E550781359CC19A7658E552_CustomAttributesCacheGenerator_EasingFunctionStore_set_EasingFunctions_mB521F72A5314E7F6FB40463BDCE86708420F7DC2(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
IL2CPP_EXTERN_C const CustomAttributesCacheGenerator g_Duck_Tween_AttributeGenerators[];
const CustomAttributesCacheGenerator g_Duck_Tween_AttributeGenerators[188] = 
{
	U3CU3Ec__DisplayClass18_0_tF01B3B9436E7C6DFCB5858EEFEAB891363351F7C_CustomAttributesCacheGenerator,
	U3CU3Ec__DisplayClass16_0_t69608C9A39CB5EEA128A1F0D942D7A48F51B1681_CustomAttributesCacheGenerator,
	U3CU3Ec__DisplayClass17_0_t6B7D8B7396F6E7F63138BA328A047129C52825AA_CustomAttributesCacheGenerator,
	U3CU3Ec__DisplayClass0_0_tAB684C38CFBD7743C868E2B4F050FE6EC506B1C8_CustomAttributesCacheGenerator,
	RendererColorFadeAnimation_t3AC385A2636339A29AEE9BE380CF27923A048069_CustomAttributesCacheGenerator,
	U3CU3Ec__DisplayClass1_0_t40F355B62EF6A21BC87DC0DDB27B559268E8852E_CustomAttributesCacheGenerator,
	AnimationExtensions_t62297968EA57E26D55AFC58230D65B0402B09F82_CustomAttributesCacheGenerator,
	AnimationCollectionExtensions_t050A38B9F4F93A37175C95C3D9F794255CBF68E4_CustomAttributesCacheGenerator,
	U3CU3Ec__DisplayClass16_0_tEA5D40D7C7E2AAC7BE326CA7FF2F57BB3B560392_CustomAttributesCacheGenerator,
	U3CU3Ec__DisplayClass17_0_t5BC93EB4BA98813A2C3EA09CDCADF7CFA2715ED5_CustomAttributesCacheGenerator,
	RectTransformAnimationExtensions_t520AB56F18651B88D7E68D8FB61B9E3128E8BBBA_CustomAttributesCacheGenerator,
	U3CU3Ec__DisplayClass1_0_t9EF7A8081F307F6FAD821EC5954C4B257C62367B_CustomAttributesCacheGenerator,
	U3CU3Ec__DisplayClass2_0_tA8A178608812965CC1A83741885476DDACF43AC7_CustomAttributesCacheGenerator,
	RendererAnimationExtensions_tDEAABEA3AC18BF912A42C7ED3B61964C89C12A0D_CustomAttributesCacheGenerator,
	U3CU3Ec__DisplayClass5_0_t890A08E163B0C46AE9165AA0F84FEA1033830F84_CustomAttributesCacheGenerator,
	U3CU3Ec__DisplayClass7_0_tDB11A7AB8E8DD1D6A34CDF609884E930EA30A6E7_CustomAttributesCacheGenerator,
	U3CU3Ec__DisplayClass9_0_t62FC53388AACCA8ABBA3019FC4F7BE99A7B8E65B_CustomAttributesCacheGenerator,
	U3CU3Ec__DisplayClass13_0_t5CDF3077B688F7A80BF0FA1F224293938AF790F2_CustomAttributesCacheGenerator,
	U3CU3Ec__DisplayClass15_0_t9E1A94330214FE84C71EEA757C14AACD1CBC8631_CustomAttributesCacheGenerator,
	TransformAnimationExtensions_tAA0DBCDD03C7FD564350A968F2FDBDE316479F74_CustomAttributesCacheGenerator,
	U3CU3Ec__DisplayClass1_0_t3DCD0491EFFBC0C7F82B25370415E38D2F1E8405_CustomAttributesCacheGenerator,
	U3CU3Ec__DisplayClass3_0_t05F2DF032A94D0C08C75916444034A2C9B2EFE0C_CustomAttributesCacheGenerator,
	U3CU3Ec__DisplayClass4_0_t24680D5B23AC459FEAD493768685E4C7768CA30F_CustomAttributesCacheGenerator,
	U3CU3Ec__DisplayClass9_0_t1D58B4D274FE3199BBCB295C9F61C2371F9FA5F7_CustomAttributesCacheGenerator,
	U3CU3Ec__DisplayClass10_0_t2F6A0B73C51BC1A5632884A2E033F030BA764BDE_CustomAttributesCacheGenerator,
	U3CU3Ec__DisplayClass11_0_t6557E1CF5FBC96A270BF33BEF6E132FC32963FD0_CustomAttributesCacheGenerator,
	U3CU3Ec__DisplayClass14_0_t66AF5938BF3EE778351E6F53E46629C844E32E25_CustomAttributesCacheGenerator,
	U3CU3Ec__DisplayClass15_0_tAF4B49CC45F17CCA1B0728EB2F371BDDF01EDC1E_CustomAttributesCacheGenerator,
	UIComponentAnimationExtensions_tBBFE307980676A73CCC9C5A85C2F369595A9533A_CustomAttributesCacheGenerator,
	U3CU3Ec__DisplayClass1_0_t70A74E7D8E1039B35BF0268807FEDBA8C90E9A74_CustomAttributesCacheGenerator,
	U3CU3Ec__DisplayClass4_0_t44D89EBA765B6EEFDEB4CF01471A782E99DF3AB7_CustomAttributesCacheGenerator,
	U3CU3Ec__DisplayClass3_0_t4B891A0C1CBB46F03475159BC3B6B4EE9CEFA1F5_CustomAttributesCacheGenerator,
	AbstractAnimation_t22CE6A8097588867157BF863FEAC246E552B3185_CustomAttributesCacheGenerator_U3CIsPlayingU3Ek__BackingField,
	AbstractAnimation_t22CE6A8097588867157BF863FEAC246E552B3185_CustomAttributesCacheGenerator_U3CIsLoopingU3Ek__BackingField,
	AbstractAnimation_t22CE6A8097588867157BF863FEAC246E552B3185_CustomAttributesCacheGenerator_U3CIsPausedU3Ek__BackingField,
	AnimationCollection_t4B66806A5C9899A308F227A928EAE7CFCF889D51_CustomAttributesCacheGenerator_U3CAnimationsU3Ek__BackingField,
	AnimationCollection_t4B66806A5C9899A308F227A928EAE7CFCF889D51_CustomAttributesCacheGenerator_U3CNumberOfAnimationsCompletedU3Ek__BackingField,
	CustomAnimation_t66186A2BAE35BAE427EE947F62DD9EA888372293_CustomAttributesCacheGenerator_U3CCurrentValueU3Ek__BackingField,
	CustomAnimation_t66186A2BAE35BAE427EE947F62DD9EA888372293_CustomAttributesCacheGenerator_U3CFromU3Ek__BackingField,
	CustomAnimation_t66186A2BAE35BAE427EE947F62DD9EA888372293_CustomAttributesCacheGenerator_U3CToU3Ek__BackingField,
	CustomAnimation_1_tDC9963ED0E7710DFBBE64CFD329B5AA9D474BD9E_CustomAttributesCacheGenerator_U3CTargetU3Ek__BackingField,
	CustomAnimation_1_tDC9963ED0E7710DFBBE64CFD329B5AA9D474BD9E_CustomAttributesCacheGenerator_U3CCurrentValueU3Ek__BackingField,
	CustomAnimation_1_tDC9963ED0E7710DFBBE64CFD329B5AA9D474BD9E_CustomAttributesCacheGenerator_U3CFromU3Ek__BackingField,
	CustomAnimation_1_tDC9963ED0E7710DFBBE64CFD329B5AA9D474BD9E_CustomAttributesCacheGenerator_U3CToU3Ek__BackingField,
	DelegateAnimation_t4593CED8089437492F7EF9113CB438E1ACC18DFB_CustomAttributesCacheGenerator_U3CAnimationU3Ek__BackingField,
	DelegateAnimation_t4593CED8089437492F7EF9113CB438E1ACC18DFB_CustomAttributesCacheGenerator_U3COnAnimationCreatedU3Ek__BackingField,
	TimedAnimation_t7480CEDDD6CD0265E0710F42119CD522278020DC_CustomAttributesCacheGenerator_U3CDefaultDriverU3Ek__BackingField,
	TimedAnimation_t7480CEDDD6CD0265E0710F42119CD522278020DC_CustomAttributesCacheGenerator_U3CTargetObjectU3Ek__BackingField,
	TimedAnimation_t7480CEDDD6CD0265E0710F42119CD522278020DC_CustomAttributesCacheGenerator_U3CTargetRectTransformU3Ek__BackingField,
	TimedAnimation_t7480CEDDD6CD0265E0710F42119CD522278020DC_CustomAttributesCacheGenerator_U3CCurrentTimeU3Ek__BackingField,
	TimedAnimation_t7480CEDDD6CD0265E0710F42119CD522278020DC_CustomAttributesCacheGenerator_U3CIsReversedU3Ek__BackingField,
	EasingFunctionStore_tF2947C052A29A1C85E550781359CC19A7658E552_CustomAttributesCacheGenerator_U3CEasingFunctionsU3Ek__BackingField,
	AbstractAnimation_t22CE6A8097588867157BF863FEAC246E552B3185_CustomAttributesCacheGenerator_AbstractAnimation_get_IsPlaying_m457C3F119187DE1A6739652AE35C38E4D67569EE,
	AbstractAnimation_t22CE6A8097588867157BF863FEAC246E552B3185_CustomAttributesCacheGenerator_AbstractAnimation_set_IsPlaying_m27725BD3A3D87F78BB6CA455D82FB0F28C4F56E0,
	AbstractAnimation_t22CE6A8097588867157BF863FEAC246E552B3185_CustomAttributesCacheGenerator_AbstractAnimation_get_IsLooping_mFB6F22C0B8CE882048E749D4212D089C9CC83A3B,
	AbstractAnimation_t22CE6A8097588867157BF863FEAC246E552B3185_CustomAttributesCacheGenerator_AbstractAnimation_set_IsLooping_mAF998BEBC055BE5CD9B65BF1AFD90BB3F8983F27,
	AbstractAnimation_t22CE6A8097588867157BF863FEAC246E552B3185_CustomAttributesCacheGenerator_AbstractAnimation_get_IsPaused_m7C066610245F06E573B97B3B21A1C5020BDF7301,
	AbstractAnimation_t22CE6A8097588867157BF863FEAC246E552B3185_CustomAttributesCacheGenerator_AbstractAnimation_set_IsPaused_m4C788C6655E6481CE5FD3671584E5616028127B2,
	AnimationCollection_t4B66806A5C9899A308F227A928EAE7CFCF889D51_CustomAttributesCacheGenerator_AnimationCollection_get_Animations_m652BF5A1D8C3313B0CFCBDEA73B223376E5C5AD5,
	AnimationCollection_t4B66806A5C9899A308F227A928EAE7CFCF889D51_CustomAttributesCacheGenerator_AnimationCollection_set_Animations_m57357DA56FE7B8F6252477F31605F4AE61C4F849,
	AnimationCollection_t4B66806A5C9899A308F227A928EAE7CFCF889D51_CustomAttributesCacheGenerator_AnimationCollection_get_NumberOfAnimationsCompleted_mD20E2ED5BA8AD3D0458DC45E165FA2173E76C8D8,
	AnimationCollection_t4B66806A5C9899A308F227A928EAE7CFCF889D51_CustomAttributesCacheGenerator_AnimationCollection_set_NumberOfAnimationsCompleted_m40907FA2D500CC7B8E37600FF588B43E4843B41E,
	CustomAnimation_t66186A2BAE35BAE427EE947F62DD9EA888372293_CustomAttributesCacheGenerator_CustomAnimation_get_CurrentValue_m9CAE99F5C8A76AFF6741AA3ADE279DA24A55A716,
	CustomAnimation_t66186A2BAE35BAE427EE947F62DD9EA888372293_CustomAttributesCacheGenerator_CustomAnimation_set_CurrentValue_m8AE5F648AD9AEE2E7E23F353B50DBAAA3E01A251,
	CustomAnimation_t66186A2BAE35BAE427EE947F62DD9EA888372293_CustomAttributesCacheGenerator_CustomAnimation_get_From_m70FFE47283CD3C066681171CD1C11C47E4C510BB,
	CustomAnimation_t66186A2BAE35BAE427EE947F62DD9EA888372293_CustomAttributesCacheGenerator_CustomAnimation_set_From_m83B14582A2448AE77FC2B3D019FA33EA1EA22ED5,
	CustomAnimation_t66186A2BAE35BAE427EE947F62DD9EA888372293_CustomAttributesCacheGenerator_CustomAnimation_get_To_m65F0CFFB10F04849B0A0BCB534196EE34D831E02,
	CustomAnimation_t66186A2BAE35BAE427EE947F62DD9EA888372293_CustomAttributesCacheGenerator_CustomAnimation_set_To_mA02B673195F76601131976B14502C950E0BFAFBD,
	CustomAnimation_1_tDC9963ED0E7710DFBBE64CFD329B5AA9D474BD9E_CustomAttributesCacheGenerator_CustomAnimation_1_get_Target_m3FFAC4865DDFEE2318EC75B5A0B53405B8F59F1F,
	CustomAnimation_1_tDC9963ED0E7710DFBBE64CFD329B5AA9D474BD9E_CustomAttributesCacheGenerator_CustomAnimation_1_set_Target_m883E7DA7D85C596CDAA3357B10A8ED424FB85190,
	CustomAnimation_1_tDC9963ED0E7710DFBBE64CFD329B5AA9D474BD9E_CustomAttributesCacheGenerator_CustomAnimation_1_get_CurrentValue_mD407FF882033956C28B401869828814FC2934E62,
	CustomAnimation_1_tDC9963ED0E7710DFBBE64CFD329B5AA9D474BD9E_CustomAttributesCacheGenerator_CustomAnimation_1_set_CurrentValue_m18C1709B4C56048286CC67EF4051020062F5002B,
	CustomAnimation_1_tDC9963ED0E7710DFBBE64CFD329B5AA9D474BD9E_CustomAttributesCacheGenerator_CustomAnimation_1_get_From_m5705F99F4A4512F11430F02CBB914C0FE8A4294C,
	CustomAnimation_1_tDC9963ED0E7710DFBBE64CFD329B5AA9D474BD9E_CustomAttributesCacheGenerator_CustomAnimation_1_set_From_m460B6AE88DCDFCD2221093AA576B810CDB542166,
	CustomAnimation_1_tDC9963ED0E7710DFBBE64CFD329B5AA9D474BD9E_CustomAttributesCacheGenerator_CustomAnimation_1_get_To_mE552991F9896A6D642D28400C20A63DED58E95A2,
	CustomAnimation_1_tDC9963ED0E7710DFBBE64CFD329B5AA9D474BD9E_CustomAttributesCacheGenerator_CustomAnimation_1_set_To_mB1CC42E8A62184BC4BA122F07F9CEEB6D473A28A,
	DelegateAnimation_t4593CED8089437492F7EF9113CB438E1ACC18DFB_CustomAttributesCacheGenerator_DelegateAnimation_get_Animation_m8A121FD43F1E938E0BB17F576CFAA8D405ECF8C3,
	DelegateAnimation_t4593CED8089437492F7EF9113CB438E1ACC18DFB_CustomAttributesCacheGenerator_DelegateAnimation_set_Animation_m33FE3F55944D26FAD15F7624F596CCA105DB5BC7,
	DelegateAnimation_t4593CED8089437492F7EF9113CB438E1ACC18DFB_CustomAttributesCacheGenerator_DelegateAnimation_get_OnAnimationCreated_mC2F5746560DA5FB0A020C10FE4855826CEBABF31,
	DelegateAnimation_t4593CED8089437492F7EF9113CB438E1ACC18DFB_CustomAttributesCacheGenerator_DelegateAnimation_set_OnAnimationCreated_m6ACACEF68A849C16947112081CB6284920F30ECD,
	TimedAnimation_t7480CEDDD6CD0265E0710F42119CD522278020DC_CustomAttributesCacheGenerator_TimedAnimation_get_DefaultDriver_m68576C5460FF01B4DA0D2AEB432EEF1738C6C822,
	TimedAnimation_t7480CEDDD6CD0265E0710F42119CD522278020DC_CustomAttributesCacheGenerator_TimedAnimation_set_DefaultDriver_m28958FBDB817940E0A96435EAB8C5D384795F6C6,
	TimedAnimation_t7480CEDDD6CD0265E0710F42119CD522278020DC_CustomAttributesCacheGenerator_TimedAnimation_get_TargetObject_mA32635CDF564D7F8A0BD532D01C1FC13CCEE95DF,
	TimedAnimation_t7480CEDDD6CD0265E0710F42119CD522278020DC_CustomAttributesCacheGenerator_TimedAnimation_get_TargetRectTransform_mC74E0F90E28836BB78198A09BB1A39D24263C1A7,
	TimedAnimation_t7480CEDDD6CD0265E0710F42119CD522278020DC_CustomAttributesCacheGenerator_TimedAnimation_get_CurrentTime_m98988B66C7E974FE8E02EBB134E14346630EE09C,
	TimedAnimation_t7480CEDDD6CD0265E0710F42119CD522278020DC_CustomAttributesCacheGenerator_TimedAnimation_set_CurrentTime_m42994EA1F76400E786B739FA4521627626E31E02,
	TimedAnimation_t7480CEDDD6CD0265E0710F42119CD522278020DC_CustomAttributesCacheGenerator_TimedAnimation_get_IsReversed_mC4D339A4CD28765F77B19D81AFBA72F99BE73880,
	TimedAnimation_t7480CEDDD6CD0265E0710F42119CD522278020DC_CustomAttributesCacheGenerator_TimedAnimation_set_IsReversed_mE3D51A62347F8CDE1E0FBE5DFB913E33D51EC193,
	AnimationExtensions_t62297968EA57E26D55AFC58230D65B0402B09F82_CustomAttributesCacheGenerator_AnimationExtensions_SafeAbort_mEC3C50596CE55977D853959BFA694D8859EF2C14,
	AnimationExtensions_t62297968EA57E26D55AFC58230D65B0402B09F82_CustomAttributesCacheGenerator_AnimationExtensions_SafeFastFowrward_m2037E8A2C8B2E552DF5AC24599B5595A8672018C,
	AnimationCollectionExtensions_t050A38B9F4F93A37175C95C3D9F794255CBF68E4_CustomAttributesCacheGenerator_AnimationCollectionExtensions_ColorFade_m5A206D56115134B407C51127918E83507DF5EBE2,
	AnimationCollectionExtensions_t050A38B9F4F93A37175C95C3D9F794255CBF68E4_CustomAttributesCacheGenerator_AnimationCollectionExtensions_ColorFadeTo_mD2FE4008A10BC6A2E4C9A35D34378C41441C83C4,
	AnimationCollectionExtensions_t050A38B9F4F93A37175C95C3D9F794255CBF68E4_CustomAttributesCacheGenerator_AnimationCollectionExtensions_ColorFade_m7A2CC3A9E8DBA0429382286D4E72BB719AF9DB0D,
	AnimationCollectionExtensions_t050A38B9F4F93A37175C95C3D9F794255CBF68E4_CustomAttributesCacheGenerator_AnimationCollectionExtensions_ColorFadeTo_mEDE143CC3FBEA831BFCD341C6662638BA111BBFA,
	AnimationCollectionExtensions_t050A38B9F4F93A37175C95C3D9F794255CBF68E4_CustomAttributesCacheGenerator_AnimationCollectionExtensions_ColorFade_m6AE205C3700F165A22688F91326387206A8510AD,
	AnimationCollectionExtensions_t050A38B9F4F93A37175C95C3D9F794255CBF68E4_CustomAttributesCacheGenerator_AnimationCollectionExtensions_ColorFadeTo_m2E9EB294DFD3D15AD2E29FC1C224A342BA1CF621,
	AnimationCollectionExtensions_t050A38B9F4F93A37175C95C3D9F794255CBF68E4_CustomAttributesCacheGenerator_AnimationCollectionExtensions_Fade_m75D5125531B5E894AD2F132485238F6771C1F6B1,
	AnimationCollectionExtensions_t050A38B9F4F93A37175C95C3D9F794255CBF68E4_CustomAttributesCacheGenerator_AnimationCollectionExtensions_FadeTo_mBE25422AEEA4041EA9C1A56124F2D9909A85BAA1,
	AnimationCollectionExtensions_t050A38B9F4F93A37175C95C3D9F794255CBF68E4_CustomAttributesCacheGenerator_AnimationCollectionExtensions_Fade_mD237BDF5B59E00B0C0D042BBE589D570EE829378,
	AnimationCollectionExtensions_t050A38B9F4F93A37175C95C3D9F794255CBF68E4_CustomAttributesCacheGenerator_AnimationCollectionExtensions_FadeTo_m43573E4F5F4AC55C14CA1E8DB732CC50614B3D7C,
	AnimationCollectionExtensions_t050A38B9F4F93A37175C95C3D9F794255CBF68E4_CustomAttributesCacheGenerator_AnimationCollectionExtensions_Fade_mD24AECBDC0E895F460868CAAEBA9D61B6D314E01,
	AnimationCollectionExtensions_t050A38B9F4F93A37175C95C3D9F794255CBF68E4_CustomAttributesCacheGenerator_AnimationCollectionExtensions_FadeTo_mAB2448981C6890A4E63352E12C1BA2B5F6C35F8E,
	AnimationCollectionExtensions_t050A38B9F4F93A37175C95C3D9F794255CBF68E4_CustomAttributesCacheGenerator_AnimationCollectionExtensions_Fade_mB946FF54F258ED5D15D8F3D7AFE45DDD93E20D54,
	AnimationCollectionExtensions_t050A38B9F4F93A37175C95C3D9F794255CBF68E4_CustomAttributesCacheGenerator_AnimationCollectionExtensions_FadeTo_mB8B5B2259667DA3952996B67B85479B088CF831F,
	AnimationCollectionExtensions_t050A38B9F4F93A37175C95C3D9F794255CBF68E4_CustomAttributesCacheGenerator_AnimationCollectionExtensions_Wait_mF7064FB2FE1192B383B24C260EC58F134D55F98F,
	AnimationCollectionExtensions_t050A38B9F4F93A37175C95C3D9F794255CBF68E4_CustomAttributesCacheGenerator_AnimationCollectionExtensions_Invoke_mE146AA5E67018306C41EA1A9132399746FCA5303,
	AnimationCollectionExtensions_t050A38B9F4F93A37175C95C3D9F794255CBF68E4_CustomAttributesCacheGenerator_AnimationCollectionExtensions_Activate_m4631D7AAAE58FE76B801FED057C9F64F2AC59BDA,
	AnimationCollectionExtensions_t050A38B9F4F93A37175C95C3D9F794255CBF68E4_CustomAttributesCacheGenerator_AnimationCollectionExtensions_Enable_mA11D3AD941903C49829A8E9A07756553E3F9218F,
	AnimationCollectionExtensions_t050A38B9F4F93A37175C95C3D9F794255CBF68E4_CustomAttributesCacheGenerator_AnimationCollectionExtensions_Sequence_m97D5A7BB2A114B6847DB8EDEE0271B8127F99457,
	AnimationCollectionExtensions_t050A38B9F4F93A37175C95C3D9F794255CBF68E4_CustomAttributesCacheGenerator_AnimationCollectionExtensions_Parallel_m88A2688FFB475413D6F104D683E045316FB40A92,
	AnimationCollectionExtensions_t050A38B9F4F93A37175C95C3D9F794255CBF68E4_CustomAttributesCacheGenerator_AnimationCollectionExtensions_Custom_m77FCCD9A1255CBC6629B7BDA1E33C9A467D05423,
	AnimationCollectionExtensions_t050A38B9F4F93A37175C95C3D9F794255CBF68E4_CustomAttributesCacheGenerator_AnimationCollectionExtensions_Custom_m8613588A4B079042EB54E2784194B3D71A934FA3,
	AnimationCollectionExtensions_t050A38B9F4F93A37175C95C3D9F794255CBF68E4_CustomAttributesCacheGenerator_AnimationCollectionExtensions_BlendShape_m9FC142022628E879B4D6EDB88F2179862ECAC9F3,
	AnimationCollectionExtensions_t050A38B9F4F93A37175C95C3D9F794255CBF68E4_CustomAttributesCacheGenerator_AnimationCollectionExtensions_BlendShapeTo_mA9EDAF6C03E76D7B09B5FBD9A809BFF402853840,
	AnimationCollectionExtensions_t050A38B9F4F93A37175C95C3D9F794255CBF68E4_CustomAttributesCacheGenerator_AnimationCollectionExtensions_Move_mB6CE0D3C2EB2AE32E76D9F7E5517079D43108ED4,
	AnimationCollectionExtensions_t050A38B9F4F93A37175C95C3D9F794255CBF68E4_CustomAttributesCacheGenerator_AnimationCollectionExtensions_MoveAnchor_mD9D2A52BFCA1DCE67D637DB3855AE2B6C22BC790,
	AnimationCollectionExtensions_t050A38B9F4F93A37175C95C3D9F794255CBF68E4_CustomAttributesCacheGenerator_AnimationCollectionExtensions_MoveLocal_m1110B9C4D14C629560920C2BA8ACE5412D190A23,
	AnimationCollectionExtensions_t050A38B9F4F93A37175C95C3D9F794255CBF68E4_CustomAttributesCacheGenerator_AnimationCollectionExtensions_MoveTo_m0CFABAE36C90A2E5BF1B44181106F1609B8C6B7F,
	AnimationCollectionExtensions_t050A38B9F4F93A37175C95C3D9F794255CBF68E4_CustomAttributesCacheGenerator_AnimationCollectionExtensions_MoveAnchorTo_m0A1BE23230286EB1444667FEEE501A2A65680043,
	AnimationCollectionExtensions_t050A38B9F4F93A37175C95C3D9F794255CBF68E4_CustomAttributesCacheGenerator_AnimationCollectionExtensions_MoveRelative_mC6276C32AA29A10825836062D4F5CC5FE3DB33A4,
	AnimationCollectionExtensions_t050A38B9F4F93A37175C95C3D9F794255CBF68E4_CustomAttributesCacheGenerator_AnimationCollectionExtensions_MoveAnchorRelative_m5018B3A367144CF2B8270AE83884D6F88DF36A19,
	AnimationCollectionExtensions_t050A38B9F4F93A37175C95C3D9F794255CBF68E4_CustomAttributesCacheGenerator_AnimationCollectionExtensions_Rotate_m7C2ED1DCB6EF4ACC0A80818F41C38D45C7EAA7E4,
	AnimationCollectionExtensions_t050A38B9F4F93A37175C95C3D9F794255CBF68E4_CustomAttributesCacheGenerator_AnimationCollectionExtensions_Rotate_mF6CA96999E65C5AB2AEFF8656FEA687562B3B8BA,
	AnimationCollectionExtensions_t050A38B9F4F93A37175C95C3D9F794255CBF68E4_CustomAttributesCacheGenerator_AnimationCollectionExtensions_RotateLocal_m6AC8F59ED6F200F9B56611B101C9D1ABD20B500C,
	AnimationCollectionExtensions_t050A38B9F4F93A37175C95C3D9F794255CBF68E4_CustomAttributesCacheGenerator_AnimationCollectionExtensions_RotateLocal_mB286B78666410BE51515893B8CC2185C710D04F3,
	AnimationCollectionExtensions_t050A38B9F4F93A37175C95C3D9F794255CBF68E4_CustomAttributesCacheGenerator_AnimationCollectionExtensions_RotateTo_mAC151D37FCB0701ED49495755D9647DFB20CFD25,
	AnimationCollectionExtensions_t050A38B9F4F93A37175C95C3D9F794255CBF68E4_CustomAttributesCacheGenerator_AnimationCollectionExtensions_RotateTo_m8EBC53C0B740CD0945A7FE674BE24F1FA10945EA,
	AnimationCollectionExtensions_t050A38B9F4F93A37175C95C3D9F794255CBF68E4_CustomAttributesCacheGenerator_AnimationCollectionExtensions_RotateRelative_mEF64972D901103F1C89A9B20F432409CA91408FA,
	AnimationCollectionExtensions_t050A38B9F4F93A37175C95C3D9F794255CBF68E4_CustomAttributesCacheGenerator_AnimationCollectionExtensions_Scale_m5A023E9A6BDEBD279557901820715678942BB0F3,
	AnimationCollectionExtensions_t050A38B9F4F93A37175C95C3D9F794255CBF68E4_CustomAttributesCacheGenerator_AnimationCollectionExtensions_Scale_m2CA7C4491E14F467AA0CD5F50581E4F3A1188AA5,
	AnimationCollectionExtensions_t050A38B9F4F93A37175C95C3D9F794255CBF68E4_CustomAttributesCacheGenerator_AnimationCollectionExtensions_ScaleTo_mF44D5939F24EB2DC24F4597D10A34CBA440FEF3E,
	AnimationCollectionExtensions_t050A38B9F4F93A37175C95C3D9F794255CBF68E4_CustomAttributesCacheGenerator_AnimationCollectionExtensions_ScaleTo_m258976ED38DB70E4AB8491D52B3A264B178F7212,
	AnimationCollectionExtensions_t050A38B9F4F93A37175C95C3D9F794255CBF68E4_CustomAttributesCacheGenerator_AnimationCollectionExtensions_ScaleX_mBF4A9B5E805B0CA9DF669B96BCBC3542D6F7374D,
	AnimationCollectionExtensions_t050A38B9F4F93A37175C95C3D9F794255CBF68E4_CustomAttributesCacheGenerator_AnimationCollectionExtensions_ScaleY_m8DA1D1557193FBEBD569D055AC928D91A4D77CA9,
	AnimationCollectionExtensions_t050A38B9F4F93A37175C95C3D9F794255CBF68E4_CustomAttributesCacheGenerator_AnimationCollectionExtensions_ScaleZ_m586B8828798890E5D74607012A9D7D498025BFE1,
	AnimationCollectionExtensions_t050A38B9F4F93A37175C95C3D9F794255CBF68E4_CustomAttributesCacheGenerator_AnimationCollectionExtensions_Fade_m42324065D44FA7E8CE8DE24F11A0E2B7BCC962C8,
	AnimationCollectionExtensions_t050A38B9F4F93A37175C95C3D9F794255CBF68E4_CustomAttributesCacheGenerator_AnimationCollectionExtensions_FadeTo_m81A503D3D69AB41A4B24BAF72A186C1B4429FB9B,
	AnimationCollectionExtensions_t050A38B9F4F93A37175C95C3D9F794255CBF68E4_CustomAttributesCacheGenerator_AnimationCollectionExtensions_Fade_m097DC0CEAC8A4FB04E3AFADE441D2890C8907448,
	AnimationCollectionExtensions_t050A38B9F4F93A37175C95C3D9F794255CBF68E4_CustomAttributesCacheGenerator_AnimationCollectionExtensions_ColorFade_m802F0E1C84ABF019499E3A441F50CC5B66064522,
	AnimationCollectionExtensions_t050A38B9F4F93A37175C95C3D9F794255CBF68E4_CustomAttributesCacheGenerator_AnimationCollectionExtensions_ColorFadeTo_m8BD9DD35074F0E017CF93F2F17F57AE039BD86EF,
	RectTransformAnimationExtensions_t520AB56F18651B88D7E68D8FB61B9E3128E8BBBA_CustomAttributesCacheGenerator_RectTransformAnimationExtensions_MoveAnchor_m5B9165CF6F4DE4639A58D21F86DFD7206BC0174E,
	RectTransformAnimationExtensions_t520AB56F18651B88D7E68D8FB61B9E3128E8BBBA_CustomAttributesCacheGenerator_RectTransformAnimationExtensions_MoveAnchorTo_mCD6144E276900CFDA940BA177AC91E6E6F11FBF3,
	RectTransformAnimationExtensions_t520AB56F18651B88D7E68D8FB61B9E3128E8BBBA_CustomAttributesCacheGenerator_RectTransformAnimationExtensions_MoveAnchorRelative_mDD8F845FD4CF46F7C660148FFB304CC5BC2CB04C,
	RendererAnimationExtensions_tDEAABEA3AC18BF912A42C7ED3B61964C89C12A0D_CustomAttributesCacheGenerator_RendererAnimationExtensions_ColorFade_m8239BC34C539A0466A1D089F1D11E8937AC9D17A,
	RendererAnimationExtensions_tDEAABEA3AC18BF912A42C7ED3B61964C89C12A0D_CustomAttributesCacheGenerator_RendererAnimationExtensions_ColorFade_mCFBD8C31E05DD37B840B5B5B4402910F327532ED,
	RendererAnimationExtensions_tDEAABEA3AC18BF912A42C7ED3B61964C89C12A0D_CustomAttributesCacheGenerator_RendererAnimationExtensions_ColorFade_m83DC953676549150479E984A480D087FA37AD3A3,
	RendererAnimationExtensions_tDEAABEA3AC18BF912A42C7ED3B61964C89C12A0D_CustomAttributesCacheGenerator_RendererAnimationExtensions_ColorFadeTo_mA97929AD6FE9EFF1CC7CA70BD9B5DC5E4B0E955A,
	RendererAnimationExtensions_tDEAABEA3AC18BF912A42C7ED3B61964C89C12A0D_CustomAttributesCacheGenerator_RendererAnimationExtensions_ColorFadeTo_m364377C3D9A875A58D9AB9ACB716080F2E858B02,
	RendererAnimationExtensions_tDEAABEA3AC18BF912A42C7ED3B61964C89C12A0D_CustomAttributesCacheGenerator_RendererAnimationExtensions_ColorFadeTo_m512579F5D6FF9D1355639E9EEDD137DA36B10633,
	RendererAnimationExtensions_tDEAABEA3AC18BF912A42C7ED3B61964C89C12A0D_CustomAttributesCacheGenerator_RendererAnimationExtensions_Fade_m39584AB7B7495646995711E8FDDEAE6521A0BDD6,
	RendererAnimationExtensions_tDEAABEA3AC18BF912A42C7ED3B61964C89C12A0D_CustomAttributesCacheGenerator_RendererAnimationExtensions_FadeTo_m232B9FDECA503CCE37D8D691DEF759F5062FD697,
	RendererAnimationExtensions_tDEAABEA3AC18BF912A42C7ED3B61964C89C12A0D_CustomAttributesCacheGenerator_RendererAnimationExtensions_Fade_m822A93764AD2AB82DCB1DB459F7841CFD12EA465,
	RendererAnimationExtensions_tDEAABEA3AC18BF912A42C7ED3B61964C89C12A0D_CustomAttributesCacheGenerator_RendererAnimationExtensions_FadeTo_m77DDF5E2E9C5E581A93C606C575573CDA25C717D,
	RendererAnimationExtensions_tDEAABEA3AC18BF912A42C7ED3B61964C89C12A0D_CustomAttributesCacheGenerator_RendererAnimationExtensions_Fade_mF911286608B3D1DFEE0CCE996F3227386398D6E6,
	RendererAnimationExtensions_tDEAABEA3AC18BF912A42C7ED3B61964C89C12A0D_CustomAttributesCacheGenerator_RendererAnimationExtensions_Fade_m0349C76D9B7CCA4003DEBA4D007E77FB636882A8,
	RendererAnimationExtensions_tDEAABEA3AC18BF912A42C7ED3B61964C89C12A0D_CustomAttributesCacheGenerator_RendererAnimationExtensions_FadeTo_m59F60A0B37C06CE8F5D6E6A4EE3E5350198A8FA9,
	RendererAnimationExtensions_tDEAABEA3AC18BF912A42C7ED3B61964C89C12A0D_CustomAttributesCacheGenerator_RendererAnimationExtensions_FadeTo_m9D9AA1E4E4DF1378BF0E0018B81039D708F448A1,
	RendererAnimationExtensions_tDEAABEA3AC18BF912A42C7ED3B61964C89C12A0D_CustomAttributesCacheGenerator_RendererAnimationExtensions_Blend_m9504DA57FCC370EEA95350DF91990A7795213406,
	RendererAnimationExtensions_tDEAABEA3AC18BF912A42C7ED3B61964C89C12A0D_CustomAttributesCacheGenerator_RendererAnimationExtensions_BlendTo_m91FC82E2CA9C3D72EC116CC2352E8012D3C8D791,
	TransformAnimationExtensions_tAA0DBCDD03C7FD564350A968F2FDBDE316479F74_CustomAttributesCacheGenerator_TransformAnimationExtensions_Move_m6BACE91816EF55A37ED65D9BCCA202826B0FC96B,
	TransformAnimationExtensions_tAA0DBCDD03C7FD564350A968F2FDBDE316479F74_CustomAttributesCacheGenerator_TransformAnimationExtensions_MoveBetween_m9F732A1665E49EA280E70B93F2700766AF3837A5,
	TransformAnimationExtensions_tAA0DBCDD03C7FD564350A968F2FDBDE316479F74_CustomAttributesCacheGenerator_TransformAnimationExtensions_MoveLocal_mE771CB5E1736F5775C171F6C132A829A7F289A85,
	TransformAnimationExtensions_tAA0DBCDD03C7FD564350A968F2FDBDE316479F74_CustomAttributesCacheGenerator_TransformAnimationExtensions_MoveTo_m1AF645C9778AAE56A856CD09A3A81B6010462263,
	TransformAnimationExtensions_tAA0DBCDD03C7FD564350A968F2FDBDE316479F74_CustomAttributesCacheGenerator_TransformAnimationExtensions_MoveRelative_m480D4B8C89EE3A942C19FD2375963E310AA8A7AA,
	TransformAnimationExtensions_tAA0DBCDD03C7FD564350A968F2FDBDE316479F74_CustomAttributesCacheGenerator_TransformAnimationExtensions_Rotate_m39CE41CDB4D065FBED196F30F415A78235CE6A1B,
	TransformAnimationExtensions_tAA0DBCDD03C7FD564350A968F2FDBDE316479F74_CustomAttributesCacheGenerator_TransformAnimationExtensions_Rotate_mC8D4C256BE6A368751B3A58DBF2C85B0F9B0703D,
	TransformAnimationExtensions_tAA0DBCDD03C7FD564350A968F2FDBDE316479F74_CustomAttributesCacheGenerator_TransformAnimationExtensions_RotateLocal_mA1240CD90587AA8A741F64EB951F3D9BBBEA8F0D,
	TransformAnimationExtensions_tAA0DBCDD03C7FD564350A968F2FDBDE316479F74_CustomAttributesCacheGenerator_TransformAnimationExtensions_RotateLocal_m4DE5D18402AEF47BEA13E24A96F72A1C889DB5EC,
	TransformAnimationExtensions_tAA0DBCDD03C7FD564350A968F2FDBDE316479F74_CustomAttributesCacheGenerator_TransformAnimationExtensions_RotateTo_mB0D6AB85E36E44907FE8839735290C355F56F704,
	TransformAnimationExtensions_tAA0DBCDD03C7FD564350A968F2FDBDE316479F74_CustomAttributesCacheGenerator_TransformAnimationExtensions_RotateTo_m09FBD5C2749D93011F0F35071DEBE0F793BE2CB9,
	TransformAnimationExtensions_tAA0DBCDD03C7FD564350A968F2FDBDE316479F74_CustomAttributesCacheGenerator_TransformAnimationExtensions_RotateRelative_m85A5F8F0B131C8DA399DAEB3BFC96FBCA521C181,
	TransformAnimationExtensions_tAA0DBCDD03C7FD564350A968F2FDBDE316479F74_CustomAttributesCacheGenerator_TransformAnimationExtensions_Scale_m70337D33FEC63604E01EA486D58E76AC8B56FDE4,
	TransformAnimationExtensions_tAA0DBCDD03C7FD564350A968F2FDBDE316479F74_CustomAttributesCacheGenerator_TransformAnimationExtensions_Scale_mAC46E436EAA67C5B87E82178636BF0764C1EB2A8,
	TransformAnimationExtensions_tAA0DBCDD03C7FD564350A968F2FDBDE316479F74_CustomAttributesCacheGenerator_TransformAnimationExtensions_ScaleTo_m753DC5D9CC3A2EFD350774F9ACAA8152C01C1F62,
	TransformAnimationExtensions_tAA0DBCDD03C7FD564350A968F2FDBDE316479F74_CustomAttributesCacheGenerator_TransformAnimationExtensions_ScaleTo_m42B41735C80A708D9B7D1C4D798A0202F04F76FE,
	TransformAnimationExtensions_tAA0DBCDD03C7FD564350A968F2FDBDE316479F74_CustomAttributesCacheGenerator_TransformAnimationExtensions_ScaleX_mE5B99041B655D3A8A946D6FE27C434B743CC6469,
	TransformAnimationExtensions_tAA0DBCDD03C7FD564350A968F2FDBDE316479F74_CustomAttributesCacheGenerator_TransformAnimationExtensions_ScaleY_m67DAEEC992B4BB83A26A4CA4C636558177DFCB4A,
	TransformAnimationExtensions_tAA0DBCDD03C7FD564350A968F2FDBDE316479F74_CustomAttributesCacheGenerator_TransformAnimationExtensions_ScaleZ_mB894A00E9AB336F8B93A3EBC63C1071F66DEAA72,
	UIComponentAnimationExtensions_tBBFE307980676A73CCC9C5A85C2F369595A9533A_CustomAttributesCacheGenerator_UIComponentAnimationExtensions_Fade_m6B0F649AA60BC78DC0EEF0921737ED618FDA30C5,
	UIComponentAnimationExtensions_tBBFE307980676A73CCC9C5A85C2F369595A9533A_CustomAttributesCacheGenerator_UIComponentAnimationExtensions_FadeTo_mD51C79F883F721F2576060E6D3B659914707022D,
	UIComponentAnimationExtensions_tBBFE307980676A73CCC9C5A85C2F369595A9533A_CustomAttributesCacheGenerator_UIComponentAnimationExtensions_Fade_mC82E9E409460B85FF8AB826476609F88BC172F36,
	UIComponentAnimationExtensions_tBBFE307980676A73CCC9C5A85C2F369595A9533A_CustomAttributesCacheGenerator_UIComponentAnimationExtensions_ColorFade_mC0352C891384DBA169B7A97D67E228BEC192AC8C,
	UIComponentAnimationExtensions_tBBFE307980676A73CCC9C5A85C2F369595A9533A_CustomAttributesCacheGenerator_UIComponentAnimationExtensions_ColorFadeTo_m56BAC95148E06689E28F2730076AA65C28E51906,
	EasingFunctionStore_tF2947C052A29A1C85E550781359CC19A7658E552_CustomAttributesCacheGenerator_EasingFunctionStore_get_EasingFunctions_mC8689979F88B982AB7F44A9C6A8CC2A3F96D114B,
	EasingFunctionStore_tF2947C052A29A1C85E550781359CC19A7658E552_CustomAttributesCacheGenerator_EasingFunctionStore_set_EasingFunctions_mB521F72A5314E7F6FB40463BDCE86708420F7DC2,
	AnimationCollection_t4B66806A5C9899A308F227A928EAE7CFCF889D51_CustomAttributesCacheGenerator_AnimationCollection_Add_mF3C087E11CACA19E6893D67EE5CF1AE8F9CAFEF2____animations0,
	Ease_t5A8BA4B42090A5CF0ABEE0C863C3959B5DC1D995_CustomAttributesCacheGenerator_Ease_Combine_mF141F26448D2A69EC1A67808E81940950F8B1D85____easingFuncs0,
	Duck_Tween_CustomAttributesCacheGenerator,
};
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_m_wrapNonExceptionThrows_0(L_0);
		return;
	}
}
