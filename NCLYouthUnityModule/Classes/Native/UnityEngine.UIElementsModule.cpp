#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>



// System.String
struct String_t;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t7FE5B90570DF90F0A62B3DA60BB952D22B3BD271 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// UnityEngine.UIElements.Experimental.Easing
struct Easing_t341D4891B20AA8D3545292FD414F7D2047A2A164  : public RuntimeObject
{
public:

public:
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

#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Single UnityEngine.UIElements.Experimental.Easing::InBack(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Easing_InBack_m1DAEA5F26693FD1A9FABAFDB00E7372D55C394F2 (float ___t0, const RuntimeMethod* method);
// System.Single UnityEngine.UIElements.Experimental.Easing::OutBack(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Easing_OutBack_mCBA14D800F4E262D20B315FE3B1D459EE719FE79 (float ___t0, const RuntimeMethod* method);
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
// System.Single UnityEngine.UIElements.Experimental.Easing::InBack(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Easing_InBack_m1DAEA5F26693FD1A9FABAFDB00E7372D55C394F2 (float ___t0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		V_0 = (1.70158005f);
		float L_0 = ___t0;
		float L_1 = ___t0;
		float L_2 = V_0;
		float L_3 = ___t0;
		float L_4 = V_0;
		V_1 = ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_0, (float)L_1)), (float)((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_add((float)L_2, (float)(1.0f))), (float)L_3)), (float)L_4))));
		goto IL_0019;
	}

IL_0019:
	{
		float L_5 = V_1;
		return L_5;
	}
}
// System.Single UnityEngine.UIElements.Experimental.Easing::OutBack(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Easing_OutBack_mCBA14D800F4E262D20B315FE3B1D459EE719FE79 (float ___t0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = ___t0;
		float L_1;
		L_1 = Easing_InBack_m1DAEA5F26693FD1A9FABAFDB00E7372D55C394F2(((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_0)), /*hidden argument*/NULL);
		V_0 = ((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_1));
		goto IL_0016;
	}

IL_0016:
	{
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single UnityEngine.UIElements.Experimental.Easing::InOutBack(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Easing_InOutBack_mA69FC2561E67CD8B0F4B8FACA491EB617ED1850C (float ___t0, const RuntimeMethod* method)
{
	bool V_0 = false;
	float V_1 = 0.0f;
	{
		float L_0 = ___t0;
		V_0 = (bool)((((float)L_0) < ((float)(0.5f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		float L_2 = ___t0;
		float L_3;
		L_3 = Easing_InBack_m1DAEA5F26693FD1A9FABAFDB00E7372D55C394F2(((float)il2cpp_codegen_multiply((float)L_2, (float)(2.0f))), /*hidden argument*/NULL);
		V_1 = ((float)il2cpp_codegen_multiply((float)L_3, (float)(0.5f)));
		goto IL_0045;
	}

IL_0023:
	{
		float L_4 = ___t0;
		float L_5;
		L_5 = Easing_OutBack_mCBA14D800F4E262D20B315FE3B1D459EE719FE79(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_4, (float)(0.5f))), (float)(2.0f))), /*hidden argument*/NULL);
		V_1 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_5, (float)(0.5f))), (float)(0.5f)));
		goto IL_0045;
	}

IL_0045:
	{
		float L_6 = V_1;
		return L_6;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
