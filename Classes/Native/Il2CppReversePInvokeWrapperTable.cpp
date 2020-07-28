#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


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

#ifdef __clang__
#pragma clang diagnostic pop
#endif

extern "C" void DEFAULT_CALL ReversePInvokeWrapper_OSSpecificSynchronizationContext_InvocationEntry_m056BCE43FF155AAE872FF7E565F8F72A50D26147(intptr_t ___arg0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_AppleStoreImpl_MessageCallback_mDE43054189C8A5C0B7DB3F4757D2C1AABA4320A0(char* ___subject0, char* ___payload1, char* ___receipt2, char* ___transactionId3);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_FacebookStoreImpl_MessageCallback_m5BC6D65390C3AFC0DA2D451344D9738715D685B7(char* ___subject0, char* ___payload1, char* ___receipt2, char* ___transactionId3);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_TizenStoreImpl_MessageCallback_mDF9CE38D9695439D13532876D786508FD7150C98(char* ___subject0, char* ___payload1, char* ___receipt2, char* ___transactionId3);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IosBanner_UnityAdsBannerDidShow_m1A079EE5E9CEA88AEBEA348B60111A16092DBCB2(char* ___placementId0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IosBanner_UnityAdsBannerDidHide_mEF18317CD14C2B52D15BDD124555CB5293E4A572(char* ___placementId0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IosBanner_UnityAdsBannerClick_mED692CFCB7652477BCE97C61E72D4A27A073BF9F(char* ___placementId0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IosBanner_UnityAdsBannerDidError_m24BEC577F1B80C8869E83C6E67821F7644017DFC(char* ___message0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IosBanner_UnityAdsBannerDidUnload_m0492DFE01B79726A472B958AD5A2A2C1695D130E(char* ___placementId0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IosBanner_UnityAdsBannerDidLoad_m6B3DCE76B6690E1FFD1C22E0BA32654E5BA37AFB(char* ___placementId0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IosPlatform_UnityAdsReady_m91C5EC0B490322D3B26B0B040B5A4E083E08F5B5(char* ___placementId0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IosPlatform_UnityAdsDidError_m27D90D0CB3BEC6EC7FB6416069531B58FA541C09(int64_t ___rawError0, char* ___message1);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IosPlatform_UnityAdsDidStart_m30B252EAA93D3CE6D92B0E5D008B410AC5EE1568(char* ___placementId0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IosPlatform_UnityAdsDidFinish_mFF0A2BF540AAAFB343FA8BB3741058C9ECB6E083(char* ___placementId0, int64_t ___rawShowResult1);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_PurchasingPlatform_UnityAdsDidInitiatePurchasingCommand_mB9A8A1916B414B2174697F579DAFE0B1539A4B42(char* ___eventString0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_PurchasingPlatform_UnityAdsPurchasingGetProductCatalog_mB2EDA3A2CDA8777AA42D5C5BD9105D900CA7EC53();
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_PurchasingPlatform_UnityAdsPurchasingGetPurchasingVersion_m24BEE1E7B75080E3B4C1245543638788088E1E2C();
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_PurchasingPlatform_UnityAdsPurchasingInitialize_mA273FC695E1715068D7C7DE342AFB87D3EDA16B4();


extern const Il2CppMethodPointer g_ReversePInvokeWrapperPointers[];
const Il2CppMethodPointer g_ReversePInvokeWrapperPointers[18] = 
{
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_OSSpecificSynchronizationContext_InvocationEntry_m056BCE43FF155AAE872FF7E565F8F72A50D26147),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_AppleStoreImpl_MessageCallback_mDE43054189C8A5C0B7DB3F4757D2C1AABA4320A0),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_FacebookStoreImpl_MessageCallback_m5BC6D65390C3AFC0DA2D451344D9738715D685B7),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_TizenStoreImpl_MessageCallback_mDF9CE38D9695439D13532876D786508FD7150C98),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IosBanner_UnityAdsBannerDidShow_m1A079EE5E9CEA88AEBEA348B60111A16092DBCB2),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IosBanner_UnityAdsBannerDidHide_mEF18317CD14C2B52D15BDD124555CB5293E4A572),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IosBanner_UnityAdsBannerClick_mED692CFCB7652477BCE97C61E72D4A27A073BF9F),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IosBanner_UnityAdsBannerDidError_m24BEC577F1B80C8869E83C6E67821F7644017DFC),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IosBanner_UnityAdsBannerDidUnload_m0492DFE01B79726A472B958AD5A2A2C1695D130E),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IosBanner_UnityAdsBannerDidLoad_m6B3DCE76B6690E1FFD1C22E0BA32654E5BA37AFB),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IosPlatform_UnityAdsReady_m91C5EC0B490322D3B26B0B040B5A4E083E08F5B5),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IosPlatform_UnityAdsDidError_m27D90D0CB3BEC6EC7FB6416069531B58FA541C09),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IosPlatform_UnityAdsDidStart_m30B252EAA93D3CE6D92B0E5D008B410AC5EE1568),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IosPlatform_UnityAdsDidFinish_mFF0A2BF540AAAFB343FA8BB3741058C9ECB6E083),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_PurchasingPlatform_UnityAdsDidInitiatePurchasingCommand_mB9A8A1916B414B2174697F579DAFE0B1539A4B42),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_PurchasingPlatform_UnityAdsPurchasingGetProductCatalog_mB2EDA3A2CDA8777AA42D5C5BD9105D900CA7EC53),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_PurchasingPlatform_UnityAdsPurchasingGetPurchasingVersion_m24BEE1E7B75080E3B4C1245543638788088E1E2C),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_PurchasingPlatform_UnityAdsPurchasingInitialize_mA273FC695E1715068D7C7DE342AFB87D3EDA16B4),
};
