#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Purchasing.OSXStoreBindings
struct OSXStoreBindings_tD0E17BAA0ED7902B814FE315E824A26287CF0E85;
// UnityEngine.Purchasing.UnityPurchasingCallback
struct UnityPurchasingCallback_t20A03FDDD96FE5358EBD4E5F01D273D4DF861004;
// UnityEngine.Purchasing.iOSStoreBindings
struct iOSStoreBindings_t98BBAC437AD8F6AB47E78D62A24B378B97D1B244;

struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t7C30F530A1EA13B38CBC5DECCD1D9DBDDF9B547E 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.String
struct  String_t  : public RuntimeObject
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
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// UnityEngine.Purchasing.OSXStoreBindings
struct  OSXStoreBindings_tD0E17BAA0ED7902B814FE315E824A26287CF0E85  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Purchasing.iOSStoreBindings
struct  iOSStoreBindings_t98BBAC437AD8F6AB47E78D62A24B378B97D1B244  : public RuntimeObject
{
public:

public:
};


// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.IntPtr
struct  IntPtr_t 
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


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
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
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
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

// UnityEngine.Purchasing.UnityPurchasingCallback
struct  UnityPurchasingCallback_t20A03FDDD96FE5358EBD4E5F01D273D4DF861004  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Void UnityEngine.Purchasing.OSXStoreBindings::setUnityPurchasingCallback(UnityEngine.Purchasing.UnityPurchasingCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSXStoreBindings_setUnityPurchasingCallback_m1B9E77986F7FE52B0B0CBCAE86496D0FF4A5E7EB (UnityPurchasingCallback_t20A03FDDD96FE5358EBD4E5F01D273D4DF861004 * ___AsyncCallback0, const RuntimeMethod* method);
// System.String UnityEngine.Purchasing.OSXStoreBindings::getUnityPurchasingAppReceipt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* OSXStoreBindings_getUnityPurchasingAppReceipt_m702EC6E592BBF681A0A84538DFEA076459A6D702 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Purchasing.OSXStoreBindings::unityPurchasingRetrieveProducts(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OSXStoreBindings_unityPurchasingRetrieveProducts_m762C673967DF6672FE9D65DEE647142F0601572B (String_t* ___json0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Purchasing.OSXStoreBindings::unityPurchasingPurchase(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OSXStoreBindings_unityPurchasingPurchase_m934CC8567A5B2054950D231AAC29F221E18D7DD8 (String_t* ___json0, String_t* ___developerPayload1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Purchasing.OSXStoreBindings::unityPurchasingFinishTransaction(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OSXStoreBindings_unityPurchasingFinishTransaction_m145373244A1B58D5642E452D85C0ED21F9C07946 (String_t* ___productJSON0, String_t* ___transactionId1, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.OSXStoreBindings::unityPurchasingRestoreTransactions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSXStoreBindings_unityPurchasingRestoreTransactions_m80BB9063E4017D66A850FC9B5DF913D0AD9241C7 (const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.OSXStoreBindings::unityPurchasingAddTransactionObserver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSXStoreBindings_unityPurchasingAddTransactionObserver_mE966496A18B53467C15198051687E4075E74DD3C (const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.OSXStoreBindings::unityPurchasingInterceptPromotionalPurchases()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSXStoreBindings_unityPurchasingInterceptPromotionalPurchases_m01F28E4125E6D167E625F57561DBE34AAB53CCEF (const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.iOSStoreBindings::setUnityPurchasingCallback(UnityEngine.Purchasing.UnityPurchasingCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_setUnityPurchasingCallback_m429E495193487E2E7B489EAA4B851BF0F2CEAB2A (UnityPurchasingCallback_t20A03FDDD96FE5358EBD4E5F01D273D4DF861004 * ___AsyncCallback0, const RuntimeMethod* method);
// System.String UnityEngine.Purchasing.iOSStoreBindings::getUnityPurchasingAppReceipt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* iOSStoreBindings_getUnityPurchasingAppReceipt_m6A60BAEE03E897FA0A848C6D14E86BDBEBFBCAA8 (const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.iOSStoreBindings::unityPurchasingRetrieveProducts(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_unityPurchasingRetrieveProducts_m2A041EE0C0BC00F62F3A3FFA9F9E8ACFEB958518 (String_t* ___json0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.iOSStoreBindings::unityPurchasingPurchase(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_unityPurchasingPurchase_mFD22E87273DE76B0601FA15BCEF88912A16DD4B0 (String_t* ___json0, String_t* ___developerPayload1, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.iOSStoreBindings::unityPurchasingFinishTransaction(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_unityPurchasingFinishTransaction_mD9D2C05357EF7ADC5F5343BB87CC13CBD751653F (String_t* ___productJSON0, String_t* ___transactionId1, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.iOSStoreBindings::unityPurchasingRestoreTransactions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_unityPurchasingRestoreTransactions_m9225BF72B53FE29D478C2A45308D70308597C405 (const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.iOSStoreBindings::unityPurchasingAddTransactionObserver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_unityPurchasingAddTransactionObserver_m8B19DC717DC475661FCC4AADC0B820575AC24074 (const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.iOSStoreBindings::unityPurchasingInterceptPromotionalPurchases()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_unityPurchasingInterceptPromotionalPurchases_m8C670C20CE1B334EE3D60D07FF893511B3EF2D4C (const RuntimeMethod* method);
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
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL unityPurchasingRetrieveProducts(char*);
#endif
// System.Boolean UnityEngine.Purchasing.OSXStoreBindings::unityPurchasingRetrieveProducts(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OSXStoreBindings_unityPurchasingRetrieveProducts_m762C673967DF6672FE9D65DEE647142F0601572B (String_t* ___json0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (char*);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("unitypurchasing"), "unityPurchasingRetrieveProducts", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___json0' to native representation
	char* ____json0_marshaled = NULL;
	____json0_marshaled = il2cpp_codegen_marshal_string(___json0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(unityPurchasingRetrieveProducts)(____json0_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____json0_marshaled);
	#endif

	// Marshaling cleanup of parameter '___json0' native representation
	il2cpp_codegen_marshal_free(____json0_marshaled);
	____json0_marshaled = NULL;

	return static_cast<bool>(returnValue);
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL unityPurchasingPurchase(char*, char*);
#endif
// System.Boolean UnityEngine.Purchasing.OSXStoreBindings::unityPurchasingPurchase(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OSXStoreBindings_unityPurchasingPurchase_m934CC8567A5B2054950D231AAC29F221E18D7DD8 (String_t* ___json0, String_t* ___developerPayload1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (char*, char*);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(char*) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("unitypurchasing"), "unityPurchasingPurchase", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___json0' to native representation
	char* ____json0_marshaled = NULL;
	____json0_marshaled = il2cpp_codegen_marshal_string(___json0);

	// Marshaling of parameter '___developerPayload1' to native representation
	char* ____developerPayload1_marshaled = NULL;
	____developerPayload1_marshaled = il2cpp_codegen_marshal_string(___developerPayload1);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(unityPurchasingPurchase)(____json0_marshaled, ____developerPayload1_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____json0_marshaled, ____developerPayload1_marshaled);
	#endif

	// Marshaling cleanup of parameter '___json0' native representation
	il2cpp_codegen_marshal_free(____json0_marshaled);
	____json0_marshaled = NULL;

	// Marshaling cleanup of parameter '___developerPayload1' native representation
	il2cpp_codegen_marshal_free(____developerPayload1_marshaled);
	____developerPayload1_marshaled = NULL;

	return static_cast<bool>(returnValue);
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL unityPurchasingFinishTransaction(char*, char*);
#endif
// System.Boolean UnityEngine.Purchasing.OSXStoreBindings::unityPurchasingFinishTransaction(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OSXStoreBindings_unityPurchasingFinishTransaction_m145373244A1B58D5642E452D85C0ED21F9C07946 (String_t* ___productJSON0, String_t* ___transactionId1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (char*, char*);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(char*) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("unitypurchasing"), "unityPurchasingFinishTransaction", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___productJSON0' to native representation
	char* ____productJSON0_marshaled = NULL;
	____productJSON0_marshaled = il2cpp_codegen_marshal_string(___productJSON0);

	// Marshaling of parameter '___transactionId1' to native representation
	char* ____transactionId1_marshaled = NULL;
	____transactionId1_marshaled = il2cpp_codegen_marshal_string(___transactionId1);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(unityPurchasingFinishTransaction)(____productJSON0_marshaled, ____transactionId1_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____productJSON0_marshaled, ____transactionId1_marshaled);
	#endif

	// Marshaling cleanup of parameter '___productJSON0' native representation
	il2cpp_codegen_marshal_free(____productJSON0_marshaled);
	____productJSON0_marshaled = NULL;

	// Marshaling cleanup of parameter '___transactionId1' native representation
	il2cpp_codegen_marshal_free(____transactionId1_marshaled);
	____transactionId1_marshaled = NULL;

	return static_cast<bool>(returnValue);
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL unityPurchasingRestoreTransactions();
#endif
// System.Void UnityEngine.Purchasing.OSXStoreBindings::unityPurchasingRestoreTransactions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSXStoreBindings_unityPurchasingRestoreTransactions_m80BB9063E4017D66A850FC9B5DF913D0AD9241C7 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("unitypurchasing"), "unityPurchasingRestoreTransactions", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	reinterpret_cast<PInvokeFunc>(unityPurchasingRestoreTransactions)();
	#else
	il2cppPInvokeFunc();
	#endif

}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL unityPurchasingAddTransactionObserver();
#endif
// System.Void UnityEngine.Purchasing.OSXStoreBindings::unityPurchasingAddTransactionObserver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSXStoreBindings_unityPurchasingAddTransactionObserver_mE966496A18B53467C15198051687E4075E74DD3C (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("unitypurchasing"), "unityPurchasingAddTransactionObserver", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	reinterpret_cast<PInvokeFunc>(unityPurchasingAddTransactionObserver)();
	#else
	il2cppPInvokeFunc();
	#endif

}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL setUnityPurchasingCallback(Il2CppMethodPointer);
#endif
// System.Void UnityEngine.Purchasing.OSXStoreBindings::setUnityPurchasingCallback(UnityEngine.Purchasing.UnityPurchasingCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSXStoreBindings_setUnityPurchasingCallback_m1B9E77986F7FE52B0B0CBCAE86496D0FF4A5E7EB (UnityPurchasingCallback_t20A03FDDD96FE5358EBD4E5F01D273D4DF861004 * ___AsyncCallback0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("unitypurchasing"), "setUnityPurchasingCallback", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___AsyncCallback0' to native representation
	Il2CppMethodPointer ____AsyncCallback0_marshaled = NULL;
	____AsyncCallback0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___AsyncCallback0));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	reinterpret_cast<PInvokeFunc>(setUnityPurchasingCallback)(____AsyncCallback0_marshaled);
	#else
	il2cppPInvokeFunc(____AsyncCallback0_marshaled);
	#endif

}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C char* DEFAULT_CALL getUnityPurchasingAppReceipt();
#endif
// System.String UnityEngine.Purchasing.OSXStoreBindings::getUnityPurchasingAppReceipt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* OSXStoreBindings_getUnityPurchasingAppReceipt_m702EC6E592BBF681A0A84538DFEA076459A6D702 (const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("unitypurchasing"), "getUnityPurchasingAppReceipt", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	char* returnValue = reinterpret_cast<PInvokeFunc>(getUnityPurchasingAppReceipt)();
	#else
	char* returnValue = il2cppPInvokeFunc();
	#endif

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL unityPurchasingInterceptPromotionalPurchases();
#endif
// System.Void UnityEngine.Purchasing.OSXStoreBindings::unityPurchasingInterceptPromotionalPurchases()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSXStoreBindings_unityPurchasingInterceptPromotionalPurchases_m01F28E4125E6D167E625F57561DBE34AAB53CCEF (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("unitypurchasing"), "unityPurchasingInterceptPromotionalPurchases", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	reinterpret_cast<PInvokeFunc>(unityPurchasingInterceptPromotionalPurchases)();
	#else
	il2cppPInvokeFunc();
	#endif

}
// System.Void UnityEngine.Purchasing.OSXStoreBindings::SetUnityPurchasingCallback(UnityEngine.Purchasing.UnityPurchasingCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSXStoreBindings_SetUnityPurchasingCallback_m8B9E7310AF6946BFAD1AF7B4EF9BB309AE924016 (OSXStoreBindings_tD0E17BAA0ED7902B814FE315E824A26287CF0E85 * __this, UnityPurchasingCallback_t20A03FDDD96FE5358EBD4E5F01D273D4DF861004 * ___AsyncCallback0, const RuntimeMethod* method)
{
	{
		UnityPurchasingCallback_t20A03FDDD96FE5358EBD4E5F01D273D4DF861004 * L_0 = ___AsyncCallback0;
		OSXStoreBindings_setUnityPurchasingCallback_m1B9E77986F7FE52B0B0CBCAE86496D0FF4A5E7EB(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.Purchasing.OSXStoreBindings::get_appReceipt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* OSXStoreBindings_get_appReceipt_mE88A47DE4E0E9F09BA2881381CE1DAB03BCB6D06 (OSXStoreBindings_tD0E17BAA0ED7902B814FE315E824A26287CF0E85 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = OSXStoreBindings_getUnityPurchasingAppReceipt_m702EC6E592BBF681A0A84538DFEA076459A6D702(/*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Purchasing.OSXStoreBindings::RetrieveProducts(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSXStoreBindings_RetrieveProducts_m91D03B822138E06365466B65F769391F5A396DA4 (OSXStoreBindings_tD0E17BAA0ED7902B814FE315E824A26287CF0E85 * __this, String_t* ___json0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___json0;
		OSXStoreBindings_unityPurchasingRetrieveProducts_m762C673967DF6672FE9D65DEE647142F0601572B(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.OSXStoreBindings::Purchase(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSXStoreBindings_Purchase_m63BE060ECBAD8B4DEAFA2CD925E9D79572AB26E1 (OSXStoreBindings_tD0E17BAA0ED7902B814FE315E824A26287CF0E85 * __this, String_t* ___productJSON0, String_t* ___developerPayload1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___productJSON0;
		String_t* L_1 = ___developerPayload1;
		OSXStoreBindings_unityPurchasingPurchase_m934CC8567A5B2054950D231AAC29F221E18D7DD8(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.OSXStoreBindings::FinishTransaction(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSXStoreBindings_FinishTransaction_m668E37F11F3FC2D4C66E790FF47F0F2C103039DA (OSXStoreBindings_tD0E17BAA0ED7902B814FE315E824A26287CF0E85 * __this, String_t* ___productJSON0, String_t* ___transactionId1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___productJSON0;
		String_t* L_1 = ___transactionId1;
		OSXStoreBindings_unityPurchasingFinishTransaction_m145373244A1B58D5642E452D85C0ED21F9C07946(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.OSXStoreBindings::RestoreTransactions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSXStoreBindings_RestoreTransactions_mC52D55FEA5F8CD3F02B74BCA8B76C10F34141B6A (OSXStoreBindings_tD0E17BAA0ED7902B814FE315E824A26287CF0E85 * __this, const RuntimeMethod* method)
{
	{
		OSXStoreBindings_unityPurchasingRestoreTransactions_m80BB9063E4017D66A850FC9B5DF913D0AD9241C7(/*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.OSXStoreBindings::AddTransactionObserver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSXStoreBindings_AddTransactionObserver_m1E471B605DBE209D6DF5FF49081E03AA18D25027 (OSXStoreBindings_tD0E17BAA0ED7902B814FE315E824A26287CF0E85 * __this, const RuntimeMethod* method)
{
	{
		OSXStoreBindings_unityPurchasingAddTransactionObserver_mE966496A18B53467C15198051687E4075E74DD3C(/*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.OSXStoreBindings::InterceptPromotionalPurchases()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSXStoreBindings_InterceptPromotionalPurchases_mFF8D85DEDEF59020697923491B985357D1EE3DFE (OSXStoreBindings_tD0E17BAA0ED7902B814FE315E824A26287CF0E85 * __this, const RuntimeMethod* method)
{
	{
		OSXStoreBindings_unityPurchasingInterceptPromotionalPurchases_m01F28E4125E6D167E625F57561DBE34AAB53CCEF(/*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.OSXStoreBindings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSXStoreBindings__ctor_mABEF4500EE43FC7D541F06187625A16106FCE5C5 (OSXStoreBindings_tD0E17BAA0ED7902B814FE315E824A26287CF0E85 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
IL2CPP_EXTERN_C void DEFAULT_CALL unityPurchasingRetrieveProducts(char*);
// System.Void UnityEngine.Purchasing.iOSStoreBindings::unityPurchasingRetrieveProducts(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_unityPurchasingRetrieveProducts_m2A041EE0C0BC00F62F3A3FFA9F9E8ACFEB958518 (String_t* ___json0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___json0' to native representation
	char* ____json0_marshaled = NULL;
	____json0_marshaled = il2cpp_codegen_marshal_string(___json0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(unityPurchasingRetrieveProducts)(____json0_marshaled);

	// Marshaling cleanup of parameter '___json0' native representation
	il2cpp_codegen_marshal_free(____json0_marshaled);
	____json0_marshaled = NULL;

}
IL2CPP_EXTERN_C void DEFAULT_CALL unityPurchasingPurchase(char*, char*);
// System.Void UnityEngine.Purchasing.iOSStoreBindings::unityPurchasingPurchase(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_unityPurchasingPurchase_mFD22E87273DE76B0601FA15BCEF88912A16DD4B0 (String_t* ___json0, String_t* ___developerPayload1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*);

	// Marshaling of parameter '___json0' to native representation
	char* ____json0_marshaled = NULL;
	____json0_marshaled = il2cpp_codegen_marshal_string(___json0);

	// Marshaling of parameter '___developerPayload1' to native representation
	char* ____developerPayload1_marshaled = NULL;
	____developerPayload1_marshaled = il2cpp_codegen_marshal_string(___developerPayload1);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(unityPurchasingPurchase)(____json0_marshaled, ____developerPayload1_marshaled);

	// Marshaling cleanup of parameter '___json0' native representation
	il2cpp_codegen_marshal_free(____json0_marshaled);
	____json0_marshaled = NULL;

	// Marshaling cleanup of parameter '___developerPayload1' native representation
	il2cpp_codegen_marshal_free(____developerPayload1_marshaled);
	____developerPayload1_marshaled = NULL;

}
IL2CPP_EXTERN_C void DEFAULT_CALL unityPurchasingFinishTransaction(char*, char*);
// System.Void UnityEngine.Purchasing.iOSStoreBindings::unityPurchasingFinishTransaction(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_unityPurchasingFinishTransaction_mD9D2C05357EF7ADC5F5343BB87CC13CBD751653F (String_t* ___productJSON0, String_t* ___transactionId1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*);

	// Marshaling of parameter '___productJSON0' to native representation
	char* ____productJSON0_marshaled = NULL;
	____productJSON0_marshaled = il2cpp_codegen_marshal_string(___productJSON0);

	// Marshaling of parameter '___transactionId1' to native representation
	char* ____transactionId1_marshaled = NULL;
	____transactionId1_marshaled = il2cpp_codegen_marshal_string(___transactionId1);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(unityPurchasingFinishTransaction)(____productJSON0_marshaled, ____transactionId1_marshaled);

	// Marshaling cleanup of parameter '___productJSON0' native representation
	il2cpp_codegen_marshal_free(____productJSON0_marshaled);
	____productJSON0_marshaled = NULL;

	// Marshaling cleanup of parameter '___transactionId1' native representation
	il2cpp_codegen_marshal_free(____transactionId1_marshaled);
	____transactionId1_marshaled = NULL;

}
IL2CPP_EXTERN_C void DEFAULT_CALL unityPurchasingRestoreTransactions();
// System.Void UnityEngine.Purchasing.iOSStoreBindings::unityPurchasingRestoreTransactions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_unityPurchasingRestoreTransactions_m9225BF72B53FE29D478C2A45308D70308597C405 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(unityPurchasingRestoreTransactions)();

}
IL2CPP_EXTERN_C void DEFAULT_CALL unityPurchasingAddTransactionObserver();
// System.Void UnityEngine.Purchasing.iOSStoreBindings::unityPurchasingAddTransactionObserver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_unityPurchasingAddTransactionObserver_m8B19DC717DC475661FCC4AADC0B820575AC24074 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(unityPurchasingAddTransactionObserver)();

}
IL2CPP_EXTERN_C void DEFAULT_CALL setUnityPurchasingCallback(Il2CppMethodPointer);
// System.Void UnityEngine.Purchasing.iOSStoreBindings::setUnityPurchasingCallback(UnityEngine.Purchasing.UnityPurchasingCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_setUnityPurchasingCallback_m429E495193487E2E7B489EAA4B851BF0F2CEAB2A (UnityPurchasingCallback_t20A03FDDD96FE5358EBD4E5F01D273D4DF861004 * ___AsyncCallback0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___AsyncCallback0' to native representation
	Il2CppMethodPointer ____AsyncCallback0_marshaled = NULL;
	____AsyncCallback0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___AsyncCallback0));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(setUnityPurchasingCallback)(____AsyncCallback0_marshaled);

}
IL2CPP_EXTERN_C char* DEFAULT_CALL getUnityPurchasingAppReceipt();
// System.String UnityEngine.Purchasing.iOSStoreBindings::getUnityPurchasingAppReceipt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* iOSStoreBindings_getUnityPurchasingAppReceipt_m6A60BAEE03E897FA0A848C6D14E86BDBEBFBCAA8 (const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(getUnityPurchasingAppReceipt)();

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
IL2CPP_EXTERN_C void DEFAULT_CALL unityPurchasingInterceptPromotionalPurchases();
// System.Void UnityEngine.Purchasing.iOSStoreBindings::unityPurchasingInterceptPromotionalPurchases()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_unityPurchasingInterceptPromotionalPurchases_m8C670C20CE1B334EE3D60D07FF893511B3EF2D4C (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(unityPurchasingInterceptPromotionalPurchases)();

}
// System.Void UnityEngine.Purchasing.iOSStoreBindings::SetUnityPurchasingCallback(UnityEngine.Purchasing.UnityPurchasingCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_SetUnityPurchasingCallback_m931A9B86E92E94AC7509DFB0A2CEC09C5345CA2D (iOSStoreBindings_t98BBAC437AD8F6AB47E78D62A24B378B97D1B244 * __this, UnityPurchasingCallback_t20A03FDDD96FE5358EBD4E5F01D273D4DF861004 * ___AsyncCallback0, const RuntimeMethod* method)
{
	{
		UnityPurchasingCallback_t20A03FDDD96FE5358EBD4E5F01D273D4DF861004 * L_0 = ___AsyncCallback0;
		iOSStoreBindings_setUnityPurchasingCallback_m429E495193487E2E7B489EAA4B851BF0F2CEAB2A(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.Purchasing.iOSStoreBindings::get_appReceipt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* iOSStoreBindings_get_appReceipt_mCD0A2253F585712CF562E13585D8EC21B8EA2A5D (iOSStoreBindings_t98BBAC437AD8F6AB47E78D62A24B378B97D1B244 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = iOSStoreBindings_getUnityPurchasingAppReceipt_m6A60BAEE03E897FA0A848C6D14E86BDBEBFBCAA8(/*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Purchasing.iOSStoreBindings::RetrieveProducts(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_RetrieveProducts_m656192EA9DE8CB00AF315BF6E28B051B2AD1345E (iOSStoreBindings_t98BBAC437AD8F6AB47E78D62A24B378B97D1B244 * __this, String_t* ___json0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___json0;
		iOSStoreBindings_unityPurchasingRetrieveProducts_m2A041EE0C0BC00F62F3A3FFA9F9E8ACFEB958518(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.iOSStoreBindings::Purchase(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_Purchase_m3A304C554FE3E97D24AC78102D46E205EDAD6773 (iOSStoreBindings_t98BBAC437AD8F6AB47E78D62A24B378B97D1B244 * __this, String_t* ___productJSON0, String_t* ___developerPayload1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___productJSON0;
		String_t* L_1 = ___developerPayload1;
		iOSStoreBindings_unityPurchasingPurchase_mFD22E87273DE76B0601FA15BCEF88912A16DD4B0(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.iOSStoreBindings::FinishTransaction(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_FinishTransaction_m1C00AB672D9F07DA68EA1B292F0A9F342B104A92 (iOSStoreBindings_t98BBAC437AD8F6AB47E78D62A24B378B97D1B244 * __this, String_t* ___productJSON0, String_t* ___transactionId1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___productJSON0;
		String_t* L_1 = ___transactionId1;
		iOSStoreBindings_unityPurchasingFinishTransaction_mD9D2C05357EF7ADC5F5343BB87CC13CBD751653F(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.iOSStoreBindings::RestoreTransactions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_RestoreTransactions_m86D1878BBA41131670DCCCE4F7675BF8D59D3F10 (iOSStoreBindings_t98BBAC437AD8F6AB47E78D62A24B378B97D1B244 * __this, const RuntimeMethod* method)
{
	{
		iOSStoreBindings_unityPurchasingRestoreTransactions_m9225BF72B53FE29D478C2A45308D70308597C405(/*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.iOSStoreBindings::AddTransactionObserver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_AddTransactionObserver_m7D55A46F27FDCC9B54367D761B4339CE85A389B6 (iOSStoreBindings_t98BBAC437AD8F6AB47E78D62A24B378B97D1B244 * __this, const RuntimeMethod* method)
{
	{
		iOSStoreBindings_unityPurchasingAddTransactionObserver_m8B19DC717DC475661FCC4AADC0B820575AC24074(/*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.iOSStoreBindings::InterceptPromotionalPurchases()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_InterceptPromotionalPurchases_m4EA28EDA8038AC202207C4D13365A12C62F96A3C (iOSStoreBindings_t98BBAC437AD8F6AB47E78D62A24B378B97D1B244 * __this, const RuntimeMethod* method)
{
	{
		iOSStoreBindings_unityPurchasingInterceptPromotionalPurchases_m8C670C20CE1B334EE3D60D07FF893511B3EF2D4C(/*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.iOSStoreBindings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings__ctor_m0E6F97979CDDAB7E75C135181C7B9391CC9B4B58 (iOSStoreBindings_t98BBAC437AD8F6AB47E78D62A24B378B97D1B244 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
