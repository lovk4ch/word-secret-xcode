#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif



#include "codegen/il2cpp-codegen-metadata.h"





IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END




// 0x00000001 System.Void UnityEngine.Purchasing.UnityNativePurchasingCallback::.ctor(System.Object,System.IntPtr)
extern void UnityNativePurchasingCallback__ctor_mB78EE550A774D3E98D4F9057777372466C571A1D ();
// 0x00000002 System.Void UnityEngine.Purchasing.UnityNativePurchasingCallback::Invoke(System.String,System.String,System.String,System.String)
extern void UnityNativePurchasingCallback_Invoke_m189F56EE975FD21945564D2B248FFBD6DB95A868 ();
// 0x00000003 System.IAsyncResult UnityEngine.Purchasing.UnityNativePurchasingCallback::BeginInvoke(System.String,System.String,System.String,System.String,System.AsyncCallback,System.Object)
extern void UnityNativePurchasingCallback_BeginInvoke_m6CAD7CAE501971470BC0EA18F8EFB5DF33EF4012 ();
// 0x00000004 System.Void UnityEngine.Purchasing.UnityNativePurchasingCallback::EndInvoke(System.IAsyncResult)
extern void UnityNativePurchasingCallback_EndInvoke_m0A09768CB8F37B750AB840C9B20462A496344B1B ();
// 0x00000005 System.Void UnityEngine.Purchasing.INativeTizenStore::SetUnityPurchasingCallback(UnityEngine.Purchasing.UnityNativePurchasingCallback)
// 0x00000006 System.Void UnityEngine.Purchasing.INativeTizenStore::SetGroupId(System.String)
// 0x00000007 System.Void UnityEngine.Purchasing.TizenStoreBindings::SetGroupId(System.String)
extern void TizenStoreBindings_SetGroupId_mA1C0A4E8C5B265D38641077F6B7F61703788663E ();
// 0x00000008 System.Void UnityEngine.Purchasing.TizenStoreBindings::SetUnityPurchasingCallback(UnityEngine.Purchasing.UnityNativePurchasingCallback)
extern void TizenStoreBindings_SetUnityPurchasingCallback_m5952D9C670E711B49743CCAF71A25FAE49B7DF5A ();
// 0x00000009 System.Void UnityEngine.Purchasing.TizenStoreBindings::RetrieveProducts(System.String)
extern void TizenStoreBindings_RetrieveProducts_m0897A7A615DC00B90BD4D4FC847841B857DCE29F ();
// 0x0000000A System.Void UnityEngine.Purchasing.TizenStoreBindings::Purchase(System.String,System.String)
extern void TizenStoreBindings_Purchase_mBD229ABAAC86BFD19F8FA4BBF1EF87D2276E6AE8 ();
// 0x0000000B System.Void UnityEngine.Purchasing.TizenStoreBindings::FinishTransaction(System.String,System.String)
extern void TizenStoreBindings_FinishTransaction_mB5AE2C60AA83D5E49198D4089F90359E42EB75C6 ();
// 0x0000000C System.Void UnityEngine.Purchasing.TizenStoreBindings::.ctor()
extern void TizenStoreBindings__ctor_mF9115044617475D4F6D8995CFB7175704D68A6AF ();
static Il2CppMethodPointer s_methodPointers[12] = 
{
	UnityNativePurchasingCallback__ctor_mB78EE550A774D3E98D4F9057777372466C571A1D,
	UnityNativePurchasingCallback_Invoke_m189F56EE975FD21945564D2B248FFBD6DB95A868,
	UnityNativePurchasingCallback_BeginInvoke_m6CAD7CAE501971470BC0EA18F8EFB5DF33EF4012,
	UnityNativePurchasingCallback_EndInvoke_m0A09768CB8F37B750AB840C9B20462A496344B1B,
	NULL,
	NULL,
	TizenStoreBindings_SetGroupId_mA1C0A4E8C5B265D38641077F6B7F61703788663E,
	TizenStoreBindings_SetUnityPurchasingCallback_m5952D9C670E711B49743CCAF71A25FAE49B7DF5A,
	TizenStoreBindings_RetrieveProducts_m0897A7A615DC00B90BD4D4FC847841B857DCE29F,
	TizenStoreBindings_Purchase_mBD229ABAAC86BFD19F8FA4BBF1EF87D2276E6AE8,
	TizenStoreBindings_FinishTransaction_mB5AE2C60AA83D5E49198D4089F90359E42EB75C6,
	TizenStoreBindings__ctor_mF9115044617475D4F6D8995CFB7175704D68A6AF,
};
static const int32_t s_InvokerIndices[12] = 
{
	137,
	429,
	1553,
	26,
	26,
	26,
	26,
	26,
	26,
	27,
	27,
	23,
};
extern const Il2CppCodeGenModule g_TizenCodeGenModule;
const Il2CppCodeGenModule g_TizenCodeGenModule = 
{
	"Tizen.dll",
	12,
	s_methodPointers,
	s_InvokerIndices,
	0,
	NULL,
	0,
	NULL,
	0,
	NULL,
	NULL,
};
