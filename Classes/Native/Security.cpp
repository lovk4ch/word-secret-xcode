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

struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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

// LipingShare.LCLib.Asn1Processor.Asn1Node
struct Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16;
// LipingShare.LCLib.Asn1Processor.Asn1Parser
struct Asn1Parser_t6EAA9B28705029F260D90731751E990EF3848620;
// LipingShare.LCLib.Asn1Processor.Oid
struct Oid_t5B93F085287F1B3F4A9F315146D0C08398544492;
// LipingShare.LCLib.Asn1Processor.RelativeOid
struct RelativeOid_tA04AF790321D95FE09233E82417A118B0B1BBBBB;
// Mono.Security.Cryptography.KeyPairPersistence
struct KeyPairPersistence_t5C070E8D158094F7D0CC5D591F30EDFFB39849A2;
// Mono.Security.Cryptography.RSAManaged
struct RSAManaged_t7FC74A986C888D9301EC82EBE4A37C293CDA963A;
// System.ArgumentException
struct ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.ArrayList
struct ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_tED6676A6535375B72FAC3BE58CAB9DC30BE201CD;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_t9BB02C59F6A73E760F875CCD8AA6D1A1ACE61970;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_t059E2E9F339047F683CA7038812E624189E7F0CD;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t1F07EAC22CC1D4F279164B144240E4718BD7E7A9;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt>
struct List_1_tEA4ACF1E95999E8EC25D6544E307BD87261ADFC9;
// System.Collections.Generic.List`1<UnityEngine.Purchasing.Security.SignerInfo>
struct List_1_tC8E7792306B075D1A58B9A4E5F2E9FB5A18DCB61;
// System.Collections.Generic.List`1<UnityEngine.Purchasing.Security.X509Cert>
struct List_1_t2A256183E185A61A299A823886E7884EFE41A289;
// System.Collections.Hashtable
struct Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Collections.Specialized.StringDictionary
struct StringDictionary_t9B6306775C5F70981BCB8A30603B4C93C22844FF;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Exception
struct Exception_t;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB;
// System.IO.MemoryStream
struct MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C;
// System.IO.Stream
struct Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_t934CCA482596402177BAF86727F169872D74934E;
// System.Security.Cryptography.RSACryptoServiceProvider
struct RSACryptoServiceProvider_t6DC0FC3205BA6CDCA4FF2AEEF566D8F0CCE26AD4;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Text.DecoderFallback
struct DecoderFallback_t128445EB7676870485230893338EF044F6B72F60;
// System.Text.EncoderFallback
struct EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63;
// System.Text.Encoding
struct Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4;
// System.Text.UTF8Encoding
struct UTF8Encoding_t77ED103B749A387EF072C3429F48C91D12CA08DE;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t640F0CBB720BB9CD14B90B7B81624471A9F56D87;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt
struct AppleInAppPurchaseReceipt_t8495AF48B320D4EA26939FA02F9BA8784CF02F90;
// UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt[]
struct AppleInAppPurchaseReceiptU5BU5D_tF628955FD1FC660B5652CC727A20066839251DA8;
// UnityEngine.Purchasing.Security.AppleReceipt
struct AppleReceipt_t19AF99FA817972A222A162F65B730C469BFF8698;
// UnityEngine.Purchasing.Security.AppleReceiptParser
struct AppleReceiptParser_t34DA429F3553864684768F2E95D35C1D6A90F3E4;
// UnityEngine.Purchasing.Security.DistinguishedName
struct DistinguishedName_t869CBAB24FEC86C60A469DB0BE479FCAB3FAC521;
// UnityEngine.Purchasing.Security.IAPSecurityException
struct IAPSecurityException_t9E59EAFE4B1540C47F60E82B9532F7D910B09D6A;
// UnityEngine.Purchasing.Security.InvalidPKCS7Data
struct InvalidPKCS7Data_t66D90EB0467E0D800AA9F61CF113C851101D136A;
// UnityEngine.Purchasing.Security.InvalidRSAData
struct InvalidRSAData_tCBAC13419C66041C71750F1889052E7E4B77FC0E;
// UnityEngine.Purchasing.Security.InvalidTimeFormat
struct InvalidTimeFormat_t803BE227F2D3A4A788D5992EAA0B479232FA2661;
// UnityEngine.Purchasing.Security.InvalidX509Data
struct InvalidX509Data_tC7C3A26B4358B509276F77D08FED22DE46D6A666;
// UnityEngine.Purchasing.Security.PKCS7
struct PKCS7_t851499113E52C57B34831AE4D5AB00C973B7D21A;
// UnityEngine.Purchasing.Security.RSAKey
struct RSAKey_t821B15EEDED09C7088C34750E22FDA0E30B8220C;
// UnityEngine.Purchasing.Security.SignerInfo
struct SignerInfo_tA6405C48DB7EAE3441CB701FC072A86AD372CAF4;
// UnityEngine.Purchasing.Security.SignerInfo[]
struct SignerInfoU5BU5D_t94F0C9A959EC0D332C0E70FFDF437BBFA4EE3DE9;
// UnityEngine.Purchasing.Security.UnsupportedSignerInfoVersion
struct UnsupportedSignerInfoVersion_t78C3F3CA53D3A5E2EC25278D6D4483ED761E18F4;
// UnityEngine.Purchasing.Security.X509Cert
struct X509Cert_tEC5F828EE93872CC82CDA3C2462EE085E4EA6B59;
// UnityEngine.Purchasing.Security.X509Cert[]
struct X509CertU5BU5D_tCB80F92946769EB133E51E1D8624977BF6616A0D;

IL2CPP_EXTERN_C RuntimeClass* AppleInAppPurchaseReceipt_t8495AF48B320D4EA26939FA02F9BA8784CF02F90_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AppleReceiptParser_t34DA429F3553864684768F2E95D35C1D6A90F3E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AppleReceipt_t19AF99FA817972A222A162F65B730C469BFF8698_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Asn1Parser_t6EAA9B28705029F260D90731751E990EF3848620_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Asn1Util_tBFEA56D2C3543BF68547786BAE0EC50B2DEE0886_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DistinguishedName_t869CBAB24FEC86C60A469DB0BE479FCAB3FAC521_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidPKCS7Data_t66D90EB0467E0D800AA9F61CF113C851101D136A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidRSAData_tCBAC13419C66041C71750F1889052E7E4B77FC0E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidTimeFormat_t803BE227F2D3A4A788D5992EAA0B479232FA2661_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidX509Data_tC7C3A26B4358B509276F77D08FED22DE46D6A666_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t2A256183E185A61A299A823886E7884EFE41A289_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tC8E7792306B075D1A58B9A4E5F2E9FB5A18DCB61_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tEA4ACF1E95999E8EC25D6544E307BD87261ADFC9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Oid_t5B93F085287F1B3F4A9F315146D0C08398544492_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PKCS7_t851499113E52C57B34831AE4D5AB00C973B7D21A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RSACryptoServiceProvider_t6DC0FC3205BA6CDCA4FF2AEEF566D8F0CCE26AD4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RSAKey_t821B15EEDED09C7088C34750E22FDA0E30B8220C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RelativeOid_tA04AF790321D95FE09233E82417A118B0B1BBBBB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SignerInfo_tA6405C48DB7EAE3441CB701FC072A86AD372CAF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringDictionary_t9B6306775C5F70981BCB8A30603B4C93C22844FF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UTF8Encoding_t77ED103B749A387EF072C3429F48C91D12CA08DE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnsupportedSignerInfoVersion_t78C3F3CA53D3A5E2EC25278D6D4483ED761E18F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* X509Cert_tEC5F828EE93872CC82CDA3C2462EE085E4EA6B59_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tF929F227B031DB1A567E309D7A693BDF58171228____59F5BD34B6C013DEACC784F69C67E95150033A84_0_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral064E276D0BD2F99AFB73108287D125B2CBB8E042;
IL2CPP_EXTERN_C String_t* _stringLiteral088FB1A4AB057F4FCF7D487006499060C7FE5773;
IL2CPP_EXTERN_C String_t* _stringLiteral092562912D8C071E5578CC459743BDB8E594C8B6;
IL2CPP_EXTERN_C String_t* _stringLiteral0A421EC84D05A6F524879973736EF820C58A69AB;
IL2CPP_EXTERN_C String_t* _stringLiteral0FE37E40E5DAB3AC411C2DDCA6D21991E811ACFA;
IL2CPP_EXTERN_C String_t* _stringLiteral16C76BD0C6D6FEB19D45A94D0F883114A4DA6198;
IL2CPP_EXTERN_C String_t* _stringLiteral21BD9B00968D05EB5CF21915370A3B7B86CAB75B;
IL2CPP_EXTERN_C String_t* _stringLiteral2A6AD6C70E1596010DD60A32C042F12BD5A6B02C;
IL2CPP_EXTERN_C String_t* _stringLiteral2C809D24DC7F35393288F0A442B7E00E8982AA9D;
IL2CPP_EXTERN_C String_t* _stringLiteral2DC2EE1440BEAC9DCAE3BEBC4D45EA29EC9C9CEB;
IL2CPP_EXTERN_C String_t* _stringLiteral3A52CE780950D4D969792A2559CD519D7EE8C727;
IL2CPP_EXTERN_C String_t* _stringLiteral3B330731A188B19FDF61999609E5E9B932BB400B;
IL2CPP_EXTERN_C String_t* _stringLiteral3BCB8C740C1F7F5BBC1CD34FD40C2B30A466BB77;
IL2CPP_EXTERN_C String_t* _stringLiteral3F3A72B39989C3B5936E6186F5A4AC23FDB05828;
IL2CPP_EXTERN_C String_t* _stringLiteral42099B4AF021E53FD8FD4E056C2568D7C2E3FFA8;
IL2CPP_EXTERN_C String_t* _stringLiteral496B6990BE391A19ECC7FDDD46DDA9E1293E116F;
IL2CPP_EXTERN_C String_t* _stringLiteral4E4C48D4A0E41B3E48AB97F36EEEBC15111A78FE;
IL2CPP_EXTERN_C String_t* _stringLiteral504D93E89F018FE90F5D6BD71734A5D395BD0D17;
IL2CPP_EXTERN_C String_t* _stringLiteral513E853432982DFE130969DDB6E9757C8FDBA201;
IL2CPP_EXTERN_C String_t* _stringLiteral52596FD1F8D7EA10A7682B8EBD09CDC8F17478D3;
IL2CPP_EXTERN_C String_t* _stringLiteral53492B80EB6A949F82D701393B269876274100E5;
IL2CPP_EXTERN_C String_t* _stringLiteral539C014337268356520DDFA5B82FE561AAF64D78;
IL2CPP_EXTERN_C String_t* _stringLiteral55C5D81017A30EDF1E47BA1B78C377A5E5EBFD50;
IL2CPP_EXTERN_C String_t* _stringLiteral59FD3952E182123A525F3B3B5D3DF57AEBD07287;
IL2CPP_EXTERN_C String_t* _stringLiteral5C7A91EFCEDF247304D1731FF3B75E425CE37B31;
IL2CPP_EXTERN_C String_t* _stringLiteral5DB7F5DF667107D2C97456978C3089765801D04D;
IL2CPP_EXTERN_C String_t* _stringLiteral5EEA1192CEE62F578B918C608B737FD73302DF5A;
IL2CPP_EXTERN_C String_t* _stringLiteral694DEBC82C41EE77CCB35D6C3AA36519F25FE472;
IL2CPP_EXTERN_C String_t* _stringLiteral6C67774CC22A3FA623B2310EFE0D62F11D8694A2;
IL2CPP_EXTERN_C String_t* _stringLiteral6C8453D3068655974181930570AA7E07E9733071;
IL2CPP_EXTERN_C String_t* _stringLiteral6F3DCE8E6ECB57F69A6AF0D152302713B5DFD69C;
IL2CPP_EXTERN_C String_t* _stringLiteral70DF823BEE9235949B37F6280700AA01B1BC6981;
IL2CPP_EXTERN_C String_t* _stringLiteral72F73068315E3A6873135BAAB8A88CB488A78803;
IL2CPP_EXTERN_C String_t* _stringLiteral7347328E7E81FB4E988D9868B6592AA1DFE8F95D;
IL2CPP_EXTERN_C String_t* _stringLiteral7811B8DE95C320CB7EFF3C16EC8D2E67B54060AC;
IL2CPP_EXTERN_C String_t* _stringLiteral7AFEC00C242908DCFA9B158615E0E680F8AA5506;
IL2CPP_EXTERN_C String_t* _stringLiteral80A4E4D9CBDC9463B54D4795E498F3E9D72E67A9;
IL2CPP_EXTERN_C String_t* _stringLiteral846DF225E0F9F0A40843D075F5A16925B036DF56;
IL2CPP_EXTERN_C String_t* _stringLiteral8CB1B9AF1D54730BDF130A46673B64E523B7AF2B;
IL2CPP_EXTERN_C String_t* _stringLiteral92F627E6114FDE8EC8E85F5DC7EB0D8548926FD9;
IL2CPP_EXTERN_C String_t* _stringLiteral94777790A0AB3CCF4D9E11EC051B963C917D2154;
IL2CPP_EXTERN_C String_t* _stringLiteral982D9B9213F99ECE99848AF7437AA329924971F5;
IL2CPP_EXTERN_C String_t* _stringLiteral99052D63E3C8ED1DA4A0A9B5D6E2E8E0290A715E;
IL2CPP_EXTERN_C String_t* _stringLiteral9AD181F04C4923B0BCEE429E6643D58A48EA87D7;
IL2CPP_EXTERN_C String_t* _stringLiteralA6701A7439FD0341B41DCB538041BC25305F7D47;
IL2CPP_EXTERN_C String_t* _stringLiteralAB68D8E893A82CFF70979BA20BEC0023DBFE4BE3;
IL2CPP_EXTERN_C String_t* _stringLiteralB6E5B998C7AF5F92851E4C92D45FB50911075CFD;
IL2CPP_EXTERN_C String_t* _stringLiteralBA8AB5A0280B953AA97435FF8946CBCBB2755A27;
IL2CPP_EXTERN_C String_t* _stringLiteralBB589D0621E5472F470FA3425A234C74B1E202E8;
IL2CPP_EXTERN_C String_t* _stringLiteralC86122F6E216B3EE52908A85738D92FB114C0A47;
IL2CPP_EXTERN_C String_t* _stringLiteralC8FE5895971742042551C048D3575DC18F1A5C48;
IL2CPP_EXTERN_C String_t* _stringLiteralD102FBCEBDE3A28A0C9BE431E102FD07A048C6BB;
IL2CPP_EXTERN_C String_t* _stringLiteralD3D492857E1DBB3F931B9545F041B17FFA2B6B7B;
IL2CPP_EXTERN_C String_t* _stringLiteralD658AB3411EDE9682D5458ABA41A89A359B2782E;
IL2CPP_EXTERN_C String_t* _stringLiteralD70D521FB77F3048E86B60682DA8834AE3BA5DAF;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDB1F43325FC17134A0573F49C6EE494693ED8ECE;
IL2CPP_EXTERN_C String_t* _stringLiteralDC18FC03C668DB9D9836F4FB8B8B9F9DB4DBCE2C;
IL2CPP_EXTERN_C String_t* _stringLiteralDCC4F44B7F730F641EED423AAF9CE40B863020CB;
IL2CPP_EXTERN_C String_t* _stringLiteralDD3B0CAB4F2ACC9D42995B79C553B786890D1014;
IL2CPP_EXTERN_C String_t* _stringLiteralE7064F0B80F61DBC65915311032D27BAA569AE2A;
IL2CPP_EXTERN_C String_t* _stringLiteralEEE5779991A5565F1F83AF07247DB16D55D9365B;
IL2CPP_EXTERN_C String_t* _stringLiteralEEF19C54306DAA69EDA49C0272623BDB5E2B341F;
IL2CPP_EXTERN_C String_t* _stringLiteralF1C29F28FFF2EF150EE30D0284B3E000A607163A;
IL2CPP_EXTERN_C String_t* _stringLiteralF6BC50B783487D5044E2B9EC8C81DF90893A4771;
IL2CPP_EXTERN_C String_t* _stringLiteralF82664804E9A045FF7E92AB79B1295858B69B1B5;
IL2CPP_EXTERN_C String_t* _stringLiteralF9BBD38E5BEB32D6DB31892464AE64A293FC2197;
IL2CPP_EXTERN_C String_t* _stringLiteralFD916A733B7A811CD35B7057C8AF918C5FA637EB;
IL2CPP_EXTERN_C const RuntimeMethod* AppleReceiptParser_ArrayEquals_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_mBE6123F33FC1CFCCA2B361DD44796AF04DDAD009_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AppleReceiptParser_ParseReceipt_m8104213AF42B03EFDE42CCD556A99CBD8DAA80AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Asn1Node_GeneralDecode_m825D2D4ADFFBF202236418DA9CDD88C05791EA5C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Asn1Node_ListDecode_m66D5F28DAEC3F743756FB08535EC484FB8A66A82_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Asn1Node_get_Data_mD11992CD2F1CCEC2B0E47491D3B6AF04F9C34EC7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Asn1Parser_LoadData_mF8B6E7723F02588C758AFF9A34C766B8B4FB03E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mAD4B2095526B4742201B24C5ADF1717AFB15EF89_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mCA7075EA6548A18B929368520217975094841997_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mB490F7029D7451FAF06E3020040E604B500BA3B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mEA41AEAE79570A9410777F6B90969532564025DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DistinguishedName__ctor_m81915730899DDF606AF0805C8F51E619C0E68D77_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m39838129E809FB6B5DABDAA8F4C3B4D807AC18DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m48E5F21339F7EFA4099CAEFAB627A45367BD7AAF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m694D5361AC43B73506418BC8B8300F9102B58CF6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m79904C3E54880608C5AD2D31B799A194B27AB4A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m1E6991C091762B64C6BBA48A9DE9F0CBF4F5FDAE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m3130DE70A254B5EDFE35D7D1A249F3308756C34B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m68C4F11A222C3F5A3D96653F0AF8E22F53BF9D14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Oid_Decode_m368D830A3E047ECDE79A357A25B2A8E367F0C647_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PKCS7_CheckStructure_m1C5B3FA520361A3366E2FF3CCA724FC343DCCB70_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RSAKey_ParseNode_m308E6FE460D267F64F6D982B1BDF872D088E8E9B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RelativeOid_Decode_m3ACC1BAECCEF97A28927E5F53D1AC1732385CE5C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SignerInfo__ctor_m89D5D8BD1D5E40668D8EBCE0CEBD9BC238BF2264_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* X509Cert_ParseNode_m733170F2285F10F016AFAB3CF10554F71FDD90B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* X509Cert_ParseTime_m1C2E48C535DECE21B6A920D1C8724758EAED027C_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t AppleReceiptParser_ParseInAppReceipt_m9C2C6064E5AA40BD67B0D2B07393576E4A7B5E17_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AppleReceiptParser_ParseReceipt_m8104213AF42B03EFDE42CCD556A99CBD8DAA80AC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AppleReceiptParser_Parse_mCAA5211755A26C24A67F5C1AC4ACF7F6B15C9012_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AppleReceiptParser_TryParseDateTimeNode_m62DA626A30540CF79C556D30DBB891443EAB802D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AppleReceiptParser__cctor_mCC41594010BEE8066F2629D8A338298DF957DC2E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Asn1Node_ClearAll_mB85307804DCBFDC3A9ADD9F3DB631D54A41A68A1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Asn1Node_FormatLineHexString_m84B989C7EFD166698EA3E62FD100F8D7F60931E7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Asn1Node_FormatLineString_m22757245208B64E6BC87B209BB1191B33B2DEB89_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Asn1Node_GeneralDecode_m825D2D4ADFFBF202236418DA9CDD88C05791EA5C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Asn1Node_GetChildNode_m9D9513B22B565B7739D03F39C6B8F7D5AFE85010_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Asn1Node_GetDataStr_m98F2E9DC3ACABD540BD1FE3155A5B0DE8E0A89DC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Asn1Node_GetHexPrintingStr_m2C5C36DE9808831F7395AFF0E0DB999FB4DD5441_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Asn1Node_GetIndentStr_m7ED765F57686361EF3E9F1C9A48CA6A155B3DCCF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Asn1Node_GetListStr_m26EB1B44AC47102EC0C7514186C11CE73726014D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Asn1Node_GetText_mF77FD071F26B7F6A3A879DBCBE6AF5FE2403C204_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Asn1Node_Init_mE60C4D88B0D1A2957CA9B271402302545585E4FB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Asn1Node_ListDecode_m66D5F28DAEC3F743756FB08535EC484FB8A66A82_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Asn1Node_ResetChildNodePar_m1908B4A975AE86DF6DEC30C9E498BD5888DD8F30_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Asn1Node_ResetDataLengthFieldWidth_m941BC464CA4C3990E89CD221A8C6FCE21D97EC2F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Asn1Node_SaveData_mE256A287688AF4E0A3492CD79E1E0104F2CF5BA0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Asn1Node__ctor_m3F16F03AE395841D39A0A284561028C2229BF86F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Asn1Node__ctor_mDF96FC0D52B88A7A44E6243ECA069B59C75035FC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Asn1Node_get_Data_mD11992CD2F1CCEC2B0E47491D3B6AF04F9C34EC7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Asn1Node_get_TagName_m5D6B8061E8F709B755D2A677292DFF9BE7E18844_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Asn1Parser_GetNodeTextHeader_m6272D8BEA402890545167E9C92E554A97B52292A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Asn1Parser_LoadData_mF8B6E7723F02588C758AFF9A34C766B8B4FB03E7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Asn1Parser__ctor_mFFC9A3372F766DBBEE823423DD2D6F9730C84E50_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Asn1Util_BytesToString_m1887FCB8C42067024ABECD8AADB82FE9C10CB2A3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Asn1Util_DERLengthEncode_mA9F7B1782C76D6877D706D78E99DA95002C2DDC3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Asn1Util_FormatString_mE0F0FECC3332BFD9488F697A0643920B20B0B821_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Asn1Util_GenStr_m03ED7C1092BBF4EF64FEB70FAE9C49868CCBE7E6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Asn1Util_GetTagName_m632B4809ADA197245B177C5D5CA7DCCF072B978B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Asn1Util_ToHexString_mD35BF6D2E0CD4D8CC7FFA9829350CC522A75B8DF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Asn1Util__cctor_m8087007A2271E53EF3644AE6FD0690EC9458446E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DistinguishedName_ToString_mA9E324F1C7BFD8F3BD1A3C2EA38C6C7D2B02884F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DistinguishedName__ctor_m81915730899DDF606AF0805C8F51E619C0E68D77_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IAPSecurityException__ctor_mEA6EA5CADD09965AA85C53EE97DFDAEAEA6BA478_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Oid_Decode_m1C6BD88CE261E00DF019558DB9AD2E64C65602C9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Oid_Decode_m368D830A3E047ECDE79A357A25B2A8E367F0C647_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Oid_GetOidName_m70F7C7FA6605F51CCD63598FA18AE26C521B9391_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Oid__cctor_m3A53771453DB488E5F898C5669B0F97A83C20F90_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PKCS7_CheckStructure_m1C5B3FA520361A3366E2FF3CCA724FC343DCCB70_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RSAKey_ParseNode_m308E6FE460D267F64F6D982B1BDF872D088E8E9B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RSAKey_ToXML_m01179A07C26E2704719C39077239C71F7F3CE85D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RelativeOid_Decode_m3ACC1BAECCEF97A28927E5F53D1AC1732385CE5C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RelativeOid__ctor_m31B82A6D54A8D09F8F895B180782CD27C8908478_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SignerInfo__ctor_m89D5D8BD1D5E40668D8EBCE0CEBD9BC238BF2264_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t X509Cert_ParseNode_m733170F2285F10F016AFAB3CF10554F71FDD90B8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t X509Cert_ParseTime_m1C2E48C535DECE21B6A920D1C8724758EAED027C_MetadataUsageId;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
struct AppleInAppPurchaseReceiptU5BU5D_tF628955FD1FC660B5652CC727A20066839251DA8;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t353A409C24FC8E96B58911D95009CC697BFF8592 
{
public:

public:
};


// System.Object


// LipingShare.LCLib.Asn1Processor.Asn1Node
struct  Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16  : public RuntimeObject
{
public:
	// System.Byte LipingShare.LCLib.Asn1Processor.Asn1Node::tag
	uint8_t ___tag_0;
	// System.Int64 LipingShare.LCLib.Asn1Processor.Asn1Node::dataOffset
	int64_t ___dataOffset_1;
	// System.Int64 LipingShare.LCLib.Asn1Processor.Asn1Node::dataLength
	int64_t ___dataLength_2;
	// System.Int64 LipingShare.LCLib.Asn1Processor.Asn1Node::lengthFieldBytes
	int64_t ___lengthFieldBytes_3;
	// System.Byte[] LipingShare.LCLib.Asn1Processor.Asn1Node::data
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___data_4;
	// System.Collections.ArrayList LipingShare.LCLib.Asn1Processor.Asn1Node::childNodeList
	ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * ___childNodeList_5;
	// System.Byte LipingShare.LCLib.Asn1Processor.Asn1Node::unusedBits
	uint8_t ___unusedBits_6;
	// System.Int64 LipingShare.LCLib.Asn1Processor.Asn1Node::deepness
	int64_t ___deepness_7;
	// System.String LipingShare.LCLib.Asn1Processor.Asn1Node::path
	String_t* ___path_8;
	// LipingShare.LCLib.Asn1Processor.Asn1Node LipingShare.LCLib.Asn1Processor.Asn1Node::parentNode
	Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * ___parentNode_9;
	// System.Boolean LipingShare.LCLib.Asn1Processor.Asn1Node::requireRecalculatePar
	bool ___requireRecalculatePar_10;
	// System.Boolean LipingShare.LCLib.Asn1Processor.Asn1Node::isIndefiniteLength
	bool ___isIndefiniteLength_11;
	// System.Boolean LipingShare.LCLib.Asn1Processor.Asn1Node::parseEncapsulatedData
	bool ___parseEncapsulatedData_12;

public:
	inline static int32_t get_offset_of_tag_0() { return static_cast<int32_t>(offsetof(Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16, ___tag_0)); }
	inline uint8_t get_tag_0() const { return ___tag_0; }
	inline uint8_t* get_address_of_tag_0() { return &___tag_0; }
	inline void set_tag_0(uint8_t value)
	{
		___tag_0 = value;
	}

	inline static int32_t get_offset_of_dataOffset_1() { return static_cast<int32_t>(offsetof(Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16, ___dataOffset_1)); }
	inline int64_t get_dataOffset_1() const { return ___dataOffset_1; }
	inline int64_t* get_address_of_dataOffset_1() { return &___dataOffset_1; }
	inline void set_dataOffset_1(int64_t value)
	{
		___dataOffset_1 = value;
	}

	inline static int32_t get_offset_of_dataLength_2() { return static_cast<int32_t>(offsetof(Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16, ___dataLength_2)); }
	inline int64_t get_dataLength_2() const { return ___dataLength_2; }
	inline int64_t* get_address_of_dataLength_2() { return &___dataLength_2; }
	inline void set_dataLength_2(int64_t value)
	{
		___dataLength_2 = value;
	}

	inline static int32_t get_offset_of_lengthFieldBytes_3() { return static_cast<int32_t>(offsetof(Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16, ___lengthFieldBytes_3)); }
	inline int64_t get_lengthFieldBytes_3() const { return ___lengthFieldBytes_3; }
	inline int64_t* get_address_of_lengthFieldBytes_3() { return &___lengthFieldBytes_3; }
	inline void set_lengthFieldBytes_3(int64_t value)
	{
		___lengthFieldBytes_3 = value;
	}

	inline static int32_t get_offset_of_data_4() { return static_cast<int32_t>(offsetof(Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16, ___data_4)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_data_4() const { return ___data_4; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_data_4() { return &___data_4; }
	inline void set_data_4(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___data_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_4), (void*)value);
	}

	inline static int32_t get_offset_of_childNodeList_5() { return static_cast<int32_t>(offsetof(Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16, ___childNodeList_5)); }
	inline ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * get_childNodeList_5() const { return ___childNodeList_5; }
	inline ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 ** get_address_of_childNodeList_5() { return &___childNodeList_5; }
	inline void set_childNodeList_5(ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * value)
	{
		___childNodeList_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___childNodeList_5), (void*)value);
	}

	inline static int32_t get_offset_of_unusedBits_6() { return static_cast<int32_t>(offsetof(Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16, ___unusedBits_6)); }
	inline uint8_t get_unusedBits_6() const { return ___unusedBits_6; }
	inline uint8_t* get_address_of_unusedBits_6() { return &___unusedBits_6; }
	inline void set_unusedBits_6(uint8_t value)
	{
		___unusedBits_6 = value;
	}

	inline static int32_t get_offset_of_deepness_7() { return static_cast<int32_t>(offsetof(Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16, ___deepness_7)); }
	inline int64_t get_deepness_7() const { return ___deepness_7; }
	inline int64_t* get_address_of_deepness_7() { return &___deepness_7; }
	inline void set_deepness_7(int64_t value)
	{
		___deepness_7 = value;
	}

	inline static int32_t get_offset_of_path_8() { return static_cast<int32_t>(offsetof(Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16, ___path_8)); }
	inline String_t* get_path_8() const { return ___path_8; }
	inline String_t** get_address_of_path_8() { return &___path_8; }
	inline void set_path_8(String_t* value)
	{
		___path_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___path_8), (void*)value);
	}

	inline static int32_t get_offset_of_parentNode_9() { return static_cast<int32_t>(offsetof(Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16, ___parentNode_9)); }
	inline Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * get_parentNode_9() const { return ___parentNode_9; }
	inline Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 ** get_address_of_parentNode_9() { return &___parentNode_9; }
	inline void set_parentNode_9(Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * value)
	{
		___parentNode_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parentNode_9), (void*)value);
	}

	inline static int32_t get_offset_of_requireRecalculatePar_10() { return static_cast<int32_t>(offsetof(Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16, ___requireRecalculatePar_10)); }
	inline bool get_requireRecalculatePar_10() const { return ___requireRecalculatePar_10; }
	inline bool* get_address_of_requireRecalculatePar_10() { return &___requireRecalculatePar_10; }
	inline void set_requireRecalculatePar_10(bool value)
	{
		___requireRecalculatePar_10 = value;
	}

	inline static int32_t get_offset_of_isIndefiniteLength_11() { return static_cast<int32_t>(offsetof(Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16, ___isIndefiniteLength_11)); }
	inline bool get_isIndefiniteLength_11() const { return ___isIndefiniteLength_11; }
	inline bool* get_address_of_isIndefiniteLength_11() { return &___isIndefiniteLength_11; }
	inline void set_isIndefiniteLength_11(bool value)
	{
		___isIndefiniteLength_11 = value;
	}

	inline static int32_t get_offset_of_parseEncapsulatedData_12() { return static_cast<int32_t>(offsetof(Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16, ___parseEncapsulatedData_12)); }
	inline bool get_parseEncapsulatedData_12() const { return ___parseEncapsulatedData_12; }
	inline bool* get_address_of_parseEncapsulatedData_12() { return &___parseEncapsulatedData_12; }
	inline void set_parseEncapsulatedData_12(bool value)
	{
		___parseEncapsulatedData_12 = value;
	}
};


// LipingShare.LCLib.Asn1Processor.Asn1Parser
struct  Asn1Parser_t6EAA9B28705029F260D90731751E990EF3848620  : public RuntimeObject
{
public:
	// System.Byte[] LipingShare.LCLib.Asn1Processor.Asn1Parser::rawData
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___rawData_0;
	// LipingShare.LCLib.Asn1Processor.Asn1Node LipingShare.LCLib.Asn1Processor.Asn1Parser::rootNode
	Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * ___rootNode_1;

public:
	inline static int32_t get_offset_of_rawData_0() { return static_cast<int32_t>(offsetof(Asn1Parser_t6EAA9B28705029F260D90731751E990EF3848620, ___rawData_0)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_rawData_0() const { return ___rawData_0; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_rawData_0() { return &___rawData_0; }
	inline void set_rawData_0(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___rawData_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rawData_0), (void*)value);
	}

	inline static int32_t get_offset_of_rootNode_1() { return static_cast<int32_t>(offsetof(Asn1Parser_t6EAA9B28705029F260D90731751E990EF3848620, ___rootNode_1)); }
	inline Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * get_rootNode_1() const { return ___rootNode_1; }
	inline Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 ** get_address_of_rootNode_1() { return &___rootNode_1; }
	inline void set_rootNode_1(Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * value)
	{
		___rootNode_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rootNode_1), (void*)value);
	}
};


// LipingShare.LCLib.Asn1Processor.Asn1Util
struct  Asn1Util_tBFEA56D2C3543BF68547786BAE0EC50B2DEE0886  : public RuntimeObject
{
public:

public:
};

struct Asn1Util_tBFEA56D2C3543BF68547786BAE0EC50B2DEE0886_StaticFields
{
public:
	// System.Char[] LipingShare.LCLib.Asn1Processor.Asn1Util::hexDigits
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___hexDigits_0;

public:
	inline static int32_t get_offset_of_hexDigits_0() { return static_cast<int32_t>(offsetof(Asn1Util_tBFEA56D2C3543BF68547786BAE0EC50B2DEE0886_StaticFields, ___hexDigits_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_hexDigits_0() const { return ___hexDigits_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_hexDigits_0() { return &___hexDigits_0; }
	inline void set_hexDigits_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___hexDigits_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hexDigits_0), (void*)value);
	}
};


// LipingShare.LCLib.Asn1Processor.Oid
struct  Oid_t5B93F085287F1B3F4A9F315146D0C08398544492  : public RuntimeObject
{
public:

public:
};

struct Oid_t5B93F085287F1B3F4A9F315146D0C08398544492_StaticFields
{
public:
	// System.Collections.Specialized.StringDictionary LipingShare.LCLib.Asn1Processor.Oid::oidDictionary
	StringDictionary_t9B6306775C5F70981BCB8A30603B4C93C22844FF * ___oidDictionary_0;

public:
	inline static int32_t get_offset_of_oidDictionary_0() { return static_cast<int32_t>(offsetof(Oid_t5B93F085287F1B3F4A9F315146D0C08398544492_StaticFields, ___oidDictionary_0)); }
	inline StringDictionary_t9B6306775C5F70981BCB8A30603B4C93C22844FF * get_oidDictionary_0() const { return ___oidDictionary_0; }
	inline StringDictionary_t9B6306775C5F70981BCB8A30603B4C93C22844FF ** get_address_of_oidDictionary_0() { return &___oidDictionary_0; }
	inline void set_oidDictionary_0(StringDictionary_t9B6306775C5F70981BCB8A30603B4C93C22844FF * value)
	{
		___oidDictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___oidDictionary_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Collections.ArrayList
struct  ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4  : public RuntimeObject
{
public:
	// System.Object[] System.Collections.ArrayList::_items
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____items_0;
	// System.Int32 System.Collections.ArrayList::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.ArrayList::_version
	int32_t ____version_2;
	// System.Object System.Collections.ArrayList::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of__items_0() { return static_cast<int32_t>(offsetof(ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4, ____items_0)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__items_0() const { return ____items_0; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__items_0() { return &____items_0; }
	inline void set__items_0(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____items_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_0), (void*)value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_3), (void*)value);
	}
};

struct ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4_StaticFields
{
public:
	// System.Object[] System.Collections.ArrayList::emptyArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___emptyArray_4;

public:
	inline static int32_t get_offset_of_emptyArray_4() { return static_cast<int32_t>(offsetof(ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4_StaticFields, ___emptyArray_4)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_emptyArray_4() const { return ___emptyArray_4; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_emptyArray_4() { return &___emptyArray_4; }
	inline void set_emptyArray_4(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___emptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___emptyArray_4), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct  Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tED6676A6535375B72FAC3BE58CAB9DC30BE201CD* ___entries_1;
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
	KeyCollection_t9BB02C59F6A73E760F875CCD8AA6D1A1ACE61970 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t059E2E9F339047F683CA7038812E624189E7F0CD * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___entries_1)); }
	inline EntryU5BU5D_tED6676A6535375B72FAC3BE58CAB9DC30BE201CD* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tED6676A6535375B72FAC3BE58CAB9DC30BE201CD** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tED6676A6535375B72FAC3BE58CAB9DC30BE201CD* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___keys_7)); }
	inline KeyCollection_t9BB02C59F6A73E760F875CCD8AA6D1A1ACE61970 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t9BB02C59F6A73E760F875CCD8AA6D1A1ACE61970 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t9BB02C59F6A73E760F875CCD8AA6D1A1ACE61970 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___values_8)); }
	inline ValueCollection_t059E2E9F339047F683CA7038812E624189E7F0CD * get_values_8() const { return ___values_8; }
	inline ValueCollection_t059E2E9F339047F683CA7038812E624189E7F0CD ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t059E2E9F339047F683CA7038812E624189E7F0CD * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt>
struct  List_1_tEA4ACF1E95999E8EC25D6544E307BD87261ADFC9  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	AppleInAppPurchaseReceiptU5BU5D_tF628955FD1FC660B5652CC727A20066839251DA8* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tEA4ACF1E95999E8EC25D6544E307BD87261ADFC9, ____items_1)); }
	inline AppleInAppPurchaseReceiptU5BU5D_tF628955FD1FC660B5652CC727A20066839251DA8* get__items_1() const { return ____items_1; }
	inline AppleInAppPurchaseReceiptU5BU5D_tF628955FD1FC660B5652CC727A20066839251DA8** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(AppleInAppPurchaseReceiptU5BU5D_tF628955FD1FC660B5652CC727A20066839251DA8* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tEA4ACF1E95999E8EC25D6544E307BD87261ADFC9, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tEA4ACF1E95999E8EC25D6544E307BD87261ADFC9, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tEA4ACF1E95999E8EC25D6544E307BD87261ADFC9, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tEA4ACF1E95999E8EC25D6544E307BD87261ADFC9_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	AppleInAppPurchaseReceiptU5BU5D_tF628955FD1FC660B5652CC727A20066839251DA8* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tEA4ACF1E95999E8EC25D6544E307BD87261ADFC9_StaticFields, ____emptyArray_5)); }
	inline AppleInAppPurchaseReceiptU5BU5D_tF628955FD1FC660B5652CC727A20066839251DA8* get__emptyArray_5() const { return ____emptyArray_5; }
	inline AppleInAppPurchaseReceiptU5BU5D_tF628955FD1FC660B5652CC727A20066839251DA8** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(AppleInAppPurchaseReceiptU5BU5D_tF628955FD1FC660B5652CC727A20066839251DA8* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Purchasing.Security.SignerInfo>
struct  List_1_tC8E7792306B075D1A58B9A4E5F2E9FB5A18DCB61  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	SignerInfoU5BU5D_t94F0C9A959EC0D332C0E70FFDF437BBFA4EE3DE9* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tC8E7792306B075D1A58B9A4E5F2E9FB5A18DCB61, ____items_1)); }
	inline SignerInfoU5BU5D_t94F0C9A959EC0D332C0E70FFDF437BBFA4EE3DE9* get__items_1() const { return ____items_1; }
	inline SignerInfoU5BU5D_t94F0C9A959EC0D332C0E70FFDF437BBFA4EE3DE9** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(SignerInfoU5BU5D_t94F0C9A959EC0D332C0E70FFDF437BBFA4EE3DE9* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tC8E7792306B075D1A58B9A4E5F2E9FB5A18DCB61, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tC8E7792306B075D1A58B9A4E5F2E9FB5A18DCB61, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tC8E7792306B075D1A58B9A4E5F2E9FB5A18DCB61, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tC8E7792306B075D1A58B9A4E5F2E9FB5A18DCB61_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	SignerInfoU5BU5D_t94F0C9A959EC0D332C0E70FFDF437BBFA4EE3DE9* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tC8E7792306B075D1A58B9A4E5F2E9FB5A18DCB61_StaticFields, ____emptyArray_5)); }
	inline SignerInfoU5BU5D_t94F0C9A959EC0D332C0E70FFDF437BBFA4EE3DE9* get__emptyArray_5() const { return ____emptyArray_5; }
	inline SignerInfoU5BU5D_t94F0C9A959EC0D332C0E70FFDF437BBFA4EE3DE9** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(SignerInfoU5BU5D_t94F0C9A959EC0D332C0E70FFDF437BBFA4EE3DE9* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Purchasing.Security.X509Cert>
struct  List_1_t2A256183E185A61A299A823886E7884EFE41A289  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	X509CertU5BU5D_tCB80F92946769EB133E51E1D8624977BF6616A0D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2A256183E185A61A299A823886E7884EFE41A289, ____items_1)); }
	inline X509CertU5BU5D_tCB80F92946769EB133E51E1D8624977BF6616A0D* get__items_1() const { return ____items_1; }
	inline X509CertU5BU5D_tCB80F92946769EB133E51E1D8624977BF6616A0D** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(X509CertU5BU5D_tCB80F92946769EB133E51E1D8624977BF6616A0D* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2A256183E185A61A299A823886E7884EFE41A289, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2A256183E185A61A299A823886E7884EFE41A289, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t2A256183E185A61A299A823886E7884EFE41A289, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t2A256183E185A61A299A823886E7884EFE41A289_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	X509CertU5BU5D_tCB80F92946769EB133E51E1D8624977BF6616A0D* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t2A256183E185A61A299A823886E7884EFE41A289_StaticFields, ____emptyArray_5)); }
	inline X509CertU5BU5D_tCB80F92946769EB133E51E1D8624977BF6616A0D* get__emptyArray_5() const { return ____emptyArray_5; }
	inline X509CertU5BU5D_tCB80F92946769EB133E51E1D8624977BF6616A0D** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(X509CertU5BU5D_tCB80F92946769EB133E51E1D8624977BF6616A0D* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Specialized.StringDictionary
struct  StringDictionary_t9B6306775C5F70981BCB8A30603B4C93C22844FF  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Collections.Specialized.StringDictionary::contents
	Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * ___contents_0;

public:
	inline static int32_t get_offset_of_contents_0() { return static_cast<int32_t>(offsetof(StringDictionary_t9B6306775C5F70981BCB8A30603B4C93C22844FF, ___contents_0)); }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * get_contents_0() const { return ___contents_0; }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 ** get_address_of_contents_0() { return &___contents_0; }
	inline void set_contents_0(Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * value)
	{
		___contents_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___contents_0), (void*)value);
	}
};


// System.MarshalByRefObject
struct  MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Security.Cryptography.AsymmetricAlgorithm
struct  AsymmetricAlgorithm_t9F811260245370BD8786A849DBF9F8054F97F4CB  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.AsymmetricAlgorithm::KeySizeValue
	int32_t ___KeySizeValue_0;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.AsymmetricAlgorithm::LegalKeySizesValue
	KeySizesU5BU5D_t934CCA482596402177BAF86727F169872D74934E* ___LegalKeySizesValue_1;

public:
	inline static int32_t get_offset_of_KeySizeValue_0() { return static_cast<int32_t>(offsetof(AsymmetricAlgorithm_t9F811260245370BD8786A849DBF9F8054F97F4CB, ___KeySizeValue_0)); }
	inline int32_t get_KeySizeValue_0() const { return ___KeySizeValue_0; }
	inline int32_t* get_address_of_KeySizeValue_0() { return &___KeySizeValue_0; }
	inline void set_KeySizeValue_0(int32_t value)
	{
		___KeySizeValue_0 = value;
	}

	inline static int32_t get_offset_of_LegalKeySizesValue_1() { return static_cast<int32_t>(offsetof(AsymmetricAlgorithm_t9F811260245370BD8786A849DBF9F8054F97F4CB, ___LegalKeySizesValue_1)); }
	inline KeySizesU5BU5D_t934CCA482596402177BAF86727F169872D74934E* get_LegalKeySizesValue_1() const { return ___LegalKeySizesValue_1; }
	inline KeySizesU5BU5D_t934CCA482596402177BAF86727F169872D74934E** get_address_of_LegalKeySizesValue_1() { return &___LegalKeySizesValue_1; }
	inline void set_LegalKeySizesValue_1(KeySizesU5BU5D_t934CCA482596402177BAF86727F169872D74934E* value)
	{
		___LegalKeySizesValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LegalKeySizesValue_1), (void*)value);
	}
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


// System.Text.Encoding
struct  Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB * ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 * ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 * ___decoderFallback_14;

public:
	inline static int32_t get_offset_of_m_codePage_9() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___m_codePage_9)); }
	inline int32_t get_m_codePage_9() const { return ___m_codePage_9; }
	inline int32_t* get_address_of_m_codePage_9() { return &___m_codePage_9; }
	inline void set_m_codePage_9(int32_t value)
	{
		___m_codePage_9 = value;
	}

	inline static int32_t get_offset_of_dataItem_10() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___dataItem_10)); }
	inline CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB * get_dataItem_10() const { return ___dataItem_10; }
	inline CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB ** get_address_of_dataItem_10() { return &___dataItem_10; }
	inline void set_dataItem_10(CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB * value)
	{
		___dataItem_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataItem_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_11() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___m_deserializedFromEverett_11)); }
	inline bool get_m_deserializedFromEverett_11() const { return ___m_deserializedFromEverett_11; }
	inline bool* get_address_of_m_deserializedFromEverett_11() { return &___m_deserializedFromEverett_11; }
	inline void set_m_deserializedFromEverett_11(bool value)
	{
		___m_deserializedFromEverett_11 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_12() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___m_isReadOnly_12)); }
	inline bool get_m_isReadOnly_12() const { return ___m_isReadOnly_12; }
	inline bool* get_address_of_m_isReadOnly_12() { return &___m_isReadOnly_12; }
	inline void set_m_isReadOnly_12(bool value)
	{
		___m_isReadOnly_12 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_13() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___encoderFallback_13)); }
	inline EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 * get_encoderFallback_13() const { return ___encoderFallback_13; }
	inline EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 ** get_address_of_encoderFallback_13() { return &___encoderFallback_13; }
	inline void set_encoderFallback_13(EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 * value)
	{
		___encoderFallback_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoderFallback_13), (void*)value);
	}

	inline static int32_t get_offset_of_decoderFallback_14() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___decoderFallback_14)); }
	inline DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 * get_decoderFallback_14() const { return ___decoderFallback_14; }
	inline DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 ** get_address_of_decoderFallback_14() { return &___decoderFallback_14; }
	inline void set_decoderFallback_14(DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 * value)
	{
		___decoderFallback_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoderFallback_14), (void*)value);
	}
};

struct Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_15;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultEncoding_0), (void*)value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unicodeEncoding_1), (void*)value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bigEndianUnicode_2), (void*)value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf7Encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf8Encoding_4), (void*)value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf32Encoding_5), (void*)value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asciiEncoding_6), (void*)value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___latin1Encoding_7), (void*)value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___encodings_8)); }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encodings_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_15() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___s_InternalSyncObject_15)); }
	inline RuntimeObject * get_s_InternalSyncObject_15() const { return ___s_InternalSyncObject_15; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_15() { return &___s_InternalSyncObject_15; }
	inline void set_s_InternalSyncObject_15(RuntimeObject * value)
	{
		___s_InternalSyncObject_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_15), (void*)value);
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

// UnityEngine.Purchasing.Security.AppleReceiptParser
struct  AppleReceiptParser_t34DA429F3553864684768F2E95D35C1D6A90F3E4  : public RuntimeObject
{
public:

public:
};

struct AppleReceiptParser_t34DA429F3553864684768F2E95D35C1D6A90F3E4_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> UnityEngine.Purchasing.Security.AppleReceiptParser::_mostRecentReceiptData
	Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * ____mostRecentReceiptData_0;

public:
	inline static int32_t get_offset_of__mostRecentReceiptData_0() { return static_cast<int32_t>(offsetof(AppleReceiptParser_t34DA429F3553864684768F2E95D35C1D6A90F3E4_StaticFields, ____mostRecentReceiptData_0)); }
	inline Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * get__mostRecentReceiptData_0() const { return ____mostRecentReceiptData_0; }
	inline Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA ** get_address_of__mostRecentReceiptData_0() { return &____mostRecentReceiptData_0; }
	inline void set__mostRecentReceiptData_0(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * value)
	{
		____mostRecentReceiptData_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____mostRecentReceiptData_0), (void*)value);
	}
};


// UnityEngine.Purchasing.Security.DistinguishedName
struct  DistinguishedName_t869CBAB24FEC86C60A469DB0BE479FCAB3FAC521  : public RuntimeObject
{
public:
	// System.String UnityEngine.Purchasing.Security.DistinguishedName::<Country>k__BackingField
	String_t* ___U3CCountryU3Ek__BackingField_0;
	// System.String UnityEngine.Purchasing.Security.DistinguishedName::<Organization>k__BackingField
	String_t* ___U3COrganizationU3Ek__BackingField_1;
	// System.String UnityEngine.Purchasing.Security.DistinguishedName::<OrganizationalUnit>k__BackingField
	String_t* ___U3COrganizationalUnitU3Ek__BackingField_2;
	// System.String UnityEngine.Purchasing.Security.DistinguishedName::<Dnq>k__BackingField
	String_t* ___U3CDnqU3Ek__BackingField_3;
	// System.String UnityEngine.Purchasing.Security.DistinguishedName::<State>k__BackingField
	String_t* ___U3CStateU3Ek__BackingField_4;
	// System.String UnityEngine.Purchasing.Security.DistinguishedName::<CommonName>k__BackingField
	String_t* ___U3CCommonNameU3Ek__BackingField_5;
	// System.String UnityEngine.Purchasing.Security.DistinguishedName::<SerialNumber>k__BackingField
	String_t* ___U3CSerialNumberU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CCountryU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(DistinguishedName_t869CBAB24FEC86C60A469DB0BE479FCAB3FAC521, ___U3CCountryU3Ek__BackingField_0)); }
	inline String_t* get_U3CCountryU3Ek__BackingField_0() const { return ___U3CCountryU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CCountryU3Ek__BackingField_0() { return &___U3CCountryU3Ek__BackingField_0; }
	inline void set_U3CCountryU3Ek__BackingField_0(String_t* value)
	{
		___U3CCountryU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCountryU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3COrganizationU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(DistinguishedName_t869CBAB24FEC86C60A469DB0BE479FCAB3FAC521, ___U3COrganizationU3Ek__BackingField_1)); }
	inline String_t* get_U3COrganizationU3Ek__BackingField_1() const { return ___U3COrganizationU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3COrganizationU3Ek__BackingField_1() { return &___U3COrganizationU3Ek__BackingField_1; }
	inline void set_U3COrganizationU3Ek__BackingField_1(String_t* value)
	{
		___U3COrganizationU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COrganizationU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3COrganizationalUnitU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(DistinguishedName_t869CBAB24FEC86C60A469DB0BE479FCAB3FAC521, ___U3COrganizationalUnitU3Ek__BackingField_2)); }
	inline String_t* get_U3COrganizationalUnitU3Ek__BackingField_2() const { return ___U3COrganizationalUnitU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3COrganizationalUnitU3Ek__BackingField_2() { return &___U3COrganizationalUnitU3Ek__BackingField_2; }
	inline void set_U3COrganizationalUnitU3Ek__BackingField_2(String_t* value)
	{
		___U3COrganizationalUnitU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COrganizationalUnitU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDnqU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(DistinguishedName_t869CBAB24FEC86C60A469DB0BE479FCAB3FAC521, ___U3CDnqU3Ek__BackingField_3)); }
	inline String_t* get_U3CDnqU3Ek__BackingField_3() const { return ___U3CDnqU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CDnqU3Ek__BackingField_3() { return &___U3CDnqU3Ek__BackingField_3; }
	inline void set_U3CDnqU3Ek__BackingField_3(String_t* value)
	{
		___U3CDnqU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDnqU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CStateU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(DistinguishedName_t869CBAB24FEC86C60A469DB0BE479FCAB3FAC521, ___U3CStateU3Ek__BackingField_4)); }
	inline String_t* get_U3CStateU3Ek__BackingField_4() const { return ___U3CStateU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CStateU3Ek__BackingField_4() { return &___U3CStateU3Ek__BackingField_4; }
	inline void set_U3CStateU3Ek__BackingField_4(String_t* value)
	{
		___U3CStateU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CStateU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCommonNameU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(DistinguishedName_t869CBAB24FEC86C60A469DB0BE479FCAB3FAC521, ___U3CCommonNameU3Ek__BackingField_5)); }
	inline String_t* get_U3CCommonNameU3Ek__BackingField_5() const { return ___U3CCommonNameU3Ek__BackingField_5; }
	inline String_t** get_address_of_U3CCommonNameU3Ek__BackingField_5() { return &___U3CCommonNameU3Ek__BackingField_5; }
	inline void set_U3CCommonNameU3Ek__BackingField_5(String_t* value)
	{
		___U3CCommonNameU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCommonNameU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSerialNumberU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(DistinguishedName_t869CBAB24FEC86C60A469DB0BE479FCAB3FAC521, ___U3CSerialNumberU3Ek__BackingField_6)); }
	inline String_t* get_U3CSerialNumberU3Ek__BackingField_6() const { return ___U3CSerialNumberU3Ek__BackingField_6; }
	inline String_t** get_address_of_U3CSerialNumberU3Ek__BackingField_6() { return &___U3CSerialNumberU3Ek__BackingField_6; }
	inline void set_U3CSerialNumberU3Ek__BackingField_6(String_t* value)
	{
		___U3CSerialNumberU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSerialNumberU3Ek__BackingField_6), (void*)value);
	}
};


// UnityEngine.Purchasing.Security.PKCS7
struct  PKCS7_t851499113E52C57B34831AE4D5AB00C973B7D21A  : public RuntimeObject
{
public:
	// LipingShare.LCLib.Asn1Processor.Asn1Node UnityEngine.Purchasing.Security.PKCS7::root
	Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * ___root_0;
	// LipingShare.LCLib.Asn1Processor.Asn1Node UnityEngine.Purchasing.Security.PKCS7::<data>k__BackingField
	Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * ___U3CdataU3Ek__BackingField_1;
	// System.Collections.Generic.List`1<UnityEngine.Purchasing.Security.SignerInfo> UnityEngine.Purchasing.Security.PKCS7::<sinfos>k__BackingField
	List_1_tC8E7792306B075D1A58B9A4E5F2E9FB5A18DCB61 * ___U3CsinfosU3Ek__BackingField_2;
	// System.Collections.Generic.List`1<UnityEngine.Purchasing.Security.X509Cert> UnityEngine.Purchasing.Security.PKCS7::<certChain>k__BackingField
	List_1_t2A256183E185A61A299A823886E7884EFE41A289 * ___U3CcertChainU3Ek__BackingField_3;
	// System.Boolean UnityEngine.Purchasing.Security.PKCS7::validStructure
	bool ___validStructure_4;

public:
	inline static int32_t get_offset_of_root_0() { return static_cast<int32_t>(offsetof(PKCS7_t851499113E52C57B34831AE4D5AB00C973B7D21A, ___root_0)); }
	inline Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * get_root_0() const { return ___root_0; }
	inline Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 ** get_address_of_root_0() { return &___root_0; }
	inline void set_root_0(Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * value)
	{
		___root_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___root_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdataU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PKCS7_t851499113E52C57B34831AE4D5AB00C973B7D21A, ___U3CdataU3Ek__BackingField_1)); }
	inline Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * get_U3CdataU3Ek__BackingField_1() const { return ___U3CdataU3Ek__BackingField_1; }
	inline Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 ** get_address_of_U3CdataU3Ek__BackingField_1() { return &___U3CdataU3Ek__BackingField_1; }
	inline void set_U3CdataU3Ek__BackingField_1(Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * value)
	{
		___U3CdataU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdataU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsinfosU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PKCS7_t851499113E52C57B34831AE4D5AB00C973B7D21A, ___U3CsinfosU3Ek__BackingField_2)); }
	inline List_1_tC8E7792306B075D1A58B9A4E5F2E9FB5A18DCB61 * get_U3CsinfosU3Ek__BackingField_2() const { return ___U3CsinfosU3Ek__BackingField_2; }
	inline List_1_tC8E7792306B075D1A58B9A4E5F2E9FB5A18DCB61 ** get_address_of_U3CsinfosU3Ek__BackingField_2() { return &___U3CsinfosU3Ek__BackingField_2; }
	inline void set_U3CsinfosU3Ek__BackingField_2(List_1_tC8E7792306B075D1A58B9A4E5F2E9FB5A18DCB61 * value)
	{
		___U3CsinfosU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsinfosU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcertChainU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(PKCS7_t851499113E52C57B34831AE4D5AB00C973B7D21A, ___U3CcertChainU3Ek__BackingField_3)); }
	inline List_1_t2A256183E185A61A299A823886E7884EFE41A289 * get_U3CcertChainU3Ek__BackingField_3() const { return ___U3CcertChainU3Ek__BackingField_3; }
	inline List_1_t2A256183E185A61A299A823886E7884EFE41A289 ** get_address_of_U3CcertChainU3Ek__BackingField_3() { return &___U3CcertChainU3Ek__BackingField_3; }
	inline void set_U3CcertChainU3Ek__BackingField_3(List_1_t2A256183E185A61A299A823886E7884EFE41A289 * value)
	{
		___U3CcertChainU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcertChainU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_validStructure_4() { return static_cast<int32_t>(offsetof(PKCS7_t851499113E52C57B34831AE4D5AB00C973B7D21A, ___validStructure_4)); }
	inline bool get_validStructure_4() const { return ___validStructure_4; }
	inline bool* get_address_of_validStructure_4() { return &___validStructure_4; }
	inline void set_validStructure_4(bool value)
	{
		___validStructure_4 = value;
	}
};


// UnityEngine.Purchasing.Security.RSAKey
struct  RSAKey_t821B15EEDED09C7088C34750E22FDA0E30B8220C  : public RuntimeObject
{
public:
	// System.Security.Cryptography.RSACryptoServiceProvider UnityEngine.Purchasing.Security.RSAKey::<rsa>k__BackingField
	RSACryptoServiceProvider_t6DC0FC3205BA6CDCA4FF2AEEF566D8F0CCE26AD4 * ___U3CrsaU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CrsaU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RSAKey_t821B15EEDED09C7088C34750E22FDA0E30B8220C, ___U3CrsaU3Ek__BackingField_0)); }
	inline RSACryptoServiceProvider_t6DC0FC3205BA6CDCA4FF2AEEF566D8F0CCE26AD4 * get_U3CrsaU3Ek__BackingField_0() const { return ___U3CrsaU3Ek__BackingField_0; }
	inline RSACryptoServiceProvider_t6DC0FC3205BA6CDCA4FF2AEEF566D8F0CCE26AD4 ** get_address_of_U3CrsaU3Ek__BackingField_0() { return &___U3CrsaU3Ek__BackingField_0; }
	inline void set_U3CrsaU3Ek__BackingField_0(RSACryptoServiceProvider_t6DC0FC3205BA6CDCA4FF2AEEF566D8F0CCE26AD4 * value)
	{
		___U3CrsaU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrsaU3Ek__BackingField_0), (void*)value);
	}
};


// UnityEngine.Purchasing.Security.SignerInfo
struct  SignerInfo_tA6405C48DB7EAE3441CB701FC072A86AD372CAF4  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.Purchasing.Security.SignerInfo::<Version>k__BackingField
	int32_t ___U3CVersionU3Ek__BackingField_0;
	// System.String UnityEngine.Purchasing.Security.SignerInfo::<IssuerSerialNumber>k__BackingField
	String_t* ___U3CIssuerSerialNumberU3Ek__BackingField_1;
	// System.Byte[] UnityEngine.Purchasing.Security.SignerInfo::<EncryptedDigest>k__BackingField
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___U3CEncryptedDigestU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CVersionU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(SignerInfo_tA6405C48DB7EAE3441CB701FC072A86AD372CAF4, ___U3CVersionU3Ek__BackingField_0)); }
	inline int32_t get_U3CVersionU3Ek__BackingField_0() const { return ___U3CVersionU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CVersionU3Ek__BackingField_0() { return &___U3CVersionU3Ek__BackingField_0; }
	inline void set_U3CVersionU3Ek__BackingField_0(int32_t value)
	{
		___U3CVersionU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CIssuerSerialNumberU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(SignerInfo_tA6405C48DB7EAE3441CB701FC072A86AD372CAF4, ___U3CIssuerSerialNumberU3Ek__BackingField_1)); }
	inline String_t* get_U3CIssuerSerialNumberU3Ek__BackingField_1() const { return ___U3CIssuerSerialNumberU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CIssuerSerialNumberU3Ek__BackingField_1() { return &___U3CIssuerSerialNumberU3Ek__BackingField_1; }
	inline void set_U3CIssuerSerialNumberU3Ek__BackingField_1(String_t* value)
	{
		___U3CIssuerSerialNumberU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CIssuerSerialNumberU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEncryptedDigestU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SignerInfo_tA6405C48DB7EAE3441CB701FC072A86AD372CAF4, ___U3CEncryptedDigestU3Ek__BackingField_2)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_U3CEncryptedDigestU3Ek__BackingField_2() const { return ___U3CEncryptedDigestU3Ek__BackingField_2; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_U3CEncryptedDigestU3Ek__BackingField_2() { return &___U3CEncryptedDigestU3Ek__BackingField_2; }
	inline void set_U3CEncryptedDigestU3Ek__BackingField_2(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___U3CEncryptedDigestU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEncryptedDigestU3Ek__BackingField_2), (void*)value);
	}
};


// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D32
struct  __StaticArrayInitTypeSizeU3D32_t0BD9EBAA14E16E690D264DCE2CAAD42FF799D8D5 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D32_t0BD9EBAA14E16E690D264DCE2CAAD42FF799D8D5__padding[32];
	};

public:
};


// LipingShare.LCLib.Asn1Processor.RelativeOid
struct  RelativeOid_tA04AF790321D95FE09233E82417A118B0B1BBBBB  : public Oid_t5B93F085287F1B3F4A9F315146D0C08398544492
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


// System.Byte
struct  Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Char
struct  Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// System.DateTime
struct  DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MinValue_31)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MaxValue_32)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MaxValue_32 = value;
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

// System.IO.Stream
struct  Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7  : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF
{
public:
	// System.IO.Stream_ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 * ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * ____asyncActiveSemaphore_3;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_2() { return static_cast<int32_t>(offsetof(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7, ____activeReadWriteTask_2)); }
	inline ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 * get__activeReadWriteTask_2() const { return ____activeReadWriteTask_2; }
	inline ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 ** get_address_of__activeReadWriteTask_2() { return &____activeReadWriteTask_2; }
	inline void set__activeReadWriteTask_2(ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 * value)
	{
		____activeReadWriteTask_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeReadWriteTask_2), (void*)value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_3() { return static_cast<int32_t>(offsetof(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7, ____asyncActiveSemaphore_3)); }
	inline SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * get__asyncActiveSemaphore_3() const { return ____asyncActiveSemaphore_3; }
	inline SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 ** get_address_of__asyncActiveSemaphore_3() { return &____asyncActiveSemaphore_3; }
	inline void set__asyncActiveSemaphore_3(SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * value)
	{
		____asyncActiveSemaphore_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncActiveSemaphore_3), (void*)value);
	}
};

struct Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7_StaticFields, ___Null_1)); }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * get_Null_1() const { return ___Null_1; }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}
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


// System.Security.Cryptography.RSA
struct  RSA_tB6C4B434B2AC02E3F8981DB2908C2018E251D145  : public AsymmetricAlgorithm_t9F811260245370BD8786A849DBF9F8054F97F4CB
{
public:

public:
};


// System.Text.UTF8Encoding
struct  UTF8Encoding_t77ED103B749A387EF072C3429F48C91D12CA08DE  : public Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4
{
public:
	// System.Boolean System.Text.UTF8Encoding::emitUTF8Identifier
	bool ___emitUTF8Identifier_16;
	// System.Boolean System.Text.UTF8Encoding::isThrowException
	bool ___isThrowException_17;

public:
	inline static int32_t get_offset_of_emitUTF8Identifier_16() { return static_cast<int32_t>(offsetof(UTF8Encoding_t77ED103B749A387EF072C3429F48C91D12CA08DE, ___emitUTF8Identifier_16)); }
	inline bool get_emitUTF8Identifier_16() const { return ___emitUTF8Identifier_16; }
	inline bool* get_address_of_emitUTF8Identifier_16() { return &___emitUTF8Identifier_16; }
	inline void set_emitUTF8Identifier_16(bool value)
	{
		___emitUTF8Identifier_16 = value;
	}

	inline static int32_t get_offset_of_isThrowException_17() { return static_cast<int32_t>(offsetof(UTF8Encoding_t77ED103B749A387EF072C3429F48C91D12CA08DE, ___isThrowException_17)); }
	inline bool get_isThrowException_17() const { return ___isThrowException_17; }
	inline bool* get_address_of_isThrowException_17() { return &___isThrowException_17; }
	inline void set_isThrowException_17(bool value)
	{
		___isThrowException_17 = value;
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


// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_tF929F227B031DB1A567E309D7A693BDF58171228  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_tF929F227B031DB1A567E309D7A693BDF58171228_StaticFields
{
public:
	// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D32 <PrivateImplementationDetails>::59F5BD34B6C013DEACC784F69C67E95150033A84
	__StaticArrayInitTypeSizeU3D32_t0BD9EBAA14E16E690D264DCE2CAAD42FF799D8D5  ___59F5BD34B6C013DEACC784F69C67E95150033A84_0;

public:
	inline static int32_t get_offset_of_U359F5BD34B6C013DEACC784F69C67E95150033A84_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tF929F227B031DB1A567E309D7A693BDF58171228_StaticFields, ___59F5BD34B6C013DEACC784F69C67E95150033A84_0)); }
	inline __StaticArrayInitTypeSizeU3D32_t0BD9EBAA14E16E690D264DCE2CAAD42FF799D8D5  get_U359F5BD34B6C013DEACC784F69C67E95150033A84_0() const { return ___59F5BD34B6C013DEACC784F69C67E95150033A84_0; }
	inline __StaticArrayInitTypeSizeU3D32_t0BD9EBAA14E16E690D264DCE2CAAD42FF799D8D5 * get_address_of_U359F5BD34B6C013DEACC784F69C67E95150033A84_0() { return &___59F5BD34B6C013DEACC784F69C67E95150033A84_0; }
	inline void set_U359F5BD34B6C013DEACC784F69C67E95150033A84_0(__StaticArrayInitTypeSizeU3D32_t0BD9EBAA14E16E690D264DCE2CAAD42FF799D8D5  value)
	{
		___59F5BD34B6C013DEACC784F69C67E95150033A84_0 = value;
	}
};


// System.DateTimeKind
struct  DateTimeKind_t6BC23532930B812ABFCCEB2B61BC233712B180EE 
{
public:
	// System.Int32 System.DateTimeKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DateTimeKind_t6BC23532930B812ABFCCEB2B61BC233712B180EE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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

// System.IO.MemoryStream
struct  MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C  : public Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7
{
public:
	// System.Byte[] System.IO.MemoryStream::_buffer
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ____buffer_4;
	// System.Int32 System.IO.MemoryStream::_origin
	int32_t ____origin_5;
	// System.Int32 System.IO.MemoryStream::_position
	int32_t ____position_6;
	// System.Int32 System.IO.MemoryStream::_length
	int32_t ____length_7;
	// System.Int32 System.IO.MemoryStream::_capacity
	int32_t ____capacity_8;
	// System.Boolean System.IO.MemoryStream::_expandable
	bool ____expandable_9;
	// System.Boolean System.IO.MemoryStream::_writable
	bool ____writable_10;
	// System.Boolean System.IO.MemoryStream::_exposable
	bool ____exposable_11;
	// System.Boolean System.IO.MemoryStream::_isOpen
	bool ____isOpen_12;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.MemoryStream::_lastReadTask
	Task_1_t640F0CBB720BB9CD14B90B7B81624471A9F56D87 * ____lastReadTask_13;

public:
	inline static int32_t get_offset_of__buffer_4() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____buffer_4)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get__buffer_4() const { return ____buffer_4; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of__buffer_4() { return &____buffer_4; }
	inline void set__buffer_4(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		____buffer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buffer_4), (void*)value);
	}

	inline static int32_t get_offset_of__origin_5() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____origin_5)); }
	inline int32_t get__origin_5() const { return ____origin_5; }
	inline int32_t* get_address_of__origin_5() { return &____origin_5; }
	inline void set__origin_5(int32_t value)
	{
		____origin_5 = value;
	}

	inline static int32_t get_offset_of__position_6() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____position_6)); }
	inline int32_t get__position_6() const { return ____position_6; }
	inline int32_t* get_address_of__position_6() { return &____position_6; }
	inline void set__position_6(int32_t value)
	{
		____position_6 = value;
	}

	inline static int32_t get_offset_of__length_7() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____length_7)); }
	inline int32_t get__length_7() const { return ____length_7; }
	inline int32_t* get_address_of__length_7() { return &____length_7; }
	inline void set__length_7(int32_t value)
	{
		____length_7 = value;
	}

	inline static int32_t get_offset_of__capacity_8() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____capacity_8)); }
	inline int32_t get__capacity_8() const { return ____capacity_8; }
	inline int32_t* get_address_of__capacity_8() { return &____capacity_8; }
	inline void set__capacity_8(int32_t value)
	{
		____capacity_8 = value;
	}

	inline static int32_t get_offset_of__expandable_9() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____expandable_9)); }
	inline bool get__expandable_9() const { return ____expandable_9; }
	inline bool* get_address_of__expandable_9() { return &____expandable_9; }
	inline void set__expandable_9(bool value)
	{
		____expandable_9 = value;
	}

	inline static int32_t get_offset_of__writable_10() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____writable_10)); }
	inline bool get__writable_10() const { return ____writable_10; }
	inline bool* get_address_of__writable_10() { return &____writable_10; }
	inline void set__writable_10(bool value)
	{
		____writable_10 = value;
	}

	inline static int32_t get_offset_of__exposable_11() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____exposable_11)); }
	inline bool get__exposable_11() const { return ____exposable_11; }
	inline bool* get_address_of__exposable_11() { return &____exposable_11; }
	inline void set__exposable_11(bool value)
	{
		____exposable_11 = value;
	}

	inline static int32_t get_offset_of__isOpen_12() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____isOpen_12)); }
	inline bool get__isOpen_12() const { return ____isOpen_12; }
	inline bool* get_address_of__isOpen_12() { return &____isOpen_12; }
	inline void set__isOpen_12(bool value)
	{
		____isOpen_12 = value;
	}

	inline static int32_t get_offset_of__lastReadTask_13() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____lastReadTask_13)); }
	inline Task_1_t640F0CBB720BB9CD14B90B7B81624471A9F56D87 * get__lastReadTask_13() const { return ____lastReadTask_13; }
	inline Task_1_t640F0CBB720BB9CD14B90B7B81624471A9F56D87 ** get_address_of__lastReadTask_13() { return &____lastReadTask_13; }
	inline void set__lastReadTask_13(Task_1_t640F0CBB720BB9CD14B90B7B81624471A9F56D87 * value)
	{
		____lastReadTask_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lastReadTask_13), (void*)value);
	}
};


// System.RuntimeFieldHandle
struct  RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.Security.Cryptography.CspProviderFlags
struct  CspProviderFlags_t58BDA302C5856D2AA7A41E97CAB5BDD0516571F4 
{
public:
	// System.Int32 System.Security.Cryptography.CspProviderFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CspProviderFlags_t58BDA302C5856D2AA7A41E97CAB5BDD0516571F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt
struct  AppleInAppPurchaseReceipt_t8495AF48B320D4EA26939FA02F9BA8784CF02F90  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::<quantity>k__BackingField
	int32_t ___U3CquantityU3Ek__BackingField_0;
	// System.String UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::<productID>k__BackingField
	String_t* ___U3CproductIDU3Ek__BackingField_1;
	// System.String UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::<transactionID>k__BackingField
	String_t* ___U3CtransactionIDU3Ek__BackingField_2;
	// System.String UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::<originalTransactionIdentifier>k__BackingField
	String_t* ___U3CoriginalTransactionIdentifierU3Ek__BackingField_3;
	// System.DateTime UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::<purchaseDate>k__BackingField
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___U3CpurchaseDateU3Ek__BackingField_4;
	// System.DateTime UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::<originalPurchaseDate>k__BackingField
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___U3CoriginalPurchaseDateU3Ek__BackingField_5;
	// System.DateTime UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::<subscriptionExpirationDate>k__BackingField
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___U3CsubscriptionExpirationDateU3Ek__BackingField_6;
	// System.DateTime UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::<cancellationDate>k__BackingField
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___U3CcancellationDateU3Ek__BackingField_7;
	// System.Int32 UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::<isFreeTrial>k__BackingField
	int32_t ___U3CisFreeTrialU3Ek__BackingField_8;
	// System.Int32 UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::<productType>k__BackingField
	int32_t ___U3CproductTypeU3Ek__BackingField_9;
	// System.Int32 UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::<isIntroductoryPricePeriod>k__BackingField
	int32_t ___U3CisIntroductoryPricePeriodU3Ek__BackingField_10;

public:
	inline static int32_t get_offset_of_U3CquantityU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(AppleInAppPurchaseReceipt_t8495AF48B320D4EA26939FA02F9BA8784CF02F90, ___U3CquantityU3Ek__BackingField_0)); }
	inline int32_t get_U3CquantityU3Ek__BackingField_0() const { return ___U3CquantityU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CquantityU3Ek__BackingField_0() { return &___U3CquantityU3Ek__BackingField_0; }
	inline void set_U3CquantityU3Ek__BackingField_0(int32_t value)
	{
		___U3CquantityU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CproductIDU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AppleInAppPurchaseReceipt_t8495AF48B320D4EA26939FA02F9BA8784CF02F90, ___U3CproductIDU3Ek__BackingField_1)); }
	inline String_t* get_U3CproductIDU3Ek__BackingField_1() const { return ___U3CproductIDU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CproductIDU3Ek__BackingField_1() { return &___U3CproductIDU3Ek__BackingField_1; }
	inline void set_U3CproductIDU3Ek__BackingField_1(String_t* value)
	{
		___U3CproductIDU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproductIDU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtransactionIDU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(AppleInAppPurchaseReceipt_t8495AF48B320D4EA26939FA02F9BA8784CF02F90, ___U3CtransactionIDU3Ek__BackingField_2)); }
	inline String_t* get_U3CtransactionIDU3Ek__BackingField_2() const { return ___U3CtransactionIDU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CtransactionIDU3Ek__BackingField_2() { return &___U3CtransactionIDU3Ek__BackingField_2; }
	inline void set_U3CtransactionIDU3Ek__BackingField_2(String_t* value)
	{
		___U3CtransactionIDU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtransactionIDU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CoriginalTransactionIdentifierU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(AppleInAppPurchaseReceipt_t8495AF48B320D4EA26939FA02F9BA8784CF02F90, ___U3CoriginalTransactionIdentifierU3Ek__BackingField_3)); }
	inline String_t* get_U3CoriginalTransactionIdentifierU3Ek__BackingField_3() const { return ___U3CoriginalTransactionIdentifierU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CoriginalTransactionIdentifierU3Ek__BackingField_3() { return &___U3CoriginalTransactionIdentifierU3Ek__BackingField_3; }
	inline void set_U3CoriginalTransactionIdentifierU3Ek__BackingField_3(String_t* value)
	{
		___U3CoriginalTransactionIdentifierU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CoriginalTransactionIdentifierU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpurchaseDateU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(AppleInAppPurchaseReceipt_t8495AF48B320D4EA26939FA02F9BA8784CF02F90, ___U3CpurchaseDateU3Ek__BackingField_4)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_U3CpurchaseDateU3Ek__BackingField_4() const { return ___U3CpurchaseDateU3Ek__BackingField_4; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_U3CpurchaseDateU3Ek__BackingField_4() { return &___U3CpurchaseDateU3Ek__BackingField_4; }
	inline void set_U3CpurchaseDateU3Ek__BackingField_4(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___U3CpurchaseDateU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CoriginalPurchaseDateU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(AppleInAppPurchaseReceipt_t8495AF48B320D4EA26939FA02F9BA8784CF02F90, ___U3CoriginalPurchaseDateU3Ek__BackingField_5)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_U3CoriginalPurchaseDateU3Ek__BackingField_5() const { return ___U3CoriginalPurchaseDateU3Ek__BackingField_5; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_U3CoriginalPurchaseDateU3Ek__BackingField_5() { return &___U3CoriginalPurchaseDateU3Ek__BackingField_5; }
	inline void set_U3CoriginalPurchaseDateU3Ek__BackingField_5(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___U3CoriginalPurchaseDateU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CsubscriptionExpirationDateU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(AppleInAppPurchaseReceipt_t8495AF48B320D4EA26939FA02F9BA8784CF02F90, ___U3CsubscriptionExpirationDateU3Ek__BackingField_6)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_U3CsubscriptionExpirationDateU3Ek__BackingField_6() const { return ___U3CsubscriptionExpirationDateU3Ek__BackingField_6; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_U3CsubscriptionExpirationDateU3Ek__BackingField_6() { return &___U3CsubscriptionExpirationDateU3Ek__BackingField_6; }
	inline void set_U3CsubscriptionExpirationDateU3Ek__BackingField_6(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___U3CsubscriptionExpirationDateU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CcancellationDateU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(AppleInAppPurchaseReceipt_t8495AF48B320D4EA26939FA02F9BA8784CF02F90, ___U3CcancellationDateU3Ek__BackingField_7)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_U3CcancellationDateU3Ek__BackingField_7() const { return ___U3CcancellationDateU3Ek__BackingField_7; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_U3CcancellationDateU3Ek__BackingField_7() { return &___U3CcancellationDateU3Ek__BackingField_7; }
	inline void set_U3CcancellationDateU3Ek__BackingField_7(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___U3CcancellationDateU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CisFreeTrialU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(AppleInAppPurchaseReceipt_t8495AF48B320D4EA26939FA02F9BA8784CF02F90, ___U3CisFreeTrialU3Ek__BackingField_8)); }
	inline int32_t get_U3CisFreeTrialU3Ek__BackingField_8() const { return ___U3CisFreeTrialU3Ek__BackingField_8; }
	inline int32_t* get_address_of_U3CisFreeTrialU3Ek__BackingField_8() { return &___U3CisFreeTrialU3Ek__BackingField_8; }
	inline void set_U3CisFreeTrialU3Ek__BackingField_8(int32_t value)
	{
		___U3CisFreeTrialU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CproductTypeU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(AppleInAppPurchaseReceipt_t8495AF48B320D4EA26939FA02F9BA8784CF02F90, ___U3CproductTypeU3Ek__BackingField_9)); }
	inline int32_t get_U3CproductTypeU3Ek__BackingField_9() const { return ___U3CproductTypeU3Ek__BackingField_9; }
	inline int32_t* get_address_of_U3CproductTypeU3Ek__BackingField_9() { return &___U3CproductTypeU3Ek__BackingField_9; }
	inline void set_U3CproductTypeU3Ek__BackingField_9(int32_t value)
	{
		___U3CproductTypeU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CisIntroductoryPricePeriodU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(AppleInAppPurchaseReceipt_t8495AF48B320D4EA26939FA02F9BA8784CF02F90, ___U3CisIntroductoryPricePeriodU3Ek__BackingField_10)); }
	inline int32_t get_U3CisIntroductoryPricePeriodU3Ek__BackingField_10() const { return ___U3CisIntroductoryPricePeriodU3Ek__BackingField_10; }
	inline int32_t* get_address_of_U3CisIntroductoryPricePeriodU3Ek__BackingField_10() { return &___U3CisIntroductoryPricePeriodU3Ek__BackingField_10; }
	inline void set_U3CisIntroductoryPricePeriodU3Ek__BackingField_10(int32_t value)
	{
		___U3CisIntroductoryPricePeriodU3Ek__BackingField_10 = value;
	}
};


// UnityEngine.Purchasing.Security.AppleReceipt
struct  AppleReceipt_t19AF99FA817972A222A162F65B730C469BFF8698  : public RuntimeObject
{
public:
	// System.String UnityEngine.Purchasing.Security.AppleReceipt::<bundleID>k__BackingField
	String_t* ___U3CbundleIDU3Ek__BackingField_0;
	// System.String UnityEngine.Purchasing.Security.AppleReceipt::<appVersion>k__BackingField
	String_t* ___U3CappVersionU3Ek__BackingField_1;
	// System.Byte[] UnityEngine.Purchasing.Security.AppleReceipt::<opaque>k__BackingField
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___U3CopaqueU3Ek__BackingField_2;
	// System.Byte[] UnityEngine.Purchasing.Security.AppleReceipt::<hash>k__BackingField
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___U3ChashU3Ek__BackingField_3;
	// System.String UnityEngine.Purchasing.Security.AppleReceipt::<originalApplicationVersion>k__BackingField
	String_t* ___U3CoriginalApplicationVersionU3Ek__BackingField_4;
	// System.DateTime UnityEngine.Purchasing.Security.AppleReceipt::<receiptCreationDate>k__BackingField
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___U3CreceiptCreationDateU3Ek__BackingField_5;
	// UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt[] UnityEngine.Purchasing.Security.AppleReceipt::inAppPurchaseReceipts
	AppleInAppPurchaseReceiptU5BU5D_tF628955FD1FC660B5652CC727A20066839251DA8* ___inAppPurchaseReceipts_6;

public:
	inline static int32_t get_offset_of_U3CbundleIDU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(AppleReceipt_t19AF99FA817972A222A162F65B730C469BFF8698, ___U3CbundleIDU3Ek__BackingField_0)); }
	inline String_t* get_U3CbundleIDU3Ek__BackingField_0() const { return ___U3CbundleIDU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CbundleIDU3Ek__BackingField_0() { return &___U3CbundleIDU3Ek__BackingField_0; }
	inline void set_U3CbundleIDU3Ek__BackingField_0(String_t* value)
	{
		___U3CbundleIDU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CbundleIDU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CappVersionU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AppleReceipt_t19AF99FA817972A222A162F65B730C469BFF8698, ___U3CappVersionU3Ek__BackingField_1)); }
	inline String_t* get_U3CappVersionU3Ek__BackingField_1() const { return ___U3CappVersionU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CappVersionU3Ek__BackingField_1() { return &___U3CappVersionU3Ek__BackingField_1; }
	inline void set_U3CappVersionU3Ek__BackingField_1(String_t* value)
	{
		___U3CappVersionU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CappVersionU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CopaqueU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(AppleReceipt_t19AF99FA817972A222A162F65B730C469BFF8698, ___U3CopaqueU3Ek__BackingField_2)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_U3CopaqueU3Ek__BackingField_2() const { return ___U3CopaqueU3Ek__BackingField_2; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_U3CopaqueU3Ek__BackingField_2() { return &___U3CopaqueU3Ek__BackingField_2; }
	inline void set_U3CopaqueU3Ek__BackingField_2(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___U3CopaqueU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CopaqueU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3ChashU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(AppleReceipt_t19AF99FA817972A222A162F65B730C469BFF8698, ___U3ChashU3Ek__BackingField_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_U3ChashU3Ek__BackingField_3() const { return ___U3ChashU3Ek__BackingField_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_U3ChashU3Ek__BackingField_3() { return &___U3ChashU3Ek__BackingField_3; }
	inline void set_U3ChashU3Ek__BackingField_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___U3ChashU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ChashU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CoriginalApplicationVersionU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(AppleReceipt_t19AF99FA817972A222A162F65B730C469BFF8698, ___U3CoriginalApplicationVersionU3Ek__BackingField_4)); }
	inline String_t* get_U3CoriginalApplicationVersionU3Ek__BackingField_4() const { return ___U3CoriginalApplicationVersionU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CoriginalApplicationVersionU3Ek__BackingField_4() { return &___U3CoriginalApplicationVersionU3Ek__BackingField_4; }
	inline void set_U3CoriginalApplicationVersionU3Ek__BackingField_4(String_t* value)
	{
		___U3CoriginalApplicationVersionU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CoriginalApplicationVersionU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CreceiptCreationDateU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(AppleReceipt_t19AF99FA817972A222A162F65B730C469BFF8698, ___U3CreceiptCreationDateU3Ek__BackingField_5)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_U3CreceiptCreationDateU3Ek__BackingField_5() const { return ___U3CreceiptCreationDateU3Ek__BackingField_5; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_U3CreceiptCreationDateU3Ek__BackingField_5() { return &___U3CreceiptCreationDateU3Ek__BackingField_5; }
	inline void set_U3CreceiptCreationDateU3Ek__BackingField_5(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___U3CreceiptCreationDateU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_inAppPurchaseReceipts_6() { return static_cast<int32_t>(offsetof(AppleReceipt_t19AF99FA817972A222A162F65B730C469BFF8698, ___inAppPurchaseReceipts_6)); }
	inline AppleInAppPurchaseReceiptU5BU5D_tF628955FD1FC660B5652CC727A20066839251DA8* get_inAppPurchaseReceipts_6() const { return ___inAppPurchaseReceipts_6; }
	inline AppleInAppPurchaseReceiptU5BU5D_tF628955FD1FC660B5652CC727A20066839251DA8** get_address_of_inAppPurchaseReceipts_6() { return &___inAppPurchaseReceipts_6; }
	inline void set_inAppPurchaseReceipts_6(AppleInAppPurchaseReceiptU5BU5D_tF628955FD1FC660B5652CC727A20066839251DA8* value)
	{
		___inAppPurchaseReceipts_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inAppPurchaseReceipts_6), (void*)value);
	}
};


// UnityEngine.Purchasing.Security.X509Cert
struct  X509Cert_tEC5F828EE93872CC82CDA3C2462EE085E4EA6B59  : public RuntimeObject
{
public:
	// System.String UnityEngine.Purchasing.Security.X509Cert::<SerialNumber>k__BackingField
	String_t* ___U3CSerialNumberU3Ek__BackingField_0;
	// System.DateTime UnityEngine.Purchasing.Security.X509Cert::<ValidAfter>k__BackingField
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___U3CValidAfterU3Ek__BackingField_1;
	// System.DateTime UnityEngine.Purchasing.Security.X509Cert::<ValidBefore>k__BackingField
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___U3CValidBeforeU3Ek__BackingField_2;
	// UnityEngine.Purchasing.Security.RSAKey UnityEngine.Purchasing.Security.X509Cert::<PubKey>k__BackingField
	RSAKey_t821B15EEDED09C7088C34750E22FDA0E30B8220C * ___U3CPubKeyU3Ek__BackingField_3;
	// System.Boolean UnityEngine.Purchasing.Security.X509Cert::<SelfSigned>k__BackingField
	bool ___U3CSelfSignedU3Ek__BackingField_4;
	// UnityEngine.Purchasing.Security.DistinguishedName UnityEngine.Purchasing.Security.X509Cert::<Subject>k__BackingField
	DistinguishedName_t869CBAB24FEC86C60A469DB0BE479FCAB3FAC521 * ___U3CSubjectU3Ek__BackingField_5;
	// UnityEngine.Purchasing.Security.DistinguishedName UnityEngine.Purchasing.Security.X509Cert::<Issuer>k__BackingField
	DistinguishedName_t869CBAB24FEC86C60A469DB0BE479FCAB3FAC521 * ___U3CIssuerU3Ek__BackingField_6;
	// LipingShare.LCLib.Asn1Processor.Asn1Node UnityEngine.Purchasing.Security.X509Cert::TbsCertificate
	Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * ___TbsCertificate_7;
	// LipingShare.LCLib.Asn1Processor.Asn1Node UnityEngine.Purchasing.Security.X509Cert::<Signature>k__BackingField
	Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * ___U3CSignatureU3Ek__BackingField_8;
	// System.Byte[] UnityEngine.Purchasing.Security.X509Cert::rawTBSCertificate
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___rawTBSCertificate_9;

public:
	inline static int32_t get_offset_of_U3CSerialNumberU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(X509Cert_tEC5F828EE93872CC82CDA3C2462EE085E4EA6B59, ___U3CSerialNumberU3Ek__BackingField_0)); }
	inline String_t* get_U3CSerialNumberU3Ek__BackingField_0() const { return ___U3CSerialNumberU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CSerialNumberU3Ek__BackingField_0() { return &___U3CSerialNumberU3Ek__BackingField_0; }
	inline void set_U3CSerialNumberU3Ek__BackingField_0(String_t* value)
	{
		___U3CSerialNumberU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSerialNumberU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CValidAfterU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(X509Cert_tEC5F828EE93872CC82CDA3C2462EE085E4EA6B59, ___U3CValidAfterU3Ek__BackingField_1)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_U3CValidAfterU3Ek__BackingField_1() const { return ___U3CValidAfterU3Ek__BackingField_1; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_U3CValidAfterU3Ek__BackingField_1() { return &___U3CValidAfterU3Ek__BackingField_1; }
	inline void set_U3CValidAfterU3Ek__BackingField_1(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___U3CValidAfterU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CValidBeforeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(X509Cert_tEC5F828EE93872CC82CDA3C2462EE085E4EA6B59, ___U3CValidBeforeU3Ek__BackingField_2)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_U3CValidBeforeU3Ek__BackingField_2() const { return ___U3CValidBeforeU3Ek__BackingField_2; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_U3CValidBeforeU3Ek__BackingField_2() { return &___U3CValidBeforeU3Ek__BackingField_2; }
	inline void set_U3CValidBeforeU3Ek__BackingField_2(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___U3CValidBeforeU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CPubKeyU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(X509Cert_tEC5F828EE93872CC82CDA3C2462EE085E4EA6B59, ___U3CPubKeyU3Ek__BackingField_3)); }
	inline RSAKey_t821B15EEDED09C7088C34750E22FDA0E30B8220C * get_U3CPubKeyU3Ek__BackingField_3() const { return ___U3CPubKeyU3Ek__BackingField_3; }
	inline RSAKey_t821B15EEDED09C7088C34750E22FDA0E30B8220C ** get_address_of_U3CPubKeyU3Ek__BackingField_3() { return &___U3CPubKeyU3Ek__BackingField_3; }
	inline void set_U3CPubKeyU3Ek__BackingField_3(RSAKey_t821B15EEDED09C7088C34750E22FDA0E30B8220C * value)
	{
		___U3CPubKeyU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPubKeyU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSelfSignedU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(X509Cert_tEC5F828EE93872CC82CDA3C2462EE085E4EA6B59, ___U3CSelfSignedU3Ek__BackingField_4)); }
	inline bool get_U3CSelfSignedU3Ek__BackingField_4() const { return ___U3CSelfSignedU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CSelfSignedU3Ek__BackingField_4() { return &___U3CSelfSignedU3Ek__BackingField_4; }
	inline void set_U3CSelfSignedU3Ek__BackingField_4(bool value)
	{
		___U3CSelfSignedU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CSubjectU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(X509Cert_tEC5F828EE93872CC82CDA3C2462EE085E4EA6B59, ___U3CSubjectU3Ek__BackingField_5)); }
	inline DistinguishedName_t869CBAB24FEC86C60A469DB0BE479FCAB3FAC521 * get_U3CSubjectU3Ek__BackingField_5() const { return ___U3CSubjectU3Ek__BackingField_5; }
	inline DistinguishedName_t869CBAB24FEC86C60A469DB0BE479FCAB3FAC521 ** get_address_of_U3CSubjectU3Ek__BackingField_5() { return &___U3CSubjectU3Ek__BackingField_5; }
	inline void set_U3CSubjectU3Ek__BackingField_5(DistinguishedName_t869CBAB24FEC86C60A469DB0BE479FCAB3FAC521 * value)
	{
		___U3CSubjectU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSubjectU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIssuerU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(X509Cert_tEC5F828EE93872CC82CDA3C2462EE085E4EA6B59, ___U3CIssuerU3Ek__BackingField_6)); }
	inline DistinguishedName_t869CBAB24FEC86C60A469DB0BE479FCAB3FAC521 * get_U3CIssuerU3Ek__BackingField_6() const { return ___U3CIssuerU3Ek__BackingField_6; }
	inline DistinguishedName_t869CBAB24FEC86C60A469DB0BE479FCAB3FAC521 ** get_address_of_U3CIssuerU3Ek__BackingField_6() { return &___U3CIssuerU3Ek__BackingField_6; }
	inline void set_U3CIssuerU3Ek__BackingField_6(DistinguishedName_t869CBAB24FEC86C60A469DB0BE479FCAB3FAC521 * value)
	{
		___U3CIssuerU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CIssuerU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_TbsCertificate_7() { return static_cast<int32_t>(offsetof(X509Cert_tEC5F828EE93872CC82CDA3C2462EE085E4EA6B59, ___TbsCertificate_7)); }
	inline Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * get_TbsCertificate_7() const { return ___TbsCertificate_7; }
	inline Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 ** get_address_of_TbsCertificate_7() { return &___TbsCertificate_7; }
	inline void set_TbsCertificate_7(Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * value)
	{
		___TbsCertificate_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TbsCertificate_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSignatureU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(X509Cert_tEC5F828EE93872CC82CDA3C2462EE085E4EA6B59, ___U3CSignatureU3Ek__BackingField_8)); }
	inline Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * get_U3CSignatureU3Ek__BackingField_8() const { return ___U3CSignatureU3Ek__BackingField_8; }
	inline Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 ** get_address_of_U3CSignatureU3Ek__BackingField_8() { return &___U3CSignatureU3Ek__BackingField_8; }
	inline void set_U3CSignatureU3Ek__BackingField_8(Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * value)
	{
		___U3CSignatureU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSignatureU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_rawTBSCertificate_9() { return static_cast<int32_t>(offsetof(X509Cert_tEC5F828EE93872CC82CDA3C2462EE085E4EA6B59, ___rawTBSCertificate_9)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_rawTBSCertificate_9() const { return ___rawTBSCertificate_9; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_rawTBSCertificate_9() { return &___rawTBSCertificate_9; }
	inline void set_rawTBSCertificate_9(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___rawTBSCertificate_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rawTBSCertificate_9), (void*)value);
	}
};


// System.Security.Cryptography.RSACryptoServiceProvider
struct  RSACryptoServiceProvider_t6DC0FC3205BA6CDCA4FF2AEEF566D8F0CCE26AD4  : public RSA_tB6C4B434B2AC02E3F8981DB2908C2018E251D145
{
public:
	// Mono.Security.Cryptography.KeyPairPersistence System.Security.Cryptography.RSACryptoServiceProvider::store
	KeyPairPersistence_t5C070E8D158094F7D0CC5D591F30EDFFB39849A2 * ___store_6;
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::persistKey
	bool ___persistKey_7;
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::persisted
	bool ___persisted_8;
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::privateKeyExportable
	bool ___privateKeyExportable_9;
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::m_disposed
	bool ___m_disposed_10;
	// Mono.Security.Cryptography.RSAManaged System.Security.Cryptography.RSACryptoServiceProvider::rsa
	RSAManaged_t7FC74A986C888D9301EC82EBE4A37C293CDA963A * ___rsa_11;

public:
	inline static int32_t get_offset_of_store_6() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_t6DC0FC3205BA6CDCA4FF2AEEF566D8F0CCE26AD4, ___store_6)); }
	inline KeyPairPersistence_t5C070E8D158094F7D0CC5D591F30EDFFB39849A2 * get_store_6() const { return ___store_6; }
	inline KeyPairPersistence_t5C070E8D158094F7D0CC5D591F30EDFFB39849A2 ** get_address_of_store_6() { return &___store_6; }
	inline void set_store_6(KeyPairPersistence_t5C070E8D158094F7D0CC5D591F30EDFFB39849A2 * value)
	{
		___store_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___store_6), (void*)value);
	}

	inline static int32_t get_offset_of_persistKey_7() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_t6DC0FC3205BA6CDCA4FF2AEEF566D8F0CCE26AD4, ___persistKey_7)); }
	inline bool get_persistKey_7() const { return ___persistKey_7; }
	inline bool* get_address_of_persistKey_7() { return &___persistKey_7; }
	inline void set_persistKey_7(bool value)
	{
		___persistKey_7 = value;
	}

	inline static int32_t get_offset_of_persisted_8() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_t6DC0FC3205BA6CDCA4FF2AEEF566D8F0CCE26AD4, ___persisted_8)); }
	inline bool get_persisted_8() const { return ___persisted_8; }
	inline bool* get_address_of_persisted_8() { return &___persisted_8; }
	inline void set_persisted_8(bool value)
	{
		___persisted_8 = value;
	}

	inline static int32_t get_offset_of_privateKeyExportable_9() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_t6DC0FC3205BA6CDCA4FF2AEEF566D8F0CCE26AD4, ___privateKeyExportable_9)); }
	inline bool get_privateKeyExportable_9() const { return ___privateKeyExportable_9; }
	inline bool* get_address_of_privateKeyExportable_9() { return &___privateKeyExportable_9; }
	inline void set_privateKeyExportable_9(bool value)
	{
		___privateKeyExportable_9 = value;
	}

	inline static int32_t get_offset_of_m_disposed_10() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_t6DC0FC3205BA6CDCA4FF2AEEF566D8F0CCE26AD4, ___m_disposed_10)); }
	inline bool get_m_disposed_10() const { return ___m_disposed_10; }
	inline bool* get_address_of_m_disposed_10() { return &___m_disposed_10; }
	inline void set_m_disposed_10(bool value)
	{
		___m_disposed_10 = value;
	}

	inline static int32_t get_offset_of_rsa_11() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_t6DC0FC3205BA6CDCA4FF2AEEF566D8F0CCE26AD4, ___rsa_11)); }
	inline RSAManaged_t7FC74A986C888D9301EC82EBE4A37C293CDA963A * get_rsa_11() const { return ___rsa_11; }
	inline RSAManaged_t7FC74A986C888D9301EC82EBE4A37C293CDA963A ** get_address_of_rsa_11() { return &___rsa_11; }
	inline void set_rsa_11(RSAManaged_t7FC74A986C888D9301EC82EBE4A37C293CDA963A * value)
	{
		___rsa_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rsa_11), (void*)value);
	}
};

struct RSACryptoServiceProvider_t6DC0FC3205BA6CDCA4FF2AEEF566D8F0CCE26AD4_StaticFields
{
public:
	// System.Security.Cryptography.CspProviderFlags modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.RSACryptoServiceProvider::s_UseMachineKeyStore
	int32_t ___s_UseMachineKeyStore_2;

public:
	inline static int32_t get_offset_of_s_UseMachineKeyStore_2() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_t6DC0FC3205BA6CDCA4FF2AEEF566D8F0CCE26AD4_StaticFields, ___s_UseMachineKeyStore_2)); }
	inline int32_t get_s_UseMachineKeyStore_2() const { return ___s_UseMachineKeyStore_2; }
	inline int32_t* get_address_of_s_UseMachineKeyStore_2() { return &___s_UseMachineKeyStore_2; }
	inline void set_s_UseMachineKeyStore_2(int32_t value)
	{
		___s_UseMachineKeyStore_2 = value;
	}
};


// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// UnityEngine.Purchasing.Security.IAPSecurityException
struct  IAPSecurityException_t9E59EAFE4B1540C47F60E82B9532F7D910B09D6A  : public Exception_t
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


// UnityEngine.Purchasing.Security.InvalidPKCS7Data
struct  InvalidPKCS7Data_t66D90EB0467E0D800AA9F61CF113C851101D136A  : public IAPSecurityException_t9E59EAFE4B1540C47F60E82B9532F7D910B09D6A
{
public:

public:
};


// UnityEngine.Purchasing.Security.InvalidRSAData
struct  InvalidRSAData_tCBAC13419C66041C71750F1889052E7E4B77FC0E  : public IAPSecurityException_t9E59EAFE4B1540C47F60E82B9532F7D910B09D6A
{
public:

public:
};


// UnityEngine.Purchasing.Security.InvalidTimeFormat
struct  InvalidTimeFormat_t803BE227F2D3A4A788D5992EAA0B479232FA2661  : public IAPSecurityException_t9E59EAFE4B1540C47F60E82B9532F7D910B09D6A
{
public:

public:
};


// UnityEngine.Purchasing.Security.InvalidX509Data
struct  InvalidX509Data_tC7C3A26B4358B509276F77D08FED22DE46D6A666  : public IAPSecurityException_t9E59EAFE4B1540C47F60E82B9532F7D910B09D6A
{
public:

public:
};


// UnityEngine.Purchasing.Security.UnsupportedSignerInfoVersion
struct  UnsupportedSignerInfoVersion_t78C3F3CA53D3A5E2EC25278D6D4483ED761E18F4  : public IAPSecurityException_t9E59EAFE4B1540C47F60E82B9532F7D910B09D6A
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt[]
struct AppleInAppPurchaseReceiptU5BU5D_tF628955FD1FC660B5652CC727A20066839251DA8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) AppleInAppPurchaseReceipt_t8495AF48B320D4EA26939FA02F9BA8784CF02F90 * m_Items[1];

public:
	inline AppleInAppPurchaseReceipt_t8495AF48B320D4EA26939FA02F9BA8784CF02F90 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AppleInAppPurchaseReceipt_t8495AF48B320D4EA26939FA02F9BA8784CF02F90 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AppleInAppPurchaseReceipt_t8495AF48B320D4EA26939FA02F9BA8784CF02F90 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AppleInAppPurchaseReceipt_t8495AF48B320D4EA26939FA02F9BA8784CF02F90 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AppleInAppPurchaseReceipt_t8495AF48B320D4EA26939FA02F9BA8784CF02F90 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AppleInAppPurchaseReceipt_t8495AF48B320D4EA26939FA02F9BA8784CF02F90 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m4EBC00E16E83DA33851A551757D2B7332D5756B9_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_m6625C3BA931A6EE5D6DB46B9E743B40AAA30010B_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Purchasing.Security.AppleReceiptParser::ArrayEquals<System.Byte>(T[],T[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AppleReceiptParser_ArrayEquals_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_mBE6123F33FC1CFCCA2B361DD44796AF04DDAD009_gshared (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___a0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___b1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* List_1_ToArray_m801D4DEF3587F60F463F04EEABE5CBE711FE5612_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, const RuntimeMethod* method);

// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96 (String_t* __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline (String_t* __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void LipingShare.LCLib.Asn1Processor.Asn1Node::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Asn1Node_Init_mE60C4D88B0D1A2957CA9B271402302545585E4FB (Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * __this, const RuntimeMethod* method);
// System.Int64 LipingShare.LCLib.Asn1Processor.Asn1Node::get_Deepness()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Asn1Node_get_Deepness_m1525EDB697AA17BA32A10F145DFD9C8246239D6C (Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * __this, const RuntimeMethod* method);
// System.Void System.Collections.ArrayList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayList__ctor_m481FA7B37620B59B8C0434A764F5705A6ABDEAE6 (ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * __this, const RuntimeMethod* method);
// System.String LipingShare.LCLib.Asn1Processor.Asn1Node::GetIndentStr(LipingShare.LCLib.Asn1Processor.Asn1Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Asn1Node_GetIndentStr_m7ED765F57686361EF3E9F1C9A48CA6A155B3DCCF (Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * __this, Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * ___startNode0, const RuntimeMethod* method);
// System.String LipingShare.LCLib.Asn1Processor.Asn1Util::ToHexString(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Asn1Util_ToHexString_mD35BF6D2E0CD4D8CC7FFA9829350CC522A75B8DF (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___bytes0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m232E857CA5107EA6AC52E7DD7018716C021F237B (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___values0, const RuntimeMethod* method);
// System.String LipingShare.LCLib.Asn1Processor.Asn1Node::FormatLineHexString(System.String,System.Int32,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Asn1Node_FormatLineHexString_m84B989C7EFD166698EA3E62FD100F8D7F60931E7 (Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * __this, String_t* ___lStr0, int32_t ___indent1, int32_t ___lineLen2, String_t* ___msg3, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF4626905368D6558695A823466A1AF65EADB9923 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.String LipingShare.LCLib.Asn1Processor.Asn1Util::GenStr(System.Int32,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Asn1Util_GenStr_m03ED7C1092BBF4EF64FEB70FAE9C49868CCBE7E6 (int32_t ___len0, Il2CppChar ___xch1, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB593C0A320C683E6E47EFFC0A12B7A465E5E43BB (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method);
// System.Void LipingShare.LCLib.Asn1Processor.Asn1Node::set_RequireRecalculatePar(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Asn1Node_set_RequireRecalculatePar_m9D2B76F8DE8B816D4BF62A67AFA921A4C247CF31 (Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean LipingShare.LCLib.Asn1Processor.Asn1Node::InternalLoadData(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Asn1Node_InternalLoadData_m67F1F97CBB617A2FB5BB3D00089E0BCFBD716677 (Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * __this, Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___xdata0, const RuntimeMethod* method);
// System.Void LipingShare.LCLib.Asn1Processor.Asn1Node::RecalculateTreePar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Asn1Node_RecalculateTreePar_mD0FD98AB1C08B1A3413F0E52D2EB4B688B957C51 (Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * __this, const RuntimeMethod* method);
// System.Int64 LipingShare.LCLib.Asn1Processor.Asn1Node::get_ChildNodeCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Asn1Node_get_ChildNodeCount_mF517D478344A4AF6843BE4319A05D248B6B25FAC (Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * __this, const RuntimeMethod* method);
// System.Int32 LipingShare.LCLib.Asn1Processor.Asn1Util::DERLengthEncode(System.IO.Stream,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Asn1Util_DERLengthEncode_mA9F7B1782C76D6877D706D78E99DA95002C2DDC3 (Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___xdata0, uint64_t ___length1, const RuntimeMethod* method);
// LipingShare.LCLib.Asn1Processor.Asn1Node LipingShare.LCLib.Asn1Processor.Asn1Node::GetChildNode(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * Asn1Node_GetChildNode_m9D9513B22B565B7739D03F39C6B8F7D5AFE85010 (Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Boolean LipingShare.LCLib.Asn1Processor.Asn1Node::SaveData(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Asn1Node_SaveData_mE256A287688AF4E0A3492CD79E1E0104F2CF5BA0 (Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * __this, Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___xdata0, const RuntimeMethod* method);
// System.Void LipingShare.LCLib.Asn1Processor.Asn1Node::ClearAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Asn1Node_ClearAll_mB85307804DCBFDC3A9ADD9F3DB631D54A41A68A1 (Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * __this, const RuntimeMethod* method);
// System.String LipingShare.LCLib.Asn1Processor.Asn1Util::GetTagName(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Asn1Util_GetTagName_m632B4809ADA197245B177C5D5CA7DCCF072B978B (uint8_t ___tag0, const RuntimeMethod* method);
// System.String LipingShare.LCLib.Asn1Processor.Asn1Node::get_TagName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Asn1Node_get_TagName_m5D6B8061E8F709B755D2A677292DFF9BE7E18844 (Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA3AC3FE7B23D97F3A5BAA082D25B0E01B341A865 (String_t* ___format0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method);
// System.Void LipingShare.LCLib.Asn1Processor.Oid::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Oid__ctor_mFFD980E1341E8BA30F696F91756ACE4D33CB9E5E (Oid_t5B93F085287F1B3F4A9F315146D0C08398544492 * __this, const RuntimeMethod* method);
// System.Void System.IO.MemoryStream::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m731754F1435D29F87C407D84ED47AF35FFF9B0EF (MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer0, const RuntimeMethod* method);
// System.String LipingShare.LCLib.Asn1Processor.Oid::GetOidName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Oid_GetOidName_m70F7C7FA6605F51CCD63598FA18AE26C521B9391 (Oid_t5B93F085287F1B3F4A9F315146D0C08398544492 * __this, String_t* ___inOidStr0, const RuntimeMethod* method);
// System.Void LipingShare.LCLib.Asn1Processor.RelativeOid::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RelativeOid__ctor_m31B82A6D54A8D09F8F895B180782CD27C8908478 (RelativeOid_tA04AF790321D95FE09233E82417A118B0B1BBBBB * __this, const RuntimeMethod* method);
// System.Void System.Text.UTF8Encoding::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UTF8Encoding__ctor_m999E138A2E4C290F8A97866714EE53D58C931488 (UTF8Encoding_t77ED103B749A387EF072C3429F48C91D12CA08DE * __this, const RuntimeMethod* method);
// System.String LipingShare.LCLib.Asn1Processor.Asn1Util::BytesToString(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Asn1Util_BytesToString_m1887FCB8C42067024ABECD8AADB82FE9C10CB2A3 (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___bytes0, const RuntimeMethod* method);
// System.String LipingShare.LCLib.Asn1Processor.Asn1Node::FormatLineString(System.String,System.Int32,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Asn1Node_FormatLineString_m22757245208B64E6BC87B209BB1191B33B2DEB89 (Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * __this, String_t* ___lStr0, int32_t ___indent1, int32_t ___lineLen2, String_t* ___msg3, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mDD2E38332DED3A8C088D38D78A0E0BEB5091DA64 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method);
// System.Int64 LipingShare.LCLib.Asn1Processor.Asn1Util::BytesToLong(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Asn1Util_BytesToLong_m9D73FD300DA3D8037E90E580318E1F9E4EA5FDFF (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___bytes0, const RuntimeMethod* method);
// System.String System.Int64::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int64_ToString_m8210E39355A227AE15DD391EB810AA9B6AB8B26C (int64_t* __this, const RuntimeMethod* method);
// System.String LipingShare.LCLib.Asn1Processor.Asn1Node::GetHexPrintingStr(LipingShare.LCLib.Asn1Processor.Asn1Node,System.String,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Asn1Node_GetHexPrintingStr_m2C5C36DE9808831F7395AFF0E0DB999FB4DD5441 (Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * __this, Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * ___startNode0, String_t* ___baseLine1, String_t* ___lStr2, int32_t ___lineLen3, const RuntimeMethod* method);
// System.String LipingShare.LCLib.Asn1Processor.Asn1Node::GetListStr(LipingShare.LCLib.Asn1Processor.Asn1Node,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Asn1Node_GetListStr_m26EB1B44AC47102EC0C7514186C11CE73726014D (Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * __this, Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * ___startNode0, int32_t ___lineLen1, const RuntimeMethod* method);
// System.String LipingShare.LCLib.Asn1Processor.Asn1Util::FormatString(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Asn1Util_FormatString_mE0F0FECC3332BFD9488F697A0643920B20B0B821 (String_t* ___inStr0, int32_t ___lineLen1, int32_t ___groupLen2, const RuntimeMethod* method);
// System.Void System.IO.MemoryStream::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m9D0F92C76EFEDA651B678A98EB693FD945286DC2 (MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * __this, const RuntimeMethod* method);
// LipingShare.LCLib.Asn1Processor.Asn1Node LipingShare.LCLib.Asn1Processor.Asn1Node::get_ParentNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * Asn1Node_get_ParentNode_mAD267B17EFB0D01BAAD1120937305342C2412F1A (Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * __this, const RuntimeMethod* method);
// System.Int64 LipingShare.LCLib.Asn1Processor.Asn1Node::ResetBranchDataLength(LipingShare.LCLib.Asn1Processor.Asn1Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Asn1Node_ResetBranchDataLength_m129A81139E86676DD2A919C4F2F248D8CA37E2AC (Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * ___node0, const RuntimeMethod* method);
// System.Void LipingShare.LCLib.Asn1Processor.Asn1Node::ResetChildNodePar(LipingShare.LCLib.Asn1Processor.Asn1Node,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Asn1Node_ResetChildNodePar_m1908B4A975AE86DF6DEC30C9E498BD5888DD8F30 (Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * __this, Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * ___xNode0, int64_t ___subOffset1, const RuntimeMethod* method);
// System.Void LipingShare.LCLib.Asn1Processor.Asn1Node::ResetDataLengthFieldWidth(LipingShare.LCLib.Asn1Processor.Asn1Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Asn1Node_ResetDataLengthFieldWidth_m941BC464CA4C3990E89CD221A8C6FCE21D97EC2F (Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * ___node0, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02 (int32_t* __this, const RuntimeMethod* method);
// System.String LipingShare.LCLib.Asn1Processor.Asn1Node::GetText(LipingShare.LCLib.Asn1Processor.Asn1Node,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Asn1Node_GetText_mF77FD071F26B7F6A3A879DBCBE6AF5FE2403C204 (Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * __this, Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * ___startNode0, int32_t ___lineLen1, const RuntimeMethod* method);
// System.Int64 LipingShare.LCLib.Asn1Processor.Asn1Util::DerLengthDecode(System.IO.Stream,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Asn1Util_DerLengthDecode_m196AE4433F4364245072F4ADFD95BB1D08DB2E5B (Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___bt0, bool* ___isIndefiniteLength1, const RuntimeMethod* method);
// System.Void System.IO.MemoryStream::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m78689C82DED9ACE5022B7EABF28F17FF318DF2AA (MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Void LipingShare.LCLib.Asn1Processor.Asn1Node::.ctor(LipingShare.LCLib.Asn1Processor.Asn1Node,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Asn1Node__ctor_m3F16F03AE395841D39A0A284561028C2229BF86F (Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * __this, Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * ___parentNode0, int64_t ___dataOffset1, const RuntimeMethod* method);
// System.Void LipingShare.LCLib.Asn1Processor.Asn1Node::AddChild(LipingShare.LCLib.Asn1Processor.Asn1Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Asn1Node_AddChild_m5F099C6C83A61B22B380F0F99A4E743B3FBB00AC (Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * __this, Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * ___xdata0, const RuntimeMethod* method);
// System.Boolean LipingShare.LCLib.Asn1Processor.Asn1Node::ListDecode(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Asn1Node_ListDecode_m66D5F28DAEC3F743756FB08535EC484FB8A66A82 (Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * __this, Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___xdata0, const RuntimeMethod* method);
// System.Boolean LipingShare.LCLib.Asn1Processor.Asn1Node::GeneralDecode(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Asn1Node_GeneralDecode_m825D2D4ADFFBF202236418DA9CDD88C05791EA5C (Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * __this, Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___xdata0, const RuntimeMethod* method);
// System.Void LipingShare.LCLib.Asn1Processor.Asn1Node::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Asn1Node__ctor_mDF96FC0D52B88A7A44E6243ECA069B59C75035FC (Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * __this, const RuntimeMethod* method);
// System.Boolean LipingShare.LCLib.Asn1Processor.Asn1Node::LoadData(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Asn1Node_LoadData_m8DF7BDE6D2C3D949E5240B6095C0448896A27703 (Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * __this, Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___xdata0, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7 (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.String LipingShare.LCLib.Asn1Processor.Asn1Parser::GetNodeText(LipingShare.LCLib.Asn1Processor.Asn1Node,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Asn1Parser_GetNodeText_mC9A7B48ECAE29610760E2AA05778327A7FDF398A (Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * ___node0, int32_t ___lineLen1, const RuntimeMethod* method);
// System.String LipingShare.LCLib.Asn1Processor.Asn1Parser::GetNodeTextHeader(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Asn1Parser_GetNodeTextHeader_m6272D8BEA402890545167E9C92E554A97B52292A (int32_t ___lineLen0, const RuntimeMethod* method);
// System.String System.String::CreateString(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_m394C06654854ADD4C51FF957BE0CC72EF52BAA96 (String_t* __this, CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___val0, const RuntimeMethod* method);
// System.String System.String::TrimEnd(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_TrimEnd_m8D4905B71A4AEBF9D0BC36C6003FC9A5AD630403 (String_t* __this, CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___trimChars0, const RuntimeMethod* method);
// System.Int32 LipingShare.LCLib.Asn1Processor.Asn1Util::BytePrecision(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Asn1Util_BytePrecision_m7096E0EBA6C169BCE432B797CCE210BCEED4191A (uint64_t ___value0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m29F50CDFEEE0AB868200291366253DD4737BC76A (RuntimeArray * ___array0, RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF  ___fldHandle1, const RuntimeMethod* method);
// System.Void System.Collections.Specialized.StringDictionary::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringDictionary__ctor_m8B942FDF8F240EDFC869E6F1CD2EBC59F75BC512 (StringDictionary_t9B6306775C5F70981BCB8A30603B4C93C22844FF * __this, const RuntimeMethod* method);
// System.String System.Convert::ToString(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToString_m993DA4E9E90F47B1899CC578C42204608C4F7C5F (int32_t ___value0, const RuntimeMethod* method);
// System.Int32 LipingShare.LCLib.Asn1Processor.Oid::DecodeValue(System.IO.Stream,System.UInt64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Oid_DecodeValue_m7FE3C373C18B710B9CCEE6528369AC0F71785ED5 (Oid_t5B93F085287F1B3F4A9F315146D0C08398544492 * __this, Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___bt0, uint64_t* ___v1, const RuntimeMethod* method);
// System.String System.UInt64::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UInt64_ToString_mF0E40B7459C207B89A1C8C04CE7F183AC0E6D672 (uint64_t* __this, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// UnityEngine.Purchasing.Security.AppleReceipt UnityEngine.Purchasing.Security.AppleReceiptParser::Parse(System.Byte[],UnityEngine.Purchasing.Security.PKCS7&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppleReceipt_t19AF99FA817972A222A162F65B730C469BFF8698 * AppleReceiptParser_Parse_mCAA5211755A26C24A67F5C1AC4ACF7F6B15C9012 (AppleReceiptParser_t34DA429F3553864684768F2E95D35C1D6A90F3E4 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___receiptData0, PKCS7_t851499113E52C57B34831AE4D5AB00C973B7D21A ** ___receipt1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_mAD4B2095526B4742201B24C5ADF1717AFB15EF89 (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m4EBC00E16E83DA33851A551757D2B7332D5756B9_gshared)(__this, ___key0, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0)
inline RuntimeObject * Dictionary_2_get_Item_mB490F7029D7451FAF06E3020040E604B500BA3B2 (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m6625C3BA931A6EE5D6DB46B9E743B40AAA30010B_gshared)(__this, ___key0, method);
}
// System.Boolean UnityEngine.Purchasing.Security.AppleReceiptParser::ArrayEquals<System.Byte>(T[],T[])
inline bool AppleReceiptParser_ArrayEquals_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_mBE6123F33FC1CFCCA2B361DD44796AF04DDAD009 (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___a0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___b1, const RuntimeMethod* method)
{
	return ((  bool (*) (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, const RuntimeMethod*))AppleReceiptParser_ArrayEquals_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_mBE6123F33FC1CFCCA2B361DD44796AF04DDAD009_gshared)(___a0, ___b1, method);
}
// System.Void LipingShare.LCLib.Asn1Processor.Asn1Parser::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Asn1Parser__ctor_mFFC9A3372F766DBBEE823423DD2D6F9730C84E50 (Asn1Parser_t6EAA9B28705029F260D90731751E990EF3848620 * __this, const RuntimeMethod* method);
// System.Void LipingShare.LCLib.Asn1Processor.Asn1Parser::LoadData(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Asn1Parser_LoadData_mF8B6E7723F02588C758AFF9A34C766B8B4FB03E7 (Asn1Parser_t6EAA9B28705029F260D90731751E990EF3848620 * __this, Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___stream0, const RuntimeMethod* method);
// LipingShare.LCLib.Asn1Processor.Asn1Node LipingShare.LCLib.Asn1Processor.Asn1Parser::get_RootNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * Asn1Parser_get_RootNode_mA653B5BBF9063F293E981D45AF3FC82E4E4DFD43 (Asn1Parser_t6EAA9B28705029F260D90731751E990EF3848620 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.PKCS7::.ctor(LipingShare.LCLib.Asn1Processor.Asn1Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PKCS7__ctor_mDAC6EAC1F6F37BF80B57CD922FEB28D5C7905317 (PKCS7_t851499113E52C57B34831AE4D5AB00C973B7D21A * __this, Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * ___node0, const RuntimeMethod* method);
// LipingShare.LCLib.Asn1Processor.Asn1Node UnityEngine.Purchasing.Security.PKCS7::get_data()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * PKCS7_get_data_m6C282961220626FDCDF7A0BCD869C8F37BD01554_inline (PKCS7_t851499113E52C57B34831AE4D5AB00C973B7D21A * __this, const RuntimeMethod* method);
// UnityEngine.Purchasing.Security.AppleReceipt UnityEngine.Purchasing.Security.AppleReceiptParser::ParseReceipt(LipingShare.LCLib.Asn1Processor.Asn1Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppleReceipt_t19AF99FA817972A222A162F65B730C469BFF8698 * AppleReceiptParser_ParseReceipt_m8104213AF42B03EFDE42CCD556A99CBD8DAA80AC (AppleReceiptParser_t34DA429F3553864684768F2E95D35C1D6A90F3E4 * __this, Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * ___data0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_mEA41AEAE79570A9410777F6B90969532564025DD (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * __this, String_t* ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA *, String_t*, RuntimeObject *, const RuntimeMethod*))Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93_gshared)(__this, ___key0, ___value1, method);
}
// System.Void UnityEngine.Purchasing.Security.InvalidPKCS7Data::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidPKCS7Data__ctor_mD66D69E4C6C7B78CCA72012A8886107CB59BBBA3 (InvalidPKCS7Data_t66D90EB0467E0D800AA9F61CF113C851101D136A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.AppleReceipt::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppleReceipt__ctor_mACEC3DD73DF3BF61043E79171F0BE783DE45C8C3 (AppleReceipt_t19AF99FA817972A222A162F65B730C469BFF8698 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt>::.ctor()
inline void List_1__ctor_m3130DE70A254B5EDFE35D7D1A249F3308756C34B (List_1_tEA4ACF1E95999E8EC25D6544E307BD87261ADFC9 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tEA4ACF1E95999E8EC25D6544E307BD87261ADFC9 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Byte[] LipingShare.LCLib.Asn1Processor.Asn1Node::get_Data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* Asn1Node_get_Data_mD11992CD2F1CCEC2B0E47491D3B6AF04F9C34EC7 (Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * __this, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * Encoding_get_UTF8_m67C8652936B681E7BC7505E459E88790E0FF16D9 (const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.AppleReceipt::set_bundleID(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AppleReceipt_set_bundleID_m3821E9162753D78429421EC4BA8D0F2778A99728_inline (AppleReceipt_t19AF99FA817972A222A162F65B730C469BFF8698 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.AppleReceipt::set_appVersion(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AppleReceipt_set_appVersion_mA8B0F89E3FECB6154C0C7F9E50AE662F362219AB_inline (AppleReceipt_t19AF99FA817972A222A162F65B730C469BFF8698 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.AppleReceipt::set_opaque(System.Byte[])
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AppleReceipt_set_opaque_m5B8F9DBF8FE29162066ACE5A77C48A1058BDDAE4_inline (AppleReceipt_t19AF99FA817972A222A162F65B730C469BFF8698 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.AppleReceipt::set_hash(System.Byte[])
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AppleReceipt_set_hash_mF81CA1CFD1060539BCC217FA9AF2CB665E1F8DE3_inline (AppleReceipt_t19AF99FA817972A222A162F65B730C469BFF8698 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___value0, const RuntimeMethod* method);
// System.DateTime System.DateTime::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  DateTime_Parse_mB1F4939B2FFBE63D10A65D1BC801FFA3207F1C09 (String_t* ___s0, const RuntimeMethod* method);
// System.DateTime System.DateTime::ToUniversalTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  DateTime_ToUniversalTime_mA8B74D947E186568C55D9C6F56D59F9A3C7775B1 (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.AppleReceipt::set_receiptCreationDate(System.DateTime)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AppleReceipt_set_receiptCreationDate_m9EDA99CB584C1867F28167E00203C3D5C05E8553_inline (AppleReceipt_t19AF99FA817972A222A162F65B730C469BFF8698 * __this, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___value0, const RuntimeMethod* method);
// UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt UnityEngine.Purchasing.Security.AppleReceiptParser::ParseInAppReceipt(LipingShare.LCLib.Asn1Processor.Asn1Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppleInAppPurchaseReceipt_t8495AF48B320D4EA26939FA02F9BA8784CF02F90 * AppleReceiptParser_ParseInAppReceipt_m9C2C6064E5AA40BD67B0D2B07393576E4A7B5E17 (AppleReceiptParser_t34DA429F3553864684768F2E95D35C1D6A90F3E4 * __this, Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * ___inApp0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt>::Add(!0)
inline void List_1_Add_m48E5F21339F7EFA4099CAEFAB627A45367BD7AAF (List_1_tEA4ACF1E95999E8EC25D6544E307BD87261ADFC9 * __this, AppleInAppPurchaseReceipt_t8495AF48B320D4EA26939FA02F9BA8784CF02F90 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tEA4ACF1E95999E8EC25D6544E307BD87261ADFC9 *, AppleInAppPurchaseReceipt_t8495AF48B320D4EA26939FA02F9BA8784CF02F90 *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, ___item0, method);
}
// System.Void UnityEngine.Purchasing.Security.AppleReceipt::set_originalApplicationVersion(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AppleReceipt_set_originalApplicationVersion_m21509B22052C125E8E05D06731406D86DA36270B_inline (AppleReceipt_t19AF99FA817972A222A162F65B730C469BFF8698 * __this, String_t* ___value0, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt>::ToArray()
inline AppleInAppPurchaseReceiptU5BU5D_tF628955FD1FC660B5652CC727A20066839251DA8* List_1_ToArray_m79904C3E54880608C5AD2D31B799A194B27AB4A2 (List_1_tEA4ACF1E95999E8EC25D6544E307BD87261ADFC9 * __this, const RuntimeMethod* method)
{
	return ((  AppleInAppPurchaseReceiptU5BU5D_tF628955FD1FC660B5652CC727A20066839251DA8* (*) (List_1_tEA4ACF1E95999E8EC25D6544E307BD87261ADFC9 *, const RuntimeMethod*))List_1_ToArray_m801D4DEF3587F60F463F04EEABE5CBE711FE5612_gshared)(__this, method);
}
// System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt__ctor_m36719FC02F05F402168673BF83E4AB963804981C (AppleInAppPurchaseReceipt_t8495AF48B320D4EA26939FA02F9BA8784CF02F90 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::set_quantity(System.Int32)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_quantity_mD99AD9ADBE95FB0A32B3DAB6AFBA4D3C9CE34193_inline (AppleInAppPurchaseReceipt_t8495AF48B320D4EA26939FA02F9BA8784CF02F90 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::set_productID(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_productID_mD2E88AA98AE32A27EF3245ED271C6492274BA7BB_inline (AppleInAppPurchaseReceipt_t8495AF48B320D4EA26939FA02F9BA8784CF02F90 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::set_transactionID(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_transactionID_m80F1DB67E4887070699C6D72CC25538AD3676820_inline (AppleInAppPurchaseReceipt_t8495AF48B320D4EA26939FA02F9BA8784CF02F90 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::set_originalTransactionIdentifier(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_originalTransactionIdentifier_mD8BA44FD3F7952131AAB1D3023BEEA543F75810E_inline (AppleInAppPurchaseReceipt_t8495AF48B320D4EA26939FA02F9BA8784CF02F90 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.DateTime UnityEngine.Purchasing.Security.AppleReceiptParser::TryParseDateTimeNode(LipingShare.LCLib.Asn1Processor.Asn1Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  AppleReceiptParser_TryParseDateTimeNode_m62DA626A30540CF79C556D30DBB891443EAB802D (Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * ___node0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::set_purchaseDate(System.DateTime)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_purchaseDate_m2DB360E7CC577E809CE405E0DF013C1B243640BA_inline (AppleInAppPurchaseReceipt_t8495AF48B320D4EA26939FA02F9BA8784CF02F90 * __this, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::set_originalPurchaseDate(System.DateTime)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_originalPurchaseDate_m11819E1F354A5352A36FD6EF9CAB4789C0B9BA3A_inline (AppleInAppPurchaseReceipt_t8495AF48B320D4EA26939FA02F9BA8784CF02F90 * __this, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::set_subscriptionExpirationDate(System.DateTime)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_subscriptionExpirationDate_m41872BB77B62E333157EA7A827071C8542ABEA30_inline (AppleInAppPurchaseReceipt_t8495AF48B320D4EA26939FA02F9BA8784CF02F90 * __this, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::set_cancellationDate(System.DateTime)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_cancellationDate_mE7DC7F5CCD7B31266F9B023DDFBED321402CC544_inline (AppleInAppPurchaseReceipt_t8495AF48B320D4EA26939FA02F9BA8784CF02F90 * __this, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::set_productType(System.Int32)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_productType_m582A75CEB8A3689CA224DFABE49C46F1B02528A1_inline (AppleInAppPurchaseReceipt_t8495AF48B320D4EA26939FA02F9BA8784CF02F90 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::set_isFreeTrial(System.Int32)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_isFreeTrial_m6232530EC0949863A8AD14211670A2A99298A72A_inline (AppleInAppPurchaseReceipt_t8495AF48B320D4EA26939FA02F9BA8784CF02F90 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::set_isIntroductoryPricePeriod(System.Int32)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_isIntroductoryPricePeriod_mD5853FF32DB39162C98FAE1587004D73D083BC31_inline (AppleInAppPurchaseReceipt_t8495AF48B320D4EA26939FA02F9BA8784CF02F90 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229 (String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor()
inline void Dictionary_2__ctor_mCA7075EA6548A18B929368520217975094841997 (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// System.Byte LipingShare.LCLib.Asn1Processor.Asn1Node::get_MaskedTag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Asn1Node_get_MaskedTag_m5DC95BB79C052284F601A49BE53CF23EA683734A (Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.InvalidX509Data::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidX509Data__ctor_m9E51EB809C7E99FB7EB674CBEF9B00D74C7822CF (InvalidX509Data_tC7C3A26B4358B509276F77D08FED22DE46D6A666 * __this, const RuntimeMethod* method);
// System.String LipingShare.LCLib.Asn1Processor.Oid::Decode(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Oid_Decode_m1C6BD88CE261E00DF019558DB9AD2E64C65602C9 (Oid_t5B93F085287F1B3F4A9F315146D0C08398544492 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___data0, const RuntimeMethod* method);
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_mBA4BC176CFDBE9594D38D2E5DA0817E057B57C02 (String_t* ___s0, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.DistinguishedName::set_Country(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void DistinguishedName_set_Country_mDBAE492B7842E0CA86D58F87C9AA5D32B6932E36_inline (DistinguishedName_t869CBAB24FEC86C60A469DB0BE479FCAB3FAC521 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.DistinguishedName::set_Organization(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void DistinguishedName_set_Organization_m5D55FB83143BF94F4DA3E4A050C611AE5A590C22_inline (DistinguishedName_t869CBAB24FEC86C60A469DB0BE479FCAB3FAC521 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.DistinguishedName::set_OrganizationalUnit(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void DistinguishedName_set_OrganizationalUnit_mA1C9087D0563C9A168BE2F112886E8B744DA85C2_inline (DistinguishedName_t869CBAB24FEC86C60A469DB0BE479FCAB3FAC521 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.DistinguishedName::set_CommonName(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void DistinguishedName_set_CommonName_mB13A018470CF791D18AD6EADDD574B781F59F8EA_inline (DistinguishedName_t869CBAB24FEC86C60A469DB0BE479FCAB3FAC521 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.DistinguishedName::set_SerialNumber(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void DistinguishedName_set_SerialNumber_m2527B35B15CDC2CC5F04DDEE828B42C28D8B3141_inline (DistinguishedName_t869CBAB24FEC86C60A469DB0BE479FCAB3FAC521 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.DistinguishedName::set_Dnq(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void DistinguishedName_set_Dnq_m57C69B66B9A1FFAA1D5351EF2D6CB31EA6795322_inline (DistinguishedName_t869CBAB24FEC86C60A469DB0BE479FCAB3FAC521 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.DistinguishedName::set_State(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void DistinguishedName_set_State_m84A25E37CB40CCA5159EEE1A556969586D229018_inline (DistinguishedName_t869CBAB24FEC86C60A469DB0BE479FCAB3FAC521 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.String UnityEngine.Purchasing.Security.DistinguishedName::get_Organization()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* DistinguishedName_get_Organization_mEAA136C2E071E424CD0063754080FD222630E49B_inline (DistinguishedName_t869CBAB24FEC86C60A469DB0BE479FCAB3FAC521 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Purchasing.Security.DistinguishedName::get_OrganizationalUnit()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* DistinguishedName_get_OrganizationalUnit_mCF460B6F69D85336CCC09AB3A8FAAED9A573FA68_inline (DistinguishedName_t869CBAB24FEC86C60A469DB0BE479FCAB3FAC521 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Purchasing.Security.DistinguishedName::get_Dnq()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* DistinguishedName_get_Dnq_m389254031B6918CBF46DD97310405747C95337DD_inline (DistinguishedName_t869CBAB24FEC86C60A469DB0BE479FCAB3FAC521 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Purchasing.Security.DistinguishedName::get_Country()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* DistinguishedName_get_Country_mE2E3D1C5B9DE26C4AE134FBCB70D73F2032C2D79_inline (DistinguishedName_t869CBAB24FEC86C60A469DB0BE479FCAB3FAC521 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Purchasing.Security.DistinguishedName::get_State()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* DistinguishedName_get_State_m41B3127001C4FC3981E0A9952C632F55DD93962C_inline (DistinguishedName_t869CBAB24FEC86C60A469DB0BE479FCAB3FAC521 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Purchasing.Security.DistinguishedName::get_CommonName()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* DistinguishedName_get_CommonName_m1E081B22A4EDB3F6A0FA15C4C085AB79229F5F5F_inline (DistinguishedName_t869CBAB24FEC86C60A469DB0BE479FCAB3FAC521 * __this, const RuntimeMethod* method);
// System.Void System.Exception::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m5FEC89FBFACEEDCEE29CCFD44A85D72FC28EB0D1 (Exception_t * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.IAPSecurityException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAPSecurityException__ctor_mEA6EA5CADD09965AA85C53EE97DFDAEAEA6BA478 (IAPSecurityException_t9E59EAFE4B1540C47F60E82B9532F7D910B09D6A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.PKCS7::CheckStructure()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PKCS7_CheckStructure_m1C5B3FA520361A3366E2FF3CCA724FC343DCCB70 (PKCS7_t851499113E52C57B34831AE4D5AB00C973B7D21A * __this, const RuntimeMethod* method);
// System.Byte LipingShare.LCLib.Asn1Processor.Asn1Node::get_Tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Asn1Node_get_Tag_mF8EA3AD46BCFE67532A374299F78BF3CC1A7D078 (Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * __this, const RuntimeMethod* method);
// System.String LipingShare.LCLib.Asn1Processor.Asn1Node::GetDataStr(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Asn1Node_GetDataStr_m98F2E9DC3ACABD540BD1FE3155A5B0DE8E0A89DC (Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * __this, bool ___pureHexMode0, const RuntimeMethod* method);
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m0BD184A74F453A72376E81CC6CAEE2556B80493E (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.PKCS7::set_data(LipingShare.LCLib.Asn1Processor.Asn1Node)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void PKCS7_set_data_m48F719D915F508F876092F3A47F9107FFB7B09AE_inline (PKCS7_t851499113E52C57B34831AE4D5AB00C973B7D21A * __this, Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Purchasing.Security.X509Cert>::.ctor()
inline void List_1__ctor_m68C4F11A222C3F5A3D96653F0AF8E22F53BF9D14 (List_1_t2A256183E185A61A299A823886E7884EFE41A289 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2A256183E185A61A299A823886E7884EFE41A289 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Void UnityEngine.Purchasing.Security.PKCS7::set_certChain(System.Collections.Generic.List`1<UnityEngine.Purchasing.Security.X509Cert>)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void PKCS7_set_certChain_mD4A26485F3931361A18ACECBE07233F2BFCFDCA2_inline (PKCS7_t851499113E52C57B34831AE4D5AB00C973B7D21A * __this, List_1_t2A256183E185A61A299A823886E7884EFE41A289 * ___value0, const RuntimeMethod* method);
// System.Collections.Generic.List`1<UnityEngine.Purchasing.Security.X509Cert> UnityEngine.Purchasing.Security.PKCS7::get_certChain()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR List_1_t2A256183E185A61A299A823886E7884EFE41A289 * PKCS7_get_certChain_m84F5C10E322905626F9B01B437C577B9E1FB2718_inline (PKCS7_t851499113E52C57B34831AE4D5AB00C973B7D21A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.X509Cert::.ctor(LipingShare.LCLib.Asn1Processor.Asn1Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Cert__ctor_m40D5EEA848DBAF3A3F39ED1E91E57A3356E57A52 (X509Cert_tEC5F828EE93872CC82CDA3C2462EE085E4EA6B59 * __this, Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * ___n0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Purchasing.Security.X509Cert>::Add(!0)
inline void List_1_Add_m39838129E809FB6B5DABDAA8F4C3B4D807AC18DF (List_1_t2A256183E185A61A299A823886E7884EFE41A289 * __this, X509Cert_tEC5F828EE93872CC82CDA3C2462EE085E4EA6B59 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2A256183E185A61A299A823886E7884EFE41A289 *, X509Cert_tEC5F828EE93872CC82CDA3C2462EE085E4EA6B59 *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Purchasing.Security.SignerInfo>::.ctor()
inline void List_1__ctor_m1E6991C091762B64C6BBA48A9DE9F0CBF4F5FDAE (List_1_tC8E7792306B075D1A58B9A4E5F2E9FB5A18DCB61 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC8E7792306B075D1A58B9A4E5F2E9FB5A18DCB61 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Void UnityEngine.Purchasing.Security.PKCS7::set_sinfos(System.Collections.Generic.List`1<UnityEngine.Purchasing.Security.SignerInfo>)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void PKCS7_set_sinfos_m0245C0686BDAA4456F190FE981C799FD0B27C397_inline (PKCS7_t851499113E52C57B34831AE4D5AB00C973B7D21A * __this, List_1_tC8E7792306B075D1A58B9A4E5F2E9FB5A18DCB61 * ___value0, const RuntimeMethod* method);
// System.Collections.Generic.List`1<UnityEngine.Purchasing.Security.SignerInfo> UnityEngine.Purchasing.Security.PKCS7::get_sinfos()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR List_1_tC8E7792306B075D1A58B9A4E5F2E9FB5A18DCB61 * PKCS7_get_sinfos_m20454822948ABDC7E7C9802C1A918A3007E58A90_inline (PKCS7_t851499113E52C57B34831AE4D5AB00C973B7D21A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.SignerInfo::.ctor(LipingShare.LCLib.Asn1Processor.Asn1Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignerInfo__ctor_m89D5D8BD1D5E40668D8EBCE0CEBD9BC238BF2264 (SignerInfo_tA6405C48DB7EAE3441CB701FC072A86AD372CAF4 * __this, Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * ___n0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Purchasing.Security.SignerInfo>::Add(!0)
inline void List_1_Add_m694D5361AC43B73506418BC8B8300F9102B58CF6 (List_1_tC8E7792306B075D1A58B9A4E5F2E9FB5A18DCB61 * __this, SignerInfo_tA6405C48DB7EAE3441CB701FC072A86AD372CAF4 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC8E7792306B075D1A58B9A4E5F2E9FB5A18DCB61 *, SignerInfo_tA6405C48DB7EAE3441CB701FC072A86AD372CAF4 *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, ___item0, method);
}
// System.Security.Cryptography.RSACryptoServiceProvider UnityEngine.Purchasing.Security.RSAKey::ParseNode(LipingShare.LCLib.Asn1Processor.Asn1Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RSACryptoServiceProvider_t6DC0FC3205BA6CDCA4FF2AEEF566D8F0CCE26AD4 * RSAKey_ParseNode_m308E6FE460D267F64F6D982B1BDF872D088E8E9B (RSAKey_t821B15EEDED09C7088C34750E22FDA0E30B8220C * __this, Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * ___n0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.RSAKey::set_rsa(System.Security.Cryptography.RSACryptoServiceProvider)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void RSAKey_set_rsa_m8109C5A3D59353ECAED3D8CF87B76A0F565E2EC6_inline (RSAKey_t821B15EEDED09C7088C34750E22FDA0E30B8220C * __this, RSACryptoServiceProvider_t6DC0FC3205BA6CDCA4FF2AEEF566D8F0CCE26AD4 * ___value0, const RuntimeMethod* method);
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mA10D079DD8D9700CA44721A219A934A2397653F6 (RuntimeArray * ___sourceArray0, int32_t ___sourceIndex1, RuntimeArray * ___destinationArray2, int32_t ___destinationIndex3, int32_t ___length4, const RuntimeMethod* method);
// System.String System.Convert::ToBase64String(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToBase64String_mF201749AD724C437524C8A6108519470A0F65B84 (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___inArray0, const RuntimeMethod* method);
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RSACryptoServiceProvider__ctor_m9249D579A83FC34306B6B1A53B677FC0C1DD21E1 (RSACryptoServiceProvider_t6DC0FC3205BA6CDCA4FF2AEEF566D8F0CCE26AD4 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Purchasing.Security.RSAKey::ToXML(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RSAKey_ToXML_m01179A07C26E2704719C39077239C71F7F3CE85D (RSAKey_t821B15EEDED09C7088C34750E22FDA0E30B8220C * __this, String_t* ___modulus0, String_t* ___exponent1, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.InvalidRSAData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidRSAData__ctor_m1D59AC5862577DDC170A9AB4DB731EF4B89D3732 (InvalidRSAData_tCBAC13419C66041C71750F1889052E7E4B77FC0E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.SignerInfo::set_Version(System.Int32)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SignerInfo_set_Version_m7314BCBCDD8C694F18039CD4F85DF786C24B3E9F_inline (SignerInfo_tA6405C48DB7EAE3441CB701FC072A86AD372CAF4 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Purchasing.Security.SignerInfo::get_Version()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t SignerInfo_get_Version_m73B518F42A14804517DB1BC98D59C611E9018484_inline (SignerInfo_tA6405C48DB7EAE3441CB701FC072A86AD372CAF4 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.UnsupportedSignerInfoVersion::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsupportedSignerInfoVersion__ctor_m8EAA304A5BC19B4FCD63ED85DBC49ACD36C79FEC (UnsupportedSignerInfoVersion_t78C3F3CA53D3A5E2EC25278D6D4483ED761E18F4 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.SignerInfo::set_IssuerSerialNumber(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SignerInfo_set_IssuerSerialNumber_m88D3B9081600A9E9D63C128C3AFE09F9F8B7A954_inline (SignerInfo_tA6405C48DB7EAE3441CB701FC072A86AD372CAF4 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.SignerInfo::set_EncryptedDigest(System.Byte[])
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SignerInfo_set_EncryptedDigest_mD5A5AC440976B915E5C2EB3B907FBBCD34153DAB_inline (SignerInfo_tA6405C48DB7EAE3441CB701FC072A86AD372CAF4 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.X509Cert::ParseNode(LipingShare.LCLib.Asn1Processor.Asn1Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Cert_ParseNode_m733170F2285F10F016AFAB3CF10554F71FDD90B8 (X509Cert_tEC5F828EE93872CC82CDA3C2462EE085E4EA6B59 * __this, Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * ___root0, const RuntimeMethod* method);
// System.Int64 LipingShare.LCLib.Asn1Processor.Asn1Node::get_DataLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Asn1Node_get_DataLength_m9C2D8DB475F8B7BD30776161BC0BD88932D75E5D (Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.X509Cert::set_SerialNumber(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void X509Cert_set_SerialNumber_m7BD94183095571AA9B5C4AA7C2969AAE95D28709_inline (X509Cert_tEC5F828EE93872CC82CDA3C2462EE085E4EA6B59 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.DistinguishedName::.ctor(LipingShare.LCLib.Asn1Processor.Asn1Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistinguishedName__ctor_m81915730899DDF606AF0805C8F51E619C0E68D77 (DistinguishedName_t869CBAB24FEC86C60A469DB0BE479FCAB3FAC521 * __this, Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * ___n0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.X509Cert::set_Issuer(UnityEngine.Purchasing.Security.DistinguishedName)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void X509Cert_set_Issuer_mB0C5B91679B498795178802E7E0F7A3DB4164C44_inline (X509Cert_tEC5F828EE93872CC82CDA3C2462EE085E4EA6B59 * __this, DistinguishedName_t869CBAB24FEC86C60A469DB0BE479FCAB3FAC521 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.X509Cert::set_Subject(UnityEngine.Purchasing.Security.DistinguishedName)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void X509Cert_set_Subject_m582742D431E7CFB8CD9C0D85724AADA9868401BA_inline (X509Cert_tEC5F828EE93872CC82CDA3C2462EE085E4EA6B59 * __this, DistinguishedName_t869CBAB24FEC86C60A469DB0BE479FCAB3FAC521 * ___value0, const RuntimeMethod* method);
// System.DateTime UnityEngine.Purchasing.Security.X509Cert::ParseTime(LipingShare.LCLib.Asn1Processor.Asn1Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  X509Cert_ParseTime_m1C2E48C535DECE21B6A920D1C8724758EAED027C (X509Cert_tEC5F828EE93872CC82CDA3C2462EE085E4EA6B59 * __this, Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * ___n0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.X509Cert::set_ValidAfter(System.DateTime)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void X509Cert_set_ValidAfter_mF7415B6796572241A52B95528164AB74C03999EC_inline (X509Cert_tEC5F828EE93872CC82CDA3C2462EE085E4EA6B59 * __this, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.X509Cert::set_ValidBefore(System.DateTime)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void X509Cert_set_ValidBefore_mD26CC2275C16B8C7B5994A51796E5A369CBC1E0A_inline (X509Cert_tEC5F828EE93872CC82CDA3C2462EE085E4EA6B59 * __this, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___value0, const RuntimeMethod* method);
// UnityEngine.Purchasing.Security.DistinguishedName UnityEngine.Purchasing.Security.X509Cert::get_Subject()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR DistinguishedName_t869CBAB24FEC86C60A469DB0BE479FCAB3FAC521 * X509Cert_get_Subject_mDF8002D759C72F50F49A6100491A100D1339B570_inline (X509Cert_tEC5F828EE93872CC82CDA3C2462EE085E4EA6B59 * __this, const RuntimeMethod* method);
// UnityEngine.Purchasing.Security.DistinguishedName UnityEngine.Purchasing.Security.X509Cert::get_Issuer()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR DistinguishedName_t869CBAB24FEC86C60A469DB0BE479FCAB3FAC521 * X509Cert_get_Issuer_m0BF83395F86C02534A289F7D0FD997999DE711FB_inline (X509Cert_tEC5F828EE93872CC82CDA3C2462EE085E4EA6B59 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Purchasing.Security.DistinguishedName::Equals(UnityEngine.Purchasing.Security.DistinguishedName)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DistinguishedName_Equals_m83D4F336A47239552A3AD2BC0960728E2A7DD110 (DistinguishedName_t869CBAB24FEC86C60A469DB0BE479FCAB3FAC521 * __this, DistinguishedName_t869CBAB24FEC86C60A469DB0BE479FCAB3FAC521 * ___n20, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.X509Cert::set_SelfSigned(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void X509Cert_set_SelfSigned_mA0E4FFC98305EA98D4AB4C82747AC61059AA9124_inline (X509Cert_tEC5F828EE93872CC82CDA3C2462EE085E4EA6B59 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.RSAKey::.ctor(LipingShare.LCLib.Asn1Processor.Asn1Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RSAKey__ctor_m9F0C709FAD7678CD677CF43970071EE0390A5C83 (RSAKey_t821B15EEDED09C7088C34750E22FDA0E30B8220C * __this, Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * ___n0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.X509Cert::set_PubKey(UnityEngine.Purchasing.Security.RSAKey)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void X509Cert_set_PubKey_mC77494B58C272D77E1A269806FAED2D3EB014678_inline (X509Cert_tEC5F828EE93872CC82CDA3C2462EE085E4EA6B59 * __this, RSAKey_t821B15EEDED09C7088C34750E22FDA0E30B8220C * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.X509Cert::set_Signature(LipingShare.LCLib.Asn1Processor.Asn1Node)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void X509Cert_set_Signature_mC0FCC2E44260B3149CA24D486141AA91C67EE409_inline (X509Cert_tEC5F828EE93872CC82CDA3C2462EE085E4EA6B59 * __this, Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.InvalidTimeFormat::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidTimeFormat__ctor_m5C914A0EC6CA59D8504971BDAA512774573B493D (InvalidTimeFormat_t803BE227F2D3A4A788D5992EAA0B479232FA2661 * __this, const RuntimeMethod* method);
// System.Int32 System.Int32::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_m5807B6243415790250FC25168F767C08FC16FDEA (String_t* ___s0, const RuntimeMethod* method);
// System.Void System.DateTime::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.DateTimeKind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTime__ctor_mC9FEFEECD786FDE2648567E114C71A4A468A65FE (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * __this, int32_t ___year0, int32_t ___month1, int32_t ___day2, int32_t ___hour3, int32_t ___minute4, int32_t ___second5, int32_t ___kind6, const RuntimeMethod* method);
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
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_mBA4BC176CFDBE9594D38D2E5DA0817E057B57C02 (String_t* ___s0, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___s0;
		if (!L_0)
		{
			goto IL_002c;
		}
	}
	{
		V_0 = ((int32_t)-2128831035);
		V_1 = 0;
		goto IL_0021;
	}

IL_000d:
	{
		String_t* L_1 = ___s0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		Il2CppChar L_3 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_1, L_2, /*hidden argument*/NULL);
		uint32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)L_3^(int32_t)L_4)), (int32_t)((int32_t)16777619)));
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_0021:
	{
		int32_t L_6 = V_1;
		String_t* L_7 = ___s0;
		NullCheck(L_7);
		int32_t L_8 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_7, /*hidden argument*/NULL);
		if ((((int32_t)L_6) >= ((int32_t)L_8)))
		{
			goto IL_002c;
		}
	}
	{
		goto IL_000d;
	}

IL_002c:
	{
		uint32_t L_9 = V_0;
		return L_9;
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
// System.Void LipingShare.LCLib.Asn1Processor.Asn1Node::.ctor(LipingShare.LCLib.Asn1Processor.Asn1Node,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Asn1Node__ctor_m3F16F03AE395841D39A0A284561028C2229BF86F (Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * __this, Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * ___parentNode0, int64_t ___dataOffset1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Asn1Node__ctor_m3F16F03AE395841D39A0A284561028C2229BF86F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_path_8(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		__this->set_requireRecalculatePar_10((bool)1);
		__this->set_isIndefiniteLength_11((bool)0);
		__this->set_parseEncapsulatedData_12((bool)1);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		Asn1Node_Init_mE60C4D88B0D1A2957CA9B271402302545585E4FB(__this, /*hidden argument*/NULL);
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_0 = ___parentNode0;
		NullCheck(L_0);
		int64_t L_1 = Asn1Node_get_Deepness_m1525EDB697AA17BA32A10F145DFD9C8246239D6C(L_0, /*hidden argument*/NULL);
		__this->set_deepness_7(((int64_t)il2cpp_codegen_add((int64_t)L_1, (int64_t)(((int64_t)((int64_t)1))))));
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_2 = ___parentNode0;
		__this->set_parentNode_9(L_2);
		int64_t L_3 = ___dataOffset1;
		__this->set_dataOffset_1(L_3);
		return;
	}
}
// System.Void LipingShare.LCLib.Asn1Processor.Asn1Node::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Asn1Node_Init_mE60C4D88B0D1A2957CA9B271402302545585E4FB (Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Asn1Node_Init_mE60C4D88B0D1A2957CA9B271402302545585E4FB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_0 = (ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 *)il2cpp_codegen_object_new(ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4_il2cpp_TypeInfo_var);
		ArrayList__ctor_m481FA7B37620B59B8C0434A764F5705A6ABDEAE6(L_0, /*hidden argument*/NULL);
		__this->set_childNodeList_5(L_0);
		__this->set_data_4((ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)NULL);
		__this->set_dataLength_2((((int64_t)((int64_t)0))));
		__this->set_lengthFieldBytes_3((((int64_t)((int64_t)0))));
		__this->set_unusedBits_6((uint8_t)0);
		__this->set_tag_0((uint8_t)((int32_t)48));
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_1 = __this->get_childNodeList_5();
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(26 /* System.Void System.Collections.ArrayList::Clear() */, L_1);
		__this->set_deepness_7((((int64_t)((int64_t)0))));
		__this->set_parentNode_9((Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 *)NULL);
		return;
	}
}
// System.String LipingShare.LCLib.Asn1Processor.Asn1Node::GetHexPrintingStr(LipingShare.LCLib.Asn1Processor.Asn1Node,System.String,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Asn1Node_GetHexPrintingStr_m2C5C36DE9808831F7395AFF0E0DB999FB4DD5441 (Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * __this, Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * ___startNode0, String_t* ___baseLine1, String_t* ___lStr2, int32_t ___lineLen3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Asn1Node_GetHexPrintingStr_m2C5C36DE9808831F7395AFF0E0DB999FB4DD5441_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	String_t* V_5 = NULL;
	{
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_0 = ___startNode0;
		String_t* L_1 = Asn1Node_GetIndentStr_m7ED765F57686361EF3E9F1C9A48CA6A155B3DCCF(__this, L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = __this->get_data_4();
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_tBFEA56D2C3543BF68547786BAE0EC50B2DEE0886_il2cpp_TypeInfo_var);
		String_t* L_3 = Asn1Util_ToHexString_mD35BF6D2E0CD4D8CC7FFA9829350CC522A75B8DF(L_2, /*hidden argument*/NULL);
		V_2 = L_3;
		String_t* L_4 = V_2;
		NullCheck(L_4);
		int32_t L_5 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_4, /*hidden argument*/NULL);
		V_3 = (bool)((((int32_t)L_5) > ((int32_t)0))? 1 : 0);
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_0089;
		}
	}
	{
		String_t* L_7 = ___baseLine1;
		NullCheck(L_7);
		int32_t L_8 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_7, /*hidden argument*/NULL);
		String_t* L_9 = V_2;
		NullCheck(L_9);
		int32_t L_10 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_9, /*hidden argument*/NULL);
		int32_t L_11 = ___lineLen3;
		V_4 = (bool)((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)L_10))) < ((int32_t)L_11))? 1 : 0);
		bool L_12 = V_4;
		if (!L_12)
		{
			goto IL_006c;
		}
	}
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_13 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_14 = L_13;
		String_t* L_15 = V_0;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_15);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_15);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_16 = L_14;
		String_t* L_17 = ___baseLine1;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_17);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_17);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_18 = L_16;
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, _stringLiteralBB589D0621E5472F470FA3425A234C74B1E202E8);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralBB589D0621E5472F470FA3425A234C74B1E202E8);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_19 = L_18;
		String_t* L_20 = V_2;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_20);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_20);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_21 = L_19;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, _stringLiteralBB589D0621E5472F470FA3425A234C74B1E202E8);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralBB589D0621E5472F470FA3425A234C74B1E202E8);
		String_t* L_22 = String_Concat_m232E857CA5107EA6AC52E7DD7018716C021F237B(L_21, /*hidden argument*/NULL);
		V_0 = L_22;
		goto IL_0086;
	}

IL_006c:
	{
		String_t* L_23 = V_0;
		String_t* L_24 = ___baseLine1;
		String_t* L_25 = ___lStr2;
		String_t* L_26 = V_1;
		NullCheck(L_26);
		int32_t L_27 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_26, /*hidden argument*/NULL);
		int32_t L_28 = ___lineLen3;
		String_t* L_29 = V_2;
		String_t* L_30 = Asn1Node_FormatLineHexString_m84B989C7EFD166698EA3E62FD100F8D7F60931E7(__this, L_25, L_27, L_28, L_29, /*hidden argument*/NULL);
		String_t* L_31 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(L_23, L_24, L_30, /*hidden argument*/NULL);
		V_0 = L_31;
	}

IL_0086:
	{
		goto IL_0093;
	}

IL_0089:
	{
		String_t* L_32 = V_0;
		String_t* L_33 = ___baseLine1;
		String_t* L_34 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_32, L_33, /*hidden argument*/NULL);
		V_0 = L_34;
	}

IL_0093:
	{
		String_t* L_35 = V_0;
		String_t* L_36 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_35, _stringLiteralBA8AB5A0280B953AA97435FF8946CBCBB2755A27, /*hidden argument*/NULL);
		V_5 = L_36;
		goto IL_00a2;
	}

IL_00a2:
	{
		String_t* L_37 = V_5;
		return L_37;
	}
}
// System.String LipingShare.LCLib.Asn1Processor.Asn1Node::FormatLineString(System.String,System.Int32,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Asn1Node_FormatLineString_m22757245208B64E6BC87B209BB1191B33B2DEB89 (Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * __this, String_t* ___lStr0, int32_t ___indent1, int32_t ___lineLen2, String_t* ___msg3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Asn1Node_FormatLineString_m22757245208B64E6BC87B209BB1191B33B2DEB89_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	String_t* V_6 = NULL;
	{
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		int32_t L_0 = ___indent1;
		___indent1 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)3));
		int32_t L_1 = ___lineLen2;
		int32_t L_2 = ___indent1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)L_2));
		int32_t L_3 = ___indent1;
		V_2 = L_3;
		V_3 = 0;
		goto IL_00c5;
	}

IL_0019:
	{
		int32_t L_4 = V_3;
		int32_t L_5 = V_1;
		String_t* L_6 = ___msg3;
		NullCheck(L_6);
		int32_t L_7 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_6, /*hidden argument*/NULL);
		V_4 = (bool)((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)L_5))) > ((int32_t)L_7))? 1 : 0);
		bool L_8 = V_4;
		if (!L_8)
		{
			goto IL_007b;
		}
	}
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_9 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)7);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_10 = L_9;
		String_t* L_11 = V_0;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_11);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_12 = L_10;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteralBA8AB5A0280B953AA97435FF8946CBCBB2755A27);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralBA8AB5A0280B953AA97435FF8946CBCBB2755A27);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_13 = L_12;
		String_t* L_14 = ___lStr0;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_14);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_15 = L_13;
		int32_t L_16 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_tBFEA56D2C3543BF68547786BAE0EC50B2DEE0886_il2cpp_TypeInfo_var);
		String_t* L_17 = Asn1Util_GenStr_m03ED7C1092BBF4EF64FEB70FAE9C49868CCBE7E6(L_16, ((int32_t)32), /*hidden argument*/NULL);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_17);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_17);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_18 = L_15;
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, _stringLiteralBB589D0621E5472F470FA3425A234C74B1E202E8);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralBB589D0621E5472F470FA3425A234C74B1E202E8);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_19 = L_18;
		String_t* L_20 = ___msg3;
		int32_t L_21 = V_3;
		String_t* L_22 = ___msg3;
		NullCheck(L_22);
		int32_t L_23 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_22, /*hidden argument*/NULL);
		int32_t L_24 = V_3;
		NullCheck(L_20);
		String_t* L_25 = String_Substring_mB593C0A320C683E6E47EFFC0A12B7A465E5E43BB(L_20, L_21, ((int32_t)il2cpp_codegen_subtract((int32_t)L_23, (int32_t)L_24)), /*hidden argument*/NULL);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_25);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_25);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_26 = L_19;
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, _stringLiteralBB589D0621E5472F470FA3425A234C74B1E202E8);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteralBB589D0621E5472F470FA3425A234C74B1E202E8);
		String_t* L_27 = String_Concat_m232E857CA5107EA6AC52E7DD7018716C021F237B(L_26, /*hidden argument*/NULL);
		V_0 = L_27;
		goto IL_00c0;
	}

IL_007b:
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_28 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)7);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_29 = L_28;
		String_t* L_30 = V_0;
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_30);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_30);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_31 = L_29;
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, _stringLiteralBA8AB5A0280B953AA97435FF8946CBCBB2755A27);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralBA8AB5A0280B953AA97435FF8946CBCBB2755A27);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_32 = L_31;
		String_t* L_33 = ___lStr0;
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, L_33);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_33);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_34 = L_32;
		int32_t L_35 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_tBFEA56D2C3543BF68547786BAE0EC50B2DEE0886_il2cpp_TypeInfo_var);
		String_t* L_36 = Asn1Util_GenStr_m03ED7C1092BBF4EF64FEB70FAE9C49868CCBE7E6(L_35, ((int32_t)32), /*hidden argument*/NULL);
		NullCheck(L_34);
		ArrayElementTypeCheck (L_34, L_36);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_36);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_37 = L_34;
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, _stringLiteralBB589D0621E5472F470FA3425A234C74B1E202E8);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralBB589D0621E5472F470FA3425A234C74B1E202E8);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_38 = L_37;
		String_t* L_39 = ___msg3;
		int32_t L_40 = V_3;
		int32_t L_41 = V_1;
		NullCheck(L_39);
		String_t* L_42 = String_Substring_mB593C0A320C683E6E47EFFC0A12B7A465E5E43BB(L_39, L_40, L_41, /*hidden argument*/NULL);
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, L_42);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_42);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_43 = L_38;
		NullCheck(L_43);
		ArrayElementTypeCheck (L_43, _stringLiteralBB589D0621E5472F470FA3425A234C74B1E202E8);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteralBB589D0621E5472F470FA3425A234C74B1E202E8);
		String_t* L_44 = String_Concat_m232E857CA5107EA6AC52E7DD7018716C021F237B(L_43, /*hidden argument*/NULL);
		V_0 = L_44;
	}

IL_00c0:
	{
		int32_t L_45 = V_3;
		int32_t L_46 = V_1;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_45, (int32_t)L_46));
	}

IL_00c5:
	{
		int32_t L_47 = V_3;
		String_t* L_48 = ___msg3;
		NullCheck(L_48);
		int32_t L_49 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_48, /*hidden argument*/NULL);
		V_5 = (bool)((((int32_t)L_47) < ((int32_t)L_49))? 1 : 0);
		bool L_50 = V_5;
		if (L_50)
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_51 = V_0;
		V_6 = L_51;
		goto IL_00dd;
	}

IL_00dd:
	{
		String_t* L_52 = V_6;
		return L_52;
	}
}
// System.String LipingShare.LCLib.Asn1Processor.Asn1Node::FormatLineHexString(System.String,System.Int32,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Asn1Node_FormatLineHexString_m84B989C7EFD166698EA3E62FD100F8D7F60931E7 (Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * __this, String_t* ___lStr0, int32_t ___indent1, int32_t ___lineLen2, String_t* ___msg3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Asn1Node_FormatLineHexString_m84B989C7EFD166698EA3E62FD100F8D7F60931E7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	String_t* V_6 = NULL;
	{
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		int32_t L_0 = ___indent1;
		___indent1 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)3));
		int32_t L_1 = ___lineLen2;
		int32_t L_2 = ___indent1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)L_2));
		int32_t L_3 = ___indent1;
		V_2 = L_3;
		V_3 = 0;
		goto IL_00a5;
	}

IL_0019:
	{
		int32_t L_4 = V_3;
		int32_t L_5 = V_1;
		String_t* L_6 = ___msg3;
		NullCheck(L_6);
		int32_t L_7 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_6, /*hidden argument*/NULL);
		V_4 = (bool)((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)L_5))) > ((int32_t)L_7))? 1 : 0);
		bool L_8 = V_4;
		if (!L_8)
		{
			goto IL_006b;
		}
	}
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_9 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_10 = L_9;
		String_t* L_11 = V_0;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_11);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_12 = L_10;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteralBA8AB5A0280B953AA97435FF8946CBCBB2755A27);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralBA8AB5A0280B953AA97435FF8946CBCBB2755A27);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_13 = L_12;
		String_t* L_14 = ___lStr0;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_14);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_15 = L_13;
		int32_t L_16 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_tBFEA56D2C3543BF68547786BAE0EC50B2DEE0886_il2cpp_TypeInfo_var);
		String_t* L_17 = Asn1Util_GenStr_m03ED7C1092BBF4EF64FEB70FAE9C49868CCBE7E6(L_16, ((int32_t)32), /*hidden argument*/NULL);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_17);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_17);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_18 = L_15;
		String_t* L_19 = ___msg3;
		int32_t L_20 = V_3;
		String_t* L_21 = ___msg3;
		NullCheck(L_21);
		int32_t L_22 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_21, /*hidden argument*/NULL);
		int32_t L_23 = V_3;
		NullCheck(L_19);
		String_t* L_24 = String_Substring_mB593C0A320C683E6E47EFFC0A12B7A465E5E43BB(L_19, L_20, ((int32_t)il2cpp_codegen_subtract((int32_t)L_22, (int32_t)L_23)), /*hidden argument*/NULL);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_24);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_24);
		String_t* L_25 = String_Concat_m232E857CA5107EA6AC52E7DD7018716C021F237B(L_18, /*hidden argument*/NULL);
		V_0 = L_25;
		goto IL_00a0;
	}

IL_006b:
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_26 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_27 = L_26;
		String_t* L_28 = V_0;
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_28);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_28);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_29 = L_27;
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, _stringLiteralBA8AB5A0280B953AA97435FF8946CBCBB2755A27);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralBA8AB5A0280B953AA97435FF8946CBCBB2755A27);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_30 = L_29;
		String_t* L_31 = ___lStr0;
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, L_31);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_31);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_32 = L_30;
		int32_t L_33 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_tBFEA56D2C3543BF68547786BAE0EC50B2DEE0886_il2cpp_TypeInfo_var);
		String_t* L_34 = Asn1Util_GenStr_m03ED7C1092BBF4EF64FEB70FAE9C49868CCBE7E6(L_33, ((int32_t)32), /*hidden argument*/NULL);
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, L_34);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_34);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_35 = L_32;
		String_t* L_36 = ___msg3;
		int32_t L_37 = V_3;
		int32_t L_38 = V_1;
		NullCheck(L_36);
		String_t* L_39 = String_Substring_mB593C0A320C683E6E47EFFC0A12B7A465E5E43BB(L_36, L_37, L_38, /*hidden argument*/NULL);
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, L_39);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_39);
		String_t* L_40 = String_Concat_m232E857CA5107EA6AC52E7DD7018716C021F237B(L_35, /*hidden argument*/NULL);
		V_0 = L_40;
	}

IL_00a0:
	{
		int32_t L_41 = V_3;
		int32_t L_42 = V_1;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_41, (int32_t)L_42));
	}

IL_00a5:
	{
		int32_t L_43 = V_3;
		String_t* L_44 = ___msg3;
		NullCheck(L_44);
		int32_t L_45 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_44, /*hidden argument*/NULL);
		V_5 = (bool)((((int32_t)L_43) < ((int32_t)L_45))? 1 : 0);
		bool L_46 = V_5;
		if (L_46)
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_47 = V_0;
		V_6 = L_47;
		goto IL_00bd;
	}

IL_00bd:
	{
		String_t* L_48 = V_6;
		return L_48;
	}
}
// System.Void LipingShare.LCLib.Asn1Processor.Asn1Node::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Asn1Node__ctor_mDF96FC0D52B88A7A44E6243ECA069B59C75035FC (Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Asn1Node__ctor_mDF96FC0D52B88A7A44E6243ECA069B59C75035FC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_path_8(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		__this->set_requireRecalculatePar_10((bool)1);
		__this->set_isIndefiniteLength_11((bool)0);
		__this->set_parseEncapsulatedData_12((bool)1);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		Asn1Node_Init_mE60C4D88B0D1A2957CA9B271402302545585E4FB(__this, /*hidden argument*/NULL);
		__this->set_dataOffset_1((((int64_t)((int64_t)0))));
		return;
	}
}
// System.Byte LipingShare.LCLib.Asn1Processor.Asn1Node::get_Tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Asn1Node_get_Tag_mF8EA3AD46BCFE67532A374299F78BF3CC1A7D078 (Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * __this, const RuntimeMethod* method)
{
	uint8_t V_0 = 0x0;
	{
		uint8_t L_0 = __this->get_tag_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint8_t L_1 = V_0;
		return L_1;
	}
}
// System.Byte LipingShare.LCLib.Asn1Processor.Asn1Node::get_MaskedTag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Asn1Node_get_MaskedTag_m5DC95BB79C052284F601A49BE53CF23EA683734A (Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * __this, const RuntimeMethod* method)
{
	uint8_t V_0 = 0x0;
	{
		uint8_t L_0 = __this->get_tag_0();
		V_0 = (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)31))))));
		goto IL_000e;
	}

IL_000e:
	{
		uint8_t L_1 = V_0;
		return L_1;
	}
}
// System.Boolean LipingShare.LCLib.Asn1Processor.Asn1Node::LoadData(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Asn1Node_LoadData_m8DF7BDE6D2C3D949E5240B6095C0448896A27703 (Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * __this, Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___xdata0, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		V_0 = (bool)0;
	}

IL_0003:
	try
	{ // begin try (depth: 1)
		Asn1Node_set_RequireRecalculatePar_m9D2B76F8DE8B816D4BF62A67AFA921A4C247CF31(__this, (bool)0, /*hidden argument*/NULL);
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_0 = ___xdata0;
		bool L_1 = Asn1Node_InternalLoadData_m67F1F97CBB617A2FB5BB3D00089E0BCFBD716677(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		V_1 = L_2;
		IL2CPP_LEAVE(0x2A, FINALLY_0018);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0018;
	}

FINALLY_0018:
	{ // begin finally (depth: 1)
		Asn1Node_set_RequireRecalculatePar_m9D2B76F8DE8B816D4BF62A67AFA921A4C247CF31(__this, (bool)1, /*hidden argument*/NULL);
		Asn1Node_RecalculateTreePar_mD0FD98AB1C08B1A3413F0E52D2EB4B688B957C51(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(24)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(24)
	{
		IL2CPP_JUMP_TBL(0x2A, IL_002a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_002a:
	{
		bool L_3 = V_1;
		return L_3;
	}
}
// System.Boolean LipingShare.LCLib.Asn1Processor.Asn1Node::SaveData(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Asn1Node_SaveData_mE256A287688AF4E0A3492CD79E1E0104F2CF5BA0 (Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * __this, Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___xdata0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Asn1Node_SaveData_mE256A287688AF4E0A3492CD79E1E0104F2CF5BA0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int64_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * V_5 = NULL;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	{
		V_0 = (bool)1;
		int64_t L_0 = Asn1Node_get_ChildNodeCount_mF517D478344A4AF6843BE4319A05D248B6B25FAC(__this, /*hidden argument*/NULL);
		V_1 = L_0;
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_1 = ___xdata0;
		uint8_t L_2 = __this->get_tag_0();
		NullCheck(L_1);
		VirtActionInvoker1< uint8_t >::Invoke(28 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, L_1, L_2);
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_3 = ___xdata0;
		int64_t L_4 = __this->get_dataLength_2();
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_tBFEA56D2C3543BF68547786BAE0EC50B2DEE0886_il2cpp_TypeInfo_var);
		Asn1Util_DERLengthEncode_mA9F7B1782C76D6877D706D78E99DA95002C2DDC3(L_3, L_4, /*hidden argument*/NULL);
		uint8_t L_5 = __this->get_tag_0();
		V_2 = (bool)((((int32_t)L_5) == ((int32_t)3))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_7 = ___xdata0;
		uint8_t L_8 = __this->get_unusedBits_6();
		NullCheck(L_7);
		VirtActionInvoker1< uint8_t >::Invoke(28 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, L_7, L_8);
	}

IL_0040:
	{
		int64_t L_9 = V_1;
		V_3 = (bool)((((int64_t)L_9) == ((int64_t)(((int64_t)((int64_t)0)))))? 1 : 0);
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_0074;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_11 = __this->get_data_4();
		V_4 = (bool)((!(((RuntimeObject*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)L_11) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_12 = V_4;
		if (!L_12)
		{
			goto IL_0071;
		}
	}
	{
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_13 = ___xdata0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_14 = __this->get_data_4();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_15 = __this->get_data_4();
		NullCheck(L_15);
		NullCheck(L_13);
		VirtActionInvoker3< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(27 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_13, L_14, 0, (((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length)))));
	}

IL_0071:
	{
		goto IL_00a2;
	}

IL_0074:
	{
		V_6 = 0;
		goto IL_0095;
	}

IL_007a:
	{
		int32_t L_16 = V_6;
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_17 = Asn1Node_GetChildNode_m9D9513B22B565B7739D03F39C6B8F7D5AFE85010(__this, L_16, /*hidden argument*/NULL);
		V_5 = L_17;
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_18 = V_5;
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_19 = ___xdata0;
		NullCheck(L_18);
		bool L_20 = Asn1Node_SaveData_mE256A287688AF4E0A3492CD79E1E0104F2CF5BA0(L_18, L_19, /*hidden argument*/NULL);
		V_0 = L_20;
		int32_t L_21 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
	}

IL_0095:
	{
		int32_t L_22 = V_6;
		int64_t L_23 = V_1;
		V_7 = (bool)((((int64_t)(((int64_t)((int64_t)L_22)))) < ((int64_t)L_23))? 1 : 0);
		bool L_24 = V_7;
		if (L_24)
		{
			goto IL_007a;
		}
	}
	{
	}

IL_00a2:
	{
		bool L_25 = V_0;
		V_8 = L_25;
		goto IL_00a7;
	}

IL_00a7:
	{
		bool L_26 = V_8;
		return L_26;
	}
}
// System.Void LipingShare.LCLib.Asn1Processor.Asn1Node::ClearAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Asn1Node_ClearAll_mB85307804DCBFDC3A9ADD9F3DB631D54A41A68A1 (Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Asn1Node_ClearAll_mB85307804DCBFDC3A9ADD9F3DB631D54A41A68A1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		__this->set_data_4((ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)NULL);
		V_1 = 0;
		goto IL_002b;
	}

IL_000c:
	{
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_0 = __this->get_childNodeList_5();
		int32_t L_1 = V_1;
		NullCheck(L_0);
		RuntimeObject * L_2 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(22 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_0, L_1);
		V_0 = ((Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 *)CastclassClass((RuntimeObject*)L_2, Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16_il2cpp_TypeInfo_var));
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_3 = V_0;
		NullCheck(L_3);
		Asn1Node_ClearAll_mB85307804DCBFDC3A9ADD9F3DB631D54A41A68A1(L_3, /*hidden argument*/NULL);
		int32_t L_4 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
	}

IL_002b:
	{
		int32_t L_5 = V_1;
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_6 = __this->get_childNodeList_5();
		NullCheck(L_6);
		int32_t L_7 = VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_6);
		V_2 = (bool)((((int32_t)L_5) < ((int32_t)L_7))? 1 : 0);
		bool L_8 = V_2;
		if (L_8)
		{
			goto IL_000c;
		}
	}
	{
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_9 = __this->get_childNodeList_5();
		NullCheck(L_9);
		VirtActionInvoker0::Invoke(26 /* System.Void System.Collections.ArrayList::Clear() */, L_9);
		Asn1Node_RecalculateTreePar_mD0FD98AB1C08B1A3413F0E52D2EB4B688B957C51(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LipingShare.LCLib.Asn1Processor.Asn1Node::AddChild(LipingShare.LCLib.Asn1Processor.Asn1Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Asn1Node_AddChild_m5F099C6C83A61B22B380F0F99A4E743B3FBB00AC (Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * __this, Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * ___xdata0, const RuntimeMethod* method)
{
	{
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_0 = __this->get_childNodeList_5();
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_1 = ___xdata0;
		NullCheck(L_0);
		VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(24 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_0, L_1);
		Asn1Node_RecalculateTreePar_mD0FD98AB1C08B1A3413F0E52D2EB4B688B957C51(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int64 LipingShare.LCLib.Asn1Processor.Asn1Node::get_ChildNodeCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Asn1Node_get_ChildNodeCount_mF517D478344A4AF6843BE4319A05D248B6B25FAC (Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * __this, const RuntimeMethod* method)
{
	int64_t V_0 = 0;
	{
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_0 = __this->get_childNodeList_5();
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_0);
		V_0 = (((int64_t)((int64_t)L_1)));
		goto IL_0010;
	}

IL_0010:
	{
		int64_t L_2 = V_0;
		return L_2;
	}
}
// LipingShare.LCLib.Asn1Processor.Asn1Node LipingShare.LCLib.Asn1Processor.Asn1Node::GetChildNode(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * Asn1Node_GetChildNode_m9D9513B22B565B7739D03F39C6B8F7D5AFE85010 (Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Asn1Node_GetChildNode_m9D9513B22B565B7739D03F39C6B8F7D5AFE85010_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * V_0 = NULL;
	bool V_1 = false;
	Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * V_2 = NULL;
	{
		V_0 = (Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 *)NULL;
		int32_t L_0 = ___index0;
		int64_t L_1 = Asn1Node_get_ChildNodeCount_mF517D478344A4AF6843BE4319A05D248B6B25FAC(__this, /*hidden argument*/NULL);
		V_1 = (bool)((((int64_t)(((int64_t)((int64_t)L_0)))) < ((int64_t)L_1))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_3 = __this->get_childNodeList_5();
		int32_t L_4 = ___index0;
		NullCheck(L_3);
		RuntimeObject * L_5 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(22 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_3, L_4);
		V_0 = ((Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 *)CastclassClass((RuntimeObject*)L_5, Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16_il2cpp_TypeInfo_var));
	}

IL_0025:
	{
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_6 = V_0;
		V_2 = L_6;
		goto IL_0029;
	}

IL_0029:
	{
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_7 = V_2;
		return L_7;
	}
}
// System.String LipingShare.LCLib.Asn1Processor.Asn1Node::get_TagName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Asn1Node_get_TagName_m5D6B8061E8F709B755D2A677292DFF9BE7E18844 (Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Asn1Node_get_TagName_m5D6B8061E8F709B755D2A677292DFF9BE7E18844_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		uint8_t L_0 = __this->get_tag_0();
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_tBFEA56D2C3543BF68547786BAE0EC50B2DEE0886_il2cpp_TypeInfo_var);
		String_t* L_1 = Asn1Util_GetTagName_m632B4809ADA197245B177C5D5CA7DCCF072B978B(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		String_t* L_2 = V_0;
		return L_2;
	}
}
// LipingShare.LCLib.Asn1Processor.Asn1Node LipingShare.LCLib.Asn1Processor.Asn1Node::get_ParentNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * Asn1Node_get_ParentNode_mAD267B17EFB0D01BAAD1120937305342C2412F1A (Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * __this, const RuntimeMethod* method)
{
	Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * V_0 = NULL;
	{
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_0 = __this->get_parentNode_9();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_1 = V_0;
		return L_1;
	}
}
// System.String LipingShare.LCLib.Asn1Processor.Asn1Node::GetText(LipingShare.LCLib.Asn1Processor.Asn1Node,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Asn1Node_GetText_mF77FD071F26B7F6A3A879DBCBE6AF5FE2403C204 (Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * __this, Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * ___startNode0, int32_t ___lineLen1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Asn1Node_GetText_mF77FD071F26B7F6A3A879DBCBE6AF5FE2403C204_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	Oid_t5B93F085287F1B3F4A9F315146D0C08398544492 * V_5 = NULL;
	RelativeOid_tA04AF790321D95FE09233E82417A118B0B1BBBBB * V_6 = NULL;
	uint8_t V_7 = 0x0;
	uint8_t V_8 = 0x0;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	UTF8Encoding_t77ED103B749A387EF072C3429F48C91D12CA08DE * V_12 = NULL;
	bool V_13 = false;
	bool V_14 = false;
	int64_t V_15 = 0;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	String_t* V_19 = NULL;
	int32_t G_B23_0 = 0;
	{
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		V_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		V_2 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		uint8_t L_0 = __this->get_tag_0();
		V_8 = L_0;
		uint8_t L_1 = V_8;
		V_7 = L_1;
		uint8_t L_2 = V_7;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)2)))
		{
			case 0:
			{
				goto IL_0394;
			}
			case 1:
			{
				goto IL_0099;
			}
			case 2:
			{
				goto IL_0488;
			}
			case 3:
			{
				goto IL_0488;
			}
			case 4:
			{
				goto IL_0197;
			}
		}
	}
	{
		goto IL_003e;
	}

IL_003e:
	{
		uint8_t L_3 = V_7;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)((int32_t)12))))
		{
			case 0:
			{
				goto IL_02a0;
			}
			case 1:
			{
				goto IL_021d;
			}
			case 2:
			{
				goto IL_0488;
			}
			case 3:
			{
				goto IL_0488;
			}
			case 4:
			{
				goto IL_0488;
			}
			case 5:
			{
				goto IL_0488;
			}
			case 6:
			{
				goto IL_02a0;
			}
			case 7:
			{
				goto IL_02a0;
			}
			case 8:
			{
				goto IL_0488;
			}
			case 9:
			{
				goto IL_0488;
			}
			case 10:
			{
				goto IL_02a0;
			}
			case 11:
			{
				goto IL_02a0;
			}
			case 12:
			{
				goto IL_02a0;
			}
			case 13:
			{
				goto IL_0488;
			}
			case 14:
			{
				goto IL_02a0;
			}
			case 15:
			{
				goto IL_02a0;
			}
			case 16:
			{
				goto IL_02a0;
			}
			case 17:
			{
				goto IL_0488;
			}
			case 18:
			{
				goto IL_02a0;
			}
		}
	}
	{
		goto IL_0488;
	}

IL_0099:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)6);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = L_4;
		int64_t L_6 = __this->get_dataOffset_1();
		int64_t L_7 = L_6;
		RuntimeObject * L_8 = Box(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_8);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_9 = L_5;
		int64_t L_10 = __this->get_dataLength_2();
		int64_t L_11 = L_10;
		RuntimeObject * L_12 = Box(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_12);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_13 = L_9;
		int64_t L_14 = __this->get_lengthFieldBytes_3();
		int64_t L_15 = L_14;
		RuntimeObject * L_16 = Box(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_16);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_17 = L_13;
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_18 = ___startNode0;
		String_t* L_19 = Asn1Node_GetIndentStr_m7ED765F57686361EF3E9F1C9A48CA6A155B3DCCF(__this, L_18, /*hidden argument*/NULL);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_19);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_19);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_20 = L_17;
		String_t* L_21 = Asn1Node_get_TagName_m5D6B8061E8F709B755D2A677292DFF9BE7E18844(__this, /*hidden argument*/NULL);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_21);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_21);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_22 = L_20;
		uint8_t L_23 = __this->get_unusedBits_6();
		uint8_t L_24 = L_23;
		RuntimeObject * L_25 = Box(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_il2cpp_TypeInfo_var, &L_24);
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_25);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_25);
		String_t* L_26 = String_Format_mA3AC3FE7B23D97F3A5BAA082D25B0E01B341A865(_stringLiteral94777790A0AB3CCF4D9E11EC051B963C917D2154, L_22, /*hidden argument*/NULL);
		V_1 = L_26;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_27 = __this->get_data_4();
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_tBFEA56D2C3543BF68547786BAE0EC50B2DEE0886_il2cpp_TypeInfo_var);
		String_t* L_28 = Asn1Util_ToHexString_mD35BF6D2E0CD4D8CC7FFA9829350CC522A75B8DF(L_27, /*hidden argument*/NULL);
		V_2 = L_28;
		String_t* L_29 = V_1;
		NullCheck(L_29);
		int32_t L_30 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_29, /*hidden argument*/NULL);
		String_t* L_31 = V_2;
		NullCheck(L_31);
		int32_t L_32 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_31, /*hidden argument*/NULL);
		int32_t L_33 = ___lineLen1;
		V_9 = (bool)((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)L_32))) < ((int32_t)L_33))? 1 : 0);
		bool L_34 = V_9;
		if (!L_34)
		{
			goto IL_0165;
		}
	}
	{
		String_t* L_35 = V_2;
		NullCheck(L_35);
		int32_t L_36 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_35, /*hidden argument*/NULL);
		V_10 = (bool)((((int32_t)L_36) < ((int32_t)1))? 1 : 0);
		bool L_37 = V_10;
		if (!L_37)
		{
			goto IL_0138;
		}
	}
	{
		String_t* L_38 = V_0;
		String_t* L_39 = V_1;
		String_t* L_40 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(L_38, L_39, _stringLiteralBA8AB5A0280B953AA97435FF8946CBCBB2755A27, /*hidden argument*/NULL);
		V_0 = L_40;
		goto IL_0162;
	}

IL_0138:
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_41 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_42 = L_41;
		String_t* L_43 = V_0;
		NullCheck(L_42);
		ArrayElementTypeCheck (L_42, L_43);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_43);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_44 = L_42;
		String_t* L_45 = V_1;
		NullCheck(L_44);
		ArrayElementTypeCheck (L_44, L_45);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_45);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_46 = L_44;
		NullCheck(L_46);
		ArrayElementTypeCheck (L_46, _stringLiteralBB589D0621E5472F470FA3425A234C74B1E202E8);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralBB589D0621E5472F470FA3425A234C74B1E202E8);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_47 = L_46;
		String_t* L_48 = V_2;
		NullCheck(L_47);
		ArrayElementTypeCheck (L_47, L_48);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_48);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_49 = L_47;
		NullCheck(L_49);
		ArrayElementTypeCheck (L_49, _stringLiteral53492B80EB6A949F82D701393B269876274100E5);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral53492B80EB6A949F82D701393B269876274100E5);
		String_t* L_50 = String_Concat_m232E857CA5107EA6AC52E7DD7018716C021F237B(L_49, /*hidden argument*/NULL);
		V_0 = L_50;
	}

IL_0162:
	{
		goto IL_0192;
	}

IL_0165:
	{
		String_t* L_51 = V_0;
		String_t* L_52 = V_1;
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_53 = ___startNode0;
		String_t* L_54 = Asn1Node_GetIndentStr_m7ED765F57686361EF3E9F1C9A48CA6A155B3DCCF(__this, L_53, /*hidden argument*/NULL);
		NullCheck(L_54);
		int32_t L_55 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_54, /*hidden argument*/NULL);
		int32_t L_56 = ___lineLen1;
		String_t* L_57 = V_2;
		String_t* L_58 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_57, _stringLiteralBA8AB5A0280B953AA97435FF8946CBCBB2755A27, /*hidden argument*/NULL);
		String_t* L_59 = Asn1Node_FormatLineHexString_m84B989C7EFD166698EA3E62FD100F8D7F60931E7(__this, _stringLiteralD102FBCEBDE3A28A0C9BE431E102FD07A048C6BB, L_55, L_56, L_58, /*hidden argument*/NULL);
		String_t* L_60 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(L_51, L_52, L_59, /*hidden argument*/NULL);
		V_0 = L_60;
	}

IL_0192:
	{
		goto IL_05cc;
	}

IL_0197:
	{
		Oid_t5B93F085287F1B3F4A9F315146D0C08398544492 * L_61 = (Oid_t5B93F085287F1B3F4A9F315146D0C08398544492 *)il2cpp_codegen_object_new(Oid_t5B93F085287F1B3F4A9F315146D0C08398544492_il2cpp_TypeInfo_var);
		Oid__ctor_mFFD980E1341E8BA30F696F91756ACE4D33CB9E5E(L_61, /*hidden argument*/NULL);
		V_5 = L_61;
		Oid_t5B93F085287F1B3F4A9F315146D0C08398544492 * L_62 = V_5;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_63 = __this->get_data_4();
		MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * L_64 = (MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C *)il2cpp_codegen_object_new(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m731754F1435D29F87C407D84ED47AF35FFF9B0EF(L_64, L_63, /*hidden argument*/NULL);
		NullCheck(L_62);
		String_t* L_65 = VirtFuncInvoker1< String_t*, Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * >::Invoke(4 /* System.String LipingShare.LCLib.Asn1Processor.Oid::Decode(System.IO.Stream) */, L_62, L_64);
		V_3 = L_65;
		Oid_t5B93F085287F1B3F4A9F315146D0C08398544492 * L_66 = V_5;
		String_t* L_67 = V_3;
		NullCheck(L_66);
		String_t* L_68 = Oid_GetOidName_m70F7C7FA6605F51CCD63598FA18AE26C521B9391(L_66, L_67, /*hidden argument*/NULL);
		V_4 = L_68;
		String_t* L_69 = V_0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_70 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)7);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_71 = L_70;
		int64_t L_72 = __this->get_dataOffset_1();
		int64_t L_73 = L_72;
		RuntimeObject * L_74 = Box(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var, &L_73);
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, L_74);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_74);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_75 = L_71;
		int64_t L_76 = __this->get_dataLength_2();
		int64_t L_77 = L_76;
		RuntimeObject * L_78 = Box(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var, &L_77);
		NullCheck(L_75);
		ArrayElementTypeCheck (L_75, L_78);
		(L_75)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_78);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_79 = L_75;
		int64_t L_80 = __this->get_lengthFieldBytes_3();
		int64_t L_81 = L_80;
		RuntimeObject * L_82 = Box(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var, &L_81);
		NullCheck(L_79);
		ArrayElementTypeCheck (L_79, L_82);
		(L_79)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_82);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_83 = L_79;
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_84 = ___startNode0;
		String_t* L_85 = Asn1Node_GetIndentStr_m7ED765F57686361EF3E9F1C9A48CA6A155B3DCCF(__this, L_84, /*hidden argument*/NULL);
		NullCheck(L_83);
		ArrayElementTypeCheck (L_83, L_85);
		(L_83)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_85);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_86 = L_83;
		String_t* L_87 = Asn1Node_get_TagName_m5D6B8061E8F709B755D2A677292DFF9BE7E18844(__this, /*hidden argument*/NULL);
		NullCheck(L_86);
		ArrayElementTypeCheck (L_86, L_87);
		(L_86)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_87);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_88 = L_86;
		String_t* L_89 = V_4;
		NullCheck(L_88);
		ArrayElementTypeCheck (L_88, L_89);
		(L_88)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_89);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_90 = L_88;
		String_t* L_91 = V_3;
		NullCheck(L_90);
		ArrayElementTypeCheck (L_90, L_91);
		(L_90)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)L_91);
		String_t* L_92 = String_Format_mA3AC3FE7B23D97F3A5BAA082D25B0E01B341A865(_stringLiteral21BD9B00968D05EB5CF21915370A3B7B86CAB75B, L_90, /*hidden argument*/NULL);
		String_t* L_93 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_69, L_92, /*hidden argument*/NULL);
		V_0 = L_93;
		goto IL_05cc;
	}

IL_021d:
	{
		RelativeOid_tA04AF790321D95FE09233E82417A118B0B1BBBBB * L_94 = (RelativeOid_tA04AF790321D95FE09233E82417A118B0B1BBBBB *)il2cpp_codegen_object_new(RelativeOid_tA04AF790321D95FE09233E82417A118B0B1BBBBB_il2cpp_TypeInfo_var);
		RelativeOid__ctor_m31B82A6D54A8D09F8F895B180782CD27C8908478(L_94, /*hidden argument*/NULL);
		V_6 = L_94;
		RelativeOid_tA04AF790321D95FE09233E82417A118B0B1BBBBB * L_95 = V_6;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_96 = __this->get_data_4();
		MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * L_97 = (MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C *)il2cpp_codegen_object_new(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m731754F1435D29F87C407D84ED47AF35FFF9B0EF(L_97, L_96, /*hidden argument*/NULL);
		NullCheck(L_95);
		String_t* L_98 = VirtFuncInvoker1< String_t*, Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * >::Invoke(4 /* System.String LipingShare.LCLib.Asn1Processor.Oid::Decode(System.IO.Stream) */, L_95, L_97);
		V_3 = L_98;
		V_4 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		String_t* L_99 = V_0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_100 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)7);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_101 = L_100;
		int64_t L_102 = __this->get_dataOffset_1();
		int64_t L_103 = L_102;
		RuntimeObject * L_104 = Box(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var, &L_103);
		NullCheck(L_101);
		ArrayElementTypeCheck (L_101, L_104);
		(L_101)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_104);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_105 = L_101;
		int64_t L_106 = __this->get_dataLength_2();
		int64_t L_107 = L_106;
		RuntimeObject * L_108 = Box(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var, &L_107);
		NullCheck(L_105);
		ArrayElementTypeCheck (L_105, L_108);
		(L_105)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_108);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_109 = L_105;
		int64_t L_110 = __this->get_lengthFieldBytes_3();
		int64_t L_111 = L_110;
		RuntimeObject * L_112 = Box(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var, &L_111);
		NullCheck(L_109);
		ArrayElementTypeCheck (L_109, L_112);
		(L_109)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_112);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_113 = L_109;
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_114 = ___startNode0;
		String_t* L_115 = Asn1Node_GetIndentStr_m7ED765F57686361EF3E9F1C9A48CA6A155B3DCCF(__this, L_114, /*hidden argument*/NULL);
		NullCheck(L_113);
		ArrayElementTypeCheck (L_113, L_115);
		(L_113)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_115);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_116 = L_113;
		String_t* L_117 = Asn1Node_get_TagName_m5D6B8061E8F709B755D2A677292DFF9BE7E18844(__this, /*hidden argument*/NULL);
		NullCheck(L_116);
		ArrayElementTypeCheck (L_116, L_117);
		(L_116)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_117);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_118 = L_116;
		String_t* L_119 = V_4;
		NullCheck(L_118);
		ArrayElementTypeCheck (L_118, L_119);
		(L_118)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_119);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_120 = L_118;
		String_t* L_121 = V_3;
		NullCheck(L_120);
		ArrayElementTypeCheck (L_120, L_121);
		(L_120)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)L_121);
		String_t* L_122 = String_Format_mA3AC3FE7B23D97F3A5BAA082D25B0E01B341A865(_stringLiteral21BD9B00968D05EB5CF21915370A3B7B86CAB75B, L_120, /*hidden argument*/NULL);
		String_t* L_123 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_99, L_122, /*hidden argument*/NULL);
		V_0 = L_123;
		goto IL_05cc;
	}

IL_02a0:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_124 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_125 = L_124;
		int64_t L_126 = __this->get_dataOffset_1();
		int64_t L_127 = L_126;
		RuntimeObject * L_128 = Box(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var, &L_127);
		NullCheck(L_125);
		ArrayElementTypeCheck (L_125, L_128);
		(L_125)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_128);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_129 = L_125;
		int64_t L_130 = __this->get_dataLength_2();
		int64_t L_131 = L_130;
		RuntimeObject * L_132 = Box(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var, &L_131);
		NullCheck(L_129);
		ArrayElementTypeCheck (L_129, L_132);
		(L_129)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_132);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_133 = L_129;
		int64_t L_134 = __this->get_lengthFieldBytes_3();
		int64_t L_135 = L_134;
		RuntimeObject * L_136 = Box(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var, &L_135);
		NullCheck(L_133);
		ArrayElementTypeCheck (L_133, L_136);
		(L_133)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_136);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_137 = L_133;
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_138 = ___startNode0;
		String_t* L_139 = Asn1Node_GetIndentStr_m7ED765F57686361EF3E9F1C9A48CA6A155B3DCCF(__this, L_138, /*hidden argument*/NULL);
		NullCheck(L_137);
		ArrayElementTypeCheck (L_137, L_139);
		(L_137)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_139);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_140 = L_137;
		String_t* L_141 = Asn1Node_get_TagName_m5D6B8061E8F709B755D2A677292DFF9BE7E18844(__this, /*hidden argument*/NULL);
		NullCheck(L_140);
		ArrayElementTypeCheck (L_140, L_141);
		(L_140)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_141);
		String_t* L_142 = String_Format_mA3AC3FE7B23D97F3A5BAA082D25B0E01B341A865(_stringLiteral846DF225E0F9F0A40843D075F5A16925B036DF56, L_140, /*hidden argument*/NULL);
		V_1 = L_142;
		uint8_t L_143 = __this->get_tag_0();
		V_11 = (bool)((((int32_t)L_143) == ((int32_t)((int32_t)12)))? 1 : 0);
		bool L_144 = V_11;
		if (!L_144)
		{
			goto IL_0317;
		}
	}
	{
		UTF8Encoding_t77ED103B749A387EF072C3429F48C91D12CA08DE * L_145 = (UTF8Encoding_t77ED103B749A387EF072C3429F48C91D12CA08DE *)il2cpp_codegen_object_new(UTF8Encoding_t77ED103B749A387EF072C3429F48C91D12CA08DE_il2cpp_TypeInfo_var);
		UTF8Encoding__ctor_m999E138A2E4C290F8A97866714EE53D58C931488(L_145, /*hidden argument*/NULL);
		V_12 = L_145;
		UTF8Encoding_t77ED103B749A387EF072C3429F48C91D12CA08DE * L_146 = V_12;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_147 = __this->get_data_4();
		NullCheck(L_146);
		String_t* L_148 = VirtFuncInvoker1< String_t*, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_146, L_147);
		V_2 = L_148;
		goto IL_0325;
	}

IL_0317:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_149 = __this->get_data_4();
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_tBFEA56D2C3543BF68547786BAE0EC50B2DEE0886_il2cpp_TypeInfo_var);
		String_t* L_150 = Asn1Util_BytesToString_m1887FCB8C42067024ABECD8AADB82FE9C10CB2A3(L_149, /*hidden argument*/NULL);
		V_2 = L_150;
	}

IL_0325:
	{
		String_t* L_151 = V_1;
		NullCheck(L_151);
		int32_t L_152 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_151, /*hidden argument*/NULL);
		String_t* L_153 = V_2;
		NullCheck(L_153);
		int32_t L_154 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_153, /*hidden argument*/NULL);
		int32_t L_155 = ___lineLen1;
		V_13 = (bool)((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_152, (int32_t)L_154))) < ((int32_t)L_155))? 1 : 0);
		bool L_156 = V_13;
		if (!L_156)
		{
			goto IL_0367;
		}
	}
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_157 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_158 = L_157;
		String_t* L_159 = V_0;
		NullCheck(L_158);
		ArrayElementTypeCheck (L_158, L_159);
		(L_158)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_159);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_160 = L_158;
		String_t* L_161 = V_1;
		NullCheck(L_160);
		ArrayElementTypeCheck (L_160, L_161);
		(L_160)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_161);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_162 = L_160;
		NullCheck(L_162);
		ArrayElementTypeCheck (L_162, _stringLiteralBB589D0621E5472F470FA3425A234C74B1E202E8);
		(L_162)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralBB589D0621E5472F470FA3425A234C74B1E202E8);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_163 = L_162;
		String_t* L_164 = V_2;
		NullCheck(L_163);
		ArrayElementTypeCheck (L_163, L_164);
		(L_163)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_164);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_165 = L_163;
		NullCheck(L_165);
		ArrayElementTypeCheck (L_165, _stringLiteral53492B80EB6A949F82D701393B269876274100E5);
		(L_165)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral53492B80EB6A949F82D701393B269876274100E5);
		String_t* L_166 = String_Concat_m232E857CA5107EA6AC52E7DD7018716C021F237B(L_165, /*hidden argument*/NULL);
		V_0 = L_166;
		goto IL_038f;
	}

IL_0367:
	{
		String_t* L_167 = V_0;
		String_t* L_168 = V_1;
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_169 = ___startNode0;
		String_t* L_170 = Asn1Node_GetIndentStr_m7ED765F57686361EF3E9F1C9A48CA6A155B3DCCF(__this, L_169, /*hidden argument*/NULL);
		NullCheck(L_170);
		int32_t L_171 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_170, /*hidden argument*/NULL);
		int32_t L_172 = ___lineLen1;
		String_t* L_173 = V_2;
		String_t* L_174 = Asn1Node_FormatLineString_m22757245208B64E6BC87B209BB1191B33B2DEB89(__this, _stringLiteralD102FBCEBDE3A28A0C9BE431E102FD07A048C6BB, L_171, L_172, L_173, /*hidden argument*/NULL);
		String_t* L_175 = String_Concat_mDD2E38332DED3A8C088D38D78A0E0BEB5091DA64(L_167, L_168, L_174, _stringLiteralBA8AB5A0280B953AA97435FF8946CBCBB2755A27, /*hidden argument*/NULL);
		V_0 = L_175;
	}

IL_038f:
	{
		goto IL_05cc;
	}

IL_0394:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_176 = __this->get_data_4();
		if (!L_176)
		{
			goto IL_03a8;
		}
	}
	{
		int64_t L_177 = __this->get_dataLength_2();
		G_B23_0 = ((((int64_t)L_177) < ((int64_t)(((int64_t)((int64_t)8)))))? 1 : 0);
		goto IL_03a9;
	}

IL_03a8:
	{
		G_B23_0 = 0;
	}

IL_03a9:
	{
		V_14 = (bool)G_B23_0;
		bool L_178 = V_14;
		if (!L_178)
		{
			goto IL_041e;
		}
	}
	{
		String_t* L_179 = V_0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_180 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)6);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_181 = L_180;
		int64_t L_182 = __this->get_dataOffset_1();
		int64_t L_183 = L_182;
		RuntimeObject * L_184 = Box(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var, &L_183);
		NullCheck(L_181);
		ArrayElementTypeCheck (L_181, L_184);
		(L_181)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_184);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_185 = L_181;
		int64_t L_186 = __this->get_dataLength_2();
		int64_t L_187 = L_186;
		RuntimeObject * L_188 = Box(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var, &L_187);
		NullCheck(L_185);
		ArrayElementTypeCheck (L_185, L_188);
		(L_185)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_188);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_189 = L_185;
		int64_t L_190 = __this->get_lengthFieldBytes_3();
		int64_t L_191 = L_190;
		RuntimeObject * L_192 = Box(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var, &L_191);
		NullCheck(L_189);
		ArrayElementTypeCheck (L_189, L_192);
		(L_189)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_192);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_193 = L_189;
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_194 = ___startNode0;
		String_t* L_195 = Asn1Node_GetIndentStr_m7ED765F57686361EF3E9F1C9A48CA6A155B3DCCF(__this, L_194, /*hidden argument*/NULL);
		NullCheck(L_193);
		ArrayElementTypeCheck (L_193, L_195);
		(L_193)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_195);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_196 = L_193;
		String_t* L_197 = Asn1Node_get_TagName_m5D6B8061E8F709B755D2A677292DFF9BE7E18844(__this, /*hidden argument*/NULL);
		NullCheck(L_196);
		ArrayElementTypeCheck (L_196, L_197);
		(L_196)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_197);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_198 = L_196;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_199 = __this->get_data_4();
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_tBFEA56D2C3543BF68547786BAE0EC50B2DEE0886_il2cpp_TypeInfo_var);
		int64_t L_200 = Asn1Util_BytesToLong_m9D73FD300DA3D8037E90E580318E1F9E4EA5FDFF(L_199, /*hidden argument*/NULL);
		V_15 = L_200;
		String_t* L_201 = Int64_ToString_m8210E39355A227AE15DD391EB810AA9B6AB8B26C((int64_t*)(&V_15), /*hidden argument*/NULL);
		NullCheck(L_198);
		ArrayElementTypeCheck (L_198, L_201);
		(L_198)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_201);
		String_t* L_202 = String_Format_mA3AC3FE7B23D97F3A5BAA082D25B0E01B341A865(_stringLiteral8CB1B9AF1D54730BDF130A46673B64E523B7AF2B, L_198, /*hidden argument*/NULL);
		String_t* L_203 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_179, L_202, /*hidden argument*/NULL);
		V_0 = L_203;
		goto IL_0483;
	}

IL_041e:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_204 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_205 = L_204;
		int64_t L_206 = __this->get_dataOffset_1();
		int64_t L_207 = L_206;
		RuntimeObject * L_208 = Box(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var, &L_207);
		NullCheck(L_205);
		ArrayElementTypeCheck (L_205, L_208);
		(L_205)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_208);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_209 = L_205;
		int64_t L_210 = __this->get_dataLength_2();
		int64_t L_211 = L_210;
		RuntimeObject * L_212 = Box(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var, &L_211);
		NullCheck(L_209);
		ArrayElementTypeCheck (L_209, L_212);
		(L_209)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_212);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_213 = L_209;
		int64_t L_214 = __this->get_lengthFieldBytes_3();
		int64_t L_215 = L_214;
		RuntimeObject * L_216 = Box(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var, &L_215);
		NullCheck(L_213);
		ArrayElementTypeCheck (L_213, L_216);
		(L_213)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_216);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_217 = L_213;
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_218 = ___startNode0;
		String_t* L_219 = Asn1Node_GetIndentStr_m7ED765F57686361EF3E9F1C9A48CA6A155B3DCCF(__this, L_218, /*hidden argument*/NULL);
		NullCheck(L_217);
		ArrayElementTypeCheck (L_217, L_219);
		(L_217)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_219);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_220 = L_217;
		String_t* L_221 = Asn1Node_get_TagName_m5D6B8061E8F709B755D2A677292DFF9BE7E18844(__this, /*hidden argument*/NULL);
		NullCheck(L_220);
		ArrayElementTypeCheck (L_220, L_221);
		(L_220)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_221);
		String_t* L_222 = String_Format_mA3AC3FE7B23D97F3A5BAA082D25B0E01B341A865(_stringLiteral846DF225E0F9F0A40843D075F5A16925B036DF56, L_220, /*hidden argument*/NULL);
		V_1 = L_222;
		String_t* L_223 = V_0;
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_224 = ___startNode0;
		String_t* L_225 = V_1;
		int32_t L_226 = ___lineLen1;
		String_t* L_227 = Asn1Node_GetHexPrintingStr_m2C5C36DE9808831F7395AFF0E0DB999FB4DD5441(__this, L_224, L_225, _stringLiteralD102FBCEBDE3A28A0C9BE431E102FD07A048C6BB, L_226, /*hidden argument*/NULL);
		String_t* L_228 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_223, L_227, /*hidden argument*/NULL);
		V_0 = L_228;
	}

IL_0483:
	{
		goto IL_05cc;
	}

IL_0488:
	{
		uint8_t L_229 = __this->get_tag_0();
		V_16 = (bool)((((int32_t)((int32_t)((int32_t)L_229&(int32_t)((int32_t)31)))) == ((int32_t)6))? 1 : 0);
		bool L_230 = V_16;
		if (!L_230)
		{
			goto IL_0565;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_231 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_232 = L_231;
		int64_t L_233 = __this->get_dataOffset_1();
		int64_t L_234 = L_233;
		RuntimeObject * L_235 = Box(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var, &L_234);
		NullCheck(L_232);
		ArrayElementTypeCheck (L_232, L_235);
		(L_232)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_235);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_236 = L_232;
		int64_t L_237 = __this->get_dataLength_2();
		int64_t L_238 = L_237;
		RuntimeObject * L_239 = Box(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var, &L_238);
		NullCheck(L_236);
		ArrayElementTypeCheck (L_236, L_239);
		(L_236)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_239);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_240 = L_236;
		int64_t L_241 = __this->get_lengthFieldBytes_3();
		int64_t L_242 = L_241;
		RuntimeObject * L_243 = Box(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var, &L_242);
		NullCheck(L_240);
		ArrayElementTypeCheck (L_240, L_243);
		(L_240)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_243);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_244 = L_240;
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_245 = ___startNode0;
		String_t* L_246 = Asn1Node_GetIndentStr_m7ED765F57686361EF3E9F1C9A48CA6A155B3DCCF(__this, L_245, /*hidden argument*/NULL);
		NullCheck(L_244);
		ArrayElementTypeCheck (L_244, L_246);
		(L_244)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_246);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_247 = L_244;
		String_t* L_248 = Asn1Node_get_TagName_m5D6B8061E8F709B755D2A677292DFF9BE7E18844(__this, /*hidden argument*/NULL);
		NullCheck(L_247);
		ArrayElementTypeCheck (L_247, L_248);
		(L_247)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_248);
		String_t* L_249 = String_Format_mA3AC3FE7B23D97F3A5BAA082D25B0E01B341A865(_stringLiteral846DF225E0F9F0A40843D075F5A16925B036DF56, L_247, /*hidden argument*/NULL);
		V_1 = L_249;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_250 = __this->get_data_4();
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_tBFEA56D2C3543BF68547786BAE0EC50B2DEE0886_il2cpp_TypeInfo_var);
		String_t* L_251 = Asn1Util_BytesToString_m1887FCB8C42067024ABECD8AADB82FE9C10CB2A3(L_250, /*hidden argument*/NULL);
		V_2 = L_251;
		String_t* L_252 = V_1;
		NullCheck(L_252);
		int32_t L_253 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_252, /*hidden argument*/NULL);
		String_t* L_254 = V_2;
		NullCheck(L_254);
		int32_t L_255 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_254, /*hidden argument*/NULL);
		int32_t L_256 = ___lineLen1;
		V_17 = (bool)((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_253, (int32_t)L_255))) < ((int32_t)L_256))? 1 : 0);
		bool L_257 = V_17;
		if (!L_257)
		{
			goto IL_053a;
		}
	}
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_258 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_259 = L_258;
		String_t* L_260 = V_0;
		NullCheck(L_259);
		ArrayElementTypeCheck (L_259, L_260);
		(L_259)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_260);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_261 = L_259;
		String_t* L_262 = V_1;
		NullCheck(L_261);
		ArrayElementTypeCheck (L_261, L_262);
		(L_261)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_262);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_263 = L_261;
		NullCheck(L_263);
		ArrayElementTypeCheck (L_263, _stringLiteralBB589D0621E5472F470FA3425A234C74B1E202E8);
		(L_263)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralBB589D0621E5472F470FA3425A234C74B1E202E8);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_264 = L_263;
		String_t* L_265 = V_2;
		NullCheck(L_264);
		ArrayElementTypeCheck (L_264, L_265);
		(L_264)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_265);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_266 = L_264;
		NullCheck(L_266);
		ArrayElementTypeCheck (L_266, _stringLiteral53492B80EB6A949F82D701393B269876274100E5);
		(L_266)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral53492B80EB6A949F82D701393B269876274100E5);
		String_t* L_267 = String_Concat_m232E857CA5107EA6AC52E7DD7018716C021F237B(L_266, /*hidden argument*/NULL);
		V_0 = L_267;
		goto IL_0562;
	}

IL_053a:
	{
		String_t* L_268 = V_0;
		String_t* L_269 = V_1;
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_270 = ___startNode0;
		String_t* L_271 = Asn1Node_GetIndentStr_m7ED765F57686361EF3E9F1C9A48CA6A155B3DCCF(__this, L_270, /*hidden argument*/NULL);
		NullCheck(L_271);
		int32_t L_272 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_271, /*hidden argument*/NULL);
		int32_t L_273 = ___lineLen1;
		String_t* L_274 = V_2;
		String_t* L_275 = Asn1Node_FormatLineString_m22757245208B64E6BC87B209BB1191B33B2DEB89(__this, _stringLiteralD102FBCEBDE3A28A0C9BE431E102FD07A048C6BB, L_272, L_273, L_274, /*hidden argument*/NULL);
		String_t* L_276 = String_Concat_mDD2E38332DED3A8C088D38D78A0E0BEB5091DA64(L_268, L_269, L_275, _stringLiteralBA8AB5A0280B953AA97435FF8946CBCBB2755A27, /*hidden argument*/NULL);
		V_0 = L_276;
	}

IL_0562:
	{
		goto IL_05ca;
	}

IL_0565:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_277 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_278 = L_277;
		int64_t L_279 = __this->get_dataOffset_1();
		int64_t L_280 = L_279;
		RuntimeObject * L_281 = Box(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var, &L_280);
		NullCheck(L_278);
		ArrayElementTypeCheck (L_278, L_281);
		(L_278)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_281);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_282 = L_278;
		int64_t L_283 = __this->get_dataLength_2();
		int64_t L_284 = L_283;
		RuntimeObject * L_285 = Box(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var, &L_284);
		NullCheck(L_282);
		ArrayElementTypeCheck (L_282, L_285);
		(L_282)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_285);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_286 = L_282;
		int64_t L_287 = __this->get_lengthFieldBytes_3();
		int64_t L_288 = L_287;
		RuntimeObject * L_289 = Box(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var, &L_288);
		NullCheck(L_286);
		ArrayElementTypeCheck (L_286, L_289);
		(L_286)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_289);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_290 = L_286;
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_291 = ___startNode0;
		String_t* L_292 = Asn1Node_GetIndentStr_m7ED765F57686361EF3E9F1C9A48CA6A155B3DCCF(__this, L_291, /*hidden argument*/NULL);
		NullCheck(L_290);
		ArrayElementTypeCheck (L_290, L_292);
		(L_290)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_292);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_293 = L_290;
		String_t* L_294 = Asn1Node_get_TagName_m5D6B8061E8F709B755D2A677292DFF9BE7E18844(__this, /*hidden argument*/NULL);
		NullCheck(L_293);
		ArrayElementTypeCheck (L_293, L_294);
		(L_293)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_294);
		String_t* L_295 = String_Format_mA3AC3FE7B23D97F3A5BAA082D25B0E01B341A865(_stringLiteral846DF225E0F9F0A40843D075F5A16925B036DF56, L_293, /*hidden argument*/NULL);
		V_1 = L_295;
		String_t* L_296 = V_0;
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_297 = ___startNode0;
		String_t* L_298 = V_1;
		int32_t L_299 = ___lineLen1;
		String_t* L_300 = Asn1Node_GetHexPrintingStr_m2C5C36DE9808831F7395AFF0E0DB999FB4DD5441(__this, L_297, L_298, _stringLiteralD102FBCEBDE3A28A0C9BE431E102FD07A048C6BB, L_299, /*hidden argument*/NULL);
		String_t* L_301 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_296, L_300, /*hidden argument*/NULL);
		V_0 = L_301;
	}

IL_05ca:
	{
		goto IL_05cc;
	}

IL_05cc:
	{
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_302 = __this->get_childNodeList_5();
		NullCheck(L_302);
		int32_t L_303 = VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_302);
		V_18 = (bool)((((int32_t)((((int32_t)L_303) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_304 = V_18;
		if (!L_304)
		{
			goto IL_05f5;
		}
	}
	{
		String_t* L_305 = V_0;
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_306 = ___startNode0;
		int32_t L_307 = ___lineLen1;
		String_t* L_308 = Asn1Node_GetListStr_m26EB1B44AC47102EC0C7514186C11CE73726014D(__this, L_306, L_307, /*hidden argument*/NULL);
		String_t* L_309 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_305, L_308, /*hidden argument*/NULL);
		V_0 = L_309;
	}

IL_05f5:
	{
		String_t* L_310 = V_0;
		V_19 = L_310;
		goto IL_05fa;
	}

IL_05fa:
	{
		String_t* L_311 = V_19;
		return L_311;
	}
}
// System.String LipingShare.LCLib.Asn1Processor.Asn1Node::GetDataStr(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Asn1Node_GetDataStr_m98F2E9DC3ACABD540BD1FE3155A5B0DE8E0A89DC (Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * __this, bool ___pureHexMode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Asn1Node_GetDataStr_m98F2E9DC3ACABD540BD1FE3155A5B0DE8E0A89DC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	Oid_t5B93F085287F1B3F4A9F315146D0C08398544492 * V_2 = NULL;
	RelativeOid_tA04AF790321D95FE09233E82417A118B0B1BBBBB * V_3 = NULL;
	UTF8Encoding_t77ED103B749A387EF072C3429F48C91D12CA08DE * V_4 = NULL;
	uint8_t V_5 = 0x0;
	uint8_t V_6 = 0x0;
	bool V_7 = false;
	String_t* V_8 = NULL;
	{
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		bool L_0 = ___pureHexMode0;
		V_1 = L_0;
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = __this->get_data_4();
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_tBFEA56D2C3543BF68547786BAE0EC50B2DEE0886_il2cpp_TypeInfo_var);
		String_t* L_3 = Asn1Util_ToHexString_mD35BF6D2E0CD4D8CC7FFA9829350CC522A75B8DF(L_2, /*hidden argument*/NULL);
		String_t* L_4 = Asn1Util_FormatString_mE0F0FECC3332BFD9488F697A0643920B20B0B821(L_3, ((int32_t)32), 2, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0175;
	}

IL_0027:
	{
		uint8_t L_5 = __this->get_tag_0();
		V_6 = L_5;
		uint8_t L_6 = V_6;
		V_5 = L_6;
		uint8_t L_7 = V_5;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)2)))
		{
			case 0:
			{
				goto IL_0123;
			}
			case 1:
			{
				goto IL_00ae;
			}
			case 2:
			{
				goto IL_0139;
			}
			case 3:
			{
				goto IL_0139;
			}
			case 4:
			{
				goto IL_00c7;
			}
		}
	}
	{
		goto IL_0053;
	}

IL_0053:
	{
		uint8_t L_8 = V_5;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)((int32_t)12))))
		{
			case 0:
			{
				goto IL_010c;
			}
			case 1:
			{
				goto IL_00e4;
			}
			case 2:
			{
				goto IL_0139;
			}
			case 3:
			{
				goto IL_0139;
			}
			case 4:
			{
				goto IL_0139;
			}
			case 5:
			{
				goto IL_0139;
			}
			case 6:
			{
				goto IL_00fe;
			}
			case 7:
			{
				goto IL_00fe;
			}
			case 8:
			{
				goto IL_0139;
			}
			case 9:
			{
				goto IL_0139;
			}
			case 10:
			{
				goto IL_00fe;
			}
			case 11:
			{
				goto IL_00fe;
			}
			case 12:
			{
				goto IL_00fe;
			}
			case 13:
			{
				goto IL_0139;
			}
			case 14:
			{
				goto IL_00fe;
			}
			case 15:
			{
				goto IL_00fe;
			}
			case 16:
			{
				goto IL_00fe;
			}
			case 17:
			{
				goto IL_0139;
			}
			case 18:
			{
				goto IL_00fe;
			}
		}
	}
	{
		goto IL_0139;
	}

IL_00ae:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_9 = __this->get_data_4();
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_tBFEA56D2C3543BF68547786BAE0EC50B2DEE0886_il2cpp_TypeInfo_var);
		String_t* L_10 = Asn1Util_ToHexString_mD35BF6D2E0CD4D8CC7FFA9829350CC522A75B8DF(L_9, /*hidden argument*/NULL);
		String_t* L_11 = Asn1Util_FormatString_mE0F0FECC3332BFD9488F697A0643920B20B0B821(L_10, ((int32_t)32), 2, /*hidden argument*/NULL);
		V_0 = L_11;
		goto IL_0173;
	}

IL_00c7:
	{
		Oid_t5B93F085287F1B3F4A9F315146D0C08398544492 * L_12 = (Oid_t5B93F085287F1B3F4A9F315146D0C08398544492 *)il2cpp_codegen_object_new(Oid_t5B93F085287F1B3F4A9F315146D0C08398544492_il2cpp_TypeInfo_var);
		Oid__ctor_mFFD980E1341E8BA30F696F91756ACE4D33CB9E5E(L_12, /*hidden argument*/NULL);
		V_2 = L_12;
		Oid_t5B93F085287F1B3F4A9F315146D0C08398544492 * L_13 = V_2;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_14 = __this->get_data_4();
		MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * L_15 = (MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C *)il2cpp_codegen_object_new(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m731754F1435D29F87C407D84ED47AF35FFF9B0EF(L_15, L_14, /*hidden argument*/NULL);
		NullCheck(L_13);
		String_t* L_16 = VirtFuncInvoker1< String_t*, Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * >::Invoke(4 /* System.String LipingShare.LCLib.Asn1Processor.Oid::Decode(System.IO.Stream) */, L_13, L_15);
		V_0 = L_16;
		goto IL_0173;
	}

IL_00e4:
	{
		RelativeOid_tA04AF790321D95FE09233E82417A118B0B1BBBBB * L_17 = (RelativeOid_tA04AF790321D95FE09233E82417A118B0B1BBBBB *)il2cpp_codegen_object_new(RelativeOid_tA04AF790321D95FE09233E82417A118B0B1BBBBB_il2cpp_TypeInfo_var);
		RelativeOid__ctor_m31B82A6D54A8D09F8F895B180782CD27C8908478(L_17, /*hidden argument*/NULL);
		V_3 = L_17;
		RelativeOid_tA04AF790321D95FE09233E82417A118B0B1BBBBB * L_18 = V_3;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_19 = __this->get_data_4();
		MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * L_20 = (MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C *)il2cpp_codegen_object_new(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m731754F1435D29F87C407D84ED47AF35FFF9B0EF(L_20, L_19, /*hidden argument*/NULL);
		NullCheck(L_18);
		String_t* L_21 = VirtFuncInvoker1< String_t*, Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * >::Invoke(4 /* System.String LipingShare.LCLib.Asn1Processor.Oid::Decode(System.IO.Stream) */, L_18, L_20);
		V_0 = L_21;
		goto IL_0173;
	}

IL_00fe:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_22 = __this->get_data_4();
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_tBFEA56D2C3543BF68547786BAE0EC50B2DEE0886_il2cpp_TypeInfo_var);
		String_t* L_23 = Asn1Util_BytesToString_m1887FCB8C42067024ABECD8AADB82FE9C10CB2A3(L_22, /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0173;
	}

IL_010c:
	{
		UTF8Encoding_t77ED103B749A387EF072C3429F48C91D12CA08DE * L_24 = (UTF8Encoding_t77ED103B749A387EF072C3429F48C91D12CA08DE *)il2cpp_codegen_object_new(UTF8Encoding_t77ED103B749A387EF072C3429F48C91D12CA08DE_il2cpp_TypeInfo_var);
		UTF8Encoding__ctor_m999E138A2E4C290F8A97866714EE53D58C931488(L_24, /*hidden argument*/NULL);
		V_4 = L_24;
		UTF8Encoding_t77ED103B749A387EF072C3429F48C91D12CA08DE * L_25 = V_4;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_26 = __this->get_data_4();
		NullCheck(L_25);
		String_t* L_27 = VirtFuncInvoker1< String_t*, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_25, L_26);
		V_0 = L_27;
		goto IL_0173;
	}

IL_0123:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_28 = __this->get_data_4();
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_tBFEA56D2C3543BF68547786BAE0EC50B2DEE0886_il2cpp_TypeInfo_var);
		String_t* L_29 = Asn1Util_ToHexString_mD35BF6D2E0CD4D8CC7FFA9829350CC522A75B8DF(L_28, /*hidden argument*/NULL);
		String_t* L_30 = Asn1Util_FormatString_mE0F0FECC3332BFD9488F697A0643920B20B0B821(L_29, ((int32_t)32), 2, /*hidden argument*/NULL);
		V_0 = L_30;
		goto IL_0173;
	}

IL_0139:
	{
		uint8_t L_31 = __this->get_tag_0();
		V_7 = (bool)((((int32_t)((int32_t)((int32_t)L_31&(int32_t)((int32_t)31)))) == ((int32_t)6))? 1 : 0);
		bool L_32 = V_7;
		if (!L_32)
		{
			goto IL_015b;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_33 = __this->get_data_4();
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_tBFEA56D2C3543BF68547786BAE0EC50B2DEE0886_il2cpp_TypeInfo_var);
		String_t* L_34 = Asn1Util_BytesToString_m1887FCB8C42067024ABECD8AADB82FE9C10CB2A3(L_33, /*hidden argument*/NULL);
		V_0 = L_34;
		goto IL_0171;
	}

IL_015b:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_35 = __this->get_data_4();
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_tBFEA56D2C3543BF68547786BAE0EC50B2DEE0886_il2cpp_TypeInfo_var);
		String_t* L_36 = Asn1Util_ToHexString_mD35BF6D2E0CD4D8CC7FFA9829350CC522A75B8DF(L_35, /*hidden argument*/NULL);
		String_t* L_37 = Asn1Util_FormatString_mE0F0FECC3332BFD9488F697A0643920B20B0B821(L_36, ((int32_t)32), 2, /*hidden argument*/NULL);
		V_0 = L_37;
	}

IL_0171:
	{
		goto IL_0173;
	}

IL_0173:
	{
	}

IL_0175:
	{
		String_t* L_38 = V_0;
		V_8 = L_38;
		goto IL_017a;
	}

IL_017a:
	{
		String_t* L_39 = V_8;
		return L_39;
	}
}
// System.Int64 LipingShare.LCLib.Asn1Processor.Asn1Node::get_DataLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Asn1Node_get_DataLength_m9C2D8DB475F8B7BD30776161BC0BD88932D75E5D (Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * __this, const RuntimeMethod* method)
{
	int64_t V_0 = 0;
	{
		int64_t L_0 = __this->get_dataLength_2();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
// System.Byte[] LipingShare.LCLib.Asn1Processor.Asn1Node::get_Data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* Asn1Node_get_Data_mD11992CD2F1CCEC2B0E47491D3B6AF04F9C34EC7 (Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Asn1Node_get_Data_mD11992CD2F1CCEC2B0E47491D3B6AF04F9C34EC7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * V_0 = NULL;
	int64_t V_1 = 0;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * V_5 = NULL;
	int32_t V_6 = 0;
	bool V_7 = false;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_8 = NULL;
	{
		MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * L_0 = (MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C *)il2cpp_codegen_object_new(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m9D0F92C76EFEDA651B678A98EB693FD945286DC2(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		int64_t L_1 = Asn1Node_get_ChildNodeCount_mF517D478344A4AF6843BE4319A05D248B6B25FAC(__this, /*hidden argument*/NULL);
		V_1 = L_1;
		int64_t L_2 = V_1;
		V_3 = (bool)((((int64_t)L_2) == ((int64_t)(((int64_t)((int64_t)0)))))? 1 : 0);
		bool L_3 = V_3;
		if (!L_3)
		{
			goto IL_0042;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_4 = __this->get_data_4();
		V_4 = (bool)((!(((RuntimeObject*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)L_4) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_5 = V_4;
		if (!L_5)
		{
			goto IL_003f;
		}
	}
	{
		MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * L_6 = V_0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_7 = __this->get_data_4();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_8 = __this->get_data_4();
		NullCheck(L_8);
		NullCheck(L_6);
		VirtActionInvoker3< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(27 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_6, L_7, 0, (((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))));
	}

IL_003f:
	{
		goto IL_0070;
	}

IL_0042:
	{
		V_6 = 0;
		goto IL_0063;
	}

IL_0048:
	{
		int32_t L_9 = V_6;
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_10 = Asn1Node_GetChildNode_m9D9513B22B565B7739D03F39C6B8F7D5AFE85010(__this, L_9, /*hidden argument*/NULL);
		V_5 = L_10;
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_11 = V_5;
		MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * L_12 = V_0;
		NullCheck(L_11);
		Asn1Node_SaveData_mE256A287688AF4E0A3492CD79E1E0104F2CF5BA0(L_11, L_12, /*hidden argument*/NULL);
		int32_t L_13 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_0063:
	{
		int32_t L_14 = V_6;
		int64_t L_15 = V_1;
		V_7 = (bool)((((int64_t)(((int64_t)((int64_t)L_14)))) < ((int64_t)L_15))? 1 : 0);
		bool L_16 = V_7;
		if (L_16)
		{
			goto IL_0048;
		}
	}
	{
	}

IL_0070:
	{
		MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * L_17 = V_0;
		NullCheck(L_17);
		int64_t L_18 = VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Length() */, L_17);
		if ((int64_t)(L_18) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Asn1Node_get_Data_mD11992CD2F1CCEC2B0E47491D3B6AF04F9C34EC7_RuntimeMethod_var);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_19 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)(((intptr_t)L_18)));
		V_2 = L_19;
		MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * L_20 = V_0;
		NullCheck(L_20);
		VirtActionInvoker1< int64_t >::Invoke(12 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_20, (((int64_t)((int64_t)0))));
		MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * L_21 = V_0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_22 = V_2;
		MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * L_23 = V_0;
		NullCheck(L_23);
		int64_t L_24 = VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Length() */, L_23);
		NullCheck(L_21);
		VirtFuncInvoker3< int32_t, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(25 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_21, L_22, 0, (((int32_t)((int32_t)L_24))));
		MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * L_25 = V_0;
		NullCheck(L_25);
		VirtActionInvoker0::Invoke(13 /* System.Void System.IO.Stream::Close() */, L_25);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_26 = V_2;
		V_8 = L_26;
		goto IL_00a2;
	}

IL_00a2:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_27 = V_8;
		return L_27;
	}
}
// System.Int64 LipingShare.LCLib.Asn1Processor.Asn1Node::get_Deepness()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Asn1Node_get_Deepness_m1525EDB697AA17BA32A10F145DFD9C8246239D6C (Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * __this, const RuntimeMethod* method)
{
	int64_t V_0 = 0;
	{
		int64_t L_0 = __this->get_deepness_7();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
// System.Void LipingShare.LCLib.Asn1Processor.Asn1Node::set_RequireRecalculatePar(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Asn1Node_set_RequireRecalculatePar_m9D2B76F8DE8B816D4BF62A67AFA921A4C247CF31 (Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_requireRecalculatePar_10(L_0);
		return;
	}
}
// System.Void LipingShare.LCLib.Asn1Processor.Asn1Node::RecalculateTreePar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Asn1Node_RecalculateTreePar_mD0FD98AB1C08B1A3413F0E52D2EB4B688B957C51 (Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * __this, const RuntimeMethod* method)
{
	Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * V_0 = NULL;
	int64_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	{
		bool L_0 = __this->get_requireRecalculatePar_10();
		V_2 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		goto IL_005b;
	}

IL_0010:
	{
		V_0 = __this;
		goto IL_001d;
	}

IL_0014:
	{
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_2 = V_0;
		NullCheck(L_2);
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_3 = Asn1Node_get_ParentNode_mAD267B17EFB0D01BAAD1120937305342C2412F1A(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
	}

IL_001d:
	{
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_4 = V_0;
		NullCheck(L_4);
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_5 = Asn1Node_get_ParentNode_mAD267B17EFB0D01BAAD1120937305342C2412F1A(L_4, /*hidden argument*/NULL);
		V_3 = (bool)((!(((RuntimeObject*)(Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 *)L_5) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_6 = V_3;
		if (L_6)
		{
			goto IL_0014;
		}
	}
	{
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_7 = V_0;
		Asn1Node_ResetBranchDataLength_m129A81139E86676DD2A919C4F2F248D8CA37E2AC(L_7, /*hidden argument*/NULL);
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_8 = V_0;
		NullCheck(L_8);
		L_8->set_dataOffset_1((((int64_t)((int64_t)0))));
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_9 = V_0;
		NullCheck(L_9);
		L_9->set_deepness_7((((int64_t)((int64_t)0))));
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_10 = V_0;
		NullCheck(L_10);
		int64_t L_11 = L_10->get_dataOffset_1();
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_12 = V_0;
		NullCheck(L_12);
		int64_t L_13 = L_12->get_lengthFieldBytes_3();
		V_1 = ((int64_t)il2cpp_codegen_add((int64_t)((int64_t)il2cpp_codegen_add((int64_t)L_11, (int64_t)(((int64_t)((int64_t)1))))), (int64_t)L_13));
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_14 = V_0;
		int64_t L_15 = V_1;
		Asn1Node_ResetChildNodePar_m1908B4A975AE86DF6DEC30C9E498BD5888DD8F30(__this, L_14, L_15, /*hidden argument*/NULL);
	}

IL_005b:
	{
		return;
	}
}
// System.Int64 LipingShare.LCLib.Asn1Processor.Asn1Node::ResetBranchDataLength(LipingShare.LCLib.Asn1Processor.Asn1Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Asn1Node_ResetBranchDataLength_m129A81139E86676DD2A919C4F2F248D8CA37E2AC (Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * ___node0, const RuntimeMethod* method)
{
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	int64_t V_7 = 0;
	{
		V_0 = (((int64_t)((int64_t)0)));
		V_1 = (((int64_t)((int64_t)0)));
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_0 = ___node0;
		NullCheck(L_0);
		int64_t L_1 = Asn1Node_get_ChildNodeCount_mF517D478344A4AF6843BE4319A05D248B6B25FAC(L_0, /*hidden argument*/NULL);
		V_2 = (bool)((((int64_t)L_1) < ((int64_t)(((int64_t)((int64_t)1)))))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0032;
		}
	}
	{
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_3 = ___node0;
		NullCheck(L_3);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_4 = L_3->get_data_4();
		V_3 = (bool)((!(((RuntimeObject*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)L_4) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_5 = V_3;
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		int64_t L_6 = V_1;
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_7 = ___node0;
		NullCheck(L_7);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_8 = L_7->get_data_4();
		NullCheck(L_8);
		V_1 = ((int64_t)il2cpp_codegen_add((int64_t)L_6, (int64_t)(((int64_t)((int64_t)(((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))))));
	}

IL_002f:
	{
		goto IL_0062;
	}

IL_0032:
	{
		V_4 = 0;
		goto IL_0050;
	}

IL_0038:
	{
		int64_t L_9 = V_1;
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_10 = ___node0;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_12 = Asn1Node_GetChildNode_m9D9513B22B565B7739D03F39C6B8F7D5AFE85010(L_10, L_11, /*hidden argument*/NULL);
		int64_t L_13 = Asn1Node_ResetBranchDataLength_m129A81139E86676DD2A919C4F2F248D8CA37E2AC(L_12, /*hidden argument*/NULL);
		V_1 = ((int64_t)il2cpp_codegen_add((int64_t)L_9, (int64_t)L_13));
		int32_t L_14 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_0050:
	{
		int32_t L_15 = V_4;
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_16 = ___node0;
		NullCheck(L_16);
		int64_t L_17 = Asn1Node_get_ChildNodeCount_mF517D478344A4AF6843BE4319A05D248B6B25FAC(L_16, /*hidden argument*/NULL);
		V_5 = (bool)((((int64_t)(((int64_t)((int64_t)L_15)))) < ((int64_t)L_17))? 1 : 0);
		bool L_18 = V_5;
		if (L_18)
		{
			goto IL_0038;
		}
	}
	{
	}

IL_0062:
	{
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_19 = ___node0;
		int64_t L_20 = V_1;
		NullCheck(L_19);
		L_19->set_dataLength_2(L_20);
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_21 = ___node0;
		NullCheck(L_21);
		uint8_t L_22 = L_21->get_tag_0();
		V_6 = (bool)((((int32_t)L_22) == ((int32_t)3))? 1 : 0);
		bool L_23 = V_6;
		if (!L_23)
		{
			goto IL_0087;
		}
	}
	{
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_24 = ___node0;
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_25 = L_24;
		NullCheck(L_25);
		int64_t L_26 = L_25->get_dataLength_2();
		NullCheck(L_25);
		L_25->set_dataLength_2(((int64_t)il2cpp_codegen_add((int64_t)L_26, (int64_t)(((int64_t)((int64_t)1))))));
	}

IL_0087:
	{
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_27 = ___node0;
		Asn1Node_ResetDataLengthFieldWidth_m941BC464CA4C3990E89CD221A8C6FCE21D97EC2F(L_27, /*hidden argument*/NULL);
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_28 = ___node0;
		NullCheck(L_28);
		int64_t L_29 = L_28->get_dataLength_2();
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_30 = ___node0;
		NullCheck(L_30);
		int64_t L_31 = L_30->get_lengthFieldBytes_3();
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)((int64_t)il2cpp_codegen_add((int64_t)L_29, (int64_t)(((int64_t)((int64_t)1))))), (int64_t)L_31));
		int64_t L_32 = V_0;
		V_7 = L_32;
		goto IL_00a4;
	}

IL_00a4:
	{
		int64_t L_33 = V_7;
		return L_33;
	}
}
// System.Void LipingShare.LCLib.Asn1Processor.Asn1Node::ResetDataLengthFieldWidth(LipingShare.LCLib.Asn1Processor.Asn1Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Asn1Node_ResetDataLengthFieldWidth_m941BC464CA4C3990E89CD221A8C6FCE21D97EC2F (Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * ___node0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Asn1Node_ResetDataLengthFieldWidth_m941BC464CA4C3990E89CD221A8C6FCE21D97EC2F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * V_0 = NULL;
	{
		MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * L_0 = (MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C *)il2cpp_codegen_object_new(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m9D0F92C76EFEDA651B678A98EB693FD945286DC2(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * L_1 = V_0;
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_2 = ___node0;
		NullCheck(L_2);
		int64_t L_3 = L_2->get_dataLength_2();
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_tBFEA56D2C3543BF68547786BAE0EC50B2DEE0886_il2cpp_TypeInfo_var);
		Asn1Util_DERLengthEncode_mA9F7B1782C76D6877D706D78E99DA95002C2DDC3(L_1, L_3, /*hidden argument*/NULL);
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_4 = ___node0;
		MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * L_5 = V_0;
		NullCheck(L_5);
		int64_t L_6 = VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Length() */, L_5);
		NullCheck(L_4);
		L_4->set_lengthFieldBytes_3(L_6);
		MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * L_7 = V_0;
		NullCheck(L_7);
		VirtActionInvoker0::Invoke(13 /* System.Void System.IO.Stream::Close() */, L_7);
		return;
	}
}
// System.Void LipingShare.LCLib.Asn1Processor.Asn1Node::ResetChildNodePar(LipingShare.LCLib.Asn1Processor.Asn1Node,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Asn1Node_ResetChildNodePar_m1908B4A975AE86DF6DEC30C9E498BD5888DD8F30 (Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * __this, Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * ___xNode0, int64_t ___subOffset1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Asn1Node_ResetChildNodePar_m1908B4A975AE86DF6DEC30C9E498BD5888DD8F30_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	{
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_0 = ___xNode0;
		NullCheck(L_0);
		uint8_t L_1 = L_0->get_tag_0();
		V_2 = (bool)((((int32_t)L_1) == ((int32_t)3))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		int64_t L_3 = ___subOffset1;
		___subOffset1 = ((int64_t)il2cpp_codegen_add((int64_t)L_3, (int64_t)(((int64_t)((int64_t)1)))));
	}

IL_0016:
	{
		V_0 = 0;
		goto IL_0082;
	}

IL_001a:
	{
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_4 = ___xNode0;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_6 = Asn1Node_GetChildNode_m9D9513B22B565B7739D03F39C6B8F7D5AFE85010(L_4, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_7 = V_1;
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_8 = ___xNode0;
		NullCheck(L_7);
		L_7->set_parentNode_9(L_8);
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_9 = V_1;
		int64_t L_10 = ___subOffset1;
		NullCheck(L_9);
		L_9->set_dataOffset_1(L_10);
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_11 = V_1;
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_12 = ___xNode0;
		NullCheck(L_12);
		int64_t L_13 = L_12->get_deepness_7();
		NullCheck(L_11);
		L_11->set_deepness_7(((int64_t)il2cpp_codegen_add((int64_t)L_13, (int64_t)(((int64_t)((int64_t)1))))));
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_14 = V_1;
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_15 = ___xNode0;
		NullCheck(L_15);
		String_t* L_16 = L_15->get_path_8();
		String_t* L_17 = Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_18 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(L_16, _stringLiteral42099B4AF021E53FD8FD4E056C2568D7C2E3FFA8, L_17, /*hidden argument*/NULL);
		NullCheck(L_14);
		L_14->set_path_8(L_18);
		int64_t L_19 = ___subOffset1;
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_20 = V_1;
		NullCheck(L_20);
		int64_t L_21 = L_20->get_lengthFieldBytes_3();
		___subOffset1 = ((int64_t)il2cpp_codegen_add((int64_t)L_19, (int64_t)((int64_t)il2cpp_codegen_add((int64_t)(((int64_t)((int64_t)1))), (int64_t)L_21))));
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_22 = V_1;
		int64_t L_23 = ___subOffset1;
		Asn1Node_ResetChildNodePar_m1908B4A975AE86DF6DEC30C9E498BD5888DD8F30(__this, L_22, L_23, /*hidden argument*/NULL);
		int64_t L_24 = ___subOffset1;
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_25 = V_1;
		NullCheck(L_25);
		int64_t L_26 = L_25->get_dataLength_2();
		___subOffset1 = ((int64_t)il2cpp_codegen_add((int64_t)L_24, (int64_t)L_26));
		int32_t L_27 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_0082:
	{
		int32_t L_28 = V_0;
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_29 = ___xNode0;
		NullCheck(L_29);
		int64_t L_30 = Asn1Node_get_ChildNodeCount_mF517D478344A4AF6843BE4319A05D248B6B25FAC(L_29, /*hidden argument*/NULL);
		V_3 = (bool)((((int64_t)(((int64_t)((int64_t)L_28)))) < ((int64_t)L_30))? 1 : 0);
		bool L_31 = V_3;
		if (L_31)
		{
			goto IL_001a;
		}
	}
	{
		return;
	}
}
// System.String LipingShare.LCLib.Asn1Processor.Asn1Node::GetListStr(LipingShare.LCLib.Asn1Processor.Asn1Node,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Asn1Node_GetListStr_m26EB1B44AC47102EC0C7514186C11CE73726014D (Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * __this, Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * ___startNode0, int32_t ___lineLen1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Asn1Node_GetListStr_m26EB1B44AC47102EC0C7514186C11CE73726014D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * V_2 = NULL;
	bool V_3 = false;
	String_t* V_4 = NULL;
	{
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		V_1 = 0;
		goto IL_0032;
	}

IL_000b:
	{
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_0 = __this->get_childNodeList_5();
		int32_t L_1 = V_1;
		NullCheck(L_0);
		RuntimeObject * L_2 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(22 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_0, L_1);
		V_2 = ((Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 *)CastclassClass((RuntimeObject*)L_2, Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16_il2cpp_TypeInfo_var));
		String_t* L_3 = V_0;
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_4 = V_2;
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_5 = ___startNode0;
		int32_t L_6 = ___lineLen1;
		NullCheck(L_4);
		String_t* L_7 = Asn1Node_GetText_mF77FD071F26B7F6A3A879DBCBE6AF5FE2403C204(L_4, L_5, L_6, /*hidden argument*/NULL);
		String_t* L_8 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_3, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0032:
	{
		int32_t L_10 = V_1;
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_11 = __this->get_childNodeList_5();
		NullCheck(L_11);
		int32_t L_12 = VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_11);
		V_3 = (bool)((((int32_t)L_10) < ((int32_t)L_12))? 1 : 0);
		bool L_13 = V_3;
		if (L_13)
		{
			goto IL_000b;
		}
	}
	{
		String_t* L_14 = V_0;
		V_4 = L_14;
		goto IL_0049;
	}

IL_0049:
	{
		String_t* L_15 = V_4;
		return L_15;
	}
}
// System.String LipingShare.LCLib.Asn1Processor.Asn1Node::GetIndentStr(LipingShare.LCLib.Asn1Processor.Asn1Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Asn1Node_GetIndentStr_m7ED765F57686361EF3E9F1C9A48CA6A155B3DCCF (Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * __this, Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * ___startNode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Asn1Node_GetIndentStr_m7ED765F57686361EF3E9F1C9A48CA6A155B3DCCF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int64_t V_1 = 0;
	bool V_2 = false;
	int64_t V_3 = 0;
	bool V_4 = false;
	String_t* V_5 = NULL;
	{
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		V_1 = (((int64_t)((int64_t)0)));
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_0 = ___startNode0;
		V_2 = (bool)((!(((RuntimeObject*)(Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_2 = ___startNode0;
		NullCheck(L_2);
		int64_t L_3 = Asn1Node_get_Deepness_m1525EDB697AA17BA32A10F145DFD9C8246239D6C(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
	}

IL_001b:
	{
		V_3 = (((int64_t)((int64_t)0)));
		goto IL_0033;
	}

IL_0020:
	{
		String_t* L_4 = V_0;
		String_t* L_5 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_4, _stringLiteral088FB1A4AB057F4FCF7D487006499060C7FE5773, /*hidden argument*/NULL);
		V_0 = L_5;
		int64_t L_6 = V_3;
		V_3 = ((int64_t)il2cpp_codegen_add((int64_t)L_6, (int64_t)(((int64_t)((int64_t)1)))));
	}

IL_0033:
	{
		int64_t L_7 = V_3;
		int64_t L_8 = __this->get_deepness_7();
		int64_t L_9 = V_1;
		V_4 = (bool)((((int64_t)L_7) < ((int64_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_8, (int64_t)L_9))))? 1 : 0);
		bool L_10 = V_4;
		if (L_10)
		{
			goto IL_0020;
		}
	}
	{
		String_t* L_11 = V_0;
		V_5 = L_11;
		goto IL_0049;
	}

IL_0049:
	{
		String_t* L_12 = V_5;
		return L_12;
	}
}
// System.Boolean LipingShare.LCLib.Asn1Processor.Asn1Node::GeneralDecode(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Asn1Node_GeneralDecode_m825D2D4ADFFBF202236418DA9CDD88C05791EA5C (Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * __this, Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___xdata0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Asn1Node_GeneralDecode_m825D2D4ADFFBF202236418DA9CDD88C05791EA5C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	int64_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	int32_t G_B7_0 = 0;
	int32_t G_B11_0 = 0;
	{
		V_0 = (bool)0;
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_0 = ___xdata0;
		NullCheck(L_0);
		int64_t L_1 = VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Length() */, L_0);
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_2 = ___xdata0;
		NullCheck(L_2);
		int64_t L_3 = VirtFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_2);
		V_1 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_1, (int64_t)L_3));
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_4 = ___xdata0;
		NullCheck(L_4);
		int32_t L_5 = VirtFuncInvoker0< int32_t >::Invoke(26 /* System.Int32 System.IO.Stream::ReadByte() */, L_4);
		__this->set_tag_0((uint8_t)(((int32_t)((uint8_t)L_5))));
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_6 = ___xdata0;
		NullCheck(L_6);
		int64_t L_7 = VirtFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_6);
		V_2 = L_7;
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_8 = ___xdata0;
		bool* L_9 = __this->get_address_of_isIndefiniteLength_11();
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_tBFEA56D2C3543BF68547786BAE0EC50B2DEE0886_il2cpp_TypeInfo_var);
		int64_t L_10 = Asn1Util_DerLengthDecode_m196AE4433F4364245072F4ADFD95BB1D08DB2E5B(L_8, (bool*)L_9, /*hidden argument*/NULL);
		__this->set_dataLength_2(L_10);
		int64_t L_11 = __this->get_dataLength_2();
		V_4 = (bool)((((int64_t)L_11) < ((int64_t)(((int64_t)((int64_t)0)))))? 1 : 0);
		bool L_12 = V_4;
		if (!L_12)
		{
			goto IL_004f;
		}
	}
	{
		bool L_13 = V_0;
		V_5 = L_13;
		goto IL_0161;
	}

IL_004f:
	{
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_14 = ___xdata0;
		NullCheck(L_14);
		int64_t L_15 = VirtFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_14);
		V_3 = L_15;
		int64_t L_16 = V_3;
		int64_t L_17 = V_2;
		__this->set_lengthFieldBytes_3(((int64_t)il2cpp_codegen_subtract((int64_t)L_16, (int64_t)L_17)));
		int64_t L_18 = V_1;
		int64_t L_19 = __this->get_dataLength_2();
		int64_t L_20 = __this->get_lengthFieldBytes_3();
		V_6 = (bool)((((int64_t)L_18) < ((int64_t)((int64_t)il2cpp_codegen_add((int64_t)((int64_t)il2cpp_codegen_add((int64_t)L_19, (int64_t)(((int64_t)((int64_t)1))))), (int64_t)L_20))))? 1 : 0);
		bool L_21 = V_6;
		if (!L_21)
		{
			goto IL_0081;
		}
	}
	{
		bool L_22 = V_0;
		V_5 = L_22;
		goto IL_0161;
	}

IL_0081:
	{
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_23 = Asn1Node_get_ParentNode_mAD267B17EFB0D01BAAD1120937305342C2412F1A(__this, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_009c;
		}
	}
	{
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_24 = Asn1Node_get_ParentNode_mAD267B17EFB0D01BAAD1120937305342C2412F1A(__this, /*hidden argument*/NULL);
		NullCheck(L_24);
		uint8_t L_25 = L_24->get_tag_0();
		G_B7_0 = ((((int32_t)((int32_t)((int32_t)L_25&(int32_t)((int32_t)32)))) == ((int32_t)0))? 1 : 0);
		goto IL_009d;
	}

IL_009c:
	{
		G_B7_0 = 1;
	}

IL_009d:
	{
		V_7 = (bool)G_B7_0;
		bool L_26 = V_7;
		if (!L_26)
		{
			goto IL_00cf;
		}
	}
	{
		uint8_t L_27 = __this->get_tag_0();
		if ((((int32_t)((int32_t)((int32_t)L_27&(int32_t)((int32_t)31)))) <= ((int32_t)0)))
		{
			goto IL_00bf;
		}
	}
	{
		uint8_t L_28 = __this->get_tag_0();
		G_B11_0 = ((((int32_t)((int32_t)((int32_t)L_28&(int32_t)((int32_t)31)))) > ((int32_t)((int32_t)30)))? 1 : 0);
		goto IL_00c0;
	}

IL_00bf:
	{
		G_B11_0 = 1;
	}

IL_00c0:
	{
		V_8 = (bool)G_B11_0;
		bool L_29 = V_8;
		if (!L_29)
		{
			goto IL_00ce;
		}
	}
	{
		bool L_30 = V_0;
		V_5 = L_30;
		goto IL_0161;
	}

IL_00ce:
	{
	}

IL_00cf:
	{
		uint8_t L_31 = __this->get_tag_0();
		V_9 = (bool)((((int32_t)L_31) == ((int32_t)3))? 1 : 0);
		bool L_32 = V_9;
		if (!L_32)
		{
			goto IL_0131;
		}
	}
	{
		int64_t L_33 = __this->get_dataLength_2();
		V_10 = (bool)((((int64_t)L_33) < ((int64_t)(((int64_t)((int64_t)1)))))? 1 : 0);
		bool L_34 = V_10;
		if (!L_34)
		{
			goto IL_00f4;
		}
	}
	{
		bool L_35 = V_0;
		V_5 = L_35;
		goto IL_0161;
	}

IL_00f4:
	{
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_36 = ___xdata0;
		NullCheck(L_36);
		int32_t L_37 = VirtFuncInvoker0< int32_t >::Invoke(26 /* System.Int32 System.IO.Stream::ReadByte() */, L_36);
		__this->set_unusedBits_6((uint8_t)(((int32_t)((uint8_t)L_37))));
		int64_t L_38 = __this->get_dataLength_2();
		if ((int64_t)(((int64_t)il2cpp_codegen_subtract((int64_t)L_38, (int64_t)(((int64_t)((int64_t)1)))))) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Asn1Node_GeneralDecode_m825D2D4ADFFBF202236418DA9CDD88C05791EA5C_RuntimeMethod_var);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_39 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)(((intptr_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_38, (int64_t)(((int64_t)((int64_t)1))))))));
		__this->set_data_4(L_39);
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_40 = ___xdata0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_41 = __this->get_data_4();
		int64_t L_42 = __this->get_dataLength_2();
		NullCheck(L_40);
		VirtFuncInvoker3< int32_t, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(25 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_40, L_41, 0, (((int32_t)((int32_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_42, (int64_t)(((int64_t)((int64_t)1)))))))));
		goto IL_015a;
	}

IL_0131:
	{
		int64_t L_43 = __this->get_dataLength_2();
		if ((int64_t)(L_43) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Asn1Node_GeneralDecode_m825D2D4ADFFBF202236418DA9CDD88C05791EA5C_RuntimeMethod_var);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_44 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)(((intptr_t)L_43)));
		__this->set_data_4(L_44);
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_45 = ___xdata0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_46 = __this->get_data_4();
		int64_t L_47 = __this->get_dataLength_2();
		NullCheck(L_45);
		VirtFuncInvoker3< int32_t, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(25 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_45, L_46, 0, (((int32_t)((int32_t)L_47))));
	}

IL_015a:
	{
		V_0 = (bool)1;
		bool L_48 = V_0;
		V_5 = L_48;
		goto IL_0161;
	}

IL_0161:
	{
		bool L_49 = V_5;
		return L_49;
	}
}
// System.Boolean LipingShare.LCLib.Asn1Processor.Asn1Node::ListDecode(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Asn1Node_ListDecode_m66D5F28DAEC3F743756FB08535EC484FB8A66A82 (Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * __this, Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___xdata0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Asn1Node_ListDecode_m66D5F28DAEC3F743756FB08535EC484FB8A66A82_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	int64_t V_3 = 0;
	int64_t V_4 = 0;
	int64_t V_5 = 0;
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * V_6 = NULL;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_7 = NULL;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * V_13 = NULL;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 4);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	int32_t G_B4_0 = 0;
	{
		V_0 = (bool)0;
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_0 = ___xdata0;
		NullCheck(L_0);
		int64_t L_1 = VirtFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_0);
		V_1 = L_1;
	}

IL_000a:
	try
	{ // begin try (depth: 1)
		{
			Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_2 = ___xdata0;
			NullCheck(L_2);
			int64_t L_3 = VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Length() */, L_2);
			Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_4 = ___xdata0;
			NullCheck(L_4);
			int64_t L_5 = VirtFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_4);
			V_2 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_3, (int64_t)L_5));
			Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_6 = ___xdata0;
			NullCheck(L_6);
			int32_t L_7 = VirtFuncInvoker0< int32_t >::Invoke(26 /* System.Int32 System.IO.Stream::ReadByte() */, L_6);
			__this->set_tag_0((uint8_t)(((int32_t)((uint8_t)L_7))));
			Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_8 = ___xdata0;
			NullCheck(L_8);
			int64_t L_9 = VirtFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_8);
			V_3 = L_9;
			Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_10 = ___xdata0;
			bool* L_11 = __this->get_address_of_isIndefiniteLength_11();
			IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_tBFEA56D2C3543BF68547786BAE0EC50B2DEE0886_il2cpp_TypeInfo_var);
			int64_t L_12 = Asn1Util_DerLengthDecode_m196AE4433F4364245072F4ADFD95BB1D08DB2E5B(L_10, (bool*)L_11, /*hidden argument*/NULL);
			__this->set_dataLength_2(L_12);
			int64_t L_13 = __this->get_dataLength_2();
			if ((((int64_t)L_13) < ((int64_t)(((int64_t)((int64_t)0))))))
			{
				goto IL_0054;
			}
		}

IL_0049:
		{
			int64_t L_14 = V_2;
			int64_t L_15 = __this->get_dataLength_2();
			G_B4_0 = ((((int64_t)L_14) < ((int64_t)L_15))? 1 : 0);
			goto IL_0055;
		}

IL_0054:
		{
			G_B4_0 = 1;
		}

IL_0055:
		{
			V_8 = (bool)G_B4_0;
			bool L_16 = V_8;
			if (!L_16)
			{
				goto IL_0064;
			}
		}

IL_005b:
		{
			bool L_17 = V_0;
			V_9 = L_17;
			IL2CPP_LEAVE(0x1CE, FINALLY_01ab);
		}

IL_0064:
		{
			Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_18 = ___xdata0;
			NullCheck(L_18);
			int64_t L_19 = VirtFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_18);
			V_4 = L_19;
			int64_t L_20 = V_4;
			int64_t L_21 = V_3;
			__this->set_lengthFieldBytes_3(((int64_t)il2cpp_codegen_subtract((int64_t)L_20, (int64_t)L_21)));
			int64_t L_22 = __this->get_dataOffset_1();
			int64_t L_23 = __this->get_lengthFieldBytes_3();
			V_5 = ((int64_t)il2cpp_codegen_add((int64_t)((int64_t)il2cpp_codegen_add((int64_t)L_22, (int64_t)(((int64_t)((int64_t)1))))), (int64_t)L_23));
			uint8_t L_24 = __this->get_tag_0();
			V_10 = (bool)((((int32_t)L_24) == ((int32_t)3))? 1 : 0);
			bool L_25 = V_10;
			if (!L_25)
			{
				goto IL_00bc;
			}
		}

IL_0097:
		{
			Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_26 = ___xdata0;
			NullCheck(L_26);
			int32_t L_27 = VirtFuncInvoker0< int32_t >::Invoke(26 /* System.Int32 System.IO.Stream::ReadByte() */, L_26);
			__this->set_unusedBits_6((uint8_t)(((int32_t)((uint8_t)L_27))));
			int64_t L_28 = __this->get_dataLength_2();
			__this->set_dataLength_2(((int64_t)il2cpp_codegen_subtract((int64_t)L_28, (int64_t)(((int64_t)((int64_t)1))))));
			int64_t L_29 = V_5;
			V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_29, (int64_t)(((int64_t)((int64_t)1)))));
		}

IL_00bc:
		{
			int64_t L_30 = __this->get_dataLength_2();
			V_11 = (bool)((((int32_t)((((int64_t)L_30) > ((int64_t)(((int64_t)((int64_t)0)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			bool L_31 = V_11;
			if (!L_31)
			{
				goto IL_00d7;
			}
		}

IL_00cf:
		{
			bool L_32 = V_0;
			V_9 = L_32;
			IL2CPP_LEAVE(0x1CE, FINALLY_01ab);
		}

IL_00d7:
		{
			int64_t L_33 = __this->get_dataLength_2();
			MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * L_34 = (MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C *)il2cpp_codegen_object_new(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C_il2cpp_TypeInfo_var);
			MemoryStream__ctor_m78689C82DED9ACE5022B7EABF28F17FF318DF2AA(L_34, (((int32_t)((int32_t)L_33))), /*hidden argument*/NULL);
			V_6 = L_34;
			int64_t L_35 = __this->get_dataLength_2();
			if ((int64_t)(L_35) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Asn1Node_ListDecode_m66D5F28DAEC3F743756FB08535EC484FB8A66A82_RuntimeMethod_var);
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_36 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)(((intptr_t)L_35)));
			V_7 = L_36;
			Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_37 = ___xdata0;
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_38 = V_7;
			int64_t L_39 = __this->get_dataLength_2();
			NullCheck(L_37);
			VirtFuncInvoker3< int32_t, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(25 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_37, L_38, 0, (((int32_t)((int32_t)L_39))));
			uint8_t L_40 = __this->get_tag_0();
			V_12 = (bool)((((int32_t)L_40) == ((int32_t)3))? 1 : 0);
			bool L_41 = V_12;
			if (!L_41)
			{
				goto IL_0122;
			}
		}

IL_0113:
		{
			int64_t L_42 = __this->get_dataLength_2();
			__this->set_dataLength_2(((int64_t)il2cpp_codegen_add((int64_t)L_42, (int64_t)(((int64_t)((int64_t)1))))));
		}

IL_0122:
		{
			Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_43 = V_6;
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_44 = V_7;
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_45 = V_7;
			NullCheck(L_45);
			NullCheck(L_43);
			VirtActionInvoker3< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(27 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_43, L_44, 0, (((int32_t)((int32_t)(((RuntimeArray*)L_45)->max_length)))));
			Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_46 = V_6;
			NullCheck(L_46);
			VirtActionInvoker1< int64_t >::Invoke(12 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_46, (((int64_t)((int64_t)0))));
			goto IL_0190;
		}

IL_013d:
		{
			int64_t L_47 = V_5;
			Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_48 = (Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 *)il2cpp_codegen_object_new(Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16_il2cpp_TypeInfo_var);
			Asn1Node__ctor_m3F16F03AE395841D39A0A284561028C2229BF86F(L_48, __this, L_47, /*hidden argument*/NULL);
			V_13 = L_48;
			Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_49 = V_13;
			bool L_50 = __this->get_parseEncapsulatedData_12();
			NullCheck(L_49);
			L_49->set_parseEncapsulatedData_12(L_50);
			Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_51 = V_6;
			NullCheck(L_51);
			int64_t L_52 = VirtFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_51);
			V_3 = L_52;
			Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_53 = V_13;
			Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_54 = V_6;
			NullCheck(L_53);
			bool L_55 = Asn1Node_InternalLoadData_m67F1F97CBB617A2FB5BB3D00089E0BCFBD716677(L_53, L_54, /*hidden argument*/NULL);
			V_14 = (bool)((((int32_t)L_55) == ((int32_t)0))? 1 : 0);
			bool L_56 = V_14;
			if (!L_56)
			{
				goto IL_0174;
			}
		}

IL_016f:
		{
			bool L_57 = V_0;
			V_9 = L_57;
			IL2CPP_LEAVE(0x1CE, FINALLY_01ab);
		}

IL_0174:
		{
			Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_58 = V_13;
			Asn1Node_AddChild_m5F099C6C83A61B22B380F0F99A4E743B3FBB00AC(__this, L_58, /*hidden argument*/NULL);
			Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_59 = V_6;
			NullCheck(L_59);
			int64_t L_60 = VirtFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_59);
			V_4 = L_60;
			int64_t L_61 = V_5;
			int64_t L_62 = V_4;
			int64_t L_63 = V_3;
			V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_61, (int64_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_62, (int64_t)L_63))));
		}

IL_0190:
		{
			Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_64 = V_6;
			NullCheck(L_64);
			int64_t L_65 = VirtFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_64);
			Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_66 = V_6;
			NullCheck(L_66);
			int64_t L_67 = VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Length() */, L_66);
			V_15 = (bool)((((int64_t)L_65) < ((int64_t)L_67))? 1 : 0);
			bool L_68 = V_15;
			if (L_68)
			{
				goto IL_013d;
			}
		}

IL_01a6:
		{
			V_0 = (bool)1;
			IL2CPP_LEAVE(0x1C9, FINALLY_01ab);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_01ab;
	}

FINALLY_01ab:
	{ // begin finally (depth: 1)
		{
			bool L_69 = V_0;
			V_16 = (bool)((((int32_t)L_69) == ((int32_t)0))? 1 : 0);
			bool L_70 = V_16;
			if (!L_70)
			{
				goto IL_01c7;
			}
		}

IL_01b6:
		{
			Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_71 = ___xdata0;
			int64_t L_72 = V_1;
			NullCheck(L_71);
			VirtActionInvoker1< int64_t >::Invoke(12 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_71, L_72);
			Asn1Node_ClearAll_mB85307804DCBFDC3A9ADD9F3DB631D54A41A68A1(__this, /*hidden argument*/NULL);
		}

IL_01c7:
		{
			IL2CPP_END_FINALLY(427)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(427)
	{
		IL2CPP_JUMP_TBL(0x1CE, IL_01ce)
		IL2CPP_JUMP_TBL(0x1C9, IL_01c9)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_01c9:
	{
		bool L_73 = V_0;
		V_9 = L_73;
		goto IL_01ce;
	}

IL_01ce:
	{
		bool L_74 = V_9;
		return L_74;
	}
}
// System.Boolean LipingShare.LCLib.Asn1Processor.Asn1Node::InternalLoadData(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Asn1Node_InternalLoadData_m67F1F97CBB617A2FB5BB3D00089E0BCFBD716677 (Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * __this, Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___xdata0, const RuntimeMethod* method)
{
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	int64_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	int32_t G_B18_0 = 0;
	int32_t G_B20_0 = 0;
	int32_t G_B22_0 = 0;
	{
		V_0 = (bool)1;
		Asn1Node_ClearAll_mB85307804DCBFDC3A9ADD9F3DB631D54A41A68A1(__this, /*hidden argument*/NULL);
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_0 = ___xdata0;
		NullCheck(L_0);
		int64_t L_1 = VirtFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_0);
		V_2 = L_1;
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_2 = ___xdata0;
		NullCheck(L_2);
		int32_t L_3 = VirtFuncInvoker0< int32_t >::Invoke(26 /* System.Int32 System.IO.Stream::ReadByte() */, L_2);
		V_1 = (uint8_t)(((int32_t)((uint8_t)L_3)));
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_4 = ___xdata0;
		int64_t L_5 = V_2;
		NullCheck(L_4);
		VirtActionInvoker1< int64_t >::Invoke(12 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_4, L_5);
		uint8_t L_6 = V_1;
		V_3 = ((int32_t)((int32_t)L_6&(int32_t)((int32_t)31)));
		uint8_t L_7 = V_1;
		if (((int32_t)((int32_t)L_7&(int32_t)((int32_t)32))))
		{
			goto IL_0084;
		}
	}
	{
		bool L_8 = __this->get_parseEncapsulatedData_12();
		if (!L_8)
		{
			goto IL_0081;
		}
	}
	{
		int32_t L_9 = V_3;
		if ((((int32_t)L_9) == ((int32_t)3)))
		{
			goto IL_007e;
		}
	}
	{
		int32_t L_10 = V_3;
		if ((((int32_t)L_10) == ((int32_t)8)))
		{
			goto IL_007e;
		}
	}
	{
		int32_t L_11 = V_3;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)27))))
		{
			goto IL_007e;
		}
	}
	{
		int32_t L_12 = V_3;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)24))))
		{
			goto IL_007e;
		}
	}
	{
		int32_t L_13 = V_3;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)25))))
		{
			goto IL_007e;
		}
	}
	{
		int32_t L_14 = V_3;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)22))))
		{
			goto IL_007e;
		}
	}
	{
		int32_t L_15 = V_3;
		if ((((int32_t)L_15) == ((int32_t)4)))
		{
			goto IL_007e;
		}
	}
	{
		int32_t L_16 = V_3;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)19))))
		{
			goto IL_007e;
		}
	}
	{
		int32_t L_17 = V_3;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)16))))
		{
			goto IL_007e;
		}
	}
	{
		int32_t L_18 = V_3;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)17))))
		{
			goto IL_007e;
		}
	}
	{
		int32_t L_19 = V_3;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)20))))
		{
			goto IL_007e;
		}
	}
	{
		int32_t L_20 = V_3;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)28))))
		{
			goto IL_007e;
		}
	}
	{
		int32_t L_21 = V_3;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)12))))
		{
			goto IL_007e;
		}
	}
	{
		int32_t L_22 = V_3;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)21))))
		{
			goto IL_007e;
		}
	}
	{
		int32_t L_23 = V_3;
		G_B18_0 = ((((int32_t)L_23) == ((int32_t)((int32_t)26)))? 1 : 0);
		goto IL_007f;
	}

IL_007e:
	{
		G_B18_0 = 1;
	}

IL_007f:
	{
		G_B20_0 = G_B18_0;
		goto IL_0082;
	}

IL_0081:
	{
		G_B20_0 = 0;
	}

IL_0082:
	{
		G_B22_0 = G_B20_0;
		goto IL_0085;
	}

IL_0084:
	{
		G_B22_0 = 1;
	}

IL_0085:
	{
		V_4 = (bool)G_B22_0;
		bool L_24 = V_4;
		if (!L_24)
		{
			goto IL_00b5;
		}
	}
	{
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_25 = ___xdata0;
		bool L_26 = Asn1Node_ListDecode_m66D5F28DAEC3F743756FB08535EC484FB8A66A82(__this, L_25, /*hidden argument*/NULL);
		V_5 = (bool)((((int32_t)L_26) == ((int32_t)0))? 1 : 0);
		bool L_27 = V_5;
		if (!L_27)
		{
			goto IL_00b2;
		}
	}
	{
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_28 = ___xdata0;
		bool L_29 = Asn1Node_GeneralDecode_m825D2D4ADFFBF202236418DA9CDD88C05791EA5C(__this, L_28, /*hidden argument*/NULL);
		V_6 = (bool)((((int32_t)L_29) == ((int32_t)0))? 1 : 0);
		bool L_30 = V_6;
		if (!L_30)
		{
			goto IL_00b1;
		}
	}
	{
		V_0 = (bool)0;
	}

IL_00b1:
	{
	}

IL_00b2:
	{
		goto IL_00c9;
	}

IL_00b5:
	{
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_31 = ___xdata0;
		bool L_32 = Asn1Node_GeneralDecode_m825D2D4ADFFBF202236418DA9CDD88C05791EA5C(__this, L_31, /*hidden argument*/NULL);
		V_7 = (bool)((((int32_t)L_32) == ((int32_t)0))? 1 : 0);
		bool L_33 = V_7;
		if (!L_33)
		{
			goto IL_00c8;
		}
	}
	{
		V_0 = (bool)0;
	}

IL_00c8:
	{
	}

IL_00c9:
	{
		bool L_34 = V_0;
		V_8 = L_34;
		goto IL_00ce;
	}

IL_00ce:
	{
		bool L_35 = V_8;
		return L_35;
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
// System.Void LipingShare.LCLib.Asn1Processor.Asn1Parser::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Asn1Parser__ctor_mFFC9A3372F766DBBEE823423DD2D6F9730C84E50 (Asn1Parser_t6EAA9B28705029F260D90731751E990EF3848620 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Asn1Parser__ctor_mFFC9A3372F766DBBEE823423DD2D6F9730C84E50_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_0 = (Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 *)il2cpp_codegen_object_new(Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16_il2cpp_TypeInfo_var);
		Asn1Node__ctor_mDF96FC0D52B88A7A44E6243ECA069B59C75035FC(L_0, /*hidden argument*/NULL);
		__this->set_rootNode_1(L_0);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LipingShare.LCLib.Asn1Processor.Asn1Parser::LoadData(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Asn1Parser_LoadData_mF8B6E7723F02588C758AFF9A34C766B8B4FB03E7 (Asn1Parser_t6EAA9B28705029F260D90731751E990EF3848620 * __this, Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___stream0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Asn1Parser_LoadData_mF8B6E7723F02588C758AFF9A34C766B8B4FB03E7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_0 = ___stream0;
		NullCheck(L_0);
		VirtActionInvoker1< int64_t >::Invoke(12 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_0, (((int64_t)((int64_t)0))));
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_1 = __this->get_rootNode_1();
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_2 = ___stream0;
		NullCheck(L_1);
		bool L_3 = Asn1Node_LoadData_m8DF7BDE6D2C3D949E5240B6095C0448896A27703(L_1, L_2, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0029;
		}
	}
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_5 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_5, _stringLiteral3BCB8C740C1F7F5BBC1CD34FD40C2B30A466BB77, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, Asn1Parser_LoadData_mF8B6E7723F02588C758AFF9A34C766B8B4FB03E7_RuntimeMethod_var);
	}

IL_0029:
	{
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_6 = ___stream0;
		NullCheck(L_6);
		int64_t L_7 = VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Length() */, L_6);
		if ((int64_t)(L_7) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Asn1Parser_LoadData_mF8B6E7723F02588C758AFF9A34C766B8B4FB03E7_RuntimeMethod_var);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_8 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)(((intptr_t)L_7)));
		__this->set_rawData_0(L_8);
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_9 = ___stream0;
		NullCheck(L_9);
		VirtActionInvoker1< int64_t >::Invoke(12 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_9, (((int64_t)((int64_t)0))));
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_10 = ___stream0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_11 = __this->get_rawData_0();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_12 = __this->get_rawData_0();
		NullCheck(L_12);
		NullCheck(L_10);
		VirtFuncInvoker3< int32_t, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(25 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_10, L_11, 0, (((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))));
		return;
	}
}
// LipingShare.LCLib.Asn1Processor.Asn1Node LipingShare.LCLib.Asn1Processor.Asn1Parser::get_RootNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * Asn1Parser_get_RootNode_mA653B5BBF9063F293E981D45AF3FC82E4E4DFD43 (Asn1Parser_t6EAA9B28705029F260D90731751E990EF3848620 * __this, const RuntimeMethod* method)
{
	Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * V_0 = NULL;
	{
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_0 = __this->get_rootNode_1();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_1 = V_0;
		return L_1;
	}
}
// System.String LipingShare.LCLib.Asn1Processor.Asn1Parser::GetNodeTextHeader(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Asn1Parser_GetNodeTextHeader_m6272D8BEA402890545167E9C92E554A97B52292A (int32_t ___lineLen0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Asn1Parser_GetNodeTextHeader_m6272D8BEA402890545167E9C92E554A97B52292A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)0);
		String_t* L_1 = String_Format_mA3AC3FE7B23D97F3A5BAA082D25B0E01B341A865(_stringLiteralC8FE5895971742042551C048D3575DC18F1A5C48, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		int32_t L_3 = ___lineLen0;
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_tBFEA56D2C3543BF68547786BAE0EC50B2DEE0886_il2cpp_TypeInfo_var);
		String_t* L_4 = Asn1Util_GenStr_m03ED7C1092BBF4EF64FEB70FAE9C49868CCBE7E6(((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)((int32_t)10))), ((int32_t)61), /*hidden argument*/NULL);
		String_t* L_5 = String_Concat_mDD2E38332DED3A8C088D38D78A0E0BEB5091DA64(L_2, _stringLiteral504D93E89F018FE90F5D6BD71734A5D395BD0D17, L_4, _stringLiteralBA8AB5A0280B953AA97435FF8946CBCBB2755A27, /*hidden argument*/NULL);
		V_0 = L_5;
		String_t* L_6 = V_0;
		V_1 = L_6;
		goto IL_0032;
	}

IL_0032:
	{
		String_t* L_7 = V_1;
		return L_7;
	}
}
// System.String LipingShare.LCLib.Asn1Processor.Asn1Parser::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Asn1Parser_ToString_m9EE1A8097127713C04B2BB0A0DBF275E4C5E7B19 (Asn1Parser_t6EAA9B28705029F260D90731751E990EF3848620 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_0 = __this->get_rootNode_1();
		String_t* L_1 = Asn1Parser_GetNodeText_mC9A7B48ECAE29610760E2AA05778327A7FDF398A(L_0, ((int32_t)100), /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0011;
	}

IL_0011:
	{
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.String LipingShare.LCLib.Asn1Processor.Asn1Parser::GetNodeText(LipingShare.LCLib.Asn1Processor.Asn1Node,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Asn1Parser_GetNodeText_mC9A7B48ECAE29610760E2AA05778327A7FDF398A (Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * ___node0, int32_t ___lineLen1, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		int32_t L_0 = ___lineLen1;
		String_t* L_1 = Asn1Parser_GetNodeTextHeader_m6272D8BEA402890545167E9C92E554A97B52292A(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_3 = ___node0;
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_4 = ___node0;
		int32_t L_5 = ___lineLen1;
		NullCheck(L_3);
		String_t* L_6 = Asn1Node_GetText_mF77FD071F26B7F6A3A879DBCBE6AF5FE2403C204(L_3, L_4, L_5, /*hidden argument*/NULL);
		String_t* L_7 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_2, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		String_t* L_8 = V_0;
		V_1 = L_8;
		goto IL_001b;
	}

IL_001b:
	{
		String_t* L_9 = V_1;
		return L_9;
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
// System.String LipingShare.LCLib.Asn1Processor.Asn1Util::FormatString(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Asn1Util_FormatString_mE0F0FECC3332BFD9488F697A0643920B20B0B821 (String_t* ___inStr0, int32_t ___lineLen1, int32_t ___groupLen2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Asn1Util_FormatString_mE0F0FECC3332BFD9488F697A0643920B20B0B821_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	String_t* V_5 = NULL;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	String_t* V_9 = NULL;
	int32_t G_B4_0 = 0;
	{
		String_t* L_0 = ___inStr0;
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_0, /*hidden argument*/NULL);
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_2 = (CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)SZArrayNew(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)2)));
		V_0 = L_2;
		V_2 = 0;
		V_3 = 0;
		V_4 = 0;
		V_1 = 0;
		goto IL_007b;
	}

IL_001a:
	{
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_3 = V_0;
		int32_t L_4 = V_2;
		int32_t L_5 = L_4;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
		String_t* L_6 = ___inStr0;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		Il2CppChar L_8 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_6, L_7, /*hidden argument*/NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (Il2CppChar)L_8);
		int32_t L_9 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
		int32_t L_10 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
		int32_t L_11 = V_4;
		int32_t L_12 = ___groupLen2;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_13 = ___groupLen2;
		G_B4_0 = ((((int32_t)L_13) > ((int32_t)0))? 1 : 0);
		goto IL_003f;
	}

IL_003e:
	{
		G_B4_0 = 0;
	}

IL_003f:
	{
		V_6 = (bool)G_B4_0;
		bool L_14 = V_6;
		if (!L_14)
		{
			goto IL_0053;
		}
	}
	{
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_15 = V_0;
		int32_t L_16 = V_2;
		int32_t L_17 = L_16;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (Il2CppChar)((int32_t)32));
		V_4 = 0;
	}

IL_0053:
	{
		int32_t L_18 = V_3;
		int32_t L_19 = ___lineLen1;
		V_7 = (bool)((((int32_t)((((int32_t)L_18) < ((int32_t)L_19))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_20 = V_7;
		if (!L_20)
		{
			goto IL_0076;
		}
	}
	{
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_21 = V_0;
		int32_t L_22 = V_2;
		int32_t L_23 = L_22;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (Il2CppChar)((int32_t)13));
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_24 = V_0;
		int32_t L_25 = V_2;
		int32_t L_26 = L_25;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_26), (Il2CppChar)((int32_t)10));
		V_3 = 0;
	}

IL_0076:
	{
		int32_t L_27 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_007b:
	{
		int32_t L_28 = V_1;
		String_t* L_29 = ___inStr0;
		NullCheck(L_29);
		int32_t L_30 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_29, /*hidden argument*/NULL);
		V_8 = (bool)((((int32_t)L_28) < ((int32_t)L_30))? 1 : 0);
		bool L_31 = V_8;
		if (L_31)
		{
			goto IL_001a;
		}
	}
	{
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_32 = V_0;
		String_t* L_33 = String_CreateString_m394C06654854ADD4C51FF957BE0CC72EF52BAA96(NULL, L_32, /*hidden argument*/NULL);
		V_5 = L_33;
		String_t* L_34 = V_5;
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_35 = (CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)SZArrayNew(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2_il2cpp_TypeInfo_var, (uint32_t)1);
		NullCheck(L_34);
		String_t* L_36 = String_TrimEnd_m8D4905B71A4AEBF9D0BC36C6003FC9A5AD630403(L_34, L_35, /*hidden argument*/NULL);
		V_5 = L_36;
		String_t* L_37 = V_5;
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_38 = (CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)SZArrayNew(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_39 = L_38;
		NullCheck(L_39);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)10));
		NullCheck(L_37);
		String_t* L_40 = String_TrimEnd_m8D4905B71A4AEBF9D0BC36C6003FC9A5AD630403(L_37, L_39, /*hidden argument*/NULL);
		V_5 = L_40;
		String_t* L_41 = V_5;
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_42 = (CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)SZArrayNew(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_43 = L_42;
		NullCheck(L_43);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)13));
		NullCheck(L_41);
		String_t* L_44 = String_TrimEnd_m8D4905B71A4AEBF9D0BC36C6003FC9A5AD630403(L_41, L_43, /*hidden argument*/NULL);
		V_5 = L_44;
		String_t* L_45 = V_5;
		V_9 = L_45;
		goto IL_00cf;
	}

IL_00cf:
	{
		String_t* L_46 = V_9;
		return L_46;
	}
}
// System.String LipingShare.LCLib.Asn1Processor.Asn1Util::GenStr(System.Int32,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Asn1Util_GenStr_m03ED7C1092BBF4EF64FEB70FAE9C49868CCBE7E6 (int32_t ___len0, Il2CppChar ___xch1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Asn1Util_GenStr_m03ED7C1092BBF4EF64FEB70FAE9C49868CCBE7E6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	String_t* V_3 = NULL;
	{
		int32_t L_0 = ___len0;
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_1 = (CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)SZArrayNew(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		V_1 = 0;
		goto IL_0016;
	}

IL_000c:
	{
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_2 = V_0;
		int32_t L_3 = V_1;
		Il2CppChar L_4 = ___xch1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (Il2CppChar)L_4);
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_0016:
	{
		int32_t L_6 = V_1;
		int32_t L_7 = ___len0;
		V_2 = (bool)((((int32_t)L_6) < ((int32_t)L_7))? 1 : 0);
		bool L_8 = V_2;
		if (L_8)
		{
			goto IL_000c;
		}
	}
	{
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_9 = V_0;
		String_t* L_10 = String_CreateString_m394C06654854ADD4C51FF957BE0CC72EF52BAA96(NULL, L_9, /*hidden argument*/NULL);
		V_3 = L_10;
		goto IL_0027;
	}

IL_0027:
	{
		String_t* L_11 = V_3;
		return L_11;
	}
}
// System.Int64 LipingShare.LCLib.Asn1Processor.Asn1Util::BytesToLong(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Asn1Util_BytesToLong_m9D73FD300DA3D8037E90E580318E1F9E4EA5FDFF (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___bytes0, const RuntimeMethod* method)
{
	int64_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	int64_t V_3 = 0;
	{
		V_0 = (((int64_t)((int64_t)0)));
		V_1 = 0;
		goto IL_0017;
	}

IL_0008:
	{
		int64_t L_0 = V_0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = ___bytes0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint8_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = ((int64_t)((int64_t)((int64_t)((int64_t)L_0<<(int32_t)8))|(int64_t)(((int64_t)((uint64_t)L_4)))));
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_0017:
	{
		int32_t L_6 = V_1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_7 = ___bytes0;
		NullCheck(L_7);
		V_2 = (bool)((((int32_t)L_6) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length))))))? 1 : 0);
		bool L_8 = V_2;
		if (L_8)
		{
			goto IL_0008;
		}
	}
	{
		int64_t L_9 = V_0;
		V_3 = L_9;
		goto IL_0025;
	}

IL_0025:
	{
		int64_t L_10 = V_3;
		return L_10;
	}
}
// System.String LipingShare.LCLib.Asn1Processor.Asn1Util::BytesToString(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Asn1Util_BytesToString_m1887FCB8C42067024ABECD8AADB82FE9C10CB2A3 (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___bytes0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Asn1Util_BytesToString_m1887FCB8C42067024ABECD8AADB82FE9C10CB2A3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* V_1 = NULL;
	bool V_2 = false;
	String_t* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B3_0 = 0;
	{
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___bytes0;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = ___bytes0;
		NullCheck(L_1);
		G_B3_0 = ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))) < ((int32_t)1))? 1 : 0);
		goto IL_0013;
	}

IL_0012:
	{
		G_B3_0 = 1;
	}

IL_0013:
	{
		V_2 = (bool)G_B3_0;
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		String_t* L_3 = V_0;
		V_3 = L_3;
		goto IL_0075;
	}

IL_001b:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_4 = ___bytes0;
		NullCheck(L_4);
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_5 = (CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)SZArrayNew(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2_il2cpp_TypeInfo_var, (uint32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)))));
		V_1 = L_5;
		V_4 = 0;
		V_5 = 0;
		goto IL_0050;
	}

IL_002c:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_6 = ___bytes0;
		int32_t L_7 = V_4;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		uint8_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_6 = (bool)((!(((uint32_t)L_9) <= ((uint32_t)0)))? 1 : 0);
		bool L_10 = V_6;
		if (!L_10)
		{
			goto IL_0049;
		}
	}
	{
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_11 = V_1;
		int32_t L_12 = V_5;
		int32_t L_13 = L_12;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_14 = ___bytes0;
		int32_t L_15 = V_4;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		uint8_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (Il2CppChar)L_17);
	}

IL_0049:
	{
		int32_t L_18 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_0050:
	{
		int32_t L_19 = V_4;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_20 = ___bytes0;
		NullCheck(L_20);
		V_7 = (bool)((((int32_t)L_19) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length))))))? 1 : 0);
		bool L_21 = V_7;
		if (L_21)
		{
			goto IL_002c;
		}
	}
	{
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_22 = V_1;
		String_t* L_23 = String_CreateString_m394C06654854ADD4C51FF957BE0CC72EF52BAA96(NULL, L_22, /*hidden argument*/NULL);
		V_0 = L_23;
		String_t* L_24 = V_0;
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_25 = (CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)SZArrayNew(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2_il2cpp_TypeInfo_var, (uint32_t)1);
		NullCheck(L_24);
		String_t* L_26 = String_TrimEnd_m8D4905B71A4AEBF9D0BC36C6003FC9A5AD630403(L_24, L_25, /*hidden argument*/NULL);
		V_0 = L_26;
		String_t* L_27 = V_0;
		V_3 = L_27;
		goto IL_0075;
	}

IL_0075:
	{
		String_t* L_28 = V_3;
		return L_28;
	}
}
// System.String LipingShare.LCLib.Asn1Processor.Asn1Util::ToHexString(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Asn1Util_ToHexString_mD35BF6D2E0CD4D8CC7FFA9829350CC522A75B8DF (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___bytes0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Asn1Util_ToHexString_mD35BF6D2E0CD4D8CC7FFA9829350CC522A75B8DF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	String_t* V_4 = NULL;
	bool V_5 = false;
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___bytes0;
		V_3 = (bool)((((RuntimeObject*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_3;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		V_4 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		goto IL_0060;
	}

IL_0012:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = ___bytes0;
		NullCheck(L_2);
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_3 = (CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)SZArrayNew(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))), (int32_t)2)));
		V_0 = L_3;
		V_2 = 0;
		goto IL_004a;
	}

IL_0021:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_4 = ___bytes0;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint8_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_1 = L_7;
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_8 = V_0;
		int32_t L_9 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_tBFEA56D2C3543BF68547786BAE0EC50B2DEE0886_il2cpp_TypeInfo_var);
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_10 = ((Asn1Util_tBFEA56D2C3543BF68547786BAE0EC50B2DEE0886_StaticFields*)il2cpp_codegen_static_fields_for(Asn1Util_tBFEA56D2C3543BF68547786BAE0EC50B2DEE0886_il2cpp_TypeInfo_var))->get_hexDigits_0();
		int32_t L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12 = ((int32_t)((int32_t)L_11>>(int32_t)4));
		uint16_t L_13 = (uint16_t)(L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply((int32_t)L_9, (int32_t)2))), (Il2CppChar)L_13);
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_14 = V_0;
		int32_t L_15 = V_2;
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_16 = ((Asn1Util_tBFEA56D2C3543BF68547786BAE0EC50B2DEE0886_StaticFields*)il2cpp_codegen_static_fields_for(Asn1Util_tBFEA56D2C3543BF68547786BAE0EC50B2DEE0886_il2cpp_TypeInfo_var))->get_hexDigits_0();
		int32_t L_17 = V_1;
		NullCheck(L_16);
		int32_t L_18 = ((int32_t)((int32_t)L_17&(int32_t)((int32_t)15)));
		uint16_t L_19 = (uint16_t)(L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_15, (int32_t)2)), (int32_t)1))), (Il2CppChar)L_19);
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_004a:
	{
		int32_t L_21 = V_2;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_22 = ___bytes0;
		NullCheck(L_22);
		V_5 = (bool)((((int32_t)L_21) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length))))))? 1 : 0);
		bool L_23 = V_5;
		if (L_23)
		{
			goto IL_0021;
		}
	}
	{
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_24 = V_0;
		String_t* L_25 = String_CreateString_m394C06654854ADD4C51FF957BE0CC72EF52BAA96(NULL, L_24, /*hidden argument*/NULL);
		V_4 = L_25;
		goto IL_0060;
	}

IL_0060:
	{
		String_t* L_26 = V_4;
		return L_26;
	}
}
// System.Int32 LipingShare.LCLib.Asn1Processor.Asn1Util::BytePrecision(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Asn1Util_BytePrecision_m7096E0EBA6C169BCE432B797CCE210BCEED4191A (uint64_t ___value0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	{
		V_0 = 4;
		goto IL_001d;
	}

IL_0005:
	{
		uint64_t L_0 = ___value0;
		int32_t L_1 = V_0;
		V_1 = (bool)((!(((uint64_t)((int64_t)((uint64_t)L_0>>((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1)), (int32_t)8))&(int32_t)((int32_t)63)))))) <= ((uint64_t)(((int64_t)((int64_t)0))))))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		goto IL_0025;
	}

IL_0019:
	{
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)1));
	}

IL_001d:
	{
		int32_t L_4 = V_0;
		V_2 = (bool)((((int32_t)L_4) > ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (L_5)
		{
			goto IL_0005;
		}
	}

IL_0025:
	{
		int32_t L_6 = V_0;
		V_3 = L_6;
		goto IL_0029;
	}

IL_0029:
	{
		int32_t L_7 = V_3;
		return L_7;
	}
}
// System.Int32 LipingShare.LCLib.Asn1Processor.Asn1Util::DERLengthEncode(System.IO.Stream,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Asn1Util_DERLengthEncode_mA9F7B1782C76D6877D706D78E99DA95002C2DDC3 (Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___xdata0, uint64_t ___length1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Asn1Util_DERLengthEncode_mA9F7B1782C76D6877D706D78E99DA95002C2DDC3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	{
		V_0 = 0;
		uint64_t L_0 = ___length1;
		V_1 = (bool)((((int32_t)((!(((uint64_t)L_0) <= ((uint64_t)(((int64_t)((int64_t)((int32_t)127)))))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_2 = ___xdata0;
		uint64_t L_3 = ___length1;
		NullCheck(L_2);
		VirtActionInvoker1< uint8_t >::Invoke(28 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, L_2, (uint8_t)(((int32_t)((uint8_t)L_3))));
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
		goto IL_0068;
	}

IL_0021:
	{
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_5 = ___xdata0;
		uint64_t L_6 = ___length1;
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_tBFEA56D2C3543BF68547786BAE0EC50B2DEE0886_il2cpp_TypeInfo_var);
		int32_t L_7 = Asn1Util_BytePrecision_m7096E0EBA6C169BCE432B797CCE210BCEED4191A(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		VirtActionInvoker1< uint8_t >::Invoke(28 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, L_5, (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_7|(int32_t)((int32_t)128)))))));
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
		uint64_t L_9 = ___length1;
		int32_t L_10 = Asn1Util_BytePrecision_m7096E0EBA6C169BCE432B797CCE210BCEED4191A(L_9, /*hidden argument*/NULL);
		V_2 = L_10;
		goto IL_005f;
	}

IL_0043:
	{
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_11 = ___xdata0;
		uint64_t L_12 = ___length1;
		int32_t L_13 = V_2;
		NullCheck(L_11);
		VirtActionInvoker1< uint8_t >::Invoke(28 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, L_11, (uint8_t)(((int32_t)((uint8_t)((int64_t)((uint64_t)L_12>>((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)1)), (int32_t)8))&(int32_t)((int32_t)63)))))))));
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
		int32_t L_15 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)1));
	}

IL_005f:
	{
		int32_t L_16 = V_2;
		V_3 = (bool)((((int32_t)L_16) > ((int32_t)0))? 1 : 0);
		bool L_17 = V_3;
		if (L_17)
		{
			goto IL_0043;
		}
	}
	{
	}

IL_0068:
	{
		int32_t L_18 = V_0;
		V_4 = L_18;
		goto IL_006d;
	}

IL_006d:
	{
		int32_t L_19 = V_4;
		return L_19;
	}
}
// System.Int64 LipingShare.LCLib.Asn1Processor.Asn1Util::DerLengthDecode(System.IO.Stream,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Asn1Util_DerLengthDecode_m196AE4433F4364245072F4ADFD95BB1D08DB2E5B (Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___bt0, bool* ___isIndefiniteLength1, const RuntimeMethod* method)
{
	int64_t V_0 = 0;
	uint8_t V_1 = 0x0;
	bool V_2 = false;
	int64_t V_3 = 0;
	bool V_4 = false;
	int64_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	{
		bool* L_0 = ___isIndefiniteLength1;
		*((int8_t*)L_0) = (int8_t)0;
		V_0 = (((int64_t)((int64_t)0)));
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_1 = ___bt0;
		NullCheck(L_1);
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(26 /* System.Int32 System.IO.Stream::ReadByte() */, L_1);
		V_1 = (uint8_t)(((int32_t)((uint8_t)L_2)));
		uint8_t L_3 = V_1;
		V_2 = (bool)((((int32_t)((int32_t)((int32_t)L_3&(int32_t)((int32_t)128)))) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0024;
		}
	}
	{
		uint8_t L_5 = V_1;
		V_0 = (((int64_t)((uint64_t)L_5)));
		goto IL_007d;
	}

IL_0024:
	{
		uint8_t L_6 = V_1;
		V_3 = (((int64_t)((int64_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)127))))));
		int64_t L_7 = V_3;
		V_4 = (bool)((((int64_t)L_7) == ((int64_t)(((int64_t)((int64_t)0)))))? 1 : 0);
		bool L_8 = V_4;
		if (!L_8)
		{
			goto IL_0041;
		}
	}
	{
		bool* L_9 = ___isIndefiniteLength1;
		*((int8_t*)L_9) = (int8_t)1;
		V_5 = (((int64_t)((int64_t)((int32_t)-2))));
		goto IL_0082;
	}

IL_0041:
	{
		V_0 = (((int64_t)((int64_t)0)));
		goto IL_006c;
	}

IL_0046:
	{
		int64_t L_10 = V_0;
		V_6 = (bool)((((int64_t)((int64_t)((int64_t)L_10>>(int32_t)((int32_t)24)))) > ((int64_t)(((int64_t)((int64_t)0)))))? 1 : 0);
		bool L_11 = V_6;
		if (!L_11)
		{
			goto IL_005c;
		}
	}
	{
		V_5 = (((int64_t)((int64_t)(-1))));
		goto IL_0082;
	}

IL_005c:
	{
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_12 = ___bt0;
		NullCheck(L_12);
		int32_t L_13 = VirtFuncInvoker0< int32_t >::Invoke(26 /* System.Int32 System.IO.Stream::ReadByte() */, L_12);
		V_1 = (uint8_t)(((int32_t)((uint8_t)L_13)));
		int64_t L_14 = V_0;
		uint8_t L_15 = V_1;
		V_0 = ((int64_t)((int64_t)((int64_t)((int64_t)L_14<<(int32_t)8))|(int64_t)(((int64_t)((uint64_t)L_15)))));
	}

IL_006c:
	{
		int64_t L_16 = V_3;
		int64_t L_17 = L_16;
		V_3 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_17, (int64_t)(((int64_t)((int64_t)1)))));
		V_7 = (bool)((((int64_t)L_17) > ((int64_t)(((int64_t)((int64_t)0)))))? 1 : 0);
		bool L_18 = V_7;
		if (L_18)
		{
			goto IL_0046;
		}
	}
	{
	}

IL_007d:
	{
		int64_t L_19 = V_0;
		V_5 = L_19;
		goto IL_0082;
	}

IL_0082:
	{
		int64_t L_20 = V_5;
		return L_20;
	}
}
// System.String LipingShare.LCLib.Asn1Processor.Asn1Util::GetTagName(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Asn1Util_GetTagName_m632B4809ADA197245B177C5D5CA7DCCF072B978B (uint8_t ___tag0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Asn1Util_GetTagName_m632B4809ADA197245B177C5D5CA7DCCF072B978B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	String_t* V_7 = NULL;
	{
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		uint8_t L_0 = ___tag0;
		V_1 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)192)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0104;
		}
	}
	{
		uint8_t L_2 = ___tag0;
		V_3 = ((int32_t)((int32_t)L_2&(int32_t)((int32_t)192)));
		int32_t L_3 = V_3;
		V_2 = L_3;
		int32_t L_4 = V_2;
		if ((((int32_t)L_4) > ((int32_t)((int32_t)32))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_5 = V_2;
		if (!L_5)
		{
			goto IL_00de;
		}
	}
	{
		goto IL_0030;
	}

IL_0030:
	{
		int32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)32))))
		{
			goto IL_00be;
		}
	}
	{
		goto IL_00fe;
	}

IL_003d:
	{
		int32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)64))))
		{
			goto IL_007e;
		}
	}
	{
		goto IL_0044;
	}

IL_0044:
	{
		int32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)128))))
		{
			goto IL_005b;
		}
	}
	{
		goto IL_004e;
	}

IL_004e:
	{
		int32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)192))))
		{
			goto IL_009e;
		}
	}
	{
		goto IL_00fe;
	}

IL_005b:
	{
		String_t* L_10 = V_0;
		uint8_t L_11 = ___tag0;
		V_4 = ((int32_t)((int32_t)L_11&(int32_t)((int32_t)31)));
		String_t* L_12 = Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02((int32_t*)(&V_4), /*hidden argument*/NULL);
		String_t* L_13 = String_Concat_mDD2E38332DED3A8C088D38D78A0E0BEB5091DA64(L_10, _stringLiteral6C67774CC22A3FA623B2310EFE0D62F11D8694A2, L_12, _stringLiteralE7064F0B80F61DBC65915311032D27BAA569AE2A, /*hidden argument*/NULL);
		V_0 = L_13;
		goto IL_00fe;
	}

IL_007e:
	{
		String_t* L_14 = V_0;
		uint8_t L_15 = ___tag0;
		V_4 = ((int32_t)((int32_t)L_15&(int32_t)((int32_t)31)));
		String_t* L_16 = Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02((int32_t*)(&V_4), /*hidden argument*/NULL);
		String_t* L_17 = String_Concat_mDD2E38332DED3A8C088D38D78A0E0BEB5091DA64(L_14, _stringLiteralD70D521FB77F3048E86B60682DA8834AE3BA5DAF, L_16, _stringLiteralE7064F0B80F61DBC65915311032D27BAA569AE2A, /*hidden argument*/NULL);
		V_0 = L_17;
		goto IL_00fe;
	}

IL_009e:
	{
		String_t* L_18 = V_0;
		uint8_t L_19 = ___tag0;
		V_4 = ((int32_t)((int32_t)L_19&(int32_t)((int32_t)31)));
		String_t* L_20 = Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02((int32_t*)(&V_4), /*hidden argument*/NULL);
		String_t* L_21 = String_Concat_mDD2E38332DED3A8C088D38D78A0E0BEB5091DA64(L_18, _stringLiteral5EEA1192CEE62F578B918C608B737FD73302DF5A, L_20, _stringLiteralE7064F0B80F61DBC65915311032D27BAA569AE2A, /*hidden argument*/NULL);
		V_0 = L_21;
		goto IL_00fe;
	}

IL_00be:
	{
		String_t* L_22 = V_0;
		uint8_t L_23 = ___tag0;
		V_4 = ((int32_t)((int32_t)L_23&(int32_t)((int32_t)31)));
		String_t* L_24 = Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02((int32_t*)(&V_4), /*hidden argument*/NULL);
		String_t* L_25 = String_Concat_mDD2E38332DED3A8C088D38D78A0E0BEB5091DA64(L_22, _stringLiteral7811B8DE95C320CB7EFF3C16EC8D2E67B54060AC, L_24, _stringLiteralE7064F0B80F61DBC65915311032D27BAA569AE2A, /*hidden argument*/NULL);
		V_0 = L_25;
		goto IL_00fe;
	}

IL_00de:
	{
		String_t* L_26 = V_0;
		uint8_t L_27 = ___tag0;
		V_4 = ((int32_t)((int32_t)L_27&(int32_t)((int32_t)31)));
		String_t* L_28 = Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02((int32_t*)(&V_4), /*hidden argument*/NULL);
		String_t* L_29 = String_Concat_mDD2E38332DED3A8C088D38D78A0E0BEB5091DA64(L_26, _stringLiteralA6701A7439FD0341B41DCB538041BC25305F7D47, L_28, _stringLiteralE7064F0B80F61DBC65915311032D27BAA569AE2A, /*hidden argument*/NULL);
		V_0 = L_29;
		goto IL_00fe;
	}

IL_00fe:
	{
		goto IL_0344;
	}

IL_0104:
	{
		uint8_t L_30 = ___tag0;
		V_6 = ((int32_t)((int32_t)L_30&(int32_t)((int32_t)31)));
		int32_t L_31 = V_6;
		V_5 = L_31;
		int32_t L_32 = V_5;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_32, (int32_t)1)))
		{
			case 0:
			{
				goto IL_0195;
			}
			case 1:
			{
				goto IL_01a6;
			}
			case 2:
			{
				goto IL_01b7;
			}
			case 3:
			{
				goto IL_01c8;
			}
			case 4:
			{
				goto IL_01d9;
			}
			case 5:
			{
				goto IL_01ea;
			}
			case 6:
			{
				goto IL_01fb;
			}
			case 7:
			{
				goto IL_021d;
			}
			case 8:
			{
				goto IL_022e;
			}
			case 9:
			{
				goto IL_023f;
			}
			case 10:
			{
				goto IL_0334;
			}
			case 11:
			{
				goto IL_0250;
			}
			case 12:
			{
				goto IL_020c;
			}
			case 13:
			{
				goto IL_0334;
			}
			case 14:
			{
				goto IL_0334;
			}
			case 15:
			{
				goto IL_0261;
			}
			case 16:
			{
				goto IL_0272;
			}
			case 17:
			{
				goto IL_0283;
			}
			case 18:
			{
				goto IL_0294;
			}
			case 19:
			{
				goto IL_02a5;
			}
			case 20:
			{
				goto IL_02b6;
			}
			case 21:
			{
				goto IL_02c4;
			}
			case 22:
			{
				goto IL_02d2;
			}
			case 23:
			{
				goto IL_02e0;
			}
			case 24:
			{
				goto IL_02ee;
			}
			case 25:
			{
				goto IL_02fc;
			}
			case 26:
			{
				goto IL_030a;
			}
			case 27:
			{
				goto IL_0318;
			}
			case 28:
			{
				goto IL_0334;
			}
			case 29:
			{
				goto IL_0326;
			}
		}
	}
	{
		goto IL_0334;
	}

IL_0195:
	{
		String_t* L_33 = V_0;
		String_t* L_34 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_33, _stringLiteralAB68D8E893A82CFF70979BA20BEC0023DBFE4BE3, /*hidden argument*/NULL);
		V_0 = L_34;
		goto IL_0342;
	}

IL_01a6:
	{
		String_t* L_35 = V_0;
		String_t* L_36 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_35, _stringLiteral0FE37E40E5DAB3AC411C2DDCA6D21991E811ACFA, /*hidden argument*/NULL);
		V_0 = L_36;
		goto IL_0342;
	}

IL_01b7:
	{
		String_t* L_37 = V_0;
		String_t* L_38 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_37, _stringLiteral59FD3952E182123A525F3B3B5D3DF57AEBD07287, /*hidden argument*/NULL);
		V_0 = L_38;
		goto IL_0342;
	}

IL_01c8:
	{
		String_t* L_39 = V_0;
		String_t* L_40 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_39, _stringLiteral70DF823BEE9235949B37F6280700AA01B1BC6981, /*hidden argument*/NULL);
		V_0 = L_40;
		goto IL_0342;
	}

IL_01d9:
	{
		String_t* L_41 = V_0;
		String_t* L_42 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_41, _stringLiteralEEF19C54306DAA69EDA49C0272623BDB5E2B341F, /*hidden argument*/NULL);
		V_0 = L_42;
		goto IL_0342;
	}

IL_01ea:
	{
		String_t* L_43 = V_0;
		String_t* L_44 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_43, _stringLiteral9AD181F04C4923B0BCEE429E6643D58A48EA87D7, /*hidden argument*/NULL);
		V_0 = L_44;
		goto IL_0342;
	}

IL_01fb:
	{
		String_t* L_45 = V_0;
		String_t* L_46 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_45, _stringLiteralB6E5B998C7AF5F92851E4C92D45FB50911075CFD, /*hidden argument*/NULL);
		V_0 = L_46;
		goto IL_0342;
	}

IL_020c:
	{
		String_t* L_47 = V_0;
		String_t* L_48 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_47, _stringLiteralC86122F6E216B3EE52908A85738D92FB114C0A47, /*hidden argument*/NULL);
		V_0 = L_48;
		goto IL_0342;
	}

IL_021d:
	{
		String_t* L_49 = V_0;
		String_t* L_50 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_49, _stringLiteral92F627E6114FDE8EC8E85F5DC7EB0D8548926FD9, /*hidden argument*/NULL);
		V_0 = L_50;
		goto IL_0342;
	}

IL_022e:
	{
		String_t* L_51 = V_0;
		String_t* L_52 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_51, _stringLiteral3B330731A188B19FDF61999609E5E9B932BB400B, /*hidden argument*/NULL);
		V_0 = L_52;
		goto IL_0342;
	}

IL_023f:
	{
		String_t* L_53 = V_0;
		String_t* L_54 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_53, _stringLiteral2A6AD6C70E1596010DD60A32C042F12BD5A6B02C, /*hidden argument*/NULL);
		V_0 = L_54;
		goto IL_0342;
	}

IL_0250:
	{
		String_t* L_55 = V_0;
		String_t* L_56 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_55, _stringLiteralDC18FC03C668DB9D9836F4FB8B8B9F9DB4DBCE2C, /*hidden argument*/NULL);
		V_0 = L_56;
		goto IL_0342;
	}

IL_0261:
	{
		String_t* L_57 = V_0;
		String_t* L_58 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_57, _stringLiteralDB1F43325FC17134A0573F49C6EE494693ED8ECE, /*hidden argument*/NULL);
		V_0 = L_58;
		goto IL_0342;
	}

IL_0272:
	{
		String_t* L_59 = V_0;
		String_t* L_60 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_59, _stringLiteral55C5D81017A30EDF1E47BA1B78C377A5E5EBFD50, /*hidden argument*/NULL);
		V_0 = L_60;
		goto IL_0342;
	}

IL_0283:
	{
		String_t* L_61 = V_0;
		String_t* L_62 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_61, _stringLiteral7347328E7E81FB4E988D9868B6592AA1DFE8F95D, /*hidden argument*/NULL);
		V_0 = L_62;
		goto IL_0342;
	}

IL_0294:
	{
		String_t* L_63 = V_0;
		String_t* L_64 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_63, _stringLiteral0A421EC84D05A6F524879973736EF820C58A69AB, /*hidden argument*/NULL);
		V_0 = L_64;
		goto IL_0342;
	}

IL_02a5:
	{
		String_t* L_65 = V_0;
		String_t* L_66 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_65, _stringLiteralF82664804E9A045FF7E92AB79B1295858B69B1B5, /*hidden argument*/NULL);
		V_0 = L_66;
		goto IL_0342;
	}

IL_02b6:
	{
		String_t* L_67 = V_0;
		String_t* L_68 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_67, _stringLiteralF9BBD38E5BEB32D6DB31892464AE64A293FC2197, /*hidden argument*/NULL);
		V_0 = L_68;
		goto IL_0342;
	}

IL_02c4:
	{
		String_t* L_69 = V_0;
		String_t* L_70 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_69, _stringLiteral539C014337268356520DDFA5B82FE561AAF64D78, /*hidden argument*/NULL);
		V_0 = L_70;
		goto IL_0342;
	}

IL_02d2:
	{
		String_t* L_71 = V_0;
		String_t* L_72 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_71, _stringLiteral16C76BD0C6D6FEB19D45A94D0F883114A4DA6198, /*hidden argument*/NULL);
		V_0 = L_72;
		goto IL_0342;
	}

IL_02e0:
	{
		String_t* L_73 = V_0;
		String_t* L_74 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_73, _stringLiteral064E276D0BD2F99AFB73108287D125B2CBB8E042, /*hidden argument*/NULL);
		V_0 = L_74;
		goto IL_0342;
	}

IL_02ee:
	{
		String_t* L_75 = V_0;
		String_t* L_76 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_75, _stringLiteral982D9B9213F99ECE99848AF7437AA329924971F5, /*hidden argument*/NULL);
		V_0 = L_76;
		goto IL_0342;
	}

IL_02fc:
	{
		String_t* L_77 = V_0;
		String_t* L_78 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_77, _stringLiteralD3D492857E1DBB3F931B9545F041B17FFA2B6B7B, /*hidden argument*/NULL);
		V_0 = L_78;
		goto IL_0342;
	}

IL_030a:
	{
		String_t* L_79 = V_0;
		String_t* L_80 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_79, _stringLiteralF1C29F28FFF2EF150EE30D0284B3E000A607163A, /*hidden argument*/NULL);
		V_0 = L_80;
		goto IL_0342;
	}

IL_0318:
	{
		String_t* L_81 = V_0;
		String_t* L_82 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_81, _stringLiteral496B6990BE391A19ECC7FDDD46DDA9E1293E116F, /*hidden argument*/NULL);
		V_0 = L_82;
		goto IL_0342;
	}

IL_0326:
	{
		String_t* L_83 = V_0;
		String_t* L_84 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_83, _stringLiteral092562912D8C071E5578CC459743BDB8E594C8B6, /*hidden argument*/NULL);
		V_0 = L_84;
		goto IL_0342;
	}

IL_0334:
	{
		String_t* L_85 = V_0;
		String_t* L_86 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_85, _stringLiteral80A4E4D9CBDC9463B54D4795E498F3E9D72E67A9, /*hidden argument*/NULL);
		V_0 = L_86;
		goto IL_0342;
	}

IL_0342:
	{
	}

IL_0344:
	{
		String_t* L_87 = V_0;
		V_7 = L_87;
		goto IL_0349;
	}

IL_0349:
	{
		String_t* L_88 = V_7;
		return L_88;
	}
}
// System.Void LipingShare.LCLib.Asn1Processor.Asn1Util::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Asn1Util__cctor_m8087007A2271E53EF3644AE6FD0690EC9458446E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Asn1Util__cctor_m8087007A2271E53EF3644AE6FD0690EC9458446E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_0 = (CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)SZArrayNew(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_1 = L_0;
		RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF  L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tF929F227B031DB1A567E309D7A693BDF58171228____59F5BD34B6C013DEACC784F69C67E95150033A84_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m29F50CDFEEE0AB868200291366253DD4737BC76A((RuntimeArray *)(RuntimeArray *)L_1, L_2, /*hidden argument*/NULL);
		((Asn1Util_tBFEA56D2C3543BF68547786BAE0EC50B2DEE0886_StaticFields*)il2cpp_codegen_static_fields_for(Asn1Util_tBFEA56D2C3543BF68547786BAE0EC50B2DEE0886_il2cpp_TypeInfo_var))->set_hexDigits_0(L_1);
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
// System.String LipingShare.LCLib.Asn1Processor.Oid::GetOidName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Oid_GetOidName_m70F7C7FA6605F51CCD63598FA18AE26C521B9391 (Oid_t5B93F085287F1B3F4A9F315146D0C08398544492 * __this, String_t* ___inOidStr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Oid_GetOidName_m70F7C7FA6605F51CCD63598FA18AE26C521B9391_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Oid_t5B93F085287F1B3F4A9F315146D0C08398544492_il2cpp_TypeInfo_var);
		StringDictionary_t9B6306775C5F70981BCB8A30603B4C93C22844FF * L_0 = ((Oid_t5B93F085287F1B3F4A9F315146D0C08398544492_StaticFields*)il2cpp_codegen_static_fields_for(Oid_t5B93F085287F1B3F4A9F315146D0C08398544492_il2cpp_TypeInfo_var))->get_oidDictionary_0();
		V_0 = (bool)((((RuntimeObject*)(StringDictionary_t9B6306775C5F70981BCB8A30603B4C93C22844FF *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		StringDictionary_t9B6306775C5F70981BCB8A30603B4C93C22844FF * L_2 = (StringDictionary_t9B6306775C5F70981BCB8A30603B4C93C22844FF *)il2cpp_codegen_object_new(StringDictionary_t9B6306775C5F70981BCB8A30603B4C93C22844FF_il2cpp_TypeInfo_var);
		StringDictionary__ctor_m8B942FDF8F240EDFC869E6F1CD2EBC59F75BC512(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Oid_t5B93F085287F1B3F4A9F315146D0C08398544492_il2cpp_TypeInfo_var);
		((Oid_t5B93F085287F1B3F4A9F315146D0C08398544492_StaticFields*)il2cpp_codegen_static_fields_for(Oid_t5B93F085287F1B3F4A9F315146D0C08398544492_il2cpp_TypeInfo_var))->set_oidDictionary_0(L_2);
	}

IL_0019:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Oid_t5B93F085287F1B3F4A9F315146D0C08398544492_il2cpp_TypeInfo_var);
		StringDictionary_t9B6306775C5F70981BCB8A30603B4C93C22844FF * L_3 = ((Oid_t5B93F085287F1B3F4A9F315146D0C08398544492_StaticFields*)il2cpp_codegen_static_fields_for(Oid_t5B93F085287F1B3F4A9F315146D0C08398544492_il2cpp_TypeInfo_var))->get_oidDictionary_0();
		String_t* L_4 = ___inOidStr0;
		NullCheck(L_3);
		String_t* L_5 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(5 /* System.String System.Collections.Specialized.StringDictionary::get_Item(System.String) */, L_3, L_4);
		V_1 = L_5;
		goto IL_0027;
	}

IL_0027:
	{
		String_t* L_6 = V_1;
		return L_6;
	}
}
// System.String LipingShare.LCLib.Asn1Processor.Oid::Decode(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Oid_Decode_m1C6BD88CE261E00DF019558DB9AD2E64C65602C9 (Oid_t5B93F085287F1B3F4A9F315146D0C08398544492 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Oid_Decode_m1C6BD88CE261E00DF019558DB9AD2E64C65602C9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___data0;
		MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * L_1 = (MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C *)il2cpp_codegen_object_new(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m731754F1435D29F87C407D84ED47AF35FFF9B0EF(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * L_2 = V_0;
		NullCheck(L_2);
		VirtActionInvoker1< int64_t >::Invoke(12 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_2, (((int64_t)((int64_t)0))));
		MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * L_3 = V_0;
		String_t* L_4 = VirtFuncInvoker1< String_t*, Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * >::Invoke(4 /* System.String LipingShare.LCLib.Asn1Processor.Oid::Decode(System.IO.Stream) */, __this, L_3);
		V_1 = L_4;
		MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * L_5 = V_0;
		NullCheck(L_5);
		VirtActionInvoker0::Invoke(13 /* System.Void System.IO.Stream::Close() */, L_5);
		String_t* L_6 = V_1;
		V_2 = L_6;
		goto IL_0024;
	}

IL_0024:
	{
		String_t* L_7 = V_2;
		return L_7;
	}
}
// System.String LipingShare.LCLib.Asn1Processor.Oid::Decode(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Oid_Decode_m368D830A3E047ECDE79A357A25B2A8E367F0C647 (Oid_t5B93F085287F1B3F4A9F315146D0C08398544492 * __this, Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___bt0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Oid_Decode_m368D830A3E047ECDE79A357A25B2A8E367F0C647_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	uint8_t V_1 = 0x0;
	uint64_t V_2 = 0;
	Exception_t * V_3 = NULL;
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
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		V_2 = (((int64_t)((int64_t)0)));
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_0 = ___bt0;
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(26 /* System.Int32 System.IO.Stream::ReadByte() */, L_0);
		V_1 = (uint8_t)(((int32_t)((uint8_t)L_1)));
		String_t* L_2 = V_0;
		uint8_t L_3 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		String_t* L_4 = Convert_ToString_m993DA4E9E90F47B1899CC578C42204608C4F7C5F(((int32_t)((int32_t)L_3/(int32_t)((int32_t)40))), /*hidden argument*/NULL);
		String_t* L_5 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_2, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		String_t* L_6 = V_0;
		uint8_t L_7 = V_1;
		String_t* L_8 = Convert_ToString_m993DA4E9E90F47B1899CC578C42204608C4F7C5F(((int32_t)((int32_t)L_7%(int32_t)((int32_t)40))), /*hidden argument*/NULL);
		String_t* L_9 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(L_6, _stringLiteral3A52CE780950D4D969792A2559CD519D7EE8C727, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0074;
	}

IL_0039:
	{
	}

IL_003a:
	try
	{ // begin try (depth: 1)
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_10 = ___bt0;
		Oid_DecodeValue_m7FE3C373C18B710B9CCEE6528369AC0F71785ED5(__this, L_10, (uint64_t*)(&V_2), /*hidden argument*/NULL);
		String_t* L_11 = V_0;
		String_t* L_12 = UInt64_ToString_mF0E40B7459C207B89A1C8C04CE7F183AC0E6D672((uint64_t*)(&V_2), /*hidden argument*/NULL);
		String_t* L_13 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(L_11, _stringLiteral3A52CE780950D4D969792A2559CD519D7EE8C727, L_12, /*hidden argument*/NULL);
		V_0 = L_13;
		goto IL_0073;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_005b;
		throw e;
	}

CATCH_005b:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)__exception_local);
		Exception_t * L_14 = V_3;
		NullCheck(L_14);
		String_t* L_15 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_14);
		String_t* L_16 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral3F3A72B39989C3B5936E6186F5A4AC23FDB05828, L_15, /*hidden argument*/NULL);
		Exception_t * L_17 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0(L_17, L_16, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, Oid_Decode_m368D830A3E047ECDE79A357A25B2A8E367F0C647_RuntimeMethod_var);
	} // end catch (depth: 1)

IL_0073:
	{
	}

IL_0074:
	{
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_18 = ___bt0;
		NullCheck(L_18);
		int64_t L_19 = VirtFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_18);
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_20 = ___bt0;
		NullCheck(L_20);
		int64_t L_21 = VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Length() */, L_20);
		V_4 = (bool)((((int64_t)L_19) < ((int64_t)L_21))? 1 : 0);
		bool L_22 = V_4;
		if (L_22)
		{
			goto IL_0039;
		}
	}
	{
		String_t* L_23 = V_0;
		V_5 = L_23;
		goto IL_008d;
	}

IL_008d:
	{
		String_t* L_24 = V_5;
		return L_24;
	}
}
// System.Void LipingShare.LCLib.Asn1Processor.Oid::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Oid__ctor_mFFD980E1341E8BA30F696F91756ACE4D33CB9E5E (Oid_t5B93F085287F1B3F4A9F315146D0C08398544492 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 LipingShare.LCLib.Asn1Processor.Oid::DecodeValue(System.IO.Stream,System.UInt64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Oid_DecodeValue_m7FE3C373C18B710B9CCEE6528369AC0F71785ED5 (Oid_t5B93F085287F1B3F4A9F315146D0C08398544492 * __this, Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___bt0, uint64_t* ___v1, const RuntimeMethod* method)
{
	uint8_t V_0 = 0x0;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	{
		V_1 = 0;
		uint64_t* L_0 = ___v1;
		*((int64_t*)L_0) = (int64_t)(((int64_t)((int64_t)0)));
		goto IL_0039;
	}

IL_0009:
	{
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_1 = ___bt0;
		NullCheck(L_1);
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(26 /* System.Int32 System.IO.Stream::ReadByte() */, L_1);
		V_0 = (uint8_t)(((int32_t)((uint8_t)L_2)));
		int32_t L_3 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1));
		uint64_t* L_4 = ___v1;
		uint64_t* L_5 = ___v1;
		int64_t L_6 = *((int64_t*)L_5);
		*((int64_t*)L_4) = (int64_t)((int64_t)((int64_t)L_6<<(int32_t)7));
		uint64_t* L_7 = ___v1;
		uint64_t* L_8 = ___v1;
		int64_t L_9 = *((int64_t*)L_8);
		uint8_t L_10 = V_0;
		*((int64_t*)L_7) = (int64_t)((int64_t)il2cpp_codegen_add((int64_t)L_9, (int64_t)(((int64_t)((int64_t)((int32_t)((int32_t)L_10&(int32_t)((int32_t)127))))))));
		uint8_t L_11 = V_0;
		V_2 = (bool)((((int32_t)((int32_t)((int32_t)L_11&(int32_t)((int32_t)128)))) == ((int32_t)0))? 1 : 0);
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_13 = V_1;
		V_3 = L_13;
		goto IL_003e;
	}

IL_0038:
	{
	}

IL_0039:
	{
		V_4 = (bool)1;
		goto IL_0009;
	}

IL_003e:
	{
		int32_t L_14 = V_3;
		return L_14;
	}
}
// System.Void LipingShare.LCLib.Asn1Processor.Oid::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Oid__cctor_m3A53771453DB488E5F898C5669B0F97A83C20F90 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Oid__cctor_m3A53771453DB488E5F898C5669B0F97A83C20F90_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((Oid_t5B93F085287F1B3F4A9F315146D0C08398544492_StaticFields*)il2cpp_codegen_static_fields_for(Oid_t5B93F085287F1B3F4A9F315146D0C08398544492_il2cpp_TypeInfo_var))->set_oidDictionary_0((StringDictionary_t9B6306775C5F70981BCB8A30603B4C93C22844FF *)NULL);
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
// System.Void LipingShare.LCLib.Asn1Processor.RelativeOid::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RelativeOid__ctor_m31B82A6D54A8D09F8F895B180782CD27C8908478 (RelativeOid_tA04AF790321D95FE09233E82417A118B0B1BBBBB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RelativeOid__ctor_m31B82A6D54A8D09F8F895B180782CD27C8908478_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Oid_t5B93F085287F1B3F4A9F315146D0C08398544492_il2cpp_TypeInfo_var);
		Oid__ctor_mFFD980E1341E8BA30F696F91756ACE4D33CB9E5E(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String LipingShare.LCLib.Asn1Processor.RelativeOid::Decode(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RelativeOid_Decode_m3ACC1BAECCEF97A28927E5F53D1AC1732385CE5C (RelativeOid_tA04AF790321D95FE09233E82417A118B0B1BBBBB * __this, Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___bt0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RelativeOid_Decode_m3ACC1BAECCEF97A28927E5F53D1AC1732385CE5C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	uint64_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	Exception_t * V_4 = NULL;
	bool V_5 = false;
	String_t* V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		V_1 = (((int64_t)((int64_t)0)));
		V_2 = (bool)1;
		goto IL_0060;
	}

IL_000e:
	{
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		{
			Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_0 = ___bt0;
			Oid_DecodeValue_m7FE3C373C18B710B9CCEE6528369AC0F71785ED5(__this, L_0, (uint64_t*)(&V_1), /*hidden argument*/NULL);
			bool L_1 = V_2;
			V_3 = L_1;
			bool L_2 = V_3;
			if (!L_2)
			{
				goto IL_002d;
			}
		}

IL_001f:
		{
			String_t* L_3 = UInt64_ToString_mF0E40B7459C207B89A1C8C04CE7F183AC0E6D672((uint64_t*)(&V_1), /*hidden argument*/NULL);
			V_0 = L_3;
			V_2 = (bool)0;
			goto IL_0042;
		}

IL_002d:
		{
			String_t* L_4 = V_0;
			String_t* L_5 = UInt64_ToString_mF0E40B7459C207B89A1C8C04CE7F183AC0E6D672((uint64_t*)(&V_1), /*hidden argument*/NULL);
			String_t* L_6 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(L_4, _stringLiteral3A52CE780950D4D969792A2559CD519D7EE8C727, L_5, /*hidden argument*/NULL);
			V_0 = L_6;
		}

IL_0042:
		{
			goto IL_005f;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0045;
		throw e;
	}

CATCH_0045:
	{ // begin catch(System.Exception)
		V_4 = ((Exception_t *)__exception_local);
		Exception_t * L_7 = V_4;
		NullCheck(L_7);
		String_t* L_8 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_7);
		String_t* L_9 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral3F3A72B39989C3B5936E6186F5A4AC23FDB05828, L_8, /*hidden argument*/NULL);
		Exception_t * L_10 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0(L_10, L_9, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, RelativeOid_Decode_m3ACC1BAECCEF97A28927E5F53D1AC1732385CE5C_RuntimeMethod_var);
	} // end catch (depth: 1)

IL_005f:
	{
	}

IL_0060:
	{
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_11 = ___bt0;
		NullCheck(L_11);
		int64_t L_12 = VirtFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_11);
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_13 = ___bt0;
		NullCheck(L_13);
		int64_t L_14 = VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Length() */, L_13);
		V_5 = (bool)((((int64_t)L_12) < ((int64_t)L_14))? 1 : 0);
		bool L_15 = V_5;
		if (L_15)
		{
			goto IL_000e;
		}
	}
	{
		String_t* L_16 = V_0;
		V_6 = L_16;
		goto IL_0079;
	}

IL_0079:
	{
		String_t* L_17 = V_6;
		return L_17;
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
// System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::set_quantity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_quantity_mD99AD9ADBE95FB0A32B3DAB6AFBA4D3C9CE34193 (AppleInAppPurchaseReceipt_t8495AF48B320D4EA26939FA02F9BA8784CF02F90 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CquantityU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.String UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::get_productID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppleInAppPurchaseReceipt_get_productID_mC86F3DB63C03627088904A20AEF317075EC88C49 (AppleInAppPurchaseReceipt_t8495AF48B320D4EA26939FA02F9BA8784CF02F90 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CproductIDU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::set_productID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_productID_mD2E88AA98AE32A27EF3245ED271C6492274BA7BB (AppleInAppPurchaseReceipt_t8495AF48B320D4EA26939FA02F9BA8784CF02F90 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CproductIDU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.String UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::get_transactionID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppleInAppPurchaseReceipt_get_transactionID_m3D4D516D05FC7BC6518DE6CBC55A81492591D83B (AppleInAppPurchaseReceipt_t8495AF48B320D4EA26939FA02F9BA8784CF02F90 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CtransactionIDU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::set_transactionID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_transactionID_m80F1DB67E4887070699C6D72CC25538AD3676820 (AppleInAppPurchaseReceipt_t8495AF48B320D4EA26939FA02F9BA8784CF02F90 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CtransactionIDU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.String UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::get_originalTransactionIdentifier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppleInAppPurchaseReceipt_get_originalTransactionIdentifier_m27C479C8B3D06609ED35D74B9B34FA017711C620 (AppleInAppPurchaseReceipt_t8495AF48B320D4EA26939FA02F9BA8784CF02F90 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CoriginalTransactionIdentifierU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::set_originalTransactionIdentifier(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_originalTransactionIdentifier_mD8BA44FD3F7952131AAB1D3023BEEA543F75810E (AppleInAppPurchaseReceipt_t8495AF48B320D4EA26939FA02F9BA8784CF02F90 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CoriginalTransactionIdentifierU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.DateTime UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::get_purchaseDate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  AppleInAppPurchaseReceipt_get_purchaseDate_m92FF485EAFEDF549E04A639A9FFD86DE9B37F5FE (AppleInAppPurchaseReceipt_t8495AF48B320D4EA26939FA02F9BA8784CF02F90 * __this, const RuntimeMethod* method)
{
	{
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_0 = __this->get_U3CpurchaseDateU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::set_purchaseDate(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_purchaseDate_m2DB360E7CC577E809CE405E0DF013C1B243640BA (AppleInAppPurchaseReceipt_t8495AF48B320D4EA26939FA02F9BA8784CF02F90 * __this, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___value0, const RuntimeMethod* method)
{
	{
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_0 = ___value0;
		__this->set_U3CpurchaseDateU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.DateTime UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::get_originalPurchaseDate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  AppleInAppPurchaseReceipt_get_originalPurchaseDate_m76397CB5C1FB67D8769AECD90DAF1FBDDC6CC083 (AppleInAppPurchaseReceipt_t8495AF48B320D4EA26939FA02F9BA8784CF02F90 * __this, const RuntimeMethod* method)
{
	{
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_0 = __this->get_U3CoriginalPurchaseDateU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::set_originalPurchaseDate(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_originalPurchaseDate_m11819E1F354A5352A36FD6EF9CAB4789C0B9BA3A (AppleInAppPurchaseReceipt_t8495AF48B320D4EA26939FA02F9BA8784CF02F90 * __this, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___value0, const RuntimeMethod* method)
{
	{
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_0 = ___value0;
		__this->set_U3CoriginalPurchaseDateU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.DateTime UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::get_subscriptionExpirationDate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  AppleInAppPurchaseReceipt_get_subscriptionExpirationDate_mD9F1E3A92D1D0AA0B6EC6C83F6C43029783D4327 (AppleInAppPurchaseReceipt_t8495AF48B320D4EA26939FA02F9BA8784CF02F90 * __this, const RuntimeMethod* method)
{
	{
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_0 = __this->get_U3CsubscriptionExpirationDateU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::set_subscriptionExpirationDate(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_subscriptionExpirationDate_m41872BB77B62E333157EA7A827071C8542ABEA30 (AppleInAppPurchaseReceipt_t8495AF48B320D4EA26939FA02F9BA8784CF02F90 * __this, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___value0, const RuntimeMethod* method)
{
	{
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_0 = ___value0;
		__this->set_U3CsubscriptionExpirationDateU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.DateTime UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::get_cancellationDate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  AppleInAppPurchaseReceipt_get_cancellationDate_mE5B1B324A3C8168B42A70660AC8DC80CFF59244E (AppleInAppPurchaseReceipt_t8495AF48B320D4EA26939FA02F9BA8784CF02F90 * __this, const RuntimeMethod* method)
{
	{
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_0 = __this->get_U3CcancellationDateU3Ek__BackingField_7();
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::set_cancellationDate(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_cancellationDate_mE7DC7F5CCD7B31266F9B023DDFBED321402CC544 (AppleInAppPurchaseReceipt_t8495AF48B320D4EA26939FA02F9BA8784CF02F90 * __this, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___value0, const RuntimeMethod* method)
{
	{
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_0 = ___value0;
		__this->set_U3CcancellationDateU3Ek__BackingField_7(L_0);
		return;
	}
}
// System.Int32 UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::get_isFreeTrial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AppleInAppPurchaseReceipt_get_isFreeTrial_m2DBAAE844CBADB2F5F0DF526B299889493A3B6DA (AppleInAppPurchaseReceipt_t8495AF48B320D4EA26939FA02F9BA8784CF02F90 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CisFreeTrialU3Ek__BackingField_8();
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::set_isFreeTrial(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_isFreeTrial_m6232530EC0949863A8AD14211670A2A99298A72A (AppleInAppPurchaseReceipt_t8495AF48B320D4EA26939FA02F9BA8784CF02F90 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CisFreeTrialU3Ek__BackingField_8(L_0);
		return;
	}
}
// System.Int32 UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::get_productType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AppleInAppPurchaseReceipt_get_productType_m0D0FD70A5B68E882A348E91B03D88AF95E4426DD (AppleInAppPurchaseReceipt_t8495AF48B320D4EA26939FA02F9BA8784CF02F90 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CproductTypeU3Ek__BackingField_9();
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::set_productType(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_productType_m582A75CEB8A3689CA224DFABE49C46F1B02528A1 (AppleInAppPurchaseReceipt_t8495AF48B320D4EA26939FA02F9BA8784CF02F90 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CproductTypeU3Ek__BackingField_9(L_0);
		return;
	}
}
// System.Int32 UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::get_isIntroductoryPricePeriod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AppleInAppPurchaseReceipt_get_isIntroductoryPricePeriod_m6C8E8E75F68DD44293A0A54ABC7519B85FCF9C34 (AppleInAppPurchaseReceipt_t8495AF48B320D4EA26939FA02F9BA8784CF02F90 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CisIntroductoryPricePeriodU3Ek__BackingField_10();
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::set_isIntroductoryPricePeriod(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_isIntroductoryPricePeriod_mD5853FF32DB39162C98FAE1587004D73D083BC31 (AppleInAppPurchaseReceipt_t8495AF48B320D4EA26939FA02F9BA8784CF02F90 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CisIntroductoryPricePeriodU3Ek__BackingField_10(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt__ctor_m36719FC02F05F402168673BF83E4AB963804981C (AppleInAppPurchaseReceipt_t8495AF48B320D4EA26939FA02F9BA8784CF02F90 * __this, const RuntimeMethod* method)
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
// System.Void UnityEngine.Purchasing.Security.AppleReceipt::set_bundleID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppleReceipt_set_bundleID_m3821E9162753D78429421EC4BA8D0F2778A99728 (AppleReceipt_t19AF99FA817972A222A162F65B730C469BFF8698 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CbundleIDU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Security.AppleReceipt::set_appVersion(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppleReceipt_set_appVersion_mA8B0F89E3FECB6154C0C7F9E50AE662F362219AB (AppleReceipt_t19AF99FA817972A222A162F65B730C469BFF8698 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CappVersionU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Security.AppleReceipt::set_opaque(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppleReceipt_set_opaque_m5B8F9DBF8FE29162066ACE5A77C48A1058BDDAE4 (AppleReceipt_t19AF99FA817972A222A162F65B730C469BFF8698 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___value0, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___value0;
		__this->set_U3CopaqueU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Security.AppleReceipt::set_hash(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppleReceipt_set_hash_mF81CA1CFD1060539BCC217FA9AF2CB665E1F8DE3 (AppleReceipt_t19AF99FA817972A222A162F65B730C469BFF8698 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___value0, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___value0;
		__this->set_U3ChashU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Security.AppleReceipt::set_originalApplicationVersion(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppleReceipt_set_originalApplicationVersion_m21509B22052C125E8E05D06731406D86DA36270B (AppleReceipt_t19AF99FA817972A222A162F65B730C469BFF8698 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CoriginalApplicationVersionU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Security.AppleReceipt::set_receiptCreationDate(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppleReceipt_set_receiptCreationDate_m9EDA99CB584C1867F28167E00203C3D5C05E8553 (AppleReceipt_t19AF99FA817972A222A162F65B730C469BFF8698 * __this, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___value0, const RuntimeMethod* method)
{
	{
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_0 = ___value0;
		__this->set_U3CreceiptCreationDateU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Security.AppleReceipt::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppleReceipt__ctor_mACEC3DD73DF3BF61043E79171F0BE783DE45C8C3 (AppleReceipt_t19AF99FA817972A222A162F65B730C469BFF8698 * __this, const RuntimeMethod* method)
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
// UnityEngine.Purchasing.Security.AppleReceipt UnityEngine.Purchasing.Security.AppleReceiptParser::Parse(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppleReceipt_t19AF99FA817972A222A162F65B730C469BFF8698 * AppleReceiptParser_Parse_mB11AA1E235B3C5E31FEE8F3575A77AE94F11E54D (AppleReceiptParser_t34DA429F3553864684768F2E95D35C1D6A90F3E4 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___receiptData0, const RuntimeMethod* method)
{
	PKCS7_t851499113E52C57B34831AE4D5AB00C973B7D21A * V_0 = NULL;
	AppleReceipt_t19AF99FA817972A222A162F65B730C469BFF8698 * V_1 = NULL;
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___receiptData0;
		AppleReceipt_t19AF99FA817972A222A162F65B730C469BFF8698 * L_1 = AppleReceiptParser_Parse_mCAA5211755A26C24A67F5C1AC4ACF7F6B15C9012(__this, L_0, (PKCS7_t851499113E52C57B34831AE4D5AB00C973B7D21A **)(&V_0), /*hidden argument*/NULL);
		V_1 = L_1;
		goto IL_000d;
	}

IL_000d:
	{
		AppleReceipt_t19AF99FA817972A222A162F65B730C469BFF8698 * L_2 = V_1;
		return L_2;
	}
}
// UnityEngine.Purchasing.Security.AppleReceipt UnityEngine.Purchasing.Security.AppleReceiptParser::Parse(System.Byte[],UnityEngine.Purchasing.Security.PKCS7&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppleReceipt_t19AF99FA817972A222A162F65B730C469BFF8698 * AppleReceiptParser_Parse_mCAA5211755A26C24A67F5C1AC4ACF7F6B15C9012 (AppleReceiptParser_t34DA429F3553864684768F2E95D35C1D6A90F3E4 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___receiptData0, PKCS7_t851499113E52C57B34831AE4D5AB00C973B7D21A ** ___receipt1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AppleReceiptParser_Parse_mCAA5211755A26C24A67F5C1AC4ACF7F6B15C9012_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	AppleReceipt_t19AF99FA817972A222A162F65B730C469BFF8698 * V_1 = NULL;
	MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * V_2 = NULL;
	Asn1Parser_t6EAA9B28705029F260D90731751E990EF3848620 * V_3 = NULL;
	AppleReceipt_t19AF99FA817972A222A162F65B730C469BFF8698 * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	int32_t G_B5_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(AppleReceiptParser_t34DA429F3553864684768F2E95D35C1D6A90F3E4_il2cpp_TypeInfo_var);
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_0 = ((AppleReceiptParser_t34DA429F3553864684768F2E95D35C1D6A90F3E4_StaticFields*)il2cpp_codegen_static_fields_for(AppleReceiptParser_t34DA429F3553864684768F2E95D35C1D6A90F3E4_il2cpp_TypeInfo_var))->get__mostRecentReceiptData_0();
		NullCheck(L_0);
		bool L_1 = Dictionary_2_ContainsKey_mAD4B2095526B4742201B24C5ADF1717AFB15EF89(L_0, _stringLiteral99052D63E3C8ED1DA4A0A9B5D6E2E8E0290A715E, /*hidden argument*/Dictionary_2_ContainsKey_mAD4B2095526B4742201B24C5ADF1717AFB15EF89_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_0050;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AppleReceiptParser_t34DA429F3553864684768F2E95D35C1D6A90F3E4_il2cpp_TypeInfo_var);
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_2 = ((AppleReceiptParser_t34DA429F3553864684768F2E95D35C1D6A90F3E4_StaticFields*)il2cpp_codegen_static_fields_for(AppleReceiptParser_t34DA429F3553864684768F2E95D35C1D6A90F3E4_il2cpp_TypeInfo_var))->get__mostRecentReceiptData_0();
		NullCheck(L_2);
		bool L_3 = Dictionary_2_ContainsKey_mAD4B2095526B4742201B24C5ADF1717AFB15EF89(L_2, _stringLiteral6F3DCE8E6ECB57F69A6AF0D152302713B5DFD69C, /*hidden argument*/Dictionary_2_ContainsKey_mAD4B2095526B4742201B24C5ADF1717AFB15EF89_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0050;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AppleReceiptParser_t34DA429F3553864684768F2E95D35C1D6A90F3E4_il2cpp_TypeInfo_var);
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_4 = ((AppleReceiptParser_t34DA429F3553864684768F2E95D35C1D6A90F3E4_StaticFields*)il2cpp_codegen_static_fields_for(AppleReceiptParser_t34DA429F3553864684768F2E95D35C1D6A90F3E4_il2cpp_TypeInfo_var))->get__mostRecentReceiptData_0();
		NullCheck(L_4);
		bool L_5 = Dictionary_2_ContainsKey_mAD4B2095526B4742201B24C5ADF1717AFB15EF89(L_4, _stringLiteralEEE5779991A5565F1F83AF07247DB16D55D9365B, /*hidden argument*/Dictionary_2_ContainsKey_mAD4B2095526B4742201B24C5ADF1717AFB15EF89_RuntimeMethod_var);
		if (!L_5)
		{
			goto IL_0050;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_6 = ___receiptData0;
		IL2CPP_RUNTIME_CLASS_INIT(AppleReceiptParser_t34DA429F3553864684768F2E95D35C1D6A90F3E4_il2cpp_TypeInfo_var);
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_7 = ((AppleReceiptParser_t34DA429F3553864684768F2E95D35C1D6A90F3E4_StaticFields*)il2cpp_codegen_static_fields_for(AppleReceiptParser_t34DA429F3553864684768F2E95D35C1D6A90F3E4_il2cpp_TypeInfo_var))->get__mostRecentReceiptData_0();
		NullCheck(L_7);
		RuntimeObject * L_8 = Dictionary_2_get_Item_mB490F7029D7451FAF06E3020040E604B500BA3B2(L_7, _stringLiteralEEE5779991A5565F1F83AF07247DB16D55D9365B, /*hidden argument*/Dictionary_2_get_Item_mB490F7029D7451FAF06E3020040E604B500BA3B2_RuntimeMethod_var);
		bool L_9 = AppleReceiptParser_ArrayEquals_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_mBE6123F33FC1CFCCA2B361DD44796AF04DDAD009(L_6, ((ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)Castclass((RuntimeObject*)L_8, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var)), /*hidden argument*/AppleReceiptParser_ArrayEquals_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_mBE6123F33FC1CFCCA2B361DD44796AF04DDAD009_RuntimeMethod_var);
		G_B5_0 = ((int32_t)(L_9));
		goto IL_0051;
	}

IL_0050:
	{
		G_B5_0 = 0;
	}

IL_0051:
	{
		V_0 = (bool)G_B5_0;
		bool L_10 = V_0;
		if (!L_10)
		{
			goto IL_0083;
		}
	}
	{
		PKCS7_t851499113E52C57B34831AE4D5AB00C973B7D21A ** L_11 = ___receipt1;
		IL2CPP_RUNTIME_CLASS_INIT(AppleReceiptParser_t34DA429F3553864684768F2E95D35C1D6A90F3E4_il2cpp_TypeInfo_var);
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_12 = ((AppleReceiptParser_t34DA429F3553864684768F2E95D35C1D6A90F3E4_StaticFields*)il2cpp_codegen_static_fields_for(AppleReceiptParser_t34DA429F3553864684768F2E95D35C1D6A90F3E4_il2cpp_TypeInfo_var))->get__mostRecentReceiptData_0();
		NullCheck(L_12);
		RuntimeObject * L_13 = Dictionary_2_get_Item_mB490F7029D7451FAF06E3020040E604B500BA3B2(L_12, _stringLiteral6F3DCE8E6ECB57F69A6AF0D152302713B5DFD69C, /*hidden argument*/Dictionary_2_get_Item_mB490F7029D7451FAF06E3020040E604B500BA3B2_RuntimeMethod_var);
		*((RuntimeObject **)L_11) = (RuntimeObject *)((PKCS7_t851499113E52C57B34831AE4D5AB00C973B7D21A *)CastclassClass((RuntimeObject*)L_13, PKCS7_t851499113E52C57B34831AE4D5AB00C973B7D21A_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_11, (void*)(RuntimeObject *)((PKCS7_t851499113E52C57B34831AE4D5AB00C973B7D21A *)CastclassClass((RuntimeObject*)L_13, PKCS7_t851499113E52C57B34831AE4D5AB00C973B7D21A_il2cpp_TypeInfo_var)));
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_14 = ((AppleReceiptParser_t34DA429F3553864684768F2E95D35C1D6A90F3E4_StaticFields*)il2cpp_codegen_static_fields_for(AppleReceiptParser_t34DA429F3553864684768F2E95D35C1D6A90F3E4_il2cpp_TypeInfo_var))->get__mostRecentReceiptData_0();
		NullCheck(L_14);
		RuntimeObject * L_15 = Dictionary_2_get_Item_mB490F7029D7451FAF06E3020040E604B500BA3B2(L_14, _stringLiteral99052D63E3C8ED1DA4A0A9B5D6E2E8E0290A715E, /*hidden argument*/Dictionary_2_get_Item_mB490F7029D7451FAF06E3020040E604B500BA3B2_RuntimeMethod_var);
		V_1 = ((AppleReceipt_t19AF99FA817972A222A162F65B730C469BFF8698 *)CastclassClass((RuntimeObject*)L_15, AppleReceipt_t19AF99FA817972A222A162F65B730C469BFF8698_il2cpp_TypeInfo_var));
		goto IL_00fa;
	}

IL_0083:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_16 = ___receiptData0;
		MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * L_17 = (MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C *)il2cpp_codegen_object_new(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m731754F1435D29F87C407D84ED47AF35FFF9B0EF(L_17, L_16, /*hidden argument*/NULL);
		V_2 = L_17;
	}

IL_008a:
	try
	{ // begin try (depth: 1)
		Asn1Parser_t6EAA9B28705029F260D90731751E990EF3848620 * L_18 = (Asn1Parser_t6EAA9B28705029F260D90731751E990EF3848620 *)il2cpp_codegen_object_new(Asn1Parser_t6EAA9B28705029F260D90731751E990EF3848620_il2cpp_TypeInfo_var);
		Asn1Parser__ctor_mFFC9A3372F766DBBEE823423DD2D6F9730C84E50(L_18, /*hidden argument*/NULL);
		V_3 = L_18;
		Asn1Parser_t6EAA9B28705029F260D90731751E990EF3848620 * L_19 = V_3;
		MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * L_20 = V_2;
		NullCheck(L_19);
		Asn1Parser_LoadData_mF8B6E7723F02588C758AFF9A34C766B8B4FB03E7(L_19, L_20, /*hidden argument*/NULL);
		PKCS7_t851499113E52C57B34831AE4D5AB00C973B7D21A ** L_21 = ___receipt1;
		Asn1Parser_t6EAA9B28705029F260D90731751E990EF3848620 * L_22 = V_3;
		NullCheck(L_22);
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_23 = Asn1Parser_get_RootNode_mA653B5BBF9063F293E981D45AF3FC82E4E4DFD43(L_22, /*hidden argument*/NULL);
		PKCS7_t851499113E52C57B34831AE4D5AB00C973B7D21A * L_24 = (PKCS7_t851499113E52C57B34831AE4D5AB00C973B7D21A *)il2cpp_codegen_object_new(PKCS7_t851499113E52C57B34831AE4D5AB00C973B7D21A_il2cpp_TypeInfo_var);
		PKCS7__ctor_mDAC6EAC1F6F37BF80B57CD922FEB28D5C7905317(L_24, L_23, /*hidden argument*/NULL);
		*((RuntimeObject **)L_21) = (RuntimeObject *)L_24;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_21, (void*)(RuntimeObject *)L_24);
		PKCS7_t851499113E52C57B34831AE4D5AB00C973B7D21A ** L_25 = ___receipt1;
		PKCS7_t851499113E52C57B34831AE4D5AB00C973B7D21A * L_26 = *((PKCS7_t851499113E52C57B34831AE4D5AB00C973B7D21A **)L_25);
		NullCheck(L_26);
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_27 = PKCS7_get_data_m6C282961220626FDCDF7A0BCD869C8F37BD01554_inline(L_26, /*hidden argument*/NULL);
		AppleReceipt_t19AF99FA817972A222A162F65B730C469BFF8698 * L_28 = AppleReceiptParser_ParseReceipt_m8104213AF42B03EFDE42CCD556A99CBD8DAA80AC(__this, L_27, /*hidden argument*/NULL);
		V_4 = L_28;
		IL2CPP_RUNTIME_CLASS_INIT(AppleReceiptParser_t34DA429F3553864684768F2E95D35C1D6A90F3E4_il2cpp_TypeInfo_var);
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_29 = ((AppleReceiptParser_t34DA429F3553864684768F2E95D35C1D6A90F3E4_StaticFields*)il2cpp_codegen_static_fields_for(AppleReceiptParser_t34DA429F3553864684768F2E95D35C1D6A90F3E4_il2cpp_TypeInfo_var))->get__mostRecentReceiptData_0();
		AppleReceipt_t19AF99FA817972A222A162F65B730C469BFF8698 * L_30 = V_4;
		NullCheck(L_29);
		Dictionary_2_set_Item_mEA41AEAE79570A9410777F6B90969532564025DD(L_29, _stringLiteral99052D63E3C8ED1DA4A0A9B5D6E2E8E0290A715E, L_30, /*hidden argument*/Dictionary_2_set_Item_mEA41AEAE79570A9410777F6B90969532564025DD_RuntimeMethod_var);
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_31 = ((AppleReceiptParser_t34DA429F3553864684768F2E95D35C1D6A90F3E4_StaticFields*)il2cpp_codegen_static_fields_for(AppleReceiptParser_t34DA429F3553864684768F2E95D35C1D6A90F3E4_il2cpp_TypeInfo_var))->get__mostRecentReceiptData_0();
		PKCS7_t851499113E52C57B34831AE4D5AB00C973B7D21A ** L_32 = ___receipt1;
		PKCS7_t851499113E52C57B34831AE4D5AB00C973B7D21A * L_33 = *((PKCS7_t851499113E52C57B34831AE4D5AB00C973B7D21A **)L_32);
		NullCheck(L_31);
		Dictionary_2_set_Item_mEA41AEAE79570A9410777F6B90969532564025DD(L_31, _stringLiteral6F3DCE8E6ECB57F69A6AF0D152302713B5DFD69C, L_33, /*hidden argument*/Dictionary_2_set_Item_mEA41AEAE79570A9410777F6B90969532564025DD_RuntimeMethod_var);
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_34 = ((AppleReceiptParser_t34DA429F3553864684768F2E95D35C1D6A90F3E4_StaticFields*)il2cpp_codegen_static_fields_for(AppleReceiptParser_t34DA429F3553864684768F2E95D35C1D6A90F3E4_il2cpp_TypeInfo_var))->get__mostRecentReceiptData_0();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_35 = ___receiptData0;
		NullCheck(L_34);
		Dictionary_2_set_Item_mEA41AEAE79570A9410777F6B90969532564025DD(L_34, _stringLiteralEEE5779991A5565F1F83AF07247DB16D55D9365B, (RuntimeObject *)(RuntimeObject *)L_35, /*hidden argument*/Dictionary_2_set_Item_mEA41AEAE79570A9410777F6B90969532564025DD_RuntimeMethod_var);
		AppleReceipt_t19AF99FA817972A222A162F65B730C469BFF8698 * L_36 = V_4;
		V_1 = L_36;
		IL2CPP_LEAVE(0xFA, FINALLY_00ef);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00ef;
	}

FINALLY_00ef:
	{ // begin finally (depth: 1)
		{
			MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * L_37 = V_2;
			if (!L_37)
			{
				goto IL_00f9;
			}
		}

IL_00f2:
		{
			MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * L_38 = V_2;
			NullCheck(L_38);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_38);
		}

IL_00f9:
		{
			IL2CPP_END_FINALLY(239)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(239)
	{
		IL2CPP_JUMP_TBL(0xFA, IL_00fa)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00fa:
	{
		AppleReceipt_t19AF99FA817972A222A162F65B730C469BFF8698 * L_39 = V_1;
		return L_39;
	}
}
// UnityEngine.Purchasing.Security.AppleReceipt UnityEngine.Purchasing.Security.AppleReceiptParser::ParseReceipt(LipingShare.LCLib.Asn1Processor.Asn1Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppleReceipt_t19AF99FA817972A222A162F65B730C469BFF8698 * AppleReceiptParser_ParseReceipt_m8104213AF42B03EFDE42CCD556A99CBD8DAA80AC (AppleReceiptParser_t34DA429F3553864684768F2E95D35C1D6A90F3E4 * __this, Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AppleReceiptParser_ParseReceipt_m8104213AF42B03EFDE42CCD556A99CBD8DAA80AC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * V_0 = NULL;
	AppleReceipt_t19AF99FA817972A222A162F65B730C469BFF8698 * V_1 = NULL;
	List_1_tEA4ACF1E95999E8EC25D6544E307BD87261ADFC9 * V_2 = NULL;
	bool V_3 = false;
	int32_t V_4 = 0;
	Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * V_5 = NULL;
	bool V_6 = false;
	int64_t V_7 = 0;
	Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * V_8 = NULL;
	String_t* V_9 = NULL;
	int64_t V_10 = 0;
	int64_t V_11 = 0;
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  V_12;
	memset((&V_12), 0, sizeof(V_12));
	bool V_13 = false;
	AppleReceipt_t19AF99FA817972A222A162F65B730C469BFF8698 * V_14 = NULL;
	int32_t G_B3_0 = 0;
	int64_t G_B10_0 = 0;
	int64_t G_B9_0 = 0;
	{
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_0 = ___data0;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_1 = ___data0;
		NullCheck(L_1);
		int64_t L_2 = Asn1Node_get_ChildNodeCount_mF517D478344A4AF6843BE4319A05D248B6B25FAC(L_1, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)((((int64_t)L_2) == ((int64_t)(((int64_t)((int64_t)1)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 1;
	}

IL_0014:
	{
		V_3 = (bool)G_B3_0;
		bool L_3 = V_3;
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		InvalidPKCS7Data_t66D90EB0467E0D800AA9F61CF113C851101D136A * L_4 = (InvalidPKCS7Data_t66D90EB0467E0D800AA9F61CF113C851101D136A *)il2cpp_codegen_object_new(InvalidPKCS7Data_t66D90EB0467E0D800AA9F61CF113C851101D136A_il2cpp_TypeInfo_var);
		InvalidPKCS7Data__ctor_mD66D69E4C6C7B78CCA72012A8886107CB59BBBA3(L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, AppleReceiptParser_ParseReceipt_m8104213AF42B03EFDE42CCD556A99CBD8DAA80AC_RuntimeMethod_var);
	}

IL_001f:
	{
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_5 = ___data0;
		NullCheck(L_5);
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_6 = Asn1Node_GetChildNode_m9D9513B22B565B7739D03F39C6B8F7D5AFE85010(L_5, 0, /*hidden argument*/NULL);
		V_0 = L_6;
		AppleReceipt_t19AF99FA817972A222A162F65B730C469BFF8698 * L_7 = (AppleReceipt_t19AF99FA817972A222A162F65B730C469BFF8698 *)il2cpp_codegen_object_new(AppleReceipt_t19AF99FA817972A222A162F65B730C469BFF8698_il2cpp_TypeInfo_var);
		AppleReceipt__ctor_mACEC3DD73DF3BF61043E79171F0BE783DE45C8C3(L_7, /*hidden argument*/NULL);
		V_1 = L_7;
		List_1_tEA4ACF1E95999E8EC25D6544E307BD87261ADFC9 * L_8 = (List_1_tEA4ACF1E95999E8EC25D6544E307BD87261ADFC9 *)il2cpp_codegen_object_new(List_1_tEA4ACF1E95999E8EC25D6544E307BD87261ADFC9_il2cpp_TypeInfo_var);
		List_1__ctor_m3130DE70A254B5EDFE35D7D1A249F3308756C34B(L_8, /*hidden argument*/List_1__ctor_m3130DE70A254B5EDFE35D7D1A249F3308756C34B_RuntimeMethod_var);
		V_2 = L_8;
		V_4 = 0;
		goto IL_01ae;
	}

IL_003b:
	{
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_9 = V_0;
		int32_t L_10 = V_4;
		NullCheck(L_9);
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_11 = Asn1Node_GetChildNode_m9D9513B22B565B7739D03F39C6B8F7D5AFE85010(L_9, L_10, /*hidden argument*/NULL);
		V_5 = L_11;
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_12 = V_5;
		NullCheck(L_12);
		int64_t L_13 = Asn1Node_get_ChildNodeCount_mF517D478344A4AF6843BE4319A05D248B6B25FAC(L_12, /*hidden argument*/NULL);
		V_6 = (bool)((((int64_t)L_13) == ((int64_t)(((int64_t)((int64_t)3)))))? 1 : 0);
		bool L_14 = V_6;
		if (!L_14)
		{
			goto IL_01a7;
		}
	}
	{
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_15 = V_5;
		NullCheck(L_15);
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_16 = Asn1Node_GetChildNode_m9D9513B22B565B7739D03F39C6B8F7D5AFE85010(L_15, 0, /*hidden argument*/NULL);
		NullCheck(L_16);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_17 = Asn1Node_get_Data_mD11992CD2F1CCEC2B0E47491D3B6AF04F9C34EC7(L_16, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_tBFEA56D2C3543BF68547786BAE0EC50B2DEE0886_il2cpp_TypeInfo_var);
		int64_t L_18 = Asn1Util_BytesToLong_m9D73FD300DA3D8037E90E580318E1F9E4EA5FDFF(L_17, /*hidden argument*/NULL);
		V_7 = L_18;
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_19 = V_5;
		NullCheck(L_19);
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_20 = Asn1Node_GetChildNode_m9D9513B22B565B7739D03F39C6B8F7D5AFE85010(L_19, 2, /*hidden argument*/NULL);
		V_8 = L_20;
		int64_t L_21 = V_7;
		V_11 = L_21;
		int64_t L_22 = V_11;
		V_10 = L_22;
		int64_t L_23 = V_10;
		if ((((int64_t)L_23) > ((int64_t)(((int64_t)((int64_t)((int32_t)12)))))))
		{
			goto IL_00bc;
		}
	}
	{
		int64_t L_24 = V_10;
		int64_t L_25 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_24, (int64_t)(((int64_t)((int64_t)2)))));
		G_B9_0 = L_25;
		if ((!(((uint64_t)L_25) > ((uint64_t)(((int64_t)((int64_t)3)))))))
		{
			G_B10_0 = L_25;
			goto IL_0095;
		}
	}
	{
		goto IL_00ad;
	}

IL_0095:
	{
		switch ((((int32_t)((uint32_t)G_B10_0))))
		{
			case 0:
			{
				goto IL_00d7;
			}
			case 1:
			{
				goto IL_00fa;
			}
			case 2:
			{
				goto IL_011d;
			}
			case 3:
			{
				goto IL_012d;
			}
		}
	}
	{
		goto IL_00ad;
	}

IL_00ad:
	{
		int64_t L_26 = V_10;
		if ((((int64_t)L_26) == ((int64_t)(((int64_t)((int64_t)((int32_t)12)))))))
		{
			goto IL_013d;
		}
	}
	{
		goto IL_01a6;
	}

IL_00bc:
	{
		int64_t L_27 = V_10;
		if ((((int64_t)L_27) == ((int64_t)(((int64_t)((int64_t)((int32_t)17)))))))
		{
			goto IL_016f;
		}
	}
	{
		goto IL_00c8;
	}

IL_00c8:
	{
		int64_t L_28 = V_10;
		if ((((int64_t)L_28) == ((int64_t)(((int64_t)((int64_t)((int32_t)19)))))))
		{
			goto IL_0186;
		}
	}
	{
		goto IL_01a6;
	}

IL_00d7:
	{
		AppleReceipt_t19AF99FA817972A222A162F65B730C469BFF8698 * L_29 = V_1;
		Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_30 = Encoding_get_UTF8_m67C8652936B681E7BC7505E459E88790E0FF16D9(/*hidden argument*/NULL);
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_31 = V_8;
		NullCheck(L_31);
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_32 = Asn1Node_GetChildNode_m9D9513B22B565B7739D03F39C6B8F7D5AFE85010(L_31, 0, /*hidden argument*/NULL);
		NullCheck(L_32);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_33 = Asn1Node_get_Data_mD11992CD2F1CCEC2B0E47491D3B6AF04F9C34EC7(L_32, /*hidden argument*/NULL);
		NullCheck(L_30);
		String_t* L_34 = VirtFuncInvoker1< String_t*, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_30, L_33);
		NullCheck(L_29);
		AppleReceipt_set_bundleID_m3821E9162753D78429421EC4BA8D0F2778A99728_inline(L_29, L_34, /*hidden argument*/NULL);
		goto IL_01a6;
	}

IL_00fa:
	{
		AppleReceipt_t19AF99FA817972A222A162F65B730C469BFF8698 * L_35 = V_1;
		Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_36 = Encoding_get_UTF8_m67C8652936B681E7BC7505E459E88790E0FF16D9(/*hidden argument*/NULL);
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_37 = V_8;
		NullCheck(L_37);
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_38 = Asn1Node_GetChildNode_m9D9513B22B565B7739D03F39C6B8F7D5AFE85010(L_37, 0, /*hidden argument*/NULL);
		NullCheck(L_38);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_39 = Asn1Node_get_Data_mD11992CD2F1CCEC2B0E47491D3B6AF04F9C34EC7(L_38, /*hidden argument*/NULL);
		NullCheck(L_36);
		String_t* L_40 = VirtFuncInvoker1< String_t*, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_36, L_39);
		NullCheck(L_35);
		AppleReceipt_set_appVersion_mA8B0F89E3FECB6154C0C7F9E50AE662F362219AB_inline(L_35, L_40, /*hidden argument*/NULL);
		goto IL_01a6;
	}

IL_011d:
	{
		AppleReceipt_t19AF99FA817972A222A162F65B730C469BFF8698 * L_41 = V_1;
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_42 = V_8;
		NullCheck(L_42);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_43 = Asn1Node_get_Data_mD11992CD2F1CCEC2B0E47491D3B6AF04F9C34EC7(L_42, /*hidden argument*/NULL);
		NullCheck(L_41);
		AppleReceipt_set_opaque_m5B8F9DBF8FE29162066ACE5A77C48A1058BDDAE4_inline(L_41, L_43, /*hidden argument*/NULL);
		goto IL_01a6;
	}

IL_012d:
	{
		AppleReceipt_t19AF99FA817972A222A162F65B730C469BFF8698 * L_44 = V_1;
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_45 = V_8;
		NullCheck(L_45);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_46 = Asn1Node_get_Data_mD11992CD2F1CCEC2B0E47491D3B6AF04F9C34EC7(L_45, /*hidden argument*/NULL);
		NullCheck(L_44);
		AppleReceipt_set_hash_mF81CA1CFD1060539BCC217FA9AF2CB665E1F8DE3_inline(L_44, L_46, /*hidden argument*/NULL);
		goto IL_01a6;
	}

IL_013d:
	{
		Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_47 = Encoding_get_UTF8_m67C8652936B681E7BC7505E459E88790E0FF16D9(/*hidden argument*/NULL);
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_48 = V_8;
		NullCheck(L_48);
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_49 = Asn1Node_GetChildNode_m9D9513B22B565B7739D03F39C6B8F7D5AFE85010(L_48, 0, /*hidden argument*/NULL);
		NullCheck(L_49);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_50 = Asn1Node_get_Data_mD11992CD2F1CCEC2B0E47491D3B6AF04F9C34EC7(L_49, /*hidden argument*/NULL);
		NullCheck(L_47);
		String_t* L_51 = VirtFuncInvoker1< String_t*, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_47, L_50);
		V_9 = L_51;
		AppleReceipt_t19AF99FA817972A222A162F65B730C469BFF8698 * L_52 = V_1;
		String_t* L_53 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var);
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_54 = DateTime_Parse_mB1F4939B2FFBE63D10A65D1BC801FFA3207F1C09(L_53, /*hidden argument*/NULL);
		V_12 = L_54;
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_55 = DateTime_ToUniversalTime_mA8B74D947E186568C55D9C6F56D59F9A3C7775B1((DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 *)(&V_12), /*hidden argument*/NULL);
		NullCheck(L_52);
		AppleReceipt_set_receiptCreationDate_m9EDA99CB584C1867F28167E00203C3D5C05E8553_inline(L_52, L_55, /*hidden argument*/NULL);
		goto IL_01a6;
	}

IL_016f:
	{
		List_1_tEA4ACF1E95999E8EC25D6544E307BD87261ADFC9 * L_56 = V_2;
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_57 = V_8;
		NullCheck(L_57);
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_58 = Asn1Node_GetChildNode_m9D9513B22B565B7739D03F39C6B8F7D5AFE85010(L_57, 0, /*hidden argument*/NULL);
		AppleInAppPurchaseReceipt_t8495AF48B320D4EA26939FA02F9BA8784CF02F90 * L_59 = AppleReceiptParser_ParseInAppReceipt_m9C2C6064E5AA40BD67B0D2B07393576E4A7B5E17(__this, L_58, /*hidden argument*/NULL);
		NullCheck(L_56);
		List_1_Add_m48E5F21339F7EFA4099CAEFAB627A45367BD7AAF(L_56, L_59, /*hidden argument*/List_1_Add_m48E5F21339F7EFA4099CAEFAB627A45367BD7AAF_RuntimeMethod_var);
		goto IL_01a6;
	}

IL_0186:
	{
		AppleReceipt_t19AF99FA817972A222A162F65B730C469BFF8698 * L_60 = V_1;
		Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_61 = Encoding_get_UTF8_m67C8652936B681E7BC7505E459E88790E0FF16D9(/*hidden argument*/NULL);
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_62 = V_8;
		NullCheck(L_62);
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_63 = Asn1Node_GetChildNode_m9D9513B22B565B7739D03F39C6B8F7D5AFE85010(L_62, 0, /*hidden argument*/NULL);
		NullCheck(L_63);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_64 = Asn1Node_get_Data_mD11992CD2F1CCEC2B0E47491D3B6AF04F9C34EC7(L_63, /*hidden argument*/NULL);
		NullCheck(L_61);
		String_t* L_65 = VirtFuncInvoker1< String_t*, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_61, L_64);
		NullCheck(L_60);
		AppleReceipt_set_originalApplicationVersion_m21509B22052C125E8E05D06731406D86DA36270B_inline(L_60, L_65, /*hidden argument*/NULL);
		goto IL_01a6;
	}

IL_01a6:
	{
	}

IL_01a7:
	{
		int32_t L_66 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_66, (int32_t)1));
	}

IL_01ae:
	{
		int32_t L_67 = V_4;
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_68 = V_0;
		NullCheck(L_68);
		int64_t L_69 = Asn1Node_get_ChildNodeCount_mF517D478344A4AF6843BE4319A05D248B6B25FAC(L_68, /*hidden argument*/NULL);
		V_13 = (bool)((((int64_t)(((int64_t)((int64_t)L_67)))) < ((int64_t)L_69))? 1 : 0);
		bool L_70 = V_13;
		if (L_70)
		{
			goto IL_003b;
		}
	}
	{
		AppleReceipt_t19AF99FA817972A222A162F65B730C469BFF8698 * L_71 = V_1;
		List_1_tEA4ACF1E95999E8EC25D6544E307BD87261ADFC9 * L_72 = V_2;
		NullCheck(L_72);
		AppleInAppPurchaseReceiptU5BU5D_tF628955FD1FC660B5652CC727A20066839251DA8* L_73 = List_1_ToArray_m79904C3E54880608C5AD2D31B799A194B27AB4A2(L_72, /*hidden argument*/List_1_ToArray_m79904C3E54880608C5AD2D31B799A194B27AB4A2_RuntimeMethod_var);
		NullCheck(L_71);
		L_71->set_inAppPurchaseReceipts_6(L_73);
		AppleReceipt_t19AF99FA817972A222A162F65B730C469BFF8698 * L_74 = V_1;
		V_14 = L_74;
		goto IL_01d3;
	}

IL_01d3:
	{
		AppleReceipt_t19AF99FA817972A222A162F65B730C469BFF8698 * L_75 = V_14;
		return L_75;
	}
}
// UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt UnityEngine.Purchasing.Security.AppleReceiptParser::ParseInAppReceipt(LipingShare.LCLib.Asn1Processor.Asn1Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppleInAppPurchaseReceipt_t8495AF48B320D4EA26939FA02F9BA8784CF02F90 * AppleReceiptParser_ParseInAppReceipt_m9C2C6064E5AA40BD67B0D2B07393576E4A7B5E17 (AppleReceiptParser_t34DA429F3553864684768F2E95D35C1D6A90F3E4 * __this, Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * ___inApp0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AppleReceiptParser_ParseInAppReceipt_m9C2C6064E5AA40BD67B0D2B07393576E4A7B5E17_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AppleInAppPurchaseReceipt_t8495AF48B320D4EA26939FA02F9BA8784CF02F90 * V_0 = NULL;
	int32_t V_1 = 0;
	Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * V_2 = NULL;
	bool V_3 = false;
	int64_t V_4 = 0;
	Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * V_5 = NULL;
	int64_t V_6 = 0;
	int64_t V_7 = 0;
	bool V_8 = false;
	AppleInAppPurchaseReceipt_t8495AF48B320D4EA26939FA02F9BA8784CF02F90 * V_9 = NULL;
	int64_t G_B4_0 = 0;
	int64_t G_B3_0 = 0;
	{
		AppleInAppPurchaseReceipt_t8495AF48B320D4EA26939FA02F9BA8784CF02F90 * L_0 = (AppleInAppPurchaseReceipt_t8495AF48B320D4EA26939FA02F9BA8784CF02F90 *)il2cpp_codegen_object_new(AppleInAppPurchaseReceipt_t8495AF48B320D4EA26939FA02F9BA8784CF02F90_il2cpp_TypeInfo_var);
		AppleInAppPurchaseReceipt__ctor_m36719FC02F05F402168673BF83E4AB963804981C(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		V_1 = 0;
		goto IL_01e0;
	}

IL_000e:
	{
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_1 = ___inApp0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_3 = Asn1Node_GetChildNode_m9D9513B22B565B7739D03F39C6B8F7D5AFE85010(L_1, L_2, /*hidden argument*/NULL);
		V_2 = L_3;
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_4 = V_2;
		NullCheck(L_4);
		int64_t L_5 = Asn1Node_get_ChildNodeCount_mF517D478344A4AF6843BE4319A05D248B6B25FAC(L_4, /*hidden argument*/NULL);
		V_3 = (bool)((((int64_t)L_5) == ((int64_t)(((int64_t)((int64_t)3)))))? 1 : 0);
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_01db;
		}
	}
	{
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_7 = V_2;
		NullCheck(L_7);
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_8 = Asn1Node_GetChildNode_m9D9513B22B565B7739D03F39C6B8F7D5AFE85010(L_7, 0, /*hidden argument*/NULL);
		NullCheck(L_8);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_9 = Asn1Node_get_Data_mD11992CD2F1CCEC2B0E47491D3B6AF04F9C34EC7(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_tBFEA56D2C3543BF68547786BAE0EC50B2DEE0886_il2cpp_TypeInfo_var);
		int64_t L_10 = Asn1Util_BytesToLong_m9D73FD300DA3D8037E90E580318E1F9E4EA5FDFF(L_9, /*hidden argument*/NULL);
		V_4 = L_10;
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_11 = V_2;
		NullCheck(L_11);
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_12 = Asn1Node_GetChildNode_m9D9513B22B565B7739D03F39C6B8F7D5AFE85010(L_11, 2, /*hidden argument*/NULL);
		V_5 = L_12;
		int64_t L_13 = V_4;
		V_7 = L_13;
		int64_t L_14 = V_7;
		V_6 = L_14;
		int64_t L_15 = V_6;
		int64_t L_16 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_15, (int64_t)(((int64_t)((int64_t)((int32_t)1701))))));
		G_B3_0 = L_16;
		if ((!(((uint64_t)L_16) > ((uint64_t)(((int64_t)((int64_t)((int32_t)18))))))))
		{
			G_B4_0 = L_16;
			goto IL_0062;
		}
	}
	{
		goto IL_01d8;
	}

IL_0062:
	{
		switch ((((int32_t)((uint32_t)G_B4_0))))
		{
			case 0:
			{
				goto IL_00b9;
			}
			case 1:
			{
				goto IL_00d8;
			}
			case 2:
			{
				goto IL_00fb;
			}
			case 3:
			{
				goto IL_0141;
			}
			case 4:
			{
				goto IL_011e;
			}
			case 5:
			{
				goto IL_0154;
			}
			case 6:
			{
				goto IL_0184;
			}
			case 7:
			{
				goto IL_0164;
			}
			case 8:
			{
				goto IL_01d8;
			}
			case 9:
			{
				goto IL_01d8;
			}
			case 10:
			{
				goto IL_01d8;
			}
			case 11:
			{
				goto IL_0174;
			}
			case 12:
			{
				goto IL_01a0;
			}
			case 13:
			{
				goto IL_01d8;
			}
			case 14:
			{
				goto IL_01d8;
			}
			case 15:
			{
				goto IL_01d8;
			}
			case 16:
			{
				goto IL_01d8;
			}
			case 17:
			{
				goto IL_01d8;
			}
			case 18:
			{
				goto IL_01bc;
			}
		}
	}
	{
		goto IL_01d8;
	}

IL_00b9:
	{
		AppleInAppPurchaseReceipt_t8495AF48B320D4EA26939FA02F9BA8784CF02F90 * L_17 = V_0;
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_18 = V_5;
		NullCheck(L_18);
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_19 = Asn1Node_GetChildNode_m9D9513B22B565B7739D03F39C6B8F7D5AFE85010(L_18, 0, /*hidden argument*/NULL);
		NullCheck(L_19);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_20 = Asn1Node_get_Data_mD11992CD2F1CCEC2B0E47491D3B6AF04F9C34EC7(L_19, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_tBFEA56D2C3543BF68547786BAE0EC50B2DEE0886_il2cpp_TypeInfo_var);
		int64_t L_21 = Asn1Util_BytesToLong_m9D73FD300DA3D8037E90E580318E1F9E4EA5FDFF(L_20, /*hidden argument*/NULL);
		NullCheck(L_17);
		AppleInAppPurchaseReceipt_set_quantity_mD99AD9ADBE95FB0A32B3DAB6AFBA4D3C9CE34193_inline(L_17, (((int32_t)((int32_t)L_21))), /*hidden argument*/NULL);
		goto IL_01da;
	}

IL_00d8:
	{
		AppleInAppPurchaseReceipt_t8495AF48B320D4EA26939FA02F9BA8784CF02F90 * L_22 = V_0;
		Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_23 = Encoding_get_UTF8_m67C8652936B681E7BC7505E459E88790E0FF16D9(/*hidden argument*/NULL);
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_24 = V_5;
		NullCheck(L_24);
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_25 = Asn1Node_GetChildNode_m9D9513B22B565B7739D03F39C6B8F7D5AFE85010(L_24, 0, /*hidden argument*/NULL);
		NullCheck(L_25);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_26 = Asn1Node_get_Data_mD11992CD2F1CCEC2B0E47491D3B6AF04F9C34EC7(L_25, /*hidden argument*/NULL);
		NullCheck(L_23);
		String_t* L_27 = VirtFuncInvoker1< String_t*, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_23, L_26);
		NullCheck(L_22);
		AppleInAppPurchaseReceipt_set_productID_mD2E88AA98AE32A27EF3245ED271C6492274BA7BB_inline(L_22, L_27, /*hidden argument*/NULL);
		goto IL_01da;
	}

IL_00fb:
	{
		AppleInAppPurchaseReceipt_t8495AF48B320D4EA26939FA02F9BA8784CF02F90 * L_28 = V_0;
		Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_29 = Encoding_get_UTF8_m67C8652936B681E7BC7505E459E88790E0FF16D9(/*hidden argument*/NULL);
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_30 = V_5;
		NullCheck(L_30);
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_31 = Asn1Node_GetChildNode_m9D9513B22B565B7739D03F39C6B8F7D5AFE85010(L_30, 0, /*hidden argument*/NULL);
		NullCheck(L_31);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_32 = Asn1Node_get_Data_mD11992CD2F1CCEC2B0E47491D3B6AF04F9C34EC7(L_31, /*hidden argument*/NULL);
		NullCheck(L_29);
		String_t* L_33 = VirtFuncInvoker1< String_t*, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_29, L_32);
		NullCheck(L_28);
		AppleInAppPurchaseReceipt_set_transactionID_m80F1DB67E4887070699C6D72CC25538AD3676820_inline(L_28, L_33, /*hidden argument*/NULL);
		goto IL_01da;
	}

IL_011e:
	{
		AppleInAppPurchaseReceipt_t8495AF48B320D4EA26939FA02F9BA8784CF02F90 * L_34 = V_0;
		Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_35 = Encoding_get_UTF8_m67C8652936B681E7BC7505E459E88790E0FF16D9(/*hidden argument*/NULL);
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_36 = V_5;
		NullCheck(L_36);
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_37 = Asn1Node_GetChildNode_m9D9513B22B565B7739D03F39C6B8F7D5AFE85010(L_36, 0, /*hidden argument*/NULL);
		NullCheck(L_37);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_38 = Asn1Node_get_Data_mD11992CD2F1CCEC2B0E47491D3B6AF04F9C34EC7(L_37, /*hidden argument*/NULL);
		NullCheck(L_35);
		String_t* L_39 = VirtFuncInvoker1< String_t*, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_35, L_38);
		NullCheck(L_34);
		AppleInAppPurchaseReceipt_set_originalTransactionIdentifier_mD8BA44FD3F7952131AAB1D3023BEEA543F75810E_inline(L_34, L_39, /*hidden argument*/NULL);
		goto IL_01da;
	}

IL_0141:
	{
		AppleInAppPurchaseReceipt_t8495AF48B320D4EA26939FA02F9BA8784CF02F90 * L_40 = V_0;
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_41 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(AppleReceiptParser_t34DA429F3553864684768F2E95D35C1D6A90F3E4_il2cpp_TypeInfo_var);
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_42 = AppleReceiptParser_TryParseDateTimeNode_m62DA626A30540CF79C556D30DBB891443EAB802D(L_41, /*hidden argument*/NULL);
		NullCheck(L_40);
		AppleInAppPurchaseReceipt_set_purchaseDate_m2DB360E7CC577E809CE405E0DF013C1B243640BA_inline(L_40, L_42, /*hidden argument*/NULL);
		goto IL_01da;
	}

IL_0154:
	{
		AppleInAppPurchaseReceipt_t8495AF48B320D4EA26939FA02F9BA8784CF02F90 * L_43 = V_0;
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_44 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(AppleReceiptParser_t34DA429F3553864684768F2E95D35C1D6A90F3E4_il2cpp_TypeInfo_var);
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_45 = AppleReceiptParser_TryParseDateTimeNode_m62DA626A30540CF79C556D30DBB891443EAB802D(L_44, /*hidden argument*/NULL);
		NullCheck(L_43);
		AppleInAppPurchaseReceipt_set_originalPurchaseDate_m11819E1F354A5352A36FD6EF9CAB4789C0B9BA3A_inline(L_43, L_45, /*hidden argument*/NULL);
		goto IL_01da;
	}

IL_0164:
	{
		AppleInAppPurchaseReceipt_t8495AF48B320D4EA26939FA02F9BA8784CF02F90 * L_46 = V_0;
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_47 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(AppleReceiptParser_t34DA429F3553864684768F2E95D35C1D6A90F3E4_il2cpp_TypeInfo_var);
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_48 = AppleReceiptParser_TryParseDateTimeNode_m62DA626A30540CF79C556D30DBB891443EAB802D(L_47, /*hidden argument*/NULL);
		NullCheck(L_46);
		AppleInAppPurchaseReceipt_set_subscriptionExpirationDate_m41872BB77B62E333157EA7A827071C8542ABEA30_inline(L_46, L_48, /*hidden argument*/NULL);
		goto IL_01da;
	}

IL_0174:
	{
		AppleInAppPurchaseReceipt_t8495AF48B320D4EA26939FA02F9BA8784CF02F90 * L_49 = V_0;
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_50 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(AppleReceiptParser_t34DA429F3553864684768F2E95D35C1D6A90F3E4_il2cpp_TypeInfo_var);
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_51 = AppleReceiptParser_TryParseDateTimeNode_m62DA626A30540CF79C556D30DBB891443EAB802D(L_50, /*hidden argument*/NULL);
		NullCheck(L_49);
		AppleInAppPurchaseReceipt_set_cancellationDate_mE7DC7F5CCD7B31266F9B023DDFBED321402CC544_inline(L_49, L_51, /*hidden argument*/NULL);
		goto IL_01da;
	}

IL_0184:
	{
		AppleInAppPurchaseReceipt_t8495AF48B320D4EA26939FA02F9BA8784CF02F90 * L_52 = V_0;
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_53 = V_5;
		NullCheck(L_53);
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_54 = Asn1Node_GetChildNode_m9D9513B22B565B7739D03F39C6B8F7D5AFE85010(L_53, 0, /*hidden argument*/NULL);
		NullCheck(L_54);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_55 = Asn1Node_get_Data_mD11992CD2F1CCEC2B0E47491D3B6AF04F9C34EC7(L_54, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_tBFEA56D2C3543BF68547786BAE0EC50B2DEE0886_il2cpp_TypeInfo_var);
		int64_t L_56 = Asn1Util_BytesToLong_m9D73FD300DA3D8037E90E580318E1F9E4EA5FDFF(L_55, /*hidden argument*/NULL);
		NullCheck(L_52);
		AppleInAppPurchaseReceipt_set_productType_m582A75CEB8A3689CA224DFABE49C46F1B02528A1_inline(L_52, (((int32_t)((int32_t)L_56))), /*hidden argument*/NULL);
		goto IL_01da;
	}

IL_01a0:
	{
		AppleInAppPurchaseReceipt_t8495AF48B320D4EA26939FA02F9BA8784CF02F90 * L_57 = V_0;
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_58 = V_5;
		NullCheck(L_58);
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_59 = Asn1Node_GetChildNode_m9D9513B22B565B7739D03F39C6B8F7D5AFE85010(L_58, 0, /*hidden argument*/NULL);
		NullCheck(L_59);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_60 = Asn1Node_get_Data_mD11992CD2F1CCEC2B0E47491D3B6AF04F9C34EC7(L_59, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_tBFEA56D2C3543BF68547786BAE0EC50B2DEE0886_il2cpp_TypeInfo_var);
		int64_t L_61 = Asn1Util_BytesToLong_m9D73FD300DA3D8037E90E580318E1F9E4EA5FDFF(L_60, /*hidden argument*/NULL);
		NullCheck(L_57);
		AppleInAppPurchaseReceipt_set_isFreeTrial_m6232530EC0949863A8AD14211670A2A99298A72A_inline(L_57, (((int32_t)((int32_t)L_61))), /*hidden argument*/NULL);
		goto IL_01da;
	}

IL_01bc:
	{
		AppleInAppPurchaseReceipt_t8495AF48B320D4EA26939FA02F9BA8784CF02F90 * L_62 = V_0;
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_63 = V_5;
		NullCheck(L_63);
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_64 = Asn1Node_GetChildNode_m9D9513B22B565B7739D03F39C6B8F7D5AFE85010(L_63, 0, /*hidden argument*/NULL);
		NullCheck(L_64);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_65 = Asn1Node_get_Data_mD11992CD2F1CCEC2B0E47491D3B6AF04F9C34EC7(L_64, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_tBFEA56D2C3543BF68547786BAE0EC50B2DEE0886_il2cpp_TypeInfo_var);
		int64_t L_66 = Asn1Util_BytesToLong_m9D73FD300DA3D8037E90E580318E1F9E4EA5FDFF(L_65, /*hidden argument*/NULL);
		NullCheck(L_62);
		AppleInAppPurchaseReceipt_set_isIntroductoryPricePeriod_mD5853FF32DB39162C98FAE1587004D73D083BC31_inline(L_62, (((int32_t)((int32_t)L_66))), /*hidden argument*/NULL);
		goto IL_01da;
	}

IL_01d8:
	{
		goto IL_01da;
	}

IL_01da:
	{
	}

IL_01db:
	{
		int32_t L_67 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_67, (int32_t)1));
	}

IL_01e0:
	{
		int32_t L_68 = V_1;
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_69 = ___inApp0;
		NullCheck(L_69);
		int64_t L_70 = Asn1Node_get_ChildNodeCount_mF517D478344A4AF6843BE4319A05D248B6B25FAC(L_69, /*hidden argument*/NULL);
		V_8 = (bool)((((int64_t)(((int64_t)((int64_t)L_68)))) < ((int64_t)L_70))? 1 : 0);
		bool L_71 = V_8;
		if (L_71)
		{
			goto IL_000e;
		}
	}
	{
		AppleInAppPurchaseReceipt_t8495AF48B320D4EA26939FA02F9BA8784CF02F90 * L_72 = V_0;
		V_9 = L_72;
		goto IL_01f8;
	}

IL_01f8:
	{
		AppleInAppPurchaseReceipt_t8495AF48B320D4EA26939FA02F9BA8784CF02F90 * L_73 = V_9;
		return L_73;
	}
}
// System.DateTime UnityEngine.Purchasing.Security.AppleReceiptParser::TryParseDateTimeNode(LipingShare.LCLib.Asn1Processor.Asn1Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  AppleReceiptParser_TryParseDateTimeNode_m62DA626A30540CF79C556D30DBB891443EAB802D (Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * ___node0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AppleReceiptParser_TryParseDateTimeNode_m62DA626A30540CF79C556D30DBB891443EAB802D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  V_2;
	memset((&V_2), 0, sizeof(V_2));
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_0 = Encoding_get_UTF8_m67C8652936B681E7BC7505E459E88790E0FF16D9(/*hidden argument*/NULL);
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_1 = ___node0;
		NullCheck(L_1);
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_2 = Asn1Node_GetChildNode_m9D9513B22B565B7739D03F39C6B8F7D5AFE85010(L_1, 0, /*hidden argument*/NULL);
		NullCheck(L_2);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = Asn1Node_get_Data_mD11992CD2F1CCEC2B0E47491D3B6AF04F9C34EC7(L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_4 = VirtFuncInvoker1< String_t*, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_0, L_3);
		V_0 = L_4;
		String_t* L_5 = V_0;
		bool L_6 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_5, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0037;
		}
	}
	{
		String_t* L_8 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var);
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_9 = DateTime_Parse_mB1F4939B2FFBE63D10A65D1BC801FFA3207F1C09(L_8, /*hidden argument*/NULL);
		V_2 = L_9;
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_10 = DateTime_ToUniversalTime_mA8B74D947E186568C55D9C6F56D59F9A3C7775B1((DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 *)(&V_2), /*hidden argument*/NULL);
		V_3 = L_10;
		goto IL_003f;
	}

IL_0037:
	{
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var);
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_11 = ((DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields*)il2cpp_codegen_static_fields_for(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var))->get_MinValue_31();
		V_3 = L_11;
		goto IL_003f;
	}

IL_003f:
	{
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_12 = V_3;
		return L_12;
	}
}
// System.Void UnityEngine.Purchasing.Security.AppleReceiptParser::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppleReceiptParser__ctor_m4F7F6E5F7B415C33A363678FC64868EB81123DCA (AppleReceiptParser_t34DA429F3553864684768F2E95D35C1D6A90F3E4 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Security.AppleReceiptParser::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppleReceiptParser__cctor_mCC41594010BEE8066F2629D8A338298DF957DC2E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AppleReceiptParser__cctor_mCC41594010BEE8066F2629D8A338298DF957DC2E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_0 = (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA *)il2cpp_codegen_object_new(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mCA7075EA6548A18B929368520217975094841997(L_0, /*hidden argument*/Dictionary_2__ctor_mCA7075EA6548A18B929368520217975094841997_RuntimeMethod_var);
		((AppleReceiptParser_t34DA429F3553864684768F2E95D35C1D6A90F3E4_StaticFields*)il2cpp_codegen_static_fields_for(AppleReceiptParser_t34DA429F3553864684768F2E95D35C1D6A90F3E4_il2cpp_TypeInfo_var))->set__mostRecentReceiptData_0(L_0);
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
// System.String UnityEngine.Purchasing.Security.DistinguishedName::get_Country()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DistinguishedName_get_Country_mE2E3D1C5B9DE26C4AE134FBCB70D73F2032C2D79 (DistinguishedName_t869CBAB24FEC86C60A469DB0BE479FCAB3FAC521 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CCountryU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.Security.DistinguishedName::set_Country(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistinguishedName_set_Country_mDBAE492B7842E0CA86D58F87C9AA5D32B6932E36 (DistinguishedName_t869CBAB24FEC86C60A469DB0BE479FCAB3FAC521 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CCountryU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.String UnityEngine.Purchasing.Security.DistinguishedName::get_Organization()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DistinguishedName_get_Organization_mEAA136C2E071E424CD0063754080FD222630E49B (DistinguishedName_t869CBAB24FEC86C60A469DB0BE479FCAB3FAC521 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3COrganizationU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.Security.DistinguishedName::set_Organization(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistinguishedName_set_Organization_m5D55FB83143BF94F4DA3E4A050C611AE5A590C22 (DistinguishedName_t869CBAB24FEC86C60A469DB0BE479FCAB3FAC521 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3COrganizationU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.String UnityEngine.Purchasing.Security.DistinguishedName::get_OrganizationalUnit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DistinguishedName_get_OrganizationalUnit_mCF460B6F69D85336CCC09AB3A8FAAED9A573FA68 (DistinguishedName_t869CBAB24FEC86C60A469DB0BE479FCAB3FAC521 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3COrganizationalUnitU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.Security.DistinguishedName::set_OrganizationalUnit(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistinguishedName_set_OrganizationalUnit_mA1C9087D0563C9A168BE2F112886E8B744DA85C2 (DistinguishedName_t869CBAB24FEC86C60A469DB0BE479FCAB3FAC521 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3COrganizationalUnitU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.String UnityEngine.Purchasing.Security.DistinguishedName::get_Dnq()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DistinguishedName_get_Dnq_m389254031B6918CBF46DD97310405747C95337DD (DistinguishedName_t869CBAB24FEC86C60A469DB0BE479FCAB3FAC521 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CDnqU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.Security.DistinguishedName::set_Dnq(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistinguishedName_set_Dnq_m57C69B66B9A1FFAA1D5351EF2D6CB31EA6795322 (DistinguishedName_t869CBAB24FEC86C60A469DB0BE479FCAB3FAC521 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CDnqU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.String UnityEngine.Purchasing.Security.DistinguishedName::get_State()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DistinguishedName_get_State_m41B3127001C4FC3981E0A9952C632F55DD93962C (DistinguishedName_t869CBAB24FEC86C60A469DB0BE479FCAB3FAC521 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CStateU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.Security.DistinguishedName::set_State(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistinguishedName_set_State_m84A25E37CB40CCA5159EEE1A556969586D229018 (DistinguishedName_t869CBAB24FEC86C60A469DB0BE479FCAB3FAC521 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CStateU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.String UnityEngine.Purchasing.Security.DistinguishedName::get_CommonName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DistinguishedName_get_CommonName_m1E081B22A4EDB3F6A0FA15C4C085AB79229F5F5F (DistinguishedName_t869CBAB24FEC86C60A469DB0BE479FCAB3FAC521 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CCommonNameU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.Security.DistinguishedName::set_CommonName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistinguishedName_set_CommonName_mB13A018470CF791D18AD6EADDD574B781F59F8EA (DistinguishedName_t869CBAB24FEC86C60A469DB0BE479FCAB3FAC521 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CCommonNameU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Security.DistinguishedName::set_SerialNumber(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistinguishedName_set_SerialNumber_m2527B35B15CDC2CC5F04DDEE828B42C28D8B3141 (DistinguishedName_t869CBAB24FEC86C60A469DB0BE479FCAB3FAC521 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CSerialNumberU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Security.DistinguishedName::.ctor(LipingShare.LCLib.Asn1Processor.Asn1Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistinguishedName__ctor_m81915730899DDF606AF0805C8F51E619C0E68D77 (DistinguishedName_t869CBAB24FEC86C60A469DB0BE479FCAB3FAC521 * __this, Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * ___n0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DistinguishedName__ctor_m81915730899DDF606AF0805C8F51E619C0E68D77_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * V_2 = NULL;
	Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * V_3 = NULL;
	Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * V_4 = NULL;
	Oid_t5B93F085287F1B3F4A9F315146D0C08398544492 * V_5 = NULL;
	String_t* V_6 = NULL;
	UTF8Encoding_t77ED103B749A387EF072C3429F48C91D12CA08DE * V_7 = NULL;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	String_t* V_11 = NULL;
	String_t* V_12 = NULL;
	uint32_t V_13 = 0;
	bool V_14 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B18_0 = 0;
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_0 = ___n0;
		NullCheck(L_0);
		uint8_t L_1 = Asn1Node_get_MaskedTag_m5DC95BB79C052284F601A49BE53CF23EA683734A(L_0, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)((int32_t)16)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_02c2;
		}
	}
	{
		V_1 = 0;
		goto IL_02ae;
	}

IL_0021:
	{
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_3 = ___n0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_5 = Asn1Node_GetChildNode_m9D9513B22B565B7739D03F39C6B8F7D5AFE85010(L_3, L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_6 = V_2;
		NullCheck(L_6);
		uint8_t L_7 = Asn1Node_get_MaskedTag_m5DC95BB79C052284F601A49BE53CF23EA683734A(L_6, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)17)))))
		{
			goto IL_0043;
		}
	}
	{
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_8 = V_2;
		NullCheck(L_8);
		int64_t L_9 = Asn1Node_get_ChildNodeCount_mF517D478344A4AF6843BE4319A05D248B6B25FAC(L_8, /*hidden argument*/NULL);
		G_B5_0 = ((((int32_t)((((int64_t)L_9) == ((int64_t)(((int64_t)((int64_t)1)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0044;
	}

IL_0043:
	{
		G_B5_0 = 1;
	}

IL_0044:
	{
		V_8 = (bool)G_B5_0;
		bool L_10 = V_8;
		if (!L_10)
		{
			goto IL_0050;
		}
	}
	{
		InvalidX509Data_tC7C3A26B4358B509276F77D08FED22DE46D6A666 * L_11 = (InvalidX509Data_tC7C3A26B4358B509276F77D08FED22DE46D6A666 *)il2cpp_codegen_object_new(InvalidX509Data_tC7C3A26B4358B509276F77D08FED22DE46D6A666_il2cpp_TypeInfo_var);
		InvalidX509Data__ctor_m9E51EB809C7E99FB7EB674CBEF9B00D74C7822CF(L_11, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, DistinguishedName__ctor_m81915730899DDF606AF0805C8F51E619C0E68D77_RuntimeMethod_var);
	}

IL_0050:
	{
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_12 = V_2;
		NullCheck(L_12);
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_13 = Asn1Node_GetChildNode_m9D9513B22B565B7739D03F39C6B8F7D5AFE85010(L_12, 0, /*hidden argument*/NULL);
		V_2 = L_13;
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_14 = V_2;
		NullCheck(L_14);
		uint8_t L_15 = Asn1Node_get_MaskedTag_m5DC95BB79C052284F601A49BE53CF23EA683734A(L_14, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_15) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_0071;
		}
	}
	{
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_16 = V_2;
		NullCheck(L_16);
		int64_t L_17 = Asn1Node_get_ChildNodeCount_mF517D478344A4AF6843BE4319A05D248B6B25FAC(L_16, /*hidden argument*/NULL);
		G_B10_0 = ((((int32_t)((((int64_t)L_17) == ((int64_t)(((int64_t)((int64_t)2)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0072;
	}

IL_0071:
	{
		G_B10_0 = 1;
	}

IL_0072:
	{
		V_9 = (bool)G_B10_0;
		bool L_18 = V_9;
		if (!L_18)
		{
			goto IL_007e;
		}
	}
	{
		InvalidX509Data_tC7C3A26B4358B509276F77D08FED22DE46D6A666 * L_19 = (InvalidX509Data_tC7C3A26B4358B509276F77D08FED22DE46D6A666 *)il2cpp_codegen_object_new(InvalidX509Data_tC7C3A26B4358B509276F77D08FED22DE46D6A666_il2cpp_TypeInfo_var);
		InvalidX509Data__ctor_m9E51EB809C7E99FB7EB674CBEF9B00D74C7822CF(L_19, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, DistinguishedName__ctor_m81915730899DDF606AF0805C8F51E619C0E68D77_RuntimeMethod_var);
	}

IL_007e:
	{
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_20 = V_2;
		NullCheck(L_20);
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_21 = Asn1Node_GetChildNode_m9D9513B22B565B7739D03F39C6B8F7D5AFE85010(L_20, 0, /*hidden argument*/NULL);
		V_3 = L_21;
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_22 = V_2;
		NullCheck(L_22);
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_23 = Asn1Node_GetChildNode_m9D9513B22B565B7739D03F39C6B8F7D5AFE85010(L_22, 1, /*hidden argument*/NULL);
		V_4 = L_23;
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_24 = V_3;
		NullCheck(L_24);
		uint8_t L_25 = Asn1Node_get_MaskedTag_m5DC95BB79C052284F601A49BE53CF23EA683734A(L_24, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_25) == ((uint32_t)6))))
		{
			goto IL_00b6;
		}
	}
	{
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_26 = V_4;
		NullCheck(L_26);
		uint8_t L_27 = Asn1Node_get_MaskedTag_m5DC95BB79C052284F601A49BE53CF23EA683734A(L_26, /*hidden argument*/NULL);
		if ((((int32_t)L_27) == ((int32_t)((int32_t)19))))
		{
			goto IL_00b3;
		}
	}
	{
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_28 = V_4;
		NullCheck(L_28);
		uint8_t L_29 = Asn1Node_get_MaskedTag_m5DC95BB79C052284F601A49BE53CF23EA683734A(L_28, /*hidden argument*/NULL);
		G_B16_0 = ((((int32_t)((((int32_t)L_29) == ((int32_t)((int32_t)12)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00b4;
	}

IL_00b3:
	{
		G_B16_0 = 0;
	}

IL_00b4:
	{
		G_B18_0 = G_B16_0;
		goto IL_00b7;
	}

IL_00b6:
	{
		G_B18_0 = 1;
	}

IL_00b7:
	{
		V_10 = (bool)G_B18_0;
		bool L_30 = V_10;
		if (!L_30)
		{
			goto IL_00c4;
		}
	}
	{
		InvalidX509Data_tC7C3A26B4358B509276F77D08FED22DE46D6A666 * L_31 = (InvalidX509Data_tC7C3A26B4358B509276F77D08FED22DE46D6A666 *)il2cpp_codegen_object_new(InvalidX509Data_tC7C3A26B4358B509276F77D08FED22DE46D6A666_il2cpp_TypeInfo_var);
		InvalidX509Data__ctor_m9E51EB809C7E99FB7EB674CBEF9B00D74C7822CF(L_31, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_31, DistinguishedName__ctor_m81915730899DDF606AF0805C8F51E619C0E68D77_RuntimeMethod_var);
	}

IL_00c4:
	{
		Oid_t5B93F085287F1B3F4A9F315146D0C08398544492 * L_32 = (Oid_t5B93F085287F1B3F4A9F315146D0C08398544492 *)il2cpp_codegen_object_new(Oid_t5B93F085287F1B3F4A9F315146D0C08398544492_il2cpp_TypeInfo_var);
		Oid__ctor_mFFD980E1341E8BA30F696F91756ACE4D33CB9E5E(L_32, /*hidden argument*/NULL);
		V_5 = L_32;
		Oid_t5B93F085287F1B3F4A9F315146D0C08398544492 * L_33 = V_5;
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_34 = V_3;
		NullCheck(L_34);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_35 = Asn1Node_get_Data_mD11992CD2F1CCEC2B0E47491D3B6AF04F9C34EC7(L_34, /*hidden argument*/NULL);
		NullCheck(L_33);
		String_t* L_36 = Oid_Decode_m1C6BD88CE261E00DF019558DB9AD2E64C65602C9(L_33, L_35, /*hidden argument*/NULL);
		V_6 = L_36;
		UTF8Encoding_t77ED103B749A387EF072C3429F48C91D12CA08DE * L_37 = (UTF8Encoding_t77ED103B749A387EF072C3429F48C91D12CA08DE *)il2cpp_codegen_object_new(UTF8Encoding_t77ED103B749A387EF072C3429F48C91D12CA08DE_il2cpp_TypeInfo_var);
		UTF8Encoding__ctor_m999E138A2E4C290F8A97866714EE53D58C931488(L_37, /*hidden argument*/NULL);
		V_7 = L_37;
		String_t* L_38 = V_6;
		V_12 = L_38;
		String_t* L_39 = V_12;
		V_11 = L_39;
		String_t* L_40 = V_11;
		if (!L_40)
		{
			goto IL_02a9;
		}
	}
	{
		String_t* L_41 = V_11;
		uint32_t L_42 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mBA4BC176CFDBE9594D38D2E5DA0817E057B57C02(L_41, /*hidden argument*/NULL);
		V_13 = L_42;
		uint32_t L_43 = V_13;
		if ((!(((uint32_t)L_43) <= ((uint32_t)((int32_t)184344010)))))
		{
			goto IL_012c;
		}
	}
	{
		uint32_t L_44 = V_13;
		if ((((int32_t)L_44) == ((int32_t)((int32_t)134011153))))
		{
			goto IL_01af;
		}
	}
	{
		goto IL_0110;
	}

IL_0110:
	{
		uint32_t L_45 = V_13;
		if ((((int32_t)L_45) == ((int32_t)((int32_t)167566391))))
		{
			goto IL_01c5;
		}
	}
	{
		goto IL_011e;
	}

IL_011e:
	{
		uint32_t L_46 = V_13;
		if ((((int32_t)L_46) == ((int32_t)((int32_t)184344010))))
		{
			goto IL_016d;
		}
	}
	{
		goto IL_02a9;
	}

IL_012c:
	{
		uint32_t L_47 = V_13;
		if ((!(((uint32_t)L_47) <= ((uint32_t)((int32_t)1208264641)))))
		{
			goto IL_014e;
		}
	}
	{
		uint32_t L_48 = V_13;
		if ((((int32_t)L_48) == ((int32_t)((int32_t)1191487022))))
		{
			goto IL_0199;
		}
	}
	{
		goto IL_0140;
	}

IL_0140:
	{
		uint32_t L_49 = V_13;
		if ((((int32_t)L_49) == ((int32_t)((int32_t)1208264641))))
		{
			goto IL_0183;
		}
	}
	{
		goto IL_02a9;
	}

IL_014e:
	{
		uint32_t L_50 = V_13;
		if ((((int32_t)L_50) == ((int32_t)((int32_t)-1207168042))))
		{
			goto IL_01db;
		}
	}
	{
		goto IL_015c;
	}

IL_015c:
	{
		uint32_t L_51 = V_13;
		if ((((int32_t)L_51) == ((int32_t)((int32_t)-50542656))))
		{
			goto IL_01f1;
		}
	}
	{
		goto IL_02a9;
	}

IL_016d:
	{
		String_t* L_52 = V_11;
		bool L_53 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_52, _stringLiteral5C7A91EFCEDF247304D1731FF3B75E425CE37B31, /*hidden argument*/NULL);
		if (L_53)
		{
			goto IL_0207;
		}
	}
	{
		goto IL_02a9;
	}

IL_0183:
	{
		String_t* L_54 = V_11;
		bool L_55 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_54, _stringLiteral72F73068315E3A6873135BAAB8A88CB488A78803, /*hidden argument*/NULL);
		if (L_55)
		{
			goto IL_0221;
		}
	}
	{
		goto IL_02a9;
	}

IL_0199:
	{
		String_t* L_56 = V_11;
		bool L_57 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_56, _stringLiteral7AFEC00C242908DCFA9B158615E0E680F8AA5506, /*hidden argument*/NULL);
		if (L_57)
		{
			goto IL_0238;
		}
	}
	{
		goto IL_02a9;
	}

IL_01af:
	{
		String_t* L_58 = V_11;
		bool L_59 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_58, _stringLiteral2C809D24DC7F35393288F0A442B7E00E8982AA9D, /*hidden argument*/NULL);
		if (L_59)
		{
			goto IL_024f;
		}
	}
	{
		goto IL_02a9;
	}

IL_01c5:
	{
		String_t* L_60 = V_11;
		bool L_61 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_60, _stringLiteral52596FD1F8D7EA10A7682B8EBD09CDC8F17478D3, /*hidden argument*/NULL);
		if (L_61)
		{
			goto IL_0266;
		}
	}
	{
		goto IL_02a9;
	}

IL_01db:
	{
		String_t* L_62 = V_11;
		bool L_63 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_62, _stringLiteral513E853432982DFE130969DDB6E9757C8FDBA201, /*hidden argument*/NULL);
		if (L_63)
		{
			goto IL_027b;
		}
	}
	{
		goto IL_02a9;
	}

IL_01f1:
	{
		String_t* L_64 = V_11;
		bool L_65 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_64, _stringLiteralDD3B0CAB4F2ACC9D42995B79C553B786890D1014, /*hidden argument*/NULL);
		if (L_65)
		{
			goto IL_0292;
		}
	}
	{
		goto IL_02a9;
	}

IL_0207:
	{
		UTF8Encoding_t77ED103B749A387EF072C3429F48C91D12CA08DE * L_66 = V_7;
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_67 = V_4;
		NullCheck(L_67);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_68 = Asn1Node_get_Data_mD11992CD2F1CCEC2B0E47491D3B6AF04F9C34EC7(L_67, /*hidden argument*/NULL);
		NullCheck(L_66);
		String_t* L_69 = VirtFuncInvoker1< String_t*, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_66, L_68);
		DistinguishedName_set_Country_mDBAE492B7842E0CA86D58F87C9AA5D32B6932E36_inline(__this, L_69, /*hidden argument*/NULL);
		goto IL_02a9;
	}

IL_0221:
	{
		UTF8Encoding_t77ED103B749A387EF072C3429F48C91D12CA08DE * L_70 = V_7;
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_71 = V_4;
		NullCheck(L_71);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_72 = Asn1Node_get_Data_mD11992CD2F1CCEC2B0E47491D3B6AF04F9C34EC7(L_71, /*hidden argument*/NULL);
		NullCheck(L_70);
		String_t* L_73 = VirtFuncInvoker1< String_t*, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_70, L_72);
		DistinguishedName_set_Organization_m5D55FB83143BF94F4DA3E4A050C611AE5A590C22_inline(__this, L_73, /*hidden argument*/NULL);
		goto IL_02a9;
	}

IL_0238:
	{
		UTF8Encoding_t77ED103B749A387EF072C3429F48C91D12CA08DE * L_74 = V_7;
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_75 = V_4;
		NullCheck(L_75);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_76 = Asn1Node_get_Data_mD11992CD2F1CCEC2B0E47491D3B6AF04F9C34EC7(L_75, /*hidden argument*/NULL);
		NullCheck(L_74);
		String_t* L_77 = VirtFuncInvoker1< String_t*, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_74, L_76);
		DistinguishedName_set_OrganizationalUnit_mA1C9087D0563C9A168BE2F112886E8B744DA85C2_inline(__this, L_77, /*hidden argument*/NULL);
		goto IL_02a9;
	}

IL_024f:
	{
		UTF8Encoding_t77ED103B749A387EF072C3429F48C91D12CA08DE * L_78 = V_7;
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_79 = V_4;
		NullCheck(L_79);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_80 = Asn1Node_get_Data_mD11992CD2F1CCEC2B0E47491D3B6AF04F9C34EC7(L_79, /*hidden argument*/NULL);
		NullCheck(L_78);
		String_t* L_81 = VirtFuncInvoker1< String_t*, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_78, L_80);
		DistinguishedName_set_CommonName_mB13A018470CF791D18AD6EADDD574B781F59F8EA_inline(__this, L_81, /*hidden argument*/NULL);
		goto IL_02a9;
	}

IL_0266:
	{
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_82 = V_4;
		NullCheck(L_82);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_83 = Asn1Node_get_Data_mD11992CD2F1CCEC2B0E47491D3B6AF04F9C34EC7(L_82, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_tBFEA56D2C3543BF68547786BAE0EC50B2DEE0886_il2cpp_TypeInfo_var);
		String_t* L_84 = Asn1Util_ToHexString_mD35BF6D2E0CD4D8CC7FFA9829350CC522A75B8DF(L_83, /*hidden argument*/NULL);
		DistinguishedName_set_SerialNumber_m2527B35B15CDC2CC5F04DDEE828B42C28D8B3141_inline(__this, L_84, /*hidden argument*/NULL);
		goto IL_02a9;
	}

IL_027b:
	{
		UTF8Encoding_t77ED103B749A387EF072C3429F48C91D12CA08DE * L_85 = V_7;
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_86 = V_4;
		NullCheck(L_86);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_87 = Asn1Node_get_Data_mD11992CD2F1CCEC2B0E47491D3B6AF04F9C34EC7(L_86, /*hidden argument*/NULL);
		NullCheck(L_85);
		String_t* L_88 = VirtFuncInvoker1< String_t*, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_85, L_87);
		DistinguishedName_set_Dnq_m57C69B66B9A1FFAA1D5351EF2D6CB31EA6795322_inline(__this, L_88, /*hidden argument*/NULL);
		goto IL_02a9;
	}

IL_0292:
	{
		UTF8Encoding_t77ED103B749A387EF072C3429F48C91D12CA08DE * L_89 = V_7;
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_90 = V_4;
		NullCheck(L_90);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_91 = Asn1Node_get_Data_mD11992CD2F1CCEC2B0E47491D3B6AF04F9C34EC7(L_90, /*hidden argument*/NULL);
		NullCheck(L_89);
		String_t* L_92 = VirtFuncInvoker1< String_t*, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_89, L_91);
		DistinguishedName_set_State_m84A25E37CB40CCA5159EEE1A556969586D229018_inline(__this, L_92, /*hidden argument*/NULL);
		goto IL_02a9;
	}

IL_02a9:
	{
		int32_t L_93 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_93, (int32_t)1));
	}

IL_02ae:
	{
		int32_t L_94 = V_1;
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_95 = ___n0;
		NullCheck(L_95);
		int64_t L_96 = Asn1Node_get_ChildNodeCount_mF517D478344A4AF6843BE4319A05D248B6B25FAC(L_95, /*hidden argument*/NULL);
		V_14 = (bool)((((int64_t)(((int64_t)((int64_t)L_94)))) < ((int64_t)L_96))? 1 : 0);
		bool L_97 = V_14;
		if (L_97)
		{
			goto IL_0021;
		}
	}
	{
	}

IL_02c2:
	{
		return;
	}
}
// System.Boolean UnityEngine.Purchasing.Security.DistinguishedName::Equals(UnityEngine.Purchasing.Security.DistinguishedName)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DistinguishedName_Equals_m83D4F336A47239552A3AD2BC0960728E2A7DD110 (DistinguishedName_t869CBAB24FEC86C60A469DB0BE479FCAB3FAC521 * __this, DistinguishedName_t869CBAB24FEC86C60A469DB0BE479FCAB3FAC521 * ___n20, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B7_0 = 0;
	{
		String_t* L_0 = DistinguishedName_get_Organization_mEAA136C2E071E424CD0063754080FD222630E49B_inline(__this, /*hidden argument*/NULL);
		DistinguishedName_t869CBAB24FEC86C60A469DB0BE479FCAB3FAC521 * L_1 = ___n20;
		NullCheck(L_1);
		String_t* L_2 = DistinguishedName_get_Organization_mEAA136C2E071E424CD0063754080FD222630E49B_inline(L_1, /*hidden argument*/NULL);
		bool L_3 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_0, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0073;
		}
	}
	{
		String_t* L_4 = DistinguishedName_get_OrganizationalUnit_mCF460B6F69D85336CCC09AB3A8FAAED9A573FA68_inline(__this, /*hidden argument*/NULL);
		DistinguishedName_t869CBAB24FEC86C60A469DB0BE479FCAB3FAC521 * L_5 = ___n20;
		NullCheck(L_5);
		String_t* L_6 = DistinguishedName_get_OrganizationalUnit_mCF460B6F69D85336CCC09AB3A8FAAED9A573FA68_inline(L_5, /*hidden argument*/NULL);
		bool L_7 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_4, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0073;
		}
	}
	{
		String_t* L_8 = DistinguishedName_get_Dnq_m389254031B6918CBF46DD97310405747C95337DD_inline(__this, /*hidden argument*/NULL);
		DistinguishedName_t869CBAB24FEC86C60A469DB0BE479FCAB3FAC521 * L_9 = ___n20;
		NullCheck(L_9);
		String_t* L_10 = DistinguishedName_get_Dnq_m389254031B6918CBF46DD97310405747C95337DD_inline(L_9, /*hidden argument*/NULL);
		bool L_11 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_8, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0073;
		}
	}
	{
		String_t* L_12 = DistinguishedName_get_Country_mE2E3D1C5B9DE26C4AE134FBCB70D73F2032C2D79_inline(__this, /*hidden argument*/NULL);
		DistinguishedName_t869CBAB24FEC86C60A469DB0BE479FCAB3FAC521 * L_13 = ___n20;
		NullCheck(L_13);
		String_t* L_14 = DistinguishedName_get_Country_mE2E3D1C5B9DE26C4AE134FBCB70D73F2032C2D79_inline(L_13, /*hidden argument*/NULL);
		bool L_15 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_12, L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_0073;
		}
	}
	{
		String_t* L_16 = DistinguishedName_get_State_m41B3127001C4FC3981E0A9952C632F55DD93962C_inline(__this, /*hidden argument*/NULL);
		DistinguishedName_t869CBAB24FEC86C60A469DB0BE479FCAB3FAC521 * L_17 = ___n20;
		NullCheck(L_17);
		String_t* L_18 = DistinguishedName_get_State_m41B3127001C4FC3981E0A9952C632F55DD93962C_inline(L_17, /*hidden argument*/NULL);
		bool L_19 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_16, L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_0073;
		}
	}
	{
		String_t* L_20 = DistinguishedName_get_CommonName_m1E081B22A4EDB3F6A0FA15C4C085AB79229F5F5F_inline(__this, /*hidden argument*/NULL);
		DistinguishedName_t869CBAB24FEC86C60A469DB0BE479FCAB3FAC521 * L_21 = ___n20;
		NullCheck(L_21);
		String_t* L_22 = DistinguishedName_get_CommonName_m1E081B22A4EDB3F6A0FA15C4C085AB79229F5F5F_inline(L_21, /*hidden argument*/NULL);
		bool L_23 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_20, L_22, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_23));
		goto IL_0074;
	}

IL_0073:
	{
		G_B7_0 = 0;
	}

IL_0074:
	{
		V_0 = (bool)G_B7_0;
		goto IL_0077;
	}

IL_0077:
	{
		bool L_24 = V_0;
		return L_24;
	}
}
// System.String UnityEngine.Purchasing.Security.DistinguishedName::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DistinguishedName_ToString_mA9E324F1C7BFD8F3BD1A3C2EA38C6C7D2B02884F (DistinguishedName_t869CBAB24FEC86C60A469DB0BE479FCAB3FAC521 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DistinguishedName_ToString_mA9E324F1C7BFD8F3BD1A3C2EA38C6C7D2B02884F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_0 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)8);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteralD658AB3411EDE9682D5458ABA41A89A359B2782E);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralD658AB3411EDE9682D5458ABA41A89A359B2782E);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_2 = L_1;
		String_t* L_3 = DistinguishedName_get_CommonName_m1E081B22A4EDB3F6A0FA15C4C085AB79229F5F5F_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_3);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_4 = L_2;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteralDCC4F44B7F730F641EED423AAF9CE40B863020CB);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralDCC4F44B7F730F641EED423AAF9CE40B863020CB);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_5 = L_4;
		String_t* L_6 = DistinguishedName_get_Organization_mEAA136C2E071E424CD0063754080FD222630E49B_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_6);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_7 = L_5;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral5DB7F5DF667107D2C97456978C3089765801D04D);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral5DB7F5DF667107D2C97456978C3089765801D04D);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_8 = L_7;
		String_t* L_9 = DistinguishedName_get_OrganizationalUnit_mCF460B6F69D85336CCC09AB3A8FAAED9A573FA68_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_9);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_10 = L_8;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteralF6BC50B783487D5044E2B9EC8C81DF90893A4771);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteralF6BC50B783487D5044E2B9EC8C81DF90893A4771);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_11 = L_10;
		String_t* L_12 = DistinguishedName_get_Country_mE2E3D1C5B9DE26C4AE134FBCB70D73F2032C2D79_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)L_12);
		String_t* L_13 = String_Concat_m232E857CA5107EA6AC52E7DD7018716C021F237B(L_11, /*hidden argument*/NULL);
		V_0 = L_13;
		goto IL_0053;
	}

IL_0053:
	{
		String_t* L_14 = V_0;
		return L_14;
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
// System.Void UnityEngine.Purchasing.Security.IAPSecurityException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAPSecurityException__ctor_mEA6EA5CADD09965AA85C53EE97DFDAEAEA6BA478 (IAPSecurityException_t9E59EAFE4B1540C47F60E82B9532F7D910B09D6A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAPSecurityException__ctor_mEA6EA5CADD09965AA85C53EE97DFDAEAEA6BA478_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m5FEC89FBFACEEDCEE29CCFD44A85D72FC28EB0D1(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Purchasing.Security.InvalidPKCS7Data::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidPKCS7Data__ctor_mD66D69E4C6C7B78CCA72012A8886107CB59BBBA3 (InvalidPKCS7Data_t66D90EB0467E0D800AA9F61CF113C851101D136A * __this, const RuntimeMethod* method)
{
	{
		IAPSecurityException__ctor_mEA6EA5CADD09965AA85C53EE97DFDAEAEA6BA478(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Purchasing.Security.InvalidRSAData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidRSAData__ctor_m1D59AC5862577DDC170A9AB4DB731EF4B89D3732 (InvalidRSAData_tCBAC13419C66041C71750F1889052E7E4B77FC0E * __this, const RuntimeMethod* method)
{
	{
		IAPSecurityException__ctor_mEA6EA5CADD09965AA85C53EE97DFDAEAEA6BA478(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Purchasing.Security.InvalidTimeFormat::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidTimeFormat__ctor_m5C914A0EC6CA59D8504971BDAA512774573B493D (InvalidTimeFormat_t803BE227F2D3A4A788D5992EAA0B479232FA2661 * __this, const RuntimeMethod* method)
{
	{
		IAPSecurityException__ctor_mEA6EA5CADD09965AA85C53EE97DFDAEAEA6BA478(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Purchasing.Security.InvalidX509Data::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidX509Data__ctor_m9E51EB809C7E99FB7EB674CBEF9B00D74C7822CF (InvalidX509Data_tC7C3A26B4358B509276F77D08FED22DE46D6A666 * __this, const RuntimeMethod* method)
{
	{
		IAPSecurityException__ctor_mEA6EA5CADD09965AA85C53EE97DFDAEAEA6BA478(__this, /*hidden argument*/NULL);
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
// LipingShare.LCLib.Asn1Processor.Asn1Node UnityEngine.Purchasing.Security.PKCS7::get_data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * PKCS7_get_data_m6C282961220626FDCDF7A0BCD869C8F37BD01554 (PKCS7_t851499113E52C57B34831AE4D5AB00C973B7D21A * __this, const RuntimeMethod* method)
{
	{
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_0 = __this->get_U3CdataU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.Security.PKCS7::set_data(LipingShare.LCLib.Asn1Processor.Asn1Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PKCS7_set_data_m48F719D915F508F876092F3A47F9107FFB7B09AE (PKCS7_t851499113E52C57B34831AE4D5AB00C973B7D21A * __this, Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * ___value0, const RuntimeMethod* method)
{
	{
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_0 = ___value0;
		__this->set_U3CdataU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Purchasing.Security.SignerInfo> UnityEngine.Purchasing.Security.PKCS7::get_sinfos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tC8E7792306B075D1A58B9A4E5F2E9FB5A18DCB61 * PKCS7_get_sinfos_m20454822948ABDC7E7C9802C1A918A3007E58A90 (PKCS7_t851499113E52C57B34831AE4D5AB00C973B7D21A * __this, const RuntimeMethod* method)
{
	{
		List_1_tC8E7792306B075D1A58B9A4E5F2E9FB5A18DCB61 * L_0 = __this->get_U3CsinfosU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.Security.PKCS7::set_sinfos(System.Collections.Generic.List`1<UnityEngine.Purchasing.Security.SignerInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PKCS7_set_sinfos_m0245C0686BDAA4456F190FE981C799FD0B27C397 (PKCS7_t851499113E52C57B34831AE4D5AB00C973B7D21A * __this, List_1_tC8E7792306B075D1A58B9A4E5F2E9FB5A18DCB61 * ___value0, const RuntimeMethod* method)
{
	{
		List_1_tC8E7792306B075D1A58B9A4E5F2E9FB5A18DCB61 * L_0 = ___value0;
		__this->set_U3CsinfosU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Purchasing.Security.X509Cert> UnityEngine.Purchasing.Security.PKCS7::get_certChain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t2A256183E185A61A299A823886E7884EFE41A289 * PKCS7_get_certChain_m84F5C10E322905626F9B01B437C577B9E1FB2718 (PKCS7_t851499113E52C57B34831AE4D5AB00C973B7D21A * __this, const RuntimeMethod* method)
{
	{
		List_1_t2A256183E185A61A299A823886E7884EFE41A289 * L_0 = __this->get_U3CcertChainU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.Security.PKCS7::set_certChain(System.Collections.Generic.List`1<UnityEngine.Purchasing.Security.X509Cert>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PKCS7_set_certChain_mD4A26485F3931361A18ACECBE07233F2BFCFDCA2 (PKCS7_t851499113E52C57B34831AE4D5AB00C973B7D21A * __this, List_1_t2A256183E185A61A299A823886E7884EFE41A289 * ___value0, const RuntimeMethod* method)
{
	{
		List_1_t2A256183E185A61A299A823886E7884EFE41A289 * L_0 = ___value0;
		__this->set_U3CcertChainU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Security.PKCS7::.ctor(LipingShare.LCLib.Asn1Processor.Asn1Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PKCS7__ctor_mDAC6EAC1F6F37BF80B57CD922FEB28D5C7905317 (PKCS7_t851499113E52C57B34831AE4D5AB00C973B7D21A * __this, Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * ___node0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_0 = ___node0;
		__this->set_root_0(L_0);
		PKCS7_CheckStructure_m1C5B3FA520361A3366E2FF3CCA724FC343DCCB70(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Security.PKCS7::CheckStructure()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PKCS7_CheckStructure_m1C5B3FA520361A3366E2FF3CCA724FC343DCCB70 (PKCS7_t851499113E52C57B34831AE4D5AB00C973B7D21A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PKCS7_CheckStructure_m1C5B3FA520361A3366E2FF3CCA724FC343DCCB70_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * V_1 = NULL;
	int32_t V_2 = 0;
	Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	int32_t V_12 = 0;
	bool V_13 = false;
	bool V_14 = false;
	int32_t V_15 = 0;
	bool V_16 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B14_0 = 0;
	int32_t G_B23_0 = 0;
	int32_t G_B35_0 = 0;
	{
		__this->set_validStructure_4((bool)0);
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_0 = __this->get_root_0();
		NullCheck(L_0);
		uint8_t L_1 = Asn1Node_get_Tag_mF8EA3AD46BCFE67532A374299F78BF3CC1A7D078(L_0, /*hidden argument*/NULL);
		if ((!(((uint32_t)((int32_t)((int32_t)L_1&(int32_t)((int32_t)31)))) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_002b;
		}
	}
	{
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_2 = __this->get_root_0();
		NullCheck(L_2);
		int64_t L_3 = Asn1Node_get_ChildNodeCount_mF517D478344A4AF6843BE4319A05D248B6B25FAC(L_2, /*hidden argument*/NULL);
		G_B3_0 = ((((int64_t)L_3) == ((int64_t)(((int64_t)((int64_t)2)))))? 1 : 0);
		goto IL_002c;
	}

IL_002b:
	{
		G_B3_0 = 0;
	}

IL_002c:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0253;
		}
	}
	{
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_5 = __this->get_root_0();
		NullCheck(L_5);
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_6 = Asn1Node_GetChildNode_m9D9513B22B565B7739D03F39C6B8F7D5AFE85010(L_5, 0, /*hidden argument*/NULL);
		V_1 = L_6;
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_7 = V_1;
		NullCheck(L_7);
		uint8_t L_8 = Asn1Node_get_Tag_mF8EA3AD46BCFE67532A374299F78BF3CC1A7D078(L_7, /*hidden argument*/NULL);
		if ((!(((uint32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)31)))) == ((uint32_t)6))))
		{
			goto IL_0060;
		}
	}
	{
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_9 = V_1;
		NullCheck(L_9);
		String_t* L_10 = Asn1Node_GetDataStr_m98F2E9DC3ACABD540BD1FE3155A5B0DE8E0A89DC(L_9, (bool)0, /*hidden argument*/NULL);
		bool L_11 = String_op_Inequality_m0BD184A74F453A72376E81CC6CAEE2556B80493E(L_10, _stringLiteral4E4C48D4A0E41B3E48AB97F36EEEBC15111A78FE, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_11));
		goto IL_0061;
	}

IL_0060:
	{
		G_B7_0 = 1;
	}

IL_0061:
	{
		V_4 = (bool)G_B7_0;
		bool L_12 = V_4;
		if (!L_12)
		{
			goto IL_006e;
		}
	}
	{
		InvalidPKCS7Data_t66D90EB0467E0D800AA9F61CF113C851101D136A * L_13 = (InvalidPKCS7Data_t66D90EB0467E0D800AA9F61CF113C851101D136A *)il2cpp_codegen_object_new(InvalidPKCS7Data_t66D90EB0467E0D800AA9F61CF113C851101D136A_il2cpp_TypeInfo_var);
		InvalidPKCS7Data__ctor_mD66D69E4C6C7B78CCA72012A8886107CB59BBBA3(L_13, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, PKCS7_CheckStructure_m1C5B3FA520361A3366E2FF3CCA724FC343DCCB70_RuntimeMethod_var);
	}

IL_006e:
	{
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_14 = __this->get_root_0();
		NullCheck(L_14);
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_15 = Asn1Node_GetChildNode_m9D9513B22B565B7739D03F39C6B8F7D5AFE85010(L_14, 1, /*hidden argument*/NULL);
		V_1 = L_15;
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_16 = V_1;
		NullCheck(L_16);
		int64_t L_17 = Asn1Node_get_ChildNodeCount_mF517D478344A4AF6843BE4319A05D248B6B25FAC(L_16, /*hidden argument*/NULL);
		V_5 = (bool)((((int32_t)((((int64_t)L_17) == ((int64_t)(((int64_t)((int64_t)1)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_18 = V_5;
		if (!L_18)
		{
			goto IL_0094;
		}
	}
	{
		InvalidPKCS7Data_t66D90EB0467E0D800AA9F61CF113C851101D136A * L_19 = (InvalidPKCS7Data_t66D90EB0467E0D800AA9F61CF113C851101D136A *)il2cpp_codegen_object_new(InvalidPKCS7Data_t66D90EB0467E0D800AA9F61CF113C851101D136A_il2cpp_TypeInfo_var);
		InvalidPKCS7Data__ctor_mD66D69E4C6C7B78CCA72012A8886107CB59BBBA3(L_19, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, PKCS7_CheckStructure_m1C5B3FA520361A3366E2FF3CCA724FC343DCCB70_RuntimeMethod_var);
	}

IL_0094:
	{
		V_2 = 0;
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_20 = V_1;
		int32_t L_21 = V_2;
		int32_t L_22 = L_21;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
		NullCheck(L_20);
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_23 = Asn1Node_GetChildNode_m9D9513B22B565B7739D03F39C6B8F7D5AFE85010(L_20, L_22, /*hidden argument*/NULL);
		V_1 = L_23;
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_24 = V_1;
		NullCheck(L_24);
		int64_t L_25 = Asn1Node_get_ChildNodeCount_mF517D478344A4AF6843BE4319A05D248B6B25FAC(L_24, /*hidden argument*/NULL);
		if ((((int64_t)L_25) < ((int64_t)(((int64_t)((int64_t)4))))))
		{
			goto IL_00be;
		}
	}
	{
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_26 = V_1;
		NullCheck(L_26);
		uint8_t L_27 = Asn1Node_get_Tag_mF8EA3AD46BCFE67532A374299F78BF3CC1A7D078(L_26, /*hidden argument*/NULL);
		G_B14_0 = ((((int32_t)((((int32_t)((int32_t)((int32_t)L_27&(int32_t)((int32_t)31)))) == ((int32_t)((int32_t)16)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00bf;
	}

IL_00be:
	{
		G_B14_0 = 1;
	}

IL_00bf:
	{
		V_6 = (bool)G_B14_0;
		bool L_28 = V_6;
		if (!L_28)
		{
			goto IL_00cb;
		}
	}
	{
		InvalidPKCS7Data_t66D90EB0467E0D800AA9F61CF113C851101D136A * L_29 = (InvalidPKCS7Data_t66D90EB0467E0D800AA9F61CF113C851101D136A *)il2cpp_codegen_object_new(InvalidPKCS7Data_t66D90EB0467E0D800AA9F61CF113C851101D136A_il2cpp_TypeInfo_var);
		InvalidPKCS7Data__ctor_mD66D69E4C6C7B78CCA72012A8886107CB59BBBA3(L_29, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_29, PKCS7_CheckStructure_m1C5B3FA520361A3366E2FF3CCA724FC343DCCB70_RuntimeMethod_var);
	}

IL_00cb:
	{
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_30 = V_1;
		NullCheck(L_30);
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_31 = Asn1Node_GetChildNode_m9D9513B22B565B7739D03F39C6B8F7D5AFE85010(L_30, 0, /*hidden argument*/NULL);
		V_3 = L_31;
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_32 = V_3;
		NullCheck(L_32);
		uint8_t L_33 = Asn1Node_get_Tag_mF8EA3AD46BCFE67532A374299F78BF3CC1A7D078(L_32, /*hidden argument*/NULL);
		V_7 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_33&(int32_t)((int32_t)31)))) == ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_34 = V_7;
		if (!L_34)
		{
			goto IL_00ee;
		}
	}
	{
		InvalidPKCS7Data_t66D90EB0467E0D800AA9F61CF113C851101D136A * L_35 = (InvalidPKCS7Data_t66D90EB0467E0D800AA9F61CF113C851101D136A *)il2cpp_codegen_object_new(InvalidPKCS7Data_t66D90EB0467E0D800AA9F61CF113C851101D136A_il2cpp_TypeInfo_var);
		InvalidPKCS7Data__ctor_mD66D69E4C6C7B78CCA72012A8886107CB59BBBA3(L_35, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_35, PKCS7_CheckStructure_m1C5B3FA520361A3366E2FF3CCA724FC343DCCB70_RuntimeMethod_var);
	}

IL_00ee:
	{
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_36 = V_1;
		int32_t L_37 = V_2;
		int32_t L_38 = L_37;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)1));
		NullCheck(L_36);
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_39 = Asn1Node_GetChildNode_m9D9513B22B565B7739D03F39C6B8F7D5AFE85010(L_36, L_38, /*hidden argument*/NULL);
		V_3 = L_39;
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_40 = V_3;
		NullCheck(L_40);
		uint8_t L_41 = Asn1Node_get_Tag_mF8EA3AD46BCFE67532A374299F78BF3CC1A7D078(L_40, /*hidden argument*/NULL);
		V_8 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_41&(int32_t)((int32_t)31)))) == ((int32_t)((int32_t)17)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_42 = V_8;
		if (!L_42)
		{
			goto IL_0116;
		}
	}
	{
		InvalidPKCS7Data_t66D90EB0467E0D800AA9F61CF113C851101D136A * L_43 = (InvalidPKCS7Data_t66D90EB0467E0D800AA9F61CF113C851101D136A *)il2cpp_codegen_object_new(InvalidPKCS7Data_t66D90EB0467E0D800AA9F61CF113C851101D136A_il2cpp_TypeInfo_var);
		InvalidPKCS7Data__ctor_mD66D69E4C6C7B78CCA72012A8886107CB59BBBA3(L_43, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_43, PKCS7_CheckStructure_m1C5B3FA520361A3366E2FF3CCA724FC343DCCB70_RuntimeMethod_var);
	}

IL_0116:
	{
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_44 = V_1;
		int32_t L_45 = V_2;
		int32_t L_46 = L_45;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_46, (int32_t)1));
		NullCheck(L_44);
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_47 = Asn1Node_GetChildNode_m9D9513B22B565B7739D03F39C6B8F7D5AFE85010(L_44, L_46, /*hidden argument*/NULL);
		V_3 = L_47;
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_48 = V_3;
		NullCheck(L_48);
		uint8_t L_49 = Asn1Node_get_Tag_mF8EA3AD46BCFE67532A374299F78BF3CC1A7D078(L_48, /*hidden argument*/NULL);
		if ((((int32_t)((int32_t)((int32_t)L_49&(int32_t)((int32_t)31)))) == ((int32_t)((int32_t)16))))
		{
			goto IL_013e;
		}
	}
	{
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_50 = V_3;
		NullCheck(L_50);
		int64_t L_51 = Asn1Node_get_ChildNodeCount_mF517D478344A4AF6843BE4319A05D248B6B25FAC(L_50, /*hidden argument*/NULL);
		G_B23_0 = ((((int32_t)((((int64_t)L_51) == ((int64_t)(((int64_t)((int64_t)2)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_013f;
	}

IL_013e:
	{
		G_B23_0 = 0;
	}

IL_013f:
	{
		V_9 = (bool)G_B23_0;
		bool L_52 = V_9;
		if (!L_52)
		{
			goto IL_014b;
		}
	}
	{
		InvalidPKCS7Data_t66D90EB0467E0D800AA9F61CF113C851101D136A * L_53 = (InvalidPKCS7Data_t66D90EB0467E0D800AA9F61CF113C851101D136A *)il2cpp_codegen_object_new(InvalidPKCS7Data_t66D90EB0467E0D800AA9F61CF113C851101D136A_il2cpp_TypeInfo_var);
		InvalidPKCS7Data__ctor_mD66D69E4C6C7B78CCA72012A8886107CB59BBBA3(L_53, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_53, PKCS7_CheckStructure_m1C5B3FA520361A3366E2FF3CCA724FC343DCCB70_RuntimeMethod_var);
	}

IL_014b:
	{
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_54 = V_3;
		NullCheck(L_54);
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_55 = Asn1Node_GetChildNode_m9D9513B22B565B7739D03F39C6B8F7D5AFE85010(L_54, 1, /*hidden argument*/NULL);
		NullCheck(L_55);
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_56 = Asn1Node_GetChildNode_m9D9513B22B565B7739D03F39C6B8F7D5AFE85010(L_55, 0, /*hidden argument*/NULL);
		PKCS7_set_data_m48F719D915F508F876092F3A47F9107FFB7B09AE_inline(__this, L_56, /*hidden argument*/NULL);
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_57 = V_1;
		NullCheck(L_57);
		int64_t L_58 = Asn1Node_get_ChildNodeCount_mF517D478344A4AF6843BE4319A05D248B6B25FAC(L_57, /*hidden argument*/NULL);
		V_10 = (bool)((((int64_t)L_58) == ((int64_t)(((int64_t)((int64_t)5)))))? 1 : 0);
		bool L_59 = V_10;
		if (!L_59)
		{
			goto IL_01d6;
		}
	}
	{
		List_1_t2A256183E185A61A299A823886E7884EFE41A289 * L_60 = (List_1_t2A256183E185A61A299A823886E7884EFE41A289 *)il2cpp_codegen_object_new(List_1_t2A256183E185A61A299A823886E7884EFE41A289_il2cpp_TypeInfo_var);
		List_1__ctor_m68C4F11A222C3F5A3D96653F0AF8E22F53BF9D14(L_60, /*hidden argument*/List_1__ctor_m68C4F11A222C3F5A3D96653F0AF8E22F53BF9D14_RuntimeMethod_var);
		PKCS7_set_certChain_mD4A26485F3931361A18ACECBE07233F2BFCFDCA2_inline(__this, L_60, /*hidden argument*/NULL);
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_61 = V_1;
		int32_t L_62 = V_2;
		int32_t L_63 = L_62;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_63, (int32_t)1));
		NullCheck(L_61);
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_64 = Asn1Node_GetChildNode_m9D9513B22B565B7739D03F39C6B8F7D5AFE85010(L_61, L_63, /*hidden argument*/NULL);
		V_3 = L_64;
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_65 = V_3;
		NullCheck(L_65);
		int64_t L_66 = Asn1Node_get_ChildNodeCount_mF517D478344A4AF6843BE4319A05D248B6B25FAC(L_65, /*hidden argument*/NULL);
		V_11 = (bool)((((int64_t)L_66) == ((int64_t)(((int64_t)((int64_t)0)))))? 1 : 0);
		bool L_67 = V_11;
		if (!L_67)
		{
			goto IL_019e;
		}
	}
	{
		InvalidPKCS7Data_t66D90EB0467E0D800AA9F61CF113C851101D136A * L_68 = (InvalidPKCS7Data_t66D90EB0467E0D800AA9F61CF113C851101D136A *)il2cpp_codegen_object_new(InvalidPKCS7Data_t66D90EB0467E0D800AA9F61CF113C851101D136A_il2cpp_TypeInfo_var);
		InvalidPKCS7Data__ctor_mD66D69E4C6C7B78CCA72012A8886107CB59BBBA3(L_68, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_68, PKCS7_CheckStructure_m1C5B3FA520361A3366E2FF3CCA724FC343DCCB70_RuntimeMethod_var);
	}

IL_019e:
	{
		V_12 = 0;
		goto IL_01c4;
	}

IL_01a3:
	{
		List_1_t2A256183E185A61A299A823886E7884EFE41A289 * L_69 = PKCS7_get_certChain_m84F5C10E322905626F9B01B437C577B9E1FB2718_inline(__this, /*hidden argument*/NULL);
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_70 = V_3;
		int32_t L_71 = V_12;
		NullCheck(L_70);
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_72 = Asn1Node_GetChildNode_m9D9513B22B565B7739D03F39C6B8F7D5AFE85010(L_70, L_71, /*hidden argument*/NULL);
		X509Cert_tEC5F828EE93872CC82CDA3C2462EE085E4EA6B59 * L_73 = (X509Cert_tEC5F828EE93872CC82CDA3C2462EE085E4EA6B59 *)il2cpp_codegen_object_new(X509Cert_tEC5F828EE93872CC82CDA3C2462EE085E4EA6B59_il2cpp_TypeInfo_var);
		X509Cert__ctor_m40D5EEA848DBAF3A3F39ED1E91E57A3356E57A52(L_73, L_72, /*hidden argument*/NULL);
		NullCheck(L_69);
		List_1_Add_m39838129E809FB6B5DABDAA8F4C3B4D807AC18DF(L_69, L_73, /*hidden argument*/List_1_Add_m39838129E809FB6B5DABDAA8F4C3B4D807AC18DF_RuntimeMethod_var);
		int32_t L_74 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_74, (int32_t)1));
	}

IL_01c4:
	{
		int32_t L_75 = V_12;
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_76 = V_3;
		NullCheck(L_76);
		int64_t L_77 = Asn1Node_get_ChildNodeCount_mF517D478344A4AF6843BE4319A05D248B6B25FAC(L_76, /*hidden argument*/NULL);
		V_13 = (bool)((((int64_t)(((int64_t)((int64_t)L_75)))) < ((int64_t)L_77))? 1 : 0);
		bool L_78 = V_13;
		if (L_78)
		{
			goto IL_01a3;
		}
	}
	{
	}

IL_01d6:
	{
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_79 = V_1;
		int32_t L_80 = V_2;
		int32_t L_81 = L_80;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_81, (int32_t)1));
		NullCheck(L_79);
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_82 = Asn1Node_GetChildNode_m9D9513B22B565B7739D03F39C6B8F7D5AFE85010(L_79, L_81, /*hidden argument*/NULL);
		V_3 = L_82;
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_83 = V_3;
		NullCheck(L_83);
		uint8_t L_84 = Asn1Node_get_Tag_mF8EA3AD46BCFE67532A374299F78BF3CC1A7D078(L_83, /*hidden argument*/NULL);
		if ((!(((uint32_t)((int32_t)((int32_t)L_84&(int32_t)((int32_t)31)))) == ((uint32_t)((int32_t)17)))))
		{
			goto IL_01fb;
		}
	}
	{
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_85 = V_3;
		NullCheck(L_85);
		int64_t L_86 = Asn1Node_get_ChildNodeCount_mF517D478344A4AF6843BE4319A05D248B6B25FAC(L_85, /*hidden argument*/NULL);
		G_B35_0 = ((((int64_t)L_86) == ((int64_t)(((int64_t)((int64_t)0)))))? 1 : 0);
		goto IL_01fc;
	}

IL_01fb:
	{
		G_B35_0 = 1;
	}

IL_01fc:
	{
		V_14 = (bool)G_B35_0;
		bool L_87 = V_14;
		if (!L_87)
		{
			goto IL_0208;
		}
	}
	{
		InvalidPKCS7Data_t66D90EB0467E0D800AA9F61CF113C851101D136A * L_88 = (InvalidPKCS7Data_t66D90EB0467E0D800AA9F61CF113C851101D136A *)il2cpp_codegen_object_new(InvalidPKCS7Data_t66D90EB0467E0D800AA9F61CF113C851101D136A_il2cpp_TypeInfo_var);
		InvalidPKCS7Data__ctor_mD66D69E4C6C7B78CCA72012A8886107CB59BBBA3(L_88, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_88, PKCS7_CheckStructure_m1C5B3FA520361A3366E2FF3CCA724FC343DCCB70_RuntimeMethod_var);
	}

IL_0208:
	{
		List_1_tC8E7792306B075D1A58B9A4E5F2E9FB5A18DCB61 * L_89 = (List_1_tC8E7792306B075D1A58B9A4E5F2E9FB5A18DCB61 *)il2cpp_codegen_object_new(List_1_tC8E7792306B075D1A58B9A4E5F2E9FB5A18DCB61_il2cpp_TypeInfo_var);
		List_1__ctor_m1E6991C091762B64C6BBA48A9DE9F0CBF4F5FDAE(L_89, /*hidden argument*/List_1__ctor_m1E6991C091762B64C6BBA48A9DE9F0CBF4F5FDAE_RuntimeMethod_var);
		PKCS7_set_sinfos_m0245C0686BDAA4456F190FE981C799FD0B27C397_inline(__this, L_89, /*hidden argument*/NULL);
		V_15 = 0;
		goto IL_023a;
	}

IL_0219:
	{
		List_1_tC8E7792306B075D1A58B9A4E5F2E9FB5A18DCB61 * L_90 = PKCS7_get_sinfos_m20454822948ABDC7E7C9802C1A918A3007E58A90_inline(__this, /*hidden argument*/NULL);
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_91 = V_3;
		int32_t L_92 = V_15;
		NullCheck(L_91);
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_93 = Asn1Node_GetChildNode_m9D9513B22B565B7739D03F39C6B8F7D5AFE85010(L_91, L_92, /*hidden argument*/NULL);
		SignerInfo_tA6405C48DB7EAE3441CB701FC072A86AD372CAF4 * L_94 = (SignerInfo_tA6405C48DB7EAE3441CB701FC072A86AD372CAF4 *)il2cpp_codegen_object_new(SignerInfo_tA6405C48DB7EAE3441CB701FC072A86AD372CAF4_il2cpp_TypeInfo_var);
		SignerInfo__ctor_m89D5D8BD1D5E40668D8EBCE0CEBD9BC238BF2264(L_94, L_93, /*hidden argument*/NULL);
		NullCheck(L_90);
		List_1_Add_m694D5361AC43B73506418BC8B8300F9102B58CF6(L_90, L_94, /*hidden argument*/List_1_Add_m694D5361AC43B73506418BC8B8300F9102B58CF6_RuntimeMethod_var);
		int32_t L_95 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add((int32_t)L_95, (int32_t)1));
	}

IL_023a:
	{
		int32_t L_96 = V_15;
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_97 = V_3;
		NullCheck(L_97);
		int64_t L_98 = Asn1Node_get_ChildNodeCount_mF517D478344A4AF6843BE4319A05D248B6B25FAC(L_97, /*hidden argument*/NULL);
		V_16 = (bool)((((int64_t)(((int64_t)((int64_t)L_96)))) < ((int64_t)L_98))? 1 : 0);
		bool L_99 = V_16;
		if (L_99)
		{
			goto IL_0219;
		}
	}
	{
		__this->set_validStructure_4((bool)1);
	}

IL_0253:
	{
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
// System.Void UnityEngine.Purchasing.Security.RSAKey::set_rsa(System.Security.Cryptography.RSACryptoServiceProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RSAKey_set_rsa_m8109C5A3D59353ECAED3D8CF87B76A0F565E2EC6 (RSAKey_t821B15EEDED09C7088C34750E22FDA0E30B8220C * __this, RSACryptoServiceProvider_t6DC0FC3205BA6CDCA4FF2AEEF566D8F0CCE26AD4 * ___value0, const RuntimeMethod* method)
{
	{
		RSACryptoServiceProvider_t6DC0FC3205BA6CDCA4FF2AEEF566D8F0CCE26AD4 * L_0 = ___value0;
		__this->set_U3CrsaU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Security.RSAKey::.ctor(LipingShare.LCLib.Asn1Processor.Asn1Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RSAKey__ctor_m9F0C709FAD7678CD677CF43970071EE0390A5C83 (RSAKey_t821B15EEDED09C7088C34750E22FDA0E30B8220C * __this, Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * ___n0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_0 = ___n0;
		RSACryptoServiceProvider_t6DC0FC3205BA6CDCA4FF2AEEF566D8F0CCE26AD4 * L_1 = RSAKey_ParseNode_m308E6FE460D267F64F6D982B1BDF872D088E8E9B(__this, L_0, /*hidden argument*/NULL);
		RSAKey_set_rsa_m8109C5A3D59353ECAED3D8CF87B76A0F565E2EC6_inline(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Security.Cryptography.RSACryptoServiceProvider UnityEngine.Purchasing.Security.RSAKey::ParseNode(LipingShare.LCLib.Asn1Processor.Asn1Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RSACryptoServiceProvider_t6DC0FC3205BA6CDCA4FF2AEEF566D8F0CCE26AD4 * RSAKey_ParseNode_m308E6FE460D267F64F6D982B1BDF872D088E8E9B (RSAKey_t821B15EEDED09C7088C34750E22FDA0E30B8220C * __this, Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * ___n0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RSAKey_ParseNode_m308E6FE460D267F64F6D982B1BDF872D088E8E9B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * V_1 = NULL;
	bool V_2 = false;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_3 = NULL;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_4 = NULL;
	String_t* V_5 = NULL;
	String_t* V_6 = NULL;
	RSACryptoServiceProvider_t6DC0FC3205BA6CDCA4FF2AEEF566D8F0CCE26AD4 * V_7 = NULL;
	RSACryptoServiceProvider_t6DC0FC3205BA6CDCA4FF2AEEF566D8F0CCE26AD4 * V_8 = NULL;
	int32_t G_B7_0 = 0;
	{
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_0 = ___n0;
		NullCheck(L_0);
		uint8_t L_1 = Asn1Node_get_Tag_mF8EA3AD46BCFE67532A374299F78BF3CC1A7D078(L_0, /*hidden argument*/NULL);
		if ((!(((uint32_t)((int32_t)((int32_t)L_1&(int32_t)((int32_t)31)))) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_0076;
		}
	}
	{
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_2 = ___n0;
		NullCheck(L_2);
		int64_t L_3 = Asn1Node_get_ChildNodeCount_mF517D478344A4AF6843BE4319A05D248B6B25FAC(L_2, /*hidden argument*/NULL);
		if ((!(((uint64_t)L_3) == ((uint64_t)(((int64_t)((int64_t)2)))))))
		{
			goto IL_0076;
		}
	}
	{
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_4 = ___n0;
		NullCheck(L_4);
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_5 = Asn1Node_GetChildNode_m9D9513B22B565B7739D03F39C6B8F7D5AFE85010(L_4, 0, /*hidden argument*/NULL);
		NullCheck(L_5);
		uint8_t L_6 = Asn1Node_get_Tag_mF8EA3AD46BCFE67532A374299F78BF3CC1A7D078(L_5, /*hidden argument*/NULL);
		if ((!(((uint32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)31)))) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_0076;
		}
	}
	{
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_7 = ___n0;
		NullCheck(L_7);
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_8 = Asn1Node_GetChildNode_m9D9513B22B565B7739D03F39C6B8F7D5AFE85010(L_7, 0, /*hidden argument*/NULL);
		NullCheck(L_8);
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_9 = Asn1Node_GetChildNode_m9D9513B22B565B7739D03F39C6B8F7D5AFE85010(L_8, 0, /*hidden argument*/NULL);
		NullCheck(L_9);
		uint8_t L_10 = Asn1Node_get_Tag_mF8EA3AD46BCFE67532A374299F78BF3CC1A7D078(L_9, /*hidden argument*/NULL);
		if ((!(((uint32_t)((int32_t)((int32_t)L_10&(int32_t)((int32_t)31)))) == ((uint32_t)6))))
		{
			goto IL_0076;
		}
	}
	{
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_11 = ___n0;
		NullCheck(L_11);
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_12 = Asn1Node_GetChildNode_m9D9513B22B565B7739D03F39C6B8F7D5AFE85010(L_11, 0, /*hidden argument*/NULL);
		NullCheck(L_12);
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_13 = Asn1Node_GetChildNode_m9D9513B22B565B7739D03F39C6B8F7D5AFE85010(L_12, 0, /*hidden argument*/NULL);
		NullCheck(L_13);
		String_t* L_14 = Asn1Node_GetDataStr_m98F2E9DC3ACABD540BD1FE3155A5B0DE8E0A89DC(L_13, (bool)0, /*hidden argument*/NULL);
		bool L_15 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_14, _stringLiteralFD916A733B7A811CD35B7057C8AF918C5FA637EB, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_0076;
		}
	}
	{
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_16 = ___n0;
		NullCheck(L_16);
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_17 = Asn1Node_GetChildNode_m9D9513B22B565B7739D03F39C6B8F7D5AFE85010(L_16, 1, /*hidden argument*/NULL);
		NullCheck(L_17);
		uint8_t L_18 = Asn1Node_get_Tag_mF8EA3AD46BCFE67532A374299F78BF3CC1A7D078(L_17, /*hidden argument*/NULL);
		G_B7_0 = ((((int32_t)((int32_t)((int32_t)L_18&(int32_t)((int32_t)31)))) == ((int32_t)3))? 1 : 0);
		goto IL_0077;
	}

IL_0076:
	{
		G_B7_0 = 0;
	}

IL_0077:
	{
		V_0 = (bool)G_B7_0;
		bool L_19 = V_0;
		if (!L_19)
		{
			goto IL_0101;
		}
	}
	{
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_20 = ___n0;
		NullCheck(L_20);
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_21 = Asn1Node_GetChildNode_m9D9513B22B565B7739D03F39C6B8F7D5AFE85010(L_20, 1, /*hidden argument*/NULL);
		NullCheck(L_21);
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_22 = Asn1Node_GetChildNode_m9D9513B22B565B7739D03F39C6B8F7D5AFE85010(L_21, 0, /*hidden argument*/NULL);
		V_1 = L_22;
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_23 = V_1;
		NullCheck(L_23);
		int64_t L_24 = Asn1Node_get_ChildNodeCount_mF517D478344A4AF6843BE4319A05D248B6B25FAC(L_23, /*hidden argument*/NULL);
		V_2 = (bool)((((int64_t)L_24) == ((int64_t)(((int64_t)((int64_t)2)))))? 1 : 0);
		bool L_25 = V_2;
		if (!L_25)
		{
			goto IL_0100;
		}
	}
	{
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_26 = V_1;
		NullCheck(L_26);
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_27 = Asn1Node_GetChildNode_m9D9513B22B565B7739D03F39C6B8F7D5AFE85010(L_26, 0, /*hidden argument*/NULL);
		NullCheck(L_27);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_28 = Asn1Node_get_Data_mD11992CD2F1CCEC2B0E47491D3B6AF04F9C34EC7(L_27, /*hidden argument*/NULL);
		V_3 = L_28;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_29 = V_3;
		NullCheck(L_29);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_30 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))), (int32_t)1)));
		V_4 = L_30;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_31 = V_3;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_32 = V_4;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_33 = V_3;
		NullCheck(L_33);
		Array_Copy_mA10D079DD8D9700CA44721A219A934A2397653F6((RuntimeArray *)(RuntimeArray *)L_31, 1, (RuntimeArray *)(RuntimeArray *)L_32, 0, ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_33)->max_length)))), (int32_t)1)), /*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_34 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		String_t* L_35 = Convert_ToBase64String_mF201749AD724C437524C8A6108519470A0F65B84(L_34, /*hidden argument*/NULL);
		V_5 = L_35;
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_36 = V_1;
		NullCheck(L_36);
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_37 = Asn1Node_GetChildNode_m9D9513B22B565B7739D03F39C6B8F7D5AFE85010(L_36, 1, /*hidden argument*/NULL);
		NullCheck(L_37);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_38 = Asn1Node_get_Data_mD11992CD2F1CCEC2B0E47491D3B6AF04F9C34EC7(L_37, /*hidden argument*/NULL);
		String_t* L_39 = Convert_ToBase64String_mF201749AD724C437524C8A6108519470A0F65B84(L_38, /*hidden argument*/NULL);
		V_6 = L_39;
		RSACryptoServiceProvider_t6DC0FC3205BA6CDCA4FF2AEEF566D8F0CCE26AD4 * L_40 = (RSACryptoServiceProvider_t6DC0FC3205BA6CDCA4FF2AEEF566D8F0CCE26AD4 *)il2cpp_codegen_object_new(RSACryptoServiceProvider_t6DC0FC3205BA6CDCA4FF2AEEF566D8F0CCE26AD4_il2cpp_TypeInfo_var);
		RSACryptoServiceProvider__ctor_m9249D579A83FC34306B6B1A53B677FC0C1DD21E1(L_40, /*hidden argument*/NULL);
		V_7 = L_40;
		RSACryptoServiceProvider_t6DC0FC3205BA6CDCA4FF2AEEF566D8F0CCE26AD4 * L_41 = V_7;
		String_t* L_42 = V_5;
		String_t* L_43 = V_6;
		String_t* L_44 = RSAKey_ToXML_m01179A07C26E2704719C39077239C71F7F3CE85D(__this, L_42, L_43, /*hidden argument*/NULL);
		NullCheck(L_41);
		VirtActionInvoker1< String_t* >::Invoke(11 /* System.Void System.Security.Cryptography.AsymmetricAlgorithm::FromXmlString(System.String) */, L_41, L_44);
		RSACryptoServiceProvider_t6DC0FC3205BA6CDCA4FF2AEEF566D8F0CCE26AD4 * L_45 = V_7;
		V_8 = L_45;
		goto IL_0107;
	}

IL_0100:
	{
	}

IL_0101:
	{
		InvalidRSAData_tCBAC13419C66041C71750F1889052E7E4B77FC0E * L_46 = (InvalidRSAData_tCBAC13419C66041C71750F1889052E7E4B77FC0E *)il2cpp_codegen_object_new(InvalidRSAData_tCBAC13419C66041C71750F1889052E7E4B77FC0E_il2cpp_TypeInfo_var);
		InvalidRSAData__ctor_m1D59AC5862577DDC170A9AB4DB731EF4B89D3732(L_46, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_46, RSAKey_ParseNode_m308E6FE460D267F64F6D982B1BDF872D088E8E9B_RuntimeMethod_var);
	}

IL_0107:
	{
		RSACryptoServiceProvider_t6DC0FC3205BA6CDCA4FF2AEEF566D8F0CCE26AD4 * L_47 = V_8;
		return L_47;
	}
}
// System.String UnityEngine.Purchasing.Security.RSAKey::ToXML(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RSAKey_ToXML_m01179A07C26E2704719C39077239C71F7F3CE85D (RSAKey_t821B15EEDED09C7088C34750E22FDA0E30B8220C * __this, String_t* ___modulus0, String_t* ___exponent1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RSAKey_ToXML_m01179A07C26E2704719C39077239C71F7F3CE85D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_0 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral6C8453D3068655974181930570AA7E07E9733071);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral6C8453D3068655974181930570AA7E07E9733071);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_2 = L_1;
		String_t* L_3 = ___modulus0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_3);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_4 = L_2;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral2DC2EE1440BEAC9DCAE3BEBC4D45EA29EC9C9CEB);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral2DC2EE1440BEAC9DCAE3BEBC4D45EA29EC9C9CEB);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_5 = L_4;
		String_t* L_6 = ___exponent1;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_6);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_7 = L_5;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral694DEBC82C41EE77CCB35D6C3AA36519F25FE472);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral694DEBC82C41EE77CCB35D6C3AA36519F25FE472);
		String_t* L_8 = String_Concat_m232E857CA5107EA6AC52E7DD7018716C021F237B(L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_002f;
	}

IL_002f:
	{
		String_t* L_9 = V_0;
		return L_9;
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
// System.Int32 UnityEngine.Purchasing.Security.SignerInfo::get_Version()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SignerInfo_get_Version_m73B518F42A14804517DB1BC98D59C611E9018484 (SignerInfo_tA6405C48DB7EAE3441CB701FC072A86AD372CAF4 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CVersionU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.Security.SignerInfo::set_Version(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignerInfo_set_Version_m7314BCBCDD8C694F18039CD4F85DF786C24B3E9F (SignerInfo_tA6405C48DB7EAE3441CB701FC072A86AD372CAF4 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CVersionU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Security.SignerInfo::set_IssuerSerialNumber(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignerInfo_set_IssuerSerialNumber_m88D3B9081600A9E9D63C128C3AFE09F9F8B7A954 (SignerInfo_tA6405C48DB7EAE3441CB701FC072A86AD372CAF4 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CIssuerSerialNumberU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Security.SignerInfo::set_EncryptedDigest(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignerInfo_set_EncryptedDigest_mD5A5AC440976B915E5C2EB3B907FBBCD34153DAB (SignerInfo_tA6405C48DB7EAE3441CB701FC072A86AD372CAF4 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___value0, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___value0;
		__this->set_U3CEncryptedDigestU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Security.SignerInfo::.ctor(LipingShare.LCLib.Asn1Processor.Asn1Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignerInfo__ctor_m89D5D8BD1D5E40668D8EBCE0CEBD9BC238BF2264 (SignerInfo_tA6405C48DB7EAE3441CB701FC072A86AD372CAF4 * __this, Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * ___n0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SignerInfo__ctor_m89D5D8BD1D5E40668D8EBCE0CEBD9BC238BF2264_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B7_0 = 0;
	int32_t G_B12_0 = 0;
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_0 = ___n0;
		NullCheck(L_0);
		int64_t L_1 = Asn1Node_get_ChildNodeCount_mF517D478344A4AF6843BE4319A05D248B6B25FAC(L_0, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)((((int64_t)L_1) == ((int64_t)(((int64_t)((int64_t)5)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		InvalidPKCS7Data_t66D90EB0467E0D800AA9F61CF113C851101D136A * L_3 = (InvalidPKCS7Data_t66D90EB0467E0D800AA9F61CF113C851101D136A *)il2cpp_codegen_object_new(InvalidPKCS7Data_t66D90EB0467E0D800AA9F61CF113C851101D136A_il2cpp_TypeInfo_var);
		InvalidPKCS7Data__ctor_mD66D69E4C6C7B78CCA72012A8886107CB59BBBA3(L_3, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, SignerInfo__ctor_m89D5D8BD1D5E40668D8EBCE0CEBD9BC238BF2264_RuntimeMethod_var);
	}

IL_001f:
	{
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_4 = ___n0;
		NullCheck(L_4);
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_5 = Asn1Node_GetChildNode_m9D9513B22B565B7739D03F39C6B8F7D5AFE85010(L_4, 0, /*hidden argument*/NULL);
		V_0 = L_5;
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_6 = V_0;
		NullCheck(L_6);
		uint8_t L_7 = Asn1Node_get_Tag_mF8EA3AD46BCFE67532A374299F78BF3CC1A7D078(L_6, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)31)))) == ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0040;
		}
	}
	{
		InvalidPKCS7Data_t66D90EB0467E0D800AA9F61CF113C851101D136A * L_9 = (InvalidPKCS7Data_t66D90EB0467E0D800AA9F61CF113C851101D136A *)il2cpp_codegen_object_new(InvalidPKCS7Data_t66D90EB0467E0D800AA9F61CF113C851101D136A_il2cpp_TypeInfo_var);
		InvalidPKCS7Data__ctor_mD66D69E4C6C7B78CCA72012A8886107CB59BBBA3(L_9, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, SignerInfo__ctor_m89D5D8BD1D5E40668D8EBCE0CEBD9BC238BF2264_RuntimeMethod_var);
	}

IL_0040:
	{
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_10 = V_0;
		NullCheck(L_10);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_11 = Asn1Node_get_Data_mD11992CD2F1CCEC2B0E47491D3B6AF04F9C34EC7(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		int32_t L_12 = 0;
		uint8_t L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		SignerInfo_set_Version_m7314BCBCDD8C694F18039CD4F85DF786C24B3E9F_inline(__this, L_13, /*hidden argument*/NULL);
		int32_t L_14 = SignerInfo_get_Version_m73B518F42A14804517DB1BC98D59C611E9018484_inline(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_14) == ((uint32_t)1))))
		{
			goto IL_0068;
		}
	}
	{
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_15 = V_0;
		NullCheck(L_15);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_16 = Asn1Node_get_Data_mD11992CD2F1CCEC2B0E47491D3B6AF04F9C34EC7(L_15, /*hidden argument*/NULL);
		NullCheck(L_16);
		G_B7_0 = ((((int32_t)((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length))))) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0069;
	}

IL_0068:
	{
		G_B7_0 = 1;
	}

IL_0069:
	{
		V_3 = (bool)G_B7_0;
		bool L_17 = V_3;
		if (!L_17)
		{
			goto IL_0073;
		}
	}
	{
		UnsupportedSignerInfoVersion_t78C3F3CA53D3A5E2EC25278D6D4483ED761E18F4 * L_18 = (UnsupportedSignerInfoVersion_t78C3F3CA53D3A5E2EC25278D6D4483ED761E18F4 *)il2cpp_codegen_object_new(UnsupportedSignerInfoVersion_t78C3F3CA53D3A5E2EC25278D6D4483ED761E18F4_il2cpp_TypeInfo_var);
		UnsupportedSignerInfoVersion__ctor_m8EAA304A5BC19B4FCD63ED85DBC49ACD36C79FEC(L_18, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, SignerInfo__ctor_m89D5D8BD1D5E40668D8EBCE0CEBD9BC238BF2264_RuntimeMethod_var);
	}

IL_0073:
	{
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_19 = ___n0;
		NullCheck(L_19);
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_20 = Asn1Node_GetChildNode_m9D9513B22B565B7739D03F39C6B8F7D5AFE85010(L_19, 1, /*hidden argument*/NULL);
		V_0 = L_20;
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_21 = V_0;
		NullCheck(L_21);
		uint8_t L_22 = Asn1Node_get_Tag_mF8EA3AD46BCFE67532A374299F78BF3CC1A7D078(L_21, /*hidden argument*/NULL);
		if ((!(((uint32_t)((int32_t)((int32_t)L_22&(int32_t)((int32_t)31)))) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_0097;
		}
	}
	{
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_23 = V_0;
		NullCheck(L_23);
		int64_t L_24 = Asn1Node_get_ChildNodeCount_mF517D478344A4AF6843BE4319A05D248B6B25FAC(L_23, /*hidden argument*/NULL);
		G_B12_0 = ((((int32_t)((((int64_t)L_24) == ((int64_t)(((int64_t)((int64_t)2)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0098;
	}

IL_0097:
	{
		G_B12_0 = 1;
	}

IL_0098:
	{
		V_4 = (bool)G_B12_0;
		bool L_25 = V_4;
		if (!L_25)
		{
			goto IL_00a4;
		}
	}
	{
		InvalidPKCS7Data_t66D90EB0467E0D800AA9F61CF113C851101D136A * L_26 = (InvalidPKCS7Data_t66D90EB0467E0D800AA9F61CF113C851101D136A *)il2cpp_codegen_object_new(InvalidPKCS7Data_t66D90EB0467E0D800AA9F61CF113C851101D136A_il2cpp_TypeInfo_var);
		InvalidPKCS7Data__ctor_mD66D69E4C6C7B78CCA72012A8886107CB59BBBA3(L_26, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_26, SignerInfo__ctor_m89D5D8BD1D5E40668D8EBCE0CEBD9BC238BF2264_RuntimeMethod_var);
	}

IL_00a4:
	{
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_27 = V_0;
		NullCheck(L_27);
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_28 = Asn1Node_GetChildNode_m9D9513B22B565B7739D03F39C6B8F7D5AFE85010(L_27, 1, /*hidden argument*/NULL);
		V_0 = L_28;
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_29 = V_0;
		NullCheck(L_29);
		uint8_t L_30 = Asn1Node_get_Tag_mF8EA3AD46BCFE67532A374299F78BF3CC1A7D078(L_29, /*hidden argument*/NULL);
		V_5 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_30&(int32_t)((int32_t)31)))) == ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_31 = V_5;
		if (!L_31)
		{
			goto IL_00c7;
		}
	}
	{
		InvalidPKCS7Data_t66D90EB0467E0D800AA9F61CF113C851101D136A * L_32 = (InvalidPKCS7Data_t66D90EB0467E0D800AA9F61CF113C851101D136A *)il2cpp_codegen_object_new(InvalidPKCS7Data_t66D90EB0467E0D800AA9F61CF113C851101D136A_il2cpp_TypeInfo_var);
		InvalidPKCS7Data__ctor_mD66D69E4C6C7B78CCA72012A8886107CB59BBBA3(L_32, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_32, SignerInfo__ctor_m89D5D8BD1D5E40668D8EBCE0CEBD9BC238BF2264_RuntimeMethod_var);
	}

IL_00c7:
	{
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_33 = V_0;
		NullCheck(L_33);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_34 = Asn1Node_get_Data_mD11992CD2F1CCEC2B0E47491D3B6AF04F9C34EC7(L_33, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_tBFEA56D2C3543BF68547786BAE0EC50B2DEE0886_il2cpp_TypeInfo_var);
		String_t* L_35 = Asn1Util_ToHexString_mD35BF6D2E0CD4D8CC7FFA9829350CC522A75B8DF(L_34, /*hidden argument*/NULL);
		SignerInfo_set_IssuerSerialNumber_m88D3B9081600A9E9D63C128C3AFE09F9F8B7A954_inline(__this, L_35, /*hidden argument*/NULL);
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_36 = ___n0;
		NullCheck(L_36);
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_37 = Asn1Node_GetChildNode_m9D9513B22B565B7739D03F39C6B8F7D5AFE85010(L_36, 4, /*hidden argument*/NULL);
		V_0 = L_37;
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_38 = V_0;
		NullCheck(L_38);
		uint8_t L_39 = Asn1Node_get_Tag_mF8EA3AD46BCFE67532A374299F78BF3CC1A7D078(L_38, /*hidden argument*/NULL);
		V_6 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_39&(int32_t)((int32_t)31)))) == ((int32_t)4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_40 = V_6;
		if (!L_40)
		{
			goto IL_00fc;
		}
	}
	{
		InvalidPKCS7Data_t66D90EB0467E0D800AA9F61CF113C851101D136A * L_41 = (InvalidPKCS7Data_t66D90EB0467E0D800AA9F61CF113C851101D136A *)il2cpp_codegen_object_new(InvalidPKCS7Data_t66D90EB0467E0D800AA9F61CF113C851101D136A_il2cpp_TypeInfo_var);
		InvalidPKCS7Data__ctor_mD66D69E4C6C7B78CCA72012A8886107CB59BBBA3(L_41, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_41, SignerInfo__ctor_m89D5D8BD1D5E40668D8EBCE0CEBD9BC238BF2264_RuntimeMethod_var);
	}

IL_00fc:
	{
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_42 = V_0;
		NullCheck(L_42);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_43 = Asn1Node_get_Data_mD11992CD2F1CCEC2B0E47491D3B6AF04F9C34EC7(L_42, /*hidden argument*/NULL);
		SignerInfo_set_EncryptedDigest_mD5A5AC440976B915E5C2EB3B907FBBCD34153DAB_inline(__this, L_43, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Purchasing.Security.UnsupportedSignerInfoVersion::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsupportedSignerInfoVersion__ctor_m8EAA304A5BC19B4FCD63ED85DBC49ACD36C79FEC (UnsupportedSignerInfoVersion_t78C3F3CA53D3A5E2EC25278D6D4483ED761E18F4 * __this, const RuntimeMethod* method)
{
	{
		IAPSecurityException__ctor_mEA6EA5CADD09965AA85C53EE97DFDAEAEA6BA478(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Purchasing.Security.X509Cert::set_SerialNumber(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Cert_set_SerialNumber_m7BD94183095571AA9B5C4AA7C2969AAE95D28709 (X509Cert_tEC5F828EE93872CC82CDA3C2462EE085E4EA6B59 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CSerialNumberU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Security.X509Cert::set_ValidAfter(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Cert_set_ValidAfter_mF7415B6796572241A52B95528164AB74C03999EC (X509Cert_tEC5F828EE93872CC82CDA3C2462EE085E4EA6B59 * __this, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___value0, const RuntimeMethod* method)
{
	{
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_0 = ___value0;
		__this->set_U3CValidAfterU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Security.X509Cert::set_ValidBefore(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Cert_set_ValidBefore_mD26CC2275C16B8C7B5994A51796E5A369CBC1E0A (X509Cert_tEC5F828EE93872CC82CDA3C2462EE085E4EA6B59 * __this, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___value0, const RuntimeMethod* method)
{
	{
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_0 = ___value0;
		__this->set_U3CValidBeforeU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Security.X509Cert::set_PubKey(UnityEngine.Purchasing.Security.RSAKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Cert_set_PubKey_mC77494B58C272D77E1A269806FAED2D3EB014678 (X509Cert_tEC5F828EE93872CC82CDA3C2462EE085E4EA6B59 * __this, RSAKey_t821B15EEDED09C7088C34750E22FDA0E30B8220C * ___value0, const RuntimeMethod* method)
{
	{
		RSAKey_t821B15EEDED09C7088C34750E22FDA0E30B8220C * L_0 = ___value0;
		__this->set_U3CPubKeyU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Security.X509Cert::set_SelfSigned(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Cert_set_SelfSigned_mA0E4FFC98305EA98D4AB4C82747AC61059AA9124 (X509Cert_tEC5F828EE93872CC82CDA3C2462EE085E4EA6B59 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CSelfSignedU3Ek__BackingField_4(L_0);
		return;
	}
}
// UnityEngine.Purchasing.Security.DistinguishedName UnityEngine.Purchasing.Security.X509Cert::get_Subject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DistinguishedName_t869CBAB24FEC86C60A469DB0BE479FCAB3FAC521 * X509Cert_get_Subject_mDF8002D759C72F50F49A6100491A100D1339B570 (X509Cert_tEC5F828EE93872CC82CDA3C2462EE085E4EA6B59 * __this, const RuntimeMethod* method)
{
	{
		DistinguishedName_t869CBAB24FEC86C60A469DB0BE479FCAB3FAC521 * L_0 = __this->get_U3CSubjectU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.Security.X509Cert::set_Subject(UnityEngine.Purchasing.Security.DistinguishedName)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Cert_set_Subject_m582742D431E7CFB8CD9C0D85724AADA9868401BA (X509Cert_tEC5F828EE93872CC82CDA3C2462EE085E4EA6B59 * __this, DistinguishedName_t869CBAB24FEC86C60A469DB0BE479FCAB3FAC521 * ___value0, const RuntimeMethod* method)
{
	{
		DistinguishedName_t869CBAB24FEC86C60A469DB0BE479FCAB3FAC521 * L_0 = ___value0;
		__this->set_U3CSubjectU3Ek__BackingField_5(L_0);
		return;
	}
}
// UnityEngine.Purchasing.Security.DistinguishedName UnityEngine.Purchasing.Security.X509Cert::get_Issuer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DistinguishedName_t869CBAB24FEC86C60A469DB0BE479FCAB3FAC521 * X509Cert_get_Issuer_m0BF83395F86C02534A289F7D0FD997999DE711FB (X509Cert_tEC5F828EE93872CC82CDA3C2462EE085E4EA6B59 * __this, const RuntimeMethod* method)
{
	{
		DistinguishedName_t869CBAB24FEC86C60A469DB0BE479FCAB3FAC521 * L_0 = __this->get_U3CIssuerU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.Security.X509Cert::set_Issuer(UnityEngine.Purchasing.Security.DistinguishedName)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Cert_set_Issuer_mB0C5B91679B498795178802E7E0F7A3DB4164C44 (X509Cert_tEC5F828EE93872CC82CDA3C2462EE085E4EA6B59 * __this, DistinguishedName_t869CBAB24FEC86C60A469DB0BE479FCAB3FAC521 * ___value0, const RuntimeMethod* method)
{
	{
		DistinguishedName_t869CBAB24FEC86C60A469DB0BE479FCAB3FAC521 * L_0 = ___value0;
		__this->set_U3CIssuerU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Security.X509Cert::set_Signature(LipingShare.LCLib.Asn1Processor.Asn1Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Cert_set_Signature_mC0FCC2E44260B3149CA24D486141AA91C67EE409 (X509Cert_tEC5F828EE93872CC82CDA3C2462EE085E4EA6B59 * __this, Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * ___value0, const RuntimeMethod* method)
{
	{
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_0 = ___value0;
		__this->set_U3CSignatureU3Ek__BackingField_8(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Security.X509Cert::.ctor(LipingShare.LCLib.Asn1Processor.Asn1Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Cert__ctor_m40D5EEA848DBAF3A3F39ED1E91E57A3356E57A52 (X509Cert_tEC5F828EE93872CC82CDA3C2462EE085E4EA6B59 * __this, Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * ___n0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_0 = ___n0;
		X509Cert_ParseNode_m733170F2285F10F016AFAB3CF10554F71FDD90B8(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Security.X509Cert::ParseNode(LipingShare.LCLib.Asn1Processor.Asn1Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Cert_ParseNode_m733170F2285F10F016AFAB3CF10554F71FDD90B8 (X509Cert_tEC5F828EE93872CC82CDA3C2462EE085E4EA6B59 * __this, Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * ___root0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Cert_ParseNode_m733170F2285F10F016AFAB3CF10554F71FDD90B8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * V_0 = NULL;
	Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B12_0 = 0;
	{
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_0 = ___root0;
		NullCheck(L_0);
		uint8_t L_1 = Asn1Node_get_Tag_mF8EA3AD46BCFE67532A374299F78BF3CC1A7D078(L_0, /*hidden argument*/NULL);
		if ((!(((uint32_t)((int32_t)((int32_t)L_1&(int32_t)((int32_t)31)))) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_001d;
		}
	}
	{
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_2 = ___root0;
		NullCheck(L_2);
		int64_t L_3 = Asn1Node_get_ChildNodeCount_mF517D478344A4AF6843BE4319A05D248B6B25FAC(L_2, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)((((int64_t)L_3) == ((int64_t)(((int64_t)((int64_t)3)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_001e;
	}

IL_001d:
	{
		G_B3_0 = 1;
	}

IL_001e:
	{
		V_2 = (bool)G_B3_0;
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0028;
		}
	}
	{
		InvalidX509Data_tC7C3A26B4358B509276F77D08FED22DE46D6A666 * L_5 = (InvalidX509Data_tC7C3A26B4358B509276F77D08FED22DE46D6A666 *)il2cpp_codegen_object_new(InvalidX509Data_tC7C3A26B4358B509276F77D08FED22DE46D6A666_il2cpp_TypeInfo_var);
		InvalidX509Data__ctor_m9E51EB809C7E99FB7EB674CBEF9B00D74C7822CF(L_5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, X509Cert_ParseNode_m733170F2285F10F016AFAB3CF10554F71FDD90B8_RuntimeMethod_var);
	}

IL_0028:
	{
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_6 = ___root0;
		NullCheck(L_6);
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_7 = Asn1Node_GetChildNode_m9D9513B22B565B7739D03F39C6B8F7D5AFE85010(L_6, 0, /*hidden argument*/NULL);
		__this->set_TbsCertificate_7(L_7);
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_8 = __this->get_TbsCertificate_7();
		NullCheck(L_8);
		int64_t L_9 = Asn1Node_get_ChildNodeCount_mF517D478344A4AF6843BE4319A05D248B6B25FAC(L_8, /*hidden argument*/NULL);
		V_3 = (bool)((((int64_t)L_9) < ((int64_t)(((int64_t)((int64_t)7)))))? 1 : 0);
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_004e;
		}
	}
	{
		InvalidX509Data_tC7C3A26B4358B509276F77D08FED22DE46D6A666 * L_11 = (InvalidX509Data_tC7C3A26B4358B509276F77D08FED22DE46D6A666 *)il2cpp_codegen_object_new(InvalidX509Data_tC7C3A26B4358B509276F77D08FED22DE46D6A666_il2cpp_TypeInfo_var);
		InvalidX509Data__ctor_m9E51EB809C7E99FB7EB674CBEF9B00D74C7822CF(L_11, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, X509Cert_ParseNode_m733170F2285F10F016AFAB3CF10554F71FDD90B8_RuntimeMethod_var);
	}

IL_004e:
	{
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_12 = __this->get_TbsCertificate_7();
		NullCheck(L_12);
		int64_t L_13 = Asn1Node_get_DataLength_m9C2D8DB475F8B7BD30776161BC0BD88932D75E5D(L_12, /*hidden argument*/NULL);
		if ((int64_t)(((int64_t)il2cpp_codegen_add((int64_t)L_13, (int64_t)(((int64_t)((int64_t)4)))))) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), X509Cert_ParseNode_m733170F2285F10F016AFAB3CF10554F71FDD90B8_RuntimeMethod_var);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_14 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)(((intptr_t)((int64_t)il2cpp_codegen_add((int64_t)L_13, (int64_t)(((int64_t)((int64_t)4))))))));
		__this->set_rawTBSCertificate_9(L_14);
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_15 = ___root0;
		NullCheck(L_15);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_16 = Asn1Node_get_Data_mD11992CD2F1CCEC2B0E47491D3B6AF04F9C34EC7(L_15, /*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_17 = __this->get_rawTBSCertificate_9();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_18 = __this->get_rawTBSCertificate_9();
		NullCheck(L_18);
		Array_Copy_mA10D079DD8D9700CA44721A219A934A2397653F6((RuntimeArray *)(RuntimeArray *)L_16, 0, (RuntimeArray *)(RuntimeArray *)L_17, 0, (((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length)))), /*hidden argument*/NULL);
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_19 = __this->get_TbsCertificate_7();
		NullCheck(L_19);
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_20 = Asn1Node_GetChildNode_m9D9513B22B565B7739D03F39C6B8F7D5AFE85010(L_19, 1, /*hidden argument*/NULL);
		V_0 = L_20;
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_21 = V_0;
		NullCheck(L_21);
		uint8_t L_22 = Asn1Node_get_Tag_mF8EA3AD46BCFE67532A374299F78BF3CC1A7D078(L_21, /*hidden argument*/NULL);
		V_4 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_22&(int32_t)((int32_t)31)))) == ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_23 = V_4;
		if (!L_23)
		{
			goto IL_00ac;
		}
	}
	{
		InvalidX509Data_tC7C3A26B4358B509276F77D08FED22DE46D6A666 * L_24 = (InvalidX509Data_tC7C3A26B4358B509276F77D08FED22DE46D6A666 *)il2cpp_codegen_object_new(InvalidX509Data_tC7C3A26B4358B509276F77D08FED22DE46D6A666_il2cpp_TypeInfo_var);
		InvalidX509Data__ctor_m9E51EB809C7E99FB7EB674CBEF9B00D74C7822CF(L_24, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_24, X509Cert_ParseNode_m733170F2285F10F016AFAB3CF10554F71FDD90B8_RuntimeMethod_var);
	}

IL_00ac:
	{
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_25 = V_0;
		NullCheck(L_25);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_26 = Asn1Node_get_Data_mD11992CD2F1CCEC2B0E47491D3B6AF04F9C34EC7(L_25, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_tBFEA56D2C3543BF68547786BAE0EC50B2DEE0886_il2cpp_TypeInfo_var);
		String_t* L_27 = Asn1Util_ToHexString_mD35BF6D2E0CD4D8CC7FFA9829350CC522A75B8DF(L_26, /*hidden argument*/NULL);
		X509Cert_set_SerialNumber_m7BD94183095571AA9B5C4AA7C2969AAE95D28709_inline(__this, L_27, /*hidden argument*/NULL);
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_28 = __this->get_TbsCertificate_7();
		NullCheck(L_28);
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_29 = Asn1Node_GetChildNode_m9D9513B22B565B7739D03F39C6B8F7D5AFE85010(L_28, 3, /*hidden argument*/NULL);
		DistinguishedName_t869CBAB24FEC86C60A469DB0BE479FCAB3FAC521 * L_30 = (DistinguishedName_t869CBAB24FEC86C60A469DB0BE479FCAB3FAC521 *)il2cpp_codegen_object_new(DistinguishedName_t869CBAB24FEC86C60A469DB0BE479FCAB3FAC521_il2cpp_TypeInfo_var);
		DistinguishedName__ctor_m81915730899DDF606AF0805C8F51E619C0E68D77(L_30, L_29, /*hidden argument*/NULL);
		X509Cert_set_Issuer_mB0C5B91679B498795178802E7E0F7A3DB4164C44_inline(__this, L_30, /*hidden argument*/NULL);
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_31 = __this->get_TbsCertificate_7();
		NullCheck(L_31);
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_32 = Asn1Node_GetChildNode_m9D9513B22B565B7739D03F39C6B8F7D5AFE85010(L_31, 5, /*hidden argument*/NULL);
		DistinguishedName_t869CBAB24FEC86C60A469DB0BE479FCAB3FAC521 * L_33 = (DistinguishedName_t869CBAB24FEC86C60A469DB0BE479FCAB3FAC521 *)il2cpp_codegen_object_new(DistinguishedName_t869CBAB24FEC86C60A469DB0BE479FCAB3FAC521_il2cpp_TypeInfo_var);
		DistinguishedName__ctor_m81915730899DDF606AF0805C8F51E619C0E68D77(L_33, L_32, /*hidden argument*/NULL);
		X509Cert_set_Subject_m582742D431E7CFB8CD9C0D85724AADA9868401BA_inline(__this, L_33, /*hidden argument*/NULL);
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_34 = __this->get_TbsCertificate_7();
		NullCheck(L_34);
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_35 = Asn1Node_GetChildNode_m9D9513B22B565B7739D03F39C6B8F7D5AFE85010(L_34, 4, /*hidden argument*/NULL);
		V_1 = L_35;
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_36 = V_1;
		NullCheck(L_36);
		uint8_t L_37 = Asn1Node_get_Tag_mF8EA3AD46BCFE67532A374299F78BF3CC1A7D078(L_36, /*hidden argument*/NULL);
		if ((!(((uint32_t)((int32_t)((int32_t)L_37&(int32_t)((int32_t)31)))) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_0117;
		}
	}
	{
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_38 = V_1;
		NullCheck(L_38);
		int64_t L_39 = Asn1Node_get_ChildNodeCount_mF517D478344A4AF6843BE4319A05D248B6B25FAC(L_38, /*hidden argument*/NULL);
		G_B12_0 = ((((int32_t)((((int64_t)L_39) == ((int64_t)(((int64_t)((int64_t)2)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0118;
	}

IL_0117:
	{
		G_B12_0 = 1;
	}

IL_0118:
	{
		V_5 = (bool)G_B12_0;
		bool L_40 = V_5;
		if (!L_40)
		{
			goto IL_0124;
		}
	}
	{
		InvalidX509Data_tC7C3A26B4358B509276F77D08FED22DE46D6A666 * L_41 = (InvalidX509Data_tC7C3A26B4358B509276F77D08FED22DE46D6A666 *)il2cpp_codegen_object_new(InvalidX509Data_tC7C3A26B4358B509276F77D08FED22DE46D6A666_il2cpp_TypeInfo_var);
		InvalidX509Data__ctor_m9E51EB809C7E99FB7EB674CBEF9B00D74C7822CF(L_41, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_41, X509Cert_ParseNode_m733170F2285F10F016AFAB3CF10554F71FDD90B8_RuntimeMethod_var);
	}

IL_0124:
	{
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_42 = V_1;
		NullCheck(L_42);
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_43 = Asn1Node_GetChildNode_m9D9513B22B565B7739D03F39C6B8F7D5AFE85010(L_42, 0, /*hidden argument*/NULL);
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_44 = X509Cert_ParseTime_m1C2E48C535DECE21B6A920D1C8724758EAED027C(__this, L_43, /*hidden argument*/NULL);
		X509Cert_set_ValidAfter_mF7415B6796572241A52B95528164AB74C03999EC_inline(__this, L_44, /*hidden argument*/NULL);
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_45 = V_1;
		NullCheck(L_45);
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_46 = Asn1Node_GetChildNode_m9D9513B22B565B7739D03F39C6B8F7D5AFE85010(L_45, 1, /*hidden argument*/NULL);
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_47 = X509Cert_ParseTime_m1C2E48C535DECE21B6A920D1C8724758EAED027C(__this, L_46, /*hidden argument*/NULL);
		X509Cert_set_ValidBefore_mD26CC2275C16B8C7B5994A51796E5A369CBC1E0A_inline(__this, L_47, /*hidden argument*/NULL);
		DistinguishedName_t869CBAB24FEC86C60A469DB0BE479FCAB3FAC521 * L_48 = X509Cert_get_Subject_mDF8002D759C72F50F49A6100491A100D1339B570_inline(__this, /*hidden argument*/NULL);
		DistinguishedName_t869CBAB24FEC86C60A469DB0BE479FCAB3FAC521 * L_49 = X509Cert_get_Issuer_m0BF83395F86C02534A289F7D0FD997999DE711FB_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_48);
		bool L_50 = DistinguishedName_Equals_m83D4F336A47239552A3AD2BC0960728E2A7DD110(L_48, L_49, /*hidden argument*/NULL);
		X509Cert_set_SelfSigned_mA0E4FFC98305EA98D4AB4C82747AC61059AA9124_inline(__this, L_50, /*hidden argument*/NULL);
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_51 = __this->get_TbsCertificate_7();
		NullCheck(L_51);
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_52 = Asn1Node_GetChildNode_m9D9513B22B565B7739D03F39C6B8F7D5AFE85010(L_51, 6, /*hidden argument*/NULL);
		RSAKey_t821B15EEDED09C7088C34750E22FDA0E30B8220C * L_53 = (RSAKey_t821B15EEDED09C7088C34750E22FDA0E30B8220C *)il2cpp_codegen_object_new(RSAKey_t821B15EEDED09C7088C34750E22FDA0E30B8220C_il2cpp_TypeInfo_var);
		RSAKey__ctor_m9F0C709FAD7678CD677CF43970071EE0390A5C83(L_53, L_52, /*hidden argument*/NULL);
		X509Cert_set_PubKey_mC77494B58C272D77E1A269806FAED2D3EB014678_inline(__this, L_53, /*hidden argument*/NULL);
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_54 = ___root0;
		NullCheck(L_54);
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_55 = Asn1Node_GetChildNode_m9D9513B22B565B7739D03F39C6B8F7D5AFE85010(L_54, 2, /*hidden argument*/NULL);
		X509Cert_set_Signature_mC0FCC2E44260B3149CA24D486141AA91C67EE409_inline(__this, L_55, /*hidden argument*/NULL);
		return;
	}
}
// System.DateTime UnityEngine.Purchasing.Security.X509Cert::ParseTime(LipingShare.LCLib.Asn1Processor.Asn1Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  X509Cert_ParseTime_m1C2E48C535DECE21B6A920D1C8724758EAED027C (X509Cert_tEC5F828EE93872CC82CDA3C2462EE085E4EA6B59 * __this, Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * ___n0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Cert_ParseTime_m1C2E48C535DECE21B6A920D1C8724758EAED027C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B3_0 = 0;
	{
		UTF8Encoding_t77ED103B749A387EF072C3429F48C91D12CA08DE * L_0 = (UTF8Encoding_t77ED103B749A387EF072C3429F48C91D12CA08DE *)il2cpp_codegen_object_new(UTF8Encoding_t77ED103B749A387EF072C3429F48C91D12CA08DE_il2cpp_TypeInfo_var);
		UTF8Encoding__ctor_m999E138A2E4C290F8A97866714EE53D58C931488(L_0, /*hidden argument*/NULL);
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_1 = ___n0;
		NullCheck(L_1);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = Asn1Node_get_Data_mD11992CD2F1CCEC2B0E47491D3B6AF04F9C34EC7(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_3 = VirtFuncInvoker1< String_t*, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_0, L_2);
		V_0 = L_3;
		String_t* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_4, /*hidden argument*/NULL);
		if ((((int32_t)L_5) == ((int32_t)((int32_t)13))))
		{
			goto IL_002b;
		}
	}
	{
		String_t* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_6, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)((((int32_t)L_7) == ((int32_t)((int32_t)15)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_002c;
	}

IL_002b:
	{
		G_B3_0 = 0;
	}

IL_002c:
	{
		V_8 = (bool)G_B3_0;
		bool L_8 = V_8;
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		InvalidTimeFormat_t803BE227F2D3A4A788D5992EAA0B479232FA2661 * L_9 = (InvalidTimeFormat_t803BE227F2D3A4A788D5992EAA0B479232FA2661 *)il2cpp_codegen_object_new(InvalidTimeFormat_t803BE227F2D3A4A788D5992EAA0B479232FA2661_il2cpp_TypeInfo_var);
		InvalidTimeFormat__ctor_m5C914A0EC6CA59D8504971BDAA512774573B493D(L_9, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, X509Cert_ParseTime_m1C2E48C535DECE21B6A920D1C8724758EAED027C_RuntimeMethod_var);
	}

IL_0038:
	{
		String_t* L_10 = V_0;
		String_t* L_11 = V_0;
		NullCheck(L_11);
		int32_t L_12 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		Il2CppChar L_13 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_10, ((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)1)), /*hidden argument*/NULL);
		V_9 = (bool)((((int32_t)((((int32_t)L_13) == ((int32_t)((int32_t)90)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_9;
		if (!L_14)
		{
			goto IL_0059;
		}
	}
	{
		InvalidTimeFormat_t803BE227F2D3A4A788D5992EAA0B479232FA2661 * L_15 = (InvalidTimeFormat_t803BE227F2D3A4A788D5992EAA0B479232FA2661 *)il2cpp_codegen_object_new(InvalidTimeFormat_t803BE227F2D3A4A788D5992EAA0B479232FA2661_il2cpp_TypeInfo_var);
		InvalidTimeFormat__ctor_m5C914A0EC6CA59D8504971BDAA512774573B493D(L_15, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, X509Cert_ParseTime_m1C2E48C535DECE21B6A920D1C8724758EAED027C_RuntimeMethod_var);
	}

IL_0059:
	{
		V_1 = 0;
		V_2 = 0;
		String_t* L_16 = V_0;
		NullCheck(L_16);
		int32_t L_17 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_16, /*hidden argument*/NULL);
		V_10 = (bool)((((int32_t)L_17) == ((int32_t)((int32_t)13)))? 1 : 0);
		bool L_18 = V_10;
		if (!L_18)
		{
			goto IL_00ae;
		}
	}
	{
		String_t* L_19 = V_0;
		NullCheck(L_19);
		String_t* L_20 = String_Substring_mB593C0A320C683E6E47EFFC0A12B7A465E5E43BB(L_19, 0, 2, /*hidden argument*/NULL);
		int32_t L_21 = Int32_Parse_m5807B6243415790250FC25168F767C08FC16FDEA(L_20, /*hidden argument*/NULL);
		V_2 = L_21;
		int32_t L_22 = V_2;
		V_11 = (bool)((((int32_t)((((int32_t)L_22) < ((int32_t)((int32_t)50)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_23 = V_11;
		if (!L_23)
		{
			goto IL_0094;
		}
	}
	{
		int32_t L_24 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)((int32_t)1900)));
		goto IL_00a7;
	}

IL_0094:
	{
		int32_t L_25 = V_2;
		V_12 = (bool)((((int32_t)L_25) < ((int32_t)((int32_t)50)))? 1 : 0);
		bool L_26 = V_12;
		if (!L_26)
		{
			goto IL_00a7;
		}
	}
	{
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)((int32_t)2000)));
	}

IL_00a7:
	{
		int32_t L_28 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)2));
		goto IL_00c2;
	}

IL_00ae:
	{
		String_t* L_29 = V_0;
		NullCheck(L_29);
		String_t* L_30 = String_Substring_mB593C0A320C683E6E47EFFC0A12B7A465E5E43BB(L_29, 0, 4, /*hidden argument*/NULL);
		int32_t L_31 = Int32_Parse_m5807B6243415790250FC25168F767C08FC16FDEA(L_30, /*hidden argument*/NULL);
		V_2 = L_31;
		int32_t L_32 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)4));
	}

IL_00c2:
	{
		String_t* L_33 = V_0;
		int32_t L_34 = V_1;
		NullCheck(L_33);
		String_t* L_35 = String_Substring_mB593C0A320C683E6E47EFFC0A12B7A465E5E43BB(L_33, L_34, 2, /*hidden argument*/NULL);
		int32_t L_36 = Int32_Parse_m5807B6243415790250FC25168F767C08FC16FDEA(L_35, /*hidden argument*/NULL);
		V_3 = L_36;
		int32_t L_37 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)2));
		String_t* L_38 = V_0;
		int32_t L_39 = V_1;
		NullCheck(L_38);
		String_t* L_40 = String_Substring_mB593C0A320C683E6E47EFFC0A12B7A465E5E43BB(L_38, L_39, 2, /*hidden argument*/NULL);
		int32_t L_41 = Int32_Parse_m5807B6243415790250FC25168F767C08FC16FDEA(L_40, /*hidden argument*/NULL);
		V_4 = L_41;
		int32_t L_42 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_42, (int32_t)2));
		String_t* L_43 = V_0;
		int32_t L_44 = V_1;
		NullCheck(L_43);
		String_t* L_45 = String_Substring_mB593C0A320C683E6E47EFFC0A12B7A465E5E43BB(L_43, L_44, 2, /*hidden argument*/NULL);
		int32_t L_46 = Int32_Parse_m5807B6243415790250FC25168F767C08FC16FDEA(L_45, /*hidden argument*/NULL);
		V_5 = L_46;
		int32_t L_47 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_47, (int32_t)2));
		String_t* L_48 = V_0;
		int32_t L_49 = V_1;
		NullCheck(L_48);
		String_t* L_50 = String_Substring_mB593C0A320C683E6E47EFFC0A12B7A465E5E43BB(L_48, L_49, 2, /*hidden argument*/NULL);
		int32_t L_51 = Int32_Parse_m5807B6243415790250FC25168F767C08FC16FDEA(L_50, /*hidden argument*/NULL);
		V_6 = L_51;
		int32_t L_52 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_52, (int32_t)2));
		String_t* L_53 = V_0;
		int32_t L_54 = V_1;
		NullCheck(L_53);
		String_t* L_55 = String_Substring_mB593C0A320C683E6E47EFFC0A12B7A465E5E43BB(L_53, L_54, 2, /*hidden argument*/NULL);
		int32_t L_56 = Int32_Parse_m5807B6243415790250FC25168F767C08FC16FDEA(L_55, /*hidden argument*/NULL);
		V_7 = L_56;
		int32_t L_57 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_57, (int32_t)2));
		int32_t L_58 = V_2;
		int32_t L_59 = V_3;
		int32_t L_60 = V_4;
		int32_t L_61 = V_5;
		int32_t L_62 = V_6;
		int32_t L_63 = V_7;
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_64;
		memset((&L_64), 0, sizeof(L_64));
		DateTime__ctor_mC9FEFEECD786FDE2648567E114C71A4A468A65FE((&L_64), L_58, L_59, L_60, L_61, L_62, L_63, 1, /*hidden argument*/NULL);
		V_13 = L_64;
		goto IL_0134;
	}

IL_0134:
	{
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_65 = V_13;
		return L_65;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * PKCS7_get_data_m6C282961220626FDCDF7A0BCD869C8F37BD01554_inline (PKCS7_t851499113E52C57B34831AE4D5AB00C973B7D21A * __this, const RuntimeMethod* method)
{
	{
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_0 = __this->get_U3CdataU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AppleReceipt_set_bundleID_m3821E9162753D78429421EC4BA8D0F2778A99728_inline (AppleReceipt_t19AF99FA817972A222A162F65B730C469BFF8698 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CbundleIDU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AppleReceipt_set_appVersion_mA8B0F89E3FECB6154C0C7F9E50AE662F362219AB_inline (AppleReceipt_t19AF99FA817972A222A162F65B730C469BFF8698 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CappVersionU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AppleReceipt_set_opaque_m5B8F9DBF8FE29162066ACE5A77C48A1058BDDAE4_inline (AppleReceipt_t19AF99FA817972A222A162F65B730C469BFF8698 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___value0, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___value0;
		__this->set_U3CopaqueU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AppleReceipt_set_hash_mF81CA1CFD1060539BCC217FA9AF2CB665E1F8DE3_inline (AppleReceipt_t19AF99FA817972A222A162F65B730C469BFF8698 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___value0, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___value0;
		__this->set_U3ChashU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AppleReceipt_set_receiptCreationDate_m9EDA99CB584C1867F28167E00203C3D5C05E8553_inline (AppleReceipt_t19AF99FA817972A222A162F65B730C469BFF8698 * __this, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___value0, const RuntimeMethod* method)
{
	{
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_0 = ___value0;
		__this->set_U3CreceiptCreationDateU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AppleReceipt_set_originalApplicationVersion_m21509B22052C125E8E05D06731406D86DA36270B_inline (AppleReceipt_t19AF99FA817972A222A162F65B730C469BFF8698 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CoriginalApplicationVersionU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_quantity_mD99AD9ADBE95FB0A32B3DAB6AFBA4D3C9CE34193_inline (AppleInAppPurchaseReceipt_t8495AF48B320D4EA26939FA02F9BA8784CF02F90 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CquantityU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_productID_mD2E88AA98AE32A27EF3245ED271C6492274BA7BB_inline (AppleInAppPurchaseReceipt_t8495AF48B320D4EA26939FA02F9BA8784CF02F90 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CproductIDU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_transactionID_m80F1DB67E4887070699C6D72CC25538AD3676820_inline (AppleInAppPurchaseReceipt_t8495AF48B320D4EA26939FA02F9BA8784CF02F90 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CtransactionIDU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_originalTransactionIdentifier_mD8BA44FD3F7952131AAB1D3023BEEA543F75810E_inline (AppleInAppPurchaseReceipt_t8495AF48B320D4EA26939FA02F9BA8784CF02F90 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CoriginalTransactionIdentifierU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_purchaseDate_m2DB360E7CC577E809CE405E0DF013C1B243640BA_inline (AppleInAppPurchaseReceipt_t8495AF48B320D4EA26939FA02F9BA8784CF02F90 * __this, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___value0, const RuntimeMethod* method)
{
	{
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_0 = ___value0;
		__this->set_U3CpurchaseDateU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_originalPurchaseDate_m11819E1F354A5352A36FD6EF9CAB4789C0B9BA3A_inline (AppleInAppPurchaseReceipt_t8495AF48B320D4EA26939FA02F9BA8784CF02F90 * __this, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___value0, const RuntimeMethod* method)
{
	{
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_0 = ___value0;
		__this->set_U3CoriginalPurchaseDateU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_subscriptionExpirationDate_m41872BB77B62E333157EA7A827071C8542ABEA30_inline (AppleInAppPurchaseReceipt_t8495AF48B320D4EA26939FA02F9BA8784CF02F90 * __this, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___value0, const RuntimeMethod* method)
{
	{
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_0 = ___value0;
		__this->set_U3CsubscriptionExpirationDateU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_cancellationDate_mE7DC7F5CCD7B31266F9B023DDFBED321402CC544_inline (AppleInAppPurchaseReceipt_t8495AF48B320D4EA26939FA02F9BA8784CF02F90 * __this, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___value0, const RuntimeMethod* method)
{
	{
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_0 = ___value0;
		__this->set_U3CcancellationDateU3Ek__BackingField_7(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_productType_m582A75CEB8A3689CA224DFABE49C46F1B02528A1_inline (AppleInAppPurchaseReceipt_t8495AF48B320D4EA26939FA02F9BA8784CF02F90 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CproductTypeU3Ek__BackingField_9(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_isFreeTrial_m6232530EC0949863A8AD14211670A2A99298A72A_inline (AppleInAppPurchaseReceipt_t8495AF48B320D4EA26939FA02F9BA8784CF02F90 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CisFreeTrialU3Ek__BackingField_8(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_isIntroductoryPricePeriod_mD5853FF32DB39162C98FAE1587004D73D083BC31_inline (AppleInAppPurchaseReceipt_t8495AF48B320D4EA26939FA02F9BA8784CF02F90 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CisIntroductoryPricePeriodU3Ek__BackingField_10(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void DistinguishedName_set_Country_mDBAE492B7842E0CA86D58F87C9AA5D32B6932E36_inline (DistinguishedName_t869CBAB24FEC86C60A469DB0BE479FCAB3FAC521 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CCountryU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void DistinguishedName_set_Organization_m5D55FB83143BF94F4DA3E4A050C611AE5A590C22_inline (DistinguishedName_t869CBAB24FEC86C60A469DB0BE479FCAB3FAC521 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3COrganizationU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void DistinguishedName_set_OrganizationalUnit_mA1C9087D0563C9A168BE2F112886E8B744DA85C2_inline (DistinguishedName_t869CBAB24FEC86C60A469DB0BE479FCAB3FAC521 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3COrganizationalUnitU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void DistinguishedName_set_CommonName_mB13A018470CF791D18AD6EADDD574B781F59F8EA_inline (DistinguishedName_t869CBAB24FEC86C60A469DB0BE479FCAB3FAC521 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CCommonNameU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void DistinguishedName_set_SerialNumber_m2527B35B15CDC2CC5F04DDEE828B42C28D8B3141_inline (DistinguishedName_t869CBAB24FEC86C60A469DB0BE479FCAB3FAC521 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CSerialNumberU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void DistinguishedName_set_Dnq_m57C69B66B9A1FFAA1D5351EF2D6CB31EA6795322_inline (DistinguishedName_t869CBAB24FEC86C60A469DB0BE479FCAB3FAC521 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CDnqU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void DistinguishedName_set_State_m84A25E37CB40CCA5159EEE1A556969586D229018_inline (DistinguishedName_t869CBAB24FEC86C60A469DB0BE479FCAB3FAC521 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CStateU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* DistinguishedName_get_Organization_mEAA136C2E071E424CD0063754080FD222630E49B_inline (DistinguishedName_t869CBAB24FEC86C60A469DB0BE479FCAB3FAC521 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3COrganizationU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* DistinguishedName_get_OrganizationalUnit_mCF460B6F69D85336CCC09AB3A8FAAED9A573FA68_inline (DistinguishedName_t869CBAB24FEC86C60A469DB0BE479FCAB3FAC521 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3COrganizationalUnitU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* DistinguishedName_get_Dnq_m389254031B6918CBF46DD97310405747C95337DD_inline (DistinguishedName_t869CBAB24FEC86C60A469DB0BE479FCAB3FAC521 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CDnqU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* DistinguishedName_get_Country_mE2E3D1C5B9DE26C4AE134FBCB70D73F2032C2D79_inline (DistinguishedName_t869CBAB24FEC86C60A469DB0BE479FCAB3FAC521 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CCountryU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* DistinguishedName_get_State_m41B3127001C4FC3981E0A9952C632F55DD93962C_inline (DistinguishedName_t869CBAB24FEC86C60A469DB0BE479FCAB3FAC521 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CStateU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* DistinguishedName_get_CommonName_m1E081B22A4EDB3F6A0FA15C4C085AB79229F5F5F_inline (DistinguishedName_t869CBAB24FEC86C60A469DB0BE479FCAB3FAC521 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CCommonNameU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void PKCS7_set_data_m48F719D915F508F876092F3A47F9107FFB7B09AE_inline (PKCS7_t851499113E52C57B34831AE4D5AB00C973B7D21A * __this, Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * ___value0, const RuntimeMethod* method)
{
	{
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_0 = ___value0;
		__this->set_U3CdataU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void PKCS7_set_certChain_mD4A26485F3931361A18ACECBE07233F2BFCFDCA2_inline (PKCS7_t851499113E52C57B34831AE4D5AB00C973B7D21A * __this, List_1_t2A256183E185A61A299A823886E7884EFE41A289 * ___value0, const RuntimeMethod* method)
{
	{
		List_1_t2A256183E185A61A299A823886E7884EFE41A289 * L_0 = ___value0;
		__this->set_U3CcertChainU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR List_1_t2A256183E185A61A299A823886E7884EFE41A289 * PKCS7_get_certChain_m84F5C10E322905626F9B01B437C577B9E1FB2718_inline (PKCS7_t851499113E52C57B34831AE4D5AB00C973B7D21A * __this, const RuntimeMethod* method)
{
	{
		List_1_t2A256183E185A61A299A823886E7884EFE41A289 * L_0 = __this->get_U3CcertChainU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void PKCS7_set_sinfos_m0245C0686BDAA4456F190FE981C799FD0B27C397_inline (PKCS7_t851499113E52C57B34831AE4D5AB00C973B7D21A * __this, List_1_tC8E7792306B075D1A58B9A4E5F2E9FB5A18DCB61 * ___value0, const RuntimeMethod* method)
{
	{
		List_1_tC8E7792306B075D1A58B9A4E5F2E9FB5A18DCB61 * L_0 = ___value0;
		__this->set_U3CsinfosU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR List_1_tC8E7792306B075D1A58B9A4E5F2E9FB5A18DCB61 * PKCS7_get_sinfos_m20454822948ABDC7E7C9802C1A918A3007E58A90_inline (PKCS7_t851499113E52C57B34831AE4D5AB00C973B7D21A * __this, const RuntimeMethod* method)
{
	{
		List_1_tC8E7792306B075D1A58B9A4E5F2E9FB5A18DCB61 * L_0 = __this->get_U3CsinfosU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void RSAKey_set_rsa_m8109C5A3D59353ECAED3D8CF87B76A0F565E2EC6_inline (RSAKey_t821B15EEDED09C7088C34750E22FDA0E30B8220C * __this, RSACryptoServiceProvider_t6DC0FC3205BA6CDCA4FF2AEEF566D8F0CCE26AD4 * ___value0, const RuntimeMethod* method)
{
	{
		RSACryptoServiceProvider_t6DC0FC3205BA6CDCA4FF2AEEF566D8F0CCE26AD4 * L_0 = ___value0;
		__this->set_U3CrsaU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SignerInfo_set_Version_m7314BCBCDD8C694F18039CD4F85DF786C24B3E9F_inline (SignerInfo_tA6405C48DB7EAE3441CB701FC072A86AD372CAF4 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CVersionU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t SignerInfo_get_Version_m73B518F42A14804517DB1BC98D59C611E9018484_inline (SignerInfo_tA6405C48DB7EAE3441CB701FC072A86AD372CAF4 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CVersionU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SignerInfo_set_IssuerSerialNumber_m88D3B9081600A9E9D63C128C3AFE09F9F8B7A954_inline (SignerInfo_tA6405C48DB7EAE3441CB701FC072A86AD372CAF4 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CIssuerSerialNumberU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SignerInfo_set_EncryptedDigest_mD5A5AC440976B915E5C2EB3B907FBBCD34153DAB_inline (SignerInfo_tA6405C48DB7EAE3441CB701FC072A86AD372CAF4 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___value0, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___value0;
		__this->set_U3CEncryptedDigestU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void X509Cert_set_SerialNumber_m7BD94183095571AA9B5C4AA7C2969AAE95D28709_inline (X509Cert_tEC5F828EE93872CC82CDA3C2462EE085E4EA6B59 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CSerialNumberU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void X509Cert_set_Issuer_mB0C5B91679B498795178802E7E0F7A3DB4164C44_inline (X509Cert_tEC5F828EE93872CC82CDA3C2462EE085E4EA6B59 * __this, DistinguishedName_t869CBAB24FEC86C60A469DB0BE479FCAB3FAC521 * ___value0, const RuntimeMethod* method)
{
	{
		DistinguishedName_t869CBAB24FEC86C60A469DB0BE479FCAB3FAC521 * L_0 = ___value0;
		__this->set_U3CIssuerU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void X509Cert_set_Subject_m582742D431E7CFB8CD9C0D85724AADA9868401BA_inline (X509Cert_tEC5F828EE93872CC82CDA3C2462EE085E4EA6B59 * __this, DistinguishedName_t869CBAB24FEC86C60A469DB0BE479FCAB3FAC521 * ___value0, const RuntimeMethod* method)
{
	{
		DistinguishedName_t869CBAB24FEC86C60A469DB0BE479FCAB3FAC521 * L_0 = ___value0;
		__this->set_U3CSubjectU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void X509Cert_set_ValidAfter_mF7415B6796572241A52B95528164AB74C03999EC_inline (X509Cert_tEC5F828EE93872CC82CDA3C2462EE085E4EA6B59 * __this, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___value0, const RuntimeMethod* method)
{
	{
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_0 = ___value0;
		__this->set_U3CValidAfterU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void X509Cert_set_ValidBefore_mD26CC2275C16B8C7B5994A51796E5A369CBC1E0A_inline (X509Cert_tEC5F828EE93872CC82CDA3C2462EE085E4EA6B59 * __this, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___value0, const RuntimeMethod* method)
{
	{
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_0 = ___value0;
		__this->set_U3CValidBeforeU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR DistinguishedName_t869CBAB24FEC86C60A469DB0BE479FCAB3FAC521 * X509Cert_get_Subject_mDF8002D759C72F50F49A6100491A100D1339B570_inline (X509Cert_tEC5F828EE93872CC82CDA3C2462EE085E4EA6B59 * __this, const RuntimeMethod* method)
{
	{
		DistinguishedName_t869CBAB24FEC86C60A469DB0BE479FCAB3FAC521 * L_0 = __this->get_U3CSubjectU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR DistinguishedName_t869CBAB24FEC86C60A469DB0BE479FCAB3FAC521 * X509Cert_get_Issuer_m0BF83395F86C02534A289F7D0FD997999DE711FB_inline (X509Cert_tEC5F828EE93872CC82CDA3C2462EE085E4EA6B59 * __this, const RuntimeMethod* method)
{
	{
		DistinguishedName_t869CBAB24FEC86C60A469DB0BE479FCAB3FAC521 * L_0 = __this->get_U3CIssuerU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void X509Cert_set_SelfSigned_mA0E4FFC98305EA98D4AB4C82747AC61059AA9124_inline (X509Cert_tEC5F828EE93872CC82CDA3C2462EE085E4EA6B59 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CSelfSignedU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void X509Cert_set_PubKey_mC77494B58C272D77E1A269806FAED2D3EB014678_inline (X509Cert_tEC5F828EE93872CC82CDA3C2462EE085E4EA6B59 * __this, RSAKey_t821B15EEDED09C7088C34750E22FDA0E30B8220C * ___value0, const RuntimeMethod* method)
{
	{
		RSAKey_t821B15EEDED09C7088C34750E22FDA0E30B8220C * L_0 = ___value0;
		__this->set_U3CPubKeyU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void X509Cert_set_Signature_mC0FCC2E44260B3149CA24D486141AA91C67EE409_inline (X509Cert_tEC5F828EE93872CC82CDA3C2462EE085E4EA6B59 * __this, Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * ___value0, const RuntimeMethod* method)
{
	{
		Asn1Node_t6DB34BF996BEE05451AFEF505B9733834FA64D16 * L_0 = ___value0;
		__this->set_U3CSignatureU3Ek__BackingField_8(L_0);
		return;
	}
}
