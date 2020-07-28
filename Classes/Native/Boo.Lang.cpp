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
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename R, typename T1>
struct GenericVirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericVirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct GenericVirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericInterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericInterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// Boo.Lang.List`1<System.Object>
struct List_1_t43FCC451DA5F9E9F3C374425CF8854C9A727E273;
// Boo.Lang.List`1<System.Reflection.MemberInfo>
struct List_1_t25A7E693C283DBDE12C9B6655A54A917FF6842E4;
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher
struct Dispatcher_tC941911289CA9A4DE7B02505AB9C6F311BF8D3C3;
// Boo.Lang.Runtime.DynamicDispatching.DispatcherCache
struct DispatcherCache_t02178BC5CA46B75AA29741F6D19F3269D31C10F3;
// Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory
struct DispatcherFactory_t40A7825A22BBB37116B84045F2D181C1669118D9;
// Boo.Lang.Runtime.DynamicDispatching.DispatcherKey
struct DispatcherKey_t3D0E5C3687AA48F20AB11F7CBA0A540981B2EF60;
// Boo.Lang.Runtime.DynamicDispatching.DispatcherKey/_EqualityComparer
struct _EqualityComparer_tA30A6E188DBCE855432D914A59E74A227725387E;
// Boo.Lang.Runtime.DynamicDispatching.Emitters.DispatcherEmitter
struct DispatcherEmitter_t21567E4DB17C6DBC63A5B07D5A7B311EEF850B8D;
// Boo.Lang.Runtime.DynamicDispatching.Emitters.ImplicitConversionEmitter
struct ImplicitConversionEmitter_t727822B4471E4A8B7D25EE40A6812CF3E3723D89;
// Boo.Lang.Runtime.ExtensionRegistry
struct ExtensionRegistry_t1EEFBEDAE2EA76F75BB3B5B63F191E0FBA361800;
// Boo.Lang.Runtime.RuntimeServices/<>c__DisplayClass26_0
struct U3CU3Ec__DisplayClass26_0_t0A1D36ABA20ADC9A94843089B5486DEAF48DE1FC;
// Boo.Lang.Runtime.RuntimeServices/<GetExtensionMethods>d__128
struct U3CGetExtensionMethodsU3Ed__128_tF07224577E6693EDC6CEF69D7044082211368E44;
// System.ArgumentException
struct ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2/Entry<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>[]
struct EntryU5BU5D_tB45047A6CA98DEF6571E65D4B078E7FEE2761D0E;
// System.Collections.Generic.Dictionary`2/KeyCollection<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>
struct KeyCollection_tBBCFB70C90E1889A7CAB9C46002C474F3CEA2DB4;
// System.Collections.Generic.Dictionary`2/ValueCollection<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>
struct ValueCollection_tD5C808D5E63564B642AE6E3348E24CA62820E17D;
// System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>
struct Dictionary_2_tD9EC6CFA4DA2D35537863AA10AC54F825E3F1B53;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA;
// System.Collections.Generic.IEnumerable`1<System.Reflection.MemberInfo>
struct IEnumerable_1_t7FD352CD84740777D0C2732F0F63D13741D636BB;
// System.Collections.Generic.IEnumerable`1<System.Reflection.MethodInfo>
struct IEnumerable_1_tB6ECBCACB08DC25AD256ED59CCE6DDFA9B5DD0FC;
// System.Collections.Generic.IEnumerator`1<System.Reflection.MemberInfo>
struct IEnumerator_1_t2D9BC58107505273DB7B0FC53358697221FA5831;
// System.Collections.Generic.IEnumerator`1<System.Reflection.MethodInfo>
struct IEnumerator_1_t2937F0DC3A50683F70456A2E57B37AEB5AFCC3CE;
// System.Collections.Generic.IEqualityComparer`1<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey>
struct IEqualityComparer_1_t0F59FB8C2E7EF88D477D79EAC98830EEFEC77C68;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_tAE7A8756D8CF0882DD348DC328FB36FEE0FB7DD0;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Collections.IEnumerable
struct IEnumerable_tD74549CEA1AA48E768382B94FEACBB07E2E3FA2C;
// System.Collections.IEnumerator
struct IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Globalization.CultureInfo
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.LocalDataStoreHolder
struct LocalDataStoreHolder_tE0636E08496405406FD63190AC51EEB2EE51E304;
// System.LocalDataStoreMgr
struct LocalDataStoreMgr_t1964DDB9F2BE154BE3159A7507D0D0CCBF8FDCA9;
// System.MulticastDelegate
struct MulticastDelegate_t;
// System.NotSupportedException
struct NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.Emit.DynamicMethod
struct DynamicMethod_t983501153061387E39AA134BE68EB908A3E92AF3;
// System.Reflection.Emit.ILGenerator
struct ILGenerator_tE5AAEAFBCB8FD67493AC6519422504DAA595A13B;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MemberInfo[]
struct MemberInfoU5BU5D_t6A57DDAF4E5321D22FB4C021559637EB126BF6B6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.ParameterInfo
struct ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB;
// System.Runtime.InteropServices.MarshalAsAttribute
struct MarshalAsAttribute_t1F5CB9960D7AD6C3305475C98A397BD0B9C64020;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.Security.Principal.IPrincipal
struct IPrincipal_t63FD7F58FBBE134C8FE4D31710AAEA00B000F0BF;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo>
struct AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A;
// System.Threading.ExecutionContext
struct ExecutionContext_t0E11C30308A4CC964D8A2EA9132F9BDCE5362C70;
// System.Threading.InternalThread
struct InternalThread_tA4C58C2A7D15AF43C3E7507375E6D31DBBE7D192;
// System.Threading.Thread
struct Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.UInt32[]
struct UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tD9EC6CFA4DA2D35537863AA10AC54F825E3F1B53_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DispatcherCache_t02178BC5CA46B75AA29741F6D19F3269D31C10F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DispatcherFactory_t40A7825A22BBB37116B84045F2D181C1669118D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DispatcherKey_t3D0E5C3687AA48F20AB11F7CBA0A540981B2EF60_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dispatcher_tC941911289CA9A4DE7B02505AB9C6F311BF8D3C3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DynamicMethod_t983501153061387E39AA134BE68EB908A3E92AF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExtensionRegistry_t1EEFBEDAE2EA76F75BB3B5B63F191E0FBA361800_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICoercible_t70D58799652047D33CD9F196A927BC3A90FF6549_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IConvertible_tB52671A602A64FCCFD27EA5817E2A6C2B693D380_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t7FD352CD84740777D0C2732F0F63D13741D636BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tB6ECBCACB08DC25AD256ED59CCE6DDFA9B5DD0FC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_tD74549CEA1AA48E768382B94FEACBB07E2E3FA2C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t2937F0DC3A50683F70456A2E57B37AEB5AFCC3CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t2D9BC58107505273DB7B0FC53358697221FA5831_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ImplicitConversionEmitter_t727822B4471E4A8B7D25EE40A6812CF3E3723D89_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t25A7E693C283DBDE12C9B6655A54A917FF6842E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MethodInfo_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeArray_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeServices_t1D37418DED273F28D786FAA94181F594C5938EDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeCode_t03ED52F888000DAF40C550C434F29F39A23D61C6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetExtensionMethodsU3Ed__128_tF07224577E6693EDC6CEF69D7044082211368E44_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass26_0_t0A1D36ABA20ADC9A94843089B5486DEAF48DE1FC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _EqualityComparer_tA30A6E188DBCE855432D914A59E74A227725387E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral3CDF2936DA2FC556BFA533AB1EB59CE710AC80E5;
IL2CPP_EXTERN_C String_t* _stringLiteral3F66052A107EAF9BAE7CAD0F61FB462F47EC2C47;
IL2CPP_EXTERN_C String_t* _stringLiteral718B9CC2606DB7386E7921CA21B25F9A67339FB8;
IL2CPP_EXTERN_C String_t* _stringLiteral973776CA0AE32EA889FC2291F84C4925F2285DDE;
IL2CPP_EXTERN_C String_t* _stringLiteralAE79EA1E9C6391A9ED83A2E18A031B835FEEC0C9;
IL2CPP_EXTERN_C String_t* _stringLiteralF4FF09AA9802AF5CF75274B5035D10199917A521;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mC5D58F853F9BAC84D6D73677C068273F5D28C5E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mA943A1CC91DB1C62C61318F1629F713C09FEDFD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m85618ECDD1D34C15CABFB857A45FBC523145AB36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mD9E9F0575A5D3C8D7D72B94345E840D0175BFCCD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RuntimeServices_ArrayEqualityImpl_m9F5A1DBE98150BCE13D808BF6EE72D5B37417C5C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RuntimeServices_CoercibleDispatcher_m8E53F421061884DE4C4998E26B2AA8220D3FB956_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RuntimeServices_IdentityDispatcher_m4C6464FB15CCC94A622AFD166FDA8C910B7B9323_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetExtensionMethodsU3Ed__128_System_Collections_IEnumerator_Reset_m2D810A34B3F3C4CAC5CA95E77DEA45C57278A398_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass26_0_U3CCoerceU3Eb__0_mBC2D89CBFF93E54CE4DE93F90348800E63743B2D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Dispatcher_tC941911289CA9A4DE7B02505AB9C6F311BF8D3C3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* NumericPromotions_t6D2940F105DB50DBB04EAEEA3D270F2262C56FFB_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* RuntimeObject_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* RuntimeServices_t1D37418DED273F28D786FAA94181F594C5938EDA_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017_0_0_0_var;
IL2CPP_EXTERN_C const uint32_t Builtins_join_m986BA566DBCD2AACC9731E08F399802687B45597_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DelegatePInvokeWrapper_DispatcherFactory_t40A7825A22BBB37116B84045F2D181C1669118D9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DispatcherCache_Get_m0F8F033AC0137252F4C21A4ED126CCA626E87ECB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DispatcherCache__cctor_m89F249D5D651537153A3C1B36D2BA862C4E99910_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DispatcherEmitter_BoxIfNeeded_m48F877F64260A48540ADCF32C8CBAAE26DC12CFC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DispatcherEmitter_CreateMethodDispatcher_m003C058C0313BD3A53BDB2BDAA368EF8E797EF3F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DispatcherEmitter_EmitCastOrUnbox_mC914B023F8FAD6139F5499B42605952FADD97A81_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DispatcherEmitter_EmitReturn_mB0DD0E67B3785D69618FF61BD72D5DA7B962728E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DispatcherEmitter__ctor_mE0AC3AD9E827799D514A1CBCE00325E8C50FBAD2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DispatcherKey__cctor_m2EE6F93D8AF85500EAB4A95C56104AC927AB3183_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ExtensionRegistry__ctor_m4F6B4B6366C3B8B0FF2430D3DF2E0EC5FEF8D4D3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ImplicitConversionEmitter_EmitMethodBody_m2151EB9D989E1784E17D39004403DC1273035A07_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RuntimeServices_ArrayEqualityImpl_m9F5A1DBE98150BCE13D808BF6EE72D5B37417C5C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RuntimeServices_Coerce_m4000612E871098C476CE6DA4A51539BF3F474203_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RuntimeServices_CoercibleDispatcher_m8E53F421061884DE4C4998E26B2AA8220D3FB956_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RuntimeServices_CreateCoerceDispatcher_m29B6144FECBEDCC0E04A9A9B7DCF16F7A2FFC9A1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RuntimeServices_EmitImplicitConversionDispatcher_mEBA398DA4B68006AEBB098F4649F3BEB73216816_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RuntimeServices_EmitPromotionDispatcher_m8F2F02F9C8FF257EC8AFA690348100EE8574E475_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RuntimeServices_EqualityOperator_m636633E886E9F0FAB106440E93A0D216ED68D8C5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RuntimeServices_EqualityOperator_mC5F19F6E7F47A63C71D18AD5F3561332CB6047AC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RuntimeServices_FindImplicitConversionMethod_mC49032327C0FD30F30309E1F2682993CBCE64D32_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RuntimeServices_FindImplicitConversionOperator_m64C87DBCAF2D3453889505B5C793376D498D33FB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RuntimeServices_GetDispatcher_mB85B5277A588486359D1596B5A5551B8EF8317CC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RuntimeServices_GetExtensionMethods_m491A35CAC28074626D84E28EFC557A5E6E0E0CB6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RuntimeServices_IsPromotableNumeric_m74995E1B3FE68FA58B80AF432583F80F3456D204_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RuntimeServices__cctor_mE9046F144E44F9B8990985967CDD784500E1BE00_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CGetExtensionMethodsU3Ed__128_MoveNext_m8F06F08EB8D9ED3B2C3855D443EDADEEBC9CD7D5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CGetExtensionMethodsU3Ed__128_System_Collections_Generic_IEnumerableU3CSystem_Reflection_MethodInfoU3E_GetEnumerator_mE6613C07A226DD249746C2A589A504C3111ED14A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CGetExtensionMethodsU3Ed__128_System_Collections_IEnumerator_Reset_m2D810A34B3F3C4CAC5CA95E77DEA45C57278A398_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CGetExtensionMethodsU3Ed__128_U3CU3Em__Finally1_m1A3402F9C7274FA5A6EA522E57ABF2214FC73EC7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass26_0_U3CCoerceU3Eb__0_mBC2D89CBFF93E54CE4DE93F90348800E63743B2D_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct MethodInfoU5BU5D_t93E968F23AF2DB5CFCFF13BE775A0E222C03586B;
struct ParameterInfoU5BU5D_t9F6F38E4A0B0A78E2F463D1B2C0031716CA7A694;
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t1061CF4BF40C4A0013BCDEFCEC647E4B93952313 
{
public:

public:
};


// System.Object


// Boo.Lang.Builtins
struct  Builtins_tFE1AB8EB36F1BDC0008D3DED8B06212C54848B3C  : public RuntimeObject
{
public:

public:
};


// Boo.Lang.List`1<System.Reflection.MemberInfo>
struct  List_1_t25A7E693C283DBDE12C9B6655A54A917FF6842E4  : public RuntimeObject
{
public:
	// T[] Boo.Lang.List`1::_items
	MemberInfoU5BU5D_t6A57DDAF4E5321D22FB4C021559637EB126BF6B6* ____items_1;
	// System.Int32 Boo.Lang.List`1::_count
	int32_t ____count_2;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t25A7E693C283DBDE12C9B6655A54A917FF6842E4, ____items_1)); }
	inline MemberInfoU5BU5D_t6A57DDAF4E5321D22FB4C021559637EB126BF6B6* get__items_1() const { return ____items_1; }
	inline MemberInfoU5BU5D_t6A57DDAF4E5321D22FB4C021559637EB126BF6B6** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(MemberInfoU5BU5D_t6A57DDAF4E5321D22FB4C021559637EB126BF6B6* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__count_2() { return static_cast<int32_t>(offsetof(List_1_t25A7E693C283DBDE12C9B6655A54A917FF6842E4, ____count_2)); }
	inline int32_t get__count_2() const { return ____count_2; }
	inline int32_t* get_address_of__count_2() { return &____count_2; }
	inline void set__count_2(int32_t value)
	{
		____count_2 = value;
	}
};

struct List_1_t25A7E693C283DBDE12C9B6655A54A917FF6842E4_StaticFields
{
public:
	// T[] Boo.Lang.List`1::EmptyArray
	MemberInfoU5BU5D_t6A57DDAF4E5321D22FB4C021559637EB126BF6B6* ___EmptyArray_0;

public:
	inline static int32_t get_offset_of_EmptyArray_0() { return static_cast<int32_t>(offsetof(List_1_t25A7E693C283DBDE12C9B6655A54A917FF6842E4_StaticFields, ___EmptyArray_0)); }
	inline MemberInfoU5BU5D_t6A57DDAF4E5321D22FB4C021559637EB126BF6B6* get_EmptyArray_0() const { return ___EmptyArray_0; }
	inline MemberInfoU5BU5D_t6A57DDAF4E5321D22FB4C021559637EB126BF6B6** get_address_of_EmptyArray_0() { return &___EmptyArray_0; }
	inline void set_EmptyArray_0(MemberInfoU5BU5D_t6A57DDAF4E5321D22FB4C021559637EB126BF6B6* value)
	{
		___EmptyArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyArray_0), (void*)value);
	}
};


// Boo.Lang.Runtime.DynamicDispatching.DispatcherCache
struct  DispatcherCache_t02178BC5CA46B75AA29741F6D19F3269D31C10F3  : public RuntimeObject
{
public:

public:
};

struct DispatcherCache_t02178BC5CA46B75AA29741F6D19F3269D31C10F3_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher> Boo.Lang.Runtime.DynamicDispatching.DispatcherCache::_cache
	Dictionary_2_tD9EC6CFA4DA2D35537863AA10AC54F825E3F1B53 * ____cache_0;

public:
	inline static int32_t get_offset_of__cache_0() { return static_cast<int32_t>(offsetof(DispatcherCache_t02178BC5CA46B75AA29741F6D19F3269D31C10F3_StaticFields, ____cache_0)); }
	inline Dictionary_2_tD9EC6CFA4DA2D35537863AA10AC54F825E3F1B53 * get__cache_0() const { return ____cache_0; }
	inline Dictionary_2_tD9EC6CFA4DA2D35537863AA10AC54F825E3F1B53 ** get_address_of__cache_0() { return &____cache_0; }
	inline void set__cache_0(Dictionary_2_tD9EC6CFA4DA2D35537863AA10AC54F825E3F1B53 * value)
	{
		____cache_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____cache_0), (void*)value);
	}
};


// Boo.Lang.Runtime.DynamicDispatching.DispatcherKey
struct  DispatcherKey_t3D0E5C3687AA48F20AB11F7CBA0A540981B2EF60  : public RuntimeObject
{
public:
	// System.Type Boo.Lang.Runtime.DynamicDispatching.DispatcherKey::_type
	Type_t * ____type_1;
	// System.String Boo.Lang.Runtime.DynamicDispatching.DispatcherKey::_name
	String_t* ____name_2;
	// System.Type[] Boo.Lang.Runtime.DynamicDispatching.DispatcherKey::_arguments
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ____arguments_3;

public:
	inline static int32_t get_offset_of__type_1() { return static_cast<int32_t>(offsetof(DispatcherKey_t3D0E5C3687AA48F20AB11F7CBA0A540981B2EF60, ____type_1)); }
	inline Type_t * get__type_1() const { return ____type_1; }
	inline Type_t ** get_address_of__type_1() { return &____type_1; }
	inline void set__type_1(Type_t * value)
	{
		____type_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____type_1), (void*)value);
	}

	inline static int32_t get_offset_of__name_2() { return static_cast<int32_t>(offsetof(DispatcherKey_t3D0E5C3687AA48F20AB11F7CBA0A540981B2EF60, ____name_2)); }
	inline String_t* get__name_2() const { return ____name_2; }
	inline String_t** get_address_of__name_2() { return &____name_2; }
	inline void set__name_2(String_t* value)
	{
		____name_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____name_2), (void*)value);
	}

	inline static int32_t get_offset_of__arguments_3() { return static_cast<int32_t>(offsetof(DispatcherKey_t3D0E5C3687AA48F20AB11F7CBA0A540981B2EF60, ____arguments_3)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get__arguments_3() const { return ____arguments_3; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of__arguments_3() { return &____arguments_3; }
	inline void set__arguments_3(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		____arguments_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____arguments_3), (void*)value);
	}
};

struct DispatcherKey_t3D0E5C3687AA48F20AB11F7CBA0A540981B2EF60_StaticFields
{
public:
	// System.Collections.Generic.IEqualityComparer`1<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey> Boo.Lang.Runtime.DynamicDispatching.DispatcherKey::EqualityComparer
	RuntimeObject* ___EqualityComparer_0;

public:
	inline static int32_t get_offset_of_EqualityComparer_0() { return static_cast<int32_t>(offsetof(DispatcherKey_t3D0E5C3687AA48F20AB11F7CBA0A540981B2EF60_StaticFields, ___EqualityComparer_0)); }
	inline RuntimeObject* get_EqualityComparer_0() const { return ___EqualityComparer_0; }
	inline RuntimeObject** get_address_of_EqualityComparer_0() { return &___EqualityComparer_0; }
	inline void set_EqualityComparer_0(RuntimeObject* value)
	{
		___EqualityComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EqualityComparer_0), (void*)value);
	}
};


// Boo.Lang.Runtime.DynamicDispatching.DispatcherKey__EqualityComparer
struct  _EqualityComparer_tA30A6E188DBCE855432D914A59E74A227725387E  : public RuntimeObject
{
public:

public:
};


// Boo.Lang.Runtime.DynamicDispatching.Emitters.DispatcherEmitter
struct  DispatcherEmitter_t21567E4DB17C6DBC63A5B07D5A7B311EEF850B8D  : public RuntimeObject
{
public:
	// System.Reflection.Emit.DynamicMethod Boo.Lang.Runtime.DynamicDispatching.Emitters.DispatcherEmitter::_dynamicMethod
	DynamicMethod_t983501153061387E39AA134BE68EB908A3E92AF3 * ____dynamicMethod_0;
	// System.Reflection.Emit.ILGenerator Boo.Lang.Runtime.DynamicDispatching.Emitters.DispatcherEmitter::_il
	ILGenerator_tE5AAEAFBCB8FD67493AC6519422504DAA595A13B * ____il_1;

public:
	inline static int32_t get_offset_of__dynamicMethod_0() { return static_cast<int32_t>(offsetof(DispatcherEmitter_t21567E4DB17C6DBC63A5B07D5A7B311EEF850B8D, ____dynamicMethod_0)); }
	inline DynamicMethod_t983501153061387E39AA134BE68EB908A3E92AF3 * get__dynamicMethod_0() const { return ____dynamicMethod_0; }
	inline DynamicMethod_t983501153061387E39AA134BE68EB908A3E92AF3 ** get_address_of__dynamicMethod_0() { return &____dynamicMethod_0; }
	inline void set__dynamicMethod_0(DynamicMethod_t983501153061387E39AA134BE68EB908A3E92AF3 * value)
	{
		____dynamicMethod_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethod_0), (void*)value);
	}

	inline static int32_t get_offset_of__il_1() { return static_cast<int32_t>(offsetof(DispatcherEmitter_t21567E4DB17C6DBC63A5B07D5A7B311EEF850B8D, ____il_1)); }
	inline ILGenerator_tE5AAEAFBCB8FD67493AC6519422504DAA595A13B * get__il_1() const { return ____il_1; }
	inline ILGenerator_tE5AAEAFBCB8FD67493AC6519422504DAA595A13B ** get_address_of__il_1() { return &____il_1; }
	inline void set__il_1(ILGenerator_tE5AAEAFBCB8FD67493AC6519422504DAA595A13B * value)
	{
		____il_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____il_1), (void*)value);
	}
};


// Boo.Lang.Runtime.DynamicDispatching.NumericPromotions
struct  NumericPromotions_t6D2940F105DB50DBB04EAEEA3D270F2262C56FFB  : public RuntimeObject
{
public:

public:
};


// Boo.Lang.Runtime.ExtensionRegistry
struct  ExtensionRegistry_t1EEFBEDAE2EA76F75BB3B5B63F191E0FBA361800  : public RuntimeObject
{
public:
	// Boo.Lang.List`1<System.Reflection.MemberInfo> Boo.Lang.Runtime.ExtensionRegistry::_extensions
	List_1_t25A7E693C283DBDE12C9B6655A54A917FF6842E4 * ____extensions_0;
	// System.Object Boo.Lang.Runtime.ExtensionRegistry::_classLock
	RuntimeObject * ____classLock_1;

public:
	inline static int32_t get_offset_of__extensions_0() { return static_cast<int32_t>(offsetof(ExtensionRegistry_t1EEFBEDAE2EA76F75BB3B5B63F191E0FBA361800, ____extensions_0)); }
	inline List_1_t25A7E693C283DBDE12C9B6655A54A917FF6842E4 * get__extensions_0() const { return ____extensions_0; }
	inline List_1_t25A7E693C283DBDE12C9B6655A54A917FF6842E4 ** get_address_of__extensions_0() { return &____extensions_0; }
	inline void set__extensions_0(List_1_t25A7E693C283DBDE12C9B6655A54A917FF6842E4 * value)
	{
		____extensions_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____extensions_0), (void*)value);
	}

	inline static int32_t get_offset_of__classLock_1() { return static_cast<int32_t>(offsetof(ExtensionRegistry_t1EEFBEDAE2EA76F75BB3B5B63F191E0FBA361800, ____classLock_1)); }
	inline RuntimeObject * get__classLock_1() const { return ____classLock_1; }
	inline RuntimeObject ** get_address_of__classLock_1() { return &____classLock_1; }
	inline void set__classLock_1(RuntimeObject * value)
	{
		____classLock_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____classLock_1), (void*)value);
	}
};


// Boo.Lang.Runtime.RuntimeServices
struct  RuntimeServices_t1D37418DED273F28D786FAA94181F594C5938EDA  : public RuntimeObject
{
public:

public:
};

struct RuntimeServices_t1D37418DED273F28D786FAA94181F594C5938EDA_StaticFields
{
public:
	// System.Object[] Boo.Lang.Runtime.RuntimeServices::NoArguments
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___NoArguments_0;
	// System.Type Boo.Lang.Runtime.RuntimeServices::RuntimeServicesType
	Type_t * ___RuntimeServicesType_1;
	// Boo.Lang.Runtime.DynamicDispatching.DispatcherCache Boo.Lang.Runtime.RuntimeServices::_cache
	DispatcherCache_t02178BC5CA46B75AA29741F6D19F3269D31C10F3 * ____cache_2;
	// Boo.Lang.Runtime.ExtensionRegistry Boo.Lang.Runtime.RuntimeServices::_extensions
	ExtensionRegistry_t1EEFBEDAE2EA76F75BB3B5B63F191E0FBA361800 * ____extensions_3;
	// System.Object Boo.Lang.Runtime.RuntimeServices::True
	RuntimeObject * ___True_4;

public:
	inline static int32_t get_offset_of_NoArguments_0() { return static_cast<int32_t>(offsetof(RuntimeServices_t1D37418DED273F28D786FAA94181F594C5938EDA_StaticFields, ___NoArguments_0)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_NoArguments_0() const { return ___NoArguments_0; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_NoArguments_0() { return &___NoArguments_0; }
	inline void set_NoArguments_0(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___NoArguments_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NoArguments_0), (void*)value);
	}

	inline static int32_t get_offset_of_RuntimeServicesType_1() { return static_cast<int32_t>(offsetof(RuntimeServices_t1D37418DED273F28D786FAA94181F594C5938EDA_StaticFields, ___RuntimeServicesType_1)); }
	inline Type_t * get_RuntimeServicesType_1() const { return ___RuntimeServicesType_1; }
	inline Type_t ** get_address_of_RuntimeServicesType_1() { return &___RuntimeServicesType_1; }
	inline void set_RuntimeServicesType_1(Type_t * value)
	{
		___RuntimeServicesType_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RuntimeServicesType_1), (void*)value);
	}

	inline static int32_t get_offset_of__cache_2() { return static_cast<int32_t>(offsetof(RuntimeServices_t1D37418DED273F28D786FAA94181F594C5938EDA_StaticFields, ____cache_2)); }
	inline DispatcherCache_t02178BC5CA46B75AA29741F6D19F3269D31C10F3 * get__cache_2() const { return ____cache_2; }
	inline DispatcherCache_t02178BC5CA46B75AA29741F6D19F3269D31C10F3 ** get_address_of__cache_2() { return &____cache_2; }
	inline void set__cache_2(DispatcherCache_t02178BC5CA46B75AA29741F6D19F3269D31C10F3 * value)
	{
		____cache_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____cache_2), (void*)value);
	}

	inline static int32_t get_offset_of__extensions_3() { return static_cast<int32_t>(offsetof(RuntimeServices_t1D37418DED273F28D786FAA94181F594C5938EDA_StaticFields, ____extensions_3)); }
	inline ExtensionRegistry_t1EEFBEDAE2EA76F75BB3B5B63F191E0FBA361800 * get__extensions_3() const { return ____extensions_3; }
	inline ExtensionRegistry_t1EEFBEDAE2EA76F75BB3B5B63F191E0FBA361800 ** get_address_of__extensions_3() { return &____extensions_3; }
	inline void set__extensions_3(ExtensionRegistry_t1EEFBEDAE2EA76F75BB3B5B63F191E0FBA361800 * value)
	{
		____extensions_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____extensions_3), (void*)value);
	}

	inline static int32_t get_offset_of_True_4() { return static_cast<int32_t>(offsetof(RuntimeServices_t1D37418DED273F28D786FAA94181F594C5938EDA_StaticFields, ___True_4)); }
	inline RuntimeObject * get_True_4() const { return ___True_4; }
	inline RuntimeObject ** get_address_of_True_4() { return &___True_4; }
	inline void set_True_4(RuntimeObject * value)
	{
		___True_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___True_4), (void*)value);
	}
};


// Boo.Lang.Runtime.RuntimeServices_<>c__DisplayClass26_0
struct  U3CU3Ec__DisplayClass26_0_t0A1D36ABA20ADC9A94843089B5486DEAF48DE1FC  : public RuntimeObject
{
public:
	// System.Object Boo.Lang.Runtime.RuntimeServices_<>c__DisplayClass26_0::value
	RuntimeObject * ___value_0;
	// System.Type Boo.Lang.Runtime.RuntimeServices_<>c__DisplayClass26_0::toType
	Type_t * ___toType_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass26_0_t0A1D36ABA20ADC9A94843089B5486DEAF48DE1FC, ___value_0)); }
	inline RuntimeObject * get_value_0() const { return ___value_0; }
	inline RuntimeObject ** get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(RuntimeObject * value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_0), (void*)value);
	}

	inline static int32_t get_offset_of_toType_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass26_0_t0A1D36ABA20ADC9A94843089B5486DEAF48DE1FC, ___toType_1)); }
	inline Type_t * get_toType_1() const { return ___toType_1; }
	inline Type_t ** get_address_of_toType_1() { return &___toType_1; }
	inline void set_toType_1(Type_t * value)
	{
		___toType_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___toType_1), (void*)value);
	}
};


// Boo.Lang.Runtime.RuntimeServices_<GetExtensionMethods>d__128
struct  U3CGetExtensionMethodsU3Ed__128_tF07224577E6693EDC6CEF69D7044082211368E44  : public RuntimeObject
{
public:
	// System.Int32 Boo.Lang.Runtime.RuntimeServices_<GetExtensionMethods>d__128::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Reflection.MethodInfo Boo.Lang.Runtime.RuntimeServices_<GetExtensionMethods>d__128::<>2__current
	MethodInfo_t * ___U3CU3E2__current_1;
	// System.Int32 Boo.Lang.Runtime.RuntimeServices_<GetExtensionMethods>d__128::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Collections.Generic.IEnumerator`1<System.Reflection.MemberInfo> Boo.Lang.Runtime.RuntimeServices_<GetExtensionMethods>d__128::<>s__1
	RuntimeObject* ___U3CU3Es__1_3;
	// System.Reflection.MemberInfo Boo.Lang.Runtime.RuntimeServices_<GetExtensionMethods>d__128::<member>5__2
	MemberInfo_t * ___U3CmemberU3E5__2_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetExtensionMethodsU3Ed__128_tF07224577E6693EDC6CEF69D7044082211368E44, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetExtensionMethodsU3Ed__128_tF07224577E6693EDC6CEF69D7044082211368E44, ___U3CU3E2__current_1)); }
	inline MethodInfo_t * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline MethodInfo_t ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(MethodInfo_t * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CGetExtensionMethodsU3Ed__128_tF07224577E6693EDC6CEF69D7044082211368E44, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3Es__1_3() { return static_cast<int32_t>(offsetof(U3CGetExtensionMethodsU3Ed__128_tF07224577E6693EDC6CEF69D7044082211368E44, ___U3CU3Es__1_3)); }
	inline RuntimeObject* get_U3CU3Es__1_3() const { return ___U3CU3Es__1_3; }
	inline RuntimeObject** get_address_of_U3CU3Es__1_3() { return &___U3CU3Es__1_3; }
	inline void set_U3CU3Es__1_3(RuntimeObject* value)
	{
		___U3CU3Es__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Es__1_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CmemberU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CGetExtensionMethodsU3Ed__128_tF07224577E6693EDC6CEF69D7044082211368E44, ___U3CmemberU3E5__2_4)); }
	inline MemberInfo_t * get_U3CmemberU3E5__2_4() const { return ___U3CmemberU3E5__2_4; }
	inline MemberInfo_t ** get_address_of_U3CmemberU3E5__2_4() { return &___U3CmemberU3E5__2_4; }
	inline void set_U3CmemberU3E5__2_4(MemberInfo_t * value)
	{
		___U3CmemberU3E5__2_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CmemberU3E5__2_4), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>
struct  Dictionary_2_tD9EC6CFA4DA2D35537863AA10AC54F825E3F1B53  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tB45047A6CA98DEF6571E65D4B078E7FEE2761D0E* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tBBCFB70C90E1889A7CAB9C46002C474F3CEA2DB4 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tD5C808D5E63564B642AE6E3348E24CA62820E17D * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tD9EC6CFA4DA2D35537863AA10AC54F825E3F1B53, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tD9EC6CFA4DA2D35537863AA10AC54F825E3F1B53, ___entries_1)); }
	inline EntryU5BU5D_tB45047A6CA98DEF6571E65D4B078E7FEE2761D0E* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tB45047A6CA98DEF6571E65D4B078E7FEE2761D0E** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tB45047A6CA98DEF6571E65D4B078E7FEE2761D0E* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tD9EC6CFA4DA2D35537863AA10AC54F825E3F1B53, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tD9EC6CFA4DA2D35537863AA10AC54F825E3F1B53, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tD9EC6CFA4DA2D35537863AA10AC54F825E3F1B53, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tD9EC6CFA4DA2D35537863AA10AC54F825E3F1B53, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tD9EC6CFA4DA2D35537863AA10AC54F825E3F1B53, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tD9EC6CFA4DA2D35537863AA10AC54F825E3F1B53, ___keys_7)); }
	inline KeyCollection_tBBCFB70C90E1889A7CAB9C46002C474F3CEA2DB4 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tBBCFB70C90E1889A7CAB9C46002C474F3CEA2DB4 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tBBCFB70C90E1889A7CAB9C46002C474F3CEA2DB4 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tD9EC6CFA4DA2D35537863AA10AC54F825E3F1B53, ___values_8)); }
	inline ValueCollection_tD5C808D5E63564B642AE6E3348E24CA62820E17D * get_values_8() const { return ___values_8; }
	inline ValueCollection_tD5C808D5E63564B642AE6E3348E24CA62820E17D ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tD5C808D5E63564B642AE6E3348E24CA62820E17D * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tD9EC6CFA4DA2D35537863AA10AC54F825E3F1B53, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Reflection.Emit.ILGenerator
struct  ILGenerator_tE5AAEAFBCB8FD67493AC6519422504DAA595A13B  : public RuntimeObject
{
public:

public:
};


// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct  CriticalFinalizerObject_t8B006E1DEE084E781F5C0F3283E9226E28894DD9  : public RuntimeObject
{
public:

public:
};


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


// System.Text.StringBuilder
struct  StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkChars_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkPrevious_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
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

// Boo.Lang.Runtime.DynamicDispatching.Emitters.ImplicitConversionEmitter
struct  ImplicitConversionEmitter_t727822B4471E4A8B7D25EE40A6812CF3E3723D89  : public DispatcherEmitter_t21567E4DB17C6DBC63A5B07D5A7B311EEF850B8D
{
public:
	// System.Reflection.MethodInfo Boo.Lang.Runtime.DynamicDispatching.Emitters.ImplicitConversionEmitter::_conversion
	MethodInfo_t * ____conversion_2;

public:
	inline static int32_t get_offset_of__conversion_2() { return static_cast<int32_t>(offsetof(ImplicitConversionEmitter_t727822B4471E4A8B7D25EE40A6812CF3E3723D89, ____conversion_2)); }
	inline MethodInfo_t * get__conversion_2() const { return ____conversion_2; }
	inline MethodInfo_t ** get_address_of__conversion_2() { return &____conversion_2; }
	inline void set__conversion_2(MethodInfo_t * value)
	{
		____conversion_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____conversion_2), (void*)value);
	}
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


// System.Decimal
struct  Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 
{
public:
	// System.Int32 System.Decimal::flags
	int32_t ___flags_14;
	// System.Int32 System.Decimal::hi
	int32_t ___hi_15;
	// System.Int32 System.Decimal::lo
	int32_t ___lo_16;
	// System.Int32 System.Decimal::mid
	int32_t ___mid_17;

public:
	inline static int32_t get_offset_of_flags_14() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8, ___flags_14)); }
	inline int32_t get_flags_14() const { return ___flags_14; }
	inline int32_t* get_address_of_flags_14() { return &___flags_14; }
	inline void set_flags_14(int32_t value)
	{
		___flags_14 = value;
	}

	inline static int32_t get_offset_of_hi_15() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8, ___hi_15)); }
	inline int32_t get_hi_15() const { return ___hi_15; }
	inline int32_t* get_address_of_hi_15() { return &___hi_15; }
	inline void set_hi_15(int32_t value)
	{
		___hi_15 = value;
	}

	inline static int32_t get_offset_of_lo_16() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8, ___lo_16)); }
	inline int32_t get_lo_16() const { return ___lo_16; }
	inline int32_t* get_address_of_lo_16() { return &___lo_16; }
	inline void set_lo_16(int32_t value)
	{
		___lo_16 = value;
	}

	inline static int32_t get_offset_of_mid_17() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8, ___mid_17)); }
	inline int32_t get_mid_17() const { return ___mid_17; }
	inline int32_t* get_address_of_mid_17() { return &___mid_17; }
	inline void set_mid_17(int32_t value)
	{
		___mid_17 = value;
	}
};

struct Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields
{
public:
	// System.UInt32[] System.Decimal::Powers10
	UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* ___Powers10_6;
	// System.Decimal System.Decimal::Zero
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___Zero_7;
	// System.Decimal System.Decimal::One
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___One_8;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___MinusOne_9;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___MaxValue_10;
	// System.Decimal System.Decimal::MinValue
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___MinValue_11;
	// System.Decimal System.Decimal::NearNegativeZero
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___NearNegativeZero_12;
	// System.Decimal System.Decimal::NearPositiveZero
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___NearPositiveZero_13;

public:
	inline static int32_t get_offset_of_Powers10_6() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___Powers10_6)); }
	inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* get_Powers10_6() const { return ___Powers10_6; }
	inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB** get_address_of_Powers10_6() { return &___Powers10_6; }
	inline void set_Powers10_6(UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* value)
	{
		___Powers10_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Powers10_6), (void*)value);
	}

	inline static int32_t get_offset_of_Zero_7() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___Zero_7)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_Zero_7() const { return ___Zero_7; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_Zero_7() { return &___Zero_7; }
	inline void set_Zero_7(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___Zero_7 = value;
	}

	inline static int32_t get_offset_of_One_8() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___One_8)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_One_8() const { return ___One_8; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_One_8() { return &___One_8; }
	inline void set_One_8(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___One_8 = value;
	}

	inline static int32_t get_offset_of_MinusOne_9() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___MinusOne_9)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_MinusOne_9() const { return ___MinusOne_9; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_MinusOne_9() { return &___MinusOne_9; }
	inline void set_MinusOne_9(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___MinusOne_9 = value;
	}

	inline static int32_t get_offset_of_MaxValue_10() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___MaxValue_10)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_MaxValue_10() const { return ___MaxValue_10; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_MaxValue_10() { return &___MaxValue_10; }
	inline void set_MaxValue_10(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___MaxValue_10 = value;
	}

	inline static int32_t get_offset_of_MinValue_11() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___MinValue_11)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_MinValue_11() const { return ___MinValue_11; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_MinValue_11() { return &___MinValue_11; }
	inline void set_MinValue_11(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___MinValue_11 = value;
	}

	inline static int32_t get_offset_of_NearNegativeZero_12() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___NearNegativeZero_12)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_NearNegativeZero_12() const { return ___NearNegativeZero_12; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_NearNegativeZero_12() { return &___NearNegativeZero_12; }
	inline void set_NearNegativeZero_12(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___NearNegativeZero_12 = value;
	}

	inline static int32_t get_offset_of_NearPositiveZero_13() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___NearPositiveZero_13)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_NearPositiveZero_13() const { return ___NearPositiveZero_13; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_NearPositiveZero_13() { return &___NearPositiveZero_13; }
	inline void set_NearPositiveZero_13(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___NearPositiveZero_13 = value;
	}
};


// System.Double
struct  Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int64
struct  Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
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


// System.Reflection.Emit.OpCode
struct  OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 
{
public:
	// System.Byte System.Reflection.Emit.OpCode::op1
	uint8_t ___op1_0;
	// System.Byte System.Reflection.Emit.OpCode::op2
	uint8_t ___op2_1;
	// System.Byte System.Reflection.Emit.OpCode::push
	uint8_t ___push_2;
	// System.Byte System.Reflection.Emit.OpCode::pop
	uint8_t ___pop_3;
	// System.Byte System.Reflection.Emit.OpCode::size
	uint8_t ___size_4;
	// System.Byte System.Reflection.Emit.OpCode::type
	uint8_t ___type_5;
	// System.Byte System.Reflection.Emit.OpCode::args
	uint8_t ___args_6;
	// System.Byte System.Reflection.Emit.OpCode::flow
	uint8_t ___flow_7;

public:
	inline static int32_t get_offset_of_op1_0() { return static_cast<int32_t>(offsetof(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9, ___op1_0)); }
	inline uint8_t get_op1_0() const { return ___op1_0; }
	inline uint8_t* get_address_of_op1_0() { return &___op1_0; }
	inline void set_op1_0(uint8_t value)
	{
		___op1_0 = value;
	}

	inline static int32_t get_offset_of_op2_1() { return static_cast<int32_t>(offsetof(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9, ___op2_1)); }
	inline uint8_t get_op2_1() const { return ___op2_1; }
	inline uint8_t* get_address_of_op2_1() { return &___op2_1; }
	inline void set_op2_1(uint8_t value)
	{
		___op2_1 = value;
	}

	inline static int32_t get_offset_of_push_2() { return static_cast<int32_t>(offsetof(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9, ___push_2)); }
	inline uint8_t get_push_2() const { return ___push_2; }
	inline uint8_t* get_address_of_push_2() { return &___push_2; }
	inline void set_push_2(uint8_t value)
	{
		___push_2 = value;
	}

	inline static int32_t get_offset_of_pop_3() { return static_cast<int32_t>(offsetof(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9, ___pop_3)); }
	inline uint8_t get_pop_3() const { return ___pop_3; }
	inline uint8_t* get_address_of_pop_3() { return &___pop_3; }
	inline void set_pop_3(uint8_t value)
	{
		___pop_3 = value;
	}

	inline static int32_t get_offset_of_size_4() { return static_cast<int32_t>(offsetof(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9, ___size_4)); }
	inline uint8_t get_size_4() const { return ___size_4; }
	inline uint8_t* get_address_of_size_4() { return &___size_4; }
	inline void set_size_4(uint8_t value)
	{
		___size_4 = value;
	}

	inline static int32_t get_offset_of_type_5() { return static_cast<int32_t>(offsetof(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9, ___type_5)); }
	inline uint8_t get_type_5() const { return ___type_5; }
	inline uint8_t* get_address_of_type_5() { return &___type_5; }
	inline void set_type_5(uint8_t value)
	{
		___type_5 = value;
	}

	inline static int32_t get_offset_of_args_6() { return static_cast<int32_t>(offsetof(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9, ___args_6)); }
	inline uint8_t get_args_6() const { return ___args_6; }
	inline uint8_t* get_address_of_args_6() { return &___args_6; }
	inline void set_args_6(uint8_t value)
	{
		___args_6 = value;
	}

	inline static int32_t get_offset_of_flow_7() { return static_cast<int32_t>(offsetof(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9, ___flow_7)); }
	inline uint8_t get_flow_7() const { return ___flow_7; }
	inline uint8_t* get_address_of_flow_7() { return &___flow_7; }
	inline void set_flow_7(uint8_t value)
	{
		___flow_7 = value;
	}
};


// System.Reflection.MethodBase
struct  MethodBase_t  : public MemberInfo_t
{
public:

public:
};


// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.Threading.Thread
struct  Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7  : public CriticalFinalizerObject_t8B006E1DEE084E781F5C0F3283E9226E28894DD9
{
public:
	// System.Threading.InternalThread System.Threading.Thread::internal_thread
	InternalThread_tA4C58C2A7D15AF43C3E7507375E6D31DBBE7D192 * ___internal_thread_6;
	// System.Object System.Threading.Thread::m_ThreadStartArg
	RuntimeObject * ___m_ThreadStartArg_7;
	// System.Object System.Threading.Thread::pending_exception
	RuntimeObject * ___pending_exception_8;
	// System.Security.Principal.IPrincipal System.Threading.Thread::principal
	RuntimeObject* ___principal_9;
	// System.Int32 System.Threading.Thread::principal_version
	int32_t ___principal_version_10;
	// System.MulticastDelegate System.Threading.Thread::m_Delegate
	MulticastDelegate_t * ___m_Delegate_12;
	// System.Threading.ExecutionContext System.Threading.Thread::m_ExecutionContext
	ExecutionContext_t0E11C30308A4CC964D8A2EA9132F9BDCE5362C70 * ___m_ExecutionContext_13;
	// System.Boolean System.Threading.Thread::m_ExecutionContextBelongsToOuterScope
	bool ___m_ExecutionContextBelongsToOuterScope_14;

public:
	inline static int32_t get_offset_of_internal_thread_6() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7, ___internal_thread_6)); }
	inline InternalThread_tA4C58C2A7D15AF43C3E7507375E6D31DBBE7D192 * get_internal_thread_6() const { return ___internal_thread_6; }
	inline InternalThread_tA4C58C2A7D15AF43C3E7507375E6D31DBBE7D192 ** get_address_of_internal_thread_6() { return &___internal_thread_6; }
	inline void set_internal_thread_6(InternalThread_tA4C58C2A7D15AF43C3E7507375E6D31DBBE7D192 * value)
	{
		___internal_thread_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___internal_thread_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_ThreadStartArg_7() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7, ___m_ThreadStartArg_7)); }
	inline RuntimeObject * get_m_ThreadStartArg_7() const { return ___m_ThreadStartArg_7; }
	inline RuntimeObject ** get_address_of_m_ThreadStartArg_7() { return &___m_ThreadStartArg_7; }
	inline void set_m_ThreadStartArg_7(RuntimeObject * value)
	{
		___m_ThreadStartArg_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ThreadStartArg_7), (void*)value);
	}

	inline static int32_t get_offset_of_pending_exception_8() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7, ___pending_exception_8)); }
	inline RuntimeObject * get_pending_exception_8() const { return ___pending_exception_8; }
	inline RuntimeObject ** get_address_of_pending_exception_8() { return &___pending_exception_8; }
	inline void set_pending_exception_8(RuntimeObject * value)
	{
		___pending_exception_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pending_exception_8), (void*)value);
	}

	inline static int32_t get_offset_of_principal_9() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7, ___principal_9)); }
	inline RuntimeObject* get_principal_9() const { return ___principal_9; }
	inline RuntimeObject** get_address_of_principal_9() { return &___principal_9; }
	inline void set_principal_9(RuntimeObject* value)
	{
		___principal_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___principal_9), (void*)value);
	}

	inline static int32_t get_offset_of_principal_version_10() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7, ___principal_version_10)); }
	inline int32_t get_principal_version_10() const { return ___principal_version_10; }
	inline int32_t* get_address_of_principal_version_10() { return &___principal_version_10; }
	inline void set_principal_version_10(int32_t value)
	{
		___principal_version_10 = value;
	}

	inline static int32_t get_offset_of_m_Delegate_12() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7, ___m_Delegate_12)); }
	inline MulticastDelegate_t * get_m_Delegate_12() const { return ___m_Delegate_12; }
	inline MulticastDelegate_t ** get_address_of_m_Delegate_12() { return &___m_Delegate_12; }
	inline void set_m_Delegate_12(MulticastDelegate_t * value)
	{
		___m_Delegate_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Delegate_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_ExecutionContext_13() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7, ___m_ExecutionContext_13)); }
	inline ExecutionContext_t0E11C30308A4CC964D8A2EA9132F9BDCE5362C70 * get_m_ExecutionContext_13() const { return ___m_ExecutionContext_13; }
	inline ExecutionContext_t0E11C30308A4CC964D8A2EA9132F9BDCE5362C70 ** get_address_of_m_ExecutionContext_13() { return &___m_ExecutionContext_13; }
	inline void set_m_ExecutionContext_13(ExecutionContext_t0E11C30308A4CC964D8A2EA9132F9BDCE5362C70 * value)
	{
		___m_ExecutionContext_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ExecutionContext_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_ExecutionContextBelongsToOuterScope_14() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7, ___m_ExecutionContextBelongsToOuterScope_14)); }
	inline bool get_m_ExecutionContextBelongsToOuterScope_14() const { return ___m_ExecutionContextBelongsToOuterScope_14; }
	inline bool* get_address_of_m_ExecutionContextBelongsToOuterScope_14() { return &___m_ExecutionContextBelongsToOuterScope_14; }
	inline void set_m_ExecutionContextBelongsToOuterScope_14(bool value)
	{
		___m_ExecutionContextBelongsToOuterScope_14 = value;
	}
};

struct Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_StaticFields
{
public:
	// System.LocalDataStoreMgr System.Threading.Thread::s_LocalDataStoreMgr
	LocalDataStoreMgr_t1964DDB9F2BE154BE3159A7507D0D0CCBF8FDCA9 * ___s_LocalDataStoreMgr_0;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentCulture
	AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A * ___s_asyncLocalCurrentCulture_4;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentUICulture
	AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A * ___s_asyncLocalCurrentUICulture_5;

public:
	inline static int32_t get_offset_of_s_LocalDataStoreMgr_0() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_StaticFields, ___s_LocalDataStoreMgr_0)); }
	inline LocalDataStoreMgr_t1964DDB9F2BE154BE3159A7507D0D0CCBF8FDCA9 * get_s_LocalDataStoreMgr_0() const { return ___s_LocalDataStoreMgr_0; }
	inline LocalDataStoreMgr_t1964DDB9F2BE154BE3159A7507D0D0CCBF8FDCA9 ** get_address_of_s_LocalDataStoreMgr_0() { return &___s_LocalDataStoreMgr_0; }
	inline void set_s_LocalDataStoreMgr_0(LocalDataStoreMgr_t1964DDB9F2BE154BE3159A7507D0D0CCBF8FDCA9 * value)
	{
		___s_LocalDataStoreMgr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_LocalDataStoreMgr_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncLocalCurrentCulture_4() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_StaticFields, ___s_asyncLocalCurrentCulture_4)); }
	inline AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A * get_s_asyncLocalCurrentCulture_4() const { return ___s_asyncLocalCurrentCulture_4; }
	inline AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A ** get_address_of_s_asyncLocalCurrentCulture_4() { return &___s_asyncLocalCurrentCulture_4; }
	inline void set_s_asyncLocalCurrentCulture_4(AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A * value)
	{
		___s_asyncLocalCurrentCulture_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_asyncLocalCurrentCulture_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncLocalCurrentUICulture_5() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_StaticFields, ___s_asyncLocalCurrentUICulture_5)); }
	inline AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A * get_s_asyncLocalCurrentUICulture_5() const { return ___s_asyncLocalCurrentUICulture_5; }
	inline AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A ** get_address_of_s_asyncLocalCurrentUICulture_5() { return &___s_asyncLocalCurrentUICulture_5; }
	inline void set_s_asyncLocalCurrentUICulture_5(AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A * value)
	{
		___s_asyncLocalCurrentUICulture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_asyncLocalCurrentUICulture_5), (void*)value);
	}
};

struct Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_ThreadStaticFields
{
public:
	// System.LocalDataStoreHolder System.Threading.Thread::s_LocalDataStore
	LocalDataStoreHolder_tE0636E08496405406FD63190AC51EEB2EE51E304 * ___s_LocalDataStore_1;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentCulture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___m_CurrentCulture_2;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentUICulture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___m_CurrentUICulture_3;
	// System.Threading.Thread System.Threading.Thread::current_thread
	Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * ___current_thread_11;

public:
	inline static int32_t get_offset_of_s_LocalDataStore_1() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_ThreadStaticFields, ___s_LocalDataStore_1)); }
	inline LocalDataStoreHolder_tE0636E08496405406FD63190AC51EEB2EE51E304 * get_s_LocalDataStore_1() const { return ___s_LocalDataStore_1; }
	inline LocalDataStoreHolder_tE0636E08496405406FD63190AC51EEB2EE51E304 ** get_address_of_s_LocalDataStore_1() { return &___s_LocalDataStore_1; }
	inline void set_s_LocalDataStore_1(LocalDataStoreHolder_tE0636E08496405406FD63190AC51EEB2EE51E304 * value)
	{
		___s_LocalDataStore_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_LocalDataStore_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentCulture_2() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_ThreadStaticFields, ___m_CurrentCulture_2)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_m_CurrentCulture_2() const { return ___m_CurrentCulture_2; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_m_CurrentCulture_2() { return &___m_CurrentCulture_2; }
	inline void set_m_CurrentCulture_2(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___m_CurrentCulture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentCulture_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentUICulture_3() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_ThreadStaticFields, ___m_CurrentUICulture_3)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_m_CurrentUICulture_3() const { return ___m_CurrentUICulture_3; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_m_CurrentUICulture_3() { return &___m_CurrentUICulture_3; }
	inline void set_m_CurrentUICulture_3(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___m_CurrentUICulture_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentUICulture_3), (void*)value);
	}

	inline static int32_t get_offset_of_current_thread_11() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_ThreadStaticFields, ___current_thread_11)); }
	inline Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * get_current_thread_11() const { return ___current_thread_11; }
	inline Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 ** get_address_of_current_thread_11() { return &___current_thread_11; }
	inline void set_current_thread_11(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * value)
	{
		___current_thread_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_thread_11), (void*)value);
	}
};


// System.UInt32
struct  UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt64
struct  UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
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

// System.Exception
struct  Exception_t  : public RuntimeObject
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

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
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.Reflection.BindingFlags
struct  BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.Emit.OpCodes
struct  OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252  : public RuntimeObject
{
public:

public:
};

struct OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields
{
public:
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Nop
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Nop_0;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Break
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Break_1;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldarg_0
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Ldarg_0_2;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldarg_1
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Ldarg_1_3;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldarg_2
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Ldarg_2_4;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldarg_3
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Ldarg_3_5;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldloc_0
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Ldloc_0_6;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldloc_1
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Ldloc_1_7;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldloc_2
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Ldloc_2_8;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldloc_3
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Ldloc_3_9;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stloc_0
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Stloc_0_10;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stloc_1
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Stloc_1_11;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stloc_2
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Stloc_2_12;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stloc_3
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Stloc_3_13;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldarg_S
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Ldarg_S_14;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldarga_S
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Ldarga_S_15;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Starg_S
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Starg_S_16;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldloc_S
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Ldloc_S_17;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldloca_S
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Ldloca_S_18;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stloc_S
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Stloc_S_19;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldnull
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Ldnull_20;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldc_I4_M1
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Ldc_I4_M1_21;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldc_I4_0
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Ldc_I4_0_22;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldc_I4_1
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Ldc_I4_1_23;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldc_I4_2
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Ldc_I4_2_24;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldc_I4_3
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Ldc_I4_3_25;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldc_I4_4
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Ldc_I4_4_26;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldc_I4_5
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Ldc_I4_5_27;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldc_I4_6
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Ldc_I4_6_28;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldc_I4_7
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Ldc_I4_7_29;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldc_I4_8
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Ldc_I4_8_30;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldc_I4_S
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Ldc_I4_S_31;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldc_I4
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Ldc_I4_32;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldc_I8
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Ldc_I8_33;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldc_R4
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Ldc_R4_34;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldc_R8
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Ldc_R8_35;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Dup
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Dup_36;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Pop
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Pop_37;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Jmp
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Jmp_38;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Call
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Call_39;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Calli
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Calli_40;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ret
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Ret_41;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Br_S
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Br_S_42;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Brfalse_S
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Brfalse_S_43;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Brtrue_S
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Brtrue_S_44;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Beq_S
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Beq_S_45;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Bge_S
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Bge_S_46;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Bgt_S
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Bgt_S_47;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ble_S
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Ble_S_48;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Blt_S
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Blt_S_49;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Bne_Un_S
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Bne_Un_S_50;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Bge_Un_S
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Bge_Un_S_51;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Bgt_Un_S
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Bgt_Un_S_52;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ble_Un_S
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Ble_Un_S_53;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Blt_Un_S
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Blt_Un_S_54;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Br
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Br_55;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Brfalse
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Brfalse_56;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Brtrue
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Brtrue_57;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Beq
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Beq_58;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Bge
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Bge_59;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Bgt
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Bgt_60;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ble
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Ble_61;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Blt
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Blt_62;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Bne_Un
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Bne_Un_63;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Bge_Un
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Bge_Un_64;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Bgt_Un
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Bgt_Un_65;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ble_Un
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Ble_Un_66;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Blt_Un
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Blt_Un_67;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Switch
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Switch_68;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldind_I1
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Ldind_I1_69;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldind_U1
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Ldind_U1_70;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldind_I2
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Ldind_I2_71;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldind_U2
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Ldind_U2_72;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldind_I4
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Ldind_I4_73;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldind_U4
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Ldind_U4_74;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldind_I8
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Ldind_I8_75;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldind_I
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Ldind_I_76;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldind_R4
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Ldind_R4_77;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldind_R8
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Ldind_R8_78;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldind_Ref
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Ldind_Ref_79;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stind_Ref
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Stind_Ref_80;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stind_I1
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Stind_I1_81;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stind_I2
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Stind_I2_82;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stind_I4
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Stind_I4_83;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stind_I8
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Stind_I8_84;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stind_R4
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Stind_R4_85;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stind_R8
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Stind_R8_86;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Add
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Add_87;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Sub
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Sub_88;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Mul
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Mul_89;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Div
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Div_90;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Div_Un
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Div_Un_91;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Rem
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Rem_92;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Rem_Un
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Rem_Un_93;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::And
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___And_94;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Or
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Or_95;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Xor
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Xor_96;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Shl
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Shl_97;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Shr
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Shr_98;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Shr_Un
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Shr_Un_99;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Neg
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Neg_100;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Not
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Not_101;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_I1
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Conv_I1_102;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_I2
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Conv_I2_103;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_I4
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Conv_I4_104;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_I8
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Conv_I8_105;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_R4
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Conv_R4_106;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_R8
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Conv_R8_107;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_U4
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Conv_U4_108;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_U8
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Conv_U8_109;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Callvirt
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Callvirt_110;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Cpobj
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Cpobj_111;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldobj
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Ldobj_112;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldstr
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Ldstr_113;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Newobj
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Newobj_114;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Castclass
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Castclass_115;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Isinst
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Isinst_116;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_R_Un
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Conv_R_Un_117;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Unbox
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Unbox_118;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Throw
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Throw_119;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldfld
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Ldfld_120;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldflda
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Ldflda_121;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stfld
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Stfld_122;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldsfld
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Ldsfld_123;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldsflda
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Ldsflda_124;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stsfld
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Stsfld_125;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stobj
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Stobj_126;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_I1_Un
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Conv_Ovf_I1_Un_127;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_I2_Un
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Conv_Ovf_I2_Un_128;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_I4_Un
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Conv_Ovf_I4_Un_129;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_I8_Un
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Conv_Ovf_I8_Un_130;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_U1_Un
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Conv_Ovf_U1_Un_131;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_U2_Un
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Conv_Ovf_U2_Un_132;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_U4_Un
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Conv_Ovf_U4_Un_133;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_U8_Un
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Conv_Ovf_U8_Un_134;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_I_Un
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Conv_Ovf_I_Un_135;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_U_Un
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Conv_Ovf_U_Un_136;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Box
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Box_137;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Newarr
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Newarr_138;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldlen
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Ldlen_139;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldelema
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Ldelema_140;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldelem_I1
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Ldelem_I1_141;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldelem_U1
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Ldelem_U1_142;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldelem_I2
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Ldelem_I2_143;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldelem_U2
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Ldelem_U2_144;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldelem_I4
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Ldelem_I4_145;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldelem_U4
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Ldelem_U4_146;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldelem_I8
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Ldelem_I8_147;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldelem_I
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Ldelem_I_148;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldelem_R4
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Ldelem_R4_149;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldelem_R8
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Ldelem_R8_150;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldelem_Ref
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Ldelem_Ref_151;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stelem_I
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Stelem_I_152;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stelem_I1
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Stelem_I1_153;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stelem_I2
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Stelem_I2_154;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stelem_I4
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Stelem_I4_155;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stelem_I8
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Stelem_I8_156;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stelem_R4
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Stelem_R4_157;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stelem_R8
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Stelem_R8_158;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stelem_Ref
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Stelem_Ref_159;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldelem
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Ldelem_160;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stelem
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Stelem_161;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Unbox_Any
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Unbox_Any_162;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_I1
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Conv_Ovf_I1_163;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_U1
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Conv_Ovf_U1_164;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_I2
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Conv_Ovf_I2_165;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_U2
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Conv_Ovf_U2_166;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_I4
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Conv_Ovf_I4_167;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_U4
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Conv_Ovf_U4_168;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_I8
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Conv_Ovf_I8_169;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_U8
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Conv_Ovf_U8_170;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Refanyval
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Refanyval_171;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ckfinite
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Ckfinite_172;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Mkrefany
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Mkrefany_173;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldtoken
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Ldtoken_174;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_U2
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Conv_U2_175;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_U1
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Conv_U1_176;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_I
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Conv_I_177;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_I
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Conv_Ovf_I_178;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_U
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Conv_Ovf_U_179;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Add_Ovf
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Add_Ovf_180;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Add_Ovf_Un
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Add_Ovf_Un_181;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Mul_Ovf
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Mul_Ovf_182;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Mul_Ovf_Un
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Mul_Ovf_Un_183;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Sub_Ovf
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Sub_Ovf_184;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Sub_Ovf_Un
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Sub_Ovf_Un_185;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Endfinally
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Endfinally_186;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Leave
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Leave_187;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Leave_S
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Leave_S_188;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stind_I
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Stind_I_189;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_U
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Conv_U_190;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Prefix7
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Prefix7_191;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Prefix6
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Prefix6_192;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Prefix5
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Prefix5_193;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Prefix4
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Prefix4_194;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Prefix3
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Prefix3_195;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Prefix2
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Prefix2_196;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Prefix1
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Prefix1_197;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Prefixref
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Prefixref_198;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Arglist
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Arglist_199;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ceq
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Ceq_200;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Cgt
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Cgt_201;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Cgt_Un
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Cgt_Un_202;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Clt
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Clt_203;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Clt_Un
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Clt_Un_204;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldftn
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Ldftn_205;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldvirtftn
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Ldvirtftn_206;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldarg
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Ldarg_207;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldarga
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Ldarga_208;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Starg
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Starg_209;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldloc
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Ldloc_210;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldloca
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Ldloca_211;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stloc
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Stloc_212;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Localloc
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Localloc_213;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Endfilter
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Endfilter_214;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Unaligned
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Unaligned_215;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Volatile
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Volatile_216;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Tailcall
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Tailcall_217;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Initobj
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Initobj_218;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Constrained
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Constrained_219;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Cpblk
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Cpblk_220;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Initblk
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Initblk_221;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Rethrow
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Rethrow_222;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Sizeof
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Sizeof_223;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Refanytype
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Refanytype_224;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Readonly
	OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  ___Readonly_225;

public:
	inline static int32_t get_offset_of_Nop_0() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Nop_0)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Nop_0() const { return ___Nop_0; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Nop_0() { return &___Nop_0; }
	inline void set_Nop_0(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Nop_0 = value;
	}

	inline static int32_t get_offset_of_Break_1() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Break_1)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Break_1() const { return ___Break_1; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Break_1() { return &___Break_1; }
	inline void set_Break_1(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Break_1 = value;
	}

	inline static int32_t get_offset_of_Ldarg_0_2() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Ldarg_0_2)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Ldarg_0_2() const { return ___Ldarg_0_2; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Ldarg_0_2() { return &___Ldarg_0_2; }
	inline void set_Ldarg_0_2(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Ldarg_0_2 = value;
	}

	inline static int32_t get_offset_of_Ldarg_1_3() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Ldarg_1_3)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Ldarg_1_3() const { return ___Ldarg_1_3; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Ldarg_1_3() { return &___Ldarg_1_3; }
	inline void set_Ldarg_1_3(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Ldarg_1_3 = value;
	}

	inline static int32_t get_offset_of_Ldarg_2_4() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Ldarg_2_4)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Ldarg_2_4() const { return ___Ldarg_2_4; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Ldarg_2_4() { return &___Ldarg_2_4; }
	inline void set_Ldarg_2_4(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Ldarg_2_4 = value;
	}

	inline static int32_t get_offset_of_Ldarg_3_5() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Ldarg_3_5)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Ldarg_3_5() const { return ___Ldarg_3_5; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Ldarg_3_5() { return &___Ldarg_3_5; }
	inline void set_Ldarg_3_5(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Ldarg_3_5 = value;
	}

	inline static int32_t get_offset_of_Ldloc_0_6() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Ldloc_0_6)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Ldloc_0_6() const { return ___Ldloc_0_6; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Ldloc_0_6() { return &___Ldloc_0_6; }
	inline void set_Ldloc_0_6(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Ldloc_0_6 = value;
	}

	inline static int32_t get_offset_of_Ldloc_1_7() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Ldloc_1_7)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Ldloc_1_7() const { return ___Ldloc_1_7; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Ldloc_1_7() { return &___Ldloc_1_7; }
	inline void set_Ldloc_1_7(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Ldloc_1_7 = value;
	}

	inline static int32_t get_offset_of_Ldloc_2_8() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Ldloc_2_8)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Ldloc_2_8() const { return ___Ldloc_2_8; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Ldloc_2_8() { return &___Ldloc_2_8; }
	inline void set_Ldloc_2_8(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Ldloc_2_8 = value;
	}

	inline static int32_t get_offset_of_Ldloc_3_9() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Ldloc_3_9)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Ldloc_3_9() const { return ___Ldloc_3_9; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Ldloc_3_9() { return &___Ldloc_3_9; }
	inline void set_Ldloc_3_9(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Ldloc_3_9 = value;
	}

	inline static int32_t get_offset_of_Stloc_0_10() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Stloc_0_10)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Stloc_0_10() const { return ___Stloc_0_10; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Stloc_0_10() { return &___Stloc_0_10; }
	inline void set_Stloc_0_10(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Stloc_0_10 = value;
	}

	inline static int32_t get_offset_of_Stloc_1_11() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Stloc_1_11)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Stloc_1_11() const { return ___Stloc_1_11; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Stloc_1_11() { return &___Stloc_1_11; }
	inline void set_Stloc_1_11(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Stloc_1_11 = value;
	}

	inline static int32_t get_offset_of_Stloc_2_12() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Stloc_2_12)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Stloc_2_12() const { return ___Stloc_2_12; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Stloc_2_12() { return &___Stloc_2_12; }
	inline void set_Stloc_2_12(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Stloc_2_12 = value;
	}

	inline static int32_t get_offset_of_Stloc_3_13() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Stloc_3_13)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Stloc_3_13() const { return ___Stloc_3_13; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Stloc_3_13() { return &___Stloc_3_13; }
	inline void set_Stloc_3_13(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Stloc_3_13 = value;
	}

	inline static int32_t get_offset_of_Ldarg_S_14() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Ldarg_S_14)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Ldarg_S_14() const { return ___Ldarg_S_14; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Ldarg_S_14() { return &___Ldarg_S_14; }
	inline void set_Ldarg_S_14(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Ldarg_S_14 = value;
	}

	inline static int32_t get_offset_of_Ldarga_S_15() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Ldarga_S_15)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Ldarga_S_15() const { return ___Ldarga_S_15; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Ldarga_S_15() { return &___Ldarga_S_15; }
	inline void set_Ldarga_S_15(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Ldarga_S_15 = value;
	}

	inline static int32_t get_offset_of_Starg_S_16() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Starg_S_16)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Starg_S_16() const { return ___Starg_S_16; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Starg_S_16() { return &___Starg_S_16; }
	inline void set_Starg_S_16(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Starg_S_16 = value;
	}

	inline static int32_t get_offset_of_Ldloc_S_17() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Ldloc_S_17)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Ldloc_S_17() const { return ___Ldloc_S_17; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Ldloc_S_17() { return &___Ldloc_S_17; }
	inline void set_Ldloc_S_17(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Ldloc_S_17 = value;
	}

	inline static int32_t get_offset_of_Ldloca_S_18() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Ldloca_S_18)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Ldloca_S_18() const { return ___Ldloca_S_18; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Ldloca_S_18() { return &___Ldloca_S_18; }
	inline void set_Ldloca_S_18(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Ldloca_S_18 = value;
	}

	inline static int32_t get_offset_of_Stloc_S_19() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Stloc_S_19)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Stloc_S_19() const { return ___Stloc_S_19; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Stloc_S_19() { return &___Stloc_S_19; }
	inline void set_Stloc_S_19(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Stloc_S_19 = value;
	}

	inline static int32_t get_offset_of_Ldnull_20() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Ldnull_20)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Ldnull_20() const { return ___Ldnull_20; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Ldnull_20() { return &___Ldnull_20; }
	inline void set_Ldnull_20(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Ldnull_20 = value;
	}

	inline static int32_t get_offset_of_Ldc_I4_M1_21() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Ldc_I4_M1_21)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Ldc_I4_M1_21() const { return ___Ldc_I4_M1_21; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Ldc_I4_M1_21() { return &___Ldc_I4_M1_21; }
	inline void set_Ldc_I4_M1_21(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Ldc_I4_M1_21 = value;
	}

	inline static int32_t get_offset_of_Ldc_I4_0_22() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Ldc_I4_0_22)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Ldc_I4_0_22() const { return ___Ldc_I4_0_22; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Ldc_I4_0_22() { return &___Ldc_I4_0_22; }
	inline void set_Ldc_I4_0_22(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Ldc_I4_0_22 = value;
	}

	inline static int32_t get_offset_of_Ldc_I4_1_23() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Ldc_I4_1_23)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Ldc_I4_1_23() const { return ___Ldc_I4_1_23; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Ldc_I4_1_23() { return &___Ldc_I4_1_23; }
	inline void set_Ldc_I4_1_23(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Ldc_I4_1_23 = value;
	}

	inline static int32_t get_offset_of_Ldc_I4_2_24() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Ldc_I4_2_24)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Ldc_I4_2_24() const { return ___Ldc_I4_2_24; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Ldc_I4_2_24() { return &___Ldc_I4_2_24; }
	inline void set_Ldc_I4_2_24(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Ldc_I4_2_24 = value;
	}

	inline static int32_t get_offset_of_Ldc_I4_3_25() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Ldc_I4_3_25)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Ldc_I4_3_25() const { return ___Ldc_I4_3_25; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Ldc_I4_3_25() { return &___Ldc_I4_3_25; }
	inline void set_Ldc_I4_3_25(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Ldc_I4_3_25 = value;
	}

	inline static int32_t get_offset_of_Ldc_I4_4_26() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Ldc_I4_4_26)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Ldc_I4_4_26() const { return ___Ldc_I4_4_26; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Ldc_I4_4_26() { return &___Ldc_I4_4_26; }
	inline void set_Ldc_I4_4_26(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Ldc_I4_4_26 = value;
	}

	inline static int32_t get_offset_of_Ldc_I4_5_27() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Ldc_I4_5_27)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Ldc_I4_5_27() const { return ___Ldc_I4_5_27; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Ldc_I4_5_27() { return &___Ldc_I4_5_27; }
	inline void set_Ldc_I4_5_27(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Ldc_I4_5_27 = value;
	}

	inline static int32_t get_offset_of_Ldc_I4_6_28() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Ldc_I4_6_28)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Ldc_I4_6_28() const { return ___Ldc_I4_6_28; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Ldc_I4_6_28() { return &___Ldc_I4_6_28; }
	inline void set_Ldc_I4_6_28(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Ldc_I4_6_28 = value;
	}

	inline static int32_t get_offset_of_Ldc_I4_7_29() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Ldc_I4_7_29)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Ldc_I4_7_29() const { return ___Ldc_I4_7_29; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Ldc_I4_7_29() { return &___Ldc_I4_7_29; }
	inline void set_Ldc_I4_7_29(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Ldc_I4_7_29 = value;
	}

	inline static int32_t get_offset_of_Ldc_I4_8_30() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Ldc_I4_8_30)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Ldc_I4_8_30() const { return ___Ldc_I4_8_30; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Ldc_I4_8_30() { return &___Ldc_I4_8_30; }
	inline void set_Ldc_I4_8_30(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Ldc_I4_8_30 = value;
	}

	inline static int32_t get_offset_of_Ldc_I4_S_31() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Ldc_I4_S_31)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Ldc_I4_S_31() const { return ___Ldc_I4_S_31; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Ldc_I4_S_31() { return &___Ldc_I4_S_31; }
	inline void set_Ldc_I4_S_31(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Ldc_I4_S_31 = value;
	}

	inline static int32_t get_offset_of_Ldc_I4_32() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Ldc_I4_32)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Ldc_I4_32() const { return ___Ldc_I4_32; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Ldc_I4_32() { return &___Ldc_I4_32; }
	inline void set_Ldc_I4_32(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Ldc_I4_32 = value;
	}

	inline static int32_t get_offset_of_Ldc_I8_33() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Ldc_I8_33)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Ldc_I8_33() const { return ___Ldc_I8_33; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Ldc_I8_33() { return &___Ldc_I8_33; }
	inline void set_Ldc_I8_33(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Ldc_I8_33 = value;
	}

	inline static int32_t get_offset_of_Ldc_R4_34() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Ldc_R4_34)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Ldc_R4_34() const { return ___Ldc_R4_34; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Ldc_R4_34() { return &___Ldc_R4_34; }
	inline void set_Ldc_R4_34(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Ldc_R4_34 = value;
	}

	inline static int32_t get_offset_of_Ldc_R8_35() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Ldc_R8_35)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Ldc_R8_35() const { return ___Ldc_R8_35; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Ldc_R8_35() { return &___Ldc_R8_35; }
	inline void set_Ldc_R8_35(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Ldc_R8_35 = value;
	}

	inline static int32_t get_offset_of_Dup_36() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Dup_36)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Dup_36() const { return ___Dup_36; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Dup_36() { return &___Dup_36; }
	inline void set_Dup_36(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Dup_36 = value;
	}

	inline static int32_t get_offset_of_Pop_37() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Pop_37)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Pop_37() const { return ___Pop_37; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Pop_37() { return &___Pop_37; }
	inline void set_Pop_37(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Pop_37 = value;
	}

	inline static int32_t get_offset_of_Jmp_38() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Jmp_38)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Jmp_38() const { return ___Jmp_38; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Jmp_38() { return &___Jmp_38; }
	inline void set_Jmp_38(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Jmp_38 = value;
	}

	inline static int32_t get_offset_of_Call_39() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Call_39)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Call_39() const { return ___Call_39; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Call_39() { return &___Call_39; }
	inline void set_Call_39(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Call_39 = value;
	}

	inline static int32_t get_offset_of_Calli_40() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Calli_40)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Calli_40() const { return ___Calli_40; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Calli_40() { return &___Calli_40; }
	inline void set_Calli_40(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Calli_40 = value;
	}

	inline static int32_t get_offset_of_Ret_41() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Ret_41)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Ret_41() const { return ___Ret_41; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Ret_41() { return &___Ret_41; }
	inline void set_Ret_41(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Ret_41 = value;
	}

	inline static int32_t get_offset_of_Br_S_42() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Br_S_42)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Br_S_42() const { return ___Br_S_42; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Br_S_42() { return &___Br_S_42; }
	inline void set_Br_S_42(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Br_S_42 = value;
	}

	inline static int32_t get_offset_of_Brfalse_S_43() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Brfalse_S_43)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Brfalse_S_43() const { return ___Brfalse_S_43; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Brfalse_S_43() { return &___Brfalse_S_43; }
	inline void set_Brfalse_S_43(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Brfalse_S_43 = value;
	}

	inline static int32_t get_offset_of_Brtrue_S_44() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Brtrue_S_44)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Brtrue_S_44() const { return ___Brtrue_S_44; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Brtrue_S_44() { return &___Brtrue_S_44; }
	inline void set_Brtrue_S_44(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Brtrue_S_44 = value;
	}

	inline static int32_t get_offset_of_Beq_S_45() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Beq_S_45)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Beq_S_45() const { return ___Beq_S_45; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Beq_S_45() { return &___Beq_S_45; }
	inline void set_Beq_S_45(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Beq_S_45 = value;
	}

	inline static int32_t get_offset_of_Bge_S_46() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Bge_S_46)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Bge_S_46() const { return ___Bge_S_46; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Bge_S_46() { return &___Bge_S_46; }
	inline void set_Bge_S_46(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Bge_S_46 = value;
	}

	inline static int32_t get_offset_of_Bgt_S_47() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Bgt_S_47)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Bgt_S_47() const { return ___Bgt_S_47; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Bgt_S_47() { return &___Bgt_S_47; }
	inline void set_Bgt_S_47(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Bgt_S_47 = value;
	}

	inline static int32_t get_offset_of_Ble_S_48() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Ble_S_48)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Ble_S_48() const { return ___Ble_S_48; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Ble_S_48() { return &___Ble_S_48; }
	inline void set_Ble_S_48(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Ble_S_48 = value;
	}

	inline static int32_t get_offset_of_Blt_S_49() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Blt_S_49)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Blt_S_49() const { return ___Blt_S_49; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Blt_S_49() { return &___Blt_S_49; }
	inline void set_Blt_S_49(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Blt_S_49 = value;
	}

	inline static int32_t get_offset_of_Bne_Un_S_50() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Bne_Un_S_50)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Bne_Un_S_50() const { return ___Bne_Un_S_50; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Bne_Un_S_50() { return &___Bne_Un_S_50; }
	inline void set_Bne_Un_S_50(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Bne_Un_S_50 = value;
	}

	inline static int32_t get_offset_of_Bge_Un_S_51() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Bge_Un_S_51)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Bge_Un_S_51() const { return ___Bge_Un_S_51; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Bge_Un_S_51() { return &___Bge_Un_S_51; }
	inline void set_Bge_Un_S_51(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Bge_Un_S_51 = value;
	}

	inline static int32_t get_offset_of_Bgt_Un_S_52() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Bgt_Un_S_52)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Bgt_Un_S_52() const { return ___Bgt_Un_S_52; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Bgt_Un_S_52() { return &___Bgt_Un_S_52; }
	inline void set_Bgt_Un_S_52(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Bgt_Un_S_52 = value;
	}

	inline static int32_t get_offset_of_Ble_Un_S_53() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Ble_Un_S_53)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Ble_Un_S_53() const { return ___Ble_Un_S_53; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Ble_Un_S_53() { return &___Ble_Un_S_53; }
	inline void set_Ble_Un_S_53(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Ble_Un_S_53 = value;
	}

	inline static int32_t get_offset_of_Blt_Un_S_54() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Blt_Un_S_54)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Blt_Un_S_54() const { return ___Blt_Un_S_54; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Blt_Un_S_54() { return &___Blt_Un_S_54; }
	inline void set_Blt_Un_S_54(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Blt_Un_S_54 = value;
	}

	inline static int32_t get_offset_of_Br_55() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Br_55)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Br_55() const { return ___Br_55; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Br_55() { return &___Br_55; }
	inline void set_Br_55(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Br_55 = value;
	}

	inline static int32_t get_offset_of_Brfalse_56() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Brfalse_56)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Brfalse_56() const { return ___Brfalse_56; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Brfalse_56() { return &___Brfalse_56; }
	inline void set_Brfalse_56(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Brfalse_56 = value;
	}

	inline static int32_t get_offset_of_Brtrue_57() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Brtrue_57)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Brtrue_57() const { return ___Brtrue_57; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Brtrue_57() { return &___Brtrue_57; }
	inline void set_Brtrue_57(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Brtrue_57 = value;
	}

	inline static int32_t get_offset_of_Beq_58() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Beq_58)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Beq_58() const { return ___Beq_58; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Beq_58() { return &___Beq_58; }
	inline void set_Beq_58(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Beq_58 = value;
	}

	inline static int32_t get_offset_of_Bge_59() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Bge_59)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Bge_59() const { return ___Bge_59; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Bge_59() { return &___Bge_59; }
	inline void set_Bge_59(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Bge_59 = value;
	}

	inline static int32_t get_offset_of_Bgt_60() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Bgt_60)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Bgt_60() const { return ___Bgt_60; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Bgt_60() { return &___Bgt_60; }
	inline void set_Bgt_60(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Bgt_60 = value;
	}

	inline static int32_t get_offset_of_Ble_61() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Ble_61)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Ble_61() const { return ___Ble_61; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Ble_61() { return &___Ble_61; }
	inline void set_Ble_61(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Ble_61 = value;
	}

	inline static int32_t get_offset_of_Blt_62() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Blt_62)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Blt_62() const { return ___Blt_62; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Blt_62() { return &___Blt_62; }
	inline void set_Blt_62(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Blt_62 = value;
	}

	inline static int32_t get_offset_of_Bne_Un_63() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Bne_Un_63)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Bne_Un_63() const { return ___Bne_Un_63; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Bne_Un_63() { return &___Bne_Un_63; }
	inline void set_Bne_Un_63(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Bne_Un_63 = value;
	}

	inline static int32_t get_offset_of_Bge_Un_64() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Bge_Un_64)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Bge_Un_64() const { return ___Bge_Un_64; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Bge_Un_64() { return &___Bge_Un_64; }
	inline void set_Bge_Un_64(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Bge_Un_64 = value;
	}

	inline static int32_t get_offset_of_Bgt_Un_65() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Bgt_Un_65)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Bgt_Un_65() const { return ___Bgt_Un_65; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Bgt_Un_65() { return &___Bgt_Un_65; }
	inline void set_Bgt_Un_65(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Bgt_Un_65 = value;
	}

	inline static int32_t get_offset_of_Ble_Un_66() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Ble_Un_66)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Ble_Un_66() const { return ___Ble_Un_66; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Ble_Un_66() { return &___Ble_Un_66; }
	inline void set_Ble_Un_66(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Ble_Un_66 = value;
	}

	inline static int32_t get_offset_of_Blt_Un_67() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Blt_Un_67)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Blt_Un_67() const { return ___Blt_Un_67; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Blt_Un_67() { return &___Blt_Un_67; }
	inline void set_Blt_Un_67(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Blt_Un_67 = value;
	}

	inline static int32_t get_offset_of_Switch_68() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Switch_68)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Switch_68() const { return ___Switch_68; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Switch_68() { return &___Switch_68; }
	inline void set_Switch_68(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Switch_68 = value;
	}

	inline static int32_t get_offset_of_Ldind_I1_69() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Ldind_I1_69)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Ldind_I1_69() const { return ___Ldind_I1_69; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Ldind_I1_69() { return &___Ldind_I1_69; }
	inline void set_Ldind_I1_69(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Ldind_I1_69 = value;
	}

	inline static int32_t get_offset_of_Ldind_U1_70() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Ldind_U1_70)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Ldind_U1_70() const { return ___Ldind_U1_70; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Ldind_U1_70() { return &___Ldind_U1_70; }
	inline void set_Ldind_U1_70(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Ldind_U1_70 = value;
	}

	inline static int32_t get_offset_of_Ldind_I2_71() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Ldind_I2_71)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Ldind_I2_71() const { return ___Ldind_I2_71; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Ldind_I2_71() { return &___Ldind_I2_71; }
	inline void set_Ldind_I2_71(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Ldind_I2_71 = value;
	}

	inline static int32_t get_offset_of_Ldind_U2_72() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Ldind_U2_72)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Ldind_U2_72() const { return ___Ldind_U2_72; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Ldind_U2_72() { return &___Ldind_U2_72; }
	inline void set_Ldind_U2_72(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Ldind_U2_72 = value;
	}

	inline static int32_t get_offset_of_Ldind_I4_73() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Ldind_I4_73)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Ldind_I4_73() const { return ___Ldind_I4_73; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Ldind_I4_73() { return &___Ldind_I4_73; }
	inline void set_Ldind_I4_73(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Ldind_I4_73 = value;
	}

	inline static int32_t get_offset_of_Ldind_U4_74() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Ldind_U4_74)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Ldind_U4_74() const { return ___Ldind_U4_74; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Ldind_U4_74() { return &___Ldind_U4_74; }
	inline void set_Ldind_U4_74(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Ldind_U4_74 = value;
	}

	inline static int32_t get_offset_of_Ldind_I8_75() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Ldind_I8_75)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Ldind_I8_75() const { return ___Ldind_I8_75; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Ldind_I8_75() { return &___Ldind_I8_75; }
	inline void set_Ldind_I8_75(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Ldind_I8_75 = value;
	}

	inline static int32_t get_offset_of_Ldind_I_76() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Ldind_I_76)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Ldind_I_76() const { return ___Ldind_I_76; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Ldind_I_76() { return &___Ldind_I_76; }
	inline void set_Ldind_I_76(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Ldind_I_76 = value;
	}

	inline static int32_t get_offset_of_Ldind_R4_77() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Ldind_R4_77)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Ldind_R4_77() const { return ___Ldind_R4_77; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Ldind_R4_77() { return &___Ldind_R4_77; }
	inline void set_Ldind_R4_77(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Ldind_R4_77 = value;
	}

	inline static int32_t get_offset_of_Ldind_R8_78() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Ldind_R8_78)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Ldind_R8_78() const { return ___Ldind_R8_78; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Ldind_R8_78() { return &___Ldind_R8_78; }
	inline void set_Ldind_R8_78(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Ldind_R8_78 = value;
	}

	inline static int32_t get_offset_of_Ldind_Ref_79() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Ldind_Ref_79)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Ldind_Ref_79() const { return ___Ldind_Ref_79; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Ldind_Ref_79() { return &___Ldind_Ref_79; }
	inline void set_Ldind_Ref_79(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Ldind_Ref_79 = value;
	}

	inline static int32_t get_offset_of_Stind_Ref_80() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Stind_Ref_80)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Stind_Ref_80() const { return ___Stind_Ref_80; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Stind_Ref_80() { return &___Stind_Ref_80; }
	inline void set_Stind_Ref_80(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Stind_Ref_80 = value;
	}

	inline static int32_t get_offset_of_Stind_I1_81() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Stind_I1_81)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Stind_I1_81() const { return ___Stind_I1_81; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Stind_I1_81() { return &___Stind_I1_81; }
	inline void set_Stind_I1_81(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Stind_I1_81 = value;
	}

	inline static int32_t get_offset_of_Stind_I2_82() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Stind_I2_82)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Stind_I2_82() const { return ___Stind_I2_82; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Stind_I2_82() { return &___Stind_I2_82; }
	inline void set_Stind_I2_82(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Stind_I2_82 = value;
	}

	inline static int32_t get_offset_of_Stind_I4_83() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Stind_I4_83)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Stind_I4_83() const { return ___Stind_I4_83; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Stind_I4_83() { return &___Stind_I4_83; }
	inline void set_Stind_I4_83(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Stind_I4_83 = value;
	}

	inline static int32_t get_offset_of_Stind_I8_84() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Stind_I8_84)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Stind_I8_84() const { return ___Stind_I8_84; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Stind_I8_84() { return &___Stind_I8_84; }
	inline void set_Stind_I8_84(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Stind_I8_84 = value;
	}

	inline static int32_t get_offset_of_Stind_R4_85() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Stind_R4_85)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Stind_R4_85() const { return ___Stind_R4_85; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Stind_R4_85() { return &___Stind_R4_85; }
	inline void set_Stind_R4_85(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Stind_R4_85 = value;
	}

	inline static int32_t get_offset_of_Stind_R8_86() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Stind_R8_86)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Stind_R8_86() const { return ___Stind_R8_86; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Stind_R8_86() { return &___Stind_R8_86; }
	inline void set_Stind_R8_86(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Stind_R8_86 = value;
	}

	inline static int32_t get_offset_of_Add_87() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Add_87)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Add_87() const { return ___Add_87; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Add_87() { return &___Add_87; }
	inline void set_Add_87(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Add_87 = value;
	}

	inline static int32_t get_offset_of_Sub_88() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Sub_88)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Sub_88() const { return ___Sub_88; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Sub_88() { return &___Sub_88; }
	inline void set_Sub_88(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Sub_88 = value;
	}

	inline static int32_t get_offset_of_Mul_89() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Mul_89)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Mul_89() const { return ___Mul_89; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Mul_89() { return &___Mul_89; }
	inline void set_Mul_89(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Mul_89 = value;
	}

	inline static int32_t get_offset_of_Div_90() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Div_90)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Div_90() const { return ___Div_90; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Div_90() { return &___Div_90; }
	inline void set_Div_90(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Div_90 = value;
	}

	inline static int32_t get_offset_of_Div_Un_91() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Div_Un_91)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Div_Un_91() const { return ___Div_Un_91; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Div_Un_91() { return &___Div_Un_91; }
	inline void set_Div_Un_91(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Div_Un_91 = value;
	}

	inline static int32_t get_offset_of_Rem_92() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Rem_92)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Rem_92() const { return ___Rem_92; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Rem_92() { return &___Rem_92; }
	inline void set_Rem_92(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Rem_92 = value;
	}

	inline static int32_t get_offset_of_Rem_Un_93() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Rem_Un_93)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Rem_Un_93() const { return ___Rem_Un_93; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Rem_Un_93() { return &___Rem_Un_93; }
	inline void set_Rem_Un_93(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Rem_Un_93 = value;
	}

	inline static int32_t get_offset_of_And_94() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___And_94)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_And_94() const { return ___And_94; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_And_94() { return &___And_94; }
	inline void set_And_94(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___And_94 = value;
	}

	inline static int32_t get_offset_of_Or_95() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Or_95)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Or_95() const { return ___Or_95; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Or_95() { return &___Or_95; }
	inline void set_Or_95(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Or_95 = value;
	}

	inline static int32_t get_offset_of_Xor_96() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Xor_96)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Xor_96() const { return ___Xor_96; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Xor_96() { return &___Xor_96; }
	inline void set_Xor_96(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Xor_96 = value;
	}

	inline static int32_t get_offset_of_Shl_97() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Shl_97)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Shl_97() const { return ___Shl_97; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Shl_97() { return &___Shl_97; }
	inline void set_Shl_97(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Shl_97 = value;
	}

	inline static int32_t get_offset_of_Shr_98() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Shr_98)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Shr_98() const { return ___Shr_98; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Shr_98() { return &___Shr_98; }
	inline void set_Shr_98(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Shr_98 = value;
	}

	inline static int32_t get_offset_of_Shr_Un_99() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Shr_Un_99)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Shr_Un_99() const { return ___Shr_Un_99; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Shr_Un_99() { return &___Shr_Un_99; }
	inline void set_Shr_Un_99(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Shr_Un_99 = value;
	}

	inline static int32_t get_offset_of_Neg_100() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Neg_100)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Neg_100() const { return ___Neg_100; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Neg_100() { return &___Neg_100; }
	inline void set_Neg_100(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Neg_100 = value;
	}

	inline static int32_t get_offset_of_Not_101() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Not_101)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Not_101() const { return ___Not_101; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Not_101() { return &___Not_101; }
	inline void set_Not_101(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Not_101 = value;
	}

	inline static int32_t get_offset_of_Conv_I1_102() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Conv_I1_102)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Conv_I1_102() const { return ___Conv_I1_102; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Conv_I1_102() { return &___Conv_I1_102; }
	inline void set_Conv_I1_102(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Conv_I1_102 = value;
	}

	inline static int32_t get_offset_of_Conv_I2_103() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Conv_I2_103)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Conv_I2_103() const { return ___Conv_I2_103; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Conv_I2_103() { return &___Conv_I2_103; }
	inline void set_Conv_I2_103(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Conv_I2_103 = value;
	}

	inline static int32_t get_offset_of_Conv_I4_104() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Conv_I4_104)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Conv_I4_104() const { return ___Conv_I4_104; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Conv_I4_104() { return &___Conv_I4_104; }
	inline void set_Conv_I4_104(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Conv_I4_104 = value;
	}

	inline static int32_t get_offset_of_Conv_I8_105() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Conv_I8_105)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Conv_I8_105() const { return ___Conv_I8_105; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Conv_I8_105() { return &___Conv_I8_105; }
	inline void set_Conv_I8_105(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Conv_I8_105 = value;
	}

	inline static int32_t get_offset_of_Conv_R4_106() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Conv_R4_106)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Conv_R4_106() const { return ___Conv_R4_106; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Conv_R4_106() { return &___Conv_R4_106; }
	inline void set_Conv_R4_106(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Conv_R4_106 = value;
	}

	inline static int32_t get_offset_of_Conv_R8_107() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Conv_R8_107)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Conv_R8_107() const { return ___Conv_R8_107; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Conv_R8_107() { return &___Conv_R8_107; }
	inline void set_Conv_R8_107(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Conv_R8_107 = value;
	}

	inline static int32_t get_offset_of_Conv_U4_108() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Conv_U4_108)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Conv_U4_108() const { return ___Conv_U4_108; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Conv_U4_108() { return &___Conv_U4_108; }
	inline void set_Conv_U4_108(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Conv_U4_108 = value;
	}

	inline static int32_t get_offset_of_Conv_U8_109() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Conv_U8_109)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Conv_U8_109() const { return ___Conv_U8_109; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Conv_U8_109() { return &___Conv_U8_109; }
	inline void set_Conv_U8_109(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Conv_U8_109 = value;
	}

	inline static int32_t get_offset_of_Callvirt_110() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Callvirt_110)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Callvirt_110() const { return ___Callvirt_110; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Callvirt_110() { return &___Callvirt_110; }
	inline void set_Callvirt_110(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Callvirt_110 = value;
	}

	inline static int32_t get_offset_of_Cpobj_111() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Cpobj_111)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Cpobj_111() const { return ___Cpobj_111; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Cpobj_111() { return &___Cpobj_111; }
	inline void set_Cpobj_111(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Cpobj_111 = value;
	}

	inline static int32_t get_offset_of_Ldobj_112() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Ldobj_112)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Ldobj_112() const { return ___Ldobj_112; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Ldobj_112() { return &___Ldobj_112; }
	inline void set_Ldobj_112(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Ldobj_112 = value;
	}

	inline static int32_t get_offset_of_Ldstr_113() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Ldstr_113)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Ldstr_113() const { return ___Ldstr_113; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Ldstr_113() { return &___Ldstr_113; }
	inline void set_Ldstr_113(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Ldstr_113 = value;
	}

	inline static int32_t get_offset_of_Newobj_114() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Newobj_114)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Newobj_114() const { return ___Newobj_114; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Newobj_114() { return &___Newobj_114; }
	inline void set_Newobj_114(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Newobj_114 = value;
	}

	inline static int32_t get_offset_of_Castclass_115() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Castclass_115)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Castclass_115() const { return ___Castclass_115; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Castclass_115() { return &___Castclass_115; }
	inline void set_Castclass_115(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Castclass_115 = value;
	}

	inline static int32_t get_offset_of_Isinst_116() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Isinst_116)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Isinst_116() const { return ___Isinst_116; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Isinst_116() { return &___Isinst_116; }
	inline void set_Isinst_116(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Isinst_116 = value;
	}

	inline static int32_t get_offset_of_Conv_R_Un_117() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Conv_R_Un_117)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Conv_R_Un_117() const { return ___Conv_R_Un_117; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Conv_R_Un_117() { return &___Conv_R_Un_117; }
	inline void set_Conv_R_Un_117(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Conv_R_Un_117 = value;
	}

	inline static int32_t get_offset_of_Unbox_118() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Unbox_118)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Unbox_118() const { return ___Unbox_118; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Unbox_118() { return &___Unbox_118; }
	inline void set_Unbox_118(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Unbox_118 = value;
	}

	inline static int32_t get_offset_of_Throw_119() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Throw_119)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Throw_119() const { return ___Throw_119; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Throw_119() { return &___Throw_119; }
	inline void set_Throw_119(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Throw_119 = value;
	}

	inline static int32_t get_offset_of_Ldfld_120() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Ldfld_120)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Ldfld_120() const { return ___Ldfld_120; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Ldfld_120() { return &___Ldfld_120; }
	inline void set_Ldfld_120(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Ldfld_120 = value;
	}

	inline static int32_t get_offset_of_Ldflda_121() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Ldflda_121)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Ldflda_121() const { return ___Ldflda_121; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Ldflda_121() { return &___Ldflda_121; }
	inline void set_Ldflda_121(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Ldflda_121 = value;
	}

	inline static int32_t get_offset_of_Stfld_122() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Stfld_122)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Stfld_122() const { return ___Stfld_122; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Stfld_122() { return &___Stfld_122; }
	inline void set_Stfld_122(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Stfld_122 = value;
	}

	inline static int32_t get_offset_of_Ldsfld_123() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Ldsfld_123)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Ldsfld_123() const { return ___Ldsfld_123; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Ldsfld_123() { return &___Ldsfld_123; }
	inline void set_Ldsfld_123(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Ldsfld_123 = value;
	}

	inline static int32_t get_offset_of_Ldsflda_124() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Ldsflda_124)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Ldsflda_124() const { return ___Ldsflda_124; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Ldsflda_124() { return &___Ldsflda_124; }
	inline void set_Ldsflda_124(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Ldsflda_124 = value;
	}

	inline static int32_t get_offset_of_Stsfld_125() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Stsfld_125)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Stsfld_125() const { return ___Stsfld_125; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Stsfld_125() { return &___Stsfld_125; }
	inline void set_Stsfld_125(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Stsfld_125 = value;
	}

	inline static int32_t get_offset_of_Stobj_126() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Stobj_126)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Stobj_126() const { return ___Stobj_126; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Stobj_126() { return &___Stobj_126; }
	inline void set_Stobj_126(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Stobj_126 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_I1_Un_127() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Conv_Ovf_I1_Un_127)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Conv_Ovf_I1_Un_127() const { return ___Conv_Ovf_I1_Un_127; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Conv_Ovf_I1_Un_127() { return &___Conv_Ovf_I1_Un_127; }
	inline void set_Conv_Ovf_I1_Un_127(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Conv_Ovf_I1_Un_127 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_I2_Un_128() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Conv_Ovf_I2_Un_128)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Conv_Ovf_I2_Un_128() const { return ___Conv_Ovf_I2_Un_128; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Conv_Ovf_I2_Un_128() { return &___Conv_Ovf_I2_Un_128; }
	inline void set_Conv_Ovf_I2_Un_128(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Conv_Ovf_I2_Un_128 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_I4_Un_129() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Conv_Ovf_I4_Un_129)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Conv_Ovf_I4_Un_129() const { return ___Conv_Ovf_I4_Un_129; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Conv_Ovf_I4_Un_129() { return &___Conv_Ovf_I4_Un_129; }
	inline void set_Conv_Ovf_I4_Un_129(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Conv_Ovf_I4_Un_129 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_I8_Un_130() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Conv_Ovf_I8_Un_130)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Conv_Ovf_I8_Un_130() const { return ___Conv_Ovf_I8_Un_130; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Conv_Ovf_I8_Un_130() { return &___Conv_Ovf_I8_Un_130; }
	inline void set_Conv_Ovf_I8_Un_130(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Conv_Ovf_I8_Un_130 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_U1_Un_131() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Conv_Ovf_U1_Un_131)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Conv_Ovf_U1_Un_131() const { return ___Conv_Ovf_U1_Un_131; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Conv_Ovf_U1_Un_131() { return &___Conv_Ovf_U1_Un_131; }
	inline void set_Conv_Ovf_U1_Un_131(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Conv_Ovf_U1_Un_131 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_U2_Un_132() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Conv_Ovf_U2_Un_132)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Conv_Ovf_U2_Un_132() const { return ___Conv_Ovf_U2_Un_132; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Conv_Ovf_U2_Un_132() { return &___Conv_Ovf_U2_Un_132; }
	inline void set_Conv_Ovf_U2_Un_132(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Conv_Ovf_U2_Un_132 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_U4_Un_133() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Conv_Ovf_U4_Un_133)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Conv_Ovf_U4_Un_133() const { return ___Conv_Ovf_U4_Un_133; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Conv_Ovf_U4_Un_133() { return &___Conv_Ovf_U4_Un_133; }
	inline void set_Conv_Ovf_U4_Un_133(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Conv_Ovf_U4_Un_133 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_U8_Un_134() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Conv_Ovf_U8_Un_134)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Conv_Ovf_U8_Un_134() const { return ___Conv_Ovf_U8_Un_134; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Conv_Ovf_U8_Un_134() { return &___Conv_Ovf_U8_Un_134; }
	inline void set_Conv_Ovf_U8_Un_134(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Conv_Ovf_U8_Un_134 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_I_Un_135() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Conv_Ovf_I_Un_135)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Conv_Ovf_I_Un_135() const { return ___Conv_Ovf_I_Un_135; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Conv_Ovf_I_Un_135() { return &___Conv_Ovf_I_Un_135; }
	inline void set_Conv_Ovf_I_Un_135(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Conv_Ovf_I_Un_135 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_U_Un_136() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Conv_Ovf_U_Un_136)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Conv_Ovf_U_Un_136() const { return ___Conv_Ovf_U_Un_136; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Conv_Ovf_U_Un_136() { return &___Conv_Ovf_U_Un_136; }
	inline void set_Conv_Ovf_U_Un_136(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Conv_Ovf_U_Un_136 = value;
	}

	inline static int32_t get_offset_of_Box_137() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Box_137)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Box_137() const { return ___Box_137; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Box_137() { return &___Box_137; }
	inline void set_Box_137(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Box_137 = value;
	}

	inline static int32_t get_offset_of_Newarr_138() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Newarr_138)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Newarr_138() const { return ___Newarr_138; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Newarr_138() { return &___Newarr_138; }
	inline void set_Newarr_138(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Newarr_138 = value;
	}

	inline static int32_t get_offset_of_Ldlen_139() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Ldlen_139)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Ldlen_139() const { return ___Ldlen_139; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Ldlen_139() { return &___Ldlen_139; }
	inline void set_Ldlen_139(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Ldlen_139 = value;
	}

	inline static int32_t get_offset_of_Ldelema_140() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Ldelema_140)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Ldelema_140() const { return ___Ldelema_140; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Ldelema_140() { return &___Ldelema_140; }
	inline void set_Ldelema_140(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Ldelema_140 = value;
	}

	inline static int32_t get_offset_of_Ldelem_I1_141() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Ldelem_I1_141)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Ldelem_I1_141() const { return ___Ldelem_I1_141; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Ldelem_I1_141() { return &___Ldelem_I1_141; }
	inline void set_Ldelem_I1_141(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Ldelem_I1_141 = value;
	}

	inline static int32_t get_offset_of_Ldelem_U1_142() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Ldelem_U1_142)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Ldelem_U1_142() const { return ___Ldelem_U1_142; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Ldelem_U1_142() { return &___Ldelem_U1_142; }
	inline void set_Ldelem_U1_142(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Ldelem_U1_142 = value;
	}

	inline static int32_t get_offset_of_Ldelem_I2_143() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Ldelem_I2_143)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Ldelem_I2_143() const { return ___Ldelem_I2_143; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Ldelem_I2_143() { return &___Ldelem_I2_143; }
	inline void set_Ldelem_I2_143(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Ldelem_I2_143 = value;
	}

	inline static int32_t get_offset_of_Ldelem_U2_144() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Ldelem_U2_144)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Ldelem_U2_144() const { return ___Ldelem_U2_144; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Ldelem_U2_144() { return &___Ldelem_U2_144; }
	inline void set_Ldelem_U2_144(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Ldelem_U2_144 = value;
	}

	inline static int32_t get_offset_of_Ldelem_I4_145() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Ldelem_I4_145)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Ldelem_I4_145() const { return ___Ldelem_I4_145; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Ldelem_I4_145() { return &___Ldelem_I4_145; }
	inline void set_Ldelem_I4_145(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Ldelem_I4_145 = value;
	}

	inline static int32_t get_offset_of_Ldelem_U4_146() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Ldelem_U4_146)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Ldelem_U4_146() const { return ___Ldelem_U4_146; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Ldelem_U4_146() { return &___Ldelem_U4_146; }
	inline void set_Ldelem_U4_146(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Ldelem_U4_146 = value;
	}

	inline static int32_t get_offset_of_Ldelem_I8_147() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Ldelem_I8_147)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Ldelem_I8_147() const { return ___Ldelem_I8_147; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Ldelem_I8_147() { return &___Ldelem_I8_147; }
	inline void set_Ldelem_I8_147(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Ldelem_I8_147 = value;
	}

	inline static int32_t get_offset_of_Ldelem_I_148() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Ldelem_I_148)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Ldelem_I_148() const { return ___Ldelem_I_148; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Ldelem_I_148() { return &___Ldelem_I_148; }
	inline void set_Ldelem_I_148(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Ldelem_I_148 = value;
	}

	inline static int32_t get_offset_of_Ldelem_R4_149() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Ldelem_R4_149)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Ldelem_R4_149() const { return ___Ldelem_R4_149; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Ldelem_R4_149() { return &___Ldelem_R4_149; }
	inline void set_Ldelem_R4_149(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Ldelem_R4_149 = value;
	}

	inline static int32_t get_offset_of_Ldelem_R8_150() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Ldelem_R8_150)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Ldelem_R8_150() const { return ___Ldelem_R8_150; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Ldelem_R8_150() { return &___Ldelem_R8_150; }
	inline void set_Ldelem_R8_150(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Ldelem_R8_150 = value;
	}

	inline static int32_t get_offset_of_Ldelem_Ref_151() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Ldelem_Ref_151)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Ldelem_Ref_151() const { return ___Ldelem_Ref_151; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Ldelem_Ref_151() { return &___Ldelem_Ref_151; }
	inline void set_Ldelem_Ref_151(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Ldelem_Ref_151 = value;
	}

	inline static int32_t get_offset_of_Stelem_I_152() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Stelem_I_152)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Stelem_I_152() const { return ___Stelem_I_152; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Stelem_I_152() { return &___Stelem_I_152; }
	inline void set_Stelem_I_152(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Stelem_I_152 = value;
	}

	inline static int32_t get_offset_of_Stelem_I1_153() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Stelem_I1_153)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Stelem_I1_153() const { return ___Stelem_I1_153; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Stelem_I1_153() { return &___Stelem_I1_153; }
	inline void set_Stelem_I1_153(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Stelem_I1_153 = value;
	}

	inline static int32_t get_offset_of_Stelem_I2_154() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Stelem_I2_154)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Stelem_I2_154() const { return ___Stelem_I2_154; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Stelem_I2_154() { return &___Stelem_I2_154; }
	inline void set_Stelem_I2_154(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Stelem_I2_154 = value;
	}

	inline static int32_t get_offset_of_Stelem_I4_155() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Stelem_I4_155)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Stelem_I4_155() const { return ___Stelem_I4_155; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Stelem_I4_155() { return &___Stelem_I4_155; }
	inline void set_Stelem_I4_155(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Stelem_I4_155 = value;
	}

	inline static int32_t get_offset_of_Stelem_I8_156() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Stelem_I8_156)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Stelem_I8_156() const { return ___Stelem_I8_156; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Stelem_I8_156() { return &___Stelem_I8_156; }
	inline void set_Stelem_I8_156(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Stelem_I8_156 = value;
	}

	inline static int32_t get_offset_of_Stelem_R4_157() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Stelem_R4_157)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Stelem_R4_157() const { return ___Stelem_R4_157; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Stelem_R4_157() { return &___Stelem_R4_157; }
	inline void set_Stelem_R4_157(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Stelem_R4_157 = value;
	}

	inline static int32_t get_offset_of_Stelem_R8_158() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Stelem_R8_158)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Stelem_R8_158() const { return ___Stelem_R8_158; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Stelem_R8_158() { return &___Stelem_R8_158; }
	inline void set_Stelem_R8_158(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Stelem_R8_158 = value;
	}

	inline static int32_t get_offset_of_Stelem_Ref_159() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Stelem_Ref_159)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Stelem_Ref_159() const { return ___Stelem_Ref_159; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Stelem_Ref_159() { return &___Stelem_Ref_159; }
	inline void set_Stelem_Ref_159(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Stelem_Ref_159 = value;
	}

	inline static int32_t get_offset_of_Ldelem_160() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Ldelem_160)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Ldelem_160() const { return ___Ldelem_160; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Ldelem_160() { return &___Ldelem_160; }
	inline void set_Ldelem_160(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Ldelem_160 = value;
	}

	inline static int32_t get_offset_of_Stelem_161() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Stelem_161)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Stelem_161() const { return ___Stelem_161; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Stelem_161() { return &___Stelem_161; }
	inline void set_Stelem_161(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Stelem_161 = value;
	}

	inline static int32_t get_offset_of_Unbox_Any_162() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Unbox_Any_162)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Unbox_Any_162() const { return ___Unbox_Any_162; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Unbox_Any_162() { return &___Unbox_Any_162; }
	inline void set_Unbox_Any_162(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Unbox_Any_162 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_I1_163() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Conv_Ovf_I1_163)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Conv_Ovf_I1_163() const { return ___Conv_Ovf_I1_163; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Conv_Ovf_I1_163() { return &___Conv_Ovf_I1_163; }
	inline void set_Conv_Ovf_I1_163(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Conv_Ovf_I1_163 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_U1_164() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Conv_Ovf_U1_164)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Conv_Ovf_U1_164() const { return ___Conv_Ovf_U1_164; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Conv_Ovf_U1_164() { return &___Conv_Ovf_U1_164; }
	inline void set_Conv_Ovf_U1_164(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Conv_Ovf_U1_164 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_I2_165() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Conv_Ovf_I2_165)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Conv_Ovf_I2_165() const { return ___Conv_Ovf_I2_165; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Conv_Ovf_I2_165() { return &___Conv_Ovf_I2_165; }
	inline void set_Conv_Ovf_I2_165(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Conv_Ovf_I2_165 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_U2_166() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Conv_Ovf_U2_166)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Conv_Ovf_U2_166() const { return ___Conv_Ovf_U2_166; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Conv_Ovf_U2_166() { return &___Conv_Ovf_U2_166; }
	inline void set_Conv_Ovf_U2_166(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Conv_Ovf_U2_166 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_I4_167() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Conv_Ovf_I4_167)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Conv_Ovf_I4_167() const { return ___Conv_Ovf_I4_167; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Conv_Ovf_I4_167() { return &___Conv_Ovf_I4_167; }
	inline void set_Conv_Ovf_I4_167(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Conv_Ovf_I4_167 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_U4_168() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Conv_Ovf_U4_168)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Conv_Ovf_U4_168() const { return ___Conv_Ovf_U4_168; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Conv_Ovf_U4_168() { return &___Conv_Ovf_U4_168; }
	inline void set_Conv_Ovf_U4_168(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Conv_Ovf_U4_168 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_I8_169() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Conv_Ovf_I8_169)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Conv_Ovf_I8_169() const { return ___Conv_Ovf_I8_169; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Conv_Ovf_I8_169() { return &___Conv_Ovf_I8_169; }
	inline void set_Conv_Ovf_I8_169(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Conv_Ovf_I8_169 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_U8_170() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Conv_Ovf_U8_170)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Conv_Ovf_U8_170() const { return ___Conv_Ovf_U8_170; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Conv_Ovf_U8_170() { return &___Conv_Ovf_U8_170; }
	inline void set_Conv_Ovf_U8_170(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Conv_Ovf_U8_170 = value;
	}

	inline static int32_t get_offset_of_Refanyval_171() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Refanyval_171)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Refanyval_171() const { return ___Refanyval_171; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Refanyval_171() { return &___Refanyval_171; }
	inline void set_Refanyval_171(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Refanyval_171 = value;
	}

	inline static int32_t get_offset_of_Ckfinite_172() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Ckfinite_172)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Ckfinite_172() const { return ___Ckfinite_172; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Ckfinite_172() { return &___Ckfinite_172; }
	inline void set_Ckfinite_172(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Ckfinite_172 = value;
	}

	inline static int32_t get_offset_of_Mkrefany_173() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Mkrefany_173)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Mkrefany_173() const { return ___Mkrefany_173; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Mkrefany_173() { return &___Mkrefany_173; }
	inline void set_Mkrefany_173(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Mkrefany_173 = value;
	}

	inline static int32_t get_offset_of_Ldtoken_174() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Ldtoken_174)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Ldtoken_174() const { return ___Ldtoken_174; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Ldtoken_174() { return &___Ldtoken_174; }
	inline void set_Ldtoken_174(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Ldtoken_174 = value;
	}

	inline static int32_t get_offset_of_Conv_U2_175() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Conv_U2_175)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Conv_U2_175() const { return ___Conv_U2_175; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Conv_U2_175() { return &___Conv_U2_175; }
	inline void set_Conv_U2_175(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Conv_U2_175 = value;
	}

	inline static int32_t get_offset_of_Conv_U1_176() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Conv_U1_176)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Conv_U1_176() const { return ___Conv_U1_176; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Conv_U1_176() { return &___Conv_U1_176; }
	inline void set_Conv_U1_176(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Conv_U1_176 = value;
	}

	inline static int32_t get_offset_of_Conv_I_177() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Conv_I_177)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Conv_I_177() const { return ___Conv_I_177; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Conv_I_177() { return &___Conv_I_177; }
	inline void set_Conv_I_177(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Conv_I_177 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_I_178() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Conv_Ovf_I_178)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Conv_Ovf_I_178() const { return ___Conv_Ovf_I_178; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Conv_Ovf_I_178() { return &___Conv_Ovf_I_178; }
	inline void set_Conv_Ovf_I_178(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Conv_Ovf_I_178 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_U_179() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Conv_Ovf_U_179)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Conv_Ovf_U_179() const { return ___Conv_Ovf_U_179; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Conv_Ovf_U_179() { return &___Conv_Ovf_U_179; }
	inline void set_Conv_Ovf_U_179(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Conv_Ovf_U_179 = value;
	}

	inline static int32_t get_offset_of_Add_Ovf_180() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Add_Ovf_180)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Add_Ovf_180() const { return ___Add_Ovf_180; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Add_Ovf_180() { return &___Add_Ovf_180; }
	inline void set_Add_Ovf_180(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Add_Ovf_180 = value;
	}

	inline static int32_t get_offset_of_Add_Ovf_Un_181() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Add_Ovf_Un_181)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Add_Ovf_Un_181() const { return ___Add_Ovf_Un_181; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Add_Ovf_Un_181() { return &___Add_Ovf_Un_181; }
	inline void set_Add_Ovf_Un_181(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Add_Ovf_Un_181 = value;
	}

	inline static int32_t get_offset_of_Mul_Ovf_182() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Mul_Ovf_182)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Mul_Ovf_182() const { return ___Mul_Ovf_182; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Mul_Ovf_182() { return &___Mul_Ovf_182; }
	inline void set_Mul_Ovf_182(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Mul_Ovf_182 = value;
	}

	inline static int32_t get_offset_of_Mul_Ovf_Un_183() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Mul_Ovf_Un_183)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Mul_Ovf_Un_183() const { return ___Mul_Ovf_Un_183; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Mul_Ovf_Un_183() { return &___Mul_Ovf_Un_183; }
	inline void set_Mul_Ovf_Un_183(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Mul_Ovf_Un_183 = value;
	}

	inline static int32_t get_offset_of_Sub_Ovf_184() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Sub_Ovf_184)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Sub_Ovf_184() const { return ___Sub_Ovf_184; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Sub_Ovf_184() { return &___Sub_Ovf_184; }
	inline void set_Sub_Ovf_184(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Sub_Ovf_184 = value;
	}

	inline static int32_t get_offset_of_Sub_Ovf_Un_185() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Sub_Ovf_Un_185)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Sub_Ovf_Un_185() const { return ___Sub_Ovf_Un_185; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Sub_Ovf_Un_185() { return &___Sub_Ovf_Un_185; }
	inline void set_Sub_Ovf_Un_185(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Sub_Ovf_Un_185 = value;
	}

	inline static int32_t get_offset_of_Endfinally_186() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Endfinally_186)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Endfinally_186() const { return ___Endfinally_186; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Endfinally_186() { return &___Endfinally_186; }
	inline void set_Endfinally_186(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Endfinally_186 = value;
	}

	inline static int32_t get_offset_of_Leave_187() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Leave_187)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Leave_187() const { return ___Leave_187; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Leave_187() { return &___Leave_187; }
	inline void set_Leave_187(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Leave_187 = value;
	}

	inline static int32_t get_offset_of_Leave_S_188() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Leave_S_188)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Leave_S_188() const { return ___Leave_S_188; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Leave_S_188() { return &___Leave_S_188; }
	inline void set_Leave_S_188(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Leave_S_188 = value;
	}

	inline static int32_t get_offset_of_Stind_I_189() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Stind_I_189)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Stind_I_189() const { return ___Stind_I_189; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Stind_I_189() { return &___Stind_I_189; }
	inline void set_Stind_I_189(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Stind_I_189 = value;
	}

	inline static int32_t get_offset_of_Conv_U_190() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Conv_U_190)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Conv_U_190() const { return ___Conv_U_190; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Conv_U_190() { return &___Conv_U_190; }
	inline void set_Conv_U_190(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Conv_U_190 = value;
	}

	inline static int32_t get_offset_of_Prefix7_191() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Prefix7_191)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Prefix7_191() const { return ___Prefix7_191; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Prefix7_191() { return &___Prefix7_191; }
	inline void set_Prefix7_191(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Prefix7_191 = value;
	}

	inline static int32_t get_offset_of_Prefix6_192() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Prefix6_192)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Prefix6_192() const { return ___Prefix6_192; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Prefix6_192() { return &___Prefix6_192; }
	inline void set_Prefix6_192(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Prefix6_192 = value;
	}

	inline static int32_t get_offset_of_Prefix5_193() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Prefix5_193)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Prefix5_193() const { return ___Prefix5_193; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Prefix5_193() { return &___Prefix5_193; }
	inline void set_Prefix5_193(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Prefix5_193 = value;
	}

	inline static int32_t get_offset_of_Prefix4_194() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Prefix4_194)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Prefix4_194() const { return ___Prefix4_194; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Prefix4_194() { return &___Prefix4_194; }
	inline void set_Prefix4_194(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Prefix4_194 = value;
	}

	inline static int32_t get_offset_of_Prefix3_195() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Prefix3_195)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Prefix3_195() const { return ___Prefix3_195; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Prefix3_195() { return &___Prefix3_195; }
	inline void set_Prefix3_195(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Prefix3_195 = value;
	}

	inline static int32_t get_offset_of_Prefix2_196() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Prefix2_196)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Prefix2_196() const { return ___Prefix2_196; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Prefix2_196() { return &___Prefix2_196; }
	inline void set_Prefix2_196(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Prefix2_196 = value;
	}

	inline static int32_t get_offset_of_Prefix1_197() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Prefix1_197)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Prefix1_197() const { return ___Prefix1_197; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Prefix1_197() { return &___Prefix1_197; }
	inline void set_Prefix1_197(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Prefix1_197 = value;
	}

	inline static int32_t get_offset_of_Prefixref_198() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Prefixref_198)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Prefixref_198() const { return ___Prefixref_198; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Prefixref_198() { return &___Prefixref_198; }
	inline void set_Prefixref_198(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Prefixref_198 = value;
	}

	inline static int32_t get_offset_of_Arglist_199() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Arglist_199)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Arglist_199() const { return ___Arglist_199; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Arglist_199() { return &___Arglist_199; }
	inline void set_Arglist_199(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Arglist_199 = value;
	}

	inline static int32_t get_offset_of_Ceq_200() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Ceq_200)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Ceq_200() const { return ___Ceq_200; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Ceq_200() { return &___Ceq_200; }
	inline void set_Ceq_200(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Ceq_200 = value;
	}

	inline static int32_t get_offset_of_Cgt_201() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Cgt_201)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Cgt_201() const { return ___Cgt_201; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Cgt_201() { return &___Cgt_201; }
	inline void set_Cgt_201(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Cgt_201 = value;
	}

	inline static int32_t get_offset_of_Cgt_Un_202() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Cgt_Un_202)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Cgt_Un_202() const { return ___Cgt_Un_202; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Cgt_Un_202() { return &___Cgt_Un_202; }
	inline void set_Cgt_Un_202(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Cgt_Un_202 = value;
	}

	inline static int32_t get_offset_of_Clt_203() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Clt_203)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Clt_203() const { return ___Clt_203; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Clt_203() { return &___Clt_203; }
	inline void set_Clt_203(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Clt_203 = value;
	}

	inline static int32_t get_offset_of_Clt_Un_204() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Clt_Un_204)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Clt_Un_204() const { return ___Clt_Un_204; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Clt_Un_204() { return &___Clt_Un_204; }
	inline void set_Clt_Un_204(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Clt_Un_204 = value;
	}

	inline static int32_t get_offset_of_Ldftn_205() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Ldftn_205)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Ldftn_205() const { return ___Ldftn_205; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Ldftn_205() { return &___Ldftn_205; }
	inline void set_Ldftn_205(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Ldftn_205 = value;
	}

	inline static int32_t get_offset_of_Ldvirtftn_206() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Ldvirtftn_206)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Ldvirtftn_206() const { return ___Ldvirtftn_206; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Ldvirtftn_206() { return &___Ldvirtftn_206; }
	inline void set_Ldvirtftn_206(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Ldvirtftn_206 = value;
	}

	inline static int32_t get_offset_of_Ldarg_207() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Ldarg_207)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Ldarg_207() const { return ___Ldarg_207; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Ldarg_207() { return &___Ldarg_207; }
	inline void set_Ldarg_207(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Ldarg_207 = value;
	}

	inline static int32_t get_offset_of_Ldarga_208() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Ldarga_208)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Ldarga_208() const { return ___Ldarga_208; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Ldarga_208() { return &___Ldarga_208; }
	inline void set_Ldarga_208(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Ldarga_208 = value;
	}

	inline static int32_t get_offset_of_Starg_209() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Starg_209)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Starg_209() const { return ___Starg_209; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Starg_209() { return &___Starg_209; }
	inline void set_Starg_209(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Starg_209 = value;
	}

	inline static int32_t get_offset_of_Ldloc_210() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Ldloc_210)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Ldloc_210() const { return ___Ldloc_210; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Ldloc_210() { return &___Ldloc_210; }
	inline void set_Ldloc_210(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Ldloc_210 = value;
	}

	inline static int32_t get_offset_of_Ldloca_211() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Ldloca_211)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Ldloca_211() const { return ___Ldloca_211; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Ldloca_211() { return &___Ldloca_211; }
	inline void set_Ldloca_211(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Ldloca_211 = value;
	}

	inline static int32_t get_offset_of_Stloc_212() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Stloc_212)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Stloc_212() const { return ___Stloc_212; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Stloc_212() { return &___Stloc_212; }
	inline void set_Stloc_212(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Stloc_212 = value;
	}

	inline static int32_t get_offset_of_Localloc_213() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Localloc_213)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Localloc_213() const { return ___Localloc_213; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Localloc_213() { return &___Localloc_213; }
	inline void set_Localloc_213(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Localloc_213 = value;
	}

	inline static int32_t get_offset_of_Endfilter_214() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Endfilter_214)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Endfilter_214() const { return ___Endfilter_214; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Endfilter_214() { return &___Endfilter_214; }
	inline void set_Endfilter_214(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Endfilter_214 = value;
	}

	inline static int32_t get_offset_of_Unaligned_215() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Unaligned_215)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Unaligned_215() const { return ___Unaligned_215; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Unaligned_215() { return &___Unaligned_215; }
	inline void set_Unaligned_215(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Unaligned_215 = value;
	}

	inline static int32_t get_offset_of_Volatile_216() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Volatile_216)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Volatile_216() const { return ___Volatile_216; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Volatile_216() { return &___Volatile_216; }
	inline void set_Volatile_216(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Volatile_216 = value;
	}

	inline static int32_t get_offset_of_Tailcall_217() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Tailcall_217)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Tailcall_217() const { return ___Tailcall_217; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Tailcall_217() { return &___Tailcall_217; }
	inline void set_Tailcall_217(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Tailcall_217 = value;
	}

	inline static int32_t get_offset_of_Initobj_218() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Initobj_218)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Initobj_218() const { return ___Initobj_218; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Initobj_218() { return &___Initobj_218; }
	inline void set_Initobj_218(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Initobj_218 = value;
	}

	inline static int32_t get_offset_of_Constrained_219() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Constrained_219)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Constrained_219() const { return ___Constrained_219; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Constrained_219() { return &___Constrained_219; }
	inline void set_Constrained_219(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Constrained_219 = value;
	}

	inline static int32_t get_offset_of_Cpblk_220() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Cpblk_220)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Cpblk_220() const { return ___Cpblk_220; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Cpblk_220() { return &___Cpblk_220; }
	inline void set_Cpblk_220(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Cpblk_220 = value;
	}

	inline static int32_t get_offset_of_Initblk_221() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Initblk_221)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Initblk_221() const { return ___Initblk_221; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Initblk_221() { return &___Initblk_221; }
	inline void set_Initblk_221(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Initblk_221 = value;
	}

	inline static int32_t get_offset_of_Rethrow_222() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Rethrow_222)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Rethrow_222() const { return ___Rethrow_222; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Rethrow_222() { return &___Rethrow_222; }
	inline void set_Rethrow_222(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Rethrow_222 = value;
	}

	inline static int32_t get_offset_of_Sizeof_223() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Sizeof_223)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Sizeof_223() const { return ___Sizeof_223; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Sizeof_223() { return &___Sizeof_223; }
	inline void set_Sizeof_223(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Sizeof_223 = value;
	}

	inline static int32_t get_offset_of_Refanytype_224() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Refanytype_224)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Refanytype_224() const { return ___Refanytype_224; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Refanytype_224() { return &___Refanytype_224; }
	inline void set_Refanytype_224(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Refanytype_224 = value;
	}

	inline static int32_t get_offset_of_Readonly_225() { return static_cast<int32_t>(offsetof(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields, ___Readonly_225)); }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  get_Readonly_225() const { return ___Readonly_225; }
	inline OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 * get_address_of_Readonly_225() { return &___Readonly_225; }
	inline void set_Readonly_225(OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  value)
	{
		___Readonly_225 = value;
	}
};


// System.Reflection.MemberTypes
struct  MemberTypes_t3FEDC67D8B994D09AF155FFB2CFD26023F245041 
{
public:
	// System.Int32 System.Reflection.MemberTypes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MemberTypes_t3FEDC67D8B994D09AF155FFB2CFD26023F245041, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.MethodInfo
struct  MethodInfo_t  : public MethodBase_t
{
public:

public:
};


// System.Reflection.ParameterAttributes
struct  ParameterAttributes_tF9962395513C2A48CF5AF2F371C66DD52789F110 
{
public:
	// System.Int32 System.Reflection.ParameterAttributes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ParameterAttributes_tF9962395513C2A48CF5AF2F371C66DD52789F110, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.TypeCode
struct  TypeCode_t03ED52F888000DAF40C550C434F29F39A23D61C6 
{
public:
	// System.Int32 System.TypeCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TypeCode_t03ED52F888000DAF40C550C434F29F39A23D61C6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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

// System.Reflection.Emit.DynamicMethod
struct  DynamicMethod_t983501153061387E39AA134BE68EB908A3E92AF3  : public MethodInfo_t
{
public:

public:
};


// System.Reflection.ParameterInfo
struct  ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB  : public RuntimeObject
{
public:
	// System.Type System.Reflection.ParameterInfo::ClassImpl
	Type_t * ___ClassImpl_0;
	// System.Object System.Reflection.ParameterInfo::DefaultValueImpl
	RuntimeObject * ___DefaultValueImpl_1;
	// System.Reflection.MemberInfo System.Reflection.ParameterInfo::MemberImpl
	MemberInfo_t * ___MemberImpl_2;
	// System.String System.Reflection.ParameterInfo::NameImpl
	String_t* ___NameImpl_3;
	// System.Int32 System.Reflection.ParameterInfo::PositionImpl
	int32_t ___PositionImpl_4;
	// System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::AttrsImpl
	int32_t ___AttrsImpl_5;
	// System.Runtime.InteropServices.MarshalAsAttribute System.Reflection.ParameterInfo::marshalAs
	MarshalAsAttribute_t1F5CB9960D7AD6C3305475C98A397BD0B9C64020 * ___marshalAs_6;

public:
	inline static int32_t get_offset_of_ClassImpl_0() { return static_cast<int32_t>(offsetof(ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB, ___ClassImpl_0)); }
	inline Type_t * get_ClassImpl_0() const { return ___ClassImpl_0; }
	inline Type_t ** get_address_of_ClassImpl_0() { return &___ClassImpl_0; }
	inline void set_ClassImpl_0(Type_t * value)
	{
		___ClassImpl_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ClassImpl_0), (void*)value);
	}

	inline static int32_t get_offset_of_DefaultValueImpl_1() { return static_cast<int32_t>(offsetof(ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB, ___DefaultValueImpl_1)); }
	inline RuntimeObject * get_DefaultValueImpl_1() const { return ___DefaultValueImpl_1; }
	inline RuntimeObject ** get_address_of_DefaultValueImpl_1() { return &___DefaultValueImpl_1; }
	inline void set_DefaultValueImpl_1(RuntimeObject * value)
	{
		___DefaultValueImpl_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DefaultValueImpl_1), (void*)value);
	}

	inline static int32_t get_offset_of_MemberImpl_2() { return static_cast<int32_t>(offsetof(ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB, ___MemberImpl_2)); }
	inline MemberInfo_t * get_MemberImpl_2() const { return ___MemberImpl_2; }
	inline MemberInfo_t ** get_address_of_MemberImpl_2() { return &___MemberImpl_2; }
	inline void set_MemberImpl_2(MemberInfo_t * value)
	{
		___MemberImpl_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MemberImpl_2), (void*)value);
	}

	inline static int32_t get_offset_of_NameImpl_3() { return static_cast<int32_t>(offsetof(ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB, ___NameImpl_3)); }
	inline String_t* get_NameImpl_3() const { return ___NameImpl_3; }
	inline String_t** get_address_of_NameImpl_3() { return &___NameImpl_3; }
	inline void set_NameImpl_3(String_t* value)
	{
		___NameImpl_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NameImpl_3), (void*)value);
	}

	inline static int32_t get_offset_of_PositionImpl_4() { return static_cast<int32_t>(offsetof(ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB, ___PositionImpl_4)); }
	inline int32_t get_PositionImpl_4() const { return ___PositionImpl_4; }
	inline int32_t* get_address_of_PositionImpl_4() { return &___PositionImpl_4; }
	inline void set_PositionImpl_4(int32_t value)
	{
		___PositionImpl_4 = value;
	}

	inline static int32_t get_offset_of_AttrsImpl_5() { return static_cast<int32_t>(offsetof(ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB, ___AttrsImpl_5)); }
	inline int32_t get_AttrsImpl_5() const { return ___AttrsImpl_5; }
	inline int32_t* get_address_of_AttrsImpl_5() { return &___AttrsImpl_5; }
	inline void set_AttrsImpl_5(int32_t value)
	{
		___AttrsImpl_5 = value;
	}

	inline static int32_t get_offset_of_marshalAs_6() { return static_cast<int32_t>(offsetof(ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB, ___marshalAs_6)); }
	inline MarshalAsAttribute_t1F5CB9960D7AD6C3305475C98A397BD0B9C64020 * get_marshalAs_6() const { return ___marshalAs_6; }
	inline MarshalAsAttribute_t1F5CB9960D7AD6C3305475C98A397BD0B9C64020 ** get_address_of_marshalAs_6() { return &___marshalAs_6; }
	inline void set_marshalAs_6(MarshalAsAttribute_t1F5CB9960D7AD6C3305475C98A397BD0B9C64020 * value)
	{
		___marshalAs_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___marshalAs_6), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB_marshaled_pinvoke
{
	Type_t * ___ClassImpl_0;
	Il2CppIUnknown* ___DefaultValueImpl_1;
	MemberInfo_t * ___MemberImpl_2;
	char* ___NameImpl_3;
	int32_t ___PositionImpl_4;
	int32_t ___AttrsImpl_5;
	MarshalAsAttribute_t1F5CB9960D7AD6C3305475C98A397BD0B9C64020 * ___marshalAs_6;
};
// Native definition for COM marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB_marshaled_com
{
	Type_t * ___ClassImpl_0;
	Il2CppIUnknown* ___DefaultValueImpl_1;
	MemberInfo_t * ___MemberImpl_2;
	Il2CppChar* ___NameImpl_3;
	int32_t ___PositionImpl_4;
	int32_t ___AttrsImpl_5;
	MarshalAsAttribute_t1F5CB9960D7AD6C3305475C98A397BD0B9C64020 * ___marshalAs_6;
};

// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// Boo.Lang.Runtime.DynamicDispatching.Dispatcher
struct  Dispatcher_tC941911289CA9A4DE7B02505AB9C6F311BF8D3C3  : public MulticastDelegate_t
{
public:

public:
};


// Boo.Lang.Runtime.DynamicDispatching.DispatcherCache_DispatcherFactory
struct  DispatcherFactory_t40A7825A22BBB37116B84045F2D181C1669118D9  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentException
struct  ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.AsyncCallback
struct  AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4  : public MulticastDelegate_t
{
public:

public:
};


// System.NotSupportedException
struct  NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Type_t * m_Items[1];

public:
	inline Type_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t9F6F38E4A0B0A78E2F463D1B2C0031716CA7A694  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB * m_Items[1];

public:
	inline ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t93E968F23AF2DB5CFCFF13BE775A0E222C03586B  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MethodInfo_t * m_Items[1];

public:
	inline MethodInfo_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MethodInfo_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MethodInfo_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MethodInfo_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MethodInfo_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MethodInfo_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m3455807C552312C60038DF52EF328C3687442DE3_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mC741BBB0A647C814227953DB9B23CB1BDF571C5B_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m76CDCB0C7BECE95DBA94C7C98467F297E4451EE7_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method);
// System.Void Boo.Lang.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m2DB0D9BF201BE8A4E06FCBBB310F1254B15F1D30_gshared (List_1_t43FCC451DA5F9E9F3C374425CF8854C9A727E273 * __this, const RuntimeMethod* method);

// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_mF928376F82E8C8FF3C11842C562DB8CF28B2735E (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_mA1A063A1388A21C8EA011DBA7FC98C24C3EE3D65 (StringBuilder_t * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260 (StringBuilder_t * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_mA943A1CC91DB1C62C61318F1629F713C09FEDFD3 (Dictionary_2_tD9EC6CFA4DA2D35537863AA10AC54F825E3F1B53 * __this, DispatcherKey_t3D0E5C3687AA48F20AB11F7CBA0A540981B2EF60 * ___key0, Dispatcher_tC941911289CA9A4DE7B02505AB9C6F311BF8D3C3 ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tD9EC6CFA4DA2D35537863AA10AC54F825E3F1B53 *, DispatcherKey_t3D0E5C3687AA48F20AB11F7CBA0A540981B2EF60 *, Dispatcher_tC941911289CA9A4DE7B02505AB9C6F311BF8D3C3 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m3455807C552312C60038DF52EF328C3687442DE3_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Threading.Monitor::Enter(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m903755FCC479745619842CCDBF5E6355319FA102 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dispatcher_tC941911289CA9A4DE7B02505AB9C6F311BF8D3C3 * DispatcherFactory_Invoke_mB2BD227A82A6C15625E1D523D12CA75F9CD3F064 (DispatcherFactory_t40A7825A22BBB37116B84045F2D181C1669118D9 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::Add(!0,!1)
inline void Dictionary_2_Add_mC5D58F853F9BAC84D6D73677C068273F5D28C5E0 (Dictionary_2_tD9EC6CFA4DA2D35537863AA10AC54F825E3F1B53 * __this, DispatcherKey_t3D0E5C3687AA48F20AB11F7CBA0A540981B2EF60 * ___key0, Dispatcher_tC941911289CA9A4DE7B02505AB9C6F311BF8D3C3 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tD9EC6CFA4DA2D35537863AA10AC54F825E3F1B53 *, DispatcherKey_t3D0E5C3687AA48F20AB11F7CBA0A540981B2EF60 *, Dispatcher_tC941911289CA9A4DE7B02505AB9C6F311BF8D3C3 *, const RuntimeMethod*))Dictionary_2_Add_mC741BBB0A647C814227953DB9B23CB1BDF571C5B_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::.ctor(System.Collections.Generic.IEqualityComparer`1<!0>)
inline void Dictionary_2__ctor_m85618ECDD1D34C15CABFB857A45FBC523145AB36 (Dictionary_2_tD9EC6CFA4DA2D35537863AA10AC54F825E3F1B53 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tD9EC6CFA4DA2D35537863AA10AC54F825E3F1B53 *, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m76CDCB0C7BECE95DBA94C7C98467F297E4451EE7_gshared)(__this, ___comparer0, method);
}
// System.Void Boo.Lang.Runtime.DynamicDispatching.DispatcherKey/_EqualityComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _EqualityComparer__ctor_m13B818854F43BCBBEB645EAE00CD97D9A0CD335E (_EqualityComparer_tA30A6E188DBCE855432D914A59E74A227725387E * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m0BD184A74F453A72376E81CC6CAEE2556B80493E (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF4626905368D6558695A823466A1AF65EADB9923 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6 (RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ___handle0, const RuntimeMethod* method);
// System.Void System.Reflection.Emit.DynamicMethod::.ctor(System.String,System.Type,System.Type[],System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicMethod__ctor_mC0BF6E026E720E24B47F02705B8563D01829045C (DynamicMethod_t983501153061387E39AA134BE68EB908A3E92AF3 * __this, String_t* ___name0, Type_t * ___returnType1, TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___parameterTypes2, Type_t * ___owner3, const RuntimeMethod* method);
// System.Reflection.Emit.ILGenerator System.Reflection.Emit.DynamicMethod::GetILGenerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ILGenerator_tE5AAEAFBCB8FD67493AC6519422504DAA595A13B * DynamicMethod_GetILGenerator_mFC605132173AE27768B9E6E75F75CB62C95F8698 (DynamicMethod_t983501153061387E39AA134BE68EB908A3E92AF3 * __this, const RuntimeMethod* method);
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.DynamicDispatching.Emitters.DispatcherEmitter::CreateMethodDispatcher()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dispatcher_tC941911289CA9A4DE7B02505AB9C6F311BF8D3C3 * DispatcherEmitter_CreateMethodDispatcher_m003C058C0313BD3A53BDB2BDAA368EF8E797EF3F (DispatcherEmitter_t21567E4DB17C6DBC63A5B07D5A7B311EEF850B8D * __this, const RuntimeMethod* method);
// System.Boolean System.Type::get_IsValueType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsValueType_mDDCCBAE9B59A483CBC3E5C02E3D68CEBEB2E41A8 (Type_t * __this, const RuntimeMethod* method);
// System.Void Boo.Lang.Runtime.DynamicDispatching.Emitters.DispatcherEmitter::BoxIfNeeded(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DispatcherEmitter_BoxIfNeeded_m48F877F64260A48540ADCF32C8CBAAE26DC12CFC (DispatcherEmitter_t21567E4DB17C6DBC63A5B07D5A7B311EEF850B8D * __this, Type_t * ___returnType0, const RuntimeMethod* method);
// System.Void Boo.Lang.Runtime.DynamicDispatching.Emitters.DispatcherEmitter::.ctor(System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DispatcherEmitter__ctor_mE0AC3AD9E827799D514A1CBCE00325E8C50FBAD2 (DispatcherEmitter_t21567E4DB17C6DBC63A5B07D5A7B311EEF850B8D * __this, Type_t * ___owner0, String_t* ___dynamicMethodName1, const RuntimeMethod* method);
// System.Void Boo.Lang.Runtime.DynamicDispatching.Emitters.DispatcherEmitter::EmitCastOrUnbox(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DispatcherEmitter_EmitCastOrUnbox_mC914B023F8FAD6139F5499B42605952FADD97A81 (DispatcherEmitter_t21567E4DB17C6DBC63A5B07D5A7B311EEF850B8D * __this, Type_t * ___type0, const RuntimeMethod* method);
// System.Void Boo.Lang.Runtime.DynamicDispatching.Emitters.DispatcherEmitter::EmitReturn(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DispatcherEmitter_EmitReturn_mB0DD0E67B3785D69618FF61BD72D5DA7B962728E (DispatcherEmitter_t21567E4DB17C6DBC63A5B07D5A7B311EEF850B8D * __this, Type_t * ___typeOnStack0, const RuntimeMethod* method);
// System.Void Boo.Lang.List`1<System.Reflection.MemberInfo>::.ctor()
inline void List_1__ctor_mD9E9F0575A5D3C8D7D72B94345E840D0175BFCCD (List_1_t25A7E693C283DBDE12C9B6655A54A917FF6842E4 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t25A7E693C283DBDE12C9B6655A54A917FF6842E4 *, const RuntimeMethod*))List_1__ctor_m2DB0D9BF201BE8A4E06FCBBB310F1254B15F1D30_gshared)(__this, method);
}
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Boo.Lang.Runtime.DynamicDispatching.DispatcherKey::.ctor(System.Type,System.String,System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DispatcherKey__ctor_mD62ABAE73F63DD17E5D589096C5FF9267628C584 (DispatcherKey_t3D0E5C3687AA48F20AB11F7CBA0A540981B2EF60 * __this, Type_t * ___type0, String_t* ___name1, TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___arguments2, const RuntimeMethod* method);
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.DynamicDispatching.DispatcherCache::Get(Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dispatcher_tC941911289CA9A4DE7B02505AB9C6F311BF8D3C3 * DispatcherCache_Get_m0F8F033AC0137252F4C21A4ED126CCA626E87ECB (DispatcherCache_t02178BC5CA46B75AA29741F6D19F3269D31C10F3 * __this, DispatcherKey_t3D0E5C3687AA48F20AB11F7CBA0A540981B2EF60 * ___key0, DispatcherFactory_t40A7825A22BBB37116B84045F2D181C1669118D9 * ___factory1, const RuntimeMethod* method);
// System.Void Boo.Lang.Runtime.RuntimeServices/<>c__DisplayClass26_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass26_0__ctor_m1766EE24DC1C8DAA1B866739AA2F761151D6093A (U3CU3Ec__DisplayClass26_0_t0A1D36ABA20ADC9A94843089B5486DEAF48DE1FC * __this, const RuntimeMethod* method);
// System.Void Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DispatcherFactory__ctor_m1D64E240461E1D8D8B1A5BFD197E4A3D6381DB43 (DispatcherFactory_t40A7825A22BBB37116B84045F2D181C1669118D9 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.RuntimeServices::GetDispatcher(System.Object,System.String,System.Type[],Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dispatcher_tC941911289CA9A4DE7B02505AB9C6F311BF8D3C3 * RuntimeServices_GetDispatcher_mB85B5277A588486359D1596B5A5551B8EF8317CC (RuntimeObject * ___target0, String_t* ___cacheKeyName1, TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___cacheKeyTypes2, DispatcherFactory_t40A7825A22BBB37116B84045F2D181C1669118D9 * ___factory3, const RuntimeMethod* method);
// System.Object Boo.Lang.Runtime.DynamicDispatching.Dispatcher::Invoke(System.Object,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dispatcher_Invoke_mCB677F1494336516311F4F20F7C9BE1055EB2A4B (Dispatcher_tC941911289CA9A4DE7B02505AB9C6F311BF8D3C3 * __this, RuntimeObject * ___target0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method);
// System.Void Boo.Lang.Runtime.DynamicDispatching.Dispatcher::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dispatcher__ctor_m355C0DDBECBEAB4727A772834D33142A8D6AE1EE (Dispatcher_tC941911289CA9A4DE7B02505AB9C6F311BF8D3C3 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Boolean Boo.Lang.Runtime.RuntimeServices::IsPromotableNumeric(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeServices_IsPromotableNumeric_m74995E1B3FE68FA58B80AF432583F80F3456D204 (Type_t * ___fromType0, const RuntimeMethod* method);
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.RuntimeServices::EmitPromotionDispatcher(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dispatcher_tC941911289CA9A4DE7B02505AB9C6F311BF8D3C3 * RuntimeServices_EmitPromotionDispatcher_m8F2F02F9C8FF257EC8AFA690348100EE8574E475 (Type_t * ___fromType0, Type_t * ___toType1, const RuntimeMethod* method);
// System.Reflection.MethodInfo Boo.Lang.Runtime.RuntimeServices::FindImplicitConversionOperator(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * RuntimeServices_FindImplicitConversionOperator_m64C87DBCAF2D3453889505B5C793376D498D33FB (Type_t * ___from0, Type_t * ___to1, const RuntimeMethod* method);
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.RuntimeServices::EmitImplicitConversionDispatcher(System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dispatcher_tC941911289CA9A4DE7B02505AB9C6F311BF8D3C3 * RuntimeServices_EmitImplicitConversionDispatcher_mEBA398DA4B68006AEBB098F4649F3BEB73216816 (MethodInfo_t * ___method0, const RuntimeMethod* method);
// System.TypeCode System.Type::GetTypeCode(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Type_GetTypeCode_m3105BBCE671D89EFE212F9BA06AAB90944A6116F (Type_t * ___type0, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07 (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args0, const RuntimeMethod* method);
// System.Reflection.MethodInfo System.Type::GetMethod(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * Type_GetMethod_mB8368D44E32C205D279BA3BB9E6FE1D09D45A6DE (Type_t * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_CreateDelegate_mD7C5EDDB32C63A9BD9DE43AC879AFF4EBC6641D1 (Type_t * ___type0, MethodInfo_t * ___method1, const RuntimeMethod* method);
// System.Boolean Boo.Lang.Runtime.RuntimeServices::IsPromotableNumeric(System.TypeCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeServices_IsPromotableNumeric_m3396BD8AD81555B6848E202642BB25E8248DB281 (int32_t ___code0, const RuntimeMethod* method);
// System.Void Boo.Lang.Runtime.DynamicDispatching.Emitters.ImplicitConversionEmitter::.ctor(System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImplicitConversionEmitter__ctor_m6863986AA280D4CF4391CFB86DE07FCAA29D7333 (ImplicitConversionEmitter_t727822B4471E4A8B7D25EE40A6812CF3E3723D89 * __this, MethodInfo_t * ___conversion0, const RuntimeMethod* method);
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.DynamicDispatching.Emitters.DispatcherEmitter::Emit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dispatcher_tC941911289CA9A4DE7B02505AB9C6F311BF8D3C3 * DispatcherEmitter_Emit_m59D4E979D4DB1500C492AD17A7F581A5346220A8 (DispatcherEmitter_t21567E4DB17C6DBC63A5B07D5A7B311EEF850B8D * __this, const RuntimeMethod* method);
// System.Boolean Boo.Lang.Runtime.RuntimeServices::IsNumeric(System.TypeCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeServices_IsNumeric_mA40815BB649386B608986C0216E3A070D4E6642D (int32_t ___code0, const RuntimeMethod* method);
// System.Boolean Boo.Lang.Runtime.RuntimeServices::EqualityOperator(System.Object,System.TypeCode,System.Object,System.TypeCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeServices_EqualityOperator_m636633E886E9F0FAB106440E93A0D216ED68D8C5 (RuntimeObject * ___lhs0, int32_t ___lhsTypeCode1, RuntimeObject * ___rhs2, int32_t ___rhsTypeCode3, const RuntimeMethod* method);
// System.Boolean Boo.Lang.Runtime.RuntimeServices::ArrayEqualityImpl(System.Array,System.Array)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeServices_ArrayEqualityImpl_m9F5A1DBE98150BCE13D808BF6EE72D5B37417C5C (RuntimeArray * ___lhs0, RuntimeArray * ___rhs1, const RuntimeMethod* method);
// System.Int32 System.Array::get_Rank()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Rank_m38145B59D67D75F9896A3F8CDA9B966641AE99E1 (RuntimeArray * __this, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7 (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Int32 System.Array::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Length_m2239B6393651C3F4631D900EFC1B05DBE8F5466D (RuntimeArray * __this, const RuntimeMethod* method);
// System.Object System.Array::GetValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Array_GetValue_m9B1409D22139722A3149AC49ABCF558A2E066544 (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Boolean Boo.Lang.Runtime.RuntimeServices::EqualityOperator(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeServices_EqualityOperator_mC5F19F6E7F47A63C71D18AD5F3561332CB6047AC (RuntimeObject * ___lhs0, RuntimeObject * ___rhs1, const RuntimeMethod* method);
// System.TypeCode Boo.Lang.Runtime.RuntimeServices::GetConvertTypeCode(System.TypeCode,System.TypeCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RuntimeServices_GetConvertTypeCode_mE911590A112059165A03AABF9F0B872588757BFB (int32_t ___lhsTypeCode0, int32_t ___rhsTypeCode1, const RuntimeMethod* method);
// System.Boolean System.Decimal::op_Equality(System.Decimal,System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Decimal_op_Equality_mD69422DB0011607747F9D778C5409FBE732E4BDB (Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___d10, Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___d21, const RuntimeMethod* method);
// System.Reflection.MethodInfo Boo.Lang.Runtime.RuntimeServices::FindImplicitConversionMethod(System.Collections.Generic.IEnumerable`1<System.Reflection.MethodInfo>,System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * RuntimeServices_FindImplicitConversionMethod_mC49032327C0FD30F30309E1F2682993CBCE64D32 (RuntimeObject* ___candidates0, Type_t * ___from1, Type_t * ___to2, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<System.Reflection.MethodInfo> Boo.Lang.Runtime.RuntimeServices::GetExtensionMethods()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RuntimeServices_GetExtensionMethods_m491A35CAC28074626D84E28EFC557A5E6E0E0CB6 (const RuntimeMethod* method);
// System.Void Boo.Lang.Runtime.RuntimeServices/<GetExtensionMethods>d__128::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetExtensionMethodsU3Ed__128__ctor_mDF9EB4C35D4D12A46930ABFD2D053644F160D37A (U3CGetExtensionMethodsU3Ed__128_tF07224577E6693EDC6CEF69D7044082211368E44 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void Boo.Lang.Runtime.DynamicDispatching.DispatcherCache::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DispatcherCache__ctor_mD120B13AF4A9CFEBA294D6CB619E05FCC9AB4002 (DispatcherCache_t02178BC5CA46B75AA29741F6D19F3269D31C10F3 * __this, const RuntimeMethod* method);
// System.Void Boo.Lang.Runtime.ExtensionRegistry::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtensionRegistry__ctor_m4F6B4B6366C3B8B0FF2430D3DF2E0EC5FEF8D4D3 (ExtensionRegistry_t1EEFBEDAE2EA76F75BB3B5B63F191E0FBA361800 * __this, const RuntimeMethod* method);
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.RuntimeServices::CreateCoerceDispatcher(System.Object,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dispatcher_tC941911289CA9A4DE7B02505AB9C6F311BF8D3C3 * RuntimeServices_CreateCoerceDispatcher_m29B6144FECBEDCC0E04A9A9B7DCF16F7A2FFC9A1 (RuntimeObject * ___value0, Type_t * ___toType1, const RuntimeMethod* method);
// System.Threading.Thread System.Threading.Thread::get_CurrentThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * Thread_get_CurrentThread_mB7A83CAE2B9A74CEA053196DFD1AF1E7AB30A70E (const RuntimeMethod* method);
// System.Int32 System.Threading.Thread::get_ManagedThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Thread_get_ManagedThreadId_m7FA85162CB00713B94EF5708B19120F791D3AAD1 (Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * __this, const RuntimeMethod* method);
// System.Void Boo.Lang.Runtime.RuntimeServices/<GetExtensionMethods>d__128::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetExtensionMethodsU3Ed__128_U3CU3Em__Finally1_m1A3402F9C7274FA5A6EA522E57ABF2214FC73EC7 (U3CGetExtensionMethodsU3Ed__128_tF07224577E6693EDC6CEF69D7044082211368E44 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<System.Reflection.MemberInfo> Boo.Lang.Runtime.ExtensionRegistry::get_Extensions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ExtensionRegistry_get_Extensions_m1021411BAB27F23DF0B7E8A71141B4E5E58593C5 (ExtensionRegistry_t1EEFBEDAE2EA76F75BB3B5B63F191E0FBA361800 * __this, const RuntimeMethod* method);
// System.Void Boo.Lang.Runtime.RuntimeServices/<GetExtensionMethods>d__128::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetExtensionMethodsU3Ed__128_System_IDisposable_Dispose_mD786F9FE94949857A5AA222229495D1B98954755 (U3CGetExtensionMethodsU3Ed__128_tF07224577E6693EDC6CEF69D7044082211368E44 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33 (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<System.Reflection.MethodInfo> Boo.Lang.Runtime.RuntimeServices/<GetExtensionMethods>d__128::System.Collections.Generic.IEnumerable<System.Reflection.MethodInfo>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetExtensionMethodsU3Ed__128_System_Collections_Generic_IEnumerableU3CSystem_Reflection_MethodInfoU3E_GetEnumerator_mE6613C07A226DD249746C2A589A504C3111ED14A (U3CGetExtensionMethodsU3Ed__128_tF07224577E6693EDC6CEF69D7044082211368E44 * __this, const RuntimeMethod* method);
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
// System.String Boo.Lang.Builtins::join(System.Collections.IEnumerable,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Builtins_join_m986BA566DBCD2AACC9731E08F399802687B45597 (RuntimeObject* ___enumerable0, String_t* ___separator1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Builtins_join_m986BA566DBCD2AACC9731E08F399802687B45597_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	String_t* V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_mF928376F82E8C8FF3C11842C562DB8CF28B2735E(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		RuntimeObject* L_1 = ___enumerable0;
		NullCheck(L_1);
		RuntimeObject* L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_tD74549CEA1AA48E768382B94FEACBB07E2E3FA2C_il2cpp_TypeInfo_var, L_1);
		V_1 = L_2;
		RuntimeObject* L_3 = V_1;
		V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var));
	}

IL_0015:
	try
	{ // begin try (depth: 1)
		{
			RuntimeObject* L_4 = V_1;
			NullCheck(L_4);
			bool L_5 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_4);
			V_3 = L_5;
			bool L_6 = V_3;
			if (!L_6)
			{
				goto IL_0054;
			}
		}

IL_0020:
		{
			StringBuilder_t * L_7 = V_0;
			RuntimeObject* L_8 = V_1;
			NullCheck(L_8);
			RuntimeObject * L_9 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_8);
			NullCheck(L_7);
			StringBuilder_Append_mA1A063A1388A21C8EA011DBA7FC98C24C3EE3D65(L_7, L_9, /*hidden argument*/NULL);
			goto IL_0047;
		}

IL_0030:
		{
			StringBuilder_t * L_10 = V_0;
			String_t* L_11 = ___separator1;
			NullCheck(L_10);
			StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_10, L_11, /*hidden argument*/NULL);
			StringBuilder_t * L_12 = V_0;
			RuntimeObject* L_13 = V_1;
			NullCheck(L_13);
			RuntimeObject * L_14 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_13);
			NullCheck(L_12);
			StringBuilder_Append_mA1A063A1388A21C8EA011DBA7FC98C24C3EE3D65(L_12, L_14, /*hidden argument*/NULL);
		}

IL_0047:
		{
			RuntimeObject* L_15 = V_1;
			NullCheck(L_15);
			bool L_16 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_15);
			V_4 = L_16;
			bool L_17 = V_4;
			if (L_17)
			{
				goto IL_0030;
			}
		}

IL_0053:
		{
		}

IL_0054:
		{
			IL2CPP_LEAVE(0x62, FINALLY_0057);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0057;
	}

FINALLY_0057:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_18 = V_2;
			if (!L_18)
			{
				goto IL_0061;
			}
		}

IL_005a:
		{
			RuntimeObject* L_19 = V_2;
			NullCheck(L_19);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_19);
		}

IL_0061:
		{
			IL2CPP_END_FINALLY(87)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(87)
	{
		IL2CPP_JUMP_TBL(0x62, IL_0062)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0062:
	{
		StringBuilder_t * L_20 = V_0;
		NullCheck(L_20);
		String_t* L_21 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_20);
		V_5 = L_21;
		goto IL_006c;
	}

IL_006c:
	{
		String_t* L_22 = V_5;
		return L_22;
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
// System.Void Boo.Lang.Runtime.DynamicDispatching.Dispatcher::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dispatcher__ctor_m355C0DDBECBEAB4727A772834D33142A8D6AE1EE (Dispatcher_tC941911289CA9A4DE7B02505AB9C6F311BF8D3C3 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Object Boo.Lang.Runtime.DynamicDispatching.Dispatcher::Invoke(System.Object,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dispatcher_Invoke_mCB677F1494336516311F4F20F7C9BE1055EB2A4B (Dispatcher_tC941911289CA9A4DE7B02505AB9C6F311BF8D3C3 * __this, RuntimeObject * ___target0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method)
{
	RuntimeObject * result = NULL;
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___target0, ___args1, targetMethod);
			}
			else
			{
				// closed
				typedef RuntimeObject * (*FunctionPointerType) (void*, RuntimeObject *, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___target0, ___args1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< RuntimeObject *, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(targetMethod, ___target0, ___args1);
					else
						result = GenericVirtFuncInvoker1< RuntimeObject *, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(targetMethod, ___target0, ___args1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< RuntimeObject *, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___target0, ___args1);
					else
						result = VirtFuncInvoker1< RuntimeObject *, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___target0, ___args1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___args1) - 1), targetMethod);
				}
				else
				{
					typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___target0, ___args1, targetMethod);
				}
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___target0, ___args1, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker2< RuntimeObject *, RuntimeObject *, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(targetMethod, targetThis, ___target0, ___args1);
					else
						result = GenericVirtFuncInvoker2< RuntimeObject *, RuntimeObject *, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(targetMethod, targetThis, ___target0, ___args1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< RuntimeObject *, RuntimeObject *, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___target0, ___args1);
					else
						result = VirtFuncInvoker2< RuntimeObject *, RuntimeObject *, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___target0, ___args1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject*, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___target0) - 1), ___args1, targetMethod);
				}
				else
				{
					typedef RuntimeObject * (*FunctionPointerType) (void*, RuntimeObject *, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___target0, ___args1, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Boo.Lang.Runtime.DynamicDispatching.Dispatcher::BeginInvoke(System.Object,System.Object[],System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dispatcher_BeginInvoke_m9A04A38C1A91C5DEAF1864D59271DE329A57E143 (Dispatcher_tC941911289CA9A4DE7B02505AB9C6F311BF8D3C3 * __this, RuntimeObject * ___target0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___target0;
	__d_args[1] = ___args1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Object Boo.Lang.Runtime.DynamicDispatching.Dispatcher::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dispatcher_EndInvoke_mDD49B854854C49D80A8057D056F2DA88A725FC6B (Dispatcher_tC941911289CA9A4DE7B02505AB9C6F311BF8D3C3 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (RuntimeObject *)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.DynamicDispatching.DispatcherCache::Get(Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.DispatcherCache_DispatcherFactory)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dispatcher_tC941911289CA9A4DE7B02505AB9C6F311BF8D3C3 * DispatcherCache_Get_m0F8F033AC0137252F4C21A4ED126CCA626E87ECB (DispatcherCache_t02178BC5CA46B75AA29741F6D19F3269D31C10F3 * __this, DispatcherKey_t3D0E5C3687AA48F20AB11F7CBA0A540981B2EF60 * ___key0, DispatcherFactory_t40A7825A22BBB37116B84045F2D181C1669118D9 * ___factory1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DispatcherCache_Get_m0F8F033AC0137252F4C21A4ED126CCA626E87ECB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dispatcher_tC941911289CA9A4DE7B02505AB9C6F311BF8D3C3 * V_0 = NULL;
	bool V_1 = false;
	Dictionary_2_tD9EC6CFA4DA2D35537863AA10AC54F825E3F1B53 * V_2 = NULL;
	bool V_3 = false;
	Dispatcher_tC941911289CA9A4DE7B02505AB9C6F311BF8D3C3 * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		IL2CPP_RUNTIME_CLASS_INIT(DispatcherCache_t02178BC5CA46B75AA29741F6D19F3269D31C10F3_il2cpp_TypeInfo_var);
		Dictionary_2_tD9EC6CFA4DA2D35537863AA10AC54F825E3F1B53 * L_0 = ((DispatcherCache_t02178BC5CA46B75AA29741F6D19F3269D31C10F3_StaticFields*)il2cpp_codegen_static_fields_for(DispatcherCache_t02178BC5CA46B75AA29741F6D19F3269D31C10F3_il2cpp_TypeInfo_var))->get__cache_0();
		DispatcherKey_t3D0E5C3687AA48F20AB11F7CBA0A540981B2EF60 * L_1 = ___key0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_TryGetValue_mA943A1CC91DB1C62C61318F1629F713C09FEDFD3(L_0, L_1, (Dispatcher_tC941911289CA9A4DE7B02505AB9C6F311BF8D3C3 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_mA943A1CC91DB1C62C61318F1629F713C09FEDFD3_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_005a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DispatcherCache_t02178BC5CA46B75AA29741F6D19F3269D31C10F3_il2cpp_TypeInfo_var);
		Dictionary_2_tD9EC6CFA4DA2D35537863AA10AC54F825E3F1B53 * L_4 = ((DispatcherCache_t02178BC5CA46B75AA29741F6D19F3269D31C10F3_StaticFields*)il2cpp_codegen_static_fields_for(DispatcherCache_t02178BC5CA46B75AA29741F6D19F3269D31C10F3_il2cpp_TypeInfo_var))->get__cache_0();
		V_2 = L_4;
		Dictionary_2_tD9EC6CFA4DA2D35537863AA10AC54F825E3F1B53 * L_5 = V_2;
		Monitor_Enter_m903755FCC479745619842CCDBF5E6355319FA102(L_5, /*hidden argument*/NULL);
	}

IL_0023:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(DispatcherCache_t02178BC5CA46B75AA29741F6D19F3269D31C10F3_il2cpp_TypeInfo_var);
			Dictionary_2_tD9EC6CFA4DA2D35537863AA10AC54F825E3F1B53 * L_6 = ((DispatcherCache_t02178BC5CA46B75AA29741F6D19F3269D31C10F3_StaticFields*)il2cpp_codegen_static_fields_for(DispatcherCache_t02178BC5CA46B75AA29741F6D19F3269D31C10F3_il2cpp_TypeInfo_var))->get__cache_0();
			DispatcherKey_t3D0E5C3687AA48F20AB11F7CBA0A540981B2EF60 * L_7 = ___key0;
			NullCheck(L_6);
			bool L_8 = Dictionary_2_TryGetValue_mA943A1CC91DB1C62C61318F1629F713C09FEDFD3(L_6, L_7, (Dispatcher_tC941911289CA9A4DE7B02505AB9C6F311BF8D3C3 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_mA943A1CC91DB1C62C61318F1629F713C09FEDFD3_RuntimeMethod_var);
			V_3 = (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
			bool L_9 = V_3;
			if (!L_9)
			{
				goto IL_004e;
			}
		}

IL_0038:
		{
			DispatcherFactory_t40A7825A22BBB37116B84045F2D181C1669118D9 * L_10 = ___factory1;
			NullCheck(L_10);
			Dispatcher_tC941911289CA9A4DE7B02505AB9C6F311BF8D3C3 * L_11 = DispatcherFactory_Invoke_mB2BD227A82A6C15625E1D523D12CA75F9CD3F064(L_10, /*hidden argument*/NULL);
			V_0 = L_11;
			IL2CPP_RUNTIME_CLASS_INIT(DispatcherCache_t02178BC5CA46B75AA29741F6D19F3269D31C10F3_il2cpp_TypeInfo_var);
			Dictionary_2_tD9EC6CFA4DA2D35537863AA10AC54F825E3F1B53 * L_12 = ((DispatcherCache_t02178BC5CA46B75AA29741F6D19F3269D31C10F3_StaticFields*)il2cpp_codegen_static_fields_for(DispatcherCache_t02178BC5CA46B75AA29741F6D19F3269D31C10F3_il2cpp_TypeInfo_var))->get__cache_0();
			DispatcherKey_t3D0E5C3687AA48F20AB11F7CBA0A540981B2EF60 * L_13 = ___key0;
			Dispatcher_tC941911289CA9A4DE7B02505AB9C6F311BF8D3C3 * L_14 = V_0;
			NullCheck(L_12);
			Dictionary_2_Add_mC5D58F853F9BAC84D6D73677C068273F5D28C5E0(L_12, L_13, L_14, /*hidden argument*/Dictionary_2_Add_mC5D58F853F9BAC84D6D73677C068273F5D28C5E0_RuntimeMethod_var);
		}

IL_004e:
		{
			IL2CPP_LEAVE(0x59, FINALLY_0051);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0051;
	}

FINALLY_0051:
	{ // begin finally (depth: 1)
		Dictionary_2_tD9EC6CFA4DA2D35537863AA10AC54F825E3F1B53 * L_15 = V_2;
		Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_15, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(81)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(81)
	{
		IL2CPP_JUMP_TBL(0x59, IL_0059)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0059:
	{
	}

IL_005a:
	{
		Dispatcher_tC941911289CA9A4DE7B02505AB9C6F311BF8D3C3 * L_16 = V_0;
		V_4 = L_16;
		goto IL_005f;
	}

IL_005f:
	{
		Dispatcher_tC941911289CA9A4DE7B02505AB9C6F311BF8D3C3 * L_17 = V_4;
		return L_17;
	}
}
// System.Void Boo.Lang.Runtime.DynamicDispatching.DispatcherCache::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DispatcherCache__ctor_mD120B13AF4A9CFEBA294D6CB619E05FCC9AB4002 (DispatcherCache_t02178BC5CA46B75AA29741F6D19F3269D31C10F3 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Boo.Lang.Runtime.DynamicDispatching.DispatcherCache::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DispatcherCache__cctor_m89F249D5D651537153A3C1B36D2BA862C4E99910 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DispatcherCache__cctor_m89F249D5D651537153A3C1B36D2BA862C4E99910_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DispatcherKey_t3D0E5C3687AA48F20AB11F7CBA0A540981B2EF60_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((DispatcherKey_t3D0E5C3687AA48F20AB11F7CBA0A540981B2EF60_StaticFields*)il2cpp_codegen_static_fields_for(DispatcherKey_t3D0E5C3687AA48F20AB11F7CBA0A540981B2EF60_il2cpp_TypeInfo_var))->get_EqualityComparer_0();
		Dictionary_2_tD9EC6CFA4DA2D35537863AA10AC54F825E3F1B53 * L_1 = (Dictionary_2_tD9EC6CFA4DA2D35537863AA10AC54F825E3F1B53 *)il2cpp_codegen_object_new(Dictionary_2_tD9EC6CFA4DA2D35537863AA10AC54F825E3F1B53_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m85618ECDD1D34C15CABFB857A45FBC523145AB36(L_1, L_0, /*hidden argument*/Dictionary_2__ctor_m85618ECDD1D34C15CABFB857A45FBC523145AB36_RuntimeMethod_var);
		((DispatcherCache_t02178BC5CA46B75AA29741F6D19F3269D31C10F3_StaticFields*)il2cpp_codegen_static_fields_for(DispatcherCache_t02178BC5CA46B75AA29741F6D19F3269D31C10F3_il2cpp_TypeInfo_var))->set__cache_0(L_1);
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
IL2CPP_EXTERN_C  Dispatcher_tC941911289CA9A4DE7B02505AB9C6F311BF8D3C3 * DelegatePInvokeWrapper_DispatcherFactory_t40A7825A22BBB37116B84045F2D181C1669118D9 (DispatcherFactory_t40A7825A22BBB37116B84045F2D181C1669118D9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DelegatePInvokeWrapper_DispatcherFactory_t40A7825A22BBB37116B84045F2D181C1669118D9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	typedef Il2CppMethodPointer (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	Il2CppMethodPointer returnValue = il2cppPInvokeFunc();

	// Marshaling of return value back from native representation
	Dispatcher_tC941911289CA9A4DE7B02505AB9C6F311BF8D3C3 * _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_function_ptr_to_delegate<Dispatcher_tC941911289CA9A4DE7B02505AB9C6F311BF8D3C3>(returnValue, Dispatcher_tC941911289CA9A4DE7B02505AB9C6F311BF8D3C3_il2cpp_TypeInfo_var);

	return _returnValue_unmarshaled;
}
// System.Void Boo.Lang.Runtime.DynamicDispatching.DispatcherCache_DispatcherFactory::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DispatcherFactory__ctor_m1D64E240461E1D8D8B1A5BFD197E4A3D6381DB43 (DispatcherFactory_t40A7825A22BBB37116B84045F2D181C1669118D9 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.DynamicDispatching.DispatcherCache_DispatcherFactory::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dispatcher_tC941911289CA9A4DE7B02505AB9C6F311BF8D3C3 * DispatcherFactory_Invoke_mB2BD227A82A6C15625E1D523D12CA75F9CD3F064 (DispatcherFactory_t40A7825A22BBB37116B84045F2D181C1669118D9 * __this, const RuntimeMethod* method)
{
	Dispatcher_tC941911289CA9A4DE7B02505AB9C6F311BF8D3C3 * result = NULL;
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef Dispatcher_tC941911289CA9A4DE7B02505AB9C6F311BF8D3C3 * (*FunctionPointerType) (const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef Dispatcher_tC941911289CA9A4DE7B02505AB9C6F311BF8D3C3 * (*FunctionPointerType) (void*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker0< Dispatcher_tC941911289CA9A4DE7B02505AB9C6F311BF8D3C3 * >::Invoke(targetMethod, targetThis);
					else
						result = GenericVirtFuncInvoker0< Dispatcher_tC941911289CA9A4DE7B02505AB9C6F311BF8D3C3 * >::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< Dispatcher_tC941911289CA9A4DE7B02505AB9C6F311BF8D3C3 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						result = VirtFuncInvoker0< Dispatcher_tC941911289CA9A4DE7B02505AB9C6F311BF8D3C3 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef Dispatcher_tC941911289CA9A4DE7B02505AB9C6F311BF8D3C3 * (*FunctionPointerType) (void*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult Boo.Lang.Runtime.DynamicDispatching.DispatcherCache_DispatcherFactory::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DispatcherFactory_BeginInvoke_mD46F7862707828EC5AC09ED8E59775E294CE67D8 (DispatcherFactory_t40A7825A22BBB37116B84045F2D181C1669118D9 * __this, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.DynamicDispatching.DispatcherCache_DispatcherFactory::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dispatcher_tC941911289CA9A4DE7B02505AB9C6F311BF8D3C3 * DispatcherFactory_EndInvoke_mDCAADE04F8788206A0F23042318858E3AF93A232 (DispatcherFactory_t40A7825A22BBB37116B84045F2D181C1669118D9 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (Dispatcher_tC941911289CA9A4DE7B02505AB9C6F311BF8D3C3 *)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Boo.Lang.Runtime.DynamicDispatching.DispatcherKey::.ctor(System.Type,System.String,System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DispatcherKey__ctor_mD62ABAE73F63DD17E5D589096C5FF9267628C584 (DispatcherKey_t3D0E5C3687AA48F20AB11F7CBA0A540981B2EF60 * __this, Type_t * ___type0, String_t* ___name1, TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___arguments2, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		Type_t * L_0 = ___type0;
		__this->set__type_1(L_0);
		String_t* L_1 = ___name1;
		__this->set__name_2(L_1);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_2 = ___arguments2;
		__this->set__arguments_3(L_2);
		return;
	}
}
// System.Void Boo.Lang.Runtime.DynamicDispatching.DispatcherKey::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DispatcherKey__cctor_m2EE6F93D8AF85500EAB4A95C56104AC927AB3183 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DispatcherKey__cctor_m2EE6F93D8AF85500EAB4A95C56104AC927AB3183_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		_EqualityComparer_tA30A6E188DBCE855432D914A59E74A227725387E * L_0 = (_EqualityComparer_tA30A6E188DBCE855432D914A59E74A227725387E *)il2cpp_codegen_object_new(_EqualityComparer_tA30A6E188DBCE855432D914A59E74A227725387E_il2cpp_TypeInfo_var);
		_EqualityComparer__ctor_m13B818854F43BCBBEB645EAE00CD97D9A0CD335E(L_0, /*hidden argument*/NULL);
		((DispatcherKey_t3D0E5C3687AA48F20AB11F7CBA0A540981B2EF60_StaticFields*)il2cpp_codegen_static_fields_for(DispatcherKey_t3D0E5C3687AA48F20AB11F7CBA0A540981B2EF60_il2cpp_TypeInfo_var))->set_EqualityComparer_0(L_0);
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
// System.Int32 Boo.Lang.Runtime.DynamicDispatching.DispatcherKey__EqualityComparer::GetHashCode(Boo.Lang.Runtime.DynamicDispatching.DispatcherKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _EqualityComparer_GetHashCode_mC4A15429C1B97114FB242E8B94F230FFB0A18E90 (_EqualityComparer_tA30A6E188DBCE855432D914A59E74A227725387E * __this, DispatcherKey_t3D0E5C3687AA48F20AB11F7CBA0A540981B2EF60 * ___key0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		DispatcherKey_t3D0E5C3687AA48F20AB11F7CBA0A540981B2EF60 * L_0 = ___key0;
		NullCheck(L_0);
		Type_t * L_1 = L_0->get__type_1();
		NullCheck(L_1);
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_1);
		DispatcherKey_t3D0E5C3687AA48F20AB11F7CBA0A540981B2EF60 * L_3 = ___key0;
		NullCheck(L_3);
		String_t* L_4 = L_3->get__name_2();
		NullCheck(L_4);
		int32_t L_5 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_4);
		DispatcherKey_t3D0E5C3687AA48F20AB11F7CBA0A540981B2EF60 * L_6 = ___key0;
		NullCheck(L_6);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_7 = L_6->get__arguments_3();
		NullCheck(L_7);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_2^(int32_t)L_5))^(int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length))))));
		goto IL_0024;
	}

IL_0024:
	{
		int32_t L_8 = V_0;
		return L_8;
	}
}
// System.Boolean Boo.Lang.Runtime.DynamicDispatching.DispatcherKey__EqualityComparer::Equals(Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.DispatcherKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _EqualityComparer_Equals_m405D71266AA76BEC6FB864EEBBFBCFA31F9F7F59 (_EqualityComparer_tA30A6E188DBCE855432D914A59E74A227725387E * __this, DispatcherKey_t3D0E5C3687AA48F20AB11F7CBA0A540981B2EF60 * ___x0, DispatcherKey_t3D0E5C3687AA48F20AB11F7CBA0A540981B2EF60 * ___y1, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	{
		DispatcherKey_t3D0E5C3687AA48F20AB11F7CBA0A540981B2EF60 * L_0 = ___x0;
		NullCheck(L_0);
		Type_t * L_1 = L_0->get__type_1();
		DispatcherKey_t3D0E5C3687AA48F20AB11F7CBA0A540981B2EF60 * L_2 = ___y1;
		NullCheck(L_2);
		Type_t * L_3 = L_2->get__type_1();
		V_0 = (bool)((((int32_t)((((RuntimeObject*)(Type_t *)L_1) == ((RuntimeObject*)(Type_t *)L_3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_001a;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0092;
	}

IL_001a:
	{
		DispatcherKey_t3D0E5C3687AA48F20AB11F7CBA0A540981B2EF60 * L_5 = ___x0;
		NullCheck(L_5);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_6 = L_5->get__arguments_3();
		NullCheck(L_6);
		DispatcherKey_t3D0E5C3687AA48F20AB11F7CBA0A540981B2EF60 * L_7 = ___y1;
		NullCheck(L_7);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_8 = L_7->get__arguments_3();
		NullCheck(L_8);
		V_2 = (bool)((((int32_t)((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))))) == ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0037;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0092;
	}

IL_0037:
	{
		DispatcherKey_t3D0E5C3687AA48F20AB11F7CBA0A540981B2EF60 * L_10 = ___x0;
		NullCheck(L_10);
		String_t* L_11 = L_10->get__name_2();
		DispatcherKey_t3D0E5C3687AA48F20AB11F7CBA0A540981B2EF60 * L_12 = ___y1;
		NullCheck(L_12);
		String_t* L_13 = L_12->get__name_2();
		bool L_14 = String_op_Inequality_m0BD184A74F453A72376E81CC6CAEE2556B80493E(L_11, L_13, /*hidden argument*/NULL);
		V_3 = L_14;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_0050;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0092;
	}

IL_0050:
	{
		V_4 = 0;
		goto IL_007c;
	}

IL_0055:
	{
		DispatcherKey_t3D0E5C3687AA48F20AB11F7CBA0A540981B2EF60 * L_16 = ___x0;
		NullCheck(L_16);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_17 = L_16->get__arguments_3();
		int32_t L_18 = V_4;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		Type_t * L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		DispatcherKey_t3D0E5C3687AA48F20AB11F7CBA0A540981B2EF60 * L_21 = ___y1;
		NullCheck(L_21);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_22 = L_21->get__arguments_3();
		int32_t L_23 = V_4;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		Type_t * L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		V_5 = (bool)((((int32_t)((((RuntimeObject*)(Type_t *)L_20) == ((RuntimeObject*)(Type_t *)L_25))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_26 = V_5;
		if (!L_26)
		{
			goto IL_0076;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0092;
	}

IL_0076:
	{
		int32_t L_27 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_007c:
	{
		int32_t L_28 = V_4;
		DispatcherKey_t3D0E5C3687AA48F20AB11F7CBA0A540981B2EF60 * L_29 = ___x0;
		NullCheck(L_29);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_30 = L_29->get__arguments_3();
		NullCheck(L_30);
		V_6 = (bool)((((int32_t)L_28) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length))))))? 1 : 0);
		bool L_31 = V_6;
		if (L_31)
		{
			goto IL_0055;
		}
	}
	{
		V_1 = (bool)1;
		goto IL_0092;
	}

IL_0092:
	{
		bool L_32 = V_1;
		return L_32;
	}
}
// System.Void Boo.Lang.Runtime.DynamicDispatching.DispatcherKey__EqualityComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _EqualityComparer__ctor_m13B818854F43BCBBEB645EAE00CD97D9A0CD335E (_EqualityComparer_tA30A6E188DBCE855432D914A59E74A227725387E * __this, const RuntimeMethod* method)
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
// System.Void Boo.Lang.Runtime.DynamicDispatching.Emitters.DispatcherEmitter::.ctor(System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DispatcherEmitter__ctor_mE0AC3AD9E827799D514A1CBCE00325E8C50FBAD2 (DispatcherEmitter_t21567E4DB17C6DBC63A5B07D5A7B311EEF850B8D * __this, Type_t * ___owner0, String_t* ___dynamicMethodName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DispatcherEmitter__ctor_mE0AC3AD9E827799D514A1CBCE00325E8C50FBAD2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		Type_t * L_0 = ___owner0;
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		String_t* L_2 = ___dynamicMethodName1;
		String_t* L_3 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(L_1, _stringLiteral3CDF2936DA2FC556BFA533AB1EB59CE710AC80E5, L_2, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_4 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_4, /*hidden argument*/NULL);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_6 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)SZArrayNew(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F_il2cpp_TypeInfo_var, (uint32_t)2);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_7 = L_6;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_8 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
		Type_t * L_9 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_9);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_9);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_10 = L_7;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_11 = { reinterpret_cast<intptr_t> (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_0_0_0_var) };
		Type_t * L_12 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_12);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(1), (Type_t *)L_12);
		Type_t * L_13 = ___owner0;
		DynamicMethod_t983501153061387E39AA134BE68EB908A3E92AF3 * L_14 = (DynamicMethod_t983501153061387E39AA134BE68EB908A3E92AF3 *)il2cpp_codegen_object_new(DynamicMethod_t983501153061387E39AA134BE68EB908A3E92AF3_il2cpp_TypeInfo_var);
		DynamicMethod__ctor_mC0BF6E026E720E24B47F02705B8563D01829045C(L_14, L_3, L_5, L_10, L_13, /*hidden argument*/NULL);
		__this->set__dynamicMethod_0(L_14);
		DynamicMethod_t983501153061387E39AA134BE68EB908A3E92AF3 * L_15 = __this->get__dynamicMethod_0();
		NullCheck(L_15);
		ILGenerator_tE5AAEAFBCB8FD67493AC6519422504DAA595A13B * L_16 = DynamicMethod_GetILGenerator_mFC605132173AE27768B9E6E75F75CB62C95F8698(L_15, /*hidden argument*/NULL);
		__this->set__il_1(L_16);
		return;
	}
}
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.DynamicDispatching.Emitters.DispatcherEmitter::Emit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dispatcher_tC941911289CA9A4DE7B02505AB9C6F311BF8D3C3 * DispatcherEmitter_Emit_m59D4E979D4DB1500C492AD17A7F581A5346220A8 (DispatcherEmitter_t21567E4DB17C6DBC63A5B07D5A7B311EEF850B8D * __this, const RuntimeMethod* method)
{
	Dispatcher_tC941911289CA9A4DE7B02505AB9C6F311BF8D3C3 * V_0 = NULL;
	{
		VirtActionInvoker0::Invoke(4 /* System.Void Boo.Lang.Runtime.DynamicDispatching.Emitters.DispatcherEmitter::EmitMethodBody() */, __this);
		Dispatcher_tC941911289CA9A4DE7B02505AB9C6F311BF8D3C3 * L_0 = DispatcherEmitter_CreateMethodDispatcher_m003C058C0313BD3A53BDB2BDAA368EF8E797EF3F(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0011;
	}

IL_0011:
	{
		Dispatcher_tC941911289CA9A4DE7B02505AB9C6F311BF8D3C3 * L_1 = V_0;
		return L_1;
	}
}
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.DynamicDispatching.Emitters.DispatcherEmitter::CreateMethodDispatcher()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dispatcher_tC941911289CA9A4DE7B02505AB9C6F311BF8D3C3 * DispatcherEmitter_CreateMethodDispatcher_m003C058C0313BD3A53BDB2BDAA368EF8E797EF3F (DispatcherEmitter_t21567E4DB17C6DBC63A5B07D5A7B311EEF850B8D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DispatcherEmitter_CreateMethodDispatcher_m003C058C0313BD3A53BDB2BDAA368EF8E797EF3F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dispatcher_tC941911289CA9A4DE7B02505AB9C6F311BF8D3C3 * V_0 = NULL;
	{
		DynamicMethod_t983501153061387E39AA134BE68EB908A3E92AF3 * L_0 = __this->get__dynamicMethod_0();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_1 = { reinterpret_cast<intptr_t> (Dispatcher_tC941911289CA9A4DE7B02505AB9C6F311BF8D3C3_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		Delegate_t * L_3 = VirtFuncInvoker1< Delegate_t *, Type_t * >::Invoke(41 /* System.Delegate System.Reflection.Emit.DynamicMethod::CreateDelegate(System.Type) */, L_0, L_2);
		V_0 = ((Dispatcher_tC941911289CA9A4DE7B02505AB9C6F311BF8D3C3 *)CastclassSealed((RuntimeObject*)L_3, Dispatcher_tC941911289CA9A4DE7B02505AB9C6F311BF8D3C3_il2cpp_TypeInfo_var));
		goto IL_001e;
	}

IL_001e:
	{
		Dispatcher_tC941911289CA9A4DE7B02505AB9C6F311BF8D3C3 * L_4 = V_0;
		return L_4;
	}
}
// System.Void Boo.Lang.Runtime.DynamicDispatching.Emitters.DispatcherEmitter::EmitCastOrUnbox(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DispatcherEmitter_EmitCastOrUnbox_mC914B023F8FAD6139F5499B42605952FADD97A81 (DispatcherEmitter_t21567E4DB17C6DBC63A5B07D5A7B311EEF850B8D * __this, Type_t * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DispatcherEmitter_EmitCastOrUnbox_mC914B023F8FAD6139F5499B42605952FADD97A81_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Type_t * L_0 = ___type0;
		NullCheck(L_0);
		bool L_1 = Type_get_IsValueType_mDDCCBAE9B59A483CBC3E5C02E3D68CEBEB2E41A8(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0033;
		}
	}
	{
		ILGenerator_tE5AAEAFBCB8FD67493AC6519422504DAA595A13B * L_3 = __this->get__il_1();
		IL2CPP_RUNTIME_CLASS_INIT(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_il2cpp_TypeInfo_var);
		OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  L_4 = ((OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields*)il2cpp_codegen_static_fields_for(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_il2cpp_TypeInfo_var))->get_Unbox_118();
		Type_t * L_5 = ___type0;
		NullCheck(L_3);
		VirtActionInvoker2< OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 , Type_t * >::Invoke(6 /* System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Type) */, L_3, L_4, L_5);
		ILGenerator_tE5AAEAFBCB8FD67493AC6519422504DAA595A13B * L_6 = __this->get__il_1();
		OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  L_7 = ((OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields*)il2cpp_codegen_static_fields_for(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_il2cpp_TypeInfo_var))->get_Ldobj_112();
		Type_t * L_8 = ___type0;
		NullCheck(L_6);
		VirtActionInvoker2< OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 , Type_t * >::Invoke(6 /* System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Type) */, L_6, L_7, L_8);
		goto IL_0047;
	}

IL_0033:
	{
		ILGenerator_tE5AAEAFBCB8FD67493AC6519422504DAA595A13B * L_9 = __this->get__il_1();
		IL2CPP_RUNTIME_CLASS_INIT(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_il2cpp_TypeInfo_var);
		OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  L_10 = ((OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields*)il2cpp_codegen_static_fields_for(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_il2cpp_TypeInfo_var))->get_Castclass_115();
		Type_t * L_11 = ___type0;
		NullCheck(L_9);
		VirtActionInvoker2< OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 , Type_t * >::Invoke(6 /* System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Type) */, L_9, L_10, L_11);
	}

IL_0047:
	{
		return;
	}
}
// System.Void Boo.Lang.Runtime.DynamicDispatching.Emitters.DispatcherEmitter::BoxIfNeeded(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DispatcherEmitter_BoxIfNeeded_m48F877F64260A48540ADCF32C8CBAAE26DC12CFC (DispatcherEmitter_t21567E4DB17C6DBC63A5B07D5A7B311EEF850B8D * __this, Type_t * ___returnType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DispatcherEmitter_BoxIfNeeded_m48F877F64260A48540ADCF32C8CBAAE26DC12CFC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Type_t * L_0 = ___returnType0;
		NullCheck(L_0);
		bool L_1 = Type_get_IsValueType_mDDCCBAE9B59A483CBC3E5C02E3D68CEBEB2E41A8(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		ILGenerator_tE5AAEAFBCB8FD67493AC6519422504DAA595A13B * L_3 = __this->get__il_1();
		IL2CPP_RUNTIME_CLASS_INIT(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_il2cpp_TypeInfo_var);
		OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  L_4 = ((OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields*)il2cpp_codegen_static_fields_for(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_il2cpp_TypeInfo_var))->get_Box_137();
		Type_t * L_5 = ___returnType0;
		NullCheck(L_3);
		VirtActionInvoker2< OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 , Type_t * >::Invoke(6 /* System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Type) */, L_3, L_4, L_5);
	}

IL_001f:
	{
		return;
	}
}
// System.Void Boo.Lang.Runtime.DynamicDispatching.Emitters.DispatcherEmitter::EmitReturn(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DispatcherEmitter_EmitReturn_mB0DD0E67B3785D69618FF61BD72D5DA7B962728E (DispatcherEmitter_t21567E4DB17C6DBC63A5B07D5A7B311EEF850B8D * __this, Type_t * ___typeOnStack0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DispatcherEmitter_EmitReturn_mB0DD0E67B3785D69618FF61BD72D5DA7B962728E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Type_t * L_0 = ___typeOnStack0;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_1 = { reinterpret_cast<intptr_t> (Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_1, /*hidden argument*/NULL);
		V_0 = (bool)((((RuntimeObject*)(Type_t *)L_0) == ((RuntimeObject*)(Type_t *)L_2))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		ILGenerator_tE5AAEAFBCB8FD67493AC6519422504DAA595A13B * L_4 = __this->get__il_1();
		IL2CPP_RUNTIME_CLASS_INIT(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_il2cpp_TypeInfo_var);
		OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  L_5 = ((OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields*)il2cpp_codegen_static_fields_for(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_il2cpp_TypeInfo_var))->get_Ldnull_20();
		NullCheck(L_4);
		VirtActionInvoker1< OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  >::Invoke(4 /* System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode) */, L_4, L_5);
		goto IL_002d;
	}

IL_0025:
	{
		Type_t * L_6 = ___typeOnStack0;
		DispatcherEmitter_BoxIfNeeded_m48F877F64260A48540ADCF32C8CBAAE26DC12CFC(__this, L_6, /*hidden argument*/NULL);
	}

IL_002d:
	{
		ILGenerator_tE5AAEAFBCB8FD67493AC6519422504DAA595A13B * L_7 = __this->get__il_1();
		IL2CPP_RUNTIME_CLASS_INIT(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_il2cpp_TypeInfo_var);
		OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  L_8 = ((OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields*)il2cpp_codegen_static_fields_for(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_il2cpp_TypeInfo_var))->get_Ret_41();
		NullCheck(L_7);
		VirtActionInvoker1< OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  >::Invoke(4 /* System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode) */, L_7, L_8);
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
// System.Void Boo.Lang.Runtime.DynamicDispatching.Emitters.ImplicitConversionEmitter::.ctor(System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImplicitConversionEmitter__ctor_m6863986AA280D4CF4391CFB86DE07FCAA29D7333 (ImplicitConversionEmitter_t727822B4471E4A8B7D25EE40A6812CF3E3723D89 * __this, MethodInfo_t * ___conversion0, const RuntimeMethod* method)
{
	{
		MethodInfo_t * L_0 = ___conversion0;
		NullCheck(L_0);
		Type_t * L_1 = VirtFuncInvoker0< Type_t * >::Invoke(8 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_0);
		MethodInfo_t * L_2 = ___conversion0;
		NullCheck(L_2);
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_2);
		DispatcherEmitter__ctor_mE0AC3AD9E827799D514A1CBCE00325E8C50FBAD2(__this, L_1, L_3, /*hidden argument*/NULL);
		MethodInfo_t * L_4 = ___conversion0;
		__this->set__conversion_2(L_4);
		return;
	}
}
// System.Void Boo.Lang.Runtime.DynamicDispatching.Emitters.ImplicitConversionEmitter::EmitMethodBody()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImplicitConversionEmitter_EmitMethodBody_m2151EB9D989E1784E17D39004403DC1273035A07 (ImplicitConversionEmitter_t727822B4471E4A8B7D25EE40A6812CF3E3723D89 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ImplicitConversionEmitter_EmitMethodBody_m2151EB9D989E1784E17D39004403DC1273035A07_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ILGenerator_tE5AAEAFBCB8FD67493AC6519422504DAA595A13B * L_0 = ((DispatcherEmitter_t21567E4DB17C6DBC63A5B07D5A7B311EEF850B8D *)__this)->get__il_1();
		IL2CPP_RUNTIME_CLASS_INIT(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_il2cpp_TypeInfo_var);
		OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  L_1 = ((OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields*)il2cpp_codegen_static_fields_for(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_il2cpp_TypeInfo_var))->get_Ldarg_0_2();
		NullCheck(L_0);
		VirtActionInvoker1< OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  >::Invoke(4 /* System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode) */, L_0, L_1);
		MethodInfo_t * L_2 = __this->get__conversion_2();
		NullCheck(L_2);
		ParameterInfoU5BU5D_t9F6F38E4A0B0A78E2F463D1B2C0031716CA7A694* L_3 = VirtFuncInvoker0< ParameterInfoU5BU5D_t9F6F38E4A0B0A78E2F463D1B2C0031716CA7A694* >::Invoke(17 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_2);
		NullCheck(L_3);
		int32_t L_4 = 0;
		ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB * L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_5);
		Type_t * L_6 = VirtFuncInvoker0< Type_t * >::Invoke(7 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_5);
		DispatcherEmitter_EmitCastOrUnbox_mC914B023F8FAD6139F5499B42605952FADD97A81(__this, L_6, /*hidden argument*/NULL);
		ILGenerator_tE5AAEAFBCB8FD67493AC6519422504DAA595A13B * L_7 = ((DispatcherEmitter_t21567E4DB17C6DBC63A5B07D5A7B311EEF850B8D *)__this)->get__il_1();
		OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9  L_8 = ((OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_StaticFields*)il2cpp_codegen_static_fields_for(OpCodes_t54AF6C7895B6D5F7D41CAE40F6F965C4F957B252_il2cpp_TypeInfo_var))->get_Call_39();
		MethodInfo_t * L_9 = __this->get__conversion_2();
		NullCheck(L_7);
		VirtActionInvoker2< OpCode_tC4F68691F424A34F7107D65308C81F29DF70B3F9 , MethodInfo_t * >::Invoke(5 /* System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Reflection.MethodInfo) */, L_7, L_8, L_9);
		MethodInfo_t * L_10 = __this->get__conversion_2();
		NullCheck(L_10);
		Type_t * L_11 = VirtFuncInvoker0< Type_t * >::Invoke(38 /* System.Type System.Reflection.MethodInfo::get_ReturnType() */, L_10);
		DispatcherEmitter_EmitReturn_mB0DD0E67B3785D69618FF61BD72D5DA7B962728E(__this, L_11, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.IEnumerable`1<System.Reflection.MemberInfo> Boo.Lang.Runtime.ExtensionRegistry::get_Extensions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ExtensionRegistry_get_Extensions_m1021411BAB27F23DF0B7E8A71141B4E5E58593C5 (ExtensionRegistry_t1EEFBEDAE2EA76F75BB3B5B63F191E0FBA361800 * __this, const RuntimeMethod* method)
{
	RuntimeObject* V_0 = NULL;
	{
		List_1_t25A7E693C283DBDE12C9B6655A54A917FF6842E4 * L_0 = __this->get__extensions_0();
		V_0 = (RuntimeObject*)L_0;
		goto IL_000a;
	}

IL_000a:
	{
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// System.Void Boo.Lang.Runtime.ExtensionRegistry::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtensionRegistry__ctor_m4F6B4B6366C3B8B0FF2430D3DF2E0EC5FEF8D4D3 (ExtensionRegistry_t1EEFBEDAE2EA76F75BB3B5B63F191E0FBA361800 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExtensionRegistry__ctor_m4F6B4B6366C3B8B0FF2430D3DF2E0EC5FEF8D4D3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t25A7E693C283DBDE12C9B6655A54A917FF6842E4 * L_0 = (List_1_t25A7E693C283DBDE12C9B6655A54A917FF6842E4 *)il2cpp_codegen_object_new(List_1_t25A7E693C283DBDE12C9B6655A54A917FF6842E4_il2cpp_TypeInfo_var);
		List_1__ctor_mD9E9F0575A5D3C8D7D72B94345E840D0175BFCCD(L_0, /*hidden argument*/List_1__ctor_mD9E9F0575A5D3C8D7D72B94345E840D0175BFCCD_RuntimeMethod_var);
		__this->set__extensions_0(L_0);
		RuntimeObject * L_1 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(L_1, /*hidden argument*/NULL);
		__this->set__classLock_1(L_1);
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
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.RuntimeServices::GetDispatcher(System.Object,System.String,System.Type[],Boo.Lang.Runtime.DynamicDispatching.DispatcherCache_DispatcherFactory)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dispatcher_tC941911289CA9A4DE7B02505AB9C6F311BF8D3C3 * RuntimeServices_GetDispatcher_mB85B5277A588486359D1596B5A5551B8EF8317CC (RuntimeObject * ___target0, String_t* ___cacheKeyName1, TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___cacheKeyTypes2, DispatcherFactory_t40A7825A22BBB37116B84045F2D181C1669118D9 * ___factory3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RuntimeServices_GetDispatcher_mB85B5277A588486359D1596B5A5551B8EF8317CC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	DispatcherKey_t3D0E5C3687AA48F20AB11F7CBA0A540981B2EF60 * V_1 = NULL;
	Dispatcher_tC941911289CA9A4DE7B02505AB9C6F311BF8D3C3 * V_2 = NULL;
	Type_t * G_B2_0 = NULL;
	Type_t * G_B1_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		Type_t * L_1 = ((Type_t *)IsInstClass((RuntimeObject*)L_0, Type_t_il2cpp_TypeInfo_var));
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0011;
		}
	}
	{
		RuntimeObject * L_2 = ___target0;
		NullCheck(L_2);
		Type_t * L_3 = Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60(L_2, /*hidden argument*/NULL);
		G_B2_0 = L_3;
	}

IL_0011:
	{
		V_0 = G_B2_0;
		Type_t * L_4 = V_0;
		String_t* L_5 = ___cacheKeyName1;
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_6 = ___cacheKeyTypes2;
		DispatcherKey_t3D0E5C3687AA48F20AB11F7CBA0A540981B2EF60 * L_7 = (DispatcherKey_t3D0E5C3687AA48F20AB11F7CBA0A540981B2EF60 *)il2cpp_codegen_object_new(DispatcherKey_t3D0E5C3687AA48F20AB11F7CBA0A540981B2EF60_il2cpp_TypeInfo_var);
		DispatcherKey__ctor_mD62ABAE73F63DD17E5D589096C5FF9267628C584(L_7, L_4, L_5, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_t1D37418DED273F28D786FAA94181F594C5938EDA_il2cpp_TypeInfo_var);
		DispatcherCache_t02178BC5CA46B75AA29741F6D19F3269D31C10F3 * L_8 = ((RuntimeServices_t1D37418DED273F28D786FAA94181F594C5938EDA_StaticFields*)il2cpp_codegen_static_fields_for(RuntimeServices_t1D37418DED273F28D786FAA94181F594C5938EDA_il2cpp_TypeInfo_var))->get__cache_2();
		DispatcherKey_t3D0E5C3687AA48F20AB11F7CBA0A540981B2EF60 * L_9 = V_1;
		DispatcherFactory_t40A7825A22BBB37116B84045F2D181C1669118D9 * L_10 = ___factory3;
		NullCheck(L_8);
		Dispatcher_tC941911289CA9A4DE7B02505AB9C6F311BF8D3C3 * L_11 = DispatcherCache_Get_m0F8F033AC0137252F4C21A4ED126CCA626E87ECB(L_8, L_9, L_10, /*hidden argument*/NULL);
		V_2 = L_11;
		goto IL_002a;
	}

IL_002a:
	{
		Dispatcher_tC941911289CA9A4DE7B02505AB9C6F311BF8D3C3 * L_12 = V_2;
		return L_12;
	}
}
// System.Object Boo.Lang.Runtime.RuntimeServices::Coerce(System.Object,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * RuntimeServices_Coerce_m4000612E871098C476CE6DA4A51539BF3F474203 (RuntimeObject * ___value0, Type_t * ___toType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RuntimeServices_Coerce_m4000612E871098C476CE6DA4A51539BF3F474203_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass26_0_t0A1D36ABA20ADC9A94843089B5486DEAF48DE1FC * V_0 = NULL;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_1 = NULL;
	Dispatcher_tC941911289CA9A4DE7B02505AB9C6F311BF8D3C3 * V_2 = NULL;
	bool V_3 = false;
	RuntimeObject * V_4 = NULL;
	{
		U3CU3Ec__DisplayClass26_0_t0A1D36ABA20ADC9A94843089B5486DEAF48DE1FC * L_0 = (U3CU3Ec__DisplayClass26_0_t0A1D36ABA20ADC9A94843089B5486DEAF48DE1FC *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass26_0_t0A1D36ABA20ADC9A94843089B5486DEAF48DE1FC_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass26_0__ctor_m1766EE24DC1C8DAA1B866739AA2F761151D6093A(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass26_0_t0A1D36ABA20ADC9A94843089B5486DEAF48DE1FC * L_1 = V_0;
		RuntimeObject * L_2 = ___value0;
		NullCheck(L_1);
		L_1->set_value_0(L_2);
		U3CU3Ec__DisplayClass26_0_t0A1D36ABA20ADC9A94843089B5486DEAF48DE1FC * L_3 = V_0;
		Type_t * L_4 = ___toType1;
		NullCheck(L_3);
		L_3->set_toType_1(L_4);
		U3CU3Ec__DisplayClass26_0_t0A1D36ABA20ADC9A94843089B5486DEAF48DE1FC * L_5 = V_0;
		NullCheck(L_5);
		RuntimeObject * L_6 = L_5->get_value_0();
		V_3 = (bool)((((RuntimeObject*)(RuntimeObject *)L_6) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_0027;
		}
	}
	{
		V_4 = NULL;
		goto IL_0074;
	}

IL_0027:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_8 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_9 = L_8;
		U3CU3Ec__DisplayClass26_0_t0A1D36ABA20ADC9A94843089B5486DEAF48DE1FC * L_10 = V_0;
		NullCheck(L_10);
		Type_t * L_11 = L_10->get_toType_1();
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_11);
		V_1 = L_9;
		U3CU3Ec__DisplayClass26_0_t0A1D36ABA20ADC9A94843089B5486DEAF48DE1FC * L_12 = V_0;
		NullCheck(L_12);
		RuntimeObject * L_13 = L_12->get_value_0();
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_14 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)SZArrayNew(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_15 = L_14;
		U3CU3Ec__DisplayClass26_0_t0A1D36ABA20ADC9A94843089B5486DEAF48DE1FC * L_16 = V_0;
		NullCheck(L_16);
		Type_t * L_17 = L_16->get_toType_1();
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_17);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_17);
		U3CU3Ec__DisplayClass26_0_t0A1D36ABA20ADC9A94843089B5486DEAF48DE1FC * L_18 = V_0;
		DispatcherFactory_t40A7825A22BBB37116B84045F2D181C1669118D9 * L_19 = (DispatcherFactory_t40A7825A22BBB37116B84045F2D181C1669118D9 *)il2cpp_codegen_object_new(DispatcherFactory_t40A7825A22BBB37116B84045F2D181C1669118D9_il2cpp_TypeInfo_var);
		DispatcherFactory__ctor_m1D64E240461E1D8D8B1A5BFD197E4A3D6381DB43(L_19, L_18, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass26_0_U3CCoerceU3Eb__0_mBC2D89CBFF93E54CE4DE93F90348800E63743B2D_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_t1D37418DED273F28D786FAA94181F594C5938EDA_il2cpp_TypeInfo_var);
		Dispatcher_tC941911289CA9A4DE7B02505AB9C6F311BF8D3C3 * L_20 = RuntimeServices_GetDispatcher_mB85B5277A588486359D1596B5A5551B8EF8317CC(L_13, _stringLiteral718B9CC2606DB7386E7921CA21B25F9A67339FB8, L_15, L_19, /*hidden argument*/NULL);
		V_2 = L_20;
		Dispatcher_tC941911289CA9A4DE7B02505AB9C6F311BF8D3C3 * L_21 = V_2;
		U3CU3Ec__DisplayClass26_0_t0A1D36ABA20ADC9A94843089B5486DEAF48DE1FC * L_22 = V_0;
		NullCheck(L_22);
		RuntimeObject * L_23 = L_22->get_value_0();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_24 = V_1;
		NullCheck(L_21);
		RuntimeObject * L_25 = Dispatcher_Invoke_mCB677F1494336516311F4F20F7C9BE1055EB2A4B(L_21, L_23, L_24, /*hidden argument*/NULL);
		V_4 = L_25;
		goto IL_0074;
	}

IL_0074:
	{
		RuntimeObject * L_26 = V_4;
		return L_26;
	}
}
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.RuntimeServices::CreateCoerceDispatcher(System.Object,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dispatcher_tC941911289CA9A4DE7B02505AB9C6F311BF8D3C3 * RuntimeServices_CreateCoerceDispatcher_m29B6144FECBEDCC0E04A9A9B7DCF16F7A2FFC9A1 (RuntimeObject * ___value0, Type_t * ___toType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RuntimeServices_CreateCoerceDispatcher_m29B6144FECBEDCC0E04A9A9B7DCF16F7A2FFC9A1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	MethodInfo_t * V_1 = NULL;
	bool V_2 = false;
	Dispatcher_tC941911289CA9A4DE7B02505AB9C6F311BF8D3C3 * V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B7_0 = 0;
	{
		Type_t * L_0 = ___toType1;
		RuntimeObject * L_1 = ___value0;
		NullCheck(L_0);
		bool L_2 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(107 /* System.Boolean System.Type::IsInstanceOfType(System.Object) */, L_0, L_1);
		V_2 = L_2;
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		Dispatcher_tC941911289CA9A4DE7B02505AB9C6F311BF8D3C3 * L_4 = (Dispatcher_tC941911289CA9A4DE7B02505AB9C6F311BF8D3C3 *)il2cpp_codegen_object_new(Dispatcher_tC941911289CA9A4DE7B02505AB9C6F311BF8D3C3_il2cpp_TypeInfo_var);
		Dispatcher__ctor_m355C0DDBECBEAB4727A772834D33142A8D6AE1EE(L_4, NULL, (intptr_t)((intptr_t)RuntimeServices_IdentityDispatcher_m4C6464FB15CCC94A622AFD166FDA8C910B7B9323_RuntimeMethod_var), /*hidden argument*/NULL);
		V_3 = L_4;
		goto IL_008b;
	}

IL_001b:
	{
		RuntimeObject * L_5 = ___value0;
		V_4 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_5, ICoercible_t70D58799652047D33CD9F196A927BC3A90FF6549_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_6 = V_4;
		if (!L_6)
		{
			goto IL_0039;
		}
	}
	{
		Dispatcher_tC941911289CA9A4DE7B02505AB9C6F311BF8D3C3 * L_7 = (Dispatcher_tC941911289CA9A4DE7B02505AB9C6F311BF8D3C3 *)il2cpp_codegen_object_new(Dispatcher_tC941911289CA9A4DE7B02505AB9C6F311BF8D3C3_il2cpp_TypeInfo_var);
		Dispatcher__ctor_m355C0DDBECBEAB4727A772834D33142A8D6AE1EE(L_7, NULL, (intptr_t)((intptr_t)RuntimeServices_CoercibleDispatcher_m8E53F421061884DE4C4998E26B2AA8220D3FB956_RuntimeMethod_var), /*hidden argument*/NULL);
		V_3 = L_7;
		goto IL_008b;
	}

IL_0039:
	{
		RuntimeObject * L_8 = ___value0;
		NullCheck(L_8);
		Type_t * L_9 = Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60(L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		Type_t * L_10 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_t1D37418DED273F28D786FAA94181F594C5938EDA_il2cpp_TypeInfo_var);
		bool L_11 = RuntimeServices_IsPromotableNumeric_m74995E1B3FE68FA58B80AF432583F80F3456D204(L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0050;
		}
	}
	{
		Type_t * L_12 = ___toType1;
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_t1D37418DED273F28D786FAA94181F594C5938EDA_il2cpp_TypeInfo_var);
		bool L_13 = RuntimeServices_IsPromotableNumeric_m74995E1B3FE68FA58B80AF432583F80F3456D204(L_12, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_13));
		goto IL_0051;
	}

IL_0050:
	{
		G_B7_0 = 0;
	}

IL_0051:
	{
		V_5 = (bool)G_B7_0;
		bool L_14 = V_5;
		if (!L_14)
		{
			goto IL_0061;
		}
	}
	{
		Type_t * L_15 = V_0;
		Type_t * L_16 = ___toType1;
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_t1D37418DED273F28D786FAA94181F594C5938EDA_il2cpp_TypeInfo_var);
		Dispatcher_tC941911289CA9A4DE7B02505AB9C6F311BF8D3C3 * L_17 = RuntimeServices_EmitPromotionDispatcher_m8F2F02F9C8FF257EC8AFA690348100EE8574E475(L_15, L_16, /*hidden argument*/NULL);
		V_3 = L_17;
		goto IL_008b;
	}

IL_0061:
	{
		Type_t * L_18 = V_0;
		Type_t * L_19 = ___toType1;
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_t1D37418DED273F28D786FAA94181F594C5938EDA_il2cpp_TypeInfo_var);
		MethodInfo_t * L_20 = RuntimeServices_FindImplicitConversionOperator_m64C87DBCAF2D3453889505B5C793376D498D33FB(L_18, L_19, /*hidden argument*/NULL);
		V_1 = L_20;
		MethodInfo_t * L_21 = V_1;
		V_6 = (bool)((((RuntimeObject*)(MethodInfo_t *)L_21) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_22 = V_6;
		if (!L_22)
		{
			goto IL_0082;
		}
	}
	{
		Dispatcher_tC941911289CA9A4DE7B02505AB9C6F311BF8D3C3 * L_23 = (Dispatcher_tC941911289CA9A4DE7B02505AB9C6F311BF8D3C3 *)il2cpp_codegen_object_new(Dispatcher_tC941911289CA9A4DE7B02505AB9C6F311BF8D3C3_il2cpp_TypeInfo_var);
		Dispatcher__ctor_m355C0DDBECBEAB4727A772834D33142A8D6AE1EE(L_23, NULL, (intptr_t)((intptr_t)RuntimeServices_IdentityDispatcher_m4C6464FB15CCC94A622AFD166FDA8C910B7B9323_RuntimeMethod_var), /*hidden argument*/NULL);
		V_3 = L_23;
		goto IL_008b;
	}

IL_0082:
	{
		MethodInfo_t * L_24 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_t1D37418DED273F28D786FAA94181F594C5938EDA_il2cpp_TypeInfo_var);
		Dispatcher_tC941911289CA9A4DE7B02505AB9C6F311BF8D3C3 * L_25 = RuntimeServices_EmitImplicitConversionDispatcher_mEBA398DA4B68006AEBB098F4649F3BEB73216816(L_24, /*hidden argument*/NULL);
		V_3 = L_25;
		goto IL_008b;
	}

IL_008b:
	{
		Dispatcher_tC941911289CA9A4DE7B02505AB9C6F311BF8D3C3 * L_26 = V_3;
		return L_26;
	}
}
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.RuntimeServices::EmitPromotionDispatcher(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dispatcher_tC941911289CA9A4DE7B02505AB9C6F311BF8D3C3 * RuntimeServices_EmitPromotionDispatcher_m8F2F02F9C8FF257EC8AFA690348100EE8574E475 (Type_t * ___fromType0, Type_t * ___toType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RuntimeServices_EmitPromotionDispatcher_m8F2F02F9C8FF257EC8AFA690348100EE8574E475_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dispatcher_tC941911289CA9A4DE7B02505AB9C6F311BF8D3C3 * V_0 = NULL;
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (Dispatcher_tC941911289CA9A4DE7B02505AB9C6F311BF8D3C3_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_0, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_2 = { reinterpret_cast<intptr_t> (NumericPromotions_t6D2940F105DB50DBB04EAEEA3D270F2262C56FFB_0_0_0_var) };
		Type_t * L_3 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_2, /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral3F66052A107EAF9BAE7CAD0F61FB462F47EC2C47);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral3F66052A107EAF9BAE7CAD0F61FB462F47EC2C47);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_6 = L_5;
		Type_t * L_7 = ___fromType0;
		int32_t L_8 = Type_GetTypeCode_m3105BBCE671D89EFE212F9BA06AAB90944A6116F(L_7, /*hidden argument*/NULL);
		int32_t L_9 = L_8;
		RuntimeObject * L_10 = Box(TypeCode_t03ED52F888000DAF40C550C434F29F39A23D61C6_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_10);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_10);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_11 = L_6;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteralAE79EA1E9C6391A9ED83A2E18A031B835FEEC0C9);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteralAE79EA1E9C6391A9ED83A2E18A031B835FEEC0C9);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_12 = L_11;
		Type_t * L_13 = ___toType1;
		int32_t L_14 = Type_GetTypeCode_m3105BBCE671D89EFE212F9BA06AAB90944A6116F(L_13, /*hidden argument*/NULL);
		int32_t L_15 = L_14;
		RuntimeObject * L_16 = Box(TypeCode_t03ED52F888000DAF40C550C434F29F39A23D61C6_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_16);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_16);
		String_t* L_17 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_12, /*hidden argument*/NULL);
		NullCheck(L_3);
		MethodInfo_t * L_18 = Type_GetMethod_mB8368D44E32C205D279BA3BB9E6FE1D09D45A6DE(L_3, L_17, /*hidden argument*/NULL);
		Delegate_t * L_19 = Delegate_CreateDelegate_mD7C5EDDB32C63A9BD9DE43AC879AFF4EBC6641D1(L_1, L_18, /*hidden argument*/NULL);
		V_0 = ((Dispatcher_tC941911289CA9A4DE7B02505AB9C6F311BF8D3C3 *)CastclassSealed((RuntimeObject*)L_19, Dispatcher_tC941911289CA9A4DE7B02505AB9C6F311BF8D3C3_il2cpp_TypeInfo_var));
		goto IL_005e;
	}

IL_005e:
	{
		Dispatcher_tC941911289CA9A4DE7B02505AB9C6F311BF8D3C3 * L_20 = V_0;
		return L_20;
	}
}
// System.Boolean Boo.Lang.Runtime.RuntimeServices::IsPromotableNumeric(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeServices_IsPromotableNumeric_m74995E1B3FE68FA58B80AF432583F80F3456D204 (Type_t * ___fromType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RuntimeServices_IsPromotableNumeric_m74995E1B3FE68FA58B80AF432583F80F3456D204_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Type_t * L_0 = ___fromType0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		int32_t L_1 = Type_GetTypeCode_m3105BBCE671D89EFE212F9BA06AAB90944A6116F(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_t1D37418DED273F28D786FAA94181F594C5938EDA_il2cpp_TypeInfo_var);
		bool L_2 = RuntimeServices_IsPromotableNumeric_m3396BD8AD81555B6848E202642BB25E8248DB281(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.RuntimeServices::EmitImplicitConversionDispatcher(System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dispatcher_tC941911289CA9A4DE7B02505AB9C6F311BF8D3C3 * RuntimeServices_EmitImplicitConversionDispatcher_mEBA398DA4B68006AEBB098F4649F3BEB73216816 (MethodInfo_t * ___method0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RuntimeServices_EmitImplicitConversionDispatcher_mEBA398DA4B68006AEBB098F4649F3BEB73216816_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dispatcher_tC941911289CA9A4DE7B02505AB9C6F311BF8D3C3 * V_0 = NULL;
	{
		MethodInfo_t * L_0 = ___method0;
		ImplicitConversionEmitter_t727822B4471E4A8B7D25EE40A6812CF3E3723D89 * L_1 = (ImplicitConversionEmitter_t727822B4471E4A8B7D25EE40A6812CF3E3723D89 *)il2cpp_codegen_object_new(ImplicitConversionEmitter_t727822B4471E4A8B7D25EE40A6812CF3E3723D89_il2cpp_TypeInfo_var);
		ImplicitConversionEmitter__ctor_m6863986AA280D4CF4391CFB86DE07FCAA29D7333(L_1, L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Dispatcher_tC941911289CA9A4DE7B02505AB9C6F311BF8D3C3 * L_2 = DispatcherEmitter_Emit_m59D4E979D4DB1500C492AD17A7F581A5346220A8(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		Dispatcher_tC941911289CA9A4DE7B02505AB9C6F311BF8D3C3 * L_3 = V_0;
		return L_3;
	}
}
// System.Object Boo.Lang.Runtime.RuntimeServices::CoercibleDispatcher(System.Object,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * RuntimeServices_CoercibleDispatcher_m8E53F421061884DE4C4998E26B2AA8220D3FB956 (RuntimeObject * ___o0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RuntimeServices_CoercibleDispatcher_m8E53F421061884DE4C4998E26B2AA8220D3FB956_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___o0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = ___args1;
		NullCheck(L_1);
		int32_t L_2 = 0;
		RuntimeObject * L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_0, ICoercible_t70D58799652047D33CD9F196A927BC3A90FF6549_il2cpp_TypeInfo_var)));
		RuntimeObject * L_4 = InterfaceFuncInvoker1< RuntimeObject *, Type_t * >::Invoke(0 /* System.Object Boo.Lang.Runtime.ICoercible::Coerce(System.Type) */, ICoercible_t70D58799652047D33CD9F196A927BC3A90FF6549_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_0, ICoercible_t70D58799652047D33CD9F196A927BC3A90FF6549_il2cpp_TypeInfo_var)), ((Type_t *)CastclassClass((RuntimeObject*)L_3, Type_t_il2cpp_TypeInfo_var)));
		V_0 = L_4;
		goto IL_0017;
	}

IL_0017:
	{
		RuntimeObject * L_5 = V_0;
		return L_5;
	}
}
// System.Object Boo.Lang.Runtime.RuntimeServices::IdentityDispatcher(System.Object,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * RuntimeServices_IdentityDispatcher_m4C6464FB15CCC94A622AFD166FDA8C910B7B9323 (RuntimeObject * ___o0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___o0;
		V_0 = L_0;
		goto IL_0005;
	}

IL_0005:
	{
		RuntimeObject * L_1 = V_0;
		return L_1;
	}
}
// System.Boolean Boo.Lang.Runtime.RuntimeServices::IsNumeric(System.TypeCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeServices_IsNumeric_mA40815BB649386B608986C0216E3A070D4E6642D (int32_t ___code0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = ___code0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)5)))
		{
			case 0:
			{
				goto IL_003d;
			}
			case 1:
			{
				goto IL_0039;
			}
			case 2:
			{
				goto IL_0041;
			}
			case 3:
			{
				goto IL_004d;
			}
			case 4:
			{
				goto IL_0045;
			}
			case 5:
			{
				goto IL_0051;
			}
			case 6:
			{
				goto IL_0049;
			}
			case 7:
			{
				goto IL_0055;
			}
			case 8:
			{
				goto IL_0059;
			}
			case 9:
			{
				goto IL_005d;
			}
			case 10:
			{
				goto IL_0061;
			}
		}
	}
	{
		goto IL_0065;
	}

IL_0039:
	{
		V_1 = (bool)1;
		goto IL_0069;
	}

IL_003d:
	{
		V_1 = (bool)1;
		goto IL_0069;
	}

IL_0041:
	{
		V_1 = (bool)1;
		goto IL_0069;
	}

IL_0045:
	{
		V_1 = (bool)1;
		goto IL_0069;
	}

IL_0049:
	{
		V_1 = (bool)1;
		goto IL_0069;
	}

IL_004d:
	{
		V_1 = (bool)1;
		goto IL_0069;
	}

IL_0051:
	{
		V_1 = (bool)1;
		goto IL_0069;
	}

IL_0055:
	{
		V_1 = (bool)1;
		goto IL_0069;
	}

IL_0059:
	{
		V_1 = (bool)1;
		goto IL_0069;
	}

IL_005d:
	{
		V_1 = (bool)1;
		goto IL_0069;
	}

IL_0061:
	{
		V_1 = (bool)1;
		goto IL_0069;
	}

IL_0065:
	{
		V_1 = (bool)0;
		goto IL_0069;
	}

IL_0069:
	{
		bool L_2 = V_1;
		return L_2;
	}
}
// System.Boolean Boo.Lang.Runtime.RuntimeServices::EqualityOperator(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeServices_EqualityOperator_mC5F19F6E7F47A63C71D18AD5F3561332CB6047AC (RuntimeObject * ___lhs0, RuntimeObject * ___rhs1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RuntimeServices_EqualityOperator_mC5F19F6E7F47A63C71D18AD5F3561332CB6047AC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RuntimeArray * V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	RuntimeArray * V_9 = NULL;
	bool V_10 = false;
	int32_t G_B9_0 = 0;
	int32_t G_B18_0 = 0;
	{
		RuntimeObject * L_0 = ___lhs0;
		RuntimeObject * L_1 = ___rhs1;
		V_3 = (bool)((((RuntimeObject*)(RuntimeObject *)L_0) == ((RuntimeObject*)(RuntimeObject *)L_1))? 1 : 0);
		bool L_2 = V_3;
		if (!L_2)
		{
			goto IL_0011;
		}
	}
	{
		V_4 = (bool)1;
		goto IL_00c8;
	}

IL_0011:
	{
		RuntimeObject * L_3 = ___lhs0;
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject *)L_3) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_4 = V_5;
		if (!L_4)
		{
			goto IL_0029;
		}
	}
	{
		RuntimeObject * L_5 = ___rhs1;
		RuntimeObject * L_6 = ___lhs0;
		NullCheck(L_5);
		bool L_7 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_5, L_6);
		V_4 = L_7;
		goto IL_00c8;
	}

IL_0029:
	{
		RuntimeObject * L_8 = ___rhs1;
		V_6 = (bool)((((RuntimeObject*)(RuntimeObject *)L_8) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_9 = V_6;
		if (!L_9)
		{
			goto IL_0041;
		}
	}
	{
		RuntimeObject * L_10 = ___lhs0;
		RuntimeObject * L_11 = ___rhs1;
		NullCheck(L_10);
		bool L_12 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_10, L_11);
		V_4 = L_12;
		goto IL_00c8;
	}

IL_0041:
	{
		RuntimeObject * L_13 = ___lhs0;
		NullCheck(L_13);
		Type_t * L_14 = Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60(L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		int32_t L_15 = Type_GetTypeCode_m3105BBCE671D89EFE212F9BA06AAB90944A6116F(L_14, /*hidden argument*/NULL);
		V_0 = L_15;
		RuntimeObject * L_16 = ___rhs1;
		NullCheck(L_16);
		Type_t * L_17 = Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60(L_16, /*hidden argument*/NULL);
		int32_t L_18 = Type_GetTypeCode_m3105BBCE671D89EFE212F9BA06AAB90944A6116F(L_17, /*hidden argument*/NULL);
		V_1 = L_18;
		int32_t L_19 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_t1D37418DED273F28D786FAA94181F594C5938EDA_il2cpp_TypeInfo_var);
		bool L_20 = RuntimeServices_IsNumeric_mA40815BB649386B608986C0216E3A070D4E6642D(L_19, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_0069;
		}
	}
	{
		int32_t L_21 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_t1D37418DED273F28D786FAA94181F594C5938EDA_il2cpp_TypeInfo_var);
		bool L_22 = RuntimeServices_IsNumeric_mA40815BB649386B608986C0216E3A070D4E6642D(L_21, /*hidden argument*/NULL);
		G_B9_0 = ((int32_t)(L_22));
		goto IL_006a;
	}

IL_0069:
	{
		G_B9_0 = 0;
	}

IL_006a:
	{
		V_7 = (bool)G_B9_0;
		bool L_23 = V_7;
		if (!L_23)
		{
			goto IL_007e;
		}
	}
	{
		RuntimeObject * L_24 = ___lhs0;
		int32_t L_25 = V_0;
		RuntimeObject * L_26 = ___rhs1;
		int32_t L_27 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_t1D37418DED273F28D786FAA94181F594C5938EDA_il2cpp_TypeInfo_var);
		bool L_28 = RuntimeServices_EqualityOperator_m636633E886E9F0FAB106440E93A0D216ED68D8C5(L_24, L_25, L_26, L_27, /*hidden argument*/NULL);
		V_4 = L_28;
		goto IL_00c8;
	}

IL_007e:
	{
		RuntimeObject * L_29 = ___lhs0;
		V_2 = ((RuntimeArray *)IsInstClass((RuntimeObject*)L_29, RuntimeArray_il2cpp_TypeInfo_var));
		RuntimeArray * L_30 = V_2;
		V_8 = (bool)((!(((RuntimeObject*)(RuntimeArray *)L_30) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_31 = V_8;
		if (!L_31)
		{
			goto IL_00b1;
		}
	}
	{
		RuntimeObject * L_32 = ___rhs1;
		V_9 = ((RuntimeArray *)IsInstClass((RuntimeObject*)L_32, RuntimeArray_il2cpp_TypeInfo_var));
		RuntimeArray * L_33 = V_9;
		V_10 = (bool)((!(((RuntimeObject*)(RuntimeArray *)L_33) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_34 = V_10;
		if (!L_34)
		{
			goto IL_00b0;
		}
	}
	{
		RuntimeArray * L_35 = V_2;
		RuntimeArray * L_36 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_t1D37418DED273F28D786FAA94181F594C5938EDA_il2cpp_TypeInfo_var);
		bool L_37 = RuntimeServices_ArrayEqualityImpl_m9F5A1DBE98150BCE13D808BF6EE72D5B37417C5C(L_35, L_36, /*hidden argument*/NULL);
		V_4 = L_37;
		goto IL_00c8;
	}

IL_00b0:
	{
	}

IL_00b1:
	{
		RuntimeObject * L_38 = ___lhs0;
		RuntimeObject * L_39 = ___rhs1;
		NullCheck(L_38);
		bool L_40 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_38, L_39);
		if (L_40)
		{
			goto IL_00c3;
		}
	}
	{
		RuntimeObject * L_41 = ___rhs1;
		RuntimeObject * L_42 = ___lhs0;
		NullCheck(L_41);
		bool L_43 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_41, L_42);
		G_B18_0 = ((int32_t)(L_43));
		goto IL_00c4;
	}

IL_00c3:
	{
		G_B18_0 = 1;
	}

IL_00c4:
	{
		V_4 = (bool)G_B18_0;
		goto IL_00c8;
	}

IL_00c8:
	{
		bool L_44 = V_4;
		return L_44;
	}
}
// System.Boolean Boo.Lang.Runtime.RuntimeServices::ArrayEqualityImpl(System.Array,System.Array)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeServices_ArrayEqualityImpl_m9F5A1DBE98150BCE13D808BF6EE72D5B37417C5C (RuntimeArray * ___lhs0, RuntimeArray * ___rhs1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RuntimeServices_ArrayEqualityImpl_m9F5A1DBE98150BCE13D808BF6EE72D5B37417C5C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	int32_t G_B3_0 = 0;
	{
		RuntimeArray * L_0 = ___lhs0;
		NullCheck(L_0);
		int32_t L_1 = Array_get_Rank_m38145B59D67D75F9896A3F8CDA9B966641AE99E1(L_0, /*hidden argument*/NULL);
		if ((!(((uint32_t)1) == ((uint32_t)L_1))))
		{
			goto IL_0018;
		}
	}
	{
		RuntimeArray * L_2 = ___rhs1;
		NullCheck(L_2);
		int32_t L_3 = Array_get_Rank_m38145B59D67D75F9896A3F8CDA9B966641AE99E1(L_2, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)((((int32_t)1) == ((int32_t)L_3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0019;
	}

IL_0018:
	{
		G_B3_0 = 1;
	}

IL_0019:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0029;
		}
	}
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_5 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_5, _stringLiteralF4FF09AA9802AF5CF75274B5035D10199917A521, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, RuntimeServices_ArrayEqualityImpl_m9F5A1DBE98150BCE13D808BF6EE72D5B37417C5C_RuntimeMethod_var);
	}

IL_0029:
	{
		RuntimeArray * L_6 = ___lhs0;
		NullCheck(L_6);
		int32_t L_7 = Array_get_Length_m2239B6393651C3F4631D900EFC1B05DBE8F5466D(L_6, /*hidden argument*/NULL);
		RuntimeArray * L_8 = ___rhs1;
		NullCheck(L_8);
		int32_t L_9 = Array_get_Length_m2239B6393651C3F4631D900EFC1B05DBE8F5466D(L_8, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)((((int32_t)L_7) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_1;
		if (!L_10)
		{
			goto IL_0043;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_0081;
	}

IL_0043:
	{
		V_3 = 0;
		goto IL_006e;
	}

IL_0047:
	{
		RuntimeArray * L_11 = ___lhs0;
		int32_t L_12 = V_3;
		NullCheck(L_11);
		RuntimeObject * L_13 = Array_GetValue_m9B1409D22139722A3149AC49ABCF558A2E066544(L_11, L_12, /*hidden argument*/NULL);
		RuntimeArray * L_14 = ___rhs1;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		RuntimeObject * L_16 = Array_GetValue_m9B1409D22139722A3149AC49ABCF558A2E066544(L_14, L_15, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_t1D37418DED273F28D786FAA94181F594C5938EDA_il2cpp_TypeInfo_var);
		bool L_17 = RuntimeServices_EqualityOperator_mC5F19F6E7F47A63C71D18AD5F3561332CB6047AC(L_13, L_16, /*hidden argument*/NULL);
		V_4 = (bool)((((int32_t)L_17) == ((int32_t)0))? 1 : 0);
		bool L_18 = V_4;
		if (!L_18)
		{
			goto IL_0069;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_0081;
	}

IL_0069:
	{
		int32_t L_19 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_006e:
	{
		int32_t L_20 = V_3;
		RuntimeArray * L_21 = ___lhs0;
		NullCheck(L_21);
		int32_t L_22 = Array_get_Length_m2239B6393651C3F4631D900EFC1B05DBE8F5466D(L_21, /*hidden argument*/NULL);
		V_5 = (bool)((((int32_t)L_20) < ((int32_t)L_22))? 1 : 0);
		bool L_23 = V_5;
		if (L_23)
		{
			goto IL_0047;
		}
	}
	{
		V_2 = (bool)1;
		goto IL_0081;
	}

IL_0081:
	{
		bool L_24 = V_2;
		return L_24;
	}
}
// System.TypeCode Boo.Lang.Runtime.RuntimeServices::GetConvertTypeCode(System.TypeCode,System.TypeCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RuntimeServices_GetConvertTypeCode_mE911590A112059165A03AABF9F0B872588757BFB (int32_t ___lhsTypeCode0, int32_t ___rhsTypeCode1, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B21_0 = 0;
	int32_t G_B30_0 = 0;
	int32_t G_B36_0 = 0;
	int32_t G_B43_0 = 0;
	int32_t G_B51_0 = 0;
	{
		int32_t L_0 = ___lhsTypeCode0;
		if ((((int32_t)((int32_t)15)) == ((int32_t)L_0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___rhsTypeCode1;
		G_B3_0 = ((((int32_t)((int32_t)15)) == ((int32_t)L_1))? 1 : 0);
		goto IL_000e;
	}

IL_000d:
	{
		G_B3_0 = 1;
	}

IL_000e:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		V_1 = ((int32_t)15);
		goto IL_0131;
	}

IL_001b:
	{
		int32_t L_3 = ___lhsTypeCode0;
		if ((((int32_t)((int32_t)14)) == ((int32_t)L_3)))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_4 = ___rhsTypeCode1;
		G_B8_0 = ((((int32_t)((int32_t)14)) == ((int32_t)L_4))? 1 : 0);
		goto IL_0028;
	}

IL_0027:
	{
		G_B8_0 = 1;
	}

IL_0028:
	{
		V_2 = (bool)G_B8_0;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0035;
		}
	}
	{
		V_1 = ((int32_t)14);
		goto IL_0131;
	}

IL_0035:
	{
		int32_t L_6 = ___lhsTypeCode0;
		if ((((int32_t)((int32_t)13)) == ((int32_t)L_6)))
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_7 = ___rhsTypeCode1;
		G_B13_0 = ((((int32_t)((int32_t)13)) == ((int32_t)L_7))? 1 : 0);
		goto IL_0042;
	}

IL_0041:
	{
		G_B13_0 = 1;
	}

IL_0042:
	{
		V_3 = (bool)G_B13_0;
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_004f;
		}
	}
	{
		V_1 = ((int32_t)13);
		goto IL_0131;
	}

IL_004f:
	{
		int32_t L_9 = ___lhsTypeCode0;
		V_4 = (bool)((((int32_t)((int32_t)12)) == ((int32_t)L_9))? 1 : 0);
		bool L_10 = V_4;
		if (!L_10)
		{
			goto IL_0087;
		}
	}
	{
		int32_t L_11 = ___rhsTypeCode1;
		if ((((int32_t)5) == ((int32_t)L_11)))
		{
			goto IL_006f;
		}
	}
	{
		int32_t L_12 = ___rhsTypeCode1;
		if ((((int32_t)7) == ((int32_t)L_12)))
		{
			goto IL_006f;
		}
	}
	{
		int32_t L_13 = ___rhsTypeCode1;
		if ((((int32_t)((int32_t)9)) == ((int32_t)L_13)))
		{
			goto IL_006f;
		}
	}
	{
		int32_t L_14 = ___rhsTypeCode1;
		G_B21_0 = ((((int32_t)((int32_t)11)) == ((int32_t)L_14))? 1 : 0);
		goto IL_0070;
	}

IL_006f:
	{
		G_B21_0 = 1;
	}

IL_0070:
	{
		V_5 = (bool)G_B21_0;
		bool L_15 = V_5;
		if (!L_15)
		{
			goto IL_007f;
		}
	}
	{
		V_1 = ((int32_t)11);
		goto IL_0131;
	}

IL_007f:
	{
		V_1 = ((int32_t)12);
		goto IL_0131;
	}

IL_0087:
	{
		int32_t L_16 = ___rhsTypeCode1;
		V_6 = (bool)((((int32_t)((int32_t)12)) == ((int32_t)L_16))? 1 : 0);
		bool L_17 = V_6;
		if (!L_17)
		{
			goto IL_00b9;
		}
	}
	{
		int32_t L_18 = ___lhsTypeCode0;
		if ((((int32_t)5) == ((int32_t)L_18)))
		{
			goto IL_00a7;
		}
	}
	{
		int32_t L_19 = ___lhsTypeCode0;
		if ((((int32_t)7) == ((int32_t)L_19)))
		{
			goto IL_00a7;
		}
	}
	{
		int32_t L_20 = ___lhsTypeCode0;
		if ((((int32_t)((int32_t)9)) == ((int32_t)L_20)))
		{
			goto IL_00a7;
		}
	}
	{
		int32_t L_21 = ___lhsTypeCode0;
		G_B30_0 = ((((int32_t)((int32_t)11)) == ((int32_t)L_21))? 1 : 0);
		goto IL_00a8;
	}

IL_00a7:
	{
		G_B30_0 = 1;
	}

IL_00a8:
	{
		V_7 = (bool)G_B30_0;
		bool L_22 = V_7;
		if (!L_22)
		{
			goto IL_00b4;
		}
	}
	{
		V_1 = ((int32_t)11);
		goto IL_0131;
	}

IL_00b4:
	{
		V_1 = ((int32_t)12);
		goto IL_0131;
	}

IL_00b9:
	{
		int32_t L_23 = ___lhsTypeCode0;
		if ((((int32_t)((int32_t)11)) == ((int32_t)L_23)))
		{
			goto IL_00c5;
		}
	}
	{
		int32_t L_24 = ___rhsTypeCode1;
		G_B36_0 = ((((int32_t)((int32_t)11)) == ((int32_t)L_24))? 1 : 0);
		goto IL_00c6;
	}

IL_00c5:
	{
		G_B36_0 = 1;
	}

IL_00c6:
	{
		V_8 = (bool)G_B36_0;
		bool L_25 = V_8;
		if (!L_25)
		{
			goto IL_00d2;
		}
	}
	{
		V_1 = ((int32_t)11);
		goto IL_0131;
	}

IL_00d2:
	{
		int32_t L_26 = ___lhsTypeCode0;
		V_9 = (bool)((((int32_t)((int32_t)10)) == ((int32_t)L_26))? 1 : 0);
		bool L_27 = V_9;
		if (!L_27)
		{
			goto IL_00ff;
		}
	}
	{
		int32_t L_28 = ___rhsTypeCode1;
		if ((((int32_t)5) == ((int32_t)L_28)))
		{
			goto IL_00ed;
		}
	}
	{
		int32_t L_29 = ___rhsTypeCode1;
		if ((((int32_t)7) == ((int32_t)L_29)))
		{
			goto IL_00ed;
		}
	}
	{
		int32_t L_30 = ___rhsTypeCode1;
		G_B43_0 = ((((int32_t)((int32_t)9)) == ((int32_t)L_30))? 1 : 0);
		goto IL_00ee;
	}

IL_00ed:
	{
		G_B43_0 = 1;
	}

IL_00ee:
	{
		V_10 = (bool)G_B43_0;
		bool L_31 = V_10;
		if (!L_31)
		{
			goto IL_00fa;
		}
	}
	{
		V_1 = ((int32_t)11);
		goto IL_0131;
	}

IL_00fa:
	{
		V_1 = ((int32_t)10);
		goto IL_0131;
	}

IL_00ff:
	{
		int32_t L_32 = ___rhsTypeCode1;
		V_11 = (bool)((((int32_t)((int32_t)10)) == ((int32_t)L_32))? 1 : 0);
		bool L_33 = V_11;
		if (!L_33)
		{
			goto IL_012c;
		}
	}
	{
		int32_t L_34 = ___lhsTypeCode0;
		if ((((int32_t)5) == ((int32_t)L_34)))
		{
			goto IL_011a;
		}
	}
	{
		int32_t L_35 = ___lhsTypeCode0;
		if ((((int32_t)7) == ((int32_t)L_35)))
		{
			goto IL_011a;
		}
	}
	{
		int32_t L_36 = ___lhsTypeCode0;
		G_B51_0 = ((((int32_t)((int32_t)9)) == ((int32_t)L_36))? 1 : 0);
		goto IL_011b;
	}

IL_011a:
	{
		G_B51_0 = 1;
	}

IL_011b:
	{
		V_12 = (bool)G_B51_0;
		bool L_37 = V_12;
		if (!L_37)
		{
			goto IL_0127;
		}
	}
	{
		V_1 = ((int32_t)11);
		goto IL_0131;
	}

IL_0127:
	{
		V_1 = ((int32_t)10);
		goto IL_0131;
	}

IL_012c:
	{
		V_1 = ((int32_t)9);
		goto IL_0131;
	}

IL_0131:
	{
		int32_t L_38 = V_1;
		return L_38;
	}
}
// System.Boolean Boo.Lang.Runtime.RuntimeServices::EqualityOperator(System.Object,System.TypeCode,System.Object,System.TypeCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeServices_EqualityOperator_m636633E886E9F0FAB106440E93A0D216ED68D8C5 (RuntimeObject * ___lhs0, int32_t ___lhsTypeCode1, RuntimeObject * ___rhs2, int32_t ___rhsTypeCode3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RuntimeServices_EqualityOperator_m636633E886E9F0FAB106440E93A0D216ED68D8C5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	{
		RuntimeObject * L_0 = ___lhs0;
		V_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_0, IConvertible_tB52671A602A64FCCFD27EA5817E2A6C2B693D380_il2cpp_TypeInfo_var));
		RuntimeObject * L_1 = ___rhs2;
		V_1 = ((RuntimeObject*)Castclass((RuntimeObject*)L_1, IConvertible_tB52671A602A64FCCFD27EA5817E2A6C2B693D380_il2cpp_TypeInfo_var));
		int32_t L_2 = ___lhsTypeCode1;
		int32_t L_3 = ___rhsTypeCode3;
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_t1D37418DED273F28D786FAA94181F594C5938EDA_il2cpp_TypeInfo_var);
		int32_t L_4 = RuntimeServices_GetConvertTypeCode_mE911590A112059165A03AABF9F0B872588757BFB(L_2, L_3, /*hidden argument*/NULL);
		V_2 = L_4;
		int32_t L_5 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)((int32_t)10))))
		{
			case 0:
			{
				goto IL_009c;
			}
			case 1:
			{
				goto IL_0089;
			}
			case 2:
			{
				goto IL_0076;
			}
			case 3:
			{
				goto IL_0063;
			}
			case 4:
			{
				goto IL_0050;
			}
			case 5:
			{
				goto IL_003a;
			}
		}
	}
	{
		goto IL_00af;
	}

IL_003a:
	{
		RuntimeObject* L_6 = V_0;
		NullCheck(L_6);
		Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  L_7 = InterfaceFuncInvoker1< Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 , RuntimeObject* >::Invoke(13 /* System.Decimal System.IConvertible::ToDecimal(System.IFormatProvider) */, IConvertible_tB52671A602A64FCCFD27EA5817E2A6C2B693D380_il2cpp_TypeInfo_var, L_6, (RuntimeObject*)NULL);
		RuntimeObject* L_8 = V_1;
		NullCheck(L_8);
		Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  L_9 = InterfaceFuncInvoker1< Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 , RuntimeObject* >::Invoke(13 /* System.Decimal System.IConvertible::ToDecimal(System.IFormatProvider) */, IConvertible_tB52671A602A64FCCFD27EA5817E2A6C2B693D380_il2cpp_TypeInfo_var, L_8, (RuntimeObject*)NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_il2cpp_TypeInfo_var);
		bool L_10 = Decimal_op_Equality_mD69422DB0011607747F9D778C5409FBE732E4BDB(L_7, L_9, /*hidden argument*/NULL);
		V_3 = L_10;
		goto IL_00c2;
	}

IL_0050:
	{
		RuntimeObject* L_11 = V_0;
		NullCheck(L_11);
		double L_12 = InterfaceFuncInvoker1< double, RuntimeObject* >::Invoke(12 /* System.Double System.IConvertible::ToDouble(System.IFormatProvider) */, IConvertible_tB52671A602A64FCCFD27EA5817E2A6C2B693D380_il2cpp_TypeInfo_var, L_11, (RuntimeObject*)NULL);
		RuntimeObject* L_13 = V_1;
		NullCheck(L_13);
		double L_14 = InterfaceFuncInvoker1< double, RuntimeObject* >::Invoke(12 /* System.Double System.IConvertible::ToDouble(System.IFormatProvider) */, IConvertible_tB52671A602A64FCCFD27EA5817E2A6C2B693D380_il2cpp_TypeInfo_var, L_13, (RuntimeObject*)NULL);
		V_3 = (bool)((((double)L_12) == ((double)L_14))? 1 : 0);
		goto IL_00c2;
	}

IL_0063:
	{
		RuntimeObject* L_15 = V_0;
		NullCheck(L_15);
		float L_16 = InterfaceFuncInvoker1< float, RuntimeObject* >::Invoke(11 /* System.Single System.IConvertible::ToSingle(System.IFormatProvider) */, IConvertible_tB52671A602A64FCCFD27EA5817E2A6C2B693D380_il2cpp_TypeInfo_var, L_15, (RuntimeObject*)NULL);
		RuntimeObject* L_17 = V_1;
		NullCheck(L_17);
		float L_18 = InterfaceFuncInvoker1< float, RuntimeObject* >::Invoke(11 /* System.Single System.IConvertible::ToSingle(System.IFormatProvider) */, IConvertible_tB52671A602A64FCCFD27EA5817E2A6C2B693D380_il2cpp_TypeInfo_var, L_17, (RuntimeObject*)NULL);
		V_3 = (bool)((((float)L_16) == ((float)L_18))? 1 : 0);
		goto IL_00c2;
	}

IL_0076:
	{
		RuntimeObject* L_19 = V_0;
		NullCheck(L_19);
		uint64_t L_20 = InterfaceFuncInvoker1< uint64_t, RuntimeObject* >::Invoke(10 /* System.UInt64 System.IConvertible::ToUInt64(System.IFormatProvider) */, IConvertible_tB52671A602A64FCCFD27EA5817E2A6C2B693D380_il2cpp_TypeInfo_var, L_19, (RuntimeObject*)NULL);
		RuntimeObject* L_21 = V_1;
		NullCheck(L_21);
		uint64_t L_22 = InterfaceFuncInvoker1< uint64_t, RuntimeObject* >::Invoke(10 /* System.UInt64 System.IConvertible::ToUInt64(System.IFormatProvider) */, IConvertible_tB52671A602A64FCCFD27EA5817E2A6C2B693D380_il2cpp_TypeInfo_var, L_21, (RuntimeObject*)NULL);
		V_3 = (bool)((((int64_t)L_20) == ((int64_t)L_22))? 1 : 0);
		goto IL_00c2;
	}

IL_0089:
	{
		RuntimeObject* L_23 = V_0;
		NullCheck(L_23);
		int64_t L_24 = InterfaceFuncInvoker1< int64_t, RuntimeObject* >::Invoke(9 /* System.Int64 System.IConvertible::ToInt64(System.IFormatProvider) */, IConvertible_tB52671A602A64FCCFD27EA5817E2A6C2B693D380_il2cpp_TypeInfo_var, L_23, (RuntimeObject*)NULL);
		RuntimeObject* L_25 = V_1;
		NullCheck(L_25);
		int64_t L_26 = InterfaceFuncInvoker1< int64_t, RuntimeObject* >::Invoke(9 /* System.Int64 System.IConvertible::ToInt64(System.IFormatProvider) */, IConvertible_tB52671A602A64FCCFD27EA5817E2A6C2B693D380_il2cpp_TypeInfo_var, L_25, (RuntimeObject*)NULL);
		V_3 = (bool)((((int64_t)L_24) == ((int64_t)L_26))? 1 : 0);
		goto IL_00c2;
	}

IL_009c:
	{
		RuntimeObject* L_27 = V_0;
		NullCheck(L_27);
		uint32_t L_28 = InterfaceFuncInvoker1< uint32_t, RuntimeObject* >::Invoke(8 /* System.UInt32 System.IConvertible::ToUInt32(System.IFormatProvider) */, IConvertible_tB52671A602A64FCCFD27EA5817E2A6C2B693D380_il2cpp_TypeInfo_var, L_27, (RuntimeObject*)NULL);
		RuntimeObject* L_29 = V_1;
		NullCheck(L_29);
		uint32_t L_30 = InterfaceFuncInvoker1< uint32_t, RuntimeObject* >::Invoke(8 /* System.UInt32 System.IConvertible::ToUInt32(System.IFormatProvider) */, IConvertible_tB52671A602A64FCCFD27EA5817E2A6C2B693D380_il2cpp_TypeInfo_var, L_29, (RuntimeObject*)NULL);
		V_3 = (bool)((((int32_t)L_28) == ((int32_t)L_30))? 1 : 0);
		goto IL_00c2;
	}

IL_00af:
	{
		RuntimeObject* L_31 = V_0;
		NullCheck(L_31);
		int32_t L_32 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(7 /* System.Int32 System.IConvertible::ToInt32(System.IFormatProvider) */, IConvertible_tB52671A602A64FCCFD27EA5817E2A6C2B693D380_il2cpp_TypeInfo_var, L_31, (RuntimeObject*)NULL);
		RuntimeObject* L_33 = V_1;
		NullCheck(L_33);
		int32_t L_34 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(7 /* System.Int32 System.IConvertible::ToInt32(System.IFormatProvider) */, IConvertible_tB52671A602A64FCCFD27EA5817E2A6C2B693D380_il2cpp_TypeInfo_var, L_33, (RuntimeObject*)NULL);
		V_3 = (bool)((((int32_t)L_32) == ((int32_t)L_34))? 1 : 0);
		goto IL_00c2;
	}

IL_00c2:
	{
		bool L_35 = V_3;
		return L_35;
	}
}
// System.Boolean Boo.Lang.Runtime.RuntimeServices::IsPromotableNumeric(System.TypeCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeServices_IsPromotableNumeric_m3396BD8AD81555B6848E202642BB25E8248DB281 (int32_t ___code0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = ___code0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)3)))
		{
			case 0:
			{
				goto IL_0069;
			}
			case 1:
			{
				goto IL_0071;
			}
			case 2:
			{
				goto IL_0045;
			}
			case 3:
			{
				goto IL_0041;
			}
			case 4:
			{
				goto IL_0049;
			}
			case 5:
			{
				goto IL_0055;
			}
			case 6:
			{
				goto IL_004d;
			}
			case 7:
			{
				goto IL_0059;
			}
			case 8:
			{
				goto IL_0051;
			}
			case 9:
			{
				goto IL_005d;
			}
			case 10:
			{
				goto IL_0061;
			}
			case 11:
			{
				goto IL_0065;
			}
			case 12:
			{
				goto IL_006d;
			}
		}
	}
	{
		goto IL_0075;
	}

IL_0041:
	{
		V_1 = (bool)1;
		goto IL_0079;
	}

IL_0045:
	{
		V_1 = (bool)1;
		goto IL_0079;
	}

IL_0049:
	{
		V_1 = (bool)1;
		goto IL_0079;
	}

IL_004d:
	{
		V_1 = (bool)1;
		goto IL_0079;
	}

IL_0051:
	{
		V_1 = (bool)1;
		goto IL_0079;
	}

IL_0055:
	{
		V_1 = (bool)1;
		goto IL_0079;
	}

IL_0059:
	{
		V_1 = (bool)1;
		goto IL_0079;
	}

IL_005d:
	{
		V_1 = (bool)1;
		goto IL_0079;
	}

IL_0061:
	{
		V_1 = (bool)1;
		goto IL_0079;
	}

IL_0065:
	{
		V_1 = (bool)1;
		goto IL_0079;
	}

IL_0069:
	{
		V_1 = (bool)1;
		goto IL_0079;
	}

IL_006d:
	{
		V_1 = (bool)1;
		goto IL_0079;
	}

IL_0071:
	{
		V_1 = (bool)1;
		goto IL_0079;
	}

IL_0075:
	{
		V_1 = (bool)0;
		goto IL_0079;
	}

IL_0079:
	{
		bool L_2 = V_1;
		return L_2;
	}
}
// System.Reflection.MethodInfo Boo.Lang.Runtime.RuntimeServices::FindImplicitConversionOperator(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * RuntimeServices_FindImplicitConversionOperator_m64C87DBCAF2D3453889505B5C793376D498D33FB (Type_t * ___from0, Type_t * ___to1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RuntimeServices_FindImplicitConversionOperator_m64C87DBCAF2D3453889505B5C793376D498D33FB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	MethodInfo_t * G_B3_0 = NULL;
	MethodInfo_t * G_B1_0 = NULL;
	MethodInfo_t * G_B2_0 = NULL;
	{
		Type_t * L_0 = ___from0;
		NullCheck(L_0);
		MethodInfoU5BU5D_t93E968F23AF2DB5CFCFF13BE775A0E222C03586B* L_1 = VirtFuncInvoker1< MethodInfoU5BU5D_t93E968F23AF2DB5CFCFF13BE775A0E222C03586B*, int32_t >::Invoke(41 /* System.Reflection.MethodInfo[] System.Type::GetMethods(System.Reflection.BindingFlags) */, L_0, ((int32_t)88));
		Type_t * L_2 = ___from0;
		Type_t * L_3 = ___to1;
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_t1D37418DED273F28D786FAA94181F594C5938EDA_il2cpp_TypeInfo_var);
		MethodInfo_t * L_4 = RuntimeServices_FindImplicitConversionMethod_mC49032327C0FD30F30309E1F2682993CBCE64D32((RuntimeObject*)(RuntimeObject*)L_1, L_2, L_3, /*hidden argument*/NULL);
		MethodInfo_t * L_5 = L_4;
		G_B1_0 = L_5;
		if (L_5)
		{
			G_B3_0 = L_5;
			goto IL_0033;
		}
	}
	{
		Type_t * L_6 = ___to1;
		NullCheck(L_6);
		MethodInfoU5BU5D_t93E968F23AF2DB5CFCFF13BE775A0E222C03586B* L_7 = VirtFuncInvoker1< MethodInfoU5BU5D_t93E968F23AF2DB5CFCFF13BE775A0E222C03586B*, int32_t >::Invoke(41 /* System.Reflection.MethodInfo[] System.Type::GetMethods(System.Reflection.BindingFlags) */, L_6, ((int32_t)88));
		Type_t * L_8 = ___from0;
		Type_t * L_9 = ___to1;
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_t1D37418DED273F28D786FAA94181F594C5938EDA_il2cpp_TypeInfo_var);
		MethodInfo_t * L_10 = RuntimeServices_FindImplicitConversionMethod_mC49032327C0FD30F30309E1F2682993CBCE64D32((RuntimeObject*)(RuntimeObject*)L_7, L_8, L_9, /*hidden argument*/NULL);
		MethodInfo_t * L_11 = L_10;
		G_B2_0 = L_11;
		if (L_11)
		{
			G_B3_0 = L_11;
			goto IL_0033;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_t1D37418DED273F28D786FAA94181F594C5938EDA_il2cpp_TypeInfo_var);
		RuntimeObject* L_12 = RuntimeServices_GetExtensionMethods_m491A35CAC28074626D84E28EFC557A5E6E0E0CB6(/*hidden argument*/NULL);
		Type_t * L_13 = ___from0;
		Type_t * L_14 = ___to1;
		MethodInfo_t * L_15 = RuntimeServices_FindImplicitConversionMethod_mC49032327C0FD30F30309E1F2682993CBCE64D32(L_12, L_13, L_14, /*hidden argument*/NULL);
		G_B3_0 = L_15;
	}

IL_0033:
	{
		V_0 = G_B3_0;
		goto IL_0036;
	}

IL_0036:
	{
		MethodInfo_t * L_16 = V_0;
		return L_16;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Reflection.MethodInfo> Boo.Lang.Runtime.RuntimeServices::GetExtensionMethods()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RuntimeServices_GetExtensionMethods_m491A35CAC28074626D84E28EFC557A5E6E0E0CB6 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RuntimeServices_GetExtensionMethods_m491A35CAC28074626D84E28EFC557A5E6E0E0CB6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGetExtensionMethodsU3Ed__128_tF07224577E6693EDC6CEF69D7044082211368E44 * L_0 = (U3CGetExtensionMethodsU3Ed__128_tF07224577E6693EDC6CEF69D7044082211368E44 *)il2cpp_codegen_object_new(U3CGetExtensionMethodsU3Ed__128_tF07224577E6693EDC6CEF69D7044082211368E44_il2cpp_TypeInfo_var);
		U3CGetExtensionMethodsU3Ed__128__ctor_mDF9EB4C35D4D12A46930ABFD2D053644F160D37A(L_0, ((int32_t)-2), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Reflection.MethodInfo Boo.Lang.Runtime.RuntimeServices::FindImplicitConversionMethod(System.Collections.Generic.IEnumerable`1<System.Reflection.MethodInfo>,System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * RuntimeServices_FindImplicitConversionMethod_mC49032327C0FD30F30309E1F2682993CBCE64D32 (RuntimeObject* ___candidates0, Type_t * ___from1, Type_t * ___to2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RuntimeServices_FindImplicitConversionMethod_mC49032327C0FD30F30309E1F2682993CBCE64D32_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	MethodInfo_t * V_1 = NULL;
	ParameterInfoU5BU5D_t9F6F38E4A0B0A78E2F463D1B2C0031716CA7A694* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	MethodInfo_t * V_7 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		RuntimeObject* L_0 = ___candidates0;
		NullCheck(L_0);
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Reflection.MethodInfo>::GetEnumerator() */, IEnumerable_1_tB6ECBCACB08DC25AD256ED59CCE6DDFA9B5DD0FC_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
	}

IL_0009:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0073;
		}

IL_000b:
		{
			RuntimeObject* L_2 = V_0;
			NullCheck(L_2);
			MethodInfo_t * L_3 = InterfaceFuncInvoker0< MethodInfo_t * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Reflection.MethodInfo>::get_Current() */, IEnumerator_1_t2937F0DC3A50683F70456A2E57B37AEB5AFCC3CE_il2cpp_TypeInfo_var, L_2);
			V_1 = L_3;
			MethodInfo_t * L_4 = V_1;
			NullCheck(L_4);
			String_t* L_5 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_4);
			bool L_6 = String_op_Inequality_m0BD184A74F453A72376E81CC6CAEE2556B80493E(L_5, _stringLiteral973776CA0AE32EA889FC2291F84C4925F2285DDE, /*hidden argument*/NULL);
			V_3 = L_6;
			bool L_7 = V_3;
			if (!L_7)
			{
				goto IL_0029;
			}
		}

IL_0027:
		{
			goto IL_0073;
		}

IL_0029:
		{
			MethodInfo_t * L_8 = V_1;
			NullCheck(L_8);
			Type_t * L_9 = VirtFuncInvoker0< Type_t * >::Invoke(38 /* System.Type System.Reflection.MethodInfo::get_ReturnType() */, L_8);
			Type_t * L_10 = ___to2;
			V_4 = (bool)((((int32_t)((((RuntimeObject*)(Type_t *)L_9) == ((RuntimeObject*)(Type_t *)L_10))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			bool L_11 = V_4;
			if (!L_11)
			{
				goto IL_003d;
			}
		}

IL_003b:
		{
			goto IL_0073;
		}

IL_003d:
		{
			MethodInfo_t * L_12 = V_1;
			NullCheck(L_12);
			ParameterInfoU5BU5D_t9F6F38E4A0B0A78E2F463D1B2C0031716CA7A694* L_13 = VirtFuncInvoker0< ParameterInfoU5BU5D_t9F6F38E4A0B0A78E2F463D1B2C0031716CA7A694* >::Invoke(17 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_12);
			V_2 = L_13;
			ParameterInfoU5BU5D_t9F6F38E4A0B0A78E2F463D1B2C0031716CA7A694* L_14 = V_2;
			NullCheck(L_14);
			V_5 = (bool)((((int32_t)((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			bool L_15 = V_5;
			if (!L_15)
			{
				goto IL_0055;
			}
		}

IL_0053:
		{
			goto IL_0073;
		}

IL_0055:
		{
			ParameterInfoU5BU5D_t9F6F38E4A0B0A78E2F463D1B2C0031716CA7A694* L_16 = V_2;
			NullCheck(L_16);
			int32_t L_17 = 0;
			ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB * L_18 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
			NullCheck(L_18);
			Type_t * L_19 = VirtFuncInvoker0< Type_t * >::Invoke(7 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_18);
			Type_t * L_20 = ___from1;
			NullCheck(L_19);
			bool L_21 = VirtFuncInvoker1< bool, Type_t * >::Invoke(108 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_19, L_20);
			V_6 = (bool)((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
			bool L_22 = V_6;
			if (!L_22)
			{
				goto IL_006e;
			}
		}

IL_006c:
		{
			goto IL_0073;
		}

IL_006e:
		{
			MethodInfo_t * L_23 = V_1;
			V_7 = L_23;
			IL2CPP_LEAVE(0x8D, FINALLY_007d);
		}

IL_0073:
		{
			RuntimeObject* L_24 = V_0;
			NullCheck(L_24);
			bool L_25 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_24);
			if (L_25)
			{
				goto IL_000b;
			}
		}

IL_007b:
		{
			IL2CPP_LEAVE(0x88, FINALLY_007d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_007d;
	}

FINALLY_007d:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_26 = V_0;
			if (!L_26)
			{
				goto IL_0087;
			}
		}

IL_0080:
		{
			RuntimeObject* L_27 = V_0;
			NullCheck(L_27);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_27);
		}

IL_0087:
		{
			IL2CPP_END_FINALLY(125)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(125)
	{
		IL2CPP_JUMP_TBL(0x8D, IL_008d)
		IL2CPP_JUMP_TBL(0x88, IL_0088)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0088:
	{
		V_7 = (MethodInfo_t *)NULL;
		goto IL_008d;
	}

IL_008d:
	{
		MethodInfo_t * L_28 = V_7;
		return L_28;
	}
}
// System.Void Boo.Lang.Runtime.RuntimeServices::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeServices__cctor_mE9046F144E44F9B8990985967CDD784500E1BE00 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RuntimeServices__cctor_mE9046F144E44F9B8990985967CDD784500E1BE00_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)0);
		((RuntimeServices_t1D37418DED273F28D786FAA94181F594C5938EDA_StaticFields*)il2cpp_codegen_static_fields_for(RuntimeServices_t1D37418DED273F28D786FAA94181F594C5938EDA_il2cpp_TypeInfo_var))->set_NoArguments_0(L_0);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_1 = { reinterpret_cast<intptr_t> (RuntimeServices_t1D37418DED273F28D786FAA94181F594C5938EDA_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_1, /*hidden argument*/NULL);
		((RuntimeServices_t1D37418DED273F28D786FAA94181F594C5938EDA_StaticFields*)il2cpp_codegen_static_fields_for(RuntimeServices_t1D37418DED273F28D786FAA94181F594C5938EDA_il2cpp_TypeInfo_var))->set_RuntimeServicesType_1(L_2);
		DispatcherCache_t02178BC5CA46B75AA29741F6D19F3269D31C10F3 * L_3 = (DispatcherCache_t02178BC5CA46B75AA29741F6D19F3269D31C10F3 *)il2cpp_codegen_object_new(DispatcherCache_t02178BC5CA46B75AA29741F6D19F3269D31C10F3_il2cpp_TypeInfo_var);
		DispatcherCache__ctor_mD120B13AF4A9CFEBA294D6CB619E05FCC9AB4002(L_3, /*hidden argument*/NULL);
		((RuntimeServices_t1D37418DED273F28D786FAA94181F594C5938EDA_StaticFields*)il2cpp_codegen_static_fields_for(RuntimeServices_t1D37418DED273F28D786FAA94181F594C5938EDA_il2cpp_TypeInfo_var))->set__cache_2(L_3);
		ExtensionRegistry_t1EEFBEDAE2EA76F75BB3B5B63F191E0FBA361800 * L_4 = (ExtensionRegistry_t1EEFBEDAE2EA76F75BB3B5B63F191E0FBA361800 *)il2cpp_codegen_object_new(ExtensionRegistry_t1EEFBEDAE2EA76F75BB3B5B63F191E0FBA361800_il2cpp_TypeInfo_var);
		ExtensionRegistry__ctor_m4F6B4B6366C3B8B0FF2430D3DF2E0EC5FEF8D4D3(L_4, /*hidden argument*/NULL);
		((RuntimeServices_t1D37418DED273F28D786FAA94181F594C5938EDA_StaticFields*)il2cpp_codegen_static_fields_for(RuntimeServices_t1D37418DED273F28D786FAA94181F594C5938EDA_il2cpp_TypeInfo_var))->set__extensions_3(L_4);
		bool L_5 = ((bool)1);
		RuntimeObject * L_6 = Box(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var, &L_5);
		((RuntimeServices_t1D37418DED273F28D786FAA94181F594C5938EDA_StaticFields*)il2cpp_codegen_static_fields_for(RuntimeServices_t1D37418DED273F28D786FAA94181F594C5938EDA_il2cpp_TypeInfo_var))->set_True_4(L_6);
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
// System.Void Boo.Lang.Runtime.RuntimeServices_<>c__DisplayClass26_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass26_0__ctor_m1766EE24DC1C8DAA1B866739AA2F761151D6093A (U3CU3Ec__DisplayClass26_0_t0A1D36ABA20ADC9A94843089B5486DEAF48DE1FC * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.RuntimeServices_<>c__DisplayClass26_0::<Coerce>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dispatcher_tC941911289CA9A4DE7B02505AB9C6F311BF8D3C3 * U3CU3Ec__DisplayClass26_0_U3CCoerceU3Eb__0_mBC2D89CBFF93E54CE4DE93F90348800E63743B2D (U3CU3Ec__DisplayClass26_0_t0A1D36ABA20ADC9A94843089B5486DEAF48DE1FC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass26_0_U3CCoerceU3Eb__0_mBC2D89CBFF93E54CE4DE93F90348800E63743B2D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = __this->get_value_0();
		Type_t * L_1 = __this->get_toType_1();
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_t1D37418DED273F28D786FAA94181F594C5938EDA_il2cpp_TypeInfo_var);
		Dispatcher_tC941911289CA9A4DE7B02505AB9C6F311BF8D3C3 * L_2 = RuntimeServices_CreateCoerceDispatcher_m29B6144FECBEDCC0E04A9A9B7DCF16F7A2FFC9A1(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
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
// System.Void Boo.Lang.Runtime.RuntimeServices_<GetExtensionMethods>d__128::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetExtensionMethodsU3Ed__128__ctor_mDF9EB4C35D4D12A46930ABFD2D053644F160D37A (U3CGetExtensionMethodsU3Ed__128_tF07224577E6693EDC6CEF69D7044082211368E44 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * L_1 = Thread_get_CurrentThread_mB7A83CAE2B9A74CEA053196DFD1AF1E7AB30A70E(/*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = Thread_get_ManagedThreadId_m7FA85162CB00713B94EF5708B19120F791D3AAD1(L_1, /*hidden argument*/NULL);
		__this->set_U3CU3El__initialThreadId_2(L_2);
		return;
	}
}
// System.Void Boo.Lang.Runtime.RuntimeServices_<GetExtensionMethods>d__128::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetExtensionMethodsU3Ed__128_System_IDisposable_Dispose_mD786F9FE94949857A5AA222229495D1B98954755 (U3CGetExtensionMethodsU3Ed__128_tF07224577E6693EDC6CEF69D7044082211368E44 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0020;
	}

IL_0014:
	{
	}

IL_0015:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x1E, FINALLY_0017);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0017;
	}

FINALLY_0017:
	{ // begin finally (depth: 1)
		U3CGetExtensionMethodsU3Ed__128_U3CU3Em__Finally1_m1A3402F9C7274FA5A6EA522E57ABF2214FC73EC7(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(23)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(23)
	{
		IL2CPP_JUMP_TBL(0x1E, IL_001e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_001e:
	{
		goto IL_0020;
	}

IL_0020:
	{
		return;
	}
}
// System.Boolean Boo.Lang.Runtime.RuntimeServices_<GetExtensionMethods>d__128::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetExtensionMethodsU3Ed__128_MoveNext_m8F06F08EB8D9ED3B2C3855D443EDADEEBC9CD7D5 (U3CGetExtensionMethodsU3Ed__128_tF07224577E6693EDC6CEF69D7044082211368E44 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetExtensionMethodsU3Ed__128_MoveNext_m8F06F08EB8D9ED3B2C3855D443EDADEEBC9CD7D5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			int32_t L_1 = V_1;
			if (!L_1)
			{
				goto IL_0012;
			}
		}

IL_000a:
		{
			goto IL_000c;
		}

IL_000c:
		{
			int32_t L_2 = V_1;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_0014;
			}
		}

IL_0010:
		{
			goto IL_0016;
		}

IL_0012:
		{
			goto IL_001d;
		}

IL_0014:
		{
			goto IL_0084;
		}

IL_0016:
		{
			V_0 = (bool)0;
			goto IL_00ba;
		}

IL_001d:
		{
			__this->set_U3CU3E1__state_0((-1));
			IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_t1D37418DED273F28D786FAA94181F594C5938EDA_il2cpp_TypeInfo_var);
			ExtensionRegistry_t1EEFBEDAE2EA76F75BB3B5B63F191E0FBA361800 * L_3 = ((RuntimeServices_t1D37418DED273F28D786FAA94181F594C5938EDA_StaticFields*)il2cpp_codegen_static_fields_for(RuntimeServices_t1D37418DED273F28D786FAA94181F594C5938EDA_il2cpp_TypeInfo_var))->get__extensions_3();
			NullCheck(L_3);
			RuntimeObject* L_4 = ExtensionRegistry_get_Extensions_m1021411BAB27F23DF0B7E8A71141B4E5E58593C5(L_3, /*hidden argument*/NULL);
			NullCheck(L_4);
			RuntimeObject* L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Reflection.MemberInfo>::GetEnumerator() */, IEnumerable_1_t7FD352CD84740777D0C2732F0F63D13741D636BB_il2cpp_TypeInfo_var, L_4);
			__this->set_U3CU3Es__1_3(L_5);
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			goto IL_0093;
		}

IL_0045:
		{
			RuntimeObject* L_6 = __this->get_U3CU3Es__1_3();
			NullCheck(L_6);
			MemberInfo_t * L_7 = InterfaceFuncInvoker0< MemberInfo_t * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Reflection.MemberInfo>::get_Current() */, IEnumerator_1_t2D9BC58107505273DB7B0FC53358697221FA5831_il2cpp_TypeInfo_var, L_6);
			__this->set_U3CmemberU3E5__2_4(L_7);
			MemberInfo_t * L_8 = __this->get_U3CmemberU3E5__2_4();
			NullCheck(L_8);
			int32_t L_9 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Reflection.MemberTypes System.Reflection.MemberInfo::get_MemberType() */, L_8);
			V_2 = (bool)((((int32_t)L_9) == ((int32_t)8))? 1 : 0);
			bool L_10 = V_2;
			if (!L_10)
			{
				goto IL_008c;
			}
		}

IL_0068:
		{
			MemberInfo_t * L_11 = __this->get_U3CmemberU3E5__2_4();
			__this->set_U3CU3E2__current_1(((MethodInfo_t *)CastclassClass((RuntimeObject*)L_11, MethodInfo_t_il2cpp_TypeInfo_var)));
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_00ba;
		}

IL_0084:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
		}

IL_008c:
		{
			__this->set_U3CmemberU3E5__2_4((MemberInfo_t *)NULL);
		}

IL_0093:
		{
			RuntimeObject* L_12 = __this->get_U3CU3Es__1_3();
			NullCheck(L_12);
			bool L_13 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_12);
			if (L_13)
			{
				goto IL_0045;
			}
		}

IL_00a0:
		{
			U3CGetExtensionMethodsU3Ed__128_U3CU3Em__Finally1_m1A3402F9C7274FA5A6EA522E57ABF2214FC73EC7(__this, /*hidden argument*/NULL);
			__this->set_U3CU3Es__1_3((RuntimeObject*)NULL);
			V_0 = (bool)0;
			goto IL_00ba;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_00b2;
	}

FAULT_00b2:
	{ // begin fault (depth: 1)
		U3CGetExtensionMethodsU3Ed__128_System_IDisposable_Dispose_mD786F9FE94949857A5AA222229495D1B98954755(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(178)
	} // end fault
	IL2CPP_CLEANUP(178)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00ba:
	{
		bool L_14 = V_0;
		return L_14;
	}
}
// System.Void Boo.Lang.Runtime.RuntimeServices_<GetExtensionMethods>d__128::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetExtensionMethodsU3Ed__128_U3CU3Em__Finally1_m1A3402F9C7274FA5A6EA522E57ABF2214FC73EC7 (U3CGetExtensionMethodsU3Ed__128_tF07224577E6693EDC6CEF69D7044082211368E44 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetExtensionMethodsU3Ed__128_U3CU3Em__Finally1_m1A3402F9C7274FA5A6EA522E57ABF2214FC73EC7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0((-1));
		RuntimeObject* L_0 = __this->get_U3CU3Es__1_3();
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_U3CU3Es__1_3();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_1);
	}

IL_001b:
	{
		return;
	}
}
// System.Reflection.MethodInfo Boo.Lang.Runtime.RuntimeServices_<GetExtensionMethods>d__128::System.Collections.Generic.IEnumerator<System.Reflection.MethodInfo>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * U3CGetExtensionMethodsU3Ed__128_System_Collections_Generic_IEnumeratorU3CSystem_Reflection_MethodInfoU3E_get_Current_mFA3F5147D4274D24F28C6D1B9EBAC191783BED28 (U3CGetExtensionMethodsU3Ed__128_tF07224577E6693EDC6CEF69D7044082211368E44 * __this, const RuntimeMethod* method)
{
	{
		MethodInfo_t * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Boo.Lang.Runtime.RuntimeServices_<GetExtensionMethods>d__128::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetExtensionMethodsU3Ed__128_System_Collections_IEnumerator_Reset_m2D810A34B3F3C4CAC5CA95E77DEA45C57278A398 (U3CGetExtensionMethodsU3Ed__128_tF07224577E6693EDC6CEF69D7044082211368E44 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetExtensionMethodsU3Ed__128_System_Collections_IEnumerator_Reset_m2D810A34B3F3C4CAC5CA95E77DEA45C57278A398_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CGetExtensionMethodsU3Ed__128_System_Collections_IEnumerator_Reset_m2D810A34B3F3C4CAC5CA95E77DEA45C57278A398_RuntimeMethod_var);
	}
}
// System.Object Boo.Lang.Runtime.RuntimeServices_<GetExtensionMethods>d__128::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetExtensionMethodsU3Ed__128_System_Collections_IEnumerator_get_Current_mFA622FAFCF7EC26D733C7F775F065409728F0360 (U3CGetExtensionMethodsU3Ed__128_tF07224577E6693EDC6CEF69D7044082211368E44 * __this, const RuntimeMethod* method)
{
	{
		MethodInfo_t * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Reflection.MethodInfo> Boo.Lang.Runtime.RuntimeServices_<GetExtensionMethods>d__128::System.Collections.Generic.IEnumerable<System.Reflection.MethodInfo>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetExtensionMethodsU3Ed__128_System_Collections_Generic_IEnumerableU3CSystem_Reflection_MethodInfoU3E_GetEnumerator_mE6613C07A226DD249746C2A589A504C3111ED14A (U3CGetExtensionMethodsU3Ed__128_tF07224577E6693EDC6CEF69D7044082211368E44 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetExtensionMethodsU3Ed__128_System_Collections_Generic_IEnumerableU3CSystem_Reflection_MethodInfoU3E_GetEnumerator_mE6613C07A226DD249746C2A589A504C3111ED14A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetExtensionMethodsU3Ed__128_tF07224577E6693EDC6CEF69D7044082211368E44 * V_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_1 = __this->get_U3CU3El__initialThreadId_2();
		Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * L_2 = Thread_get_CurrentThread_mB7A83CAE2B9A74CEA053196DFD1AF1E7AB30A70E(/*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = Thread_get_ManagedThreadId_m7FA85162CB00713B94EF5708B19120F791D3AAD1(L_2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_0027;
		}
	}
	{
		__this->set_U3CU3E1__state_0(0);
		V_0 = __this;
		goto IL_002e;
	}

IL_0027:
	{
		U3CGetExtensionMethodsU3Ed__128_tF07224577E6693EDC6CEF69D7044082211368E44 * L_4 = (U3CGetExtensionMethodsU3Ed__128_tF07224577E6693EDC6CEF69D7044082211368E44 *)il2cpp_codegen_object_new(U3CGetExtensionMethodsU3Ed__128_tF07224577E6693EDC6CEF69D7044082211368E44_il2cpp_TypeInfo_var);
		U3CGetExtensionMethodsU3Ed__128__ctor_mDF9EB4C35D4D12A46930ABFD2D053644F160D37A(L_4, 0, /*hidden argument*/NULL);
		V_0 = L_4;
	}

IL_002e:
	{
		U3CGetExtensionMethodsU3Ed__128_tF07224577E6693EDC6CEF69D7044082211368E44 * L_5 = V_0;
		return L_5;
	}
}
// System.Collections.IEnumerator Boo.Lang.Runtime.RuntimeServices_<GetExtensionMethods>d__128::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetExtensionMethodsU3Ed__128_System_Collections_IEnumerable_GetEnumerator_m5954A7F57B5B8C2AE4BFC1CDB321F79FB480DD60 (U3CGetExtensionMethodsU3Ed__128_tF07224577E6693EDC6CEF69D7044082211368E44 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = U3CGetExtensionMethodsU3Ed__128_System_Collections_Generic_IEnumerableU3CSystem_Reflection_MethodInfoU3E_GetEnumerator_mE6613C07A226DD249746C2A589A504C3111ED14A(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
