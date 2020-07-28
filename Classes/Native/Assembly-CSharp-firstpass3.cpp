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
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct VirtFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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

// DragonBones.ActionTimelineState
struct ActionTimelineState_t574326A382260C5C6445C9A461CBF4B1DB0D222A;
// DragonBones.Animation
struct Animation_t3E64FBA6FBD6680C6EF991689446EBB237888A7C;
// DragonBones.AnimationConfig
struct AnimationConfig_t2331273DBB0A68A4FB35CE69CA0B742B4D5E5CAB;
// DragonBones.AnimationData
struct AnimationData_t4AD4F64C03ACE899A5CF12139232927E0DAB4770;
// DragonBones.AnimationState
struct AnimationState_tBA6EAAD27D56DD26A61304C93676C337EB761238;
// DragonBones.Armature
struct Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B;
// DragonBones.ArmatureData
struct ArmatureData_tC9AAFB92908EDD32B5EBC30FFFE4D518EA64FC9C;
// DragonBones.BaseFactory
struct BaseFactory_t0F351C3165BC3FF44834228E47FA2AF75DEB546F;
// DragonBones.BinaryDataParser
struct BinaryDataParser_t0A5A88E4A49D2BEC3DB68D9D2990F14A4B42A472;
// DragonBones.Bone
struct Bone_tAFFFF52723C77703DAB65D003E9A418C2766C809;
// DragonBones.BoneData
struct BoneData_t27EE0FCE6786A38FF5694460EFD5D9C86A893EDF;
// DragonBones.BoundingBoxData
struct BoundingBoxData_tEE6787555F5BF2F62E5A540D400A6AE3AC537671;
// DragonBones.CanvasData
struct CanvasData_t86BE43F334AC7763A86ED2586FC42F28341CD866;
// DragonBones.ColorTransform
struct ColorTransform_t18DB7F60BCC055213D32EFB3EE0638632438118B;
// DragonBones.DataParser
struct DataParser_t5A4BE4A9AD3DEE3010C977C380738B093DBFD0FC;
// DragonBones.DisplayData
struct DisplayData_tB52C373BB02142D693D77D78CB19A7FEC5D6592A;
// DragonBones.DragonBones
struct DragonBones_t0C03E4E28174F02190B3E3F3E998AF4889E0DE51;
// DragonBones.DragonBonesData
struct DragonBonesData_t2FD2911DD33EA22A2F8A6D2075530ECDD7AC15AD;
// DragonBones.EventObject
struct EventObject_t92F7B286A8AB858F6ED37C3CCF8C7EB6A850891C;
// DragonBones.IArmatureProxy
struct IArmatureProxy_tDFC9C100EBDC2713C6304D1E8A8159E194EA4A59;
// DragonBones.IEventDispatcher`1<DragonBones.EventObject>
struct IEventDispatcher_1_t8F93E86A86FD52D4B0571E8836C4D53DE9398D1B;
// DragonBones.ListenerDelegate`1<DragonBones.EventObject>
struct ListenerDelegate_1_t8A277CC3A9ACC68F27B82B7C1E142E28D68A6DAF;
// DragonBones.ListenerDelegate`1<System.Object>
struct ListenerDelegate_1_t81957C6ABBA360EC4D1EAE4B6997277D7AC297C0;
// DragonBones.Matrix
struct Matrix_t038C4B16C47630C3863AC754653CCAC74C71753C;
// DragonBones.MeshDisplayData
struct MeshDisplayData_t9DE60F833D98CE7E7FCE3000BC4278C5DF09F6F1;
// DragonBones.ObjectDataParser
struct ObjectDataParser_t66EF5236627EBC3A9FF6F144D005752FDA9783D2;
// DragonBones.Point
struct Point_t1E70618D353D86C776CB6EC3412FB2FDA6A736CB;
// DragonBones.Rectangle
struct Rectangle_tD04A320077702E7EF472AB11E43BF19C4F51D0A3;
// DragonBones.SkinData
struct SkinData_t4A40D94C41796F66FDC9D9EDC4179A56CE3E8D43;
// DragonBones.Slot
struct Slot_t9D06B371824C1B67E43A10A17D18BC3EF71E3867;
// DragonBones.SlotData
struct SlotData_t50C28020EC5517A3F467C8E08E65551F47415B75;
// DragonBones.TextureAtlasData
struct TextureAtlasData_t27A130DFF2DE4AFFB0DAE1C94BD26D924E638FA4;
// DragonBones.TextureData
struct TextureData_tE9C849854E0194DB7DF7175F5F6E6C403BDB9281;
// DragonBones.Transform
struct Transform_tE7D42961E6A4F1135373F19306753C2F35947B15;
// DragonBones.UnityArmatureComponent
struct UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7;
// DragonBones.UnityDragonBonesData
struct UnityDragonBonesData_tB3459525029FD10A37DB7C21A177BEF36E9E0C74;
// DragonBones.UnityDragonBonesData/TextureAtlas[]
struct TextureAtlasU5BU5D_tBD6C7BEFB09DA0FAF6741522C574C15C17696780;
// DragonBones.UnityEventDispatcher`1<DragonBones.EventObject>
struct UnityEventDispatcher_1_tD088000761A00FCC2D3B148E638CBBEDEDECB0A5;
// DragonBones.UnityEventDispatcher`1<System.Object>
struct UnityEventDispatcher_1_t6C19C076F8D076CB95638A5781396C782A3796C6;
// DragonBones.UnityFactory
struct UnityFactory_t170550F12743A129F88E7D1990F607AB2B35C102;
// DragonBones.UserData
struct UserData_tFE97B68B9A6056E7F067E49635C2AF83B3303640;
// DragonBones.WorldClock
struct WorldClock_tB7FDD3624313BD7EC114D044C56303B805D446B7;
// DragonBones.ZOrderTimelineState
struct ZOrderTimelineState_t17B07EDB2637B910F4ED4F81BEFB61BF47BE46E5;
// IAPDemoProductUI
struct IAPDemoProductUI_t8DBFAD3179124DEECE0AD4EAB86EBF7779823C84;
// LightTest
struct LightTest_t629736CB84CF4476B580264298728798C28C9240;
// MiniJSON.Json/Parser
struct Parser_t6D190ECCD78CD62DA1F915A8961D37F1C6C50F05;
// MiniJSON.Json/Serializer
struct Serializer_tE5A49C9AA549A4CDC0A5440C1ECC6778E98A377F;
// ReplaceDisplayTextureTest
struct ReplaceDisplayTextureTest_t323A6BB65AADF7C1610EFF11FCEA741D7F01AB99;
// ReplaceSlotDisplay
struct ReplaceSlotDisplay_tD5D96946B66902C5AAA957FEF2C90F89FCBD6E5C;
// System.Action`1<System.Boolean>
struct Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD;
// System.Action`1<System.Int32Enum>
struct Action_1_tABA1E3BFA092E3309A0ECC53722E4F9826DCE983;
// System.Action`1<System.Object>
struct Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0;
// System.Action`1<System.String>
struct Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0;
// System.Action`1<UnityEngine.Purchasing.RestoreTransactionIDState>
struct Action_1_t00DFDFD25560DD25965E88CC7C430D0703EFA9BF;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_tED6676A6535375B72FAC3BE58CAB9DC30BE201CD;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_t9BB02C59F6A73E760F875CCD8AA6D1A1ACE61970;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_t059E2E9F339047F683CA7038812E624189E7F0CD;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_tC88A56872F7C79DBB9582D4F3FC22ED5D8E0B98B;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA;
// System.Collections.Generic.Dictionary`2<System.String,DragonBones.AnimationData>
struct Dictionary_2_t9DC56FBD75D7C88B3298977239D5FC6DC6B5C526;
// System.Collections.Generic.Dictionary`2<System.String,DragonBones.ArmatureData>
struct Dictionary_2_t17301488D4B16297A4C30C67E1F65B6D3D574D27;
// System.Collections.Generic.Dictionary`2<System.String,DragonBones.BoneData>
struct Dictionary_2_tB9A35A98DA4C96C5FDB6A361B171699E22B11675;
// System.Collections.Generic.Dictionary`2<System.String,DragonBones.BonePose>
struct Dictionary_2_tB545CAFA348AB9FF8CE646A1EBB76B3B513EEF88;
// System.Collections.Generic.Dictionary`2<System.String,DragonBones.ConstraintData>
struct Dictionary_2_t94A1848DDBD7F62C2B0C9888B820DEC9BC5D5657;
// System.Collections.Generic.Dictionary`2<System.String,DragonBones.DragonBonesData>
struct Dictionary_2_tA101C9E1C3115759947657C666A4647C1379C058;
// System.Collections.Generic.Dictionary`2<System.String,DragonBones.ListenerDelegate`1<DragonBones.EventObject>>
struct Dictionary_2_t008A1E1E063125ABBA93E1817835C669C87A89CD;
// System.Collections.Generic.Dictionary`2<System.String,DragonBones.SkinData>
struct Dictionary_2_t9FBB9B83FE6C146508E7214E535234CCE1D04ECE;
// System.Collections.Generic.Dictionary`2<System.String,DragonBones.SlotData>
struct Dictionary_2_t097C016CF9530F77CD8ADCCEACEA648913A6763A;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<DragonBones.DisplayData>>
struct Dictionary_2_t51E58D43386A00E8D6E65AE99EBE0C81025E6108;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<DragonBones.TextureAtlasData>>
struct Dictionary_2_tDD3DA79C93784535539DDA4AE404D93F4F93320F;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tBA5388DBB42BF620266F9A48E8B859BBBB224E25;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Purchasing.Product>
struct Dictionary_2_tCAF0D54E59FAC220E2EF9D3ECAFF045862EC66C0;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<DragonBones.BaseObject>>
struct Dictionary_2_t7E9563E6BA7DDD7E3A4D25B210F8CC1782CE61CF;
// System.Collections.Generic.Dictionary`2<System.Type,System.UInt32>
struct Dictionary_2_t089A877DFA71BDC0A1A0E3D24A2242E35A6A37F3;
// System.Collections.Generic.Dictionary`2<UnityEngine.Purchasing.AppStore,System.String>
struct Dictionary_2_t2611EA63F6500C851632D260D544EEDF382EDE72;
// System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.Product>
struct HashSet_1_t361D3549FC7078E1C2F7C4C344909910E39A0D92;
// System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition>
struct HashSet_1_tE69581B2FBB736F3DE03D470AE10601F835DF863;
// System.Collections.Generic.ICollection`1<UnityEngine.Purchasing.ProductCatalogItem>
struct ICollection_1_tE43B7B631F38616D4AA59B4D88917FBAC1F4ABC4;
// System.Collections.Generic.ICollection`1<UnityEngine.Purchasing.StoreID>
struct ICollection_1_t6C86993812C8B7A8E4D0ECB910B56C136FE21425;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Purchasing.PayoutDefinition>
struct IEnumerable_1_t75451257B20062EFF170EAA0B5F266DB96A34E23;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t1F07EAC22CC1D4F279164B144240E4718BD7E7A9;
// System.Collections.Generic.IList`1<UnityEngine.Purchasing.ProductCatalogPayout>
struct IList_1_tDF7260DFB3D7DCA8C185865AB5441BCB08F69966;
// System.Collections.Generic.List`1<DragonBones.ActionData>
struct List_1_tF9CD8A25990AB08F6C8668905F99E9F5AB6CAB87;
// System.Collections.Generic.List`1<DragonBones.AnimationState>
struct List_1_tAA2E2D5FB494F278CE1516BB45A8263A63B25D05;
// System.Collections.Generic.List`1<DragonBones.Bone>
struct List_1_tB9E7FBF958A1675741FDD4B0929B4137E0C5DA17;
// System.Collections.Generic.List`1<DragonBones.BoneData>
struct List_1_t053F953DD17F39D2C3F2CE25546EF2B26A57A9A6;
// System.Collections.Generic.List`1<DragonBones.BoneTimelineState>
struct List_1_t085DDEFF8CC8CF202962898A0B7242693065B7AE;
// System.Collections.Generic.List`1<DragonBones.Constraint>
struct List_1_tA0901ACF997A14EB6A8432FDBEAA0D19E348AA51;
// System.Collections.Generic.List`1<DragonBones.ConstraintTimelineState>
struct List_1_t0BE721B65ED893EE452BCED4E8D5B2A4EC01221E;
// System.Collections.Generic.List`1<DragonBones.DisplayData>
struct List_1_t99FE96A26AAAEE3550BDBF65F567EB6CAD932825;
// System.Collections.Generic.List`1<DragonBones.Slot>
struct List_1_t2C819212DB065F4A0B4106A797BDF1FDD5BE80A9;
// System.Collections.Generic.List`1<DragonBones.SlotData>
struct List_1_t174EBD04B31FA10DF20B3061075FB69062E0CB5A;
// System.Collections.Generic.List`1<DragonBones.SlotTimelineState>
struct List_1_tE43D2A290FF000B5115F950F339BC5511121E134;
// System.Collections.Generic.List`1<DragonBones.TimelineState>
struct List_1_tE34CD2838175C9B6719DDDA858C8BCD2A7D8ABCE;
// System.Collections.Generic.List`1<DragonBones.UnityBone>
struct List_1_tFD4F55D044761D75C5054626EC514109A176F9C5;
// System.Collections.Generic.List`1<DragonBones.UnityDragonBonesData>
struct List_1_t5BE5E40F9280D5F0193D1BCAAEF3964F3DA9FCEE;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37;
// System.Collections.Generic.List`1<System.String>
struct List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3;
// System.Collections.Generic.List`1<System.UInt32>
struct List_1_t49B315A213A231954A3718D77EE3A2AFF443C38E;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_tE7746C234F913BA0579DAC892E7288A1C7664A0A;
// System.Collections.Generic.List`1<UnityEngine.Purchasing.IAPButton>
struct List_1_t4EA118A9AAEF1F1654837150C244FCF20A2612C6;
// System.Collections.Generic.List`1<UnityEngine.Purchasing.IAPListener>
struct List_1_t9AAA1568B76F8B92C93DB49A597240F9DEEE5E40;
// System.Collections.Generic.List`1<UnityEngine.Purchasing.LocalizedProductDescription>
struct List_1_t126F438F1E5CA46096142C20EB7F5501D8DFBB2F;
// System.Collections.Generic.List`1<UnityEngine.Purchasing.PayoutDefinition>
struct List_1_t3BB189095B85DE5B71713AA7779513A84EB7EB9A;
// System.Collections.Generic.List`1<UnityEngine.Purchasing.ProductCatalogItem>
struct List_1_tF77D0F7B15CCDF8FD5F7CDEE53B08C264FFEF116;
// System.Collections.Generic.List`1<UnityEngine.Purchasing.ProductCatalogPayout>
struct List_1_t698A81D8AC3EF15A9768C23EEBE4FAABB2A74817;
// System.Collections.Generic.List`1<UnityEngine.Purchasing.StoreID>
struct List_1_t062D5CAF9C7F2C671DA4AAFCA4E34DC618BE1067;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Collections.IEnumerator
struct IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A;
// System.Collections.IList
struct IList_tA637AB426E16F84F84ACC2813BDCF3A0414AF0AA;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Func`2<System.Object,System.Int32>
struct Func_2_t8B2DA3FB30280CE3D92F50E9CCAACEE4828789A6;
// System.Func`2<System.Object,System.String>
struct Func_2_t44B347E67E515867D995E8BD5EFD67FA88CE53CF;
// System.Func`2<UnityEngine.Purchasing.Product,System.String>
struct Func_2_tE3DDEF72300908E3958302E8350C5EECED6BD11E;
// System.Globalization.Calendar
struct Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5;
// System.Globalization.CompareInfo
struct CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1;
// System.Globalization.CultureData
struct CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD;
// System.Globalization.CultureInfo
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8;
// System.Globalization.TextInfo
struct TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.IFormatProvider
struct IFormatProvider_t4247E13AE2D97A079B88D594B7ABABF313259901;
// System.IO.StringReader
struct StringReader_t3095DEB3D26F40D1A7F9B76835D80AFE70E47E12;
// System.IO.TextReader
struct TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A;
// System.Int16[]
struct Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.NotSupportedException
struct NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.Single[]
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.UInt16[]
struct UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E;
// System.UInt32[]
struct UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// Uniject.IUtil
struct IUtil_t693A3F661BFD1CF4372729348BED83FC5E9564C8;
// UnityEngine.Camera
struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0;
// UnityEngine.Canvas
struct Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F;
// UnityEngine.Events.UnityAction
struct UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4;
// UnityEngine.Events.UnityEvent
struct UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D;
// UnityEngine.Events.UnityEvent`1<UnityEngine.Purchasing.Product>
struct UnityEvent_1_tEE1A2CFF07DB130E94E8EDC3B16BD99927EFCB0B;
// UnityEngine.Events.UnityEvent`2<System.Object,System.Int32Enum>
struct UnityEvent_2_t805AE90FB19A3B2E903161B79BBB4F2DE5ADF91F;
// UnityEngine.Events.UnityEvent`2<UnityEngine.Purchasing.Product,UnityEngine.Purchasing.PurchaseFailureReason>
struct UnityEvent_2_t303E7F876F93A36ED8E5DCA060E96AA6E2C8FAD5;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.ILogger
struct ILogger_t572B66532D8EB6E76240476A788384A26D70866F;
// UnityEngine.Material
struct Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598;
// UnityEngine.Mesh
struct Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.Purchasing.CloudCatalogImpl
struct CloudCatalogImpl_tA904FC1D31FD9A9F954BA9BEE756D8A8A8E88E39;
// UnityEngine.Purchasing.CodelessIAPStoreListener
struct CodelessIAPStoreListener_tC0C269A13BAE3B9F9AA24455FAB72340347F7303;
// UnityEngine.Purchasing.ConfigurationBuilder
struct ConfigurationBuilder_t18C1B421FE4071AD4DB4A340A2A8D51AB090F3AE;
// UnityEngine.Purchasing.DemoInventory
struct DemoInventory_tEE67406267DE534F798D930E84602CC4F0584EE7;
// UnityEngine.Purchasing.Extension.IPurchasingBinder
struct IPurchasingBinder_t29DFEB92F0789E5E0A5F52148451C2A5F9BEA425;
// UnityEngine.Purchasing.Extension.IPurchasingModule
struct IPurchasingModule_tBA2577ED1E963CA0ABA1DFA359A020982DE0B1BF;
// UnityEngine.Purchasing.Extension.IPurchasingModule[]
struct IPurchasingModuleU5BU5D_tF106F307EE194D8B47140E160F5BC38EDFFF9384;
// UnityEngine.Purchasing.IAPButton
struct IAPButton_t1BDE7DF230194C47716F1AD10806094D8DE39CD9;
// UnityEngine.Purchasing.IAPButton/OnPurchaseCompletedEvent
struct OnPurchaseCompletedEvent_tE1F6B944B4FED7F7744C50608F2A02E711C82BB5;
// UnityEngine.Purchasing.IAPButton/OnPurchaseFailedEvent
struct OnPurchaseFailedEvent_t12785B755627F44DD9D18B1141669474E76083E9;
// UnityEngine.Purchasing.IAPButton[]
struct IAPButtonU5BU5D_t8ACA697E5F8E21599D4A8C1FC59D820C3DD57906;
// UnityEngine.Purchasing.IAPListener
struct IAPListener_tA8E5B3850C466201C221D95CF74A9BEA7DC74E61;
// UnityEngine.Purchasing.IAPListener/OnPurchaseCompletedEvent
struct OnPurchaseCompletedEvent_t69F2AA7C2E6305881C5030EEE41E4EBCD72B08C4;
// UnityEngine.Purchasing.IAPListener/OnPurchaseFailedEvent
struct OnPurchaseFailedEvent_tBE41AD846CDA9B343E1C212C291326AF0B98B026;
// UnityEngine.Purchasing.IAPListener[]
struct IAPListenerU5BU5D_t15AB39C2A62B5F9253B677EEB460271FCC0C7E47;
// UnityEngine.Purchasing.IAsyncWebUtil
struct IAsyncWebUtil_tACE05D7D98C5462C6C4F5580C6B0057DE380C0EC;
// UnityEngine.Purchasing.IDs
struct IDs_t978DE239966E5906480541F9982EA9624943DA53;
// UnityEngine.Purchasing.IExtensionProvider
struct IExtensionProvider_t4AEE9698E20BA2DCA32EC4729DCAA60D09DA95CA;
// UnityEngine.Purchasing.INativeStoreProvider
struct INativeStoreProvider_tDB93F77D0478925D332E9E7E1CCAD7FB6F8869E4;
// UnityEngine.Purchasing.IProductCatalogImpl
struct IProductCatalogImpl_t8BA953CAE13CEE4C130D0868A759FF77F5C65131;
// UnityEngine.Purchasing.IStoreController
struct IStoreController_t6A30FF7F81804FCC0082AB9DF2CE86BCFB91DF67;
// UnityEngine.Purchasing.IStoreListener
struct IStoreListener_tBB9A0373D14167C7600B988F37B85E14E8D60A66;
// UnityEngine.Purchasing.LocalizedProductDescription
struct LocalizedProductDescription_tBA695FEC391F4F17DC62346CABA28CAEB654D037;
// UnityEngine.Purchasing.PayoutDefinition
struct PayoutDefinition_tE787916C6F389E12B8C2F10F3A87CD79B6C2A273;
// UnityEngine.Purchasing.PayoutDefinition[]
struct PayoutDefinitionU5BU5D_tBED8269F285FBB455D663A4434785D666963059A;
// UnityEngine.Purchasing.Price
struct Price_t7A5CFB9F462BB652A9C4C0102FD9284FAAA27C61;
// UnityEngine.Purchasing.Product
struct Product_t830A133A97BEA12C3CD696853098A295D99A6DE4;
// UnityEngine.Purchasing.ProductCatalog
struct ProductCatalog_t514386D43815F0DD3BD3695ABBB1BC66351D569E;
// UnityEngine.Purchasing.ProductCatalogItem
struct ProductCatalogItem_t0CDB4E1B6E5692F115DBC421DA38BFC6BC3B3356;
// UnityEngine.Purchasing.ProductCatalogItem[]
struct ProductCatalogItemU5BU5D_t6B8E32EED3E1F8EB3FFE313B8369A4540EB7EA4F;
// UnityEngine.Purchasing.ProductCatalogPayout
struct ProductCatalogPayout_t4DFA2A14A2D8FFE1FD41C34DB603C2C1E805CE22;
// UnityEngine.Purchasing.ProductCollection
struct ProductCollection_t7BE71F2FA5BE05F5DA13EA701B513861516F4C07;
// UnityEngine.Purchasing.ProductDefinition
struct ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10;
// UnityEngine.Purchasing.ProductMetadata
struct ProductMetadata_t1CAA912963F8B24B34F53CCF29A6E0BD89B33B48;
// UnityEngine.Purchasing.Product[]
struct ProductU5BU5D_tCC1E9F34B8B3A88563CA989013308FB058864237;
// UnityEngine.Purchasing.PurchaseEventArgs
struct PurchaseEventArgs_tF6E04BFD5492F5F57309FFBB2415EB26E5B88C04;
// UnityEngine.Purchasing.PurchasingFactory
struct PurchasingFactory_tAFBB2D3F6FD1740FCC4B64AE02E4BFFF8A2AB765;
// UnityEngine.Purchasing.StandardPurchasingModule
struct StandardPurchasingModule_t45E3E7F3D0D8CE91AD85D7BE5B29CBA2235B3BFA;
// UnityEngine.Purchasing.StandardPurchasingModule/StoreInstance
struct StoreInstance_t615A2269FB2008E83D46EF40601BD6408BCDA581;
// UnityEngine.Purchasing.WinRTStore
struct WinRTStore_tE9F2CE212684AB68358740F6A166187E8A4269CC;
// UnityEngine.RectTransform
struct RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20;
// UnityEngine.Rendering.SortingGroup
struct SortingGroup_tB115E99DFEC155BA39717DC7970E92586F995AED;
// UnityEngine.Shader
struct Shader_tE2731FF351B74AB4186897484FB01E000C1160CA;
// UnityEngine.Sprite
struct Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198;
// UnityEngine.TextAsset
struct TextAsset_tEE9F5A28C3B564D6BA849C45C13192B9E0EF8D4E;
// UnityEngine.TextGenerator
struct TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8;
// UnityEngine.Texture2D
struct Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5;
// UnityEngine.UI.Button
struct Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172;
// UnityEngine.UI.FontData
struct FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494;
// UnityEngine.UI.Graphic
struct Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B;
// UnityEngine.UI.Selectable
struct Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t98F7C5A863B20CD5DBE49CE288038BA954C83F02;
// UnityEngine.UI.Text
struct Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739;
// coreElement.Bullet
struct Bullet_tE4257FB0F05939D36A937D95AD60A2AC7E17A747;
// coreElement.CoreElement
struct CoreElement_tE4AA9E2B7F77B929778F44A58FC2036C30BF2966;
// performanceTest.PerformanceTest
struct PerformanceTest_t8B45D43C5E749B6982426CFCEC17145D62396754;
// performanceTest.PerformanceTest/<BuildArmatureComponent>d__2
struct U3CBuildArmatureComponentU3Ed__2_tBA0BC2EFDBB3AE560B94ACE0FB1B2691C4DFA7EA;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t00DFDFD25560DD25965E88CC7C430D0703EFA9BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CodelessIAPStoreListener_tC0C269A13BAE3B9F9AA24455FAB72340347F7303_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CoreElement_tE4AA9E2B7F77B929778F44A58FC2036C30BF2966_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAppleExtensions_tDBD257FA5CB6B55D1BE0F95CFD639A808A5101D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t6C86993812C8B7A8E4D0ECB910B56C136FE21425_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_tA3BAB2482E28132A7CA9E0E21393027353C28B54_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDs_t978DE239966E5906480541F9982EA9624943DA53_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t5DD75706A9E736D653B9C6D9400DD948E0B41764_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tA494AF7DA4EBE8B2D0C63BB213489DFDECC7DF05_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tE030174E3F068E195E7F07D0401AA99236EDCC4E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_tD74549CEA1AA48E768382B94FEACBB07E2E3FA2C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tBDA50FE4985795B8AD8FDC00241F7AEE02E72959_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tCDFB8CE6DBF51243627BA58F76C3CF7F016E3357_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tF1A2E2FA355AB63140A3E3135FEE6F002250CBDB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEventDispatcher_1_t8F93E86A86FD52D4B0571E8836C4D53DE9398D1B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_tA637AB426E16F84F84ACC2813BDCF3A0414AF0AA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMicrosoftExtensions_t00C188B1B25CEAF55F58284ACCCBEFCB14015B54_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMoolahExtension_t7A27B23948AF3F5FF412659F8D18FB1623B9BE01_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISamsungAppsExtensions_tB0CEAD96F8AB0537F5FDEE5E40B29C197CF94F78_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IStoreController_t6A30FF7F81804FCC0082AB9DF2CE86BCFB91DF67_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InitializationFailureReason_t5A6284D67FA09D301793E67D8B7003299F4D3062_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t3BB189095B85DE5B71713AA7779513A84EB7EB9A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t4EA118A9AAEF1F1654837150C244FCF20A2612C6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t9AAA1568B76F8B92C93DB49A597240F9DEEE5E40_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ListenerDelegate_1_t8A277CC3A9ACC68F27B82B7C1E142E28D68A6DAF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Parser_t6D190ECCD78CD62DA1F915A8961D37F1C6C50F05_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PayoutDefinition_tE787916C6F389E12B8C2F10F3A87CD79B6C2A273_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PurchaseFailureReason_t42EC65C1103B27F82198DC42C8D96C1A14ED7432_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimePlatform_tD5F5737C1BBBCBB115EB104DF2B7876387E80132_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SByte_t9070AEA2966184235653CB9B4D33B149CDA831DF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Serializer_tE5A49C9AA549A4CDC0A5440C1ECC6778E98A377F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StandardPurchasingModule_t45E3E7F3D0D8CE91AD85D7BE5B29CBA2235B3BFA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringReader_t3095DEB3D26F40D1A7F9B76835D80AFE70E47E12_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transform_tE7D42961E6A4F1135373F19306753C2F35947B15_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CBuildArmatureComponentU3Ed__2_tBA0BC2EFDBB3AE560B94ACE0FB1B2691C4DFA7EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16_tAE45CEF73BF720100519F6867F32145D075F928E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityFactory_t170550F12743A129F88E7D1990F607AB2B35C102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral02606F030B6846960D36CB5E85E5361C7DC28DF6;
IL2CPP_EXTERN_C String_t* _stringLiteral06576556D1AD802F247CAD11AE748BE47B70CD9C;
IL2CPP_EXTERN_C String_t* _stringLiteral080B4BAA482B7F3C2D4B9E09D3F07509DA3911BF;
IL2CPP_EXTERN_C String_t* _stringLiteral0F00A103EFD2C21BB6513C50A12746FE4FB0BE2C;
IL2CPP_EXTERN_C String_t* _stringLiteral11C6731752B38C53AFEA2400C80A419895BB6CE8;
IL2CPP_EXTERN_C String_t* _stringLiteral123645E2871F98468FD0A0AFF42FE84FB261141E;
IL2CPP_EXTERN_C String_t* _stringLiteral153809851B33CE0CDCE06E5A572C675E18D0C3B5;
IL2CPP_EXTERN_C String_t* _stringLiteral1ADBCC344B317C2F3BD64FDAC273F8B0DC410CDF;
IL2CPP_EXTERN_C String_t* _stringLiteral1C99BFDF8E727850D952C770A237005295E9DE74;
IL2CPP_EXTERN_C String_t* _stringLiteral1DA8402449899EC1BA9C34C095DBB79D0585DCD7;
IL2CPP_EXTERN_C String_t* _stringLiteral21AE27F947EF77236FD5E0029FDFE3E0913B464B;
IL2CPP_EXTERN_C String_t* _stringLiteral2ACE62C1BEFA19E3EA37DD52BE9F6D508C5163E6;
IL2CPP_EXTERN_C String_t* _stringLiteral2BE88CA4242C76E8253AC62474851065032D6833;
IL2CPP_EXTERN_C String_t* _stringLiteral2BF643B4719C1494B7BC1DA4865CC0F21E86C476;
IL2CPP_EXTERN_C String_t* _stringLiteral2BFBE0BC53277529025720589E902C25BF01F2F4;
IL2CPP_EXTERN_C String_t* _stringLiteral2C9C1F79142DF1B66D7A9ED0086592E49C8CF16E;
IL2CPP_EXTERN_C String_t* _stringLiteral395D3B4C7BB341EA56A46A588CE791050441A2B1;
IL2CPP_EXTERN_C String_t* _stringLiteral3AF7DED779EA392EF471B871E6E3C1973F8D6473;
IL2CPP_EXTERN_C String_t* _stringLiteral3CACC7BFAC0A382C669A884C953D0401A689785D;
IL2CPP_EXTERN_C String_t* _stringLiteral4140BACA5BA2713EC983EBBAB447F02D7673F0DB;
IL2CPP_EXTERN_C String_t* _stringLiteral42CD5C4560EAF00804576343DED4F73E68522924;
IL2CPP_EXTERN_C String_t* _stringLiteral4629CA1B60E263BDC4326334B23323E0434717A5;
IL2CPP_EXTERN_C String_t* _stringLiteral4818CDB71856B7EF38922792D99BA8CE7B4C845E;
IL2CPP_EXTERN_C String_t* _stringLiteral4AD3EF355FF76579479BCD6AB56935B79503E851;
IL2CPP_EXTERN_C String_t* _stringLiteral4B2773C3D9690A0B0BB2782558E50480AB7F80BD;
IL2CPP_EXTERN_C String_t* _stringLiteral4D335E6094A46E7165552C32C3907F3BF668C68C;
IL2CPP_EXTERN_C String_t* _stringLiteral4FE272F22261FA595C98F4255A84C2656D9F3D71;
IL2CPP_EXTERN_C String_t* _stringLiteral50FDA0180732E4913EF0E89711873E7C0722688B;
IL2CPP_EXTERN_C String_t* _stringLiteral51A22438BF55663C476DB0C287827A6035F3D41C;
IL2CPP_EXTERN_C String_t* _stringLiteral522F6EFAD059981471B05892D9DC58AAF99A49A2;
IL2CPP_EXTERN_C String_t* _stringLiteral527C75C1D07CB5F6D0B5FF91F8DDF8EB4B7D2E74;
IL2CPP_EXTERN_C String_t* _stringLiteral52DA7846E396FF38CD6729BEC21B6F9159F9BD1C;
IL2CPP_EXTERN_C String_t* _stringLiteral563DD72CA9842A3285A8779F8376CF635C845672;
IL2CPP_EXTERN_C String_t* _stringLiteral56A67D115DC026E74AF557BFB61CA613F752D7CB;
IL2CPP_EXTERN_C String_t* _stringLiteral5CF7FF791D693EE5AB52561E6F23CC8A17030991;
IL2CPP_EXTERN_C String_t* _stringLiteral5FFE533B830F08A0326348A9160AFAFC8ADA44DB;
IL2CPP_EXTERN_C String_t* _stringLiteral63DE14EE62A939BD0C8FCD2F4FAC6BDBEB75D945;
IL2CPP_EXTERN_C String_t* _stringLiteral65DDF7B974E0EFBB2FF1A9EE7E602B054F3FA19F;
IL2CPP_EXTERN_C String_t* _stringLiteral677CF493AFD568843F6FE985C45C0DF41E3F0843;
IL2CPP_EXTERN_C String_t* _stringLiteral68ADE570ACFCF2D122CE8EB92C524750050B7692;
IL2CPP_EXTERN_C String_t* _stringLiteral68C356A43DDF830CFA37A5373219D0A5DE8C228B;
IL2CPP_EXTERN_C String_t* _stringLiteral6AFE1FFA04C81324D6FC14874CF16DF6B6E791E9;
IL2CPP_EXTERN_C String_t* _stringLiteral6C6C2766133DE5328A68EA38E42DC5BFCCE63D27;
IL2CPP_EXTERN_C String_t* _stringLiteral6EB09645F68948F54951C595716BC49AF7156E7D;
IL2CPP_EXTERN_C String_t* _stringLiteral6EF070A5ED4DDDD1793652EFC80D6D544EB6C38D;
IL2CPP_EXTERN_C String_t* _stringLiteral7032A76D8FAE8824CBC795703B9630DAF305D090;
IL2CPP_EXTERN_C String_t* _stringLiteral77B447C21C2A3F83B86113AAA64E06779DC8EAB7;
IL2CPP_EXTERN_C String_t* _stringLiteral78186005E67848F5C2417078B874601F4428B557;
IL2CPP_EXTERN_C String_t* _stringLiteral794A729D2E4FFBB094FEC03AE9B3ACD219371385;
IL2CPP_EXTERN_C String_t* _stringLiteral7A21C2866F6CC958302F418126172B76AF59DD8D;
IL2CPP_EXTERN_C String_t* _stringLiteral7C62A1424469B1C1CF402F254409A96A0E6770CF;
IL2CPP_EXTERN_C String_t* _stringLiteral7CB6EFB98BA5972A9B5090DC2E517FE14D12CB04;
IL2CPP_EXTERN_C String_t* _stringLiteral85720EDF173A3A9BE210D4FB7BDD2E21D0D31697;
IL2CPP_EXTERN_C String_t* _stringLiteral89AA6BC7EACEBD4DAF83B548CB47BA7D81644779;
IL2CPP_EXTERN_C String_t* _stringLiteral8B6C6FD9059CE655ABF7F3ADC1E9B723535FC65B;
IL2CPP_EXTERN_C String_t* _stringLiteral8BEC0406497CCF8BB93933005B504D85785DFC14;
IL2CPP_EXTERN_C String_t* _stringLiteral8BF81043E29DFC96A6FE1F30F7116F552DE6E7D7;
IL2CPP_EXTERN_C String_t* _stringLiteral8C2E0A3DE85F9464FA6267334A0B65A083807603;
IL2CPP_EXTERN_C String_t* _stringLiteral947D2F2034D4C547910A951ACA54EB0B80AFF5CE;
IL2CPP_EXTERN_C String_t* _stringLiteral96A3F6E1D353E9C43404C88B605041E3F81FCFE8;
IL2CPP_EXTERN_C String_t* _stringLiteral9C2A6E4809AEEF7B7712CA4DB05A681452F4F748;
IL2CPP_EXTERN_C String_t* _stringLiteral9E94758983980504AF303EF297FD2BF9D9CEA063;
IL2CPP_EXTERN_C String_t* _stringLiteral9FBE9D2BA04ECD309F85D869051049DA69EC8A05;
IL2CPP_EXTERN_C String_t* _stringLiteral9FDF135176239C8744B135A5443BF1E8B17D7EA5;
IL2CPP_EXTERN_C String_t* _stringLiteralA04B49E250B6820A007D06817185F5E3C633C4A8;
IL2CPP_EXTERN_C String_t* _stringLiteralA1CFF652D74275F09B72B1A3646DA9F3614A9587;
IL2CPP_EXTERN_C String_t* _stringLiteralA567A5EA0385C2E3C5E9441003BF16843987A159;
IL2CPP_EXTERN_C String_t* _stringLiteralA5992C10DC3758E8B9070E1DB9797B72E9535BFB;
IL2CPP_EXTERN_C String_t* _stringLiteralA6D81694B1FEA544CFA7910FBC7133AC5E140813;
IL2CPP_EXTERN_C String_t* _stringLiteralAB006BB8AACDF6E68299BC1DFFCCC9BCC8AC3EAF;
IL2CPP_EXTERN_C String_t* _stringLiteralAE3250C8A06D42A27172E11F9E27EE629B4EA348;
IL2CPP_EXTERN_C String_t* _stringLiteralAE838E8A81AC27F40386F6B5C051183F526F243B;
IL2CPP_EXTERN_C String_t* _stringLiteralB792695991DB46210D012BA3F540DA63990CB7E3;
IL2CPP_EXTERN_C String_t* _stringLiteralBE3EE18195B6BAA66ECFEB1E4AA2E31A6CDDE4CA;
IL2CPP_EXTERN_C String_t* _stringLiteralC5385AC3E5574F459361EA1A0AE4800CB8C8F0A8;
IL2CPP_EXTERN_C String_t* _stringLiteralCB521196DF7675420260E71BCE8D4B41218F9C0D;
IL2CPP_EXTERN_C String_t* _stringLiteralCD1528EFE2EDFC7665A6FAD8D2C526AE4FEDFD74;
IL2CPP_EXTERN_C String_t* _stringLiteralCE7161EFCCA6A6BCA131AB91AEE8C8F9258D3682;
IL2CPP_EXTERN_C String_t* _stringLiteralCECA32E904728D1645727CB2B9CDEAA153807D77;
IL2CPP_EXTERN_C String_t* _stringLiteralD65EF2A665570B6E98930F2F90DFE9AEE533C87E;
IL2CPP_EXTERN_C String_t* _stringLiteralD6955CC65F68FDB3066F078547FDC7356382B421;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDB26802F6ECBC4BA3F6522468324360106F31D27;
IL2CPP_EXTERN_C String_t* _stringLiteralDF06B147F778D46FAD19B32B6757A3ABC3AF41DE;
IL2CPP_EXTERN_C String_t* _stringLiteralDFBCD5AFAAB0A9BFA2ED2D6CB5298FAE29947311;
IL2CPP_EXTERN_C String_t* _stringLiteralE0286CE9CEAC9E6DFF982B294F619194FF806E25;
IL2CPP_EXTERN_C String_t* _stringLiteralE11BC038E3E0496E831E713C12BDC3DC2EAE5A6A;
IL2CPP_EXTERN_C String_t* _stringLiteralE18DFDA64D71CE417820B007ADC02F8CE76BB5AE;
IL2CPP_EXTERN_C String_t* _stringLiteralE1E7AC89DEC86373BCAFD0F17BBBCC6751D4E73D;
IL2CPP_EXTERN_C String_t* _stringLiteralEC1D53EA97F0BFEAE043EF7A12079D3119948CD2;
IL2CPP_EXTERN_C String_t* _stringLiteralEF7E6794CA9C6A06B54B66F279237FB8DAAAEEA8;
IL2CPP_EXTERN_C String_t* _stringLiteralF12C84902108895980702C88DB900CEEA2D2EC01;
IL2CPP_EXTERN_C String_t* _stringLiteralF1A341F41401BE96F54E268141C20EB3C4CF43F8;
IL2CPP_EXTERN_C String_t* _stringLiteralF2A0283927B0180BB2AB952DB9222E1C5F5C3EB3;
IL2CPP_EXTERN_C String_t* _stringLiteralF4F65C213E892779F586F0995986923BE522863D;
IL2CPP_EXTERN_C String_t* _stringLiteralFF0FAF076E066BBE8245E7A816A720E93991AD15;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m6328F763431ED2ACDDB6ED8F0FDEA6194403E79F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_mBBB5E822230C695A305CE70D76A7C103CAFE368E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_mFEB000BCBDAB6DE953B2B50CD113641DCF601890_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisIPurchasingModule_tBA2577ED1E963CA0ABA1DFA359A020982DE0B1BF_m0CD0BAB07A330FACDEA56E1CBB20EADD9FC46A24_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisButton_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B_m95916328C175634DC742DD13D032F149F1FBF58C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisUnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7_m38DC7945343D1CA8A66E91B02BFC6EC2F6AB9E04_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreElement__animationEventHandler_mC28527381CB6E7D301EFE4C2445CE916D5149E97_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreElement__frameEventHandler_m961FB97ED79E8E8530E35BE802539FAD74CB7D42_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mCA7075EA6548A18B929368520217975094841997_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mEA41AEAE79570A9410777F6B90969532564025DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m0BF7B99F01F7619CC51A73AF0F39A1D3F8EE92EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mD06BAE2A2EB6C0EF57B61D4458590A02782FFBE6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m1AEC618F26C5FE0F95664256949A96C73BD7BABC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m66A6DE692B96C883FB9A150F3209127E5371DD73_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m06FB35F697F9E3F603349534764389C2A9984796_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mA48E4EF0A239DE7C9F3B846586FB784EDC6CD120_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisBullet_tE4257FB0F05939D36A937D95AD60A2AC7E17A747_m1DDC6F8E40B148E672BAC7109DE3E68B6CE075EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisUnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7_m4748AF191E0FD3A459452992F7547307483F8A07_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IAPButton_OnTransactionsRestored_mBDBFA6BAC6A064FF152A33C344CE3DB9FC295F56_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IAPButton_PurchaseProduct_mB54432549974A8C8382BB1E9EECC2C3E07B1BC2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IAPButton_Restore_mB109C7212887847793087D5754883509490E7D79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IAPButton_U3CRestoreU3Eb__15_0_m50057B9A7AC4EB7A5DA32F11C6EF9EFB91857307_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IExtensionProvider_GetExtension_TisIAppleExtensions_tDBD257FA5CB6B55D1BE0F95CFD639A808A5101D1_mCF380291680A2BDF742F900E25AF31FE41CC026F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IExtensionProvider_GetExtension_TisIMicrosoftExtensions_t00C188B1B25CEAF55F58284ACCCBEFCB14015B54_mD7DC8B7C8DB6CF994E9817DF5681D9E27DEAA623_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IExtensionProvider_GetExtension_TisIMoolahExtension_t7A27B23948AF3F5FF412659F8D18FB1623B9BE01_m5C341108FB64032C49BAC0C5724C2A770D45EDBE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IExtensionProvider_GetExtension_TisISamsungAppsExtensions_tB0CEAD96F8AB0537F5FDEE5E40B29C197CF94F78_mA608C36904E3856891425B89B15D53600F6A61DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m414D1DDDB9D6064807437A191A14896072F11D28_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m440577DFAD35900A85BC28E4028B133B0814ADCF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m9233CB4E5C3F715EB55EA830853B435A9ABC246D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mA348FA1140766465189459D25B01EB179001DE83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m0E99A24EF5097DFD7180540835FC96B83DE24841_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mB0610B63F92F833B979FB98AEE575514949A6A50_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m84D00513E59C6676CD431B431DB7FE3A653AE5D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m84E444A3D4C15D6D2302DD13E5A2E78828C5BEB2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_mE2EEA005F6F94136499538849FEEA877A2B6D778_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m4C2EF68722125098BBB210C4160A22F2E9022E93_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m4F2D4231DA050B6E45124C9F2DAB801762931117_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mBC8BE62A8B8CC489BE3F638DB531F0803EA2CE45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mDA22758D73530683C950C5CCF39BDB4E7E1F3F06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ListenerDelegate_1__ctor_mC34C4E5351179C452D65C0343F73C1AE063AD496_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CBuildArmatureComponentU3Ed__2_System_Collections_IEnumerator_Reset_m24AAB0703C1B0B37843CE2DB5668181460C561C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEventDispatcher_1_AddEventListener_m68EC547A333255F85DF831B388454CA1669C22A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_m37FB3F6A4E114515E7CE57F1DEA0C723CDAB4D01_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_m70AC62AC7448380334A412BB5B3EB88C9B3E7742_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_2_Invoke_m7FF7EA6A64C8D4A95F6ACA03D682C7EAFBA58014_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_2__ctor_m747C301BF8D8E850C08B922050B68208749CDB4D_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t Bullet_Awake_m8E2AC6C7372126FA858614535F2D5BB52FF62DE1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Bullet_Init_mC43D30E03813A89FB382C69AF69800FD20825DF3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Bullet_Update_m46957FDD3C42F531FFA7E395D7AB0359ADC69637_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CodelessIAPStoreListener_AddButton_m4A1BF6B82F547465176551D086C4F386FDDED3E7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CodelessIAPStoreListener_AddListener_mEE32769E704BBC2E4F66C4F51D102908E5ECF48E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CodelessIAPStoreListener_CreateCodelessIAPStoreListenerInstance_m65C6E3C5C7DEAF378869FF9667714F8BB5924718_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CodelessIAPStoreListener_GetProduct_mBED67C9993F342B75FA1A6C22E950446FB93B442_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CodelessIAPStoreListener_HasProductInCatalog_m7572D2C0E9C4208ED1C909684EF999058BC0DEEC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CodelessIAPStoreListener_InitializeCodelessPurchasingOnLoad_mCEFFA3714EB29E69897B062277824EE06E9F625E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CodelessIAPStoreListener_InitializePurchasing_mA9B98C1661E8E09DAC4C0EF12081A2B55A4EB608_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CodelessIAPStoreListener_InitiatePurchase_m1233198CE19C5691C0CDD85786588CEAF2A7AB14_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CodelessIAPStoreListener_OnInitializeFailed_mC545B60853C783DAC26E75433C6BADC6BEDCB053_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CodelessIAPStoreListener_OnInitialized_m2C6695E9EA4315139EFF292A6066318D0B95E247_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CodelessIAPStoreListener_OnPurchaseFailed_mF5E22FFF1ABB35810DF36DF527C3D5548AD92D5D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CodelessIAPStoreListener_ProcessPurchase_m65BBA6E7861D2236652DAC619DA2CD4F840BD5C8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CodelessIAPStoreListener_RemoveButton_mD47F635ACC605FA53FC7629AAAF0384D94FF6B6E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CodelessIAPStoreListener_RemoveListener_m3432F9A1A1E37888321E11FBA4A49EB8F97A5552_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CodelessIAPStoreListener__ctor_m79DA076EC1D979584229414E32BF43162E254250_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CodelessIAPStoreListener_get_Instance_m6D6C71B6D75F21C64499CE46A23DDC572B3DACAE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CoreElement_Start_mB7A7DAE64790A9F996F44F1FBE88FA1E63FAB453_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CoreElement_Update_m440A7ADF9A66015927F53447C308D2DA0E41CB0F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CoreElement__animationEventHandler_mC28527381CB6E7D301EFE4C2445CE916D5149E97_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CoreElement__cctor_m7BD3EC1C417AC83098E8A3E684E291AEA03816AC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CoreElement__fire_mB2AA09E50D404EA9E880FCC82333212511544152_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CoreElement__frameEventHandler_m961FB97ED79E8E8530E35BE802539FAD74CB7D42_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CoreElement__jump_m37E73A89B7F0CD38F29CD7EEBEFE9F8F4823069B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CoreElement__switchSkin_mC3918BE0FE22C4E4FAE642C604E0A9F58C96E83A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CoreElement__switchWeaponLeft_mCC6800A9FB15B0AF99D307D795436B1DB0363451_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CoreElement__switchWeaponRight_m6F556857DF58079CB4255B43949C60140931C355_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CoreElement__updateAim_mD34AB0E5B5FC2C636C51340F998580732CF66E40_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CoreElement__updateAnimation_mC1524720EA2C0DEBF3F68F710BD104D72EA80C27_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CoreElement__updateAttack_m5D8D2D9364199E20E1609B571F0B7EB2BA0E74E6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CoreElement__updatePosition_m0B0D060A25C424CA279E51EA1CFCBB5FD1F8F4BE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DemoInventory_Fulfill_m0DEEEF4496A128E12252CF38353793221A3966E5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IAPButton_OnEnable_mE3E70F3ED623B2645AA6D8D2D455DE65C24BD7E3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IAPButton_OnPurchaseFailed_mAF5155D49340CFD9FCA17BD0DAA17CD27037BA57_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IAPButton_OnTransactionsRestored_mBDBFA6BAC6A064FF152A33C344CE3DB9FC295F56_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IAPButton_ProcessPurchase_mAD1C2C30A543271D9011A0612E37EA62714B2C09_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IAPButton_PurchaseProduct_mB54432549974A8C8382BB1E9EECC2C3E07B1BC2A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IAPButton_Restore_mB109C7212887847793087D5754883509490E7D79_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IAPButton_Start_m039D7EB29463237C4FC1C3CED4D21C665AF136F4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IAPButton_UpdateText_m38D5E31DB4E01F0E1419174A6309186AEAB348DD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IAPConfigurationHelper_PopulateConfigurationBuilder_m46F5A6A79909F4993BF47D6C3D604FA18BC3AAEC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IAPDemoProductUI_PurchaseButtonClick_m0F328FE1101816BC5C1E45FF272A8D8271019F12_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IAPDemoProductUI_ReceiptButtonClick_mC4CBBB1F688E9F7E9CCF8B8BC2E1B3F5F93FDCD0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IAPDemoProductUI_SetPendingTime_m23D903B099E566D999C159C038BF3319FA044D5C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IAPDemoProductUI_SetProduct_m1D002296CB2ECDDCE53EE4AC6E0CFBF9384FCEF0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IAPListener_OnEnable_m535E012E1EAC3051348502423B242A1C0446E3ED_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IAPListener_OnPurchaseFailed_mCBB1A7EBFD259CC0DF60A263E96A2B10DFD5FAE1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IAPListener_ProcessPurchase_mE08DC15E1CC263B6B6C74248B2B342339632FC8A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LightTest_Update_m4B95DBEFD0A01D0A6CE32B1A92BF6BDC40C7A801_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t OnPurchaseCompletedEvent__ctor_m914E87AAA59D6F10AEBA16EEE6E8DFC15145F8E5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t OnPurchaseCompletedEvent__ctor_mB0EFBE5708233A4554D740D501EECBF79BCDFCFB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t OnPurchaseFailedEvent__ctor_mA0FED213F549032BF3AA77F07268FDE5748F9C99_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t OnPurchaseFailedEvent__ctor_mB5BCED5159C42E96C92544374C30E8EBCA62AC0D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Parser_EatWhitespace_m8123DF169A4671C0E75FF5D09B6017C3E9A74EBF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Parser_IsWordBreak_m28C40C2EAD6BE92D855C69C239822E446EFF89EF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Parser_ParseArray_m78D90B8BF3ABAADB783994A8FAA7700B381099A7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Parser_ParseByToken_m51F2A2B09AED5CB55DA3F8EF5AE61605EED9972F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Parser_ParseNumber_m466ABE116C8AF91A97701A42D4F6D091EE8059DA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Parser_ParseObject_mE4CDD92559BD01B7AD11D23CA53CDBFD58E6CA6B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Parser_ParseString_mB6FD7BDCFAB51FF9D401D77CDABDBC13D57D9F2C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Parser_Parse_mE7CFB458EF1BBB61C4131ACA249CBE92E81D5C4C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Parser__ctor_m96ADF8ADDFAF12D86F7A7FB78177F9286F0D53D3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Parser_get_NextChar_mF5EEB11643B9A22E8FD5D6ACD69D0B96C3DD6DC2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Parser_get_NextToken_m894EEF05C3FF5BDA15BDB3EC6ACFC5732FE5F531_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Parser_get_NextWord_m3B85F7D22F4E4AC975212CED15E49C36C97425AC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Parser_get_PeekChar_mA9D1D2F85589251E8046414A7E8ECA05FE298ADA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PerformanceTest_BuildArmatureComponent_m5A3799419A1CB10A45C4B354E2DEBB111ABA0B65_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PerformanceTest_Start_mB588714B9905C3900D0C75611DBDAE13048DDD8C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ReplaceDisplayTextureTest_Start_m1DE6EE35818CA1880A67B3BDFE49F962E6C88231_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ReplaceSlotDisplay_Start_m4E3C1887205846078B647A11EA641FBBDB0BD63C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ReplaceSlotDisplay__ctor_mF24E40A81F9C03F9448647A5720399FC180861FF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ReplaceSlotDisplay__replaceDisplay_m3233F9AD60264739EC5F4AEF368FA478BBB5CBF7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Serializer_SerializeArray_m169AADCDE719004976AC63192D2E4A4239D375EB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Serializer_SerializeObject_m727C7C3617E2EB173460858D7ACD36324DD0CD71_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Serializer_SerializeOther_m4D46EFFF72A8F103E8028B82393E400F370DAD4B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Serializer_SerializeString_m14A9434C6FDDED2581495A41C09CB3B78CE1BC55_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Serializer_SerializeValue_mFF1E97E02EFBCA7684308935281C7F1AF941EA6F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Serializer_Serialize_mFA8E58DA783194AFCBC666004A06C4D4FF9D6BD0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Serializer__ctor_mFE9DA80B01A749C7DB99439080F6AB40A15C4FC7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CBuildArmatureComponentU3Ed__2_MoveNext_mEAD66231351F0F9F74842AB4045FE3854C9502CB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CBuildArmatureComponentU3Ed__2_System_Collections_IEnumerator_Reset_m24AAB0703C1B0B37843CE2DB5668181460C561C4_MetadataUsageId;
struct CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshaled_com;
struct CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshaled_pinvoke;
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_com;
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
struct IPurchasingModuleU5BU5D_tF106F307EE194D8B47140E160F5BC38EDFFF9384;
struct PayoutDefinitionU5BU5D_tBED8269F285FBB455D663A4434785D666963059A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// DragonBones.BaseFactory
struct  BaseFactory_t0F351C3165BC3FF44834228E47FA2AF75DEB546F  : public RuntimeObject
{
public:
	// System.Boolean DragonBones.BaseFactory::autoSearch
	bool ___autoSearch_2;
	// System.Collections.Generic.Dictionary`2<System.String,DragonBones.DragonBonesData> DragonBones.BaseFactory::_dragonBonesDataMap
	Dictionary_2_tA101C9E1C3115759947657C666A4647C1379C058 * ____dragonBonesDataMap_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<DragonBones.TextureAtlasData>> DragonBones.BaseFactory::_textureAtlasDataMap
	Dictionary_2_tDD3DA79C93784535539DDA4AE404D93F4F93320F * ____textureAtlasDataMap_4;
	// DragonBones.DragonBones DragonBones.BaseFactory::_dragonBones
	DragonBones_t0C03E4E28174F02190B3E3F3E998AF4889E0DE51 * ____dragonBones_5;
	// DragonBones.DataParser DragonBones.BaseFactory::_dataParser
	DataParser_t5A4BE4A9AD3DEE3010C977C380738B093DBFD0FC * ____dataParser_6;

public:
	inline static int32_t get_offset_of_autoSearch_2() { return static_cast<int32_t>(offsetof(BaseFactory_t0F351C3165BC3FF44834228E47FA2AF75DEB546F, ___autoSearch_2)); }
	inline bool get_autoSearch_2() const { return ___autoSearch_2; }
	inline bool* get_address_of_autoSearch_2() { return &___autoSearch_2; }
	inline void set_autoSearch_2(bool value)
	{
		___autoSearch_2 = value;
	}

	inline static int32_t get_offset_of__dragonBonesDataMap_3() { return static_cast<int32_t>(offsetof(BaseFactory_t0F351C3165BC3FF44834228E47FA2AF75DEB546F, ____dragonBonesDataMap_3)); }
	inline Dictionary_2_tA101C9E1C3115759947657C666A4647C1379C058 * get__dragonBonesDataMap_3() const { return ____dragonBonesDataMap_3; }
	inline Dictionary_2_tA101C9E1C3115759947657C666A4647C1379C058 ** get_address_of__dragonBonesDataMap_3() { return &____dragonBonesDataMap_3; }
	inline void set__dragonBonesDataMap_3(Dictionary_2_tA101C9E1C3115759947657C666A4647C1379C058 * value)
	{
		____dragonBonesDataMap_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dragonBonesDataMap_3), (void*)value);
	}

	inline static int32_t get_offset_of__textureAtlasDataMap_4() { return static_cast<int32_t>(offsetof(BaseFactory_t0F351C3165BC3FF44834228E47FA2AF75DEB546F, ____textureAtlasDataMap_4)); }
	inline Dictionary_2_tDD3DA79C93784535539DDA4AE404D93F4F93320F * get__textureAtlasDataMap_4() const { return ____textureAtlasDataMap_4; }
	inline Dictionary_2_tDD3DA79C93784535539DDA4AE404D93F4F93320F ** get_address_of__textureAtlasDataMap_4() { return &____textureAtlasDataMap_4; }
	inline void set__textureAtlasDataMap_4(Dictionary_2_tDD3DA79C93784535539DDA4AE404D93F4F93320F * value)
	{
		____textureAtlasDataMap_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____textureAtlasDataMap_4), (void*)value);
	}

	inline static int32_t get_offset_of__dragonBones_5() { return static_cast<int32_t>(offsetof(BaseFactory_t0F351C3165BC3FF44834228E47FA2AF75DEB546F, ____dragonBones_5)); }
	inline DragonBones_t0C03E4E28174F02190B3E3F3E998AF4889E0DE51 * get__dragonBones_5() const { return ____dragonBones_5; }
	inline DragonBones_t0C03E4E28174F02190B3E3F3E998AF4889E0DE51 ** get_address_of__dragonBones_5() { return &____dragonBones_5; }
	inline void set__dragonBones_5(DragonBones_t0C03E4E28174F02190B3E3F3E998AF4889E0DE51 * value)
	{
		____dragonBones_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dragonBones_5), (void*)value);
	}

	inline static int32_t get_offset_of__dataParser_6() { return static_cast<int32_t>(offsetof(BaseFactory_t0F351C3165BC3FF44834228E47FA2AF75DEB546F, ____dataParser_6)); }
	inline DataParser_t5A4BE4A9AD3DEE3010C977C380738B093DBFD0FC * get__dataParser_6() const { return ____dataParser_6; }
	inline DataParser_t5A4BE4A9AD3DEE3010C977C380738B093DBFD0FC ** get_address_of__dataParser_6() { return &____dataParser_6; }
	inline void set__dataParser_6(DataParser_t5A4BE4A9AD3DEE3010C977C380738B093DBFD0FC * value)
	{
		____dataParser_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dataParser_6), (void*)value);
	}
};

struct BaseFactory_t0F351C3165BC3FF44834228E47FA2AF75DEB546F_StaticFields
{
public:
	// DragonBones.ObjectDataParser DragonBones.BaseFactory::_objectParser
	ObjectDataParser_t66EF5236627EBC3A9FF6F144D005752FDA9783D2 * ____objectParser_0;
	// DragonBones.BinaryDataParser DragonBones.BaseFactory::_binaryParser
	BinaryDataParser_t0A5A88E4A49D2BEC3DB68D9D2990F14A4B42A472 * ____binaryParser_1;

public:
	inline static int32_t get_offset_of__objectParser_0() { return static_cast<int32_t>(offsetof(BaseFactory_t0F351C3165BC3FF44834228E47FA2AF75DEB546F_StaticFields, ____objectParser_0)); }
	inline ObjectDataParser_t66EF5236627EBC3A9FF6F144D005752FDA9783D2 * get__objectParser_0() const { return ____objectParser_0; }
	inline ObjectDataParser_t66EF5236627EBC3A9FF6F144D005752FDA9783D2 ** get_address_of__objectParser_0() { return &____objectParser_0; }
	inline void set__objectParser_0(ObjectDataParser_t66EF5236627EBC3A9FF6F144D005752FDA9783D2 * value)
	{
		____objectParser_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____objectParser_0), (void*)value);
	}

	inline static int32_t get_offset_of__binaryParser_1() { return static_cast<int32_t>(offsetof(BaseFactory_t0F351C3165BC3FF44834228E47FA2AF75DEB546F_StaticFields, ____binaryParser_1)); }
	inline BinaryDataParser_t0A5A88E4A49D2BEC3DB68D9D2990F14A4B42A472 * get__binaryParser_1() const { return ____binaryParser_1; }
	inline BinaryDataParser_t0A5A88E4A49D2BEC3DB68D9D2990F14A4B42A472 ** get_address_of__binaryParser_1() { return &____binaryParser_1; }
	inline void set__binaryParser_1(BinaryDataParser_t0A5A88E4A49D2BEC3DB68D9D2990F14A4B42A472 * value)
	{
		____binaryParser_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____binaryParser_1), (void*)value);
	}
};


// DragonBones.BaseObject
struct  BaseObject_t5B96E4C6A273473F5F2676C8B69EE180B6D8364D  : public RuntimeObject
{
public:
	// System.UInt32 DragonBones.BaseObject::hashCode
	uint32_t ___hashCode_4;

public:
	inline static int32_t get_offset_of_hashCode_4() { return static_cast<int32_t>(offsetof(BaseObject_t5B96E4C6A273473F5F2676C8B69EE180B6D8364D, ___hashCode_4)); }
	inline uint32_t get_hashCode_4() const { return ___hashCode_4; }
	inline uint32_t* get_address_of_hashCode_4() { return &___hashCode_4; }
	inline void set_hashCode_4(uint32_t value)
	{
		___hashCode_4 = value;
	}
};

struct BaseObject_t5B96E4C6A273473F5F2676C8B69EE180B6D8364D_StaticFields
{
public:
	// System.UInt32 DragonBones.BaseObject::_hashCode
	uint32_t ____hashCode_0;
	// System.UInt32 DragonBones.BaseObject::_defaultMaxCount
	uint32_t ____defaultMaxCount_1;
	// System.Collections.Generic.Dictionary`2<System.Type,System.UInt32> DragonBones.BaseObject::_maxCountMap
	Dictionary_2_t089A877DFA71BDC0A1A0E3D24A2242E35A6A37F3 * ____maxCountMap_2;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<DragonBones.BaseObject>> DragonBones.BaseObject::_poolsMap
	Dictionary_2_t7E9563E6BA7DDD7E3A4D25B210F8CC1782CE61CF * ____poolsMap_3;

public:
	inline static int32_t get_offset_of__hashCode_0() { return static_cast<int32_t>(offsetof(BaseObject_t5B96E4C6A273473F5F2676C8B69EE180B6D8364D_StaticFields, ____hashCode_0)); }
	inline uint32_t get__hashCode_0() const { return ____hashCode_0; }
	inline uint32_t* get_address_of__hashCode_0() { return &____hashCode_0; }
	inline void set__hashCode_0(uint32_t value)
	{
		____hashCode_0 = value;
	}

	inline static int32_t get_offset_of__defaultMaxCount_1() { return static_cast<int32_t>(offsetof(BaseObject_t5B96E4C6A273473F5F2676C8B69EE180B6D8364D_StaticFields, ____defaultMaxCount_1)); }
	inline uint32_t get__defaultMaxCount_1() const { return ____defaultMaxCount_1; }
	inline uint32_t* get_address_of__defaultMaxCount_1() { return &____defaultMaxCount_1; }
	inline void set__defaultMaxCount_1(uint32_t value)
	{
		____defaultMaxCount_1 = value;
	}

	inline static int32_t get_offset_of__maxCountMap_2() { return static_cast<int32_t>(offsetof(BaseObject_t5B96E4C6A273473F5F2676C8B69EE180B6D8364D_StaticFields, ____maxCountMap_2)); }
	inline Dictionary_2_t089A877DFA71BDC0A1A0E3D24A2242E35A6A37F3 * get__maxCountMap_2() const { return ____maxCountMap_2; }
	inline Dictionary_2_t089A877DFA71BDC0A1A0E3D24A2242E35A6A37F3 ** get_address_of__maxCountMap_2() { return &____maxCountMap_2; }
	inline void set__maxCountMap_2(Dictionary_2_t089A877DFA71BDC0A1A0E3D24A2242E35A6A37F3 * value)
	{
		____maxCountMap_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____maxCountMap_2), (void*)value);
	}

	inline static int32_t get_offset_of__poolsMap_3() { return static_cast<int32_t>(offsetof(BaseObject_t5B96E4C6A273473F5F2676C8B69EE180B6D8364D_StaticFields, ____poolsMap_3)); }
	inline Dictionary_2_t7E9563E6BA7DDD7E3A4D25B210F8CC1782CE61CF * get__poolsMap_3() const { return ____poolsMap_3; }
	inline Dictionary_2_t7E9563E6BA7DDD7E3A4D25B210F8CC1782CE61CF ** get_address_of__poolsMap_3() { return &____poolsMap_3; }
	inline void set__poolsMap_3(Dictionary_2_t7E9563E6BA7DDD7E3A4D25B210F8CC1782CE61CF * value)
	{
		____poolsMap_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____poolsMap_3), (void*)value);
	}
};


// DragonBones.Transform
struct  Transform_tE7D42961E6A4F1135373F19306753C2F35947B15  : public RuntimeObject
{
public:
	// System.Single DragonBones.Transform::x
	float ___x_6;
	// System.Single DragonBones.Transform::y
	float ___y_7;
	// System.Single DragonBones.Transform::skew
	float ___skew_8;
	// System.Single DragonBones.Transform::rotation
	float ___rotation_9;
	// System.Single DragonBones.Transform::scaleX
	float ___scaleX_10;
	// System.Single DragonBones.Transform::scaleY
	float ___scaleY_11;

public:
	inline static int32_t get_offset_of_x_6() { return static_cast<int32_t>(offsetof(Transform_tE7D42961E6A4F1135373F19306753C2F35947B15, ___x_6)); }
	inline float get_x_6() const { return ___x_6; }
	inline float* get_address_of_x_6() { return &___x_6; }
	inline void set_x_6(float value)
	{
		___x_6 = value;
	}

	inline static int32_t get_offset_of_y_7() { return static_cast<int32_t>(offsetof(Transform_tE7D42961E6A4F1135373F19306753C2F35947B15, ___y_7)); }
	inline float get_y_7() const { return ___y_7; }
	inline float* get_address_of_y_7() { return &___y_7; }
	inline void set_y_7(float value)
	{
		___y_7 = value;
	}

	inline static int32_t get_offset_of_skew_8() { return static_cast<int32_t>(offsetof(Transform_tE7D42961E6A4F1135373F19306753C2F35947B15, ___skew_8)); }
	inline float get_skew_8() const { return ___skew_8; }
	inline float* get_address_of_skew_8() { return &___skew_8; }
	inline void set_skew_8(float value)
	{
		___skew_8 = value;
	}

	inline static int32_t get_offset_of_rotation_9() { return static_cast<int32_t>(offsetof(Transform_tE7D42961E6A4F1135373F19306753C2F35947B15, ___rotation_9)); }
	inline float get_rotation_9() const { return ___rotation_9; }
	inline float* get_address_of_rotation_9() { return &___rotation_9; }
	inline void set_rotation_9(float value)
	{
		___rotation_9 = value;
	}

	inline static int32_t get_offset_of_scaleX_10() { return static_cast<int32_t>(offsetof(Transform_tE7D42961E6A4F1135373F19306753C2F35947B15, ___scaleX_10)); }
	inline float get_scaleX_10() const { return ___scaleX_10; }
	inline float* get_address_of_scaleX_10() { return &___scaleX_10; }
	inline void set_scaleX_10(float value)
	{
		___scaleX_10 = value;
	}

	inline static int32_t get_offset_of_scaleY_11() { return static_cast<int32_t>(offsetof(Transform_tE7D42961E6A4F1135373F19306753C2F35947B15, ___scaleY_11)); }
	inline float get_scaleY_11() const { return ___scaleY_11; }
	inline float* get_address_of_scaleY_11() { return &___scaleY_11; }
	inline void set_scaleY_11(float value)
	{
		___scaleY_11 = value;
	}
};

struct Transform_tE7D42961E6A4F1135373F19306753C2F35947B15_StaticFields
{
public:
	// System.Single DragonBones.Transform::PI
	float ___PI_0;
	// System.Single DragonBones.Transform::PI_D
	float ___PI_D_1;
	// System.Single DragonBones.Transform::PI_H
	float ___PI_H_2;
	// System.Single DragonBones.Transform::PI_Q
	float ___PI_Q_3;
	// System.Single DragonBones.Transform::RAD_DEG
	float ___RAD_DEG_4;
	// System.Single DragonBones.Transform::DEG_RAD
	float ___DEG_RAD_5;

public:
	inline static int32_t get_offset_of_PI_0() { return static_cast<int32_t>(offsetof(Transform_tE7D42961E6A4F1135373F19306753C2F35947B15_StaticFields, ___PI_0)); }
	inline float get_PI_0() const { return ___PI_0; }
	inline float* get_address_of_PI_0() { return &___PI_0; }
	inline void set_PI_0(float value)
	{
		___PI_0 = value;
	}

	inline static int32_t get_offset_of_PI_D_1() { return static_cast<int32_t>(offsetof(Transform_tE7D42961E6A4F1135373F19306753C2F35947B15_StaticFields, ___PI_D_1)); }
	inline float get_PI_D_1() const { return ___PI_D_1; }
	inline float* get_address_of_PI_D_1() { return &___PI_D_1; }
	inline void set_PI_D_1(float value)
	{
		___PI_D_1 = value;
	}

	inline static int32_t get_offset_of_PI_H_2() { return static_cast<int32_t>(offsetof(Transform_tE7D42961E6A4F1135373F19306753C2F35947B15_StaticFields, ___PI_H_2)); }
	inline float get_PI_H_2() const { return ___PI_H_2; }
	inline float* get_address_of_PI_H_2() { return &___PI_H_2; }
	inline void set_PI_H_2(float value)
	{
		___PI_H_2 = value;
	}

	inline static int32_t get_offset_of_PI_Q_3() { return static_cast<int32_t>(offsetof(Transform_tE7D42961E6A4F1135373F19306753C2F35947B15_StaticFields, ___PI_Q_3)); }
	inline float get_PI_Q_3() const { return ___PI_Q_3; }
	inline float* get_address_of_PI_Q_3() { return &___PI_Q_3; }
	inline void set_PI_Q_3(float value)
	{
		___PI_Q_3 = value;
	}

	inline static int32_t get_offset_of_RAD_DEG_4() { return static_cast<int32_t>(offsetof(Transform_tE7D42961E6A4F1135373F19306753C2F35947B15_StaticFields, ___RAD_DEG_4)); }
	inline float get_RAD_DEG_4() const { return ___RAD_DEG_4; }
	inline float* get_address_of_RAD_DEG_4() { return &___RAD_DEG_4; }
	inline void set_RAD_DEG_4(float value)
	{
		___RAD_DEG_4 = value;
	}

	inline static int32_t get_offset_of_DEG_RAD_5() { return static_cast<int32_t>(offsetof(Transform_tE7D42961E6A4F1135373F19306753C2F35947B15_StaticFields, ___DEG_RAD_5)); }
	inline float get_DEG_RAD_5() const { return ___DEG_RAD_5; }
	inline float* get_address_of_DEG_RAD_5() { return &___DEG_RAD_5; }
	inline void set_DEG_RAD_5(float value)
	{
		___DEG_RAD_5 = value;
	}
};


// MiniJSON.Json
struct  Json_t13B5A1474664C4D3C7328401FB2E21FA851F53C6  : public RuntimeObject
{
public:

public:
};


// MiniJSON.Json_Parser
struct  Parser_t6D190ECCD78CD62DA1F915A8961D37F1C6C50F05  : public RuntimeObject
{
public:
	// System.IO.StringReader MiniJSON.Json_Parser::json
	StringReader_t3095DEB3D26F40D1A7F9B76835D80AFE70E47E12 * ___json_1;

public:
	inline static int32_t get_offset_of_json_1() { return static_cast<int32_t>(offsetof(Parser_t6D190ECCD78CD62DA1F915A8961D37F1C6C50F05, ___json_1)); }
	inline StringReader_t3095DEB3D26F40D1A7F9B76835D80AFE70E47E12 * get_json_1() const { return ___json_1; }
	inline StringReader_t3095DEB3D26F40D1A7F9B76835D80AFE70E47E12 ** get_address_of_json_1() { return &___json_1; }
	inline void set_json_1(StringReader_t3095DEB3D26F40D1A7F9B76835D80AFE70E47E12 * value)
	{
		___json_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___json_1), (void*)value);
	}
};


// MiniJSON.Json_Serializer
struct  Serializer_tE5A49C9AA549A4CDC0A5440C1ECC6778E98A377F  : public RuntimeObject
{
public:
	// System.Text.StringBuilder MiniJSON.Json_Serializer::builder
	StringBuilder_t * ___builder_0;

public:
	inline static int32_t get_offset_of_builder_0() { return static_cast<int32_t>(offsetof(Serializer_tE5A49C9AA549A4CDC0A5440C1ECC6778E98A377F, ___builder_0)); }
	inline StringBuilder_t * get_builder_0() const { return ___builder_0; }
	inline StringBuilder_t ** get_address_of_builder_0() { return &___builder_0; }
	inline void set_builder_0(StringBuilder_t * value)
	{
		___builder_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___builder_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


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


// System.Collections.Generic.List`1<System.Object>
struct  List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____items_1)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.String>
struct  List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____items_1)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_StaticFields, ____emptyArray_5)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Purchasing.IAPButton>
struct  List_1_t4EA118A9AAEF1F1654837150C244FCF20A2612C6  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	IAPButtonU5BU5D_t8ACA697E5F8E21599D4A8C1FC59D820C3DD57906* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t4EA118A9AAEF1F1654837150C244FCF20A2612C6, ____items_1)); }
	inline IAPButtonU5BU5D_t8ACA697E5F8E21599D4A8C1FC59D820C3DD57906* get__items_1() const { return ____items_1; }
	inline IAPButtonU5BU5D_t8ACA697E5F8E21599D4A8C1FC59D820C3DD57906** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(IAPButtonU5BU5D_t8ACA697E5F8E21599D4A8C1FC59D820C3DD57906* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t4EA118A9AAEF1F1654837150C244FCF20A2612C6, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t4EA118A9AAEF1F1654837150C244FCF20A2612C6, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t4EA118A9AAEF1F1654837150C244FCF20A2612C6, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t4EA118A9AAEF1F1654837150C244FCF20A2612C6_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	IAPButtonU5BU5D_t8ACA697E5F8E21599D4A8C1FC59D820C3DD57906* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t4EA118A9AAEF1F1654837150C244FCF20A2612C6_StaticFields, ____emptyArray_5)); }
	inline IAPButtonU5BU5D_t8ACA697E5F8E21599D4A8C1FC59D820C3DD57906* get__emptyArray_5() const { return ____emptyArray_5; }
	inline IAPButtonU5BU5D_t8ACA697E5F8E21599D4A8C1FC59D820C3DD57906** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(IAPButtonU5BU5D_t8ACA697E5F8E21599D4A8C1FC59D820C3DD57906* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Purchasing.IAPListener>
struct  List_1_t9AAA1568B76F8B92C93DB49A597240F9DEEE5E40  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	IAPListenerU5BU5D_t15AB39C2A62B5F9253B677EEB460271FCC0C7E47* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t9AAA1568B76F8B92C93DB49A597240F9DEEE5E40, ____items_1)); }
	inline IAPListenerU5BU5D_t15AB39C2A62B5F9253B677EEB460271FCC0C7E47* get__items_1() const { return ____items_1; }
	inline IAPListenerU5BU5D_t15AB39C2A62B5F9253B677EEB460271FCC0C7E47** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(IAPListenerU5BU5D_t15AB39C2A62B5F9253B677EEB460271FCC0C7E47* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t9AAA1568B76F8B92C93DB49A597240F9DEEE5E40, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t9AAA1568B76F8B92C93DB49A597240F9DEEE5E40, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t9AAA1568B76F8B92C93DB49A597240F9DEEE5E40, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t9AAA1568B76F8B92C93DB49A597240F9DEEE5E40_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	IAPListenerU5BU5D_t15AB39C2A62B5F9253B677EEB460271FCC0C7E47* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t9AAA1568B76F8B92C93DB49A597240F9DEEE5E40_StaticFields, ____emptyArray_5)); }
	inline IAPListenerU5BU5D_t15AB39C2A62B5F9253B677EEB460271FCC0C7E47* get__emptyArray_5() const { return ____emptyArray_5; }
	inline IAPListenerU5BU5D_t15AB39C2A62B5F9253B677EEB460271FCC0C7E47** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(IAPListenerU5BU5D_t15AB39C2A62B5F9253B677EEB460271FCC0C7E47* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Purchasing.PayoutDefinition>
struct  List_1_t3BB189095B85DE5B71713AA7779513A84EB7EB9A  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	PayoutDefinitionU5BU5D_tBED8269F285FBB455D663A4434785D666963059A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3BB189095B85DE5B71713AA7779513A84EB7EB9A, ____items_1)); }
	inline PayoutDefinitionU5BU5D_tBED8269F285FBB455D663A4434785D666963059A* get__items_1() const { return ____items_1; }
	inline PayoutDefinitionU5BU5D_tBED8269F285FBB455D663A4434785D666963059A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(PayoutDefinitionU5BU5D_tBED8269F285FBB455D663A4434785D666963059A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3BB189095B85DE5B71713AA7779513A84EB7EB9A, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3BB189095B85DE5B71713AA7779513A84EB7EB9A, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3BB189095B85DE5B71713AA7779513A84EB7EB9A, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3BB189095B85DE5B71713AA7779513A84EB7EB9A_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	PayoutDefinitionU5BU5D_tBED8269F285FBB455D663A4434785D666963059A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3BB189095B85DE5B71713AA7779513A84EB7EB9A_StaticFields, ____emptyArray_5)); }
	inline PayoutDefinitionU5BU5D_tBED8269F285FBB455D663A4434785D666963059A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline PayoutDefinitionU5BU5D_tBED8269F285FBB455D663A4434785D666963059A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(PayoutDefinitionU5BU5D_tBED8269F285FBB455D663A4434785D666963059A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Purchasing.ProductCatalogItem>
struct  List_1_tF77D0F7B15CCDF8FD5F7CDEE53B08C264FFEF116  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ProductCatalogItemU5BU5D_t6B8E32EED3E1F8EB3FFE313B8369A4540EB7EA4F* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tF77D0F7B15CCDF8FD5F7CDEE53B08C264FFEF116, ____items_1)); }
	inline ProductCatalogItemU5BU5D_t6B8E32EED3E1F8EB3FFE313B8369A4540EB7EA4F* get__items_1() const { return ____items_1; }
	inline ProductCatalogItemU5BU5D_t6B8E32EED3E1F8EB3FFE313B8369A4540EB7EA4F** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ProductCatalogItemU5BU5D_t6B8E32EED3E1F8EB3FFE313B8369A4540EB7EA4F* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tF77D0F7B15CCDF8FD5F7CDEE53B08C264FFEF116, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tF77D0F7B15CCDF8FD5F7CDEE53B08C264FFEF116, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tF77D0F7B15CCDF8FD5F7CDEE53B08C264FFEF116, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tF77D0F7B15CCDF8FD5F7CDEE53B08C264FFEF116_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ProductCatalogItemU5BU5D_t6B8E32EED3E1F8EB3FFE313B8369A4540EB7EA4F* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tF77D0F7B15CCDF8FD5F7CDEE53B08C264FFEF116_StaticFields, ____emptyArray_5)); }
	inline ProductCatalogItemU5BU5D_t6B8E32EED3E1F8EB3FFE313B8369A4540EB7EA4F* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ProductCatalogItemU5BU5D_t6B8E32EED3E1F8EB3FFE313B8369A4540EB7EA4F** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ProductCatalogItemU5BU5D_t6B8E32EED3E1F8EB3FFE313B8369A4540EB7EA4F* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.EmptyArray`1<System.Object>
struct  EmptyArray_1_tCF137C88A5824F413EFB5A2F31664D8207E61D26  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_tCF137C88A5824F413EFB5A2F31664D8207E61D26_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_tCF137C88A5824F413EFB5A2F31664D8207E61D26_StaticFields, ___Value_0)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_Value_0() const { return ___Value_0; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// System.Globalization.CultureInfo
struct  CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 * ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD * ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;

public:
	inline static int32_t get_offset_of_m_isReadOnly_3() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_isReadOnly_3)); }
	inline bool get_m_isReadOnly_3() const { return ___m_isReadOnly_3; }
	inline bool* get_address_of_m_isReadOnly_3() { return &___m_isReadOnly_3; }
	inline void set_m_isReadOnly_3(bool value)
	{
		___m_isReadOnly_3 = value;
	}

	inline static int32_t get_offset_of_cultureID_4() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___cultureID_4)); }
	inline int32_t get_cultureID_4() const { return ___cultureID_4; }
	inline int32_t* get_address_of_cultureID_4() { return &___cultureID_4; }
	inline void set_cultureID_4(int32_t value)
	{
		___cultureID_4 = value;
	}

	inline static int32_t get_offset_of_parent_lcid_5() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___parent_lcid_5)); }
	inline int32_t get_parent_lcid_5() const { return ___parent_lcid_5; }
	inline int32_t* get_address_of_parent_lcid_5() { return &___parent_lcid_5; }
	inline void set_parent_lcid_5(int32_t value)
	{
		___parent_lcid_5 = value;
	}

	inline static int32_t get_offset_of_datetime_index_6() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___datetime_index_6)); }
	inline int32_t get_datetime_index_6() const { return ___datetime_index_6; }
	inline int32_t* get_address_of_datetime_index_6() { return &___datetime_index_6; }
	inline void set_datetime_index_6(int32_t value)
	{
		___datetime_index_6 = value;
	}

	inline static int32_t get_offset_of_number_index_7() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___number_index_7)); }
	inline int32_t get_number_index_7() const { return ___number_index_7; }
	inline int32_t* get_address_of_number_index_7() { return &___number_index_7; }
	inline void set_number_index_7(int32_t value)
	{
		___number_index_7 = value;
	}

	inline static int32_t get_offset_of_default_calendar_type_8() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___default_calendar_type_8)); }
	inline int32_t get_default_calendar_type_8() const { return ___default_calendar_type_8; }
	inline int32_t* get_address_of_default_calendar_type_8() { return &___default_calendar_type_8; }
	inline void set_default_calendar_type_8(int32_t value)
	{
		___default_calendar_type_8 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_9() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_useUserOverride_9)); }
	inline bool get_m_useUserOverride_9() const { return ___m_useUserOverride_9; }
	inline bool* get_address_of_m_useUserOverride_9() { return &___m_useUserOverride_9; }
	inline void set_m_useUserOverride_9(bool value)
	{
		___m_useUserOverride_9 = value;
	}

	inline static int32_t get_offset_of_numInfo_10() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___numInfo_10)); }
	inline NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * get_numInfo_10() const { return ___numInfo_10; }
	inline NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 ** get_address_of_numInfo_10() { return &___numInfo_10; }
	inline void set_numInfo_10(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * value)
	{
		___numInfo_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numInfo_10), (void*)value);
	}

	inline static int32_t get_offset_of_dateTimeInfo_11() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___dateTimeInfo_11)); }
	inline DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * get_dateTimeInfo_11() const { return ___dateTimeInfo_11; }
	inline DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F ** get_address_of_dateTimeInfo_11() { return &___dateTimeInfo_11; }
	inline void set_dateTimeInfo_11(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * value)
	{
		___dateTimeInfo_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dateTimeInfo_11), (void*)value);
	}

	inline static int32_t get_offset_of_textInfo_12() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___textInfo_12)); }
	inline TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 * get_textInfo_12() const { return ___textInfo_12; }
	inline TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 ** get_address_of_textInfo_12() { return &___textInfo_12; }
	inline void set_textInfo_12(TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 * value)
	{
		___textInfo_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textInfo_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_name_13() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_name_13)); }
	inline String_t* get_m_name_13() const { return ___m_name_13; }
	inline String_t** get_address_of_m_name_13() { return &___m_name_13; }
	inline void set_m_name_13(String_t* value)
	{
		___m_name_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_name_13), (void*)value);
	}

	inline static int32_t get_offset_of_englishname_14() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___englishname_14)); }
	inline String_t* get_englishname_14() const { return ___englishname_14; }
	inline String_t** get_address_of_englishname_14() { return &___englishname_14; }
	inline void set_englishname_14(String_t* value)
	{
		___englishname_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___englishname_14), (void*)value);
	}

	inline static int32_t get_offset_of_nativename_15() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___nativename_15)); }
	inline String_t* get_nativename_15() const { return ___nativename_15; }
	inline String_t** get_address_of_nativename_15() { return &___nativename_15; }
	inline void set_nativename_15(String_t* value)
	{
		___nativename_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nativename_15), (void*)value);
	}

	inline static int32_t get_offset_of_iso3lang_16() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___iso3lang_16)); }
	inline String_t* get_iso3lang_16() const { return ___iso3lang_16; }
	inline String_t** get_address_of_iso3lang_16() { return &___iso3lang_16; }
	inline void set_iso3lang_16(String_t* value)
	{
		___iso3lang_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso3lang_16), (void*)value);
	}

	inline static int32_t get_offset_of_iso2lang_17() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___iso2lang_17)); }
	inline String_t* get_iso2lang_17() const { return ___iso2lang_17; }
	inline String_t** get_address_of_iso2lang_17() { return &___iso2lang_17; }
	inline void set_iso2lang_17(String_t* value)
	{
		___iso2lang_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso2lang_17), (void*)value);
	}

	inline static int32_t get_offset_of_win3lang_18() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___win3lang_18)); }
	inline String_t* get_win3lang_18() const { return ___win3lang_18; }
	inline String_t** get_address_of_win3lang_18() { return &___win3lang_18; }
	inline void set_win3lang_18(String_t* value)
	{
		___win3lang_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___win3lang_18), (void*)value);
	}

	inline static int32_t get_offset_of_territory_19() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___territory_19)); }
	inline String_t* get_territory_19() const { return ___territory_19; }
	inline String_t** get_address_of_territory_19() { return &___territory_19; }
	inline void set_territory_19(String_t* value)
	{
		___territory_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___territory_19), (void*)value);
	}

	inline static int32_t get_offset_of_native_calendar_names_20() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___native_calendar_names_20)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_native_calendar_names_20() const { return ___native_calendar_names_20; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_native_calendar_names_20() { return &___native_calendar_names_20; }
	inline void set_native_calendar_names_20(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___native_calendar_names_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_calendar_names_20), (void*)value);
	}

	inline static int32_t get_offset_of_compareInfo_21() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___compareInfo_21)); }
	inline CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * get_compareInfo_21() const { return ___compareInfo_21; }
	inline CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 ** get_address_of_compareInfo_21() { return &___compareInfo_21; }
	inline void set_compareInfo_21(CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * value)
	{
		___compareInfo_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___compareInfo_21), (void*)value);
	}

	inline static int32_t get_offset_of_textinfo_data_22() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___textinfo_data_22)); }
	inline void* get_textinfo_data_22() const { return ___textinfo_data_22; }
	inline void** get_address_of_textinfo_data_22() { return &___textinfo_data_22; }
	inline void set_textinfo_data_22(void* value)
	{
		___textinfo_data_22 = value;
	}

	inline static int32_t get_offset_of_m_dataItem_23() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_dataItem_23)); }
	inline int32_t get_m_dataItem_23() const { return ___m_dataItem_23; }
	inline int32_t* get_address_of_m_dataItem_23() { return &___m_dataItem_23; }
	inline void set_m_dataItem_23(int32_t value)
	{
		___m_dataItem_23 = value;
	}

	inline static int32_t get_offset_of_calendar_24() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___calendar_24)); }
	inline Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * get_calendar_24() const { return ___calendar_24; }
	inline Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 ** get_address_of_calendar_24() { return &___calendar_24; }
	inline void set_calendar_24(Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * value)
	{
		___calendar_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___calendar_24), (void*)value);
	}

	inline static int32_t get_offset_of_parent_culture_25() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___parent_culture_25)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_parent_culture_25() const { return ___parent_culture_25; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_parent_culture_25() { return &___parent_culture_25; }
	inline void set_parent_culture_25(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___parent_culture_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_culture_25), (void*)value);
	}

	inline static int32_t get_offset_of_constructed_26() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___constructed_26)); }
	inline bool get_constructed_26() const { return ___constructed_26; }
	inline bool* get_address_of_constructed_26() { return &___constructed_26; }
	inline void set_constructed_26(bool value)
	{
		___constructed_26 = value;
	}

	inline static int32_t get_offset_of_cached_serialized_form_27() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___cached_serialized_form_27)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_cached_serialized_form_27() const { return ___cached_serialized_form_27; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_cached_serialized_form_27() { return &___cached_serialized_form_27; }
	inline void set_cached_serialized_form_27(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___cached_serialized_form_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cached_serialized_form_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_cultureData_28() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_cultureData_28)); }
	inline CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD * get_m_cultureData_28() const { return ___m_cultureData_28; }
	inline CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD ** get_address_of_m_cultureData_28() { return &___m_cultureData_28; }
	inline void set_m_cultureData_28(CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD * value)
	{
		___m_cultureData_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cultureData_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_isInherited_29() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_isInherited_29)); }
	inline bool get_m_isInherited_29() const { return ___m_isInherited_29; }
	inline bool* get_address_of_m_isInherited_29() { return &___m_isInherited_29; }
	inline void set_m_isInherited_29(bool value)
	{
		___m_isInherited_29 = value;
	}
};

struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields
{
public:
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject * ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___s_DefaultThreadCurrentUICulture_33;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___s_DefaultThreadCurrentCulture_34;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_tC88A56872F7C79DBB9582D4F3FC22ED5D8E0B98B * ___shared_by_number_35;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tBA5388DBB42BF620266F9A48E8B859BBBB224E25 * ___shared_by_name_36;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_37;

public:
	inline static int32_t get_offset_of_invariant_culture_info_0() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___invariant_culture_info_0)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_invariant_culture_info_0() const { return ___invariant_culture_info_0; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_invariant_culture_info_0() { return &___invariant_culture_info_0; }
	inline void set_invariant_culture_info_0(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___invariant_culture_info_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invariant_culture_info_0), (void*)value);
	}

	inline static int32_t get_offset_of_shared_table_lock_1() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___shared_table_lock_1)); }
	inline RuntimeObject * get_shared_table_lock_1() const { return ___shared_table_lock_1; }
	inline RuntimeObject ** get_address_of_shared_table_lock_1() { return &___shared_table_lock_1; }
	inline void set_shared_table_lock_1(RuntimeObject * value)
	{
		___shared_table_lock_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_table_lock_1), (void*)value);
	}

	inline static int32_t get_offset_of_default_current_culture_2() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___default_current_culture_2)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_default_current_culture_2() const { return ___default_current_culture_2; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_default_current_culture_2() { return &___default_current_culture_2; }
	inline void set_default_current_culture_2(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___default_current_culture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___default_current_culture_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentUICulture_33() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___s_DefaultThreadCurrentUICulture_33)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_s_DefaultThreadCurrentUICulture_33() const { return ___s_DefaultThreadCurrentUICulture_33; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_s_DefaultThreadCurrentUICulture_33() { return &___s_DefaultThreadCurrentUICulture_33; }
	inline void set_s_DefaultThreadCurrentUICulture_33(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___s_DefaultThreadCurrentUICulture_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentUICulture_33), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentCulture_34() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___s_DefaultThreadCurrentCulture_34)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_s_DefaultThreadCurrentCulture_34() const { return ___s_DefaultThreadCurrentCulture_34; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_s_DefaultThreadCurrentCulture_34() { return &___s_DefaultThreadCurrentCulture_34; }
	inline void set_s_DefaultThreadCurrentCulture_34(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___s_DefaultThreadCurrentCulture_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentCulture_34), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_number_35() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___shared_by_number_35)); }
	inline Dictionary_2_tC88A56872F7C79DBB9582D4F3FC22ED5D8E0B98B * get_shared_by_number_35() const { return ___shared_by_number_35; }
	inline Dictionary_2_tC88A56872F7C79DBB9582D4F3FC22ED5D8E0B98B ** get_address_of_shared_by_number_35() { return &___shared_by_number_35; }
	inline void set_shared_by_number_35(Dictionary_2_tC88A56872F7C79DBB9582D4F3FC22ED5D8E0B98B * value)
	{
		___shared_by_number_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_number_35), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_name_36() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___shared_by_name_36)); }
	inline Dictionary_2_tBA5388DBB42BF620266F9A48E8B859BBBB224E25 * get_shared_by_name_36() const { return ___shared_by_name_36; }
	inline Dictionary_2_tBA5388DBB42BF620266F9A48E8B859BBBB224E25 ** get_address_of_shared_by_name_36() { return &___shared_by_name_36; }
	inline void set_shared_by_name_36(Dictionary_2_tBA5388DBB42BF620266F9A48E8B859BBBB224E25 * value)
	{
		___shared_by_name_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_name_36), (void*)value);
	}

	inline static int32_t get_offset_of_IsTaiwanSku_37() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___IsTaiwanSku_37)); }
	inline bool get_IsTaiwanSku_37() const { return ___IsTaiwanSku_37; }
	inline bool* get_address_of_IsTaiwanSku_37() { return &___IsTaiwanSku_37; }
	inline void set_IsTaiwanSku_37(bool value)
	{
		___IsTaiwanSku_37 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * ___numInfo_10;
	DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * ___dateTimeInfo_11;
	TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 * ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * ___calendar_24;
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * ___numInfo_10;
	DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * ___dateTimeInfo_11;
	TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 * ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * ___calendar_24;
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
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

// UnityEngine.CustomYieldInstruction
struct  CustomYieldInstruction_t819BB0973AFF22766749FF087B8AEFEAF3C2CB7D  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Events.UnityEventBase
struct  UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_Calls_0)); }
	inline InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Calls_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PersistentCalls_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_2() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_CallsDirty_2)); }
	inline bool get_m_CallsDirty_2() const { return ___m_CallsDirty_2; }
	inline bool* get_address_of_m_CallsDirty_2() { return &___m_CallsDirty_2; }
	inline void set_m_CallsDirty_2(bool value)
	{
		___m_CallsDirty_2 = value;
	}
};


// UnityEngine.Purchasing.CodelessIAPStoreListener
struct  CodelessIAPStoreListener_tC0C269A13BAE3B9F9AA24455FAB72340347F7303  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Purchasing.IAPButton> UnityEngine.Purchasing.CodelessIAPStoreListener::activeButtons
	List_1_t4EA118A9AAEF1F1654837150C244FCF20A2612C6 * ___activeButtons_1;
	// System.Collections.Generic.List`1<UnityEngine.Purchasing.IAPListener> UnityEngine.Purchasing.CodelessIAPStoreListener::activeListeners
	List_1_t9AAA1568B76F8B92C93DB49A597240F9DEEE5E40 * ___activeListeners_2;
	// UnityEngine.Purchasing.IStoreController UnityEngine.Purchasing.CodelessIAPStoreListener::controller
	RuntimeObject* ___controller_4;
	// UnityEngine.Purchasing.IExtensionProvider UnityEngine.Purchasing.CodelessIAPStoreListener::extensions
	RuntimeObject* ___extensions_5;
	// UnityEngine.Purchasing.ProductCatalog UnityEngine.Purchasing.CodelessIAPStoreListener::catalog
	ProductCatalog_t514386D43815F0DD3BD3695ABBB1BC66351D569E * ___catalog_6;

public:
	inline static int32_t get_offset_of_activeButtons_1() { return static_cast<int32_t>(offsetof(CodelessIAPStoreListener_tC0C269A13BAE3B9F9AA24455FAB72340347F7303, ___activeButtons_1)); }
	inline List_1_t4EA118A9AAEF1F1654837150C244FCF20A2612C6 * get_activeButtons_1() const { return ___activeButtons_1; }
	inline List_1_t4EA118A9AAEF1F1654837150C244FCF20A2612C6 ** get_address_of_activeButtons_1() { return &___activeButtons_1; }
	inline void set_activeButtons_1(List_1_t4EA118A9AAEF1F1654837150C244FCF20A2612C6 * value)
	{
		___activeButtons_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___activeButtons_1), (void*)value);
	}

	inline static int32_t get_offset_of_activeListeners_2() { return static_cast<int32_t>(offsetof(CodelessIAPStoreListener_tC0C269A13BAE3B9F9AA24455FAB72340347F7303, ___activeListeners_2)); }
	inline List_1_t9AAA1568B76F8B92C93DB49A597240F9DEEE5E40 * get_activeListeners_2() const { return ___activeListeners_2; }
	inline List_1_t9AAA1568B76F8B92C93DB49A597240F9DEEE5E40 ** get_address_of_activeListeners_2() { return &___activeListeners_2; }
	inline void set_activeListeners_2(List_1_t9AAA1568B76F8B92C93DB49A597240F9DEEE5E40 * value)
	{
		___activeListeners_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___activeListeners_2), (void*)value);
	}

	inline static int32_t get_offset_of_controller_4() { return static_cast<int32_t>(offsetof(CodelessIAPStoreListener_tC0C269A13BAE3B9F9AA24455FAB72340347F7303, ___controller_4)); }
	inline RuntimeObject* get_controller_4() const { return ___controller_4; }
	inline RuntimeObject** get_address_of_controller_4() { return &___controller_4; }
	inline void set_controller_4(RuntimeObject* value)
	{
		___controller_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___controller_4), (void*)value);
	}

	inline static int32_t get_offset_of_extensions_5() { return static_cast<int32_t>(offsetof(CodelessIAPStoreListener_tC0C269A13BAE3B9F9AA24455FAB72340347F7303, ___extensions_5)); }
	inline RuntimeObject* get_extensions_5() const { return ___extensions_5; }
	inline RuntimeObject** get_address_of_extensions_5() { return &___extensions_5; }
	inline void set_extensions_5(RuntimeObject* value)
	{
		___extensions_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___extensions_5), (void*)value);
	}

	inline static int32_t get_offset_of_catalog_6() { return static_cast<int32_t>(offsetof(CodelessIAPStoreListener_tC0C269A13BAE3B9F9AA24455FAB72340347F7303, ___catalog_6)); }
	inline ProductCatalog_t514386D43815F0DD3BD3695ABBB1BC66351D569E * get_catalog_6() const { return ___catalog_6; }
	inline ProductCatalog_t514386D43815F0DD3BD3695ABBB1BC66351D569E ** get_address_of_catalog_6() { return &___catalog_6; }
	inline void set_catalog_6(ProductCatalog_t514386D43815F0DD3BD3695ABBB1BC66351D569E * value)
	{
		___catalog_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___catalog_6), (void*)value);
	}
};

struct CodelessIAPStoreListener_tC0C269A13BAE3B9F9AA24455FAB72340347F7303_StaticFields
{
public:
	// UnityEngine.Purchasing.CodelessIAPStoreListener UnityEngine.Purchasing.CodelessIAPStoreListener::instance
	CodelessIAPStoreListener_tC0C269A13BAE3B9F9AA24455FAB72340347F7303 * ___instance_0;
	// System.Boolean UnityEngine.Purchasing.CodelessIAPStoreListener::unityPurchasingInitialized
	bool ___unityPurchasingInitialized_3;
	// System.Boolean UnityEngine.Purchasing.CodelessIAPStoreListener::initializationComplete
	bool ___initializationComplete_7;

public:
	inline static int32_t get_offset_of_instance_0() { return static_cast<int32_t>(offsetof(CodelessIAPStoreListener_tC0C269A13BAE3B9F9AA24455FAB72340347F7303_StaticFields, ___instance_0)); }
	inline CodelessIAPStoreListener_tC0C269A13BAE3B9F9AA24455FAB72340347F7303 * get_instance_0() const { return ___instance_0; }
	inline CodelessIAPStoreListener_tC0C269A13BAE3B9F9AA24455FAB72340347F7303 ** get_address_of_instance_0() { return &___instance_0; }
	inline void set_instance_0(CodelessIAPStoreListener_tC0C269A13BAE3B9F9AA24455FAB72340347F7303 * value)
	{
		___instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_0), (void*)value);
	}

	inline static int32_t get_offset_of_unityPurchasingInitialized_3() { return static_cast<int32_t>(offsetof(CodelessIAPStoreListener_tC0C269A13BAE3B9F9AA24455FAB72340347F7303_StaticFields, ___unityPurchasingInitialized_3)); }
	inline bool get_unityPurchasingInitialized_3() const { return ___unityPurchasingInitialized_3; }
	inline bool* get_address_of_unityPurchasingInitialized_3() { return &___unityPurchasingInitialized_3; }
	inline void set_unityPurchasingInitialized_3(bool value)
	{
		___unityPurchasingInitialized_3 = value;
	}

	inline static int32_t get_offset_of_initializationComplete_7() { return static_cast<int32_t>(offsetof(CodelessIAPStoreListener_tC0C269A13BAE3B9F9AA24455FAB72340347F7303_StaticFields, ___initializationComplete_7)); }
	inline bool get_initializationComplete_7() const { return ___initializationComplete_7; }
	inline bool* get_address_of_initializationComplete_7() { return &___initializationComplete_7; }
	inline void set_initializationComplete_7(bool value)
	{
		___initializationComplete_7 = value;
	}
};


// UnityEngine.Purchasing.ConfigurationBuilder
struct  ConfigurationBuilder_t18C1B421FE4071AD4DB4A340A2A8D51AB090F3AE  : public RuntimeObject
{
public:
	// UnityEngine.Purchasing.PurchasingFactory UnityEngine.Purchasing.ConfigurationBuilder::m_Factory
	PurchasingFactory_tAFBB2D3F6FD1740FCC4B64AE02E4BFFF8A2AB765 * ___m_Factory_0;
	// System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition> UnityEngine.Purchasing.ConfigurationBuilder::m_Products
	HashSet_1_tE69581B2FBB736F3DE03D470AE10601F835DF863 * ___m_Products_1;
	// System.Boolean UnityEngine.Purchasing.ConfigurationBuilder::<useCatalogProvider>k__BackingField
	bool ___U3CuseCatalogProviderU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_m_Factory_0() { return static_cast<int32_t>(offsetof(ConfigurationBuilder_t18C1B421FE4071AD4DB4A340A2A8D51AB090F3AE, ___m_Factory_0)); }
	inline PurchasingFactory_tAFBB2D3F6FD1740FCC4B64AE02E4BFFF8A2AB765 * get_m_Factory_0() const { return ___m_Factory_0; }
	inline PurchasingFactory_tAFBB2D3F6FD1740FCC4B64AE02E4BFFF8A2AB765 ** get_address_of_m_Factory_0() { return &___m_Factory_0; }
	inline void set_m_Factory_0(PurchasingFactory_tAFBB2D3F6FD1740FCC4B64AE02E4BFFF8A2AB765 * value)
	{
		___m_Factory_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Factory_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Products_1() { return static_cast<int32_t>(offsetof(ConfigurationBuilder_t18C1B421FE4071AD4DB4A340A2A8D51AB090F3AE, ___m_Products_1)); }
	inline HashSet_1_tE69581B2FBB736F3DE03D470AE10601F835DF863 * get_m_Products_1() const { return ___m_Products_1; }
	inline HashSet_1_tE69581B2FBB736F3DE03D470AE10601F835DF863 ** get_address_of_m_Products_1() { return &___m_Products_1; }
	inline void set_m_Products_1(HashSet_1_tE69581B2FBB736F3DE03D470AE10601F835DF863 * value)
	{
		___m_Products_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Products_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseCatalogProviderU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ConfigurationBuilder_t18C1B421FE4071AD4DB4A340A2A8D51AB090F3AE, ___U3CuseCatalogProviderU3Ek__BackingField_2)); }
	inline bool get_U3CuseCatalogProviderU3Ek__BackingField_2() const { return ___U3CuseCatalogProviderU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CuseCatalogProviderU3Ek__BackingField_2() { return &___U3CuseCatalogProviderU3Ek__BackingField_2; }
	inline void set_U3CuseCatalogProviderU3Ek__BackingField_2(bool value)
	{
		___U3CuseCatalogProviderU3Ek__BackingField_2 = value;
	}
};


// UnityEngine.Purchasing.Extension.AbstractPurchasingModule
struct  AbstractPurchasingModule_t73F8B7B7D6CA305D6CFAFE4692A6F0F7B42531D9  : public RuntimeObject
{
public:
	// UnityEngine.Purchasing.Extension.IPurchasingBinder UnityEngine.Purchasing.Extension.AbstractPurchasingModule::m_Binder
	RuntimeObject* ___m_Binder_0;

public:
	inline static int32_t get_offset_of_m_Binder_0() { return static_cast<int32_t>(offsetof(AbstractPurchasingModule_t73F8B7B7D6CA305D6CFAFE4692A6F0F7B42531D9, ___m_Binder_0)); }
	inline RuntimeObject* get_m_Binder_0() const { return ___m_Binder_0; }
	inline RuntimeObject** get_address_of_m_Binder_0() { return &___m_Binder_0; }
	inline void set_m_Binder_0(RuntimeObject* value)
	{
		___m_Binder_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Binder_0), (void*)value);
	}
};


// UnityEngine.Purchasing.IAPConfigurationHelper
struct  IAPConfigurationHelper_t046F47F8CD6EAAA58C30C2DE39762DE00DC221C4  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Purchasing.IDs
struct  IDs_t978DE239966E5906480541F9982EA9624943DA53  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.Purchasing.IDs::m_Dic
	Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * ___m_Dic_0;

public:
	inline static int32_t get_offset_of_m_Dic_0() { return static_cast<int32_t>(offsetof(IDs_t978DE239966E5906480541F9982EA9624943DA53, ___m_Dic_0)); }
	inline Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * get_m_Dic_0() const { return ___m_Dic_0; }
	inline Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC ** get_address_of_m_Dic_0() { return &___m_Dic_0; }
	inline void set_m_Dic_0(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * value)
	{
		___m_Dic_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Dic_0), (void*)value);
	}
};


// UnityEngine.Purchasing.Product
struct  Product_t830A133A97BEA12C3CD696853098A295D99A6DE4  : public RuntimeObject
{
public:
	// UnityEngine.Purchasing.ProductDefinition UnityEngine.Purchasing.Product::<definition>k__BackingField
	ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * ___U3CdefinitionU3Ek__BackingField_0;
	// UnityEngine.Purchasing.ProductMetadata UnityEngine.Purchasing.Product::<metadata>k__BackingField
	ProductMetadata_t1CAA912963F8B24B34F53CCF29A6E0BD89B33B48 * ___U3CmetadataU3Ek__BackingField_1;
	// System.Boolean UnityEngine.Purchasing.Product::<availableToPurchase>k__BackingField
	bool ___U3CavailableToPurchaseU3Ek__BackingField_2;
	// System.String UnityEngine.Purchasing.Product::<transactionID>k__BackingField
	String_t* ___U3CtransactionIDU3Ek__BackingField_3;
	// System.String UnityEngine.Purchasing.Product::<receipt>k__BackingField
	String_t* ___U3CreceiptU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CdefinitionU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Product_t830A133A97BEA12C3CD696853098A295D99A6DE4, ___U3CdefinitionU3Ek__BackingField_0)); }
	inline ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * get_U3CdefinitionU3Ek__BackingField_0() const { return ___U3CdefinitionU3Ek__BackingField_0; }
	inline ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 ** get_address_of_U3CdefinitionU3Ek__BackingField_0() { return &___U3CdefinitionU3Ek__BackingField_0; }
	inline void set_U3CdefinitionU3Ek__BackingField_0(ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * value)
	{
		___U3CdefinitionU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdefinitionU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CmetadataU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Product_t830A133A97BEA12C3CD696853098A295D99A6DE4, ___U3CmetadataU3Ek__BackingField_1)); }
	inline ProductMetadata_t1CAA912963F8B24B34F53CCF29A6E0BD89B33B48 * get_U3CmetadataU3Ek__BackingField_1() const { return ___U3CmetadataU3Ek__BackingField_1; }
	inline ProductMetadata_t1CAA912963F8B24B34F53CCF29A6E0BD89B33B48 ** get_address_of_U3CmetadataU3Ek__BackingField_1() { return &___U3CmetadataU3Ek__BackingField_1; }
	inline void set_U3CmetadataU3Ek__BackingField_1(ProductMetadata_t1CAA912963F8B24B34F53CCF29A6E0BD89B33B48 * value)
	{
		___U3CmetadataU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CmetadataU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CavailableToPurchaseU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Product_t830A133A97BEA12C3CD696853098A295D99A6DE4, ___U3CavailableToPurchaseU3Ek__BackingField_2)); }
	inline bool get_U3CavailableToPurchaseU3Ek__BackingField_2() const { return ___U3CavailableToPurchaseU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CavailableToPurchaseU3Ek__BackingField_2() { return &___U3CavailableToPurchaseU3Ek__BackingField_2; }
	inline void set_U3CavailableToPurchaseU3Ek__BackingField_2(bool value)
	{
		___U3CavailableToPurchaseU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CtransactionIDU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Product_t830A133A97BEA12C3CD696853098A295D99A6DE4, ___U3CtransactionIDU3Ek__BackingField_3)); }
	inline String_t* get_U3CtransactionIDU3Ek__BackingField_3() const { return ___U3CtransactionIDU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CtransactionIDU3Ek__BackingField_3() { return &___U3CtransactionIDU3Ek__BackingField_3; }
	inline void set_U3CtransactionIDU3Ek__BackingField_3(String_t* value)
	{
		___U3CtransactionIDU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtransactionIDU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CreceiptU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Product_t830A133A97BEA12C3CD696853098A295D99A6DE4, ___U3CreceiptU3Ek__BackingField_4)); }
	inline String_t* get_U3CreceiptU3Ek__BackingField_4() const { return ___U3CreceiptU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CreceiptU3Ek__BackingField_4() { return &___U3CreceiptU3Ek__BackingField_4; }
	inline void set_U3CreceiptU3Ek__BackingField_4(String_t* value)
	{
		___U3CreceiptU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CreceiptU3Ek__BackingField_4), (void*)value);
	}
};


// UnityEngine.Purchasing.ProductCatalog
struct  ProductCatalog_t514386D43815F0DD3BD3695ABBB1BC66351D569E  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.Purchasing.ProductCatalog::enableCodelessAutoInitialization
	bool ___enableCodelessAutoInitialization_1;
	// System.Collections.Generic.List`1<UnityEngine.Purchasing.ProductCatalogItem> UnityEngine.Purchasing.ProductCatalog::products
	List_1_tF77D0F7B15CCDF8FD5F7CDEE53B08C264FFEF116 * ___products_2;

public:
	inline static int32_t get_offset_of_enableCodelessAutoInitialization_1() { return static_cast<int32_t>(offsetof(ProductCatalog_t514386D43815F0DD3BD3695ABBB1BC66351D569E, ___enableCodelessAutoInitialization_1)); }
	inline bool get_enableCodelessAutoInitialization_1() const { return ___enableCodelessAutoInitialization_1; }
	inline bool* get_address_of_enableCodelessAutoInitialization_1() { return &___enableCodelessAutoInitialization_1; }
	inline void set_enableCodelessAutoInitialization_1(bool value)
	{
		___enableCodelessAutoInitialization_1 = value;
	}

	inline static int32_t get_offset_of_products_2() { return static_cast<int32_t>(offsetof(ProductCatalog_t514386D43815F0DD3BD3695ABBB1BC66351D569E, ___products_2)); }
	inline List_1_tF77D0F7B15CCDF8FD5F7CDEE53B08C264FFEF116 * get_products_2() const { return ___products_2; }
	inline List_1_tF77D0F7B15CCDF8FD5F7CDEE53B08C264FFEF116 ** get_address_of_products_2() { return &___products_2; }
	inline void set_products_2(List_1_tF77D0F7B15CCDF8FD5F7CDEE53B08C264FFEF116 * value)
	{
		___products_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___products_2), (void*)value);
	}
};

struct ProductCatalog_t514386D43815F0DD3BD3695ABBB1BC66351D569E_StaticFields
{
public:
	// UnityEngine.Purchasing.IProductCatalogImpl UnityEngine.Purchasing.ProductCatalog::instance
	RuntimeObject* ___instance_0;

public:
	inline static int32_t get_offset_of_instance_0() { return static_cast<int32_t>(offsetof(ProductCatalog_t514386D43815F0DD3BD3695ABBB1BC66351D569E_StaticFields, ___instance_0)); }
	inline RuntimeObject* get_instance_0() const { return ___instance_0; }
	inline RuntimeObject** get_address_of_instance_0() { return &___instance_0; }
	inline void set_instance_0(RuntimeObject* value)
	{
		___instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_0), (void*)value);
	}
};


// UnityEngine.Purchasing.ProductCatalogPayout
struct  ProductCatalogPayout_t4DFA2A14A2D8FFE1FD41C34DB603C2C1E805CE22  : public RuntimeObject
{
public:
	// System.String UnityEngine.Purchasing.ProductCatalogPayout::t
	String_t* ___t_0;
	// System.String UnityEngine.Purchasing.ProductCatalogPayout::st
	String_t* ___st_1;
	// System.Double UnityEngine.Purchasing.ProductCatalogPayout::q
	double ___q_2;
	// System.String UnityEngine.Purchasing.ProductCatalogPayout::d
	String_t* ___d_3;

public:
	inline static int32_t get_offset_of_t_0() { return static_cast<int32_t>(offsetof(ProductCatalogPayout_t4DFA2A14A2D8FFE1FD41C34DB603C2C1E805CE22, ___t_0)); }
	inline String_t* get_t_0() const { return ___t_0; }
	inline String_t** get_address_of_t_0() { return &___t_0; }
	inline void set_t_0(String_t* value)
	{
		___t_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_0), (void*)value);
	}

	inline static int32_t get_offset_of_st_1() { return static_cast<int32_t>(offsetof(ProductCatalogPayout_t4DFA2A14A2D8FFE1FD41C34DB603C2C1E805CE22, ___st_1)); }
	inline String_t* get_st_1() const { return ___st_1; }
	inline String_t** get_address_of_st_1() { return &___st_1; }
	inline void set_st_1(String_t* value)
	{
		___st_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___st_1), (void*)value);
	}

	inline static int32_t get_offset_of_q_2() { return static_cast<int32_t>(offsetof(ProductCatalogPayout_t4DFA2A14A2D8FFE1FD41C34DB603C2C1E805CE22, ___q_2)); }
	inline double get_q_2() const { return ___q_2; }
	inline double* get_address_of_q_2() { return &___q_2; }
	inline void set_q_2(double value)
	{
		___q_2 = value;
	}

	inline static int32_t get_offset_of_d_3() { return static_cast<int32_t>(offsetof(ProductCatalogPayout_t4DFA2A14A2D8FFE1FD41C34DB603C2C1E805CE22, ___d_3)); }
	inline String_t* get_d_3() const { return ___d_3; }
	inline String_t** get_address_of_d_3() { return &___d_3; }
	inline void set_d_3(String_t* value)
	{
		___d_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___d_3), (void*)value);
	}
};


// UnityEngine.Purchasing.ProductCollection
struct  ProductCollection_t7BE71F2FA5BE05F5DA13EA701B513861516F4C07  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Purchasing.Product> UnityEngine.Purchasing.ProductCollection::m_IdToProduct
	Dictionary_2_tCAF0D54E59FAC220E2EF9D3ECAFF045862EC66C0 * ___m_IdToProduct_0;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Purchasing.Product> UnityEngine.Purchasing.ProductCollection::m_StoreSpecificIdToProduct
	Dictionary_2_tCAF0D54E59FAC220E2EF9D3ECAFF045862EC66C0 * ___m_StoreSpecificIdToProduct_1;
	// UnityEngine.Purchasing.Product[] UnityEngine.Purchasing.ProductCollection::m_Products
	ProductU5BU5D_tCC1E9F34B8B3A88563CA989013308FB058864237* ___m_Products_2;
	// System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.Product> UnityEngine.Purchasing.ProductCollection::m_ProductSet
	HashSet_1_t361D3549FC7078E1C2F7C4C344909910E39A0D92 * ___m_ProductSet_3;

public:
	inline static int32_t get_offset_of_m_IdToProduct_0() { return static_cast<int32_t>(offsetof(ProductCollection_t7BE71F2FA5BE05F5DA13EA701B513861516F4C07, ___m_IdToProduct_0)); }
	inline Dictionary_2_tCAF0D54E59FAC220E2EF9D3ECAFF045862EC66C0 * get_m_IdToProduct_0() const { return ___m_IdToProduct_0; }
	inline Dictionary_2_tCAF0D54E59FAC220E2EF9D3ECAFF045862EC66C0 ** get_address_of_m_IdToProduct_0() { return &___m_IdToProduct_0; }
	inline void set_m_IdToProduct_0(Dictionary_2_tCAF0D54E59FAC220E2EF9D3ECAFF045862EC66C0 * value)
	{
		___m_IdToProduct_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_IdToProduct_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_StoreSpecificIdToProduct_1() { return static_cast<int32_t>(offsetof(ProductCollection_t7BE71F2FA5BE05F5DA13EA701B513861516F4C07, ___m_StoreSpecificIdToProduct_1)); }
	inline Dictionary_2_tCAF0D54E59FAC220E2EF9D3ECAFF045862EC66C0 * get_m_StoreSpecificIdToProduct_1() const { return ___m_StoreSpecificIdToProduct_1; }
	inline Dictionary_2_tCAF0D54E59FAC220E2EF9D3ECAFF045862EC66C0 ** get_address_of_m_StoreSpecificIdToProduct_1() { return &___m_StoreSpecificIdToProduct_1; }
	inline void set_m_StoreSpecificIdToProduct_1(Dictionary_2_tCAF0D54E59FAC220E2EF9D3ECAFF045862EC66C0 * value)
	{
		___m_StoreSpecificIdToProduct_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StoreSpecificIdToProduct_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Products_2() { return static_cast<int32_t>(offsetof(ProductCollection_t7BE71F2FA5BE05F5DA13EA701B513861516F4C07, ___m_Products_2)); }
	inline ProductU5BU5D_tCC1E9F34B8B3A88563CA989013308FB058864237* get_m_Products_2() const { return ___m_Products_2; }
	inline ProductU5BU5D_tCC1E9F34B8B3A88563CA989013308FB058864237** get_address_of_m_Products_2() { return &___m_Products_2; }
	inline void set_m_Products_2(ProductU5BU5D_tCC1E9F34B8B3A88563CA989013308FB058864237* value)
	{
		___m_Products_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Products_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_ProductSet_3() { return static_cast<int32_t>(offsetof(ProductCollection_t7BE71F2FA5BE05F5DA13EA701B513861516F4C07, ___m_ProductSet_3)); }
	inline HashSet_1_t361D3549FC7078E1C2F7C4C344909910E39A0D92 * get_m_ProductSet_3() const { return ___m_ProductSet_3; }
	inline HashSet_1_t361D3549FC7078E1C2F7C4C344909910E39A0D92 ** get_address_of_m_ProductSet_3() { return &___m_ProductSet_3; }
	inline void set_m_ProductSet_3(HashSet_1_t361D3549FC7078E1C2F7C4C344909910E39A0D92 * value)
	{
		___m_ProductSet_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ProductSet_3), (void*)value);
	}
};

struct ProductCollection_t7BE71F2FA5BE05F5DA13EA701B513861516F4C07_StaticFields
{
public:
	// System.Func`2<UnityEngine.Purchasing.Product,System.String> UnityEngine.Purchasing.ProductCollection::<>f__amU24cache0
	Func_2_tE3DDEF72300908E3958302E8350C5EECED6BD11E * ___U3CU3Ef__amU24cache0_4;
	// System.Func`2<UnityEngine.Purchasing.Product,System.String> UnityEngine.Purchasing.ProductCollection::<>f__amU24cache1
	Func_2_tE3DDEF72300908E3958302E8350C5EECED6BD11E * ___U3CU3Ef__amU24cache1_5;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_4() { return static_cast<int32_t>(offsetof(ProductCollection_t7BE71F2FA5BE05F5DA13EA701B513861516F4C07_StaticFields, ___U3CU3Ef__amU24cache0_4)); }
	inline Func_2_tE3DDEF72300908E3958302E8350C5EECED6BD11E * get_U3CU3Ef__amU24cache0_4() const { return ___U3CU3Ef__amU24cache0_4; }
	inline Func_2_tE3DDEF72300908E3958302E8350C5EECED6BD11E ** get_address_of_U3CU3Ef__amU24cache0_4() { return &___U3CU3Ef__amU24cache0_4; }
	inline void set_U3CU3Ef__amU24cache0_4(Func_2_tE3DDEF72300908E3958302E8350C5EECED6BD11E * value)
	{
		___U3CU3Ef__amU24cache0_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__amU24cache0_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_5() { return static_cast<int32_t>(offsetof(ProductCollection_t7BE71F2FA5BE05F5DA13EA701B513861516F4C07_StaticFields, ___U3CU3Ef__amU24cache1_5)); }
	inline Func_2_tE3DDEF72300908E3958302E8350C5EECED6BD11E * get_U3CU3Ef__amU24cache1_5() const { return ___U3CU3Ef__amU24cache1_5; }
	inline Func_2_tE3DDEF72300908E3958302E8350C5EECED6BD11E ** get_address_of_U3CU3Ef__amU24cache1_5() { return &___U3CU3Ef__amU24cache1_5; }
	inline void set_U3CU3Ef__amU24cache1_5(Func_2_tE3DDEF72300908E3958302E8350C5EECED6BD11E * value)
	{
		___U3CU3Ef__amU24cache1_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__amU24cache1_5), (void*)value);
	}
};


// UnityEngine.Purchasing.PurchaseEventArgs
struct  PurchaseEventArgs_tF6E04BFD5492F5F57309FFBB2415EB26E5B88C04  : public RuntimeObject
{
public:
	// UnityEngine.Purchasing.Product UnityEngine.Purchasing.PurchaseEventArgs::<purchasedProduct>k__BackingField
	Product_t830A133A97BEA12C3CD696853098A295D99A6DE4 * ___U3CpurchasedProductU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CpurchasedProductU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(PurchaseEventArgs_tF6E04BFD5492F5F57309FFBB2415EB26E5B88C04, ___U3CpurchasedProductU3Ek__BackingField_0)); }
	inline Product_t830A133A97BEA12C3CD696853098A295D99A6DE4 * get_U3CpurchasedProductU3Ek__BackingField_0() const { return ___U3CpurchasedProductU3Ek__BackingField_0; }
	inline Product_t830A133A97BEA12C3CD696853098A295D99A6DE4 ** get_address_of_U3CpurchasedProductU3Ek__BackingField_0() { return &___U3CpurchasedProductU3Ek__BackingField_0; }
	inline void set_U3CpurchasedProductU3Ek__BackingField_0(Product_t830A133A97BEA12C3CD696853098A295D99A6DE4 * value)
	{
		___U3CpurchasedProductU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpurchasedProductU3Ek__BackingField_0), (void*)value);
	}
};


// UnityEngine.Purchasing.StoreID
struct  StoreID_t65762FC3162E0686D56CB880A86E7FEFEFDFCC80  : public RuntimeObject
{
public:
	// System.String UnityEngine.Purchasing.StoreID::store
	String_t* ___store_0;
	// System.String UnityEngine.Purchasing.StoreID::id
	String_t* ___id_1;

public:
	inline static int32_t get_offset_of_store_0() { return static_cast<int32_t>(offsetof(StoreID_t65762FC3162E0686D56CB880A86E7FEFEFDFCC80, ___store_0)); }
	inline String_t* get_store_0() const { return ___store_0; }
	inline String_t** get_address_of_store_0() { return &___store_0; }
	inline void set_store_0(String_t* value)
	{
		___store_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___store_0), (void*)value);
	}

	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(StoreID_t65762FC3162E0686D56CB880A86E7FEFEFDFCC80, ___id_1)); }
	inline String_t* get_id_1() const { return ___id_1; }
	inline String_t** get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(String_t* value)
	{
		___id_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___id_1), (void*)value);
	}
};


// UnityEngine.YieldInstruction
struct  YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
};

// performanceTest.PerformanceTest_<BuildArmatureComponent>d__2
struct  U3CBuildArmatureComponentU3Ed__2_tBA0BC2EFDBB3AE560B94ACE0FB1B2691C4DFA7EA  : public RuntimeObject
{
public:
	// System.Int32 performanceTest.PerformanceTest_<BuildArmatureComponent>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object performanceTest.PerformanceTest_<BuildArmatureComponent>d__2::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Int32 performanceTest.PerformanceTest_<BuildArmatureComponent>d__2::<lY>5__2
	int32_t ___U3ClYU3E5__2_2;
	// System.Int32 performanceTest.PerformanceTest_<BuildArmatureComponent>d__2::<lX>5__3
	int32_t ___U3ClXU3E5__3_3;
	// System.Int32 performanceTest.PerformanceTest_<BuildArmatureComponent>d__2::<y>5__4
	int32_t ___U3CyU3E5__4_4;
	// System.Int32 performanceTest.PerformanceTest_<BuildArmatureComponent>d__2::<x>5__5
	int32_t ___U3CxU3E5__5_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CBuildArmatureComponentU3Ed__2_tBA0BC2EFDBB3AE560B94ACE0FB1B2691C4DFA7EA, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CBuildArmatureComponentU3Ed__2_tBA0BC2EFDBB3AE560B94ACE0FB1B2691C4DFA7EA, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3ClYU3E5__2_2() { return static_cast<int32_t>(offsetof(U3CBuildArmatureComponentU3Ed__2_tBA0BC2EFDBB3AE560B94ACE0FB1B2691C4DFA7EA, ___U3ClYU3E5__2_2)); }
	inline int32_t get_U3ClYU3E5__2_2() const { return ___U3ClYU3E5__2_2; }
	inline int32_t* get_address_of_U3ClYU3E5__2_2() { return &___U3ClYU3E5__2_2; }
	inline void set_U3ClYU3E5__2_2(int32_t value)
	{
		___U3ClYU3E5__2_2 = value;
	}

	inline static int32_t get_offset_of_U3ClXU3E5__3_3() { return static_cast<int32_t>(offsetof(U3CBuildArmatureComponentU3Ed__2_tBA0BC2EFDBB3AE560B94ACE0FB1B2691C4DFA7EA, ___U3ClXU3E5__3_3)); }
	inline int32_t get_U3ClXU3E5__3_3() const { return ___U3ClXU3E5__3_3; }
	inline int32_t* get_address_of_U3ClXU3E5__3_3() { return &___U3ClXU3E5__3_3; }
	inline void set_U3ClXU3E5__3_3(int32_t value)
	{
		___U3ClXU3E5__3_3 = value;
	}

	inline static int32_t get_offset_of_U3CyU3E5__4_4() { return static_cast<int32_t>(offsetof(U3CBuildArmatureComponentU3Ed__2_tBA0BC2EFDBB3AE560B94ACE0FB1B2691C4DFA7EA, ___U3CyU3E5__4_4)); }
	inline int32_t get_U3CyU3E5__4_4() const { return ___U3CyU3E5__4_4; }
	inline int32_t* get_address_of_U3CyU3E5__4_4() { return &___U3CyU3E5__4_4; }
	inline void set_U3CyU3E5__4_4(int32_t value)
	{
		___U3CyU3E5__4_4 = value;
	}

	inline static int32_t get_offset_of_U3CxU3E5__5_5() { return static_cast<int32_t>(offsetof(U3CBuildArmatureComponentU3Ed__2_tBA0BC2EFDBB3AE560B94ACE0FB1B2691C4DFA7EA, ___U3CxU3E5__5_5)); }
	inline int32_t get_U3CxU3E5__5_5() const { return ___U3CxU3E5__5_5; }
	inline int32_t* get_address_of_U3CxU3E5__5_5() { return &___U3CxU3E5__5_5; }
	inline void set_U3CxU3E5__5_5(int32_t value)
	{
		___U3CxU3E5__5_5 = value;
	}
};


// DragonBones.Animation
struct  Animation_t3E64FBA6FBD6680C6EF991689446EBB237888A7C  : public BaseObject_t5B96E4C6A273473F5F2676C8B69EE180B6D8364D
{
public:
	// System.Single DragonBones.Animation::timeScale
	float ___timeScale_5;
	// System.Boolean DragonBones.Animation::_animationDirty
	bool ____animationDirty_6;
	// System.Single DragonBones.Animation::_inheritTimeScale
	float ____inheritTimeScale_7;
	// System.Collections.Generic.List`1<System.String> DragonBones.Animation::_animationNames
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ____animationNames_8;
	// System.Collections.Generic.List`1<DragonBones.AnimationState> DragonBones.Animation::_animationStates
	List_1_tAA2E2D5FB494F278CE1516BB45A8263A63B25D05 * ____animationStates_9;
	// System.Collections.Generic.Dictionary`2<System.String,DragonBones.AnimationData> DragonBones.Animation::_animations
	Dictionary_2_t9DC56FBD75D7C88B3298977239D5FC6DC6B5C526 * ____animations_10;
	// DragonBones.Armature DragonBones.Animation::_armature
	Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B * ____armature_11;
	// DragonBones.AnimationConfig DragonBones.Animation::_animationConfig
	AnimationConfig_t2331273DBB0A68A4FB35CE69CA0B742B4D5E5CAB * ____animationConfig_12;
	// DragonBones.AnimationState DragonBones.Animation::_lastAnimationState
	AnimationState_tBA6EAAD27D56DD26A61304C93676C337EB761238 * ____lastAnimationState_13;

public:
	inline static int32_t get_offset_of_timeScale_5() { return static_cast<int32_t>(offsetof(Animation_t3E64FBA6FBD6680C6EF991689446EBB237888A7C, ___timeScale_5)); }
	inline float get_timeScale_5() const { return ___timeScale_5; }
	inline float* get_address_of_timeScale_5() { return &___timeScale_5; }
	inline void set_timeScale_5(float value)
	{
		___timeScale_5 = value;
	}

	inline static int32_t get_offset_of__animationDirty_6() { return static_cast<int32_t>(offsetof(Animation_t3E64FBA6FBD6680C6EF991689446EBB237888A7C, ____animationDirty_6)); }
	inline bool get__animationDirty_6() const { return ____animationDirty_6; }
	inline bool* get_address_of__animationDirty_6() { return &____animationDirty_6; }
	inline void set__animationDirty_6(bool value)
	{
		____animationDirty_6 = value;
	}

	inline static int32_t get_offset_of__inheritTimeScale_7() { return static_cast<int32_t>(offsetof(Animation_t3E64FBA6FBD6680C6EF991689446EBB237888A7C, ____inheritTimeScale_7)); }
	inline float get__inheritTimeScale_7() const { return ____inheritTimeScale_7; }
	inline float* get_address_of__inheritTimeScale_7() { return &____inheritTimeScale_7; }
	inline void set__inheritTimeScale_7(float value)
	{
		____inheritTimeScale_7 = value;
	}

	inline static int32_t get_offset_of__animationNames_8() { return static_cast<int32_t>(offsetof(Animation_t3E64FBA6FBD6680C6EF991689446EBB237888A7C, ____animationNames_8)); }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * get__animationNames_8() const { return ____animationNames_8; }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 ** get_address_of__animationNames_8() { return &____animationNames_8; }
	inline void set__animationNames_8(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * value)
	{
		____animationNames_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____animationNames_8), (void*)value);
	}

	inline static int32_t get_offset_of__animationStates_9() { return static_cast<int32_t>(offsetof(Animation_t3E64FBA6FBD6680C6EF991689446EBB237888A7C, ____animationStates_9)); }
	inline List_1_tAA2E2D5FB494F278CE1516BB45A8263A63B25D05 * get__animationStates_9() const { return ____animationStates_9; }
	inline List_1_tAA2E2D5FB494F278CE1516BB45A8263A63B25D05 ** get_address_of__animationStates_9() { return &____animationStates_9; }
	inline void set__animationStates_9(List_1_tAA2E2D5FB494F278CE1516BB45A8263A63B25D05 * value)
	{
		____animationStates_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____animationStates_9), (void*)value);
	}

	inline static int32_t get_offset_of__animations_10() { return static_cast<int32_t>(offsetof(Animation_t3E64FBA6FBD6680C6EF991689446EBB237888A7C, ____animations_10)); }
	inline Dictionary_2_t9DC56FBD75D7C88B3298977239D5FC6DC6B5C526 * get__animations_10() const { return ____animations_10; }
	inline Dictionary_2_t9DC56FBD75D7C88B3298977239D5FC6DC6B5C526 ** get_address_of__animations_10() { return &____animations_10; }
	inline void set__animations_10(Dictionary_2_t9DC56FBD75D7C88B3298977239D5FC6DC6B5C526 * value)
	{
		____animations_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____animations_10), (void*)value);
	}

	inline static int32_t get_offset_of__armature_11() { return static_cast<int32_t>(offsetof(Animation_t3E64FBA6FBD6680C6EF991689446EBB237888A7C, ____armature_11)); }
	inline Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B * get__armature_11() const { return ____armature_11; }
	inline Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B ** get_address_of__armature_11() { return &____armature_11; }
	inline void set__armature_11(Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B * value)
	{
		____armature_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____armature_11), (void*)value);
	}

	inline static int32_t get_offset_of__animationConfig_12() { return static_cast<int32_t>(offsetof(Animation_t3E64FBA6FBD6680C6EF991689446EBB237888A7C, ____animationConfig_12)); }
	inline AnimationConfig_t2331273DBB0A68A4FB35CE69CA0B742B4D5E5CAB * get__animationConfig_12() const { return ____animationConfig_12; }
	inline AnimationConfig_t2331273DBB0A68A4FB35CE69CA0B742B4D5E5CAB ** get_address_of__animationConfig_12() { return &____animationConfig_12; }
	inline void set__animationConfig_12(AnimationConfig_t2331273DBB0A68A4FB35CE69CA0B742B4D5E5CAB * value)
	{
		____animationConfig_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____animationConfig_12), (void*)value);
	}

	inline static int32_t get_offset_of__lastAnimationState_13() { return static_cast<int32_t>(offsetof(Animation_t3E64FBA6FBD6680C6EF991689446EBB237888A7C, ____lastAnimationState_13)); }
	inline AnimationState_tBA6EAAD27D56DD26A61304C93676C337EB761238 * get__lastAnimationState_13() const { return ____lastAnimationState_13; }
	inline AnimationState_tBA6EAAD27D56DD26A61304C93676C337EB761238 ** get_address_of__lastAnimationState_13() { return &____lastAnimationState_13; }
	inline void set__lastAnimationState_13(AnimationState_tBA6EAAD27D56DD26A61304C93676C337EB761238 * value)
	{
		____lastAnimationState_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lastAnimationState_13), (void*)value);
	}
};


// DragonBones.AnimationState
struct  AnimationState_tBA6EAAD27D56DD26A61304C93676C337EB761238  : public BaseObject_t5B96E4C6A273473F5F2676C8B69EE180B6D8364D
{
public:
	// System.Boolean DragonBones.AnimationState::actionEnabled
	bool ___actionEnabled_5;
	// System.Boolean DragonBones.AnimationState::additiveBlending
	bool ___additiveBlending_6;
	// System.Boolean DragonBones.AnimationState::displayControl
	bool ___displayControl_7;
	// System.Boolean DragonBones.AnimationState::resetToPose
	bool ___resetToPose_8;
	// System.Int32 DragonBones.AnimationState::playTimes
	int32_t ___playTimes_9;
	// System.Int32 DragonBones.AnimationState::layer
	int32_t ___layer_10;
	// System.Single DragonBones.AnimationState::timeScale
	float ___timeScale_11;
	// System.Single DragonBones.AnimationState::weight
	float ___weight_12;
	// System.Single DragonBones.AnimationState::autoFadeOutTime
	float ___autoFadeOutTime_13;
	// System.Single DragonBones.AnimationState::fadeTotalTime
	float ___fadeTotalTime_14;
	// System.String DragonBones.AnimationState::name
	String_t* ___name_15;
	// System.String DragonBones.AnimationState::group
	String_t* ___group_16;
	// System.Boolean DragonBones.AnimationState::_timelineDirty
	bool ____timelineDirty_17;
	// System.Int32 DragonBones.AnimationState::_playheadState
	int32_t ____playheadState_18;
	// System.Int32 DragonBones.AnimationState::_fadeState
	int32_t ____fadeState_19;
	// System.Int32 DragonBones.AnimationState::_subFadeState
	int32_t ____subFadeState_20;
	// System.Single DragonBones.AnimationState::_position
	float ____position_21;
	// System.Single DragonBones.AnimationState::_duration
	float ____duration_22;
	// System.Single DragonBones.AnimationState::_fadeTime
	float ____fadeTime_23;
	// System.Single DragonBones.AnimationState::_time
	float ____time_24;
	// System.Single DragonBones.AnimationState::_fadeProgress
	float ____fadeProgress_25;
	// System.Single DragonBones.AnimationState::_weightResult
	float ____weightResult_26;
	// System.Collections.Generic.List`1<System.String> DragonBones.AnimationState::_boneMask
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ____boneMask_27;
	// System.Collections.Generic.List`1<DragonBones.BoneTimelineState> DragonBones.AnimationState::_boneTimelines
	List_1_t085DDEFF8CC8CF202962898A0B7242693065B7AE * ____boneTimelines_28;
	// System.Collections.Generic.List`1<DragonBones.SlotTimelineState> DragonBones.AnimationState::_slotTimelines
	List_1_tE43D2A290FF000B5115F950F339BC5511121E134 * ____slotTimelines_29;
	// System.Collections.Generic.List`1<DragonBones.ConstraintTimelineState> DragonBones.AnimationState::_constraintTimelines
	List_1_t0BE721B65ED893EE452BCED4E8D5B2A4EC01221E * ____constraintTimelines_30;
	// System.Collections.Generic.List`1<DragonBones.TimelineState> DragonBones.AnimationState::_poseTimelines
	List_1_tE34CD2838175C9B6719DDDA858C8BCD2A7D8ABCE * ____poseTimelines_31;
	// System.Collections.Generic.Dictionary`2<System.String,DragonBones.BonePose> DragonBones.AnimationState::_bonePoses
	Dictionary_2_tB545CAFA348AB9FF8CE646A1EBB76B3B513EEF88 * ____bonePoses_32;
	// DragonBones.AnimationData DragonBones.AnimationState::_animationData
	AnimationData_t4AD4F64C03ACE899A5CF12139232927E0DAB4770 * ____animationData_33;
	// DragonBones.Armature DragonBones.AnimationState::_armature
	Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B * ____armature_34;
	// DragonBones.ActionTimelineState DragonBones.AnimationState::_actionTimeline
	ActionTimelineState_t574326A382260C5C6445C9A461CBF4B1DB0D222A * ____actionTimeline_35;
	// DragonBones.ZOrderTimelineState DragonBones.AnimationState::_zOrderTimeline
	ZOrderTimelineState_t17B07EDB2637B910F4ED4F81BEFB61BF47BE46E5 * ____zOrderTimeline_36;

public:
	inline static int32_t get_offset_of_actionEnabled_5() { return static_cast<int32_t>(offsetof(AnimationState_tBA6EAAD27D56DD26A61304C93676C337EB761238, ___actionEnabled_5)); }
	inline bool get_actionEnabled_5() const { return ___actionEnabled_5; }
	inline bool* get_address_of_actionEnabled_5() { return &___actionEnabled_5; }
	inline void set_actionEnabled_5(bool value)
	{
		___actionEnabled_5 = value;
	}

	inline static int32_t get_offset_of_additiveBlending_6() { return static_cast<int32_t>(offsetof(AnimationState_tBA6EAAD27D56DD26A61304C93676C337EB761238, ___additiveBlending_6)); }
	inline bool get_additiveBlending_6() const { return ___additiveBlending_6; }
	inline bool* get_address_of_additiveBlending_6() { return &___additiveBlending_6; }
	inline void set_additiveBlending_6(bool value)
	{
		___additiveBlending_6 = value;
	}

	inline static int32_t get_offset_of_displayControl_7() { return static_cast<int32_t>(offsetof(AnimationState_tBA6EAAD27D56DD26A61304C93676C337EB761238, ___displayControl_7)); }
	inline bool get_displayControl_7() const { return ___displayControl_7; }
	inline bool* get_address_of_displayControl_7() { return &___displayControl_7; }
	inline void set_displayControl_7(bool value)
	{
		___displayControl_7 = value;
	}

	inline static int32_t get_offset_of_resetToPose_8() { return static_cast<int32_t>(offsetof(AnimationState_tBA6EAAD27D56DD26A61304C93676C337EB761238, ___resetToPose_8)); }
	inline bool get_resetToPose_8() const { return ___resetToPose_8; }
	inline bool* get_address_of_resetToPose_8() { return &___resetToPose_8; }
	inline void set_resetToPose_8(bool value)
	{
		___resetToPose_8 = value;
	}

	inline static int32_t get_offset_of_playTimes_9() { return static_cast<int32_t>(offsetof(AnimationState_tBA6EAAD27D56DD26A61304C93676C337EB761238, ___playTimes_9)); }
	inline int32_t get_playTimes_9() const { return ___playTimes_9; }
	inline int32_t* get_address_of_playTimes_9() { return &___playTimes_9; }
	inline void set_playTimes_9(int32_t value)
	{
		___playTimes_9 = value;
	}

	inline static int32_t get_offset_of_layer_10() { return static_cast<int32_t>(offsetof(AnimationState_tBA6EAAD27D56DD26A61304C93676C337EB761238, ___layer_10)); }
	inline int32_t get_layer_10() const { return ___layer_10; }
	inline int32_t* get_address_of_layer_10() { return &___layer_10; }
	inline void set_layer_10(int32_t value)
	{
		___layer_10 = value;
	}

	inline static int32_t get_offset_of_timeScale_11() { return static_cast<int32_t>(offsetof(AnimationState_tBA6EAAD27D56DD26A61304C93676C337EB761238, ___timeScale_11)); }
	inline float get_timeScale_11() const { return ___timeScale_11; }
	inline float* get_address_of_timeScale_11() { return &___timeScale_11; }
	inline void set_timeScale_11(float value)
	{
		___timeScale_11 = value;
	}

	inline static int32_t get_offset_of_weight_12() { return static_cast<int32_t>(offsetof(AnimationState_tBA6EAAD27D56DD26A61304C93676C337EB761238, ___weight_12)); }
	inline float get_weight_12() const { return ___weight_12; }
	inline float* get_address_of_weight_12() { return &___weight_12; }
	inline void set_weight_12(float value)
	{
		___weight_12 = value;
	}

	inline static int32_t get_offset_of_autoFadeOutTime_13() { return static_cast<int32_t>(offsetof(AnimationState_tBA6EAAD27D56DD26A61304C93676C337EB761238, ___autoFadeOutTime_13)); }
	inline float get_autoFadeOutTime_13() const { return ___autoFadeOutTime_13; }
	inline float* get_address_of_autoFadeOutTime_13() { return &___autoFadeOutTime_13; }
	inline void set_autoFadeOutTime_13(float value)
	{
		___autoFadeOutTime_13 = value;
	}

	inline static int32_t get_offset_of_fadeTotalTime_14() { return static_cast<int32_t>(offsetof(AnimationState_tBA6EAAD27D56DD26A61304C93676C337EB761238, ___fadeTotalTime_14)); }
	inline float get_fadeTotalTime_14() const { return ___fadeTotalTime_14; }
	inline float* get_address_of_fadeTotalTime_14() { return &___fadeTotalTime_14; }
	inline void set_fadeTotalTime_14(float value)
	{
		___fadeTotalTime_14 = value;
	}

	inline static int32_t get_offset_of_name_15() { return static_cast<int32_t>(offsetof(AnimationState_tBA6EAAD27D56DD26A61304C93676C337EB761238, ___name_15)); }
	inline String_t* get_name_15() const { return ___name_15; }
	inline String_t** get_address_of_name_15() { return &___name_15; }
	inline void set_name_15(String_t* value)
	{
		___name_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_15), (void*)value);
	}

	inline static int32_t get_offset_of_group_16() { return static_cast<int32_t>(offsetof(AnimationState_tBA6EAAD27D56DD26A61304C93676C337EB761238, ___group_16)); }
	inline String_t* get_group_16() const { return ___group_16; }
	inline String_t** get_address_of_group_16() { return &___group_16; }
	inline void set_group_16(String_t* value)
	{
		___group_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___group_16), (void*)value);
	}

	inline static int32_t get_offset_of__timelineDirty_17() { return static_cast<int32_t>(offsetof(AnimationState_tBA6EAAD27D56DD26A61304C93676C337EB761238, ____timelineDirty_17)); }
	inline bool get__timelineDirty_17() const { return ____timelineDirty_17; }
	inline bool* get_address_of__timelineDirty_17() { return &____timelineDirty_17; }
	inline void set__timelineDirty_17(bool value)
	{
		____timelineDirty_17 = value;
	}

	inline static int32_t get_offset_of__playheadState_18() { return static_cast<int32_t>(offsetof(AnimationState_tBA6EAAD27D56DD26A61304C93676C337EB761238, ____playheadState_18)); }
	inline int32_t get__playheadState_18() const { return ____playheadState_18; }
	inline int32_t* get_address_of__playheadState_18() { return &____playheadState_18; }
	inline void set__playheadState_18(int32_t value)
	{
		____playheadState_18 = value;
	}

	inline static int32_t get_offset_of__fadeState_19() { return static_cast<int32_t>(offsetof(AnimationState_tBA6EAAD27D56DD26A61304C93676C337EB761238, ____fadeState_19)); }
	inline int32_t get__fadeState_19() const { return ____fadeState_19; }
	inline int32_t* get_address_of__fadeState_19() { return &____fadeState_19; }
	inline void set__fadeState_19(int32_t value)
	{
		____fadeState_19 = value;
	}

	inline static int32_t get_offset_of__subFadeState_20() { return static_cast<int32_t>(offsetof(AnimationState_tBA6EAAD27D56DD26A61304C93676C337EB761238, ____subFadeState_20)); }
	inline int32_t get__subFadeState_20() const { return ____subFadeState_20; }
	inline int32_t* get_address_of__subFadeState_20() { return &____subFadeState_20; }
	inline void set__subFadeState_20(int32_t value)
	{
		____subFadeState_20 = value;
	}

	inline static int32_t get_offset_of__position_21() { return static_cast<int32_t>(offsetof(AnimationState_tBA6EAAD27D56DD26A61304C93676C337EB761238, ____position_21)); }
	inline float get__position_21() const { return ____position_21; }
	inline float* get_address_of__position_21() { return &____position_21; }
	inline void set__position_21(float value)
	{
		____position_21 = value;
	}

	inline static int32_t get_offset_of__duration_22() { return static_cast<int32_t>(offsetof(AnimationState_tBA6EAAD27D56DD26A61304C93676C337EB761238, ____duration_22)); }
	inline float get__duration_22() const { return ____duration_22; }
	inline float* get_address_of__duration_22() { return &____duration_22; }
	inline void set__duration_22(float value)
	{
		____duration_22 = value;
	}

	inline static int32_t get_offset_of__fadeTime_23() { return static_cast<int32_t>(offsetof(AnimationState_tBA6EAAD27D56DD26A61304C93676C337EB761238, ____fadeTime_23)); }
	inline float get__fadeTime_23() const { return ____fadeTime_23; }
	inline float* get_address_of__fadeTime_23() { return &____fadeTime_23; }
	inline void set__fadeTime_23(float value)
	{
		____fadeTime_23 = value;
	}

	inline static int32_t get_offset_of__time_24() { return static_cast<int32_t>(offsetof(AnimationState_tBA6EAAD27D56DD26A61304C93676C337EB761238, ____time_24)); }
	inline float get__time_24() const { return ____time_24; }
	inline float* get_address_of__time_24() { return &____time_24; }
	inline void set__time_24(float value)
	{
		____time_24 = value;
	}

	inline static int32_t get_offset_of__fadeProgress_25() { return static_cast<int32_t>(offsetof(AnimationState_tBA6EAAD27D56DD26A61304C93676C337EB761238, ____fadeProgress_25)); }
	inline float get__fadeProgress_25() const { return ____fadeProgress_25; }
	inline float* get_address_of__fadeProgress_25() { return &____fadeProgress_25; }
	inline void set__fadeProgress_25(float value)
	{
		____fadeProgress_25 = value;
	}

	inline static int32_t get_offset_of__weightResult_26() { return static_cast<int32_t>(offsetof(AnimationState_tBA6EAAD27D56DD26A61304C93676C337EB761238, ____weightResult_26)); }
	inline float get__weightResult_26() const { return ____weightResult_26; }
	inline float* get_address_of__weightResult_26() { return &____weightResult_26; }
	inline void set__weightResult_26(float value)
	{
		____weightResult_26 = value;
	}

	inline static int32_t get_offset_of__boneMask_27() { return static_cast<int32_t>(offsetof(AnimationState_tBA6EAAD27D56DD26A61304C93676C337EB761238, ____boneMask_27)); }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * get__boneMask_27() const { return ____boneMask_27; }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 ** get_address_of__boneMask_27() { return &____boneMask_27; }
	inline void set__boneMask_27(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * value)
	{
		____boneMask_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____boneMask_27), (void*)value);
	}

	inline static int32_t get_offset_of__boneTimelines_28() { return static_cast<int32_t>(offsetof(AnimationState_tBA6EAAD27D56DD26A61304C93676C337EB761238, ____boneTimelines_28)); }
	inline List_1_t085DDEFF8CC8CF202962898A0B7242693065B7AE * get__boneTimelines_28() const { return ____boneTimelines_28; }
	inline List_1_t085DDEFF8CC8CF202962898A0B7242693065B7AE ** get_address_of__boneTimelines_28() { return &____boneTimelines_28; }
	inline void set__boneTimelines_28(List_1_t085DDEFF8CC8CF202962898A0B7242693065B7AE * value)
	{
		____boneTimelines_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____boneTimelines_28), (void*)value);
	}

	inline static int32_t get_offset_of__slotTimelines_29() { return static_cast<int32_t>(offsetof(AnimationState_tBA6EAAD27D56DD26A61304C93676C337EB761238, ____slotTimelines_29)); }
	inline List_1_tE43D2A290FF000B5115F950F339BC5511121E134 * get__slotTimelines_29() const { return ____slotTimelines_29; }
	inline List_1_tE43D2A290FF000B5115F950F339BC5511121E134 ** get_address_of__slotTimelines_29() { return &____slotTimelines_29; }
	inline void set__slotTimelines_29(List_1_tE43D2A290FF000B5115F950F339BC5511121E134 * value)
	{
		____slotTimelines_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____slotTimelines_29), (void*)value);
	}

	inline static int32_t get_offset_of__constraintTimelines_30() { return static_cast<int32_t>(offsetof(AnimationState_tBA6EAAD27D56DD26A61304C93676C337EB761238, ____constraintTimelines_30)); }
	inline List_1_t0BE721B65ED893EE452BCED4E8D5B2A4EC01221E * get__constraintTimelines_30() const { return ____constraintTimelines_30; }
	inline List_1_t0BE721B65ED893EE452BCED4E8D5B2A4EC01221E ** get_address_of__constraintTimelines_30() { return &____constraintTimelines_30; }
	inline void set__constraintTimelines_30(List_1_t0BE721B65ED893EE452BCED4E8D5B2A4EC01221E * value)
	{
		____constraintTimelines_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____constraintTimelines_30), (void*)value);
	}

	inline static int32_t get_offset_of__poseTimelines_31() { return static_cast<int32_t>(offsetof(AnimationState_tBA6EAAD27D56DD26A61304C93676C337EB761238, ____poseTimelines_31)); }
	inline List_1_tE34CD2838175C9B6719DDDA858C8BCD2A7D8ABCE * get__poseTimelines_31() const { return ____poseTimelines_31; }
	inline List_1_tE34CD2838175C9B6719DDDA858C8BCD2A7D8ABCE ** get_address_of__poseTimelines_31() { return &____poseTimelines_31; }
	inline void set__poseTimelines_31(List_1_tE34CD2838175C9B6719DDDA858C8BCD2A7D8ABCE * value)
	{
		____poseTimelines_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____poseTimelines_31), (void*)value);
	}

	inline static int32_t get_offset_of__bonePoses_32() { return static_cast<int32_t>(offsetof(AnimationState_tBA6EAAD27D56DD26A61304C93676C337EB761238, ____bonePoses_32)); }
	inline Dictionary_2_tB545CAFA348AB9FF8CE646A1EBB76B3B513EEF88 * get__bonePoses_32() const { return ____bonePoses_32; }
	inline Dictionary_2_tB545CAFA348AB9FF8CE646A1EBB76B3B513EEF88 ** get_address_of__bonePoses_32() { return &____bonePoses_32; }
	inline void set__bonePoses_32(Dictionary_2_tB545CAFA348AB9FF8CE646A1EBB76B3B513EEF88 * value)
	{
		____bonePoses_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____bonePoses_32), (void*)value);
	}

	inline static int32_t get_offset_of__animationData_33() { return static_cast<int32_t>(offsetof(AnimationState_tBA6EAAD27D56DD26A61304C93676C337EB761238, ____animationData_33)); }
	inline AnimationData_t4AD4F64C03ACE899A5CF12139232927E0DAB4770 * get__animationData_33() const { return ____animationData_33; }
	inline AnimationData_t4AD4F64C03ACE899A5CF12139232927E0DAB4770 ** get_address_of__animationData_33() { return &____animationData_33; }
	inline void set__animationData_33(AnimationData_t4AD4F64C03ACE899A5CF12139232927E0DAB4770 * value)
	{
		____animationData_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____animationData_33), (void*)value);
	}

	inline static int32_t get_offset_of__armature_34() { return static_cast<int32_t>(offsetof(AnimationState_tBA6EAAD27D56DD26A61304C93676C337EB761238, ____armature_34)); }
	inline Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B * get__armature_34() const { return ____armature_34; }
	inline Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B ** get_address_of__armature_34() { return &____armature_34; }
	inline void set__armature_34(Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B * value)
	{
		____armature_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____armature_34), (void*)value);
	}

	inline static int32_t get_offset_of__actionTimeline_35() { return static_cast<int32_t>(offsetof(AnimationState_tBA6EAAD27D56DD26A61304C93676C337EB761238, ____actionTimeline_35)); }
	inline ActionTimelineState_t574326A382260C5C6445C9A461CBF4B1DB0D222A * get__actionTimeline_35() const { return ____actionTimeline_35; }
	inline ActionTimelineState_t574326A382260C5C6445C9A461CBF4B1DB0D222A ** get_address_of__actionTimeline_35() { return &____actionTimeline_35; }
	inline void set__actionTimeline_35(ActionTimelineState_t574326A382260C5C6445C9A461CBF4B1DB0D222A * value)
	{
		____actionTimeline_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____actionTimeline_35), (void*)value);
	}

	inline static int32_t get_offset_of__zOrderTimeline_36() { return static_cast<int32_t>(offsetof(AnimationState_tBA6EAAD27D56DD26A61304C93676C337EB761238, ____zOrderTimeline_36)); }
	inline ZOrderTimelineState_t17B07EDB2637B910F4ED4F81BEFB61BF47BE46E5 * get__zOrderTimeline_36() const { return ____zOrderTimeline_36; }
	inline ZOrderTimelineState_t17B07EDB2637B910F4ED4F81BEFB61BF47BE46E5 ** get_address_of__zOrderTimeline_36() { return &____zOrderTimeline_36; }
	inline void set__zOrderTimeline_36(ZOrderTimelineState_t17B07EDB2637B910F4ED4F81BEFB61BF47BE46E5 * value)
	{
		____zOrderTimeline_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____zOrderTimeline_36), (void*)value);
	}
};


// DragonBones.Armature
struct  Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B  : public BaseObject_t5B96E4C6A273473F5F2676C8B69EE180B6D8364D
{
public:
	// System.Boolean DragonBones.Armature::inheritAnimation
	bool ___inheritAnimation_5;
	// System.Object DragonBones.Armature::userData
	RuntimeObject * ___userData_6;
	// System.Boolean DragonBones.Armature::_lockUpdate
	bool ____lockUpdate_7;
	// System.Boolean DragonBones.Armature::_bonesDirty
	bool ____bonesDirty_8;
	// System.Boolean DragonBones.Armature::_slotsDirty
	bool ____slotsDirty_9;
	// System.Boolean DragonBones.Armature::_zOrderDirty
	bool ____zOrderDirty_10;
	// System.Boolean DragonBones.Armature::_flipX
	bool ____flipX_11;
	// System.Boolean DragonBones.Armature::_flipY
	bool ____flipY_12;
	// System.Int32 DragonBones.Armature::_cacheFrameIndex
	int32_t ____cacheFrameIndex_13;
	// System.Collections.Generic.List`1<DragonBones.Bone> DragonBones.Armature::_bones
	List_1_tB9E7FBF958A1675741FDD4B0929B4137E0C5DA17 * ____bones_14;
	// System.Collections.Generic.List`1<DragonBones.Slot> DragonBones.Armature::_slots
	List_1_t2C819212DB065F4A0B4106A797BDF1FDD5BE80A9 * ____slots_15;
	// System.Collections.Generic.List`1<DragonBones.Constraint> DragonBones.Armature::_constraints
	List_1_tA0901ACF997A14EB6A8432FDBEAA0D19E348AA51 * ____constraints_16;
	// System.Collections.Generic.List`1<DragonBones.ActionData> DragonBones.Armature::_actions
	List_1_tF9CD8A25990AB08F6C8668905F99E9F5AB6CAB87 * ____actions_17;
	// DragonBones.ArmatureData DragonBones.Armature::_armatureData
	ArmatureData_tC9AAFB92908EDD32B5EBC30FFFE4D518EA64FC9C * ____armatureData_18;
	// DragonBones.Animation DragonBones.Armature::_animation
	Animation_t3E64FBA6FBD6680C6EF991689446EBB237888A7C * ____animation_19;
	// DragonBones.IArmatureProxy DragonBones.Armature::_proxy
	RuntimeObject* ____proxy_20;
	// System.Object DragonBones.Armature::_display
	RuntimeObject * ____display_21;
	// DragonBones.TextureAtlasData DragonBones.Armature::_replaceTextureAtlasData
	TextureAtlasData_t27A130DFF2DE4AFFB0DAE1C94BD26D924E638FA4 * ____replaceTextureAtlasData_22;
	// System.Object DragonBones.Armature::_replacedTexture
	RuntimeObject * ____replacedTexture_23;
	// DragonBones.DragonBones DragonBones.Armature::_dragonBones
	DragonBones_t0C03E4E28174F02190B3E3F3E998AF4889E0DE51 * ____dragonBones_24;
	// DragonBones.WorldClock DragonBones.Armature::_clock
	WorldClock_tB7FDD3624313BD7EC114D044C56303B805D446B7 * ____clock_25;
	// DragonBones.Slot DragonBones.Armature::_parent
	Slot_t9D06B371824C1B67E43A10A17D18BC3EF71E3867 * ____parent_26;

public:
	inline static int32_t get_offset_of_inheritAnimation_5() { return static_cast<int32_t>(offsetof(Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B, ___inheritAnimation_5)); }
	inline bool get_inheritAnimation_5() const { return ___inheritAnimation_5; }
	inline bool* get_address_of_inheritAnimation_5() { return &___inheritAnimation_5; }
	inline void set_inheritAnimation_5(bool value)
	{
		___inheritAnimation_5 = value;
	}

	inline static int32_t get_offset_of_userData_6() { return static_cast<int32_t>(offsetof(Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B, ___userData_6)); }
	inline RuntimeObject * get_userData_6() const { return ___userData_6; }
	inline RuntimeObject ** get_address_of_userData_6() { return &___userData_6; }
	inline void set_userData_6(RuntimeObject * value)
	{
		___userData_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___userData_6), (void*)value);
	}

	inline static int32_t get_offset_of__lockUpdate_7() { return static_cast<int32_t>(offsetof(Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B, ____lockUpdate_7)); }
	inline bool get__lockUpdate_7() const { return ____lockUpdate_7; }
	inline bool* get_address_of__lockUpdate_7() { return &____lockUpdate_7; }
	inline void set__lockUpdate_7(bool value)
	{
		____lockUpdate_7 = value;
	}

	inline static int32_t get_offset_of__bonesDirty_8() { return static_cast<int32_t>(offsetof(Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B, ____bonesDirty_8)); }
	inline bool get__bonesDirty_8() const { return ____bonesDirty_8; }
	inline bool* get_address_of__bonesDirty_8() { return &____bonesDirty_8; }
	inline void set__bonesDirty_8(bool value)
	{
		____bonesDirty_8 = value;
	}

	inline static int32_t get_offset_of__slotsDirty_9() { return static_cast<int32_t>(offsetof(Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B, ____slotsDirty_9)); }
	inline bool get__slotsDirty_9() const { return ____slotsDirty_9; }
	inline bool* get_address_of__slotsDirty_9() { return &____slotsDirty_9; }
	inline void set__slotsDirty_9(bool value)
	{
		____slotsDirty_9 = value;
	}

	inline static int32_t get_offset_of__zOrderDirty_10() { return static_cast<int32_t>(offsetof(Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B, ____zOrderDirty_10)); }
	inline bool get__zOrderDirty_10() const { return ____zOrderDirty_10; }
	inline bool* get_address_of__zOrderDirty_10() { return &____zOrderDirty_10; }
	inline void set__zOrderDirty_10(bool value)
	{
		____zOrderDirty_10 = value;
	}

	inline static int32_t get_offset_of__flipX_11() { return static_cast<int32_t>(offsetof(Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B, ____flipX_11)); }
	inline bool get__flipX_11() const { return ____flipX_11; }
	inline bool* get_address_of__flipX_11() { return &____flipX_11; }
	inline void set__flipX_11(bool value)
	{
		____flipX_11 = value;
	}

	inline static int32_t get_offset_of__flipY_12() { return static_cast<int32_t>(offsetof(Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B, ____flipY_12)); }
	inline bool get__flipY_12() const { return ____flipY_12; }
	inline bool* get_address_of__flipY_12() { return &____flipY_12; }
	inline void set__flipY_12(bool value)
	{
		____flipY_12 = value;
	}

	inline static int32_t get_offset_of__cacheFrameIndex_13() { return static_cast<int32_t>(offsetof(Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B, ____cacheFrameIndex_13)); }
	inline int32_t get__cacheFrameIndex_13() const { return ____cacheFrameIndex_13; }
	inline int32_t* get_address_of__cacheFrameIndex_13() { return &____cacheFrameIndex_13; }
	inline void set__cacheFrameIndex_13(int32_t value)
	{
		____cacheFrameIndex_13 = value;
	}

	inline static int32_t get_offset_of__bones_14() { return static_cast<int32_t>(offsetof(Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B, ____bones_14)); }
	inline List_1_tB9E7FBF958A1675741FDD4B0929B4137E0C5DA17 * get__bones_14() const { return ____bones_14; }
	inline List_1_tB9E7FBF958A1675741FDD4B0929B4137E0C5DA17 ** get_address_of__bones_14() { return &____bones_14; }
	inline void set__bones_14(List_1_tB9E7FBF958A1675741FDD4B0929B4137E0C5DA17 * value)
	{
		____bones_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____bones_14), (void*)value);
	}

	inline static int32_t get_offset_of__slots_15() { return static_cast<int32_t>(offsetof(Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B, ____slots_15)); }
	inline List_1_t2C819212DB065F4A0B4106A797BDF1FDD5BE80A9 * get__slots_15() const { return ____slots_15; }
	inline List_1_t2C819212DB065F4A0B4106A797BDF1FDD5BE80A9 ** get_address_of__slots_15() { return &____slots_15; }
	inline void set__slots_15(List_1_t2C819212DB065F4A0B4106A797BDF1FDD5BE80A9 * value)
	{
		____slots_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____slots_15), (void*)value);
	}

	inline static int32_t get_offset_of__constraints_16() { return static_cast<int32_t>(offsetof(Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B, ____constraints_16)); }
	inline List_1_tA0901ACF997A14EB6A8432FDBEAA0D19E348AA51 * get__constraints_16() const { return ____constraints_16; }
	inline List_1_tA0901ACF997A14EB6A8432FDBEAA0D19E348AA51 ** get_address_of__constraints_16() { return &____constraints_16; }
	inline void set__constraints_16(List_1_tA0901ACF997A14EB6A8432FDBEAA0D19E348AA51 * value)
	{
		____constraints_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____constraints_16), (void*)value);
	}

	inline static int32_t get_offset_of__actions_17() { return static_cast<int32_t>(offsetof(Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B, ____actions_17)); }
	inline List_1_tF9CD8A25990AB08F6C8668905F99E9F5AB6CAB87 * get__actions_17() const { return ____actions_17; }
	inline List_1_tF9CD8A25990AB08F6C8668905F99E9F5AB6CAB87 ** get_address_of__actions_17() { return &____actions_17; }
	inline void set__actions_17(List_1_tF9CD8A25990AB08F6C8668905F99E9F5AB6CAB87 * value)
	{
		____actions_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____actions_17), (void*)value);
	}

	inline static int32_t get_offset_of__armatureData_18() { return static_cast<int32_t>(offsetof(Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B, ____armatureData_18)); }
	inline ArmatureData_tC9AAFB92908EDD32B5EBC30FFFE4D518EA64FC9C * get__armatureData_18() const { return ____armatureData_18; }
	inline ArmatureData_tC9AAFB92908EDD32B5EBC30FFFE4D518EA64FC9C ** get_address_of__armatureData_18() { return &____armatureData_18; }
	inline void set__armatureData_18(ArmatureData_tC9AAFB92908EDD32B5EBC30FFFE4D518EA64FC9C * value)
	{
		____armatureData_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____armatureData_18), (void*)value);
	}

	inline static int32_t get_offset_of__animation_19() { return static_cast<int32_t>(offsetof(Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B, ____animation_19)); }
	inline Animation_t3E64FBA6FBD6680C6EF991689446EBB237888A7C * get__animation_19() const { return ____animation_19; }
	inline Animation_t3E64FBA6FBD6680C6EF991689446EBB237888A7C ** get_address_of__animation_19() { return &____animation_19; }
	inline void set__animation_19(Animation_t3E64FBA6FBD6680C6EF991689446EBB237888A7C * value)
	{
		____animation_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____animation_19), (void*)value);
	}

	inline static int32_t get_offset_of__proxy_20() { return static_cast<int32_t>(offsetof(Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B, ____proxy_20)); }
	inline RuntimeObject* get__proxy_20() const { return ____proxy_20; }
	inline RuntimeObject** get_address_of__proxy_20() { return &____proxy_20; }
	inline void set__proxy_20(RuntimeObject* value)
	{
		____proxy_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____proxy_20), (void*)value);
	}

	inline static int32_t get_offset_of__display_21() { return static_cast<int32_t>(offsetof(Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B, ____display_21)); }
	inline RuntimeObject * get__display_21() const { return ____display_21; }
	inline RuntimeObject ** get_address_of__display_21() { return &____display_21; }
	inline void set__display_21(RuntimeObject * value)
	{
		____display_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____display_21), (void*)value);
	}

	inline static int32_t get_offset_of__replaceTextureAtlasData_22() { return static_cast<int32_t>(offsetof(Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B, ____replaceTextureAtlasData_22)); }
	inline TextureAtlasData_t27A130DFF2DE4AFFB0DAE1C94BD26D924E638FA4 * get__replaceTextureAtlasData_22() const { return ____replaceTextureAtlasData_22; }
	inline TextureAtlasData_t27A130DFF2DE4AFFB0DAE1C94BD26D924E638FA4 ** get_address_of__replaceTextureAtlasData_22() { return &____replaceTextureAtlasData_22; }
	inline void set__replaceTextureAtlasData_22(TextureAtlasData_t27A130DFF2DE4AFFB0DAE1C94BD26D924E638FA4 * value)
	{
		____replaceTextureAtlasData_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____replaceTextureAtlasData_22), (void*)value);
	}

	inline static int32_t get_offset_of__replacedTexture_23() { return static_cast<int32_t>(offsetof(Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B, ____replacedTexture_23)); }
	inline RuntimeObject * get__replacedTexture_23() const { return ____replacedTexture_23; }
	inline RuntimeObject ** get_address_of__replacedTexture_23() { return &____replacedTexture_23; }
	inline void set__replacedTexture_23(RuntimeObject * value)
	{
		____replacedTexture_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____replacedTexture_23), (void*)value);
	}

	inline static int32_t get_offset_of__dragonBones_24() { return static_cast<int32_t>(offsetof(Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B, ____dragonBones_24)); }
	inline DragonBones_t0C03E4E28174F02190B3E3F3E998AF4889E0DE51 * get__dragonBones_24() const { return ____dragonBones_24; }
	inline DragonBones_t0C03E4E28174F02190B3E3F3E998AF4889E0DE51 ** get_address_of__dragonBones_24() { return &____dragonBones_24; }
	inline void set__dragonBones_24(DragonBones_t0C03E4E28174F02190B3E3F3E998AF4889E0DE51 * value)
	{
		____dragonBones_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dragonBones_24), (void*)value);
	}

	inline static int32_t get_offset_of__clock_25() { return static_cast<int32_t>(offsetof(Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B, ____clock_25)); }
	inline WorldClock_tB7FDD3624313BD7EC114D044C56303B805D446B7 * get__clock_25() const { return ____clock_25; }
	inline WorldClock_tB7FDD3624313BD7EC114D044C56303B805D446B7 ** get_address_of__clock_25() { return &____clock_25; }
	inline void set__clock_25(WorldClock_tB7FDD3624313BD7EC114D044C56303B805D446B7 * value)
	{
		____clock_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____clock_25), (void*)value);
	}

	inline static int32_t get_offset_of__parent_26() { return static_cast<int32_t>(offsetof(Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B, ____parent_26)); }
	inline Slot_t9D06B371824C1B67E43A10A17D18BC3EF71E3867 * get__parent_26() const { return ____parent_26; }
	inline Slot_t9D06B371824C1B67E43A10A17D18BC3EF71E3867 ** get_address_of__parent_26() { return &____parent_26; }
	inline void set__parent_26(Slot_t9D06B371824C1B67E43A10A17D18BC3EF71E3867 * value)
	{
		____parent_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____parent_26), (void*)value);
	}
};


// DragonBones.DragonBonesData
struct  DragonBonesData_t2FD2911DD33EA22A2F8A6D2075530ECDD7AC15AD  : public BaseObject_t5B96E4C6A273473F5F2676C8B69EE180B6D8364D
{
public:
	// System.Boolean DragonBones.DragonBonesData::autoSearch
	bool ___autoSearch_5;
	// System.UInt32 DragonBones.DragonBonesData::frameRate
	uint32_t ___frameRate_6;
	// System.String DragonBones.DragonBonesData::version
	String_t* ___version_7;
	// System.String DragonBones.DragonBonesData::name
	String_t* ___name_8;
	// DragonBones.ArmatureData DragonBones.DragonBonesData::stage
	ArmatureData_tC9AAFB92908EDD32B5EBC30FFFE4D518EA64FC9C * ___stage_9;
	// System.Collections.Generic.List`1<System.UInt32> DragonBones.DragonBonesData::frameIndices
	List_1_t49B315A213A231954A3718D77EE3A2AFF443C38E * ___frameIndices_10;
	// System.Collections.Generic.List`1<System.Single> DragonBones.DragonBonesData::cachedFrames
	List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 * ___cachedFrames_11;
	// System.Collections.Generic.List`1<System.String> DragonBones.DragonBonesData::armatureNames
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___armatureNames_12;
	// System.Collections.Generic.Dictionary`2<System.String,DragonBones.ArmatureData> DragonBones.DragonBonesData::armatures
	Dictionary_2_t17301488D4B16297A4C30C67E1F65B6D3D574D27 * ___armatures_13;
	// System.Byte[] DragonBones.DragonBonesData::binary
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___binary_14;
	// System.Int16[] DragonBones.DragonBonesData::intArray
	Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* ___intArray_15;
	// System.Single[] DragonBones.DragonBonesData::floatArray
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___floatArray_16;
	// System.Int16[] DragonBones.DragonBonesData::frameIntArray
	Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* ___frameIntArray_17;
	// System.Single[] DragonBones.DragonBonesData::frameFloatArray
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___frameFloatArray_18;
	// System.Int16[] DragonBones.DragonBonesData::frameArray
	Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* ___frameArray_19;
	// System.UInt16[] DragonBones.DragonBonesData::timelineArray
	UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E* ___timelineArray_20;
	// DragonBones.UserData DragonBones.DragonBonesData::userData
	UserData_tFE97B68B9A6056E7F067E49635C2AF83B3303640 * ___userData_21;

public:
	inline static int32_t get_offset_of_autoSearch_5() { return static_cast<int32_t>(offsetof(DragonBonesData_t2FD2911DD33EA22A2F8A6D2075530ECDD7AC15AD, ___autoSearch_5)); }
	inline bool get_autoSearch_5() const { return ___autoSearch_5; }
	inline bool* get_address_of_autoSearch_5() { return &___autoSearch_5; }
	inline void set_autoSearch_5(bool value)
	{
		___autoSearch_5 = value;
	}

	inline static int32_t get_offset_of_frameRate_6() { return static_cast<int32_t>(offsetof(DragonBonesData_t2FD2911DD33EA22A2F8A6D2075530ECDD7AC15AD, ___frameRate_6)); }
	inline uint32_t get_frameRate_6() const { return ___frameRate_6; }
	inline uint32_t* get_address_of_frameRate_6() { return &___frameRate_6; }
	inline void set_frameRate_6(uint32_t value)
	{
		___frameRate_6 = value;
	}

	inline static int32_t get_offset_of_version_7() { return static_cast<int32_t>(offsetof(DragonBonesData_t2FD2911DD33EA22A2F8A6D2075530ECDD7AC15AD, ___version_7)); }
	inline String_t* get_version_7() const { return ___version_7; }
	inline String_t** get_address_of_version_7() { return &___version_7; }
	inline void set_version_7(String_t* value)
	{
		___version_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___version_7), (void*)value);
	}

	inline static int32_t get_offset_of_name_8() { return static_cast<int32_t>(offsetof(DragonBonesData_t2FD2911DD33EA22A2F8A6D2075530ECDD7AC15AD, ___name_8)); }
	inline String_t* get_name_8() const { return ___name_8; }
	inline String_t** get_address_of_name_8() { return &___name_8; }
	inline void set_name_8(String_t* value)
	{
		___name_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_8), (void*)value);
	}

	inline static int32_t get_offset_of_stage_9() { return static_cast<int32_t>(offsetof(DragonBonesData_t2FD2911DD33EA22A2F8A6D2075530ECDD7AC15AD, ___stage_9)); }
	inline ArmatureData_tC9AAFB92908EDD32B5EBC30FFFE4D518EA64FC9C * get_stage_9() const { return ___stage_9; }
	inline ArmatureData_tC9AAFB92908EDD32B5EBC30FFFE4D518EA64FC9C ** get_address_of_stage_9() { return &___stage_9; }
	inline void set_stage_9(ArmatureData_tC9AAFB92908EDD32B5EBC30FFFE4D518EA64FC9C * value)
	{
		___stage_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stage_9), (void*)value);
	}

	inline static int32_t get_offset_of_frameIndices_10() { return static_cast<int32_t>(offsetof(DragonBonesData_t2FD2911DD33EA22A2F8A6D2075530ECDD7AC15AD, ___frameIndices_10)); }
	inline List_1_t49B315A213A231954A3718D77EE3A2AFF443C38E * get_frameIndices_10() const { return ___frameIndices_10; }
	inline List_1_t49B315A213A231954A3718D77EE3A2AFF443C38E ** get_address_of_frameIndices_10() { return &___frameIndices_10; }
	inline void set_frameIndices_10(List_1_t49B315A213A231954A3718D77EE3A2AFF443C38E * value)
	{
		___frameIndices_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___frameIndices_10), (void*)value);
	}

	inline static int32_t get_offset_of_cachedFrames_11() { return static_cast<int32_t>(offsetof(DragonBonesData_t2FD2911DD33EA22A2F8A6D2075530ECDD7AC15AD, ___cachedFrames_11)); }
	inline List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 * get_cachedFrames_11() const { return ___cachedFrames_11; }
	inline List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 ** get_address_of_cachedFrames_11() { return &___cachedFrames_11; }
	inline void set_cachedFrames_11(List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 * value)
	{
		___cachedFrames_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cachedFrames_11), (void*)value);
	}

	inline static int32_t get_offset_of_armatureNames_12() { return static_cast<int32_t>(offsetof(DragonBonesData_t2FD2911DD33EA22A2F8A6D2075530ECDD7AC15AD, ___armatureNames_12)); }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * get_armatureNames_12() const { return ___armatureNames_12; }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 ** get_address_of_armatureNames_12() { return &___armatureNames_12; }
	inline void set_armatureNames_12(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * value)
	{
		___armatureNames_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___armatureNames_12), (void*)value);
	}

	inline static int32_t get_offset_of_armatures_13() { return static_cast<int32_t>(offsetof(DragonBonesData_t2FD2911DD33EA22A2F8A6D2075530ECDD7AC15AD, ___armatures_13)); }
	inline Dictionary_2_t17301488D4B16297A4C30C67E1F65B6D3D574D27 * get_armatures_13() const { return ___armatures_13; }
	inline Dictionary_2_t17301488D4B16297A4C30C67E1F65B6D3D574D27 ** get_address_of_armatures_13() { return &___armatures_13; }
	inline void set_armatures_13(Dictionary_2_t17301488D4B16297A4C30C67E1F65B6D3D574D27 * value)
	{
		___armatures_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___armatures_13), (void*)value);
	}

	inline static int32_t get_offset_of_binary_14() { return static_cast<int32_t>(offsetof(DragonBonesData_t2FD2911DD33EA22A2F8A6D2075530ECDD7AC15AD, ___binary_14)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_binary_14() const { return ___binary_14; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_binary_14() { return &___binary_14; }
	inline void set_binary_14(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___binary_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___binary_14), (void*)value);
	}

	inline static int32_t get_offset_of_intArray_15() { return static_cast<int32_t>(offsetof(DragonBonesData_t2FD2911DD33EA22A2F8A6D2075530ECDD7AC15AD, ___intArray_15)); }
	inline Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* get_intArray_15() const { return ___intArray_15; }
	inline Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28** get_address_of_intArray_15() { return &___intArray_15; }
	inline void set_intArray_15(Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* value)
	{
		___intArray_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___intArray_15), (void*)value);
	}

	inline static int32_t get_offset_of_floatArray_16() { return static_cast<int32_t>(offsetof(DragonBonesData_t2FD2911DD33EA22A2F8A6D2075530ECDD7AC15AD, ___floatArray_16)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get_floatArray_16() const { return ___floatArray_16; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of_floatArray_16() { return &___floatArray_16; }
	inline void set_floatArray_16(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		___floatArray_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___floatArray_16), (void*)value);
	}

	inline static int32_t get_offset_of_frameIntArray_17() { return static_cast<int32_t>(offsetof(DragonBonesData_t2FD2911DD33EA22A2F8A6D2075530ECDD7AC15AD, ___frameIntArray_17)); }
	inline Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* get_frameIntArray_17() const { return ___frameIntArray_17; }
	inline Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28** get_address_of_frameIntArray_17() { return &___frameIntArray_17; }
	inline void set_frameIntArray_17(Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* value)
	{
		___frameIntArray_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___frameIntArray_17), (void*)value);
	}

	inline static int32_t get_offset_of_frameFloatArray_18() { return static_cast<int32_t>(offsetof(DragonBonesData_t2FD2911DD33EA22A2F8A6D2075530ECDD7AC15AD, ___frameFloatArray_18)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get_frameFloatArray_18() const { return ___frameFloatArray_18; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of_frameFloatArray_18() { return &___frameFloatArray_18; }
	inline void set_frameFloatArray_18(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		___frameFloatArray_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___frameFloatArray_18), (void*)value);
	}

	inline static int32_t get_offset_of_frameArray_19() { return static_cast<int32_t>(offsetof(DragonBonesData_t2FD2911DD33EA22A2F8A6D2075530ECDD7AC15AD, ___frameArray_19)); }
	inline Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* get_frameArray_19() const { return ___frameArray_19; }
	inline Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28** get_address_of_frameArray_19() { return &___frameArray_19; }
	inline void set_frameArray_19(Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* value)
	{
		___frameArray_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___frameArray_19), (void*)value);
	}

	inline static int32_t get_offset_of_timelineArray_20() { return static_cast<int32_t>(offsetof(DragonBonesData_t2FD2911DD33EA22A2F8A6D2075530ECDD7AC15AD, ___timelineArray_20)); }
	inline UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E* get_timelineArray_20() const { return ___timelineArray_20; }
	inline UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E** get_address_of_timelineArray_20() { return &___timelineArray_20; }
	inline void set_timelineArray_20(UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E* value)
	{
		___timelineArray_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___timelineArray_20), (void*)value);
	}

	inline static int32_t get_offset_of_userData_21() { return static_cast<int32_t>(offsetof(DragonBonesData_t2FD2911DD33EA22A2F8A6D2075530ECDD7AC15AD, ___userData_21)); }
	inline UserData_tFE97B68B9A6056E7F067E49635C2AF83B3303640 * get_userData_21() const { return ___userData_21; }
	inline UserData_tFE97B68B9A6056E7F067E49635C2AF83B3303640 ** get_address_of_userData_21() { return &___userData_21; }
	inline void set_userData_21(UserData_tFE97B68B9A6056E7F067E49635C2AF83B3303640 * value)
	{
		___userData_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___userData_21), (void*)value);
	}
};


// DragonBones.EventObject
struct  EventObject_t92F7B286A8AB858F6ED37C3CCF8C7EB6A850891C  : public BaseObject_t5B96E4C6A273473F5F2676C8B69EE180B6D8364D
{
public:
	// System.Single DragonBones.EventObject::time
	float ___time_14;
	// System.String DragonBones.EventObject::type
	String_t* ___type_15;
	// System.String DragonBones.EventObject::name
	String_t* ___name_16;
	// DragonBones.Armature DragonBones.EventObject::armature
	Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B * ___armature_17;
	// DragonBones.Bone DragonBones.EventObject::bone
	Bone_tAFFFF52723C77703DAB65D003E9A418C2766C809 * ___bone_18;
	// DragonBones.Slot DragonBones.EventObject::slot
	Slot_t9D06B371824C1B67E43A10A17D18BC3EF71E3867 * ___slot_19;
	// DragonBones.AnimationState DragonBones.EventObject::animationState
	AnimationState_tBA6EAAD27D56DD26A61304C93676C337EB761238 * ___animationState_20;
	// DragonBones.UserData DragonBones.EventObject::data
	UserData_tFE97B68B9A6056E7F067E49635C2AF83B3303640 * ___data_21;

public:
	inline static int32_t get_offset_of_time_14() { return static_cast<int32_t>(offsetof(EventObject_t92F7B286A8AB858F6ED37C3CCF8C7EB6A850891C, ___time_14)); }
	inline float get_time_14() const { return ___time_14; }
	inline float* get_address_of_time_14() { return &___time_14; }
	inline void set_time_14(float value)
	{
		___time_14 = value;
	}

	inline static int32_t get_offset_of_type_15() { return static_cast<int32_t>(offsetof(EventObject_t92F7B286A8AB858F6ED37C3CCF8C7EB6A850891C, ___type_15)); }
	inline String_t* get_type_15() const { return ___type_15; }
	inline String_t** get_address_of_type_15() { return &___type_15; }
	inline void set_type_15(String_t* value)
	{
		___type_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___type_15), (void*)value);
	}

	inline static int32_t get_offset_of_name_16() { return static_cast<int32_t>(offsetof(EventObject_t92F7B286A8AB858F6ED37C3CCF8C7EB6A850891C, ___name_16)); }
	inline String_t* get_name_16() const { return ___name_16; }
	inline String_t** get_address_of_name_16() { return &___name_16; }
	inline void set_name_16(String_t* value)
	{
		___name_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_16), (void*)value);
	}

	inline static int32_t get_offset_of_armature_17() { return static_cast<int32_t>(offsetof(EventObject_t92F7B286A8AB858F6ED37C3CCF8C7EB6A850891C, ___armature_17)); }
	inline Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B * get_armature_17() const { return ___armature_17; }
	inline Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B ** get_address_of_armature_17() { return &___armature_17; }
	inline void set_armature_17(Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B * value)
	{
		___armature_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___armature_17), (void*)value);
	}

	inline static int32_t get_offset_of_bone_18() { return static_cast<int32_t>(offsetof(EventObject_t92F7B286A8AB858F6ED37C3CCF8C7EB6A850891C, ___bone_18)); }
	inline Bone_tAFFFF52723C77703DAB65D003E9A418C2766C809 * get_bone_18() const { return ___bone_18; }
	inline Bone_tAFFFF52723C77703DAB65D003E9A418C2766C809 ** get_address_of_bone_18() { return &___bone_18; }
	inline void set_bone_18(Bone_tAFFFF52723C77703DAB65D003E9A418C2766C809 * value)
	{
		___bone_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bone_18), (void*)value);
	}

	inline static int32_t get_offset_of_slot_19() { return static_cast<int32_t>(offsetof(EventObject_t92F7B286A8AB858F6ED37C3CCF8C7EB6A850891C, ___slot_19)); }
	inline Slot_t9D06B371824C1B67E43A10A17D18BC3EF71E3867 * get_slot_19() const { return ___slot_19; }
	inline Slot_t9D06B371824C1B67E43A10A17D18BC3EF71E3867 ** get_address_of_slot_19() { return &___slot_19; }
	inline void set_slot_19(Slot_t9D06B371824C1B67E43A10A17D18BC3EF71E3867 * value)
	{
		___slot_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___slot_19), (void*)value);
	}

	inline static int32_t get_offset_of_animationState_20() { return static_cast<int32_t>(offsetof(EventObject_t92F7B286A8AB858F6ED37C3CCF8C7EB6A850891C, ___animationState_20)); }
	inline AnimationState_tBA6EAAD27D56DD26A61304C93676C337EB761238 * get_animationState_20() const { return ___animationState_20; }
	inline AnimationState_tBA6EAAD27D56DD26A61304C93676C337EB761238 ** get_address_of_animationState_20() { return &___animationState_20; }
	inline void set_animationState_20(AnimationState_tBA6EAAD27D56DD26A61304C93676C337EB761238 * value)
	{
		___animationState_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___animationState_20), (void*)value);
	}

	inline static int32_t get_offset_of_data_21() { return static_cast<int32_t>(offsetof(EventObject_t92F7B286A8AB858F6ED37C3CCF8C7EB6A850891C, ___data_21)); }
	inline UserData_tFE97B68B9A6056E7F067E49635C2AF83B3303640 * get_data_21() const { return ___data_21; }
	inline UserData_tFE97B68B9A6056E7F067E49635C2AF83B3303640 ** get_address_of_data_21() { return &___data_21; }
	inline void set_data_21(UserData_tFE97B68B9A6056E7F067E49635C2AF83B3303640 * value)
	{
		___data_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_21), (void*)value);
	}
};


// DragonBones.SkinData
struct  SkinData_t4A40D94C41796F66FDC9D9EDC4179A56CE3E8D43  : public BaseObject_t5B96E4C6A273473F5F2676C8B69EE180B6D8364D
{
public:
	// System.String DragonBones.SkinData::name
	String_t* ___name_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<DragonBones.DisplayData>> DragonBones.SkinData::displays
	Dictionary_2_t51E58D43386A00E8D6E65AE99EBE0C81025E6108 * ___displays_6;
	// DragonBones.ArmatureData DragonBones.SkinData::parent
	ArmatureData_tC9AAFB92908EDD32B5EBC30FFFE4D518EA64FC9C * ___parent_7;

public:
	inline static int32_t get_offset_of_name_5() { return static_cast<int32_t>(offsetof(SkinData_t4A40D94C41796F66FDC9D9EDC4179A56CE3E8D43, ___name_5)); }
	inline String_t* get_name_5() const { return ___name_5; }
	inline String_t** get_address_of_name_5() { return &___name_5; }
	inline void set_name_5(String_t* value)
	{
		___name_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_5), (void*)value);
	}

	inline static int32_t get_offset_of_displays_6() { return static_cast<int32_t>(offsetof(SkinData_t4A40D94C41796F66FDC9D9EDC4179A56CE3E8D43, ___displays_6)); }
	inline Dictionary_2_t51E58D43386A00E8D6E65AE99EBE0C81025E6108 * get_displays_6() const { return ___displays_6; }
	inline Dictionary_2_t51E58D43386A00E8D6E65AE99EBE0C81025E6108 ** get_address_of_displays_6() { return &___displays_6; }
	inline void set_displays_6(Dictionary_2_t51E58D43386A00E8D6E65AE99EBE0C81025E6108 * value)
	{
		___displays_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___displays_6), (void*)value);
	}

	inline static int32_t get_offset_of_parent_7() { return static_cast<int32_t>(offsetof(SkinData_t4A40D94C41796F66FDC9D9EDC4179A56CE3E8D43, ___parent_7)); }
	inline ArmatureData_tC9AAFB92908EDD32B5EBC30FFFE4D518EA64FC9C * get_parent_7() const { return ___parent_7; }
	inline ArmatureData_tC9AAFB92908EDD32B5EBC30FFFE4D518EA64FC9C ** get_address_of_parent_7() { return &___parent_7; }
	inline void set_parent_7(ArmatureData_tC9AAFB92908EDD32B5EBC30FFFE4D518EA64FC9C * value)
	{
		___parent_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_7), (void*)value);
	}
};


// DragonBones.TransformObject
struct  TransformObject_t5E60702D2A905146006F63D15443CCD42AB5136A  : public BaseObject_t5B96E4C6A273473F5F2676C8B69EE180B6D8364D
{
public:
	// DragonBones.Matrix DragonBones.TransformObject::globalTransformMatrix
	Matrix_t038C4B16C47630C3863AC754653CCAC74C71753C * ___globalTransformMatrix_8;
	// DragonBones.Transform DragonBones.TransformObject::global
	Transform_tE7D42961E6A4F1135373F19306753C2F35947B15 * ___global_9;
	// DragonBones.Transform DragonBones.TransformObject::offset
	Transform_tE7D42961E6A4F1135373F19306753C2F35947B15 * ___offset_10;
	// DragonBones.Transform DragonBones.TransformObject::origin
	Transform_tE7D42961E6A4F1135373F19306753C2F35947B15 * ___origin_11;
	// System.Object DragonBones.TransformObject::userData
	RuntimeObject * ___userData_12;
	// System.Boolean DragonBones.TransformObject::_globalDirty
	bool ____globalDirty_13;
	// DragonBones.Armature DragonBones.TransformObject::_armature
	Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B * ____armature_14;
	// DragonBones.Bone DragonBones.TransformObject::_parent
	Bone_tAFFFF52723C77703DAB65D003E9A418C2766C809 * ____parent_15;

public:
	inline static int32_t get_offset_of_globalTransformMatrix_8() { return static_cast<int32_t>(offsetof(TransformObject_t5E60702D2A905146006F63D15443CCD42AB5136A, ___globalTransformMatrix_8)); }
	inline Matrix_t038C4B16C47630C3863AC754653CCAC74C71753C * get_globalTransformMatrix_8() const { return ___globalTransformMatrix_8; }
	inline Matrix_t038C4B16C47630C3863AC754653CCAC74C71753C ** get_address_of_globalTransformMatrix_8() { return &___globalTransformMatrix_8; }
	inline void set_globalTransformMatrix_8(Matrix_t038C4B16C47630C3863AC754653CCAC74C71753C * value)
	{
		___globalTransformMatrix_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___globalTransformMatrix_8), (void*)value);
	}

	inline static int32_t get_offset_of_global_9() { return static_cast<int32_t>(offsetof(TransformObject_t5E60702D2A905146006F63D15443CCD42AB5136A, ___global_9)); }
	inline Transform_tE7D42961E6A4F1135373F19306753C2F35947B15 * get_global_9() const { return ___global_9; }
	inline Transform_tE7D42961E6A4F1135373F19306753C2F35947B15 ** get_address_of_global_9() { return &___global_9; }
	inline void set_global_9(Transform_tE7D42961E6A4F1135373F19306753C2F35947B15 * value)
	{
		___global_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___global_9), (void*)value);
	}

	inline static int32_t get_offset_of_offset_10() { return static_cast<int32_t>(offsetof(TransformObject_t5E60702D2A905146006F63D15443CCD42AB5136A, ___offset_10)); }
	inline Transform_tE7D42961E6A4F1135373F19306753C2F35947B15 * get_offset_10() const { return ___offset_10; }
	inline Transform_tE7D42961E6A4F1135373F19306753C2F35947B15 ** get_address_of_offset_10() { return &___offset_10; }
	inline void set_offset_10(Transform_tE7D42961E6A4F1135373F19306753C2F35947B15 * value)
	{
		___offset_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___offset_10), (void*)value);
	}

	inline static int32_t get_offset_of_origin_11() { return static_cast<int32_t>(offsetof(TransformObject_t5E60702D2A905146006F63D15443CCD42AB5136A, ___origin_11)); }
	inline Transform_tE7D42961E6A4F1135373F19306753C2F35947B15 * get_origin_11() const { return ___origin_11; }
	inline Transform_tE7D42961E6A4F1135373F19306753C2F35947B15 ** get_address_of_origin_11() { return &___origin_11; }
	inline void set_origin_11(Transform_tE7D42961E6A4F1135373F19306753C2F35947B15 * value)
	{
		___origin_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___origin_11), (void*)value);
	}

	inline static int32_t get_offset_of_userData_12() { return static_cast<int32_t>(offsetof(TransformObject_t5E60702D2A905146006F63D15443CCD42AB5136A, ___userData_12)); }
	inline RuntimeObject * get_userData_12() const { return ___userData_12; }
	inline RuntimeObject ** get_address_of_userData_12() { return &___userData_12; }
	inline void set_userData_12(RuntimeObject * value)
	{
		___userData_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___userData_12), (void*)value);
	}

	inline static int32_t get_offset_of__globalDirty_13() { return static_cast<int32_t>(offsetof(TransformObject_t5E60702D2A905146006F63D15443CCD42AB5136A, ____globalDirty_13)); }
	inline bool get__globalDirty_13() const { return ____globalDirty_13; }
	inline bool* get_address_of__globalDirty_13() { return &____globalDirty_13; }
	inline void set__globalDirty_13(bool value)
	{
		____globalDirty_13 = value;
	}

	inline static int32_t get_offset_of__armature_14() { return static_cast<int32_t>(offsetof(TransformObject_t5E60702D2A905146006F63D15443CCD42AB5136A, ____armature_14)); }
	inline Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B * get__armature_14() const { return ____armature_14; }
	inline Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B ** get_address_of__armature_14() { return &____armature_14; }
	inline void set__armature_14(Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B * value)
	{
		____armature_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____armature_14), (void*)value);
	}

	inline static int32_t get_offset_of__parent_15() { return static_cast<int32_t>(offsetof(TransformObject_t5E60702D2A905146006F63D15443CCD42AB5136A, ____parent_15)); }
	inline Bone_tAFFFF52723C77703DAB65D003E9A418C2766C809 * get__parent_15() const { return ____parent_15; }
	inline Bone_tAFFFF52723C77703DAB65D003E9A418C2766C809 ** get_address_of__parent_15() { return &____parent_15; }
	inline void set__parent_15(Bone_tAFFFF52723C77703DAB65D003E9A418C2766C809 * value)
	{
		____parent_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____parent_15), (void*)value);
	}
};

struct TransformObject_t5E60702D2A905146006F63D15443CCD42AB5136A_StaticFields
{
public:
	// DragonBones.Matrix DragonBones.TransformObject::_helpMatrix
	Matrix_t038C4B16C47630C3863AC754653CCAC74C71753C * ____helpMatrix_5;
	// DragonBones.Transform DragonBones.TransformObject::_helpTransform
	Transform_tE7D42961E6A4F1135373F19306753C2F35947B15 * ____helpTransform_6;
	// DragonBones.Point DragonBones.TransformObject::_helpPoint
	Point_t1E70618D353D86C776CB6EC3412FB2FDA6A736CB * ____helpPoint_7;

public:
	inline static int32_t get_offset_of__helpMatrix_5() { return static_cast<int32_t>(offsetof(TransformObject_t5E60702D2A905146006F63D15443CCD42AB5136A_StaticFields, ____helpMatrix_5)); }
	inline Matrix_t038C4B16C47630C3863AC754653CCAC74C71753C * get__helpMatrix_5() const { return ____helpMatrix_5; }
	inline Matrix_t038C4B16C47630C3863AC754653CCAC74C71753C ** get_address_of__helpMatrix_5() { return &____helpMatrix_5; }
	inline void set__helpMatrix_5(Matrix_t038C4B16C47630C3863AC754653CCAC74C71753C * value)
	{
		____helpMatrix_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpMatrix_5), (void*)value);
	}

	inline static int32_t get_offset_of__helpTransform_6() { return static_cast<int32_t>(offsetof(TransformObject_t5E60702D2A905146006F63D15443CCD42AB5136A_StaticFields, ____helpTransform_6)); }
	inline Transform_tE7D42961E6A4F1135373F19306753C2F35947B15 * get__helpTransform_6() const { return ____helpTransform_6; }
	inline Transform_tE7D42961E6A4F1135373F19306753C2F35947B15 ** get_address_of__helpTransform_6() { return &____helpTransform_6; }
	inline void set__helpTransform_6(Transform_tE7D42961E6A4F1135373F19306753C2F35947B15 * value)
	{
		____helpTransform_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpTransform_6), (void*)value);
	}

	inline static int32_t get_offset_of__helpPoint_7() { return static_cast<int32_t>(offsetof(TransformObject_t5E60702D2A905146006F63D15443CCD42AB5136A_StaticFields, ____helpPoint_7)); }
	inline Point_t1E70618D353D86C776CB6EC3412FB2FDA6A736CB * get__helpPoint_7() const { return ____helpPoint_7; }
	inline Point_t1E70618D353D86C776CB6EC3412FB2FDA6A736CB ** get_address_of__helpPoint_7() { return &____helpPoint_7; }
	inline void set__helpPoint_7(Point_t1E70618D353D86C776CB6EC3412FB2FDA6A736CB * value)
	{
		____helpPoint_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpPoint_7), (void*)value);
	}
};


// DragonBones.UnityFactory
struct  UnityFactory_t170550F12743A129F88E7D1990F607AB2B35C102  : public BaseFactory_t0F351C3165BC3FF44834228E47FA2AF75DEB546F
{
public:
	// UnityEngine.GameObject DragonBones.UnityFactory::_armatureGameObject
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ____armatureGameObject_12;
	// System.Boolean DragonBones.UnityFactory::_isUGUI
	bool ____isUGUI_13;
	// System.Collections.Generic.List`1<DragonBones.UnityDragonBonesData> DragonBones.UnityFactory::_cacheUnityDragonBonesData
	List_1_t5BE5E40F9280D5F0193D1BCAAEF3964F3DA9FCEE * ____cacheUnityDragonBonesData_14;

public:
	inline static int32_t get_offset_of__armatureGameObject_12() { return static_cast<int32_t>(offsetof(UnityFactory_t170550F12743A129F88E7D1990F607AB2B35C102, ____armatureGameObject_12)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get__armatureGameObject_12() const { return ____armatureGameObject_12; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of__armatureGameObject_12() { return &____armatureGameObject_12; }
	inline void set__armatureGameObject_12(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		____armatureGameObject_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____armatureGameObject_12), (void*)value);
	}

	inline static int32_t get_offset_of__isUGUI_13() { return static_cast<int32_t>(offsetof(UnityFactory_t170550F12743A129F88E7D1990F607AB2B35C102, ____isUGUI_13)); }
	inline bool get__isUGUI_13() const { return ____isUGUI_13; }
	inline bool* get_address_of__isUGUI_13() { return &____isUGUI_13; }
	inline void set__isUGUI_13(bool value)
	{
		____isUGUI_13 = value;
	}

	inline static int32_t get_offset_of__cacheUnityDragonBonesData_14() { return static_cast<int32_t>(offsetof(UnityFactory_t170550F12743A129F88E7D1990F607AB2B35C102, ____cacheUnityDragonBonesData_14)); }
	inline List_1_t5BE5E40F9280D5F0193D1BCAAEF3964F3DA9FCEE * get__cacheUnityDragonBonesData_14() const { return ____cacheUnityDragonBonesData_14; }
	inline List_1_t5BE5E40F9280D5F0193D1BCAAEF3964F3DA9FCEE ** get_address_of__cacheUnityDragonBonesData_14() { return &____cacheUnityDragonBonesData_14; }
	inline void set__cacheUnityDragonBonesData_14(List_1_t5BE5E40F9280D5F0193D1BCAAEF3964F3DA9FCEE * value)
	{
		____cacheUnityDragonBonesData_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____cacheUnityDragonBonesData_14), (void*)value);
	}
};

struct UnityFactory_t170550F12743A129F88E7D1990F607AB2B35C102_StaticFields
{
public:
	// DragonBones.DragonBones DragonBones.UnityFactory::_dragonBonesInstance
	DragonBones_t0C03E4E28174F02190B3E3F3E998AF4889E0DE51 * ____dragonBonesInstance_9;
	// DragonBones.UnityFactory DragonBones.UnityFactory::_factory
	UnityFactory_t170550F12743A129F88E7D1990F607AB2B35C102 * ____factory_10;
	// UnityEngine.GameObject DragonBones.UnityFactory::_gameObject
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ____gameObject_11;

public:
	inline static int32_t get_offset_of__dragonBonesInstance_9() { return static_cast<int32_t>(offsetof(UnityFactory_t170550F12743A129F88E7D1990F607AB2B35C102_StaticFields, ____dragonBonesInstance_9)); }
	inline DragonBones_t0C03E4E28174F02190B3E3F3E998AF4889E0DE51 * get__dragonBonesInstance_9() const { return ____dragonBonesInstance_9; }
	inline DragonBones_t0C03E4E28174F02190B3E3F3E998AF4889E0DE51 ** get_address_of__dragonBonesInstance_9() { return &____dragonBonesInstance_9; }
	inline void set__dragonBonesInstance_9(DragonBones_t0C03E4E28174F02190B3E3F3E998AF4889E0DE51 * value)
	{
		____dragonBonesInstance_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dragonBonesInstance_9), (void*)value);
	}

	inline static int32_t get_offset_of__factory_10() { return static_cast<int32_t>(offsetof(UnityFactory_t170550F12743A129F88E7D1990F607AB2B35C102_StaticFields, ____factory_10)); }
	inline UnityFactory_t170550F12743A129F88E7D1990F607AB2B35C102 * get__factory_10() const { return ____factory_10; }
	inline UnityFactory_t170550F12743A129F88E7D1990F607AB2B35C102 ** get_address_of__factory_10() { return &____factory_10; }
	inline void set__factory_10(UnityFactory_t170550F12743A129F88E7D1990F607AB2B35C102 * value)
	{
		____factory_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____factory_10), (void*)value);
	}

	inline static int32_t get_offset_of__gameObject_11() { return static_cast<int32_t>(offsetof(UnityFactory_t170550F12743A129F88E7D1990F607AB2B35C102_StaticFields, ____gameObject_11)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get__gameObject_11() const { return ____gameObject_11; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of__gameObject_11() { return &____gameObject_11; }
	inline void set__gameObject_11(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		____gameObject_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____gameObject_11), (void*)value);
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


// System.Collections.Generic.List`1_Enumerator<System.Object>
struct  Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___list_0)); }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * get_list_0() const { return ___list_0; }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1_Enumerator<UnityEngine.Purchasing.IAPButton>
struct  Enumerator_t9F37D65DD7E6FB43E324D936089DEA44EB811D3F 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t4EA118A9AAEF1F1654837150C244FCF20A2612C6 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	IAPButton_t1BDE7DF230194C47716F1AD10806094D8DE39CD9 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t9F37D65DD7E6FB43E324D936089DEA44EB811D3F, ___list_0)); }
	inline List_1_t4EA118A9AAEF1F1654837150C244FCF20A2612C6 * get_list_0() const { return ___list_0; }
	inline List_1_t4EA118A9AAEF1F1654837150C244FCF20A2612C6 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t4EA118A9AAEF1F1654837150C244FCF20A2612C6 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t9F37D65DD7E6FB43E324D936089DEA44EB811D3F, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t9F37D65DD7E6FB43E324D936089DEA44EB811D3F, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t9F37D65DD7E6FB43E324D936089DEA44EB811D3F, ___current_3)); }
	inline IAPButton_t1BDE7DF230194C47716F1AD10806094D8DE39CD9 * get_current_3() const { return ___current_3; }
	inline IAPButton_t1BDE7DF230194C47716F1AD10806094D8DE39CD9 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(IAPButton_t1BDE7DF230194C47716F1AD10806094D8DE39CD9 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1_Enumerator<UnityEngine.Purchasing.IAPListener>
struct  Enumerator_tAF6ACB804093D6ABEB02CDA6CBCD447DCA1C49E9 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t9AAA1568B76F8B92C93DB49A597240F9DEEE5E40 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	IAPListener_tA8E5B3850C466201C221D95CF74A9BEA7DC74E61 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tAF6ACB804093D6ABEB02CDA6CBCD447DCA1C49E9, ___list_0)); }
	inline List_1_t9AAA1568B76F8B92C93DB49A597240F9DEEE5E40 * get_list_0() const { return ___list_0; }
	inline List_1_t9AAA1568B76F8B92C93DB49A597240F9DEEE5E40 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t9AAA1568B76F8B92C93DB49A597240F9DEEE5E40 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tAF6ACB804093D6ABEB02CDA6CBCD447DCA1C49E9, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tAF6ACB804093D6ABEB02CDA6CBCD447DCA1C49E9, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tAF6ACB804093D6ABEB02CDA6CBCD447DCA1C49E9, ___current_3)); }
	inline IAPListener_tA8E5B3850C466201C221D95CF74A9BEA7DC74E61 * get_current_3() const { return ___current_3; }
	inline IAPListener_tA8E5B3850C466201C221D95CF74A9BEA7DC74E61 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(IAPListener_tA8E5B3850C466201C221D95CF74A9BEA7DC74E61 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
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

// System.IO.TextReader
struct  TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A  : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF
{
public:

public:
};

struct TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A_StaticFields
{
public:
	// System.Func`2<System.Object,System.String> System.IO.TextReader::_ReadLineDelegate
	Func_2_t44B347E67E515867D995E8BD5EFD67FA88CE53CF * ____ReadLineDelegate_1;
	// System.Func`2<System.Object,System.Int32> System.IO.TextReader::_ReadDelegate
	Func_2_t8B2DA3FB30280CE3D92F50E9CCAACEE4828789A6 * ____ReadDelegate_2;
	// System.IO.TextReader System.IO.TextReader::Null
	TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A * ___Null_3;

public:
	inline static int32_t get_offset_of__ReadLineDelegate_1() { return static_cast<int32_t>(offsetof(TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A_StaticFields, ____ReadLineDelegate_1)); }
	inline Func_2_t44B347E67E515867D995E8BD5EFD67FA88CE53CF * get__ReadLineDelegate_1() const { return ____ReadLineDelegate_1; }
	inline Func_2_t44B347E67E515867D995E8BD5EFD67FA88CE53CF ** get_address_of__ReadLineDelegate_1() { return &____ReadLineDelegate_1; }
	inline void set__ReadLineDelegate_1(Func_2_t44B347E67E515867D995E8BD5EFD67FA88CE53CF * value)
	{
		____ReadLineDelegate_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ReadLineDelegate_1), (void*)value);
	}

	inline static int32_t get_offset_of__ReadDelegate_2() { return static_cast<int32_t>(offsetof(TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A_StaticFields, ____ReadDelegate_2)); }
	inline Func_2_t8B2DA3FB30280CE3D92F50E9CCAACEE4828789A6 * get__ReadDelegate_2() const { return ____ReadDelegate_2; }
	inline Func_2_t8B2DA3FB30280CE3D92F50E9CCAACEE4828789A6 ** get_address_of__ReadDelegate_2() { return &____ReadDelegate_2; }
	inline void set__ReadDelegate_2(Func_2_t8B2DA3FB30280CE3D92F50E9CCAACEE4828789A6 * value)
	{
		____ReadDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ReadDelegate_2), (void*)value);
	}

	inline static int32_t get_offset_of_Null_3() { return static_cast<int32_t>(offsetof(TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A_StaticFields, ___Null_3)); }
	inline TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A * get_Null_3() const { return ___Null_3; }
	inline TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A ** get_address_of_Null_3() { return &___Null_3; }
	inline void set_Null_3(TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A * value)
	{
		___Null_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_3), (void*)value);
	}
};


// System.Int16
struct  Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
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


// System.SByte
struct  SByte_t9070AEA2966184235653CB9B4D33B149CDA831DF 
{
public:
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(SByte_t9070AEA2966184235653CB9B4D33B149CDA831DF, ___m_value_0)); }
	inline int8_t get_m_value_0() const { return ___m_value_0; }
	inline int8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int8_t value)
	{
		___m_value_0 = value;
	}
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


// System.UInt16
struct  UInt16_tAE45CEF73BF720100519F6867F32145D075F928E 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_tAE45CEF73BF720100519F6867F32145D075F928E, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
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


// UnityEngine.Color
struct  Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 
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
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.Events.UnityEvent
struct  UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<UnityEngine.Purchasing.Product>
struct  UnityEvent_1_tEE1A2CFF07DB130E94E8EDC3B16BD99927EFCB0B  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_tEE1A2CFF07DB130E94E8EDC3B16BD99927EFCB0B, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`2<UnityEngine.Purchasing.Product,UnityEngine.Purchasing.PurchaseFailureReason>
struct  UnityEvent_2_t303E7F876F93A36ED8E5DCA060E96AA6E2C8FAD5  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`2::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_2_t303E7F876F93A36ED8E5DCA060E96AA6E2C8FAD5, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Matrix4x4
struct  Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA 
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
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___identityMatrix_17 = value;
	}
};


// UnityEngine.UI.SpriteState
struct  SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A, ___m_HighlightedSprite_0)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A, ___m_PressedSprite_1)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A, ___m_SelectedSprite_2)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A, ___m_DisabledSprite_3)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A_marshaled_pinvoke
{
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_HighlightedSprite_0;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_PressedSprite_1;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_SelectedSprite_2;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A_marshaled_com
{
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_HighlightedSprite_0;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_PressedSprite_1;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_SelectedSprite_2;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_DisabledSprite_3;
};

// UnityEngine.Vector2
struct  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.WaitForSecondsRealtime
struct  WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739  : public CustomYieldInstruction_t819BB0973AFF22766749FF087B8AEFEAF3C2CB7D
{
public:
	// System.Single UnityEngine.WaitForSecondsRealtime::<waitTime>k__BackingField
	float ___U3CwaitTimeU3Ek__BackingField_0;
	// System.Single UnityEngine.WaitForSecondsRealtime::m_WaitUntilTime
	float ___m_WaitUntilTime_1;

public:
	inline static int32_t get_offset_of_U3CwaitTimeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739, ___U3CwaitTimeU3Ek__BackingField_0)); }
	inline float get_U3CwaitTimeU3Ek__BackingField_0() const { return ___U3CwaitTimeU3Ek__BackingField_0; }
	inline float* get_address_of_U3CwaitTimeU3Ek__BackingField_0() { return &___U3CwaitTimeU3Ek__BackingField_0; }
	inline void set_U3CwaitTimeU3Ek__BackingField_0(float value)
	{
		___U3CwaitTimeU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_WaitUntilTime_1() { return static_cast<int32_t>(offsetof(WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739, ___m_WaitUntilTime_1)); }
	inline float get_m_WaitUntilTime_1() const { return ___m_WaitUntilTime_1; }
	inline float* get_address_of_m_WaitUntilTime_1() { return &___m_WaitUntilTime_1; }
	inline void set_m_WaitUntilTime_1(float value)
	{
		___m_WaitUntilTime_1 = value;
	}
};


// DragonBones.AnimationFadeOutMode
struct  AnimationFadeOutMode_tC9D3FA9886AF42B424EE284577110B19D5D41848 
{
public:
	// System.Int32 DragonBones.AnimationFadeOutMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AnimationFadeOutMode_tC9D3FA9886AF42B424EE284577110B19D5D41848, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DragonBones.ArmatureType
struct  ArmatureType_t51D9758B8797BAF4160C75EE5D49C0B0214AF8D7 
{
public:
	// System.Int32 DragonBones.ArmatureType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ArmatureType_t51D9758B8797BAF4160C75EE5D49C0B0214AF8D7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DragonBones.BlendMode
struct  BlendMode_tF98BD5ECCAFC5BB42120F2B897B587668721F7DD 
{
public:
	// System.Int32 DragonBones.BlendMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BlendMode_tF98BD5ECCAFC5BB42120F2B897B587668721F7DD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DragonBones.OffsetMode
struct  OffsetMode_t659E508BABC71DE076B594CF10E3B9D5973B1625 
{
public:
	// System.Int32 DragonBones.OffsetMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(OffsetMode_t659E508BABC71DE076B594CF10E3B9D5973B1625, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DragonBones.SortingMode
struct  SortingMode_t75B2CAA7316AB216AC37893935C0D04932AA71C7 
{
public:
	// System.Int32 DragonBones.SortingMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SortingMode_t75B2CAA7316AB216AC37893935C0D04932AA71C7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// MiniJSON.Json_Parser_TOKEN
struct  TOKEN_t611CAAC521A195C4E4DDFC8905E84958DD9C46DC 
{
public:
	// System.Int32 MiniJSON.Json_Parser_TOKEN::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TOKEN_t611CAAC521A195C4E4DDFC8905E84958DD9C46DC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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

// System.Globalization.NumberStyles
struct  NumberStyles_tB0ADA2D9CCAA236331AED14C42BE5832B2351592 
{
public:
	// System.Int32 System.Globalization.NumberStyles::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NumberStyles_tB0ADA2D9CCAA236331AED14C42BE5832B2351592, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.StringReader
struct  StringReader_t3095DEB3D26F40D1A7F9B76835D80AFE70E47E12  : public TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A
{
public:
	// System.String System.IO.StringReader::_s
	String_t* ____s_4;
	// System.Int32 System.IO.StringReader::_pos
	int32_t ____pos_5;
	// System.Int32 System.IO.StringReader::_length
	int32_t ____length_6;

public:
	inline static int32_t get_offset_of__s_4() { return static_cast<int32_t>(offsetof(StringReader_t3095DEB3D26F40D1A7F9B76835D80AFE70E47E12, ____s_4)); }
	inline String_t* get__s_4() const { return ____s_4; }
	inline String_t** get_address_of__s_4() { return &____s_4; }
	inline void set__s_4(String_t* value)
	{
		____s_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____s_4), (void*)value);
	}

	inline static int32_t get_offset_of__pos_5() { return static_cast<int32_t>(offsetof(StringReader_t3095DEB3D26F40D1A7F9B76835D80AFE70E47E12, ____pos_5)); }
	inline int32_t get__pos_5() const { return ____pos_5; }
	inline int32_t* get_address_of__pos_5() { return &____pos_5; }
	inline void set__pos_5(int32_t value)
	{
		____pos_5 = value;
	}

	inline static int32_t get_offset_of__length_6() { return static_cast<int32_t>(offsetof(StringReader_t3095DEB3D26F40D1A7F9B76835D80AFE70E47E12, ____length_6)); }
	inline int32_t get__length_6() const { return ____length_6; }
	inline int32_t* get_address_of__length_6() { return &____length_6; }
	inline void set__length_6(int32_t value)
	{
		____length_6 = value;
	}
};


// System.Int32Enum
struct  Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Coroutine
struct  Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC  : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshaled_pinvoke : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshaled_com : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.KeyCode
struct  KeyCode_tC93EA87C5A6901160B583ADFCD3EF6726570DC3C 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_tC93EA87C5A6901160B583ADFCD3EF6726570DC3C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Purchasing.AppStore
struct  AppStore_t98816CE645A6185E397B8651B2FF17713F309647 
{
public:
	// System.Int32 UnityEngine.Purchasing.AppStore::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AppStore_t98816CE645A6185E397B8651B2FF17713F309647, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Purchasing.FakeStoreUIMode
struct  FakeStoreUIMode_tC06B49F620F8C8103028EA922A973AB15F3A9148 
{
public:
	// System.Int32 UnityEngine.Purchasing.FakeStoreUIMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FakeStoreUIMode_tC06B49F620F8C8103028EA922A973AB15F3A9148, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Purchasing.IAPButton_ButtonType
struct  ButtonType_t5C1BEBDE03F52E77BCC3C4F66279087D81E12663 
{
public:
	// System.Int32 UnityEngine.Purchasing.IAPButton_ButtonType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ButtonType_t5C1BEBDE03F52E77BCC3C4F66279087D81E12663, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Purchasing.IAPButton_OnPurchaseCompletedEvent
struct  OnPurchaseCompletedEvent_tE1F6B944B4FED7F7744C50608F2A02E711C82BB5  : public UnityEvent_1_tEE1A2CFF07DB130E94E8EDC3B16BD99927EFCB0B
{
public:

public:
};


// UnityEngine.Purchasing.IAPButton_OnPurchaseFailedEvent
struct  OnPurchaseFailedEvent_t12785B755627F44DD9D18B1141669474E76083E9  : public UnityEvent_2_t303E7F876F93A36ED8E5DCA060E96AA6E2C8FAD5
{
public:

public:
};


// UnityEngine.Purchasing.IAPListener_OnPurchaseCompletedEvent
struct  OnPurchaseCompletedEvent_t69F2AA7C2E6305881C5030EEE41E4EBCD72B08C4  : public UnityEvent_1_tEE1A2CFF07DB130E94E8EDC3B16BD99927EFCB0B
{
public:

public:
};


// UnityEngine.Purchasing.IAPListener_OnPurchaseFailedEvent
struct  OnPurchaseFailedEvent_tBE41AD846CDA9B343E1C212C291326AF0B98B026  : public UnityEvent_2_t303E7F876F93A36ED8E5DCA060E96AA6E2C8FAD5
{
public:

public:
};


// UnityEngine.Purchasing.InitializationFailureReason
struct  InitializationFailureReason_t5A6284D67FA09D301793E67D8B7003299F4D3062 
{
public:
	// System.Int32 UnityEngine.Purchasing.InitializationFailureReason::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InitializationFailureReason_t5A6284D67FA09D301793E67D8B7003299F4D3062, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Purchasing.PayoutType
struct  PayoutType_t8339B08FE90A51DFE9311B97B42AD56DE7C8636B 
{
public:
	// System.Int32 UnityEngine.Purchasing.PayoutType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PayoutType_t8339B08FE90A51DFE9311B97B42AD56DE7C8636B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Purchasing.ProductMetadata
struct  ProductMetadata_t1CAA912963F8B24B34F53CCF29A6E0BD89B33B48  : public RuntimeObject
{
public:
	// System.String UnityEngine.Purchasing.ProductMetadata::<localizedPriceString>k__BackingField
	String_t* ___U3ClocalizedPriceStringU3Ek__BackingField_0;
	// System.String UnityEngine.Purchasing.ProductMetadata::<localizedTitle>k__BackingField
	String_t* ___U3ClocalizedTitleU3Ek__BackingField_1;
	// System.String UnityEngine.Purchasing.ProductMetadata::<localizedDescription>k__BackingField
	String_t* ___U3ClocalizedDescriptionU3Ek__BackingField_2;
	// System.String UnityEngine.Purchasing.ProductMetadata::<isoCurrencyCode>k__BackingField
	String_t* ___U3CisoCurrencyCodeU3Ek__BackingField_3;
	// System.Decimal UnityEngine.Purchasing.ProductMetadata::<localizedPrice>k__BackingField
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___U3ClocalizedPriceU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3ClocalizedPriceStringU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ProductMetadata_t1CAA912963F8B24B34F53CCF29A6E0BD89B33B48, ___U3ClocalizedPriceStringU3Ek__BackingField_0)); }
	inline String_t* get_U3ClocalizedPriceStringU3Ek__BackingField_0() const { return ___U3ClocalizedPriceStringU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3ClocalizedPriceStringU3Ek__BackingField_0() { return &___U3ClocalizedPriceStringU3Ek__BackingField_0; }
	inline void set_U3ClocalizedPriceStringU3Ek__BackingField_0(String_t* value)
	{
		___U3ClocalizedPriceStringU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ClocalizedPriceStringU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3ClocalizedTitleU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ProductMetadata_t1CAA912963F8B24B34F53CCF29A6E0BD89B33B48, ___U3ClocalizedTitleU3Ek__BackingField_1)); }
	inline String_t* get_U3ClocalizedTitleU3Ek__BackingField_1() const { return ___U3ClocalizedTitleU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3ClocalizedTitleU3Ek__BackingField_1() { return &___U3ClocalizedTitleU3Ek__BackingField_1; }
	inline void set_U3ClocalizedTitleU3Ek__BackingField_1(String_t* value)
	{
		___U3ClocalizedTitleU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ClocalizedTitleU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3ClocalizedDescriptionU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ProductMetadata_t1CAA912963F8B24B34F53CCF29A6E0BD89B33B48, ___U3ClocalizedDescriptionU3Ek__BackingField_2)); }
	inline String_t* get_U3ClocalizedDescriptionU3Ek__BackingField_2() const { return ___U3ClocalizedDescriptionU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3ClocalizedDescriptionU3Ek__BackingField_2() { return &___U3ClocalizedDescriptionU3Ek__BackingField_2; }
	inline void set_U3ClocalizedDescriptionU3Ek__BackingField_2(String_t* value)
	{
		___U3ClocalizedDescriptionU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ClocalizedDescriptionU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CisoCurrencyCodeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ProductMetadata_t1CAA912963F8B24B34F53CCF29A6E0BD89B33B48, ___U3CisoCurrencyCodeU3Ek__BackingField_3)); }
	inline String_t* get_U3CisoCurrencyCodeU3Ek__BackingField_3() const { return ___U3CisoCurrencyCodeU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CisoCurrencyCodeU3Ek__BackingField_3() { return &___U3CisoCurrencyCodeU3Ek__BackingField_3; }
	inline void set_U3CisoCurrencyCodeU3Ek__BackingField_3(String_t* value)
	{
		___U3CisoCurrencyCodeU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CisoCurrencyCodeU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3ClocalizedPriceU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ProductMetadata_t1CAA912963F8B24B34F53CCF29A6E0BD89B33B48, ___U3ClocalizedPriceU3Ek__BackingField_4)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_U3ClocalizedPriceU3Ek__BackingField_4() const { return ___U3ClocalizedPriceU3Ek__BackingField_4; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_U3ClocalizedPriceU3Ek__BackingField_4() { return &___U3ClocalizedPriceU3Ek__BackingField_4; }
	inline void set_U3ClocalizedPriceU3Ek__BackingField_4(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___U3ClocalizedPriceU3Ek__BackingField_4 = value;
	}
};


// UnityEngine.Purchasing.ProductType
struct  ProductType_tC52C3BA25156195ACF6AE97650D056434BD51075 
{
public:
	// System.Int32 UnityEngine.Purchasing.ProductType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ProductType_tC52C3BA25156195ACF6AE97650D056434BD51075, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Purchasing.PurchaseFailureReason
struct  PurchaseFailureReason_t42EC65C1103B27F82198DC42C8D96C1A14ED7432 
{
public:
	// System.Int32 UnityEngine.Purchasing.PurchaseFailureReason::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PurchaseFailureReason_t42EC65C1103B27F82198DC42C8D96C1A14ED7432, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Purchasing.PurchaseProcessingResult
struct  PurchaseProcessingResult_tD6C3A87FC6F83D8D9133EDA9D1938FC51DFC35E3 
{
public:
	// System.Int32 UnityEngine.Purchasing.PurchaseProcessingResult::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PurchaseProcessingResult_tD6C3A87FC6F83D8D9133EDA9D1938FC51DFC35E3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Purchasing.RestoreTransactionIDState
struct  RestoreTransactionIDState_t0DF2877BA8BC86EBC5E3CAF5A25818A08D0A10ED 
{
public:
	// System.Int32 UnityEngine.Purchasing.RestoreTransactionIDState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RestoreTransactionIDState_t0DF2877BA8BC86EBC5E3CAF5A25818A08D0A10ED, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.RuntimePlatform
struct  RuntimePlatform_tD5F5737C1BBBCBB115EB104DF2B7876387E80132 
{
public:
	// System.Int32 UnityEngine.RuntimePlatform::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RuntimePlatform_tD5F5737C1BBBCBB115EB104DF2B7876387E80132, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Button_ButtonClickedEvent
struct  ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB  : public UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F
{
public:

public:
};


// UnityEngine.UI.ColorBlock
struct  ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_NormalColor_0)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_HighlightedColor_1)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_PressedColor_2)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_SelectedColor_3)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_DisabledColor_4)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};


// UnityEngine.UI.Navigation_Mode
struct  Mode_t93F92BD50B147AE38D82BA33FA77FD247A59FE26 
{
public:
	// System.Int32 UnityEngine.UI.Navigation_Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t93F92BD50B147AE38D82BA33FA77FD247A59FE26, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Selectable_Transition
struct  Transition_tA9261C608B54C52324084A0B080E7A3E0548A181 
{
public:
	// System.Int32 UnityEngine.UI.Selectable_Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_tA9261C608B54C52324084A0B080E7A3E0548A181, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DragonBones.ArmatureData
struct  ArmatureData_tC9AAFB92908EDD32B5EBC30FFFE4D518EA64FC9C  : public BaseObject_t5B96E4C6A273473F5F2676C8B69EE180B6D8364D
{
public:
	// DragonBones.ArmatureType DragonBones.ArmatureData::type
	int32_t ___type_5;
	// System.UInt32 DragonBones.ArmatureData::frameRate
	uint32_t ___frameRate_6;
	// System.UInt32 DragonBones.ArmatureData::cacheFrameRate
	uint32_t ___cacheFrameRate_7;
	// System.Single DragonBones.ArmatureData::scale
	float ___scale_8;
	// System.String DragonBones.ArmatureData::name
	String_t* ___name_9;
	// DragonBones.Rectangle DragonBones.ArmatureData::aabb
	Rectangle_tD04A320077702E7EF472AB11E43BF19C4F51D0A3 * ___aabb_10;
	// System.Collections.Generic.List`1<System.String> DragonBones.ArmatureData::animationNames
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___animationNames_11;
	// System.Collections.Generic.List`1<DragonBones.BoneData> DragonBones.ArmatureData::sortedBones
	List_1_t053F953DD17F39D2C3F2CE25546EF2B26A57A9A6 * ___sortedBones_12;
	// System.Collections.Generic.List`1<DragonBones.SlotData> DragonBones.ArmatureData::sortedSlots
	List_1_t174EBD04B31FA10DF20B3061075FB69062E0CB5A * ___sortedSlots_13;
	// System.Collections.Generic.List`1<DragonBones.ActionData> DragonBones.ArmatureData::defaultActions
	List_1_tF9CD8A25990AB08F6C8668905F99E9F5AB6CAB87 * ___defaultActions_14;
	// System.Collections.Generic.List`1<DragonBones.ActionData> DragonBones.ArmatureData::actions
	List_1_tF9CD8A25990AB08F6C8668905F99E9F5AB6CAB87 * ___actions_15;
	// System.Collections.Generic.Dictionary`2<System.String,DragonBones.BoneData> DragonBones.ArmatureData::bones
	Dictionary_2_tB9A35A98DA4C96C5FDB6A361B171699E22B11675 * ___bones_16;
	// System.Collections.Generic.Dictionary`2<System.String,DragonBones.SlotData> DragonBones.ArmatureData::slots
	Dictionary_2_t097C016CF9530F77CD8ADCCEACEA648913A6763A * ___slots_17;
	// System.Collections.Generic.Dictionary`2<System.String,DragonBones.ConstraintData> DragonBones.ArmatureData::constraints
	Dictionary_2_t94A1848DDBD7F62C2B0C9888B820DEC9BC5D5657 * ___constraints_18;
	// System.Collections.Generic.Dictionary`2<System.String,DragonBones.SkinData> DragonBones.ArmatureData::skins
	Dictionary_2_t9FBB9B83FE6C146508E7214E535234CCE1D04ECE * ___skins_19;
	// System.Collections.Generic.Dictionary`2<System.String,DragonBones.AnimationData> DragonBones.ArmatureData::animations
	Dictionary_2_t9DC56FBD75D7C88B3298977239D5FC6DC6B5C526 * ___animations_20;
	// DragonBones.SkinData DragonBones.ArmatureData::defaultSkin
	SkinData_t4A40D94C41796F66FDC9D9EDC4179A56CE3E8D43 * ___defaultSkin_21;
	// DragonBones.AnimationData DragonBones.ArmatureData::defaultAnimation
	AnimationData_t4AD4F64C03ACE899A5CF12139232927E0DAB4770 * ___defaultAnimation_22;
	// DragonBones.CanvasData DragonBones.ArmatureData::canvas
	CanvasData_t86BE43F334AC7763A86ED2586FC42F28341CD866 * ___canvas_23;
	// DragonBones.UserData DragonBones.ArmatureData::userData
	UserData_tFE97B68B9A6056E7F067E49635C2AF83B3303640 * ___userData_24;
	// DragonBones.DragonBonesData DragonBones.ArmatureData::parent
	DragonBonesData_t2FD2911DD33EA22A2F8A6D2075530ECDD7AC15AD * ___parent_25;

public:
	inline static int32_t get_offset_of_type_5() { return static_cast<int32_t>(offsetof(ArmatureData_tC9AAFB92908EDD32B5EBC30FFFE4D518EA64FC9C, ___type_5)); }
	inline int32_t get_type_5() const { return ___type_5; }
	inline int32_t* get_address_of_type_5() { return &___type_5; }
	inline void set_type_5(int32_t value)
	{
		___type_5 = value;
	}

	inline static int32_t get_offset_of_frameRate_6() { return static_cast<int32_t>(offsetof(ArmatureData_tC9AAFB92908EDD32B5EBC30FFFE4D518EA64FC9C, ___frameRate_6)); }
	inline uint32_t get_frameRate_6() const { return ___frameRate_6; }
	inline uint32_t* get_address_of_frameRate_6() { return &___frameRate_6; }
	inline void set_frameRate_6(uint32_t value)
	{
		___frameRate_6 = value;
	}

	inline static int32_t get_offset_of_cacheFrameRate_7() { return static_cast<int32_t>(offsetof(ArmatureData_tC9AAFB92908EDD32B5EBC30FFFE4D518EA64FC9C, ___cacheFrameRate_7)); }
	inline uint32_t get_cacheFrameRate_7() const { return ___cacheFrameRate_7; }
	inline uint32_t* get_address_of_cacheFrameRate_7() { return &___cacheFrameRate_7; }
	inline void set_cacheFrameRate_7(uint32_t value)
	{
		___cacheFrameRate_7 = value;
	}

	inline static int32_t get_offset_of_scale_8() { return static_cast<int32_t>(offsetof(ArmatureData_tC9AAFB92908EDD32B5EBC30FFFE4D518EA64FC9C, ___scale_8)); }
	inline float get_scale_8() const { return ___scale_8; }
	inline float* get_address_of_scale_8() { return &___scale_8; }
	inline void set_scale_8(float value)
	{
		___scale_8 = value;
	}

	inline static int32_t get_offset_of_name_9() { return static_cast<int32_t>(offsetof(ArmatureData_tC9AAFB92908EDD32B5EBC30FFFE4D518EA64FC9C, ___name_9)); }
	inline String_t* get_name_9() const { return ___name_9; }
	inline String_t** get_address_of_name_9() { return &___name_9; }
	inline void set_name_9(String_t* value)
	{
		___name_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_9), (void*)value);
	}

	inline static int32_t get_offset_of_aabb_10() { return static_cast<int32_t>(offsetof(ArmatureData_tC9AAFB92908EDD32B5EBC30FFFE4D518EA64FC9C, ___aabb_10)); }
	inline Rectangle_tD04A320077702E7EF472AB11E43BF19C4F51D0A3 * get_aabb_10() const { return ___aabb_10; }
	inline Rectangle_tD04A320077702E7EF472AB11E43BF19C4F51D0A3 ** get_address_of_aabb_10() { return &___aabb_10; }
	inline void set_aabb_10(Rectangle_tD04A320077702E7EF472AB11E43BF19C4F51D0A3 * value)
	{
		___aabb_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___aabb_10), (void*)value);
	}

	inline static int32_t get_offset_of_animationNames_11() { return static_cast<int32_t>(offsetof(ArmatureData_tC9AAFB92908EDD32B5EBC30FFFE4D518EA64FC9C, ___animationNames_11)); }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * get_animationNames_11() const { return ___animationNames_11; }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 ** get_address_of_animationNames_11() { return &___animationNames_11; }
	inline void set_animationNames_11(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * value)
	{
		___animationNames_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___animationNames_11), (void*)value);
	}

	inline static int32_t get_offset_of_sortedBones_12() { return static_cast<int32_t>(offsetof(ArmatureData_tC9AAFB92908EDD32B5EBC30FFFE4D518EA64FC9C, ___sortedBones_12)); }
	inline List_1_t053F953DD17F39D2C3F2CE25546EF2B26A57A9A6 * get_sortedBones_12() const { return ___sortedBones_12; }
	inline List_1_t053F953DD17F39D2C3F2CE25546EF2B26A57A9A6 ** get_address_of_sortedBones_12() { return &___sortedBones_12; }
	inline void set_sortedBones_12(List_1_t053F953DD17F39D2C3F2CE25546EF2B26A57A9A6 * value)
	{
		___sortedBones_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sortedBones_12), (void*)value);
	}

	inline static int32_t get_offset_of_sortedSlots_13() { return static_cast<int32_t>(offsetof(ArmatureData_tC9AAFB92908EDD32B5EBC30FFFE4D518EA64FC9C, ___sortedSlots_13)); }
	inline List_1_t174EBD04B31FA10DF20B3061075FB69062E0CB5A * get_sortedSlots_13() const { return ___sortedSlots_13; }
	inline List_1_t174EBD04B31FA10DF20B3061075FB69062E0CB5A ** get_address_of_sortedSlots_13() { return &___sortedSlots_13; }
	inline void set_sortedSlots_13(List_1_t174EBD04B31FA10DF20B3061075FB69062E0CB5A * value)
	{
		___sortedSlots_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sortedSlots_13), (void*)value);
	}

	inline static int32_t get_offset_of_defaultActions_14() { return static_cast<int32_t>(offsetof(ArmatureData_tC9AAFB92908EDD32B5EBC30FFFE4D518EA64FC9C, ___defaultActions_14)); }
	inline List_1_tF9CD8A25990AB08F6C8668905F99E9F5AB6CAB87 * get_defaultActions_14() const { return ___defaultActions_14; }
	inline List_1_tF9CD8A25990AB08F6C8668905F99E9F5AB6CAB87 ** get_address_of_defaultActions_14() { return &___defaultActions_14; }
	inline void set_defaultActions_14(List_1_tF9CD8A25990AB08F6C8668905F99E9F5AB6CAB87 * value)
	{
		___defaultActions_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultActions_14), (void*)value);
	}

	inline static int32_t get_offset_of_actions_15() { return static_cast<int32_t>(offsetof(ArmatureData_tC9AAFB92908EDD32B5EBC30FFFE4D518EA64FC9C, ___actions_15)); }
	inline List_1_tF9CD8A25990AB08F6C8668905F99E9F5AB6CAB87 * get_actions_15() const { return ___actions_15; }
	inline List_1_tF9CD8A25990AB08F6C8668905F99E9F5AB6CAB87 ** get_address_of_actions_15() { return &___actions_15; }
	inline void set_actions_15(List_1_tF9CD8A25990AB08F6C8668905F99E9F5AB6CAB87 * value)
	{
		___actions_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___actions_15), (void*)value);
	}

	inline static int32_t get_offset_of_bones_16() { return static_cast<int32_t>(offsetof(ArmatureData_tC9AAFB92908EDD32B5EBC30FFFE4D518EA64FC9C, ___bones_16)); }
	inline Dictionary_2_tB9A35A98DA4C96C5FDB6A361B171699E22B11675 * get_bones_16() const { return ___bones_16; }
	inline Dictionary_2_tB9A35A98DA4C96C5FDB6A361B171699E22B11675 ** get_address_of_bones_16() { return &___bones_16; }
	inline void set_bones_16(Dictionary_2_tB9A35A98DA4C96C5FDB6A361B171699E22B11675 * value)
	{
		___bones_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bones_16), (void*)value);
	}

	inline static int32_t get_offset_of_slots_17() { return static_cast<int32_t>(offsetof(ArmatureData_tC9AAFB92908EDD32B5EBC30FFFE4D518EA64FC9C, ___slots_17)); }
	inline Dictionary_2_t097C016CF9530F77CD8ADCCEACEA648913A6763A * get_slots_17() const { return ___slots_17; }
	inline Dictionary_2_t097C016CF9530F77CD8ADCCEACEA648913A6763A ** get_address_of_slots_17() { return &___slots_17; }
	inline void set_slots_17(Dictionary_2_t097C016CF9530F77CD8ADCCEACEA648913A6763A * value)
	{
		___slots_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___slots_17), (void*)value);
	}

	inline static int32_t get_offset_of_constraints_18() { return static_cast<int32_t>(offsetof(ArmatureData_tC9AAFB92908EDD32B5EBC30FFFE4D518EA64FC9C, ___constraints_18)); }
	inline Dictionary_2_t94A1848DDBD7F62C2B0C9888B820DEC9BC5D5657 * get_constraints_18() const { return ___constraints_18; }
	inline Dictionary_2_t94A1848DDBD7F62C2B0C9888B820DEC9BC5D5657 ** get_address_of_constraints_18() { return &___constraints_18; }
	inline void set_constraints_18(Dictionary_2_t94A1848DDBD7F62C2B0C9888B820DEC9BC5D5657 * value)
	{
		___constraints_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___constraints_18), (void*)value);
	}

	inline static int32_t get_offset_of_skins_19() { return static_cast<int32_t>(offsetof(ArmatureData_tC9AAFB92908EDD32B5EBC30FFFE4D518EA64FC9C, ___skins_19)); }
	inline Dictionary_2_t9FBB9B83FE6C146508E7214E535234CCE1D04ECE * get_skins_19() const { return ___skins_19; }
	inline Dictionary_2_t9FBB9B83FE6C146508E7214E535234CCE1D04ECE ** get_address_of_skins_19() { return &___skins_19; }
	inline void set_skins_19(Dictionary_2_t9FBB9B83FE6C146508E7214E535234CCE1D04ECE * value)
	{
		___skins_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___skins_19), (void*)value);
	}

	inline static int32_t get_offset_of_animations_20() { return static_cast<int32_t>(offsetof(ArmatureData_tC9AAFB92908EDD32B5EBC30FFFE4D518EA64FC9C, ___animations_20)); }
	inline Dictionary_2_t9DC56FBD75D7C88B3298977239D5FC6DC6B5C526 * get_animations_20() const { return ___animations_20; }
	inline Dictionary_2_t9DC56FBD75D7C88B3298977239D5FC6DC6B5C526 ** get_address_of_animations_20() { return &___animations_20; }
	inline void set_animations_20(Dictionary_2_t9DC56FBD75D7C88B3298977239D5FC6DC6B5C526 * value)
	{
		___animations_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___animations_20), (void*)value);
	}

	inline static int32_t get_offset_of_defaultSkin_21() { return static_cast<int32_t>(offsetof(ArmatureData_tC9AAFB92908EDD32B5EBC30FFFE4D518EA64FC9C, ___defaultSkin_21)); }
	inline SkinData_t4A40D94C41796F66FDC9D9EDC4179A56CE3E8D43 * get_defaultSkin_21() const { return ___defaultSkin_21; }
	inline SkinData_t4A40D94C41796F66FDC9D9EDC4179A56CE3E8D43 ** get_address_of_defaultSkin_21() { return &___defaultSkin_21; }
	inline void set_defaultSkin_21(SkinData_t4A40D94C41796F66FDC9D9EDC4179A56CE3E8D43 * value)
	{
		___defaultSkin_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultSkin_21), (void*)value);
	}

	inline static int32_t get_offset_of_defaultAnimation_22() { return static_cast<int32_t>(offsetof(ArmatureData_tC9AAFB92908EDD32B5EBC30FFFE4D518EA64FC9C, ___defaultAnimation_22)); }
	inline AnimationData_t4AD4F64C03ACE899A5CF12139232927E0DAB4770 * get_defaultAnimation_22() const { return ___defaultAnimation_22; }
	inline AnimationData_t4AD4F64C03ACE899A5CF12139232927E0DAB4770 ** get_address_of_defaultAnimation_22() { return &___defaultAnimation_22; }
	inline void set_defaultAnimation_22(AnimationData_t4AD4F64C03ACE899A5CF12139232927E0DAB4770 * value)
	{
		___defaultAnimation_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultAnimation_22), (void*)value);
	}

	inline static int32_t get_offset_of_canvas_23() { return static_cast<int32_t>(offsetof(ArmatureData_tC9AAFB92908EDD32B5EBC30FFFE4D518EA64FC9C, ___canvas_23)); }
	inline CanvasData_t86BE43F334AC7763A86ED2586FC42F28341CD866 * get_canvas_23() const { return ___canvas_23; }
	inline CanvasData_t86BE43F334AC7763A86ED2586FC42F28341CD866 ** get_address_of_canvas_23() { return &___canvas_23; }
	inline void set_canvas_23(CanvasData_t86BE43F334AC7763A86ED2586FC42F28341CD866 * value)
	{
		___canvas_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___canvas_23), (void*)value);
	}

	inline static int32_t get_offset_of_userData_24() { return static_cast<int32_t>(offsetof(ArmatureData_tC9AAFB92908EDD32B5EBC30FFFE4D518EA64FC9C, ___userData_24)); }
	inline UserData_tFE97B68B9A6056E7F067E49635C2AF83B3303640 * get_userData_24() const { return ___userData_24; }
	inline UserData_tFE97B68B9A6056E7F067E49635C2AF83B3303640 ** get_address_of_userData_24() { return &___userData_24; }
	inline void set_userData_24(UserData_tFE97B68B9A6056E7F067E49635C2AF83B3303640 * value)
	{
		___userData_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___userData_24), (void*)value);
	}

	inline static int32_t get_offset_of_parent_25() { return static_cast<int32_t>(offsetof(ArmatureData_tC9AAFB92908EDD32B5EBC30FFFE4D518EA64FC9C, ___parent_25)); }
	inline DragonBonesData_t2FD2911DD33EA22A2F8A6D2075530ECDD7AC15AD * get_parent_25() const { return ___parent_25; }
	inline DragonBonesData_t2FD2911DD33EA22A2F8A6D2075530ECDD7AC15AD ** get_address_of_parent_25() { return &___parent_25; }
	inline void set_parent_25(DragonBonesData_t2FD2911DD33EA22A2F8A6D2075530ECDD7AC15AD * value)
	{
		___parent_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_25), (void*)value);
	}
};


// DragonBones.Bone
struct  Bone_tAFFFF52723C77703DAB65D003E9A418C2766C809  : public TransformObject_t5E60702D2A905146006F63D15443CCD42AB5136A
{
public:
	// DragonBones.OffsetMode DragonBones.Bone::offsetMode
	int32_t ___offsetMode_16;
	// DragonBones.Transform DragonBones.Bone::animationPose
	Transform_tE7D42961E6A4F1135373F19306753C2F35947B15 * ___animationPose_17;
	// System.Boolean DragonBones.Bone::_transformDirty
	bool ____transformDirty_18;
	// System.Boolean DragonBones.Bone::_childrenTransformDirty
	bool ____childrenTransformDirty_19;
	// System.Boolean DragonBones.Bone::_blendDirty
	bool ____blendDirty_20;
	// System.Boolean DragonBones.Bone::_localDirty
	bool ____localDirty_21;
	// System.Boolean DragonBones.Bone::_hasConstraint
	bool ____hasConstraint_22;
	// System.Boolean DragonBones.Bone::_visible
	bool ____visible_23;
	// System.Int32 DragonBones.Bone::_cachedFrameIndex
	int32_t ____cachedFrameIndex_24;
	// System.Int32 DragonBones.Bone::_blendLayer
	int32_t ____blendLayer_25;
	// System.Single DragonBones.Bone::_blendLeftWeight
	float ____blendLeftWeight_26;
	// System.Single DragonBones.Bone::_blendLayerWeight
	float ____blendLayerWeight_27;
	// DragonBones.BoneData DragonBones.Bone::_boneData
	BoneData_t27EE0FCE6786A38FF5694460EFD5D9C86A893EDF * ____boneData_28;
	// System.Collections.Generic.List`1<System.Int32> DragonBones.Bone::_cachedFrameIndices
	List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * ____cachedFrameIndices_29;

public:
	inline static int32_t get_offset_of_offsetMode_16() { return static_cast<int32_t>(offsetof(Bone_tAFFFF52723C77703DAB65D003E9A418C2766C809, ___offsetMode_16)); }
	inline int32_t get_offsetMode_16() const { return ___offsetMode_16; }
	inline int32_t* get_address_of_offsetMode_16() { return &___offsetMode_16; }
	inline void set_offsetMode_16(int32_t value)
	{
		___offsetMode_16 = value;
	}

	inline static int32_t get_offset_of_animationPose_17() { return static_cast<int32_t>(offsetof(Bone_tAFFFF52723C77703DAB65D003E9A418C2766C809, ___animationPose_17)); }
	inline Transform_tE7D42961E6A4F1135373F19306753C2F35947B15 * get_animationPose_17() const { return ___animationPose_17; }
	inline Transform_tE7D42961E6A4F1135373F19306753C2F35947B15 ** get_address_of_animationPose_17() { return &___animationPose_17; }
	inline void set_animationPose_17(Transform_tE7D42961E6A4F1135373F19306753C2F35947B15 * value)
	{
		___animationPose_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___animationPose_17), (void*)value);
	}

	inline static int32_t get_offset_of__transformDirty_18() { return static_cast<int32_t>(offsetof(Bone_tAFFFF52723C77703DAB65D003E9A418C2766C809, ____transformDirty_18)); }
	inline bool get__transformDirty_18() const { return ____transformDirty_18; }
	inline bool* get_address_of__transformDirty_18() { return &____transformDirty_18; }
	inline void set__transformDirty_18(bool value)
	{
		____transformDirty_18 = value;
	}

	inline static int32_t get_offset_of__childrenTransformDirty_19() { return static_cast<int32_t>(offsetof(Bone_tAFFFF52723C77703DAB65D003E9A418C2766C809, ____childrenTransformDirty_19)); }
	inline bool get__childrenTransformDirty_19() const { return ____childrenTransformDirty_19; }
	inline bool* get_address_of__childrenTransformDirty_19() { return &____childrenTransformDirty_19; }
	inline void set__childrenTransformDirty_19(bool value)
	{
		____childrenTransformDirty_19 = value;
	}

	inline static int32_t get_offset_of__blendDirty_20() { return static_cast<int32_t>(offsetof(Bone_tAFFFF52723C77703DAB65D003E9A418C2766C809, ____blendDirty_20)); }
	inline bool get__blendDirty_20() const { return ____blendDirty_20; }
	inline bool* get_address_of__blendDirty_20() { return &____blendDirty_20; }
	inline void set__blendDirty_20(bool value)
	{
		____blendDirty_20 = value;
	}

	inline static int32_t get_offset_of__localDirty_21() { return static_cast<int32_t>(offsetof(Bone_tAFFFF52723C77703DAB65D003E9A418C2766C809, ____localDirty_21)); }
	inline bool get__localDirty_21() const { return ____localDirty_21; }
	inline bool* get_address_of__localDirty_21() { return &____localDirty_21; }
	inline void set__localDirty_21(bool value)
	{
		____localDirty_21 = value;
	}

	inline static int32_t get_offset_of__hasConstraint_22() { return static_cast<int32_t>(offsetof(Bone_tAFFFF52723C77703DAB65D003E9A418C2766C809, ____hasConstraint_22)); }
	inline bool get__hasConstraint_22() const { return ____hasConstraint_22; }
	inline bool* get_address_of__hasConstraint_22() { return &____hasConstraint_22; }
	inline void set__hasConstraint_22(bool value)
	{
		____hasConstraint_22 = value;
	}

	inline static int32_t get_offset_of__visible_23() { return static_cast<int32_t>(offsetof(Bone_tAFFFF52723C77703DAB65D003E9A418C2766C809, ____visible_23)); }
	inline bool get__visible_23() const { return ____visible_23; }
	inline bool* get_address_of__visible_23() { return &____visible_23; }
	inline void set__visible_23(bool value)
	{
		____visible_23 = value;
	}

	inline static int32_t get_offset_of__cachedFrameIndex_24() { return static_cast<int32_t>(offsetof(Bone_tAFFFF52723C77703DAB65D003E9A418C2766C809, ____cachedFrameIndex_24)); }
	inline int32_t get__cachedFrameIndex_24() const { return ____cachedFrameIndex_24; }
	inline int32_t* get_address_of__cachedFrameIndex_24() { return &____cachedFrameIndex_24; }
	inline void set__cachedFrameIndex_24(int32_t value)
	{
		____cachedFrameIndex_24 = value;
	}

	inline static int32_t get_offset_of__blendLayer_25() { return static_cast<int32_t>(offsetof(Bone_tAFFFF52723C77703DAB65D003E9A418C2766C809, ____blendLayer_25)); }
	inline int32_t get__blendLayer_25() const { return ____blendLayer_25; }
	inline int32_t* get_address_of__blendLayer_25() { return &____blendLayer_25; }
	inline void set__blendLayer_25(int32_t value)
	{
		____blendLayer_25 = value;
	}

	inline static int32_t get_offset_of__blendLeftWeight_26() { return static_cast<int32_t>(offsetof(Bone_tAFFFF52723C77703DAB65D003E9A418C2766C809, ____blendLeftWeight_26)); }
	inline float get__blendLeftWeight_26() const { return ____blendLeftWeight_26; }
	inline float* get_address_of__blendLeftWeight_26() { return &____blendLeftWeight_26; }
	inline void set__blendLeftWeight_26(float value)
	{
		____blendLeftWeight_26 = value;
	}

	inline static int32_t get_offset_of__blendLayerWeight_27() { return static_cast<int32_t>(offsetof(Bone_tAFFFF52723C77703DAB65D003E9A418C2766C809, ____blendLayerWeight_27)); }
	inline float get__blendLayerWeight_27() const { return ____blendLayerWeight_27; }
	inline float* get_address_of__blendLayerWeight_27() { return &____blendLayerWeight_27; }
	inline void set__blendLayerWeight_27(float value)
	{
		____blendLayerWeight_27 = value;
	}

	inline static int32_t get_offset_of__boneData_28() { return static_cast<int32_t>(offsetof(Bone_tAFFFF52723C77703DAB65D003E9A418C2766C809, ____boneData_28)); }
	inline BoneData_t27EE0FCE6786A38FF5694460EFD5D9C86A893EDF * get__boneData_28() const { return ____boneData_28; }
	inline BoneData_t27EE0FCE6786A38FF5694460EFD5D9C86A893EDF ** get_address_of__boneData_28() { return &____boneData_28; }
	inline void set__boneData_28(BoneData_t27EE0FCE6786A38FF5694460EFD5D9C86A893EDF * value)
	{
		____boneData_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____boneData_28), (void*)value);
	}

	inline static int32_t get_offset_of__cachedFrameIndices_29() { return static_cast<int32_t>(offsetof(Bone_tAFFFF52723C77703DAB65D003E9A418C2766C809, ____cachedFrameIndices_29)); }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * get__cachedFrameIndices_29() const { return ____cachedFrameIndices_29; }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 ** get_address_of__cachedFrameIndices_29() { return &____cachedFrameIndices_29; }
	inline void set__cachedFrameIndices_29(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * value)
	{
		____cachedFrameIndices_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____cachedFrameIndices_29), (void*)value);
	}
};


// DragonBones.Slot
struct  Slot_t9D06B371824C1B67E43A10A17D18BC3EF71E3867  : public TransformObject_t5E60702D2A905146006F63D15443CCD42AB5136A
{
public:
	// System.String DragonBones.Slot::displayController
	String_t* ___displayController_16;
	// System.Boolean DragonBones.Slot::_displayDirty
	bool ____displayDirty_17;
	// System.Boolean DragonBones.Slot::_zOrderDirty
	bool ____zOrderDirty_18;
	// System.Boolean DragonBones.Slot::_visibleDirty
	bool ____visibleDirty_19;
	// System.Boolean DragonBones.Slot::_blendModeDirty
	bool ____blendModeDirty_20;
	// System.Boolean DragonBones.Slot::_colorDirty
	bool ____colorDirty_21;
	// System.Boolean DragonBones.Slot::_meshDirty
	bool ____meshDirty_22;
	// System.Boolean DragonBones.Slot::_transformDirty
	bool ____transformDirty_23;
	// System.Boolean DragonBones.Slot::_skinedMeshTransformDirty
	bool ____skinedMeshTransformDirty_24;
	// System.Boolean DragonBones.Slot::_visible
	bool ____visible_25;
	// DragonBones.BlendMode DragonBones.Slot::_blendMode
	int32_t ____blendMode_26;
	// System.Int32 DragonBones.Slot::_displayIndex
	int32_t ____displayIndex_27;
	// System.Int32 DragonBones.Slot::_animationDisplayIndex
	int32_t ____animationDisplayIndex_28;
	// System.Int32 DragonBones.Slot::_zOrder
	int32_t ____zOrder_29;
	// System.Int32 DragonBones.Slot::_cachedFrameIndex
	int32_t ____cachedFrameIndex_30;
	// System.Single DragonBones.Slot::_pivotX
	float ____pivotX_31;
	// System.Single DragonBones.Slot::_pivotY
	float ____pivotY_32;
	// DragonBones.Matrix DragonBones.Slot::_localMatrix
	Matrix_t038C4B16C47630C3863AC754653CCAC74C71753C * ____localMatrix_33;
	// DragonBones.ColorTransform DragonBones.Slot::_colorTransform
	ColorTransform_t18DB7F60BCC055213D32EFB3EE0638632438118B * ____colorTransform_34;
	// System.Collections.Generic.List`1<System.Single> DragonBones.Slot::_ffdVertices
	List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 * ____ffdVertices_35;
	// System.Collections.Generic.List`1<DragonBones.DisplayData> DragonBones.Slot::_displayDatas
	List_1_t99FE96A26AAAEE3550BDBF65F567EB6CAD932825 * ____displayDatas_36;
	// System.Collections.Generic.List`1<System.Object> DragonBones.Slot::_displayList
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ____displayList_37;
	// System.Collections.Generic.List`1<DragonBones.Bone> DragonBones.Slot::_meshBones
	List_1_tB9E7FBF958A1675741FDD4B0929B4137E0C5DA17 * ____meshBones_38;
	// DragonBones.SlotData DragonBones.Slot::_slotData
	SlotData_t50C28020EC5517A3F467C8E08E65551F47415B75 * ____slotData_39;
	// System.Collections.Generic.List`1<DragonBones.DisplayData> DragonBones.Slot::_rawDisplayDatas
	List_1_t99FE96A26AAAEE3550BDBF65F567EB6CAD932825 * ____rawDisplayDatas_40;
	// DragonBones.DisplayData DragonBones.Slot::_displayData
	DisplayData_tB52C373BB02142D693D77D78CB19A7FEC5D6592A * ____displayData_41;
	// DragonBones.TextureData DragonBones.Slot::_textureData
	TextureData_tE9C849854E0194DB7DF7175F5F6E6C403BDB9281 * ____textureData_42;
	// DragonBones.MeshDisplayData DragonBones.Slot::_meshData
	MeshDisplayData_t9DE60F833D98CE7E7FCE3000BC4278C5DF09F6F1 * ____meshData_43;
	// DragonBones.BoundingBoxData DragonBones.Slot::_boundingBoxData
	BoundingBoxData_tEE6787555F5BF2F62E5A540D400A6AE3AC537671 * ____boundingBoxData_44;
	// System.Object DragonBones.Slot::_rawDisplay
	RuntimeObject * ____rawDisplay_45;
	// System.Object DragonBones.Slot::_meshDisplay
	RuntimeObject * ____meshDisplay_46;
	// System.Object DragonBones.Slot::_display
	RuntimeObject * ____display_47;
	// DragonBones.Armature DragonBones.Slot::_childArmature
	Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B * ____childArmature_48;
	// System.Collections.Generic.List`1<System.Int32> DragonBones.Slot::_cachedFrameIndices
	List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * ____cachedFrameIndices_49;

public:
	inline static int32_t get_offset_of_displayController_16() { return static_cast<int32_t>(offsetof(Slot_t9D06B371824C1B67E43A10A17D18BC3EF71E3867, ___displayController_16)); }
	inline String_t* get_displayController_16() const { return ___displayController_16; }
	inline String_t** get_address_of_displayController_16() { return &___displayController_16; }
	inline void set_displayController_16(String_t* value)
	{
		___displayController_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___displayController_16), (void*)value);
	}

	inline static int32_t get_offset_of__displayDirty_17() { return static_cast<int32_t>(offsetof(Slot_t9D06B371824C1B67E43A10A17D18BC3EF71E3867, ____displayDirty_17)); }
	inline bool get__displayDirty_17() const { return ____displayDirty_17; }
	inline bool* get_address_of__displayDirty_17() { return &____displayDirty_17; }
	inline void set__displayDirty_17(bool value)
	{
		____displayDirty_17 = value;
	}

	inline static int32_t get_offset_of__zOrderDirty_18() { return static_cast<int32_t>(offsetof(Slot_t9D06B371824C1B67E43A10A17D18BC3EF71E3867, ____zOrderDirty_18)); }
	inline bool get__zOrderDirty_18() const { return ____zOrderDirty_18; }
	inline bool* get_address_of__zOrderDirty_18() { return &____zOrderDirty_18; }
	inline void set__zOrderDirty_18(bool value)
	{
		____zOrderDirty_18 = value;
	}

	inline static int32_t get_offset_of__visibleDirty_19() { return static_cast<int32_t>(offsetof(Slot_t9D06B371824C1B67E43A10A17D18BC3EF71E3867, ____visibleDirty_19)); }
	inline bool get__visibleDirty_19() const { return ____visibleDirty_19; }
	inline bool* get_address_of__visibleDirty_19() { return &____visibleDirty_19; }
	inline void set__visibleDirty_19(bool value)
	{
		____visibleDirty_19 = value;
	}

	inline static int32_t get_offset_of__blendModeDirty_20() { return static_cast<int32_t>(offsetof(Slot_t9D06B371824C1B67E43A10A17D18BC3EF71E3867, ____blendModeDirty_20)); }
	inline bool get__blendModeDirty_20() const { return ____blendModeDirty_20; }
	inline bool* get_address_of__blendModeDirty_20() { return &____blendModeDirty_20; }
	inline void set__blendModeDirty_20(bool value)
	{
		____blendModeDirty_20 = value;
	}

	inline static int32_t get_offset_of__colorDirty_21() { return static_cast<int32_t>(offsetof(Slot_t9D06B371824C1B67E43A10A17D18BC3EF71E3867, ____colorDirty_21)); }
	inline bool get__colorDirty_21() const { return ____colorDirty_21; }
	inline bool* get_address_of__colorDirty_21() { return &____colorDirty_21; }
	inline void set__colorDirty_21(bool value)
	{
		____colorDirty_21 = value;
	}

	inline static int32_t get_offset_of__meshDirty_22() { return static_cast<int32_t>(offsetof(Slot_t9D06B371824C1B67E43A10A17D18BC3EF71E3867, ____meshDirty_22)); }
	inline bool get__meshDirty_22() const { return ____meshDirty_22; }
	inline bool* get_address_of__meshDirty_22() { return &____meshDirty_22; }
	inline void set__meshDirty_22(bool value)
	{
		____meshDirty_22 = value;
	}

	inline static int32_t get_offset_of__transformDirty_23() { return static_cast<int32_t>(offsetof(Slot_t9D06B371824C1B67E43A10A17D18BC3EF71E3867, ____transformDirty_23)); }
	inline bool get__transformDirty_23() const { return ____transformDirty_23; }
	inline bool* get_address_of__transformDirty_23() { return &____transformDirty_23; }
	inline void set__transformDirty_23(bool value)
	{
		____transformDirty_23 = value;
	}

	inline static int32_t get_offset_of__skinedMeshTransformDirty_24() { return static_cast<int32_t>(offsetof(Slot_t9D06B371824C1B67E43A10A17D18BC3EF71E3867, ____skinedMeshTransformDirty_24)); }
	inline bool get__skinedMeshTransformDirty_24() const { return ____skinedMeshTransformDirty_24; }
	inline bool* get_address_of__skinedMeshTransformDirty_24() { return &____skinedMeshTransformDirty_24; }
	inline void set__skinedMeshTransformDirty_24(bool value)
	{
		____skinedMeshTransformDirty_24 = value;
	}

	inline static int32_t get_offset_of__visible_25() { return static_cast<int32_t>(offsetof(Slot_t9D06B371824C1B67E43A10A17D18BC3EF71E3867, ____visible_25)); }
	inline bool get__visible_25() const { return ____visible_25; }
	inline bool* get_address_of__visible_25() { return &____visible_25; }
	inline void set__visible_25(bool value)
	{
		____visible_25 = value;
	}

	inline static int32_t get_offset_of__blendMode_26() { return static_cast<int32_t>(offsetof(Slot_t9D06B371824C1B67E43A10A17D18BC3EF71E3867, ____blendMode_26)); }
	inline int32_t get__blendMode_26() const { return ____blendMode_26; }
	inline int32_t* get_address_of__blendMode_26() { return &____blendMode_26; }
	inline void set__blendMode_26(int32_t value)
	{
		____blendMode_26 = value;
	}

	inline static int32_t get_offset_of__displayIndex_27() { return static_cast<int32_t>(offsetof(Slot_t9D06B371824C1B67E43A10A17D18BC3EF71E3867, ____displayIndex_27)); }
	inline int32_t get__displayIndex_27() const { return ____displayIndex_27; }
	inline int32_t* get_address_of__displayIndex_27() { return &____displayIndex_27; }
	inline void set__displayIndex_27(int32_t value)
	{
		____displayIndex_27 = value;
	}

	inline static int32_t get_offset_of__animationDisplayIndex_28() { return static_cast<int32_t>(offsetof(Slot_t9D06B371824C1B67E43A10A17D18BC3EF71E3867, ____animationDisplayIndex_28)); }
	inline int32_t get__animationDisplayIndex_28() const { return ____animationDisplayIndex_28; }
	inline int32_t* get_address_of__animationDisplayIndex_28() { return &____animationDisplayIndex_28; }
	inline void set__animationDisplayIndex_28(int32_t value)
	{
		____animationDisplayIndex_28 = value;
	}

	inline static int32_t get_offset_of__zOrder_29() { return static_cast<int32_t>(offsetof(Slot_t9D06B371824C1B67E43A10A17D18BC3EF71E3867, ____zOrder_29)); }
	inline int32_t get__zOrder_29() const { return ____zOrder_29; }
	inline int32_t* get_address_of__zOrder_29() { return &____zOrder_29; }
	inline void set__zOrder_29(int32_t value)
	{
		____zOrder_29 = value;
	}

	inline static int32_t get_offset_of__cachedFrameIndex_30() { return static_cast<int32_t>(offsetof(Slot_t9D06B371824C1B67E43A10A17D18BC3EF71E3867, ____cachedFrameIndex_30)); }
	inline int32_t get__cachedFrameIndex_30() const { return ____cachedFrameIndex_30; }
	inline int32_t* get_address_of__cachedFrameIndex_30() { return &____cachedFrameIndex_30; }
	inline void set__cachedFrameIndex_30(int32_t value)
	{
		____cachedFrameIndex_30 = value;
	}

	inline static int32_t get_offset_of__pivotX_31() { return static_cast<int32_t>(offsetof(Slot_t9D06B371824C1B67E43A10A17D18BC3EF71E3867, ____pivotX_31)); }
	inline float get__pivotX_31() const { return ____pivotX_31; }
	inline float* get_address_of__pivotX_31() { return &____pivotX_31; }
	inline void set__pivotX_31(float value)
	{
		____pivotX_31 = value;
	}

	inline static int32_t get_offset_of__pivotY_32() { return static_cast<int32_t>(offsetof(Slot_t9D06B371824C1B67E43A10A17D18BC3EF71E3867, ____pivotY_32)); }
	inline float get__pivotY_32() const { return ____pivotY_32; }
	inline float* get_address_of__pivotY_32() { return &____pivotY_32; }
	inline void set__pivotY_32(float value)
	{
		____pivotY_32 = value;
	}

	inline static int32_t get_offset_of__localMatrix_33() { return static_cast<int32_t>(offsetof(Slot_t9D06B371824C1B67E43A10A17D18BC3EF71E3867, ____localMatrix_33)); }
	inline Matrix_t038C4B16C47630C3863AC754653CCAC74C71753C * get__localMatrix_33() const { return ____localMatrix_33; }
	inline Matrix_t038C4B16C47630C3863AC754653CCAC74C71753C ** get_address_of__localMatrix_33() { return &____localMatrix_33; }
	inline void set__localMatrix_33(Matrix_t038C4B16C47630C3863AC754653CCAC74C71753C * value)
	{
		____localMatrix_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____localMatrix_33), (void*)value);
	}

	inline static int32_t get_offset_of__colorTransform_34() { return static_cast<int32_t>(offsetof(Slot_t9D06B371824C1B67E43A10A17D18BC3EF71E3867, ____colorTransform_34)); }
	inline ColorTransform_t18DB7F60BCC055213D32EFB3EE0638632438118B * get__colorTransform_34() const { return ____colorTransform_34; }
	inline ColorTransform_t18DB7F60BCC055213D32EFB3EE0638632438118B ** get_address_of__colorTransform_34() { return &____colorTransform_34; }
	inline void set__colorTransform_34(ColorTransform_t18DB7F60BCC055213D32EFB3EE0638632438118B * value)
	{
		____colorTransform_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____colorTransform_34), (void*)value);
	}

	inline static int32_t get_offset_of__ffdVertices_35() { return static_cast<int32_t>(offsetof(Slot_t9D06B371824C1B67E43A10A17D18BC3EF71E3867, ____ffdVertices_35)); }
	inline List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 * get__ffdVertices_35() const { return ____ffdVertices_35; }
	inline List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 ** get_address_of__ffdVertices_35() { return &____ffdVertices_35; }
	inline void set__ffdVertices_35(List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 * value)
	{
		____ffdVertices_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ffdVertices_35), (void*)value);
	}

	inline static int32_t get_offset_of__displayDatas_36() { return static_cast<int32_t>(offsetof(Slot_t9D06B371824C1B67E43A10A17D18BC3EF71E3867, ____displayDatas_36)); }
	inline List_1_t99FE96A26AAAEE3550BDBF65F567EB6CAD932825 * get__displayDatas_36() const { return ____displayDatas_36; }
	inline List_1_t99FE96A26AAAEE3550BDBF65F567EB6CAD932825 ** get_address_of__displayDatas_36() { return &____displayDatas_36; }
	inline void set__displayDatas_36(List_1_t99FE96A26AAAEE3550BDBF65F567EB6CAD932825 * value)
	{
		____displayDatas_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____displayDatas_36), (void*)value);
	}

	inline static int32_t get_offset_of__displayList_37() { return static_cast<int32_t>(offsetof(Slot_t9D06B371824C1B67E43A10A17D18BC3EF71E3867, ____displayList_37)); }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * get__displayList_37() const { return ____displayList_37; }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D ** get_address_of__displayList_37() { return &____displayList_37; }
	inline void set__displayList_37(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * value)
	{
		____displayList_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____displayList_37), (void*)value);
	}

	inline static int32_t get_offset_of__meshBones_38() { return static_cast<int32_t>(offsetof(Slot_t9D06B371824C1B67E43A10A17D18BC3EF71E3867, ____meshBones_38)); }
	inline List_1_tB9E7FBF958A1675741FDD4B0929B4137E0C5DA17 * get__meshBones_38() const { return ____meshBones_38; }
	inline List_1_tB9E7FBF958A1675741FDD4B0929B4137E0C5DA17 ** get_address_of__meshBones_38() { return &____meshBones_38; }
	inline void set__meshBones_38(List_1_tB9E7FBF958A1675741FDD4B0929B4137E0C5DA17 * value)
	{
		____meshBones_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____meshBones_38), (void*)value);
	}

	inline static int32_t get_offset_of__slotData_39() { return static_cast<int32_t>(offsetof(Slot_t9D06B371824C1B67E43A10A17D18BC3EF71E3867, ____slotData_39)); }
	inline SlotData_t50C28020EC5517A3F467C8E08E65551F47415B75 * get__slotData_39() const { return ____slotData_39; }
	inline SlotData_t50C28020EC5517A3F467C8E08E65551F47415B75 ** get_address_of__slotData_39() { return &____slotData_39; }
	inline void set__slotData_39(SlotData_t50C28020EC5517A3F467C8E08E65551F47415B75 * value)
	{
		____slotData_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____slotData_39), (void*)value);
	}

	inline static int32_t get_offset_of__rawDisplayDatas_40() { return static_cast<int32_t>(offsetof(Slot_t9D06B371824C1B67E43A10A17D18BC3EF71E3867, ____rawDisplayDatas_40)); }
	inline List_1_t99FE96A26AAAEE3550BDBF65F567EB6CAD932825 * get__rawDisplayDatas_40() const { return ____rawDisplayDatas_40; }
	inline List_1_t99FE96A26AAAEE3550BDBF65F567EB6CAD932825 ** get_address_of__rawDisplayDatas_40() { return &____rawDisplayDatas_40; }
	inline void set__rawDisplayDatas_40(List_1_t99FE96A26AAAEE3550BDBF65F567EB6CAD932825 * value)
	{
		____rawDisplayDatas_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rawDisplayDatas_40), (void*)value);
	}

	inline static int32_t get_offset_of__displayData_41() { return static_cast<int32_t>(offsetof(Slot_t9D06B371824C1B67E43A10A17D18BC3EF71E3867, ____displayData_41)); }
	inline DisplayData_tB52C373BB02142D693D77D78CB19A7FEC5D6592A * get__displayData_41() const { return ____displayData_41; }
	inline DisplayData_tB52C373BB02142D693D77D78CB19A7FEC5D6592A ** get_address_of__displayData_41() { return &____displayData_41; }
	inline void set__displayData_41(DisplayData_tB52C373BB02142D693D77D78CB19A7FEC5D6592A * value)
	{
		____displayData_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____displayData_41), (void*)value);
	}

	inline static int32_t get_offset_of__textureData_42() { return static_cast<int32_t>(offsetof(Slot_t9D06B371824C1B67E43A10A17D18BC3EF71E3867, ____textureData_42)); }
	inline TextureData_tE9C849854E0194DB7DF7175F5F6E6C403BDB9281 * get__textureData_42() const { return ____textureData_42; }
	inline TextureData_tE9C849854E0194DB7DF7175F5F6E6C403BDB9281 ** get_address_of__textureData_42() { return &____textureData_42; }
	inline void set__textureData_42(TextureData_tE9C849854E0194DB7DF7175F5F6E6C403BDB9281 * value)
	{
		____textureData_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____textureData_42), (void*)value);
	}

	inline static int32_t get_offset_of__meshData_43() { return static_cast<int32_t>(offsetof(Slot_t9D06B371824C1B67E43A10A17D18BC3EF71E3867, ____meshData_43)); }
	inline MeshDisplayData_t9DE60F833D98CE7E7FCE3000BC4278C5DF09F6F1 * get__meshData_43() const { return ____meshData_43; }
	inline MeshDisplayData_t9DE60F833D98CE7E7FCE3000BC4278C5DF09F6F1 ** get_address_of__meshData_43() { return &____meshData_43; }
	inline void set__meshData_43(MeshDisplayData_t9DE60F833D98CE7E7FCE3000BC4278C5DF09F6F1 * value)
	{
		____meshData_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____meshData_43), (void*)value);
	}

	inline static int32_t get_offset_of__boundingBoxData_44() { return static_cast<int32_t>(offsetof(Slot_t9D06B371824C1B67E43A10A17D18BC3EF71E3867, ____boundingBoxData_44)); }
	inline BoundingBoxData_tEE6787555F5BF2F62E5A540D400A6AE3AC537671 * get__boundingBoxData_44() const { return ____boundingBoxData_44; }
	inline BoundingBoxData_tEE6787555F5BF2F62E5A540D400A6AE3AC537671 ** get_address_of__boundingBoxData_44() { return &____boundingBoxData_44; }
	inline void set__boundingBoxData_44(BoundingBoxData_tEE6787555F5BF2F62E5A540D400A6AE3AC537671 * value)
	{
		____boundingBoxData_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____boundingBoxData_44), (void*)value);
	}

	inline static int32_t get_offset_of__rawDisplay_45() { return static_cast<int32_t>(offsetof(Slot_t9D06B371824C1B67E43A10A17D18BC3EF71E3867, ____rawDisplay_45)); }
	inline RuntimeObject * get__rawDisplay_45() const { return ____rawDisplay_45; }
	inline RuntimeObject ** get_address_of__rawDisplay_45() { return &____rawDisplay_45; }
	inline void set__rawDisplay_45(RuntimeObject * value)
	{
		____rawDisplay_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rawDisplay_45), (void*)value);
	}

	inline static int32_t get_offset_of__meshDisplay_46() { return static_cast<int32_t>(offsetof(Slot_t9D06B371824C1B67E43A10A17D18BC3EF71E3867, ____meshDisplay_46)); }
	inline RuntimeObject * get__meshDisplay_46() const { return ____meshDisplay_46; }
	inline RuntimeObject ** get_address_of__meshDisplay_46() { return &____meshDisplay_46; }
	inline void set__meshDisplay_46(RuntimeObject * value)
	{
		____meshDisplay_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____meshDisplay_46), (void*)value);
	}

	inline static int32_t get_offset_of__display_47() { return static_cast<int32_t>(offsetof(Slot_t9D06B371824C1B67E43A10A17D18BC3EF71E3867, ____display_47)); }
	inline RuntimeObject * get__display_47() const { return ____display_47; }
	inline RuntimeObject ** get_address_of__display_47() { return &____display_47; }
	inline void set__display_47(RuntimeObject * value)
	{
		____display_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____display_47), (void*)value);
	}

	inline static int32_t get_offset_of__childArmature_48() { return static_cast<int32_t>(offsetof(Slot_t9D06B371824C1B67E43A10A17D18BC3EF71E3867, ____childArmature_48)); }
	inline Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B * get__childArmature_48() const { return ____childArmature_48; }
	inline Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B ** get_address_of__childArmature_48() { return &____childArmature_48; }
	inline void set__childArmature_48(Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B * value)
	{
		____childArmature_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____childArmature_48), (void*)value);
	}

	inline static int32_t get_offset_of__cachedFrameIndices_49() { return static_cast<int32_t>(offsetof(Slot_t9D06B371824C1B67E43A10A17D18BC3EF71E3867, ____cachedFrameIndices_49)); }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * get__cachedFrameIndices_49() const { return ____cachedFrameIndices_49; }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 ** get_address_of__cachedFrameIndices_49() { return &____cachedFrameIndices_49; }
	inline void set__cachedFrameIndices_49(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * value)
	{
		____cachedFrameIndices_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____cachedFrameIndices_49), (void*)value);
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

// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Material
struct  Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Purchasing.PayoutDefinition
struct  PayoutDefinition_tE787916C6F389E12B8C2F10F3A87CD79B6C2A273  : public RuntimeObject
{
public:
	// UnityEngine.Purchasing.PayoutType UnityEngine.Purchasing.PayoutDefinition::m_Type
	int32_t ___m_Type_0;
	// System.String UnityEngine.Purchasing.PayoutDefinition::m_Subtype
	String_t* ___m_Subtype_1;
	// System.Double UnityEngine.Purchasing.PayoutDefinition::m_Quantity
	double ___m_Quantity_2;
	// System.String UnityEngine.Purchasing.PayoutDefinition::m_Data
	String_t* ___m_Data_3;

public:
	inline static int32_t get_offset_of_m_Type_0() { return static_cast<int32_t>(offsetof(PayoutDefinition_tE787916C6F389E12B8C2F10F3A87CD79B6C2A273, ___m_Type_0)); }
	inline int32_t get_m_Type_0() const { return ___m_Type_0; }
	inline int32_t* get_address_of_m_Type_0() { return &___m_Type_0; }
	inline void set_m_Type_0(int32_t value)
	{
		___m_Type_0 = value;
	}

	inline static int32_t get_offset_of_m_Subtype_1() { return static_cast<int32_t>(offsetof(PayoutDefinition_tE787916C6F389E12B8C2F10F3A87CD79B6C2A273, ___m_Subtype_1)); }
	inline String_t* get_m_Subtype_1() const { return ___m_Subtype_1; }
	inline String_t** get_address_of_m_Subtype_1() { return &___m_Subtype_1; }
	inline void set_m_Subtype_1(String_t* value)
	{
		___m_Subtype_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Subtype_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Quantity_2() { return static_cast<int32_t>(offsetof(PayoutDefinition_tE787916C6F389E12B8C2F10F3A87CD79B6C2A273, ___m_Quantity_2)); }
	inline double get_m_Quantity_2() const { return ___m_Quantity_2; }
	inline double* get_address_of_m_Quantity_2() { return &___m_Quantity_2; }
	inline void set_m_Quantity_2(double value)
	{
		___m_Quantity_2 = value;
	}

	inline static int32_t get_offset_of_m_Data_3() { return static_cast<int32_t>(offsetof(PayoutDefinition_tE787916C6F389E12B8C2F10F3A87CD79B6C2A273, ___m_Data_3)); }
	inline String_t* get_m_Data_3() const { return ___m_Data_3; }
	inline String_t** get_address_of_m_Data_3() { return &___m_Data_3; }
	inline void set_m_Data_3(String_t* value)
	{
		___m_Data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Data_3), (void*)value);
	}
};


// UnityEngine.Purchasing.ProductCatalogItem
struct  ProductCatalogItem_t0CDB4E1B6E5692F115DBC421DA38BFC6BC3B3356  : public RuntimeObject
{
public:
	// System.String UnityEngine.Purchasing.ProductCatalogItem::id
	String_t* ___id_0;
	// UnityEngine.Purchasing.ProductType UnityEngine.Purchasing.ProductCatalogItem::type
	int32_t ___type_1;
	// System.Collections.Generic.List`1<UnityEngine.Purchasing.StoreID> UnityEngine.Purchasing.ProductCatalogItem::storeIDs
	List_1_t062D5CAF9C7F2C671DA4AAFCA4E34DC618BE1067 * ___storeIDs_2;
	// UnityEngine.Purchasing.LocalizedProductDescription UnityEngine.Purchasing.ProductCatalogItem::defaultDescription
	LocalizedProductDescription_tBA695FEC391F4F17DC62346CABA28CAEB654D037 * ___defaultDescription_3;
	// System.Int32 UnityEngine.Purchasing.ProductCatalogItem::applePriceTier
	int32_t ___applePriceTier_4;
	// System.Int32 UnityEngine.Purchasing.ProductCatalogItem::xiaomiPriceTier
	int32_t ___xiaomiPriceTier_5;
	// UnityEngine.Purchasing.Price UnityEngine.Purchasing.ProductCatalogItem::googlePrice
	Price_t7A5CFB9F462BB652A9C4C0102FD9284FAAA27C61 * ___googlePrice_6;
	// System.Collections.Generic.List`1<UnityEngine.Purchasing.LocalizedProductDescription> UnityEngine.Purchasing.ProductCatalogItem::descriptions
	List_1_t126F438F1E5CA46096142C20EB7F5501D8DFBB2F * ___descriptions_7;
	// UnityEngine.Purchasing.Price UnityEngine.Purchasing.ProductCatalogItem::udpPrice
	Price_t7A5CFB9F462BB652A9C4C0102FD9284FAAA27C61 * ___udpPrice_8;
	// System.Collections.Generic.List`1<UnityEngine.Purchasing.ProductCatalogPayout> UnityEngine.Purchasing.ProductCatalogItem::payouts
	List_1_t698A81D8AC3EF15A9768C23EEBE4FAABB2A74817 * ___payouts_9;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(ProductCatalogItem_t0CDB4E1B6E5692F115DBC421DA38BFC6BC3B3356, ___id_0)); }
	inline String_t* get_id_0() const { return ___id_0; }
	inline String_t** get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(String_t* value)
	{
		___id_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___id_0), (void*)value);
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(ProductCatalogItem_t0CDB4E1B6E5692F115DBC421DA38BFC6BC3B3356, ___type_1)); }
	inline int32_t get_type_1() const { return ___type_1; }
	inline int32_t* get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(int32_t value)
	{
		___type_1 = value;
	}

	inline static int32_t get_offset_of_storeIDs_2() { return static_cast<int32_t>(offsetof(ProductCatalogItem_t0CDB4E1B6E5692F115DBC421DA38BFC6BC3B3356, ___storeIDs_2)); }
	inline List_1_t062D5CAF9C7F2C671DA4AAFCA4E34DC618BE1067 * get_storeIDs_2() const { return ___storeIDs_2; }
	inline List_1_t062D5CAF9C7F2C671DA4AAFCA4E34DC618BE1067 ** get_address_of_storeIDs_2() { return &___storeIDs_2; }
	inline void set_storeIDs_2(List_1_t062D5CAF9C7F2C671DA4AAFCA4E34DC618BE1067 * value)
	{
		___storeIDs_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___storeIDs_2), (void*)value);
	}

	inline static int32_t get_offset_of_defaultDescription_3() { return static_cast<int32_t>(offsetof(ProductCatalogItem_t0CDB4E1B6E5692F115DBC421DA38BFC6BC3B3356, ___defaultDescription_3)); }
	inline LocalizedProductDescription_tBA695FEC391F4F17DC62346CABA28CAEB654D037 * get_defaultDescription_3() const { return ___defaultDescription_3; }
	inline LocalizedProductDescription_tBA695FEC391F4F17DC62346CABA28CAEB654D037 ** get_address_of_defaultDescription_3() { return &___defaultDescription_3; }
	inline void set_defaultDescription_3(LocalizedProductDescription_tBA695FEC391F4F17DC62346CABA28CAEB654D037 * value)
	{
		___defaultDescription_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultDescription_3), (void*)value);
	}

	inline static int32_t get_offset_of_applePriceTier_4() { return static_cast<int32_t>(offsetof(ProductCatalogItem_t0CDB4E1B6E5692F115DBC421DA38BFC6BC3B3356, ___applePriceTier_4)); }
	inline int32_t get_applePriceTier_4() const { return ___applePriceTier_4; }
	inline int32_t* get_address_of_applePriceTier_4() { return &___applePriceTier_4; }
	inline void set_applePriceTier_4(int32_t value)
	{
		___applePriceTier_4 = value;
	}

	inline static int32_t get_offset_of_xiaomiPriceTier_5() { return static_cast<int32_t>(offsetof(ProductCatalogItem_t0CDB4E1B6E5692F115DBC421DA38BFC6BC3B3356, ___xiaomiPriceTier_5)); }
	inline int32_t get_xiaomiPriceTier_5() const { return ___xiaomiPriceTier_5; }
	inline int32_t* get_address_of_xiaomiPriceTier_5() { return &___xiaomiPriceTier_5; }
	inline void set_xiaomiPriceTier_5(int32_t value)
	{
		___xiaomiPriceTier_5 = value;
	}

	inline static int32_t get_offset_of_googlePrice_6() { return static_cast<int32_t>(offsetof(ProductCatalogItem_t0CDB4E1B6E5692F115DBC421DA38BFC6BC3B3356, ___googlePrice_6)); }
	inline Price_t7A5CFB9F462BB652A9C4C0102FD9284FAAA27C61 * get_googlePrice_6() const { return ___googlePrice_6; }
	inline Price_t7A5CFB9F462BB652A9C4C0102FD9284FAAA27C61 ** get_address_of_googlePrice_6() { return &___googlePrice_6; }
	inline void set_googlePrice_6(Price_t7A5CFB9F462BB652A9C4C0102FD9284FAAA27C61 * value)
	{
		___googlePrice_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___googlePrice_6), (void*)value);
	}

	inline static int32_t get_offset_of_descriptions_7() { return static_cast<int32_t>(offsetof(ProductCatalogItem_t0CDB4E1B6E5692F115DBC421DA38BFC6BC3B3356, ___descriptions_7)); }
	inline List_1_t126F438F1E5CA46096142C20EB7F5501D8DFBB2F * get_descriptions_7() const { return ___descriptions_7; }
	inline List_1_t126F438F1E5CA46096142C20EB7F5501D8DFBB2F ** get_address_of_descriptions_7() { return &___descriptions_7; }
	inline void set_descriptions_7(List_1_t126F438F1E5CA46096142C20EB7F5501D8DFBB2F * value)
	{
		___descriptions_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___descriptions_7), (void*)value);
	}

	inline static int32_t get_offset_of_udpPrice_8() { return static_cast<int32_t>(offsetof(ProductCatalogItem_t0CDB4E1B6E5692F115DBC421DA38BFC6BC3B3356, ___udpPrice_8)); }
	inline Price_t7A5CFB9F462BB652A9C4C0102FD9284FAAA27C61 * get_udpPrice_8() const { return ___udpPrice_8; }
	inline Price_t7A5CFB9F462BB652A9C4C0102FD9284FAAA27C61 ** get_address_of_udpPrice_8() { return &___udpPrice_8; }
	inline void set_udpPrice_8(Price_t7A5CFB9F462BB652A9C4C0102FD9284FAAA27C61 * value)
	{
		___udpPrice_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___udpPrice_8), (void*)value);
	}

	inline static int32_t get_offset_of_payouts_9() { return static_cast<int32_t>(offsetof(ProductCatalogItem_t0CDB4E1B6E5692F115DBC421DA38BFC6BC3B3356, ___payouts_9)); }
	inline List_1_t698A81D8AC3EF15A9768C23EEBE4FAABB2A74817 * get_payouts_9() const { return ___payouts_9; }
	inline List_1_t698A81D8AC3EF15A9768C23EEBE4FAABB2A74817 ** get_address_of_payouts_9() { return &___payouts_9; }
	inline void set_payouts_9(List_1_t698A81D8AC3EF15A9768C23EEBE4FAABB2A74817 * value)
	{
		___payouts_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___payouts_9), (void*)value);
	}
};


// UnityEngine.Purchasing.ProductDefinition
struct  ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10  : public RuntimeObject
{
public:
	// System.String UnityEngine.Purchasing.ProductDefinition::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.String UnityEngine.Purchasing.ProductDefinition::<storeSpecificId>k__BackingField
	String_t* ___U3CstoreSpecificIdU3Ek__BackingField_1;
	// UnityEngine.Purchasing.ProductType UnityEngine.Purchasing.ProductDefinition::<type>k__BackingField
	int32_t ___U3CtypeU3Ek__BackingField_2;
	// System.Boolean UnityEngine.Purchasing.ProductDefinition::<enabled>k__BackingField
	bool ___U3CenabledU3Ek__BackingField_3;
	// System.Collections.Generic.List`1<UnityEngine.Purchasing.PayoutDefinition> UnityEngine.Purchasing.ProductDefinition::m_Payouts
	List_1_t3BB189095B85DE5B71713AA7779513A84EB7EB9A * ___m_Payouts_4;

public:
	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10, ___U3CidU3Ek__BackingField_0)); }
	inline String_t* get_U3CidU3Ek__BackingField_0() const { return ___U3CidU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_0() { return &___U3CidU3Ek__BackingField_0; }
	inline void set_U3CidU3Ek__BackingField_0(String_t* value)
	{
		___U3CidU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CidU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CstoreSpecificIdU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10, ___U3CstoreSpecificIdU3Ek__BackingField_1)); }
	inline String_t* get_U3CstoreSpecificIdU3Ek__BackingField_1() const { return ___U3CstoreSpecificIdU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CstoreSpecificIdU3Ek__BackingField_1() { return &___U3CstoreSpecificIdU3Ek__BackingField_1; }
	inline void set_U3CstoreSpecificIdU3Ek__BackingField_1(String_t* value)
	{
		___U3CstoreSpecificIdU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CstoreSpecificIdU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtypeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10, ___U3CtypeU3Ek__BackingField_2)); }
	inline int32_t get_U3CtypeU3Ek__BackingField_2() const { return ___U3CtypeU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CtypeU3Ek__BackingField_2() { return &___U3CtypeU3Ek__BackingField_2; }
	inline void set_U3CtypeU3Ek__BackingField_2(int32_t value)
	{
		___U3CtypeU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CenabledU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10, ___U3CenabledU3Ek__BackingField_3)); }
	inline bool get_U3CenabledU3Ek__BackingField_3() const { return ___U3CenabledU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CenabledU3Ek__BackingField_3() { return &___U3CenabledU3Ek__BackingField_3; }
	inline void set_U3CenabledU3Ek__BackingField_3(bool value)
	{
		___U3CenabledU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_m_Payouts_4() { return static_cast<int32_t>(offsetof(ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10, ___m_Payouts_4)); }
	inline List_1_t3BB189095B85DE5B71713AA7779513A84EB7EB9A * get_m_Payouts_4() const { return ___m_Payouts_4; }
	inline List_1_t3BB189095B85DE5B71713AA7779513A84EB7EB9A ** get_address_of_m_Payouts_4() { return &___m_Payouts_4; }
	inline void set_m_Payouts_4(List_1_t3BB189095B85DE5B71713AA7779513A84EB7EB9A * value)
	{
		___m_Payouts_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Payouts_4), (void*)value);
	}
};


// UnityEngine.Purchasing.StandardPurchasingModule
struct  StandardPurchasingModule_t45E3E7F3D0D8CE91AD85D7BE5B29CBA2235B3BFA  : public AbstractPurchasingModule_t73F8B7B7D6CA305D6CFAFE4692A6F0F7B42531D9
{
public:
	// UnityEngine.Purchasing.AppStore UnityEngine.Purchasing.StandardPurchasingModule::m_AppStorePlatform
	int32_t ___m_AppStorePlatform_1;
	// UnityEngine.Purchasing.INativeStoreProvider UnityEngine.Purchasing.StandardPurchasingModule::m_NativeStoreProvider
	RuntimeObject* ___m_NativeStoreProvider_2;
	// UnityEngine.RuntimePlatform UnityEngine.Purchasing.StandardPurchasingModule::m_RuntimePlatform
	int32_t ___m_RuntimePlatform_3;
	// System.Boolean UnityEngine.Purchasing.StandardPurchasingModule::m_UseCloudCatalog
	bool ___m_UseCloudCatalog_4;
	// Uniject.IUtil UnityEngine.Purchasing.StandardPurchasingModule::<util>k__BackingField
	RuntimeObject* ___U3CutilU3Ek__BackingField_6;
	// UnityEngine.ILogger UnityEngine.Purchasing.StandardPurchasingModule::<logger>k__BackingField
	RuntimeObject* ___U3CloggerU3Ek__BackingField_7;
	// UnityEngine.Purchasing.IAsyncWebUtil UnityEngine.Purchasing.StandardPurchasingModule::<webUtil>k__BackingField
	RuntimeObject* ___U3CwebUtilU3Ek__BackingField_8;
	// UnityEngine.Purchasing.StandardPurchasingModule_StoreInstance UnityEngine.Purchasing.StandardPurchasingModule::<storeInstance>k__BackingField
	StoreInstance_t615A2269FB2008E83D46EF40601BD6408BCDA581 * ___U3CstoreInstanceU3Ek__BackingField_9;
	// UnityEngine.Purchasing.CloudCatalogImpl UnityEngine.Purchasing.StandardPurchasingModule::m_CloudCatalog
	CloudCatalogImpl_tA904FC1D31FD9A9F954BA9BEE756D8A8A8E88E39 * ___m_CloudCatalog_11;
	// UnityEngine.Purchasing.FakeStoreUIMode UnityEngine.Purchasing.StandardPurchasingModule::<useFakeStoreUIMode>k__BackingField
	int32_t ___U3CuseFakeStoreUIModeU3Ek__BackingField_12;
	// System.Boolean UnityEngine.Purchasing.StandardPurchasingModule::<useFakeStoreAlways>k__BackingField
	bool ___U3CuseFakeStoreAlwaysU3Ek__BackingField_13;
	// UnityEngine.Purchasing.WinRTStore UnityEngine.Purchasing.StandardPurchasingModule::windowsStore
	WinRTStore_tE9F2CE212684AB68358740F6A166187E8A4269CC * ___windowsStore_14;

public:
	inline static int32_t get_offset_of_m_AppStorePlatform_1() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t45E3E7F3D0D8CE91AD85D7BE5B29CBA2235B3BFA, ___m_AppStorePlatform_1)); }
	inline int32_t get_m_AppStorePlatform_1() const { return ___m_AppStorePlatform_1; }
	inline int32_t* get_address_of_m_AppStorePlatform_1() { return &___m_AppStorePlatform_1; }
	inline void set_m_AppStorePlatform_1(int32_t value)
	{
		___m_AppStorePlatform_1 = value;
	}

	inline static int32_t get_offset_of_m_NativeStoreProvider_2() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t45E3E7F3D0D8CE91AD85D7BE5B29CBA2235B3BFA, ___m_NativeStoreProvider_2)); }
	inline RuntimeObject* get_m_NativeStoreProvider_2() const { return ___m_NativeStoreProvider_2; }
	inline RuntimeObject** get_address_of_m_NativeStoreProvider_2() { return &___m_NativeStoreProvider_2; }
	inline void set_m_NativeStoreProvider_2(RuntimeObject* value)
	{
		___m_NativeStoreProvider_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_NativeStoreProvider_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_RuntimePlatform_3() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t45E3E7F3D0D8CE91AD85D7BE5B29CBA2235B3BFA, ___m_RuntimePlatform_3)); }
	inline int32_t get_m_RuntimePlatform_3() const { return ___m_RuntimePlatform_3; }
	inline int32_t* get_address_of_m_RuntimePlatform_3() { return &___m_RuntimePlatform_3; }
	inline void set_m_RuntimePlatform_3(int32_t value)
	{
		___m_RuntimePlatform_3 = value;
	}

	inline static int32_t get_offset_of_m_UseCloudCatalog_4() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t45E3E7F3D0D8CE91AD85D7BE5B29CBA2235B3BFA, ___m_UseCloudCatalog_4)); }
	inline bool get_m_UseCloudCatalog_4() const { return ___m_UseCloudCatalog_4; }
	inline bool* get_address_of_m_UseCloudCatalog_4() { return &___m_UseCloudCatalog_4; }
	inline void set_m_UseCloudCatalog_4(bool value)
	{
		___m_UseCloudCatalog_4 = value;
	}

	inline static int32_t get_offset_of_U3CutilU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t45E3E7F3D0D8CE91AD85D7BE5B29CBA2235B3BFA, ___U3CutilU3Ek__BackingField_6)); }
	inline RuntimeObject* get_U3CutilU3Ek__BackingField_6() const { return ___U3CutilU3Ek__BackingField_6; }
	inline RuntimeObject** get_address_of_U3CutilU3Ek__BackingField_6() { return &___U3CutilU3Ek__BackingField_6; }
	inline void set_U3CutilU3Ek__BackingField_6(RuntimeObject* value)
	{
		___U3CutilU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CutilU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CloggerU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t45E3E7F3D0D8CE91AD85D7BE5B29CBA2235B3BFA, ___U3CloggerU3Ek__BackingField_7)); }
	inline RuntimeObject* get_U3CloggerU3Ek__BackingField_7() const { return ___U3CloggerU3Ek__BackingField_7; }
	inline RuntimeObject** get_address_of_U3CloggerU3Ek__BackingField_7() { return &___U3CloggerU3Ek__BackingField_7; }
	inline void set_U3CloggerU3Ek__BackingField_7(RuntimeObject* value)
	{
		___U3CloggerU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CloggerU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CwebUtilU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t45E3E7F3D0D8CE91AD85D7BE5B29CBA2235B3BFA, ___U3CwebUtilU3Ek__BackingField_8)); }
	inline RuntimeObject* get_U3CwebUtilU3Ek__BackingField_8() const { return ___U3CwebUtilU3Ek__BackingField_8; }
	inline RuntimeObject** get_address_of_U3CwebUtilU3Ek__BackingField_8() { return &___U3CwebUtilU3Ek__BackingField_8; }
	inline void set_U3CwebUtilU3Ek__BackingField_8(RuntimeObject* value)
	{
		___U3CwebUtilU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CwebUtilU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CstoreInstanceU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t45E3E7F3D0D8CE91AD85D7BE5B29CBA2235B3BFA, ___U3CstoreInstanceU3Ek__BackingField_9)); }
	inline StoreInstance_t615A2269FB2008E83D46EF40601BD6408BCDA581 * get_U3CstoreInstanceU3Ek__BackingField_9() const { return ___U3CstoreInstanceU3Ek__BackingField_9; }
	inline StoreInstance_t615A2269FB2008E83D46EF40601BD6408BCDA581 ** get_address_of_U3CstoreInstanceU3Ek__BackingField_9() { return &___U3CstoreInstanceU3Ek__BackingField_9; }
	inline void set_U3CstoreInstanceU3Ek__BackingField_9(StoreInstance_t615A2269FB2008E83D46EF40601BD6408BCDA581 * value)
	{
		___U3CstoreInstanceU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CstoreInstanceU3Ek__BackingField_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_CloudCatalog_11() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t45E3E7F3D0D8CE91AD85D7BE5B29CBA2235B3BFA, ___m_CloudCatalog_11)); }
	inline CloudCatalogImpl_tA904FC1D31FD9A9F954BA9BEE756D8A8A8E88E39 * get_m_CloudCatalog_11() const { return ___m_CloudCatalog_11; }
	inline CloudCatalogImpl_tA904FC1D31FD9A9F954BA9BEE756D8A8A8E88E39 ** get_address_of_m_CloudCatalog_11() { return &___m_CloudCatalog_11; }
	inline void set_m_CloudCatalog_11(CloudCatalogImpl_tA904FC1D31FD9A9F954BA9BEE756D8A8A8E88E39 * value)
	{
		___m_CloudCatalog_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CloudCatalog_11), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseFakeStoreUIModeU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t45E3E7F3D0D8CE91AD85D7BE5B29CBA2235B3BFA, ___U3CuseFakeStoreUIModeU3Ek__BackingField_12)); }
	inline int32_t get_U3CuseFakeStoreUIModeU3Ek__BackingField_12() const { return ___U3CuseFakeStoreUIModeU3Ek__BackingField_12; }
	inline int32_t* get_address_of_U3CuseFakeStoreUIModeU3Ek__BackingField_12() { return &___U3CuseFakeStoreUIModeU3Ek__BackingField_12; }
	inline void set_U3CuseFakeStoreUIModeU3Ek__BackingField_12(int32_t value)
	{
		___U3CuseFakeStoreUIModeU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CuseFakeStoreAlwaysU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t45E3E7F3D0D8CE91AD85D7BE5B29CBA2235B3BFA, ___U3CuseFakeStoreAlwaysU3Ek__BackingField_13)); }
	inline bool get_U3CuseFakeStoreAlwaysU3Ek__BackingField_13() const { return ___U3CuseFakeStoreAlwaysU3Ek__BackingField_13; }
	inline bool* get_address_of_U3CuseFakeStoreAlwaysU3Ek__BackingField_13() { return &___U3CuseFakeStoreAlwaysU3Ek__BackingField_13; }
	inline void set_U3CuseFakeStoreAlwaysU3Ek__BackingField_13(bool value)
	{
		___U3CuseFakeStoreAlwaysU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_windowsStore_14() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t45E3E7F3D0D8CE91AD85D7BE5B29CBA2235B3BFA, ___windowsStore_14)); }
	inline WinRTStore_tE9F2CE212684AB68358740F6A166187E8A4269CC * get_windowsStore_14() const { return ___windowsStore_14; }
	inline WinRTStore_tE9F2CE212684AB68358740F6A166187E8A4269CC ** get_address_of_windowsStore_14() { return &___windowsStore_14; }
	inline void set_windowsStore_14(WinRTStore_tE9F2CE212684AB68358740F6A166187E8A4269CC * value)
	{
		___windowsStore_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___windowsStore_14), (void*)value);
	}
};

struct StandardPurchasingModule_t45E3E7F3D0D8CE91AD85D7BE5B29CBA2235B3BFA_StaticFields
{
public:
	// UnityEngine.Purchasing.StandardPurchasingModule UnityEngine.Purchasing.StandardPurchasingModule::ModuleInstance
	StandardPurchasingModule_t45E3E7F3D0D8CE91AD85D7BE5B29CBA2235B3BFA * ___ModuleInstance_5;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Purchasing.AppStore,System.String> UnityEngine.Purchasing.StandardPurchasingModule::AndroidStoreNameMap
	Dictionary_2_t2611EA63F6500C851632D260D544EEDF382EDE72 * ___AndroidStoreNameMap_10;

public:
	inline static int32_t get_offset_of_ModuleInstance_5() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t45E3E7F3D0D8CE91AD85D7BE5B29CBA2235B3BFA_StaticFields, ___ModuleInstance_5)); }
	inline StandardPurchasingModule_t45E3E7F3D0D8CE91AD85D7BE5B29CBA2235B3BFA * get_ModuleInstance_5() const { return ___ModuleInstance_5; }
	inline StandardPurchasingModule_t45E3E7F3D0D8CE91AD85D7BE5B29CBA2235B3BFA ** get_address_of_ModuleInstance_5() { return &___ModuleInstance_5; }
	inline void set_ModuleInstance_5(StandardPurchasingModule_t45E3E7F3D0D8CE91AD85D7BE5B29CBA2235B3BFA * value)
	{
		___ModuleInstance_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ModuleInstance_5), (void*)value);
	}

	inline static int32_t get_offset_of_AndroidStoreNameMap_10() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t45E3E7F3D0D8CE91AD85D7BE5B29CBA2235B3BFA_StaticFields, ___AndroidStoreNameMap_10)); }
	inline Dictionary_2_t2611EA63F6500C851632D260D544EEDF382EDE72 * get_AndroidStoreNameMap_10() const { return ___AndroidStoreNameMap_10; }
	inline Dictionary_2_t2611EA63F6500C851632D260D544EEDF382EDE72 ** get_address_of_AndroidStoreNameMap_10() { return &___AndroidStoreNameMap_10; }
	inline void set_AndroidStoreNameMap_10(Dictionary_2_t2611EA63F6500C851632D260D544EEDF382EDE72 * value)
	{
		___AndroidStoreNameMap_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AndroidStoreNameMap_10), (void*)value);
	}
};


// UnityEngine.ScriptableObject
struct  ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_pinvoke : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_com : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
};

// UnityEngine.Shader
struct  Shader_tE2731FF351B74AB4186897484FB01E000C1160CA  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Texture
struct  Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

struct Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
	}
};


// UnityEngine.UI.Navigation
struct  Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07 
{
public:
	// UnityEngine.UI.Navigation_Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnUp_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnDown_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnLeft_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnRight_4;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_1() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_SelectOnUp_1)); }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * get_m_SelectOnUp_1() const { return ___m_SelectOnUp_1; }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A ** get_address_of_m_SelectOnUp_1() { return &___m_SelectOnUp_1; }
	inline void set_m_SelectOnUp_1(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * value)
	{
		___m_SelectOnUp_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_2() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_SelectOnDown_2)); }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * get_m_SelectOnDown_2() const { return ___m_SelectOnDown_2; }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A ** get_address_of_m_SelectOnDown_2() { return &___m_SelectOnDown_2; }
	inline void set_m_SelectOnDown_2(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * value)
	{
		___m_SelectOnDown_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_3() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_SelectOnLeft_3)); }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * get_m_SelectOnLeft_3() const { return ___m_SelectOnLeft_3; }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A ** get_address_of_m_SelectOnLeft_3() { return &___m_SelectOnLeft_3; }
	inline void set_m_SelectOnLeft_3(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * value)
	{
		___m_SelectOnLeft_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_4() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_SelectOnRight_4)); }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * get_m_SelectOnRight_4() const { return ___m_SelectOnRight_4; }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A ** get_address_of_m_SelectOnRight_4() { return &___m_SelectOnRight_4; }
	inline void set_m_SelectOnRight_4(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * value)
	{
		___m_SelectOnRight_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_4), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnUp_1;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnDown_2;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnLeft_3;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnRight_4;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07_marshaled_com
{
	int32_t ___m_Mode_0;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnUp_1;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnDown_2;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnLeft_3;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnRight_4;
};

// DragonBones.ListenerDelegate`1<DragonBones.EventObject>
struct  ListenerDelegate_1_t8A277CC3A9ACC68F27B82B7C1E142E28D68A6DAF  : public MulticastDelegate_t
{
public:

public:
};


// DragonBones.UnityDragonBonesData
struct  UnityDragonBonesData_tB3459525029FD10A37DB7C21A177BEF36E9E0C74  : public ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734
{
public:
	// System.String DragonBones.UnityDragonBonesData::dataName
	String_t* ___dataName_4;
	// UnityEngine.TextAsset DragonBones.UnityDragonBonesData::dragonBonesJSON
	TextAsset_tEE9F5A28C3B564D6BA849C45C13192B9E0EF8D4E * ___dragonBonesJSON_5;
	// DragonBones.UnityDragonBonesData_TextureAtlas[] DragonBones.UnityDragonBonesData::textureAtlas
	TextureAtlasU5BU5D_tBD6C7BEFB09DA0FAF6741522C574C15C17696780* ___textureAtlas_6;

public:
	inline static int32_t get_offset_of_dataName_4() { return static_cast<int32_t>(offsetof(UnityDragonBonesData_tB3459525029FD10A37DB7C21A177BEF36E9E0C74, ___dataName_4)); }
	inline String_t* get_dataName_4() const { return ___dataName_4; }
	inline String_t** get_address_of_dataName_4() { return &___dataName_4; }
	inline void set_dataName_4(String_t* value)
	{
		___dataName_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataName_4), (void*)value);
	}

	inline static int32_t get_offset_of_dragonBonesJSON_5() { return static_cast<int32_t>(offsetof(UnityDragonBonesData_tB3459525029FD10A37DB7C21A177BEF36E9E0C74, ___dragonBonesJSON_5)); }
	inline TextAsset_tEE9F5A28C3B564D6BA849C45C13192B9E0EF8D4E * get_dragonBonesJSON_5() const { return ___dragonBonesJSON_5; }
	inline TextAsset_tEE9F5A28C3B564D6BA849C45C13192B9E0EF8D4E ** get_address_of_dragonBonesJSON_5() { return &___dragonBonesJSON_5; }
	inline void set_dragonBonesJSON_5(TextAsset_tEE9F5A28C3B564D6BA849C45C13192B9E0EF8D4E * value)
	{
		___dragonBonesJSON_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dragonBonesJSON_5), (void*)value);
	}

	inline static int32_t get_offset_of_textureAtlas_6() { return static_cast<int32_t>(offsetof(UnityDragonBonesData_tB3459525029FD10A37DB7C21A177BEF36E9E0C74, ___textureAtlas_6)); }
	inline TextureAtlasU5BU5D_tBD6C7BEFB09DA0FAF6741522C574C15C17696780* get_textureAtlas_6() const { return ___textureAtlas_6; }
	inline TextureAtlasU5BU5D_tBD6C7BEFB09DA0FAF6741522C574C15C17696780** get_address_of_textureAtlas_6() { return &___textureAtlas_6; }
	inline void set_textureAtlas_6(TextureAtlasU5BU5D_tBD6C7BEFB09DA0FAF6741522C574C15C17696780* value)
	{
		___textureAtlas_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textureAtlas_6), (void*)value);
	}
};


// System.Action`1<System.Boolean>
struct  Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<System.String>
struct  Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.Purchasing.RestoreTransactionIDState>
struct  Action_1_t00DFDFD25560DD25965E88CC7C430D0703EFA9BF  : public MulticastDelegate_t
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


// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Events.UnityAction
struct  UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Texture2D
struct  Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C  : public Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Camera
struct  Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields
{
public:
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPreCull_4;
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPreRender_5;
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// DragonBones.UnityEventDispatcher`1<DragonBones.EventObject>
struct  UnityEventDispatcher_1_tD088000761A00FCC2D3B148E638CBBEDEDECB0A5  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,DragonBones.ListenerDelegate`1<T>> DragonBones.UnityEventDispatcher`1::_listeners
	Dictionary_2_t008A1E1E063125ABBA93E1817835C669C87A89CD * ____listeners_4;

public:
	inline static int32_t get_offset_of__listeners_4() { return static_cast<int32_t>(offsetof(UnityEventDispatcher_1_tD088000761A00FCC2D3B148E638CBBEDEDECB0A5, ____listeners_4)); }
	inline Dictionary_2_t008A1E1E063125ABBA93E1817835C669C87A89CD * get__listeners_4() const { return ____listeners_4; }
	inline Dictionary_2_t008A1E1E063125ABBA93E1817835C669C87A89CD ** get_address_of__listeners_4() { return &____listeners_4; }
	inline void set__listeners_4(Dictionary_2_t008A1E1E063125ABBA93E1817835C669C87A89CD * value)
	{
		____listeners_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____listeners_4), (void*)value);
	}
};


// IAPDemoProductUI
struct  IAPDemoProductUI_t8DBFAD3179124DEECE0AD4EAB86EBF7779823C84  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.UI.Button IAPDemoProductUI::purchaseButton
	Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * ___purchaseButton_4;
	// UnityEngine.UI.Button IAPDemoProductUI::receiptButton
	Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * ___receiptButton_5;
	// UnityEngine.UI.Text IAPDemoProductUI::titleText
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___titleText_6;
	// UnityEngine.UI.Text IAPDemoProductUI::descriptionText
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___descriptionText_7;
	// UnityEngine.UI.Text IAPDemoProductUI::priceText
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___priceText_8;
	// UnityEngine.UI.Text IAPDemoProductUI::statusText
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___statusText_9;
	// System.String IAPDemoProductUI::m_ProductID
	String_t* ___m_ProductID_10;
	// System.Action`1<System.String> IAPDemoProductUI::m_PurchaseCallback
	Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * ___m_PurchaseCallback_11;
	// System.String IAPDemoProductUI::m_Receipt
	String_t* ___m_Receipt_12;

public:
	inline static int32_t get_offset_of_purchaseButton_4() { return static_cast<int32_t>(offsetof(IAPDemoProductUI_t8DBFAD3179124DEECE0AD4EAB86EBF7779823C84, ___purchaseButton_4)); }
	inline Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * get_purchaseButton_4() const { return ___purchaseButton_4; }
	inline Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B ** get_address_of_purchaseButton_4() { return &___purchaseButton_4; }
	inline void set_purchaseButton_4(Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * value)
	{
		___purchaseButton_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___purchaseButton_4), (void*)value);
	}

	inline static int32_t get_offset_of_receiptButton_5() { return static_cast<int32_t>(offsetof(IAPDemoProductUI_t8DBFAD3179124DEECE0AD4EAB86EBF7779823C84, ___receiptButton_5)); }
	inline Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * get_receiptButton_5() const { return ___receiptButton_5; }
	inline Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B ** get_address_of_receiptButton_5() { return &___receiptButton_5; }
	inline void set_receiptButton_5(Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * value)
	{
		___receiptButton_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___receiptButton_5), (void*)value);
	}

	inline static int32_t get_offset_of_titleText_6() { return static_cast<int32_t>(offsetof(IAPDemoProductUI_t8DBFAD3179124DEECE0AD4EAB86EBF7779823C84, ___titleText_6)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_titleText_6() const { return ___titleText_6; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_titleText_6() { return &___titleText_6; }
	inline void set_titleText_6(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___titleText_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___titleText_6), (void*)value);
	}

	inline static int32_t get_offset_of_descriptionText_7() { return static_cast<int32_t>(offsetof(IAPDemoProductUI_t8DBFAD3179124DEECE0AD4EAB86EBF7779823C84, ___descriptionText_7)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_descriptionText_7() const { return ___descriptionText_7; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_descriptionText_7() { return &___descriptionText_7; }
	inline void set_descriptionText_7(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___descriptionText_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___descriptionText_7), (void*)value);
	}

	inline static int32_t get_offset_of_priceText_8() { return static_cast<int32_t>(offsetof(IAPDemoProductUI_t8DBFAD3179124DEECE0AD4EAB86EBF7779823C84, ___priceText_8)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_priceText_8() const { return ___priceText_8; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_priceText_8() { return &___priceText_8; }
	inline void set_priceText_8(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___priceText_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___priceText_8), (void*)value);
	}

	inline static int32_t get_offset_of_statusText_9() { return static_cast<int32_t>(offsetof(IAPDemoProductUI_t8DBFAD3179124DEECE0AD4EAB86EBF7779823C84, ___statusText_9)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_statusText_9() const { return ___statusText_9; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_statusText_9() { return &___statusText_9; }
	inline void set_statusText_9(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___statusText_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___statusText_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_ProductID_10() { return static_cast<int32_t>(offsetof(IAPDemoProductUI_t8DBFAD3179124DEECE0AD4EAB86EBF7779823C84, ___m_ProductID_10)); }
	inline String_t* get_m_ProductID_10() const { return ___m_ProductID_10; }
	inline String_t** get_address_of_m_ProductID_10() { return &___m_ProductID_10; }
	inline void set_m_ProductID_10(String_t* value)
	{
		___m_ProductID_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ProductID_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_PurchaseCallback_11() { return static_cast<int32_t>(offsetof(IAPDemoProductUI_t8DBFAD3179124DEECE0AD4EAB86EBF7779823C84, ___m_PurchaseCallback_11)); }
	inline Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * get_m_PurchaseCallback_11() const { return ___m_PurchaseCallback_11; }
	inline Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 ** get_address_of_m_PurchaseCallback_11() { return &___m_PurchaseCallback_11; }
	inline void set_m_PurchaseCallback_11(Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * value)
	{
		___m_PurchaseCallback_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PurchaseCallback_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Receipt_12() { return static_cast<int32_t>(offsetof(IAPDemoProductUI_t8DBFAD3179124DEECE0AD4EAB86EBF7779823C84, ___m_Receipt_12)); }
	inline String_t* get_m_Receipt_12() const { return ___m_Receipt_12; }
	inline String_t** get_address_of_m_Receipt_12() { return &___m_Receipt_12; }
	inline void set_m_Receipt_12(String_t* value)
	{
		___m_Receipt_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Receipt_12), (void*)value);
	}
};


// LightTest
struct  LightTest_t629736CB84CF4476B580264298728798C28C9240  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Transform LightTest::target
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___target_4;

public:
	inline static int32_t get_offset_of_target_4() { return static_cast<int32_t>(offsetof(LightTest_t629736CB84CF4476B580264298728798C28C9240, ___target_4)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_target_4() const { return ___target_4; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_target_4() { return &___target_4; }
	inline void set_target_4(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___target_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_4), (void*)value);
	}
};


// ReplaceDisplayTextureTest
struct  ReplaceDisplayTextureTest_t323A6BB65AADF7C1610EFF11FCEA741D7F01AB99  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.String ReplaceDisplayTextureTest::dragonBonesName
	String_t* ___dragonBonesName_4;
	// System.String ReplaceDisplayTextureTest::armatureName
	String_t* ___armatureName_5;
	// System.String ReplaceDisplayTextureTest::slotName
	String_t* ___slotName_6;
	// System.String ReplaceDisplayTextureTest::displayName
	String_t* ___displayName_7;
	// UnityEngine.Texture2D ReplaceDisplayTextureTest::replaceTex
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___replaceTex_8;
	// System.String ReplaceDisplayTextureTest::replaceSlot
	String_t* ___replaceSlot_9;

public:
	inline static int32_t get_offset_of_dragonBonesName_4() { return static_cast<int32_t>(offsetof(ReplaceDisplayTextureTest_t323A6BB65AADF7C1610EFF11FCEA741D7F01AB99, ___dragonBonesName_4)); }
	inline String_t* get_dragonBonesName_4() const { return ___dragonBonesName_4; }
	inline String_t** get_address_of_dragonBonesName_4() { return &___dragonBonesName_4; }
	inline void set_dragonBonesName_4(String_t* value)
	{
		___dragonBonesName_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dragonBonesName_4), (void*)value);
	}

	inline static int32_t get_offset_of_armatureName_5() { return static_cast<int32_t>(offsetof(ReplaceDisplayTextureTest_t323A6BB65AADF7C1610EFF11FCEA741D7F01AB99, ___armatureName_5)); }
	inline String_t* get_armatureName_5() const { return ___armatureName_5; }
	inline String_t** get_address_of_armatureName_5() { return &___armatureName_5; }
	inline void set_armatureName_5(String_t* value)
	{
		___armatureName_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___armatureName_5), (void*)value);
	}

	inline static int32_t get_offset_of_slotName_6() { return static_cast<int32_t>(offsetof(ReplaceDisplayTextureTest_t323A6BB65AADF7C1610EFF11FCEA741D7F01AB99, ___slotName_6)); }
	inline String_t* get_slotName_6() const { return ___slotName_6; }
	inline String_t** get_address_of_slotName_6() { return &___slotName_6; }
	inline void set_slotName_6(String_t* value)
	{
		___slotName_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___slotName_6), (void*)value);
	}

	inline static int32_t get_offset_of_displayName_7() { return static_cast<int32_t>(offsetof(ReplaceDisplayTextureTest_t323A6BB65AADF7C1610EFF11FCEA741D7F01AB99, ___displayName_7)); }
	inline String_t* get_displayName_7() const { return ___displayName_7; }
	inline String_t** get_address_of_displayName_7() { return &___displayName_7; }
	inline void set_displayName_7(String_t* value)
	{
		___displayName_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___displayName_7), (void*)value);
	}

	inline static int32_t get_offset_of_replaceTex_8() { return static_cast<int32_t>(offsetof(ReplaceDisplayTextureTest_t323A6BB65AADF7C1610EFF11FCEA741D7F01AB99, ___replaceTex_8)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_replaceTex_8() const { return ___replaceTex_8; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_replaceTex_8() { return &___replaceTex_8; }
	inline void set_replaceTex_8(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___replaceTex_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___replaceTex_8), (void*)value);
	}

	inline static int32_t get_offset_of_replaceSlot_9() { return static_cast<int32_t>(offsetof(ReplaceDisplayTextureTest_t323A6BB65AADF7C1610EFF11FCEA741D7F01AB99, ___replaceSlot_9)); }
	inline String_t* get_replaceSlot_9() const { return ___replaceSlot_9; }
	inline String_t** get_address_of_replaceSlot_9() { return &___replaceSlot_9; }
	inline void set_replaceSlot_9(String_t* value)
	{
		___replaceSlot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___replaceSlot_9), (void*)value);
	}
};


// ReplaceSlotDisplay
struct  ReplaceSlotDisplay_tD5D96946B66902C5AAA957FEF2C90F89FCBD6E5C  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Int32 ReplaceSlotDisplay::_displayIndex
	int32_t ____displayIndex_4;
	// System.String[] ReplaceSlotDisplay::_replaceDisplays
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ____replaceDisplays_5;
	// DragonBones.UnityDragonBonesData ReplaceSlotDisplay::replaceData
	UnityDragonBonesData_tB3459525029FD10A37DB7C21A177BEF36E9E0C74 * ___replaceData_6;
	// DragonBones.UnityArmatureComponent ReplaceSlotDisplay::_armatureComponent
	UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7 * ____armatureComponent_7;

public:
	inline static int32_t get_offset_of__displayIndex_4() { return static_cast<int32_t>(offsetof(ReplaceSlotDisplay_tD5D96946B66902C5AAA957FEF2C90F89FCBD6E5C, ____displayIndex_4)); }
	inline int32_t get__displayIndex_4() const { return ____displayIndex_4; }
	inline int32_t* get_address_of__displayIndex_4() { return &____displayIndex_4; }
	inline void set__displayIndex_4(int32_t value)
	{
		____displayIndex_4 = value;
	}

	inline static int32_t get_offset_of__replaceDisplays_5() { return static_cast<int32_t>(offsetof(ReplaceSlotDisplay_tD5D96946B66902C5AAA957FEF2C90F89FCBD6E5C, ____replaceDisplays_5)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get__replaceDisplays_5() const { return ____replaceDisplays_5; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of__replaceDisplays_5() { return &____replaceDisplays_5; }
	inline void set__replaceDisplays_5(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		____replaceDisplays_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____replaceDisplays_5), (void*)value);
	}

	inline static int32_t get_offset_of_replaceData_6() { return static_cast<int32_t>(offsetof(ReplaceSlotDisplay_tD5D96946B66902C5AAA957FEF2C90F89FCBD6E5C, ___replaceData_6)); }
	inline UnityDragonBonesData_tB3459525029FD10A37DB7C21A177BEF36E9E0C74 * get_replaceData_6() const { return ___replaceData_6; }
	inline UnityDragonBonesData_tB3459525029FD10A37DB7C21A177BEF36E9E0C74 ** get_address_of_replaceData_6() { return &___replaceData_6; }
	inline void set_replaceData_6(UnityDragonBonesData_tB3459525029FD10A37DB7C21A177BEF36E9E0C74 * value)
	{
		___replaceData_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___replaceData_6), (void*)value);
	}

	inline static int32_t get_offset_of__armatureComponent_7() { return static_cast<int32_t>(offsetof(ReplaceSlotDisplay_tD5D96946B66902C5AAA957FEF2C90F89FCBD6E5C, ____armatureComponent_7)); }
	inline UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7 * get__armatureComponent_7() const { return ____armatureComponent_7; }
	inline UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7 ** get_address_of__armatureComponent_7() { return &____armatureComponent_7; }
	inline void set__armatureComponent_7(UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7 * value)
	{
		____armatureComponent_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____armatureComponent_7), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// UnityEngine.Purchasing.DemoInventory
struct  DemoInventory_tEE67406267DE534F798D930E84602CC4F0584EE7  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// UnityEngine.Purchasing.IAPButton
struct  IAPButton_t1BDE7DF230194C47716F1AD10806094D8DE39CD9  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.String UnityEngine.Purchasing.IAPButton::productId
	String_t* ___productId_4;
	// UnityEngine.Purchasing.IAPButton_ButtonType UnityEngine.Purchasing.IAPButton::buttonType
	int32_t ___buttonType_5;
	// System.Boolean UnityEngine.Purchasing.IAPButton::consumePurchase
	bool ___consumePurchase_6;
	// UnityEngine.Purchasing.IAPButton_OnPurchaseCompletedEvent UnityEngine.Purchasing.IAPButton::onPurchaseComplete
	OnPurchaseCompletedEvent_tE1F6B944B4FED7F7744C50608F2A02E711C82BB5 * ___onPurchaseComplete_7;
	// UnityEngine.Purchasing.IAPButton_OnPurchaseFailedEvent UnityEngine.Purchasing.IAPButton::onPurchaseFailed
	OnPurchaseFailedEvent_t12785B755627F44DD9D18B1141669474E76083E9 * ___onPurchaseFailed_8;
	// UnityEngine.UI.Text UnityEngine.Purchasing.IAPButton::titleText
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___titleText_9;
	// UnityEngine.UI.Text UnityEngine.Purchasing.IAPButton::descriptionText
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___descriptionText_10;
	// UnityEngine.UI.Text UnityEngine.Purchasing.IAPButton::priceText
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___priceText_11;

public:
	inline static int32_t get_offset_of_productId_4() { return static_cast<int32_t>(offsetof(IAPButton_t1BDE7DF230194C47716F1AD10806094D8DE39CD9, ___productId_4)); }
	inline String_t* get_productId_4() const { return ___productId_4; }
	inline String_t** get_address_of_productId_4() { return &___productId_4; }
	inline void set_productId_4(String_t* value)
	{
		___productId_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___productId_4), (void*)value);
	}

	inline static int32_t get_offset_of_buttonType_5() { return static_cast<int32_t>(offsetof(IAPButton_t1BDE7DF230194C47716F1AD10806094D8DE39CD9, ___buttonType_5)); }
	inline int32_t get_buttonType_5() const { return ___buttonType_5; }
	inline int32_t* get_address_of_buttonType_5() { return &___buttonType_5; }
	inline void set_buttonType_5(int32_t value)
	{
		___buttonType_5 = value;
	}

	inline static int32_t get_offset_of_consumePurchase_6() { return static_cast<int32_t>(offsetof(IAPButton_t1BDE7DF230194C47716F1AD10806094D8DE39CD9, ___consumePurchase_6)); }
	inline bool get_consumePurchase_6() const { return ___consumePurchase_6; }
	inline bool* get_address_of_consumePurchase_6() { return &___consumePurchase_6; }
	inline void set_consumePurchase_6(bool value)
	{
		___consumePurchase_6 = value;
	}

	inline static int32_t get_offset_of_onPurchaseComplete_7() { return static_cast<int32_t>(offsetof(IAPButton_t1BDE7DF230194C47716F1AD10806094D8DE39CD9, ___onPurchaseComplete_7)); }
	inline OnPurchaseCompletedEvent_tE1F6B944B4FED7F7744C50608F2A02E711C82BB5 * get_onPurchaseComplete_7() const { return ___onPurchaseComplete_7; }
	inline OnPurchaseCompletedEvent_tE1F6B944B4FED7F7744C50608F2A02E711C82BB5 ** get_address_of_onPurchaseComplete_7() { return &___onPurchaseComplete_7; }
	inline void set_onPurchaseComplete_7(OnPurchaseCompletedEvent_tE1F6B944B4FED7F7744C50608F2A02E711C82BB5 * value)
	{
		___onPurchaseComplete_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPurchaseComplete_7), (void*)value);
	}

	inline static int32_t get_offset_of_onPurchaseFailed_8() { return static_cast<int32_t>(offsetof(IAPButton_t1BDE7DF230194C47716F1AD10806094D8DE39CD9, ___onPurchaseFailed_8)); }
	inline OnPurchaseFailedEvent_t12785B755627F44DD9D18B1141669474E76083E9 * get_onPurchaseFailed_8() const { return ___onPurchaseFailed_8; }
	inline OnPurchaseFailedEvent_t12785B755627F44DD9D18B1141669474E76083E9 ** get_address_of_onPurchaseFailed_8() { return &___onPurchaseFailed_8; }
	inline void set_onPurchaseFailed_8(OnPurchaseFailedEvent_t12785B755627F44DD9D18B1141669474E76083E9 * value)
	{
		___onPurchaseFailed_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPurchaseFailed_8), (void*)value);
	}

	inline static int32_t get_offset_of_titleText_9() { return static_cast<int32_t>(offsetof(IAPButton_t1BDE7DF230194C47716F1AD10806094D8DE39CD9, ___titleText_9)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_titleText_9() const { return ___titleText_9; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_titleText_9() { return &___titleText_9; }
	inline void set_titleText_9(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___titleText_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___titleText_9), (void*)value);
	}

	inline static int32_t get_offset_of_descriptionText_10() { return static_cast<int32_t>(offsetof(IAPButton_t1BDE7DF230194C47716F1AD10806094D8DE39CD9, ___descriptionText_10)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_descriptionText_10() const { return ___descriptionText_10; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_descriptionText_10() { return &___descriptionText_10; }
	inline void set_descriptionText_10(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___descriptionText_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___descriptionText_10), (void*)value);
	}

	inline static int32_t get_offset_of_priceText_11() { return static_cast<int32_t>(offsetof(IAPButton_t1BDE7DF230194C47716F1AD10806094D8DE39CD9, ___priceText_11)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_priceText_11() const { return ___priceText_11; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_priceText_11() { return &___priceText_11; }
	inline void set_priceText_11(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___priceText_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___priceText_11), (void*)value);
	}
};


// UnityEngine.Purchasing.IAPListener
struct  IAPListener_tA8E5B3850C466201C221D95CF74A9BEA7DC74E61  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Boolean UnityEngine.Purchasing.IAPListener::consumePurchase
	bool ___consumePurchase_4;
	// System.Boolean UnityEngine.Purchasing.IAPListener::dontDestroyOnLoad
	bool ___dontDestroyOnLoad_5;
	// UnityEngine.Purchasing.IAPListener_OnPurchaseCompletedEvent UnityEngine.Purchasing.IAPListener::onPurchaseComplete
	OnPurchaseCompletedEvent_t69F2AA7C2E6305881C5030EEE41E4EBCD72B08C4 * ___onPurchaseComplete_6;
	// UnityEngine.Purchasing.IAPListener_OnPurchaseFailedEvent UnityEngine.Purchasing.IAPListener::onPurchaseFailed
	OnPurchaseFailedEvent_tBE41AD846CDA9B343E1C212C291326AF0B98B026 * ___onPurchaseFailed_7;

public:
	inline static int32_t get_offset_of_consumePurchase_4() { return static_cast<int32_t>(offsetof(IAPListener_tA8E5B3850C466201C221D95CF74A9BEA7DC74E61, ___consumePurchase_4)); }
	inline bool get_consumePurchase_4() const { return ___consumePurchase_4; }
	inline bool* get_address_of_consumePurchase_4() { return &___consumePurchase_4; }
	inline void set_consumePurchase_4(bool value)
	{
		___consumePurchase_4 = value;
	}

	inline static int32_t get_offset_of_dontDestroyOnLoad_5() { return static_cast<int32_t>(offsetof(IAPListener_tA8E5B3850C466201C221D95CF74A9BEA7DC74E61, ___dontDestroyOnLoad_5)); }
	inline bool get_dontDestroyOnLoad_5() const { return ___dontDestroyOnLoad_5; }
	inline bool* get_address_of_dontDestroyOnLoad_5() { return &___dontDestroyOnLoad_5; }
	inline void set_dontDestroyOnLoad_5(bool value)
	{
		___dontDestroyOnLoad_5 = value;
	}

	inline static int32_t get_offset_of_onPurchaseComplete_6() { return static_cast<int32_t>(offsetof(IAPListener_tA8E5B3850C466201C221D95CF74A9BEA7DC74E61, ___onPurchaseComplete_6)); }
	inline OnPurchaseCompletedEvent_t69F2AA7C2E6305881C5030EEE41E4EBCD72B08C4 * get_onPurchaseComplete_6() const { return ___onPurchaseComplete_6; }
	inline OnPurchaseCompletedEvent_t69F2AA7C2E6305881C5030EEE41E4EBCD72B08C4 ** get_address_of_onPurchaseComplete_6() { return &___onPurchaseComplete_6; }
	inline void set_onPurchaseComplete_6(OnPurchaseCompletedEvent_t69F2AA7C2E6305881C5030EEE41E4EBCD72B08C4 * value)
	{
		___onPurchaseComplete_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPurchaseComplete_6), (void*)value);
	}

	inline static int32_t get_offset_of_onPurchaseFailed_7() { return static_cast<int32_t>(offsetof(IAPListener_tA8E5B3850C466201C221D95CF74A9BEA7DC74E61, ___onPurchaseFailed_7)); }
	inline OnPurchaseFailedEvent_tBE41AD846CDA9B343E1C212C291326AF0B98B026 * get_onPurchaseFailed_7() const { return ___onPurchaseFailed_7; }
	inline OnPurchaseFailedEvent_tBE41AD846CDA9B343E1C212C291326AF0B98B026 ** get_address_of_onPurchaseFailed_7() { return &___onPurchaseFailed_7; }
	inline void set_onPurchaseFailed_7(OnPurchaseFailedEvent_tBE41AD846CDA9B343E1C212C291326AF0B98B026 * value)
	{
		___onPurchaseFailed_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPurchaseFailed_7), (void*)value);
	}
};


// coreElement.Bullet
struct  Bullet_tE4257FB0F05939D36A937D95AD60A2AC7E17A747  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// DragonBones.UnityArmatureComponent coreElement.Bullet::_armatureComponent
	UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7 * ____armatureComponent_4;
	// DragonBones.UnityArmatureComponent coreElement.Bullet::_effectComponent
	UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7 * ____effectComponent_5;
	// UnityEngine.Vector3 coreElement.Bullet::_speed
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ____speed_6;

public:
	inline static int32_t get_offset_of__armatureComponent_4() { return static_cast<int32_t>(offsetof(Bullet_tE4257FB0F05939D36A937D95AD60A2AC7E17A747, ____armatureComponent_4)); }
	inline UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7 * get__armatureComponent_4() const { return ____armatureComponent_4; }
	inline UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7 ** get_address_of__armatureComponent_4() { return &____armatureComponent_4; }
	inline void set__armatureComponent_4(UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7 * value)
	{
		____armatureComponent_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____armatureComponent_4), (void*)value);
	}

	inline static int32_t get_offset_of__effectComponent_5() { return static_cast<int32_t>(offsetof(Bullet_tE4257FB0F05939D36A937D95AD60A2AC7E17A747, ____effectComponent_5)); }
	inline UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7 * get__effectComponent_5() const { return ____effectComponent_5; }
	inline UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7 ** get_address_of__effectComponent_5() { return &____effectComponent_5; }
	inline void set__effectComponent_5(UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7 * value)
	{
		____effectComponent_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____effectComponent_5), (void*)value);
	}

	inline static int32_t get_offset_of__speed_6() { return static_cast<int32_t>(offsetof(Bullet_tE4257FB0F05939D36A937D95AD60A2AC7E17A747, ____speed_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get__speed_6() const { return ____speed_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of__speed_6() { return &____speed_6; }
	inline void set__speed_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		____speed_6 = value;
	}
};


// coreElement.CoreElement
struct  CoreElement_tE4AA9E2B7F77B929778F44A58FC2036C30BF2966  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.KeyCode coreElement.CoreElement::left
	int32_t ___left_16;
	// UnityEngine.KeyCode coreElement.CoreElement::right
	int32_t ___right_17;
	// UnityEngine.KeyCode coreElement.CoreElement::up
	int32_t ___up_18;
	// UnityEngine.KeyCode coreElement.CoreElement::down
	int32_t ___down_19;
	// UnityEngine.KeyCode coreElement.CoreElement::switchSkin
	int32_t ___switchSkin_20;
	// UnityEngine.KeyCode coreElement.CoreElement::switchLeftWeapon
	int32_t ___switchLeftWeapon_21;
	// UnityEngine.KeyCode coreElement.CoreElement::switchRightWeapon
	int32_t ___switchRightWeapon_22;
	// System.Boolean coreElement.CoreElement::_isJumpingA
	bool ____isJumpingA_23;
	// System.Boolean coreElement.CoreElement::_isJumpingB
	bool ____isJumpingB_24;
	// System.Boolean coreElement.CoreElement::_isSquating
	bool ____isSquating_25;
	// System.Boolean coreElement.CoreElement::_isAttackingA
	bool ____isAttackingA_26;
	// System.Boolean coreElement.CoreElement::_isAttackingB
	bool ____isAttackingB_27;
	// System.Int32 coreElement.CoreElement::_skinIndex
	int32_t ____skinIndex_28;
	// System.Int32 coreElement.CoreElement::_weaponLeftIndex
	int32_t ____weaponLeftIndex_29;
	// System.Int32 coreElement.CoreElement::_weaponRightIndex
	int32_t ____weaponRightIndex_30;
	// System.Int32 coreElement.CoreElement::_faceDir
	int32_t ____faceDir_31;
	// System.Int32 coreElement.CoreElement::_moveDir
	int32_t ____moveDir_32;
	// System.Int32 coreElement.CoreElement::_aimDir
	int32_t ____aimDir_33;
	// System.Single coreElement.CoreElement::_aimRadian
	float ____aimRadian_34;
	// DragonBones.UnityArmatureComponent coreElement.CoreElement::_armatureComponent
	UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7 * ____armatureComponent_35;
	// DragonBones.Armature coreElement.CoreElement::_weaponLeft
	Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B * ____weaponLeft_36;
	// DragonBones.Armature coreElement.CoreElement::_weaponRight
	Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B * ____weaponRight_37;
	// DragonBones.AnimationState coreElement.CoreElement::_aimState
	AnimationState_tBA6EAAD27D56DD26A61304C93676C337EB761238 * ____aimState_38;
	// DragonBones.AnimationState coreElement.CoreElement::_walkState
	AnimationState_tBA6EAAD27D56DD26A61304C93676C337EB761238 * ____walkState_39;
	// DragonBones.AnimationState coreElement.CoreElement::_attackState
	AnimationState_tBA6EAAD27D56DD26A61304C93676C337EB761238 * ____attackState_40;
	// UnityEngine.Vector2 coreElement.CoreElement::_speed
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ____speed_41;
	// UnityEngine.Vector2 coreElement.CoreElement::_target
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ____target_42;
	// DragonBones.UnityDragonBonesData coreElement.CoreElement::dragonBoneData
	UnityDragonBonesData_tB3459525029FD10A37DB7C21A177BEF36E9E0C74 * ___dragonBoneData_43;
	// DragonBones.UnityDragonBonesData coreElement.CoreElement::skinData
	UnityDragonBonesData_tB3459525029FD10A37DB7C21A177BEF36E9E0C74 * ___skinData_44;
	// DragonBones.UnityDragonBonesData coreElement.CoreElement::weaponData
	UnityDragonBonesData_tB3459525029FD10A37DB7C21A177BEF36E9E0C74 * ___weaponData_45;

public:
	inline static int32_t get_offset_of_left_16() { return static_cast<int32_t>(offsetof(CoreElement_tE4AA9E2B7F77B929778F44A58FC2036C30BF2966, ___left_16)); }
	inline int32_t get_left_16() const { return ___left_16; }
	inline int32_t* get_address_of_left_16() { return &___left_16; }
	inline void set_left_16(int32_t value)
	{
		___left_16 = value;
	}

	inline static int32_t get_offset_of_right_17() { return static_cast<int32_t>(offsetof(CoreElement_tE4AA9E2B7F77B929778F44A58FC2036C30BF2966, ___right_17)); }
	inline int32_t get_right_17() const { return ___right_17; }
	inline int32_t* get_address_of_right_17() { return &___right_17; }
	inline void set_right_17(int32_t value)
	{
		___right_17 = value;
	}

	inline static int32_t get_offset_of_up_18() { return static_cast<int32_t>(offsetof(CoreElement_tE4AA9E2B7F77B929778F44A58FC2036C30BF2966, ___up_18)); }
	inline int32_t get_up_18() const { return ___up_18; }
	inline int32_t* get_address_of_up_18() { return &___up_18; }
	inline void set_up_18(int32_t value)
	{
		___up_18 = value;
	}

	inline static int32_t get_offset_of_down_19() { return static_cast<int32_t>(offsetof(CoreElement_tE4AA9E2B7F77B929778F44A58FC2036C30BF2966, ___down_19)); }
	inline int32_t get_down_19() const { return ___down_19; }
	inline int32_t* get_address_of_down_19() { return &___down_19; }
	inline void set_down_19(int32_t value)
	{
		___down_19 = value;
	}

	inline static int32_t get_offset_of_switchSkin_20() { return static_cast<int32_t>(offsetof(CoreElement_tE4AA9E2B7F77B929778F44A58FC2036C30BF2966, ___switchSkin_20)); }
	inline int32_t get_switchSkin_20() const { return ___switchSkin_20; }
	inline int32_t* get_address_of_switchSkin_20() { return &___switchSkin_20; }
	inline void set_switchSkin_20(int32_t value)
	{
		___switchSkin_20 = value;
	}

	inline static int32_t get_offset_of_switchLeftWeapon_21() { return static_cast<int32_t>(offsetof(CoreElement_tE4AA9E2B7F77B929778F44A58FC2036C30BF2966, ___switchLeftWeapon_21)); }
	inline int32_t get_switchLeftWeapon_21() const { return ___switchLeftWeapon_21; }
	inline int32_t* get_address_of_switchLeftWeapon_21() { return &___switchLeftWeapon_21; }
	inline void set_switchLeftWeapon_21(int32_t value)
	{
		___switchLeftWeapon_21 = value;
	}

	inline static int32_t get_offset_of_switchRightWeapon_22() { return static_cast<int32_t>(offsetof(CoreElement_tE4AA9E2B7F77B929778F44A58FC2036C30BF2966, ___switchRightWeapon_22)); }
	inline int32_t get_switchRightWeapon_22() const { return ___switchRightWeapon_22; }
	inline int32_t* get_address_of_switchRightWeapon_22() { return &___switchRightWeapon_22; }
	inline void set_switchRightWeapon_22(int32_t value)
	{
		___switchRightWeapon_22 = value;
	}

	inline static int32_t get_offset_of__isJumpingA_23() { return static_cast<int32_t>(offsetof(CoreElement_tE4AA9E2B7F77B929778F44A58FC2036C30BF2966, ____isJumpingA_23)); }
	inline bool get__isJumpingA_23() const { return ____isJumpingA_23; }
	inline bool* get_address_of__isJumpingA_23() { return &____isJumpingA_23; }
	inline void set__isJumpingA_23(bool value)
	{
		____isJumpingA_23 = value;
	}

	inline static int32_t get_offset_of__isJumpingB_24() { return static_cast<int32_t>(offsetof(CoreElement_tE4AA9E2B7F77B929778F44A58FC2036C30BF2966, ____isJumpingB_24)); }
	inline bool get__isJumpingB_24() const { return ____isJumpingB_24; }
	inline bool* get_address_of__isJumpingB_24() { return &____isJumpingB_24; }
	inline void set__isJumpingB_24(bool value)
	{
		____isJumpingB_24 = value;
	}

	inline static int32_t get_offset_of__isSquating_25() { return static_cast<int32_t>(offsetof(CoreElement_tE4AA9E2B7F77B929778F44A58FC2036C30BF2966, ____isSquating_25)); }
	inline bool get__isSquating_25() const { return ____isSquating_25; }
	inline bool* get_address_of__isSquating_25() { return &____isSquating_25; }
	inline void set__isSquating_25(bool value)
	{
		____isSquating_25 = value;
	}

	inline static int32_t get_offset_of__isAttackingA_26() { return static_cast<int32_t>(offsetof(CoreElement_tE4AA9E2B7F77B929778F44A58FC2036C30BF2966, ____isAttackingA_26)); }
	inline bool get__isAttackingA_26() const { return ____isAttackingA_26; }
	inline bool* get_address_of__isAttackingA_26() { return &____isAttackingA_26; }
	inline void set__isAttackingA_26(bool value)
	{
		____isAttackingA_26 = value;
	}

	inline static int32_t get_offset_of__isAttackingB_27() { return static_cast<int32_t>(offsetof(CoreElement_tE4AA9E2B7F77B929778F44A58FC2036C30BF2966, ____isAttackingB_27)); }
	inline bool get__isAttackingB_27() const { return ____isAttackingB_27; }
	inline bool* get_address_of__isAttackingB_27() { return &____isAttackingB_27; }
	inline void set__isAttackingB_27(bool value)
	{
		____isAttackingB_27 = value;
	}

	inline static int32_t get_offset_of__skinIndex_28() { return static_cast<int32_t>(offsetof(CoreElement_tE4AA9E2B7F77B929778F44A58FC2036C30BF2966, ____skinIndex_28)); }
	inline int32_t get__skinIndex_28() const { return ____skinIndex_28; }
	inline int32_t* get_address_of__skinIndex_28() { return &____skinIndex_28; }
	inline void set__skinIndex_28(int32_t value)
	{
		____skinIndex_28 = value;
	}

	inline static int32_t get_offset_of__weaponLeftIndex_29() { return static_cast<int32_t>(offsetof(CoreElement_tE4AA9E2B7F77B929778F44A58FC2036C30BF2966, ____weaponLeftIndex_29)); }
	inline int32_t get__weaponLeftIndex_29() const { return ____weaponLeftIndex_29; }
	inline int32_t* get_address_of__weaponLeftIndex_29() { return &____weaponLeftIndex_29; }
	inline void set__weaponLeftIndex_29(int32_t value)
	{
		____weaponLeftIndex_29 = value;
	}

	inline static int32_t get_offset_of__weaponRightIndex_30() { return static_cast<int32_t>(offsetof(CoreElement_tE4AA9E2B7F77B929778F44A58FC2036C30BF2966, ____weaponRightIndex_30)); }
	inline int32_t get__weaponRightIndex_30() const { return ____weaponRightIndex_30; }
	inline int32_t* get_address_of__weaponRightIndex_30() { return &____weaponRightIndex_30; }
	inline void set__weaponRightIndex_30(int32_t value)
	{
		____weaponRightIndex_30 = value;
	}

	inline static int32_t get_offset_of__faceDir_31() { return static_cast<int32_t>(offsetof(CoreElement_tE4AA9E2B7F77B929778F44A58FC2036C30BF2966, ____faceDir_31)); }
	inline int32_t get__faceDir_31() const { return ____faceDir_31; }
	inline int32_t* get_address_of__faceDir_31() { return &____faceDir_31; }
	inline void set__faceDir_31(int32_t value)
	{
		____faceDir_31 = value;
	}

	inline static int32_t get_offset_of__moveDir_32() { return static_cast<int32_t>(offsetof(CoreElement_tE4AA9E2B7F77B929778F44A58FC2036C30BF2966, ____moveDir_32)); }
	inline int32_t get__moveDir_32() const { return ____moveDir_32; }
	inline int32_t* get_address_of__moveDir_32() { return &____moveDir_32; }
	inline void set__moveDir_32(int32_t value)
	{
		____moveDir_32 = value;
	}

	inline static int32_t get_offset_of__aimDir_33() { return static_cast<int32_t>(offsetof(CoreElement_tE4AA9E2B7F77B929778F44A58FC2036C30BF2966, ____aimDir_33)); }
	inline int32_t get__aimDir_33() const { return ____aimDir_33; }
	inline int32_t* get_address_of__aimDir_33() { return &____aimDir_33; }
	inline void set__aimDir_33(int32_t value)
	{
		____aimDir_33 = value;
	}

	inline static int32_t get_offset_of__aimRadian_34() { return static_cast<int32_t>(offsetof(CoreElement_tE4AA9E2B7F77B929778F44A58FC2036C30BF2966, ____aimRadian_34)); }
	inline float get__aimRadian_34() const { return ____aimRadian_34; }
	inline float* get_address_of__aimRadian_34() { return &____aimRadian_34; }
	inline void set__aimRadian_34(float value)
	{
		____aimRadian_34 = value;
	}

	inline static int32_t get_offset_of__armatureComponent_35() { return static_cast<int32_t>(offsetof(CoreElement_tE4AA9E2B7F77B929778F44A58FC2036C30BF2966, ____armatureComponent_35)); }
	inline UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7 * get__armatureComponent_35() const { return ____armatureComponent_35; }
	inline UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7 ** get_address_of__armatureComponent_35() { return &____armatureComponent_35; }
	inline void set__armatureComponent_35(UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7 * value)
	{
		____armatureComponent_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____armatureComponent_35), (void*)value);
	}

	inline static int32_t get_offset_of__weaponLeft_36() { return static_cast<int32_t>(offsetof(CoreElement_tE4AA9E2B7F77B929778F44A58FC2036C30BF2966, ____weaponLeft_36)); }
	inline Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B * get__weaponLeft_36() const { return ____weaponLeft_36; }
	inline Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B ** get_address_of__weaponLeft_36() { return &____weaponLeft_36; }
	inline void set__weaponLeft_36(Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B * value)
	{
		____weaponLeft_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____weaponLeft_36), (void*)value);
	}

	inline static int32_t get_offset_of__weaponRight_37() { return static_cast<int32_t>(offsetof(CoreElement_tE4AA9E2B7F77B929778F44A58FC2036C30BF2966, ____weaponRight_37)); }
	inline Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B * get__weaponRight_37() const { return ____weaponRight_37; }
	inline Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B ** get_address_of__weaponRight_37() { return &____weaponRight_37; }
	inline void set__weaponRight_37(Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B * value)
	{
		____weaponRight_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____weaponRight_37), (void*)value);
	}

	inline static int32_t get_offset_of__aimState_38() { return static_cast<int32_t>(offsetof(CoreElement_tE4AA9E2B7F77B929778F44A58FC2036C30BF2966, ____aimState_38)); }
	inline AnimationState_tBA6EAAD27D56DD26A61304C93676C337EB761238 * get__aimState_38() const { return ____aimState_38; }
	inline AnimationState_tBA6EAAD27D56DD26A61304C93676C337EB761238 ** get_address_of__aimState_38() { return &____aimState_38; }
	inline void set__aimState_38(AnimationState_tBA6EAAD27D56DD26A61304C93676C337EB761238 * value)
	{
		____aimState_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____aimState_38), (void*)value);
	}

	inline static int32_t get_offset_of__walkState_39() { return static_cast<int32_t>(offsetof(CoreElement_tE4AA9E2B7F77B929778F44A58FC2036C30BF2966, ____walkState_39)); }
	inline AnimationState_tBA6EAAD27D56DD26A61304C93676C337EB761238 * get__walkState_39() const { return ____walkState_39; }
	inline AnimationState_tBA6EAAD27D56DD26A61304C93676C337EB761238 ** get_address_of__walkState_39() { return &____walkState_39; }
	inline void set__walkState_39(AnimationState_tBA6EAAD27D56DD26A61304C93676C337EB761238 * value)
	{
		____walkState_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____walkState_39), (void*)value);
	}

	inline static int32_t get_offset_of__attackState_40() { return static_cast<int32_t>(offsetof(CoreElement_tE4AA9E2B7F77B929778F44A58FC2036C30BF2966, ____attackState_40)); }
	inline AnimationState_tBA6EAAD27D56DD26A61304C93676C337EB761238 * get__attackState_40() const { return ____attackState_40; }
	inline AnimationState_tBA6EAAD27D56DD26A61304C93676C337EB761238 ** get_address_of__attackState_40() { return &____attackState_40; }
	inline void set__attackState_40(AnimationState_tBA6EAAD27D56DD26A61304C93676C337EB761238 * value)
	{
		____attackState_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____attackState_40), (void*)value);
	}

	inline static int32_t get_offset_of__speed_41() { return static_cast<int32_t>(offsetof(CoreElement_tE4AA9E2B7F77B929778F44A58FC2036C30BF2966, ____speed_41)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get__speed_41() const { return ____speed_41; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of__speed_41() { return &____speed_41; }
	inline void set__speed_41(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		____speed_41 = value;
	}

	inline static int32_t get_offset_of__target_42() { return static_cast<int32_t>(offsetof(CoreElement_tE4AA9E2B7F77B929778F44A58FC2036C30BF2966, ____target_42)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get__target_42() const { return ____target_42; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of__target_42() { return &____target_42; }
	inline void set__target_42(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		____target_42 = value;
	}

	inline static int32_t get_offset_of_dragonBoneData_43() { return static_cast<int32_t>(offsetof(CoreElement_tE4AA9E2B7F77B929778F44A58FC2036C30BF2966, ___dragonBoneData_43)); }
	inline UnityDragonBonesData_tB3459525029FD10A37DB7C21A177BEF36E9E0C74 * get_dragonBoneData_43() const { return ___dragonBoneData_43; }
	inline UnityDragonBonesData_tB3459525029FD10A37DB7C21A177BEF36E9E0C74 ** get_address_of_dragonBoneData_43() { return &___dragonBoneData_43; }
	inline void set_dragonBoneData_43(UnityDragonBonesData_tB3459525029FD10A37DB7C21A177BEF36E9E0C74 * value)
	{
		___dragonBoneData_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dragonBoneData_43), (void*)value);
	}

	inline static int32_t get_offset_of_skinData_44() { return static_cast<int32_t>(offsetof(CoreElement_tE4AA9E2B7F77B929778F44A58FC2036C30BF2966, ___skinData_44)); }
	inline UnityDragonBonesData_tB3459525029FD10A37DB7C21A177BEF36E9E0C74 * get_skinData_44() const { return ___skinData_44; }
	inline UnityDragonBonesData_tB3459525029FD10A37DB7C21A177BEF36E9E0C74 ** get_address_of_skinData_44() { return &___skinData_44; }
	inline void set_skinData_44(UnityDragonBonesData_tB3459525029FD10A37DB7C21A177BEF36E9E0C74 * value)
	{
		___skinData_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___skinData_44), (void*)value);
	}

	inline static int32_t get_offset_of_weaponData_45() { return static_cast<int32_t>(offsetof(CoreElement_tE4AA9E2B7F77B929778F44A58FC2036C30BF2966, ___weaponData_45)); }
	inline UnityDragonBonesData_tB3459525029FD10A37DB7C21A177BEF36E9E0C74 * get_weaponData_45() const { return ___weaponData_45; }
	inline UnityDragonBonesData_tB3459525029FD10A37DB7C21A177BEF36E9E0C74 ** get_address_of_weaponData_45() { return &___weaponData_45; }
	inline void set_weaponData_45(UnityDragonBonesData_tB3459525029FD10A37DB7C21A177BEF36E9E0C74 * value)
	{
		___weaponData_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___weaponData_45), (void*)value);
	}
};

struct CoreElement_tE4AA9E2B7F77B929778F44A58FC2036C30BF2966_StaticFields
{
public:
	// System.String[] coreElement.CoreElement::WEAPON_LEFT_LIST
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___WEAPON_LEFT_LIST_13;
	// System.String[] coreElement.CoreElement::WEAPON_RIGHT_LIST
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___WEAPON_RIGHT_LIST_14;
	// System.String[] coreElement.CoreElement::SKINS
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___SKINS_15;

public:
	inline static int32_t get_offset_of_WEAPON_LEFT_LIST_13() { return static_cast<int32_t>(offsetof(CoreElement_tE4AA9E2B7F77B929778F44A58FC2036C30BF2966_StaticFields, ___WEAPON_LEFT_LIST_13)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_WEAPON_LEFT_LIST_13() const { return ___WEAPON_LEFT_LIST_13; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_WEAPON_LEFT_LIST_13() { return &___WEAPON_LEFT_LIST_13; }
	inline void set_WEAPON_LEFT_LIST_13(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___WEAPON_LEFT_LIST_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WEAPON_LEFT_LIST_13), (void*)value);
	}

	inline static int32_t get_offset_of_WEAPON_RIGHT_LIST_14() { return static_cast<int32_t>(offsetof(CoreElement_tE4AA9E2B7F77B929778F44A58FC2036C30BF2966_StaticFields, ___WEAPON_RIGHT_LIST_14)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_WEAPON_RIGHT_LIST_14() const { return ___WEAPON_RIGHT_LIST_14; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_WEAPON_RIGHT_LIST_14() { return &___WEAPON_RIGHT_LIST_14; }
	inline void set_WEAPON_RIGHT_LIST_14(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___WEAPON_RIGHT_LIST_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WEAPON_RIGHT_LIST_14), (void*)value);
	}

	inline static int32_t get_offset_of_SKINS_15() { return static_cast<int32_t>(offsetof(CoreElement_tE4AA9E2B7F77B929778F44A58FC2036C30BF2966_StaticFields, ___SKINS_15)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_SKINS_15() const { return ___SKINS_15; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_SKINS_15() { return &___SKINS_15; }
	inline void set_SKINS_15(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___SKINS_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SKINS_15), (void*)value);
	}
};


// performanceTest.PerformanceTest
struct  PerformanceTest_t8B45D43C5E749B6982426CFCEC17145D62396754  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// DragonBones.UnityDragonBonesData performanceTest.PerformanceTest::dragonBoneData
	UnityDragonBonesData_tB3459525029FD10A37DB7C21A177BEF36E9E0C74 * ___dragonBoneData_4;

public:
	inline static int32_t get_offset_of_dragonBoneData_4() { return static_cast<int32_t>(offsetof(PerformanceTest_t8B45D43C5E749B6982426CFCEC17145D62396754, ___dragonBoneData_4)); }
	inline UnityDragonBonesData_tB3459525029FD10A37DB7C21A177BEF36E9E0C74 * get_dragonBoneData_4() const { return ___dragonBoneData_4; }
	inline UnityDragonBonesData_tB3459525029FD10A37DB7C21A177BEF36E9E0C74 ** get_address_of_dragonBoneData_4() { return &___dragonBoneData_4; }
	inline void set_dragonBoneData_4(UnityDragonBonesData_tB3459525029FD10A37DB7C21A177BEF36E9E0C74 * value)
	{
		___dragonBoneData_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dragonBoneData_4), (void*)value);
	}
};


// DragonBones.DragonBoneEventDispatcher
struct  DragonBoneEventDispatcher_t29A4A18C068E93A31594ADF0B8C58809EC66C5CC  : public UnityEventDispatcher_1_tD088000761A00FCC2D3B148E638CBBEDEDECB0A5
{
public:

public:
};


// UnityEngine.UI.Graphic
struct  Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8  : public UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___m_RectTransform_11;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * ___m_CanvasRenderer_12;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * ___m_Canvas_13;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_14;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_15;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyLayoutCallback_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyVertsCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyMaterialCallback_18;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___m_CachedMesh_21;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* ___m_CachedUvs_22;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * ___m_ColorTweenRunner_23;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Material_6)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Color_7)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_11() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_RectTransform_11)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_m_RectTransform_11() const { return ___m_RectTransform_11; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_m_RectTransform_11() { return &___m_RectTransform_11; }
	inline void set_m_RectTransform_11(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___m_RectTransform_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_12() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CanvasRenderer_12)); }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * get_m_CanvasRenderer_12() const { return ___m_CanvasRenderer_12; }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 ** get_address_of_m_CanvasRenderer_12() { return &___m_CanvasRenderer_12; }
	inline void set_m_CanvasRenderer_12(CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * value)
	{
		___m_CanvasRenderer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_13() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Canvas_13)); }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * get_m_Canvas_13() const { return ___m_Canvas_13; }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 ** get_address_of_m_Canvas_13() { return &___m_Canvas_13; }
	inline void set_m_Canvas_13(Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * value)
	{
		___m_Canvas_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_14() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_VertsDirty_14)); }
	inline bool get_m_VertsDirty_14() const { return ___m_VertsDirty_14; }
	inline bool* get_address_of_m_VertsDirty_14() { return &___m_VertsDirty_14; }
	inline void set_m_VertsDirty_14(bool value)
	{
		___m_VertsDirty_14 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_MaterialDirty_15)); }
	inline bool get_m_MaterialDirty_15() const { return ___m_MaterialDirty_15; }
	inline bool* get_address_of_m_MaterialDirty_15() { return &___m_MaterialDirty_15; }
	inline void set_m_MaterialDirty_15(bool value)
	{
		___m_MaterialDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_16() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyLayoutCallback_16)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyLayoutCallback_16() const { return ___m_OnDirtyLayoutCallback_16; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyLayoutCallback_16() { return &___m_OnDirtyLayoutCallback_16; }
	inline void set_m_OnDirtyLayoutCallback_16(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyLayoutCallback_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyVertsCallback_17)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyVertsCallback_17() const { return ___m_OnDirtyVertsCallback_17; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyVertsCallback_17() { return &___m_OnDirtyVertsCallback_17; }
	inline void set_m_OnDirtyVertsCallback_17(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyVertsCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyMaterialCallback_18)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyMaterialCallback_18() const { return ___m_OnDirtyMaterialCallback_18; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyMaterialCallback_18() { return &___m_OnDirtyMaterialCallback_18; }
	inline void set_m_OnDirtyMaterialCallback_18(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyMaterialCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_21() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CachedMesh_21)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_m_CachedMesh_21() const { return ___m_CachedMesh_21; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_m_CachedMesh_21() { return &___m_CachedMesh_21; }
	inline void set_m_CachedMesh_21(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___m_CachedMesh_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_22() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CachedUvs_22)); }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* get_m_CachedUvs_22() const { return ___m_CachedUvs_22; }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** get_address_of_m_CachedUvs_22() { return &___m_CachedUvs_22; }
	inline void set_m_CachedUvs_22(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* value)
	{
		___m_CachedUvs_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_23() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_ColorTweenRunner_23)); }
	inline TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * get_m_ColorTweenRunner_23() const { return ___m_ColorTweenRunner_23; }
	inline TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 ** get_address_of_m_ColorTweenRunner_23() { return &___m_ColorTweenRunner_23; }
	inline void set_m_ColorTweenRunner_23(TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * value)
	{
		___m_ColorTweenRunner_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_23), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_24; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_24(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_24 = value;
	}
};

struct Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___s_Mesh_19;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * ___s_VertexHelper_20;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_DefaultUI_4)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_19() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_Mesh_19)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_s_Mesh_19() const { return ___s_Mesh_19; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_s_Mesh_19() { return &___s_Mesh_19; }
	inline void set_s_Mesh_19(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___s_Mesh_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_19), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_20() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_VertexHelper_20)); }
	inline VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * get_s_VertexHelper_20() const { return ___s_VertexHelper_20; }
	inline VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F ** get_address_of_s_VertexHelper_20() { return &___s_VertexHelper_20; }
	inline void set_s_VertexHelper_20(VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * value)
	{
		___s_VertexHelper_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_20), (void*)value);
	}
};


// UnityEngine.UI.Selectable
struct  Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A  : public UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70
{
public:
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07  ___m_Navigation_6;
	// UnityEngine.UI.Selectable_Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_7;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA  ___m_Colors_8;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A  ___m_SpriteState_9;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5 * ___m_AnimationTriggers_10;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_11;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * ___m_TargetGraphic_12;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_13;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_14;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_17;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_tE7746C234F913BA0579DAC892E7288A1C7664A0A * ___m_CanvasGroupCache_18;

public:
	inline static int32_t get_offset_of_m_Navigation_6() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_Navigation_6)); }
	inline Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07  get_m_Navigation_6() const { return ___m_Navigation_6; }
	inline Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07 * get_address_of_m_Navigation_6() { return &___m_Navigation_6; }
	inline void set_m_Navigation_6(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07  value)
	{
		___m_Navigation_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_6))->___m_SelectOnUp_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_6))->___m_SelectOnDown_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_6))->___m_SelectOnLeft_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_6))->___m_SelectOnRight_4), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_7() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_Transition_7)); }
	inline int32_t get_m_Transition_7() const { return ___m_Transition_7; }
	inline int32_t* get_address_of_m_Transition_7() { return &___m_Transition_7; }
	inline void set_m_Transition_7(int32_t value)
	{
		___m_Transition_7 = value;
	}

	inline static int32_t get_offset_of_m_Colors_8() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_Colors_8)); }
	inline ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA  get_m_Colors_8() const { return ___m_Colors_8; }
	inline ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA * get_address_of_m_Colors_8() { return &___m_Colors_8; }
	inline void set_m_Colors_8(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA  value)
	{
		___m_Colors_8 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_9() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_SpriteState_9)); }
	inline SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A  get_m_SpriteState_9() const { return ___m_SpriteState_9; }
	inline SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A * get_address_of_m_SpriteState_9() { return &___m_SpriteState_9; }
	inline void set_m_SpriteState_9(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A  value)
	{
		___m_SpriteState_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_9))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_9))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_9))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_9))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_10() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_AnimationTriggers_10)); }
	inline AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5 * get_m_AnimationTriggers_10() const { return ___m_AnimationTriggers_10; }
	inline AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5 ** get_address_of_m_AnimationTriggers_10() { return &___m_AnimationTriggers_10; }
	inline void set_m_AnimationTriggers_10(AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5 * value)
	{
		___m_AnimationTriggers_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_11() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_Interactable_11)); }
	inline bool get_m_Interactable_11() const { return ___m_Interactable_11; }
	inline bool* get_address_of_m_Interactable_11() { return &___m_Interactable_11; }
	inline void set_m_Interactable_11(bool value)
	{
		___m_Interactable_11 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_12() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_TargetGraphic_12)); }
	inline Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * get_m_TargetGraphic_12() const { return ___m_TargetGraphic_12; }
	inline Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 ** get_address_of_m_TargetGraphic_12() { return &___m_TargetGraphic_12; }
	inline void set_m_TargetGraphic_12(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * value)
	{
		___m_TargetGraphic_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_13() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_GroupsAllowInteraction_13)); }
	inline bool get_m_GroupsAllowInteraction_13() const { return ___m_GroupsAllowInteraction_13; }
	inline bool* get_address_of_m_GroupsAllowInteraction_13() { return &___m_GroupsAllowInteraction_13; }
	inline void set_m_GroupsAllowInteraction_13(bool value)
	{
		___m_GroupsAllowInteraction_13 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_14() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_CurrentIndex_14)); }
	inline int32_t get_m_CurrentIndex_14() const { return ___m_CurrentIndex_14; }
	inline int32_t* get_address_of_m_CurrentIndex_14() { return &___m_CurrentIndex_14; }
	inline void set_m_CurrentIndex_14(int32_t value)
	{
		___m_CurrentIndex_14 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___U3CisPointerInsideU3Ek__BackingField_15)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_15() const { return ___U3CisPointerInsideU3Ek__BackingField_15; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_15() { return &___U3CisPointerInsideU3Ek__BackingField_15; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_15(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___U3CisPointerDownU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_16() const { return ___U3CisPointerDownU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_16() { return &___U3CisPointerDownU3Ek__BackingField_16; }
	inline void set_U3CisPointerDownU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___U3ChasSelectionU3Ek__BackingField_17)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_17() const { return ___U3ChasSelectionU3Ek__BackingField_17; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_17() { return &___U3ChasSelectionU3Ek__BackingField_17; }
	inline void set_U3ChasSelectionU3Ek__BackingField_17(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_18() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_CanvasGroupCache_18)); }
	inline List_1_tE7746C234F913BA0579DAC892E7288A1C7664A0A * get_m_CanvasGroupCache_18() const { return ___m_CanvasGroupCache_18; }
	inline List_1_tE7746C234F913BA0579DAC892E7288A1C7664A0A ** get_address_of_m_CanvasGroupCache_18() { return &___m_CanvasGroupCache_18; }
	inline void set_m_CanvasGroupCache_18(List_1_tE7746C234F913BA0579DAC892E7288A1C7664A0A * value)
	{
		___m_CanvasGroupCache_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_18), (void*)value);
	}
};

struct Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t98F7C5A863B20CD5DBE49CE288038BA954C83F02* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_t98F7C5A863B20CD5DBE49CE288038BA954C83F02* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_t98F7C5A863B20CD5DBE49CE288038BA954C83F02** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_t98F7C5A863B20CD5DBE49CE288038BA954C83F02* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}
};


// DragonBones.UnityArmatureComponent
struct  UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7  : public DragonBoneEventDispatcher_t29A4A18C068E93A31594ADF0B8C58809EC66C5CC
{
public:
	// System.Boolean DragonBones.UnityArmatureComponent::_disposeProxy
	bool ____disposeProxy_6;
	// DragonBones.Armature DragonBones.UnityArmatureComponent::_armature
	Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B * ____armature_7;
	// DragonBones.UnityDragonBonesData DragonBones.UnityArmatureComponent::unityData
	UnityDragonBonesData_tB3459525029FD10A37DB7C21A177BEF36E9E0C74 * ___unityData_8;
	// System.String DragonBones.UnityArmatureComponent::armatureName
	String_t* ___armatureName_9;
	// System.Boolean DragonBones.UnityArmatureComponent::isUGUI
	bool ___isUGUI_10;
	// System.Boolean DragonBones.UnityArmatureComponent::addNormal
	bool ___addNormal_11;
	// UnityEngine.GameObject DragonBones.UnityArmatureComponent::bonesRoot
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___bonesRoot_12;
	// System.Collections.Generic.List`1<DragonBones.UnityBone> DragonBones.UnityArmatureComponent::unityBones
	List_1_tFD4F55D044761D75C5054626EC514109A176F9C5 * ___unityBones_13;
	// System.Boolean DragonBones.UnityArmatureComponent::boneHierarchy
	bool ___boneHierarchy_14;
	// DragonBones.ColorTransform DragonBones.UnityArmatureComponent::_colorTransform
	ColorTransform_t18DB7F60BCC055213D32EFB3EE0638632438118B * ____colorTransform_15;
	// System.String DragonBones.UnityArmatureComponent::animationName
	String_t* ___animationName_16;
	// System.Int32 DragonBones.UnityArmatureComponent::_playTimes
	int32_t ____playTimes_17;
	// System.Single DragonBones.UnityArmatureComponent::_timeScale
	float ____timeScale_18;
	// DragonBones.SortingMode DragonBones.UnityArmatureComponent::_sortingMode
	int32_t ____sortingMode_19;
	// System.String DragonBones.UnityArmatureComponent::_sortingLayerName
	String_t* ____sortingLayerName_20;
	// System.Int32 DragonBones.UnityArmatureComponent::_sortingOrder
	int32_t ____sortingOrder_21;
	// System.Single DragonBones.UnityArmatureComponent::_zSpace
	float ____zSpace_22;
	// System.Boolean DragonBones.UnityArmatureComponent::_flipX
	bool ____flipX_23;
	// System.Boolean DragonBones.UnityArmatureComponent::_flipY
	bool ____flipY_24;
	// System.Boolean DragonBones.UnityArmatureComponent::_hasSortingGroup
	bool ____hasSortingGroup_25;
	// UnityEngine.Rendering.SortingGroup DragonBones.UnityArmatureComponent::_sortingGroup
	SortingGroup_tB115E99DFEC155BA39717DC7970E92586F995AED * ____sortingGroup_26;

public:
	inline static int32_t get_offset_of__disposeProxy_6() { return static_cast<int32_t>(offsetof(UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7, ____disposeProxy_6)); }
	inline bool get__disposeProxy_6() const { return ____disposeProxy_6; }
	inline bool* get_address_of__disposeProxy_6() { return &____disposeProxy_6; }
	inline void set__disposeProxy_6(bool value)
	{
		____disposeProxy_6 = value;
	}

	inline static int32_t get_offset_of__armature_7() { return static_cast<int32_t>(offsetof(UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7, ____armature_7)); }
	inline Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B * get__armature_7() const { return ____armature_7; }
	inline Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B ** get_address_of__armature_7() { return &____armature_7; }
	inline void set__armature_7(Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B * value)
	{
		____armature_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____armature_7), (void*)value);
	}

	inline static int32_t get_offset_of_unityData_8() { return static_cast<int32_t>(offsetof(UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7, ___unityData_8)); }
	inline UnityDragonBonesData_tB3459525029FD10A37DB7C21A177BEF36E9E0C74 * get_unityData_8() const { return ___unityData_8; }
	inline UnityDragonBonesData_tB3459525029FD10A37DB7C21A177BEF36E9E0C74 ** get_address_of_unityData_8() { return &___unityData_8; }
	inline void set_unityData_8(UnityDragonBonesData_tB3459525029FD10A37DB7C21A177BEF36E9E0C74 * value)
	{
		___unityData_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unityData_8), (void*)value);
	}

	inline static int32_t get_offset_of_armatureName_9() { return static_cast<int32_t>(offsetof(UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7, ___armatureName_9)); }
	inline String_t* get_armatureName_9() const { return ___armatureName_9; }
	inline String_t** get_address_of_armatureName_9() { return &___armatureName_9; }
	inline void set_armatureName_9(String_t* value)
	{
		___armatureName_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___armatureName_9), (void*)value);
	}

	inline static int32_t get_offset_of_isUGUI_10() { return static_cast<int32_t>(offsetof(UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7, ___isUGUI_10)); }
	inline bool get_isUGUI_10() const { return ___isUGUI_10; }
	inline bool* get_address_of_isUGUI_10() { return &___isUGUI_10; }
	inline void set_isUGUI_10(bool value)
	{
		___isUGUI_10 = value;
	}

	inline static int32_t get_offset_of_addNormal_11() { return static_cast<int32_t>(offsetof(UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7, ___addNormal_11)); }
	inline bool get_addNormal_11() const { return ___addNormal_11; }
	inline bool* get_address_of_addNormal_11() { return &___addNormal_11; }
	inline void set_addNormal_11(bool value)
	{
		___addNormal_11 = value;
	}

	inline static int32_t get_offset_of_bonesRoot_12() { return static_cast<int32_t>(offsetof(UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7, ___bonesRoot_12)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_bonesRoot_12() const { return ___bonesRoot_12; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_bonesRoot_12() { return &___bonesRoot_12; }
	inline void set_bonesRoot_12(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___bonesRoot_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bonesRoot_12), (void*)value);
	}

	inline static int32_t get_offset_of_unityBones_13() { return static_cast<int32_t>(offsetof(UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7, ___unityBones_13)); }
	inline List_1_tFD4F55D044761D75C5054626EC514109A176F9C5 * get_unityBones_13() const { return ___unityBones_13; }
	inline List_1_tFD4F55D044761D75C5054626EC514109A176F9C5 ** get_address_of_unityBones_13() { return &___unityBones_13; }
	inline void set_unityBones_13(List_1_tFD4F55D044761D75C5054626EC514109A176F9C5 * value)
	{
		___unityBones_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unityBones_13), (void*)value);
	}

	inline static int32_t get_offset_of_boneHierarchy_14() { return static_cast<int32_t>(offsetof(UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7, ___boneHierarchy_14)); }
	inline bool get_boneHierarchy_14() const { return ___boneHierarchy_14; }
	inline bool* get_address_of_boneHierarchy_14() { return &___boneHierarchy_14; }
	inline void set_boneHierarchy_14(bool value)
	{
		___boneHierarchy_14 = value;
	}

	inline static int32_t get_offset_of__colorTransform_15() { return static_cast<int32_t>(offsetof(UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7, ____colorTransform_15)); }
	inline ColorTransform_t18DB7F60BCC055213D32EFB3EE0638632438118B * get__colorTransform_15() const { return ____colorTransform_15; }
	inline ColorTransform_t18DB7F60BCC055213D32EFB3EE0638632438118B ** get_address_of__colorTransform_15() { return &____colorTransform_15; }
	inline void set__colorTransform_15(ColorTransform_t18DB7F60BCC055213D32EFB3EE0638632438118B * value)
	{
		____colorTransform_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____colorTransform_15), (void*)value);
	}

	inline static int32_t get_offset_of_animationName_16() { return static_cast<int32_t>(offsetof(UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7, ___animationName_16)); }
	inline String_t* get_animationName_16() const { return ___animationName_16; }
	inline String_t** get_address_of_animationName_16() { return &___animationName_16; }
	inline void set_animationName_16(String_t* value)
	{
		___animationName_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___animationName_16), (void*)value);
	}

	inline static int32_t get_offset_of__playTimes_17() { return static_cast<int32_t>(offsetof(UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7, ____playTimes_17)); }
	inline int32_t get__playTimes_17() const { return ____playTimes_17; }
	inline int32_t* get_address_of__playTimes_17() { return &____playTimes_17; }
	inline void set__playTimes_17(int32_t value)
	{
		____playTimes_17 = value;
	}

	inline static int32_t get_offset_of__timeScale_18() { return static_cast<int32_t>(offsetof(UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7, ____timeScale_18)); }
	inline float get__timeScale_18() const { return ____timeScale_18; }
	inline float* get_address_of__timeScale_18() { return &____timeScale_18; }
	inline void set__timeScale_18(float value)
	{
		____timeScale_18 = value;
	}

	inline static int32_t get_offset_of__sortingMode_19() { return static_cast<int32_t>(offsetof(UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7, ____sortingMode_19)); }
	inline int32_t get__sortingMode_19() const { return ____sortingMode_19; }
	inline int32_t* get_address_of__sortingMode_19() { return &____sortingMode_19; }
	inline void set__sortingMode_19(int32_t value)
	{
		____sortingMode_19 = value;
	}

	inline static int32_t get_offset_of__sortingLayerName_20() { return static_cast<int32_t>(offsetof(UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7, ____sortingLayerName_20)); }
	inline String_t* get__sortingLayerName_20() const { return ____sortingLayerName_20; }
	inline String_t** get_address_of__sortingLayerName_20() { return &____sortingLayerName_20; }
	inline void set__sortingLayerName_20(String_t* value)
	{
		____sortingLayerName_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____sortingLayerName_20), (void*)value);
	}

	inline static int32_t get_offset_of__sortingOrder_21() { return static_cast<int32_t>(offsetof(UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7, ____sortingOrder_21)); }
	inline int32_t get__sortingOrder_21() const { return ____sortingOrder_21; }
	inline int32_t* get_address_of__sortingOrder_21() { return &____sortingOrder_21; }
	inline void set__sortingOrder_21(int32_t value)
	{
		____sortingOrder_21 = value;
	}

	inline static int32_t get_offset_of__zSpace_22() { return static_cast<int32_t>(offsetof(UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7, ____zSpace_22)); }
	inline float get__zSpace_22() const { return ____zSpace_22; }
	inline float* get_address_of__zSpace_22() { return &____zSpace_22; }
	inline void set__zSpace_22(float value)
	{
		____zSpace_22 = value;
	}

	inline static int32_t get_offset_of__flipX_23() { return static_cast<int32_t>(offsetof(UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7, ____flipX_23)); }
	inline bool get__flipX_23() const { return ____flipX_23; }
	inline bool* get_address_of__flipX_23() { return &____flipX_23; }
	inline void set__flipX_23(bool value)
	{
		____flipX_23 = value;
	}

	inline static int32_t get_offset_of__flipY_24() { return static_cast<int32_t>(offsetof(UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7, ____flipY_24)); }
	inline bool get__flipY_24() const { return ____flipY_24; }
	inline bool* get_address_of__flipY_24() { return &____flipY_24; }
	inline void set__flipY_24(bool value)
	{
		____flipY_24 = value;
	}

	inline static int32_t get_offset_of__hasSortingGroup_25() { return static_cast<int32_t>(offsetof(UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7, ____hasSortingGroup_25)); }
	inline bool get__hasSortingGroup_25() const { return ____hasSortingGroup_25; }
	inline bool* get_address_of__hasSortingGroup_25() { return &____hasSortingGroup_25; }
	inline void set__hasSortingGroup_25(bool value)
	{
		____hasSortingGroup_25 = value;
	}

	inline static int32_t get_offset_of__sortingGroup_26() { return static_cast<int32_t>(offsetof(UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7, ____sortingGroup_26)); }
	inline SortingGroup_tB115E99DFEC155BA39717DC7970E92586F995AED * get__sortingGroup_26() const { return ____sortingGroup_26; }
	inline SortingGroup_tB115E99DFEC155BA39717DC7970E92586F995AED ** get_address_of__sortingGroup_26() { return &____sortingGroup_26; }
	inline void set__sortingGroup_26(SortingGroup_tB115E99DFEC155BA39717DC7970E92586F995AED * value)
	{
		____sortingGroup_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____sortingGroup_26), (void*)value);
	}
};


// UnityEngine.UI.Button
struct  Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B  : public Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A
{
public:
	// UnityEngine.UI.Button_ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * ___m_OnClick_19;

public:
	inline static int32_t get_offset_of_m_OnClick_19() { return static_cast<int32_t>(offsetof(Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B, ___m_OnClick_19)); }
	inline ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * get_m_OnClick_19() const { return ___m_OnClick_19; }
	inline ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB ** get_address_of_m_OnClick_19() { return &___m_OnClick_19; }
	inline void set_m_OnClick_19(ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * value)
	{
		___m_OnClick_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnClick_19), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F  : public Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_25;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_MaskMaterial_26;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * ___m_ParentMask_27;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_30;
	// UnityEngine.UI.MaskableGraphic_CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * ___m_OnCullStateChanged_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_32;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_33;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___m_Corners_34;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_25() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ShouldRecalculateStencil_25)); }
	inline bool get_m_ShouldRecalculateStencil_25() const { return ___m_ShouldRecalculateStencil_25; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_25() { return &___m_ShouldRecalculateStencil_25; }
	inline void set_m_ShouldRecalculateStencil_25(bool value)
	{
		___m_ShouldRecalculateStencil_25 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_MaskMaterial_26)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_MaskMaterial_26() const { return ___m_MaskMaterial_26; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_MaskMaterial_26() { return &___m_MaskMaterial_26; }
	inline void set_m_MaskMaterial_26(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_MaskMaterial_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ParentMask_27)); }
	inline RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * get_m_ParentMask_27() const { return ___m_ParentMask_27; }
	inline RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B ** get_address_of_m_ParentMask_27() { return &___m_ParentMask_27; }
	inline void set_m_ParentMask_27(RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * value)
	{
		___m_ParentMask_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_Maskable_28)); }
	inline bool get_m_Maskable_28() const { return ___m_Maskable_28; }
	inline bool* get_address_of_m_Maskable_28() { return &___m_Maskable_28; }
	inline void set_m_Maskable_28(bool value)
	{
		___m_Maskable_28 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_IsMaskingGraphic_29)); }
	inline bool get_m_IsMaskingGraphic_29() const { return ___m_IsMaskingGraphic_29; }
	inline bool* get_address_of_m_IsMaskingGraphic_29() { return &___m_IsMaskingGraphic_29; }
	inline void set_m_IsMaskingGraphic_29(bool value)
	{
		___m_IsMaskingGraphic_29 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_IncludeForMasking_30)); }
	inline bool get_m_IncludeForMasking_30() const { return ___m_IncludeForMasking_30; }
	inline bool* get_address_of_m_IncludeForMasking_30() { return &___m_IncludeForMasking_30; }
	inline void set_m_IncludeForMasking_30(bool value)
	{
		___m_IncludeForMasking_30 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_OnCullStateChanged_31)); }
	inline CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * get_m_OnCullStateChanged_31() const { return ___m_OnCullStateChanged_31; }
	inline CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 ** get_address_of_m_OnCullStateChanged_31() { return &___m_OnCullStateChanged_31; }
	inline void set_m_OnCullStateChanged_31(CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * value)
	{
		___m_OnCullStateChanged_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ShouldRecalculate_32)); }
	inline bool get_m_ShouldRecalculate_32() const { return ___m_ShouldRecalculate_32; }
	inline bool* get_address_of_m_ShouldRecalculate_32() { return &___m_ShouldRecalculate_32; }
	inline void set_m_ShouldRecalculate_32(bool value)
	{
		___m_ShouldRecalculate_32 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_StencilValue_33)); }
	inline int32_t get_m_StencilValue_33() const { return ___m_StencilValue_33; }
	inline int32_t* get_address_of_m_StencilValue_33() { return &___m_StencilValue_33; }
	inline void set_m_StencilValue_33(int32_t value)
	{
		___m_StencilValue_33 = value;
	}

	inline static int32_t get_offset_of_m_Corners_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_Corners_34)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_m_Corners_34() const { return ___m_Corners_34; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_m_Corners_34() { return &___m_Corners_34; }
	inline void set_m_Corners_34(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___m_Corners_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_34), (void*)value);
	}
};


// UnityEngine.UI.Text
struct  Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030  : public MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * ___m_FontData_35;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_36;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * ___m_TextCache_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * ___m_TextCacheForLayout_38;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_40;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* ___m_TempVerts_41;

public:
	inline static int32_t get_offset_of_m_FontData_35() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_FontData_35)); }
	inline FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * get_m_FontData_35() const { return ___m_FontData_35; }
	inline FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 ** get_address_of_m_FontData_35() { return &___m_FontData_35; }
	inline void set_m_FontData_35(FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * value)
	{
		___m_FontData_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_35), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_36() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_Text_36)); }
	inline String_t* get_m_Text_36() const { return ___m_Text_36; }
	inline String_t** get_address_of_m_Text_36() { return &___m_Text_36; }
	inline void set_m_Text_36(String_t* value)
	{
		___m_Text_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_37() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TextCache_37)); }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * get_m_TextCache_37() const { return ___m_TextCache_37; }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 ** get_address_of_m_TextCache_37() { return &___m_TextCache_37; }
	inline void set_m_TextCache_37(TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * value)
	{
		___m_TextCache_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_38() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TextCacheForLayout_38)); }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * get_m_TextCacheForLayout_38() const { return ___m_TextCacheForLayout_38; }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 ** get_address_of_m_TextCacheForLayout_38() { return &___m_TextCacheForLayout_38; }
	inline void set_m_TextCacheForLayout_38(TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * value)
	{
		___m_TextCacheForLayout_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_40() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_DisableFontTextureRebuiltCallback_40)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_40() const { return ___m_DisableFontTextureRebuiltCallback_40; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_40() { return &___m_DisableFontTextureRebuiltCallback_40; }
	inline void set_m_DisableFontTextureRebuiltCallback_40(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_40 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_41() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TempVerts_41)); }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* get_m_TempVerts_41() const { return ___m_TempVerts_41; }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A** get_address_of_m_TempVerts_41() { return &___m_TempVerts_41; }
	inline void set_m_TempVerts_41(UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* value)
	{
		___m_TempVerts_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_41), (void*)value);
	}
};

struct Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___s_DefaultText_39;

public:
	inline static int32_t get_offset_of_s_DefaultText_39() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_StaticFields, ___s_DefaultText_39)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_s_DefaultText_39() const { return ___s_DefaultText_39; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_s_DefaultText_39() { return &___s_DefaultText_39; }
	inline void set_s_DefaultText_39(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___s_DefaultText_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_39), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// UnityEngine.Purchasing.Extension.IPurchasingModule[]
struct IPurchasingModuleU5BU5D_tF106F307EE194D8B47140E160F5BC38EDFFF9384  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

public:
	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Purchasing.PayoutDefinition[]
struct PayoutDefinitionU5BU5D_tBED8269F285FBB455D663A4434785D666963059A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) PayoutDefinition_tE787916C6F389E12B8C2F10F3A87CD79B6C2A273 * m_Items[1];

public:
	inline PayoutDefinition_tE787916C6F389E12B8C2F10F3A87CD79B6C2A273 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PayoutDefinition_tE787916C6F389E12B8C2F10F3A87CD79B6C2A273 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PayoutDefinition_tE787916C6F389E12B8C2F10F3A87CD79B6C2A273 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline PayoutDefinition_tE787916C6F389E12B8C2F10F3A87CD79B6C2A273 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PayoutDefinition_tE787916C6F389E12B8C2F10F3A87CD79B6C2A273 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PayoutDefinition_tE787916C6F389E12B8C2F10F3A87CD79B6C2A273 * value)
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


// System.Void System.Action`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_mB86FC1B303E77C41ED0E94FC3592A9CF8DA571D5_gshared (Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m233A1E6EF90A3BA46CD83BFC568F4E4DB4D93CC9_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_gshared_inline (const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m908B647BB9F807676DACE34E3E73475C3C3751D4_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD  List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mFEB000BCBDAB6DE953B2B50CD113641DCF601890_gshared (Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`1<System.Int32Enum>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mABA45A1E0D469C919BA3E91E52598F7CB38EDDE9_gshared (Action_1_tABA1E3BFA092E3309A0ECC53722E4F9826DCE983 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m027706B0C7150736F066D5C663304CB0B80ABBF0_gshared (UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D * __this, RuntimeObject * ___arg00, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Int32Enum>::Invoke(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2_Invoke_m8E0E3910F551485BB28258D9379D14BFAA534A22_gshared (UnityEvent_2_t805AE90FB19A3B2E903161B79BBB4F2DE5ADF91F * __this, RuntimeObject * ___arg00, int32_t ___arg11, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_m38CD236F782AA440F6DDB5D90B4C9DA24CDBA3A7_gshared (UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Int32Enum>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2__ctor_m90C3B8ED5DA3821DD3264EEAD585A64D22D376E8_gshared (UnityEvent_2_t805AE90FB19A3B2E903161B79BBB4F2DE5ADF91F * __this, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* List_1_ToArray_m801D4DEF3587F60F463F04EEABE5CBE711FE5612_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mE03C66715289D7957CA068A675826B7EE0887BE3_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Void DragonBones.ListenerDelegate`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListenerDelegate_1__ctor_m1232C2A649B6736D2949D23DDBEDD00E518FFC91_gshared (ListenerDelegate_1_t81957C6ABBA360EC4D1EAE4B6997277D7AC297C0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void DragonBones.UnityEventDispatcher`1<System.Object>::AddEventListener(System.String,DragonBones.ListenerDelegate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventDispatcher_1_AddEventListener_m2D2866FA853AFA25613C11B2790C510D21C23EF4_gshared (UnityEventDispatcher_1_t6C19C076F8D076CB95638A5781396C782A3796C6 * __this, String_t* ___type0, ListenerDelegate_1_t81957C6ABBA360EC4D1EAE4B6997277D7AC297C0 * ___listener1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mCB8164FB05F8DCF99E098ADC5E13E96FEF6FC4E9_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);

// UnityEngine.Purchasing.ProductMetadata UnityEngine.Purchasing.Product::get_metadata()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR ProductMetadata_t1CAA912963F8B24B34F53CCF29A6E0BD89B33B48 * Product_get_metadata_mE9010636C2A74FD850A4AE25DFD45A249F80224E_inline (Product_t830A133A97BEA12C3CD696853098A295D99A6DE4 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Purchasing.ProductMetadata::get_localizedTitle()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* ProductMetadata_get_localizedTitle_m34F35831026B0CEA68804AC38BB7E9FE17791E8A_inline (ProductMetadata_t1CAA912963F8B24B34F53CCF29A6E0BD89B33B48 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Purchasing.ProductMetadata::get_localizedDescription()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* ProductMetadata_get_localizedDescription_m8EAF1BC690AD022C519087978423B5DE0081E741_inline (ProductMetadata_t1CAA912963F8B24B34F53CCF29A6E0BD89B33B48 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Purchasing.ProductMetadata::get_localizedPriceString()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* ProductMetadata_get_localizedPriceString_mFFE7F069FE5E8DC6BD4CADDF3D9AEC066405795B_inline (ProductMetadata_t1CAA912963F8B24B34F53CCF29A6E0BD89B33B48 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Purchasing.Product::get_hasReceipt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Product_get_hasReceipt_m6CFE365D78E0BF8670BAB71ABEFE962976BF187F (Product_t830A133A97BEA12C3CD696853098A295D99A6DE4 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Selectable::set_interactable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_set_interactable_m91B2707F7B4F46F851C3100A65BEFAA557DCDFDE (Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * __this, bool ___value0, const RuntimeMethod* method);
// System.String UnityEngine.Purchasing.Product::get_receipt()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* Product_get_receipt_m43D6AF51543B3FF31622FCD2511BC8DAB5D230A2_inline (Product_t830A133A97BEA12C3CD696853098A295D99A6DE4 * __this, const RuntimeMethod* method);
// UnityEngine.Purchasing.ProductDefinition UnityEngine.Purchasing.Product::get_definition()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * Product_get_definition_mFA1889844E23D37A700C2EA6659EE3BBF1E17C58_inline (Product_t830A133A97BEA12C3CD696853098A295D99A6DE4 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Purchasing.ProductDefinition::get_id()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* ProductDefinition_get_id_mD5C2A9C1016245C99EB67B74DFC32ECDC8512468_inline (ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Purchasing.Product::get_availableToPurchase()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool Product_get_availableToPurchase_mA4F6F87AA8B83915F1B5E122A10F0CBAFBAE196C_inline (Product_t830A133A97BEA12C3CD696853098A295D99A6DE4 * __this, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229 (String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Action`1<System.String>::Invoke(!0)
inline void Action_1_Invoke_m6328F763431ED2ACDDB6ED8F0FDEA6194403E79F (Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * __this, String_t* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 *, String_t*, const RuntimeMethod*))Action_1_Invoke_mB86FC1B303E77C41ED0E94FC3592A9CF8DA571D5_gshared)(__this, ___obj0, method);
}
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mDD2E38332DED3A8C088D38D78A0E0BEB5091DA64 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D (const RuntimeMethod* method);
// System.Void UnityEngine.Transform::RotateAround(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_RotateAround_m433D292B2A38A5A4DEC7DCAE0A8BEAC5C3B2D1DD (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___point0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___axis1, float ___angle2, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_realtimeSinceStartup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_realtimeSinceStartup_mCA1086EC9DFCF135F77BC46D3B7127711EA3DE03 (const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localEulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localEulerAngles_mC5E92A989DD8B2E7B854F9D84B528A34AEAA1A17 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.Object MiniJSON.Json/Parser::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Parser_Parse_mE7CFB458EF1BBB61C4131ACA249CBE92E81D5C4C (String_t* ___jsonString0, const RuntimeMethod* method);
// System.String MiniJSON.Json/Serializer::Serialize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Serializer_Serialize_mFA8E58DA783194AFCBC666004A06C4D4FF9D6BD0 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean System.Char::IsWhiteSpace(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Char_IsWhiteSpace_m8AE1C4157A1E1D8F5022630F4229AB26223BDC6B (Il2CppChar ___c0, const RuntimeMethod* method);
// System.Int32 System.String::IndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_m2909B8CF585E1BD0C81E11ACA2F48012156FD5BD (String_t* __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.IO.StringReader::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringReader__ctor_mA55383C19EFBC075E762145D88F15A2B8B0CDA17 (StringReader_t3095DEB3D26F40D1A7F9B76835D80AFE70E47E12 * __this, String_t* ___s0, const RuntimeMethod* method);
// System.Void MiniJSON.Json/Parser::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser__ctor_m96ADF8ADDFAF12D86F7A7FB78177F9286F0D53D3 (Parser_t6D190ECCD78CD62DA1F915A8961D37F1C6C50F05 * __this, String_t* ___jsonString0, const RuntimeMethod* method);
// System.Object MiniJSON.Json/Parser::ParseValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Parser_ParseValue_mAB574207E7ADE129E2CE19A066486F0EF4726734 (Parser_t6D190ECCD78CD62DA1F915A8961D37F1C6C50F05 * __this, const RuntimeMethod* method);
// System.Void System.IO.TextReader::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextReader_Dispose_m9DA31CD42D5E73A1452F4EEC014C5703B5872930 (TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor()
inline void Dictionary_2__ctor_mCA7075EA6548A18B929368520217975094841997 (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// MiniJSON.Json/Parser/TOKEN MiniJSON.Json/Parser::get_NextToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Parser_get_NextToken_m894EEF05C3FF5BDA15BDB3EC6ACFC5732FE5F531 (Parser_t6D190ECCD78CD62DA1F915A8961D37F1C6C50F05 * __this, const RuntimeMethod* method);
// System.String MiniJSON.Json/Parser::ParseString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Parser_ParseString_mB6FD7BDCFAB51FF9D401D77CDABDBC13D57D9F2C (Parser_t6D190ECCD78CD62DA1F915A8961D37F1C6C50F05 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_mEA41AEAE79570A9410777F6B90969532564025DD (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * __this, String_t* ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA *, String_t*, RuntimeObject *, const RuntimeMethod*))Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
inline void List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3 (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Object MiniJSON.Json/Parser::ParseByToken(MiniJSON.Json/Parser/TOKEN)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Parser_ParseByToken_m51F2A2B09AED5CB55DA3F8EF5AE61605EED9972F (Parser_t6D190ECCD78CD62DA1F915A8961D37F1C6C50F05 * __this, int32_t ___token0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
inline void List_1_Add_m6930161974C7504C80F52EC379EF012387D43138 (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, RuntimeObject *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, ___item0, method);
}
// System.Object MiniJSON.Json/Parser::ParseNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Parser_ParseNumber_m466ABE116C8AF91A97701A42D4F6D091EE8059DA (Parser_t6D190ECCD78CD62DA1F915A8961D37F1C6C50F05 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2<System.String,System.Object> MiniJSON.Json/Parser::ParseObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * Parser_ParseObject_mE4CDD92559BD01B7AD11D23CA53CDBFD58E6CA6B (Parser_t6D190ECCD78CD62DA1F915A8961D37F1C6C50F05 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1<System.Object> MiniJSON.Json/Parser::ParseArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * Parser_ParseArray_m78D90B8BF3ABAADB783994A8FAA7700B381099A7 (Parser_t6D190ECCD78CD62DA1F915A8961D37F1C6C50F05 * __this, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_mF928376F82E8C8FF3C11842C562DB8CF28B2735E (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Char MiniJSON.Json/Parser::get_NextChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Parser_get_NextChar_mF5EEB11643B9A22E8FD5D6ACD69D0B96C3DD6DC2 (Parser_t6D190ECCD78CD62DA1F915A8961D37F1C6C50F05 * __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A (StringBuilder_t * __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.String System.String::CreateString(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_m394C06654854ADD4C51FF957BE0CC72EF52BAA96 (String_t* __this, CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___val0, const RuntimeMethod* method);
// System.Int32 System.Convert::ToInt32(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m8DC81C7C49EE4A9334E71E45E3A220644E45B4F4 (String_t* ___value0, int32_t ___fromBase1, const RuntimeMethod* method);
// System.String MiniJSON.Json/Parser::get_NextWord()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Parser_get_NextWord_m3B85F7D22F4E4AC975212CED15E49C36C97425AC (Parser_t6D190ECCD78CD62DA1F915A8961D37F1C6C50F05 * __this, const RuntimeMethod* method);
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * CultureInfo_get_InvariantCulture_mF13B47F8A763CE6A9C8A8BB2EED33FF8F7A63A72 (const RuntimeMethod* method);
// System.Boolean System.Int64::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Int64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int64_TryParse_m8CE5F89833C03A091273A4EF48C69E86E1F81ACC (String_t* ___s0, int32_t ___style1, RuntimeObject* ___provider2, int64_t* ___result3, const RuntimeMethod* method);
// System.Boolean System.Double::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Double&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Double_TryParse_m1A7BCBA90DE896E448E3CA09AAD1CA43846567D7 (String_t* ___s0, int32_t ___style1, RuntimeObject* ___provider2, double* ___result3, const RuntimeMethod* method);
// System.Char MiniJSON.Json/Parser::get_PeekChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Parser_get_PeekChar_mA9D1D2F85589251E8046414A7E8ECA05FE298ADA (Parser_t6D190ECCD78CD62DA1F915A8961D37F1C6C50F05 * __this, const RuntimeMethod* method);
// System.Char System.Convert::ToChar(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Convert_ToChar_m5BD134B72978B879B81A824DFAC8FF29F5300245 (int32_t ___value0, const RuntimeMethod* method);
// System.Boolean MiniJSON.Json/Parser::IsWordBreak(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Parser_IsWordBreak_m28C40C2EAD6BE92D855C69C239822E446EFF89EF (Il2CppChar ___c0, const RuntimeMethod* method);
// System.Void MiniJSON.Json/Parser::EatWhitespace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser_EatWhitespace_m8123DF169A4671C0E75FF5D09B6017C3E9A74EBF (Parser_t6D190ECCD78CD62DA1F915A8961D37F1C6C50F05 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void MiniJSON.Json/Serializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer__ctor_mFE9DA80B01A749C7DB99439080F6AB40A15C4FC7 (Serializer_tE5A49C9AA549A4CDC0A5440C1ECC6778E98A377F * __this, const RuntimeMethod* method);
// System.Void MiniJSON.Json/Serializer::SerializeValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeValue_mFF1E97E02EFBCA7684308935281C7F1AF941EA6F (Serializer_tE5A49C9AA549A4CDC0A5440C1ECC6778E98A377F * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260 (StringBuilder_t * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void MiniJSON.Json/Serializer::SerializeString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeString_m14A9434C6FDDED2581495A41C09CB3B78CE1BC55 (Serializer_tE5A49C9AA549A4CDC0A5440C1ECC6778E98A377F * __this, String_t* ___str0, const RuntimeMethod* method);
// System.Void MiniJSON.Json/Serializer::SerializeArray(System.Collections.IList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeArray_m169AADCDE719004976AC63192D2E4A4239D375EB (Serializer_tE5A49C9AA549A4CDC0A5440C1ECC6778E98A377F * __this, RuntimeObject* ___anArray0, const RuntimeMethod* method);
// System.Void MiniJSON.Json/Serializer::SerializeObject(System.Collections.IDictionary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeObject_m727C7C3617E2EB173460858D7ACD36324DD0CD71 (Serializer_tE5A49C9AA549A4CDC0A5440C1ECC6778E98A377F * __this, RuntimeObject* ___obj0, const RuntimeMethod* method);
// System.String System.String::CreateString(System.Char,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_m0E7BBCE09E386877E2B63BF7FA36B956BF221C93 (String_t* __this, Il2CppChar ___c0, int32_t ___count1, const RuntimeMethod* method);
// System.Void MiniJSON.Json/Serializer::SerializeOther(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeOther_m4D46EFFF72A8F103E8028B82393E400F370DAD4B (Serializer_tE5A49C9AA549A4CDC0A5440C1ECC6778E98A377F * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Char[] System.String::ToCharArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* String_ToCharArray_mFCFF32A5EC698E81075E0C72C874282B9ED197A6 (String_t* __this, const RuntimeMethod* method);
// System.Int32 System.Convert::ToInt32(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m8BE65713C8D5E0AD45D53B82A5A7BD187BEBA917 (Il2CppChar ___value0, const RuntimeMethod* method);
// System.String System.Int32::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m5A125A41C41701E41FA0C4CC52CADBC73C1C96D8 (int32_t* __this, String_t* ___format0, const RuntimeMethod* method);
// System.String System.Single::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mCF682C2751EC9B98F1CE5455066B92D7D3356756 (float* __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_mA1A063A1388A21C8EA011DBA7FC98C24C3EE3D65 (StringBuilder_t * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Double System.Convert::ToDouble(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Convert_ToDouble_mAB66BA75AC3CDFA1FEC09E3125EA444B46CD7050 (RuntimeObject * ___value0, const RuntimeMethod* method);
// System.String System.Double::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Double_ToString_m1D341E667E85E9E18783A14CB02982643E96C616 (double* __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<DragonBones.UnityArmatureComponent>()
inline UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7 * Component_GetComponent_TisUnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7_m38DC7945343D1CA8A66E91B02BFC6EC2F6AB9E04 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7 * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m233A1E6EF90A3BA46CD83BFC568F4E4DB4D93CC9_gshared)(__this, method);
}
// DragonBones.UnityFactory DragonBones.UnityFactory::get_factory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityFactory_t170550F12743A129F88E7D1990F607AB2B35C102 * UnityFactory_get_factory_mAB42A18D9FFD7DA2AD11C1084F158EF6491F35DE (const RuntimeMethod* method);
// DragonBones.Armature DragonBones.UnityArmatureComponent::get_armature()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B * UnityArmatureComponent_get_armature_m52B12A650A67494C88B824EA4EF071F4C6C77A49_inline (UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7 * __this, const RuntimeMethod* method);
// DragonBones.Slot DragonBones.Armature::GetSlot(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Slot_t9D06B371824C1B67E43A10A17D18BC3EF71E3867 * Armature_GetSlot_m81C3F2C377DF8A76A98FBE724344EB6E970A319C (Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B * __this, String_t* ___name0, const RuntimeMethod* method);
// UnityEngine.Shader UnityEngine.Shader::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tE2731FF351B74AB4186897484FB01E000C1160CA * Shader_Find_m755654AA68D1C663A3E20A10E00CDC10F96C962B (String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::.ctor(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_m81E76B5C1316004F25D4FE9CEC0E78A7428DABA8 (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, Shader_tE2731FF351B74AB4186897484FB01E000C1160CA * ___shader0, const RuntimeMethod* method);
// System.Void DragonBones.UnityFactory::ReplaceSlotDisplay(System.String,System.String,System.String,System.String,DragonBones.Slot,UnityEngine.Texture2D,UnityEngine.Material,System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityFactory_ReplaceSlotDisplay_m0CB0CC4428543C3FE13C1F9746098DF241CED9DA (UnityFactory_t170550F12743A129F88E7D1990F607AB2B35C102 * __this, String_t* ___dragonBonesName0, String_t* ___armatureName1, String_t* ___slotName2, String_t* ___displayName3, Slot_t9D06B371824C1B67E43A10A17D18BC3EF71E3867 * ___slot4, Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___texture5, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___material6, bool ___isUGUI7, int32_t ___displayIndex8, const RuntimeMethod* method);
// DragonBones.DragonBonesData DragonBones.UnityFactory::LoadData(DragonBones.UnityDragonBonesData,System.Boolean,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DragonBonesData_t2FD2911DD33EA22A2F8A6D2075530ECDD7AC15AD * UnityFactory_LoadData_m0EFB637A0EC5D7CB467D48C9440F753CB8682548 (UnityFactory_t170550F12743A129F88E7D1990F607AB2B35C102 * __this, UnityDragonBonesData_tB3459525029FD10A37DB7C21A177BEF36E9E0C74 * ___data0, bool ___isUGUI1, float ___armatureScale2, float ___texScale3, const RuntimeMethod* method);
// DragonBones.Animation DragonBones.UnityArmatureComponent::get_animation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Animation_t3E64FBA6FBD6680C6EF991689446EBB237888A7C * UnityArmatureComponent_get_animation_m54D8BBEA81DAEFBFD27DD998FE68D28B69A5A964 (UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7 * __this, const RuntimeMethod* method);
// DragonBones.AnimationState DragonBones.Animation::Play(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationState_tBA6EAAD27D56DD26A61304C93676C337EB761238 * Animation_Play_mEBE57E5F0E354B7C3361AC101F8B2C32BC329A40 (Animation_t3E64FBA6FBD6680C6EF991689446EBB237888A7C * __this, String_t* ___animationName0, int32_t ___playTimes1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m5AD76E22AA839706219AD86A4E0BE5276AF8E28A (int32_t ___button0, const RuntimeMethod* method);
// System.Void ReplaceSlotDisplay::_replaceDisplay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReplaceSlotDisplay__replaceDisplay_m3233F9AD60264739EC5F4AEF368FA478BBB5CBF7 (ReplaceSlotDisplay_tD5D96946B66902C5AAA957FEF2C90F89FCBD6E5C * __this, const RuntimeMethod* method);
// System.Int32 System.String::IndexOf(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_mA9A0117D68338238E51E5928CDA8EB3DC9DA497B (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Boolean DragonBones.BaseFactory::ReplaceSlotDisplay(System.String,System.String,System.String,System.String,DragonBones.Slot,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseFactory_ReplaceSlotDisplay_m841FA3B2E34DB847ECCB84A94512E6038348A2BA (BaseFactory_t0F351C3165BC3FF44834228E47FA2AF75DEB546F * __this, String_t* ___dragonBonesName0, String_t* ___armatureName1, String_t* ___slotName2, String_t* ___displayName3, Slot_t9D06B371824C1B67E43A10A17D18BC3EF71E3867 * ___slot4, int32_t ___displayIndex5, const RuntimeMethod* method);
// UnityEngine.Purchasing.ProductCatalog UnityEngine.Purchasing.ProductCatalog::LoadDefaultCatalog()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ProductCatalog_t514386D43815F0DD3BD3695ABBB1BC66351D569E * ProductCatalog_LoadDefaultCatalog_mFFD612023A5A11807241F0BBF5447950A2790B88 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Purchasing.ProductCatalog::IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ProductCatalog_IsEmpty_m8556510D4CAADA94815855AC6386F6B6356363BB (ProductCatalog_t514386D43815F0DD3BD3695ABBB1BC66351D569E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.CodelessIAPStoreListener::CreateCodelessIAPStoreListenerInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodelessIAPStoreListener_CreateCodelessIAPStoreListenerInstance_m65C6E3C5C7DEAF378869FF9667714F8BB5924718 (const RuntimeMethod* method);
// UnityEngine.Purchasing.StandardPurchasingModule UnityEngine.Purchasing.StandardPurchasingModule::Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StandardPurchasingModule_t45E3E7F3D0D8CE91AD85D7BE5B29CBA2235B3BFA * StandardPurchasingModule_Instance_m14764772DB11E71EE7FE080CC8D9F86A3CC3BA83 (const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.StandardPurchasingModule::set_useFakeStoreUIMode(UnityEngine.Purchasing.FakeStoreUIMode)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void StandardPurchasingModule_set_useFakeStoreUIMode_m44AEA2EEB75BAC9FAD893B0B889B45E4289AF404_inline (StandardPurchasingModule_t45E3E7F3D0D8CE91AD85D7BE5B29CBA2235B3BFA * __this, int32_t ___value0, const RuntimeMethod* method);
// !!0[] System.Array::Empty<UnityEngine.Purchasing.Extension.IPurchasingModule>()
inline IPurchasingModuleU5BU5D_tF106F307EE194D8B47140E160F5BC38EDFFF9384* Array_Empty_TisIPurchasingModule_tBA2577ED1E963CA0ABA1DFA359A020982DE0B1BF_m0CD0BAB07A330FACDEA56E1CBB20EADD9FC46A24_inline (const RuntimeMethod* method)
{
	return ((  IPurchasingModuleU5BU5D_tF106F307EE194D8B47140E160F5BC38EDFFF9384* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_gshared_inline)(method);
}
// UnityEngine.Purchasing.ConfigurationBuilder UnityEngine.Purchasing.ConfigurationBuilder::Instance(UnityEngine.Purchasing.Extension.IPurchasingModule,UnityEngine.Purchasing.Extension.IPurchasingModule[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationBuilder_t18C1B421FE4071AD4DB4A340A2A8D51AB090F3AE * ConfigurationBuilder_Instance_m8F4EA19F3C0FF462CCF219D0A019BEADA05E7DA2 (RuntimeObject* ___first0, IPurchasingModuleU5BU5D_tF106F307EE194D8B47140E160F5BC38EDFFF9384* ___rest1, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.IAPConfigurationHelper::PopulateConfigurationBuilder(UnityEngine.Purchasing.ConfigurationBuilder&,UnityEngine.Purchasing.ProductCatalog)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAPConfigurationHelper_PopulateConfigurationBuilder_m46F5A6A79909F4993BF47D6C3D604FA18BC3AAEC (ConfigurationBuilder_t18C1B421FE4071AD4DB4A340A2A8D51AB090F3AE ** ___builder0, ProductCatalog_t514386D43815F0DD3BD3695ABBB1BC66351D569E * ___catalog1, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.UnityPurchasing::Initialize(UnityEngine.Purchasing.IStoreListener,UnityEngine.Purchasing.ConfigurationBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityPurchasing_Initialize_m1BEFCE608B4D495EEB6CF346E51AB8CFB84CBFDC (RuntimeObject* ___listener0, ConfigurationBuilder_t18C1B421FE4071AD4DB4A340A2A8D51AB090F3AE * ___builder1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Purchasing.IAPButton>::.ctor()
inline void List_1__ctor_m4F2D4231DA050B6E45124C9F2DAB801762931117 (List_1_t4EA118A9AAEF1F1654837150C244FCF20A2612C6 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4EA118A9AAEF1F1654837150C244FCF20A2612C6 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Purchasing.IAPListener>::.ctor()
inline void List_1__ctor_m4C2EF68722125098BBB210C4160A22F2E9022E93 (List_1_t9AAA1568B76F8B92C93DB49A597240F9DEEE5E40 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9AAA1568B76F8B92C93DB49A597240F9DEEE5E40 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Void UnityEngine.Purchasing.CodelessIAPStoreListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodelessIAPStoreListener__ctor_m79DA076EC1D979584229414E32BF43162E254250 (CodelessIAPStoreListener_tC0C269A13BAE3B9F9AA24455FAB72340347F7303 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.CodelessIAPStoreListener::InitializePurchasing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodelessIAPStoreListener_InitializePurchasing_mA9B98C1661E8E09DAC4C0EF12081A2B55A4EB608 (const RuntimeMethod* method);
// System.Collections.Generic.ICollection`1<UnityEngine.Purchasing.ProductCatalogItem> UnityEngine.Purchasing.ProductCatalog::get_allProducts()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* ProductCatalog_get_allProducts_m4F35278CE433A5ECD3A1F6F3D0C3306FA7D276B5_inline (ProductCatalog_t514386D43815F0DD3BD3695ABBB1BC66351D569E * __this, const RuntimeMethod* method);
// UnityEngine.Purchasing.Product UnityEngine.Purchasing.ProductCollection::WithID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Product_t830A133A97BEA12C3CD696853098A295D99A6DE4 * ProductCollection_WithID_m7B5AB4C1B658271EC30742DD07D53E9043A816A4 (ProductCollection_t7BE71F2FA5BE05F5DA13EA701B513861516F4C07 * __this, String_t* ___id0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Purchasing.IAPButton>::Add(!0)
inline void List_1_Add_m9233CB4E5C3F715EB55EA830853B435A9ABC246D (List_1_t4EA118A9AAEF1F1654837150C244FCF20A2612C6 * __this, IAPButton_t1BDE7DF230194C47716F1AD10806094D8DE39CD9 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4EA118A9AAEF1F1654837150C244FCF20A2612C6 *, IAPButton_t1BDE7DF230194C47716F1AD10806094D8DE39CD9 *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Purchasing.IAPButton>::Remove(!0)
inline bool List_1_Remove_m84D00513E59C6676CD431B431DB7FE3A653AE5D8 (List_1_t4EA118A9AAEF1F1654837150C244FCF20A2612C6 * __this, IAPButton_t1BDE7DF230194C47716F1AD10806094D8DE39CD9 * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t4EA118A9AAEF1F1654837150C244FCF20A2612C6 *, IAPButton_t1BDE7DF230194C47716F1AD10806094D8DE39CD9 *, const RuntimeMethod*))List_1_Remove_m908B647BB9F807676DACE34E3E73475C3C3751D4_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Purchasing.IAPListener>::Add(!0)
inline void List_1_Add_m440577DFAD35900A85BC28E4028B133B0814ADCF (List_1_t9AAA1568B76F8B92C93DB49A597240F9DEEE5E40 * __this, IAPListener_tA8E5B3850C466201C221D95CF74A9BEA7DC74E61 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9AAA1568B76F8B92C93DB49A597240F9DEEE5E40 *, IAPListener_tA8E5B3850C466201C221D95CF74A9BEA7DC74E61 *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Purchasing.IAPListener>::Remove(!0)
inline bool List_1_Remove_m84E444A3D4C15D6D2302DD13E5A2E78828C5BEB2 (List_1_t9AAA1568B76F8B92C93DB49A597240F9DEEE5E40 * __this, IAPListener_tA8E5B3850C466201C221D95CF74A9BEA7DC74E61 * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t9AAA1568B76F8B92C93DB49A597240F9DEEE5E40 *, IAPListener_tA8E5B3850C466201C221D95CF74A9BEA7DC74E61 *, const RuntimeMethod*))List_1_Remove_m908B647BB9F807676DACE34E3E73475C3C3751D4_gshared)(__this, ___item0, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.Purchasing.IAPButton>::GetEnumerator()
inline Enumerator_t9F37D65DD7E6FB43E324D936089DEA44EB811D3F  List_1_GetEnumerator_m0E99A24EF5097DFD7180540835FC96B83DE24841 (List_1_t4EA118A9AAEF1F1654837150C244FCF20A2612C6 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t9F37D65DD7E6FB43E324D936089DEA44EB811D3F  (*) (List_1_t4EA118A9AAEF1F1654837150C244FCF20A2612C6 *, const RuntimeMethod*))List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.Purchasing.IAPButton>::get_Current()
inline IAPButton_t1BDE7DF230194C47716F1AD10806094D8DE39CD9 * Enumerator_get_Current_m06FB35F697F9E3F603349534764389C2A9984796_inline (Enumerator_t9F37D65DD7E6FB43E324D936089DEA44EB811D3F * __this, const RuntimeMethod* method)
{
	return ((  IAPButton_t1BDE7DF230194C47716F1AD10806094D8DE39CD9 * (*) (Enumerator_t9F37D65DD7E6FB43E324D936089DEA44EB811D3F *, const RuntimeMethod*))Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Purchasing.IAPButton::OnPurchaseFailed(UnityEngine.Purchasing.Product,UnityEngine.Purchasing.PurchaseFailureReason)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAPButton_OnPurchaseFailed_mAF5155D49340CFD9FCA17BD0DAA17CD27037BA57 (IAPButton_t1BDE7DF230194C47716F1AD10806094D8DE39CD9 * __this, Product_t830A133A97BEA12C3CD696853098A295D99A6DE4 * ___product0, int32_t ___reason1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Purchasing.IAPButton>::MoveNext()
inline bool Enumerator_MoveNext_m66A6DE692B96C883FB9A150F3209127E5371DD73 (Enumerator_t9F37D65DD7E6FB43E324D936089DEA44EB811D3F * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t9F37D65DD7E6FB43E324D936089DEA44EB811D3F *, const RuntimeMethod*))Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Purchasing.IAPButton>::Dispose()
inline void Enumerator_Dispose_m0BF7B99F01F7619CC51A73AF0F39A1D3F8EE92EF (Enumerator_t9F37D65DD7E6FB43E324D936089DEA44EB811D3F * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t9F37D65DD7E6FB43E324D936089DEA44EB811D3F *, const RuntimeMethod*))Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared)(__this, method);
}
// System.Void UnityEngine.Purchasing.IAPButton::UpdateText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAPButton_UpdateText_m38D5E31DB4E01F0E1419174A6309186AEAB348DD (IAPButton_t1BDE7DF230194C47716F1AD10806094D8DE39CD9 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// UnityEngine.Purchasing.Product UnityEngine.Purchasing.PurchaseEventArgs::get_purchasedProduct()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Product_t830A133A97BEA12C3CD696853098A295D99A6DE4 * PurchaseEventArgs_get_purchasedProduct_mB26BCEF9CD45B84DBF55A5C6FC50AF611B6AD6A2_inline (PurchaseEventArgs_tF6E04BFD5492F5F57309FFBB2415EB26E5B88C04 * __this, const RuntimeMethod* method);
// UnityEngine.Purchasing.PurchaseProcessingResult UnityEngine.Purchasing.IAPButton::ProcessPurchase(UnityEngine.Purchasing.PurchaseEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IAPButton_ProcessPurchase_mAD1C2C30A543271D9011A0612E37EA62714B2C09 (IAPButton_t1BDE7DF230194C47716F1AD10806094D8DE39CD9 * __this, PurchaseEventArgs_tF6E04BFD5492F5F57309FFBB2415EB26E5B88C04 * ___e0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.Purchasing.IAPListener>::GetEnumerator()
inline Enumerator_tAF6ACB804093D6ABEB02CDA6CBCD447DCA1C49E9  List_1_GetEnumerator_mB0610B63F92F833B979FB98AEE575514949A6A50 (List_1_t9AAA1568B76F8B92C93DB49A597240F9DEEE5E40 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tAF6ACB804093D6ABEB02CDA6CBCD447DCA1C49E9  (*) (List_1_t9AAA1568B76F8B92C93DB49A597240F9DEEE5E40 *, const RuntimeMethod*))List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.Purchasing.IAPListener>::get_Current()
inline IAPListener_tA8E5B3850C466201C221D95CF74A9BEA7DC74E61 * Enumerator_get_Current_mA48E4EF0A239DE7C9F3B846586FB784EDC6CD120_inline (Enumerator_tAF6ACB804093D6ABEB02CDA6CBCD447DCA1C49E9 * __this, const RuntimeMethod* method)
{
	return ((  IAPListener_tA8E5B3850C466201C221D95CF74A9BEA7DC74E61 * (*) (Enumerator_tAF6ACB804093D6ABEB02CDA6CBCD447DCA1C49E9 *, const RuntimeMethod*))Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline)(__this, method);
}
// UnityEngine.Purchasing.PurchaseProcessingResult UnityEngine.Purchasing.IAPListener::ProcessPurchase(UnityEngine.Purchasing.PurchaseEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IAPListener_ProcessPurchase_mE08DC15E1CC263B6B6C74248B2B342339632FC8A (IAPListener_tA8E5B3850C466201C221D95CF74A9BEA7DC74E61 * __this, PurchaseEventArgs_tF6E04BFD5492F5F57309FFBB2415EB26E5B88C04 * ___e0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Purchasing.IAPListener>::MoveNext()
inline bool Enumerator_MoveNext_m1AEC618F26C5FE0F95664256949A96C73BD7BABC (Enumerator_tAF6ACB804093D6ABEB02CDA6CBCD447DCA1C49E9 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tAF6ACB804093D6ABEB02CDA6CBCD447DCA1C49E9 *, const RuntimeMethod*))Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Purchasing.IAPListener>::Dispose()
inline void Enumerator_Dispose_mD06BAE2A2EB6C0EF57B61D4458590A02782FFBE6 (Enumerator_tAF6ACB804093D6ABEB02CDA6CBCD447DCA1C49E9 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tAF6ACB804093D6ABEB02CDA6CBCD447DCA1C49E9 *, const RuntimeMethod*))Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared)(__this, method);
}
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF4626905368D6558695A823466A1AF65EADB9923 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.IAPListener::OnPurchaseFailed(UnityEngine.Purchasing.Product,UnityEngine.Purchasing.PurchaseFailureReason)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAPListener_OnPurchaseFailed_mCBB1A7EBFD259CC0DF60A263E96A2B10DFD5FAE1 (IAPListener_tA8E5B3850C466201C221D95CF74A9BEA7DC74E61 * __this, Product_t830A133A97BEA12C3CD696853098A295D99A6DE4 * ___product0, int32_t ___reason1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Button>()
inline Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * Component_GetComponent_TisButton_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B_m95916328C175634DC742DD13D032F149F1FBF58C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m233A1E6EF90A3BA46CD83BFC568F4E4DB4D93CC9_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___exists0, const RuntimeMethod* method);
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * Button_get_onClick_m77E8CA6917881760CC7900930F4C789F3E2F8817_inline (Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mEFC4B92529CE83DF72501F92E07EC5598C54BDAC (UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m31973FDDC5BB0B2828AB6EF519EC4FD6563499C9 (UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * __this, UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___call0, const RuntimeMethod* method);
// UnityEngine.Purchasing.CodelessIAPStoreListener UnityEngine.Purchasing.CodelessIAPStoreListener::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CodelessIAPStoreListener_tC0C269A13BAE3B9F9AA24455FAB72340347F7303 * CodelessIAPStoreListener_get_Instance_m6D6C71B6D75F21C64499CE46A23DDC572B3DACAE (const RuntimeMethod* method);
// System.Boolean UnityEngine.Purchasing.CodelessIAPStoreListener::HasProductInCatalog(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CodelessIAPStoreListener_HasProductInCatalog_m7572D2C0E9C4208ED1C909684EF999058BC0DEEC (CodelessIAPStoreListener_tC0C269A13BAE3B9F9AA24455FAB72340347F7303 * __this, String_t* ___productID0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.CodelessIAPStoreListener::AddButton(UnityEngine.Purchasing.IAPButton)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodelessIAPStoreListener_AddButton_m4A1BF6B82F547465176551D086C4F386FDDED3E7 (CodelessIAPStoreListener_tC0C269A13BAE3B9F9AA24455FAB72340347F7303 * __this, IAPButton_t1BDE7DF230194C47716F1AD10806094D8DE39CD9 * ___button0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.CodelessIAPStoreListener::RemoveButton(UnityEngine.Purchasing.IAPButton)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodelessIAPStoreListener_RemoveButton_mD47F635ACC605FA53FC7629AAAF0384D94FF6B6E (CodelessIAPStoreListener_tC0C269A13BAE3B9F9AA24455FAB72340347F7303 * __this, IAPButton_t1BDE7DF230194C47716F1AD10806094D8DE39CD9 * ___button0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.CodelessIAPStoreListener::InitiatePurchase(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodelessIAPStoreListener_InitiatePurchase_m1233198CE19C5691C0CDD85786588CEAF2A7AB14 (CodelessIAPStoreListener_tC0C269A13BAE3B9F9AA24455FAB72340347F7303 * __this, String_t* ___productID0, const RuntimeMethod* method);
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_m6AFFFF3B077F4D5CA1F71CF14ABA86A83FC71672 (const RuntimeMethod* method);
// UnityEngine.Purchasing.IExtensionProvider UnityEngine.Purchasing.CodelessIAPStoreListener::get_ExtensionProvider()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* CodelessIAPStoreListener_get_ExtensionProvider_m6EF90D4617310AF8D82CF0372F0E8E3755B366B4_inline (CodelessIAPStoreListener_tC0C269A13BAE3B9F9AA24455FAB72340347F7303 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mFEB000BCBDAB6DE953B2B50CD113641DCF601890 (Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mFEB000BCBDAB6DE953B2B50CD113641DCF601890_gshared)(__this, ___object0, ___method1, method);
}
// UnityEngine.Purchasing.AppStore UnityEngine.Purchasing.StandardPurchasingModule::get_appStore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StandardPurchasingModule_get_appStore_mCAA2ED4CDF716897820F7EC50FF1D7985D710E1C (StandardPurchasingModule_t45E3E7F3D0D8CE91AD85D7BE5B29CBA2235B3BFA * __this, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.Purchasing.RestoreTransactionIDState>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mBBB5E822230C695A305CE70D76A7C103CAFE368E (Action_1_t00DFDFD25560DD25965E88CC7C430D0703EFA9BF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t00DFDFD25560DD25965E88CC7C430D0703EFA9BF *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mABA45A1E0D469C919BA3E91E52598F7CB38EDDE9_gshared)(__this, ___object0, ___method1, method);
}
// System.String System.Boolean::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m62D1EFD5F6D5F6B6AF0D14A07BF5741C94413301 (bool* __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Purchasing.Product>::Invoke(!0)
inline void UnityEvent_1_Invoke_m37FB3F6A4E114515E7CE57F1DEA0C723CDAB4D01 (UnityEvent_1_tEE1A2CFF07DB130E94E8EDC3B16BD99927EFCB0B * __this, Product_t830A133A97BEA12C3CD696853098A295D99A6DE4 * ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tEE1A2CFF07DB130E94E8EDC3B16BD99927EFCB0B *, Product_t830A133A97BEA12C3CD696853098A295D99A6DE4 *, const RuntimeMethod*))UnityEvent_1_Invoke_m027706B0C7150736F066D5C663304CB0B80ABBF0_gshared)(__this, ___arg00, method);
}
// System.Void UnityEngine.Events.UnityEvent`2<UnityEngine.Purchasing.Product,UnityEngine.Purchasing.PurchaseFailureReason>::Invoke(!0,!1)
inline void UnityEvent_2_Invoke_m7FF7EA6A64C8D4A95F6ACA03D682C7EAFBA58014 (UnityEvent_2_t303E7F876F93A36ED8E5DCA060E96AA6E2C8FAD5 * __this, Product_t830A133A97BEA12C3CD696853098A295D99A6DE4 * ___arg00, int32_t ___arg11, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_2_t303E7F876F93A36ED8E5DCA060E96AA6E2C8FAD5 *, Product_t830A133A97BEA12C3CD696853098A295D99A6DE4 *, int32_t, const RuntimeMethod*))UnityEvent_2_Invoke_m8E0E3910F551485BB28258D9379D14BFAA534A22_gshared)(__this, ___arg00, ___arg11, method);
}
// UnityEngine.Purchasing.Product UnityEngine.Purchasing.CodelessIAPStoreListener::GetProduct(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Product_t830A133A97BEA12C3CD696853098A295D99A6DE4 * CodelessIAPStoreListener_GetProduct_mBED67C9993F342B75FA1A6C22E950446FB93B442 (CodelessIAPStoreListener_tC0C269A13BAE3B9F9AA24455FAB72340347F7303 * __this, String_t* ___productID0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.IAPButton::OnTransactionsRestored(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAPButton_OnTransactionsRestored_mBDBFA6BAC6A064FF152A33C344CE3DB9FC295F56 (IAPButton_t1BDE7DF230194C47716F1AD10806094D8DE39CD9 * __this, bool ___success0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Purchasing.Product>::.ctor()
inline void UnityEvent_1__ctor_m70AC62AC7448380334A412BB5B3EB88C9B3E7742 (UnityEvent_1_tEE1A2CFF07DB130E94E8EDC3B16BD99927EFCB0B * __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tEE1A2CFF07DB130E94E8EDC3B16BD99927EFCB0B *, const RuntimeMethod*))UnityEvent_1__ctor_m38CD236F782AA440F6DDB5D90B4C9DA24CDBA3A7_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`2<UnityEngine.Purchasing.Product,UnityEngine.Purchasing.PurchaseFailureReason>::.ctor()
inline void UnityEvent_2__ctor_m747C301BF8D8E850C08B922050B68208749CDB4D (UnityEvent_2_t303E7F876F93A36ED8E5DCA060E96AA6E2C8FAD5 * __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_2_t303E7F876F93A36ED8E5DCA060E96AA6E2C8FAD5 *, const RuntimeMethod*))UnityEvent_2__ctor_m90C3B8ED5DA3821DD3264EEAD585A64D22D376E8_gshared)(__this, method);
}
// System.Collections.Generic.ICollection`1<UnityEngine.Purchasing.ProductCatalogItem> UnityEngine.Purchasing.ProductCatalog::get_allValidProducts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ProductCatalog_get_allValidProducts_mCB943E62C6A2C4A650EAFC4581FC4F9CDB52735D (ProductCatalog_t514386D43815F0DD3BD3695ABBB1BC66351D569E * __this, const RuntimeMethod* method);
// System.Collections.Generic.ICollection`1<UnityEngine.Purchasing.StoreID> UnityEngine.Purchasing.ProductCatalogItem::get_allStoreIDs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ProductCatalogItem_get_allStoreIDs_mEA887C90D9B0D4C38AE4C6172CB2C27117669E96 (ProductCatalogItem_t0CDB4E1B6E5692F115DBC421DA38BFC6BC3B3356 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.IDs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IDs__ctor_mE662F28FC7BBA7E031EF4CCD8841D3C811A67400 (IDs_t978DE239966E5906480541F9982EA9624943DA53 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.IDs::Add(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IDs_Add_m643176935CD396E4A45C374B08A67C942C6D72BF (IDs_t978DE239966E5906480541F9982EA9624943DA53 * __this, String_t* ___id0, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___stores1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Purchasing.PayoutDefinition>::.ctor()
inline void List_1__ctor_mBC8BE62A8B8CC489BE3F638DB531F0803EA2CE45 (List_1_t3BB189095B85DE5B71713AA7779513A84EB7EB9A * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3BB189095B85DE5B71713AA7779513A84EB7EB9A *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Collections.Generic.IList`1<UnityEngine.Purchasing.ProductCatalogPayout> UnityEngine.Purchasing.ProductCatalogItem::get_Payouts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ProductCatalogItem_get_Payouts_mDA4220F6067D47723E1AC0F033657985FC738819 (ProductCatalogItem_t0CDB4E1B6E5692F115DBC421DA38BFC6BC3B3356 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Purchasing.ProductCatalogPayout::get_typeString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ProductCatalogPayout_get_typeString_mFD79AC356E449C73E772C4728E97C201FF61AAB9 (ProductCatalogPayout_t4DFA2A14A2D8FFE1FD41C34DB603C2C1E805CE22 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Purchasing.ProductCatalogPayout::get_subtype()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ProductCatalogPayout_get_subtype_m4699F24F2BCE46DAD79FA8F4698BC747DCC5B7E6 (ProductCatalogPayout_t4DFA2A14A2D8FFE1FD41C34DB603C2C1E805CE22 * __this, const RuntimeMethod* method);
// System.Double UnityEngine.Purchasing.ProductCatalogPayout::get_quantity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double ProductCatalogPayout_get_quantity_mB3C2F4F3A458A8F29D368768EF1B923C59349B4F (ProductCatalogPayout_t4DFA2A14A2D8FFE1FD41C34DB603C2C1E805CE22 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Purchasing.ProductCatalogPayout::get_data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ProductCatalogPayout_get_data_mACF2246F3367C6682174E1E7586D670311BA0A4D (ProductCatalogPayout_t4DFA2A14A2D8FFE1FD41C34DB603C2C1E805CE22 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.PayoutDefinition::.ctor(System.String,System.String,System.Double,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PayoutDefinition__ctor_m43BA8E18743F33BB5C40AC65DB0C81EB2580C70F (PayoutDefinition_tE787916C6F389E12B8C2F10F3A87CD79B6C2A273 * __this, String_t* ___typeString0, String_t* ___subtype1, double ___quantity2, String_t* ___data3, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Purchasing.PayoutDefinition>::Add(!0)
inline void List_1_Add_m414D1DDDB9D6064807437A191A14896072F11D28 (List_1_t3BB189095B85DE5B71713AA7779513A84EB7EB9A * __this, PayoutDefinition_tE787916C6F389E12B8C2F10F3A87CD79B6C2A273 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3BB189095B85DE5B71713AA7779513A84EB7EB9A *, PayoutDefinition_tE787916C6F389E12B8C2F10F3A87CD79B6C2A273 *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, ___item0, method);
}
// !0[] System.Collections.Generic.List`1<UnityEngine.Purchasing.PayoutDefinition>::ToArray()
inline PayoutDefinitionU5BU5D_tBED8269F285FBB455D663A4434785D666963059A* List_1_ToArray_mE2EEA005F6F94136499538849FEEA877A2B6D778 (List_1_t3BB189095B85DE5B71713AA7779513A84EB7EB9A * __this, const RuntimeMethod* method)
{
	return ((  PayoutDefinitionU5BU5D_tBED8269F285FBB455D663A4434785D666963059A* (*) (List_1_t3BB189095B85DE5B71713AA7779513A84EB7EB9A *, const RuntimeMethod*))List_1_ToArray_m801D4DEF3587F60F463F04EEABE5CBE711FE5612_gshared)(__this, method);
}
// UnityEngine.Purchasing.ConfigurationBuilder UnityEngine.Purchasing.ConfigurationBuilder::AddProduct(System.String,UnityEngine.Purchasing.ProductType,UnityEngine.Purchasing.IDs,System.Collections.Generic.IEnumerable`1<UnityEngine.Purchasing.PayoutDefinition>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationBuilder_t18C1B421FE4071AD4DB4A340A2A8D51AB090F3AE * ConfigurationBuilder_AddProduct_mCD5F9D3B82AEB4B53DC758BA591ED6E8EA74E64D (ConfigurationBuilder_t18C1B421FE4071AD4DB4A340A2A8D51AB090F3AE * __this, String_t* ___id0, int32_t ___type1, IDs_t978DE239966E5906480541F9982EA9624943DA53 * ___storeIDs2, RuntimeObject* ___payouts3, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4DC90770AD6084E4B1B8489C6B41205DC020C207 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___target0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.CodelessIAPStoreListener::AddListener(UnityEngine.Purchasing.IAPListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodelessIAPStoreListener_AddListener_mEE32769E704BBC2E4F66C4F51D102908E5ECF48E (CodelessIAPStoreListener_tC0C269A13BAE3B9F9AA24455FAB72340347F7303 * __this, IAPListener_tA8E5B3850C466201C221D95CF74A9BEA7DC74E61 * ___listener0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.CodelessIAPStoreListener::RemoveListener(UnityEngine.Purchasing.IAPListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodelessIAPStoreListener_RemoveListener_m3432F9A1A1E37888321E11FBA4A49EB8F97A5552 (CodelessIAPStoreListener_tC0C269A13BAE3B9F9AA24455FAB72340347F7303 * __this, IAPListener_tA8E5B3850C466201C221D95CF74A9BEA7DC74E61 * ___listener0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<DragonBones.UnityArmatureComponent>()
inline UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7 * GameObject_GetComponent_TisUnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7_m4748AF191E0FD3A459452992F7547307483F8A07 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mE03C66715289D7957CA068A675826B7EE0887BE3_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.Void DragonBones.Armature::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Armature_Dispose_m1A5F0BBD04459180F286E86887B7B5FF2F764C82 (Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localEulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_localEulerAngles_m445AD7F6706B0BDABA8A875C899EB1E1DF1A2A2B (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// DragonBones.Animation DragonBones.Armature::get_animation()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Animation_t3E64FBA6FBD6680C6EF991689446EBB237888A7C * Armature_get_animation_mFC9A0CF26711D38A136BA9B44CB4ED8FAFBE075C_inline (Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B * __this, const RuntimeMethod* method);
// DragonBones.UnityArmatureComponent DragonBones.UnityFactory::BuildArmatureComponent(System.String,System.String,System.String,System.String,UnityEngine.GameObject,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7 * UnityFactory_BuildArmatureComponent_mAEF67786ED95E4368C4FEB16A9727EFE84B439A4 (UnityFactory_t170550F12743A129F88E7D1990F607AB2B35C102 * __this, String_t* ___armatureName0, String_t* ___dragonBonesName1, String_t* ___skinName2, String_t* ___textureAtlasName3, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___gameObject4, bool ___isUGUI5, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_m2844A4A71C86BDF83A12D97FC6DD95278E87E384 (float ___min0, float ___max1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void DragonBones.ListenerDelegate`1<DragonBones.EventObject>::.ctor(System.Object,System.IntPtr)
inline void ListenerDelegate_1__ctor_mC34C4E5351179C452D65C0343F73C1AE063AD496 (ListenerDelegate_1_t8A277CC3A9ACC68F27B82B7C1E142E28D68A6DAF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (ListenerDelegate_1_t8A277CC3A9ACC68F27B82B7C1E142E28D68A6DAF *, RuntimeObject *, intptr_t, const RuntimeMethod*))ListenerDelegate_1__ctor_m1232C2A649B6736D2949D23DDBEDD00E518FFC91_gshared)(__this, ___object0, ___method1, method);
}
// System.Void DragonBones.UnityEventDispatcher`1<DragonBones.EventObject>::AddEventListener(System.String,DragonBones.ListenerDelegate`1<T>)
inline void UnityEventDispatcher_1_AddEventListener_m68EC547A333255F85DF831B388454CA1669C22A2 (UnityEventDispatcher_1_tD088000761A00FCC2D3B148E638CBBEDEDECB0A5 * __this, String_t* ___type0, ListenerDelegate_1_t8A277CC3A9ACC68F27B82B7C1E142E28D68A6DAF * ___listener1, const RuntimeMethod* method)
{
	((  void (*) (UnityEventDispatcher_1_tD088000761A00FCC2D3B148E638CBBEDEDECB0A5 *, String_t*, ListenerDelegate_1_t8A277CC3A9ACC68F27B82B7C1E142E28D68A6DAF *, const RuntimeMethod*))UnityEventDispatcher_1_AddEventListener_m2D2866FA853AFA25613C11B2790C510D21C23EF4_gshared)(__this, ___type0, ___listener1, method);
}
// DragonBones.Armature DragonBones.Slot::get_childArmature()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B * Slot_get_childArmature_m7AA0703B2FD30982900BB17B3F836845417207BF_inline (Slot_t9D06B371824C1B67E43A10A17D18BC3EF71E3867 * __this, const RuntimeMethod* method);
// DragonBones.IEventDispatcher`1<DragonBones.EventObject> DragonBones.Armature::get_eventDispatcher()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* Armature_get_eventDispatcher_mDE19324200719B8284AEC29938604B570BD7691B_inline (Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B * __this, const RuntimeMethod* method);
// System.Void DragonBones.Animation::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animation_Reset_m6433B3BCBA03583DE3C13C2075D0C247C906336A (Animation_t3E64FBA6FBD6680C6EF991689446EBB237888A7C * __this, const RuntimeMethod* method);
// System.Void DragonBones.Armature::set_flipX(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Armature_set_flipX_mC6B16EAA769AEF623D804BC68BF5157562E0AACA (Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B * __this, bool ___value0, const RuntimeMethod* method);
// System.Void coreElement.CoreElement::_updateAnimation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreElement__updateAnimation_mC1524720EA2C0DEBF3F68F710BD104D72EA80C27 (CoreElement_tE4AA9E2B7F77B929778F44A58FC2036C30BF2966 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_m46AA83E14F9C3A75E06FE0A8C55740D47B2DB784 (int32_t ___key0, const RuntimeMethod* method);
// System.Void coreElement.CoreElement::_move(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreElement__move_m1FDB8EF7F31AF917712D0352E4304CA774497CB6 (CoreElement_tE4AA9E2B7F77B929778F44A58FC2036C30BF2966 * __this, int32_t ___dir0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_mEA57896808B6F484B12CD0AEEB83390A3CFCDBDC (int32_t ___key0, const RuntimeMethod* method);
// System.Void coreElement.CoreElement::_jump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreElement__jump_m37E73A89B7F0CD38F29CD7EEBEFE9F8F4823069B (CoreElement_tE4AA9E2B7F77B929778F44A58FC2036C30BF2966 * __this, const RuntimeMethod* method);
// System.Void coreElement.CoreElement::_squat(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreElement__squat_m2F072073FF7AEBCE0A4133ED12B16C812475CF48 (CoreElement_tE4AA9E2B7F77B929778F44A58FC2036C30BF2966 * __this, bool ___isSquating0, const RuntimeMethod* method);
// System.Void coreElement.CoreElement::_switchSkin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreElement__switchSkin_mC3918BE0FE22C4E4FAE642C604E0A9F58C96E83A (CoreElement_tE4AA9E2B7F77B929778F44A58FC2036C30BF2966 * __this, const RuntimeMethod* method);
// System.Void coreElement.CoreElement::_switchWeaponLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreElement__switchWeaponLeft_mCC6800A9FB15B0AF99D307D795436B1DB0363451 (CoreElement_tE4AA9E2B7F77B929778F44A58FC2036C30BF2966 * __this, const RuntimeMethod* method);
// System.Void coreElement.CoreElement::_switchWeaponRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreElement__switchWeaponRight_m6F556857DF58079CB4255B43949C60140931C355 (CoreElement_tE4AA9E2B7F77B929778F44A58FC2036C30BF2966 * __this, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * Camera_get_main_m9256A9F84F92D7ED73F3E6C4E2694030AD8B61FA (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Input_get_mousePosition_m1F6706785983B41FE8D5CBB81B5F15F68EBD9A53 (const RuntimeMethod* method);
// System.Single UnityEngine.Camera::get_farClipPlane()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_farClipPlane_mF51F1FF5BE87719CFAC293E272B1138DC1EFFD4B (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToWorldPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Camera_ScreenToWorldPoint_m179BB999DC97A251D0892B39C98F3FACDF0617C5 (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position0, const RuntimeMethod* method);
// System.Void coreElement.CoreElement::_aim(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreElement__aim_m64EDB6E2CAE10C088BAA0782E811CB3D3D2ACECE (CoreElement_tE4AA9E2B7F77B929778F44A58FC2036C30BF2966 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButton_m43C68DE93C7D990E875BA53C4DEC9CA6230C8B79 (int32_t ___button0, const RuntimeMethod* method);
// System.Void coreElement.CoreElement::_attack(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreElement__attack_m2DF19529B3320A696FCA6811FF9F9807B7EE14DD (CoreElement_tE4AA9E2B7F77B929778F44A58FC2036C30BF2966 * __this, bool ___isAttacking0, const RuntimeMethod* method);
// System.Void coreElement.CoreElement::_updatePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreElement__updatePosition_m0B0D060A25C424CA279E51EA1CFCBB5FD1F8F4BE (CoreElement_tE4AA9E2B7F77B929778F44A58FC2036C30BF2966 * __this, const RuntimeMethod* method);
// System.Void coreElement.CoreElement::_updateAim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreElement__updateAim_mD34AB0E5B5FC2C636C51340F998580732CF66E40 (CoreElement_tE4AA9E2B7F77B929778F44A58FC2036C30BF2966 * __this, const RuntimeMethod* method);
// System.Void coreElement.CoreElement::_updateAttack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreElement__updateAttack_m5D8D2D9364199E20E1609B571F0B7EB2BA0E74E6 (CoreElement_tE4AA9E2B7F77B929778F44A58FC2036C30BF2966 * __this, const RuntimeMethod* method);
// DragonBones.AnimationState DragonBones.Animation::FadeIn(System.String,System.Single,System.Int32,System.Int32,System.String,DragonBones.AnimationFadeOutMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationState_tBA6EAAD27D56DD26A61304C93676C337EB761238 * Animation_FadeIn_m6B9CE692F53E207F6EAD187FAB98440739E849F2 (Animation_t3E64FBA6FBD6680C6EF991689446EBB237888A7C * __this, String_t* ___animationName0, float ___fadeInTime1, int32_t ___playTimes2, int32_t ___layer3, String_t* ___group4, int32_t ___fadeOutMode5, const RuntimeMethod* method);
// System.Object DragonBones.Armature::get_display()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject * Armature_get_display_m9E495EEA6D17B1ABF9B35F12BE52A541A3B2098D_inline (Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_worldToLocalMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  Transform_get_worldToLocalMatrix_m4791F881839B1087B17DC126FC0CA7F9A596073E (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_inverse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  Matrix4x4_get_inverse_mBD3145C0D7977962E18C8B3BF63DD671F7917166 (Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Matrix4x4_MultiplyPoint_mD5D082585C5B3564A5EFC90A3C5CAFFE47E45B65 (Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___point0, const RuntimeMethod* method);
// System.Void coreElement.CoreElement::_fire(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreElement__fire_mB2AA09E50D404EA9E880FCC82333212511544152 (CoreElement_tE4AA9E2B7F77B929778F44A58FC2036C30BF2966 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___firePoint0, const RuntimeMethod* method);
// System.Void DragonBones.Slot::set_childArmature(DragonBones.Armature)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slot_set_childArmature_m3CCD09A3020C1B9CA0003515A8F11915B7507B5A (Slot_t9D06B371824C1B67E43A10A17D18BC3EF71E3867 * __this, Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B * ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mDA22758D73530683C950C5CCF39BDB4E7E1F3F06 (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Add(!0)
inline void List_1_Add_mA348FA1140766465189459D25B01EB179001DE83 (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, String_t*, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, ___item0, method);
}
// System.Boolean DragonBones.BaseFactory::ReplaceSkin(DragonBones.Armature,DragonBones.SkinData,System.Boolean,System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseFactory_ReplaceSkin_m57C39215429A92F29B4BA436C50DE43688AA5271 (BaseFactory_t0F351C3165BC3FF44834228E47FA2AF75DEB546F * __this, Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B * ___armature0, SkinData_t4A40D94C41796F66FDC9D9EDC4179A56CE3E8D43 * ___skin1, bool ___isOverride2, List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___exclude3, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<coreElement.Bullet>()
inline Bullet_tE4257FB0F05939D36A937D95AD60A2AC7E17A747 * GameObject_AddComponent_TisBullet_tE4257FB0F05939D36A937D95AD60A2AC7E17A747_m1DDC6F8E40B148E672BAC7109DE3E68B6CE075EF (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  Bullet_tE4257FB0F05939D36A937D95AD60A2AC7E17A747 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mCB8164FB05F8DCF99E098ADC5E13E96FEF6FC4E9_gshared)(__this, method);
}
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.Void coreElement.Bullet::Init(System.String,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bullet_Init_mC43D30E03813A89FB382C69AF69800FD20825DF3 (Bullet_tE4257FB0F05939D36A937D95AD60A2AC7E17A747 * __this, String_t* ___effectArmatureName0, float ___radian1, float ___speed2, const RuntimeMethod* method);
// System.Boolean DragonBones.Armature::get_flipX()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool Armature_get_flipX_m2E43AF6C7D2D6678E6E47CDD9E7B83EAA56A3C5D_inline (Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B * __this, const RuntimeMethod* method);
// DragonBones.Bone DragonBones.Armature::GetBone(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bone_tAFFFF52723C77703DAB65D003E9A418C2766C809 * Armature_GetBone_mAD8B174651CEA248A9AE4C00C19925CE968CDFFF (Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void DragonBones.Armature::InvalidUpdate(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Armature_InvalidUpdate_m58808B4550E1488B7727CE31165C30C2BEBCC534 (Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B * __this, String_t* ___boneName0, bool ___updateSlot1, const RuntimeMethod* method);
// System.Void DragonBones.AnimationState::AddBoneMask(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationState_AddBoneMask_mF96051C125026A915A125CB8FE0F27F5D59AAD2C (AnimationState_tBA6EAAD27D56DD26A61304C93676C337EB761238 * __this, String_t* ___name0, bool ___recursive1, const RuntimeMethod* method);
// System.Collections.IEnumerator performanceTest.PerformanceTest::BuildArmatureComponent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PerformanceTest_BuildArmatureComponent_m5A3799419A1CB10A45C4B354E2DEBB111ABA0B65 (PerformanceTest_t8B45D43C5E749B6982426CFCEC17145D62396754 * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void performanceTest.PerformanceTest/<BuildArmatureComponent>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBuildArmatureComponentU3Ed__2__ctor_mFEBDF3F2FA3487605C7DF446296911A343B6F379 (U3CBuildArmatureComponentU3Ed__2_tBA0BC2EFDBB3AE560B94ACE0FB1B2691C4DFA7EA * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void DragonBones.Armature::set_cacheFrameRate(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Armature_set_cacheFrameRate_m601829A05FE5F5A94E9F4B0D1FFD10F4EBF6187A (Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B * __this, uint32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSecondsRealtime::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSecondsRealtime__ctor_m775503EC1F4963D8E5BBDD7989B40F6A000E0525 (WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739 * __this, float ___time0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33 (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void IAPDemoProductUI::SetProduct(UnityEngine.Purchasing.Product,System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAPDemoProductUI_SetProduct_m1D002296CB2ECDDCE53EE4AC6E0CFBF9384FCEF0 (IAPDemoProductUI_t8DBFAD3179124DEECE0AD4EAB86EBF7779823C84 * __this, Product_t830A133A97BEA12C3CD696853098A295D99A6DE4 * ___p0, Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * ___purchaseCallback1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAPDemoProductUI_SetProduct_m1D002296CB2ECDDCE53EE4AC6E0CFBF9384FCEF0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * G_B2_0 = NULL;
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * G_B3_1 = NULL;
	{
		// titleText.text = p.metadata.localizedTitle;
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_0 = __this->get_titleText_6();
		Product_t830A133A97BEA12C3CD696853098A295D99A6DE4 * L_1 = ___p0;
		NullCheck(L_1);
		ProductMetadata_t1CAA912963F8B24B34F53CCF29A6E0BD89B33B48 * L_2 = Product_get_metadata_mE9010636C2A74FD850A4AE25DFD45A249F80224E_inline(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3 = ProductMetadata_get_localizedTitle_m34F35831026B0CEA68804AC38BB7E9FE17791E8A_inline(L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_3);
		// descriptionText.text = p.metadata.localizedDescription;
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_4 = __this->get_descriptionText_7();
		Product_t830A133A97BEA12C3CD696853098A295D99A6DE4 * L_5 = ___p0;
		NullCheck(L_5);
		ProductMetadata_t1CAA912963F8B24B34F53CCF29A6E0BD89B33B48 * L_6 = Product_get_metadata_mE9010636C2A74FD850A4AE25DFD45A249F80224E_inline(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		String_t* L_7 = ProductMetadata_get_localizedDescription_m8EAF1BC690AD022C519087978423B5DE0081E741_inline(L_6, /*hidden argument*/NULL);
		NullCheck(L_4);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_7);
		// priceText.text = p.metadata.localizedPriceString;
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_8 = __this->get_priceText_8();
		Product_t830A133A97BEA12C3CD696853098A295D99A6DE4 * L_9 = ___p0;
		NullCheck(L_9);
		ProductMetadata_t1CAA912963F8B24B34F53CCF29A6E0BD89B33B48 * L_10 = Product_get_metadata_mE9010636C2A74FD850A4AE25DFD45A249F80224E_inline(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		String_t* L_11 = ProductMetadata_get_localizedPriceString_mFFE7F069FE5E8DC6BD4CADDF3D9AEC066405795B_inline(L_10, /*hidden argument*/NULL);
		NullCheck(L_8);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_8, L_11);
		// receiptButton.interactable = p.hasReceipt;
		Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * L_12 = __this->get_receiptButton_5();
		Product_t830A133A97BEA12C3CD696853098A295D99A6DE4 * L_13 = ___p0;
		NullCheck(L_13);
		bool L_14 = Product_get_hasReceipt_m6CFE365D78E0BF8670BAB71ABEFE962976BF187F(L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		Selectable_set_interactable_m91B2707F7B4F46F851C3100A65BEFAA557DCDFDE(L_12, L_14, /*hidden argument*/NULL);
		// m_Receipt = p.receipt;
		Product_t830A133A97BEA12C3CD696853098A295D99A6DE4 * L_15 = ___p0;
		NullCheck(L_15);
		String_t* L_16 = Product_get_receipt_m43D6AF51543B3FF31622FCD2511BC8DAB5D230A2_inline(L_15, /*hidden argument*/NULL);
		__this->set_m_Receipt_12(L_16);
		// m_ProductID = p.definition.id;
		Product_t830A133A97BEA12C3CD696853098A295D99A6DE4 * L_17 = ___p0;
		NullCheck(L_17);
		ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * L_18 = Product_get_definition_mFA1889844E23D37A700C2EA6659EE3BBF1E17C58_inline(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		String_t* L_19 = ProductDefinition_get_id_mD5C2A9C1016245C99EB67B74DFC32ECDC8512468_inline(L_18, /*hidden argument*/NULL);
		__this->set_m_ProductID_10(L_19);
		// m_PurchaseCallback = purchaseCallback;
		Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * L_20 = ___purchaseCallback1;
		__this->set_m_PurchaseCallback_11(L_20);
		// statusText.text = p.availableToPurchase ? "Available" : "Unavailable";
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_21 = __this->get_statusText_9();
		Product_t830A133A97BEA12C3CD696853098A295D99A6DE4 * L_22 = ___p0;
		NullCheck(L_22);
		bool L_23 = Product_get_availableToPurchase_mA4F6F87AA8B83915F1B5E122A10F0CBAFBAE196C_inline(L_22, /*hidden argument*/NULL);
		G_B1_0 = L_21;
		if (L_23)
		{
			G_B2_0 = L_21;
			goto IL_008c;
		}
	}
	{
		G_B3_0 = _stringLiteral2C9C1F79142DF1B66D7A9ED0086592E49C8CF16E;
		G_B3_1 = G_B1_0;
		goto IL_0091;
	}

IL_008c:
	{
		G_B3_0 = _stringLiteral7C62A1424469B1C1CF402F254409A96A0E6770CF;
		G_B3_1 = G_B2_0;
	}

IL_0091:
	{
		NullCheck(G_B3_1);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B3_1, G_B3_0);
		// }
		return;
	}
}
// System.Void IAPDemoProductUI::SetPendingTime(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAPDemoProductUI_SetPendingTime_m23D903B099E566D999C159C038BF3319FA044D5C (IAPDemoProductUI_t8DBFAD3179124DEECE0AD4EAB86EBF7779823C84 * __this, int32_t ___secondsRemaining0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAPDemoProductUI_SetPendingTime_m23D903B099E566D999C159C038BF3319FA044D5C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// statusText.text = "Pending " + secondsRemaining.ToString();
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_0 = __this->get_statusText_9();
		String_t* L_1 = Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02((int32_t*)(&___secondsRemaining0), /*hidden argument*/NULL);
		String_t* L_2 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteralDB26802F6ECBC4BA3F6522468324360106F31D27, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_2);
		// }
		return;
	}
}
// System.Void IAPDemoProductUI::PurchaseButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAPDemoProductUI_PurchaseButtonClick_m0F328FE1101816BC5C1E45FF272A8D8271019F12 (IAPDemoProductUI_t8DBFAD3179124DEECE0AD4EAB86EBF7779823C84 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAPDemoProductUI_PurchaseButtonClick_m0F328FE1101816BC5C1E45FF272A8D8271019F12_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_PurchaseCallback != null && !string.IsNullOrEmpty(m_ProductID))
		Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * L_0 = __this->get_m_PurchaseCallback_11();
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		String_t* L_1 = __this->get_m_ProductID_10();
		bool L_2 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0026;
		}
	}
	{
		// m_PurchaseCallback(m_ProductID);
		Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * L_3 = __this->get_m_PurchaseCallback_11();
		String_t* L_4 = __this->get_m_ProductID_10();
		NullCheck(L_3);
		Action_1_Invoke_m6328F763431ED2ACDDB6ED8F0FDEA6194403E79F(L_3, L_4, /*hidden argument*/Action_1_Invoke_m6328F763431ED2ACDDB6ED8F0FDEA6194403E79F_RuntimeMethod_var);
	}

IL_0026:
	{
		// }
		return;
	}
}
// System.Void IAPDemoProductUI::ReceiptButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAPDemoProductUI_ReceiptButtonClick_mC4CBBB1F688E9F7E9CCF8B8BC2E1B3F5F93FDCD0 (IAPDemoProductUI_t8DBFAD3179124DEECE0AD4EAB86EBF7779823C84 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAPDemoProductUI_ReceiptButtonClick_mC4CBBB1F688E9F7E9CCF8B8BC2E1B3F5F93FDCD0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!string.IsNullOrEmpty(m_Receipt))
		String_t* L_0 = __this->get_m_Receipt_12();
		bool L_1 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_002d;
		}
	}
	{
		// Debug.Log("Receipt for " + m_ProductID + ": " + m_Receipt);
		String_t* L_2 = __this->get_m_ProductID_10();
		String_t* L_3 = __this->get_m_Receipt_12();
		String_t* L_4 = String_Concat_mDD2E38332DED3A8C088D38D78A0E0BEB5091DA64(_stringLiteral3AF7DED779EA392EF471B871E6E3C1973F8D6473, L_2, _stringLiteralCECA32E904728D1645727CB2B9CDEAA153807D77, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_4, /*hidden argument*/NULL);
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Void IAPDemoProductUI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAPDemoProductUI__ctor_m513D7B3DF0424B72265BCB800C14BE3142127C50 (IAPDemoProductUI_t8DBFAD3179124DEECE0AD4EAB86EBF7779823C84 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void LightTest::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightTest_Start_mBD2D273F3D35923ECAE4316C1A6A41622269256F (LightTest_t629736CB84CF4476B580264298728798C28C9240 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void LightTest::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightTest_Update_m4B95DBEFD0A01D0A6CE32B1A92BF6BDC40C7A801 (LightTest_t629736CB84CF4476B580264298728798C28C9240 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LightTest_Update_m4B95DBEFD0A01D0A6CE32B1A92BF6BDC40C7A801_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// transform.RotateAround(new Vector3(1.2f,1.2f,-0.5f),Vector3.forward,4);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_1), (1.2f), (1.2f), (-0.5f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D(/*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_RotateAround_m433D292B2A38A5A4DEC7DCAE0A8BEAC5C3B2D1DD(L_0, L_1, L_2, (4.0f), /*hidden argument*/NULL);
		// target.localEulerAngles = new Vector3(Mathf.Sin(Time.realtimeSinceStartup)*10+5,0f,0f);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = __this->get_target_4();
		float L_4 = Time_get_realtimeSinceStartup_mCA1086EC9DFCF135F77BC46D3B7127711EA3DE03(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_5 = sinf(L_4);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_6), ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_5, (float)(10.0f))), (float)(5.0f))), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_set_localEulerAngles_mC5E92A989DD8B2E7B854F9D84B528A34AEAA1A17(L_3, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LightTest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightTest__ctor_mCAC2AF61B5DE978D3B17E31FE6853F6D71425C5D (LightTest_t629736CB84CF4476B580264298728798C28C9240 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Object MiniJSON.Json::Deserialize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Json_Deserialize_m3AF2EBC1B24EBD25E675C584D252AEF2F3A06932 (String_t* ___json0, const RuntimeMethod* method)
{
	{
		// if (json == null) {
		String_t* L_0 = ___json0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// return null;
		return NULL;
	}

IL_0005:
	{
		// return Parser.Parse(json);
		String_t* L_1 = ___json0;
		RuntimeObject * L_2 = Parser_Parse_mE7CFB458EF1BBB61C4131ACA249CBE92E81D5C4C(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.String MiniJSON.Json::Serialize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Json_Serialize_m074226BAA8070F50E9648A3AA9A893D1AF222FDA (RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	{
		// return Serializer.Serialize(obj);
		RuntimeObject * L_0 = ___obj0;
		String_t* L_1 = Serializer_Serialize_mFA8E58DA783194AFCBC666004A06C4D4FF9D6BD0(L_0, /*hidden argument*/NULL);
		return L_1;
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
// System.Boolean MiniJSON.Json_Parser::IsWordBreak(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Parser_IsWordBreak_m28C40C2EAD6BE92D855C69C239822E446EFF89EF (Il2CppChar ___c0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_IsWordBreak_m28C40C2EAD6BE92D855C69C239822E446EFF89EF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Char.IsWhiteSpace(c) || WORD_BREAK.IndexOf(c) != -1;
		Il2CppChar L_0 = ___c0;
		IL2CPP_RUNTIME_CLASS_INIT(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_il2cpp_TypeInfo_var);
		bool L_1 = Char_IsWhiteSpace_m8AE1C4157A1E1D8F5022630F4229AB26223BDC6B(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		Il2CppChar L_2 = ___c0;
		NullCheck(_stringLiteral21AE27F947EF77236FD5E0029FDFE3E0913B464B);
		int32_t L_3 = String_IndexOf_m2909B8CF585E1BD0C81E11ACA2F48012156FD5BD(_stringLiteral21AE27F947EF77236FD5E0029FDFE3E0913B464B, L_2, /*hidden argument*/NULL);
		return (bool)((((int32_t)((((int32_t)L_3) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_001a:
	{
		return (bool)1;
	}
}
// System.Void MiniJSON.Json_Parser::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser__ctor_m96ADF8ADDFAF12D86F7A7FB78177F9286F0D53D3 (Parser_t6D190ECCD78CD62DA1F915A8961D37F1C6C50F05 * __this, String_t* ___jsonString0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser__ctor_m96ADF8ADDFAF12D86F7A7FB78177F9286F0D53D3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Parser(string jsonString) {
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// json = new StringReader(jsonString);
		String_t* L_0 = ___jsonString0;
		StringReader_t3095DEB3D26F40D1A7F9B76835D80AFE70E47E12 * L_1 = (StringReader_t3095DEB3D26F40D1A7F9B76835D80AFE70E47E12 *)il2cpp_codegen_object_new(StringReader_t3095DEB3D26F40D1A7F9B76835D80AFE70E47E12_il2cpp_TypeInfo_var);
		StringReader__ctor_mA55383C19EFBC075E762145D88F15A2B8B0CDA17(L_1, L_0, /*hidden argument*/NULL);
		__this->set_json_1(L_1);
		// }
		return;
	}
}
// System.Object MiniJSON.Json_Parser::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Parser_Parse_mE7CFB458EF1BBB61C4131ACA249CBE92E81D5C4C (String_t* ___jsonString0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_Parse_mE7CFB458EF1BBB61C4131ACA249CBE92E81D5C4C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Parser_t6D190ECCD78CD62DA1F915A8961D37F1C6C50F05 * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// using (var instance = new Parser(jsonString)) {
		String_t* L_0 = ___jsonString0;
		Parser_t6D190ECCD78CD62DA1F915A8961D37F1C6C50F05 * L_1 = (Parser_t6D190ECCD78CD62DA1F915A8961D37F1C6C50F05 *)il2cpp_codegen_object_new(Parser_t6D190ECCD78CD62DA1F915A8961D37F1C6C50F05_il2cpp_TypeInfo_var);
		Parser__ctor_m96ADF8ADDFAF12D86F7A7FB78177F9286F0D53D3(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		// return instance.ParseValue();
		Parser_t6D190ECCD78CD62DA1F915A8961D37F1C6C50F05 * L_2 = V_0;
		NullCheck(L_2);
		RuntimeObject * L_3 = Parser_ParseValue_mAB574207E7ADE129E2CE19A066486F0EF4726734(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		IL2CPP_LEAVE(0x1A, FINALLY_0010);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0010;
	}

FINALLY_0010:
	{ // begin finally (depth: 1)
		{
			Parser_t6D190ECCD78CD62DA1F915A8961D37F1C6C50F05 * L_4 = V_0;
			if (!L_4)
			{
				goto IL_0019;
			}
		}

IL_0013:
		{
			Parser_t6D190ECCD78CD62DA1F915A8961D37F1C6C50F05 * L_5 = V_0;
			NullCheck(L_5);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_5);
		}

IL_0019:
		{
			IL2CPP_END_FINALLY(16)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(16)
	{
		IL2CPP_JUMP_TBL(0x1A, IL_001a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_001a:
	{
		// }
		RuntimeObject * L_6 = V_1;
		return L_6;
	}
}
// System.Void MiniJSON.Json_Parser::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser_Dispose_m5CEDBDC5A8F8FDAF037BA4E007EF25478648E637 (Parser_t6D190ECCD78CD62DA1F915A8961D37F1C6C50F05 * __this, const RuntimeMethod* method)
{
	{
		// json.Dispose();
		StringReader_t3095DEB3D26F40D1A7F9B76835D80AFE70E47E12 * L_0 = __this->get_json_1();
		NullCheck(L_0);
		TextReader_Dispose_m9DA31CD42D5E73A1452F4EEC014C5703B5872930(L_0, /*hidden argument*/NULL);
		// json = null;
		__this->set_json_1((StringReader_t3095DEB3D26F40D1A7F9B76835D80AFE70E47E12 *)NULL);
		// }
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Object> MiniJSON.Json_Parser::ParseObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * Parser_ParseObject_mE4CDD92559BD01B7AD11D23CA53CDBFD58E6CA6B (Parser_t6D190ECCD78CD62DA1F915A8961D37F1C6C50F05 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_ParseObject_mE4CDD92559BD01B7AD11D23CA53CDBFD58E6CA6B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		// Dictionary<string, object> table = new Dictionary<string, object>();
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_0 = (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA *)il2cpp_codegen_object_new(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mCA7075EA6548A18B929368520217975094841997(L_0, /*hidden argument*/Dictionary_2__ctor_mCA7075EA6548A18B929368520217975094841997_RuntimeMethod_var);
		V_0 = L_0;
		// json.Read();
		StringReader_t3095DEB3D26F40D1A7F9B76835D80AFE70E47E12 * L_1 = __this->get_json_1();
		NullCheck(L_1);
		VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Read() */, L_1);
	}

IL_0012:
	{
		// switch (NextToken) {
		int32_t L_2 = Parser_get_NextToken_m894EEF05C3FF5BDA15BDB3EC6ACFC5732FE5F531(__this, /*hidden argument*/NULL);
		V_1 = L_2;
		int32_t L_3 = V_1;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_4 = V_1;
		if ((((int32_t)L_4) == ((int32_t)2)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_5 = V_1;
		if ((((int32_t)L_5) == ((int32_t)6)))
		{
			goto IL_0012;
		}
	}
	{
		goto IL_002a;
	}

IL_0026:
	{
		// return null;
		return (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA *)NULL;
	}

IL_0028:
	{
		// return table;
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_6 = V_0;
		return L_6;
	}

IL_002a:
	{
		// string name = ParseString();
		String_t* L_7 = Parser_ParseString_mB6FD7BDCFAB51FF9D401D77CDABDBC13D57D9F2C(__this, /*hidden argument*/NULL);
		V_2 = L_7;
		// if (name == null) {
		String_t* L_8 = V_2;
		if (L_8)
		{
			goto IL_0036;
		}
	}
	{
		// return null;
		return (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA *)NULL;
	}

IL_0036:
	{
		// if (NextToken != TOKEN.COLON) {
		int32_t L_9 = Parser_get_NextToken_m894EEF05C3FF5BDA15BDB3EC6ACFC5732FE5F531(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_9) == ((int32_t)5)))
		{
			goto IL_0041;
		}
	}
	{
		// return null;
		return (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA *)NULL;
	}

IL_0041:
	{
		// json.Read();
		StringReader_t3095DEB3D26F40D1A7F9B76835D80AFE70E47E12 * L_10 = __this->get_json_1();
		NullCheck(L_10);
		VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Read() */, L_10);
		// table[name] = ParseValue();
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_11 = V_0;
		String_t* L_12 = V_2;
		RuntimeObject * L_13 = Parser_ParseValue_mAB574207E7ADE129E2CE19A066486F0EF4726734(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		Dictionary_2_set_Item_mEA41AEAE79570A9410777F6B90969532564025DD(L_11, L_12, L_13, /*hidden argument*/Dictionary_2_set_Item_mEA41AEAE79570A9410777F6B90969532564025DD_RuntimeMethod_var);
		// break;
		goto IL_0012;
	}
}
// System.Collections.Generic.List`1<System.Object> MiniJSON.Json_Parser::ParseArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * Parser_ParseArray_m78D90B8BF3ABAADB783994A8FAA7700B381099A7 (Parser_t6D190ECCD78CD62DA1F915A8961D37F1C6C50F05 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_ParseArray_m78D90B8BF3ABAADB783994A8FAA7700B381099A7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	RuntimeObject * V_3 = NULL;
	{
		// List<object> array = new List<object>();
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)il2cpp_codegen_object_new(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_il2cpp_TypeInfo_var);
		List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3(L_0, /*hidden argument*/List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_RuntimeMethod_var);
		V_0 = L_0;
		// json.Read();
		StringReader_t3095DEB3D26F40D1A7F9B76835D80AFE70E47E12 * L_1 = __this->get_json_1();
		NullCheck(L_1);
		VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Read() */, L_1);
		// var parsing = true;
		V_1 = (bool)1;
		goto IL_003f;
	}

IL_0016:
	{
		// TOKEN nextToken = NextToken;
		int32_t L_2 = Parser_get_NextToken_m894EEF05C3FF5BDA15BDB3EC6ACFC5732FE5F531(__this, /*hidden argument*/NULL);
		V_2 = L_2;
		// switch (nextToken) {
		int32_t L_3 = V_2;
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)4)))
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)6)))
		{
			goto IL_003f;
		}
	}
	{
		goto IL_0030;
	}

IL_002a:
	{
		// return null;
		return (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)NULL;
	}

IL_002c:
	{
		// parsing = false;
		V_1 = (bool)0;
		// break;
		goto IL_003f;
	}

IL_0030:
	{
		// object value = ParseByToken(nextToken);
		int32_t L_6 = V_2;
		RuntimeObject * L_7 = Parser_ParseByToken_m51F2A2B09AED5CB55DA3F8EF5AE61605EED9972F(__this, L_6, /*hidden argument*/NULL);
		V_3 = L_7;
		// array.Add(value);
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_8 = V_0;
		RuntimeObject * L_9 = V_3;
		NullCheck(L_8);
		List_1_Add_m6930161974C7504C80F52EC379EF012387D43138(L_8, L_9, /*hidden argument*/List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_RuntimeMethod_var);
	}

IL_003f:
	{
		// while (parsing) {
		bool L_10 = V_1;
		if (L_10)
		{
			goto IL_0016;
		}
	}
	{
		// return array;
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_11 = V_0;
		return L_11;
	}
}
// System.Object MiniJSON.Json_Parser::ParseValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Parser_ParseValue_mAB574207E7ADE129E2CE19A066486F0EF4726734 (Parser_t6D190ECCD78CD62DA1F915A8961D37F1C6C50F05 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// TOKEN nextToken = NextToken;
		int32_t L_0 = Parser_get_NextToken_m894EEF05C3FF5BDA15BDB3EC6ACFC5732FE5F531(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		// return ParseByToken(nextToken);
		int32_t L_1 = V_0;
		RuntimeObject * L_2 = Parser_ParseByToken_m51F2A2B09AED5CB55DA3F8EF5AE61605EED9972F(__this, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Object MiniJSON.Json_Parser::ParseByToken(MiniJSON.Json_Parser_TOKEN)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Parser_ParseByToken_m51F2A2B09AED5CB55DA3F8EF5AE61605EED9972F (Parser_t6D190ECCD78CD62DA1F915A8961D37F1C6C50F05 * __this, int32_t ___token0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_ParseByToken_m51F2A2B09AED5CB55DA3F8EF5AE61605EED9972F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// switch (token) {
		int32_t L_0 = ___token0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1)))
		{
			case 0:
			{
				goto IL_0044;
			}
			case 1:
			{
				goto IL_0062;
			}
			case 2:
			{
				goto IL_004b;
			}
			case 3:
			{
				goto IL_0062;
			}
			case 4:
			{
				goto IL_0062;
			}
			case 5:
			{
				goto IL_0062;
			}
			case 6:
			{
				goto IL_0036;
			}
			case 7:
			{
				goto IL_003d;
			}
			case 8:
			{
				goto IL_0052;
			}
			case 9:
			{
				goto IL_0059;
			}
			case 10:
			{
				goto IL_0060;
			}
		}
	}
	{
		goto IL_0062;
	}

IL_0036:
	{
		// return ParseString();
		String_t* L_1 = Parser_ParseString_mB6FD7BDCFAB51FF9D401D77CDABDBC13D57D9F2C(__this, /*hidden argument*/NULL);
		return L_1;
	}

IL_003d:
	{
		// return ParseNumber();
		RuntimeObject * L_2 = Parser_ParseNumber_m466ABE116C8AF91A97701A42D4F6D091EE8059DA(__this, /*hidden argument*/NULL);
		return L_2;
	}

IL_0044:
	{
		// return ParseObject();
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_3 = Parser_ParseObject_mE4CDD92559BD01B7AD11D23CA53CDBFD58E6CA6B(__this, /*hidden argument*/NULL);
		return L_3;
	}

IL_004b:
	{
		// return ParseArray();
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_4 = Parser_ParseArray_m78D90B8BF3ABAADB783994A8FAA7700B381099A7(__this, /*hidden argument*/NULL);
		return L_4;
	}

IL_0052:
	{
		// return true;
		bool L_5 = ((bool)1);
		RuntimeObject * L_6 = Box(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}

IL_0059:
	{
		// return false;
		bool L_7 = ((bool)0);
		RuntimeObject * L_8 = Box(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var, &L_7);
		return L_8;
	}

IL_0060:
	{
		// return null;
		return NULL;
	}

IL_0062:
	{
		// return null;
		return NULL;
	}
}
// System.String MiniJSON.Json_Parser::ParseString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Parser_ParseString_mB6FD7BDCFAB51FF9D401D77CDABDBC13D57D9F2C (Parser_t6D190ECCD78CD62DA1F915A8961D37F1C6C50F05 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_ParseString_mB6FD7BDCFAB51FF9D401D77CDABDBC13D57D9F2C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	Il2CppChar V_1 = 0x0;
	bool V_2 = false;
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* V_3 = NULL;
	int32_t V_4 = 0;
	{
		// StringBuilder s = new StringBuilder();
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_mF928376F82E8C8FF3C11842C562DB8CF28B2735E(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// json.Read();
		StringReader_t3095DEB3D26F40D1A7F9B76835D80AFE70E47E12 * L_1 = __this->get_json_1();
		NullCheck(L_1);
		VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Read() */, L_1);
		// bool parsing = true;
		V_2 = (bool)1;
		goto IL_0137;
	}

IL_0019:
	{
		// if (json.Peek() == -1) {
		StringReader_t3095DEB3D26F40D1A7F9B76835D80AFE70E47E12 * L_2 = __this->get_json_1();
		NullCheck(L_2);
		int32_t L_3 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.IO.TextReader::Peek() */, L_2);
		if ((!(((uint32_t)L_3) == ((uint32_t)(-1)))))
		{
			goto IL_002e;
		}
	}
	{
		// parsing = false;
		V_2 = (bool)0;
		// break;
		goto IL_013d;
	}

IL_002e:
	{
		// c = NextChar;
		Il2CppChar L_4 = Parser_get_NextChar_mF5EEB11643B9A22E8FD5D6ACD69D0B96C3DD6DC2(__this, /*hidden argument*/NULL);
		V_1 = L_4;
		// switch (c) {
		Il2CppChar L_5 = V_1;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)34))))
		{
			goto IL_0044;
		}
	}
	{
		Il2CppChar L_6 = V_1;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)92))))
		{
			goto IL_004b;
		}
	}
	{
		goto IL_012f;
	}

IL_0044:
	{
		// parsing = false;
		V_2 = (bool)0;
		// break;
		goto IL_0137;
	}

IL_004b:
	{
		// if (json.Peek() == -1) {
		StringReader_t3095DEB3D26F40D1A7F9B76835D80AFE70E47E12 * L_7 = __this->get_json_1();
		NullCheck(L_7);
		int32_t L_8 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.IO.TextReader::Peek() */, L_7);
		if ((!(((uint32_t)L_8) == ((uint32_t)(-1)))))
		{
			goto IL_0060;
		}
	}
	{
		// parsing = false;
		V_2 = (bool)0;
		// break;
		goto IL_0137;
	}

IL_0060:
	{
		// c = NextChar;
		Il2CppChar L_9 = Parser_get_NextChar_mF5EEB11643B9A22E8FD5D6ACD69D0B96C3DD6DC2(__this, /*hidden argument*/NULL);
		V_1 = L_9;
		// switch (c) {
		Il2CppChar L_10 = V_1;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)92)))))
		{
			goto IL_0080;
		}
	}
	{
		Il2CppChar L_11 = V_1;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)34))))
		{
			goto IL_00b7;
		}
	}
	{
		Il2CppChar L_12 = V_1;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)47))))
		{
			goto IL_00b7;
		}
	}
	{
		Il2CppChar L_13 = V_1;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)92))))
		{
			goto IL_00b7;
		}
	}
	{
		goto IL_0137;
	}

IL_0080:
	{
		Il2CppChar L_14 = V_1;
		if ((!(((uint32_t)L_14) <= ((uint32_t)((int32_t)102)))))
		{
			goto IL_0094;
		}
	}
	{
		Il2CppChar L_15 = V_1;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)98))))
		{
			goto IL_00c1;
		}
	}
	{
		Il2CppChar L_16 = V_1;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)102))))
		{
			goto IL_00cb;
		}
	}
	{
		goto IL_0137;
	}

IL_0094:
	{
		Il2CppChar L_17 = V_1;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)110))))
		{
			goto IL_00d6;
		}
	}
	{
		Il2CppChar L_18 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_18, (int32_t)((int32_t)114))))
		{
			case 0:
			{
				goto IL_00e1;
			}
			case 1:
			{
				goto IL_0137;
			}
			case 2:
			{
				goto IL_00ec;
			}
			case 3:
			{
				goto IL_00f7;
			}
		}
	}
	{
		goto IL_0137;
	}

IL_00b7:
	{
		// s.Append(c);
		StringBuilder_t * L_19 = V_0;
		Il2CppChar L_20 = V_1;
		NullCheck(L_19);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_19, L_20, /*hidden argument*/NULL);
		// break;
		goto IL_0137;
	}

IL_00c1:
	{
		// s.Append('\b');
		StringBuilder_t * L_21 = V_0;
		NullCheck(L_21);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_21, 8, /*hidden argument*/NULL);
		// break;
		goto IL_0137;
	}

IL_00cb:
	{
		// s.Append('\f');
		StringBuilder_t * L_22 = V_0;
		NullCheck(L_22);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_22, ((int32_t)12), /*hidden argument*/NULL);
		// break;
		goto IL_0137;
	}

IL_00d6:
	{
		// s.Append('\n');
		StringBuilder_t * L_23 = V_0;
		NullCheck(L_23);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_23, ((int32_t)10), /*hidden argument*/NULL);
		// break;
		goto IL_0137;
	}

IL_00e1:
	{
		// s.Append('\r');
		StringBuilder_t * L_24 = V_0;
		NullCheck(L_24);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_24, ((int32_t)13), /*hidden argument*/NULL);
		// break;
		goto IL_0137;
	}

IL_00ec:
	{
		// s.Append('\t');
		StringBuilder_t * L_25 = V_0;
		NullCheck(L_25);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_25, ((int32_t)9), /*hidden argument*/NULL);
		// break;
		goto IL_0137;
	}

IL_00f7:
	{
		// var hex = new char[4];
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_26 = (CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)SZArrayNew(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2_il2cpp_TypeInfo_var, (uint32_t)4);
		V_3 = L_26;
		// for (int i=0; i< 4; i++) {
		V_4 = 0;
		goto IL_0113;
	}

IL_0103:
	{
		// hex[i] = NextChar;
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_27 = V_3;
		int32_t L_28 = V_4;
		Il2CppChar L_29 = Parser_get_NextChar_mF5EEB11643B9A22E8FD5D6ACD69D0B96C3DD6DC2(__this, /*hidden argument*/NULL);
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (Il2CppChar)L_29);
		// for (int i=0; i< 4; i++) {
		int32_t L_30 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1));
	}

IL_0113:
	{
		// for (int i=0; i< 4; i++) {
		int32_t L_31 = V_4;
		if ((((int32_t)L_31) < ((int32_t)4)))
		{
			goto IL_0103;
		}
	}
	{
		// s.Append((char) Convert.ToInt32(new string(hex), 16));
		StringBuilder_t * L_32 = V_0;
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_33 = V_3;
		String_t* L_34 = String_CreateString_m394C06654854ADD4C51FF957BE0CC72EF52BAA96(NULL, L_33, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		int32_t L_35 = Convert_ToInt32_m8DC81C7C49EE4A9334E71E45E3A220644E45B4F4(L_34, ((int32_t)16), /*hidden argument*/NULL);
		NullCheck(L_32);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_32, (((int32_t)((uint16_t)L_35))), /*hidden argument*/NULL);
		// break;
		goto IL_0137;
	}

IL_012f:
	{
		// s.Append(c);
		StringBuilder_t * L_36 = V_0;
		Il2CppChar L_37 = V_1;
		NullCheck(L_36);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_36, L_37, /*hidden argument*/NULL);
	}

IL_0137:
	{
		// while (parsing) {
		bool L_38 = V_2;
		if (L_38)
		{
			goto IL_0019;
		}
	}

IL_013d:
	{
		// return s.ToString();
		StringBuilder_t * L_39 = V_0;
		NullCheck(L_39);
		String_t* L_40 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_39);
		return L_40;
	}
}
// System.Object MiniJSON.Json_Parser::ParseNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Parser_ParseNumber_m466ABE116C8AF91A97701A42D4F6D091EE8059DA (Parser_t6D190ECCD78CD62DA1F915A8961D37F1C6C50F05 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_ParseNumber_m466ABE116C8AF91A97701A42D4F6D091EE8059DA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	double V_1 = 0.0;
	int64_t V_2 = 0;
	{
		// string number = NextWord;
		String_t* L_0 = Parser_get_NextWord_m3B85F7D22F4E4AC975212CED15E49C36C97425AC(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		// if (number.IndexOf('.') == -1 && number.IndexOf('E') == -1 && number.IndexOf('e') == -1) {
		String_t* L_1 = V_0;
		NullCheck(L_1);
		int32_t L_2 = String_IndexOf_m2909B8CF585E1BD0C81E11ACA2F48012156FD5BD(L_1, ((int32_t)46), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0042;
		}
	}
	{
		String_t* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = String_IndexOf_m2909B8CF585E1BD0C81E11ACA2F48012156FD5BD(L_3, ((int32_t)69), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_4) == ((uint32_t)(-1)))))
		{
			goto IL_0042;
		}
	}
	{
		String_t* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6 = String_IndexOf_m2909B8CF585E1BD0C81E11ACA2F48012156FD5BD(L_5, ((int32_t)101), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)(-1)))))
		{
			goto IL_0042;
		}
	}
	{
		// Int64.TryParse(number, System.Globalization.NumberStyles.Any, System.Globalization.CultureInfo.InvariantCulture, out parsedInt);
		String_t* L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var);
		CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_8 = CultureInfo_get_InvariantCulture_mF13B47F8A763CE6A9C8A8BB2EED33FF8F7A63A72(/*hidden argument*/NULL);
		Int64_TryParse_m8CE5F89833C03A091273A4EF48C69E86E1F81ACC(L_7, ((int32_t)511), L_8, (int64_t*)(&V_2), /*hidden argument*/NULL);
		// return parsedInt;
		int64_t L_9 = V_2;
		int64_t L_10 = L_9;
		RuntimeObject * L_11 = Box(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var, &L_10);
		return L_11;
	}

IL_0042:
	{
		// Double.TryParse(number, System.Globalization.NumberStyles.Any, System.Globalization.CultureInfo.InvariantCulture, out parsedDouble);
		String_t* L_12 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var);
		CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_13 = CultureInfo_get_InvariantCulture_mF13B47F8A763CE6A9C8A8BB2EED33FF8F7A63A72(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_il2cpp_TypeInfo_var);
		Double_TryParse_m1A7BCBA90DE896E448E3CA09AAD1CA43846567D7(L_12, ((int32_t)511), L_13, (double*)(&V_1), /*hidden argument*/NULL);
		// return parsedDouble;
		double L_14 = V_1;
		double L_15 = L_14;
		RuntimeObject * L_16 = Box(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_il2cpp_TypeInfo_var, &L_15);
		return L_16;
	}
}
// System.Void MiniJSON.Json_Parser::EatWhitespace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser_EatWhitespace_m8123DF169A4671C0E75FF5D09B6017C3E9A74EBF (Parser_t6D190ECCD78CD62DA1F915A8961D37F1C6C50F05 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_EatWhitespace_m8123DF169A4671C0E75FF5D09B6017C3E9A74EBF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		goto IL_001c;
	}

IL_0002:
	{
		// json.Read();
		StringReader_t3095DEB3D26F40D1A7F9B76835D80AFE70E47E12 * L_0 = __this->get_json_1();
		NullCheck(L_0);
		VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Read() */, L_0);
		// if (json.Peek() == -1) {
		StringReader_t3095DEB3D26F40D1A7F9B76835D80AFE70E47E12 * L_1 = __this->get_json_1();
		NullCheck(L_1);
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.IO.TextReader::Peek() */, L_1);
		if ((((int32_t)L_2) == ((int32_t)(-1))))
		{
			goto IL_0029;
		}
	}

IL_001c:
	{
		// while (Char.IsWhiteSpace(PeekChar)) {
		Il2CppChar L_3 = Parser_get_PeekChar_mA9D1D2F85589251E8046414A7E8ECA05FE298ADA(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_il2cpp_TypeInfo_var);
		bool L_4 = Char_IsWhiteSpace_m8AE1C4157A1E1D8F5022630F4229AB26223BDC6B(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0002;
		}
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Char MiniJSON.Json_Parser::get_PeekChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Parser_get_PeekChar_mA9D1D2F85589251E8046414A7E8ECA05FE298ADA (Parser_t6D190ECCD78CD62DA1F915A8961D37F1C6C50F05 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_get_PeekChar_mA9D1D2F85589251E8046414A7E8ECA05FE298ADA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Convert.ToChar(json.Peek());
		StringReader_t3095DEB3D26F40D1A7F9B76835D80AFE70E47E12 * L_0 = __this->get_json_1();
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.IO.TextReader::Peek() */, L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		Il2CppChar L_2 = Convert_ToChar_m5BD134B72978B879B81A824DFAC8FF29F5300245(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Char MiniJSON.Json_Parser::get_NextChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Parser_get_NextChar_mF5EEB11643B9A22E8FD5D6ACD69D0B96C3DD6DC2 (Parser_t6D190ECCD78CD62DA1F915A8961D37F1C6C50F05 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_get_NextChar_mF5EEB11643B9A22E8FD5D6ACD69D0B96C3DD6DC2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Convert.ToChar(json.Read());
		StringReader_t3095DEB3D26F40D1A7F9B76835D80AFE70E47E12 * L_0 = __this->get_json_1();
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Read() */, L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		Il2CppChar L_2 = Convert_ToChar_m5BD134B72978B879B81A824DFAC8FF29F5300245(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.String MiniJSON.Json_Parser::get_NextWord()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Parser_get_NextWord_m3B85F7D22F4E4AC975212CED15E49C36C97425AC (Parser_t6D190ECCD78CD62DA1F915A8961D37F1C6C50F05 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_get_NextWord_m3B85F7D22F4E4AC975212CED15E49C36C97425AC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	{
		// StringBuilder word = new StringBuilder();
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_mF928376F82E8C8FF3C11842C562DB8CF28B2735E(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0023;
	}

IL_0008:
	{
		// word.Append(NextChar);
		StringBuilder_t * L_1 = V_0;
		Il2CppChar L_2 = Parser_get_NextChar_mF5EEB11643B9A22E8FD5D6ACD69D0B96C3DD6DC2(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_1, L_2, /*hidden argument*/NULL);
		// if (json.Peek() == -1) {
		StringReader_t3095DEB3D26F40D1A7F9B76835D80AFE70E47E12 * L_3 = __this->get_json_1();
		NullCheck(L_3);
		int32_t L_4 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.IO.TextReader::Peek() */, L_3);
		if ((((int32_t)L_4) == ((int32_t)(-1))))
		{
			goto IL_0030;
		}
	}

IL_0023:
	{
		// while (!IsWordBreak(PeekChar)) {
		Il2CppChar L_5 = Parser_get_PeekChar_mA9D1D2F85589251E8046414A7E8ECA05FE298ADA(__this, /*hidden argument*/NULL);
		bool L_6 = Parser_IsWordBreak_m28C40C2EAD6BE92D855C69C239822E446EFF89EF(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0008;
		}
	}

IL_0030:
	{
		// return word.ToString();
		StringBuilder_t * L_7 = V_0;
		NullCheck(L_7);
		String_t* L_8 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_7);
		return L_8;
	}
}
// MiniJSON.Json_Parser_TOKEN MiniJSON.Json_Parser::get_NextToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Parser_get_NextToken_m894EEF05C3FF5BDA15BDB3EC6ACFC5732FE5F531 (Parser_t6D190ECCD78CD62DA1F915A8961D37F1C6C50F05 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_get_NextToken_m894EEF05C3FF5BDA15BDB3EC6ACFC5732FE5F531_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	String_t* V_1 = NULL;
	{
		// EatWhitespace();
		Parser_EatWhitespace_m8123DF169A4671C0E75FF5D09B6017C3E9A74EBF(__this, /*hidden argument*/NULL);
		// if (json.Peek() == -1) {
		StringReader_t3095DEB3D26F40D1A7F9B76835D80AFE70E47E12 * L_0 = __this->get_json_1();
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.IO.TextReader::Peek() */, L_0);
		if ((!(((uint32_t)L_1) == ((uint32_t)(-1)))))
		{
			goto IL_0016;
		}
	}
	{
		// return TOKEN.NONE;
		return (int32_t)(0);
	}

IL_0016:
	{
		// switch (PeekChar) {
		Il2CppChar L_2 = Parser_get_PeekChar_mA9D1D2F85589251E8046414A7E8ECA05FE298ADA(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		Il2CppChar L_3 = V_0;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)91)))))
		{
			goto IL_0096;
		}
	}
	{
		Il2CppChar L_4 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)((int32_t)34))))
		{
			case 0:
			{
				goto IL_00d5;
			}
			case 1:
			{
				goto IL_00db;
			}
			case 2:
			{
				goto IL_00db;
			}
			case 3:
			{
				goto IL_00db;
			}
			case 4:
			{
				goto IL_00db;
			}
			case 5:
			{
				goto IL_00db;
			}
			case 6:
			{
				goto IL_00db;
			}
			case 7:
			{
				goto IL_00db;
			}
			case 8:
			{
				goto IL_00db;
			}
			case 9:
			{
				goto IL_00db;
			}
			case 10:
			{
				goto IL_00c7;
			}
			case 11:
			{
				goto IL_00d9;
			}
			case 12:
			{
				goto IL_00db;
			}
			case 13:
			{
				goto IL_00db;
			}
			case 14:
			{
				goto IL_00d9;
			}
			case 15:
			{
				goto IL_00d9;
			}
			case 16:
			{
				goto IL_00d9;
			}
			case 17:
			{
				goto IL_00d9;
			}
			case 18:
			{
				goto IL_00d9;
			}
			case 19:
			{
				goto IL_00d9;
			}
			case 20:
			{
				goto IL_00d9;
			}
			case 21:
			{
				goto IL_00d9;
			}
			case 22:
			{
				goto IL_00d9;
			}
			case 23:
			{
				goto IL_00d9;
			}
			case 24:
			{
				goto IL_00d7;
			}
		}
	}
	{
		Il2CppChar L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)91))))
		{
			goto IL_00b7;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		Il2CppChar L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)93))))
		{
			goto IL_00b9;
		}
	}
	{
		Il2CppChar L_7 = V_0;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)123))))
		{
			goto IL_00a7;
		}
	}
	{
		Il2CppChar L_8 = V_0;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)125))))
		{
			goto IL_00a9;
		}
	}
	{
		goto IL_00db;
	}

IL_00a7:
	{
		// return TOKEN.CURLY_OPEN;
		return (int32_t)(1);
	}

IL_00a9:
	{
		// json.Read();
		StringReader_t3095DEB3D26F40D1A7F9B76835D80AFE70E47E12 * L_9 = __this->get_json_1();
		NullCheck(L_9);
		VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Read() */, L_9);
		// return TOKEN.CURLY_CLOSE;
		return (int32_t)(2);
	}

IL_00b7:
	{
		// return TOKEN.SQUARED_OPEN;
		return (int32_t)(3);
	}

IL_00b9:
	{
		// json.Read();
		StringReader_t3095DEB3D26F40D1A7F9B76835D80AFE70E47E12 * L_10 = __this->get_json_1();
		NullCheck(L_10);
		VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Read() */, L_10);
		// return TOKEN.SQUARED_CLOSE;
		return (int32_t)(4);
	}

IL_00c7:
	{
		// json.Read();
		StringReader_t3095DEB3D26F40D1A7F9B76835D80AFE70E47E12 * L_11 = __this->get_json_1();
		NullCheck(L_11);
		VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Read() */, L_11);
		// return TOKEN.COMMA;
		return (int32_t)(6);
	}

IL_00d5:
	{
		// return TOKEN.STRING;
		return (int32_t)(7);
	}

IL_00d7:
	{
		// return TOKEN.COLON;
		return (int32_t)(5);
	}

IL_00d9:
	{
		// return TOKEN.NUMBER;
		return (int32_t)(8);
	}

IL_00db:
	{
		// switch (NextWord) {
		String_t* L_12 = Parser_get_NextWord_m3B85F7D22F4E4AC975212CED15E49C36C97425AC(__this, /*hidden argument*/NULL);
		V_1 = L_12;
		String_t* L_13 = V_1;
		bool L_14 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_13, _stringLiteral7CB6EFB98BA5972A9B5090DC2E517FE14D12CB04, /*hidden argument*/NULL);
		if (L_14)
		{
			goto IL_010b;
		}
	}
	{
		String_t* L_15 = V_1;
		bool L_16 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_15, _stringLiteral5FFE533B830F08A0326348A9160AFAFC8ADA44DB, /*hidden argument*/NULL);
		if (L_16)
		{
			goto IL_010e;
		}
	}
	{
		String_t* L_17 = V_1;
		bool L_18 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_17, _stringLiteral2BE88CA4242C76E8253AC62474851065032D6833, /*hidden argument*/NULL);
		if (L_18)
		{
			goto IL_0111;
		}
	}
	{
		goto IL_0114;
	}

IL_010b:
	{
		// return TOKEN.FALSE;
		return (int32_t)(((int32_t)10));
	}

IL_010e:
	{
		// return TOKEN.TRUE;
		return (int32_t)(((int32_t)9));
	}

IL_0111:
	{
		// return TOKEN.NULL;
		return (int32_t)(((int32_t)11));
	}

IL_0114:
	{
		// return TOKEN.NONE;
		return (int32_t)(0);
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
// System.Void MiniJSON.Json_Serializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer__ctor_mFE9DA80B01A749C7DB99439080F6AB40A15C4FC7 (Serializer_tE5A49C9AA549A4CDC0A5440C1ECC6778E98A377F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Serializer__ctor_mFE9DA80B01A749C7DB99439080F6AB40A15C4FC7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Serializer() {
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// builder = new StringBuilder();
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_mF928376F82E8C8FF3C11842C562DB8CF28B2735E(L_0, /*hidden argument*/NULL);
		__this->set_builder_0(L_0);
		// }
		return;
	}
}
// System.String MiniJSON.Json_Serializer::Serialize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Serializer_Serialize_mFA8E58DA783194AFCBC666004A06C4D4FF9D6BD0 (RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Serializer_Serialize_mFA8E58DA783194AFCBC666004A06C4D4FF9D6BD0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var instance = new Serializer();
		Serializer_tE5A49C9AA549A4CDC0A5440C1ECC6778E98A377F * L_0 = (Serializer_tE5A49C9AA549A4CDC0A5440C1ECC6778E98A377F *)il2cpp_codegen_object_new(Serializer_tE5A49C9AA549A4CDC0A5440C1ECC6778E98A377F_il2cpp_TypeInfo_var);
		Serializer__ctor_mFE9DA80B01A749C7DB99439080F6AB40A15C4FC7(L_0, /*hidden argument*/NULL);
		// instance.SerializeValue(obj);
		Serializer_tE5A49C9AA549A4CDC0A5440C1ECC6778E98A377F * L_1 = L_0;
		RuntimeObject * L_2 = ___obj0;
		NullCheck(L_1);
		Serializer_SerializeValue_mFF1E97E02EFBCA7684308935281C7F1AF941EA6F(L_1, L_2, /*hidden argument*/NULL);
		// return instance.builder.ToString();
		NullCheck(L_1);
		StringBuilder_t * L_3 = L_1->get_builder_0();
		NullCheck(L_3);
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_3);
		return L_4;
	}
}
// System.Void MiniJSON.Json_Serializer::SerializeValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeValue_mFF1E97E02EFBCA7684308935281C7F1AF941EA6F (Serializer_tE5A49C9AA549A4CDC0A5440C1ECC6778E98A377F * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Serializer_SerializeValue_mFF1E97E02EFBCA7684308935281C7F1AF941EA6F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	StringBuilder_t * G_B7_0 = NULL;
	StringBuilder_t * G_B6_0 = NULL;
	String_t* G_B8_0 = NULL;
	StringBuilder_t * G_B8_1 = NULL;
	{
		// if (value == null) {
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		// builder.Append("null");
		StringBuilder_t * L_1 = __this->get_builder_0();
		NullCheck(L_1);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_1, _stringLiteral2BE88CA4242C76E8253AC62474851065032D6833, /*hidden argument*/NULL);
		// } else if ((asStr = value as string) != null) {
		return;
	}

IL_0015:
	{
		// } else if ((asStr = value as string) != null) {
		RuntimeObject * L_2 = ___value0;
		String_t* L_3 = ((String_t*)IsInstSealed((RuntimeObject*)L_2, String_t_il2cpp_TypeInfo_var));
		V_2 = L_3;
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		// SerializeString(asStr);
		String_t* L_4 = V_2;
		Serializer_SerializeString_m14A9434C6FDDED2581495A41C09CB3B78CE1BC55(__this, L_4, /*hidden argument*/NULL);
		// } else if (value is bool) {
		return;
	}

IL_0027:
	{
		// } else if (value is bool) {
		RuntimeObject * L_5 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_5, Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var)))
		{
			goto IL_0050;
		}
	}
	{
		// builder.Append((bool) value ? "true" : "false");
		StringBuilder_t * L_6 = __this->get_builder_0();
		RuntimeObject * L_7 = ___value0;
		G_B6_0 = L_6;
		if (((*(bool*)((bool*)UnBox(L_7, Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var)))))
		{
			G_B7_0 = L_6;
			goto IL_0044;
		}
	}
	{
		G_B8_0 = _stringLiteral7CB6EFB98BA5972A9B5090DC2E517FE14D12CB04;
		G_B8_1 = G_B6_0;
		goto IL_0049;
	}

IL_0044:
	{
		G_B8_0 = _stringLiteral5FFE533B830F08A0326348A9160AFAFC8ADA44DB;
		G_B8_1 = G_B7_0;
	}

IL_0049:
	{
		NullCheck(G_B8_1);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(G_B8_1, G_B8_0, /*hidden argument*/NULL);
		// } else if ((asList = value as IList) != null) {
		return;
	}

IL_0050:
	{
		// } else if ((asList = value as IList) != null) {
		RuntimeObject * L_8 = ___value0;
		RuntimeObject* L_9 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, IList_tA637AB426E16F84F84ACC2813BDCF3A0414AF0AA_il2cpp_TypeInfo_var));
		V_0 = L_9;
		if (!L_9)
		{
			goto IL_0062;
		}
	}
	{
		// SerializeArray(asList);
		RuntimeObject* L_10 = V_0;
		Serializer_SerializeArray_m169AADCDE719004976AC63192D2E4A4239D375EB(__this, L_10, /*hidden argument*/NULL);
		// } else if ((asDict = value as IDictionary) != null) {
		return;
	}

IL_0062:
	{
		// } else if ((asDict = value as IDictionary) != null) {
		RuntimeObject * L_11 = ___value0;
		RuntimeObject* L_12 = ((RuntimeObject*)IsInst((RuntimeObject*)L_11, IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7_il2cpp_TypeInfo_var));
		V_1 = L_12;
		if (!L_12)
		{
			goto IL_0074;
		}
	}
	{
		// SerializeObject(asDict);
		RuntimeObject* L_13 = V_1;
		Serializer_SerializeObject_m727C7C3617E2EB173460858D7ACD36324DD0CD71(__this, L_13, /*hidden argument*/NULL);
		// } else if (value is char) {
		return;
	}

IL_0074:
	{
		// } else if (value is char) {
		RuntimeObject * L_14 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_14, Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_il2cpp_TypeInfo_var)))
		{
			goto IL_008f;
		}
	}
	{
		// SerializeString(new string((char) value, 1));
		RuntimeObject * L_15 = ___value0;
		String_t* L_16 = String_CreateString_m0E7BBCE09E386877E2B63BF7FA36B956BF221C93(NULL, ((*(Il2CppChar*)((Il2CppChar*)UnBox(L_15, Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_il2cpp_TypeInfo_var)))), 1, /*hidden argument*/NULL);
		Serializer_SerializeString_m14A9434C6FDDED2581495A41C09CB3B78CE1BC55(__this, L_16, /*hidden argument*/NULL);
		// } else {
		return;
	}

IL_008f:
	{
		// SerializeOther(value);
		RuntimeObject * L_17 = ___value0;
		Serializer_SerializeOther_m4D46EFFF72A8F103E8028B82393E400F370DAD4B(__this, L_17, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MiniJSON.Json_Serializer::SerializeObject(System.Collections.IDictionary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeObject_m727C7C3617E2EB173460858D7ACD36324DD0CD71 (Serializer_tE5A49C9AA549A4CDC0A5440C1ECC6778E98A377F * __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Serializer_SerializeObject_m727C7C3617E2EB173460858D7ACD36324DD0CD71_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// bool first = true;
		V_0 = (bool)1;
		// builder.Append('{');
		StringBuilder_t * L_0 = __this->get_builder_0();
		NullCheck(L_0);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_0, ((int32_t)123), /*hidden argument*/NULL);
		// foreach (object e in obj.Keys) {
		RuntimeObject* L_1 = ___obj0;
		NullCheck(L_1);
		RuntimeObject* L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Collections.ICollection System.Collections.IDictionary::get_Keys() */, IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_2);
		RuntimeObject* L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_tD74549CEA1AA48E768382B94FEACBB07E2E3FA2C_il2cpp_TypeInfo_var, L_2);
		V_1 = L_3;
	}

IL_001c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_005f;
		}

IL_001e:
		{
			// foreach (object e in obj.Keys) {
			RuntimeObject* L_4 = V_1;
			NullCheck(L_4);
			RuntimeObject * L_5 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_4);
			V_2 = L_5;
			// if (!first) {
			bool L_6 = V_0;
			if (L_6)
			{
				goto IL_0036;
			}
		}

IL_0028:
		{
			// builder.Append(',');
			StringBuilder_t * L_7 = __this->get_builder_0();
			NullCheck(L_7);
			StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_7, ((int32_t)44), /*hidden argument*/NULL);
		}

IL_0036:
		{
			// SerializeString(e.ToString());
			RuntimeObject * L_8 = V_2;
			NullCheck(L_8);
			String_t* L_9 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
			Serializer_SerializeString_m14A9434C6FDDED2581495A41C09CB3B78CE1BC55(__this, L_9, /*hidden argument*/NULL);
			// builder.Append(':');
			StringBuilder_t * L_10 = __this->get_builder_0();
			NullCheck(L_10);
			StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_10, ((int32_t)58), /*hidden argument*/NULL);
			// SerializeValue(obj[e]);
			RuntimeObject* L_11 = ___obj0;
			RuntimeObject * L_12 = V_2;
			NullCheck(L_11);
			RuntimeObject * L_13 = InterfaceFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IDictionary::get_Item(System.Object) */, IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7_il2cpp_TypeInfo_var, L_11, L_12);
			Serializer_SerializeValue_mFF1E97E02EFBCA7684308935281C7F1AF941EA6F(__this, L_13, /*hidden argument*/NULL);
			// first = false;
			V_0 = (bool)0;
		}

IL_005f:
		{
			// foreach (object e in obj.Keys) {
			RuntimeObject* L_14 = V_1;
			NullCheck(L_14);
			bool L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_14);
			if (L_15)
			{
				goto IL_001e;
			}
		}

IL_0067:
		{
			IL2CPP_LEAVE(0x7A, FINALLY_0069);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0069;
	}

FINALLY_0069:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_16 = V_1;
			V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_16, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var));
			RuntimeObject* L_17 = V_3;
			if (!L_17)
			{
				goto IL_0079;
			}
		}

IL_0073:
		{
			RuntimeObject* L_18 = V_3;
			NullCheck(L_18);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_18);
		}

IL_0079:
		{
			IL2CPP_END_FINALLY(105)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(105)
	{
		IL2CPP_JUMP_TBL(0x7A, IL_007a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_007a:
	{
		// builder.Append('}');
		StringBuilder_t * L_19 = __this->get_builder_0();
		NullCheck(L_19);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_19, ((int32_t)125), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MiniJSON.Json_Serializer::SerializeArray(System.Collections.IList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeArray_m169AADCDE719004976AC63192D2E4A4239D375EB (Serializer_tE5A49C9AA549A4CDC0A5440C1ECC6778E98A377F * __this, RuntimeObject* ___anArray0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Serializer_SerializeArray_m169AADCDE719004976AC63192D2E4A4239D375EB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	RuntimeObject * V_2 = NULL;
	{
		// builder.Append('[');
		StringBuilder_t * L_0 = __this->get_builder_0();
		NullCheck(L_0);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_0, ((int32_t)91), /*hidden argument*/NULL);
		// bool first = true;
		V_0 = (bool)1;
		// for (int i=0; i<anArray.Count; i++) {
		V_1 = 0;
		goto IL_003a;
	}

IL_0014:
	{
		// object obj = anArray[i];
		RuntimeObject* L_1 = ___anArray0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		RuntimeObject * L_3 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_tA637AB426E16F84F84ACC2813BDCF3A0414AF0AA_il2cpp_TypeInfo_var, L_1, L_2);
		V_2 = L_3;
		// if (!first) {
		bool L_4 = V_0;
		if (L_4)
		{
			goto IL_002d;
		}
	}
	{
		// builder.Append(',');
		StringBuilder_t * L_5 = __this->get_builder_0();
		NullCheck(L_5);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_5, ((int32_t)44), /*hidden argument*/NULL);
	}

IL_002d:
	{
		// SerializeValue(obj);
		RuntimeObject * L_6 = V_2;
		Serializer_SerializeValue_mFF1E97E02EFBCA7684308935281C7F1AF941EA6F(__this, L_6, /*hidden argument*/NULL);
		// first = false;
		V_0 = (bool)0;
		// for (int i=0; i<anArray.Count; i++) {
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_003a:
	{
		// for (int i=0; i<anArray.Count; i++) {
		int32_t L_8 = V_1;
		RuntimeObject* L_9 = ___anArray0;
		NullCheck(L_9);
		int32_t L_10 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_tA3BAB2482E28132A7CA9E0E21393027353C28B54_il2cpp_TypeInfo_var, L_9);
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_0014;
		}
	}
	{
		// builder.Append(']');
		StringBuilder_t * L_11 = __this->get_builder_0();
		NullCheck(L_11);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_11, ((int32_t)93), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MiniJSON.Json_Serializer::SerializeString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeString_m14A9434C6FDDED2581495A41C09CB3B78CE1BC55 (Serializer_tE5A49C9AA549A4CDC0A5440C1ECC6778E98A377F * __this, String_t* ___str0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Serializer_SerializeString_m14A9434C6FDDED2581495A41C09CB3B78CE1BC55_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* V_0 = NULL;
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	int32_t V_3 = 0;
	{
		// builder.Append('\"');
		StringBuilder_t * L_0 = __this->get_builder_0();
		NullCheck(L_0);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_0, ((int32_t)34), /*hidden argument*/NULL);
		// char[] charArray = str.ToCharArray();
		String_t* L_1 = ___str0;
		NullCheck(L_1);
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_2 = String_ToCharArray_mFCFF32A5EC698E81075E0C72C874282B9ED197A6(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// for (int i=0; i<charArray.Length; i++) {
		V_1 = 0;
		goto IL_012d;
	}

IL_001c:
	{
		// char c = charArray[i];
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_3 = V_0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		uint16_t L_6 = (uint16_t)(L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_2 = L_6;
		// switch (c) {
		Il2CppChar L_7 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)8)))
		{
			case 0:
			{
				goto IL_007b;
			}
			case 1:
			{
				goto IL_00cd;
			}
			case 2:
			{
				goto IL_00a7;
			}
			case 3:
			{
				goto IL_00e0;
			}
			case 4:
			{
				goto IL_0091;
			}
			case 5:
			{
				goto IL_00ba;
			}
		}
	}
	{
		Il2CppChar L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)34))))
		{
			goto IL_004f;
		}
	}
	{
		Il2CppChar L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)92))))
		{
			goto IL_0065;
		}
	}
	{
		goto IL_00e0;
	}

IL_004f:
	{
		// builder.Append("\\\"");
		StringBuilder_t * L_10 = __this->get_builder_0();
		NullCheck(L_10);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_10, _stringLiteralAB006BB8AACDF6E68299BC1DFFCCC9BCC8AC3EAF, /*hidden argument*/NULL);
		// break;
		goto IL_0129;
	}

IL_0065:
	{
		// builder.Append("\\\\");
		StringBuilder_t * L_11 = __this->get_builder_0();
		NullCheck(L_11);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_11, _stringLiteral9E94758983980504AF303EF297FD2BF9D9CEA063, /*hidden argument*/NULL);
		// break;
		goto IL_0129;
	}

IL_007b:
	{
		// builder.Append("\\b");
		StringBuilder_t * L_12 = __this->get_builder_0();
		NullCheck(L_12);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_12, _stringLiteral4629CA1B60E263BDC4326334B23323E0434717A5, /*hidden argument*/NULL);
		// break;
		goto IL_0129;
	}

IL_0091:
	{
		// builder.Append("\\f");
		StringBuilder_t * L_13 = __this->get_builder_0();
		NullCheck(L_13);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_13, _stringLiteral794A729D2E4FFBB094FEC03AE9B3ACD219371385, /*hidden argument*/NULL);
		// break;
		goto IL_0129;
	}

IL_00a7:
	{
		// builder.Append("\\n");
		StringBuilder_t * L_14 = __this->get_builder_0();
		NullCheck(L_14);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_14, _stringLiteralEF7E6794CA9C6A06B54B66F279237FB8DAAAEEA8, /*hidden argument*/NULL);
		// break;
		goto IL_0129;
	}

IL_00ba:
	{
		// builder.Append("\\r");
		StringBuilder_t * L_15 = __this->get_builder_0();
		NullCheck(L_15);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_15, _stringLiteralF12C84902108895980702C88DB900CEEA2D2EC01, /*hidden argument*/NULL);
		// break;
		goto IL_0129;
	}

IL_00cd:
	{
		// builder.Append("\\t");
		StringBuilder_t * L_16 = __this->get_builder_0();
		NullCheck(L_16);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_16, _stringLiteral8BF81043E29DFC96A6FE1F30F7116F552DE6E7D7, /*hidden argument*/NULL);
		// break;
		goto IL_0129;
	}

IL_00e0:
	{
		// int codepoint = Convert.ToInt32(c);
		Il2CppChar L_17 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		int32_t L_18 = Convert_ToInt32_m8BE65713C8D5E0AD45D53B82A5A7BD187BEBA917(L_17, /*hidden argument*/NULL);
		V_3 = L_18;
		// if ((codepoint >= 32) && (codepoint <= 126)) {
		int32_t L_19 = V_3;
		if ((((int32_t)L_19) < ((int32_t)((int32_t)32))))
		{
			goto IL_0100;
		}
	}
	{
		int32_t L_20 = V_3;
		if ((((int32_t)L_20) > ((int32_t)((int32_t)126))))
		{
			goto IL_0100;
		}
	}
	{
		// builder.Append(c);
		StringBuilder_t * L_21 = __this->get_builder_0();
		Il2CppChar L_22 = V_2;
		NullCheck(L_21);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_21, L_22, /*hidden argument*/NULL);
		// } else {
		goto IL_0129;
	}

IL_0100:
	{
		// builder.Append("\\u");
		StringBuilder_t * L_23 = __this->get_builder_0();
		NullCheck(L_23);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_23, _stringLiteral153809851B33CE0CDCE06E5A572C675E18D0C3B5, /*hidden argument*/NULL);
		// builder.Append(codepoint.ToString("x4"));
		StringBuilder_t * L_24 = __this->get_builder_0();
		String_t* L_25 = Int32_ToString_m5A125A41C41701E41FA0C4CC52CADBC73C1C96D8((int32_t*)(&V_3), _stringLiteral2BFBE0BC53277529025720589E902C25BF01F2F4, /*hidden argument*/NULL);
		NullCheck(L_24);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_24, L_25, /*hidden argument*/NULL);
	}

IL_0129:
	{
		// for (int i=0; i<charArray.Length; i++) {
		int32_t L_26 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
	}

IL_012d:
	{
		// for (int i=0; i<charArray.Length; i++) {
		int32_t L_27 = V_1;
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_28 = V_0;
		NullCheck(L_28);
		if ((((int32_t)L_27) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_28)->max_length)))))))
		{
			goto IL_001c;
		}
	}
	{
		// builder.Append('\"');
		StringBuilder_t * L_29 = __this->get_builder_0();
		NullCheck(L_29);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_29, ((int32_t)34), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MiniJSON.Json_Serializer::SerializeOther(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeOther_m4D46EFFF72A8F103E8028B82393E400F370DAD4B (Serializer_tE5A49C9AA549A4CDC0A5440C1ECC6778E98A377F * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Serializer_SerializeOther_m4D46EFFF72A8F103E8028B82393E400F370DAD4B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	double V_1 = 0.0;
	{
		// if (value is float) {
		RuntimeObject * L_0 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var)))
		{
			goto IL_002d;
		}
	}
	{
		// builder.Append(((float) value).ToString("R", System.Globalization.CultureInfo.InvariantCulture));
		StringBuilder_t * L_1 = __this->get_builder_0();
		RuntimeObject * L_2 = ___value0;
		V_0 = ((*(float*)((float*)UnBox(L_2, Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var))));
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var);
		CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_3 = CultureInfo_get_InvariantCulture_mF13B47F8A763CE6A9C8A8BB2EED33FF8F7A63A72(/*hidden argument*/NULL);
		String_t* L_4 = Single_ToString_mCF682C2751EC9B98F1CE5455066B92D7D3356756((float*)(&V_0), _stringLiteral06576556D1AD802F247CAD11AE748BE47B70CD9C, L_3, /*hidden argument*/NULL);
		NullCheck(L_1);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_1, L_4, /*hidden argument*/NULL);
		// } else if (value is int
		return;
	}

IL_002d:
	{
		// } else if (value is int
		//     || value is uint
		//     || value is long
		//     || value is sbyte
		//     || value is byte
		//     || value is short
		//     || value is ushort
		//     || value is ulong) {
		RuntimeObject * L_5 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_5, Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var)))
		{
			goto IL_006d;
		}
	}
	{
		RuntimeObject * L_6 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_6, UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_il2cpp_TypeInfo_var)))
		{
			goto IL_006d;
		}
	}
	{
		RuntimeObject * L_7 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_7, Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var)))
		{
			goto IL_006d;
		}
	}
	{
		RuntimeObject * L_8 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_8, SByte_t9070AEA2966184235653CB9B4D33B149CDA831DF_il2cpp_TypeInfo_var)))
		{
			goto IL_006d;
		}
	}
	{
		RuntimeObject * L_9 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_9, Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_il2cpp_TypeInfo_var)))
		{
			goto IL_006d;
		}
	}
	{
		RuntimeObject * L_10 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_10, Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_il2cpp_TypeInfo_var)))
		{
			goto IL_006d;
		}
	}
	{
		RuntimeObject * L_11 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_11, UInt16_tAE45CEF73BF720100519F6867F32145D075F928E_il2cpp_TypeInfo_var)))
		{
			goto IL_006d;
		}
	}
	{
		RuntimeObject * L_12 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_12, UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_il2cpp_TypeInfo_var)))
		{
			goto IL_007b;
		}
	}

IL_006d:
	{
		// builder.Append(value);
		StringBuilder_t * L_13 = __this->get_builder_0();
		RuntimeObject * L_14 = ___value0;
		NullCheck(L_13);
		StringBuilder_Append_mA1A063A1388A21C8EA011DBA7FC98C24C3EE3D65(L_13, L_14, /*hidden argument*/NULL);
		// } else if (value is double
		return;
	}

IL_007b:
	{
		// } else if (value is double
		//     || value is decimal) {
		RuntimeObject * L_15 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_15, Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}
	{
		RuntimeObject * L_16 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_16, Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_il2cpp_TypeInfo_var)))
		{
			goto IL_00b0;
		}
	}

IL_008b:
	{
		// builder.Append(Convert.ToDouble(value).ToString("R", System.Globalization.CultureInfo.InvariantCulture));
		StringBuilder_t * L_17 = __this->get_builder_0();
		RuntimeObject * L_18 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		double L_19 = Convert_ToDouble_mAB66BA75AC3CDFA1FEC09E3125EA444B46CD7050(L_18, /*hidden argument*/NULL);
		V_1 = L_19;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var);
		CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_20 = CultureInfo_get_InvariantCulture_mF13B47F8A763CE6A9C8A8BB2EED33FF8F7A63A72(/*hidden argument*/NULL);
		String_t* L_21 = Double_ToString_m1D341E667E85E9E18783A14CB02982643E96C616((double*)(&V_1), _stringLiteral06576556D1AD802F247CAD11AE748BE47B70CD9C, L_20, /*hidden argument*/NULL);
		NullCheck(L_17);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_17, L_21, /*hidden argument*/NULL);
		// } else {
		return;
	}

IL_00b0:
	{
		// SerializeString(value.ToString());
		RuntimeObject * L_22 = ___value0;
		NullCheck(L_22);
		String_t* L_23 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_22);
		Serializer_SerializeString_m14A9434C6FDDED2581495A41C09CB3B78CE1BC55(__this, L_23, /*hidden argument*/NULL);
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
// System.Void ReplaceDisplayTextureTest::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReplaceDisplayTextureTest_Start_m1DE6EE35818CA1880A67B3BDFE49F962E6C88231 (ReplaceDisplayTextureTest_t323A6BB65AADF7C1610EFF11FCEA741D7F01AB99 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReplaceDisplayTextureTest_Start_m1DE6EE35818CA1880A67B3BDFE49F962E6C88231_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7 * V_0 = NULL;
	{
		// UnityArmatureComponent unityArmature = GetComponent<UnityArmatureComponent>();
		UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7 * L_0 = Component_GetComponent_TisUnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7_m38DC7945343D1CA8A66E91B02BFC6EC2F6AB9E04(__this, /*hidden argument*/Component_GetComponent_TisUnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7_m38DC7945343D1CA8A66E91B02BFC6EC2F6AB9E04_RuntimeMethod_var);
		V_0 = L_0;
		// UnityFactory.factory.autoSearch = true;
		IL2CPP_RUNTIME_CLASS_INIT(UnityFactory_t170550F12743A129F88E7D1990F607AB2B35C102_il2cpp_TypeInfo_var);
		UnityFactory_t170550F12743A129F88E7D1990F607AB2B35C102 * L_1 = UnityFactory_get_factory_mAB42A18D9FFD7DA2AD11C1084F158EF6491F35DE(/*hidden argument*/NULL);
		NullCheck(L_1);
		((BaseFactory_t0F351C3165BC3FF44834228E47FA2AF75DEB546F *)L_1)->set_autoSearch_2((bool)1);
		// UnityFactory.factory.ReplaceSlotDisplay(
		//     dragonBonesName,armatureName,slotName,displayName,unityArmature.armature.GetSlot(replaceSlot),
		//     replaceTex,new Material(Shader.Find("Sprites/Default"))
		// );
		UnityFactory_t170550F12743A129F88E7D1990F607AB2B35C102 * L_2 = UnityFactory_get_factory_mAB42A18D9FFD7DA2AD11C1084F158EF6491F35DE(/*hidden argument*/NULL);
		String_t* L_3 = __this->get_dragonBonesName_4();
		String_t* L_4 = __this->get_armatureName_5();
		String_t* L_5 = __this->get_slotName_6();
		String_t* L_6 = __this->get_displayName_7();
		UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7 * L_7 = V_0;
		NullCheck(L_7);
		Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B * L_8 = UnityArmatureComponent_get_armature_m52B12A650A67494C88B824EA4EF071F4C6C77A49_inline(L_7, /*hidden argument*/NULL);
		String_t* L_9 = __this->get_replaceSlot_9();
		NullCheck(L_8);
		Slot_t9D06B371824C1B67E43A10A17D18BC3EF71E3867 * L_10 = Armature_GetSlot_m81C3F2C377DF8A76A98FBE724344EB6E970A319C(L_8, L_9, /*hidden argument*/NULL);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_11 = __this->get_replaceTex_8();
		Shader_tE2731FF351B74AB4186897484FB01E000C1160CA * L_12 = Shader_Find_m755654AA68D1C663A3E20A10E00CDC10F96C962B(_stringLiteral63DE14EE62A939BD0C8FCD2F4FAC6BDBEB75D945, /*hidden argument*/NULL);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_13 = (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 *)il2cpp_codegen_object_new(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598_il2cpp_TypeInfo_var);
		Material__ctor_m81E76B5C1316004F25D4FE9CEC0E78A7428DABA8(L_13, L_12, /*hidden argument*/NULL);
		NullCheck(L_2);
		UnityFactory_ReplaceSlotDisplay_m0CB0CC4428543C3FE13C1F9746098DF241CED9DA(L_2, L_3, L_4, L_5, L_6, L_10, L_11, L_13, (bool)0, (-1), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ReplaceDisplayTextureTest::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReplaceDisplayTextureTest_Update_mEB833C0CA6C39A9490676461DCA8AD9B066E84F8 (ReplaceDisplayTextureTest_t323A6BB65AADF7C1610EFF11FCEA741D7F01AB99 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void ReplaceDisplayTextureTest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReplaceDisplayTextureTest__ctor_mC8BCC4BA5BA3C0BA7054CB01551FCBFB9F643E1C (ReplaceDisplayTextureTest_t323A6BB65AADF7C1610EFF11FCEA741D7F01AB99 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void ReplaceSlotDisplay::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReplaceSlotDisplay_Start_m4E3C1887205846078B647A11EA641FBBDB0BD63C (ReplaceSlotDisplay_tD5D96946B66902C5AAA957FEF2C90F89FCBD6E5C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReplaceSlotDisplay_Start_m4E3C1887205846078B647A11EA641FBBDB0BD63C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnityFactory.factory.LoadData(replaceData);
		IL2CPP_RUNTIME_CLASS_INIT(UnityFactory_t170550F12743A129F88E7D1990F607AB2B35C102_il2cpp_TypeInfo_var);
		UnityFactory_t170550F12743A129F88E7D1990F607AB2B35C102 * L_0 = UnityFactory_get_factory_mAB42A18D9FFD7DA2AD11C1084F158EF6491F35DE(/*hidden argument*/NULL);
		UnityDragonBonesData_tB3459525029FD10A37DB7C21A177BEF36E9E0C74 * L_1 = __this->get_replaceData_6();
		NullCheck(L_0);
		UnityFactory_LoadData_m0EFB637A0EC5D7CB467D48C9440F753CB8682548(L_0, L_1, (bool)0, (0.01f), (1.0f), /*hidden argument*/NULL);
		// _armatureComponent = this.GetComponent<UnityArmatureComponent>();
		UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7 * L_2 = Component_GetComponent_TisUnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7_m38DC7945343D1CA8A66E91B02BFC6EC2F6AB9E04(__this, /*hidden argument*/Component_GetComponent_TisUnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7_m38DC7945343D1CA8A66E91B02BFC6EC2F6AB9E04_RuntimeMethod_var);
		__this->set__armatureComponent_7(L_2);
		// _armatureComponent.animation.timeScale = 0.1f;
		UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7 * L_3 = __this->get__armatureComponent_7();
		NullCheck(L_3);
		Animation_t3E64FBA6FBD6680C6EF991689446EBB237888A7C * L_4 = UnityArmatureComponent_get_animation_m54D8BBEA81DAEFBFD27DD998FE68D28B69A5A964(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		L_4->set_timeScale_5((0.1f));
		// _armatureComponent.animation.Play();
		UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7 * L_5 = __this->get__armatureComponent_7();
		NullCheck(L_5);
		Animation_t3E64FBA6FBD6680C6EF991689446EBB237888A7C * L_6 = UnityArmatureComponent_get_animation_m54D8BBEA81DAEFBFD27DD998FE68D28B69A5A964(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Animation_Play_mEBE57E5F0E354B7C3361AC101F8B2C32BC329A40(L_6, (String_t*)NULL, (-1), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ReplaceSlotDisplay::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReplaceSlotDisplay_Update_mC707F2AADE6D9B8D2D2EA19303B608D84A58D0BB (ReplaceSlotDisplay_tD5D96946B66902C5AAA957FEF2C90F89FCBD6E5C * __this, const RuntimeMethod* method)
{
	{
		// if (Input.GetMouseButtonDown(0))
		bool L_0 = Input_GetMouseButtonDown_m5AD76E22AA839706219AD86A4E0BE5276AF8E28A(0, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// _replaceDisplay();
		ReplaceSlotDisplay__replaceDisplay_m3233F9AD60264739EC5F4AEF368FA478BBB5CBF7(__this, /*hidden argument*/NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void ReplaceSlotDisplay::_replaceDisplay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReplaceSlotDisplay__replaceDisplay_m3233F9AD60264739EC5F4AEF368FA478BBB5CBF7 (ReplaceSlotDisplay_tD5D96946B66902C5AAA957FEF2C90F89FCBD6E5C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReplaceSlotDisplay__replaceDisplay_m3233F9AD60264739EC5F4AEF368FA478BBB5CBF7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// _displayIndex = (_displayIndex + 1) % _replaceDisplays.Length;
		int32_t L_0 = __this->get__displayIndex_4();
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_1 = __this->get__replaceDisplays_5();
		NullCheck(L_1);
		__this->set__displayIndex_4(((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1))%(int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))))));
		// var replaceDisplayName = _replaceDisplays[_displayIndex];
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_2 = __this->get__replaceDisplays_5();
		int32_t L_3 = __this->get__displayIndex_4();
		NullCheck(L_2);
		int32_t L_4 = L_3;
		String_t* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_0 = L_5;
		// if (replaceDisplayName.IndexOf("mesh") >= 0) // Replace mesh display.
		String_t* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = String_IndexOf_mA9A0117D68338238E51E5928CDA8EB3DC9DA497B(L_6, _stringLiteral52DA7846E396FF38CD6729BEC21B6F9159F9BD1C, /*hidden argument*/NULL);
		if ((((int32_t)L_7) < ((int32_t)0)))
		{
			goto IL_01a2;
		}
	}
	{
		// switch (replaceDisplayName)
		String_t* L_8 = V_0;
		bool L_9 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_8, _stringLiteral6AFE1FFA04C81324D6FC14874CF16DF6B6E791E9, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0061;
		}
	}
	{
		String_t* L_10 = V_0;
		bool L_11 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_10, _stringLiteralF2A0283927B0180BB2AB952DB9222E1C5F5C3EB3, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_00cc;
		}
	}
	{
		String_t* L_12 = V_0;
		bool L_13 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_12, _stringLiteral77B447C21C2A3F83B86113AAA64E06779DC8EAB7, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_0137;
		}
	}
	{
		return;
	}

IL_0061:
	{
		// UnityFactory.factory.ReplaceSlotDisplay(
		//     "replace",
		//     "MyMesh",
		//     "meshA",
		//     "weapon_1004_1",
		//     _armatureComponent.armature.GetSlot("weapon")
		// );
		IL2CPP_RUNTIME_CLASS_INIT(UnityFactory_t170550F12743A129F88E7D1990F607AB2B35C102_il2cpp_TypeInfo_var);
		UnityFactory_t170550F12743A129F88E7D1990F607AB2B35C102 * L_14 = UnityFactory_get_factory_mAB42A18D9FFD7DA2AD11C1084F158EF6491F35DE(/*hidden argument*/NULL);
		UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7 * L_15 = __this->get__armatureComponent_7();
		NullCheck(L_15);
		Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B * L_16 = UnityArmatureComponent_get_armature_m52B12A650A67494C88B824EA4EF071F4C6C77A49_inline(L_15, /*hidden argument*/NULL);
		NullCheck(L_16);
		Slot_t9D06B371824C1B67E43A10A17D18BC3EF71E3867 * L_17 = Armature_GetSlot_m81C3F2C377DF8A76A98FBE724344EB6E970A319C(L_16, _stringLiteral395D3B4C7BB341EA56A46A588CE791050441A2B1, /*hidden argument*/NULL);
		NullCheck(L_14);
		BaseFactory_ReplaceSlotDisplay_m841FA3B2E34DB847ECCB84A94512E6038348A2BA(L_14, _stringLiteral3CACC7BFAC0A382C669A884C953D0401A689785D, _stringLiteral080B4BAA482B7F3C2D4B9E09D3F07509DA3911BF, _stringLiteral6AFE1FFA04C81324D6FC14874CF16DF6B6E791E9, _stringLiteralF4F65C213E892779F586F0995986923BE522863D, L_17, (-1), /*hidden argument*/NULL);
		// UnityFactory.factory.ReplaceSlotDisplay(
		//     "replace",
		//     "MyDisplay",
		//     "ball",
		//     "display0002",
		//     _armatureComponent.armature.GetSlot("mesh")
		// );
		UnityFactory_t170550F12743A129F88E7D1990F607AB2B35C102 * L_18 = UnityFactory_get_factory_mAB42A18D9FFD7DA2AD11C1084F158EF6491F35DE(/*hidden argument*/NULL);
		UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7 * L_19 = __this->get__armatureComponent_7();
		NullCheck(L_19);
		Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B * L_20 = UnityArmatureComponent_get_armature_m52B12A650A67494C88B824EA4EF071F4C6C77A49_inline(L_19, /*hidden argument*/NULL);
		NullCheck(L_20);
		Slot_t9D06B371824C1B67E43A10A17D18BC3EF71E3867 * L_21 = Armature_GetSlot_m81C3F2C377DF8A76A98FBE724344EB6E970A319C(L_20, _stringLiteral52DA7846E396FF38CD6729BEC21B6F9159F9BD1C, /*hidden argument*/NULL);
		NullCheck(L_18);
		BaseFactory_ReplaceSlotDisplay_m841FA3B2E34DB847ECCB84A94512E6038348A2BA(L_18, _stringLiteral3CACC7BFAC0A382C669A884C953D0401A689785D, _stringLiteralE18DFDA64D71CE417820B007ADC02F8CE76BB5AE, _stringLiteral8BEC0406497CCF8BB93933005B504D85785DFC14, _stringLiteral8B6C6FD9059CE655ABF7F3ADC1E9B723535FC65B, L_21, (-1), /*hidden argument*/NULL);
		// break;
		return;
	}

IL_00cc:
	{
		// UnityFactory.factory.ReplaceSlotDisplay(
		//     "replace",
		//     "MyMesh",
		//     "meshB",
		//     "weapon_1004_1",
		//     _armatureComponent.armature.GetSlot("weapon")
		// );
		IL2CPP_RUNTIME_CLASS_INIT(UnityFactory_t170550F12743A129F88E7D1990F607AB2B35C102_il2cpp_TypeInfo_var);
		UnityFactory_t170550F12743A129F88E7D1990F607AB2B35C102 * L_22 = UnityFactory_get_factory_mAB42A18D9FFD7DA2AD11C1084F158EF6491F35DE(/*hidden argument*/NULL);
		UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7 * L_23 = __this->get__armatureComponent_7();
		NullCheck(L_23);
		Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B * L_24 = UnityArmatureComponent_get_armature_m52B12A650A67494C88B824EA4EF071F4C6C77A49_inline(L_23, /*hidden argument*/NULL);
		NullCheck(L_24);
		Slot_t9D06B371824C1B67E43A10A17D18BC3EF71E3867 * L_25 = Armature_GetSlot_m81C3F2C377DF8A76A98FBE724344EB6E970A319C(L_24, _stringLiteral395D3B4C7BB341EA56A46A588CE791050441A2B1, /*hidden argument*/NULL);
		NullCheck(L_22);
		BaseFactory_ReplaceSlotDisplay_m841FA3B2E34DB847ECCB84A94512E6038348A2BA(L_22, _stringLiteral3CACC7BFAC0A382C669A884C953D0401A689785D, _stringLiteral080B4BAA482B7F3C2D4B9E09D3F07509DA3911BF, _stringLiteralF2A0283927B0180BB2AB952DB9222E1C5F5C3EB3, _stringLiteralF4F65C213E892779F586F0995986923BE522863D, L_25, (-1), /*hidden argument*/NULL);
		// UnityFactory.factory.ReplaceSlotDisplay(
		//     "replace",
		//     "MyDisplay",
		//     "ball",
		//     "display0003",
		//     _armatureComponent.armature.GetSlot("mesh")
		// );
		UnityFactory_t170550F12743A129F88E7D1990F607AB2B35C102 * L_26 = UnityFactory_get_factory_mAB42A18D9FFD7DA2AD11C1084F158EF6491F35DE(/*hidden argument*/NULL);
		UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7 * L_27 = __this->get__armatureComponent_7();
		NullCheck(L_27);
		Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B * L_28 = UnityArmatureComponent_get_armature_m52B12A650A67494C88B824EA4EF071F4C6C77A49_inline(L_27, /*hidden argument*/NULL);
		NullCheck(L_28);
		Slot_t9D06B371824C1B67E43A10A17D18BC3EF71E3867 * L_29 = Armature_GetSlot_m81C3F2C377DF8A76A98FBE724344EB6E970A319C(L_28, _stringLiteral52DA7846E396FF38CD6729BEC21B6F9159F9BD1C, /*hidden argument*/NULL);
		NullCheck(L_26);
		BaseFactory_ReplaceSlotDisplay_m841FA3B2E34DB847ECCB84A94512E6038348A2BA(L_26, _stringLiteral3CACC7BFAC0A382C669A884C953D0401A689785D, _stringLiteralE18DFDA64D71CE417820B007ADC02F8CE76BB5AE, _stringLiteral8BEC0406497CCF8BB93933005B504D85785DFC14, _stringLiteral0F00A103EFD2C21BB6513C50A12746FE4FB0BE2C, L_29, (-1), /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0137:
	{
		// UnityFactory.factory.ReplaceSlotDisplay(
		//     "replace",
		//     "MyMesh",
		//     "mesh",
		//     "weapon_1004_1",
		//     _armatureComponent.armature.GetSlot("weapon")
		// );
		IL2CPP_RUNTIME_CLASS_INIT(UnityFactory_t170550F12743A129F88E7D1990F607AB2B35C102_il2cpp_TypeInfo_var);
		UnityFactory_t170550F12743A129F88E7D1990F607AB2B35C102 * L_30 = UnityFactory_get_factory_mAB42A18D9FFD7DA2AD11C1084F158EF6491F35DE(/*hidden argument*/NULL);
		UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7 * L_31 = __this->get__armatureComponent_7();
		NullCheck(L_31);
		Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B * L_32 = UnityArmatureComponent_get_armature_m52B12A650A67494C88B824EA4EF071F4C6C77A49_inline(L_31, /*hidden argument*/NULL);
		NullCheck(L_32);
		Slot_t9D06B371824C1B67E43A10A17D18BC3EF71E3867 * L_33 = Armature_GetSlot_m81C3F2C377DF8A76A98FBE724344EB6E970A319C(L_32, _stringLiteral395D3B4C7BB341EA56A46A588CE791050441A2B1, /*hidden argument*/NULL);
		NullCheck(L_30);
		BaseFactory_ReplaceSlotDisplay_m841FA3B2E34DB847ECCB84A94512E6038348A2BA(L_30, _stringLiteral3CACC7BFAC0A382C669A884C953D0401A689785D, _stringLiteral080B4BAA482B7F3C2D4B9E09D3F07509DA3911BF, _stringLiteral52DA7846E396FF38CD6729BEC21B6F9159F9BD1C, _stringLiteralF4F65C213E892779F586F0995986923BE522863D, L_33, (-1), /*hidden argument*/NULL);
		// UnityFactory.factory.ReplaceSlotDisplay(
		//     "replace",
		//     "MyDisplay",
		//     "ball",
		//     "display0005",
		//     _armatureComponent.armature.GetSlot("mesh")
		// );
		UnityFactory_t170550F12743A129F88E7D1990F607AB2B35C102 * L_34 = UnityFactory_get_factory_mAB42A18D9FFD7DA2AD11C1084F158EF6491F35DE(/*hidden argument*/NULL);
		UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7 * L_35 = __this->get__armatureComponent_7();
		NullCheck(L_35);
		Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B * L_36 = UnityArmatureComponent_get_armature_m52B12A650A67494C88B824EA4EF071F4C6C77A49_inline(L_35, /*hidden argument*/NULL);
		NullCheck(L_36);
		Slot_t9D06B371824C1B67E43A10A17D18BC3EF71E3867 * L_37 = Armature_GetSlot_m81C3F2C377DF8A76A98FBE724344EB6E970A319C(L_36, _stringLiteral52DA7846E396FF38CD6729BEC21B6F9159F9BD1C, /*hidden argument*/NULL);
		NullCheck(L_34);
		BaseFactory_ReplaceSlotDisplay_m841FA3B2E34DB847ECCB84A94512E6038348A2BA(L_34, _stringLiteral3CACC7BFAC0A382C669A884C953D0401A689785D, _stringLiteralE18DFDA64D71CE417820B007ADC02F8CE76BB5AE, _stringLiteral8BEC0406497CCF8BB93933005B504D85785DFC14, _stringLiteral563DD72CA9842A3285A8779F8376CF635C845672, L_37, (-1), /*hidden argument*/NULL);
		// break;
		return;
	}

IL_01a2:
	{
		// UnityFactory.factory.ReplaceSlotDisplay(
		//     "replace",
		//     "MyDisplay",
		//     "ball",
		//     replaceDisplayName,
		//     _armatureComponent.armature.GetSlot("ball")
		// );
		IL2CPP_RUNTIME_CLASS_INIT(UnityFactory_t170550F12743A129F88E7D1990F607AB2B35C102_il2cpp_TypeInfo_var);
		UnityFactory_t170550F12743A129F88E7D1990F607AB2B35C102 * L_38 = UnityFactory_get_factory_mAB42A18D9FFD7DA2AD11C1084F158EF6491F35DE(/*hidden argument*/NULL);
		String_t* L_39 = V_0;
		UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7 * L_40 = __this->get__armatureComponent_7();
		NullCheck(L_40);
		Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B * L_41 = UnityArmatureComponent_get_armature_m52B12A650A67494C88B824EA4EF071F4C6C77A49_inline(L_40, /*hidden argument*/NULL);
		NullCheck(L_41);
		Slot_t9D06B371824C1B67E43A10A17D18BC3EF71E3867 * L_42 = Armature_GetSlot_m81C3F2C377DF8A76A98FBE724344EB6E970A319C(L_41, _stringLiteral8BEC0406497CCF8BB93933005B504D85785DFC14, /*hidden argument*/NULL);
		NullCheck(L_38);
		BaseFactory_ReplaceSlotDisplay_m841FA3B2E34DB847ECCB84A94512E6038348A2BA(L_38, _stringLiteral3CACC7BFAC0A382C669A884C953D0401A689785D, _stringLiteralE18DFDA64D71CE417820B007ADC02F8CE76BB5AE, _stringLiteral8BEC0406497CCF8BB93933005B504D85785DFC14, L_39, L_42, (-1), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ReplaceSlotDisplay::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReplaceSlotDisplay__ctor_mF24E40A81F9C03F9448647A5720399FC180861FF (ReplaceSlotDisplay_tD5D96946B66902C5AAA957FEF2C90F89FCBD6E5C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReplaceSlotDisplay__ctor_mF24E40A81F9C03F9448647A5720399FC180861FF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private int _displayIndex = -1;
		__this->set__displayIndex_4((-1));
		// private string[] _replaceDisplays = {
		//     // Replace normal display.
		//     "display0002", "display0003", "display0004", "display0005", "display0006", "display0007", "display0008", "display0009", "display0010",
		//     // Replace mesh display.
		//     "meshA", "meshB", "meshC"
		// };
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_0 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)((int32_t)12));
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral8B6C6FD9059CE655ABF7F3ADC1E9B723535FC65B);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral8B6C6FD9059CE655ABF7F3ADC1E9B723535FC65B);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral0F00A103EFD2C21BB6513C50A12746FE4FB0BE2C);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral0F00A103EFD2C21BB6513C50A12746FE4FB0BE2C);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral50FDA0180732E4913EF0E89711873E7C0722688B);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral50FDA0180732E4913EF0E89711873E7C0722688B);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral563DD72CA9842A3285A8779F8376CF635C845672);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral563DD72CA9842A3285A8779F8376CF635C845672);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral123645E2871F98468FD0A0AFF42FE84FB261141E);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral123645E2871F98468FD0A0AFF42FE84FB261141E);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_6 = L_5;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteralE11BC038E3E0496E831E713C12BDC3DC2EAE5A6A);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteralE11BC038E3E0496E831E713C12BDC3DC2EAE5A6A);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_7 = L_6;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral11C6731752B38C53AFEA2400C80A419895BB6CE8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral11C6731752B38C53AFEA2400C80A419895BB6CE8);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_8 = L_7;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral78186005E67848F5C2417078B874601F4428B557);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteral78186005E67848F5C2417078B874601F4428B557);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_9 = L_8;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteralD6955CC65F68FDB3066F078547FDC7356382B421);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteralD6955CC65F68FDB3066F078547FDC7356382B421);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_10 = L_9;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteral6AFE1FFA04C81324D6FC14874CF16DF6B6E791E9);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteral6AFE1FFA04C81324D6FC14874CF16DF6B6E791E9);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_11 = L_10;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteralF2A0283927B0180BB2AB952DB9222E1C5F5C3EB3);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)_stringLiteralF2A0283927B0180BB2AB952DB9222E1C5F5C3EB3);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_12 = L_11;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral77B447C21C2A3F83B86113AAA64E06779DC8EAB7);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (String_t*)_stringLiteral77B447C21C2A3F83B86113AAA64E06779DC8EAB7);
		__this->set__replaceDisplays_5(L_12);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Purchasing.CodelessIAPStoreListener::InitializeCodelessPurchasingOnLoad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodelessIAPStoreListener_InitializeCodelessPurchasingOnLoad_mCEFFA3714EB29E69897B062277824EE06E9F625E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodelessIAPStoreListener_InitializeCodelessPurchasingOnLoad_mCEFFA3714EB29E69897B062277824EE06E9F625E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ProductCatalog_t514386D43815F0DD3BD3695ABBB1BC66351D569E * V_0 = NULL;
	{
		// ProductCatalog catalog = ProductCatalog.LoadDefaultCatalog();
		ProductCatalog_t514386D43815F0DD3BD3695ABBB1BC66351D569E * L_0 = ProductCatalog_LoadDefaultCatalog_mFFD612023A5A11807241F0BBF5447950A2790B88(/*hidden argument*/NULL);
		V_0 = L_0;
		// if (catalog.enableCodelessAutoInitialization && !catalog.IsEmpty() && instance == null)
		ProductCatalog_t514386D43815F0DD3BD3695ABBB1BC66351D569E * L_1 = V_0;
		NullCheck(L_1);
		bool L_2 = L_1->get_enableCodelessAutoInitialization_1();
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		ProductCatalog_t514386D43815F0DD3BD3695ABBB1BC66351D569E * L_3 = V_0;
		NullCheck(L_3);
		bool L_4 = ProductCatalog_IsEmpty_m8556510D4CAADA94815855AC6386F6B6356363BB(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0022;
		}
	}
	{
		CodelessIAPStoreListener_tC0C269A13BAE3B9F9AA24455FAB72340347F7303 * L_5 = ((CodelessIAPStoreListener_tC0C269A13BAE3B9F9AA24455FAB72340347F7303_StaticFields*)il2cpp_codegen_static_fields_for(CodelessIAPStoreListener_tC0C269A13BAE3B9F9AA24455FAB72340347F7303_il2cpp_TypeInfo_var))->get_instance_0();
		if (L_5)
		{
			goto IL_0022;
		}
	}
	{
		// CreateCodelessIAPStoreListenerInstance();
		CodelessIAPStoreListener_CreateCodelessIAPStoreListenerInstance_m65C6E3C5C7DEAF378869FF9667714F8BB5924718(/*hidden argument*/NULL);
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Purchasing.CodelessIAPStoreListener::InitializePurchasing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodelessIAPStoreListener_InitializePurchasing_mA9B98C1661E8E09DAC4C0EF12081A2B55A4EB608 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodelessIAPStoreListener_InitializePurchasing_mA9B98C1661E8E09DAC4C0EF12081A2B55A4EB608_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ConfigurationBuilder_t18C1B421FE4071AD4DB4A340A2A8D51AB090F3AE * V_0 = NULL;
	{
		// StandardPurchasingModule module = StandardPurchasingModule.Instance();
		IL2CPP_RUNTIME_CLASS_INIT(StandardPurchasingModule_t45E3E7F3D0D8CE91AD85D7BE5B29CBA2235B3BFA_il2cpp_TypeInfo_var);
		StandardPurchasingModule_t45E3E7F3D0D8CE91AD85D7BE5B29CBA2235B3BFA * L_0 = StandardPurchasingModule_Instance_m14764772DB11E71EE7FE080CC8D9F86A3CC3BA83(/*hidden argument*/NULL);
		// module.useFakeStoreUIMode = FakeStoreUIMode.StandardUser;
		StandardPurchasingModule_t45E3E7F3D0D8CE91AD85D7BE5B29CBA2235B3BFA * L_1 = L_0;
		NullCheck(L_1);
		StandardPurchasingModule_set_useFakeStoreUIMode_m44AEA2EEB75BAC9FAD893B0B889B45E4289AF404_inline(L_1, 1, /*hidden argument*/NULL);
		// ConfigurationBuilder builder = ConfigurationBuilder.Instance(module);
		IPurchasingModuleU5BU5D_tF106F307EE194D8B47140E160F5BC38EDFFF9384* L_2 = Array_Empty_TisIPurchasingModule_tBA2577ED1E963CA0ABA1DFA359A020982DE0B1BF_m0CD0BAB07A330FACDEA56E1CBB20EADD9FC46A24_inline(/*hidden argument*/Array_Empty_TisIPurchasingModule_tBA2577ED1E963CA0ABA1DFA359A020982DE0B1BF_m0CD0BAB07A330FACDEA56E1CBB20EADD9FC46A24_RuntimeMethod_var);
		ConfigurationBuilder_t18C1B421FE4071AD4DB4A340A2A8D51AB090F3AE * L_3 = ConfigurationBuilder_Instance_m8F4EA19F3C0FF462CCF219D0A019BEADA05E7DA2(L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// IAPConfigurationHelper.PopulateConfigurationBuilder(ref builder, instance.catalog);
		CodelessIAPStoreListener_tC0C269A13BAE3B9F9AA24455FAB72340347F7303 * L_4 = ((CodelessIAPStoreListener_tC0C269A13BAE3B9F9AA24455FAB72340347F7303_StaticFields*)il2cpp_codegen_static_fields_for(CodelessIAPStoreListener_tC0C269A13BAE3B9F9AA24455FAB72340347F7303_il2cpp_TypeInfo_var))->get_instance_0();
		NullCheck(L_4);
		ProductCatalog_t514386D43815F0DD3BD3695ABBB1BC66351D569E * L_5 = L_4->get_catalog_6();
		IAPConfigurationHelper_PopulateConfigurationBuilder_m46F5A6A79909F4993BF47D6C3D604FA18BC3AAEC((ConfigurationBuilder_t18C1B421FE4071AD4DB4A340A2A8D51AB090F3AE **)(&V_0), L_5, /*hidden argument*/NULL);
		// UnityPurchasing.Initialize(instance, builder);
		CodelessIAPStoreListener_tC0C269A13BAE3B9F9AA24455FAB72340347F7303 * L_6 = ((CodelessIAPStoreListener_tC0C269A13BAE3B9F9AA24455FAB72340347F7303_StaticFields*)il2cpp_codegen_static_fields_for(CodelessIAPStoreListener_tC0C269A13BAE3B9F9AA24455FAB72340347F7303_il2cpp_TypeInfo_var))->get_instance_0();
		ConfigurationBuilder_t18C1B421FE4071AD4DB4A340A2A8D51AB090F3AE * L_7 = V_0;
		UnityPurchasing_Initialize_m1BEFCE608B4D495EEB6CF346E51AB8CFB84CBFDC(L_6, L_7, /*hidden argument*/NULL);
		// unityPurchasingInitialized = true;
		((CodelessIAPStoreListener_tC0C269A13BAE3B9F9AA24455FAB72340347F7303_StaticFields*)il2cpp_codegen_static_fields_for(CodelessIAPStoreListener_tC0C269A13BAE3B9F9AA24455FAB72340347F7303_il2cpp_TypeInfo_var))->set_unityPurchasingInitialized_3((bool)1);
		// }
		return;
	}
}
// System.Void UnityEngine.Purchasing.CodelessIAPStoreListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodelessIAPStoreListener__ctor_m79DA076EC1D979584229414E32BF43162E254250 (CodelessIAPStoreListener_tC0C269A13BAE3B9F9AA24455FAB72340347F7303 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodelessIAPStoreListener__ctor_m79DA076EC1D979584229414E32BF43162E254250_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<IAPButton> activeButtons = new List<IAPButton>();
		List_1_t4EA118A9AAEF1F1654837150C244FCF20A2612C6 * L_0 = (List_1_t4EA118A9AAEF1F1654837150C244FCF20A2612C6 *)il2cpp_codegen_object_new(List_1_t4EA118A9AAEF1F1654837150C244FCF20A2612C6_il2cpp_TypeInfo_var);
		List_1__ctor_m4F2D4231DA050B6E45124C9F2DAB801762931117(L_0, /*hidden argument*/List_1__ctor_m4F2D4231DA050B6E45124C9F2DAB801762931117_RuntimeMethod_var);
		__this->set_activeButtons_1(L_0);
		// private List<IAPListener> activeListeners = new List<IAPListener> ();
		List_1_t9AAA1568B76F8B92C93DB49A597240F9DEEE5E40 * L_1 = (List_1_t9AAA1568B76F8B92C93DB49A597240F9DEEE5E40 *)il2cpp_codegen_object_new(List_1_t9AAA1568B76F8B92C93DB49A597240F9DEEE5E40_il2cpp_TypeInfo_var);
		List_1__ctor_m4C2EF68722125098BBB210C4160A22F2E9022E93(L_1, /*hidden argument*/List_1__ctor_m4C2EF68722125098BBB210C4160A22F2E9022E93_RuntimeMethod_var);
		__this->set_activeListeners_2(L_1);
		// private CodelessIAPStoreListener()
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// catalog = ProductCatalog.LoadDefaultCatalog();
		ProductCatalog_t514386D43815F0DD3BD3695ABBB1BC66351D569E * L_2 = ProductCatalog_LoadDefaultCatalog_mFFD612023A5A11807241F0BBF5447950A2790B88(/*hidden argument*/NULL);
		__this->set_catalog_6(L_2);
		// }
		return;
	}
}
// UnityEngine.Purchasing.CodelessIAPStoreListener UnityEngine.Purchasing.CodelessIAPStoreListener::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CodelessIAPStoreListener_tC0C269A13BAE3B9F9AA24455FAB72340347F7303 * CodelessIAPStoreListener_get_Instance_m6D6C71B6D75F21C64499CE46A23DDC572B3DACAE (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodelessIAPStoreListener_get_Instance_m6D6C71B6D75F21C64499CE46A23DDC572B3DACAE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance == null)
		CodelessIAPStoreListener_tC0C269A13BAE3B9F9AA24455FAB72340347F7303 * L_0 = ((CodelessIAPStoreListener_tC0C269A13BAE3B9F9AA24455FAB72340347F7303_StaticFields*)il2cpp_codegen_static_fields_for(CodelessIAPStoreListener_tC0C269A13BAE3B9F9AA24455FAB72340347F7303_il2cpp_TypeInfo_var))->get_instance_0();
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		// CreateCodelessIAPStoreListenerInstance();
		CodelessIAPStoreListener_CreateCodelessIAPStoreListenerInstance_m65C6E3C5C7DEAF378869FF9667714F8BB5924718(/*hidden argument*/NULL);
	}

IL_000c:
	{
		// return instance;
		CodelessIAPStoreListener_tC0C269A13BAE3B9F9AA24455FAB72340347F7303 * L_1 = ((CodelessIAPStoreListener_tC0C269A13BAE3B9F9AA24455FAB72340347F7303_StaticFields*)il2cpp_codegen_static_fields_for(CodelessIAPStoreListener_tC0C269A13BAE3B9F9AA24455FAB72340347F7303_il2cpp_TypeInfo_var))->get_instance_0();
		return L_1;
	}
}
// System.Void UnityEngine.Purchasing.CodelessIAPStoreListener::CreateCodelessIAPStoreListenerInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodelessIAPStoreListener_CreateCodelessIAPStoreListenerInstance_m65C6E3C5C7DEAF378869FF9667714F8BB5924718 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodelessIAPStoreListener_CreateCodelessIAPStoreListenerInstance_m65C6E3C5C7DEAF378869FF9667714F8BB5924718_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instance = new CodelessIAPStoreListener();
		CodelessIAPStoreListener_tC0C269A13BAE3B9F9AA24455FAB72340347F7303 * L_0 = (CodelessIAPStoreListener_tC0C269A13BAE3B9F9AA24455FAB72340347F7303 *)il2cpp_codegen_object_new(CodelessIAPStoreListener_tC0C269A13BAE3B9F9AA24455FAB72340347F7303_il2cpp_TypeInfo_var);
		CodelessIAPStoreListener__ctor_m79DA076EC1D979584229414E32BF43162E254250(L_0, /*hidden argument*/NULL);
		((CodelessIAPStoreListener_tC0C269A13BAE3B9F9AA24455FAB72340347F7303_StaticFields*)il2cpp_codegen_static_fields_for(CodelessIAPStoreListener_tC0C269A13BAE3B9F9AA24455FAB72340347F7303_il2cpp_TypeInfo_var))->set_instance_0(L_0);
		// if (!unityPurchasingInitialized)
		bool L_1 = ((CodelessIAPStoreListener_tC0C269A13BAE3B9F9AA24455FAB72340347F7303_StaticFields*)il2cpp_codegen_static_fields_for(CodelessIAPStoreListener_tC0C269A13BAE3B9F9AA24455FAB72340347F7303_il2cpp_TypeInfo_var))->get_unityPurchasingInitialized_3();
		if (L_1)
		{
			goto IL_0020;
		}
	}
	{
		// Debug.Log("Initializing UnityPurchasing via Codeless IAP");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteral4B2773C3D9690A0B0BB2782558E50480AB7F80BD, /*hidden argument*/NULL);
		// InitializePurchasing();
		CodelessIAPStoreListener_InitializePurchasing_mA9B98C1661E8E09DAC4C0EF12081A2B55A4EB608(/*hidden argument*/NULL);
	}

IL_0020:
	{
		// }
		return;
	}
}
// UnityEngine.Purchasing.IStoreController UnityEngine.Purchasing.CodelessIAPStoreListener::get_StoreController()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CodelessIAPStoreListener_get_StoreController_m4FE586D7DEE312A55932FB40044346EB2D4B65A9 (CodelessIAPStoreListener_tC0C269A13BAE3B9F9AA24455FAB72340347F7303 * __this, const RuntimeMethod* method)
{
	{
		// get { return controller; }
		RuntimeObject* L_0 = __this->get_controller_4();
		return L_0;
	}
}
// UnityEngine.Purchasing.IExtensionProvider UnityEngine.Purchasing.CodelessIAPStoreListener::get_ExtensionProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CodelessIAPStoreListener_get_ExtensionProvider_m6EF90D4617310AF8D82CF0372F0E8E3755B366B4 (CodelessIAPStoreListener_tC0C269A13BAE3B9F9AA24455FAB72340347F7303 * __this, const RuntimeMethod* method)
{
	{
		// get { return extensions; }
		RuntimeObject* L_0 = __this->get_extensions_5();
		return L_0;
	}
}
// System.Boolean UnityEngine.Purchasing.CodelessIAPStoreListener::HasProductInCatalog(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CodelessIAPStoreListener_HasProductInCatalog_m7572D2C0E9C4208ED1C909684EF999058BC0DEEC (CodelessIAPStoreListener_tC0C269A13BAE3B9F9AA24455FAB72340347F7303 * __this, String_t* ___productID0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodelessIAPStoreListener_HasProductInCatalog_m7572D2C0E9C4208ED1C909684EF999058BC0DEEC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// foreach (var product in catalog.allProducts)
		ProductCatalog_t514386D43815F0DD3BD3695ABBB1BC66351D569E * L_0 = __this->get_catalog_6();
		NullCheck(L_0);
		RuntimeObject* L_1 = ProductCatalog_get_allProducts_m4F35278CE433A5ECD3A1F6F3D0C3306FA7D276B5_inline(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		RuntimeObject* L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<UnityEngine.Purchasing.ProductCatalogItem>::GetEnumerator() */, IEnumerable_1_t5DD75706A9E736D653B9C6D9400DD948E0B41764_il2cpp_TypeInfo_var, L_1);
		V_0 = L_2;
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002a;
		}

IL_0013:
		{
			// foreach (var product in catalog.allProducts)
			RuntimeObject* L_3 = V_0;
			NullCheck(L_3);
			ProductCatalogItem_t0CDB4E1B6E5692F115DBC421DA38BFC6BC3B3356 * L_4 = InterfaceFuncInvoker0< ProductCatalogItem_t0CDB4E1B6E5692F115DBC421DA38BFC6BC3B3356 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<UnityEngine.Purchasing.ProductCatalogItem>::get_Current() */, IEnumerator_1_tF1A2E2FA355AB63140A3E3135FEE6F002250CBDB_il2cpp_TypeInfo_var, L_3);
			// if (product.id == productID)
			NullCheck(L_4);
			String_t* L_5 = L_4->get_id_0();
			String_t* L_6 = ___productID0;
			bool L_7 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_5, L_6, /*hidden argument*/NULL);
			if (!L_7)
			{
				goto IL_002a;
			}
		}

IL_0026:
		{
			// return true;
			V_1 = (bool)1;
			IL2CPP_LEAVE(0x40, FINALLY_0034);
		}

IL_002a:
		{
			// foreach (var product in catalog.allProducts)
			RuntimeObject* L_8 = V_0;
			NullCheck(L_8);
			bool L_9 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_8);
			if (L_9)
			{
				goto IL_0013;
			}
		}

IL_0032:
		{
			IL2CPP_LEAVE(0x3E, FINALLY_0034);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0034;
	}

FINALLY_0034:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_10 = V_0;
			if (!L_10)
			{
				goto IL_003d;
			}
		}

IL_0037:
		{
			RuntimeObject* L_11 = V_0;
			NullCheck(L_11);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_11);
		}

IL_003d:
		{
			IL2CPP_END_FINALLY(52)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(52)
	{
		IL2CPP_JUMP_TBL(0x40, IL_0040)
		IL2CPP_JUMP_TBL(0x3E, IL_003e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_003e:
	{
		// return false;
		return (bool)0;
	}

IL_0040:
	{
		// }
		bool L_12 = V_1;
		return L_12;
	}
}
// UnityEngine.Purchasing.Product UnityEngine.Purchasing.CodelessIAPStoreListener::GetProduct(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Product_t830A133A97BEA12C3CD696853098A295D99A6DE4 * CodelessIAPStoreListener_GetProduct_mBED67C9993F342B75FA1A6C22E950446FB93B442 (CodelessIAPStoreListener_tC0C269A13BAE3B9F9AA24455FAB72340347F7303 * __this, String_t* ___productID0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodelessIAPStoreListener_GetProduct_mBED67C9993F342B75FA1A6C22E950446FB93B442_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (controller != null && controller.products != null && !string.IsNullOrEmpty(productID))
		RuntimeObject* L_0 = __this->get_controller_4();
		if (!L_0)
		{
			goto IL_002f;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_controller_4();
		NullCheck(L_1);
		ProductCollection_t7BE71F2FA5BE05F5DA13EA701B513861516F4C07 * L_2 = InterfaceFuncInvoker0< ProductCollection_t7BE71F2FA5BE05F5DA13EA701B513861516F4C07 * >::Invoke(0 /* UnityEngine.Purchasing.ProductCollection UnityEngine.Purchasing.IStoreController::get_products() */, IStoreController_t6A30FF7F81804FCC0082AB9DF2CE86BCFB91DF67_il2cpp_TypeInfo_var, L_1);
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		String_t* L_3 = ___productID0;
		bool L_4 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_002f;
		}
	}
	{
		// return controller.products.WithID(productID);
		RuntimeObject* L_5 = __this->get_controller_4();
		NullCheck(L_5);
		ProductCollection_t7BE71F2FA5BE05F5DA13EA701B513861516F4C07 * L_6 = InterfaceFuncInvoker0< ProductCollection_t7BE71F2FA5BE05F5DA13EA701B513861516F4C07 * >::Invoke(0 /* UnityEngine.Purchasing.ProductCollection UnityEngine.Purchasing.IStoreController::get_products() */, IStoreController_t6A30FF7F81804FCC0082AB9DF2CE86BCFB91DF67_il2cpp_TypeInfo_var, L_5);
		String_t* L_7 = ___productID0;
		NullCheck(L_6);
		Product_t830A133A97BEA12C3CD696853098A295D99A6DE4 * L_8 = ProductCollection_WithID_m7B5AB4C1B658271EC30742DD07D53E9043A816A4(L_6, L_7, /*hidden argument*/NULL);
		return L_8;
	}

IL_002f:
	{
		// Debug.LogError("CodelessIAPStoreListener attempted to get unknown product " + productID);
		String_t* L_9 = ___productID0;
		String_t* L_10 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteralA5992C10DC3758E8B9070E1DB9797B72E9535BFB, L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(L_10, /*hidden argument*/NULL);
		// return null;
		return (Product_t830A133A97BEA12C3CD696853098A295D99A6DE4 *)NULL;
	}
}
// System.Void UnityEngine.Purchasing.CodelessIAPStoreListener::AddButton(UnityEngine.Purchasing.IAPButton)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodelessIAPStoreListener_AddButton_m4A1BF6B82F547465176551D086C4F386FDDED3E7 (CodelessIAPStoreListener_tC0C269A13BAE3B9F9AA24455FAB72340347F7303 * __this, IAPButton_t1BDE7DF230194C47716F1AD10806094D8DE39CD9 * ___button0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodelessIAPStoreListener_AddButton_m4A1BF6B82F547465176551D086C4F386FDDED3E7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// activeButtons.Add(button);
		List_1_t4EA118A9AAEF1F1654837150C244FCF20A2612C6 * L_0 = __this->get_activeButtons_1();
		IAPButton_t1BDE7DF230194C47716F1AD10806094D8DE39CD9 * L_1 = ___button0;
		NullCheck(L_0);
		List_1_Add_m9233CB4E5C3F715EB55EA830853B435A9ABC246D(L_0, L_1, /*hidden argument*/List_1_Add_m9233CB4E5C3F715EB55EA830853B435A9ABC246D_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.Purchasing.CodelessIAPStoreListener::RemoveButton(UnityEngine.Purchasing.IAPButton)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodelessIAPStoreListener_RemoveButton_mD47F635ACC605FA53FC7629AAAF0384D94FF6B6E (CodelessIAPStoreListener_tC0C269A13BAE3B9F9AA24455FAB72340347F7303 * __this, IAPButton_t1BDE7DF230194C47716F1AD10806094D8DE39CD9 * ___button0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodelessIAPStoreListener_RemoveButton_mD47F635ACC605FA53FC7629AAAF0384D94FF6B6E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// activeButtons.Remove(button);
		List_1_t4EA118A9AAEF1F1654837150C244FCF20A2612C6 * L_0 = __this->get_activeButtons_1();
		IAPButton_t1BDE7DF230194C47716F1AD10806094D8DE39CD9 * L_1 = ___button0;
		NullCheck(L_0);
		List_1_Remove_m84D00513E59C6676CD431B431DB7FE3A653AE5D8(L_0, L_1, /*hidden argument*/List_1_Remove_m84D00513E59C6676CD431B431DB7FE3A653AE5D8_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.Purchasing.CodelessIAPStoreListener::AddListener(UnityEngine.Purchasing.IAPListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodelessIAPStoreListener_AddListener_mEE32769E704BBC2E4F66C4F51D102908E5ECF48E (CodelessIAPStoreListener_tC0C269A13BAE3B9F9AA24455FAB72340347F7303 * __this, IAPListener_tA8E5B3850C466201C221D95CF74A9BEA7DC74E61 * ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodelessIAPStoreListener_AddListener_mEE32769E704BBC2E4F66C4F51D102908E5ECF48E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// activeListeners.Add (listener);
		List_1_t9AAA1568B76F8B92C93DB49A597240F9DEEE5E40 * L_0 = __this->get_activeListeners_2();
		IAPListener_tA8E5B3850C466201C221D95CF74A9BEA7DC74E61 * L_1 = ___listener0;
		NullCheck(L_0);
		List_1_Add_m440577DFAD35900A85BC28E4028B133B0814ADCF(L_0, L_1, /*hidden argument*/List_1_Add_m440577DFAD35900A85BC28E4028B133B0814ADCF_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.Purchasing.CodelessIAPStoreListener::RemoveListener(UnityEngine.Purchasing.IAPListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodelessIAPStoreListener_RemoveListener_m3432F9A1A1E37888321E11FBA4A49EB8F97A5552 (CodelessIAPStoreListener_tC0C269A13BAE3B9F9AA24455FAB72340347F7303 * __this, IAPListener_tA8E5B3850C466201C221D95CF74A9BEA7DC74E61 * ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodelessIAPStoreListener_RemoveListener_m3432F9A1A1E37888321E11FBA4A49EB8F97A5552_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// activeListeners.Remove (listener);
		List_1_t9AAA1568B76F8B92C93DB49A597240F9DEEE5E40 * L_0 = __this->get_activeListeners_2();
		IAPListener_tA8E5B3850C466201C221D95CF74A9BEA7DC74E61 * L_1 = ___listener0;
		NullCheck(L_0);
		List_1_Remove_m84E444A3D4C15D6D2302DD13E5A2E78828C5BEB2(L_0, L_1, /*hidden argument*/List_1_Remove_m84E444A3D4C15D6D2302DD13E5A2E78828C5BEB2_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.Purchasing.CodelessIAPStoreListener::InitiatePurchase(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodelessIAPStoreListener_InitiatePurchase_m1233198CE19C5691C0CDD85786588CEAF2A7AB14 (CodelessIAPStoreListener_tC0C269A13BAE3B9F9AA24455FAB72340347F7303 * __this, String_t* ___productID0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodelessIAPStoreListener_InitiatePurchase_m1233198CE19C5691C0CDD85786588CEAF2A7AB14_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t9F37D65DD7E6FB43E324D936089DEA44EB811D3F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	IAPButton_t1BDE7DF230194C47716F1AD10806094D8DE39CD9 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// if (controller == null)
		RuntimeObject* L_0 = __this->get_controller_4();
		if (L_0)
		{
			goto IL_0058;
		}
	}
	{
		// Debug.LogError("Purchase failed because Purchasing was not initialized correctly");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteralC5385AC3E5574F459361EA1A0AE4800CB8C8F0A8, /*hidden argument*/NULL);
		// foreach (var button in activeButtons)
		List_1_t4EA118A9AAEF1F1654837150C244FCF20A2612C6 * L_1 = __this->get_activeButtons_1();
		NullCheck(L_1);
		Enumerator_t9F37D65DD7E6FB43E324D936089DEA44EB811D3F  L_2 = List_1_GetEnumerator_m0E99A24EF5097DFD7180540835FC96B83DE24841(L_1, /*hidden argument*/List_1_GetEnumerator_m0E99A24EF5097DFD7180540835FC96B83DE24841_RuntimeMethod_var);
		V_0 = L_2;
	}

IL_001e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003e;
		}

IL_0020:
		{
			// foreach (var button in activeButtons)
			IAPButton_t1BDE7DF230194C47716F1AD10806094D8DE39CD9 * L_3 = Enumerator_get_Current_m06FB35F697F9E3F603349534764389C2A9984796_inline((Enumerator_t9F37D65DD7E6FB43E324D936089DEA44EB811D3F *)(&V_0), /*hidden argument*/Enumerator_get_Current_m06FB35F697F9E3F603349534764389C2A9984796_RuntimeMethod_var);
			V_1 = L_3;
			// if (button.productId == productID)
			IAPButton_t1BDE7DF230194C47716F1AD10806094D8DE39CD9 * L_4 = V_1;
			NullCheck(L_4);
			String_t* L_5 = L_4->get_productId_4();
			String_t* L_6 = ___productID0;
			bool L_7 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_5, L_6, /*hidden argument*/NULL);
			if (!L_7)
			{
				goto IL_003e;
			}
		}

IL_0036:
		{
			// button.OnPurchaseFailed(null, Purchasing.PurchaseFailureReason.PurchasingUnavailable);
			IAPButton_t1BDE7DF230194C47716F1AD10806094D8DE39CD9 * L_8 = V_1;
			NullCheck(L_8);
			IAPButton_OnPurchaseFailed_mAF5155D49340CFD9FCA17BD0DAA17CD27037BA57(L_8, (Product_t830A133A97BEA12C3CD696853098A295D99A6DE4 *)NULL, 0, /*hidden argument*/NULL);
		}

IL_003e:
		{
			// foreach (var button in activeButtons)
			bool L_9 = Enumerator_MoveNext_m66A6DE692B96C883FB9A150F3209127E5371DD73((Enumerator_t9F37D65DD7E6FB43E324D936089DEA44EB811D3F *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m66A6DE692B96C883FB9A150F3209127E5371DD73_RuntimeMethod_var);
			if (L_9)
			{
				goto IL_0020;
			}
		}

IL_0047:
		{
			IL2CPP_LEAVE(0x57, FINALLY_0049);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0049;
	}

FINALLY_0049:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m0BF7B99F01F7619CC51A73AF0F39A1D3F8EE92EF((Enumerator_t9F37D65DD7E6FB43E324D936089DEA44EB811D3F *)(&V_0), /*hidden argument*/Enumerator_Dispose_m0BF7B99F01F7619CC51A73AF0F39A1D3F8EE92EF_RuntimeMethod_var);
		IL2CPP_END_FINALLY(73)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(73)
	{
		IL2CPP_JUMP_TBL(0x57, IL_0057)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0057:
	{
		// return;
		return;
	}

IL_0058:
	{
		// controller.InitiatePurchase(productID);
		RuntimeObject* L_10 = __this->get_controller_4();
		String_t* L_11 = ___productID0;
		NullCheck(L_10);
		InterfaceActionInvoker1< String_t* >::Invoke(3 /* System.Void UnityEngine.Purchasing.IStoreController::InitiatePurchase(System.String) */, IStoreController_t6A30FF7F81804FCC0082AB9DF2CE86BCFB91DF67_il2cpp_TypeInfo_var, L_10, L_11);
		// }
		return;
	}
}
// System.Void UnityEngine.Purchasing.CodelessIAPStoreListener::OnInitialized(UnityEngine.Purchasing.IStoreController,UnityEngine.Purchasing.IExtensionProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodelessIAPStoreListener_OnInitialized_m2C6695E9EA4315139EFF292A6066318D0B95E247 (CodelessIAPStoreListener_tC0C269A13BAE3B9F9AA24455FAB72340347F7303 * __this, RuntimeObject* ___controller0, RuntimeObject* ___extensions1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodelessIAPStoreListener_OnInitialized_m2C6695E9EA4315139EFF292A6066318D0B95E247_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t9F37D65DD7E6FB43E324D936089DEA44EB811D3F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// initializationComplete = true;
		((CodelessIAPStoreListener_tC0C269A13BAE3B9F9AA24455FAB72340347F7303_StaticFields*)il2cpp_codegen_static_fields_for(CodelessIAPStoreListener_tC0C269A13BAE3B9F9AA24455FAB72340347F7303_il2cpp_TypeInfo_var))->set_initializationComplete_7((bool)1);
		// this.controller = controller;
		RuntimeObject* L_0 = ___controller0;
		__this->set_controller_4(L_0);
		// this.extensions = extensions;
		RuntimeObject* L_1 = ___extensions1;
		__this->set_extensions_5(L_1);
		// foreach (var button in activeButtons)
		List_1_t4EA118A9AAEF1F1654837150C244FCF20A2612C6 * L_2 = __this->get_activeButtons_1();
		NullCheck(L_2);
		Enumerator_t9F37D65DD7E6FB43E324D936089DEA44EB811D3F  L_3 = List_1_GetEnumerator_m0E99A24EF5097DFD7180540835FC96B83DE24841(L_2, /*hidden argument*/List_1_GetEnumerator_m0E99A24EF5097DFD7180540835FC96B83DE24841_RuntimeMethod_var);
		V_0 = L_3;
	}

IL_0020:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002e;
		}

IL_0022:
		{
			// foreach (var button in activeButtons)
			IAPButton_t1BDE7DF230194C47716F1AD10806094D8DE39CD9 * L_4 = Enumerator_get_Current_m06FB35F697F9E3F603349534764389C2A9984796_inline((Enumerator_t9F37D65DD7E6FB43E324D936089DEA44EB811D3F *)(&V_0), /*hidden argument*/Enumerator_get_Current_m06FB35F697F9E3F603349534764389C2A9984796_RuntimeMethod_var);
			// button.UpdateText();
			NullCheck(L_4);
			IAPButton_UpdateText_m38D5E31DB4E01F0E1419174A6309186AEAB348DD(L_4, /*hidden argument*/NULL);
		}

IL_002e:
		{
			// foreach (var button in activeButtons)
			bool L_5 = Enumerator_MoveNext_m66A6DE692B96C883FB9A150F3209127E5371DD73((Enumerator_t9F37D65DD7E6FB43E324D936089DEA44EB811D3F *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m66A6DE692B96C883FB9A150F3209127E5371DD73_RuntimeMethod_var);
			if (L_5)
			{
				goto IL_0022;
			}
		}

IL_0037:
		{
			IL2CPP_LEAVE(0x47, FINALLY_0039);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0039;
	}

FINALLY_0039:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m0BF7B99F01F7619CC51A73AF0F39A1D3F8EE92EF((Enumerator_t9F37D65DD7E6FB43E324D936089DEA44EB811D3F *)(&V_0), /*hidden argument*/Enumerator_Dispose_m0BF7B99F01F7619CC51A73AF0F39A1D3F8EE92EF_RuntimeMethod_var);
		IL2CPP_END_FINALLY(57)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(57)
	{
		IL2CPP_JUMP_TBL(0x47, IL_0047)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0047:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Purchasing.CodelessIAPStoreListener::OnInitializeFailed(UnityEngine.Purchasing.InitializationFailureReason)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodelessIAPStoreListener_OnInitializeFailed_mC545B60853C783DAC26E75433C6BADC6BEDCB053 (CodelessIAPStoreListener_tC0C269A13BAE3B9F9AA24455FAB72340347F7303 * __this, int32_t ___error0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodelessIAPStoreListener_OnInitializeFailed_mC545B60853C783DAC26E75433C6BADC6BEDCB053_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogError(string.Format("Purchasing failed to initialize. Reason: {0}", error.ToString()));
		RuntimeObject * L_0 = Box(InitializationFailureReason_t5A6284D67FA09D301793E67D8B7003299F4D3062_il2cpp_TypeInfo_var, (&___error0));
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		___error0 = *(int32_t*)UnBox(L_0);
		String_t* L_2 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteralAE838E8A81AC27F40386F6B5C051183F526F243B, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.Purchasing.PurchaseProcessingResult UnityEngine.Purchasing.CodelessIAPStoreListener::ProcessPurchase(UnityEngine.Purchasing.PurchaseEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CodelessIAPStoreListener_ProcessPurchase_m65BBA6E7861D2236652DAC619DA2CD4F840BD5C8 (CodelessIAPStoreListener_tC0C269A13BAE3B9F9AA24455FAB72340347F7303 * __this, PurchaseEventArgs_tF6E04BFD5492F5F57309FFBB2415EB26E5B88C04 * ___e0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodelessIAPStoreListener_ProcessPurchase_m65BBA6E7861D2236652DAC619DA2CD4F840BD5C8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	Enumerator_t9F37D65DD7E6FB43E324D936089DEA44EB811D3F  V_2;
	memset((&V_2), 0, sizeof(V_2));
	IAPButton_t1BDE7DF230194C47716F1AD10806094D8DE39CD9 * V_3 = NULL;
	Enumerator_tAF6ACB804093D6ABEB02CDA6CBCD447DCA1C49E9  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// bool consumePurchase = false;
		V_0 = (bool)0;
		// bool resultProcessed = false;
		V_1 = (bool)0;
		// foreach (IAPButton button in activeButtons)
		List_1_t4EA118A9AAEF1F1654837150C244FCF20A2612C6 * L_0 = __this->get_activeButtons_1();
		NullCheck(L_0);
		Enumerator_t9F37D65DD7E6FB43E324D936089DEA44EB811D3F  L_1 = List_1_GetEnumerator_m0E99A24EF5097DFD7180540835FC96B83DE24841(L_0, /*hidden argument*/List_1_GetEnumerator_m0E99A24EF5097DFD7180540835FC96B83DE24841_RuntimeMethod_var);
		V_2 = L_1;
	}

IL_0010:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0044;
		}

IL_0012:
		{
			// foreach (IAPButton button in activeButtons)
			IAPButton_t1BDE7DF230194C47716F1AD10806094D8DE39CD9 * L_2 = Enumerator_get_Current_m06FB35F697F9E3F603349534764389C2A9984796_inline((Enumerator_t9F37D65DD7E6FB43E324D936089DEA44EB811D3F *)(&V_2), /*hidden argument*/Enumerator_get_Current_m06FB35F697F9E3F603349534764389C2A9984796_RuntimeMethod_var);
			V_3 = L_2;
			// if (button.productId == e.purchasedProduct.definition.id)
			IAPButton_t1BDE7DF230194C47716F1AD10806094D8DE39CD9 * L_3 = V_3;
			NullCheck(L_3);
			String_t* L_4 = L_3->get_productId_4();
			PurchaseEventArgs_tF6E04BFD5492F5F57309FFBB2415EB26E5B88C04 * L_5 = ___e0;
			NullCheck(L_5);
			Product_t830A133A97BEA12C3CD696853098A295D99A6DE4 * L_6 = PurchaseEventArgs_get_purchasedProduct_mB26BCEF9CD45B84DBF55A5C6FC50AF611B6AD6A2_inline(L_5, /*hidden argument*/NULL);
			NullCheck(L_6);
			ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * L_7 = Product_get_definition_mFA1889844E23D37A700C2EA6659EE3BBF1E17C58_inline(L_6, /*hidden argument*/NULL);
			NullCheck(L_7);
			String_t* L_8 = ProductDefinition_get_id_mD5C2A9C1016245C99EB67B74DFC32ECDC8512468_inline(L_7, /*hidden argument*/NULL);
			bool L_9 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_4, L_8, /*hidden argument*/NULL);
			if (!L_9)
			{
				goto IL_0044;
			}
		}

IL_0037:
		{
			// result = button.ProcessPurchase(e);
			IAPButton_t1BDE7DF230194C47716F1AD10806094D8DE39CD9 * L_10 = V_3;
			PurchaseEventArgs_tF6E04BFD5492F5F57309FFBB2415EB26E5B88C04 * L_11 = ___e0;
			NullCheck(L_10);
			int32_t L_12 = IAPButton_ProcessPurchase_mAD1C2C30A543271D9011A0612E37EA62714B2C09(L_10, L_11, /*hidden argument*/NULL);
			// if (result == PurchaseProcessingResult.Complete) {
			if (L_12)
			{
				goto IL_0042;
			}
		}

IL_0040:
		{
			// consumePurchase = true;
			V_0 = (bool)1;
		}

IL_0042:
		{
			// resultProcessed = true;
			V_1 = (bool)1;
		}

IL_0044:
		{
			// foreach (IAPButton button in activeButtons)
			bool L_13 = Enumerator_MoveNext_m66A6DE692B96C883FB9A150F3209127E5371DD73((Enumerator_t9F37D65DD7E6FB43E324D936089DEA44EB811D3F *)(&V_2), /*hidden argument*/Enumerator_MoveNext_m66A6DE692B96C883FB9A150F3209127E5371DD73_RuntimeMethod_var);
			if (L_13)
			{
				goto IL_0012;
			}
		}

IL_004d:
		{
			IL2CPP_LEAVE(0x5D, FINALLY_004f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004f;
	}

FINALLY_004f:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m0BF7B99F01F7619CC51A73AF0F39A1D3F8EE92EF((Enumerator_t9F37D65DD7E6FB43E324D936089DEA44EB811D3F *)(&V_2), /*hidden argument*/Enumerator_Dispose_m0BF7B99F01F7619CC51A73AF0F39A1D3F8EE92EF_RuntimeMethod_var);
		IL2CPP_END_FINALLY(79)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(79)
	{
		IL2CPP_JUMP_TBL(0x5D, IL_005d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_005d:
	{
		// foreach (IAPListener listener in activeListeners)
		List_1_t9AAA1568B76F8B92C93DB49A597240F9DEEE5E40 * L_14 = __this->get_activeListeners_2();
		NullCheck(L_14);
		Enumerator_tAF6ACB804093D6ABEB02CDA6CBCD447DCA1C49E9  L_15 = List_1_GetEnumerator_mB0610B63F92F833B979FB98AEE575514949A6A50(L_14, /*hidden argument*/List_1_GetEnumerator_mB0610B63F92F833B979FB98AEE575514949A6A50_RuntimeMethod_var);
		V_4 = L_15;
	}

IL_006a:
	try
	{ // begin try (depth: 1)
		{
			goto IL_007f;
		}

IL_006c:
		{
			// foreach (IAPListener listener in activeListeners)
			IAPListener_tA8E5B3850C466201C221D95CF74A9BEA7DC74E61 * L_16 = Enumerator_get_Current_mA48E4EF0A239DE7C9F3B846586FB784EDC6CD120_inline((Enumerator_tAF6ACB804093D6ABEB02CDA6CBCD447DCA1C49E9 *)(&V_4), /*hidden argument*/Enumerator_get_Current_mA48E4EF0A239DE7C9F3B846586FB784EDC6CD120_RuntimeMethod_var);
			// result = listener.ProcessPurchase(e);
			PurchaseEventArgs_tF6E04BFD5492F5F57309FFBB2415EB26E5B88C04 * L_17 = ___e0;
			NullCheck(L_16);
			int32_t L_18 = IAPListener_ProcessPurchase_mE08DC15E1CC263B6B6C74248B2B342339632FC8A(L_16, L_17, /*hidden argument*/NULL);
			// if (result == PurchaseProcessingResult.Complete) {
			if (L_18)
			{
				goto IL_007d;
			}
		}

IL_007b:
		{
			// consumePurchase = true;
			V_0 = (bool)1;
		}

IL_007d:
		{
			// resultProcessed = true;
			V_1 = (bool)1;
		}

IL_007f:
		{
			// foreach (IAPListener listener in activeListeners)
			bool L_19 = Enumerator_MoveNext_m1AEC618F26C5FE0F95664256949A96C73BD7BABC((Enumerator_tAF6ACB804093D6ABEB02CDA6CBCD447DCA1C49E9 *)(&V_4), /*hidden argument*/Enumerator_MoveNext_m1AEC618F26C5FE0F95664256949A96C73BD7BABC_RuntimeMethod_var);
			if (L_19)
			{
				goto IL_006c;
			}
		}

IL_0088:
		{
			IL2CPP_LEAVE(0x98, FINALLY_008a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_008a;
	}

FINALLY_008a:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mD06BAE2A2EB6C0EF57B61D4458590A02782FFBE6((Enumerator_tAF6ACB804093D6ABEB02CDA6CBCD447DCA1C49E9 *)(&V_4), /*hidden argument*/Enumerator_Dispose_mD06BAE2A2EB6C0EF57B61D4458590A02782FFBE6_RuntimeMethod_var);
		IL2CPP_END_FINALLY(138)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(138)
	{
		IL2CPP_JUMP_TBL(0x98, IL_0098)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0098:
	{
		// if (!resultProcessed) {
		bool L_20 = V_1;
		if (L_20)
		{
			goto IL_00bf;
		}
	}
	{
		// Debug.LogError("Purchase not correctly processed for product \"" +
		//                  e.purchasedProduct.definition.id +
		//                  "\". Add an active IAPButton to process this purchase, or add an IAPListener to receive any unhandled purchase events.");
		PurchaseEventArgs_tF6E04BFD5492F5F57309FFBB2415EB26E5B88C04 * L_21 = ___e0;
		NullCheck(L_21);
		Product_t830A133A97BEA12C3CD696853098A295D99A6DE4 * L_22 = PurchaseEventArgs_get_purchasedProduct_mB26BCEF9CD45B84DBF55A5C6FC50AF611B6AD6A2_inline(L_21, /*hidden argument*/NULL);
		NullCheck(L_22);
		ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * L_23 = Product_get_definition_mFA1889844E23D37A700C2EA6659EE3BBF1E17C58_inline(L_22, /*hidden argument*/NULL);
		NullCheck(L_23);
		String_t* L_24 = ProductDefinition_get_id_mD5C2A9C1016245C99EB67B74DFC32ECDC8512468_inline(L_23, /*hidden argument*/NULL);
		String_t* L_25 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(_stringLiteral527C75C1D07CB5F6D0B5FF91F8DDF8EB4B7D2E74, L_24, _stringLiteral85720EDF173A3A9BE210D4FB7BDD2E21D0D31697, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(L_25, /*hidden argument*/NULL);
	}

IL_00bf:
	{
		// return (consumePurchase) ? PurchaseProcessingResult.Complete : PurchaseProcessingResult.Pending;
		bool L_26 = V_0;
		if (L_26)
		{
			goto IL_00c4;
		}
	}
	{
		return (int32_t)(1);
	}

IL_00c4:
	{
		return (int32_t)(0);
	}
}
// System.Void UnityEngine.Purchasing.CodelessIAPStoreListener::OnPurchaseFailed(UnityEngine.Purchasing.Product,UnityEngine.Purchasing.PurchaseFailureReason)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodelessIAPStoreListener_OnPurchaseFailed_mF5E22FFF1ABB35810DF36DF527C3D5548AD92D5D (CodelessIAPStoreListener_tC0C269A13BAE3B9F9AA24455FAB72340347F7303 * __this, Product_t830A133A97BEA12C3CD696853098A295D99A6DE4 * ___product0, int32_t ___reason1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodelessIAPStoreListener_OnPurchaseFailed_mF5E22FFF1ABB35810DF36DF527C3D5548AD92D5D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Enumerator_t9F37D65DD7E6FB43E324D936089DEA44EB811D3F  V_1;
	memset((&V_1), 0, sizeof(V_1));
	IAPButton_t1BDE7DF230194C47716F1AD10806094D8DE39CD9 * V_2 = NULL;
	Enumerator_tAF6ACB804093D6ABEB02CDA6CBCD447DCA1C49E9  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// bool resultProcessed = false;
		V_0 = (bool)0;
		// foreach (IAPButton button in activeButtons)
		List_1_t4EA118A9AAEF1F1654837150C244FCF20A2612C6 * L_0 = __this->get_activeButtons_1();
		NullCheck(L_0);
		Enumerator_t9F37D65DD7E6FB43E324D936089DEA44EB811D3F  L_1 = List_1_GetEnumerator_m0E99A24EF5097DFD7180540835FC96B83DE24841(L_0, /*hidden argument*/List_1_GetEnumerator_m0E99A24EF5097DFD7180540835FC96B83DE24841_RuntimeMethod_var);
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003a;
		}

IL_0010:
		{
			// foreach (IAPButton button in activeButtons)
			IAPButton_t1BDE7DF230194C47716F1AD10806094D8DE39CD9 * L_2 = Enumerator_get_Current_m06FB35F697F9E3F603349534764389C2A9984796_inline((Enumerator_t9F37D65DD7E6FB43E324D936089DEA44EB811D3F *)(&V_1), /*hidden argument*/Enumerator_get_Current_m06FB35F697F9E3F603349534764389C2A9984796_RuntimeMethod_var);
			V_2 = L_2;
			// if (button.productId == product.definition.id)
			IAPButton_t1BDE7DF230194C47716F1AD10806094D8DE39CD9 * L_3 = V_2;
			NullCheck(L_3);
			String_t* L_4 = L_3->get_productId_4();
			Product_t830A133A97BEA12C3CD696853098A295D99A6DE4 * L_5 = ___product0;
			NullCheck(L_5);
			ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * L_6 = Product_get_definition_mFA1889844E23D37A700C2EA6659EE3BBF1E17C58_inline(L_5, /*hidden argument*/NULL);
			NullCheck(L_6);
			String_t* L_7 = ProductDefinition_get_id_mD5C2A9C1016245C99EB67B74DFC32ECDC8512468_inline(L_6, /*hidden argument*/NULL);
			bool L_8 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_4, L_7, /*hidden argument*/NULL);
			if (!L_8)
			{
				goto IL_003a;
			}
		}

IL_0030:
		{
			// button.OnPurchaseFailed(product, reason);
			IAPButton_t1BDE7DF230194C47716F1AD10806094D8DE39CD9 * L_9 = V_2;
			Product_t830A133A97BEA12C3CD696853098A295D99A6DE4 * L_10 = ___product0;
			int32_t L_11 = ___reason1;
			NullCheck(L_9);
			IAPButton_OnPurchaseFailed_mAF5155D49340CFD9FCA17BD0DAA17CD27037BA57(L_9, L_10, L_11, /*hidden argument*/NULL);
			// resultProcessed = true;
			V_0 = (bool)1;
		}

IL_003a:
		{
			// foreach (IAPButton button in activeButtons)
			bool L_12 = Enumerator_MoveNext_m66A6DE692B96C883FB9A150F3209127E5371DD73((Enumerator_t9F37D65DD7E6FB43E324D936089DEA44EB811D3F *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m66A6DE692B96C883FB9A150F3209127E5371DD73_RuntimeMethod_var);
			if (L_12)
			{
				goto IL_0010;
			}
		}

IL_0043:
		{
			IL2CPP_LEAVE(0x53, FINALLY_0045);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0045;
	}

FINALLY_0045:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m0BF7B99F01F7619CC51A73AF0F39A1D3F8EE92EF((Enumerator_t9F37D65DD7E6FB43E324D936089DEA44EB811D3F *)(&V_1), /*hidden argument*/Enumerator_Dispose_m0BF7B99F01F7619CC51A73AF0F39A1D3F8EE92EF_RuntimeMethod_var);
		IL2CPP_END_FINALLY(69)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(69)
	{
		IL2CPP_JUMP_TBL(0x53, IL_0053)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0053:
	{
		// foreach (IAPListener listener in activeListeners)
		List_1_t9AAA1568B76F8B92C93DB49A597240F9DEEE5E40 * L_13 = __this->get_activeListeners_2();
		NullCheck(L_13);
		Enumerator_tAF6ACB804093D6ABEB02CDA6CBCD447DCA1C49E9  L_14 = List_1_GetEnumerator_mB0610B63F92F833B979FB98AEE575514949A6A50(L_13, /*hidden argument*/List_1_GetEnumerator_mB0610B63F92F833B979FB98AEE575514949A6A50_RuntimeMethod_var);
		V_3 = L_14;
	}

IL_005f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0071;
		}

IL_0061:
		{
			// foreach (IAPListener listener in activeListeners)
			IAPListener_tA8E5B3850C466201C221D95CF74A9BEA7DC74E61 * L_15 = Enumerator_get_Current_mA48E4EF0A239DE7C9F3B846586FB784EDC6CD120_inline((Enumerator_tAF6ACB804093D6ABEB02CDA6CBCD447DCA1C49E9 *)(&V_3), /*hidden argument*/Enumerator_get_Current_mA48E4EF0A239DE7C9F3B846586FB784EDC6CD120_RuntimeMethod_var);
			// listener.OnPurchaseFailed(product, reason);
			Product_t830A133A97BEA12C3CD696853098A295D99A6DE4 * L_16 = ___product0;
			int32_t L_17 = ___reason1;
			NullCheck(L_15);
			IAPListener_OnPurchaseFailed_mCBB1A7EBFD259CC0DF60A263E96A2B10DFD5FAE1(L_15, L_16, L_17, /*hidden argument*/NULL);
			// resultProcessed = true;
			V_0 = (bool)1;
		}

IL_0071:
		{
			// foreach (IAPListener listener in activeListeners)
			bool L_18 = Enumerator_MoveNext_m1AEC618F26C5FE0F95664256949A96C73BD7BABC((Enumerator_tAF6ACB804093D6ABEB02CDA6CBCD447DCA1C49E9 *)(&V_3), /*hidden argument*/Enumerator_MoveNext_m1AEC618F26C5FE0F95664256949A96C73BD7BABC_RuntimeMethod_var);
			if (L_18)
			{
				goto IL_0061;
			}
		}

IL_007a:
		{
			IL2CPP_LEAVE(0x8A, FINALLY_007c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_007c;
	}

FINALLY_007c:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mD06BAE2A2EB6C0EF57B61D4458590A02782FFBE6((Enumerator_tAF6ACB804093D6ABEB02CDA6CBCD447DCA1C49E9 *)(&V_3), /*hidden argument*/Enumerator_Dispose_mD06BAE2A2EB6C0EF57B61D4458590A02782FFBE6_RuntimeMethod_var);
		IL2CPP_END_FINALLY(124)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(124)
	{
		IL2CPP_JUMP_TBL(0x8A, IL_008a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_008a:
	{
		// if (!resultProcessed) {
		bool L_19 = V_0;
		if (L_19)
		{
			goto IL_00ac;
		}
	}
	{
		// Debug.LogError("Failed purchase not correctly handled for product \"" + product.definition.id +
		//                   "\". Add an active IAPButton to handle this failure, or add an IAPListener to receive any unhandled purchase failures.");
		Product_t830A133A97BEA12C3CD696853098A295D99A6DE4 * L_20 = ___product0;
		NullCheck(L_20);
		ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * L_21 = Product_get_definition_mFA1889844E23D37A700C2EA6659EE3BBF1E17C58_inline(L_20, /*hidden argument*/NULL);
		NullCheck(L_21);
		String_t* L_22 = ProductDefinition_get_id_mD5C2A9C1016245C99EB67B74DFC32ECDC8512468_inline(L_21, /*hidden argument*/NULL);
		String_t* L_23 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(_stringLiteralCE7161EFCCA6A6BCA131AB91AEE8C8F9258D3682, L_22, _stringLiteral1C99BFDF8E727850D952C770A237005295E9DE74, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(L_23, /*hidden argument*/NULL);
	}

IL_00ac:
	{
		// return;
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
// System.Void UnityEngine.Purchasing.DemoInventory::Fulfill(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoInventory_Fulfill_m0DEEEF4496A128E12252CF38353793221A3966E5 (DemoInventory_tEE67406267DE534F798D930E84602CC4F0584EE7 * __this, String_t* ___productId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DemoInventory_Fulfill_m0DEEEF4496A128E12252CF38353793221A3966E5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// switch (productId) {
		String_t* L_0 = ___productId0;
		bool L_1 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_0, _stringLiteralA1CFF652D74275F09B72B1A3646DA9F3614A9587, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// Debug.Log ("You Got Money!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteral6EB09645F68948F54951C595716BC49AF7156E7D, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0018:
	{
		// Debug.Log (
		//     string.Format (
		//         "Unrecognized productId \"{0}\"",
		//         productId
		//     )
		// );
		String_t* L_2 = ___productId0;
		String_t* L_3 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral522F6EFAD059981471B05892D9DC58AAF99A49A2, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Purchasing.DemoInventory::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoInventory__ctor_mC0614EB20EAB5A29FA100194FF603E0A6D68BA99 (DemoInventory_tEE67406267DE534F798D930E84602CC4F0584EE7 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Purchasing.IAPButton::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAPButton_Start_m039D7EB29463237C4FC1C3CED4D21C665AF136F4 (IAPButton_t1BDE7DF230194C47716F1AD10806094D8DE39CD9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAPButton_Start_m039D7EB29463237C4FC1C3CED4D21C665AF136F4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * V_0 = NULL;
	{
		// Button button = GetComponent<Button>();
		Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * L_0 = Component_GetComponent_TisButton_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B_m95916328C175634DC742DD13D032F149F1FBF58C(__this, /*hidden argument*/Component_GetComponent_TisButton_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B_m95916328C175634DC742DD13D032F149F1FBF58C_RuntimeMethod_var);
		V_0 = L_0;
		// if (buttonType == ButtonType.Purchase)
		int32_t L_1 = __this->get_buttonType_5();
		if (L_1)
		{
			goto IL_0072;
		}
	}
	{
		// if (button)
		Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		// button.onClick.AddListener(PurchaseProduct);
		Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * L_4 = V_0;
		NullCheck(L_4);
		ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * L_5 = Button_get_onClick_m77E8CA6917881760CC7900930F4C789F3E2F8817_inline(L_4, /*hidden argument*/NULL);
		UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * L_6 = (UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 *)il2cpp_codegen_object_new(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4_il2cpp_TypeInfo_var);
		UnityAction__ctor_mEFC4B92529CE83DF72501F92E07EC5598C54BDAC(L_6, __this, (intptr_t)((intptr_t)IAPButton_PurchaseProduct_mB54432549974A8C8382BB1E9EECC2C3E07B1BC2A_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_5);
		UnityEvent_AddListener_m31973FDDC5BB0B2828AB6EF519EC4FD6563499C9(L_5, L_6, /*hidden argument*/NULL);
	}

IL_002e:
	{
		// if (string.IsNullOrEmpty(productId))
		String_t* L_7 = __this->get_productId_4();
		bool L_8 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0045;
		}
	}
	{
		// Debug.LogError("IAPButton productId is empty");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteral677CF493AFD568843F6FE985C45C0DF41E3F0843, /*hidden argument*/NULL);
	}

IL_0045:
	{
		// if (!CodelessIAPStoreListener.Instance.HasProductInCatalog(productId))
		CodelessIAPStoreListener_tC0C269A13BAE3B9F9AA24455FAB72340347F7303 * L_9 = CodelessIAPStoreListener_get_Instance_m6D6C71B6D75F21C64499CE46A23DDC572B3DACAE(/*hidden argument*/NULL);
		String_t* L_10 = __this->get_productId_4();
		NullCheck(L_9);
		bool L_11 = CodelessIAPStoreListener_HasProductInCatalog_m7572D2C0E9C4208ED1C909684EF999058BC0DEEC(L_9, L_10, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_009a;
		}
	}
	{
		// Debug.LogWarning("The product catalog has no product with the ID \"" + productId + "\"");
		String_t* L_12 = __this->get_productId_4();
		String_t* L_13 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(_stringLiteralA04B49E250B6820A007D06817185F5E3C633C4A8, L_12, _stringLiteral2ACE62C1BEFA19E3EA37DD52BE9F6D508C5163E6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(L_13, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0072:
	{
		// else if (buttonType == ButtonType.Restore)
		int32_t L_14 = __this->get_buttonType_5();
		if ((!(((uint32_t)L_14) == ((uint32_t)1))))
		{
			goto IL_009a;
		}
	}
	{
		// if (button)
		Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * L_15 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_16 = Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534(L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_009a;
		}
	}
	{
		// button.onClick.AddListener(Restore);
		Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * L_17 = V_0;
		NullCheck(L_17);
		ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * L_18 = Button_get_onClick_m77E8CA6917881760CC7900930F4C789F3E2F8817_inline(L_17, /*hidden argument*/NULL);
		UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * L_19 = (UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 *)il2cpp_codegen_object_new(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4_il2cpp_TypeInfo_var);
		UnityAction__ctor_mEFC4B92529CE83DF72501F92E07EC5598C54BDAC(L_19, __this, (intptr_t)((intptr_t)IAPButton_Restore_mB109C7212887847793087D5754883509490E7D79_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_18);
		UnityEvent_AddListener_m31973FDDC5BB0B2828AB6EF519EC4FD6563499C9(L_18, L_19, /*hidden argument*/NULL);
	}

IL_009a:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Purchasing.IAPButton::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAPButton_OnEnable_mE3E70F3ED623B2645AA6D8D2D455DE65C24BD7E3 (IAPButton_t1BDE7DF230194C47716F1AD10806094D8DE39CD9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAPButton_OnEnable_mE3E70F3ED623B2645AA6D8D2D455DE65C24BD7E3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (buttonType == ButtonType.Purchase)
		int32_t L_0 = __this->get_buttonType_5();
		if (L_0)
		{
			goto IL_0020;
		}
	}
	{
		// CodelessIAPStoreListener.Instance.AddButton(this);
		CodelessIAPStoreListener_tC0C269A13BAE3B9F9AA24455FAB72340347F7303 * L_1 = CodelessIAPStoreListener_get_Instance_m6D6C71B6D75F21C64499CE46A23DDC572B3DACAE(/*hidden argument*/NULL);
		NullCheck(L_1);
		CodelessIAPStoreListener_AddButton_m4A1BF6B82F547465176551D086C4F386FDDED3E7(L_1, __this, /*hidden argument*/NULL);
		// if (CodelessIAPStoreListener.initializationComplete) {
		bool L_2 = ((CodelessIAPStoreListener_tC0C269A13BAE3B9F9AA24455FAB72340347F7303_StaticFields*)il2cpp_codegen_static_fields_for(CodelessIAPStoreListener_tC0C269A13BAE3B9F9AA24455FAB72340347F7303_il2cpp_TypeInfo_var))->get_initializationComplete_7();
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		// UpdateText();
		IAPButton_UpdateText_m38D5E31DB4E01F0E1419174A6309186AEAB348DD(__this, /*hidden argument*/NULL);
	}

IL_0020:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Purchasing.IAPButton::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAPButton_OnDisable_m473B029AD2CB551C7C5AEEF5E01D619A17EC25B4 (IAPButton_t1BDE7DF230194C47716F1AD10806094D8DE39CD9 * __this, const RuntimeMethod* method)
{
	{
		// if (buttonType == ButtonType.Purchase)
		int32_t L_0 = __this->get_buttonType_5();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// CodelessIAPStoreListener.Instance.RemoveButton(this);
		CodelessIAPStoreListener_tC0C269A13BAE3B9F9AA24455FAB72340347F7303 * L_1 = CodelessIAPStoreListener_get_Instance_m6D6C71B6D75F21C64499CE46A23DDC572B3DACAE(/*hidden argument*/NULL);
		NullCheck(L_1);
		CodelessIAPStoreListener_RemoveButton_mD47F635ACC605FA53FC7629AAAF0384D94FF6B6E(L_1, __this, /*hidden argument*/NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Purchasing.IAPButton::PurchaseProduct()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAPButton_PurchaseProduct_mB54432549974A8C8382BB1E9EECC2C3E07B1BC2A (IAPButton_t1BDE7DF230194C47716F1AD10806094D8DE39CD9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAPButton_PurchaseProduct_mB54432549974A8C8382BB1E9EECC2C3E07B1BC2A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (buttonType == ButtonType.Purchase)
		int32_t L_0 = __this->get_buttonType_5();
		if (L_0)
		{
			goto IL_002d;
		}
	}
	{
		// Debug.Log("IAPButton.PurchaseProduct() with product ID: " + productId);
		String_t* L_1 = __this->get_productId_4();
		String_t* L_2 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral947D2F2034D4C547910A951ACA54EB0B80AFF5CE, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_2, /*hidden argument*/NULL);
		// CodelessIAPStoreListener.Instance.InitiatePurchase(productId);
		CodelessIAPStoreListener_tC0C269A13BAE3B9F9AA24455FAB72340347F7303 * L_3 = CodelessIAPStoreListener_get_Instance_m6D6C71B6D75F21C64499CE46A23DDC572B3DACAE(/*hidden argument*/NULL);
		String_t* L_4 = __this->get_productId_4();
		NullCheck(L_3);
		CodelessIAPStoreListener_InitiatePurchase_m1233198CE19C5691C0CDD85786588CEAF2A7AB14(L_3, L_4, /*hidden argument*/NULL);
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Purchasing.IAPButton::Restore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAPButton_Restore_mB109C7212887847793087D5754883509490E7D79 (IAPButton_t1BDE7DF230194C47716F1AD10806094D8DE39CD9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAPButton_Restore_mB109C7212887847793087D5754883509490E7D79_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (buttonType == ButtonType.Restore)
		int32_t L_0 = __this->get_buttonType_5();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0106;
		}
	}
	{
		// if (Application.platform == RuntimePlatform.WSAPlayerX86 ||
		//     Application.platform == RuntimePlatform.WSAPlayerX64 ||
		//     Application.platform == RuntimePlatform.WSAPlayerARM)
		int32_t L_1 = Application_get_platform_m6AFFFF3B077F4D5CA1F71CF14ABA86A83FC71672(/*hidden argument*/NULL);
		if ((((int32_t)L_1) == ((int32_t)((int32_t)18))))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_2 = Application_get_platform_m6AFFFF3B077F4D5CA1F71CF14ABA86A83FC71672(/*hidden argument*/NULL);
		if ((((int32_t)L_2) == ((int32_t)((int32_t)19))))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_3 = Application_get_platform_m6AFFFF3B077F4D5CA1F71CF14ABA86A83FC71672(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)20)))))
		{
			goto IL_003c;
		}
	}

IL_0027:
	{
		// CodelessIAPStoreListener.Instance.ExtensionProvider.GetExtension<IMicrosoftExtensions>()
		//     .RestoreTransactions();
		CodelessIAPStoreListener_tC0C269A13BAE3B9F9AA24455FAB72340347F7303 * L_4 = CodelessIAPStoreListener_get_Instance_m6D6C71B6D75F21C64499CE46A23DDC572B3DACAE(/*hidden argument*/NULL);
		NullCheck(L_4);
		RuntimeObject* L_5 = CodelessIAPStoreListener_get_ExtensionProvider_m6EF90D4617310AF8D82CF0372F0E8E3755B366B4_inline(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		RuntimeObject* L_6 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IExtensionProvider_GetExtension_TisIMicrosoftExtensions_t00C188B1B25CEAF55F58284ACCCBEFCB14015B54_mD7DC8B7C8DB6CF994E9817DF5681D9E27DEAA623_RuntimeMethod_var, L_5);
		NullCheck(L_6);
		InterfaceActionInvoker0::Invoke(0 /* System.Void UnityEngine.Purchasing.IMicrosoftExtensions::RestoreTransactions() */, IMicrosoftExtensions_t00C188B1B25CEAF55F58284ACCCBEFCB14015B54_il2cpp_TypeInfo_var, L_6);
		// }
		return;
	}

IL_003c:
	{
		// else if (Application.platform == RuntimePlatform.IPhonePlayer ||
		//          Application.platform == RuntimePlatform.OSXPlayer ||
		//          Application.platform == RuntimePlatform.tvOS)
		int32_t L_7 = Application_get_platform_m6AFFFF3B077F4D5CA1F71CF14ABA86A83FC71672(/*hidden argument*/NULL);
		if ((((int32_t)L_7) == ((int32_t)8)))
		{
			goto IL_0055;
		}
	}
	{
		int32_t L_8 = Application_get_platform_m6AFFFF3B077F4D5CA1F71CF14ABA86A83FC71672(/*hidden argument*/NULL);
		if ((((int32_t)L_8) == ((int32_t)1)))
		{
			goto IL_0055;
		}
	}
	{
		int32_t L_9 = Application_get_platform_m6AFFFF3B077F4D5CA1F71CF14ABA86A83FC71672(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)31)))))
		{
			goto IL_0076;
		}
	}

IL_0055:
	{
		// CodelessIAPStoreListener.Instance.ExtensionProvider.GetExtension<IAppleExtensions>()
		//     .RestoreTransactions(OnTransactionsRestored);
		CodelessIAPStoreListener_tC0C269A13BAE3B9F9AA24455FAB72340347F7303 * L_10 = CodelessIAPStoreListener_get_Instance_m6D6C71B6D75F21C64499CE46A23DDC572B3DACAE(/*hidden argument*/NULL);
		NullCheck(L_10);
		RuntimeObject* L_11 = CodelessIAPStoreListener_get_ExtensionProvider_m6EF90D4617310AF8D82CF0372F0E8E3755B366B4_inline(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		RuntimeObject* L_12 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IExtensionProvider_GetExtension_TisIAppleExtensions_tDBD257FA5CB6B55D1BE0F95CFD639A808A5101D1_mCF380291680A2BDF742F900E25AF31FE41CC026F_RuntimeMethod_var, L_11);
		Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * L_13 = (Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD *)il2cpp_codegen_object_new(Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD_il2cpp_TypeInfo_var);
		Action_1__ctor_mFEB000BCBDAB6DE953B2B50CD113641DCF601890(L_13, __this, (intptr_t)((intptr_t)IAPButton_OnTransactionsRestored_mBDBFA6BAC6A064FF152A33C344CE3DB9FC295F56_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mFEB000BCBDAB6DE953B2B50CD113641DCF601890_RuntimeMethod_var);
		NullCheck(L_12);
		InterfaceActionInvoker1< Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * >::Invoke(0 /* System.Void UnityEngine.Purchasing.IAppleExtensions::RestoreTransactions(System.Action`1<System.Boolean>) */, IAppleExtensions_tDBD257FA5CB6B55D1BE0F95CFD639A808A5101D1_il2cpp_TypeInfo_var, L_12, L_13);
		// }
		return;
	}

IL_0076:
	{
		// else if (Application.platform == RuntimePlatform.Android &&
		//          StandardPurchasingModule.Instance().appStore == AppStore.SamsungApps)
		int32_t L_14 = Application_get_platform_m6AFFFF3B077F4D5CA1F71CF14ABA86A83FC71672(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_14) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_00ad;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(StandardPurchasingModule_t45E3E7F3D0D8CE91AD85D7BE5B29CBA2235B3BFA_il2cpp_TypeInfo_var);
		StandardPurchasingModule_t45E3E7F3D0D8CE91AD85D7BE5B29CBA2235B3BFA * L_15 = StandardPurchasingModule_Instance_m14764772DB11E71EE7FE080CC8D9F86A3CC3BA83(/*hidden argument*/NULL);
		NullCheck(L_15);
		int32_t L_16 = StandardPurchasingModule_get_appStore_mCAA2ED4CDF716897820F7EC50FF1D7985D710E1C(L_15, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_16) == ((uint32_t)4))))
		{
			goto IL_00ad;
		}
	}
	{
		// CodelessIAPStoreListener.Instance.ExtensionProvider.GetExtension<ISamsungAppsExtensions>()
		//     .RestoreTransactions(OnTransactionsRestored);
		CodelessIAPStoreListener_tC0C269A13BAE3B9F9AA24455FAB72340347F7303 * L_17 = CodelessIAPStoreListener_get_Instance_m6D6C71B6D75F21C64499CE46A23DDC572B3DACAE(/*hidden argument*/NULL);
		NullCheck(L_17);
		RuntimeObject* L_18 = CodelessIAPStoreListener_get_ExtensionProvider_m6EF90D4617310AF8D82CF0372F0E8E3755B366B4_inline(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		RuntimeObject* L_19 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IExtensionProvider_GetExtension_TisISamsungAppsExtensions_tB0CEAD96F8AB0537F5FDEE5E40B29C197CF94F78_mA608C36904E3856891425B89B15D53600F6A61DA_RuntimeMethod_var, L_18);
		Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * L_20 = (Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD *)il2cpp_codegen_object_new(Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD_il2cpp_TypeInfo_var);
		Action_1__ctor_mFEB000BCBDAB6DE953B2B50CD113641DCF601890(L_20, __this, (intptr_t)((intptr_t)IAPButton_OnTransactionsRestored_mBDBFA6BAC6A064FF152A33C344CE3DB9FC295F56_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mFEB000BCBDAB6DE953B2B50CD113641DCF601890_RuntimeMethod_var);
		NullCheck(L_19);
		InterfaceActionInvoker1< Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * >::Invoke(0 /* System.Void UnityEngine.Purchasing.ISamsungAppsExtensions::RestoreTransactions(System.Action`1<System.Boolean>) */, ISamsungAppsExtensions_tB0CEAD96F8AB0537F5FDEE5E40B29C197CF94F78_il2cpp_TypeInfo_var, L_19, L_20);
		// }
		return;
	}

IL_00ad:
	{
		// else if (Application.platform == RuntimePlatform.Android &&
		//          StandardPurchasingModule.Instance().appStore == AppStore.CloudMoolah)
		int32_t L_21 = Application_get_platform_m6AFFFF3B077F4D5CA1F71CF14ABA86A83FC71672(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_21) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_00e4;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(StandardPurchasingModule_t45E3E7F3D0D8CE91AD85D7BE5B29CBA2235B3BFA_il2cpp_TypeInfo_var);
		StandardPurchasingModule_t45E3E7F3D0D8CE91AD85D7BE5B29CBA2235B3BFA * L_22 = StandardPurchasingModule_Instance_m14764772DB11E71EE7FE080CC8D9F86A3CC3BA83(/*hidden argument*/NULL);
		NullCheck(L_22);
		int32_t L_23 = StandardPurchasingModule_get_appStore_mCAA2ED4CDF716897820F7EC50FF1D7985D710E1C(L_22, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_23) == ((uint32_t)3))))
		{
			goto IL_00e4;
		}
	}
	{
		// CodelessIAPStoreListener.Instance.ExtensionProvider.GetExtension<IMoolahExtension>()
		//     .RestoreTransactionID((restoreTransactionIDState) =>
		//     {
		//         OnTransactionsRestored(
		//             restoreTransactionIDState != RestoreTransactionIDState.RestoreFailed &&
		//             restoreTransactionIDState != RestoreTransactionIDState.NotKnown);
		//     });
		CodelessIAPStoreListener_tC0C269A13BAE3B9F9AA24455FAB72340347F7303 * L_24 = CodelessIAPStoreListener_get_Instance_m6D6C71B6D75F21C64499CE46A23DDC572B3DACAE(/*hidden argument*/NULL);
		NullCheck(L_24);
		RuntimeObject* L_25 = CodelessIAPStoreListener_get_ExtensionProvider_m6EF90D4617310AF8D82CF0372F0E8E3755B366B4_inline(L_24, /*hidden argument*/NULL);
		NullCheck(L_25);
		RuntimeObject* L_26 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IExtensionProvider_GetExtension_TisIMoolahExtension_t7A27B23948AF3F5FF412659F8D18FB1623B9BE01_m5C341108FB64032C49BAC0C5724C2A770D45EDBE_RuntimeMethod_var, L_25);
		Action_1_t00DFDFD25560DD25965E88CC7C430D0703EFA9BF * L_27 = (Action_1_t00DFDFD25560DD25965E88CC7C430D0703EFA9BF *)il2cpp_codegen_object_new(Action_1_t00DFDFD25560DD25965E88CC7C430D0703EFA9BF_il2cpp_TypeInfo_var);
		Action_1__ctor_mBBB5E822230C695A305CE70D76A7C103CAFE368E(L_27, __this, (intptr_t)((intptr_t)IAPButton_U3CRestoreU3Eb__15_0_m50057B9A7AC4EB7A5DA32F11C6EF9EFB91857307_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mBBB5E822230C695A305CE70D76A7C103CAFE368E_RuntimeMethod_var);
		NullCheck(L_26);
		InterfaceActionInvoker1< Action_1_t00DFDFD25560DD25965E88CC7C430D0703EFA9BF * >::Invoke(0 /* System.Void UnityEngine.Purchasing.IMoolahExtension::RestoreTransactionID(System.Action`1<UnityEngine.Purchasing.RestoreTransactionIDState>) */, IMoolahExtension_t7A27B23948AF3F5FF412659F8D18FB1623B9BE01_il2cpp_TypeInfo_var, L_26, L_27);
		// }
		return;
	}

IL_00e4:
	{
		// Debug.LogWarning(Application.platform.ToString() +
		//                  " is not a supported platform for the Codeless IAP restore button");
		int32_t L_28 = Application_get_platform_m6AFFFF3B077F4D5CA1F71CF14ABA86A83FC71672(/*hidden argument*/NULL);
		V_0 = L_28;
		RuntimeObject * L_29 = Box(RuntimePlatform_tD5F5737C1BBBCBB115EB104DF2B7876387E80132_il2cpp_TypeInfo_var, (&V_0));
		NullCheck(L_29);
		String_t* L_30 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_29);
		V_0 = *(int32_t*)UnBox(L_29);
		String_t* L_31 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_30, _stringLiteral6EF070A5ED4DDDD1793652EFC80D6D544EB6C38D, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(L_31, /*hidden argument*/NULL);
	}

IL_0106:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Purchasing.IAPButton::OnTransactionsRestored(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAPButton_OnTransactionsRestored_mBDBFA6BAC6A064FF152A33C344CE3DB9FC295F56 (IAPButton_t1BDE7DF230194C47716F1AD10806094D8DE39CD9 * __this, bool ___success0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAPButton_OnTransactionsRestored_mBDBFA6BAC6A064FF152A33C344CE3DB9FC295F56_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Transactions restored: " + success);
		String_t* L_0 = Boolean_ToString_m62D1EFD5F6D5F6B6AF0D14A07BF5741C94413301((bool*)(&___success0), /*hidden argument*/NULL);
		String_t* L_1 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteralDFBCD5AFAAB0A9BFA2ED2D6CB5298FAE29947311, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.Purchasing.PurchaseProcessingResult UnityEngine.Purchasing.IAPButton::ProcessPurchase(UnityEngine.Purchasing.PurchaseEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IAPButton_ProcessPurchase_mAD1C2C30A543271D9011A0612E37EA62714B2C09 (IAPButton_t1BDE7DF230194C47716F1AD10806094D8DE39CD9 * __this, PurchaseEventArgs_tF6E04BFD5492F5F57309FFBB2415EB26E5B88C04 * ___e0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAPButton_ProcessPurchase_mAD1C2C30A543271D9011A0612E37EA62714B2C09_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(string.Format("IAPButton.ProcessPurchase(PurchaseEventArgs {0} - {1})", e,
		//     e.purchasedProduct.definition.id));
		PurchaseEventArgs_tF6E04BFD5492F5F57309FFBB2415EB26E5B88C04 * L_0 = ___e0;
		PurchaseEventArgs_tF6E04BFD5492F5F57309FFBB2415EB26E5B88C04 * L_1 = ___e0;
		NullCheck(L_1);
		Product_t830A133A97BEA12C3CD696853098A295D99A6DE4 * L_2 = PurchaseEventArgs_get_purchasedProduct_mB26BCEF9CD45B84DBF55A5C6FC50AF611B6AD6A2_inline(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * L_3 = Product_get_definition_mFA1889844E23D37A700C2EA6659EE3BBF1E17C58_inline(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		String_t* L_4 = ProductDefinition_get_id_mD5C2A9C1016245C99EB67B74DFC32ECDC8512468_inline(L_3, /*hidden argument*/NULL);
		String_t* L_5 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteralCD1528EFE2EDFC7665A6FAD8D2C526AE4FEDFD74, L_0, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_5, /*hidden argument*/NULL);
		// onPurchaseComplete.Invoke(e.purchasedProduct);
		OnPurchaseCompletedEvent_tE1F6B944B4FED7F7744C50608F2A02E711C82BB5 * L_6 = __this->get_onPurchaseComplete_7();
		PurchaseEventArgs_tF6E04BFD5492F5F57309FFBB2415EB26E5B88C04 * L_7 = ___e0;
		NullCheck(L_7);
		Product_t830A133A97BEA12C3CD696853098A295D99A6DE4 * L_8 = PurchaseEventArgs_get_purchasedProduct_mB26BCEF9CD45B84DBF55A5C6FC50AF611B6AD6A2_inline(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		UnityEvent_1_Invoke_m37FB3F6A4E114515E7CE57F1DEA0C723CDAB4D01(L_6, L_8, /*hidden argument*/UnityEvent_1_Invoke_m37FB3F6A4E114515E7CE57F1DEA0C723CDAB4D01_RuntimeMethod_var);
		// return (consumePurchase) ? PurchaseProcessingResult.Complete : PurchaseProcessingResult.Pending;
		bool L_9 = __this->get_consumePurchase_6();
		if (L_9)
		{
			goto IL_003b;
		}
	}
	{
		return (int32_t)(1);
	}

IL_003b:
	{
		return (int32_t)(0);
	}
}
// System.Void UnityEngine.Purchasing.IAPButton::OnPurchaseFailed(UnityEngine.Purchasing.Product,UnityEngine.Purchasing.PurchaseFailureReason)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAPButton_OnPurchaseFailed_mAF5155D49340CFD9FCA17BD0DAA17CD27037BA57 (IAPButton_t1BDE7DF230194C47716F1AD10806094D8DE39CD9 * __this, Product_t830A133A97BEA12C3CD696853098A295D99A6DE4 * ___product0, int32_t ___reason1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAPButton_OnPurchaseFailed_mAF5155D49340CFD9FCA17BD0DAA17CD27037BA57_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(string.Format("IAPButton.OnPurchaseFailed(Product {0}, PurchaseFailureReason {1})", product,
		//     reason));
		Product_t830A133A97BEA12C3CD696853098A295D99A6DE4 * L_0 = ___product0;
		int32_t L_1 = ___reason1;
		int32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(PurchaseFailureReason_t42EC65C1103B27F82198DC42C8D96C1A14ED7432_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteral9FBE9D2BA04ECD309F85D869051049DA69EC8A05, L_0, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_4, /*hidden argument*/NULL);
		// onPurchaseFailed.Invoke(product, reason);
		OnPurchaseFailedEvent_t12785B755627F44DD9D18B1141669474E76083E9 * L_5 = __this->get_onPurchaseFailed_8();
		Product_t830A133A97BEA12C3CD696853098A295D99A6DE4 * L_6 = ___product0;
		int32_t L_7 = ___reason1;
		NullCheck(L_5);
		UnityEvent_2_Invoke_m7FF7EA6A64C8D4A95F6ACA03D682C7EAFBA58014(L_5, L_6, L_7, /*hidden argument*/UnityEvent_2_Invoke_m7FF7EA6A64C8D4A95F6ACA03D682C7EAFBA58014_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.Purchasing.IAPButton::UpdateText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAPButton_UpdateText_m38D5E31DB4E01F0E1419174A6309186AEAB348DD (IAPButton_t1BDE7DF230194C47716F1AD10806094D8DE39CD9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAPButton_UpdateText_m38D5E31DB4E01F0E1419174A6309186AEAB348DD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Product_t830A133A97BEA12C3CD696853098A295D99A6DE4 * V_0 = NULL;
	{
		// var product = CodelessIAPStoreListener.Instance.GetProduct(productId);
		CodelessIAPStoreListener_tC0C269A13BAE3B9F9AA24455FAB72340347F7303 * L_0 = CodelessIAPStoreListener_get_Instance_m6D6C71B6D75F21C64499CE46A23DDC572B3DACAE(/*hidden argument*/NULL);
		String_t* L_1 = __this->get_productId_4();
		NullCheck(L_0);
		Product_t830A133A97BEA12C3CD696853098A295D99A6DE4 * L_2 = CodelessIAPStoreListener_GetProduct_mBED67C9993F342B75FA1A6C22E950446FB93B442(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// if (product != null)
		Product_t830A133A97BEA12C3CD696853098A295D99A6DE4 * L_3 = V_0;
		if (!L_3)
		{
			goto IL_0080;
		}
	}
	{
		// if (titleText != null)
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_4 = __this->get_titleText_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_4, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0038;
		}
	}
	{
		// titleText.text = product.metadata.localizedTitle;
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_6 = __this->get_titleText_9();
		Product_t830A133A97BEA12C3CD696853098A295D99A6DE4 * L_7 = V_0;
		NullCheck(L_7);
		ProductMetadata_t1CAA912963F8B24B34F53CCF29A6E0BD89B33B48 * L_8 = Product_get_metadata_mE9010636C2A74FD850A4AE25DFD45A249F80224E_inline(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		String_t* L_9 = ProductMetadata_get_localizedTitle_m34F35831026B0CEA68804AC38BB7E9FE17791E8A_inline(L_8, /*hidden argument*/NULL);
		NullCheck(L_6);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, L_9);
	}

IL_0038:
	{
		// if (descriptionText != null)
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_10 = __this->get_descriptionText_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_11 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_10, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_005c;
		}
	}
	{
		// descriptionText.text = product.metadata.localizedDescription;
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_12 = __this->get_descriptionText_10();
		Product_t830A133A97BEA12C3CD696853098A295D99A6DE4 * L_13 = V_0;
		NullCheck(L_13);
		ProductMetadata_t1CAA912963F8B24B34F53CCF29A6E0BD89B33B48 * L_14 = Product_get_metadata_mE9010636C2A74FD850A4AE25DFD45A249F80224E_inline(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		String_t* L_15 = ProductMetadata_get_localizedDescription_m8EAF1BC690AD022C519087978423B5DE0081E741_inline(L_14, /*hidden argument*/NULL);
		NullCheck(L_12);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_12, L_15);
	}

IL_005c:
	{
		// if (priceText != null)
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_16 = __this->get_priceText_11();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_17 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_16, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_0080;
		}
	}
	{
		// priceText.text = product.metadata.localizedPriceString;
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_18 = __this->get_priceText_11();
		Product_t830A133A97BEA12C3CD696853098A295D99A6DE4 * L_19 = V_0;
		NullCheck(L_19);
		ProductMetadata_t1CAA912963F8B24B34F53CCF29A6E0BD89B33B48 * L_20 = Product_get_metadata_mE9010636C2A74FD850A4AE25DFD45A249F80224E_inline(L_19, /*hidden argument*/NULL);
		NullCheck(L_20);
		String_t* L_21 = ProductMetadata_get_localizedPriceString_mFFE7F069FE5E8DC6BD4CADDF3D9AEC066405795B_inline(L_20, /*hidden argument*/NULL);
		NullCheck(L_18);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_18, L_21);
	}

IL_0080:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Purchasing.IAPButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAPButton__ctor_mC1B0427B2499B46AA068442E1C7F4C464A802582 (IAPButton_t1BDE7DF230194C47716F1AD10806094D8DE39CD9 * __this, const RuntimeMethod* method)
{
	{
		// public bool consumePurchase = true;
		__this->set_consumePurchase_6((bool)1);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.IAPButton::<Restore>b__15_0(UnityEngine.Purchasing.RestoreTransactionIDState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAPButton_U3CRestoreU3Eb__15_0_m50057B9A7AC4EB7A5DA32F11C6EF9EFB91857307 (IAPButton_t1BDE7DF230194C47716F1AD10806094D8DE39CD9 * __this, int32_t ___restoreTransactionIDState0, const RuntimeMethod* method)
{
	IAPButton_t1BDE7DF230194C47716F1AD10806094D8DE39CD9 * G_B2_0 = NULL;
	IAPButton_t1BDE7DF230194C47716F1AD10806094D8DE39CD9 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	IAPButton_t1BDE7DF230194C47716F1AD10806094D8DE39CD9 * G_B3_1 = NULL;
	{
		// OnTransactionsRestored(
		//     restoreTransactionIDState != RestoreTransactionIDState.RestoreFailed &&
		//     restoreTransactionIDState != RestoreTransactionIDState.NotKnown);
		int32_t L_0 = ___restoreTransactionIDState0;
		G_B1_0 = __this;
		if ((((int32_t)L_0) == ((int32_t)2)))
		{
			G_B2_0 = __this;
			goto IL_000e;
		}
	}
	{
		int32_t L_1 = ___restoreTransactionIDState0;
		G_B3_0 = ((((int32_t)((((int32_t)L_1) == ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		G_B3_1 = G_B1_0;
		goto IL_000f;
	}

IL_000e:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_000f:
	{
		NullCheck(G_B3_1);
		IAPButton_OnTransactionsRestored_mBDBFA6BAC6A064FF152A33C344CE3DB9FC295F56(G_B3_1, (bool)G_B3_0, /*hidden argument*/NULL);
		// });
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
// System.Void UnityEngine.Purchasing.IAPButton_OnPurchaseCompletedEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnPurchaseCompletedEvent__ctor_mB0EFBE5708233A4554D740D501EECBF79BCDFCFB (OnPurchaseCompletedEvent_tE1F6B944B4FED7F7744C50608F2A02E711C82BB5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OnPurchaseCompletedEvent__ctor_mB0EFBE5708233A4554D740D501EECBF79BCDFCFB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m70AC62AC7448380334A412BB5B3EB88C9B3E7742(__this, /*hidden argument*/UnityEvent_1__ctor_m70AC62AC7448380334A412BB5B3EB88C9B3E7742_RuntimeMethod_var);
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
// System.Void UnityEngine.Purchasing.IAPButton_OnPurchaseFailedEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnPurchaseFailedEvent__ctor_mA0FED213F549032BF3AA77F07268FDE5748F9C99 (OnPurchaseFailedEvent_t12785B755627F44DD9D18B1141669474E76083E9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OnPurchaseFailedEvent__ctor_mA0FED213F549032BF3AA77F07268FDE5748F9C99_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_2__ctor_m747C301BF8D8E850C08B922050B68208749CDB4D(__this, /*hidden argument*/UnityEvent_2__ctor_m747C301BF8D8E850C08B922050B68208749CDB4D_RuntimeMethod_var);
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
// System.Void UnityEngine.Purchasing.IAPConfigurationHelper::PopulateConfigurationBuilder(UnityEngine.Purchasing.ConfigurationBuilder&,UnityEngine.Purchasing.ProductCatalog)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAPConfigurationHelper_PopulateConfigurationBuilder_m46F5A6A79909F4993BF47D6C3D604FA18BC3AAEC (ConfigurationBuilder_t18C1B421FE4071AD4DB4A340A2A8D51AB090F3AE ** ___builder0, ProductCatalog_t514386D43815F0DD3BD3695ABBB1BC66351D569E * ___catalog1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAPConfigurationHelper_PopulateConfigurationBuilder_m46F5A6A79909F4993BF47D6C3D604FA18BC3AAEC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	ProductCatalogItem_t0CDB4E1B6E5692F115DBC421DA38BFC6BC3B3356 * V_1 = NULL;
	IDs_t978DE239966E5906480541F9982EA9624943DA53 * V_2 = NULL;
	List_1_t3BB189095B85DE5B71713AA7779513A84EB7EB9A * V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	StoreID_t65762FC3162E0686D56CB880A86E7FEFEFDFCC80 * V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	ProductCatalogPayout_t4DFA2A14A2D8FFE1FD41C34DB603C2C1E805CE22 * V_7 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// foreach (var product in catalog.allValidProducts)
		ProductCatalog_t514386D43815F0DD3BD3695ABBB1BC66351D569E * L_0 = ___catalog1;
		NullCheck(L_0);
		RuntimeObject* L_1 = ProductCatalog_get_allValidProducts_mCB943E62C6A2C4A650EAFC4581FC4F9CDB52735D(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		RuntimeObject* L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<UnityEngine.Purchasing.ProductCatalogItem>::GetEnumerator() */, IEnumerable_1_t5DD75706A9E736D653B9C6D9400DD948E0B41764_il2cpp_TypeInfo_var, L_1);
		V_0 = L_2;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00f1;
		}

IL_0011:
		{
			// foreach (var product in catalog.allValidProducts)
			RuntimeObject* L_3 = V_0;
			NullCheck(L_3);
			ProductCatalogItem_t0CDB4E1B6E5692F115DBC421DA38BFC6BC3B3356 * L_4 = InterfaceFuncInvoker0< ProductCatalogItem_t0CDB4E1B6E5692F115DBC421DA38BFC6BC3B3356 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<UnityEngine.Purchasing.ProductCatalogItem>::get_Current() */, IEnumerator_1_tF1A2E2FA355AB63140A3E3135FEE6F002250CBDB_il2cpp_TypeInfo_var, L_3);
			V_1 = L_4;
			// IDs ids = null;
			V_2 = (IDs_t978DE239966E5906480541F9982EA9624943DA53 *)NULL;
			// if (product.allStoreIDs.Count > 0)
			ProductCatalogItem_t0CDB4E1B6E5692F115DBC421DA38BFC6BC3B3356 * L_5 = V_1;
			NullCheck(L_5);
			RuntimeObject* L_6 = ProductCatalogItem_get_allStoreIDs_mEA887C90D9B0D4C38AE4C6172CB2C27117669E96(L_5, /*hidden argument*/NULL);
			NullCheck(L_6);
			int32_t L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Purchasing.StoreID>::get_Count() */, ICollection_1_t6C86993812C8B7A8E4D0ECB910B56C136FE21425_il2cpp_TypeInfo_var, L_6);
			if ((((int32_t)L_7) <= ((int32_t)0)))
			{
				goto IL_007a;
			}
		}

IL_0028:
		{
			// ids = new IDs();
			IDs_t978DE239966E5906480541F9982EA9624943DA53 * L_8 = (IDs_t978DE239966E5906480541F9982EA9624943DA53 *)il2cpp_codegen_object_new(IDs_t978DE239966E5906480541F9982EA9624943DA53_il2cpp_TypeInfo_var);
			IDs__ctor_mE662F28FC7BBA7E031EF4CCD8841D3C811A67400(L_8, /*hidden argument*/NULL);
			V_2 = L_8;
			// foreach (var storeID in product.allStoreIDs)
			ProductCatalogItem_t0CDB4E1B6E5692F115DBC421DA38BFC6BC3B3356 * L_9 = V_1;
			NullCheck(L_9);
			RuntimeObject* L_10 = ProductCatalogItem_get_allStoreIDs_mEA887C90D9B0D4C38AE4C6172CB2C27117669E96(L_9, /*hidden argument*/NULL);
			NullCheck(L_10);
			RuntimeObject* L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<UnityEngine.Purchasing.StoreID>::GetEnumerator() */, IEnumerable_1_tA494AF7DA4EBE8B2D0C63BB213489DFDECC7DF05_il2cpp_TypeInfo_var, L_10);
			V_4 = L_11;
		}

IL_003b:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0063;
			}

IL_003d:
			{
				// foreach (var storeID in product.allStoreIDs)
				RuntimeObject* L_12 = V_4;
				NullCheck(L_12);
				StoreID_t65762FC3162E0686D56CB880A86E7FEFEFDFCC80 * L_13 = InterfaceFuncInvoker0< StoreID_t65762FC3162E0686D56CB880A86E7FEFEFDFCC80 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<UnityEngine.Purchasing.StoreID>::get_Current() */, IEnumerator_1_tBDA50FE4985795B8AD8FDC00241F7AEE02E72959_il2cpp_TypeInfo_var, L_12);
				V_5 = L_13;
				// ids.Add(storeID.id, storeID.store);
				IDs_t978DE239966E5906480541F9982EA9624943DA53 * L_14 = V_2;
				StoreID_t65762FC3162E0686D56CB880A86E7FEFEFDFCC80 * L_15 = V_5;
				NullCheck(L_15);
				String_t* L_16 = L_15->get_id_1();
				StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_17 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)1);
				StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_18 = L_17;
				StoreID_t65762FC3162E0686D56CB880A86E7FEFEFDFCC80 * L_19 = V_5;
				NullCheck(L_19);
				String_t* L_20 = L_19->get_store_0();
				NullCheck(L_18);
				ArrayElementTypeCheck (L_18, L_20);
				(L_18)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_20);
				NullCheck(L_14);
				IDs_Add_m643176935CD396E4A45C374B08A67C942C6D72BF(L_14, L_16, L_18, /*hidden argument*/NULL);
			}

IL_0063:
			{
				// foreach (var storeID in product.allStoreIDs)
				RuntimeObject* L_21 = V_4;
				NullCheck(L_21);
				bool L_22 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_21);
				if (L_22)
				{
					goto IL_003d;
				}
			}

IL_006c:
			{
				IL2CPP_LEAVE(0x7A, FINALLY_006e);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_006e;
		}

FINALLY_006e:
		{ // begin finally (depth: 2)
			{
				RuntimeObject* L_23 = V_4;
				if (!L_23)
				{
					goto IL_0079;
				}
			}

IL_0072:
			{
				RuntimeObject* L_24 = V_4;
				NullCheck(L_24);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_24);
			}

IL_0079:
			{
				IL2CPP_END_FINALLY(110)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(110)
		{
			IL2CPP_JUMP_TBL(0x7A, IL_007a)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_007a:
		{
			// var payoutDefinitions = new List<PayoutDefinition>();
			List_1_t3BB189095B85DE5B71713AA7779513A84EB7EB9A * L_25 = (List_1_t3BB189095B85DE5B71713AA7779513A84EB7EB9A *)il2cpp_codegen_object_new(List_1_t3BB189095B85DE5B71713AA7779513A84EB7EB9A_il2cpp_TypeInfo_var);
			List_1__ctor_mBC8BE62A8B8CC489BE3F638DB531F0803EA2CE45(L_25, /*hidden argument*/List_1__ctor_mBC8BE62A8B8CC489BE3F638DB531F0803EA2CE45_RuntimeMethod_var);
			V_3 = L_25;
			// foreach (var payout in product.Payouts) {
			ProductCatalogItem_t0CDB4E1B6E5692F115DBC421DA38BFC6BC3B3356 * L_26 = V_1;
			NullCheck(L_26);
			RuntimeObject* L_27 = ProductCatalogItem_get_Payouts_mDA4220F6067D47723E1AC0F033657985FC738819(L_26, /*hidden argument*/NULL);
			NullCheck(L_27);
			RuntimeObject* L_28 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<UnityEngine.Purchasing.ProductCatalogPayout>::GetEnumerator() */, IEnumerable_1_tE030174E3F068E195E7F07D0401AA99236EDCC4E_il2cpp_TypeInfo_var, L_27);
			V_6 = L_28;
		}

IL_008d:
		try
		{ // begin try (depth: 2)
			{
				goto IL_00bf;
			}

IL_008f:
			{
				// foreach (var payout in product.Payouts) {
				RuntimeObject* L_29 = V_6;
				NullCheck(L_29);
				ProductCatalogPayout_t4DFA2A14A2D8FFE1FD41C34DB603C2C1E805CE22 * L_30 = InterfaceFuncInvoker0< ProductCatalogPayout_t4DFA2A14A2D8FFE1FD41C34DB603C2C1E805CE22 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<UnityEngine.Purchasing.ProductCatalogPayout>::get_Current() */, IEnumerator_1_tCDFB8CE6DBF51243627BA58F76C3CF7F016E3357_il2cpp_TypeInfo_var, L_29);
				V_7 = L_30;
				// payoutDefinitions.Add(new PayoutDefinition(payout.typeString, payout.subtype, payout.quantity, payout.data));
				List_1_t3BB189095B85DE5B71713AA7779513A84EB7EB9A * L_31 = V_3;
				ProductCatalogPayout_t4DFA2A14A2D8FFE1FD41C34DB603C2C1E805CE22 * L_32 = V_7;
				NullCheck(L_32);
				String_t* L_33 = ProductCatalogPayout_get_typeString_mFD79AC356E449C73E772C4728E97C201FF61AAB9(L_32, /*hidden argument*/NULL);
				ProductCatalogPayout_t4DFA2A14A2D8FFE1FD41C34DB603C2C1E805CE22 * L_34 = V_7;
				NullCheck(L_34);
				String_t* L_35 = ProductCatalogPayout_get_subtype_m4699F24F2BCE46DAD79FA8F4698BC747DCC5B7E6(L_34, /*hidden argument*/NULL);
				ProductCatalogPayout_t4DFA2A14A2D8FFE1FD41C34DB603C2C1E805CE22 * L_36 = V_7;
				NullCheck(L_36);
				double L_37 = ProductCatalogPayout_get_quantity_mB3C2F4F3A458A8F29D368768EF1B923C59349B4F(L_36, /*hidden argument*/NULL);
				ProductCatalogPayout_t4DFA2A14A2D8FFE1FD41C34DB603C2C1E805CE22 * L_38 = V_7;
				NullCheck(L_38);
				String_t* L_39 = ProductCatalogPayout_get_data_mACF2246F3367C6682174E1E7586D670311BA0A4D(L_38, /*hidden argument*/NULL);
				PayoutDefinition_tE787916C6F389E12B8C2F10F3A87CD79B6C2A273 * L_40 = (PayoutDefinition_tE787916C6F389E12B8C2F10F3A87CD79B6C2A273 *)il2cpp_codegen_object_new(PayoutDefinition_tE787916C6F389E12B8C2F10F3A87CD79B6C2A273_il2cpp_TypeInfo_var);
				PayoutDefinition__ctor_m43BA8E18743F33BB5C40AC65DB0C81EB2580C70F(L_40, L_33, L_35, L_37, L_39, /*hidden argument*/NULL);
				NullCheck(L_31);
				List_1_Add_m414D1DDDB9D6064807437A191A14896072F11D28(L_31, L_40, /*hidden argument*/List_1_Add_m414D1DDDB9D6064807437A191A14896072F11D28_RuntimeMethod_var);
			}

IL_00bf:
			{
				// foreach (var payout in product.Payouts) {
				RuntimeObject* L_41 = V_6;
				NullCheck(L_41);
				bool L_42 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_41);
				if (L_42)
				{
					goto IL_008f;
				}
			}

IL_00c8:
			{
				IL2CPP_LEAVE(0xD6, FINALLY_00ca);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_00ca;
		}

FINALLY_00ca:
		{ // begin finally (depth: 2)
			{
				RuntimeObject* L_43 = V_6;
				if (!L_43)
				{
					goto IL_00d5;
				}
			}

IL_00ce:
			{
				RuntimeObject* L_44 = V_6;
				NullCheck(L_44);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_44);
			}

IL_00d5:
			{
				IL2CPP_END_FINALLY(202)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(202)
		{
			IL2CPP_JUMP_TBL(0xD6, IL_00d6)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_00d6:
		{
			// builder.AddProduct(product.id, product.type, ids, payoutDefinitions.ToArray());
			ConfigurationBuilder_t18C1B421FE4071AD4DB4A340A2A8D51AB090F3AE ** L_45 = ___builder0;
			ConfigurationBuilder_t18C1B421FE4071AD4DB4A340A2A8D51AB090F3AE * L_46 = *((ConfigurationBuilder_t18C1B421FE4071AD4DB4A340A2A8D51AB090F3AE **)L_45);
			ProductCatalogItem_t0CDB4E1B6E5692F115DBC421DA38BFC6BC3B3356 * L_47 = V_1;
			NullCheck(L_47);
			String_t* L_48 = L_47->get_id_0();
			ProductCatalogItem_t0CDB4E1B6E5692F115DBC421DA38BFC6BC3B3356 * L_49 = V_1;
			NullCheck(L_49);
			int32_t L_50 = L_49->get_type_1();
			IDs_t978DE239966E5906480541F9982EA9624943DA53 * L_51 = V_2;
			List_1_t3BB189095B85DE5B71713AA7779513A84EB7EB9A * L_52 = V_3;
			NullCheck(L_52);
			PayoutDefinitionU5BU5D_tBED8269F285FBB455D663A4434785D666963059A* L_53 = List_1_ToArray_mE2EEA005F6F94136499538849FEEA877A2B6D778(L_52, /*hidden argument*/List_1_ToArray_mE2EEA005F6F94136499538849FEEA877A2B6D778_RuntimeMethod_var);
			NullCheck(L_46);
			ConfigurationBuilder_AddProduct_mCD5F9D3B82AEB4B53DC758BA591ED6E8EA74E64D(L_46, L_48, L_50, L_51, (RuntimeObject*)(RuntimeObject*)L_53, /*hidden argument*/NULL);
		}

IL_00f1:
		{
			// foreach (var product in catalog.allValidProducts)
			RuntimeObject* L_54 = V_0;
			NullCheck(L_54);
			bool L_55 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_54);
			if (L_55)
			{
				goto IL_0011;
			}
		}

IL_00fc:
		{
			IL2CPP_LEAVE(0x108, FINALLY_00fe);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00fe;
	}

FINALLY_00fe:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_56 = V_0;
			if (!L_56)
			{
				goto IL_0107;
			}
		}

IL_0101:
		{
			RuntimeObject* L_57 = V_0;
			NullCheck(L_57);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_57);
		}

IL_0107:
		{
			IL2CPP_END_FINALLY(254)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(254)
	{
		IL2CPP_JUMP_TBL(0x108, IL_0108)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0108:
	{
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
// System.Void UnityEngine.Purchasing.IAPListener::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAPListener_OnEnable_m535E012E1EAC3051348502423B242A1C0446E3ED (IAPListener_tA8E5B3850C466201C221D95CF74A9BEA7DC74E61 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAPListener_OnEnable_m535E012E1EAC3051348502423B242A1C0446E3ED_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (dontDestroyOnLoad)
		bool L_0 = __this->get_dontDestroyOnLoad_5();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// DontDestroyOnLoad(gameObject);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4DC90770AD6084E4B1B8489C6B41205DC020C207(L_1, /*hidden argument*/NULL);
	}

IL_0013:
	{
		// CodelessIAPStoreListener.Instance.AddListener(this);
		CodelessIAPStoreListener_tC0C269A13BAE3B9F9AA24455FAB72340347F7303 * L_2 = CodelessIAPStoreListener_get_Instance_m6D6C71B6D75F21C64499CE46A23DDC572B3DACAE(/*hidden argument*/NULL);
		NullCheck(L_2);
		CodelessIAPStoreListener_AddListener_mEE32769E704BBC2E4F66C4F51D102908E5ECF48E(L_2, __this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Purchasing.IAPListener::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAPListener_OnDisable_mE81C7A9F2FD19A372C1717898B25397CC6ABE9C1 (IAPListener_tA8E5B3850C466201C221D95CF74A9BEA7DC74E61 * __this, const RuntimeMethod* method)
{
	{
		// CodelessIAPStoreListener.Instance.RemoveListener(this);
		CodelessIAPStoreListener_tC0C269A13BAE3B9F9AA24455FAB72340347F7303 * L_0 = CodelessIAPStoreListener_get_Instance_m6D6C71B6D75F21C64499CE46A23DDC572B3DACAE(/*hidden argument*/NULL);
		NullCheck(L_0);
		CodelessIAPStoreListener_RemoveListener_m3432F9A1A1E37888321E11FBA4A49EB8F97A5552(L_0, __this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.Purchasing.PurchaseProcessingResult UnityEngine.Purchasing.IAPListener::ProcessPurchase(UnityEngine.Purchasing.PurchaseEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IAPListener_ProcessPurchase_mE08DC15E1CC263B6B6C74248B2B342339632FC8A (IAPListener_tA8E5B3850C466201C221D95CF74A9BEA7DC74E61 * __this, PurchaseEventArgs_tF6E04BFD5492F5F57309FFBB2415EB26E5B88C04 * ___e0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAPListener_ProcessPurchase_mE08DC15E1CC263B6B6C74248B2B342339632FC8A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(string.Format("IAPListener.ProcessPurchase(PurchaseEventArgs {0} - {1})", e,
		//     e.purchasedProduct.definition.id));
		PurchaseEventArgs_tF6E04BFD5492F5F57309FFBB2415EB26E5B88C04 * L_0 = ___e0;
		PurchaseEventArgs_tF6E04BFD5492F5F57309FFBB2415EB26E5B88C04 * L_1 = ___e0;
		NullCheck(L_1);
		Product_t830A133A97BEA12C3CD696853098A295D99A6DE4 * L_2 = PurchaseEventArgs_get_purchasedProduct_mB26BCEF9CD45B84DBF55A5C6FC50AF611B6AD6A2_inline(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * L_3 = Product_get_definition_mFA1889844E23D37A700C2EA6659EE3BBF1E17C58_inline(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		String_t* L_4 = ProductDefinition_get_id_mD5C2A9C1016245C99EB67B74DFC32ECDC8512468_inline(L_3, /*hidden argument*/NULL);
		String_t* L_5 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteralF1A341F41401BE96F54E268141C20EB3C4CF43F8, L_0, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_5, /*hidden argument*/NULL);
		// onPurchaseComplete.Invoke(e.purchasedProduct);
		OnPurchaseCompletedEvent_t69F2AA7C2E6305881C5030EEE41E4EBCD72B08C4 * L_6 = __this->get_onPurchaseComplete_6();
		PurchaseEventArgs_tF6E04BFD5492F5F57309FFBB2415EB26E5B88C04 * L_7 = ___e0;
		NullCheck(L_7);
		Product_t830A133A97BEA12C3CD696853098A295D99A6DE4 * L_8 = PurchaseEventArgs_get_purchasedProduct_mB26BCEF9CD45B84DBF55A5C6FC50AF611B6AD6A2_inline(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		UnityEvent_1_Invoke_m37FB3F6A4E114515E7CE57F1DEA0C723CDAB4D01(L_6, L_8, /*hidden argument*/UnityEvent_1_Invoke_m37FB3F6A4E114515E7CE57F1DEA0C723CDAB4D01_RuntimeMethod_var);
		// return (consumePurchase) ? PurchaseProcessingResult.Complete : PurchaseProcessingResult.Pending;
		bool L_9 = __this->get_consumePurchase_4();
		if (L_9)
		{
			goto IL_003b;
		}
	}
	{
		return (int32_t)(1);
	}

IL_003b:
	{
		return (int32_t)(0);
	}
}
// System.Void UnityEngine.Purchasing.IAPListener::OnPurchaseFailed(UnityEngine.Purchasing.Product,UnityEngine.Purchasing.PurchaseFailureReason)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAPListener_OnPurchaseFailed_mCBB1A7EBFD259CC0DF60A263E96A2B10DFD5FAE1 (IAPListener_tA8E5B3850C466201C221D95CF74A9BEA7DC74E61 * __this, Product_t830A133A97BEA12C3CD696853098A295D99A6DE4 * ___product0, int32_t ___reason1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAPListener_OnPurchaseFailed_mCBB1A7EBFD259CC0DF60A263E96A2B10DFD5FAE1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(string.Format("IAPListener.OnPurchaseFailed(Product {0}, PurchaseFailureReason {1})", product,
		//     reason));
		Product_t830A133A97BEA12C3CD696853098A295D99A6DE4 * L_0 = ___product0;
		int32_t L_1 = ___reason1;
		int32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(PurchaseFailureReason_t42EC65C1103B27F82198DC42C8D96C1A14ED7432_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteral4818CDB71856B7EF38922792D99BA8CE7B4C845E, L_0, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_4, /*hidden argument*/NULL);
		// onPurchaseFailed.Invoke(product, reason);
		OnPurchaseFailedEvent_tBE41AD846CDA9B343E1C212C291326AF0B98B026 * L_5 = __this->get_onPurchaseFailed_7();
		Product_t830A133A97BEA12C3CD696853098A295D99A6DE4 * L_6 = ___product0;
		int32_t L_7 = ___reason1;
		NullCheck(L_5);
		UnityEvent_2_Invoke_m7FF7EA6A64C8D4A95F6ACA03D682C7EAFBA58014(L_5, L_6, L_7, /*hidden argument*/UnityEvent_2_Invoke_m7FF7EA6A64C8D4A95F6ACA03D682C7EAFBA58014_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.Purchasing.IAPListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAPListener__ctor_m7303E8A401F792073068C9A3ACA446D62FABE269 (IAPListener_tA8E5B3850C466201C221D95CF74A9BEA7DC74E61 * __this, const RuntimeMethod* method)
{
	{
		// public bool consumePurchase = true;
		__this->set_consumePurchase_4((bool)1);
		// public bool dontDestroyOnLoad = true;
		__this->set_dontDestroyOnLoad_5((bool)1);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Purchasing.IAPListener_OnPurchaseCompletedEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnPurchaseCompletedEvent__ctor_m914E87AAA59D6F10AEBA16EEE6E8DFC15145F8E5 (OnPurchaseCompletedEvent_t69F2AA7C2E6305881C5030EEE41E4EBCD72B08C4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OnPurchaseCompletedEvent__ctor_m914E87AAA59D6F10AEBA16EEE6E8DFC15145F8E5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m70AC62AC7448380334A412BB5B3EB88C9B3E7742(__this, /*hidden argument*/UnityEvent_1__ctor_m70AC62AC7448380334A412BB5B3EB88C9B3E7742_RuntimeMethod_var);
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
// System.Void UnityEngine.Purchasing.IAPListener_OnPurchaseFailedEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnPurchaseFailedEvent__ctor_mB5BCED5159C42E96C92544374C30E8EBCA62AC0D (OnPurchaseFailedEvent_tBE41AD846CDA9B343E1C212C291326AF0B98B026 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OnPurchaseFailedEvent__ctor_mB5BCED5159C42E96C92544374C30E8EBCA62AC0D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_2__ctor_m747C301BF8D8E850C08B922050B68208749CDB4D(__this, /*hidden argument*/UnityEvent_2__ctor_m747C301BF8D8E850C08B922050B68208749CDB4D_RuntimeMethod_var);
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
// System.Void coreElement.Bullet::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bullet_Awake_m8E2AC6C7372126FA858614535F2D5BB52FF62DE1 (Bullet_tE4257FB0F05939D36A937D95AD60A2AC7E17A747 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Bullet_Awake_m8E2AC6C7372126FA858614535F2D5BB52FF62DE1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _armatureComponent = this.gameObject.GetComponent<UnityArmatureComponent>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7 * L_1 = GameObject_GetComponent_TisUnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7_m4748AF191E0FD3A459452992F7547307483F8A07(L_0, /*hidden argument*/GameObject_GetComponent_TisUnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7_m4748AF191E0FD3A459452992F7547307483F8A07_RuntimeMethod_var);
		__this->set__armatureComponent_4(L_1);
		// }
		return;
	}
}
// System.Void coreElement.Bullet::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bullet_Update_m46957FDD3C42F531FFA7E395D7AB0359ADC69637 (Bullet_tE4257FB0F05939D36A937D95AD60A2AC7E17A747 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Bullet_Update_m46957FDD3C42F531FFA7E395D7AB0359ADC69637_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_armatureComponent.armature == null)
		UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7 * L_0 = __this->get__armatureComponent_4();
		NullCheck(L_0);
		Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B * L_1 = UnityArmatureComponent_get_armature_m52B12A650A67494C88B824EA4EF071F4C6C77A49_inline(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// this.transform.localPosition += _speed;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = L_2;
		NullCheck(L_3);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8(L_3, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = __this->get__speed_6();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_4, L_5, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_3, L_6, /*hidden argument*/NULL);
		// if (this.transform.localPosition.x < -7.0f || this.transform.localPosition.x > 7.0f ||
		//     this.transform.localPosition.y < -7.0f || this.transform.localPosition.y > 7.0f )
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8(L_7, /*hidden argument*/NULL);
		float L_9 = L_8.get_x_2();
		if ((((float)L_9) < ((float)(-7.0f))))
		{
			goto IL_0086;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8(L_10, /*hidden argument*/NULL);
		float L_12 = L_11.get_x_2();
		if ((((float)L_12) > ((float)(7.0f))))
		{
			goto IL_0086;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_13 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8(L_13, /*hidden argument*/NULL);
		float L_15 = L_14.get_y_3();
		if ((((float)L_15) < ((float)(-7.0f))))
		{
			goto IL_0086;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_16 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_16);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8(L_16, /*hidden argument*/NULL);
		float L_18 = L_17.get_y_3();
		if ((!(((float)L_18) > ((float)(7.0f)))))
		{
			goto IL_00b4;
		}
	}

IL_0086:
	{
		// _armatureComponent.armature.Dispose();
		UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7 * L_19 = __this->get__armatureComponent_4();
		NullCheck(L_19);
		Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B * L_20 = UnityArmatureComponent_get_armature_m52B12A650A67494C88B824EA4EF071F4C6C77A49_inline(L_19, /*hidden argument*/NULL);
		NullCheck(L_20);
		Armature_Dispose_m1A5F0BBD04459180F286E86887B7B5FF2F764C82(L_20, /*hidden argument*/NULL);
		// if (_effectComponent != null)
		UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7 * L_21 = __this->get__effectComponent_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_22 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_21, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_00b4;
		}
	}
	{
		// _effectComponent.armature.Dispose();
		UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7 * L_23 = __this->get__effectComponent_5();
		NullCheck(L_23);
		Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B * L_24 = UnityArmatureComponent_get_armature_m52B12A650A67494C88B824EA4EF071F4C6C77A49_inline(L_23, /*hidden argument*/NULL);
		NullCheck(L_24);
		Armature_Dispose_m1A5F0BBD04459180F286E86887B7B5FF2F764C82(L_24, /*hidden argument*/NULL);
	}

IL_00b4:
	{
		// }
		return;
	}
}
// System.Void coreElement.Bullet::Init(System.String,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bullet_Init_mC43D30E03813A89FB382C69AF69800FD20825DF3 (Bullet_tE4257FB0F05939D36A937D95AD60A2AC7E17A747 * __this, String_t* ___effectArmatureName0, float ___radian1, float ___speed2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Bullet_Init_mC43D30E03813A89FB382C69AF69800FD20825DF3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// _speed.x = Mathf.Cos(radian) * speed * _armatureComponent.animation.timeScale;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_0 = __this->get_address_of__speed_6();
		float L_1 = ___radian1;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_2 = cosf(L_1);
		float L_3 = ___speed2;
		UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7 * L_4 = __this->get__armatureComponent_4();
		NullCheck(L_4);
		Animation_t3E64FBA6FBD6680C6EF991689446EBB237888A7C * L_5 = UnityArmatureComponent_get_animation_m54D8BBEA81DAEFBFD27DD998FE68D28B69A5A964(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		float L_6 = L_5->get_timeScale_5();
		L_0->set_x_2(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_2, (float)L_3)), (float)L_6)));
		// _speed.y = -Mathf.Sin(radian) * speed * _armatureComponent.animation.timeScale;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_7 = __this->get_address_of__speed_6();
		float L_8 = ___radian1;
		float L_9 = sinf(L_8);
		float L_10 = ___speed2;
		UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7 * L_11 = __this->get__armatureComponent_4();
		NullCheck(L_11);
		Animation_t3E64FBA6FBD6680C6EF991689446EBB237888A7C * L_12 = UnityArmatureComponent_get_animation_m54D8BBEA81DAEFBFD27DD998FE68D28B69A5A964(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		float L_13 = L_12->get_timeScale_5();
		L_7->set_y_3(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)((-L_9)), (float)L_10)), (float)L_13)));
		// var rotation = this.transform.localEulerAngles;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_14 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_14);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = Transform_get_localEulerAngles_m445AD7F6706B0BDABA8A875C899EB1E1DF1A2A2B(L_14, /*hidden argument*/NULL);
		V_0 = L_15;
		// rotation.z = -radian * DragonBones.Transform.RAD_DEG;
		float L_16 = ___radian1;
		IL2CPP_RUNTIME_CLASS_INIT(Transform_tE7D42961E6A4F1135373F19306753C2F35947B15_il2cpp_TypeInfo_var);
		float L_17 = ((Transform_tE7D42961E6A4F1135373F19306753C2F35947B15_StaticFields*)il2cpp_codegen_static_fields_for(Transform_tE7D42961E6A4F1135373F19306753C2F35947B15_il2cpp_TypeInfo_var))->get_RAD_DEG_4();
		(&V_0)->set_z_4(((float)il2cpp_codegen_multiply((float)((-L_16)), (float)L_17)));
		// this.transform.localEulerAngles = rotation;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_18 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = V_0;
		NullCheck(L_18);
		Transform_set_localEulerAngles_mC5E92A989DD8B2E7B854F9D84B528A34AEAA1A17(L_18, L_19, /*hidden argument*/NULL);
		// _armatureComponent.armature.animation.Play("idle");
		UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7 * L_20 = __this->get__armatureComponent_4();
		NullCheck(L_20);
		Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B * L_21 = UnityArmatureComponent_get_armature_m52B12A650A67494C88B824EA4EF071F4C6C77A49_inline(L_20, /*hidden argument*/NULL);
		NullCheck(L_21);
		Animation_t3E64FBA6FBD6680C6EF991689446EBB237888A7C * L_22 = Armature_get_animation_mFC9A0CF26711D38A136BA9B44CB4ED8FAFBE075C_inline(L_21, /*hidden argument*/NULL);
		NullCheck(L_22);
		Animation_Play_mEBE57E5F0E354B7C3361AC101F8B2C32BC329A40(L_22, _stringLiteral1ADBCC344B317C2F3BD64FDAC273F8B0DC410CDF, (-1), /*hidden argument*/NULL);
		// if (effectArmatureName != null)
		String_t* L_23 = ___effectArmatureName0;
		if (!L_23)
		{
			goto IL_01ba;
		}
	}
	{
		// _effectComponent = UnityFactory.factory.BuildArmatureComponent(effectArmatureName);
		IL2CPP_RUNTIME_CLASS_INIT(UnityFactory_t170550F12743A129F88E7D1990F607AB2B35C102_il2cpp_TypeInfo_var);
		UnityFactory_t170550F12743A129F88E7D1990F607AB2B35C102 * L_24 = UnityFactory_get_factory_mAB42A18D9FFD7DA2AD11C1084F158EF6491F35DE(/*hidden argument*/NULL);
		String_t* L_25 = ___effectArmatureName0;
		NullCheck(L_24);
		UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7 * L_26 = UnityFactory_BuildArmatureComponent_mAEF67786ED95E4368C4FEB16A9727EFE84B439A4(L_24, L_25, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL, (bool)0, /*hidden argument*/NULL);
		__this->set__effectComponent_5(L_26);
		// var effectRotation = _effectComponent.transform.localEulerAngles;
		UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7 * L_27 = __this->get__effectComponent_5();
		NullCheck(L_27);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_28 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_27, /*hidden argument*/NULL);
		NullCheck(L_28);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_29 = Transform_get_localEulerAngles_m445AD7F6706B0BDABA8A875C899EB1E1DF1A2A2B(L_28, /*hidden argument*/NULL);
		V_1 = L_29;
		// var effectScale = _effectComponent.transform.localScale;
		UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7 * L_30 = __this->get__effectComponent_5();
		NullCheck(L_30);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_31 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_30, /*hidden argument*/NULL);
		NullCheck(L_31);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_32 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_31, /*hidden argument*/NULL);
		V_2 = L_32;
		// effectRotation.z = -radian * DragonBones.Transform.RAD_DEG;
		float L_33 = ___radian1;
		IL2CPP_RUNTIME_CLASS_INIT(Transform_tE7D42961E6A4F1135373F19306753C2F35947B15_il2cpp_TypeInfo_var);
		float L_34 = ((Transform_tE7D42961E6A4F1135373F19306753C2F35947B15_StaticFields*)il2cpp_codegen_static_fields_for(Transform_tE7D42961E6A4F1135373F19306753C2F35947B15_il2cpp_TypeInfo_var))->get_RAD_DEG_4();
		(&V_1)->set_z_4(((float)il2cpp_codegen_multiply((float)((-L_33)), (float)L_34)));
		// if (Random.Range(0.0f, 1.0f) < 0.5)
		float L_35 = Random_Range_m2844A4A71C86BDF83A12D97FC6DD95278E87E384((0.0f), (1.0f), /*hidden argument*/NULL);
		if ((!(((double)(((double)((double)L_35)))) < ((double)(0.5)))))
		{
			goto IL_011a;
		}
	}
	{
		// effectRotation.x = 180.0f;
		(&V_1)->set_x_2((180.0f));
		// effectRotation.z = -effectRotation.z;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_36 = V_1;
		float L_37 = L_36.get_z_4();
		(&V_1)->set_z_4(((-L_37)));
	}

IL_011a:
	{
		// effectScale.x = Random.Range(1.0f, 2.0f);
		float L_38 = Random_Range_m2844A4A71C86BDF83A12D97FC6DD95278E87E384((1.0f), (2.0f), /*hidden argument*/NULL);
		(&V_2)->set_x_2(L_38);
		// effectScale.y = Random.Range(1.0f, 1.5f);
		float L_39 = Random_Range_m2844A4A71C86BDF83A12D97FC6DD95278E87E384((1.0f), (1.5f), /*hidden argument*/NULL);
		(&V_2)->set_y_3(L_39);
		// _effectComponent.animation.timeScale = _armatureComponent.animation.timeScale;
		UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7 * L_40 = __this->get__effectComponent_5();
		NullCheck(L_40);
		Animation_t3E64FBA6FBD6680C6EF991689446EBB237888A7C * L_41 = UnityArmatureComponent_get_animation_m54D8BBEA81DAEFBFD27DD998FE68D28B69A5A964(L_40, /*hidden argument*/NULL);
		UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7 * L_42 = __this->get__armatureComponent_4();
		NullCheck(L_42);
		Animation_t3E64FBA6FBD6680C6EF991689446EBB237888A7C * L_43 = UnityArmatureComponent_get_animation_m54D8BBEA81DAEFBFD27DD998FE68D28B69A5A964(L_42, /*hidden argument*/NULL);
		NullCheck(L_43);
		float L_44 = L_43->get_timeScale_5();
		NullCheck(L_41);
		L_41->set_timeScale_5(L_44);
		// _effectComponent.transform.localPosition = this.transform.localPosition;
		UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7 * L_45 = __this->get__effectComponent_5();
		NullCheck(L_45);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_46 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_45, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_47 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_47);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_48 = Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8(L_47, /*hidden argument*/NULL);
		NullCheck(L_46);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_46, L_48, /*hidden argument*/NULL);
		// _effectComponent.transform.localEulerAngles = effectRotation;
		UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7 * L_49 = __this->get__effectComponent_5();
		NullCheck(L_49);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_50 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_49, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_51 = V_1;
		NullCheck(L_50);
		Transform_set_localEulerAngles_mC5E92A989DD8B2E7B854F9D84B528A34AEAA1A17(L_50, L_51, /*hidden argument*/NULL);
		// _effectComponent.transform.localScale = effectScale;
		UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7 * L_52 = __this->get__effectComponent_5();
		NullCheck(L_52);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_53 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_52, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_54 = V_2;
		NullCheck(L_53);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_53, L_54, /*hidden argument*/NULL);
		// _effectComponent.animation.Play("idle");
		UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7 * L_55 = __this->get__effectComponent_5();
		NullCheck(L_55);
		Animation_t3E64FBA6FBD6680C6EF991689446EBB237888A7C * L_56 = UnityArmatureComponent_get_animation_m54D8BBEA81DAEFBFD27DD998FE68D28B69A5A964(L_55, /*hidden argument*/NULL);
		NullCheck(L_56);
		Animation_Play_mEBE57E5F0E354B7C3361AC101F8B2C32BC329A40(L_56, _stringLiteral1ADBCC344B317C2F3BD64FDAC273F8B0DC410CDF, (-1), /*hidden argument*/NULL);
	}

IL_01ba:
	{
		// }
		return;
	}
}
// System.Void coreElement.Bullet::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bullet__ctor_mEEA9A3CC690B03F4B518A8D670EE901664DCA68C (Bullet_tE4257FB0F05939D36A937D95AD60A2AC7E17A747 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void coreElement.CoreElement::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreElement_Start_mB7A7DAE64790A9F996F44F1FBE88FA1E63FAB453 (CoreElement_tE4AA9E2B7F77B929778F44A58FC2036C30BF2966 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CoreElement_Start_mB7A7DAE64790A9F996F44F1FBE88FA1E63FAB453_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_0 = NULL;
	{
		// UnityFactory.factory.autoSearch = true;
		IL2CPP_RUNTIME_CLASS_INIT(UnityFactory_t170550F12743A129F88E7D1990F607AB2B35C102_il2cpp_TypeInfo_var);
		UnityFactory_t170550F12743A129F88E7D1990F607AB2B35C102 * L_0 = UnityFactory_get_factory_mAB42A18D9FFD7DA2AD11C1084F158EF6491F35DE(/*hidden argument*/NULL);
		NullCheck(L_0);
		((BaseFactory_t0F351C3165BC3FF44834228E47FA2AF75DEB546F *)L_0)->set_autoSearch_2((bool)1);
		// UnityFactory.factory.LoadData(skinData);
		UnityFactory_t170550F12743A129F88E7D1990F607AB2B35C102 * L_1 = UnityFactory_get_factory_mAB42A18D9FFD7DA2AD11C1084F158EF6491F35DE(/*hidden argument*/NULL);
		UnityDragonBonesData_tB3459525029FD10A37DB7C21A177BEF36E9E0C74 * L_2 = __this->get_skinData_44();
		NullCheck(L_1);
		UnityFactory_LoadData_m0EFB637A0EC5D7CB467D48C9440F753CB8682548(L_1, L_2, (bool)0, (0.01f), (1.0f), /*hidden argument*/NULL);
		// UnityFactory.factory.LoadData(weaponData);
		UnityFactory_t170550F12743A129F88E7D1990F607AB2B35C102 * L_3 = UnityFactory_get_factory_mAB42A18D9FFD7DA2AD11C1084F158EF6491F35DE(/*hidden argument*/NULL);
		UnityDragonBonesData_tB3459525029FD10A37DB7C21A177BEF36E9E0C74 * L_4 = __this->get_weaponData_45();
		NullCheck(L_3);
		UnityFactory_LoadData_m0EFB637A0EC5D7CB467D48C9440F753CB8682548(L_3, L_4, (bool)0, (0.01f), (1.0f), /*hidden argument*/NULL);
		// UnityFactory.factory.LoadData(dragonBoneData);
		UnityFactory_t170550F12743A129F88E7D1990F607AB2B35C102 * L_5 = UnityFactory_get_factory_mAB42A18D9FFD7DA2AD11C1084F158EF6491F35DE(/*hidden argument*/NULL);
		UnityDragonBonesData_tB3459525029FD10A37DB7C21A177BEF36E9E0C74 * L_6 = __this->get_dragonBoneData_43();
		NullCheck(L_5);
		UnityFactory_LoadData_m0EFB637A0EC5D7CB467D48C9440F753CB8682548(L_5, L_6, (bool)0, (0.01f), (1.0f), /*hidden argument*/NULL);
		// var armatureDisplay = new GameObject("mecha_1502b");
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_7 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)il2cpp_codegen_object_new(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var);
		GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686(L_7, _stringLiteralEC1D53EA97F0BFEAE043EF7A12079D3119948CD2, /*hidden argument*/NULL);
		V_0 = L_7;
		// _armatureComponent = UnityFactory.factory.BuildArmatureComponent("mecha_1502b", null, null, null, armatureDisplay);
		UnityFactory_t170550F12743A129F88E7D1990F607AB2B35C102 * L_8 = UnityFactory_get_factory_mAB42A18D9FFD7DA2AD11C1084F158EF6491F35DE(/*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_9 = V_0;
		NullCheck(L_8);
		UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7 * L_10 = UnityFactory_BuildArmatureComponent_mAEF67786ED95E4368C4FEB16A9727EFE84B439A4(L_8, _stringLiteralEC1D53EA97F0BFEAE043EF7A12079D3119948CD2, (String_t*)NULL, (String_t*)NULL, (String_t*)NULL, L_9, (bool)0, /*hidden argument*/NULL);
		__this->set__armatureComponent_35(L_10);
		// _armatureComponent.AddEventListener(EventObject.FADE_IN_COMPLETE, _animationEventHandler);
		UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7 * L_11 = __this->get__armatureComponent_35();
		ListenerDelegate_1_t8A277CC3A9ACC68F27B82B7C1E142E28D68A6DAF * L_12 = (ListenerDelegate_1_t8A277CC3A9ACC68F27B82B7C1E142E28D68A6DAF *)il2cpp_codegen_object_new(ListenerDelegate_1_t8A277CC3A9ACC68F27B82B7C1E142E28D68A6DAF_il2cpp_TypeInfo_var);
		ListenerDelegate_1__ctor_mC34C4E5351179C452D65C0343F73C1AE063AD496(L_12, __this, (intptr_t)((intptr_t)CoreElement__animationEventHandler_mC28527381CB6E7D301EFE4C2445CE916D5149E97_RuntimeMethod_var), /*hidden argument*/ListenerDelegate_1__ctor_mC34C4E5351179C452D65C0343F73C1AE063AD496_RuntimeMethod_var);
		NullCheck(L_11);
		UnityEventDispatcher_1_AddEventListener_m68EC547A333255F85DF831B388454CA1669C22A2(L_11, _stringLiteral42CD5C4560EAF00804576343DED4F73E68522924, L_12, /*hidden argument*/UnityEventDispatcher_1_AddEventListener_m68EC547A333255F85DF831B388454CA1669C22A2_RuntimeMethod_var);
		// _armatureComponent.AddEventListener(EventObject.FADE_OUT_COMPLETE, _animationEventHandler);
		UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7 * L_13 = __this->get__armatureComponent_35();
		ListenerDelegate_1_t8A277CC3A9ACC68F27B82B7C1E142E28D68A6DAF * L_14 = (ListenerDelegate_1_t8A277CC3A9ACC68F27B82B7C1E142E28D68A6DAF *)il2cpp_codegen_object_new(ListenerDelegate_1_t8A277CC3A9ACC68F27B82B7C1E142E28D68A6DAF_il2cpp_TypeInfo_var);
		ListenerDelegate_1__ctor_mC34C4E5351179C452D65C0343F73C1AE063AD496(L_14, __this, (intptr_t)((intptr_t)CoreElement__animationEventHandler_mC28527381CB6E7D301EFE4C2445CE916D5149E97_RuntimeMethod_var), /*hidden argument*/ListenerDelegate_1__ctor_mC34C4E5351179C452D65C0343F73C1AE063AD496_RuntimeMethod_var);
		NullCheck(L_13);
		UnityEventDispatcher_1_AddEventListener_m68EC547A333255F85DF831B388454CA1669C22A2(L_13, _stringLiteral4140BACA5BA2713EC983EBBAB447F02D7673F0DB, L_14, /*hidden argument*/UnityEventDispatcher_1_AddEventListener_m68EC547A333255F85DF831B388454CA1669C22A2_RuntimeMethod_var);
		// _weaponLeft = _armatureComponent.armature.GetSlot("weapon_l").childArmature;
		UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7 * L_15 = __this->get__armatureComponent_35();
		NullCheck(L_15);
		Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B * L_16 = UnityArmatureComponent_get_armature_m52B12A650A67494C88B824EA4EF071F4C6C77A49_inline(L_15, /*hidden argument*/NULL);
		NullCheck(L_16);
		Slot_t9D06B371824C1B67E43A10A17D18BC3EF71E3867 * L_17 = Armature_GetSlot_m81C3F2C377DF8A76A98FBE724344EB6E970A319C(L_16, _stringLiteral51A22438BF55663C476DB0C287827A6035F3D41C, /*hidden argument*/NULL);
		NullCheck(L_17);
		Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B * L_18 = Slot_get_childArmature_m7AA0703B2FD30982900BB17B3F836845417207BF_inline(L_17, /*hidden argument*/NULL);
		__this->set__weaponLeft_36(L_18);
		// _weaponRight = _armatureComponent.armature.GetSlot("weapon_r").childArmature;
		UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7 * L_19 = __this->get__armatureComponent_35();
		NullCheck(L_19);
		Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B * L_20 = UnityArmatureComponent_get_armature_m52B12A650A67494C88B824EA4EF071F4C6C77A49_inline(L_19, /*hidden argument*/NULL);
		NullCheck(L_20);
		Slot_t9D06B371824C1B67E43A10A17D18BC3EF71E3867 * L_21 = Armature_GetSlot_m81C3F2C377DF8A76A98FBE724344EB6E970A319C(L_20, _stringLiteral7032A76D8FAE8824CBC795703B9630DAF305D090, /*hidden argument*/NULL);
		NullCheck(L_21);
		Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B * L_22 = Slot_get_childArmature_m7AA0703B2FD30982900BB17B3F836845417207BF_inline(L_21, /*hidden argument*/NULL);
		__this->set__weaponRight_37(L_22);
		// _weaponLeft.eventDispatcher.AddDBEventListener(EventObject.FRAME_EVENT, _frameEventHandler);
		Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B * L_23 = __this->get__weaponLeft_36();
		NullCheck(L_23);
		RuntimeObject* L_24 = Armature_get_eventDispatcher_mDE19324200719B8284AEC29938604B570BD7691B_inline(L_23, /*hidden argument*/NULL);
		ListenerDelegate_1_t8A277CC3A9ACC68F27B82B7C1E142E28D68A6DAF * L_25 = (ListenerDelegate_1_t8A277CC3A9ACC68F27B82B7C1E142E28D68A6DAF *)il2cpp_codegen_object_new(ListenerDelegate_1_t8A277CC3A9ACC68F27B82B7C1E142E28D68A6DAF_il2cpp_TypeInfo_var);
		ListenerDelegate_1__ctor_mC34C4E5351179C452D65C0343F73C1AE063AD496(L_25, __this, (intptr_t)((intptr_t)CoreElement__frameEventHandler_m961FB97ED79E8E8530E35BE802539FAD74CB7D42_RuntimeMethod_var), /*hidden argument*/ListenerDelegate_1__ctor_mC34C4E5351179C452D65C0343F73C1AE063AD496_RuntimeMethod_var);
		NullCheck(L_24);
		InterfaceActionInvoker2< String_t*, ListenerDelegate_1_t8A277CC3A9ACC68F27B82B7C1E142E28D68A6DAF * >::Invoke(2 /* System.Void DragonBones.IEventDispatcher`1<DragonBones.EventObject>::AddDBEventListener(System.String,DragonBones.ListenerDelegate`1<T>) */, IEventDispatcher_1_t8F93E86A86FD52D4B0571E8836C4D53DE9398D1B_il2cpp_TypeInfo_var, L_24, _stringLiteralE1E7AC89DEC86373BCAFD0F17BBBCC6751D4E73D, L_25);
		// _weaponRight.eventDispatcher.AddDBEventListener(EventObject.FRAME_EVENT, _frameEventHandler);
		Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B * L_26 = __this->get__weaponRight_37();
		NullCheck(L_26);
		RuntimeObject* L_27 = Armature_get_eventDispatcher_mDE19324200719B8284AEC29938604B570BD7691B_inline(L_26, /*hidden argument*/NULL);
		ListenerDelegate_1_t8A277CC3A9ACC68F27B82B7C1E142E28D68A6DAF * L_28 = (ListenerDelegate_1_t8A277CC3A9ACC68F27B82B7C1E142E28D68A6DAF *)il2cpp_codegen_object_new(ListenerDelegate_1_t8A277CC3A9ACC68F27B82B7C1E142E28D68A6DAF_il2cpp_TypeInfo_var);
		ListenerDelegate_1__ctor_mC34C4E5351179C452D65C0343F73C1AE063AD496(L_28, __this, (intptr_t)((intptr_t)CoreElement__frameEventHandler_m961FB97ED79E8E8530E35BE802539FAD74CB7D42_RuntimeMethod_var), /*hidden argument*/ListenerDelegate_1__ctor_mC34C4E5351179C452D65C0343F73C1AE063AD496_RuntimeMethod_var);
		NullCheck(L_27);
		InterfaceActionInvoker2< String_t*, ListenerDelegate_1_t8A277CC3A9ACC68F27B82B7C1E142E28D68A6DAF * >::Invoke(2 /* System.Void DragonBones.IEventDispatcher`1<DragonBones.EventObject>::AddDBEventListener(System.String,DragonBones.ListenerDelegate`1<T>) */, IEventDispatcher_1_t8F93E86A86FD52D4B0571E8836C4D53DE9398D1B_il2cpp_TypeInfo_var, L_27, _stringLiteralE1E7AC89DEC86373BCAFD0F17BBBCC6751D4E73D, L_28);
		// _armatureComponent.animation.Reset();
		UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7 * L_29 = __this->get__armatureComponent_35();
		NullCheck(L_29);
		Animation_t3E64FBA6FBD6680C6EF991689446EBB237888A7C * L_30 = UnityArmatureComponent_get_animation_m54D8BBEA81DAEFBFD27DD998FE68D28B69A5A964(L_29, /*hidden argument*/NULL);
		NullCheck(L_30);
		Animation_Reset_m6433B3BCBA03583DE3C13C2075D0C247C906336A(L_30, /*hidden argument*/NULL);
		// _armatureComponent.animation.Play("idle");
		UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7 * L_31 = __this->get__armatureComponent_35();
		NullCheck(L_31);
		Animation_t3E64FBA6FBD6680C6EF991689446EBB237888A7C * L_32 = UnityArmatureComponent_get_animation_m54D8BBEA81DAEFBFD27DD998FE68D28B69A5A964(L_31, /*hidden argument*/NULL);
		NullCheck(L_32);
		Animation_Play_mEBE57E5F0E354B7C3361AC101F8B2C32BC329A40(L_32, _stringLiteral1ADBCC344B317C2F3BD64FDAC273F8B0DC410CDF, (-1), /*hidden argument*/NULL);
		// _armatureComponent.armature.flipX = true;
		UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7 * L_33 = __this->get__armatureComponent_35();
		NullCheck(L_33);
		Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B * L_34 = UnityArmatureComponent_get_armature_m52B12A650A67494C88B824EA4EF071F4C6C77A49_inline(L_33, /*hidden argument*/NULL);
		NullCheck(L_34);
		Armature_set_flipX_mC6B16EAA769AEF623D804BC68BF5157562E0AACA(L_34, (bool)1, /*hidden argument*/NULL);
		// _updateAnimation();
		CoreElement__updateAnimation_mC1524720EA2C0DEBF3F68F710BD104D72EA80C27(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void coreElement.CoreElement::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreElement_Update_m440A7ADF9A66015927F53447C308D2DA0E41CB0F (CoreElement_tE4AA9E2B7F77B929778F44A58FC2036C30BF2966 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CoreElement_Update_m440A7ADF9A66015927F53447C308D2DA0E41CB0F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var isLeft = Input.GetKey(left);
		int32_t L_0 = __this->get_left_16();
		bool L_1 = Input_GetKey_m46AA83E14F9C3A75E06FE0A8C55740D47B2DB784(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// var isRight = Input.GetKey(right);
		int32_t L_2 = __this->get_right_17();
		bool L_3 = Input_GetKey_m46AA83E14F9C3A75E06FE0A8C55740D47B2DB784(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		// if (isLeft == isRight)
		bool L_4 = V_0;
		bool L_5 = V_1;
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			goto IL_0025;
		}
	}
	{
		// _move(0);
		CoreElement__move_m1FDB8EF7F31AF917712D0352E4304CA774497CB6(__this, 0, /*hidden argument*/NULL);
		// }
		goto IL_0038;
	}

IL_0025:
	{
		// else if (isLeft)
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0031;
		}
	}
	{
		// _move(-1);
		CoreElement__move_m1FDB8EF7F31AF917712D0352E4304CA774497CB6(__this, (-1), /*hidden argument*/NULL);
		// }
		goto IL_0038;
	}

IL_0031:
	{
		// _move(1);
		CoreElement__move_m1FDB8EF7F31AF917712D0352E4304CA774497CB6(__this, 1, /*hidden argument*/NULL);
	}

IL_0038:
	{
		// if (Input.GetKeyDown(up))
		int32_t L_7 = __this->get_up_18();
		bool L_8 = Input_GetKeyDown_mEA57896808B6F484B12CD0AEEB83390A3CFCDBDC(L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_004b;
		}
	}
	{
		// _jump();
		CoreElement__jump_m37E73A89B7F0CD38F29CD7EEBEFE9F8F4823069B(__this, /*hidden argument*/NULL);
	}

IL_004b:
	{
		// _squat(Input.GetKey(down));
		int32_t L_9 = __this->get_down_19();
		bool L_10 = Input_GetKey_m46AA83E14F9C3A75E06FE0A8C55740D47B2DB784(L_9, /*hidden argument*/NULL);
		CoreElement__squat_m2F072073FF7AEBCE0A4133ED12B16C812475CF48(__this, L_10, /*hidden argument*/NULL);
		// if (Input.GetKeyDown(switchSkin))
		int32_t L_11 = __this->get_switchSkin_20();
		bool L_12 = Input_GetKeyDown_mEA57896808B6F484B12CD0AEEB83390A3CFCDBDC(L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_006f;
		}
	}
	{
		// _switchSkin();
		CoreElement__switchSkin_mC3918BE0FE22C4E4FAE642C604E0A9F58C96E83A(__this, /*hidden argument*/NULL);
	}

IL_006f:
	{
		// if (Input.GetKeyDown(switchLeftWeapon))
		int32_t L_13 = __this->get_switchLeftWeapon_21();
		bool L_14 = Input_GetKeyDown_mEA57896808B6F484B12CD0AEEB83390A3CFCDBDC(L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0082;
		}
	}
	{
		// _switchWeaponLeft();
		CoreElement__switchWeaponLeft_mCC6800A9FB15B0AF99D307D795436B1DB0363451(__this, /*hidden argument*/NULL);
	}

IL_0082:
	{
		// if (Input.GetKeyDown(switchRightWeapon))
		int32_t L_15 = __this->get_switchRightWeapon_22();
		bool L_16 = Input_GetKeyDown_mEA57896808B6F484B12CD0AEEB83390A3CFCDBDC(L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_0095;
		}
	}
	{
		// _switchWeaponRight();
		CoreElement__switchWeaponRight_m6F556857DF58079CB4255B43949C60140931C355(__this, /*hidden argument*/NULL);
	}

IL_0095:
	{
		// var target = Camera.main.ScreenToWorldPoint(Input.mousePosition + new Vector3(0.0f, 0.0f, Camera.main.farClipPlane));
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_17 = Camera_get_main_m9256A9F84F92D7ED73F3E6C4E2694030AD8B61FA(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = Input_get_mousePosition_m1F6706785983B41FE8D5CBB81B5F15F68EBD9A53(/*hidden argument*/NULL);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_19 = Camera_get_main_m9256A9F84F92D7ED73F3E6C4E2694030AD8B61FA(/*hidden argument*/NULL);
		NullCheck(L_19);
		float L_20 = Camera_get_farClipPlane_mF51F1FF5BE87719CFAC293E272B1138DC1EFFD4B(L_19, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21;
		memset((&L_21), 0, sizeof(L_21));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_21), (0.0f), (0.0f), L_20, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_18, L_21, /*hidden argument*/NULL);
		NullCheck(L_17);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23 = Camera_ScreenToWorldPoint_m179BB999DC97A251D0892B39C98F3FACDF0617C5(L_17, L_22, /*hidden argument*/NULL);
		V_2 = L_23;
		// _aim(target.x, target.y);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = V_2;
		float L_25 = L_24.get_x_2();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26 = V_2;
		float L_27 = L_26.get_y_3();
		CoreElement__aim_m64EDB6E2CAE10C088BAA0782E811CB3D3D2ACECE(__this, L_25, L_27, /*hidden argument*/NULL);
		// _attack(Input.GetMouseButton(0));
		bool L_28 = Input_GetMouseButton_m43C68DE93C7D990E875BA53C4DEC9CA6230C8B79(0, /*hidden argument*/NULL);
		CoreElement__attack_m2DF19529B3320A696FCA6811FF9F9807B7EE14DD(__this, L_28, /*hidden argument*/NULL);
		// _updatePosition();
		CoreElement__updatePosition_m0B0D060A25C424CA279E51EA1CFCBB5FD1F8F4BE(__this, /*hidden argument*/NULL);
		// _updateAim();
		CoreElement__updateAim_mD34AB0E5B5FC2C636C51340F998580732CF66E40(__this, /*hidden argument*/NULL);
		// _updateAttack();
		CoreElement__updateAttack_m5D8D2D9364199E20E1609B571F0B7EB2BA0E74E6(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void coreElement.CoreElement::_animationEventHandler(System.String,DragonBones.EventObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreElement__animationEventHandler_mC28527381CB6E7D301EFE4C2445CE916D5149E97 (CoreElement_tE4AA9E2B7F77B929778F44A58FC2036C30BF2966 * __this, String_t* ___type0, EventObject_t92F7B286A8AB858F6ED37C3CCF8C7EB6A850891C * ___eventObject1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CoreElement__animationEventHandler_mC28527381CB6E7D301EFE4C2445CE916D5149E97_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// switch (type)
		String_t* L_0 = ___type0;
		bool L_1 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_0, _stringLiteral42CD5C4560EAF00804576343DED4F73E68522924, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001b;
		}
	}
	{
		String_t* L_2 = ___type0;
		bool L_3 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_2, _stringLiteral4140BACA5BA2713EC983EBBAB447F02D7673F0DB, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0090;
		}
	}
	{
		return;
	}

IL_001b:
	{
		// if (eventObject.animationState.name == "jump_1")
		EventObject_t92F7B286A8AB858F6ED37C3CCF8C7EB6A850891C * L_4 = ___eventObject1;
		NullCheck(L_4);
		AnimationState_tBA6EAAD27D56DD26A61304C93676C337EB761238 * L_5 = L_4->get_animationState_20();
		NullCheck(L_5);
		String_t* L_6 = L_5->get_name_15();
		bool L_7 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_6, _stringLiteral65DDF7B974E0EFBB2FF1A9EE7E602B054F3FA19F, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0072;
		}
	}
	{
		// _isJumpingB = true;
		__this->set__isJumpingB_24((bool)1);
		// _speed.y = -JUMP_SPEED;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_8 = __this->get_address_of__speed_41();
		L_8->set_y_1((0.2f));
		// _armatureComponent.animation.FadeIn("jump_2", -1, -1, 0, NORMAL_ANIMATION_GROUP).resetToPose = false;
		UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7 * L_9 = __this->get__armatureComponent_35();
		NullCheck(L_9);
		Animation_t3E64FBA6FBD6680C6EF991689446EBB237888A7C * L_10 = UnityArmatureComponent_get_animation_m54D8BBEA81DAEFBFD27DD998FE68D28B69A5A964(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		AnimationState_tBA6EAAD27D56DD26A61304C93676C337EB761238 * L_11 = Animation_FadeIn_m6B9CE692F53E207F6EAD187FAB98440739E849F2(L_10, _stringLiteralA567A5EA0385C2E3C5E9441003BF16843987A159, (-1.0f), (-1), 0, _stringLiteral9C2A6E4809AEEF7B7712CA4DB05A681452F4F748, 3, /*hidden argument*/NULL);
		NullCheck(L_11);
		L_11->set_resetToPose_8((bool)0);
		// }
		return;
	}

IL_0072:
	{
		// else if (eventObject.animationState.name == "jump_4")
		EventObject_t92F7B286A8AB858F6ED37C3CCF8C7EB6A850891C * L_12 = ___eventObject1;
		NullCheck(L_12);
		AnimationState_tBA6EAAD27D56DD26A61304C93676C337EB761238 * L_13 = L_12->get_animationState_20();
		NullCheck(L_13);
		String_t* L_14 = L_13->get_name_15();
		bool L_15 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_14, _stringLiteral4AD3EF355FF76579479BCD6AB56935B79503E851, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		// _updateAnimation();
		CoreElement__updateAnimation_mC1524720EA2C0DEBF3F68F710BD104D72EA80C27(__this, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0090:
	{
		// if (eventObject.animationState.name == "attack_01")
		EventObject_t92F7B286A8AB858F6ED37C3CCF8C7EB6A850891C * L_16 = ___eventObject1;
		NullCheck(L_16);
		AnimationState_tBA6EAAD27D56DD26A61304C93676C337EB761238 * L_17 = L_16->get_animationState_20();
		NullCheck(L_17);
		String_t* L_18 = L_17->get_name_15();
		bool L_19 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_18, _stringLiteral68C356A43DDF830CFA37A5373219D0A5DE8C228B, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_00b5;
		}
	}
	{
		// _isAttackingB = false;
		__this->set__isAttackingB_27((bool)0);
		// _attackState = null;
		__this->set__attackState_40((AnimationState_tBA6EAAD27D56DD26A61304C93676C337EB761238 *)NULL);
	}

IL_00b5:
	{
		// }
		return;
	}
}
// System.Void coreElement.CoreElement::_frameEventHandler(System.String,DragonBones.EventObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreElement__frameEventHandler_m961FB97ED79E8E8530E35BE802539FAD74CB7D42 (CoreElement_tE4AA9E2B7F77B929778F44A58FC2036C30BF2966 * __this, String_t* ___type0, EventObject_t92F7B286A8AB858F6ED37C3CCF8C7EB6A850891C * ___eventObject1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CoreElement__frameEventHandler_m961FB97ED79E8E8530E35BE802539FAD74CB7D42_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (eventObject.name == "fire")
		EventObject_t92F7B286A8AB858F6ED37C3CCF8C7EB6A850891C * L_0 = ___eventObject1;
		NullCheck(L_0);
		String_t* L_1 = L_0->get_name_16();
		bool L_2 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_1, _stringLiteral1DA8402449899EC1BA9C34C095DBB79D0585DCD7, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0072;
		}
	}
	{
		// var transform = (eventObject.armature.display as GameObject).transform;
		EventObject_t92F7B286A8AB858F6ED37C3CCF8C7EB6A850891C * L_3 = ___eventObject1;
		NullCheck(L_3);
		Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B * L_4 = L_3->get_armature_17();
		NullCheck(L_4);
		RuntimeObject * L_5 = Armature_get_display_m9E495EEA6D17B1ABF9B35F12BE52A541A3B2098D_inline(L_4, /*hidden argument*/NULL);
		NullCheck(((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)IsInstSealed((RuntimeObject*)L_5, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var)));
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)IsInstSealed((RuntimeObject*)L_5, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		// var localPoint = new Vector3(eventObject.bone.global.x, -eventObject.bone.global.y, 0.0f);
		EventObject_t92F7B286A8AB858F6ED37C3CCF8C7EB6A850891C * L_7 = ___eventObject1;
		NullCheck(L_7);
		Bone_tAFFFF52723C77703DAB65D003E9A418C2766C809 * L_8 = L_7->get_bone_18();
		NullCheck(L_8);
		Transform_tE7D42961E6A4F1135373F19306753C2F35947B15 * L_9 = ((TransformObject_t5E60702D2A905146006F63D15443CCD42AB5136A *)L_8)->get_global_9();
		NullCheck(L_9);
		float L_10 = L_9->get_x_6();
		EventObject_t92F7B286A8AB858F6ED37C3CCF8C7EB6A850891C * L_11 = ___eventObject1;
		NullCheck(L_11);
		Bone_tAFFFF52723C77703DAB65D003E9A418C2766C809 * L_12 = L_11->get_bone_18();
		NullCheck(L_12);
		Transform_tE7D42961E6A4F1135373F19306753C2F35947B15 * L_13 = ((TransformObject_t5E60702D2A905146006F63D15443CCD42AB5136A *)L_12)->get_global_9();
		NullCheck(L_13);
		float L_14 = L_13->get_y_7();
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_0), L_10, ((-L_14)), (0.0f), /*hidden argument*/NULL);
		// var globalPoint = transform.worldToLocalMatrix.inverse.MultiplyPoint(localPoint);
		NullCheck(L_6);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_15 = Transform_get_worldToLocalMatrix_m4791F881839B1087B17DC126FC0CA7F9A596073E(L_6, /*hidden argument*/NULL);
		V_2 = L_15;
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_16 = Matrix4x4_get_inverse_mBD3145C0D7977962E18C8B3BF63DD671F7917166((Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA *)(&V_2), /*hidden argument*/NULL);
		V_2 = L_16;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = Matrix4x4_MultiplyPoint_mD5D082585C5B3564A5EFC90A3C5CAFFE47E45B65((Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA *)(&V_2), L_17, /*hidden argument*/NULL);
		V_1 = L_18;
		// this._fire(globalPoint);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = V_1;
		CoreElement__fire_mB2AA09E50D404EA9E880FCC82333212511544152(__this, L_19, /*hidden argument*/NULL);
	}

IL_0072:
	{
		// }
		return;
	}
}
// System.Void coreElement.CoreElement::_move(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreElement__move_m1FDB8EF7F31AF917712D0352E4304CA774497CB6 (CoreElement_tE4AA9E2B7F77B929778F44A58FC2036C30BF2966 * __this, int32_t ___dir0, const RuntimeMethod* method)
{
	{
		// if (_moveDir == dir)
		int32_t L_0 = __this->get__moveDir_32();
		int32_t L_1 = ___dir0;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_000a;
		}
	}
	{
		// return;
		return;
	}

IL_000a:
	{
		// _moveDir = dir;
		int32_t L_2 = ___dir0;
		__this->set__moveDir_32(L_2);
		// _updateAnimation();
		CoreElement__updateAnimation_mC1524720EA2C0DEBF3F68F710BD104D72EA80C27(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void coreElement.CoreElement::_jump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreElement__jump_m37E73A89B7F0CD38F29CD7EEBEFE9F8F4823069B (CoreElement_tE4AA9E2B7F77B929778F44A58FC2036C30BF2966 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CoreElement__jump_m37E73A89B7F0CD38F29CD7EEBEFE9F8F4823069B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_isJumpingA)
		bool L_0 = __this->get__isJumpingA_23();
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// _isJumpingA = true;
		__this->set__isJumpingA_23((bool)1);
		// _armatureComponent.animation.FadeIn("jump_1", -1.0f, -1, 0, NORMAL_ANIMATION_GROUP).resetToPose = false ;
		UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7 * L_1 = __this->get__armatureComponent_35();
		NullCheck(L_1);
		Animation_t3E64FBA6FBD6680C6EF991689446EBB237888A7C * L_2 = UnityArmatureComponent_get_animation_m54D8BBEA81DAEFBFD27DD998FE68D28B69A5A964(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		AnimationState_tBA6EAAD27D56DD26A61304C93676C337EB761238 * L_3 = Animation_FadeIn_m6B9CE692F53E207F6EAD187FAB98440739E849F2(L_2, _stringLiteral65DDF7B974E0EFBB2FF1A9EE7E602B054F3FA19F, (-1.0f), (-1), 0, _stringLiteral9C2A6E4809AEEF7B7712CA4DB05A681452F4F748, 3, /*hidden argument*/NULL);
		NullCheck(L_3);
		L_3->set_resetToPose_8((bool)0);
		// _walkState = null;
		__this->set__walkState_39((AnimationState_tBA6EAAD27D56DD26A61304C93676C337EB761238 *)NULL);
		// }
		return;
	}
}
// System.Void coreElement.CoreElement::_squat(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreElement__squat_m2F072073FF7AEBCE0A4133ED12B16C812475CF48 (CoreElement_tE4AA9E2B7F77B929778F44A58FC2036C30BF2966 * __this, bool ___isSquating0, const RuntimeMethod* method)
{
	{
		// if (_isSquating == isSquating)
		bool L_0 = __this->get__isSquating_25();
		bool L_1 = ___isSquating0;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_000a;
		}
	}
	{
		// return;
		return;
	}

IL_000a:
	{
		// _isSquating = isSquating;
		bool L_2 = ___isSquating0;
		__this->set__isSquating_25(L_2);
		// _updateAnimation();
		CoreElement__updateAnimation_mC1524720EA2C0DEBF3F68F710BD104D72EA80C27(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void coreElement.CoreElement::_switchWeaponLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreElement__switchWeaponLeft_mCC6800A9FB15B0AF99D307D795436B1DB0363451 (CoreElement_tE4AA9E2B7F77B929778F44A58FC2036C30BF2966 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CoreElement__switchWeaponLeft_mCC6800A9FB15B0AF99D307D795436B1DB0363451_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// _weaponLeftIndex++;
		int32_t L_0 = __this->get__weaponLeftIndex_29();
		__this->set__weaponLeftIndex_29(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)));
		// if (_weaponLeftIndex >= WEAPON_LEFT_LIST.Length)
		int32_t L_1 = __this->get__weaponLeftIndex_29();
		IL2CPP_RUNTIME_CLASS_INIT(CoreElement_tE4AA9E2B7F77B929778F44A58FC2036C30BF2966_il2cpp_TypeInfo_var);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_2 = ((CoreElement_tE4AA9E2B7F77B929778F44A58FC2036C30BF2966_StaticFields*)il2cpp_codegen_static_fields_for(CoreElement_tE4AA9E2B7F77B929778F44A58FC2036C30BF2966_il2cpp_TypeInfo_var))->get_WEAPON_LEFT_LIST_13();
		NullCheck(L_2);
		if ((((int32_t)L_1) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))))))
		{
			goto IL_0024;
		}
	}
	{
		// _weaponLeftIndex = 0;
		__this->set__weaponLeftIndex_29(0);
	}

IL_0024:
	{
		// _weaponLeft.eventDispatcher.RemoveDBEventListener(DragonBones.EventObject.FRAME_EVENT, _frameEventHandler);
		Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B * L_3 = __this->get__weaponLeft_36();
		NullCheck(L_3);
		RuntimeObject* L_4 = Armature_get_eventDispatcher_mDE19324200719B8284AEC29938604B570BD7691B_inline(L_3, /*hidden argument*/NULL);
		ListenerDelegate_1_t8A277CC3A9ACC68F27B82B7C1E142E28D68A6DAF * L_5 = (ListenerDelegate_1_t8A277CC3A9ACC68F27B82B7C1E142E28D68A6DAF *)il2cpp_codegen_object_new(ListenerDelegate_1_t8A277CC3A9ACC68F27B82B7C1E142E28D68A6DAF_il2cpp_TypeInfo_var);
		ListenerDelegate_1__ctor_mC34C4E5351179C452D65C0343F73C1AE063AD496(L_5, __this, (intptr_t)((intptr_t)CoreElement__frameEventHandler_m961FB97ED79E8E8530E35BE802539FAD74CB7D42_RuntimeMethod_var), /*hidden argument*/ListenerDelegate_1__ctor_mC34C4E5351179C452D65C0343F73C1AE063AD496_RuntimeMethod_var);
		NullCheck(L_4);
		InterfaceActionInvoker2< String_t*, ListenerDelegate_1_t8A277CC3A9ACC68F27B82B7C1E142E28D68A6DAF * >::Invoke(3 /* System.Void DragonBones.IEventDispatcher`1<DragonBones.EventObject>::RemoveDBEventListener(System.String,DragonBones.ListenerDelegate`1<T>) */, IEventDispatcher_1_t8F93E86A86FD52D4B0571E8836C4D53DE9398D1B_il2cpp_TypeInfo_var, L_4, _stringLiteralE1E7AC89DEC86373BCAFD0F17BBBCC6751D4E73D, L_5);
		// var weaponName = WEAPON_LEFT_LIST[_weaponLeftIndex];
		IL2CPP_RUNTIME_CLASS_INIT(CoreElement_tE4AA9E2B7F77B929778F44A58FC2036C30BF2966_il2cpp_TypeInfo_var);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_6 = ((CoreElement_tE4AA9E2B7F77B929778F44A58FC2036C30BF2966_StaticFields*)il2cpp_codegen_static_fields_for(CoreElement_tE4AA9E2B7F77B929778F44A58FC2036C30BF2966_il2cpp_TypeInfo_var))->get_WEAPON_LEFT_LIST_13();
		int32_t L_7 = __this->get__weaponLeftIndex_29();
		NullCheck(L_6);
		int32_t L_8 = L_7;
		String_t* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_0 = L_9;
		// _weaponLeft = UnityFactory.factory.BuildArmature(weaponName);
		IL2CPP_RUNTIME_CLASS_INIT(UnityFactory_t170550F12743A129F88E7D1990F607AB2B35C102_il2cpp_TypeInfo_var);
		UnityFactory_t170550F12743A129F88E7D1990F607AB2B35C102 * L_10 = UnityFactory_get_factory_mAB42A18D9FFD7DA2AD11C1084F158EF6491F35DE(/*hidden argument*/NULL);
		String_t* L_11 = V_0;
		NullCheck(L_10);
		Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B * L_12 = VirtFuncInvoker4< Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B *, String_t*, String_t*, String_t*, String_t* >::Invoke(12 /* DragonBones.Armature DragonBones.BaseFactory::BuildArmature(System.String,System.String,System.String,System.String) */, L_10, L_11, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, (String_t*)NULL, (String_t*)NULL);
		__this->set__weaponLeft_36(L_12);
		// _armatureComponent.armature.GetSlot("weapon_l").childArmature = _weaponLeft;
		UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7 * L_13 = __this->get__armatureComponent_35();
		NullCheck(L_13);
		Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B * L_14 = UnityArmatureComponent_get_armature_m52B12A650A67494C88B824EA4EF071F4C6C77A49_inline(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		Slot_t9D06B371824C1B67E43A10A17D18BC3EF71E3867 * L_15 = Armature_GetSlot_m81C3F2C377DF8A76A98FBE724344EB6E970A319C(L_14, _stringLiteral51A22438BF55663C476DB0C287827A6035F3D41C, /*hidden argument*/NULL);
		Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B * L_16 = __this->get__weaponLeft_36();
		NullCheck(L_15);
		Slot_set_childArmature_m3CCD09A3020C1B9CA0003515A8F11915B7507B5A(L_15, L_16, /*hidden argument*/NULL);
		// _weaponLeft.eventDispatcher.AddDBEventListener(DragonBones.EventObject.FRAME_EVENT, _frameEventHandler);
		Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B * L_17 = __this->get__weaponLeft_36();
		NullCheck(L_17);
		RuntimeObject* L_18 = Armature_get_eventDispatcher_mDE19324200719B8284AEC29938604B570BD7691B_inline(L_17, /*hidden argument*/NULL);
		ListenerDelegate_1_t8A277CC3A9ACC68F27B82B7C1E142E28D68A6DAF * L_19 = (ListenerDelegate_1_t8A277CC3A9ACC68F27B82B7C1E142E28D68A6DAF *)il2cpp_codegen_object_new(ListenerDelegate_1_t8A277CC3A9ACC68F27B82B7C1E142E28D68A6DAF_il2cpp_TypeInfo_var);
		ListenerDelegate_1__ctor_mC34C4E5351179C452D65C0343F73C1AE063AD496(L_19, __this, (intptr_t)((intptr_t)CoreElement__frameEventHandler_m961FB97ED79E8E8530E35BE802539FAD74CB7D42_RuntimeMethod_var), /*hidden argument*/ListenerDelegate_1__ctor_mC34C4E5351179C452D65C0343F73C1AE063AD496_RuntimeMethod_var);
		NullCheck(L_18);
		InterfaceActionInvoker2< String_t*, ListenerDelegate_1_t8A277CC3A9ACC68F27B82B7C1E142E28D68A6DAF * >::Invoke(2 /* System.Void DragonBones.IEventDispatcher`1<DragonBones.EventObject>::AddDBEventListener(System.String,DragonBones.ListenerDelegate`1<T>) */, IEventDispatcher_1_t8F93E86A86FD52D4B0571E8836C4D53DE9398D1B_il2cpp_TypeInfo_var, L_18, _stringLiteralE1E7AC89DEC86373BCAFD0F17BBBCC6751D4E73D, L_19);
		// }
		return;
	}
}
// System.Void coreElement.CoreElement::_switchWeaponRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreElement__switchWeaponRight_m6F556857DF58079CB4255B43949C60140931C355 (CoreElement_tE4AA9E2B7F77B929778F44A58FC2036C30BF2966 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CoreElement__switchWeaponRight_m6F556857DF58079CB4255B43949C60140931C355_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// _weaponRightIndex++;
		int32_t L_0 = __this->get__weaponRightIndex_30();
		__this->set__weaponRightIndex_30(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)));
		// if (_weaponRightIndex >= WEAPON_RIGHT_LIST.Length)
		int32_t L_1 = __this->get__weaponRightIndex_30();
		IL2CPP_RUNTIME_CLASS_INIT(CoreElement_tE4AA9E2B7F77B929778F44A58FC2036C30BF2966_il2cpp_TypeInfo_var);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_2 = ((CoreElement_tE4AA9E2B7F77B929778F44A58FC2036C30BF2966_StaticFields*)il2cpp_codegen_static_fields_for(CoreElement_tE4AA9E2B7F77B929778F44A58FC2036C30BF2966_il2cpp_TypeInfo_var))->get_WEAPON_RIGHT_LIST_14();
		NullCheck(L_2);
		if ((((int32_t)L_1) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))))))
		{
			goto IL_0024;
		}
	}
	{
		// _weaponRightIndex = 0;
		__this->set__weaponRightIndex_30(0);
	}

IL_0024:
	{
		// _weaponRight.eventDispatcher.RemoveDBEventListener(EventObject.FRAME_EVENT, _frameEventHandler);
		Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B * L_3 = __this->get__weaponRight_37();
		NullCheck(L_3);
		RuntimeObject* L_4 = Armature_get_eventDispatcher_mDE19324200719B8284AEC29938604B570BD7691B_inline(L_3, /*hidden argument*/NULL);
		ListenerDelegate_1_t8A277CC3A9ACC68F27B82B7C1E142E28D68A6DAF * L_5 = (ListenerDelegate_1_t8A277CC3A9ACC68F27B82B7C1E142E28D68A6DAF *)il2cpp_codegen_object_new(ListenerDelegate_1_t8A277CC3A9ACC68F27B82B7C1E142E28D68A6DAF_il2cpp_TypeInfo_var);
		ListenerDelegate_1__ctor_mC34C4E5351179C452D65C0343F73C1AE063AD496(L_5, __this, (intptr_t)((intptr_t)CoreElement__frameEventHandler_m961FB97ED79E8E8530E35BE802539FAD74CB7D42_RuntimeMethod_var), /*hidden argument*/ListenerDelegate_1__ctor_mC34C4E5351179C452D65C0343F73C1AE063AD496_RuntimeMethod_var);
		NullCheck(L_4);
		InterfaceActionInvoker2< String_t*, ListenerDelegate_1_t8A277CC3A9ACC68F27B82B7C1E142E28D68A6DAF * >::Invoke(3 /* System.Void DragonBones.IEventDispatcher`1<DragonBones.EventObject>::RemoveDBEventListener(System.String,DragonBones.ListenerDelegate`1<T>) */, IEventDispatcher_1_t8F93E86A86FD52D4B0571E8836C4D53DE9398D1B_il2cpp_TypeInfo_var, L_4, _stringLiteralE1E7AC89DEC86373BCAFD0F17BBBCC6751D4E73D, L_5);
		// var weaponName = WEAPON_RIGHT_LIST[_weaponRightIndex];
		IL2CPP_RUNTIME_CLASS_INIT(CoreElement_tE4AA9E2B7F77B929778F44A58FC2036C30BF2966_il2cpp_TypeInfo_var);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_6 = ((CoreElement_tE4AA9E2B7F77B929778F44A58FC2036C30BF2966_StaticFields*)il2cpp_codegen_static_fields_for(CoreElement_tE4AA9E2B7F77B929778F44A58FC2036C30BF2966_il2cpp_TypeInfo_var))->get_WEAPON_RIGHT_LIST_14();
		int32_t L_7 = __this->get__weaponRightIndex_30();
		NullCheck(L_6);
		int32_t L_8 = L_7;
		String_t* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_0 = L_9;
		// _weaponRight = UnityFactory.factory.BuildArmature(weaponName);
		IL2CPP_RUNTIME_CLASS_INIT(UnityFactory_t170550F12743A129F88E7D1990F607AB2B35C102_il2cpp_TypeInfo_var);
		UnityFactory_t170550F12743A129F88E7D1990F607AB2B35C102 * L_10 = UnityFactory_get_factory_mAB42A18D9FFD7DA2AD11C1084F158EF6491F35DE(/*hidden argument*/NULL);
		String_t* L_11 = V_0;
		NullCheck(L_10);
		Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B * L_12 = VirtFuncInvoker4< Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B *, String_t*, String_t*, String_t*, String_t* >::Invoke(12 /* DragonBones.Armature DragonBones.BaseFactory::BuildArmature(System.String,System.String,System.String,System.String) */, L_10, L_11, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, (String_t*)NULL, (String_t*)NULL);
		__this->set__weaponRight_37(L_12);
		// _armatureComponent.armature.GetSlot("weapon_r").childArmature = _weaponRight;
		UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7 * L_13 = __this->get__armatureComponent_35();
		NullCheck(L_13);
		Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B * L_14 = UnityArmatureComponent_get_armature_m52B12A650A67494C88B824EA4EF071F4C6C77A49_inline(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		Slot_t9D06B371824C1B67E43A10A17D18BC3EF71E3867 * L_15 = Armature_GetSlot_m81C3F2C377DF8A76A98FBE724344EB6E970A319C(L_14, _stringLiteral7032A76D8FAE8824CBC795703B9630DAF305D090, /*hidden argument*/NULL);
		Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B * L_16 = __this->get__weaponRight_37();
		NullCheck(L_15);
		Slot_set_childArmature_m3CCD09A3020C1B9CA0003515A8F11915B7507B5A(L_15, L_16, /*hidden argument*/NULL);
		// _weaponRight.eventDispatcher.AddDBEventListener(EventObject.FRAME_EVENT, _frameEventHandler);
		Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B * L_17 = __this->get__weaponRight_37();
		NullCheck(L_17);
		RuntimeObject* L_18 = Armature_get_eventDispatcher_mDE19324200719B8284AEC29938604B570BD7691B_inline(L_17, /*hidden argument*/NULL);
		ListenerDelegate_1_t8A277CC3A9ACC68F27B82B7C1E142E28D68A6DAF * L_19 = (ListenerDelegate_1_t8A277CC3A9ACC68F27B82B7C1E142E28D68A6DAF *)il2cpp_codegen_object_new(ListenerDelegate_1_t8A277CC3A9ACC68F27B82B7C1E142E28D68A6DAF_il2cpp_TypeInfo_var);
		ListenerDelegate_1__ctor_mC34C4E5351179C452D65C0343F73C1AE063AD496(L_19, __this, (intptr_t)((intptr_t)CoreElement__frameEventHandler_m961FB97ED79E8E8530E35BE802539FAD74CB7D42_RuntimeMethod_var), /*hidden argument*/ListenerDelegate_1__ctor_mC34C4E5351179C452D65C0343F73C1AE063AD496_RuntimeMethod_var);
		NullCheck(L_18);
		InterfaceActionInvoker2< String_t*, ListenerDelegate_1_t8A277CC3A9ACC68F27B82B7C1E142E28D68A6DAF * >::Invoke(2 /* System.Void DragonBones.IEventDispatcher`1<DragonBones.EventObject>::AddDBEventListener(System.String,DragonBones.ListenerDelegate`1<T>) */, IEventDispatcher_1_t8F93E86A86FD52D4B0571E8836C4D53DE9398D1B_il2cpp_TypeInfo_var, L_18, _stringLiteralE1E7AC89DEC86373BCAFD0F17BBBCC6751D4E73D, L_19);
		// }
		return;
	}
}
// System.Void coreElement.CoreElement::_switchSkin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreElement__switchSkin_mC3918BE0FE22C4E4FAE642C604E0A9F58C96E83A (CoreElement_tE4AA9E2B7F77B929778F44A58FC2036C30BF2966 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CoreElement__switchSkin_mC3918BE0FE22C4E4FAE642C604E0A9F58C96E83A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	SkinData_t4A40D94C41796F66FDC9D9EDC4179A56CE3E8D43 * V_1 = NULL;
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * V_2 = NULL;
	{
		// this._skinIndex++;
		int32_t L_0 = __this->get__skinIndex_28();
		__this->set__skinIndex_28(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)));
		// this._skinIndex %= SKINS.Length;
		int32_t L_1 = __this->get__skinIndex_28();
		IL2CPP_RUNTIME_CLASS_INIT(CoreElement_tE4AA9E2B7F77B929778F44A58FC2036C30BF2966_il2cpp_TypeInfo_var);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_2 = ((CoreElement_tE4AA9E2B7F77B929778F44A58FC2036C30BF2966_StaticFields*)il2cpp_codegen_static_fields_for(CoreElement_tE4AA9E2B7F77B929778F44A58FC2036C30BF2966_il2cpp_TypeInfo_var))->get_SKINS_15();
		NullCheck(L_2);
		__this->set__skinIndex_28(((int32_t)((int32_t)L_1%(int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))))));
		// var skinName = SKINS[this._skinIndex];
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_3 = ((CoreElement_tE4AA9E2B7F77B929778F44A58FC2036C30BF2966_StaticFields*)il2cpp_codegen_static_fields_for(CoreElement_tE4AA9E2B7F77B929778F44A58FC2036C30BF2966_il2cpp_TypeInfo_var))->get_SKINS_15();
		int32_t L_4 = __this->get__skinIndex_28();
		NullCheck(L_3);
		int32_t L_5 = L_4;
		String_t* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_0 = L_6;
		// var skinData = UnityFactory.factory.GetArmatureData(skinName).defaultSkin;
		IL2CPP_RUNTIME_CLASS_INIT(UnityFactory_t170550F12743A129F88E7D1990F607AB2B35C102_il2cpp_TypeInfo_var);
		UnityFactory_t170550F12743A129F88E7D1990F607AB2B35C102 * L_7 = UnityFactory_get_factory_mAB42A18D9FFD7DA2AD11C1084F158EF6491F35DE(/*hidden argument*/NULL);
		String_t* L_8 = V_0;
		NullCheck(L_7);
		ArmatureData_tC9AAFB92908EDD32B5EBC30FFFE4D518EA64FC9C * L_9 = VirtFuncInvoker2< ArmatureData_tC9AAFB92908EDD32B5EBC30FFFE4D518EA64FC9C *, String_t*, String_t* >::Invoke(10 /* DragonBones.ArmatureData DragonBones.BaseFactory::GetArmatureData(System.String,System.String) */, L_7, L_8, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		NullCheck(L_9);
		SkinData_t4A40D94C41796F66FDC9D9EDC4179A56CE3E8D43 * L_10 = L_9->get_defaultSkin_21();
		V_1 = L_10;
		// List<string> exclude = new List<string>();
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_11 = (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *)il2cpp_codegen_object_new(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_il2cpp_TypeInfo_var);
		List_1__ctor_mDA22758D73530683C950C5CCF39BDB4E7E1F3F06(L_11, /*hidden argument*/List_1__ctor_mDA22758D73530683C950C5CCF39BDB4E7E1F3F06_RuntimeMethod_var);
		V_2 = L_11;
		// exclude.Add("weapon_l");
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_12 = V_2;
		NullCheck(L_12);
		List_1_Add_mA348FA1140766465189459D25B01EB179001DE83(L_12, _stringLiteral51A22438BF55663C476DB0C287827A6035F3D41C, /*hidden argument*/List_1_Add_mA348FA1140766465189459D25B01EB179001DE83_RuntimeMethod_var);
		// exclude.Add("weapon_r");
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_13 = V_2;
		NullCheck(L_13);
		List_1_Add_mA348FA1140766465189459D25B01EB179001DE83(L_13, _stringLiteral7032A76D8FAE8824CBC795703B9630DAF305D090, /*hidden argument*/List_1_Add_mA348FA1140766465189459D25B01EB179001DE83_RuntimeMethod_var);
		// UnityFactory.factory.ReplaceSkin(this._armatureComponent.armature, skinData, false, exclude);
		UnityFactory_t170550F12743A129F88E7D1990F607AB2B35C102 * L_14 = UnityFactory_get_factory_mAB42A18D9FFD7DA2AD11C1084F158EF6491F35DE(/*hidden argument*/NULL);
		UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7 * L_15 = __this->get__armatureComponent_35();
		NullCheck(L_15);
		Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B * L_16 = UnityArmatureComponent_get_armature_m52B12A650A67494C88B824EA4EF071F4C6C77A49_inline(L_15, /*hidden argument*/NULL);
		SkinData_t4A40D94C41796F66FDC9D9EDC4179A56CE3E8D43 * L_17 = V_1;
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_18 = V_2;
		NullCheck(L_14);
		BaseFactory_ReplaceSkin_m57C39215429A92F29B4BA436C50DE43688AA5271(L_14, L_16, L_17, (bool)0, L_18, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void coreElement.CoreElement::_aim(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreElement__aim_m64EDB6E2CAE10C088BAA0782E811CB3D3D2ACECE (CoreElement_tE4AA9E2B7F77B929778F44A58FC2036C30BF2966 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		// if (_aimDir == 0)
		int32_t L_0 = __this->get__aimDir_33();
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		// _aimDir = 10;
		__this->set__aimDir_33(((int32_t)10));
	}

IL_0010:
	{
		// _target.x = x;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_1 = __this->get_address_of__target_42();
		float L_2 = ___x0;
		L_1->set_x_0(L_2);
		// _target.y = y;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_3 = __this->get_address_of__target_42();
		float L_4 = ___y1;
		L_3->set_y_1(L_4);
		// }
		return;
	}
}
// System.Void coreElement.CoreElement::_attack(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreElement__attack_m2DF19529B3320A696FCA6811FF9F9807B7EE14DD (CoreElement_tE4AA9E2B7F77B929778F44A58FC2036C30BF2966 * __this, bool ___isAttacking0, const RuntimeMethod* method)
{
	{
		// if (_isAttackingA == isAttacking)
		bool L_0 = __this->get__isAttackingA_26();
		bool L_1 = ___isAttacking0;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_000a;
		}
	}
	{
		// return;
		return;
	}

IL_000a:
	{
		// _isAttackingA = isAttacking;
		bool L_2 = ___isAttacking0;
		__this->set__isAttackingA_26(L_2);
		// }
		return;
	}
}
// System.Void coreElement.CoreElement::_fire(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreElement__fire_mB2AA09E50D404EA9E880FCC82333212511544152 (CoreElement_tE4AA9E2B7F77B929778F44A58FC2036C30BF2966 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___firePoint0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CoreElement__fire_mB2AA09E50D404EA9E880FCC82333212511544152_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Bullet_tE4257FB0F05939D36A937D95AD60A2AC7E17A747 * V_0 = NULL;
	float V_1 = 0.0f;
	UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7 * G_B2_0 = NULL;
	UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7 * G_B1_0 = NULL;
	float G_B3_0 = 0.0f;
	UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7 * G_B3_1 = NULL;
	{
		// firePoint.x += Random.Range(-0.01f, 0.01f);
		float* L_0 = (&___firePoint0)->get_address_of_x_2();
		float* L_1 = L_0;
		float L_2 = *((float*)L_1);
		float L_3 = Random_Range_m2844A4A71C86BDF83A12D97FC6DD95278E87E384((-0.01f), (0.01f), /*hidden argument*/NULL);
		*((float*)L_1) = (float)((float)il2cpp_codegen_add((float)L_2, (float)L_3));
		// firePoint.y += Random.Range(-0.01f, 0.01f);
		float* L_4 = (&___firePoint0)->get_address_of_y_3();
		float* L_5 = L_4;
		float L_6 = *((float*)L_5);
		float L_7 = Random_Range_m2844A4A71C86BDF83A12D97FC6DD95278E87E384((-0.01f), (0.01f), /*hidden argument*/NULL);
		*((float*)L_5) = (float)((float)il2cpp_codegen_add((float)L_6, (float)L_7));
		// firePoint.z = -0.2f;
		(&___firePoint0)->set_z_4((-0.2f));
		// var bulletArmatureComonponnet = UnityFactory.factory.BuildArmatureComponent("bullet_01");
		IL2CPP_RUNTIME_CLASS_INIT(UnityFactory_t170550F12743A129F88E7D1990F607AB2B35C102_il2cpp_TypeInfo_var);
		UnityFactory_t170550F12743A129F88E7D1990F607AB2B35C102 * L_8 = UnityFactory_get_factory_mAB42A18D9FFD7DA2AD11C1084F158EF6491F35DE(/*hidden argument*/NULL);
		NullCheck(L_8);
		UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7 * L_9 = UnityFactory_BuildArmatureComponent_mAEF67786ED95E4368C4FEB16A9727EFE84B439A4(L_8, _stringLiteralFF0FAF076E066BBE8245E7A816A720E93991AD15, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL, (bool)0, /*hidden argument*/NULL);
		// var bulletComonponnet = bulletArmatureComonponnet.gameObject.AddComponent<Bullet>();
		UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7 * L_10 = L_9;
		NullCheck(L_10);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_11 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		Bullet_tE4257FB0F05939D36A937D95AD60A2AC7E17A747 * L_12 = GameObject_AddComponent_TisBullet_tE4257FB0F05939D36A937D95AD60A2AC7E17A747_m1DDC6F8E40B148E672BAC7109DE3E68B6CE075EF(L_11, /*hidden argument*/GameObject_AddComponent_TisBullet_tE4257FB0F05939D36A937D95AD60A2AC7E17A747_m1DDC6F8E40B148E672BAC7109DE3E68B6CE075EF_RuntimeMethod_var);
		V_0 = L_12;
		// var radian = _faceDir < 0 ? Mathf.PI - _aimRadian : _aimRadian;
		int32_t L_13 = __this->get__faceDir_31();
		G_B1_0 = L_10;
		if ((((int32_t)L_13) < ((int32_t)0)))
		{
			G_B2_0 = L_10;
			goto IL_007d;
		}
	}
	{
		float L_14 = __this->get__aimRadian_34();
		G_B3_0 = L_14;
		G_B3_1 = G_B1_0;
		goto IL_0089;
	}

IL_007d:
	{
		float L_15 = __this->get__aimRadian_34();
		G_B3_0 = ((float)il2cpp_codegen_subtract((float)(3.14159274f), (float)L_15));
		G_B3_1 = G_B2_0;
	}

IL_0089:
	{
		V_1 = G_B3_0;
		// bulletArmatureComonponnet.animation.timeScale = _armatureComponent.animation.timeScale;
		NullCheck(G_B3_1);
		Animation_t3E64FBA6FBD6680C6EF991689446EBB237888A7C * L_16 = UnityArmatureComponent_get_animation_m54D8BBEA81DAEFBFD27DD998FE68D28B69A5A964(G_B3_1, /*hidden argument*/NULL);
		UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7 * L_17 = __this->get__armatureComponent_35();
		NullCheck(L_17);
		Animation_t3E64FBA6FBD6680C6EF991689446EBB237888A7C * L_18 = UnityArmatureComponent_get_animation_m54D8BBEA81DAEFBFD27DD998FE68D28B69A5A964(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		float L_19 = L_18->get_timeScale_5();
		NullCheck(L_16);
		L_16->set_timeScale_5(L_19);
		// bulletComonponnet.transform.position = firePoint;
		Bullet_tE4257FB0F05939D36A937D95AD60A2AC7E17A747 * L_20 = V_0;
		NullCheck(L_20);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_21 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_20, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22 = ___firePoint0;
		NullCheck(L_21);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_21, L_22, /*hidden argument*/NULL);
		// bulletComonponnet.Init("fire_effect_01", radian + Random.Range(-0.01f, 0.01f), 0.4f);
		Bullet_tE4257FB0F05939D36A937D95AD60A2AC7E17A747 * L_23 = V_0;
		float L_24 = V_1;
		float L_25 = Random_Range_m2844A4A71C86BDF83A12D97FC6DD95278E87E384((-0.01f), (0.01f), /*hidden argument*/NULL);
		NullCheck(L_23);
		Bullet_Init_mC43D30E03813A89FB382C69AF69800FD20825DF3(L_23, _stringLiteral9FDF135176239C8744B135A5443BF1E8B17D7EA5, ((float)il2cpp_codegen_add((float)L_24, (float)L_25)), (0.4f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void coreElement.CoreElement::_updateAnimation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreElement__updateAnimation_mC1524720EA2C0DEBF3F68F710BD104D72EA80C27 (CoreElement_tE4AA9E2B7F77B929778F44A58FC2036C30BF2966 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CoreElement__updateAnimation_mC1524720EA2C0DEBF3F68F710BD104D72EA80C27_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_isJumpingA || _isJumpingB)
		bool L_0 = __this->get__isJumpingA_23();
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool L_1 = __this->get__isJumpingB_24();
		if (!L_1)
		{
			goto IL_0011;
		}
	}

IL_0010:
	{
		// return;
		return;
	}

IL_0011:
	{
		// if (_isSquating)
		bool L_2 = __this->get__isSquating_25();
		if (!L_2)
		{
			goto IL_0059;
		}
	}
	{
		// _speed.x = 0.0f;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_3 = __this->get_address_of__speed_41();
		L_3->set_x_0((0.0f));
		// _armatureComponent.animation.FadeIn("squat", -1.0f, -1, 0, NORMAL_ANIMATION_GROUP).resetToPose = false;
		UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7 * L_4 = __this->get__armatureComponent_35();
		NullCheck(L_4);
		Animation_t3E64FBA6FBD6680C6EF991689446EBB237888A7C * L_5 = UnityArmatureComponent_get_animation_m54D8BBEA81DAEFBFD27DD998FE68D28B69A5A964(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		AnimationState_tBA6EAAD27D56DD26A61304C93676C337EB761238 * L_6 = Animation_FadeIn_m6B9CE692F53E207F6EAD187FAB98440739E849F2(L_5, _stringLiteral5CF7FF791D693EE5AB52561E6F23CC8A17030991, (-1.0f), (-1), 0, _stringLiteral9C2A6E4809AEEF7B7712CA4DB05A681452F4F748, 3, /*hidden argument*/NULL);
		NullCheck(L_6);
		L_6->set_resetToPose_8((bool)0);
		// _walkState = null;
		__this->set__walkState_39((AnimationState_tBA6EAAD27D56DD26A61304C93676C337EB761238 *)NULL);
		// return;
		return;
	}

IL_0059:
	{
		// if (_moveDir == 0.0f)
		int32_t L_7 = __this->get__moveDir_32();
		if ((!(((float)(((float)((float)L_7)))) == ((float)(0.0f)))))
		{
			goto IL_00a7;
		}
	}
	{
		// _speed.x = 0.0f;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_8 = __this->get_address_of__speed_41();
		L_8->set_x_0((0.0f));
		// _armatureComponent.animation.FadeIn("idle", -1.0f, -1, 0, NORMAL_ANIMATION_GROUP).resetToPose = false;
		UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7 * L_9 = __this->get__armatureComponent_35();
		NullCheck(L_9);
		Animation_t3E64FBA6FBD6680C6EF991689446EBB237888A7C * L_10 = UnityArmatureComponent_get_animation_m54D8BBEA81DAEFBFD27DD998FE68D28B69A5A964(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		AnimationState_tBA6EAAD27D56DD26A61304C93676C337EB761238 * L_11 = Animation_FadeIn_m6B9CE692F53E207F6EAD187FAB98440739E849F2(L_10, _stringLiteral1ADBCC344B317C2F3BD64FDAC273F8B0DC410CDF, (-1.0f), (-1), 0, _stringLiteral9C2A6E4809AEEF7B7712CA4DB05A681452F4F748, 3, /*hidden argument*/NULL);
		NullCheck(L_11);
		L_11->set_resetToPose_8((bool)0);
		// _walkState = null;
		__this->set__walkState_39((AnimationState_tBA6EAAD27D56DD26A61304C93676C337EB761238 *)NULL);
		// }
		return;
	}

IL_00a7:
	{
		// if (_walkState == null)
		AnimationState_tBA6EAAD27D56DD26A61304C93676C337EB761238 * L_12 = __this->get__walkState_39();
		if (L_12)
		{
			goto IL_00e3;
		}
	}
	{
		// _walkState = _armatureComponent.animation.FadeIn("walk", -1.0f, -1, 0, NORMAL_ANIMATION_GROUP);
		UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7 * L_13 = __this->get__armatureComponent_35();
		NullCheck(L_13);
		Animation_t3E64FBA6FBD6680C6EF991689446EBB237888A7C * L_14 = UnityArmatureComponent_get_animation_m54D8BBEA81DAEFBFD27DD998FE68D28B69A5A964(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		AnimationState_tBA6EAAD27D56DD26A61304C93676C337EB761238 * L_15 = Animation_FadeIn_m6B9CE692F53E207F6EAD187FAB98440739E849F2(L_14, _stringLiteralDF06B147F778D46FAD19B32B6757A3ABC3AF41DE, (-1.0f), (-1), 0, _stringLiteral9C2A6E4809AEEF7B7712CA4DB05A681452F4F748, 3, /*hidden argument*/NULL);
		__this->set__walkState_39(L_15);
		// this._walkState.resetToPose = false;
		AnimationState_tBA6EAAD27D56DD26A61304C93676C337EB761238 * L_16 = __this->get__walkState_39();
		NullCheck(L_16);
		L_16->set_resetToPose_8((bool)0);
	}

IL_00e3:
	{
		// if (this._moveDir * this._faceDir > 0.0f)
		int32_t L_17 = __this->get__moveDir_32();
		int32_t L_18 = __this->get__faceDir_31();
		if ((!(((float)(((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)L_17, (int32_t)L_18)))))) > ((float)(0.0f)))))
		{
			goto IL_010a;
		}
	}
	{
		// this._walkState.timeScale = MAX_MOVE_SPEED_FRONT / NORMALIZE_MOVE_SPEED;
		AnimationState_tBA6EAAD27D56DD26A61304C93676C337EB761238 * L_19 = __this->get__walkState_39();
		NullCheck(L_19);
		L_19->set_timeScale_11((1.4f));
		// }
		goto IL_011a;
	}

IL_010a:
	{
		// this._walkState.timeScale = -MAX_MOVE_SPEED_BACK / NORMALIZE_MOVE_SPEED;
		AnimationState_tBA6EAAD27D56DD26A61304C93676C337EB761238 * L_20 = __this->get__walkState_39();
		NullCheck(L_20);
		L_20->set_timeScale_11((-1.0f));
	}

IL_011a:
	{
		// if (this._moveDir * this._faceDir > 0.0f)
		int32_t L_21 = __this->get__moveDir_32();
		int32_t L_22 = __this->get__faceDir_31();
		if ((!(((float)(((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)L_21, (int32_t)L_22)))))) > ((float)(0.0f)))))
		{
			goto IL_0148;
		}
	}
	{
		// _speed.x = MAX_MOVE_SPEED_FRONT * this._faceDir;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_23 = __this->get_address_of__speed_41();
		int32_t L_24 = __this->get__faceDir_31();
		L_23->set_x_0(((float)il2cpp_codegen_multiply((float)(0.042f), (float)(((float)((float)L_24))))));
		// }
		return;
	}

IL_0148:
	{
		// _speed.x = -MAX_MOVE_SPEED_BACK * this._faceDir;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_25 = __this->get_address_of__speed_41();
		int32_t L_26 = __this->get__faceDir_31();
		L_25->set_x_0(((float)il2cpp_codegen_multiply((float)(-0.03f), (float)(((float)((float)L_26))))));
		// }
		return;
	}
}
// System.Void coreElement.CoreElement::_updatePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreElement__updatePosition_m0B0D060A25C424CA279E51EA1CFCBB5FD1F8F4BE (CoreElement_tE4AA9E2B7F77B929778F44A58FC2036C30BF2966 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CoreElement__updatePosition_m0B0D060A25C424CA279E51EA1CFCBB5FD1F8F4BE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (_speed.x == 0.0f && !_isJumpingB)
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_0 = __this->get_address_of__speed_41();
		float L_1 = L_0->get_x_0();
		if ((!(((float)L_1) == ((float)(0.0f)))))
		{
			goto IL_001b;
		}
	}
	{
		bool L_2 = __this->get__isJumpingB_24();
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		// return;
		return;
	}

IL_001b:
	{
		// var position = this._armatureComponent.transform.localPosition;
		UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7 * L_3 = __this->get__armatureComponent_35();
		NullCheck(L_3);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8(L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		// if (_speed.x != 0.0f)
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_6 = __this->get_address_of__speed_41();
		float L_7 = L_6->get_x_0();
		if ((((float)L_7) == ((float)(0.0f))))
		{
			goto IL_0099;
		}
	}
	{
		// position.x += _speed.x * _armatureComponent.animation.timeScale;
		float* L_8 = (&V_0)->get_address_of_x_2();
		float* L_9 = L_8;
		float L_10 = *((float*)L_9);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_11 = __this->get_address_of__speed_41();
		float L_12 = L_11->get_x_0();
		UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7 * L_13 = __this->get__armatureComponent_35();
		NullCheck(L_13);
		Animation_t3E64FBA6FBD6680C6EF991689446EBB237888A7C * L_14 = UnityArmatureComponent_get_animation_m54D8BBEA81DAEFBFD27DD998FE68D28B69A5A964(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		float L_15 = L_14->get_timeScale_5();
		*((float*)L_9) = (float)((float)il2cpp_codegen_add((float)L_10, (float)((float)il2cpp_codegen_multiply((float)L_12, (float)L_15))));
		// if (position.x < -4.0f)
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = V_0;
		float L_17 = L_16.get_x_2();
		if ((!(((float)L_17) < ((float)(-4.0f)))))
		{
			goto IL_0080;
		}
	}
	{
		// position.x = -4.0f;
		(&V_0)->set_x_2((-4.0f));
		// }
		goto IL_0099;
	}

IL_0080:
	{
		// else if (position.x > 4.0f)
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = V_0;
		float L_19 = L_18.get_x_2();
		if ((!(((float)L_19) > ((float)(4.0f)))))
		{
			goto IL_0099;
		}
	}
	{
		// position.x = 4.0f;
		(&V_0)->set_x_2((4.0f));
	}

IL_0099:
	{
		// if (_isJumpingB)
		bool L_20 = __this->get__isJumpingB_24();
		if (!L_20)
		{
			goto IL_01cd;
		}
	}
	{
		// if (_speed.y > -0.05f && _speed.y + G <= -0.05f)
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_21 = __this->get_address_of__speed_41();
		float L_22 = L_21->get_y_1();
		if ((!(((float)L_22) > ((float)(-0.05f)))))
		{
			goto IL_00f6;
		}
	}
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_23 = __this->get_address_of__speed_41();
		float L_24 = L_23->get_y_1();
		if ((!(((float)((float)il2cpp_codegen_add((float)L_24, (float)(-0.005f)))) <= ((float)(-0.05f)))))
		{
			goto IL_00f6;
		}
	}
	{
		// _armatureComponent.animation.FadeIn("jump_3", -1.0f, -1, 0, NORMAL_ANIMATION_GROUP).resetToPose = false;
		UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7 * L_25 = __this->get__armatureComponent_35();
		NullCheck(L_25);
		Animation_t3E64FBA6FBD6680C6EF991689446EBB237888A7C * L_26 = UnityArmatureComponent_get_animation_m54D8BBEA81DAEFBFD27DD998FE68D28B69A5A964(L_25, /*hidden argument*/NULL);
		NullCheck(L_26);
		AnimationState_tBA6EAAD27D56DD26A61304C93676C337EB761238 * L_27 = Animation_FadeIn_m6B9CE692F53E207F6EAD187FAB98440739E849F2(L_26, _stringLiteral02606F030B6846960D36CB5E85E5361C7DC28DF6, (-1.0f), (-1), 0, _stringLiteral9C2A6E4809AEEF7B7712CA4DB05A681452F4F748, 3, /*hidden argument*/NULL);
		NullCheck(L_27);
		L_27->set_resetToPose_8((bool)0);
	}

IL_00f6:
	{
		// _speed.y += G * _armatureComponent.animation.timeScale;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_28 = __this->get_address_of__speed_41();
		float* L_29 = L_28->get_address_of_y_1();
		float* L_30 = L_29;
		float L_31 = *((float*)L_30);
		UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7 * L_32 = __this->get__armatureComponent_35();
		NullCheck(L_32);
		Animation_t3E64FBA6FBD6680C6EF991689446EBB237888A7C * L_33 = UnityArmatureComponent_get_animation_m54D8BBEA81DAEFBFD27DD998FE68D28B69A5A964(L_32, /*hidden argument*/NULL);
		NullCheck(L_33);
		float L_34 = L_33->get_timeScale_5();
		*((float*)L_30) = (float)((float)il2cpp_codegen_add((float)L_31, (float)((float)il2cpp_codegen_multiply((float)(-0.005f), (float)L_34))));
		// position.y += _speed.y * _armatureComponent.animation.timeScale;
		float* L_35 = (&V_0)->get_address_of_y_3();
		float* L_36 = L_35;
		float L_37 = *((float*)L_36);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_38 = __this->get_address_of__speed_41();
		float L_39 = L_38->get_y_1();
		UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7 * L_40 = __this->get__armatureComponent_35();
		NullCheck(L_40);
		Animation_t3E64FBA6FBD6680C6EF991689446EBB237888A7C * L_41 = UnityArmatureComponent_get_animation_m54D8BBEA81DAEFBFD27DD998FE68D28B69A5A964(L_40, /*hidden argument*/NULL);
		NullCheck(L_41);
		float L_42 = L_41->get_timeScale_5();
		*((float*)L_36) = (float)((float)il2cpp_codegen_add((float)L_37, (float)((float)il2cpp_codegen_multiply((float)L_39, (float)L_42))));
		// if (position.y < GROUND)
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_43 = V_0;
		float L_44 = L_43.get_y_3();
		if ((!(((float)L_44) < ((float)(0.0f)))))
		{
			goto IL_01cd;
		}
	}
	{
		// position.y = GROUND;
		(&V_0)->set_y_3((0.0f));
		// _isJumpingA = false;
		__this->set__isJumpingA_23((bool)0);
		// _isJumpingB = false;
		__this->set__isJumpingB_24((bool)0);
		// _speed.x = 0.0f;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_45 = __this->get_address_of__speed_41();
		L_45->set_x_0((0.0f));
		// _speed.y = 0.0f;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_46 = __this->get_address_of__speed_41();
		L_46->set_y_1((0.0f));
		// _armatureComponent.animation.FadeIn("jump_4", -1.0f, -1, 0, NORMAL_ANIMATION_GROUP).resetToPose = false;
		UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7 * L_47 = __this->get__armatureComponent_35();
		NullCheck(L_47);
		Animation_t3E64FBA6FBD6680C6EF991689446EBB237888A7C * L_48 = UnityArmatureComponent_get_animation_m54D8BBEA81DAEFBFD27DD998FE68D28B69A5A964(L_47, /*hidden argument*/NULL);
		NullCheck(L_48);
		AnimationState_tBA6EAAD27D56DD26A61304C93676C337EB761238 * L_49 = Animation_FadeIn_m6B9CE692F53E207F6EAD187FAB98440739E849F2(L_48, _stringLiteral4AD3EF355FF76579479BCD6AB56935B79503E851, (-1.0f), (-1), 0, _stringLiteral9C2A6E4809AEEF7B7712CA4DB05A681452F4F748, 3, /*hidden argument*/NULL);
		NullCheck(L_49);
		L_49->set_resetToPose_8((bool)0);
		// if (_isSquating || _moveDir != 0.0f)
		bool L_50 = __this->get__isSquating_25();
		if (L_50)
		{
			goto IL_01c7;
		}
	}
	{
		int32_t L_51 = __this->get__moveDir_32();
		if ((((float)(((float)((float)L_51)))) == ((float)(0.0f))))
		{
			goto IL_01cd;
		}
	}

IL_01c7:
	{
		// _updateAnimation();
		CoreElement__updateAnimation_mC1524720EA2C0DEBF3F68F710BD104D72EA80C27(__this, /*hidden argument*/NULL);
	}

IL_01cd:
	{
		// this._armatureComponent.transform.localPosition = position;
		UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7 * L_52 = __this->get__armatureComponent_35();
		NullCheck(L_52);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_53 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_52, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_54 = V_0;
		NullCheck(L_53);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_53, L_54, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void coreElement.CoreElement::_updateAim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreElement__updateAim_mD34AB0E5B5FC2C636C51340F998580732CF66E40 (CoreElement_tE4AA9E2B7F77B929778F44A58FC2036C30BF2966 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CoreElement__updateAim_mD34AB0E5B5FC2C636C51340F998580732CF66E40_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	CoreElement_tE4AA9E2B7F77B929778F44A58FC2036C30BF2966 * G_B4_0 = NULL;
	CoreElement_tE4AA9E2B7F77B929778F44A58FC2036C30BF2966 * G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	CoreElement_tE4AA9E2B7F77B929778F44A58FC2036C30BF2966 * G_B5_1 = NULL;
	int32_t G_B8_0 = 0;
	{
		// if (_aimDir == 0)
		int32_t L_0 = __this->get__aimDir_33();
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// var position = this._armatureComponent.transform.localPosition;
		UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7 * L_1 = __this->get__armatureComponent_35();
		NullCheck(L_1);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// _faceDir = _target.x > position.x ? 1 : -1;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_4 = __this->get_address_of__target_42();
		float L_5 = L_4->get_x_0();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = V_0;
		float L_7 = L_6.get_x_2();
		G_B3_0 = __this;
		if ((((float)L_5) > ((float)L_7)))
		{
			G_B4_0 = __this;
			goto IL_0031;
		}
	}
	{
		G_B5_0 = (-1);
		G_B5_1 = G_B3_0;
		goto IL_0032;
	}

IL_0031:
	{
		G_B5_0 = 1;
		G_B5_1 = G_B4_0;
	}

IL_0032:
	{
		NullCheck(G_B5_1);
		G_B5_1->set__faceDir_31(G_B5_0);
		// if (_faceDir < 0.0f ? !_armatureComponent.armature.flipX : _armatureComponent.armature.flipX)
		int32_t L_8 = __this->get__faceDir_31();
		if ((((float)(((float)((float)L_8)))) < ((float)(0.0f))))
		{
			goto IL_0057;
		}
	}
	{
		UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7 * L_9 = __this->get__armatureComponent_35();
		NullCheck(L_9);
		Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B * L_10 = UnityArmatureComponent_get_armature_m52B12A650A67494C88B824EA4EF071F4C6C77A49_inline(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		bool L_11 = Armature_get_flipX_m2E43AF6C7D2D6678E6E47CDD9E7B83EAA56A3C5D_inline(L_10, /*hidden argument*/NULL);
		G_B8_0 = ((int32_t)(L_11));
		goto IL_006a;
	}

IL_0057:
	{
		UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7 * L_12 = __this->get__armatureComponent_35();
		NullCheck(L_12);
		Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B * L_13 = UnityArmatureComponent_get_armature_m52B12A650A67494C88B824EA4EF071F4C6C77A49_inline(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		bool L_14 = Armature_get_flipX_m2E43AF6C7D2D6678E6E47CDD9E7B83EAA56A3C5D_inline(L_13, /*hidden argument*/NULL);
		G_B8_0 = ((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
	}

IL_006a:
	{
		if (!G_B8_0)
		{
			goto IL_009d;
		}
	}
	{
		// _armatureComponent.armature.flipX = !_armatureComponent.armature.flipX;
		UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7 * L_15 = __this->get__armatureComponent_35();
		NullCheck(L_15);
		Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B * L_16 = UnityArmatureComponent_get_armature_m52B12A650A67494C88B824EA4EF071F4C6C77A49_inline(L_15, /*hidden argument*/NULL);
		UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7 * L_17 = __this->get__armatureComponent_35();
		NullCheck(L_17);
		Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B * L_18 = UnityArmatureComponent_get_armature_m52B12A650A67494C88B824EA4EF071F4C6C77A49_inline(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		bool L_19 = Armature_get_flipX_m2E43AF6C7D2D6678E6E47CDD9E7B83EAA56A3C5D_inline(L_18, /*hidden argument*/NULL);
		NullCheck(L_16);
		Armature_set_flipX_mC6B16EAA769AEF623D804BC68BF5157562E0AACA(L_16, (bool)((((int32_t)L_19) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		// if (_moveDir != 0)
		int32_t L_20 = __this->get__moveDir_32();
		if (!L_20)
		{
			goto IL_009d;
		}
	}
	{
		// _updateAnimation();
		CoreElement__updateAnimation_mC1524720EA2C0DEBF3F68F710BD104D72EA80C27(__this, /*hidden argument*/NULL);
	}

IL_009d:
	{
		// var aimOffsetY = _armatureComponent.armature.GetBone("chest").global.y * this.transform.localScale.y;
		UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7 * L_21 = __this->get__armatureComponent_35();
		NullCheck(L_21);
		Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B * L_22 = UnityArmatureComponent_get_armature_m52B12A650A67494C88B824EA4EF071F4C6C77A49_inline(L_21, /*hidden argument*/NULL);
		NullCheck(L_22);
		Bone_tAFFFF52723C77703DAB65D003E9A418C2766C809 * L_23 = Armature_GetBone_mAD8B174651CEA248A9AE4C00C19925CE968CDFFF(L_22, _stringLiteralBE3EE18195B6BAA66ECFEB1E4AA2E31A6CDDE4CA, /*hidden argument*/NULL);
		NullCheck(L_23);
		Transform_tE7D42961E6A4F1135373F19306753C2F35947B15 * L_24 = ((TransformObject_t5E60702D2A905146006F63D15443CCD42AB5136A *)L_23)->get_global_9();
		NullCheck(L_24);
		float L_25 = L_24->get_y_7();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_26 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_26);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_26, /*hidden argument*/NULL);
		float L_28 = L_27.get_y_3();
		V_1 = ((float)il2cpp_codegen_multiply((float)L_25, (float)L_28));
		// if (_faceDir > 0)
		int32_t L_29 = __this->get__faceDir_31();
		if ((((int32_t)L_29) <= ((int32_t)0)))
		{
			goto IL_010b;
		}
	}
	{
		// _aimRadian = Mathf.Atan2(-(_target.y - position.y - aimOffsetY), _target.x - position.x);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_30 = __this->get_address_of__target_42();
		float L_31 = L_30->get_y_1();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_32 = V_0;
		float L_33 = L_32.get_y_3();
		float L_34 = V_1;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_35 = __this->get_address_of__target_42();
		float L_36 = L_35->get_x_0();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_37 = V_0;
		float L_38 = L_37.get_x_2();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_39 = atan2f(((-((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_subtract((float)L_31, (float)L_33)), (float)L_34)))), ((float)il2cpp_codegen_subtract((float)L_36, (float)L_38)));
		__this->set__aimRadian_34(L_39);
		// }
		goto IL_0162;
	}

IL_010b:
	{
		// _aimRadian = Mathf.PI - Mathf.Atan2(-(_target.y - position.y - aimOffsetY), _target.x - position.x);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_40 = __this->get_address_of__target_42();
		float L_41 = L_40->get_y_1();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_42 = V_0;
		float L_43 = L_42.get_y_3();
		float L_44 = V_1;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_45 = __this->get_address_of__target_42();
		float L_46 = L_45->get_x_0();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_47 = V_0;
		float L_48 = L_47.get_x_2();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_49 = atan2f(((-((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_subtract((float)L_41, (float)L_43)), (float)L_44)))), ((float)il2cpp_codegen_subtract((float)L_46, (float)L_48)));
		__this->set__aimRadian_34(((float)il2cpp_codegen_subtract((float)(3.14159274f), (float)L_49)));
		// if (_aimRadian > Mathf.PI)
		float L_50 = __this->get__aimRadian_34();
		if ((!(((float)L_50) > ((float)(3.14159274f)))))
		{
			goto IL_0162;
		}
	}
	{
		// _aimRadian -= Mathf.PI * 2.0f;
		float L_51 = __this->get__aimRadian_34();
		__this->set__aimRadian_34(((float)il2cpp_codegen_subtract((float)L_51, (float)(6.28318548f))));
	}

IL_0162:
	{
		// int aimDir = 0;
		V_2 = 0;
		// if (_aimRadian > 0.0f)
		float L_52 = __this->get__aimRadian_34();
		if ((!(((float)L_52) > ((float)(0.0f)))))
		{
			goto IL_0175;
		}
	}
	{
		// aimDir = -1;
		V_2 = (-1);
		// }
		goto IL_0177;
	}

IL_0175:
	{
		// aimDir = 1;
		V_2 = 1;
	}

IL_0177:
	{
		// if (_aimDir != aimDir)
		int32_t L_53 = __this->get__aimDir_33();
		int32_t L_54 = V_2;
		if ((((int32_t)L_53) == ((int32_t)L_54)))
		{
			goto IL_01ee;
		}
	}
	{
		// _aimDir = aimDir;
		int32_t L_55 = V_2;
		__this->set__aimDir_33(L_55);
		// if (_aimDir >= 0)
		int32_t L_56 = __this->get__aimDir_33();
		if ((((int32_t)L_56) < ((int32_t)0)))
		{
			goto IL_01ba;
		}
	}
	{
		// _aimState = _armatureComponent.animation.FadeIn(
		//     "aim_up", -1.0f, 1,
		//     0, AIM_ANIMATION_GROUP, AnimationFadeOutMode.SameGroup
		// );
		UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7 * L_57 = __this->get__armatureComponent_35();
		NullCheck(L_57);
		Animation_t3E64FBA6FBD6680C6EF991689446EBB237888A7C * L_58 = UnityArmatureComponent_get_animation_m54D8BBEA81DAEFBFD27DD998FE68D28B69A5A964(L_57, /*hidden argument*/NULL);
		NullCheck(L_58);
		AnimationState_tBA6EAAD27D56DD26A61304C93676C337EB761238 * L_59 = Animation_FadeIn_m6B9CE692F53E207F6EAD187FAB98440739E849F2(L_58, _stringLiteral89AA6BC7EACEBD4DAF83B548CB47BA7D81644779, (-1.0f), 1, 0, _stringLiteral6C6C2766133DE5328A68EA38E42DC5BFCCE63D27, 2, /*hidden argument*/NULL);
		__this->set__aimState_38(L_59);
		// }
		goto IL_01e2;
	}

IL_01ba:
	{
		// _aimState = _armatureComponent.animation.FadeIn(
		//     "aim_down", -1.0f, 1,
		//     0, AIM_ANIMATION_GROUP, AnimationFadeOutMode.SameGroup
		// );
		UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7 * L_60 = __this->get__armatureComponent_35();
		NullCheck(L_60);
		Animation_t3E64FBA6FBD6680C6EF991689446EBB237888A7C * L_61 = UnityArmatureComponent_get_animation_m54D8BBEA81DAEFBFD27DD998FE68D28B69A5A964(L_60, /*hidden argument*/NULL);
		NullCheck(L_61);
		AnimationState_tBA6EAAD27D56DD26A61304C93676C337EB761238 * L_62 = Animation_FadeIn_m6B9CE692F53E207F6EAD187FAB98440739E849F2(L_61, _stringLiteral8C2E0A3DE85F9464FA6267334A0B65A083807603, (-1.0f), 1, 0, _stringLiteral6C6C2766133DE5328A68EA38E42DC5BFCCE63D27, 2, /*hidden argument*/NULL);
		__this->set__aimState_38(L_62);
	}

IL_01e2:
	{
		// _aimState.resetToPose = false;
		AnimationState_tBA6EAAD27D56DD26A61304C93676C337EB761238 * L_63 = __this->get__aimState_38();
		NullCheck(L_63);
		L_63->set_resetToPose_8((bool)0);
	}

IL_01ee:
	{
		// _aimState.weight = Mathf.Abs(_aimRadian / Mathf.PI * 2.0f);
		AnimationState_tBA6EAAD27D56DD26A61304C93676C337EB761238 * L_64 = __this->get__aimState_38();
		float L_65 = __this->get__aimRadian_34();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_66 = fabsf(((float)il2cpp_codegen_multiply((float)((float)((float)L_65/(float)(3.14159274f))), (float)(2.0f))));
		NullCheck(L_64);
		L_64->set_weight_12(L_66);
		// _armatureComponent.armature.InvalidUpdate();
		UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7 * L_67 = __this->get__armatureComponent_35();
		NullCheck(L_67);
		Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B * L_68 = UnityArmatureComponent_get_armature_m52B12A650A67494C88B824EA4EF071F4C6C77A49_inline(L_67, /*hidden argument*/NULL);
		NullCheck(L_68);
		Armature_InvalidUpdate_m58808B4550E1488B7727CE31165C30C2BEBCC534(L_68, (String_t*)NULL, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void coreElement.CoreElement::_updateAttack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreElement__updateAttack_m5D8D2D9364199E20E1609B571F0B7EB2BA0E74E6 (CoreElement_tE4AA9E2B7F77B929778F44A58FC2036C30BF2966 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CoreElement__updateAttack_m5D8D2D9364199E20E1609B571F0B7EB2BA0E74E6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!_isAttackingA || _isAttackingB)
		bool L_0 = __this->get__isAttackingA_26();
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool L_1 = __this->get__isAttackingB_27();
		if (!L_1)
		{
			goto IL_0011;
		}
	}

IL_0010:
	{
		// return;
		return;
	}

IL_0011:
	{
		// _isAttackingB = true;
		__this->set__isAttackingB_27((bool)1);
		// _attackState = _armatureComponent.animation.FadeIn(
		//     "attack_01", -1.0f, -1,
		//     0, ATTACK_ANIMATION_GROUP, AnimationFadeOutMode.SameGroup
		// );
		UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7 * L_2 = __this->get__armatureComponent_35();
		NullCheck(L_2);
		Animation_t3E64FBA6FBD6680C6EF991689446EBB237888A7C * L_3 = UnityArmatureComponent_get_animation_m54D8BBEA81DAEFBFD27DD998FE68D28B69A5A964(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		AnimationState_tBA6EAAD27D56DD26A61304C93676C337EB761238 * L_4 = Animation_FadeIn_m6B9CE692F53E207F6EAD187FAB98440739E849F2(L_3, _stringLiteral68C356A43DDF830CFA37A5373219D0A5DE8C228B, (-1.0f), (-1), 0, _stringLiteralA6D81694B1FEA544CFA7910FBC7133AC5E140813, 2, /*hidden argument*/NULL);
		__this->set__attackState_40(L_4);
		// _attackState.resetToPose = false;
		AnimationState_tBA6EAAD27D56DD26A61304C93676C337EB761238 * L_5 = __this->get__attackState_40();
		NullCheck(L_5);
		L_5->set_resetToPose_8((bool)0);
		// _attackState.autoFadeOutTime = _attackState.fadeTotalTime;
		AnimationState_tBA6EAAD27D56DD26A61304C93676C337EB761238 * L_6 = __this->get__attackState_40();
		AnimationState_tBA6EAAD27D56DD26A61304C93676C337EB761238 * L_7 = __this->get__attackState_40();
		NullCheck(L_7);
		float L_8 = L_7->get_fadeTotalTime_14();
		NullCheck(L_6);
		L_6->set_autoFadeOutTime_13(L_8);
		// _attackState.AddBoneMask("pelvis");
		AnimationState_tBA6EAAD27D56DD26A61304C93676C337EB761238 * L_9 = __this->get__attackState_40();
		NullCheck(L_9);
		AnimationState_AddBoneMask_mF96051C125026A915A125CB8FE0F27F5D59AAD2C(L_9, _stringLiteral7A21C2866F6CC958302F418126172B76AF59DD8D, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void coreElement.CoreElement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreElement__ctor_m5AA75510B9267B3721A551499E9FE6C783F8C8DD (CoreElement_tE4AA9E2B7F77B929778F44A58FC2036C30BF2966 * __this, const RuntimeMethod* method)
{
	{
		// public KeyCode left = KeyCode.A;
		__this->set_left_16(((int32_t)97));
		// public KeyCode right = KeyCode.D;
		__this->set_right_17(((int32_t)100));
		// public KeyCode up = KeyCode.W;
		__this->set_up_18(((int32_t)119));
		// public KeyCode down = KeyCode.S;
		__this->set_down_19(((int32_t)115));
		// public KeyCode switchSkin = KeyCode.Space;
		__this->set_switchSkin_20(((int32_t)32));
		// public KeyCode switchLeftWeapon = KeyCode.Q;
		__this->set_switchLeftWeapon_21(((int32_t)113));
		// public KeyCode switchRightWeapon = KeyCode.E;
		__this->set_switchRightWeapon_22(((int32_t)101));
		// private int _faceDir = 1;
		__this->set__faceDir_31(1);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void coreElement.CoreElement::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreElement__cctor_m7BD3EC1C417AC83098E8A3E684E291AEA03816AC (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CoreElement__cctor_m7BD3EC1C417AC83098E8A3E684E291AEA03816AC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly string[] WEAPON_LEFT_LIST = { "weapon_1502b_l", "weapon_1005", "weapon_1005b", "weapon_1005c", "weapon_1005d", "weapon_1005e" };
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_0 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral4FE272F22261FA595C98F4255A84C2656D9F3D71);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral4FE272F22261FA595C98F4255A84C2656D9F3D71);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteralAE3250C8A06D42A27172E11F9E27EE629B4EA348);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralAE3250C8A06D42A27172E11F9E27EE629B4EA348);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral56A67D115DC026E74AF557BFB61CA613F752D7CB);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral56A67D115DC026E74AF557BFB61CA613F752D7CB);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral2BF643B4719C1494B7BC1DA4865CC0F21E86C476);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral2BF643B4719C1494B7BC1DA4865CC0F21E86C476);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral96A3F6E1D353E9C43404C88B605041E3F81FCFE8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral96A3F6E1D353E9C43404C88B605041E3F81FCFE8);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_6 = L_5;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteralE0286CE9CEAC9E6DFF982B294F619194FF806E25);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteralE0286CE9CEAC9E6DFF982B294F619194FF806E25);
		((CoreElement_tE4AA9E2B7F77B929778F44A58FC2036C30BF2966_StaticFields*)il2cpp_codegen_static_fields_for(CoreElement_tE4AA9E2B7F77B929778F44A58FC2036C30BF2966_il2cpp_TypeInfo_var))->set_WEAPON_LEFT_LIST_13(L_6);
		// private static readonly string[] WEAPON_RIGHT_LIST = { "weapon_1502b_r", "weapon_1005", "weapon_1005b", "weapon_1005c", "weapon_1005d" };
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_7 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_8 = L_7;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteralD65EF2A665570B6E98930F2F90DFE9AEE533C87E);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralD65EF2A665570B6E98930F2F90DFE9AEE533C87E);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_9 = L_8;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteralAE3250C8A06D42A27172E11F9E27EE629B4EA348);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralAE3250C8A06D42A27172E11F9E27EE629B4EA348);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_10 = L_9;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteral56A67D115DC026E74AF557BFB61CA613F752D7CB);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral56A67D115DC026E74AF557BFB61CA613F752D7CB);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_11 = L_10;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteral2BF643B4719C1494B7BC1DA4865CC0F21E86C476);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral2BF643B4719C1494B7BC1DA4865CC0F21E86C476);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_12 = L_11;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral96A3F6E1D353E9C43404C88B605041E3F81FCFE8);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral96A3F6E1D353E9C43404C88B605041E3F81FCFE8);
		((CoreElement_tE4AA9E2B7F77B929778F44A58FC2036C30BF2966_StaticFields*)il2cpp_codegen_static_fields_for(CoreElement_tE4AA9E2B7F77B929778F44A58FC2036C30BF2966_il2cpp_TypeInfo_var))->set_WEAPON_RIGHT_LIST_14(L_12);
		// private static readonly string[] SKINS = { "mecha_1502b", "skin_a", "skin_b", "skin_c" };
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_13 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)4);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_14 = L_13;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, _stringLiteralEC1D53EA97F0BFEAE043EF7A12079D3119948CD2);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralEC1D53EA97F0BFEAE043EF7A12079D3119948CD2);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_15 = L_14;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteralCB521196DF7675420260E71BCE8D4B41218F9C0D);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralCB521196DF7675420260E71BCE8D4B41218F9C0D);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_16 = L_15;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, _stringLiteral68ADE570ACFCF2D122CE8EB92C524750050B7692);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral68ADE570ACFCF2D122CE8EB92C524750050B7692);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_17 = L_16;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, _stringLiteralB792695991DB46210D012BA3F540DA63990CB7E3);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralB792695991DB46210D012BA3F540DA63990CB7E3);
		((CoreElement_tE4AA9E2B7F77B929778F44A58FC2036C30BF2966_StaticFields*)il2cpp_codegen_static_fields_for(CoreElement_tE4AA9E2B7F77B929778F44A58FC2036C30BF2966_il2cpp_TypeInfo_var))->set_SKINS_15(L_17);
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
// System.Void performanceTest.PerformanceTest::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PerformanceTest_Start_mB588714B9905C3900D0C75611DBDAE13048DDD8C (PerformanceTest_t8B45D43C5E749B6982426CFCEC17145D62396754 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PerformanceTest_Start_mB588714B9905C3900D0C75611DBDAE13048DDD8C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnityFactory.factory.LoadData(dragonBoneData);
		IL2CPP_RUNTIME_CLASS_INIT(UnityFactory_t170550F12743A129F88E7D1990F607AB2B35C102_il2cpp_TypeInfo_var);
		UnityFactory_t170550F12743A129F88E7D1990F607AB2B35C102 * L_0 = UnityFactory_get_factory_mAB42A18D9FFD7DA2AD11C1084F158EF6491F35DE(/*hidden argument*/NULL);
		UnityDragonBonesData_tB3459525029FD10A37DB7C21A177BEF36E9E0C74 * L_1 = __this->get_dragonBoneData_4();
		NullCheck(L_0);
		UnityFactory_LoadData_m0EFB637A0EC5D7CB467D48C9440F753CB8682548(L_0, L_1, (bool)0, (0.01f), (1.0f), /*hidden argument*/NULL);
		// StartCoroutine(BuildArmatureComponent());
		RuntimeObject* L_2 = PerformanceTest_BuildArmatureComponent_m5A3799419A1CB10A45C4B354E2DEBB111ABA0B65(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7(__this, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator performanceTest.PerformanceTest::BuildArmatureComponent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PerformanceTest_BuildArmatureComponent_m5A3799419A1CB10A45C4B354E2DEBB111ABA0B65 (PerformanceTest_t8B45D43C5E749B6982426CFCEC17145D62396754 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PerformanceTest_BuildArmatureComponent_m5A3799419A1CB10A45C4B354E2DEBB111ABA0B65_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CBuildArmatureComponentU3Ed__2_tBA0BC2EFDBB3AE560B94ACE0FB1B2691C4DFA7EA * L_0 = (U3CBuildArmatureComponentU3Ed__2_tBA0BC2EFDBB3AE560B94ACE0FB1B2691C4DFA7EA *)il2cpp_codegen_object_new(U3CBuildArmatureComponentU3Ed__2_tBA0BC2EFDBB3AE560B94ACE0FB1B2691C4DFA7EA_il2cpp_TypeInfo_var);
		U3CBuildArmatureComponentU3Ed__2__ctor_mFEBDF3F2FA3487605C7DF446296911A343B6F379(L_0, 0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void performanceTest.PerformanceTest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PerformanceTest__ctor_mA29CA03FA121D5C8DA429DCC2F9E82FCC2AD16A8 (PerformanceTest_t8B45D43C5E749B6982426CFCEC17145D62396754 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void performanceTest.PerformanceTest_<BuildArmatureComponent>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBuildArmatureComponentU3Ed__2__ctor_mFEBDF3F2FA3487605C7DF446296911A343B6F379 (U3CBuildArmatureComponentU3Ed__2_tBA0BC2EFDBB3AE560B94ACE0FB1B2691C4DFA7EA * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void performanceTest.PerformanceTest_<BuildArmatureComponent>d__2::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBuildArmatureComponentU3Ed__2_System_IDisposable_Dispose_mF2CD1C9FAD485782ECEAE0E68191D0B6CF0A976B (U3CBuildArmatureComponentU3Ed__2_tBA0BC2EFDBB3AE560B94ACE0FB1B2691C4DFA7EA * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean performanceTest.PerformanceTest_<BuildArmatureComponent>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CBuildArmatureComponentU3Ed__2_MoveNext_mEAD66231351F0F9F74842AB4045FE3854C9502CB (U3CBuildArmatureComponentU3Ed__2_tBA0BC2EFDBB3AE560B94ACE0FB1B2691C4DFA7EA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CBuildArmatureComponentU3Ed__2_MoveNext_mEAD66231351F0F9F74842AB4045FE3854C9502CB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_00fe;
		}
	}
	{
		return (bool)0;
	}

IL_0013:
	{
		__this->set_U3CU3E1__state_0((-1));
		// int lY = 10;
		__this->set_U3ClYU3E5__2_2(((int32_t)10));
		// int lX = 10;
		__this->set_U3ClXU3E5__3_3(((int32_t)10));
		// for (var y = 0; y < lY; ++y)
		__this->set_U3CyU3E5__4_4(0);
		goto IL_0136;
	}

IL_0036:
	{
		// for (var x = 0; x < lX; ++x)
		__this->set_U3CxU3E5__5_5(0);
		goto IL_0115;
	}

IL_0042:
	{
		// var position = new Vector3((x - lX * 0.5f) * 1.0f, (y - lY * 0.5f) * 1.0f, x + lX * y * 0.01f);
		int32_t L_3 = __this->get_U3CxU3E5__5_5();
		int32_t L_4 = __this->get_U3ClXU3E5__3_3();
		int32_t L_5 = __this->get_U3CyU3E5__4_4();
		int32_t L_6 = __this->get_U3ClYU3E5__2_2();
		int32_t L_7 = __this->get_U3CxU3E5__5_5();
		int32_t L_8 = __this->get_U3ClXU3E5__3_3();
		int32_t L_9 = __this->get_U3CyU3E5__4_4();
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_1), ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)(((float)((float)L_3))), (float)((float)il2cpp_codegen_multiply((float)(((float)((float)L_4))), (float)(0.5f))))), (float)(1.0f))), ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)(((float)((float)L_5))), (float)((float)il2cpp_codegen_multiply((float)(((float)((float)L_6))), (float)(0.5f))))), (float)(1.0f))), ((float)il2cpp_codegen_add((float)(((float)((float)L_7))), (float)((float)il2cpp_codegen_multiply((float)(((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)L_8, (int32_t)L_9))))), (float)(0.01f))))), /*hidden argument*/NULL);
		// var armatureComponent = UnityFactory.factory.BuildArmatureComponent("DragonBoy");
		IL2CPP_RUNTIME_CLASS_INIT(UnityFactory_t170550F12743A129F88E7D1990F607AB2B35C102_il2cpp_TypeInfo_var);
		UnityFactory_t170550F12743A129F88E7D1990F607AB2B35C102 * L_10 = UnityFactory_get_factory_mAB42A18D9FFD7DA2AD11C1084F158EF6491F35DE(/*hidden argument*/NULL);
		NullCheck(L_10);
		UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7 * L_11 = UnityFactory_BuildArmatureComponent_mAEF67786ED95E4368C4FEB16A9727EFE84B439A4(L_10, _stringLiteral4D335E6094A46E7165552C32C3907F3BF668C68C, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL, (bool)0, /*hidden argument*/NULL);
		// armatureComponent.armature.cacheFrameRate = 24; // Cache animation.
		UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7 * L_12 = L_11;
		NullCheck(L_12);
		Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B * L_13 = UnityArmatureComponent_get_armature_m52B12A650A67494C88B824EA4EF071F4C6C77A49_inline(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		Armature_set_cacheFrameRate_m601829A05FE5F5A94E9F4B0D1FFD10F4EBF6187A(L_13, ((int32_t)24), /*hidden argument*/NULL);
		// armatureComponent.animation.Play("walk");
		UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7 * L_14 = L_12;
		NullCheck(L_14);
		Animation_t3E64FBA6FBD6680C6EF991689446EBB237888A7C * L_15 = UnityArmatureComponent_get_animation_m54D8BBEA81DAEFBFD27DD998FE68D28B69A5A964(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		Animation_Play_mEBE57E5F0E354B7C3361AC101F8B2C32BC329A40(L_15, _stringLiteralDF06B147F778D46FAD19B32B6757A3ABC3AF41DE, (-1), /*hidden argument*/NULL);
		// armatureComponent.transform.localPosition = position;
		NullCheck(L_14);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_16 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_14, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = V_1;
		NullCheck(L_16);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_16, L_17, /*hidden argument*/NULL);
		// yield return new WaitForSecondsRealtime(1.0f);
		WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739 * L_18 = (WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739 *)il2cpp_codegen_object_new(WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739_il2cpp_TypeInfo_var);
		WaitForSecondsRealtime__ctor_m775503EC1F4963D8E5BBDD7989B40F6A000E0525(L_18, (1.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_18);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00fe:
	{
		__this->set_U3CU3E1__state_0((-1));
		// for (var x = 0; x < lX; ++x)
		int32_t L_19 = __this->get_U3CxU3E5__5_5();
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
		int32_t L_20 = V_2;
		__this->set_U3CxU3E5__5_5(L_20);
	}

IL_0115:
	{
		// for (var x = 0; x < lX; ++x)
		int32_t L_21 = __this->get_U3CxU3E5__5_5();
		int32_t L_22 = __this->get_U3ClXU3E5__3_3();
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0042;
		}
	}
	{
		// for (var y = 0; y < lY; ++y)
		int32_t L_23 = __this->get_U3CyU3E5__4_4();
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
		int32_t L_24 = V_2;
		__this->set_U3CyU3E5__4_4(L_24);
	}

IL_0136:
	{
		// for (var y = 0; y < lY; ++y)
		int32_t L_25 = __this->get_U3CyU3E5__4_4();
		int32_t L_26 = __this->get_U3ClYU3E5__2_2();
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_0036;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object performanceTest.PerformanceTest_<BuildArmatureComponent>d__2::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CBuildArmatureComponentU3Ed__2_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m696AEF6190287DEEB76D60231F1B4D2578DE3CA3 (U3CBuildArmatureComponentU3Ed__2_tBA0BC2EFDBB3AE560B94ACE0FB1B2691C4DFA7EA * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void performanceTest.PerformanceTest_<BuildArmatureComponent>d__2::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBuildArmatureComponentU3Ed__2_System_Collections_IEnumerator_Reset_m24AAB0703C1B0B37843CE2DB5668181460C561C4 (U3CBuildArmatureComponentU3Ed__2_tBA0BC2EFDBB3AE560B94ACE0FB1B2691C4DFA7EA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CBuildArmatureComponentU3Ed__2_System_Collections_IEnumerator_Reset_m24AAB0703C1B0B37843CE2DB5668181460C561C4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CBuildArmatureComponentU3Ed__2_System_Collections_IEnumerator_Reset_m24AAB0703C1B0B37843CE2DB5668181460C561C4_RuntimeMethod_var);
	}
}
// System.Object performanceTest.PerformanceTest_<BuildArmatureComponent>d__2::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CBuildArmatureComponentU3Ed__2_System_Collections_IEnumerator_get_Current_mD85AB8261E8CB72D5EE25F99D178D13EAACF60C0 (U3CBuildArmatureComponentU3Ed__2_tBA0BC2EFDBB3AE560B94ACE0FB1B2691C4DFA7EA * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR ProductMetadata_t1CAA912963F8B24B34F53CCF29A6E0BD89B33B48 * Product_get_metadata_mE9010636C2A74FD850A4AE25DFD45A249F80224E_inline (Product_t830A133A97BEA12C3CD696853098A295D99A6DE4 * __this, const RuntimeMethod* method)
{
	{
		ProductMetadata_t1CAA912963F8B24B34F53CCF29A6E0BD89B33B48 * L_0 = __this->get_U3CmetadataU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* ProductMetadata_get_localizedTitle_m34F35831026B0CEA68804AC38BB7E9FE17791E8A_inline (ProductMetadata_t1CAA912963F8B24B34F53CCF29A6E0BD89B33B48 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3ClocalizedTitleU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* ProductMetadata_get_localizedDescription_m8EAF1BC690AD022C519087978423B5DE0081E741_inline (ProductMetadata_t1CAA912963F8B24B34F53CCF29A6E0BD89B33B48 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3ClocalizedDescriptionU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* ProductMetadata_get_localizedPriceString_mFFE7F069FE5E8DC6BD4CADDF3D9AEC066405795B_inline (ProductMetadata_t1CAA912963F8B24B34F53CCF29A6E0BD89B33B48 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3ClocalizedPriceStringU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* Product_get_receipt_m43D6AF51543B3FF31622FCD2511BC8DAB5D230A2_inline (Product_t830A133A97BEA12C3CD696853098A295D99A6DE4 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CreceiptU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * Product_get_definition_mFA1889844E23D37A700C2EA6659EE3BBF1E17C58_inline (Product_t830A133A97BEA12C3CD696853098A295D99A6DE4 * __this, const RuntimeMethod* method)
{
	{
		ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * L_0 = __this->get_U3CdefinitionU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* ProductDefinition_get_id_mD5C2A9C1016245C99EB67B74DFC32ECDC8512468_inline (ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CidU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool Product_get_availableToPurchase_mA4F6F87AA8B83915F1B5E122A10F0CBAFBAE196C_inline (Product_t830A133A97BEA12C3CD696853098A295D99A6DE4 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CavailableToPurchaseU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B * UnityArmatureComponent_get_armature_m52B12A650A67494C88B824EA4EF071F4C6C77A49_inline (UnityArmatureComponent_t1F4C0162B5964384F89B414D66EDC6ECA7E627D7 * __this, const RuntimeMethod* method)
{
	{
		// get { return _armature; }
		Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B * L_0 = __this->get__armature_7();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void StandardPurchasingModule_set_useFakeStoreUIMode_m44AEA2EEB75BAC9FAD893B0B889B45E4289AF404_inline (StandardPurchasingModule_t45E3E7F3D0D8CE91AD85D7BE5B29CBA2235B3BFA * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CuseFakeStoreUIModeU3Ek__BackingField_12(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* ProductCatalog_get_allProducts_m4F35278CE433A5ECD3A1F6F3D0C3306FA7D276B5_inline (ProductCatalog_t514386D43815F0DD3BD3695ABBB1BC66351D569E * __this, const RuntimeMethod* method)
{
	{
		List_1_tF77D0F7B15CCDF8FD5F7CDEE53B08C264FFEF116 * L_0 = __this->get_products_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Product_t830A133A97BEA12C3CD696853098A295D99A6DE4 * PurchaseEventArgs_get_purchasedProduct_mB26BCEF9CD45B84DBF55A5C6FC50AF611B6AD6A2_inline (PurchaseEventArgs_tF6E04BFD5492F5F57309FFBB2415EB26E5B88C04 * __this, const RuntimeMethod* method)
{
	{
		Product_t830A133A97BEA12C3CD696853098A295D99A6DE4 * L_0 = __this->get_U3CpurchasedProductU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * Button_get_onClick_m77E8CA6917881760CC7900930F4C789F3E2F8817_inline (Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * __this, const RuntimeMethod* method)
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * L_0 = __this->get_m_OnClick_19();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* CodelessIAPStoreListener_get_ExtensionProvider_m6EF90D4617310AF8D82CF0372F0E8E3755B366B4_inline (CodelessIAPStoreListener_tC0C269A13BAE3B9F9AA24455FAB72340347F7303 * __this, const RuntimeMethod* method)
{
	{
		// get { return extensions; }
		RuntimeObject* L_0 = __this->get_extensions_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Animation_t3E64FBA6FBD6680C6EF991689446EBB237888A7C * Armature_get_animation_mFC9A0CF26711D38A136BA9B44CB4ED8FAFBE075C_inline (Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B * __this, const RuntimeMethod* method)
{
	{
		// get { return this._animation; }
		Animation_t3E64FBA6FBD6680C6EF991689446EBB237888A7C * L_0 = __this->get__animation_19();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B * Slot_get_childArmature_m7AA0703B2FD30982900BB17B3F836845417207BF_inline (Slot_t9D06B371824C1B67E43A10A17D18BC3EF71E3867 * __this, const RuntimeMethod* method)
{
	{
		// get { return this._childArmature; }
		Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B * L_0 = __this->get__childArmature_48();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* Armature_get_eventDispatcher_mDE19324200719B8284AEC29938604B570BD7691B_inline (Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B * __this, const RuntimeMethod* method)
{
	{
		// get { return this._proxy; }
		RuntimeObject* L_0 = __this->get__proxy_20();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject * Armature_get_display_m9E495EEA6D17B1ABF9B35F12BE52A541A3B2098D_inline (Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B * __this, const RuntimeMethod* method)
{
	{
		// get { return this._display; }
		RuntimeObject * L_0 = __this->get__display_21();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool Armature_get_flipX_m2E43AF6C7D2D6678E6E47CDD9E7B83EAA56A3C5D_inline (Armature_tD0BFC72FBB1C61C47FAC70DA734D57E870BEEA7B * __this, const RuntimeMethod* method)
{
	{
		// get { return this._flipX; }
		bool L_0 = __this->get__flipX_11();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_gshared_inline (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ((EmptyArray_1_tCF137C88A5824F413EFB5A2F31664D8207E61D26_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return L_0;
	}
}
