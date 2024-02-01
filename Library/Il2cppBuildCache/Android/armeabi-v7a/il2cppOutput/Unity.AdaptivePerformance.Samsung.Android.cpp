#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct GenericVirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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

// System.Action`1<System.Int32Enum>
struct Action_1_tF0FD284A49EB7135379250254D6B49FA84383C09;
// System.Action`1<UnityEngine.AdaptivePerformance.WarningLevel>
struct Action_1_t8C4711099B422DAD7EA49F9E5395372F09F28C82;
// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo>
struct AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349;
// UnityEngine.AdaptivePerformance.Samsung.Android.AsyncValue`1<System.Double>
struct AsyncValue_1_t15F502DBC70872D99B55432A512A864625B26F15;
// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.ISubsystem>
struct Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B;
// System.Func`1<System.Double>
struct Func_1_t5B109BB44B407A255786F7DB10BD317EFFAA5C63;
// System.Collections.Generic.List`1<System.Action>
struct List_1_t458734AF850139150AB40DFB2B5D1BCE23178235;
// System.Collections.Generic.List`1<UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystemDescriptor>
struct List_1_tDC3CCB2B6EC9D3D4B4CDA5C96CB5BB341E2454A4;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Action[]
struct ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2;
// UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystemDescriptor[]
struct AdaptivePerformanceSubsystemDescriptorU5BU5D_tF42DD815D969B9C584B072F121DBB5B45A39B30E;
// System.Boolean[]
struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// UnityEngine.jvalue[]
struct jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// UnityEngine.AdaptivePerformance.AdaptiveFramerate
struct AdaptiveFramerate_t36C9F58174C8E949088A8B300BAD24B14382B81F;
// UnityEngine.AdaptivePerformance.AdaptivePerformanceIndexer
struct AdaptivePerformanceIndexer_t27E98221789359B3040E2241EC7A66B6A62BDC98;
// UnityEngine.AdaptivePerformance.AdaptivePerformanceIndexerSettings
struct AdaptivePerformanceIndexerSettings_t2D2CACD94BE12D695CBE889026CD4016E8EBD1FD;
// UnityEngine.AdaptivePerformance.AdaptivePerformanceLoaderHelper
struct AdaptivePerformanceLoaderHelper_t640C781590CAA0FF7B63C4E702CA325C1ABD8441;
// UnityEngine.AdaptivePerformance.AdaptivePerformanceScalerSettings
struct AdaptivePerformanceScalerSettings_t90FCA77DC518421FBEDC94E5294FD8016BA2B6B3;
// UnityEngine.AdaptivePerformance.AdaptivePerformanceScalerSettingsBase
struct AdaptivePerformanceScalerSettingsBase_tB0A45A1909F77D8F3B8D1DC4A8A4E0DEA6573B96;
// UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystem
struct AdaptivePerformanceSubsystem_tD1EF79067301732948F731CDD69D58FECB6571FA;
// UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystemBase
struct AdaptivePerformanceSubsystemBase_t6FF55B768F8B0E39432CE60CDD86D1BC8DC235CC;
// UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystemDescriptor
struct AdaptivePerformanceSubsystemDescriptor_t08DC609A273D4C0D10E8130646B7B147AEA5AD71;
// UnityEngine.AdaptivePerformance.AdaptiveVariableRefreshRate
struct AdaptiveVariableRefreshRate_t191947991F52574C0BF26A6156720B6757C1D818;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E;
// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.AdaptivePerformance.Samsung.Android.AsyncUpdater
struct AsyncUpdater_tFD9C5192022FBF96B90534567B298522D66D78B2;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Threading.ExecutionContext
struct ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289;
// UnityEngine.AdaptivePerformance.IAdaptivePerformanceSettings
struct IAdaptivePerformanceSettings_tA1BEAD4827B883C1A94BADD21AC4582054DAA6DF;
// UnityEngine.AdaptivePerformance.Provider.IApplicationLifecycle
struct IApplicationLifecycle_tF9C02610303637931B688A8388FC7DCFA56CF480;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// UnityEngine.AdaptivePerformance.Provider.IDevicePerformanceLevelControl
struct IDevicePerformanceLevelControl_tB6E21C74EEC3BA6AF7C2B87F174AAEC83AA10E76;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Security.Principal.IPrincipal
struct IPrincipal_t850ACE1F48327B64F266DD2C6FD8C5F56E4889E2;
// UnityEngine.ISubsystem
struct ISubsystem_t64464AB5EA37383499172853FA932A96C7841789;
// UnityEngine.ISubsystemDescriptor
struct ISubsystemDescriptor_tEB935323042076ECFC076435FBD756B1E7953A14;
// UnityEngine.AdaptivePerformance.Samsung.Android.IVariableRefreshRate
struct IVariableRefreshRate_tDE89F043B8996572722116FCB1A8BC2EB4B3DD77;
// System.Threading.InternalThread
struct InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB;
// System.LocalDataStoreHolder
struct LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146;
// System.LocalDataStoreMgr
struct LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.MulticastDelegate
struct MulticastDelegate_t;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1;
// UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderLoader
struct SamsungAndroidProviderLoader_tF4EF35A26133E653D4A7D8EDD8AA52F555C471C2;
// UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderSettings
struct SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A;
// UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem
struct SamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C;
// System.Threading.Semaphore
struct Semaphore_t6DD478B5937D3F0469887B7829782CA3CB6CD15F;
// System.String
struct String_t;
// System.Threading.Thread
struct Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414;
// System.Threading.ThreadStart
struct ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687;
// System.Type
struct Type_t;
// UnityEngine.AdaptivePerformance.Samsung.Android.VariableRefreshRateEventHandler
struct VariableRefreshRateEventHandler_t06D300F6DD7FDB78D3404003A1C81A149DBFAC83;
// System.Version
struct Version_tBDAEDED25425A1D09910468B8BD1759115646E3C;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/<>c
struct U3CU3Ec_t903A2F07E9B1E2A8D05C639D8A6E16A5D888A0DC;
// UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/AutoVariableRefreshRate
struct AutoVariableRefreshRate_tFF7B877BD61A8A6CB5032694D95C06CD37CC7CA9;
// UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/NativeApi
struct NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123;
// UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/VRRManager
struct VRRManager_tB79C0272A6886E77A12ADF1365B76758606FD1AC;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t8C4711099B422DAD7EA49F9E5395372F09F28C82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncUpdater_tFD9C5192022FBF96B90534567B298522D66D78B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncValue_1_t15F502DBC70872D99B55432A512A864625B26F15_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AutoVariableRefreshRate_tFF7B877BD61A8A6CB5032694D95C06CD37CC7CA9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t5B109BB44B407A255786F7DB10BD317EFFAA5C63_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameSDKLog_t09880CE5B30D72E0E8328C7C0EDC15F9A3B3FF44_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IVariableRefreshRate_tDE89F043B8996572722116FCB1A8BC2EB4B3DD77_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t458734AF850139150AB40DFB2B5D1BCE23178235_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tDC3CCB2B6EC9D3D4B4CDA5C96CB5BB341E2454A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SamsungAndroidProviderLoader_tF4EF35A26133E653D4A7D8EDD8AA52F555C471C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Semaphore_t6DD478B5937D3F0469887B7829782CA3CB6CD15F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t903A2F07E9B1E2A8D05C639D8A6E16A5D888A0DC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VRRManager_tB79C0272A6886E77A12ADF1365B76758606FD1AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VariableRefreshRateEventHandler_t06D300F6DD7FDB78D3404003A1C81A149DBFAC83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VariableRefreshRate_t57603D16D53370D4A4A0485DA7D22C0D9980C9BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Version_tBDAEDED25425A1D09910468B8BD1759115646E3C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral110C230ECC11791A56E51CE07FE5E6FD5A78178A;
IL2CPP_EXTERN_C String_t* _stringLiteral1174361642F6FE4FCA189A130190A4E9597912D6;
IL2CPP_EXTERN_C String_t* _stringLiteral1D8E0CE0AA8B1F1859A8CEA37DFAA26D56616E45;
IL2CPP_EXTERN_C String_t* _stringLiteral3261C3E11E9AB172DA0BD2010EF79C41DE23C91C;
IL2CPP_EXTERN_C String_t* _stringLiteral3D6253C836CCF9A6B8A05245CB6B1EF24E546455;
IL2CPP_EXTERN_C String_t* _stringLiteral4F209C20BD06D8D1C76C888ACA266837D8ADDC01;
IL2CPP_EXTERN_C String_t* _stringLiteral5B5485AAFD0F88488213FA21BAC0D600944F8265;
IL2CPP_EXTERN_C String_t* _stringLiteral623E70A7FF6385C93E57D1CAE15E16E3188E7663;
IL2CPP_EXTERN_C String_t* _stringLiteral6B12B6CCB3BEDC9356EF0F26246EFBA529D03D4C;
IL2CPP_EXTERN_C String_t* _stringLiteral74C185339ADE6B87DA245E0CBDFD66891CC43F54;
IL2CPP_EXTERN_C String_t* _stringLiteral7DF31CBCAC5F9AB299F5D58B49B126C24553D2D1;
IL2CPP_EXTERN_C String_t* _stringLiteral8CAC7A1CF27146D11E92BE39054D8E4594FE9B3D;
IL2CPP_EXTERN_C String_t* _stringLiteral8E5FBE3F351EB8F12ED980FF209B6810ED6C1D60;
IL2CPP_EXTERN_C String_t* _stringLiteralA479396D9311F0A23258AE9653EFD051C3B8A4D5;
IL2CPP_EXTERN_C String_t* _stringLiteralA789C1A58CA8F1B51679B983874466E76B48EFB3;
IL2CPP_EXTERN_C String_t* _stringLiteralBDE80E2AD15AB61A85DBD7C97F022E1D102ABA5B;
IL2CPP_EXTERN_C String_t* _stringLiteralCBD515F486F3F029991E3220BC5E926A5E96554D;
IL2CPP_EXTERN_C String_t* _stringLiteralD289A15F06D391673864A3B5CEDBFF42865743C1;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDAD4FD80C1A0A39AD74FD88700D89B9595B8D595;
IL2CPP_EXTERN_C String_t* _stringLiteralDB8C132238F9E774E6E9E180238DA0A65C25145C;
IL2CPP_EXTERN_C String_t* _stringLiteralE02D43BFB3611F4411DD21848B293789A2B1B8D6;
IL2CPP_EXTERN_C String_t* _stringLiteralEEC7732C32C4E0262755BF931431F792DE2E0033;
IL2CPP_EXTERN_C String_t* _stringLiteralF206CAA96C8ED929B66CE9CAF1513182AC391082;
IL2CPP_EXTERN_C String_t* _stringLiteralFAC891F8E2E6B2BA23524259218EF5EF3BF998B4;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m4825F6DA818BEB3BE4B7723C9370E86B49E9763D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m4ADA6A6416861F5CA9EEFB4EAED9B1FC482B22CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AdaptivePerformanceLoaderHelper_CreateSubsystem_TisAdaptivePerformanceSubsystemDescriptor_t08DC609A273D4C0D10E8130646B7B147AEA5AD71_TisSamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C_mF42D88911411F0A2D2D8E290837E6CDA363A3DE5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AdaptivePerformanceLoaderHelper_DestroySubsystem_TisSamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C_m6DA7E025713371547503FE957E5C43D87C039646_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AdaptivePerformanceLoaderHelper_StartSubsystem_TisSamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C_mBA5171134DBE4411AAA22FC80764B743F303E171_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AdaptivePerformanceLoaderHelper_StopSubsystem_TisSamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C_m8BEF758544D39431E92429FF9510051B818DED8A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AdaptivePerformanceLoader_GetLoadedSubsystem_TisSamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C_m77E2FE4017D6BBFB58DC59ED2D7FB10E18E0BB6A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AdaptiveVariableRefreshRate_RefreshRateChanged_mF193DBF673D4AA6593CDBC2466505413B3CBBEA0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m4AA284A03F0D5D003114D60C705B8A54274C74DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m13EC19F5D105614B86EADA87F5F73751D3CFF108_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisInt32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_mDD94B8DE230857A8C16A060135969B72A534DFE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mD43CB504C00B380069C4904F986738EF503E9144_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisString_t_mE0E9BE21A1938D675DA63B376682D54E3B36AF0E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_m002765312BF306B1B3B5BFAB9550C0A2A1820CDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_IndexOf_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m1F0420BEEDFC9FDB3682212205F4F8124BA3EA7E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUpdater_ThreadProc_m8B957171FEA9C62C4603A8C2298ADBD74A7AB118_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncValue_1_SyncUpdate_mA03A49DEA9F9924DC08440A5A3DD4A66E850933F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncValue_1_Update_mF7955D2344FC21FC8BDB1EE205CE8CD4E4AC7D03_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncValue_1__ctor_m407CE0C35BC9C978585D744C8EB8BC31D59BFB3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncValue_1_get_value_mB10EA452BBD5046293C947527CD4FACB92A00922_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1__ctor_mCEE9371173A8ABF1AFE6B116EB1127082F7A4B0E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m415CDDDC44D8102E7E71D9EA0A853D7BBE6F469F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m8AE79EC2CE04C828830778BB7860C821C3AF4D24_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m465C4122ED76D75D4194915EDBD32A89F259CF8C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m437E6C5DE2D7E16E015E843E8C8A8F32A6360E60_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m8F3A8E6C64C39DA66FF5F99E7A6BB97B41A482BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m62C12145DD437794F8660D2396A00A7B2BA480C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m5A0FDCA39AD94F1DB9A64D80B088EF7D87411022_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SamsungGameSDKAdaptivePerformanceSubsystem_CheckInitialTemperatureAndSendWarnings_m3B06FE8E8244F98252796E587924CE36B718F789_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SamsungGameSDKAdaptivePerformanceSubsystem_OnPerformanceLevelTimeout_m97613DEB8B73D555EFD8E69548F35592D85A0B52_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SamsungGameSDKAdaptivePerformanceSubsystem_OnPerformanceWarning_m166520178329E91FBC95073845B37D7675F7D98B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SamsungGameSDKAdaptivePerformanceSubsystem_U3C_ctorU3Eb__24_1_mA464F51A61826EF0FD17ECAEBFFFEB30C7C31454_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SamsungGameSDKAdaptivePerformanceSubsystem_U3C_ctorU3Eb__24_2_m942BF526AEC01E266DF84AAD14D26C80DC5044D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__24_0_mE0A3F07346D922C855303808B247FB775F546813_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* SamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tA953AD12D431C851CF7AC1E3C6A444FDB1ED0AB9 
{
public:

public:
};


// System.Object


// UnityEngine.AdaptivePerformance.Samsung.Android.AsyncValue`1<System.Double>
struct AsyncValue_1_t15F502DBC70872D99B55432A512A864625B26F15  : public RuntimeObject
{
public:
	// UnityEngine.AdaptivePerformance.Samsung.Android.AsyncUpdater UnityEngine.AdaptivePerformance.Samsung.Android.AsyncValue`1::updater
	AsyncUpdater_tFD9C5192022FBF96B90534567B298522D66D78B2 * ___updater_0;
	// System.Int32 UnityEngine.AdaptivePerformance.Samsung.Android.AsyncValue`1::updateHandle
	int32_t ___updateHandle_1;
	// System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.AsyncValue`1::pendingUpdate
	bool ___pendingUpdate_2;
	// System.Func`1<T> UnityEngine.AdaptivePerformance.Samsung.Android.AsyncValue`1::updateFunc
	Func_1_t5B109BB44B407A255786F7DB10BD317EFFAA5C63 * ___updateFunc_3;
	// T UnityEngine.AdaptivePerformance.Samsung.Android.AsyncValue`1::newValue
	double ___newValue_4;
	// System.Single UnityEngine.AdaptivePerformance.Samsung.Android.AsyncValue`1::updateTimeDeltaSeconds
	float ___updateTimeDeltaSeconds_5;
	// System.Single UnityEngine.AdaptivePerformance.Samsung.Android.AsyncValue`1::updateTimestamp
	float ___updateTimestamp_6;
	// T UnityEngine.AdaptivePerformance.Samsung.Android.AsyncValue`1::<value>k__BackingField
	double ___U3CvalueU3Ek__BackingField_7;
	// System.Single UnityEngine.AdaptivePerformance.Samsung.Android.AsyncValue`1::<changeTimestamp>k__BackingField
	float ___U3CchangeTimestampU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_updater_0() { return static_cast<int32_t>(offsetof(AsyncValue_1_t15F502DBC70872D99B55432A512A864625B26F15, ___updater_0)); }
	inline AsyncUpdater_tFD9C5192022FBF96B90534567B298522D66D78B2 * get_updater_0() const { return ___updater_0; }
	inline AsyncUpdater_tFD9C5192022FBF96B90534567B298522D66D78B2 ** get_address_of_updater_0() { return &___updater_0; }
	inline void set_updater_0(AsyncUpdater_tFD9C5192022FBF96B90534567B298522D66D78B2 * value)
	{
		___updater_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___updater_0), (void*)value);
	}

	inline static int32_t get_offset_of_updateHandle_1() { return static_cast<int32_t>(offsetof(AsyncValue_1_t15F502DBC70872D99B55432A512A864625B26F15, ___updateHandle_1)); }
	inline int32_t get_updateHandle_1() const { return ___updateHandle_1; }
	inline int32_t* get_address_of_updateHandle_1() { return &___updateHandle_1; }
	inline void set_updateHandle_1(int32_t value)
	{
		___updateHandle_1 = value;
	}

	inline static int32_t get_offset_of_pendingUpdate_2() { return static_cast<int32_t>(offsetof(AsyncValue_1_t15F502DBC70872D99B55432A512A864625B26F15, ___pendingUpdate_2)); }
	inline bool get_pendingUpdate_2() const { return ___pendingUpdate_2; }
	inline bool* get_address_of_pendingUpdate_2() { return &___pendingUpdate_2; }
	inline void set_pendingUpdate_2(bool value)
	{
		___pendingUpdate_2 = value;
	}

	inline static int32_t get_offset_of_updateFunc_3() { return static_cast<int32_t>(offsetof(AsyncValue_1_t15F502DBC70872D99B55432A512A864625B26F15, ___updateFunc_3)); }
	inline Func_1_t5B109BB44B407A255786F7DB10BD317EFFAA5C63 * get_updateFunc_3() const { return ___updateFunc_3; }
	inline Func_1_t5B109BB44B407A255786F7DB10BD317EFFAA5C63 ** get_address_of_updateFunc_3() { return &___updateFunc_3; }
	inline void set_updateFunc_3(Func_1_t5B109BB44B407A255786F7DB10BD317EFFAA5C63 * value)
	{
		___updateFunc_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___updateFunc_3), (void*)value);
	}

	inline static int32_t get_offset_of_newValue_4() { return static_cast<int32_t>(offsetof(AsyncValue_1_t15F502DBC70872D99B55432A512A864625B26F15, ___newValue_4)); }
	inline double get_newValue_4() const { return ___newValue_4; }
	inline double* get_address_of_newValue_4() { return &___newValue_4; }
	inline void set_newValue_4(double value)
	{
		___newValue_4 = value;
	}

	inline static int32_t get_offset_of_updateTimeDeltaSeconds_5() { return static_cast<int32_t>(offsetof(AsyncValue_1_t15F502DBC70872D99B55432A512A864625B26F15, ___updateTimeDeltaSeconds_5)); }
	inline float get_updateTimeDeltaSeconds_5() const { return ___updateTimeDeltaSeconds_5; }
	inline float* get_address_of_updateTimeDeltaSeconds_5() { return &___updateTimeDeltaSeconds_5; }
	inline void set_updateTimeDeltaSeconds_5(float value)
	{
		___updateTimeDeltaSeconds_5 = value;
	}

	inline static int32_t get_offset_of_updateTimestamp_6() { return static_cast<int32_t>(offsetof(AsyncValue_1_t15F502DBC70872D99B55432A512A864625B26F15, ___updateTimestamp_6)); }
	inline float get_updateTimestamp_6() const { return ___updateTimestamp_6; }
	inline float* get_address_of_updateTimestamp_6() { return &___updateTimestamp_6; }
	inline void set_updateTimestamp_6(float value)
	{
		___updateTimestamp_6 = value;
	}

	inline static int32_t get_offset_of_U3CvalueU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(AsyncValue_1_t15F502DBC70872D99B55432A512A864625B26F15, ___U3CvalueU3Ek__BackingField_7)); }
	inline double get_U3CvalueU3Ek__BackingField_7() const { return ___U3CvalueU3Ek__BackingField_7; }
	inline double* get_address_of_U3CvalueU3Ek__BackingField_7() { return &___U3CvalueU3Ek__BackingField_7; }
	inline void set_U3CvalueU3Ek__BackingField_7(double value)
	{
		___U3CvalueU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CchangeTimestampU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(AsyncValue_1_t15F502DBC70872D99B55432A512A864625B26F15, ___U3CchangeTimestampU3Ek__BackingField_8)); }
	inline float get_U3CchangeTimestampU3Ek__BackingField_8() const { return ___U3CchangeTimestampU3Ek__BackingField_8; }
	inline float* get_address_of_U3CchangeTimestampU3Ek__BackingField_8() { return &___U3CchangeTimestampU3Ek__BackingField_8; }
	inline void set_U3CchangeTimestampU3Ek__BackingField_8(float value)
	{
		___U3CchangeTimestampU3Ek__BackingField_8 = value;
	}
};


// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields, ___Value_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_Value_0() const { return ___Value_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Action>
struct List_1_t458734AF850139150AB40DFB2B5D1BCE23178235  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t458734AF850139150AB40DFB2B5D1BCE23178235, ____items_1)); }
	inline ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2* get__items_1() const { return ____items_1; }
	inline ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t458734AF850139150AB40DFB2B5D1BCE23178235, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t458734AF850139150AB40DFB2B5D1BCE23178235, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t458734AF850139150AB40DFB2B5D1BCE23178235, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t458734AF850139150AB40DFB2B5D1BCE23178235_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t458734AF850139150AB40DFB2B5D1BCE23178235_StaticFields, ____emptyArray_5)); }
	inline ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystemDescriptor>
struct List_1_tDC3CCB2B6EC9D3D4B4CDA5C96CB5BB341E2454A4  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	AdaptivePerformanceSubsystemDescriptorU5BU5D_tF42DD815D969B9C584B072F121DBB5B45A39B30E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tDC3CCB2B6EC9D3D4B4CDA5C96CB5BB341E2454A4, ____items_1)); }
	inline AdaptivePerformanceSubsystemDescriptorU5BU5D_tF42DD815D969B9C584B072F121DBB5B45A39B30E* get__items_1() const { return ____items_1; }
	inline AdaptivePerformanceSubsystemDescriptorU5BU5D_tF42DD815D969B9C584B072F121DBB5B45A39B30E** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(AdaptivePerformanceSubsystemDescriptorU5BU5D_tF42DD815D969B9C584B072F121DBB5B45A39B30E* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tDC3CCB2B6EC9D3D4B4CDA5C96CB5BB341E2454A4, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tDC3CCB2B6EC9D3D4B4CDA5C96CB5BB341E2454A4, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tDC3CCB2B6EC9D3D4B4CDA5C96CB5BB341E2454A4, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tDC3CCB2B6EC9D3D4B4CDA5C96CB5BB341E2454A4_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	AdaptivePerformanceSubsystemDescriptorU5BU5D_tF42DD815D969B9C584B072F121DBB5B45A39B30E* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tDC3CCB2B6EC9D3D4B4CDA5C96CB5BB341E2454A4_StaticFields, ____emptyArray_5)); }
	inline AdaptivePerformanceSubsystemDescriptorU5BU5D_tF42DD815D969B9C584B072F121DBB5B45A39B30E* get__emptyArray_5() const { return ____emptyArray_5; }
	inline AdaptivePerformanceSubsystemDescriptorU5BU5D_tF42DD815D969B9C584B072F121DBB5B45A39B30E** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(AdaptivePerformanceSubsystemDescriptorU5BU5D_tF42DD815D969B9C584B072F121DBB5B45A39B30E* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____items_1)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__items_1() const { return ____items_1; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_StaticFields, ____emptyArray_5)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E  : public RuntimeObject
{
public:
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * ___m_jclass_2;

public:
	inline static int32_t get_offset_of_m_jobject_1() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E, ___m_jobject_1)); }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * get_m_jobject_1() const { return ___m_jobject_1; }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 ** get_address_of_m_jobject_1() { return &___m_jobject_1; }
	inline void set_m_jobject_1(GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * value)
	{
		___m_jobject_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_jobject_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_jclass_2() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E, ___m_jclass_2)); }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * get_m_jclass_2() const { return ___m_jclass_2; }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 ** get_address_of_m_jclass_2() { return &___m_jclass_2; }
	inline void set_m_jclass_2(GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * value)
	{
		___m_jclass_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_jclass_2), (void*)value);
	}
};

struct AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_StaticFields
{
public:
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;

public:
	inline static int32_t get_offset_of_enableDebugPrints_0() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_StaticFields, ___enableDebugPrints_0)); }
	inline bool get_enableDebugPrints_0() const { return ___enableDebugPrints_0; }
	inline bool* get_address_of_enableDebugPrints_0() { return &___enableDebugPrints_0; }
	inline void set_enableDebugPrints_0(bool value)
	{
		___enableDebugPrints_0 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// UnityEngine.AdaptivePerformance.Samsung.Android.AsyncUpdater
struct AsyncUpdater_tFD9C5192022FBF96B90534567B298522D66D78B2  : public RuntimeObject
{
public:
	// System.Threading.Thread UnityEngine.AdaptivePerformance.Samsung.Android.AsyncUpdater::m_Thread
	Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * ___m_Thread_0;
	// System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.AsyncUpdater::m_Disposed
	bool ___m_Disposed_1;
	// System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.AsyncUpdater::m_Quit
	bool ___m_Quit_2;
	// System.Collections.Generic.List`1<System.Action> UnityEngine.AdaptivePerformance.Samsung.Android.AsyncUpdater::m_UpdateAction
	List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * ___m_UpdateAction_3;
	// System.Int32[] UnityEngine.AdaptivePerformance.Samsung.Android.AsyncUpdater::m_UpdateRequests
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___m_UpdateRequests_4;
	// System.Boolean[] UnityEngine.AdaptivePerformance.Samsung.Android.AsyncUpdater::m_RequestComplete
	BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* ___m_RequestComplete_5;
	// System.Int32 UnityEngine.AdaptivePerformance.Samsung.Android.AsyncUpdater::m_UpdateRequestReadIndex
	int32_t ___m_UpdateRequestReadIndex_6;
	// System.Int32 UnityEngine.AdaptivePerformance.Samsung.Android.AsyncUpdater::m_UpdateRequestWriteIndex
	int32_t ___m_UpdateRequestWriteIndex_7;
	// System.Object UnityEngine.AdaptivePerformance.Samsung.Android.AsyncUpdater::m_Mutex
	RuntimeObject * ___m_Mutex_8;
	// System.Threading.Semaphore UnityEngine.AdaptivePerformance.Samsung.Android.AsyncUpdater::m_Semaphore
	Semaphore_t6DD478B5937D3F0469887B7829782CA3CB6CD15F * ___m_Semaphore_9;

public:
	inline static int32_t get_offset_of_m_Thread_0() { return static_cast<int32_t>(offsetof(AsyncUpdater_tFD9C5192022FBF96B90534567B298522D66D78B2, ___m_Thread_0)); }
	inline Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * get_m_Thread_0() const { return ___m_Thread_0; }
	inline Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 ** get_address_of_m_Thread_0() { return &___m_Thread_0; }
	inline void set_m_Thread_0(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * value)
	{
		___m_Thread_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Thread_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Disposed_1() { return static_cast<int32_t>(offsetof(AsyncUpdater_tFD9C5192022FBF96B90534567B298522D66D78B2, ___m_Disposed_1)); }
	inline bool get_m_Disposed_1() const { return ___m_Disposed_1; }
	inline bool* get_address_of_m_Disposed_1() { return &___m_Disposed_1; }
	inline void set_m_Disposed_1(bool value)
	{
		___m_Disposed_1 = value;
	}

	inline static int32_t get_offset_of_m_Quit_2() { return static_cast<int32_t>(offsetof(AsyncUpdater_tFD9C5192022FBF96B90534567B298522D66D78B2, ___m_Quit_2)); }
	inline bool get_m_Quit_2() const { return ___m_Quit_2; }
	inline bool* get_address_of_m_Quit_2() { return &___m_Quit_2; }
	inline void set_m_Quit_2(bool value)
	{
		___m_Quit_2 = value;
	}

	inline static int32_t get_offset_of_m_UpdateAction_3() { return static_cast<int32_t>(offsetof(AsyncUpdater_tFD9C5192022FBF96B90534567B298522D66D78B2, ___m_UpdateAction_3)); }
	inline List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * get_m_UpdateAction_3() const { return ___m_UpdateAction_3; }
	inline List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 ** get_address_of_m_UpdateAction_3() { return &___m_UpdateAction_3; }
	inline void set_m_UpdateAction_3(List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * value)
	{
		___m_UpdateAction_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UpdateAction_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_UpdateRequests_4() { return static_cast<int32_t>(offsetof(AsyncUpdater_tFD9C5192022FBF96B90534567B298522D66D78B2, ___m_UpdateRequests_4)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_m_UpdateRequests_4() const { return ___m_UpdateRequests_4; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_m_UpdateRequests_4() { return &___m_UpdateRequests_4; }
	inline void set_m_UpdateRequests_4(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___m_UpdateRequests_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UpdateRequests_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_RequestComplete_5() { return static_cast<int32_t>(offsetof(AsyncUpdater_tFD9C5192022FBF96B90534567B298522D66D78B2, ___m_RequestComplete_5)); }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* get_m_RequestComplete_5() const { return ___m_RequestComplete_5; }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C** get_address_of_m_RequestComplete_5() { return &___m_RequestComplete_5; }
	inline void set_m_RequestComplete_5(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* value)
	{
		___m_RequestComplete_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RequestComplete_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_UpdateRequestReadIndex_6() { return static_cast<int32_t>(offsetof(AsyncUpdater_tFD9C5192022FBF96B90534567B298522D66D78B2, ___m_UpdateRequestReadIndex_6)); }
	inline int32_t get_m_UpdateRequestReadIndex_6() const { return ___m_UpdateRequestReadIndex_6; }
	inline int32_t* get_address_of_m_UpdateRequestReadIndex_6() { return &___m_UpdateRequestReadIndex_6; }
	inline void set_m_UpdateRequestReadIndex_6(int32_t value)
	{
		___m_UpdateRequestReadIndex_6 = value;
	}

	inline static int32_t get_offset_of_m_UpdateRequestWriteIndex_7() { return static_cast<int32_t>(offsetof(AsyncUpdater_tFD9C5192022FBF96B90534567B298522D66D78B2, ___m_UpdateRequestWriteIndex_7)); }
	inline int32_t get_m_UpdateRequestWriteIndex_7() const { return ___m_UpdateRequestWriteIndex_7; }
	inline int32_t* get_address_of_m_UpdateRequestWriteIndex_7() { return &___m_UpdateRequestWriteIndex_7; }
	inline void set_m_UpdateRequestWriteIndex_7(int32_t value)
	{
		___m_UpdateRequestWriteIndex_7 = value;
	}

	inline static int32_t get_offset_of_m_Mutex_8() { return static_cast<int32_t>(offsetof(AsyncUpdater_tFD9C5192022FBF96B90534567B298522D66D78B2, ___m_Mutex_8)); }
	inline RuntimeObject * get_m_Mutex_8() const { return ___m_Mutex_8; }
	inline RuntimeObject ** get_address_of_m_Mutex_8() { return &___m_Mutex_8; }
	inline void set_m_Mutex_8(RuntimeObject * value)
	{
		___m_Mutex_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Mutex_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_Semaphore_9() { return static_cast<int32_t>(offsetof(AsyncUpdater_tFD9C5192022FBF96B90534567B298522D66D78B2, ___m_Semaphore_9)); }
	inline Semaphore_t6DD478B5937D3F0469887B7829782CA3CB6CD15F * get_m_Semaphore_9() const { return ___m_Semaphore_9; }
	inline Semaphore_t6DD478B5937D3F0469887B7829782CA3CB6CD15F ** get_address_of_m_Semaphore_9() { return &___m_Semaphore_9; }
	inline void set_m_Semaphore_9(Semaphore_t6DD478B5937D3F0469887B7829782CA3CB6CD15F * value)
	{
		___m_Semaphore_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Semaphore_9), (void*)value);
	}
};


// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct CriticalFinalizerObject_tA3367C832FFE7434EB3C15C7136AF25524150997  : public RuntimeObject
{
public:

public:
};


// UnityEngine.AdaptivePerformance.Samsung.Android.GameSDKLog
struct GameSDKLog_t09880CE5B30D72E0E8328C7C0EDC15F9A3B3FF44  : public RuntimeObject
{
public:

public:
};

struct GameSDKLog_t09880CE5B30D72E0E8328C7C0EDC15F9A3B3FF44_StaticFields
{
public:
	// UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderSettings UnityEngine.AdaptivePerformance.Samsung.Android.GameSDKLog::settings
	SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A * ___settings_0;

public:
	inline static int32_t get_offset_of_settings_0() { return static_cast<int32_t>(offsetof(GameSDKLog_t09880CE5B30D72E0E8328C7C0EDC15F9A3B3FF44_StaticFields, ___settings_0)); }
	inline SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A * get_settings_0() const { return ___settings_0; }
	inline SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A ** get_address_of_settings_0() { return &___settings_0; }
	inline void set_settings_0(SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A * value)
	{
		___settings_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___settings_0), (void*)value);
	}
};


// System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderConstants
struct SamsungAndroidProviderConstants_t0F425F6BD00C416B8885155B6D2240507E4D3E5A  : public RuntimeObject
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


// UnityEngine.Subsystem
struct Subsystem_t2D97454A946149D608974CB6B674F5F5C613A6A4  : public RuntimeObject
{
public:
	// UnityEngine.ISubsystemDescriptor UnityEngine.Subsystem::m_SubsystemDescriptor
	RuntimeObject* ___m_SubsystemDescriptor_0;

public:
	inline static int32_t get_offset_of_m_SubsystemDescriptor_0() { return static_cast<int32_t>(offsetof(Subsystem_t2D97454A946149D608974CB6B674F5F5C613A6A4, ___m_SubsystemDescriptor_0)); }
	inline RuntimeObject* get_m_SubsystemDescriptor_0() const { return ___m_SubsystemDescriptor_0; }
	inline RuntimeObject** get_address_of_m_SubsystemDescriptor_0() { return &___m_SubsystemDescriptor_0; }
	inline void set_m_SubsystemDescriptor_0(RuntimeObject* value)
	{
		___m_SubsystemDescriptor_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SubsystemDescriptor_0), (void*)value);
	}
};


// UnityEngine.SubsystemDescriptor
struct SubsystemDescriptor_tF663011CB44AB1D342821BBEF7B6811E799A7245  : public RuntimeObject
{
public:
	// System.String UnityEngine.SubsystemDescriptor::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.Type UnityEngine.SubsystemDescriptor::<subsystemImplementationType>k__BackingField
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(SubsystemDescriptor_tF663011CB44AB1D342821BBEF7B6811E799A7245, ___U3CidU3Ek__BackingField_0)); }
	inline String_t* get_U3CidU3Ek__BackingField_0() const { return ___U3CidU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_0() { return &___U3CidU3Ek__BackingField_0; }
	inline void set_U3CidU3Ek__BackingField_0(String_t* value)
	{
		___U3CidU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CidU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsubsystemImplementationTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(SubsystemDescriptor_tF663011CB44AB1D342821BBEF7B6811E799A7245, ___U3CsubsystemImplementationTypeU3Ek__BackingField_1)); }
	inline Type_t * get_U3CsubsystemImplementationTypeU3Ek__BackingField_1() const { return ___U3CsubsystemImplementationTypeU3Ek__BackingField_1; }
	inline Type_t ** get_address_of_U3CsubsystemImplementationTypeU3Ek__BackingField_1() { return &___U3CsubsystemImplementationTypeU3Ek__BackingField_1; }
	inline void set_U3CsubsystemImplementationTypeU3Ek__BackingField_1(Type_t * value)
	{
		___U3CsubsystemImplementationTypeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemImplementationTypeU3Ek__BackingField_1), (void*)value);
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

// UnityEngine.AdaptivePerformance.Samsung.Android.VariableRefreshRate
struct VariableRefreshRate_t57603D16D53370D4A4A0485DA7D22C0D9980C9BD  : public RuntimeObject
{
public:

public:
};

struct VariableRefreshRate_t57603D16D53370D4A4A0485DA7D22C0D9980C9BD_StaticFields
{
public:
	// UnityEngine.AdaptivePerformance.Samsung.Android.IVariableRefreshRate UnityEngine.AdaptivePerformance.Samsung.Android.VariableRefreshRate::<Instance>k__BackingField
	RuntimeObject* ___U3CInstanceU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CInstanceU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(VariableRefreshRate_t57603D16D53370D4A4A0485DA7D22C0D9980C9BD_StaticFields, ___U3CInstanceU3Ek__BackingField_0)); }
	inline RuntimeObject* get_U3CInstanceU3Ek__BackingField_0() const { return ___U3CInstanceU3Ek__BackingField_0; }
	inline RuntimeObject** get_address_of_U3CInstanceU3Ek__BackingField_0() { return &___U3CInstanceU3Ek__BackingField_0; }
	inline void set_U3CInstanceU3Ek__BackingField_0(RuntimeObject* value)
	{
		___U3CInstanceU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInstanceU3Ek__BackingField_0), (void*)value);
	}
};


// System.Version
struct Version_tBDAEDED25425A1D09910468B8BD1759115646E3C  : public RuntimeObject
{
public:
	// System.Int32 System.Version::_Major
	int32_t ____Major_0;
	// System.Int32 System.Version::_Minor
	int32_t ____Minor_1;
	// System.Int32 System.Version::_Build
	int32_t ____Build_2;
	// System.Int32 System.Version::_Revision
	int32_t ____Revision_3;

public:
	inline static int32_t get_offset_of__Major_0() { return static_cast<int32_t>(offsetof(Version_tBDAEDED25425A1D09910468B8BD1759115646E3C, ____Major_0)); }
	inline int32_t get__Major_0() const { return ____Major_0; }
	inline int32_t* get_address_of__Major_0() { return &____Major_0; }
	inline void set__Major_0(int32_t value)
	{
		____Major_0 = value;
	}

	inline static int32_t get_offset_of__Minor_1() { return static_cast<int32_t>(offsetof(Version_tBDAEDED25425A1D09910468B8BD1759115646E3C, ____Minor_1)); }
	inline int32_t get__Minor_1() const { return ____Minor_1; }
	inline int32_t* get_address_of__Minor_1() { return &____Minor_1; }
	inline void set__Minor_1(int32_t value)
	{
		____Minor_1 = value;
	}

	inline static int32_t get_offset_of__Build_2() { return static_cast<int32_t>(offsetof(Version_tBDAEDED25425A1D09910468B8BD1759115646E3C, ____Build_2)); }
	inline int32_t get__Build_2() const { return ____Build_2; }
	inline int32_t* get_address_of__Build_2() { return &____Build_2; }
	inline void set__Build_2(int32_t value)
	{
		____Build_2 = value;
	}

	inline static int32_t get_offset_of__Revision_3() { return static_cast<int32_t>(offsetof(Version_tBDAEDED25425A1D09910468B8BD1759115646E3C, ____Revision_3)); }
	inline int32_t get__Revision_3() const { return ____Revision_3; }
	inline int32_t* get_address_of__Revision_3() { return &____Revision_3; }
	inline void set__Revision_3(int32_t value)
	{
		____Revision_3 = value;
	}
};

struct Version_tBDAEDED25425A1D09910468B8BD1759115646E3C_StaticFields
{
public:
	// System.Char[] System.Version::SeparatorsArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___SeparatorsArray_4;

public:
	inline static int32_t get_offset_of_SeparatorsArray_4() { return static_cast<int32_t>(offsetof(Version_tBDAEDED25425A1D09910468B8BD1759115646E3C_StaticFields, ___SeparatorsArray_4)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_SeparatorsArray_4() const { return ___SeparatorsArray_4; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_SeparatorsArray_4() { return &___SeparatorsArray_4; }
	inline void set_SeparatorsArray_4(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___SeparatorsArray_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SeparatorsArray_4), (void*)value);
	}
};


// UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/<>c
struct U3CU3Ec_t903A2F07E9B1E2A8D05C639D8A6E16A5D888A0DC  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t903A2F07E9B1E2A8D05C639D8A6E16A5D888A0DC_StaticFields
{
public:
	// UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/<>c UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/<>c::<>9
	U3CU3Ec_t903A2F07E9B1E2A8D05C639D8A6E16A5D888A0DC * ___U3CU3E9_0;
	// System.Action UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/<>c::<>9__24_0
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___U3CU3E9__24_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t903A2F07E9B1E2A8D05C639D8A6E16A5D888A0DC_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t903A2F07E9B1E2A8D05C639D8A6E16A5D888A0DC * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t903A2F07E9B1E2A8D05C639D8A6E16A5D888A0DC ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t903A2F07E9B1E2A8D05C639D8A6E16A5D888A0DC * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__24_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t903A2F07E9B1E2A8D05C639D8A6E16A5D888A0DC_StaticFields, ___U3CU3E9__24_0_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_U3CU3E9__24_0_1() const { return ___U3CU3E9__24_0_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_U3CU3E9__24_0_1() { return &___U3CU3E9__24_0_1; }
	inline void set_U3CU3E9__24_0_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___U3CU3E9__24_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__24_0_1), (void*)value);
	}
};


// UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/AutoVariableRefreshRate
struct AutoVariableRefreshRate_tFF7B877BD61A8A6CB5032694D95C06CD37CC7CA9  : public RuntimeObject
{
public:
	// UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderSettings UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/AutoVariableRefreshRate::settings
	SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A * ___settings_0;
	// UnityEngine.AdaptivePerformance.Samsung.Android.IVariableRefreshRate UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/AutoVariableRefreshRate::vrrManager
	RuntimeObject* ___vrrManager_1;
	// System.Single UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/AutoVariableRefreshRate::VrrUpdateTime
	float ___VrrUpdateTime_2;
	// System.Int32 UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/AutoVariableRefreshRate::lastRefreshRateIndex
	int32_t ___lastRefreshRateIndex_3;

public:
	inline static int32_t get_offset_of_settings_0() { return static_cast<int32_t>(offsetof(AutoVariableRefreshRate_tFF7B877BD61A8A6CB5032694D95C06CD37CC7CA9, ___settings_0)); }
	inline SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A * get_settings_0() const { return ___settings_0; }
	inline SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A ** get_address_of_settings_0() { return &___settings_0; }
	inline void set_settings_0(SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A * value)
	{
		___settings_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___settings_0), (void*)value);
	}

	inline static int32_t get_offset_of_vrrManager_1() { return static_cast<int32_t>(offsetof(AutoVariableRefreshRate_tFF7B877BD61A8A6CB5032694D95C06CD37CC7CA9, ___vrrManager_1)); }
	inline RuntimeObject* get_vrrManager_1() const { return ___vrrManager_1; }
	inline RuntimeObject** get_address_of_vrrManager_1() { return &___vrrManager_1; }
	inline void set_vrrManager_1(RuntimeObject* value)
	{
		___vrrManager_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vrrManager_1), (void*)value);
	}

	inline static int32_t get_offset_of_VrrUpdateTime_2() { return static_cast<int32_t>(offsetof(AutoVariableRefreshRate_tFF7B877BD61A8A6CB5032694D95C06CD37CC7CA9, ___VrrUpdateTime_2)); }
	inline float get_VrrUpdateTime_2() const { return ___VrrUpdateTime_2; }
	inline float* get_address_of_VrrUpdateTime_2() { return &___VrrUpdateTime_2; }
	inline void set_VrrUpdateTime_2(float value)
	{
		___VrrUpdateTime_2 = value;
	}

	inline static int32_t get_offset_of_lastRefreshRateIndex_3() { return static_cast<int32_t>(offsetof(AutoVariableRefreshRate_tFF7B877BD61A8A6CB5032694D95C06CD37CC7CA9, ___lastRefreshRateIndex_3)); }
	inline int32_t get_lastRefreshRateIndex_3() const { return ___lastRefreshRateIndex_3; }
	inline int32_t* get_address_of_lastRefreshRateIndex_3() { return &___lastRefreshRateIndex_3; }
	inline void set_lastRefreshRateIndex_3(int32_t value)
	{
		___lastRefreshRateIndex_3 = value;
	}
};


// UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/VRRManager
struct VRRManager_tB79C0272A6886E77A12ADF1365B76758606FD1AC  : public RuntimeObject
{
public:
	// UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/NativeApi UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/VRRManager::m_Api
	NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123 * ___m_Api_0;
	// System.Object UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/VRRManager::m_RefreshRateChangedLock
	RuntimeObject * ___m_RefreshRateChangedLock_1;
	// System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/VRRManager::m_RefreshRateChanged
	bool ___m_RefreshRateChanged_2;
	// System.Int32[] UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/VRRManager::m_SupportedRefreshRates
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___m_SupportedRefreshRates_3;
	// System.Int32 UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/VRRManager::m_CurrentRefreshRate
	int32_t ___m_CurrentRefreshRate_4;
	// System.Int32 UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/VRRManager::m_LastSetRefreshRate
	int32_t ___m_LastSetRefreshRate_5;
	// UnityEngine.AdaptivePerformance.Samsung.Android.VariableRefreshRateEventHandler UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/VRRManager::RefreshRateChanged
	VariableRefreshRateEventHandler_t06D300F6DD7FDB78D3404003A1C81A149DBFAC83 * ___RefreshRateChanged_6;

public:
	inline static int32_t get_offset_of_m_Api_0() { return static_cast<int32_t>(offsetof(VRRManager_tB79C0272A6886E77A12ADF1365B76758606FD1AC, ___m_Api_0)); }
	inline NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123 * get_m_Api_0() const { return ___m_Api_0; }
	inline NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123 ** get_address_of_m_Api_0() { return &___m_Api_0; }
	inline void set_m_Api_0(NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123 * value)
	{
		___m_Api_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Api_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_RefreshRateChangedLock_1() { return static_cast<int32_t>(offsetof(VRRManager_tB79C0272A6886E77A12ADF1365B76758606FD1AC, ___m_RefreshRateChangedLock_1)); }
	inline RuntimeObject * get_m_RefreshRateChangedLock_1() const { return ___m_RefreshRateChangedLock_1; }
	inline RuntimeObject ** get_address_of_m_RefreshRateChangedLock_1() { return &___m_RefreshRateChangedLock_1; }
	inline void set_m_RefreshRateChangedLock_1(RuntimeObject * value)
	{
		___m_RefreshRateChangedLock_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RefreshRateChangedLock_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_RefreshRateChanged_2() { return static_cast<int32_t>(offsetof(VRRManager_tB79C0272A6886E77A12ADF1365B76758606FD1AC, ___m_RefreshRateChanged_2)); }
	inline bool get_m_RefreshRateChanged_2() const { return ___m_RefreshRateChanged_2; }
	inline bool* get_address_of_m_RefreshRateChanged_2() { return &___m_RefreshRateChanged_2; }
	inline void set_m_RefreshRateChanged_2(bool value)
	{
		___m_RefreshRateChanged_2 = value;
	}

	inline static int32_t get_offset_of_m_SupportedRefreshRates_3() { return static_cast<int32_t>(offsetof(VRRManager_tB79C0272A6886E77A12ADF1365B76758606FD1AC, ___m_SupportedRefreshRates_3)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_m_SupportedRefreshRates_3() const { return ___m_SupportedRefreshRates_3; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_m_SupportedRefreshRates_3() { return &___m_SupportedRefreshRates_3; }
	inline void set_m_SupportedRefreshRates_3(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___m_SupportedRefreshRates_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SupportedRefreshRates_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentRefreshRate_4() { return static_cast<int32_t>(offsetof(VRRManager_tB79C0272A6886E77A12ADF1365B76758606FD1AC, ___m_CurrentRefreshRate_4)); }
	inline int32_t get_m_CurrentRefreshRate_4() const { return ___m_CurrentRefreshRate_4; }
	inline int32_t* get_address_of_m_CurrentRefreshRate_4() { return &___m_CurrentRefreshRate_4; }
	inline void set_m_CurrentRefreshRate_4(int32_t value)
	{
		___m_CurrentRefreshRate_4 = value;
	}

	inline static int32_t get_offset_of_m_LastSetRefreshRate_5() { return static_cast<int32_t>(offsetof(VRRManager_tB79C0272A6886E77A12ADF1365B76758606FD1AC, ___m_LastSetRefreshRate_5)); }
	inline int32_t get_m_LastSetRefreshRate_5() const { return ___m_LastSetRefreshRate_5; }
	inline int32_t* get_address_of_m_LastSetRefreshRate_5() { return &___m_LastSetRefreshRate_5; }
	inline void set_m_LastSetRefreshRate_5(int32_t value)
	{
		___m_LastSetRefreshRate_5 = value;
	}

	inline static int32_t get_offset_of_RefreshRateChanged_6() { return static_cast<int32_t>(offsetof(VRRManager_tB79C0272A6886E77A12ADF1365B76758606FD1AC, ___RefreshRateChanged_6)); }
	inline VariableRefreshRateEventHandler_t06D300F6DD7FDB78D3404003A1C81A149DBFAC83 * get_RefreshRateChanged_6() const { return ___RefreshRateChanged_6; }
	inline VariableRefreshRateEventHandler_t06D300F6DD7FDB78D3404003A1C81A149DBFAC83 ** get_address_of_RefreshRateChanged_6() { return &___RefreshRateChanged_6; }
	inline void set_RefreshRateChanged_6(VariableRefreshRateEventHandler_t06D300F6DD7FDB78D3404003A1C81A149DBFAC83 * value)
	{
		___RefreshRateChanged_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RefreshRateChanged_6), (void*)value);
	}
};


// UnityEngine.SubsystemDescriptor`1<UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystem>
struct SubsystemDescriptor_1_tC653834058E8E6B849005D7FC30B695D47E24B81  : public SubsystemDescriptor_tF663011CB44AB1D342821BBEF7B6811E799A7245
{
public:

public:
};


// UnityEngine.Subsystem`1<UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystemDescriptor>
struct Subsystem_1_tEEE31C681DE5D8F2A03892FB8A1DA05290576129  : public Subsystem_t2D97454A946149D608974CB6B674F5F5C613A6A4
{
public:

public:
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


// System.Double
struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
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


// System.Threading.Thread
struct Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414  : public CriticalFinalizerObject_tA3367C832FFE7434EB3C15C7136AF25524150997
{
public:
	// System.Threading.InternalThread System.Threading.Thread::internal_thread
	InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB * ___internal_thread_6;
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
	ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * ___m_ExecutionContext_13;
	// System.Boolean System.Threading.Thread::m_ExecutionContextBelongsToOuterScope
	bool ___m_ExecutionContextBelongsToOuterScope_14;

public:
	inline static int32_t get_offset_of_internal_thread_6() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___internal_thread_6)); }
	inline InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB * get_internal_thread_6() const { return ___internal_thread_6; }
	inline InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB ** get_address_of_internal_thread_6() { return &___internal_thread_6; }
	inline void set_internal_thread_6(InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB * value)
	{
		___internal_thread_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___internal_thread_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_ThreadStartArg_7() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___m_ThreadStartArg_7)); }
	inline RuntimeObject * get_m_ThreadStartArg_7() const { return ___m_ThreadStartArg_7; }
	inline RuntimeObject ** get_address_of_m_ThreadStartArg_7() { return &___m_ThreadStartArg_7; }
	inline void set_m_ThreadStartArg_7(RuntimeObject * value)
	{
		___m_ThreadStartArg_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ThreadStartArg_7), (void*)value);
	}

	inline static int32_t get_offset_of_pending_exception_8() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___pending_exception_8)); }
	inline RuntimeObject * get_pending_exception_8() const { return ___pending_exception_8; }
	inline RuntimeObject ** get_address_of_pending_exception_8() { return &___pending_exception_8; }
	inline void set_pending_exception_8(RuntimeObject * value)
	{
		___pending_exception_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pending_exception_8), (void*)value);
	}

	inline static int32_t get_offset_of_principal_9() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___principal_9)); }
	inline RuntimeObject* get_principal_9() const { return ___principal_9; }
	inline RuntimeObject** get_address_of_principal_9() { return &___principal_9; }
	inline void set_principal_9(RuntimeObject* value)
	{
		___principal_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___principal_9), (void*)value);
	}

	inline static int32_t get_offset_of_principal_version_10() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___principal_version_10)); }
	inline int32_t get_principal_version_10() const { return ___principal_version_10; }
	inline int32_t* get_address_of_principal_version_10() { return &___principal_version_10; }
	inline void set_principal_version_10(int32_t value)
	{
		___principal_version_10 = value;
	}

	inline static int32_t get_offset_of_m_Delegate_12() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___m_Delegate_12)); }
	inline MulticastDelegate_t * get_m_Delegate_12() const { return ___m_Delegate_12; }
	inline MulticastDelegate_t ** get_address_of_m_Delegate_12() { return &___m_Delegate_12; }
	inline void set_m_Delegate_12(MulticastDelegate_t * value)
	{
		___m_Delegate_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Delegate_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_ExecutionContext_13() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___m_ExecutionContext_13)); }
	inline ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * get_m_ExecutionContext_13() const { return ___m_ExecutionContext_13; }
	inline ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 ** get_address_of_m_ExecutionContext_13() { return &___m_ExecutionContext_13; }
	inline void set_m_ExecutionContext_13(ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * value)
	{
		___m_ExecutionContext_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ExecutionContext_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_ExecutionContextBelongsToOuterScope_14() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___m_ExecutionContextBelongsToOuterScope_14)); }
	inline bool get_m_ExecutionContextBelongsToOuterScope_14() const { return ___m_ExecutionContextBelongsToOuterScope_14; }
	inline bool* get_address_of_m_ExecutionContextBelongsToOuterScope_14() { return &___m_ExecutionContextBelongsToOuterScope_14; }
	inline void set_m_ExecutionContextBelongsToOuterScope_14(bool value)
	{
		___m_ExecutionContextBelongsToOuterScope_14 = value;
	}
};

struct Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_StaticFields
{
public:
	// System.LocalDataStoreMgr System.Threading.Thread::s_LocalDataStoreMgr
	LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A * ___s_LocalDataStoreMgr_0;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentCulture
	AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * ___s_asyncLocalCurrentCulture_4;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentUICulture
	AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * ___s_asyncLocalCurrentUICulture_5;

public:
	inline static int32_t get_offset_of_s_LocalDataStoreMgr_0() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_StaticFields, ___s_LocalDataStoreMgr_0)); }
	inline LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A * get_s_LocalDataStoreMgr_0() const { return ___s_LocalDataStoreMgr_0; }
	inline LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A ** get_address_of_s_LocalDataStoreMgr_0() { return &___s_LocalDataStoreMgr_0; }
	inline void set_s_LocalDataStoreMgr_0(LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A * value)
	{
		___s_LocalDataStoreMgr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_LocalDataStoreMgr_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncLocalCurrentCulture_4() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_StaticFields, ___s_asyncLocalCurrentCulture_4)); }
	inline AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * get_s_asyncLocalCurrentCulture_4() const { return ___s_asyncLocalCurrentCulture_4; }
	inline AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 ** get_address_of_s_asyncLocalCurrentCulture_4() { return &___s_asyncLocalCurrentCulture_4; }
	inline void set_s_asyncLocalCurrentCulture_4(AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * value)
	{
		___s_asyncLocalCurrentCulture_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_asyncLocalCurrentCulture_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncLocalCurrentUICulture_5() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_StaticFields, ___s_asyncLocalCurrentUICulture_5)); }
	inline AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * get_s_asyncLocalCurrentUICulture_5() const { return ___s_asyncLocalCurrentUICulture_5; }
	inline AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 ** get_address_of_s_asyncLocalCurrentUICulture_5() { return &___s_asyncLocalCurrentUICulture_5; }
	inline void set_s_asyncLocalCurrentUICulture_5(AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * value)
	{
		___s_asyncLocalCurrentUICulture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_asyncLocalCurrentUICulture_5), (void*)value);
	}
};

struct Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields
{
public:
	// System.LocalDataStoreHolder System.Threading.Thread::s_LocalDataStore
	LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146 * ___s_LocalDataStore_1;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentCulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___m_CurrentCulture_2;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentUICulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___m_CurrentUICulture_3;
	// System.Threading.Thread System.Threading.Thread::current_thread
	Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * ___current_thread_11;

public:
	inline static int32_t get_offset_of_s_LocalDataStore_1() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields, ___s_LocalDataStore_1)); }
	inline LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146 * get_s_LocalDataStore_1() const { return ___s_LocalDataStore_1; }
	inline LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146 ** get_address_of_s_LocalDataStore_1() { return &___s_LocalDataStore_1; }
	inline void set_s_LocalDataStore_1(LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146 * value)
	{
		___s_LocalDataStore_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_LocalDataStore_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentCulture_2() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields, ___m_CurrentCulture_2)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_m_CurrentCulture_2() const { return ___m_CurrentCulture_2; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_m_CurrentCulture_2() { return &___m_CurrentCulture_2; }
	inline void set_m_CurrentCulture_2(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___m_CurrentCulture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentCulture_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentUICulture_3() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields, ___m_CurrentUICulture_3)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_m_CurrentUICulture_3() const { return ___m_CurrentUICulture_3; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_m_CurrentUICulture_3() { return &___m_CurrentUICulture_3; }
	inline void set_m_CurrentUICulture_3(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___m_CurrentUICulture_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentUICulture_3), (void*)value);
	}

	inline static int32_t get_offset_of_current_thread_11() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields, ___current_thread_11)); }
	inline Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * get_current_thread_11() const { return ___current_thread_11; }
	inline Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 ** get_address_of_current_thread_11() { return &___current_thread_11; }
	inline void set_current_thread_11(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * value)
	{
		___current_thread_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_thread_11), (void*)value);
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


// UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystemDescriptor/Cinfo
struct Cinfo_t343E1319F64BFAAB6A935377090A355E67211F2B 
{
public:
	// System.String UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystemDescriptor/Cinfo::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.Type UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystemDescriptor/Cinfo::<subsystemImplementationType>k__BackingField
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Cinfo_t343E1319F64BFAAB6A935377090A355E67211F2B, ___U3CidU3Ek__BackingField_0)); }
	inline String_t* get_U3CidU3Ek__BackingField_0() const { return ___U3CidU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_0() { return &___U3CidU3Ek__BackingField_0; }
	inline void set_U3CidU3Ek__BackingField_0(String_t* value)
	{
		___U3CidU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CidU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsubsystemImplementationTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Cinfo_t343E1319F64BFAAB6A935377090A355E67211F2B, ___U3CsubsystemImplementationTypeU3Ek__BackingField_1)); }
	inline Type_t * get_U3CsubsystemImplementationTypeU3Ek__BackingField_1() const { return ___U3CsubsystemImplementationTypeU3Ek__BackingField_1; }
	inline Type_t ** get_address_of_U3CsubsystemImplementationTypeU3Ek__BackingField_1() { return &___U3CsubsystemImplementationTypeU3Ek__BackingField_1; }
	inline void set_U3CsubsystemImplementationTypeU3Ek__BackingField_1(Type_t * value)
	{
		___U3CsubsystemImplementationTypeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemImplementationTypeU3Ek__BackingField_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystemDescriptor/Cinfo
struct Cinfo_t343E1319F64BFAAB6A935377090A355E67211F2B_marshaled_pinvoke
{
	char* ___U3CidU3Ek__BackingField_0;
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_1;
};
// Native definition for COM marshalling of UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystemDescriptor/Cinfo
struct Cinfo_t343E1319F64BFAAB6A935377090A355E67211F2B_marshaled_com
{
	Il2CppChar* ___U3CidU3Ek__BackingField_0;
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_1;
};

// UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystemBase
struct AdaptivePerformanceSubsystemBase_t6FF55B768F8B0E39432CE60CDD86D1BC8DC235CC  : public Subsystem_1_tEEE31C681DE5D8F2A03892FB8A1DA05290576129
{
public:
	// System.Boolean UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystemBase::<initialized>k__BackingField
	bool ___U3CinitializedU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CinitializedU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AdaptivePerformanceSubsystemBase_t6FF55B768F8B0E39432CE60CDD86D1BC8DC235CC, ___U3CinitializedU3Ek__BackingField_1)); }
	inline bool get_U3CinitializedU3Ek__BackingField_1() const { return ___U3CinitializedU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CinitializedU3Ek__BackingField_1() { return &___U3CinitializedU3Ek__BackingField_1; }
	inline void set_U3CinitializedU3Ek__BackingField_1(bool value)
	{
		___U3CinitializedU3Ek__BackingField_1 = value;
	}
};


// UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystemDescriptor
struct AdaptivePerformanceSubsystemDescriptor_t08DC609A273D4C0D10E8130646B7B147AEA5AD71  : public SubsystemDescriptor_1_tC653834058E8E6B849005D7FC30B695D47E24B81
{
public:

public:
};


// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF  : public RuntimeObject
{
public:
	// UnityEngine.AndroidJavaClass UnityEngine.AndroidJavaProxy::javaInterface
	AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * ___javaInterface_0;
	// System.IntPtr UnityEngine.AndroidJavaProxy::proxyObject
	intptr_t ___proxyObject_1;

public:
	inline static int32_t get_offset_of_javaInterface_0() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF, ___javaInterface_0)); }
	inline AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * get_javaInterface_0() const { return ___javaInterface_0; }
	inline AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 ** get_address_of_javaInterface_0() { return &___javaInterface_0; }
	inline void set_javaInterface_0(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * value)
	{
		___javaInterface_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___javaInterface_0), (void*)value);
	}

	inline static int32_t get_offset_of_proxyObject_1() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF, ___proxyObject_1)); }
	inline intptr_t get_proxyObject_1() const { return ___proxyObject_1; }
	inline intptr_t* get_address_of_proxyObject_1() { return &___proxyObject_1; }
	inline void set_proxyObject_1(intptr_t value)
	{
		___proxyObject_1 = value;
	}
};

struct AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_StaticFields
{
public:
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaProxy::s_JavaLangSystemClass
	GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * ___s_JavaLangSystemClass_2;
	// System.IntPtr UnityEngine.AndroidJavaProxy::s_HashCodeMethodID
	intptr_t ___s_HashCodeMethodID_3;

public:
	inline static int32_t get_offset_of_s_JavaLangSystemClass_2() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_StaticFields, ___s_JavaLangSystemClass_2)); }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * get_s_JavaLangSystemClass_2() const { return ___s_JavaLangSystemClass_2; }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 ** get_address_of_s_JavaLangSystemClass_2() { return &___s_JavaLangSystemClass_2; }
	inline void set_s_JavaLangSystemClass_2(GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * value)
	{
		___s_JavaLangSystemClass_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_JavaLangSystemClass_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_HashCodeMethodID_3() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_StaticFields, ___s_HashCodeMethodID_3)); }
	inline intptr_t get_s_HashCodeMethodID_3() const { return ___s_HashCodeMethodID_3; }
	inline intptr_t* get_address_of_s_HashCodeMethodID_3() { return &___s_HashCodeMethodID_3; }
	inline void set_s_HashCodeMethodID_3(intptr_t value)
	{
		___s_HashCodeMethodID_3 = value;
	}
};


// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
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

// UnityEngine.AdaptivePerformance.Provider.Feature
struct Feature_t5F341CEBCC269FF83EFC9EACB0B367E91B1F35DB 
{
public:
	// System.Int32 UnityEngine.AdaptivePerformance.Provider.Feature::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Feature_t5F341CEBCC269FF83EFC9EACB0B367E91B1F35DB, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Int32Enum
struct Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C, ___value___2)); }
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

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.StringComparison
struct StringComparison_tCC9F72B9B1E2C3C6D2566DD0D3A61E1621048998 
{
public:
	// System.Int32 System.StringComparison::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StringComparison_tCC9F72B9B1E2C3C6D2566DD0D3A61E1621048998, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.TimeSpan
struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;

public:
	inline static int32_t get_offset_of__ticks_22() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203, ____ticks_22)); }
	inline int64_t get__ticks_22() const { return ____ticks_22; }
	inline int64_t* get_address_of__ticks_22() { return &____ticks_22; }
	inline void set__ticks_22(int64_t value)
	{
		____ticks_22 = value;
	}
};

struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MinValue_21;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_24;

public:
	inline static int32_t get_offset_of_Zero_19() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___Zero_19)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_Zero_19() const { return ___Zero_19; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_Zero_19() { return &___Zero_19; }
	inline void set_Zero_19(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___Zero_19 = value;
	}

	inline static int32_t get_offset_of_MaxValue_20() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MaxValue_20)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MaxValue_20() const { return ___MaxValue_20; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MaxValue_20() { return &___MaxValue_20; }
	inline void set_MaxValue_20(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MaxValue_20 = value;
	}

	inline static int32_t get_offset_of_MinValue_21() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MinValue_21)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MinValue_21() const { return ___MinValue_21; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MinValue_21() { return &___MinValue_21; }
	inline void set_MinValue_21(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MinValue_21 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_23() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyConfigChecked_23)); }
	inline bool get__legacyConfigChecked_23() const { return ____legacyConfigChecked_23; }
	inline bool* get_address_of__legacyConfigChecked_23() { return &____legacyConfigChecked_23; }
	inline void set__legacyConfigChecked_23(bool value)
	{
		____legacyConfigChecked_23 = value;
	}

	inline static int32_t get_offset_of__legacyMode_24() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyMode_24)); }
	inline bool get__legacyMode_24() const { return ____legacyMode_24; }
	inline bool* get_address_of__legacyMode_24() { return &____legacyMode_24; }
	inline void set__legacyMode_24(bool value)
	{
		____legacyMode_24 = value;
	}
};


// System.Threading.WaitHandle
struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IntPtr System.Threading.WaitHandle::waitHandle
	intptr_t ___waitHandle_3;
	// Microsoft.Win32.SafeHandles.SafeWaitHandle modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.WaitHandle::safeWaitHandle
	SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 * ___safeWaitHandle_4;
	// System.Boolean System.Threading.WaitHandle::hasThreadAffinity
	bool ___hasThreadAffinity_5;

public:
	inline static int32_t get_offset_of_waitHandle_3() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842, ___waitHandle_3)); }
	inline intptr_t get_waitHandle_3() const { return ___waitHandle_3; }
	inline intptr_t* get_address_of_waitHandle_3() { return &___waitHandle_3; }
	inline void set_waitHandle_3(intptr_t value)
	{
		___waitHandle_3 = value;
	}

	inline static int32_t get_offset_of_safeWaitHandle_4() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842, ___safeWaitHandle_4)); }
	inline SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 * get_safeWaitHandle_4() const { return ___safeWaitHandle_4; }
	inline SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 ** get_address_of_safeWaitHandle_4() { return &___safeWaitHandle_4; }
	inline void set_safeWaitHandle_4(SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 * value)
	{
		___safeWaitHandle_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___safeWaitHandle_4), (void*)value);
	}

	inline static int32_t get_offset_of_hasThreadAffinity_5() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842, ___hasThreadAffinity_5)); }
	inline bool get_hasThreadAffinity_5() const { return ___hasThreadAffinity_5; }
	inline bool* get_address_of_hasThreadAffinity_5() { return &___hasThreadAffinity_5; }
	inline void set_hasThreadAffinity_5(bool value)
	{
		___hasThreadAffinity_5 = value;
	}
};

struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_StaticFields
{
public:
	// System.IntPtr System.Threading.WaitHandle::InvalidHandle
	intptr_t ___InvalidHandle_10;

public:
	inline static int32_t get_offset_of_InvalidHandle_10() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_StaticFields, ___InvalidHandle_10)); }
	inline intptr_t get_InvalidHandle_10() const { return ___InvalidHandle_10; }
	inline intptr_t* get_address_of_InvalidHandle_10() { return &___InvalidHandle_10; }
	inline void set_InvalidHandle_10(intptr_t value)
	{
		___InvalidHandle_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Threading.WaitHandle
struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_marshaled_pinvoke : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};
// Native definition for COM marshalling of System.Threading.WaitHandle
struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_marshaled_com : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};

// UnityEngine.AdaptivePerformance.WarningLevel
struct WarningLevel_t247A6D95E01EB65801B6C7BEC114C98FC1C291BA 
{
public:
	// System.Int32 UnityEngine.AdaptivePerformance.WarningLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WarningLevel_t247A6D95E01EB65801B6C7BEC114C98FC1C291BA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.jvalue
struct jvalue_t220BECEE73180D6A4DE0F66CB6BA852EC6A5B587 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Boolean UnityEngine.jvalue::z
			bool ___z_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			bool ___z_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.SByte UnityEngine.jvalue::b
			int8_t ___b_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___b_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Char UnityEngine.jvalue::c
			Il2CppChar ___c_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			Il2CppChar ___c_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int16 UnityEngine.jvalue::s
			int16_t ___s_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___s_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.jvalue::i
			int32_t ___i_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___i_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int64 UnityEngine.jvalue::j
			int64_t ___j_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___j_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Single UnityEngine.jvalue::f
			float ___f_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___f_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Double UnityEngine.jvalue::d
			double ___d_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___d_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.IntPtr UnityEngine.jvalue::l
			intptr_t ___l_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			intptr_t ___l_8_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_z_0() { return static_cast<int32_t>(offsetof(jvalue_t220BECEE73180D6A4DE0F66CB6BA852EC6A5B587, ___z_0)); }
	inline bool get_z_0() const { return ___z_0; }
	inline bool* get_address_of_z_0() { return &___z_0; }
	inline void set_z_0(bool value)
	{
		___z_0 = value;
	}

	inline static int32_t get_offset_of_b_1() { return static_cast<int32_t>(offsetof(jvalue_t220BECEE73180D6A4DE0F66CB6BA852EC6A5B587, ___b_1)); }
	inline int8_t get_b_1() const { return ___b_1; }
	inline int8_t* get_address_of_b_1() { return &___b_1; }
	inline void set_b_1(int8_t value)
	{
		___b_1 = value;
	}

	inline static int32_t get_offset_of_c_2() { return static_cast<int32_t>(offsetof(jvalue_t220BECEE73180D6A4DE0F66CB6BA852EC6A5B587, ___c_2)); }
	inline Il2CppChar get_c_2() const { return ___c_2; }
	inline Il2CppChar* get_address_of_c_2() { return &___c_2; }
	inline void set_c_2(Il2CppChar value)
	{
		___c_2 = value;
	}

	inline static int32_t get_offset_of_s_3() { return static_cast<int32_t>(offsetof(jvalue_t220BECEE73180D6A4DE0F66CB6BA852EC6A5B587, ___s_3)); }
	inline int16_t get_s_3() const { return ___s_3; }
	inline int16_t* get_address_of_s_3() { return &___s_3; }
	inline void set_s_3(int16_t value)
	{
		___s_3 = value;
	}

	inline static int32_t get_offset_of_i_4() { return static_cast<int32_t>(offsetof(jvalue_t220BECEE73180D6A4DE0F66CB6BA852EC6A5B587, ___i_4)); }
	inline int32_t get_i_4() const { return ___i_4; }
	inline int32_t* get_address_of_i_4() { return &___i_4; }
	inline void set_i_4(int32_t value)
	{
		___i_4 = value;
	}

	inline static int32_t get_offset_of_j_5() { return static_cast<int32_t>(offsetof(jvalue_t220BECEE73180D6A4DE0F66CB6BA852EC6A5B587, ___j_5)); }
	inline int64_t get_j_5() const { return ___j_5; }
	inline int64_t* get_address_of_j_5() { return &___j_5; }
	inline void set_j_5(int64_t value)
	{
		___j_5 = value;
	}

	inline static int32_t get_offset_of_f_6() { return static_cast<int32_t>(offsetof(jvalue_t220BECEE73180D6A4DE0F66CB6BA852EC6A5B587, ___f_6)); }
	inline float get_f_6() const { return ___f_6; }
	inline float* get_address_of_f_6() { return &___f_6; }
	inline void set_f_6(float value)
	{
		___f_6 = value;
	}

	inline static int32_t get_offset_of_d_7() { return static_cast<int32_t>(offsetof(jvalue_t220BECEE73180D6A4DE0F66CB6BA852EC6A5B587, ___d_7)); }
	inline double get_d_7() const { return ___d_7; }
	inline double* get_address_of_d_7() { return &___d_7; }
	inline void set_d_7(double value)
	{
		___d_7 = value;
	}

	inline static int32_t get_offset_of_l_8() { return static_cast<int32_t>(offsetof(jvalue_t220BECEE73180D6A4DE0F66CB6BA852EC6A5B587, ___l_8)); }
	inline intptr_t get_l_8() const { return ___l_8; }
	inline intptr_t* get_address_of_l_8() { return &___l_8; }
	inline void set_l_8(intptr_t value)
	{
		___l_8 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.jvalue
struct jvalue_t220BECEE73180D6A4DE0F66CB6BA852EC6A5B587_marshaled_pinvoke
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___z_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___z_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int8_t ___b_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___b_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___c_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___c_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int16_t ___s_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___s_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___i_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___i_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___j_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___j_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___f_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___f_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___d_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___d_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			intptr_t ___l_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			intptr_t ___l_8_forAlignmentOnly;
		};
	};
};
// Native definition for COM marshalling of UnityEngine.jvalue
struct jvalue_t220BECEE73180D6A4DE0F66CB6BA852EC6A5B587_marshaled_com
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___z_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___z_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int8_t ___b_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___b_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___c_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___c_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int16_t ___s_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___s_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___i_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___i_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___j_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___j_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___f_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___f_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___d_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___d_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			intptr_t ___l_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			intptr_t ___l_8_forAlignmentOnly;
		};
	};
};

// UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystem
struct AdaptivePerformanceSubsystem_tD1EF79067301732948F731CDD69D58FECB6571FA  : public AdaptivePerformanceSubsystemBase_t6FF55B768F8B0E39432CE60CDD86D1BC8DC235CC
{
public:
	// UnityEngine.AdaptivePerformance.Provider.Feature UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystem::<Capabilities>k__BackingField
	int32_t ___U3CCapabilitiesU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CCapabilitiesU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(AdaptivePerformanceSubsystem_tD1EF79067301732948F731CDD69D58FECB6571FA, ___U3CCapabilitiesU3Ek__BackingField_2)); }
	inline int32_t get_U3CCapabilitiesU3Ek__BackingField_2() const { return ___U3CCapabilitiesU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CCapabilitiesU3Ek__BackingField_2() { return &___U3CCapabilitiesU3Ek__BackingField_2; }
	inline void set_U3CCapabilitiesU3Ek__BackingField_2(int32_t value)
	{
		___U3CCapabilitiesU3Ek__BackingField_2 = value;
	}
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

// UnityEngine.AdaptivePerformance.Provider.PerformanceDataRecord
struct PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 
{
public:
	// UnityEngine.AdaptivePerformance.Provider.Feature UnityEngine.AdaptivePerformance.Provider.PerformanceDataRecord::<ChangeFlags>k__BackingField
	int32_t ___U3CChangeFlagsU3Ek__BackingField_0;
	// System.Single UnityEngine.AdaptivePerformance.Provider.PerformanceDataRecord::<TemperatureLevel>k__BackingField
	float ___U3CTemperatureLevelU3Ek__BackingField_1;
	// System.Single UnityEngine.AdaptivePerformance.Provider.PerformanceDataRecord::<TemperatureTrend>k__BackingField
	float ___U3CTemperatureTrendU3Ek__BackingField_2;
	// UnityEngine.AdaptivePerformance.WarningLevel UnityEngine.AdaptivePerformance.Provider.PerformanceDataRecord::<WarningLevel>k__BackingField
	int32_t ___U3CWarningLevelU3Ek__BackingField_3;
	// System.Int32 UnityEngine.AdaptivePerformance.Provider.PerformanceDataRecord::<CpuPerformanceLevel>k__BackingField
	int32_t ___U3CCpuPerformanceLevelU3Ek__BackingField_4;
	// System.Int32 UnityEngine.AdaptivePerformance.Provider.PerformanceDataRecord::<GpuPerformanceLevel>k__BackingField
	int32_t ___U3CGpuPerformanceLevelU3Ek__BackingField_5;
	// System.Boolean UnityEngine.AdaptivePerformance.Provider.PerformanceDataRecord::<PerformanceLevelControlAvailable>k__BackingField
	bool ___U3CPerformanceLevelControlAvailableU3Ek__BackingField_6;
	// System.Single UnityEngine.AdaptivePerformance.Provider.PerformanceDataRecord::<CpuFrameTime>k__BackingField
	float ___U3CCpuFrameTimeU3Ek__BackingField_7;
	// System.Single UnityEngine.AdaptivePerformance.Provider.PerformanceDataRecord::<GpuFrameTime>k__BackingField
	float ___U3CGpuFrameTimeU3Ek__BackingField_8;
	// System.Single UnityEngine.AdaptivePerformance.Provider.PerformanceDataRecord::<OverallFrameTime>k__BackingField
	float ___U3COverallFrameTimeU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of_U3CChangeFlagsU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457, ___U3CChangeFlagsU3Ek__BackingField_0)); }
	inline int32_t get_U3CChangeFlagsU3Ek__BackingField_0() const { return ___U3CChangeFlagsU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CChangeFlagsU3Ek__BackingField_0() { return &___U3CChangeFlagsU3Ek__BackingField_0; }
	inline void set_U3CChangeFlagsU3Ek__BackingField_0(int32_t value)
	{
		___U3CChangeFlagsU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CTemperatureLevelU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457, ___U3CTemperatureLevelU3Ek__BackingField_1)); }
	inline float get_U3CTemperatureLevelU3Ek__BackingField_1() const { return ___U3CTemperatureLevelU3Ek__BackingField_1; }
	inline float* get_address_of_U3CTemperatureLevelU3Ek__BackingField_1() { return &___U3CTemperatureLevelU3Ek__BackingField_1; }
	inline void set_U3CTemperatureLevelU3Ek__BackingField_1(float value)
	{
		___U3CTemperatureLevelU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CTemperatureTrendU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457, ___U3CTemperatureTrendU3Ek__BackingField_2)); }
	inline float get_U3CTemperatureTrendU3Ek__BackingField_2() const { return ___U3CTemperatureTrendU3Ek__BackingField_2; }
	inline float* get_address_of_U3CTemperatureTrendU3Ek__BackingField_2() { return &___U3CTemperatureTrendU3Ek__BackingField_2; }
	inline void set_U3CTemperatureTrendU3Ek__BackingField_2(float value)
	{
		___U3CTemperatureTrendU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CWarningLevelU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457, ___U3CWarningLevelU3Ek__BackingField_3)); }
	inline int32_t get_U3CWarningLevelU3Ek__BackingField_3() const { return ___U3CWarningLevelU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CWarningLevelU3Ek__BackingField_3() { return &___U3CWarningLevelU3Ek__BackingField_3; }
	inline void set_U3CWarningLevelU3Ek__BackingField_3(int32_t value)
	{
		___U3CWarningLevelU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CCpuPerformanceLevelU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457, ___U3CCpuPerformanceLevelU3Ek__BackingField_4)); }
	inline int32_t get_U3CCpuPerformanceLevelU3Ek__BackingField_4() const { return ___U3CCpuPerformanceLevelU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CCpuPerformanceLevelU3Ek__BackingField_4() { return &___U3CCpuPerformanceLevelU3Ek__BackingField_4; }
	inline void set_U3CCpuPerformanceLevelU3Ek__BackingField_4(int32_t value)
	{
		___U3CCpuPerformanceLevelU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CGpuPerformanceLevelU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457, ___U3CGpuPerformanceLevelU3Ek__BackingField_5)); }
	inline int32_t get_U3CGpuPerformanceLevelU3Ek__BackingField_5() const { return ___U3CGpuPerformanceLevelU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CGpuPerformanceLevelU3Ek__BackingField_5() { return &___U3CGpuPerformanceLevelU3Ek__BackingField_5; }
	inline void set_U3CGpuPerformanceLevelU3Ek__BackingField_5(int32_t value)
	{
		___U3CGpuPerformanceLevelU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CPerformanceLevelControlAvailableU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457, ___U3CPerformanceLevelControlAvailableU3Ek__BackingField_6)); }
	inline bool get_U3CPerformanceLevelControlAvailableU3Ek__BackingField_6() const { return ___U3CPerformanceLevelControlAvailableU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CPerformanceLevelControlAvailableU3Ek__BackingField_6() { return &___U3CPerformanceLevelControlAvailableU3Ek__BackingField_6; }
	inline void set_U3CPerformanceLevelControlAvailableU3Ek__BackingField_6(bool value)
	{
		___U3CPerformanceLevelControlAvailableU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CCpuFrameTimeU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457, ___U3CCpuFrameTimeU3Ek__BackingField_7)); }
	inline float get_U3CCpuFrameTimeU3Ek__BackingField_7() const { return ___U3CCpuFrameTimeU3Ek__BackingField_7; }
	inline float* get_address_of_U3CCpuFrameTimeU3Ek__BackingField_7() { return &___U3CCpuFrameTimeU3Ek__BackingField_7; }
	inline void set_U3CCpuFrameTimeU3Ek__BackingField_7(float value)
	{
		___U3CCpuFrameTimeU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CGpuFrameTimeU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457, ___U3CGpuFrameTimeU3Ek__BackingField_8)); }
	inline float get_U3CGpuFrameTimeU3Ek__BackingField_8() const { return ___U3CGpuFrameTimeU3Ek__BackingField_8; }
	inline float* get_address_of_U3CGpuFrameTimeU3Ek__BackingField_8() { return &___U3CGpuFrameTimeU3Ek__BackingField_8; }
	inline void set_U3CGpuFrameTimeU3Ek__BackingField_8(float value)
	{
		___U3CGpuFrameTimeU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3COverallFrameTimeU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457, ___U3COverallFrameTimeU3Ek__BackingField_9)); }
	inline float get_U3COverallFrameTimeU3Ek__BackingField_9() const { return ___U3COverallFrameTimeU3Ek__BackingField_9; }
	inline float* get_address_of_U3COverallFrameTimeU3Ek__BackingField_9() { return &___U3COverallFrameTimeU3Ek__BackingField_9; }
	inline void set_U3COverallFrameTimeU3Ek__BackingField_9(float value)
	{
		___U3COverallFrameTimeU3Ek__BackingField_9 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AdaptivePerformance.Provider.PerformanceDataRecord
struct PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457_marshaled_pinvoke
{
	int32_t ___U3CChangeFlagsU3Ek__BackingField_0;
	float ___U3CTemperatureLevelU3Ek__BackingField_1;
	float ___U3CTemperatureTrendU3Ek__BackingField_2;
	int32_t ___U3CWarningLevelU3Ek__BackingField_3;
	int32_t ___U3CCpuPerformanceLevelU3Ek__BackingField_4;
	int32_t ___U3CGpuPerformanceLevelU3Ek__BackingField_5;
	int32_t ___U3CPerformanceLevelControlAvailableU3Ek__BackingField_6;
	float ___U3CCpuFrameTimeU3Ek__BackingField_7;
	float ___U3CGpuFrameTimeU3Ek__BackingField_8;
	float ___U3COverallFrameTimeU3Ek__BackingField_9;
};
// Native definition for COM marshalling of UnityEngine.AdaptivePerformance.Provider.PerformanceDataRecord
struct PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457_marshaled_com
{
	int32_t ___U3CChangeFlagsU3Ek__BackingField_0;
	float ___U3CTemperatureLevelU3Ek__BackingField_1;
	float ___U3CTemperatureTrendU3Ek__BackingField_2;
	int32_t ___U3CWarningLevelU3Ek__BackingField_3;
	int32_t ___U3CCpuPerformanceLevelU3Ek__BackingField_4;
	int32_t ___U3CGpuPerformanceLevelU3Ek__BackingField_5;
	int32_t ___U3CPerformanceLevelControlAvailableU3Ek__BackingField_6;
	float ___U3CCpuFrameTimeU3Ek__BackingField_7;
	float ___U3CGpuFrameTimeU3Ek__BackingField_8;
	float ___U3COverallFrameTimeU3Ek__BackingField_9;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
};

// System.Threading.Semaphore
struct Semaphore_t6DD478B5937D3F0469887B7829782CA3CB6CD15F  : public WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842
{
public:

public:
};


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
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
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/NativeApi
struct NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123  : public AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF
{
public:
	// System.Action`1<UnityEngine.AdaptivePerformance.WarningLevel> UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/NativeApi::PerformanceWarningEvent
	Action_1_t8C4711099B422DAD7EA49F9E5395372F09F28C82 * ___PerformanceWarningEvent_10;
	// System.Action UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/NativeApi::PerformanceLevelTimeoutEvent
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___PerformanceLevelTimeoutEvent_11;
	// System.Action UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/NativeApi::RefreshRateChangedEvent
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___RefreshRateChangedEvent_12;

public:
	inline static int32_t get_offset_of_PerformanceWarningEvent_10() { return static_cast<int32_t>(offsetof(NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123, ___PerformanceWarningEvent_10)); }
	inline Action_1_t8C4711099B422DAD7EA49F9E5395372F09F28C82 * get_PerformanceWarningEvent_10() const { return ___PerformanceWarningEvent_10; }
	inline Action_1_t8C4711099B422DAD7EA49F9E5395372F09F28C82 ** get_address_of_PerformanceWarningEvent_10() { return &___PerformanceWarningEvent_10; }
	inline void set_PerformanceWarningEvent_10(Action_1_t8C4711099B422DAD7EA49F9E5395372F09F28C82 * value)
	{
		___PerformanceWarningEvent_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PerformanceWarningEvent_10), (void*)value);
	}

	inline static int32_t get_offset_of_PerformanceLevelTimeoutEvent_11() { return static_cast<int32_t>(offsetof(NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123, ___PerformanceLevelTimeoutEvent_11)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_PerformanceLevelTimeoutEvent_11() const { return ___PerformanceLevelTimeoutEvent_11; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_PerformanceLevelTimeoutEvent_11() { return &___PerformanceLevelTimeoutEvent_11; }
	inline void set_PerformanceLevelTimeoutEvent_11(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___PerformanceLevelTimeoutEvent_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PerformanceLevelTimeoutEvent_11), (void*)value);
	}

	inline static int32_t get_offset_of_RefreshRateChangedEvent_12() { return static_cast<int32_t>(offsetof(NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123, ___RefreshRateChangedEvent_12)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_RefreshRateChangedEvent_12() const { return ___RefreshRateChangedEvent_12; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_RefreshRateChangedEvent_12() { return &___RefreshRateChangedEvent_12; }
	inline void set_RefreshRateChangedEvent_12(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___RefreshRateChangedEvent_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RefreshRateChangedEvent_12), (void*)value);
	}
};

struct NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_StaticFields
{
public:
	// UnityEngine.AndroidJavaObject UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/NativeApi::s_GameSDK
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___s_GameSDK_4;
	// System.IntPtr UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/NativeApi::s_GameSDKRawObjectID
	intptr_t ___s_GameSDKRawObjectID_5;
	// System.IntPtr UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/NativeApi::s_GetGpuFrameTimeID
	intptr_t ___s_GetGpuFrameTimeID_6;
	// System.IntPtr UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/NativeApi::s_GetHighPrecisionSkinTempLevelID
	intptr_t ___s_GetHighPrecisionSkinTempLevelID_7;
	// System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/NativeApi::s_isAvailable
	bool ___s_isAvailable_8;
	// UnityEngine.jvalue[] UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/NativeApi::s_NoArgs
	jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* ___s_NoArgs_9;

public:
	inline static int32_t get_offset_of_s_GameSDK_4() { return static_cast<int32_t>(offsetof(NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_StaticFields, ___s_GameSDK_4)); }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * get_s_GameSDK_4() const { return ___s_GameSDK_4; }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E ** get_address_of_s_GameSDK_4() { return &___s_GameSDK_4; }
	inline void set_s_GameSDK_4(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * value)
	{
		___s_GameSDK_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_GameSDK_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_GameSDKRawObjectID_5() { return static_cast<int32_t>(offsetof(NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_StaticFields, ___s_GameSDKRawObjectID_5)); }
	inline intptr_t get_s_GameSDKRawObjectID_5() const { return ___s_GameSDKRawObjectID_5; }
	inline intptr_t* get_address_of_s_GameSDKRawObjectID_5() { return &___s_GameSDKRawObjectID_5; }
	inline void set_s_GameSDKRawObjectID_5(intptr_t value)
	{
		___s_GameSDKRawObjectID_5 = value;
	}

	inline static int32_t get_offset_of_s_GetGpuFrameTimeID_6() { return static_cast<int32_t>(offsetof(NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_StaticFields, ___s_GetGpuFrameTimeID_6)); }
	inline intptr_t get_s_GetGpuFrameTimeID_6() const { return ___s_GetGpuFrameTimeID_6; }
	inline intptr_t* get_address_of_s_GetGpuFrameTimeID_6() { return &___s_GetGpuFrameTimeID_6; }
	inline void set_s_GetGpuFrameTimeID_6(intptr_t value)
	{
		___s_GetGpuFrameTimeID_6 = value;
	}

	inline static int32_t get_offset_of_s_GetHighPrecisionSkinTempLevelID_7() { return static_cast<int32_t>(offsetof(NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_StaticFields, ___s_GetHighPrecisionSkinTempLevelID_7)); }
	inline intptr_t get_s_GetHighPrecisionSkinTempLevelID_7() const { return ___s_GetHighPrecisionSkinTempLevelID_7; }
	inline intptr_t* get_address_of_s_GetHighPrecisionSkinTempLevelID_7() { return &___s_GetHighPrecisionSkinTempLevelID_7; }
	inline void set_s_GetHighPrecisionSkinTempLevelID_7(intptr_t value)
	{
		___s_GetHighPrecisionSkinTempLevelID_7 = value;
	}

	inline static int32_t get_offset_of_s_isAvailable_8() { return static_cast<int32_t>(offsetof(NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_StaticFields, ___s_isAvailable_8)); }
	inline bool get_s_isAvailable_8() const { return ___s_isAvailable_8; }
	inline bool* get_address_of_s_isAvailable_8() { return &___s_isAvailable_8; }
	inline void set_s_isAvailable_8(bool value)
	{
		___s_isAvailable_8 = value;
	}

	inline static int32_t get_offset_of_s_NoArgs_9() { return static_cast<int32_t>(offsetof(NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_StaticFields, ___s_NoArgs_9)); }
	inline jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* get_s_NoArgs_9() const { return ___s_NoArgs_9; }
	inline jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99** get_address_of_s_NoArgs_9() { return &___s_NoArgs_9; }
	inline void set_s_NoArgs_9(jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* value)
	{
		___s_NoArgs_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_NoArgs_9), (void*)value);
	}
};


// System.Action`1<UnityEngine.AdaptivePerformance.WarningLevel>
struct Action_1_t8C4711099B422DAD7EA49F9E5395372F09F28C82  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`1<System.Double>
struct Func_1_t5B109BB44B407A255786F7DB10BD317EFFAA5C63  : public MulticastDelegate_t
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


// UnityEngine.AdaptivePerformance.AdaptivePerformanceLoader
struct AdaptivePerformanceLoader_tFB6587AF07FA8F496330C209FD21A7A25C5C0F53  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:

public:
};


// UnityEngine.AdaptivePerformance.AdaptivePerformanceScaler
struct AdaptivePerformanceScaler_t04EE49F7531BB9AD7A93FA9F978C4469E0ED0BA3  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// UnityEngine.AdaptivePerformance.AdaptivePerformanceIndexer UnityEngine.AdaptivePerformance.AdaptivePerformanceScaler::m_Indexer
	AdaptivePerformanceIndexer_t27E98221789359B3040E2241EC7A66B6A62BDC98 * ___m_Indexer_4;
	// System.Int32 UnityEngine.AdaptivePerformance.AdaptivePerformanceScaler::<CurrentLevel>k__BackingField
	int32_t ___U3CCurrentLevelU3Ek__BackingField_5;
	// System.Int32 UnityEngine.AdaptivePerformance.AdaptivePerformanceScaler::<GpuImpact>k__BackingField
	int32_t ___U3CGpuImpactU3Ek__BackingField_6;
	// System.Int32 UnityEngine.AdaptivePerformance.AdaptivePerformanceScaler::<CpuImpact>k__BackingField
	int32_t ___U3CCpuImpactU3Ek__BackingField_7;
	// System.Int32 UnityEngine.AdaptivePerformance.AdaptivePerformanceScaler::m_OverrideLevel
	int32_t ___m_OverrideLevel_8;
	// UnityEngine.AdaptivePerformance.AdaptivePerformanceScalerSettingsBase UnityEngine.AdaptivePerformance.AdaptivePerformanceScaler::m_defaultSetting
	AdaptivePerformanceScalerSettingsBase_tB0A45A1909F77D8F3B8D1DC4A8A4E0DEA6573B96 * ___m_defaultSetting_9;
	// UnityEngine.AdaptivePerformance.IAdaptivePerformanceSettings UnityEngine.AdaptivePerformance.AdaptivePerformanceScaler::m_Settings
	IAdaptivePerformanceSettings_tA1BEAD4827B883C1A94BADD21AC4582054DAA6DF * ___m_Settings_10;

public:
	inline static int32_t get_offset_of_m_Indexer_4() { return static_cast<int32_t>(offsetof(AdaptivePerformanceScaler_t04EE49F7531BB9AD7A93FA9F978C4469E0ED0BA3, ___m_Indexer_4)); }
	inline AdaptivePerformanceIndexer_t27E98221789359B3040E2241EC7A66B6A62BDC98 * get_m_Indexer_4() const { return ___m_Indexer_4; }
	inline AdaptivePerformanceIndexer_t27E98221789359B3040E2241EC7A66B6A62BDC98 ** get_address_of_m_Indexer_4() { return &___m_Indexer_4; }
	inline void set_m_Indexer_4(AdaptivePerformanceIndexer_t27E98221789359B3040E2241EC7A66B6A62BDC98 * value)
	{
		___m_Indexer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Indexer_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCurrentLevelU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(AdaptivePerformanceScaler_t04EE49F7531BB9AD7A93FA9F978C4469E0ED0BA3, ___U3CCurrentLevelU3Ek__BackingField_5)); }
	inline int32_t get_U3CCurrentLevelU3Ek__BackingField_5() const { return ___U3CCurrentLevelU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CCurrentLevelU3Ek__BackingField_5() { return &___U3CCurrentLevelU3Ek__BackingField_5; }
	inline void set_U3CCurrentLevelU3Ek__BackingField_5(int32_t value)
	{
		___U3CCurrentLevelU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CGpuImpactU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(AdaptivePerformanceScaler_t04EE49F7531BB9AD7A93FA9F978C4469E0ED0BA3, ___U3CGpuImpactU3Ek__BackingField_6)); }
	inline int32_t get_U3CGpuImpactU3Ek__BackingField_6() const { return ___U3CGpuImpactU3Ek__BackingField_6; }
	inline int32_t* get_address_of_U3CGpuImpactU3Ek__BackingField_6() { return &___U3CGpuImpactU3Ek__BackingField_6; }
	inline void set_U3CGpuImpactU3Ek__BackingField_6(int32_t value)
	{
		___U3CGpuImpactU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CCpuImpactU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(AdaptivePerformanceScaler_t04EE49F7531BB9AD7A93FA9F978C4469E0ED0BA3, ___U3CCpuImpactU3Ek__BackingField_7)); }
	inline int32_t get_U3CCpuImpactU3Ek__BackingField_7() const { return ___U3CCpuImpactU3Ek__BackingField_7; }
	inline int32_t* get_address_of_U3CCpuImpactU3Ek__BackingField_7() { return &___U3CCpuImpactU3Ek__BackingField_7; }
	inline void set_U3CCpuImpactU3Ek__BackingField_7(int32_t value)
	{
		___U3CCpuImpactU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_m_OverrideLevel_8() { return static_cast<int32_t>(offsetof(AdaptivePerformanceScaler_t04EE49F7531BB9AD7A93FA9F978C4469E0ED0BA3, ___m_OverrideLevel_8)); }
	inline int32_t get_m_OverrideLevel_8() const { return ___m_OverrideLevel_8; }
	inline int32_t* get_address_of_m_OverrideLevel_8() { return &___m_OverrideLevel_8; }
	inline void set_m_OverrideLevel_8(int32_t value)
	{
		___m_OverrideLevel_8 = value;
	}

	inline static int32_t get_offset_of_m_defaultSetting_9() { return static_cast<int32_t>(offsetof(AdaptivePerformanceScaler_t04EE49F7531BB9AD7A93FA9F978C4469E0ED0BA3, ___m_defaultSetting_9)); }
	inline AdaptivePerformanceScalerSettingsBase_tB0A45A1909F77D8F3B8D1DC4A8A4E0DEA6573B96 * get_m_defaultSetting_9() const { return ___m_defaultSetting_9; }
	inline AdaptivePerformanceScalerSettingsBase_tB0A45A1909F77D8F3B8D1DC4A8A4E0DEA6573B96 ** get_address_of_m_defaultSetting_9() { return &___m_defaultSetting_9; }
	inline void set_m_defaultSetting_9(AdaptivePerformanceScalerSettingsBase_tB0A45A1909F77D8F3B8D1DC4A8A4E0DEA6573B96 * value)
	{
		___m_defaultSetting_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_defaultSetting_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_Settings_10() { return static_cast<int32_t>(offsetof(AdaptivePerformanceScaler_t04EE49F7531BB9AD7A93FA9F978C4469E0ED0BA3, ___m_Settings_10)); }
	inline IAdaptivePerformanceSettings_tA1BEAD4827B883C1A94BADD21AC4582054DAA6DF * get_m_Settings_10() const { return ___m_Settings_10; }
	inline IAdaptivePerformanceSettings_tA1BEAD4827B883C1A94BADD21AC4582054DAA6DF ** get_address_of_m_Settings_10() { return &___m_Settings_10; }
	inline void set_m_Settings_10(IAdaptivePerformanceSettings_tA1BEAD4827B883C1A94BADD21AC4582054DAA6DF * value)
	{
		___m_Settings_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Settings_10), (void*)value);
	}
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.AdaptivePerformance.IAdaptivePerformanceSettings
struct IAdaptivePerformanceSettings_tA1BEAD4827B883C1A94BADD21AC4582054DAA6DF  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.Boolean UnityEngine.AdaptivePerformance.IAdaptivePerformanceSettings::m_Logging
	bool ___m_Logging_4;
	// System.Boolean UnityEngine.AdaptivePerformance.IAdaptivePerformanceSettings::m_AutomaticPerformanceModeEnabled
	bool ___m_AutomaticPerformanceModeEnabled_5;
	// System.Int32 UnityEngine.AdaptivePerformance.IAdaptivePerformanceSettings::m_StatsLoggingFrequencyInFrames
	int32_t ___m_StatsLoggingFrequencyInFrames_6;
	// UnityEngine.AdaptivePerformance.AdaptivePerformanceIndexerSettings UnityEngine.AdaptivePerformance.IAdaptivePerformanceSettings::m_IndexerSettings
	AdaptivePerformanceIndexerSettings_t2D2CACD94BE12D695CBE889026CD4016E8EBD1FD * ___m_IndexerSettings_7;
	// UnityEngine.AdaptivePerformance.AdaptivePerformanceScalerSettings UnityEngine.AdaptivePerformance.IAdaptivePerformanceSettings::m_ScalerSettings
	AdaptivePerformanceScalerSettings_t90FCA77DC518421FBEDC94E5294FD8016BA2B6B3 * ___m_ScalerSettings_8;

public:
	inline static int32_t get_offset_of_m_Logging_4() { return static_cast<int32_t>(offsetof(IAdaptivePerformanceSettings_tA1BEAD4827B883C1A94BADD21AC4582054DAA6DF, ___m_Logging_4)); }
	inline bool get_m_Logging_4() const { return ___m_Logging_4; }
	inline bool* get_address_of_m_Logging_4() { return &___m_Logging_4; }
	inline void set_m_Logging_4(bool value)
	{
		___m_Logging_4 = value;
	}

	inline static int32_t get_offset_of_m_AutomaticPerformanceModeEnabled_5() { return static_cast<int32_t>(offsetof(IAdaptivePerformanceSettings_tA1BEAD4827B883C1A94BADD21AC4582054DAA6DF, ___m_AutomaticPerformanceModeEnabled_5)); }
	inline bool get_m_AutomaticPerformanceModeEnabled_5() const { return ___m_AutomaticPerformanceModeEnabled_5; }
	inline bool* get_address_of_m_AutomaticPerformanceModeEnabled_5() { return &___m_AutomaticPerformanceModeEnabled_5; }
	inline void set_m_AutomaticPerformanceModeEnabled_5(bool value)
	{
		___m_AutomaticPerformanceModeEnabled_5 = value;
	}

	inline static int32_t get_offset_of_m_StatsLoggingFrequencyInFrames_6() { return static_cast<int32_t>(offsetof(IAdaptivePerformanceSettings_tA1BEAD4827B883C1A94BADD21AC4582054DAA6DF, ___m_StatsLoggingFrequencyInFrames_6)); }
	inline int32_t get_m_StatsLoggingFrequencyInFrames_6() const { return ___m_StatsLoggingFrequencyInFrames_6; }
	inline int32_t* get_address_of_m_StatsLoggingFrequencyInFrames_6() { return &___m_StatsLoggingFrequencyInFrames_6; }
	inline void set_m_StatsLoggingFrequencyInFrames_6(int32_t value)
	{
		___m_StatsLoggingFrequencyInFrames_6 = value;
	}

	inline static int32_t get_offset_of_m_IndexerSettings_7() { return static_cast<int32_t>(offsetof(IAdaptivePerformanceSettings_tA1BEAD4827B883C1A94BADD21AC4582054DAA6DF, ___m_IndexerSettings_7)); }
	inline AdaptivePerformanceIndexerSettings_t2D2CACD94BE12D695CBE889026CD4016E8EBD1FD * get_m_IndexerSettings_7() const { return ___m_IndexerSettings_7; }
	inline AdaptivePerformanceIndexerSettings_t2D2CACD94BE12D695CBE889026CD4016E8EBD1FD ** get_address_of_m_IndexerSettings_7() { return &___m_IndexerSettings_7; }
	inline void set_m_IndexerSettings_7(AdaptivePerformanceIndexerSettings_t2D2CACD94BE12D695CBE889026CD4016E8EBD1FD * value)
	{
		___m_IndexerSettings_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_IndexerSettings_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_ScalerSettings_8() { return static_cast<int32_t>(offsetof(IAdaptivePerformanceSettings_tA1BEAD4827B883C1A94BADD21AC4582054DAA6DF, ___m_ScalerSettings_8)); }
	inline AdaptivePerformanceScalerSettings_t90FCA77DC518421FBEDC94E5294FD8016BA2B6B3 * get_m_ScalerSettings_8() const { return ___m_ScalerSettings_8; }
	inline AdaptivePerformanceScalerSettings_t90FCA77DC518421FBEDC94E5294FD8016BA2B6B3 ** get_address_of_m_ScalerSettings_8() { return &___m_ScalerSettings_8; }
	inline void set_m_ScalerSettings_8(AdaptivePerformanceScalerSettings_t90FCA77DC518421FBEDC94E5294FD8016BA2B6B3 * value)
	{
		___m_ScalerSettings_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ScalerSettings_8), (void*)value);
	}
};


// UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem
struct SamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C  : public AdaptivePerformanceSubsystem_tD1EF79067301732948F731CDD69D58FECB6571FA
{
public:
	// UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/NativeApi UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem::m_Api
	NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123 * ___m_Api_3;
	// UnityEngine.AdaptivePerformance.Samsung.Android.AsyncUpdater UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem::m_AsyncUpdater
	AsyncUpdater_tFD9C5192022FBF96B90534567B298522D66D78B2 * ___m_AsyncUpdater_4;
	// UnityEngine.AdaptivePerformance.Provider.PerformanceDataRecord UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem::m_Data
	PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457  ___m_Data_5;
	// System.Object UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem::m_DataLock
	RuntimeObject * ___m_DataLock_6;
	// UnityEngine.AdaptivePerformance.Samsung.Android.AsyncValue`1<System.Double> UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem::m_SkinTemp
	AsyncValue_1_t15F502DBC70872D99B55432A512A864625B26F15 * ___m_SkinTemp_7;
	// UnityEngine.AdaptivePerformance.Samsung.Android.AsyncValue`1<System.Double> UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem::m_GPUTime
	AsyncValue_1_t15F502DBC70872D99B55432A512A864625B26F15 * ___m_GPUTime_8;
	// System.Version UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem::m_Version
	Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * ___m_Version_9;
	// System.Single UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem::m_MinTempLevel
	float ___m_MinTempLevel_10;
	// System.Single UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem::m_MaxTempLevel
	float ___m_MaxTempLevel_11;
	// System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem::m_PerformanceLevelControlSystemChange
	bool ___m_PerformanceLevelControlSystemChange_12;
	// UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/AutoVariableRefreshRate UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem::m_AutoVariableRefreshRate
	AutoVariableRefreshRate_tFF7B877BD61A8A6CB5032694D95C06CD37CC7CA9 * ___m_AutoVariableRefreshRate_13;
	// System.Int32 UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem::<MaxCpuPerformanceLevel>k__BackingField
	int32_t ___U3CMaxCpuPerformanceLevelU3Ek__BackingField_14;
	// System.Int32 UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem::<MaxGpuPerformanceLevel>k__BackingField
	int32_t ___U3CMaxGpuPerformanceLevelU3Ek__BackingField_15;

public:
	inline static int32_t get_offset_of_m_Api_3() { return static_cast<int32_t>(offsetof(SamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C, ___m_Api_3)); }
	inline NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123 * get_m_Api_3() const { return ___m_Api_3; }
	inline NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123 ** get_address_of_m_Api_3() { return &___m_Api_3; }
	inline void set_m_Api_3(NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123 * value)
	{
		___m_Api_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Api_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_AsyncUpdater_4() { return static_cast<int32_t>(offsetof(SamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C, ___m_AsyncUpdater_4)); }
	inline AsyncUpdater_tFD9C5192022FBF96B90534567B298522D66D78B2 * get_m_AsyncUpdater_4() const { return ___m_AsyncUpdater_4; }
	inline AsyncUpdater_tFD9C5192022FBF96B90534567B298522D66D78B2 ** get_address_of_m_AsyncUpdater_4() { return &___m_AsyncUpdater_4; }
	inline void set_m_AsyncUpdater_4(AsyncUpdater_tFD9C5192022FBF96B90534567B298522D66D78B2 * value)
	{
		___m_AsyncUpdater_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AsyncUpdater_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Data_5() { return static_cast<int32_t>(offsetof(SamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C, ___m_Data_5)); }
	inline PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457  get_m_Data_5() const { return ___m_Data_5; }
	inline PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 * get_address_of_m_Data_5() { return &___m_Data_5; }
	inline void set_m_Data_5(PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457  value)
	{
		___m_Data_5 = value;
	}

	inline static int32_t get_offset_of_m_DataLock_6() { return static_cast<int32_t>(offsetof(SamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C, ___m_DataLock_6)); }
	inline RuntimeObject * get_m_DataLock_6() const { return ___m_DataLock_6; }
	inline RuntimeObject ** get_address_of_m_DataLock_6() { return &___m_DataLock_6; }
	inline void set_m_DataLock_6(RuntimeObject * value)
	{
		___m_DataLock_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DataLock_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_SkinTemp_7() { return static_cast<int32_t>(offsetof(SamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C, ___m_SkinTemp_7)); }
	inline AsyncValue_1_t15F502DBC70872D99B55432A512A864625B26F15 * get_m_SkinTemp_7() const { return ___m_SkinTemp_7; }
	inline AsyncValue_1_t15F502DBC70872D99B55432A512A864625B26F15 ** get_address_of_m_SkinTemp_7() { return &___m_SkinTemp_7; }
	inline void set_m_SkinTemp_7(AsyncValue_1_t15F502DBC70872D99B55432A512A864625B26F15 * value)
	{
		___m_SkinTemp_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SkinTemp_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_GPUTime_8() { return static_cast<int32_t>(offsetof(SamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C, ___m_GPUTime_8)); }
	inline AsyncValue_1_t15F502DBC70872D99B55432A512A864625B26F15 * get_m_GPUTime_8() const { return ___m_GPUTime_8; }
	inline AsyncValue_1_t15F502DBC70872D99B55432A512A864625B26F15 ** get_address_of_m_GPUTime_8() { return &___m_GPUTime_8; }
	inline void set_m_GPUTime_8(AsyncValue_1_t15F502DBC70872D99B55432A512A864625B26F15 * value)
	{
		___m_GPUTime_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GPUTime_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_Version_9() { return static_cast<int32_t>(offsetof(SamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C, ___m_Version_9)); }
	inline Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * get_m_Version_9() const { return ___m_Version_9; }
	inline Version_tBDAEDED25425A1D09910468B8BD1759115646E3C ** get_address_of_m_Version_9() { return &___m_Version_9; }
	inline void set_m_Version_9(Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * value)
	{
		___m_Version_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Version_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_MinTempLevel_10() { return static_cast<int32_t>(offsetof(SamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C, ___m_MinTempLevel_10)); }
	inline float get_m_MinTempLevel_10() const { return ___m_MinTempLevel_10; }
	inline float* get_address_of_m_MinTempLevel_10() { return &___m_MinTempLevel_10; }
	inline void set_m_MinTempLevel_10(float value)
	{
		___m_MinTempLevel_10 = value;
	}

	inline static int32_t get_offset_of_m_MaxTempLevel_11() { return static_cast<int32_t>(offsetof(SamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C, ___m_MaxTempLevel_11)); }
	inline float get_m_MaxTempLevel_11() const { return ___m_MaxTempLevel_11; }
	inline float* get_address_of_m_MaxTempLevel_11() { return &___m_MaxTempLevel_11; }
	inline void set_m_MaxTempLevel_11(float value)
	{
		___m_MaxTempLevel_11 = value;
	}

	inline static int32_t get_offset_of_m_PerformanceLevelControlSystemChange_12() { return static_cast<int32_t>(offsetof(SamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C, ___m_PerformanceLevelControlSystemChange_12)); }
	inline bool get_m_PerformanceLevelControlSystemChange_12() const { return ___m_PerformanceLevelControlSystemChange_12; }
	inline bool* get_address_of_m_PerformanceLevelControlSystemChange_12() { return &___m_PerformanceLevelControlSystemChange_12; }
	inline void set_m_PerformanceLevelControlSystemChange_12(bool value)
	{
		___m_PerformanceLevelControlSystemChange_12 = value;
	}

	inline static int32_t get_offset_of_m_AutoVariableRefreshRate_13() { return static_cast<int32_t>(offsetof(SamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C, ___m_AutoVariableRefreshRate_13)); }
	inline AutoVariableRefreshRate_tFF7B877BD61A8A6CB5032694D95C06CD37CC7CA9 * get_m_AutoVariableRefreshRate_13() const { return ___m_AutoVariableRefreshRate_13; }
	inline AutoVariableRefreshRate_tFF7B877BD61A8A6CB5032694D95C06CD37CC7CA9 ** get_address_of_m_AutoVariableRefreshRate_13() { return &___m_AutoVariableRefreshRate_13; }
	inline void set_m_AutoVariableRefreshRate_13(AutoVariableRefreshRate_tFF7B877BD61A8A6CB5032694D95C06CD37CC7CA9 * value)
	{
		___m_AutoVariableRefreshRate_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AutoVariableRefreshRate_13), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMaxCpuPerformanceLevelU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(SamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C, ___U3CMaxCpuPerformanceLevelU3Ek__BackingField_14)); }
	inline int32_t get_U3CMaxCpuPerformanceLevelU3Ek__BackingField_14() const { return ___U3CMaxCpuPerformanceLevelU3Ek__BackingField_14; }
	inline int32_t* get_address_of_U3CMaxCpuPerformanceLevelU3Ek__BackingField_14() { return &___U3CMaxCpuPerformanceLevelU3Ek__BackingField_14; }
	inline void set_U3CMaxCpuPerformanceLevelU3Ek__BackingField_14(int32_t value)
	{
		___U3CMaxCpuPerformanceLevelU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CMaxGpuPerformanceLevelU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(SamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C, ___U3CMaxGpuPerformanceLevelU3Ek__BackingField_15)); }
	inline int32_t get_U3CMaxGpuPerformanceLevelU3Ek__BackingField_15() const { return ___U3CMaxGpuPerformanceLevelU3Ek__BackingField_15; }
	inline int32_t* get_address_of_U3CMaxGpuPerformanceLevelU3Ek__BackingField_15() { return &___U3CMaxGpuPerformanceLevelU3Ek__BackingField_15; }
	inline void set_U3CMaxGpuPerformanceLevelU3Ek__BackingField_15(int32_t value)
	{
		___U3CMaxGpuPerformanceLevelU3Ek__BackingField_15 = value;
	}
};

struct SamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C_StaticFields
{
public:
	// UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderSettings UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem::settings
	SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A * ___settings_16;

public:
	inline static int32_t get_offset_of_settings_16() { return static_cast<int32_t>(offsetof(SamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C_StaticFields, ___settings_16)); }
	inline SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A * get_settings_16() const { return ___settings_16; }
	inline SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A ** get_address_of_settings_16() { return &___settings_16; }
	inline void set_settings_16(SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A * value)
	{
		___settings_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___settings_16), (void*)value);
	}
};


// System.Threading.ThreadStart
struct ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.AdaptivePerformance.Samsung.Android.VariableRefreshRateEventHandler
struct VariableRefreshRateEventHandler_t06D300F6DD7FDB78D3404003A1C81A149DBFAC83  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.AdaptivePerformance.AdaptiveFramerate
struct AdaptiveFramerate_t36C9F58174C8E949088A8B300BAD24B14382B81F  : public AdaptivePerformanceScaler_t04EE49F7531BB9AD7A93FA9F978C4469E0ED0BA3
{
public:
	// System.Int32 UnityEngine.AdaptivePerformance.AdaptiveFramerate::m_DefaultFPS
	int32_t ___m_DefaultFPS_11;

public:
	inline static int32_t get_offset_of_m_DefaultFPS_11() { return static_cast<int32_t>(offsetof(AdaptiveFramerate_t36C9F58174C8E949088A8B300BAD24B14382B81F, ___m_DefaultFPS_11)); }
	inline int32_t get_m_DefaultFPS_11() const { return ___m_DefaultFPS_11; }
	inline int32_t* get_address_of_m_DefaultFPS_11() { return &___m_DefaultFPS_11; }
	inline void set_m_DefaultFPS_11(int32_t value)
	{
		___m_DefaultFPS_11 = value;
	}
};


// UnityEngine.AdaptivePerformance.AdaptivePerformanceLoaderHelper
struct AdaptivePerformanceLoaderHelper_t640C781590CAA0FF7B63C4E702CA325C1ABD8441  : public AdaptivePerformanceLoader_tFB6587AF07FA8F496330C209FD21A7A25C5C0F53
{
public:
	// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.ISubsystem> UnityEngine.AdaptivePerformance.AdaptivePerformanceLoaderHelper::m_SubsystemInstanceMap
	Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B * ___m_SubsystemInstanceMap_4;

public:
	inline static int32_t get_offset_of_m_SubsystemInstanceMap_4() { return static_cast<int32_t>(offsetof(AdaptivePerformanceLoaderHelper_t640C781590CAA0FF7B63C4E702CA325C1ABD8441, ___m_SubsystemInstanceMap_4)); }
	inline Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B * get_m_SubsystemInstanceMap_4() const { return ___m_SubsystemInstanceMap_4; }
	inline Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B ** get_address_of_m_SubsystemInstanceMap_4() { return &___m_SubsystemInstanceMap_4; }
	inline void set_m_SubsystemInstanceMap_4(Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B * value)
	{
		___m_SubsystemInstanceMap_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SubsystemInstanceMap_4), (void*)value);
	}
};


// UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderSettings
struct SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A  : public IAdaptivePerformanceSettings_tA1BEAD4827B883C1A94BADD21AC4582054DAA6DF
{
public:
	// System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderSettings::m_SamsungProviderLogging
	bool ___m_SamsungProviderLogging_9;
	// System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderSettings::m_HighSpeedVRR
	bool ___m_HighSpeedVRR_10;
	// System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderSettings::m_AutomaticVRR
	bool ___m_AutomaticVRR_11;

public:
	inline static int32_t get_offset_of_m_SamsungProviderLogging_9() { return static_cast<int32_t>(offsetof(SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A, ___m_SamsungProviderLogging_9)); }
	inline bool get_m_SamsungProviderLogging_9() const { return ___m_SamsungProviderLogging_9; }
	inline bool* get_address_of_m_SamsungProviderLogging_9() { return &___m_SamsungProviderLogging_9; }
	inline void set_m_SamsungProviderLogging_9(bool value)
	{
		___m_SamsungProviderLogging_9 = value;
	}

	inline static int32_t get_offset_of_m_HighSpeedVRR_10() { return static_cast<int32_t>(offsetof(SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A, ___m_HighSpeedVRR_10)); }
	inline bool get_m_HighSpeedVRR_10() const { return ___m_HighSpeedVRR_10; }
	inline bool* get_address_of_m_HighSpeedVRR_10() { return &___m_HighSpeedVRR_10; }
	inline void set_m_HighSpeedVRR_10(bool value)
	{
		___m_HighSpeedVRR_10 = value;
	}

	inline static int32_t get_offset_of_m_AutomaticVRR_11() { return static_cast<int32_t>(offsetof(SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A, ___m_AutomaticVRR_11)); }
	inline bool get_m_AutomaticVRR_11() const { return ___m_AutomaticVRR_11; }
	inline bool* get_address_of_m_AutomaticVRR_11() { return &___m_AutomaticVRR_11; }
	inline void set_m_AutomaticVRR_11(bool value)
	{
		___m_AutomaticVRR_11 = value;
	}
};

struct SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A_StaticFields
{
public:
	// UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderSettings UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderSettings::s_RuntimeInstance
	SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A * ___s_RuntimeInstance_12;

public:
	inline static int32_t get_offset_of_s_RuntimeInstance_12() { return static_cast<int32_t>(offsetof(SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A_StaticFields, ___s_RuntimeInstance_12)); }
	inline SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A * get_s_RuntimeInstance_12() const { return ___s_RuntimeInstance_12; }
	inline SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A ** get_address_of_s_RuntimeInstance_12() { return &___s_RuntimeInstance_12; }
	inline void set_s_RuntimeInstance_12(SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A * value)
	{
		___s_RuntimeInstance_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_RuntimeInstance_12), (void*)value);
	}
};


// UnityEngine.AdaptivePerformance.AdaptiveVariableRefreshRate
struct AdaptiveVariableRefreshRate_t191947991F52574C0BF26A6156720B6757C1D818  : public AdaptiveFramerate_t36C9F58174C8E949088A8B300BAD24B14382B81F
{
public:
	// System.Boolean UnityEngine.AdaptivePerformance.AdaptiveVariableRefreshRate::m_AdaptiveVRREnabled
	bool ___m_AdaptiveVRREnabled_12;
	// UnityEngine.AdaptivePerformance.Samsung.Android.IVariableRefreshRate UnityEngine.AdaptivePerformance.AdaptiveVariableRefreshRate::m_VRR
	RuntimeObject* ___m_VRR_13;
	// System.Int32 UnityEngine.AdaptivePerformance.AdaptiveVariableRefreshRate::m_CurrentRefreshRateIndex
	int32_t ___m_CurrentRefreshRateIndex_14;
	// System.Int32 UnityEngine.AdaptivePerformance.AdaptiveVariableRefreshRate::m_DefaultRefreshRateIndex
	int32_t ___m_DefaultRefreshRateIndex_15;

public:
	inline static int32_t get_offset_of_m_AdaptiveVRREnabled_12() { return static_cast<int32_t>(offsetof(AdaptiveVariableRefreshRate_t191947991F52574C0BF26A6156720B6757C1D818, ___m_AdaptiveVRREnabled_12)); }
	inline bool get_m_AdaptiveVRREnabled_12() const { return ___m_AdaptiveVRREnabled_12; }
	inline bool* get_address_of_m_AdaptiveVRREnabled_12() { return &___m_AdaptiveVRREnabled_12; }
	inline void set_m_AdaptiveVRREnabled_12(bool value)
	{
		___m_AdaptiveVRREnabled_12 = value;
	}

	inline static int32_t get_offset_of_m_VRR_13() { return static_cast<int32_t>(offsetof(AdaptiveVariableRefreshRate_t191947991F52574C0BF26A6156720B6757C1D818, ___m_VRR_13)); }
	inline RuntimeObject* get_m_VRR_13() const { return ___m_VRR_13; }
	inline RuntimeObject** get_address_of_m_VRR_13() { return &___m_VRR_13; }
	inline void set_m_VRR_13(RuntimeObject* value)
	{
		___m_VRR_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_VRR_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentRefreshRateIndex_14() { return static_cast<int32_t>(offsetof(AdaptiveVariableRefreshRate_t191947991F52574C0BF26A6156720B6757C1D818, ___m_CurrentRefreshRateIndex_14)); }
	inline int32_t get_m_CurrentRefreshRateIndex_14() const { return ___m_CurrentRefreshRateIndex_14; }
	inline int32_t* get_address_of_m_CurrentRefreshRateIndex_14() { return &___m_CurrentRefreshRateIndex_14; }
	inline void set_m_CurrentRefreshRateIndex_14(int32_t value)
	{
		___m_CurrentRefreshRateIndex_14 = value;
	}

	inline static int32_t get_offset_of_m_DefaultRefreshRateIndex_15() { return static_cast<int32_t>(offsetof(AdaptiveVariableRefreshRate_t191947991F52574C0BF26A6156720B6757C1D818, ___m_DefaultRefreshRateIndex_15)); }
	inline int32_t get_m_DefaultRefreshRateIndex_15() const { return ___m_DefaultRefreshRateIndex_15; }
	inline int32_t* get_address_of_m_DefaultRefreshRateIndex_15() { return &___m_DefaultRefreshRateIndex_15; }
	inline void set_m_DefaultRefreshRateIndex_15(int32_t value)
	{
		___m_DefaultRefreshRateIndex_15 = value;
	}
};


// UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderLoader
struct SamsungAndroidProviderLoader_tF4EF35A26133E653D4A7D8EDD8AA52F555C471C2  : public AdaptivePerformanceLoaderHelper_t640C781590CAA0FF7B63C4E702CA325C1ABD8441
{
public:

public:
};

struct SamsungAndroidProviderLoader_tF4EF35A26133E653D4A7D8EDD8AA52F555C471C2_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystemDescriptor> UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderLoader::s_SamsungGameSDKSubsystemDescriptors
	List_1_tDC3CCB2B6EC9D3D4B4CDA5C96CB5BB341E2454A4 * ___s_SamsungGameSDKSubsystemDescriptors_5;

public:
	inline static int32_t get_offset_of_s_SamsungGameSDKSubsystemDescriptors_5() { return static_cast<int32_t>(offsetof(SamsungAndroidProviderLoader_tF4EF35A26133E653D4A7D8EDD8AA52F555C471C2_StaticFields, ___s_SamsungGameSDKSubsystemDescriptors_5)); }
	inline List_1_tDC3CCB2B6EC9D3D4B4CDA5C96CB5BB341E2454A4 * get_s_SamsungGameSDKSubsystemDescriptors_5() const { return ___s_SamsungGameSDKSubsystemDescriptors_5; }
	inline List_1_tDC3CCB2B6EC9D3D4B4CDA5C96CB5BB341E2454A4 ** get_address_of_s_SamsungGameSDKSubsystemDescriptors_5() { return &___s_SamsungGameSDKSubsystemDescriptors_5; }
	inline void set_s_SamsungGameSDKSubsystemDescriptors_5(List_1_tDC3CCB2B6EC9D3D4B4CDA5C96CB5BB341E2454A4 * value)
	{
		___s_SamsungGameSDKSubsystemDescriptors_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SamsungGameSDKSubsystemDescriptors_5), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Boolean[]
struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) bool m_Items[1];

public:
	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
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
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
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
// UnityEngine.jvalue[]
struct jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) jvalue_t220BECEE73180D6A4DE0F66CB6BA852EC6A5B587  m_Items[1];

public:
	inline jvalue_t220BECEE73180D6A4DE0F66CB6BA852EC6A5B587  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline jvalue_t220BECEE73180D6A4DE0F66CB6BA852EC6A5B587 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, jvalue_t220BECEE73180D6A4DE0F66CB6BA852EC6A5B587  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline jvalue_t220BECEE73180D6A4DE0F66CB6BA852EC6A5B587  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline jvalue_t220BECEE73180D6A4DE0F66CB6BA852EC6A5B587 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, jvalue_t220BECEE73180D6A4DE0F66CB6BA852EC6A5B587  value)
	{
		m_Items[index] = value;
	}
};


// System.Int32 System.Array::IndexOf<System.Int32>(!!0[],!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m1F0420BEEDFC9FDB3682212205F4F8124BA3EA7E_gshared (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___array0, int32_t ___value1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mF15250BF947CA27BE9A23C08BAC6DB6F180B0EDD_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_m7B5E3383CB67492E573AC0D875ED82A51350F188_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void UnityEngine.AdaptivePerformance.AdaptivePerformanceLoaderHelper::CreateSubsystem<System.Object,System.Object>(System.Collections.Generic.List`1<!!0>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdaptivePerformanceLoaderHelper_CreateSubsystem_TisRuntimeObject_TisRuntimeObject_m470DEE1B432081E0DC20A0978A5DAED56D21BBE0_gshared (AdaptivePerformanceLoaderHelper_t640C781590CAA0FF7B63C4E702CA325C1ABD8441 * __this, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___descriptors0, String_t* ___id1, const RuntimeMethod* method);
// System.Void UnityEngine.AdaptivePerformance.AdaptivePerformanceLoaderHelper::StartSubsystem<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdaptivePerformanceLoaderHelper_StartSubsystem_TisRuntimeObject_m9B5404B61E3DB237AFA0225116084AE81D83DD87_gshared (AdaptivePerformanceLoaderHelper_t640C781590CAA0FF7B63C4E702CA325C1ABD8441 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AdaptivePerformance.AdaptivePerformanceLoaderHelper::StopSubsystem<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdaptivePerformanceLoaderHelper_StopSubsystem_TisRuntimeObject_m04B73807CBCAB62529383D12294C42CC8ECB2329_gshared (AdaptivePerformanceLoaderHelper_t640C781590CAA0FF7B63C4E702CA325C1ABD8441 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AdaptivePerformance.AdaptivePerformanceLoaderHelper::DestroySubsystem<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdaptivePerformanceLoaderHelper_DestroySubsystem_TisRuntimeObject_m348D4D230C94F7581FCB8EAAC8B3CB7D0D99BC82_gshared (AdaptivePerformanceLoaderHelper_t640C781590CAA0FF7B63C4E702CA325C1ABD8441 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Int32Enum>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m5A0949EFB73F1BDBEBE3CB814917A79FBF9B3DEA_gshared (Action_1_tF0FD284A49EB7135379250254D6B49FA84383C09 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Func`1<System.Double>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_mCEE9371173A8ABF1AFE6B116EB1127082F7A4B0E_gshared (Func_1_t5B109BB44B407A255786F7DB10BD317EFFAA5C63 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.AsyncValue`1<System.Double>::.ctor(UnityEngine.AdaptivePerformance.Samsung.Android.AsyncUpdater,T,System.Single,System.Func`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncValue_1__ctor_m407CE0C35BC9C978585D744C8EB8BC31D59BFB3D_gshared (AsyncValue_1_t15F502DBC70872D99B55432A512A864625B26F15 * __this, AsyncUpdater_tFD9C5192022FBF96B90534567B298522D66D78B2 * ___updater0, double ___value1, float ___updateTimeDeltaSeconds2, Func_1_t5B109BB44B407A255786F7DB10BD317EFFAA5C63 * ___updateFunc3, const RuntimeMethod* method);
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.AsyncValue`1<System.Double>::SyncUpdate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncValue_1_SyncUpdate_mA03A49DEA9F9924DC08440A5A3DD4A66E850933F_gshared (AsyncValue_1_t15F502DBC70872D99B55432A512A864625B26F15 * __this, float ___timestamp0, const RuntimeMethod* method);
// T UnityEngine.AdaptivePerformance.Samsung.Android.AsyncValue`1<System.Double>::get_value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double AsyncValue_1_get_value_mB10EA452BBD5046293C947527CD4FACB92A00922_gshared_inline (AsyncValue_1_t15F502DBC70872D99B55432A512A864625B26F15 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.AsyncValue`1<System.Double>::Update(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncValue_1_Update_mF7955D2344FC21FC8BDB1EE205CE8CD4E4AC7D03_gshared (AsyncValue_1_t15F502DBC70872D99B55432A512A864625B26F15 * __this, float ___timestamp0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Int32Enum>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m0D209CF360D14991E324C1E8CEF44ADCD3221F07_gshared (Action_1_tF0FD284A49EB7135379250254D6B49FA84383C09 * __this, int32_t ___obj0, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m002765312BF306B1B3B5BFAB9550C0A2A1820CDA_gshared_inline (const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::CallStatic<System.Boolean>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject_CallStatic_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m4AA284A03F0D5D003114D60C705B8A54274C74DF_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::Call<System.Boolean>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m13EC19F5D105614B86EADA87F5F73751D3CFF108_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::Call<System.Object>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * AndroidJavaObject_Call_TisRuntimeObject_mA29DAB68E237E5B36D5A9DFD2231EB14C7A234D9_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::Call<System.Int32>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject_Call_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mD43CB504C00B380069C4904F986738EF503E9144_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m415CDDDC44D8102E7E71D9EA0A853D7BBE6F469F_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___item0, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.Int32>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* List_1_ToArray_m465C4122ED76D75D4194915EDBD32A89F259CF8C_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method);

// System.Void UnityEngine.AdaptivePerformance.AdaptiveFramerate::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdaptiveFramerate_Awake_m2901D3518B13C9D60696D9A2287A7B673148E2BE (AdaptiveFramerate_t36C9F58174C8E949088A8B300BAD24B14382B81F * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.AdaptivePerformance.Samsung.Android.IVariableRefreshRate UnityEngine.AdaptivePerformance.Samsung.Android.VariableRefreshRate::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* VariableRefreshRate_get_Instance_mEF8EA6B518B43B9ECF2F493D20AE908A66934765_inline (const RuntimeMethod* method);
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.VariableRefreshRateEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableRefreshRateEventHandler__ctor_mE2BC720F515C20D25FC2ED862998C3D072CB2230 (VariableRefreshRateEventHandler_t06D300F6DD7FDB78D3404003A1C81A149DBFAC83 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Int32 System.Array::IndexOf<System.Int32>(!!0[],!!0)
inline int32_t Array_IndexOf_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m1F0420BEEDFC9FDB3682212205F4F8124BA3EA7E (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___array0, int32_t ___value1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*, int32_t, const RuntimeMethod*))Array_IndexOf_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m1F0420BEEDFC9FDB3682212205F4F8124BA3EA7E_gshared)(___array0, ___value1, method);
}
// System.Void UnityEngine.AdaptivePerformance.AdaptiveFramerate::OnDisabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdaptiveFramerate_OnDisabled_m82036310F44027467DF42B4F9DD60A0832C0A954 (AdaptiveFramerate_t36C9F58174C8E949088A8B300BAD24B14382B81F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AdaptivePerformance.AdaptiveFramerate::OnEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdaptiveFramerate_OnEnabled_m4AD7A50ACB2E0AE57290E09F5198D9CA6AD2235E (AdaptiveFramerate_t36C9F58174C8E949088A8B300BAD24B14382B81F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AdaptivePerformance.AdaptiveFramerate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdaptiveFramerate__ctor_m694304B14B58592958A80FB83E43A309ABF8D77A (AdaptiveFramerate_t36C9F58174C8E949088A8B300BAD24B14382B81F * __this, const RuntimeMethod* method);
// System.Boolean System.Threading.Thread::get_IsAlive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Thread_get_IsAlive_mFA0C1391D1A22D18A7D010F251D537530B04E015 (Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Action>::get_Count()
inline int32_t List_1_get_Count_m62C12145DD437794F8660D2396A00A7B2BA480C5_inline (List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Action>::Add(!0)
inline void List_1_Add_m8AE79EC2CE04C828830778BB7860C821C3AF4D24 (List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 *, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *, const RuntimeMethod*))List_1_Add_mF15250BF947CA27BE9A23C08BAC6DB6F180B0EDD_gshared)(__this, ___item0, method);
}
// System.Void System.Threading.Semaphore::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Semaphore__ctor_m2D5E299CB8349F59A36727B9171C531220C5A760 (Semaphore_t6DD478B5937D3F0469887B7829782CA3CB6CD15F * __this, int32_t ___initialCount0, int32_t ___maximumCount1, const RuntimeMethod* method);
// System.Void System.Threading.Thread::Start()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Thread_Start_m490124B23F5EFD0BB2BED8CA12C77195B9CD9E1B (Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4 (RuntimeObject * ___obj0, bool* ___lockTaken1, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 System.Threading.Semaphore::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Semaphore_Release_m64029281DC1926A46319D75EEE14E5C5F7C4A265 (Semaphore_t6DD478B5937D3F0469887B7829782CA3CB6CD15F * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Action>::.ctor()
inline void List_1__ctor_m8F3A8E6C64C39DA66FF5F99E7A6BB97B41A482BB (List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Threading.ThreadStart::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadStart__ctor_m360F4EED0AD96A27D6A9612BF79671F26B30411F (ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Threading.Thread::.ctor(System.Threading.ThreadStart)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread__ctor_mF22465F0D0E47C11EF25DB552D1047402750BE90 (Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * __this, ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687 * ___start0, const RuntimeMethod* method);
// System.Void System.Threading.Thread::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_set_Name_m920049DFD1306F42613F13CF7AD74C03661F4BAE (Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.AndroidJNI::AttachCurrentThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNI_AttachCurrentThread_mB19891A8E6DFF2548BEC09881D3DD282F4A4F83E (const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Action>::get_Item(System.Int32)
inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * List_1_get_Item_m5A0FDCA39AD94F1DB9A64D80B088EF7D87411022_inline (List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * (*) (List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 *, int32_t, const RuntimeMethod*))List_1_get_Item_m7B5E3383CB67492E573AC0D875ED82A51350F188_gshared_inline)(__this, ___index0, method);
}
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.AndroidJNI::DetachCurrentThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNI_DetachCurrentThread_m7BF42C3D636234700C9E2642022413F16205607B (const RuntimeMethod* method);
// System.Void System.Threading.Thread::Join()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_Join_m7233E8FA960E446B49B0891B16EBE069265032F5 (Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.AsyncUpdater::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncUpdater_Dispose_mC98997EA95B99A286C658FDD88BB4AD269720B83 (AsyncUpdater_tFD9C5192022FBF96B90534567B298522D66D78B2 * __this, bool ___disposing0, const RuntimeMethod* method);
// System.Void System.GC::SuppressFinalize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_mEE880E988C6AF32AA2F67F2D62715281EAA41555 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderSettings::get_samsungProviderLogging()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SamsungAndroidProviderSettings_get_samsungProviderLogging_m71DA5B62D909EA7009C760C09856D986751522F4_inline (SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B (String_t* ___format0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderSettings UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderSettings::GetSettings()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A * SamsungAndroidProviderSettings_GetSettings_m5F3D48F7276BAC793B6E1B0174B71E8010BC5EDA_inline (const RuntimeMethod* method);
// UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderLoader::get_samsungGameSDKSubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C * SamsungAndroidProviderLoader_get_samsungGameSDKSubsystem_mFE023E0EA9FF1E3E89A66A7843FC7999AE02CA13 (SamsungAndroidProviderLoader_tF4EF35A26133E653D4A7D8EDD8AA52F555C471C2 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AdaptivePerformance.AdaptivePerformanceLoaderHelper::CreateSubsystem<UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystemDescriptor,UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem>(System.Collections.Generic.List`1<!!0>,System.String)
inline void AdaptivePerformanceLoaderHelper_CreateSubsystem_TisAdaptivePerformanceSubsystemDescriptor_t08DC609A273D4C0D10E8130646B7B147AEA5AD71_TisSamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C_mF42D88911411F0A2D2D8E290837E6CDA363A3DE5 (AdaptivePerformanceLoaderHelper_t640C781590CAA0FF7B63C4E702CA325C1ABD8441 * __this, List_1_tDC3CCB2B6EC9D3D4B4CDA5C96CB5BB341E2454A4 * ___descriptors0, String_t* ___id1, const RuntimeMethod* method)
{
	((  void (*) (AdaptivePerformanceLoaderHelper_t640C781590CAA0FF7B63C4E702CA325C1ABD8441 *, List_1_tDC3CCB2B6EC9D3D4B4CDA5C96CB5BB341E2454A4 *, String_t*, const RuntimeMethod*))AdaptivePerformanceLoaderHelper_CreateSubsystem_TisRuntimeObject_TisRuntimeObject_m470DEE1B432081E0DC20A0978A5DAED56D21BBE0_gshared)(__this, ___descriptors0, ___id1, method);
}
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.AdaptivePerformance.AdaptivePerformanceLoaderHelper::StartSubsystem<UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem>()
inline void AdaptivePerformanceLoaderHelper_StartSubsystem_TisSamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C_mBA5171134DBE4411AAA22FC80764B743F303E171 (AdaptivePerformanceLoaderHelper_t640C781590CAA0FF7B63C4E702CA325C1ABD8441 * __this, const RuntimeMethod* method)
{
	((  void (*) (AdaptivePerformanceLoaderHelper_t640C781590CAA0FF7B63C4E702CA325C1ABD8441 *, const RuntimeMethod*))AdaptivePerformanceLoaderHelper_StartSubsystem_TisRuntimeObject_m9B5404B61E3DB237AFA0225116084AE81D83DD87_gshared)(__this, method);
}
// System.Void UnityEngine.AdaptivePerformance.AdaptivePerformanceLoaderHelper::StopSubsystem<UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem>()
inline void AdaptivePerformanceLoaderHelper_StopSubsystem_TisSamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C_m8BEF758544D39431E92429FF9510051B818DED8A (AdaptivePerformanceLoaderHelper_t640C781590CAA0FF7B63C4E702CA325C1ABD8441 * __this, const RuntimeMethod* method)
{
	((  void (*) (AdaptivePerformanceLoaderHelper_t640C781590CAA0FF7B63C4E702CA325C1ABD8441 *, const RuntimeMethod*))AdaptivePerformanceLoaderHelper_StopSubsystem_TisRuntimeObject_m04B73807CBCAB62529383D12294C42CC8ECB2329_gshared)(__this, method);
}
// System.Void UnityEngine.AdaptivePerformance.AdaptivePerformanceLoaderHelper::DestroySubsystem<UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem>()
inline void AdaptivePerformanceLoaderHelper_DestroySubsystem_TisSamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C_m6DA7E025713371547503FE957E5C43D87C039646 (AdaptivePerformanceLoaderHelper_t640C781590CAA0FF7B63C4E702CA325C1ABD8441 * __this, const RuntimeMethod* method)
{
	((  void (*) (AdaptivePerformanceLoaderHelper_t640C781590CAA0FF7B63C4E702CA325C1ABD8441 *, const RuntimeMethod*))AdaptivePerformanceLoaderHelper_DestroySubsystem_TisRuntimeObject_m348D4D230C94F7581FCB8EAAC8B3CB7D0D99BC82_gshared)(__this, method);
}
// System.Void UnityEngine.AdaptivePerformance.AdaptivePerformanceLoaderHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdaptivePerformanceLoaderHelper__ctor_mE84DD1B4F467A7999870517C658B85B4C5109EB2 (AdaptivePerformanceLoaderHelper_t640C781590CAA0FF7B63C4E702CA325C1ABD8441 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystemDescriptor>::.ctor()
inline void List_1__ctor_m437E6C5DE2D7E16E015E843E8C8A8F32A6360E60 (List_1_tDC3CCB2B6EC9D3D4B4CDA5C96CB5BB341E2454A4 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDC3CCB2B6EC9D3D4B4CDA5C96CB5BB341E2454A4 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void UnityEngine.AdaptivePerformance.IAdaptivePerformanceSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAdaptivePerformanceSettings__ctor_m54D83D51CB50D235F0F7F8AAB4D0CCFD57D8B96B (IAdaptivePerformanceSettings_tA1BEAD4827B883C1A94BADD21AC4582054DAA6DF * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdaptivePerformanceSubsystem__ctor_m35BB6CDFA707F6520550EB9EDF3171DCC0046751 (AdaptivePerformanceSubsystem_tD1EF79067301732948F731CDD69D58FECB6571FA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem::set_MaxCpuPerformanceLevel(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SamsungGameSDKAdaptivePerformanceSubsystem_set_MaxCpuPerformanceLevel_mD7C7AA35D50B81A48BBE3483D96631725C576D75_inline (SamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem::set_MaxGpuPerformanceLevel(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SamsungGameSDKAdaptivePerformanceSubsystem_set_MaxGpuPerformanceLevel_mC4E2203C66BE865BBA77B688C9541E6FD21AC718_inline (SamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.AdaptivePerformance.WarningLevel>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m4ADA6A6416861F5CA9EEFB4EAED9B1FC482B22CF (Action_1_t8C4711099B422DAD7EA49F9E5395372F09F28C82 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t8C4711099B422DAD7EA49F9E5395372F09F28C82 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m5A0949EFB73F1BDBEBE3CB814917A79FBF9B3DEA_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/NativeApi::.ctor(System.Action`1<UnityEngine.AdaptivePerformance.WarningLevel>,System.Action,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi__ctor_m59391FFED30BEA83650887BE524EBFB3193CC797 (NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123 * __this, Action_1_t8C4711099B422DAD7EA49F9E5395372F09F28C82 * ___sustainedPerformanceWarning0, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___sustainedPerformanceTimeout1, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___refreshRateChanged2, const RuntimeMethod* method);
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.AsyncUpdater::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncUpdater__ctor_m780CD49926778C1BC3A90D75E7B1BAA53CA123D9 (AsyncUpdater_tFD9C5192022FBF96B90534567B298522D66D78B2 * __this, const RuntimeMethod* method);
// System.Void System.Func`1<System.Double>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_mCEE9371173A8ABF1AFE6B116EB1127082F7A4B0E (Func_1_t5B109BB44B407A255786F7DB10BD317EFFAA5C63 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t5B109BB44B407A255786F7DB10BD317EFFAA5C63 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_1__ctor_mCEE9371173A8ABF1AFE6B116EB1127082F7A4B0E_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.AsyncValue`1<System.Double>::.ctor(UnityEngine.AdaptivePerformance.Samsung.Android.AsyncUpdater,T,System.Single,System.Func`1<T>)
inline void AsyncValue_1__ctor_m407CE0C35BC9C978585D744C8EB8BC31D59BFB3D (AsyncValue_1_t15F502DBC70872D99B55432A512A864625B26F15 * __this, AsyncUpdater_tFD9C5192022FBF96B90534567B298522D66D78B2 * ___updater0, double ___value1, float ___updateTimeDeltaSeconds2, Func_1_t5B109BB44B407A255786F7DB10BD317EFFAA5C63 * ___updateFunc3, const RuntimeMethod* method)
{
	((  void (*) (AsyncValue_1_t15F502DBC70872D99B55432A512A864625B26F15 *, AsyncUpdater_tFD9C5192022FBF96B90534567B298522D66D78B2 *, double, float, Func_1_t5B109BB44B407A255786F7DB10BD317EFFAA5C63 *, const RuntimeMethod*))AsyncValue_1__ctor_m407CE0C35BC9C978585D744C8EB8BC31D59BFB3D_gshared)(__this, ___updater0, ___value1, ___updateTimeDeltaSeconds2, ___updateFunc3, method);
}
// System.Void UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystem::set_Capabilities(UnityEngine.AdaptivePerformance.Provider.Feature)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdaptivePerformanceSubsystem_set_Capabilities_mF23CD425E540211D811415BC365B8B1E366A871E_inline (AdaptivePerformanceSubsystem_tD1EF79067301732948F731CDD69D58FECB6571FA * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.AsyncUpdater::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncUpdater_Start_mD42A9C6567F15AD9A22A3BF79AFBD4356EBE5F03 (AsyncUpdater_tFD9C5192022FBF96B90534567B298522D66D78B2 * __this, const RuntimeMethod* method);
// UnityEngine.AdaptivePerformance.Provider.Feature UnityEngine.AdaptivePerformance.Provider.PerformanceDataRecord::get_ChangeFlags()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PerformanceDataRecord_get_ChangeFlags_mC5F321C8B1FE45A2B8006EF6BAC115A98951D986_inline (PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AdaptivePerformance.Provider.PerformanceDataRecord::set_ChangeFlags(UnityEngine.AdaptivePerformance.Provider.Feature)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PerformanceDataRecord_set_ChangeFlags_mB0DC1EED75676328BDE9B4A26BA5640A289CC588_inline (PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AdaptivePerformance.Provider.PerformanceDataRecord::set_WarningLevel(UnityEngine.AdaptivePerformance.WarningLevel)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PerformanceDataRecord_set_WarningLevel_m2DB9AD544AE5D331DAFE1C48368C9FA1B49C4C57_inline (PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AdaptivePerformance.Provider.PerformanceDataRecord::set_CpuPerformanceLevel(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PerformanceDataRecord_set_CpuPerformanceLevel_mC0AE860D4BE810163256F7858E7ABCE42717F1BE_inline (PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AdaptivePerformance.Provider.PerformanceDataRecord::set_GpuPerformanceLevel(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PerformanceDataRecord_set_GpuPerformanceLevel_m275CAD6DC74E064DCF2AC3200674F6F6824BEFF6_inline (PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Double UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/NativeApi::GetHighPrecisionSkinTempLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double NativeApi_GetHighPrecisionSkinTempLevel_m06BE434946DF3D1BE8F17477FB68D0CDEB68378B (NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844 (const RuntimeMethod* method);
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.AsyncValue`1<System.Double>::SyncUpdate(System.Single)
inline void AsyncValue_1_SyncUpdate_mA03A49DEA9F9924DC08440A5A3DD4A66E850933F (AsyncValue_1_t15F502DBC70872D99B55432A512A864625B26F15 * __this, float ___timestamp0, const RuntimeMethod* method)
{
	((  void (*) (AsyncValue_1_t15F502DBC70872D99B55432A512A864625B26F15 *, float, const RuntimeMethod*))AsyncValue_1_SyncUpdate_mA03A49DEA9F9924DC08440A5A3DD4A66E850933F_gshared)(__this, ___timestamp0, method);
}
// System.Single UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem::GetTemperatureLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SamsungGameSDKAdaptivePerformanceSubsystem_GetTemperatureLevel_m8B7BE751EAA95A7C8ECFEED3DD0B0C308967E142 (SamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AdaptivePerformance.Provider.PerformanceDataRecord::set_TemperatureLevel(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PerformanceDataRecord_set_TemperatureLevel_mD76D4B33A2B613DF248F510337819E9CDBF86837_inline (PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 * __this, float ___value0, const RuntimeMethod* method);
// System.Void System.Version::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Version__ctor_mB484853E49F58F771DF106B7BDC92E49ACE3DAAE (Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * __this, String_t* ___version0, const RuntimeMethod* method);
// System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/NativeApi::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_Initialize_m8F89BB8CBA29CFDDBCA2F894E824B1D8F6107F08 (NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123 * __this, const RuntimeMethod* method);
// System.String UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/NativeApi::GetVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeApi_GetVersion_mAE6C662706624717B2548BBE228AF9A9878CEB52 (NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem::TryParseVersion(System.String,System.Version&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SamsungGameSDKAdaptivePerformanceSubsystem_TryParseVersion_m7E2199B70BD439C46CA726D3006271F11ED91B08 (String_t* ___versionString0, Version_tBDAEDED25425A1D09910468B8BD1759115646E3C ** ___version1, const RuntimeMethod* method);
// System.Void System.Version::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Version__ctor_mA9BC7F2404CB129697C64851406DF468B753FFDF (Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * __this, int32_t ___major0, int32_t ___minor1, const RuntimeMethod* method);
// System.Boolean System.Version::op_GreaterThanOrEqual(System.Version,System.Version)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Version_op_GreaterThanOrEqual_m3541CE83D1E5FD5E50F8FFE4EA2984359E92754D (Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * ___v10, Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * ___v21, const RuntimeMethod* method);
// System.Void UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystemBase::set_initialized(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdaptivePerformanceSubsystemBase_set_initialized_mA650001F7F14114A248F3B834E31499DCFB2554D_inline (AdaptivePerformanceSubsystemBase_t6FF55B768F8B0E39432CE60CDD86D1BC8DC235CC * __this, bool ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/NativeApi::GetMaxCpuPerformanceLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeApi_GetMaxCpuPerformanceLevel_m08DE9F2A26D577CFABC9947D76B7DDE3F9F752A2 (NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/NativeApi::GetMaxGpuPerformanceLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeApi_GetMaxGpuPerformanceLevel_m6728C28A5B4CA2FB1092FC612DFA2B20A4F3BC84 (NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/NativeApi::Terminate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_Terminate_m60AA457D0C726DE97EA796CC690AD1886CDCF6B6 (NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AdaptivePerformance.Provider.PerformanceDataRecord::set_PerformanceLevelControlAvailable(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PerformanceDataRecord_set_PerformanceLevelControlAvailable_m65B14EA8893E776B2D21ABB18B49D97A82D1AF1C_inline (PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystemBase::get_initialized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AdaptivePerformanceSubsystemBase_get_initialized_mDE838BDEAF9C32DFAEBFAE92ABED9629EF6C04E8_inline (AdaptivePerformanceSubsystemBase_t6FF55B768F8B0E39432CE60CDD86D1BC8DC235CC * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem::ImmediateUpdateTemperature()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungGameSDKAdaptivePerformanceSubsystem_ImmediateUpdateTemperature_mF0DA23A954554D2489B0F678093C2B34FFD519DC (SamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem::CheckAndInitializeVRR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungGameSDKAdaptivePerformanceSubsystem_CheckAndInitializeVRR_mD974BCD7A451EF243E12F1A60854E508B79E8FA0 (SamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/NativeApi::IsVariableRefreshRateSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_IsVariableRefreshRateSupported_mA87B15DB6DBBA405B2DB772606643A73822BF0CD (NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/VRRManager::.ctor(UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/NativeApi)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VRRManager__ctor_mEF34A0A5455B063A9B86E262EDE52CF944945818 (VRRManager_tB79C0272A6886E77A12ADF1365B76758606FD1AC * __this, NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123 * ___api0, const RuntimeMethod* method);
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.VariableRefreshRate::set_Instance(UnityEngine.AdaptivePerformance.Samsung.Android.IVariableRefreshRate)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VariableRefreshRate_set_Instance_mA2EE58BBB76707BB9BF63B80898DB64E9D4D7782_inline (RuntimeObject* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/AutoVariableRefreshRate::.ctor(UnityEngine.AdaptivePerformance.Samsung.Android.IVariableRefreshRate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutoVariableRefreshRate__ctor_mB257DE7F344CBD5EE8FBF50BBC60C6179E21CBBD (AutoVariableRefreshRate_tFF7B877BD61A8A6CB5032694D95C06CD37CC7CA9 * __this, RuntimeObject* ___vrrManagerInstance0, const RuntimeMethod* method);
// System.TimeSpan System.TimeSpan::FromSeconds(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  TimeSpan_FromSeconds_m4644EABECA69BC6C07AD649C5898A8E53F4FE7B0 (double ___value0, const RuntimeMethod* method);
// System.Void System.Threading.Thread::Sleep(System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_Sleep_m01243CD1CAC36D42E645D6BA4C53FEAF6B981B51 (TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___timeout0, const RuntimeMethod* method);
// System.Single UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem::GetHighPrecisionSkinTempLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SamsungGameSDKAdaptivePerformanceSubsystem_GetHighPrecisionSkinTempLevel_m54E85094F29116A75905D416F22DDE2BBE625FB9 (SamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem::OnPerformanceWarning(UnityEngine.AdaptivePerformance.WarningLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungGameSDKAdaptivePerformanceSubsystem_OnPerformanceWarning_m166520178329E91FBC95073845B37D7675F7D98B (SamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C * __this, int32_t ___warningLevel0, const RuntimeMethod* method);
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.AsyncUpdater::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncUpdater_Dispose_mB811937E19252FFC18BE0822ABC19D7D4A500C0D (AsyncUpdater_tFD9C5192022FBF96B90534567B298522D66D78B2 * __this, const RuntimeMethod* method);
// T UnityEngine.AdaptivePerformance.Samsung.Android.AsyncValue`1<System.Double>::get_value()
inline double AsyncValue_1_get_value_mB10EA452BBD5046293C947527CD4FACB92A00922_inline (AsyncValue_1_t15F502DBC70872D99B55432A512A864625B26F15 * __this, const RuntimeMethod* method)
{
	return ((  double (*) (AsyncValue_1_t15F502DBC70872D99B55432A512A864625B26F15 *, const RuntimeMethod*))AsyncValue_1_get_value_mB10EA452BBD5046293C947527CD4FACB92A00922_gshared_inline)(__this, method);
}
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.AsyncValue`1<System.Double>::Update(System.Single)
inline bool AsyncValue_1_Update_mF7955D2344FC21FC8BDB1EE205CE8CD4E4AC7D03 (AsyncValue_1_t15F502DBC70872D99B55432A512A864625B26F15 * __this, float ___timestamp0, const RuntimeMethod* method)
{
	return ((  bool (*) (AsyncValue_1_t15F502DBC70872D99B55432A512A864625B26F15 *, float, const RuntimeMethod*))AsyncValue_1_Update_mF7955D2344FC21FC8BDB1EE205CE8CD4E4AC7D03_gshared)(__this, ___timestamp0, method);
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/VRRManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VRRManager_Update_mB395B3B20FDB532B695DB80117CC29EEACC479C8 (VRRManager_tB79C0272A6886E77A12ADF1365B76758606FD1AC * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderSettings::get_automaticVRR()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SamsungAndroidProviderSettings_get_automaticVRR_m4221B3258B342205B45B533671E17B29B81A6686_inline (SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.QualitySettings::get_vSyncCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t QualitySettings_get_vSyncCount_m00DC32AF7052D3BFF7EB5C384D5EA45BE0B98520 (const RuntimeMethod* method);
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/AutoVariableRefreshRate::UpdateAutoVRR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutoVariableRefreshRate_UpdateAutoVRR_mA8A923AD4152614FDB01CBF1317CE4CA5A1F3798 (AutoVariableRefreshRate_tFF7B877BD61A8A6CB5032694D95C06CD37CC7CA9 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem::LatestGpuFrameTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SamsungGameSDKAdaptivePerformanceSubsystem_LatestGpuFrameTime_mF6159BD4F817CE5AD774B05006C256A0740C6AE6 (SamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AdaptivePerformance.Provider.PerformanceDataRecord::set_GpuFrameTime(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PerformanceDataRecord_set_GpuFrameTime_mA7EEAA1D8ECBF75147158304A3941FDA752E2DA7_inline (PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 * __this, float ___value0, const RuntimeMethod* method);
// System.Single System.Math::Max(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Math_Max_mEB87839DA28310AE4CB81A94D551874CFC2B1247 (float ___val10, float ___val21, const RuntimeMethod* method);
// System.Single System.Math::Min(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Math_Min_mED21323DC72FBF9A825FD4210D4B9D693CE87FCF (float ___val10, float ___val21, const RuntimeMethod* method);
// System.Single UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem::NormalizeTemperatureLevel(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SamsungGameSDKAdaptivePerformanceSubsystem_NormalizeTemperatureLevel_m5A22308DD5337B04CD5F01BA3285C863C19919C6 (float ___currentTempLevel0, float ___minValue1, float ___maxValue2, const RuntimeMethod* method);
// System.Single UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem::NormalizeTemperatureLevel(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SamsungGameSDKAdaptivePerformanceSubsystem_NormalizeTemperatureLevel_m969AAE72F42261CCB977B4A18FE8601DD76BAEA8 (SamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C * __this, float ___currentTempLevel0, const RuntimeMethod* method);
// System.Int32 UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem::get_MaxCpuPerformanceLevel()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SamsungGameSDKAdaptivePerformanceSubsystem_get_MaxCpuPerformanceLevel_m176AD6DD52A90769BD504009C172D895113B0D2D_inline (SamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem::get_MaxGpuPerformanceLevel()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SamsungGameSDKAdaptivePerformanceSubsystem_get_MaxGpuPerformanceLevel_m848ABADDEB3EDBE03F3626AE166EF8CB7E4CC464_inline (SamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C * __this, const RuntimeMethod* method);
// System.Boolean System.Version::op_Equality(System.Version,System.Version)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Version_op_Equality_mB8525AD6D098EE54D9E0E5C9046F24B5CB197662 (Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * ___v10, Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * ___v21, const RuntimeMethod* method);
// System.Int32 UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/NativeApi::SetFreqLevels(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeApi_SetFreqLevels_m98592288D664AD0D1B5D6EB2C2FFBA71D4B8A198 (NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123 * __this, int32_t ___cpu0, int32_t ___gpu1, const RuntimeMethod* method);
// System.Int32 UnityEngine.AdaptivePerformance.Provider.PerformanceDataRecord::get_CpuPerformanceLevel()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PerformanceDataRecord_get_CpuPerformanceLevel_m5347895DB794F91B4CE64C6E3795A51FD2B85E0D_inline (PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.AdaptivePerformance.Provider.PerformanceDataRecord::get_GpuPerformanceLevel()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PerformanceDataRecord_get_GpuPerformanceLevel_mA7D3F637ABB320066197C9615F85F828F59DB874_inline (PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/VRRManager::Resume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VRRManager_Resume_mE193A16D23DE02C96E77C3404DC1E7D2F9340916 (VRRManager_tB79C0272A6886E77A12ADF1365B76758606FD1AC * __this, const RuntimeMethod* method);
// System.String UnityEngine.SystemInfo::get_deviceModel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SystemInfo_get_deviceModel_m99131C20271BDA64F3A537AA009B252DCEDC5977 (const RuntimeMethod* method);
// System.Boolean System.String::StartsWith(System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_mEA750A0572C706249CDD826681741B7DD733381E (String_t* __this, String_t* ___value0, int32_t ___comparisonType1, const RuntimeMethod* method);
// System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/NativeApi::IsAvailable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_IsAvailable_mBEDDDF68572CBF4B7FD497DB7E6419F1C427EE9F (const RuntimeMethod* method);
// System.Void UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystemDescriptor/Cinfo::set_id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_id_m8AF0A1044992B420D9D28DBDB141B92256847BFA_inline (Cinfo_t343E1319F64BFAAB6A935377090A355E67211F2B * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Void UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystemDescriptor/Cinfo::set_subsystemImplementationType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemImplementationType_m697DC61FEB48A3F81FC6A9FCDDD46E796F6E5342_inline (Cinfo_t343E1319F64BFAAB6A935377090A355E67211F2B * __this, Type_t * ___value0, const RuntimeMethod* method);
// UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystemDescriptor UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystemDescriptor::RegisterDescriptor(UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdaptivePerformanceSubsystemDescriptor_t08DC609A273D4C0D10E8130646B7B147AEA5AD71 * AdaptivePerformanceSubsystemDescriptor_RegisterDescriptor_mB1B46BAC930737076C97CCC54389FF72C7B80A8A (Cinfo_t343E1319F64BFAAB6A935377090A355E67211F2B  ___cinfo0, const RuntimeMethod* method);
// System.Double UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/NativeApi::GetGpuFrameTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double NativeApi_GetGpuFrameTime_mD633FDC3F93D5D12E797274F544A2F89E713EFFE (NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m6034644DBC6037DF39774B156BBE11B92B73D104 (U3CU3Ec_t903A2F07E9B1E2A8D05C639D8A6E16A5D888A0DC * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/VRRManager::OnRefreshRateChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VRRManager_OnRefreshRateChanged_m81C98F65D566943F3094926E406ECE057C006149 (VRRManager_tB79C0272A6886E77A12ADF1365B76758606FD1AC * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_unscaledDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_unscaledDeltaTime_m2C153F1E5C77C6AF655054BC6C76D0C334C0DC84 (const RuntimeMethod* method);
// System.Int32 UnityEngine.Application::get_targetFrameRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_targetFrameRate_m2BB711703471EC6C1E1B11A714B9005BB92C1E71 (const RuntimeMethod* method);
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderSettings::set_automaticVRR(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SamsungAndroidProviderSettings_set_automaticVRR_mB8D70EDEEE0B7E821C6CF92D8592B3CF382AAD5C_inline (SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaProxy::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaProxy__ctor_m1E8F4C0D87B74B81C64A54A584B2FF4ECE571238 (AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF * __this, String_t* ___javaInterface0, const RuntimeMethod* method);
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/NativeApi::StaticInit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_StaticInit_m6E6D92E8CDEE31EDEDEFC254A951998F4ACAFE23 (const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.AdaptivePerformance.WarningLevel>::Invoke(!0)
inline void Action_1_Invoke_m4825F6DA818BEB3BE4B7723C9370E86B49E9763D (Action_1_t8C4711099B422DAD7EA49F9E5395372F09F28C82 * __this, int32_t ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t8C4711099B422DAD7EA49F9E5395372F09F28C82 *, int32_t, const RuntimeMethod*))Action_1_Invoke_m0D209CF360D14991E324C1E8CEF44ADCD3221F07_gshared)(__this, ___obj0, method);
}
// System.Void UnityEngine.AndroidJNI::ExceptionClear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNI_ExceptionClear_mE1961C9BD4984AF52712BFF181B6B95F435531B7 (const RuntimeMethod* method);
// System.IntPtr UnityEngine.AndroidJNI::GetMethodID(System.IntPtr,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_GetMethodID_m4A0DBC91C300B8F342333561BA237258E12D0A3B (intptr_t ___clazz0, String_t* ___name1, String_t* ___sig2, const RuntimeMethod* method);
// System.IntPtr UnityEngine.AndroidJNI::ExceptionOccurred()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_ExceptionOccurred_m347473FDF70118E17D092961232E7EAF0BCF2991 (const RuntimeMethod* method);
// System.IntPtr System.IntPtr::op_Explicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Explicit_m9092E57CE669E7B9CCDCF5ADD6DFB758D6545FBF (int32_t ___value0, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJNI::ExceptionDescribe()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNI_ExceptionDescribe_mA46A449AEF75F9433FBCFC60C9FB9BD80A738C68 (const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m002765312BF306B1B3B5BFAB9550C0A2A1820CDA_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m002765312BF306B1B3B5BFAB9550C0A2A1820CDA_gshared_inline)(method);
}
// System.Void UnityEngine.AndroidJavaObject::.ctor(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__ctor_m6146DBD19BCFFDB3D4F42C8D38491F354B58B001 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___className0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::CallStatic<System.Boolean>(System.String,System.Object[])
inline bool AndroidJavaObject_CallStatic_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m4AA284A03F0D5D003114D60C705B8A54274C74DF (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  bool (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m4AA284A03F0D5D003114D60C705B8A54274C74DF_gshared)(__this, ___methodName0, ___args1, method);
}
// System.IntPtr UnityEngine.AndroidJavaObject::GetRawObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJavaObject_GetRawObject_m09E30F9AF9DD2AE07D34CE3915BDA557E206271D (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, const RuntimeMethod* method);
// System.IntPtr UnityEngine.AndroidJavaObject::GetRawClass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJavaObject_GetRawClass_m051337FD2D7C0E765641B192D86FF4A06257836B (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, const RuntimeMethod* method);
// System.IntPtr UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/NativeApi::GetJavaMethodID(System.IntPtr,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeApi_GetJavaMethodID_mF408D0BA9992AFB69114C1860C8BAD4E87617638 (intptr_t ___classId0, String_t* ___name1, String_t* ___sig2, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::Call<System.Boolean>(System.String,System.Object[])
inline bool AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m13EC19F5D105614B86EADA87F5F73751D3CFF108 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  bool (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m13EC19F5D105614B86EADA87F5F73751D3CFF108_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/NativeApi::RegisterListener()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_RegisterListener_mF29B063A54BAB9B83AA77A4021371341B83B85B8 (NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/NativeApi::UnregisterListener()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnregisterListener_mFB0FF5C2B2DB82F367FDE4D39034DC0383BD1626 (NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Application::get_identifier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_identifier_m89EF09E9D76342F10C81D4F236C6D4CEFF2825BE (const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::Call<System.String>(System.String,System.Object[])
inline String_t* AndroidJavaObject_Call_TisString_t_mE0E9BE21A1938D675DA63B376682D54E3B36AF0E (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  String_t* (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))AndroidJavaObject_Call_TisRuntimeObject_mA29DAB68E237E5B36D5A9DFD2231EB14C7A234D9_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Double UnityEngine.AndroidJNI::CallDoubleMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJNI_CallDoubleMethod_mC6B84A261650B29C19C304F07D1080B38ABC7186 (intptr_t ___obj0, intptr_t ___methodID1, jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* ___args2, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::Call<System.Int32>(System.String,System.Object[])
inline int32_t AndroidJavaObject_Call_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mD43CB504C00B380069C4904F986738EF503E9144 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))AndroidJavaObject_Call_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mD43CB504C00B380069C4904F986738EF503E9144_gshared)(__this, ___methodName0, ___args1, method);
}
// !!0 UnityEngine.AndroidJavaObject::Call<System.Int32[]>(System.String,System.Object[])
inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* AndroidJavaObject_Call_TisInt32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_mDD94B8DE230857A8C16A060135969B72A534DFE8 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))AndroidJavaObject_Call_TisRuntimeObject_mA29DAB68E237E5B36D5A9DFD2231EB14C7A234D9_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Void UnityEngine.AndroidJavaObject::Call(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Int32[] UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/NativeApi::GetSupportedRefreshRates()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* NativeApi_GetSupportedRefreshRates_m5AEFEB1C8E1AE5D7AFBADE31D3D719268EB33A89 (NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderSettings::get_highSpeedVRR()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SamsungAndroidProviderSettings_get_highSpeedVRR_mA9BB44B728682221720176AFAF52FB5EF9DC39EB_inline (SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
inline void List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, const RuntimeMethod*))List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
inline void List_1_Add_m415CDDDC44D8102E7E71D9EA0A853D7BBE6F469F (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, int32_t, const RuntimeMethod*))List_1_Add_m415CDDDC44D8102E7E71D9EA0A853D7BBE6F469F_gshared)(__this, ___item0, method);
}
// !0[] System.Collections.Generic.List`1<System.Int32>::ToArray()
inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* List_1_ToArray_m465C4122ED76D75D4194915EDBD32A89F259CF8C (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method)
{
	return ((  Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, const RuntimeMethod*))List_1_ToArray_m465C4122ED76D75D4194915EDBD32A89F259CF8C_gshared)(__this, method);
}
// System.Int32 UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/NativeApi::GetCurrentRefreshRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeApi_GetCurrentRefreshRate_m190464089F7777669AE062DD6B8094BBE425B192 (NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/VRRManager::SetDefaultVRR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VRRManager_SetDefaultVRR_m33726D97937A61E2133DE91AD4BD1C0168538072 (VRRManager_tB79C0272A6886E77A12ADF1365B76758606FD1AC * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/VRRManager::UpdateRefreshRateInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VRRManager_UpdateRefreshRateInfo_m4E1752C6E5AAB1C6D228C41890D2BC86859FE0FC (VRRManager_tB79C0272A6886E77A12ADF1365B76758606FD1AC * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/VRRManager::SetRefreshRateByIndexInternal(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VRRManager_SetRefreshRateByIndexInternal_m4A9F508EEA5B461AF9B1790DE0EDFBD06FD461DF (VRRManager_tB79C0272A6886E77A12ADF1365B76758606FD1AC * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.VariableRefreshRateEventHandler::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableRefreshRateEventHandler_Invoke_mE450A684864C914BB2E39BF846FC5895B32084B6 (VariableRefreshRateEventHandler_t06D300F6DD7FDB78D3404003A1C81A149DBFAC83 * __this, const RuntimeMethod* method);
// System.Int32[] UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/VRRManager::get_SupportedRefreshRates()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* VRRManager_get_SupportedRefreshRates_mF54CF20B28CDEFCE5F0E31C24361C884379FBE40_inline (VRRManager_tB79C0272A6886E77A12ADF1365B76758606FD1AC * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/NativeApi::SetRefreshRate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_SetRefreshRate_m52925DC9713CC70F59F9DB9929D51A2E6A0D183C (NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123 * __this, int32_t ___targetRefreshRate0, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4 (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
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
// System.String UnityEngine.AdaptivePerformance.AdaptiveVariableRefreshRate::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdaptiveVariableRefreshRate_get_Name_m8EFF1F14278E253433101F24DAD5183578B07921 (AdaptiveVariableRefreshRate_t191947991F52574C0BF26A6156720B6757C1D818 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCBD515F486F3F029991E3220BC5E926A5E96554D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override string Name  => "Adaptive VRR";
		return _stringLiteralCBD515F486F3F029991E3220BC5E926A5E96554D;
	}
}
// System.Boolean UnityEngine.AdaptivePerformance.AdaptiveVariableRefreshRate::get_Enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AdaptiveVariableRefreshRate_get_Enabled_m3DFDC6FA398A99E94DC8AE1FA7D622937FE2B791 (AdaptiveVariableRefreshRate_t191947991F52574C0BF26A6156720B6757C1D818 * __this, const RuntimeMethod* method)
{
	{
		// public override bool Enabled { get => m_AdaptiveVRREnabled; set => m_AdaptiveVRREnabled = value; }
		bool L_0 = __this->get_m_AdaptiveVRREnabled_12();
		return L_0;
	}
}
// System.Void UnityEngine.AdaptivePerformance.AdaptiveVariableRefreshRate::set_Enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdaptiveVariableRefreshRate_set_Enabled_mDB51982E4C4F994D212BAC96372B280441C8C0A4 (AdaptiveVariableRefreshRate_t191947991F52574C0BF26A6156720B6757C1D818 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public override bool Enabled { get => m_AdaptiveVRREnabled; set => m_AdaptiveVRREnabled = value; }
		bool L_0 = ___value0;
		__this->set_m_AdaptiveVRREnabled_12(L_0);
		return;
	}
}
// System.Void UnityEngine.AdaptivePerformance.AdaptiveVariableRefreshRate::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdaptiveVariableRefreshRate_Awake_m51C73975E744D7D2405656EBA17BBCFBF5A8E47B (AdaptiveVariableRefreshRate_t191947991F52574C0BF26A6156720B6757C1D818 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdaptiveVariableRefreshRate_RefreshRateChanged_mF193DBF673D4AA6593CDBC2466505413B3CBBEA0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_IndexOf_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m1F0420BEEDFC9FDB3682212205F4F8124BA3EA7E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVariableRefreshRate_tDE89F043B8996572722116FCB1A8BC2EB4B3DD77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VariableRefreshRateEventHandler_t06D300F6DD7FDB78D3404003A1C81A149DBFAC83_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Awake();
		AdaptiveFramerate_Awake_m2901D3518B13C9D60696D9A2287A7B673148E2BE(__this, /*hidden argument*/NULL);
		// if (m_Settings == null)
		IAdaptivePerformanceSettings_tA1BEAD4827B883C1A94BADD21AC4582054DAA6DF * L_0 = ((AdaptivePerformanceScaler_t04EE49F7531BB9AD7A93FA9F978C4469E0ED0BA3 *)__this)->get_m_Settings_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// return;
		return;
	}

IL_0015:
	{
		// m_VRR = VariableRefreshRate.Instance;
		RuntimeObject* L_2;
		L_2 = VariableRefreshRate_get_Instance_mEF8EA6B518B43B9ECF2F493D20AE908A66934765_inline(/*hidden argument*/NULL);
		__this->set_m_VRR_13(L_2);
		// if (m_VRR == null)
		RuntimeObject* L_3 = __this->get_m_VRR_13();
		if (L_3)
		{
			goto IL_0030;
		}
	}
	{
		// Enabled = false;
		VirtualActionInvoker1< bool >::Invoke(7 /* System.Void UnityEngine.AdaptivePerformance.AdaptivePerformanceScaler::set_Enabled(System.Boolean) */, __this, (bool)0);
		// return;
		return;
	}

IL_0030:
	{
		// m_VRR.RefreshRateChanged += RefreshRateChanged;
		RuntimeObject* L_4 = __this->get_m_VRR_13();
		VariableRefreshRateEventHandler_t06D300F6DD7FDB78D3404003A1C81A149DBFAC83 * L_5 = (VariableRefreshRateEventHandler_t06D300F6DD7FDB78D3404003A1C81A149DBFAC83 *)il2cpp_codegen_object_new(VariableRefreshRateEventHandler_t06D300F6DD7FDB78D3404003A1C81A149DBFAC83_il2cpp_TypeInfo_var);
		VariableRefreshRateEventHandler__ctor_mE2BC720F515C20D25FC2ED862998C3D072CB2230(L_5, __this, (intptr_t)((intptr_t)AdaptiveVariableRefreshRate_RefreshRateChanged_mF193DBF673D4AA6593CDBC2466505413B3CBBEA0_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_4);
		InterfaceActionInvoker1< VariableRefreshRateEventHandler_t06D300F6DD7FDB78D3404003A1C81A149DBFAC83 * >::Invoke(3 /* System.Void UnityEngine.AdaptivePerformance.Samsung.Android.IVariableRefreshRate::add_RefreshRateChanged(UnityEngine.AdaptivePerformance.Samsung.Android.VariableRefreshRateEventHandler) */, IVariableRefreshRate_tDE89F043B8996572722116FCB1A8BC2EB4B3DD77_il2cpp_TypeInfo_var, L_4, L_5);
		// m_CurrentRefreshRateIndex = Array.IndexOf(m_VRR.SupportedRefreshRates, m_VRR.CurrentRefreshRate);
		RuntimeObject* L_6 = __this->get_m_VRR_13();
		NullCheck(L_6);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_7;
		L_7 = InterfaceFuncInvoker0< Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* >::Invoke(0 /* System.Int32[] UnityEngine.AdaptivePerformance.Samsung.Android.IVariableRefreshRate::get_SupportedRefreshRates() */, IVariableRefreshRate_tDE89F043B8996572722116FCB1A8BC2EB4B3DD77_il2cpp_TypeInfo_var, L_6);
		RuntimeObject* L_8 = __this->get_m_VRR_13();
		NullCheck(L_8);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 UnityEngine.AdaptivePerformance.Samsung.Android.IVariableRefreshRate::get_CurrentRefreshRate() */, IVariableRefreshRate_tDE89F043B8996572722116FCB1A8BC2EB4B3DD77_il2cpp_TypeInfo_var, L_8);
		int32_t L_10;
		L_10 = Array_IndexOf_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m1F0420BEEDFC9FDB3682212205F4F8124BA3EA7E(L_7, L_9, /*hidden argument*/Array_IndexOf_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m1F0420BEEDFC9FDB3682212205F4F8124BA3EA7E_RuntimeMethod_var);
		__this->set_m_CurrentRefreshRateIndex_14(L_10);
		// }
		return;
	}
}
// System.Void UnityEngine.AdaptivePerformance.AdaptiveVariableRefreshRate::OnDisabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdaptiveVariableRefreshRate_OnDisabled_m5219862BE30D5C7FCB23E6ADF6AE3DB6B0BABDC3 (AdaptiveVariableRefreshRate_t191947991F52574C0BF26A6156720B6757C1D818 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVariableRefreshRate_tDE89F043B8996572722116FCB1A8BC2EB4B3DD77_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnDisabled();
		AdaptiveFramerate_OnDisabled_m82036310F44027467DF42B4F9DD60A0832C0A954(__this, /*hidden argument*/NULL);
		// if (m_VRR == null)
		RuntimeObject* L_0 = __this->get_m_VRR_13();
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// m_VRR.SetRefreshRateByIndex(m_DefaultRefreshRateIndex);
		RuntimeObject* L_1 = __this->get_m_VRR_13();
		int32_t L_2 = __this->get_m_DefaultRefreshRateIndex_15();
		NullCheck(L_1);
		bool L_3;
		L_3 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(2 /* System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.IVariableRefreshRate::SetRefreshRateByIndex(System.Int32) */, IVariableRefreshRate_tDE89F043B8996572722116FCB1A8BC2EB4B3DD77_il2cpp_TypeInfo_var, L_1, L_2);
		// }
		return;
	}
}
// System.Void UnityEngine.AdaptivePerformance.AdaptiveVariableRefreshRate::OnEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdaptiveVariableRefreshRate_OnEnabled_mA2BB05BC4CFCDC9D9676DA5273237585977C97C9 (AdaptiveVariableRefreshRate_t191947991F52574C0BF26A6156720B6757C1D818 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_IndexOf_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m1F0420BEEDFC9FDB3682212205F4F8124BA3EA7E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVariableRefreshRate_tDE89F043B8996572722116FCB1A8BC2EB4B3DD77_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnEnabled();
		AdaptiveFramerate_OnEnabled_m4AD7A50ACB2E0AE57290E09F5198D9CA6AD2235E(__this, /*hidden argument*/NULL);
		// if (m_VRR == null)
		RuntimeObject* L_0 = __this->get_m_VRR_13();
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// m_DefaultRefreshRateIndex = Array.IndexOf(m_VRR.SupportedRefreshRates, m_VRR.CurrentRefreshRate);
		RuntimeObject* L_1 = __this->get_m_VRR_13();
		NullCheck(L_1);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_2;
		L_2 = InterfaceFuncInvoker0< Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* >::Invoke(0 /* System.Int32[] UnityEngine.AdaptivePerformance.Samsung.Android.IVariableRefreshRate::get_SupportedRefreshRates() */, IVariableRefreshRate_tDE89F043B8996572722116FCB1A8BC2EB4B3DD77_il2cpp_TypeInfo_var, L_1);
		RuntimeObject* L_3 = __this->get_m_VRR_13();
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 UnityEngine.AdaptivePerformance.Samsung.Android.IVariableRefreshRate::get_CurrentRefreshRate() */, IVariableRefreshRate_tDE89F043B8996572722116FCB1A8BC2EB4B3DD77_il2cpp_TypeInfo_var, L_3);
		int32_t L_5;
		L_5 = Array_IndexOf_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m1F0420BEEDFC9FDB3682212205F4F8124BA3EA7E(L_2, L_4, /*hidden argument*/Array_IndexOf_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m1F0420BEEDFC9FDB3682212205F4F8124BA3EA7E_RuntimeMethod_var);
		__this->set_m_DefaultRefreshRateIndex_15(L_5);
		// }
		return;
	}
}
// System.Void UnityEngine.AdaptivePerformance.AdaptiveVariableRefreshRate::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdaptiveVariableRefreshRate_OnDestroy_mF3DA210CDF44A6AE86F1955E48D27A7CD488DC12 (AdaptiveVariableRefreshRate_t191947991F52574C0BF26A6156720B6757C1D818 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdaptiveVariableRefreshRate_RefreshRateChanged_mF193DBF673D4AA6593CDBC2466505413B3CBBEA0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVariableRefreshRate_tDE89F043B8996572722116FCB1A8BC2EB4B3DD77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VariableRefreshRateEventHandler_t06D300F6DD7FDB78D3404003A1C81A149DBFAC83_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_VRR == null)
		RuntimeObject* L_0 = __this->get_m_VRR_13();
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
		// m_VRR.RefreshRateChanged -= RefreshRateChanged;
		RuntimeObject* L_1 = __this->get_m_VRR_13();
		VariableRefreshRateEventHandler_t06D300F6DD7FDB78D3404003A1C81A149DBFAC83 * L_2 = (VariableRefreshRateEventHandler_t06D300F6DD7FDB78D3404003A1C81A149DBFAC83 *)il2cpp_codegen_object_new(VariableRefreshRateEventHandler_t06D300F6DD7FDB78D3404003A1C81A149DBFAC83_il2cpp_TypeInfo_var);
		VariableRefreshRateEventHandler__ctor_mE2BC720F515C20D25FC2ED862998C3D072CB2230(L_2, __this, (intptr_t)((intptr_t)AdaptiveVariableRefreshRate_RefreshRateChanged_mF193DBF673D4AA6593CDBC2466505413B3CBBEA0_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_1);
		InterfaceActionInvoker1< VariableRefreshRateEventHandler_t06D300F6DD7FDB78D3404003A1C81A149DBFAC83 * >::Invoke(4 /* System.Void UnityEngine.AdaptivePerformance.Samsung.Android.IVariableRefreshRate::remove_RefreshRateChanged(UnityEngine.AdaptivePerformance.Samsung.Android.VariableRefreshRateEventHandler) */, IVariableRefreshRate_tDE89F043B8996572722116FCB1A8BC2EB4B3DD77_il2cpp_TypeInfo_var, L_1, L_2);
		// }
		return;
	}
}
// System.Void UnityEngine.AdaptivePerformance.AdaptiveVariableRefreshRate::RefreshRateChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdaptiveVariableRefreshRate_RefreshRateChanged_mF193DBF673D4AA6593CDBC2466505413B3CBBEA0 (AdaptiveVariableRefreshRate_t191947991F52574C0BF26A6156720B6757C1D818 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_IndexOf_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m1F0420BEEDFC9FDB3682212205F4F8124BA3EA7E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVariableRefreshRate_tDE89F043B8996572722116FCB1A8BC2EB4B3DD77_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_VRR == null)
		RuntimeObject* L_0 = __this->get_m_VRR_13();
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
		// m_CurrentRefreshRateIndex = Array.IndexOf(m_VRR.SupportedRefreshRates, m_VRR.CurrentRefreshRate);
		RuntimeObject* L_1 = __this->get_m_VRR_13();
		NullCheck(L_1);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_2;
		L_2 = InterfaceFuncInvoker0< Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* >::Invoke(0 /* System.Int32[] UnityEngine.AdaptivePerformance.Samsung.Android.IVariableRefreshRate::get_SupportedRefreshRates() */, IVariableRefreshRate_tDE89F043B8996572722116FCB1A8BC2EB4B3DD77_il2cpp_TypeInfo_var, L_1);
		RuntimeObject* L_3 = __this->get_m_VRR_13();
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 UnityEngine.AdaptivePerformance.Samsung.Android.IVariableRefreshRate::get_CurrentRefreshRate() */, IVariableRefreshRate_tDE89F043B8996572722116FCB1A8BC2EB4B3DD77_il2cpp_TypeInfo_var, L_3);
		int32_t L_5;
		L_5 = Array_IndexOf_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m1F0420BEEDFC9FDB3682212205F4F8124BA3EA7E(L_2, L_4, /*hidden argument*/Array_IndexOf_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m1F0420BEEDFC9FDB3682212205F4F8124BA3EA7E_RuntimeMethod_var);
		__this->set_m_CurrentRefreshRateIndex_14(L_5);
		// }
		return;
	}
}
// System.Void UnityEngine.AdaptivePerformance.AdaptiveVariableRefreshRate::OnLevelIncrease()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdaptiveVariableRefreshRate_OnLevelIncrease_m2232865C6FC8800A6588712ECF4DF56579EDF0BC (AdaptiveVariableRefreshRate_t191947991F52574C0BF26A6156720B6757C1D818 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVariableRefreshRate_tDE89F043B8996572722116FCB1A8BC2EB4B3DD77_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// if (m_VRR == null)
		RuntimeObject* L_0 = __this->get_m_VRR_13();
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
		// if (m_CurrentRefreshRateIndex > 0)
		int32_t L_1 = __this->get_m_CurrentRefreshRateIndex_14();
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0053;
		}
	}
	{
		// var rateIndex = m_CurrentRefreshRateIndex - 1;
		int32_t L_2 = __this->get_m_CurrentRefreshRateIndex_14();
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1));
		// var fps = m_VRR.SupportedRefreshRates[rateIndex];
		RuntimeObject* L_3 = __this->get_m_VRR_13();
		NullCheck(L_3);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_4;
		L_4 = InterfaceFuncInvoker0< Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* >::Invoke(0 /* System.Int32[] UnityEngine.AdaptivePerformance.Samsung.Android.IVariableRefreshRate::get_SupportedRefreshRates() */, IVariableRefreshRate_tDE89F043B8996572722116FCB1A8BC2EB4B3DD77_il2cpp_TypeInfo_var, L_3);
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		int32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_1 = L_7;
		// if (fps < MinBound || fps > MaxBound)
		int32_t L_8 = V_1;
		float L_9;
		L_9 = VirtualFuncInvoker0< float >::Invoke(16 /* System.Single UnityEngine.AdaptivePerformance.AdaptivePerformanceScaler::get_MinBound() */, __this);
		if ((((float)((float)((float)L_8))) < ((float)L_9)))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_10 = V_1;
		float L_11;
		L_11 = VirtualFuncInvoker0< float >::Invoke(18 /* System.Single UnityEngine.AdaptivePerformance.AdaptivePerformanceScaler::get_MaxBound() */, __this);
		if ((!(((float)((float)((float)L_10))) > ((float)L_11))))
		{
			goto IL_003e;
		}
	}

IL_003d:
	{
		// return;
		return;
	}

IL_003e:
	{
		// if (m_VRR.SetRefreshRateByIndex(rateIndex))
		RuntimeObject* L_12 = __this->get_m_VRR_13();
		int32_t L_13 = V_0;
		NullCheck(L_12);
		bool L_14;
		L_14 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(2 /* System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.IVariableRefreshRate::SetRefreshRateByIndex(System.Int32) */, IVariableRefreshRate_tDE89F043B8996572722116FCB1A8BC2EB4B3DD77_il2cpp_TypeInfo_var, L_12, L_13);
		if (!L_14)
		{
			goto IL_0053;
		}
	}
	{
		// m_CurrentRefreshRateIndex = rateIndex;
		int32_t L_15 = V_0;
		__this->set_m_CurrentRefreshRateIndex_14(L_15);
	}

IL_0053:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.AdaptivePerformance.AdaptiveVariableRefreshRate::OnLevelDecrease()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdaptiveVariableRefreshRate_OnLevelDecrease_m68E109801B68F904B51D3E523B34F9BC1DCE97A1 (AdaptiveVariableRefreshRate_t191947991F52574C0BF26A6156720B6757C1D818 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVariableRefreshRate_tDE89F043B8996572722116FCB1A8BC2EB4B3DD77_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// if (m_VRR == null)
		RuntimeObject* L_0 = __this->get_m_VRR_13();
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
		// if (m_CurrentRefreshRateIndex < m_VRR.SupportedRefreshRates.Length - 1)
		int32_t L_1 = __this->get_m_CurrentRefreshRateIndex_14();
		RuntimeObject* L_2 = __this->get_m_VRR_13();
		NullCheck(L_2);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_3;
		L_3 = InterfaceFuncInvoker0< Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* >::Invoke(0 /* System.Int32[] UnityEngine.AdaptivePerformance.Samsung.Android.IVariableRefreshRate::get_SupportedRefreshRates() */, IVariableRefreshRate_tDE89F043B8996572722116FCB1A8BC2EB4B3DD77_il2cpp_TypeInfo_var, L_2);
		NullCheck(L_3);
		if ((((int32_t)L_1) >= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))), (int32_t)1)))))
		{
			goto IL_0061;
		}
	}
	{
		// var rateIndex = m_CurrentRefreshRateIndex + 1;
		int32_t L_4 = __this->get_m_CurrentRefreshRateIndex_14();
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
		// var fps = m_VRR.SupportedRefreshRates[rateIndex];
		RuntimeObject* L_5 = __this->get_m_VRR_13();
		NullCheck(L_5);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_6;
		L_6 = InterfaceFuncInvoker0< Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* >::Invoke(0 /* System.Int32[] UnityEngine.AdaptivePerformance.Samsung.Android.IVariableRefreshRate::get_SupportedRefreshRates() */, IVariableRefreshRate_tDE89F043B8996572722116FCB1A8BC2EB4B3DD77_il2cpp_TypeInfo_var, L_5);
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		int32_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_1 = L_9;
		// if (fps < MinBound || fps > MaxBound)
		int32_t L_10 = V_1;
		float L_11;
		L_11 = VirtualFuncInvoker0< float >::Invoke(16 /* System.Single UnityEngine.AdaptivePerformance.AdaptivePerformanceScaler::get_MinBound() */, __this);
		if ((((float)((float)((float)L_10))) < ((float)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		int32_t L_12 = V_1;
		float L_13;
		L_13 = VirtualFuncInvoker0< float >::Invoke(18 /* System.Single UnityEngine.AdaptivePerformance.AdaptivePerformanceScaler::get_MaxBound() */, __this);
		if ((!(((float)((float)((float)L_12))) > ((float)L_13))))
		{
			goto IL_004c;
		}
	}

IL_004b:
	{
		// return;
		return;
	}

IL_004c:
	{
		// if (m_VRR.SetRefreshRateByIndex(rateIndex))
		RuntimeObject* L_14 = __this->get_m_VRR_13();
		int32_t L_15 = V_0;
		NullCheck(L_14);
		bool L_16;
		L_16 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(2 /* System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.IVariableRefreshRate::SetRefreshRateByIndex(System.Int32) */, IVariableRefreshRate_tDE89F043B8996572722116FCB1A8BC2EB4B3DD77_il2cpp_TypeInfo_var, L_14, L_15);
		if (!L_16)
		{
			goto IL_0061;
		}
	}
	{
		// m_CurrentRefreshRateIndex = rateIndex;
		int32_t L_17 = V_0;
		__this->set_m_CurrentRefreshRateIndex_14(L_17);
	}

IL_0061:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.AdaptivePerformance.AdaptiveVariableRefreshRate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdaptiveVariableRefreshRate__ctor_m1BDED88613C327F54A57CA29B1B7589066F3B405 (AdaptiveVariableRefreshRate_t191947991F52574C0BF26A6156720B6757C1D818 * __this, const RuntimeMethod* method)
{
	{
		AdaptiveFramerate__ctor_m694304B14B58592958A80FB83E43A309ABF8D77A(__this, /*hidden argument*/NULL);
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
// System.Int32 UnityEngine.AdaptivePerformance.Samsung.Android.AsyncUpdater::Register(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AsyncUpdater_Register_m243BEA2D88EBB2AF27BBB1C524AD4CF381927FB1 (AsyncUpdater_tFD9C5192022FBF96B90534567B298522D66D78B2 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m8AE79EC2CE04C828830778BB7860C821C3AF4D24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m62C12145DD437794F8660D2396A00A7B2BA480C5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_Thread.IsAlive)
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_0 = __this->get_m_Thread_0();
		NullCheck(L_0);
		bool L_1;
		L_1 = Thread_get_IsAlive_mFA0C1391D1A22D18A7D010F251D537530B04E015(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return -1;
		return (-1);
	}

IL_000f:
	{
		// int handle = m_UpdateAction.Count;
		List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_2 = __this->get_m_UpdateAction_3();
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m62C12145DD437794F8660D2396A00A7B2BA480C5_inline(L_2, /*hidden argument*/List_1_get_Count_m62C12145DD437794F8660D2396A00A7B2BA480C5_RuntimeMethod_var);
		// m_UpdateAction.Add(action);
		List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_4 = __this->get_m_UpdateAction_3();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_5 = ___action0;
		NullCheck(L_4);
		List_1_Add_m8AE79EC2CE04C828830778BB7860C821C3AF4D24(L_4, L_5, /*hidden argument*/List_1_Add_m8AE79EC2CE04C828830778BB7860C821C3AF4D24_RuntimeMethod_var);
		// return handle;
		return L_3;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.AsyncUpdater::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncUpdater_Start_mD42A9C6567F15AD9A22A3BF79AFBD4356EBE5F03 (AsyncUpdater_tFD9C5192022FBF96B90534567B298522D66D78B2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m62C12145DD437794F8660D2396A00A7B2BA480C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Semaphore_t6DD478B5937D3F0469887B7829782CA3CB6CD15F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int maxRequests = m_UpdateAction.Count;
		List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_0 = __this->get_m_UpdateAction_3();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m62C12145DD437794F8660D2396A00A7B2BA480C5_inline(L_0, /*hidden argument*/List_1_get_Count_m62C12145DD437794F8660D2396A00A7B2BA480C5_RuntimeMethod_var);
		V_0 = L_1;
		// if (maxRequests <= 0)
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) > ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		// return;
		return;
	}

IL_0011:
	{
		// m_Semaphore = new Semaphore(0, maxRequests);
		int32_t L_3 = V_0;
		Semaphore_t6DD478B5937D3F0469887B7829782CA3CB6CD15F * L_4 = (Semaphore_t6DD478B5937D3F0469887B7829782CA3CB6CD15F *)il2cpp_codegen_object_new(Semaphore_t6DD478B5937D3F0469887B7829782CA3CB6CD15F_il2cpp_TypeInfo_var);
		Semaphore__ctor_m2D5E299CB8349F59A36727B9171C531220C5A760(L_4, 0, L_3, /*hidden argument*/NULL);
		__this->set_m_Semaphore_9(L_4);
		// m_UpdateRequests = new int[maxRequests];
		int32_t L_5 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_6 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)L_5);
		__this->set_m_UpdateRequests_4(L_6);
		// m_RequestComplete = new bool[maxRequests];
		int32_t L_7 = V_0;
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_8 = (BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C*)(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C*)SZArrayNew(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C_il2cpp_TypeInfo_var, (uint32_t)L_7);
		__this->set_m_RequestComplete_5(L_8);
		// m_Thread.Start();
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_9 = __this->get_m_Thread_0();
		NullCheck(L_9);
		Thread_Start_m490124B23F5EFD0BB2BED8CA12C77195B9CD9E1B(L_9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.AsyncUpdater::RequestUpdate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncUpdater_RequestUpdate_m2C28A1521E465C38DC2BE6A71F18878216D9D740 (AsyncUpdater_tFD9C5192022FBF96B90534567B298522D66D78B2 * __this, int32_t ___handle0, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// lock (m_Mutex)
		RuntimeObject * L_0 = __this->get_m_Mutex_8();
		V_0 = L_0;
		V_1 = (bool)0;
	}

IL_0009:
	try
	{// begin try (depth: 1)
		{
			RuntimeObject * L_1 = V_0;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_1, (bool*)(&V_1), /*hidden argument*/NULL);
			// int newWriteIndex = (m_UpdateRequestWriteIndex + 1) % m_UpdateRequests.Length;
			int32_t L_2 = __this->get_m_UpdateRequestWriteIndex_7();
			Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_3 = __this->get_m_UpdateRequests_4();
			NullCheck(L_3);
			V_2 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1))%(int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)))));
			// if (newWriteIndex == m_UpdateRequestReadIndex)
			int32_t L_4 = V_2;
			int32_t L_5 = __this->get_m_UpdateRequestReadIndex_6();
			if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
			{
				goto IL_0030;
			}
		}

IL_002c:
		{
			// return false;
			V_3 = (bool)0;
			IL2CPP_LEAVE(0x68, FINALLY_0050);
		}

IL_0030:
		{
			// m_UpdateRequests[m_UpdateRequestWriteIndex] = handle;
			Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_6 = __this->get_m_UpdateRequests_4();
			int32_t L_7 = __this->get_m_UpdateRequestWriteIndex_7();
			int32_t L_8 = ___handle0;
			NullCheck(L_6);
			(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (int32_t)L_8);
			// m_RequestComplete[handle] = false;
			BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_9 = __this->get_m_RequestComplete_5();
			int32_t L_10 = ___handle0;
			NullCheck(L_9);
			(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (bool)0);
			// m_UpdateRequestWriteIndex = newWriteIndex;
			int32_t L_11 = V_2;
			__this->set_m_UpdateRequestWriteIndex_7(L_11);
			// }
			IL2CPP_LEAVE(0x5A, FINALLY_0050);
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0050;
	}

FINALLY_0050:
	{// begin finally (depth: 1)
		{
			bool L_12 = V_1;
			if (!L_12)
			{
				goto IL_0059;
			}
		}

IL_0053:
		{
			RuntimeObject * L_13 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_13, /*hidden argument*/NULL);
		}

IL_0059:
		{
			IL2CPP_END_FINALLY(80)
		}
	}// end finally (depth: 1)
	IL2CPP_CLEANUP(80)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x68, IL_0068)
		IL2CPP_JUMP_TBL(0x5A, IL_005a)
	}

IL_005a:
	{
		// m_Semaphore.Release();
		Semaphore_t6DD478B5937D3F0469887B7829782CA3CB6CD15F * L_14 = __this->get_m_Semaphore_9();
		NullCheck(L_14);
		int32_t L_15;
		L_15 = Semaphore_Release_m64029281DC1926A46319D75EEE14E5C5F7C4A265(L_14, /*hidden argument*/NULL);
		// return true;
		return (bool)1;
	}

IL_0068:
	{
		// }
		bool L_16 = V_3;
		return L_16;
	}
}
// System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.AsyncUpdater::IsRequestComplete(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncUpdater_IsRequestComplete_m35406F1C6888D6F83F88CF3BAF4A68790B944794 (AsyncUpdater_tFD9C5192022FBF96B90534567B298522D66D78B2 * __this, int32_t ___handle0, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// lock (m_Mutex)
		RuntimeObject * L_0 = __this->get_m_Mutex_8();
		V_0 = L_0;
		V_1 = (bool)0;
	}

IL_0009:
	try
	{// begin try (depth: 1)
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_1, (bool*)(&V_1), /*hidden argument*/NULL);
		// return m_RequestComplete[handle];
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_2 = __this->get_m_RequestComplete_5();
		int32_t L_3 = ___handle0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		uint8_t L_5 = (uint8_t)(L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = (bool)L_5;
		IL2CPP_LEAVE(0x26, FINALLY_001c);
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_001c;
	}

FINALLY_001c:
	{// begin finally (depth: 1)
		{
			bool L_6 = V_1;
			if (!L_6)
			{
				goto IL_0025;
			}
		}

IL_001f:
		{
			RuntimeObject * L_7 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_7, /*hidden argument*/NULL);
		}

IL_0025:
		{
			IL2CPP_END_FINALLY(28)
		}
	}// end finally (depth: 1)
	IL2CPP_CLEANUP(28)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x26, IL_0026)
	}

IL_0026:
	{
		// }
		bool L_8 = V_2;
		return L_8;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.AsyncUpdater::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncUpdater__ctor_m780CD49926778C1BC3A90D75E7B1BAA53CA123D9 (AsyncUpdater_tFD9C5192022FBF96B90534567B298522D66D78B2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUpdater_ThreadProc_m8B957171FEA9C62C4603A8C2298ADBD74A7AB118_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8F3A8E6C64C39DA66FF5F99E7A6BB97B41A482BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t458734AF850139150AB40DFB2B5D1BCE23178235_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE02D43BFB3611F4411DD21848B293789A2B1B8D6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<Action> m_UpdateAction = new List<Action>();
		List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_0 = (List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 *)il2cpp_codegen_object_new(List_1_t458734AF850139150AB40DFB2B5D1BCE23178235_il2cpp_TypeInfo_var);
		List_1__ctor_m8F3A8E6C64C39DA66FF5F99E7A6BB97B41A482BB(L_0, /*hidden argument*/List_1__ctor_m8F3A8E6C64C39DA66FF5F99E7A6BB97B41A482BB_RuntimeMethod_var);
		__this->set_m_UpdateAction_3(L_0);
		// private object m_Mutex = new object();
		RuntimeObject * L_1 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(L_1, /*hidden argument*/NULL);
		__this->set_m_Mutex_8(L_1);
		// public AsyncUpdater()
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// m_Thread = new Thread(new ThreadStart(ThreadProc));
		ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687 * L_2 = (ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687 *)il2cpp_codegen_object_new(ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687_il2cpp_TypeInfo_var);
		ThreadStart__ctor_m360F4EED0AD96A27D6A9612BF79671F26B30411F(L_2, __this, (intptr_t)((intptr_t)AsyncUpdater_ThreadProc_m8B957171FEA9C62C4603A8C2298ADBD74A7AB118_RuntimeMethod_var), /*hidden argument*/NULL);
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_3 = (Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 *)il2cpp_codegen_object_new(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_il2cpp_TypeInfo_var);
		Thread__ctor_mF22465F0D0E47C11EF25DB552D1047402750BE90(L_3, L_2, /*hidden argument*/NULL);
		__this->set_m_Thread_0(L_3);
		// m_Thread.Name = "SamsungGameSDK";
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_4 = __this->get_m_Thread_0();
		NullCheck(L_4);
		Thread_set_Name_m920049DFD1306F42613F13CF7AD74C03661F4BAE(L_4, _stringLiteralE02D43BFB3611F4411DD21848B293789A2B1B8D6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.AsyncUpdater::ThreadProc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncUpdater_ThreadProc_m8B957171FEA9C62C4603A8C2298ADBD74A7AB118 (AsyncUpdater_tFD9C5192022FBF96B90534567B298522D66D78B2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m5A0FDCA39AD94F1DB9A64D80B088EF7D87411022_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	bool V_2 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 7> __leave_targets;
	{
		// AndroidJNI.AttachCurrentThread();
		int32_t L_0;
		L_0 = AndroidJNI_AttachCurrentThread_mB19891A8E6DFF2548BEC09881D3DD282F4A4F83E(/*hidden argument*/NULL);
	}

IL_0006:
	{
	}

IL_0007:
	try
	{// begin try (depth: 1)
		// m_Semaphore.WaitOne();
		Semaphore_t6DD478B5937D3F0469887B7829782CA3CB6CD15F * L_1 = __this->get_m_Semaphore_9();
		NullCheck(L_1);
		bool L_2;
		L_2 = VirtualFuncInvoker0< bool >::Invoke(9 /* System.Boolean System.Threading.WaitHandle::WaitOne() */, L_1);
		// }
		goto IL_001b;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0015;
		}
		throw e;
	}

CATCH_0015:
	{// begin catch(System.Exception)
		// catch (Exception)
		// break;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00bd;
	}// end catch (depth: 1)

IL_001b:
	{
		// int handle = -1;
		V_0 = (-1);
		// lock (m_Mutex)
		RuntimeObject * L_3 = __this->get_m_Mutex_8();
		V_1 = L_3;
		V_2 = (bool)0;
	}

IL_0026:
	try
	{// begin try (depth: 1)
		{
			RuntimeObject * L_4 = V_1;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_4, (bool*)(&V_2), /*hidden argument*/NULL);
			// if (m_Quit)
			bool L_5 = __this->get_m_Quit_2();
			if (!L_5)
			{
				goto IL_003b;
			}
		}

IL_0036:
		{
			// break;
			IL2CPP_LEAVE(0xBD, FINALLY_0070);
		}

IL_003b:
		{
			// if (m_UpdateRequestReadIndex != m_UpdateRequestWriteIndex)
			int32_t L_6 = __this->get_m_UpdateRequestReadIndex_6();
			int32_t L_7 = __this->get_m_UpdateRequestWriteIndex_7();
			if ((((int32_t)L_6) == ((int32_t)L_7)))
			{
				goto IL_006e;
			}
		}

IL_0049:
		{
			// handle = m_UpdateRequests[m_UpdateRequestReadIndex];
			Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_8 = __this->get_m_UpdateRequests_4();
			int32_t L_9 = __this->get_m_UpdateRequestReadIndex_6();
			NullCheck(L_8);
			int32_t L_10 = L_9;
			int32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
			V_0 = L_11;
			// m_UpdateRequestReadIndex = (m_UpdateRequestReadIndex + 1) % m_UpdateRequests.Length;
			int32_t L_12 = __this->get_m_UpdateRequestReadIndex_6();
			Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_13 = __this->get_m_UpdateRequests_4();
			NullCheck(L_13);
			__this->set_m_UpdateRequestReadIndex_6(((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1))%(int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length))))));
		}

IL_006e:
		{
			// }
			IL2CPP_LEAVE(0x7A, FINALLY_0070);
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0070;
	}

FINALLY_0070:
	{// begin finally (depth: 1)
		{
			bool L_14 = V_2;
			if (!L_14)
			{
				goto IL_0079;
			}
		}

IL_0073:
		{
			RuntimeObject * L_15 = V_1;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_15, /*hidden argument*/NULL);
		}

IL_0079:
		{
			IL2CPP_END_FINALLY(112)
		}
	}// end finally (depth: 1)
	IL2CPP_CLEANUP(112)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xBD, IL_00bd)
		IL2CPP_JUMP_TBL(0x7A, IL_007a)
	}

IL_007a:
	{
		// if (handle >= 0)
		int32_t L_16 = V_0;
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_0006;
		}
	}

IL_007e:
	try
	{// begin try (depth: 1)
		// m_UpdateAction[handle].Invoke();
		List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_17 = __this->get_m_UpdateAction_3();
		int32_t L_18 = V_0;
		NullCheck(L_17);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_19;
		L_19 = List_1_get_Item_m5A0FDCA39AD94F1DB9A64D80B088EF7D87411022_inline(L_17, L_18, /*hidden argument*/List_1_get_Item_m5A0FDCA39AD94F1DB9A64D80B088EF7D87411022_RuntimeMethod_var);
		NullCheck(L_19);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_19, /*hidden argument*/NULL);
		// }
		goto IL_0094;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0091;
		}
		throw e;
	}

CATCH_0091:
	{// begin catch(System.Exception)
		// catch (Exception)
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0094;
	}// end catch (depth: 1)

IL_0094:
	{
		// lock (m_Mutex)
		RuntimeObject * L_20 = __this->get_m_Mutex_8();
		V_1 = L_20;
		V_2 = (bool)0;
	}

IL_009d:
	try
	{// begin try (depth: 1)
		RuntimeObject * L_21 = V_1;
		Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_21, (bool*)(&V_2), /*hidden argument*/NULL);
		// m_RequestComplete[handle] = true;
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_22 = __this->get_m_RequestComplete_5();
		int32_t L_23 = V_0;
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (bool)1);
		// }
		IL2CPP_LEAVE(0x6, FINALLY_00b3);
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00b3;
	}

FINALLY_00b3:
	{// begin finally (depth: 1)
		{
			bool L_24 = V_2;
			if (!L_24)
			{
				goto IL_00bc;
			}
		}

IL_00b6:
		{
			RuntimeObject * L_25 = V_1;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_25, /*hidden argument*/NULL);
		}

IL_00bc:
		{
			IL2CPP_END_FINALLY(179)
		}
	}// end finally (depth: 1)
	IL2CPP_CLEANUP(179)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x6, IL_0006)
	}

IL_00bd:
	{
		// AndroidJNI.DetachCurrentThread();
		int32_t L_26;
		L_26 = AndroidJNI_DetachCurrentThread_m7BF42C3D636234700C9E2642022413F16205607B(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.AsyncUpdater::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncUpdater_Dispose_mC98997EA95B99A286C658FDD88BB4AD269720B83 (AsyncUpdater_tFD9C5192022FBF96B90534567B298522D66D78B2 * __this, bool ___disposing0, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// if (m_Disposed)
		bool L_0 = __this->get_m_Disposed_1();
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
		// if (disposing)
		bool L_1 = ___disposing0;
		if (!L_1)
		{
			goto IL_0054;
		}
	}
	{
		// if (m_Thread.IsAlive)
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_2 = __this->get_m_Thread_0();
		NullCheck(L_2);
		bool L_3;
		L_3 = Thread_get_IsAlive_mFA0C1391D1A22D18A7D010F251D537530B04E015(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0054;
		}
	}
	{
		// lock (m_Mutex)
		RuntimeObject * L_4 = __this->get_m_Mutex_8();
		V_0 = L_4;
		V_1 = (bool)0;
	}

IL_0022:
	try
	{// begin try (depth: 1)
		RuntimeObject * L_5 = V_0;
		Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_5, (bool*)(&V_1), /*hidden argument*/NULL);
		// m_Quit = true;
		__this->set_m_Quit_2((bool)1);
		// }
		IL2CPP_LEAVE(0x3D, FINALLY_0033);
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0033;
	}

FINALLY_0033:
	{// begin finally (depth: 1)
		{
			bool L_6 = V_1;
			if (!L_6)
			{
				goto IL_003c;
			}
		}

IL_0036:
		{
			RuntimeObject * L_7 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_7, /*hidden argument*/NULL);
		}

IL_003c:
		{
			IL2CPP_END_FINALLY(51)
		}
	}// end finally (depth: 1)
	IL2CPP_CLEANUP(51)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x3D, IL_003d)
	}

IL_003d:
	{
		// m_Semaphore.Release();
		Semaphore_t6DD478B5937D3F0469887B7829782CA3CB6CD15F * L_8 = __this->get_m_Semaphore_9();
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Semaphore_Release_m64029281DC1926A46319D75EEE14E5C5F7C4A265(L_8, /*hidden argument*/NULL);
		// m_Thread.Join();
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_10 = __this->get_m_Thread_0();
		NullCheck(L_10);
		Thread_Join_m7233E8FA960E446B49B0891B16EBE069265032F5(L_10, /*hidden argument*/NULL);
	}

IL_0054:
	{
		// m_Disposed = true;
		__this->set_m_Disposed_1((bool)1);
		// }
		return;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.AsyncUpdater::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncUpdater_Dispose_mB811937E19252FFC18BE0822ABC19D7D4A500C0D (AsyncUpdater_tFD9C5192022FBF96B90534567B298522D66D78B2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Dispose(true);
		AsyncUpdater_Dispose_mC98997EA95B99A286C658FDD88BB4AD269720B83(__this, (bool)1, /*hidden argument*/NULL);
		// GC.SuppressFinalize(this);
		IL2CPP_RUNTIME_CLASS_INIT(GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_mEE880E988C6AF32AA2F67F2D62715281EAA41555(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.GameSDKLog::Debug(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameSDKLog_Debug_mE395010E883D78AF54FD8A9106A86094A26B47F1 (String_t* ___format0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameSDKLog_t09880CE5B30D72E0E8328C7C0EDC15F9A3B3FF44_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral623E70A7FF6385C93E57D1CAE15E16E3188E7663);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (settings != null && settings.samsungProviderLogging)
		IL2CPP_RUNTIME_CLASS_INIT(GameSDKLog_t09880CE5B30D72E0E8328C7C0EDC15F9A3B3FF44_il2cpp_TypeInfo_var);
		SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A * L_0 = ((GameSDKLog_t09880CE5B30D72E0E8328C7C0EDC15F9A3B3FF44_StaticFields*)il2cpp_codegen_static_fields_for(GameSDKLog_t09880CE5B30D72E0E8328C7C0EDC15F9A3B3FF44_il2cpp_TypeInfo_var))->get_settings_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameSDKLog_t09880CE5B30D72E0E8328C7C0EDC15F9A3B3FF44_il2cpp_TypeInfo_var);
		SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A * L_2 = ((GameSDKLog_t09880CE5B30D72E0E8328C7C0EDC15F9A3B3FF44_StaticFields*)il2cpp_codegen_static_fields_for(GameSDKLog_t09880CE5B30D72E0E8328C7C0EDC15F9A3B3FF44_il2cpp_TypeInfo_var))->get_settings_0();
		NullCheck(L_2);
		bool L_3;
		L_3 = SamsungAndroidProviderSettings_get_samsungProviderLogging_m71DA5B62D909EA7009C760C09856D986751522F4_inline(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002f;
		}
	}
	{
		// UnityEngine.Debug.Log(System.String.Format("[Samsung GameSDK] " + format, args));
		String_t* L_4 = ___format0;
		String_t* L_5;
		L_5 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral623E70A7FF6385C93E57D1CAE15E16E3188E7663, L_4, /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = ___args1;
		String_t* L_7;
		L_7 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(L_5, L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_7, /*hidden argument*/NULL);
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.GameSDKLog::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameSDKLog__cctor_m4311E96DCAF0DF332EF479CB871ACE0653925BE8 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameSDKLog_t09880CE5B30D72E0E8328C7C0EDC15F9A3B3FF44_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static SamsungAndroidProviderSettings settings = SamsungAndroidProviderSettings.GetSettings();
		IL2CPP_RUNTIME_CLASS_INIT(SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A_il2cpp_TypeInfo_var);
		SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A * L_0;
		L_0 = SamsungAndroidProviderSettings_GetSettings_m5F3D48F7276BAC793B6E1B0174B71E8010BC5EDA_inline(/*hidden argument*/NULL);
		((GameSDKLog_t09880CE5B30D72E0E8328C7C0EDC15F9A3B3FF44_StaticFields*)il2cpp_codegen_static_fields_for(GameSDKLog_t09880CE5B30D72E0E8328C7C0EDC15F9A3B3FF44_il2cpp_TypeInfo_var))->set_settings_0(L_0);
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
// UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderLoader::get_samsungGameSDKSubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C * SamsungAndroidProviderLoader_get_samsungGameSDKSubsystem_mFE023E0EA9FF1E3E89A66A7843FC7999AE02CA13 (SamsungAndroidProviderLoader_tF4EF35A26133E653D4A7D8EDD8AA52F555C471C2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdaptivePerformanceLoader_GetLoadedSubsystem_TisSamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C_m77E2FE4017D6BBFB58DC59ED2D7FB10E18E0BB6A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return GetLoadedSubsystem<SamsungGameSDKAdaptivePerformanceSubsystem>(); }
		SamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C * L_0;
		L_0 = GenericVirtualFuncInvoker0< SamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C * >::Invoke(AdaptivePerformanceLoader_GetLoadedSubsystem_TisSamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C_m77E2FE4017D6BBFB58DC59ED2D7FB10E18E0BB6A_RuntimeMethod_var, __this);
		return L_0;
	}
}
// UnityEngine.ISubsystem UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderLoader::GetDefaultSubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SamsungAndroidProviderLoader_GetDefaultSubsystem_m21CE0BA6637633939066D49CCB735113F91A0076 (SamsungAndroidProviderLoader_tF4EF35A26133E653D4A7D8EDD8AA52F555C471C2 * __this, const RuntimeMethod* method)
{
	{
		// return samsungGameSDKSubsystem;
		SamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C * L_0;
		L_0 = SamsungAndroidProviderLoader_get_samsungGameSDKSubsystem_mFE023E0EA9FF1E3E89A66A7843FC7999AE02CA13(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.AdaptivePerformance.IAdaptivePerformanceSettings UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderLoader::GetSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IAdaptivePerformanceSettings_tA1BEAD4827B883C1A94BADD21AC4582054DAA6DF * SamsungAndroidProviderLoader_GetSettings_m5142C16141C6A67402F594FF986BEE47F62608F2 (SamsungAndroidProviderLoader_tF4EF35A26133E653D4A7D8EDD8AA52F555C471C2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return SamsungAndroidProviderSettings.GetSettings();
		IL2CPP_RUNTIME_CLASS_INIT(SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A_il2cpp_TypeInfo_var);
		SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A * L_0;
		L_0 = SamsungAndroidProviderSettings_GetSettings_m5F3D48F7276BAC793B6E1B0174B71E8010BC5EDA_inline(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderLoader::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SamsungAndroidProviderLoader_Initialize_mD8B7358FD468F612096722DDD533A3870C918271 (SamsungAndroidProviderLoader_tF4EF35A26133E653D4A7D8EDD8AA52F555C471C2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdaptivePerformanceLoaderHelper_CreateSubsystem_TisAdaptivePerformanceSubsystemDescriptor_t08DC609A273D4C0D10E8130646B7B147AEA5AD71_TisSamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C_mF42D88911411F0A2D2D8E290837E6CDA363A3DE5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SamsungAndroidProviderLoader_tF4EF35A26133E653D4A7D8EDD8AA52F555C471C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B12B6CCB3BEDC9356EF0F26246EFBA529D03D4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE02D43BFB3611F4411DD21848B293789A2B1B8D6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CreateSubsystem<AdaptivePerformanceSubsystemDescriptor, SamsungGameSDKAdaptivePerformanceSubsystem>(s_SamsungGameSDKSubsystemDescriptors, "SamsungGameSDK");
		IL2CPP_RUNTIME_CLASS_INIT(SamsungAndroidProviderLoader_tF4EF35A26133E653D4A7D8EDD8AA52F555C471C2_il2cpp_TypeInfo_var);
		List_1_tDC3CCB2B6EC9D3D4B4CDA5C96CB5BB341E2454A4 * L_0 = ((SamsungAndroidProviderLoader_tF4EF35A26133E653D4A7D8EDD8AA52F555C471C2_StaticFields*)il2cpp_codegen_static_fields_for(SamsungAndroidProviderLoader_tF4EF35A26133E653D4A7D8EDD8AA52F555C471C2_il2cpp_TypeInfo_var))->get_s_SamsungGameSDKSubsystemDescriptors_5();
		AdaptivePerformanceLoaderHelper_CreateSubsystem_TisAdaptivePerformanceSubsystemDescriptor_t08DC609A273D4C0D10E8130646B7B147AEA5AD71_TisSamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C_mF42D88911411F0A2D2D8E290837E6CDA363A3DE5(__this, L_0, _stringLiteralE02D43BFB3611F4411DD21848B293789A2B1B8D6, /*hidden argument*/AdaptivePerformanceLoaderHelper_CreateSubsystem_TisAdaptivePerformanceSubsystemDescriptor_t08DC609A273D4C0D10E8130646B7B147AEA5AD71_TisSamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C_mF42D88911411F0A2D2D8E290837E6CDA363A3DE5_RuntimeMethod_var);
		// if (samsungGameSDKSubsystem == null)
		SamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C * L_1;
		L_1 = SamsungAndroidProviderLoader_get_samsungGameSDKSubsystem_mFE023E0EA9FF1E3E89A66A7843FC7999AE02CA13(__this, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0022;
		}
	}
	{
		// Debug.LogError("Unable to start the Samsung Android subsystem.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteral6B12B6CCB3BEDC9356EF0F26246EFBA529D03D4C, /*hidden argument*/NULL);
	}

IL_0022:
	{
		// return samsungGameSDKSubsystem != null;
		SamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C * L_2;
		L_2 = SamsungAndroidProviderLoader_get_samsungGameSDKSubsystem_mFE023E0EA9FF1E3E89A66A7843FC7999AE02CA13(__this, /*hidden argument*/NULL);
		return (bool)((!(((RuntimeObject*)(SamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C *)L_2) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
	}
}
// System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderLoader::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SamsungAndroidProviderLoader_Start_m4A8C3409675027A2204351FB90DE2572D0AFFBCC (SamsungAndroidProviderLoader_tF4EF35A26133E653D4A7D8EDD8AA52F555C471C2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdaptivePerformanceLoaderHelper_StartSubsystem_TisSamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C_mBA5171134DBE4411AAA22FC80764B743F303E171_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StartSubsystem<SamsungGameSDKAdaptivePerformanceSubsystem>();
		AdaptivePerformanceLoaderHelper_StartSubsystem_TisSamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C_mBA5171134DBE4411AAA22FC80764B743F303E171(__this, /*hidden argument*/AdaptivePerformanceLoaderHelper_StartSubsystem_TisSamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C_mBA5171134DBE4411AAA22FC80764B743F303E171_RuntimeMethod_var);
		// return true;
		return (bool)1;
	}
}
// System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderLoader::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SamsungAndroidProviderLoader_Stop_mB5FB11A342D68015336C6673E75BF98FCB9AE883 (SamsungAndroidProviderLoader_tF4EF35A26133E653D4A7D8EDD8AA52F555C471C2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdaptivePerformanceLoaderHelper_StopSubsystem_TisSamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C_m8BEF758544D39431E92429FF9510051B818DED8A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StopSubsystem<SamsungGameSDKAdaptivePerformanceSubsystem>();
		AdaptivePerformanceLoaderHelper_StopSubsystem_TisSamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C_m8BEF758544D39431E92429FF9510051B818DED8A(__this, /*hidden argument*/AdaptivePerformanceLoaderHelper_StopSubsystem_TisSamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C_m8BEF758544D39431E92429FF9510051B818DED8A_RuntimeMethod_var);
		// return true;
		return (bool)1;
	}
}
// System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderLoader::Deinitialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SamsungAndroidProviderLoader_Deinitialize_m41518761704AB1B66B9D209DFA76BBD9C071CACC (SamsungAndroidProviderLoader_tF4EF35A26133E653D4A7D8EDD8AA52F555C471C2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdaptivePerformanceLoaderHelper_DestroySubsystem_TisSamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C_m6DA7E025713371547503FE957E5C43D87C039646_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DestroySubsystem<SamsungGameSDKAdaptivePerformanceSubsystem>();
		AdaptivePerformanceLoaderHelper_DestroySubsystem_TisSamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C_m6DA7E025713371547503FE957E5C43D87C039646(__this, /*hidden argument*/AdaptivePerformanceLoaderHelper_DestroySubsystem_TisSamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C_m6DA7E025713371547503FE957E5C43D87C039646_RuntimeMethod_var);
		// return true;
		return (bool)1;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderLoader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungAndroidProviderLoader__ctor_mEE7CF6845D0EEA728F694CF91A8EC5B7B16389C3 (SamsungAndroidProviderLoader_tF4EF35A26133E653D4A7D8EDD8AA52F555C471C2 * __this, const RuntimeMethod* method)
{
	{
		AdaptivePerformanceLoaderHelper__ctor_mE84DD1B4F467A7999870517C658B85B4C5109EB2(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderLoader::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungAndroidProviderLoader__cctor_m67974FF9C54676C03A9B2BED012BCBDC545F3427 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m437E6C5DE2D7E16E015E843E8C8A8F32A6360E60_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tDC3CCB2B6EC9D3D4B4CDA5C96CB5BB341E2454A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SamsungAndroidProviderLoader_tF4EF35A26133E653D4A7D8EDD8AA52F555C471C2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static List<AdaptivePerformanceSubsystemDescriptor> s_SamsungGameSDKSubsystemDescriptors =
		//     new List<AdaptivePerformanceSubsystemDescriptor>();
		List_1_tDC3CCB2B6EC9D3D4B4CDA5C96CB5BB341E2454A4 * L_0 = (List_1_tDC3CCB2B6EC9D3D4B4CDA5C96CB5BB341E2454A4 *)il2cpp_codegen_object_new(List_1_tDC3CCB2B6EC9D3D4B4CDA5C96CB5BB341E2454A4_il2cpp_TypeInfo_var);
		List_1__ctor_m437E6C5DE2D7E16E015E843E8C8A8F32A6360E60(L_0, /*hidden argument*/List_1__ctor_m437E6C5DE2D7E16E015E843E8C8A8F32A6360E60_RuntimeMethod_var);
		((SamsungAndroidProviderLoader_tF4EF35A26133E653D4A7D8EDD8AA52F555C471C2_StaticFields*)il2cpp_codegen_static_fields_for(SamsungAndroidProviderLoader_tF4EF35A26133E653D4A7D8EDD8AA52F555C471C2_il2cpp_TypeInfo_var))->set_s_SamsungGameSDKSubsystemDescriptors_5(L_0);
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
// System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderSettings::get_samsungProviderLogging()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SamsungAndroidProviderSettings_get_samsungProviderLogging_m71DA5B62D909EA7009C760C09856D986751522F4 (SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A * __this, const RuntimeMethod* method)
{
	{
		// get { return m_SamsungProviderLogging; }
		bool L_0 = __this->get_m_SamsungProviderLogging_9();
		return L_0;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderSettings::set_samsungProviderLogging(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungAndroidProviderSettings_set_samsungProviderLogging_mD8BA16D5FFCC4658C6175BDC28B539FA97DAE1F9 (SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { m_SamsungProviderLogging = value; }
		bool L_0 = ___value0;
		__this->set_m_SamsungProviderLogging_9(L_0);
		// set { m_SamsungProviderLogging = value; }
		return;
	}
}
// System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderSettings::get_highSpeedVRR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SamsungAndroidProviderSettings_get_highSpeedVRR_mA9BB44B728682221720176AFAF52FB5EF9DC39EB (SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A * __this, const RuntimeMethod* method)
{
	{
		// get { return m_HighSpeedVRR; }
		bool L_0 = __this->get_m_HighSpeedVRR_10();
		return L_0;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderSettings::set_highSpeedVRR(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungAndroidProviderSettings_set_highSpeedVRR_m756BCF71965416D652AF5FC0B7B84AE649F9F45A (SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { m_HighSpeedVRR = value; }
		bool L_0 = ___value0;
		__this->set_m_HighSpeedVRR_10(L_0);
		// set { m_HighSpeedVRR = value; }
		return;
	}
}
// System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderSettings::get_automaticVRR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SamsungAndroidProviderSettings_get_automaticVRR_m4221B3258B342205B45B533671E17B29B81A6686 (SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A * __this, const RuntimeMethod* method)
{
	{
		// get { return m_AutomaticVRR; }
		bool L_0 = __this->get_m_AutomaticVRR_11();
		return L_0;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderSettings::set_automaticVRR(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungAndroidProviderSettings_set_automaticVRR_mB8D70EDEEE0B7E821C6CF92D8592B3CF382AAD5C (SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { m_AutomaticVRR = value; }
		bool L_0 = ___value0;
		__this->set_m_AutomaticVRR_11(L_0);
		// set { m_AutomaticVRR = value; }
		return;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderSettings::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungAndroidProviderSettings_Awake_m13AD94174995C143EA546BEBEE03D251965F753E (SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// s_RuntimeInstance = this;
		IL2CPP_RUNTIME_CLASS_INIT(SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A_il2cpp_TypeInfo_var);
		((SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A_StaticFields*)il2cpp_codegen_static_fields_for(SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A_il2cpp_TypeInfo_var))->set_s_RuntimeInstance_12(__this);
		// }
		return;
	}
}
// UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderSettings UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderSettings::GetSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A * SamsungAndroidProviderSettings_GetSettings_m5F3D48F7276BAC793B6E1B0174B71E8010BC5EDA (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// settings = s_RuntimeInstance;
		IL2CPP_RUNTIME_CLASS_INIT(SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A_il2cpp_TypeInfo_var);
		SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A * L_0 = ((SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A_StaticFields*)il2cpp_codegen_static_fields_for(SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A_il2cpp_TypeInfo_var))->get_s_RuntimeInstance_12();
		// return settings;
		return L_0;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungAndroidProviderSettings__ctor_m4FDF5371E2CD6413668E22189FED1652EDCCDB4E (SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A * __this, const RuntimeMethod* method)
{
	{
		// bool m_AutomaticVRR = true;
		__this->set_m_AutomaticVRR_11((bool)1);
		IAdaptivePerformanceSettings__ctor_m54D83D51CB50D235F0F7F8AAB4D0CCFD57D8B96B(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderSettings::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungAndroidProviderSettings__cctor_m8B37F5F9DA633683D534287F61B77D054A09D170 (const RuntimeMethod* method)
{
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
// UnityEngine.AdaptivePerformance.Provider.IApplicationLifecycle UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem::get_ApplicationLifecycle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SamsungGameSDKAdaptivePerformanceSubsystem_get_ApplicationLifecycle_m333230E18C92F02EB7FC0F14929C72BA795EB8D3 (SamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C * __this, const RuntimeMethod* method)
{
	{
		// override public IApplicationLifecycle ApplicationLifecycle { get { return this; } }
		return __this;
	}
}
// UnityEngine.AdaptivePerformance.Provider.IDevicePerformanceLevelControl UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem::get_PerformanceLevelControl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SamsungGameSDKAdaptivePerformanceSubsystem_get_PerformanceLevelControl_m77AD51BC56A9FD1F8201A3383863C3782F15FA43 (SamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C * __this, const RuntimeMethod* method)
{
	{
		// override public IDevicePerformanceLevelControl PerformanceLevelControl { get { return this; } }
		return __this;
	}
}
// System.Int32 UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem::get_MaxCpuPerformanceLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SamsungGameSDKAdaptivePerformanceSubsystem_get_MaxCpuPerformanceLevel_m176AD6DD52A90769BD504009C172D895113B0D2D (SamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C * __this, const RuntimeMethod* method)
{
	{
		// public int MaxCpuPerformanceLevel { get; set; }
		int32_t L_0 = __this->get_U3CMaxCpuPerformanceLevelU3Ek__BackingField_14();
		return L_0;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem::set_MaxCpuPerformanceLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungGameSDKAdaptivePerformanceSubsystem_set_MaxCpuPerformanceLevel_mD7C7AA35D50B81A48BBE3483D96631725C576D75 (SamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int MaxCpuPerformanceLevel { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CMaxCpuPerformanceLevelU3Ek__BackingField_14(L_0);
		return;
	}
}
// System.Int32 UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem::get_MaxGpuPerformanceLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SamsungGameSDKAdaptivePerformanceSubsystem_get_MaxGpuPerformanceLevel_m848ABADDEB3EDBE03F3626AE166EF8CB7E4CC464 (SamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C * __this, const RuntimeMethod* method)
{
	{
		// public int MaxGpuPerformanceLevel { get; set; }
		int32_t L_0 = __this->get_U3CMaxGpuPerformanceLevelU3Ek__BackingField_15();
		return L_0;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem::set_MaxGpuPerformanceLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungGameSDKAdaptivePerformanceSubsystem_set_MaxGpuPerformanceLevel_mC4E2203C66BE865BBA77B688C9541E6FD21AC718 (SamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int MaxGpuPerformanceLevel { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CMaxGpuPerformanceLevelU3Ek__BackingField_15(L_0);
		return;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungGameSDKAdaptivePerformanceSubsystem__ctor_m85EAC6BD982F6846F72FF1BDD90ACC6524C7437E (SamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m4ADA6A6416861F5CA9EEFB4EAED9B1FC482B22CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t8C4711099B422DAD7EA49F9E5395372F09F28C82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUpdater_tFD9C5192022FBF96B90534567B298522D66D78B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncValue_1__ctor_m407CE0C35BC9C978585D744C8EB8BC31D59BFB3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncValue_1_t15F502DBC70872D99B55432A512A864625B26F15_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1__ctor_mCEE9371173A8ABF1AFE6B116EB1127082F7A4B0E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t5B109BB44B407A255786F7DB10BD317EFFAA5C63_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SamsungGameSDKAdaptivePerformanceSubsystem_OnPerformanceLevelTimeout_m97613DEB8B73D555EFD8E69548F35592D85A0B52_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SamsungGameSDKAdaptivePerformanceSubsystem_OnPerformanceWarning_m166520178329E91FBC95073845B37D7675F7D98B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SamsungGameSDKAdaptivePerformanceSubsystem_U3C_ctorU3Eb__24_1_mA464F51A61826EF0FD17ECAEBFFFEB30C7C31454_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SamsungGameSDKAdaptivePerformanceSubsystem_U3C_ctorU3Eb__24_2_m942BF526AEC01E266DF84AAD14D26C80DC5044D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__24_0_mE0A3F07346D922C855303808B247FB775F546813_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t903A2F07E9B1E2A8D05C639D8A6E16A5D888A0DC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B2_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B2_1 = NULL;
	Action_1_t8C4711099B422DAD7EA49F9E5395372F09F28C82 * G_B2_2 = NULL;
	SamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C * G_B2_3 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B1_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B1_1 = NULL;
	Action_1_t8C4711099B422DAD7EA49F9E5395372F09F28C82 * G_B1_2 = NULL;
	SamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C * G_B1_3 = NULL;
	{
		// private object m_DataLock = new object();
		RuntimeObject * L_0 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(L_0, /*hidden argument*/NULL);
		__this->set_m_DataLock_6(L_0);
		// private float m_MaxTempLevel = 10.0f;
		__this->set_m_MaxTempLevel_11((10.0f));
		// public SamsungGameSDKAdaptivePerformanceSubsystem()
		AdaptivePerformanceSubsystem__ctor_m35BB6CDFA707F6520550EB9EDF3171DCC0046751(__this, /*hidden argument*/NULL);
		// MaxCpuPerformanceLevel = 3;
		SamsungGameSDKAdaptivePerformanceSubsystem_set_MaxCpuPerformanceLevel_mD7C7AA35D50B81A48BBE3483D96631725C576D75_inline(__this, 3, /*hidden argument*/NULL);
		// MaxGpuPerformanceLevel = 3;
		SamsungGameSDKAdaptivePerformanceSubsystem_set_MaxGpuPerformanceLevel_mC4E2203C66BE865BBA77B688C9541E6FD21AC718_inline(__this, 3, /*hidden argument*/NULL);
		// m_Api = new NativeApi(OnPerformanceWarning, OnPerformanceLevelTimeout, () => (VariableRefreshRate.Instance as VRRManager)?.OnRefreshRateChanged());
		Action_1_t8C4711099B422DAD7EA49F9E5395372F09F28C82 * L_1 = (Action_1_t8C4711099B422DAD7EA49F9E5395372F09F28C82 *)il2cpp_codegen_object_new(Action_1_t8C4711099B422DAD7EA49F9E5395372F09F28C82_il2cpp_TypeInfo_var);
		Action_1__ctor_m4ADA6A6416861F5CA9EEFB4EAED9B1FC482B22CF(L_1, __this, (intptr_t)((intptr_t)SamsungGameSDKAdaptivePerformanceSubsystem_OnPerformanceWarning_m166520178329E91FBC95073845B37D7675F7D98B_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m4ADA6A6416861F5CA9EEFB4EAED9B1FC482B22CF_RuntimeMethod_var);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_2, __this, (intptr_t)((intptr_t)SamsungGameSDKAdaptivePerformanceSubsystem_OnPerformanceLevelTimeout_m97613DEB8B73D555EFD8E69548F35592D85A0B52_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t903A2F07E9B1E2A8D05C639D8A6E16A5D888A0DC_il2cpp_TypeInfo_var);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = ((U3CU3Ec_t903A2F07E9B1E2A8D05C639D8A6E16A5D888A0DC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t903A2F07E9B1E2A8D05C639D8A6E16A5D888A0DC_il2cpp_TypeInfo_var))->get_U3CU3E9__24_0_1();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_4 = L_3;
		G_B1_0 = L_4;
		G_B1_1 = L_2;
		G_B1_2 = L_1;
		G_B1_3 = __this;
		if (L_4)
		{
			G_B2_0 = L_4;
			G_B2_1 = L_2;
			G_B2_2 = L_1;
			G_B2_3 = __this;
			goto IL_0062;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t903A2F07E9B1E2A8D05C639D8A6E16A5D888A0DC_il2cpp_TypeInfo_var);
		U3CU3Ec_t903A2F07E9B1E2A8D05C639D8A6E16A5D888A0DC * L_5 = ((U3CU3Ec_t903A2F07E9B1E2A8D05C639D8A6E16A5D888A0DC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t903A2F07E9B1E2A8D05C639D8A6E16A5D888A0DC_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_6, L_5, (intptr_t)((intptr_t)U3CU3Ec_U3C_ctorU3Eb__24_0_mE0A3F07346D922C855303808B247FB775F546813_RuntimeMethod_var), /*hidden argument*/NULL);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7 = L_6;
		((U3CU3Ec_t903A2F07E9B1E2A8D05C639D8A6E16A5D888A0DC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t903A2F07E9B1E2A8D05C639D8A6E16A5D888A0DC_il2cpp_TypeInfo_var))->set_U3CU3E9__24_0_1(L_7);
		G_B2_0 = L_7;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
		G_B2_3 = G_B1_3;
	}

IL_0062:
	{
		NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123 * L_8 = (NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123 *)il2cpp_codegen_object_new(NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_il2cpp_TypeInfo_var);
		NativeApi__ctor_m59391FFED30BEA83650887BE524EBFB3193CC797(L_8, G_B2_2, G_B2_1, G_B2_0, /*hidden argument*/NULL);
		NullCheck(G_B2_3);
		G_B2_3->set_m_Api_3(L_8);
		// m_AsyncUpdater = new AsyncUpdater();
		AsyncUpdater_tFD9C5192022FBF96B90534567B298522D66D78B2 * L_9 = (AsyncUpdater_tFD9C5192022FBF96B90534567B298522D66D78B2 *)il2cpp_codegen_object_new(AsyncUpdater_tFD9C5192022FBF96B90534567B298522D66D78B2_il2cpp_TypeInfo_var);
		AsyncUpdater__ctor_m780CD49926778C1BC3A90D75E7B1BAA53CA123D9(L_9, /*hidden argument*/NULL);
		__this->set_m_AsyncUpdater_4(L_9);
		// m_SkinTemp = new AsyncValue<double>(m_AsyncUpdater, -1.0, 2.7f, () => GetHighPrecisionSkinTempLevel());
		AsyncUpdater_tFD9C5192022FBF96B90534567B298522D66D78B2 * L_10 = __this->get_m_AsyncUpdater_4();
		Func_1_t5B109BB44B407A255786F7DB10BD317EFFAA5C63 * L_11 = (Func_1_t5B109BB44B407A255786F7DB10BD317EFFAA5C63 *)il2cpp_codegen_object_new(Func_1_t5B109BB44B407A255786F7DB10BD317EFFAA5C63_il2cpp_TypeInfo_var);
		Func_1__ctor_mCEE9371173A8ABF1AFE6B116EB1127082F7A4B0E(L_11, __this, (intptr_t)((intptr_t)SamsungGameSDKAdaptivePerformanceSubsystem_U3C_ctorU3Eb__24_1_mA464F51A61826EF0FD17ECAEBFFFEB30C7C31454_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_mCEE9371173A8ABF1AFE6B116EB1127082F7A4B0E_RuntimeMethod_var);
		AsyncValue_1_t15F502DBC70872D99B55432A512A864625B26F15 * L_12 = (AsyncValue_1_t15F502DBC70872D99B55432A512A864625B26F15 *)il2cpp_codegen_object_new(AsyncValue_1_t15F502DBC70872D99B55432A512A864625B26F15_il2cpp_TypeInfo_var);
		AsyncValue_1__ctor_m407CE0C35BC9C978585D744C8EB8BC31D59BFB3D(L_12, L_10, (-1.0), (2.70000005f), L_11, /*hidden argument*/AsyncValue_1__ctor_m407CE0C35BC9C978585D744C8EB8BC31D59BFB3D_RuntimeMethod_var);
		__this->set_m_SkinTemp_7(L_12);
		// m_GPUTime = new AsyncValue<double>(m_AsyncUpdater, -1.0, 0.0f, () => m_Api.GetGpuFrameTime());
		AsyncUpdater_tFD9C5192022FBF96B90534567B298522D66D78B2 * L_13 = __this->get_m_AsyncUpdater_4();
		Func_1_t5B109BB44B407A255786F7DB10BD317EFFAA5C63 * L_14 = (Func_1_t5B109BB44B407A255786F7DB10BD317EFFAA5C63 *)il2cpp_codegen_object_new(Func_1_t5B109BB44B407A255786F7DB10BD317EFFAA5C63_il2cpp_TypeInfo_var);
		Func_1__ctor_mCEE9371173A8ABF1AFE6B116EB1127082F7A4B0E(L_14, __this, (intptr_t)((intptr_t)SamsungGameSDKAdaptivePerformanceSubsystem_U3C_ctorU3Eb__24_2_m942BF526AEC01E266DF84AAD14D26C80DC5044D6_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_mCEE9371173A8ABF1AFE6B116EB1127082F7A4B0E_RuntimeMethod_var);
		AsyncValue_1_t15F502DBC70872D99B55432A512A864625B26F15 * L_15 = (AsyncValue_1_t15F502DBC70872D99B55432A512A864625B26F15 *)il2cpp_codegen_object_new(AsyncValue_1_t15F502DBC70872D99B55432A512A864625B26F15_il2cpp_TypeInfo_var);
		AsyncValue_1__ctor_m407CE0C35BC9C978585D744C8EB8BC31D59BFB3D(L_15, L_13, (-1.0), (0.0f), L_14, /*hidden argument*/AsyncValue_1__ctor_m407CE0C35BC9C978585D744C8EB8BC31D59BFB3D_RuntimeMethod_var);
		__this->set_m_GPUTime_8(L_15);
		// Capabilities = Feature.CpuPerformanceLevel | Feature.GpuPerformanceLevel | Feature.PerformanceLevelControl | Feature.TemperatureLevel | Feature.WarningLevel | Feature.GpuFrameTime;
		AdaptivePerformanceSubsystem_set_Capabilities_mF23CD425E540211D811415BC365B8B1E366A871E_inline(__this, ((int32_t)123), /*hidden argument*/NULL);
		// m_AsyncUpdater.Start();
		AsyncUpdater_tFD9C5192022FBF96B90534567B298522D66D78B2 * L_16 = __this->get_m_AsyncUpdater_4();
		NullCheck(L_16);
		AsyncUpdater_Start_mD42A9C6567F15AD9A22A3BF79AFBD4356EBE5F03(L_16, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem::OnPerformanceWarning(UnityEngine.AdaptivePerformance.WarningLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungGameSDKAdaptivePerformanceSubsystem_OnPerformanceWarning_m166520178329E91FBC95073845B37D7675F7D98B (SamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C * __this, int32_t ___warningLevel0, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// lock (m_DataLock)
		RuntimeObject * L_0 = __this->get_m_DataLock_6();
		V_0 = L_0;
		V_1 = (bool)0;
	}

IL_0009:
	try
	{// begin try (depth: 1)
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_1, (bool*)(&V_1), /*hidden argument*/NULL);
		// m_Data.ChangeFlags |= Feature.WarningLevel;
		PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 * L_2 = __this->get_address_of_m_Data_5();
		PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 * L_3 = L_2;
		int32_t L_4;
		L_4 = PerformanceDataRecord_get_ChangeFlags_mC5F321C8B1FE45A2B8006EF6BAC115A98951D986_inline((PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 *)L_3, /*hidden argument*/NULL);
		PerformanceDataRecord_set_ChangeFlags_mB0DC1EED75676328BDE9B4A26BA5640A289CC588_inline((PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 *)L_3, ((int32_t)((int32_t)L_4|(int32_t)1)), /*hidden argument*/NULL);
		// m_Data.ChangeFlags |= Feature.PerformanceLevelControl;
		PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 * L_5 = __this->get_address_of_m_Data_5();
		PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 * L_6 = L_5;
		int32_t L_7;
		L_7 = PerformanceDataRecord_get_ChangeFlags_mC5F321C8B1FE45A2B8006EF6BAC115A98951D986_inline((PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 *)L_6, /*hidden argument*/NULL);
		PerformanceDataRecord_set_ChangeFlags_mB0DC1EED75676328BDE9B4A26BA5640A289CC588_inline((PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 *)L_6, ((int32_t)((int32_t)L_7|(int32_t)((int32_t)32))), /*hidden argument*/NULL);
		// m_Data.WarningLevel = warningLevel;
		PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 * L_8 = __this->get_address_of_m_Data_5();
		int32_t L_9 = ___warningLevel0;
		PerformanceDataRecord_set_WarningLevel_m2DB9AD544AE5D331DAFE1C48368C9FA1B49C4C57_inline((PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 *)L_8, L_9, /*hidden argument*/NULL);
		// }
		IL2CPP_LEAVE(0x50, FINALLY_0046);
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0046;
	}

FINALLY_0046:
	{// begin finally (depth: 1)
		{
			bool L_10 = V_1;
			if (!L_10)
			{
				goto IL_004f;
			}
		}

IL_0049:
		{
			RuntimeObject * L_11 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_11, /*hidden argument*/NULL);
		}

IL_004f:
		{
			IL2CPP_END_FINALLY(70)
		}
	}// end finally (depth: 1)
	IL2CPP_CLEANUP(70)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x50, IL_0050)
	}

IL_0050:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem::OnPerformanceLevelTimeout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungGameSDKAdaptivePerformanceSubsystem_OnPerformanceLevelTimeout_m97613DEB8B73D555EFD8E69548F35592D85A0B52 (SamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// lock (m_DataLock)
		RuntimeObject * L_0 = __this->get_m_DataLock_6();
		V_0 = L_0;
		V_1 = (bool)0;
	}

IL_0009:
	try
	{// begin try (depth: 1)
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_1, (bool*)(&V_1), /*hidden argument*/NULL);
		// m_Data.ChangeFlags |= Feature.CpuPerformanceLevel;
		PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 * L_2 = __this->get_address_of_m_Data_5();
		PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 * L_3 = L_2;
		int32_t L_4;
		L_4 = PerformanceDataRecord_get_ChangeFlags_mC5F321C8B1FE45A2B8006EF6BAC115A98951D986_inline((PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 *)L_3, /*hidden argument*/NULL);
		PerformanceDataRecord_set_ChangeFlags_mB0DC1EED75676328BDE9B4A26BA5640A289CC588_inline((PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 *)L_3, ((int32_t)((int32_t)L_4|(int32_t)8)), /*hidden argument*/NULL);
		// m_Data.ChangeFlags |= Feature.GpuPerformanceLevel;
		PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 * L_5 = __this->get_address_of_m_Data_5();
		PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 * L_6 = L_5;
		int32_t L_7;
		L_7 = PerformanceDataRecord_get_ChangeFlags_mC5F321C8B1FE45A2B8006EF6BAC115A98951D986_inline((PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 *)L_6, /*hidden argument*/NULL);
		PerformanceDataRecord_set_ChangeFlags_mB0DC1EED75676328BDE9B4A26BA5640A289CC588_inline((PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 *)L_6, ((int32_t)((int32_t)L_7|(int32_t)((int32_t)16))), /*hidden argument*/NULL);
		// m_Data.CpuPerformanceLevel = Constants.UnknownPerformanceLevel;
		PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 * L_8 = __this->get_address_of_m_Data_5();
		PerformanceDataRecord_set_CpuPerformanceLevel_mC0AE860D4BE810163256F7858E7ABCE42717F1BE_inline((PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 *)L_8, (-1), /*hidden argument*/NULL);
		// m_Data.GpuPerformanceLevel = Constants.UnknownPerformanceLevel;
		PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 * L_9 = __this->get_address_of_m_Data_5();
		PerformanceDataRecord_set_GpuPerformanceLevel_m275CAD6DC74E064DCF2AC3200674F6F6824BEFF6_inline((PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 *)L_9, (-1), /*hidden argument*/NULL);
		// }
		IL2CPP_LEAVE(0x5C, FINALLY_0052);
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0052;
	}

FINALLY_0052:
	{// begin finally (depth: 1)
		{
			bool L_10 = V_1;
			if (!L_10)
			{
				goto IL_005b;
			}
		}

IL_0055:
		{
			RuntimeObject * L_11 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_11, /*hidden argument*/NULL);
		}

IL_005b:
		{
			IL2CPP_END_FINALLY(82)
		}
	}// end finally (depth: 1)
	IL2CPP_CLEANUP(82)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x5C, IL_005c)
	}

IL_005c:
	{
		// }
		return;
	}
}
// System.Single UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem::GetHighPrecisionSkinTempLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SamsungGameSDKAdaptivePerformanceSubsystem_GetHighPrecisionSkinTempLevel_m54E85094F29116A75905D416F22DDE2BBE625FB9 (SamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C * __this, const RuntimeMethod* method)
{
	{
		// return (float)m_Api.GetHighPrecisionSkinTempLevel();
		NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123 * L_0 = __this->get_m_Api_3();
		NullCheck(L_0);
		double L_1;
		L_1 = NativeApi_GetHighPrecisionSkinTempLevel_m06BE434946DF3D1BE8F17477FB68D0CDEB68378B(L_0, /*hidden argument*/NULL);
		return ((float)((float)L_1));
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem::ImmediateUpdateTemperature()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungGameSDKAdaptivePerformanceSubsystem_ImmediateUpdateTemperature_mF0DA23A954554D2489B0F678093C2B34FFD519DC (SamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncValue_1_SyncUpdate_mA03A49DEA9F9924DC08440A5A3DD4A66E850933F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	RuntimeObject * V_1 = NULL;
	bool V_2 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// var timestamp = Time.time;
		float L_0;
		L_0 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		V_0 = L_0;
		// m_SkinTemp.SyncUpdate(timestamp);
		AsyncValue_1_t15F502DBC70872D99B55432A512A864625B26F15 * L_1 = __this->get_m_SkinTemp_7();
		float L_2 = V_0;
		NullCheck(L_1);
		AsyncValue_1_SyncUpdate_mA03A49DEA9F9924DC08440A5A3DD4A66E850933F(L_1, L_2, /*hidden argument*/AsyncValue_1_SyncUpdate_mA03A49DEA9F9924DC08440A5A3DD4A66E850933F_RuntimeMethod_var);
		// lock (m_DataLock)
		RuntimeObject * L_3 = __this->get_m_DataLock_6();
		V_1 = L_3;
		V_2 = (bool)0;
	}

IL_001b:
	try
	{// begin try (depth: 1)
		RuntimeObject * L_4 = V_1;
		Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_4, (bool*)(&V_2), /*hidden argument*/NULL);
		// m_Data.ChangeFlags |= Feature.TemperatureLevel;
		PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 * L_5 = __this->get_address_of_m_Data_5();
		PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 * L_6 = L_5;
		int32_t L_7;
		L_7 = PerformanceDataRecord_get_ChangeFlags_mC5F321C8B1FE45A2B8006EF6BAC115A98951D986_inline((PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 *)L_6, /*hidden argument*/NULL);
		PerformanceDataRecord_set_ChangeFlags_mB0DC1EED75676328BDE9B4A26BA5640A289CC588_inline((PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 *)L_6, ((int32_t)((int32_t)L_7|(int32_t)2)), /*hidden argument*/NULL);
		// m_Data.TemperatureLevel = GetTemperatureLevel();
		PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 * L_8 = __this->get_address_of_m_Data_5();
		float L_9;
		L_9 = SamsungGameSDKAdaptivePerformanceSubsystem_GetTemperatureLevel_m8B7BE751EAA95A7C8ECFEED3DD0B0C308967E142(__this, /*hidden argument*/NULL);
		PerformanceDataRecord_set_TemperatureLevel_mD76D4B33A2B613DF248F510337819E9CDBF86837_inline((PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 *)L_8, L_9, /*hidden argument*/NULL);
		// }
		IL2CPP_LEAVE(0x53, FINALLY_0049);
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0049;
	}

FINALLY_0049:
	{// begin finally (depth: 1)
		{
			bool L_10 = V_2;
			if (!L_10)
			{
				goto IL_0052;
			}
		}

IL_004c:
		{
			RuntimeObject * L_11 = V_1;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_11, /*hidden argument*/NULL);
		}

IL_0052:
		{
			IL2CPP_END_FINALLY(73)
		}
	}// end finally (depth: 1)
	IL2CPP_CLEANUP(73)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x53, IL_0053)
	}

IL_0053:
	{
		// }
		return;
	}
}
// System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem::TryParseVersion(System.String,System.Version&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SamsungGameSDKAdaptivePerformanceSubsystem_TryParseVersion_m7E2199B70BD439C46CA726D3006271F11ED91B08 (String_t* ___versionString0, Version_tBDAEDED25425A1D09910468B8BD1759115646E3C ** ___version1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Version_tBDAEDED25425A1D09910468B8BD1759115646E3C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;

IL_0000:
	try
	{// begin try (depth: 1)
		// version = new Version(versionString);
		Version_tBDAEDED25425A1D09910468B8BD1759115646E3C ** L_0 = ___version1;
		String_t* L_1 = ___versionString0;
		Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * L_2 = (Version_tBDAEDED25425A1D09910468B8BD1759115646E3C *)il2cpp_codegen_object_new(Version_tBDAEDED25425A1D09910468B8BD1759115646E3C_il2cpp_TypeInfo_var);
		Version__ctor_mB484853E49F58F771DF106B7BDC92E49ACE3DAAE(L_2, L_1, /*hidden argument*/NULL);
		*((RuntimeObject **)L_0) = (RuntimeObject *)L_2;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_0, (void*)(RuntimeObject *)L_2);
		// }
		goto IL_0012;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_000a;
		}
		throw e;
	}

CATCH_000a:
	{// begin catch(System.Exception)
		// catch (Exception)
		// version = null;
		Version_tBDAEDED25425A1D09910468B8BD1759115646E3C ** L_3 = ___version1;
		*((RuntimeObject **)L_3) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_3, (void*)(RuntimeObject *)NULL);
		// return false;
		V_0 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0014;
	}// end catch (depth: 1)

IL_0012:
	{
		// return true;
		return (bool)1;
	}

IL_0014:
	{
		// }
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungGameSDKAdaptivePerformanceSubsystem_Start_mB0ABFA9C12CC8FFE4C360E0FE2748055B46710E2 (SamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SamsungGameSDKAdaptivePerformanceSubsystem_CheckInitialTemperatureAndSendWarnings_m3B06FE8E8244F98252796E587924CE36B718F789_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Version_tBDAEDED25425A1D09910468B8BD1759115646E3C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_Api.Initialize())
		NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123 * L_0 = __this->get_m_Api_3();
		NullCheck(L_0);
		bool L_1;
		L_1 = NativeApi_Initialize_m8F89BB8CBA29CFDDBCA2F894E824B1D8F6107F08(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0082;
		}
	}
	{
		// if (TryParseVersion(m_Api.GetVersion(), out m_Version))
		NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123 * L_2 = __this->get_m_Api_3();
		NullCheck(L_2);
		String_t* L_3;
		L_3 = NativeApi_GetVersion_mAE6C662706624717B2548BBE228AF9A9878CEB52(L_2, /*hidden argument*/NULL);
		Version_tBDAEDED25425A1D09910468B8BD1759115646E3C ** L_4 = __this->get_address_of_m_Version_9();
		IL2CPP_RUNTIME_CLASS_INIT(SamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = SamsungGameSDKAdaptivePerformanceSubsystem_TryParseVersion_m7E2199B70BD439C46CA726D3006271F11ED91B08(L_3, (Version_tBDAEDED25425A1D09910468B8BD1759115646E3C **)L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0076;
		}
	}
	{
		// if (m_Version >= new Version(3, 2))
		Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * L_6 = __this->get_m_Version_9();
		Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * L_7 = (Version_tBDAEDED25425A1D09910468B8BD1759115646E3C *)il2cpp_codegen_object_new(Version_tBDAEDED25425A1D09910468B8BD1759115646E3C_il2cpp_TypeInfo_var);
		Version__ctor_mA9BC7F2404CB129697C64851406DF468B753FFDF(L_7, 3, 2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Version_tBDAEDED25425A1D09910468B8BD1759115646E3C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Version_op_GreaterThanOrEqual_m3541CE83D1E5FD5E50F8FFE4EA2984359E92754D(L_6, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0064;
		}
	}
	{
		// initialized = true;
		AdaptivePerformanceSubsystemBase_set_initialized_mA650001F7F14114A248F3B834E31499DCFB2554D_inline(__this, (bool)1, /*hidden argument*/NULL);
		// MaxCpuPerformanceLevel = m_Api.GetMaxCpuPerformanceLevel();
		NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123 * L_9 = __this->get_m_Api_3();
		NullCheck(L_9);
		int32_t L_10;
		L_10 = NativeApi_GetMaxCpuPerformanceLevel_m08DE9F2A26D577CFABC9947D76B7DDE3F9F752A2(L_9, /*hidden argument*/NULL);
		SamsungGameSDKAdaptivePerformanceSubsystem_set_MaxCpuPerformanceLevel_mD7C7AA35D50B81A48BBE3483D96631725C576D75_inline(__this, L_10, /*hidden argument*/NULL);
		// MaxGpuPerformanceLevel = m_Api.GetMaxGpuPerformanceLevel();
		NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123 * L_11 = __this->get_m_Api_3();
		NullCheck(L_11);
		int32_t L_12;
		L_12 = NativeApi_GetMaxGpuPerformanceLevel_m6728C28A5B4CA2FB1092FC612DFA2B20A4F3BC84(L_11, /*hidden argument*/NULL);
		SamsungGameSDKAdaptivePerformanceSubsystem_set_MaxGpuPerformanceLevel_mC4E2203C66BE865BBA77B688C9541E6FD21AC718_inline(__this, L_12, /*hidden argument*/NULL);
		// }
		goto IL_0076;
	}

IL_0064:
	{
		// m_Api.Terminate();
		NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123 * L_13 = __this->get_m_Api_3();
		NullCheck(L_13);
		NativeApi_Terminate_m60AA457D0C726DE97EA796CC690AD1886CDCF6B6(L_13, /*hidden argument*/NULL);
		// initialized = false;
		AdaptivePerformanceSubsystemBase_set_initialized_mA650001F7F14114A248F3B834E31499DCFB2554D_inline(__this, (bool)0, /*hidden argument*/NULL);
	}

IL_0076:
	{
		// m_Data.PerformanceLevelControlAvailable = true;
		PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 * L_14 = __this->get_address_of_m_Data_5();
		PerformanceDataRecord_set_PerformanceLevelControlAvailable_m65B14EA8893E776B2D21ABB18B49D97A82D1AF1C_inline((PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 *)L_14, (bool)1, /*hidden argument*/NULL);
	}

IL_0082:
	{
		// if (initialized)
		bool L_15;
		L_15 = AdaptivePerformanceSubsystemBase_get_initialized_mDE838BDEAF9C32DFAEBFAE92ABED9629EF6C04E8_inline(__this, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_00ac;
		}
	}
	{
		// ImmediateUpdateTemperature();
		SamsungGameSDKAdaptivePerformanceSubsystem_ImmediateUpdateTemperature_mF0DA23A954554D2489B0F678093C2B34FFD519DC(__this, /*hidden argument*/NULL);
		// Thread t = new Thread(CheckInitialTemperatureAndSendWarnings);
		ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687 * L_16 = (ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687 *)il2cpp_codegen_object_new(ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687_il2cpp_TypeInfo_var);
		ThreadStart__ctor_m360F4EED0AD96A27D6A9612BF79671F26B30411F(L_16, __this, (intptr_t)((intptr_t)SamsungGameSDKAdaptivePerformanceSubsystem_CheckInitialTemperatureAndSendWarnings_m3B06FE8E8244F98252796E587924CE36B718F789_RuntimeMethod_var), /*hidden argument*/NULL);
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_17 = (Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 *)il2cpp_codegen_object_new(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_il2cpp_TypeInfo_var);
		Thread__ctor_mF22465F0D0E47C11EF25DB552D1047402750BE90(L_17, L_16, /*hidden argument*/NULL);
		// t.Start();
		NullCheck(L_17);
		Thread_Start_m490124B23F5EFD0BB2BED8CA12C77195B9CD9E1B(L_17, /*hidden argument*/NULL);
		// CheckAndInitializeVRR();
		SamsungGameSDKAdaptivePerformanceSubsystem_CheckAndInitializeVRR_mD974BCD7A451EF243E12F1A60854E508B79E8FA0(__this, /*hidden argument*/NULL);
	}

IL_00ac:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem::CheckAndInitializeVRR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungGameSDKAdaptivePerformanceSubsystem_CheckAndInitializeVRR_mD974BCD7A451EF243E12F1A60854E508B79E8FA0 (SamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AutoVariableRefreshRate_tFF7B877BD61A8A6CB5032694D95C06CD37CC7CA9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VRRManager_tB79C0272A6886E77A12ADF1365B76758606FD1AC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_Api.IsVariableRefreshRateSupported())
		NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123 * L_0 = __this->get_m_Api_3();
		NullCheck(L_0);
		bool L_1;
		L_1 = NativeApi_IsVariableRefreshRateSupported_mA87B15DB6DBBA405B2DB772606643A73822BF0CD(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0035;
		}
	}
	{
		// if (VariableRefreshRate.Instance == null)
		RuntimeObject* L_2;
		L_2 = VariableRefreshRate_get_Instance_mEF8EA6B518B43B9ECF2F493D20AE908A66934765_inline(/*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0042;
		}
	}
	{
		// VariableRefreshRate.Instance = new VRRManager(m_Api);
		NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123 * L_3 = __this->get_m_Api_3();
		VRRManager_tB79C0272A6886E77A12ADF1365B76758606FD1AC * L_4 = (VRRManager_tB79C0272A6886E77A12ADF1365B76758606FD1AC *)il2cpp_codegen_object_new(VRRManager_tB79C0272A6886E77A12ADF1365B76758606FD1AC_il2cpp_TypeInfo_var);
		VRRManager__ctor_mEF34A0A5455B063A9B86E262EDE52CF944945818(L_4, L_3, /*hidden argument*/NULL);
		VariableRefreshRate_set_Instance_mA2EE58BBB76707BB9BF63B80898DB64E9D4D7782_inline(L_4, /*hidden argument*/NULL);
		// m_AutoVariableRefreshRate = new AutoVariableRefreshRate(VariableRefreshRate.Instance);
		RuntimeObject* L_5;
		L_5 = VariableRefreshRate_get_Instance_mEF8EA6B518B43B9ECF2F493D20AE908A66934765_inline(/*hidden argument*/NULL);
		AutoVariableRefreshRate_tFF7B877BD61A8A6CB5032694D95C06CD37CC7CA9 * L_6 = (AutoVariableRefreshRate_tFF7B877BD61A8A6CB5032694D95C06CD37CC7CA9 *)il2cpp_codegen_object_new(AutoVariableRefreshRate_tFF7B877BD61A8A6CB5032694D95C06CD37CC7CA9_il2cpp_TypeInfo_var);
		AutoVariableRefreshRate__ctor_mB257DE7F344CBD5EE8FBF50BBC60C6179E21CBBD(L_6, L_5, /*hidden argument*/NULL);
		__this->set_m_AutoVariableRefreshRate_13(L_6);
		// }
		return;
	}

IL_0035:
	{
		// VariableRefreshRate.Instance = null;
		VariableRefreshRate_set_Instance_mA2EE58BBB76707BB9BF63B80898DB64E9D4D7782_inline((RuntimeObject*)NULL, /*hidden argument*/NULL);
		// m_AutoVariableRefreshRate = null;
		__this->set_m_AutoVariableRefreshRate_13((AutoVariableRefreshRate_tFF7B877BD61A8A6CB5032694D95C06CD37CC7CA9 *)NULL);
	}

IL_0042:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem::CheckInitialTemperatureAndSendWarnings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungGameSDKAdaptivePerformanceSubsystem_CheckInitialTemperatureAndSendWarnings_m3B06FE8E8244F98252796E587924CE36B718F789 (SamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Version_tBDAEDED25425A1D09910468B8BD1759115646E3C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// Sleep(TimeSpan.FromSeconds(2));
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var);
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_0;
		L_0 = TimeSpan_FromSeconds_m4644EABECA69BC6C07AD649C5898A8E53F4FE7B0((2.0), /*hidden argument*/NULL);
		Thread_Sleep_m01243CD1CAC36D42E645D6BA4C53FEAF6B981B51(L_0, /*hidden argument*/NULL);
		// float currentTempLevel = GetHighPrecisionSkinTempLevel();
		float L_1;
		L_1 = SamsungGameSDKAdaptivePerformanceSubsystem_GetHighPrecisionSkinTempLevel_m54E85094F29116A75905D416F22DDE2BBE625FB9(__this, /*hidden argument*/NULL);
		V_0 = L_1;
		// if (m_Version >= new Version(3, 2))
		Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * L_2 = __this->get_m_Version_9();
		Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * L_3 = (Version_tBDAEDED25425A1D09910468B8BD1759115646E3C *)il2cpp_codegen_object_new(Version_tBDAEDED25425A1D09910468B8BD1759115646E3C_il2cpp_TypeInfo_var);
		Version__ctor_mA9BC7F2404CB129697C64851406DF468B753FFDF(L_3, 3, 2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Version_tBDAEDED25425A1D09910468B8BD1759115646E3C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Version_op_GreaterThanOrEqual_m3541CE83D1E5FD5E50F8FFE4EA2984359E92754D(L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_004d;
		}
	}
	{
		// if (currentTempLevel >= 7)
		float L_5 = V_0;
		if ((!(((float)L_5) >= ((float)(7.0f)))))
		{
			goto IL_003e;
		}
	}
	{
		// OnPerformanceWarning(WarningLevel.Throttling);
		SamsungGameSDKAdaptivePerformanceSubsystem_OnPerformanceWarning_m166520178329E91FBC95073845B37D7675F7D98B(__this, 2, /*hidden argument*/NULL);
		return;
	}

IL_003e:
	{
		// else if (currentTempLevel >= 5)
		float L_6 = V_0;
		if ((!(((float)L_6) >= ((float)(5.0f)))))
		{
			goto IL_004d;
		}
	}
	{
		// OnPerformanceWarning(WarningLevel.ThrottlingImminent);
		SamsungGameSDKAdaptivePerformanceSubsystem_OnPerformanceWarning_m166520178329E91FBC95073845B37D7675F7D98B(__this, 1, /*hidden argument*/NULL);
	}

IL_004d:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungGameSDKAdaptivePerformanceSubsystem_Stop_m22670D84EC64F7168B6321FA2624A419D53AA279 (SamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungGameSDKAdaptivePerformanceSubsystem_OnDestroy_m68214F6C5C58A740BCA2BB1D3BC45821D896A706 (SamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C * __this, const RuntimeMethod* method)
{
	{
		// VariableRefreshRate.Instance = null;
		VariableRefreshRate_set_Instance_mA2EE58BBB76707BB9BF63B80898DB64E9D4D7782_inline((RuntimeObject*)NULL, /*hidden argument*/NULL);
		// m_AutoVariableRefreshRate = null;
		__this->set_m_AutoVariableRefreshRate_13((AutoVariableRefreshRate_tFF7B877BD61A8A6CB5032694D95C06CD37CC7CA9 *)NULL);
		// if (initialized)
		bool L_0;
		L_0 = AdaptivePerformanceSubsystemBase_get_initialized_mDE838BDEAF9C32DFAEBFAE92ABED9629EF6C04E8_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		// m_Api.Terminate();
		NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123 * L_1 = __this->get_m_Api_3();
		NullCheck(L_1);
		NativeApi_Terminate_m60AA457D0C726DE97EA796CC690AD1886CDCF6B6(L_1, /*hidden argument*/NULL);
		// initialized = false;
		AdaptivePerformanceSubsystemBase_set_initialized_mA650001F7F14114A248F3B834E31499DCFB2554D_inline(__this, (bool)0, /*hidden argument*/NULL);
	}

IL_0027:
	{
		// m_AsyncUpdater.Dispose();
		AsyncUpdater_tFD9C5192022FBF96B90534567B298522D66D78B2 * L_2 = __this->get_m_AsyncUpdater_4();
		NullCheck(L_2);
		AsyncUpdater_Dispose_mB811937E19252FFC18BE0822ABC19D7D4A500C0D(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.String UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem::get_Stats()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SamsungGameSDKAdaptivePerformanceSubsystem_get_Stats_mE97C77EAE27B88AFB05D7C10C0BC3BDD8D71D0F0 (SamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncValue_1_get_value_mB10EA452BBD5046293C947527CD4FACB92A00922_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDE80E2AD15AB61A85DBD7C97F022E1D102ABA5B);
		s_Il2CppMethodInitialized = true;
	}
	AsyncValue_1_t15F502DBC70872D99B55432A512A864625B26F15 * G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	AsyncValue_1_t15F502DBC70872D99B55432A512A864625B26F15 * G_B1_0 = NULL;
	String_t* G_B1_1 = NULL;
	double G_B3_0 = 0.0;
	String_t* G_B3_1 = NULL;
	{
		// public override string Stats => $"SkinTemp={m_SkinTemp?.value ?? -1} GPUTime={m_GPUTime}";
		AsyncValue_1_t15F502DBC70872D99B55432A512A864625B26F15 * L_0 = __this->get_m_SkinTemp_7();
		AsyncValue_1_t15F502DBC70872D99B55432A512A864625B26F15 * L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = _stringLiteralBDE80E2AD15AB61A85DBD7C97F022E1D102ABA5B;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = _stringLiteralBDE80E2AD15AB61A85DBD7C97F022E1D102ABA5B;
			goto IL_001a;
		}
	}
	{
		G_B3_0 = (-1.0);
		G_B3_1 = G_B1_1;
		goto IL_001f;
	}

IL_001a:
	{
		NullCheck(G_B2_0);
		double L_2;
		L_2 = AsyncValue_1_get_value_mB10EA452BBD5046293C947527CD4FACB92A00922_inline(G_B2_0, /*hidden argument*/AsyncValue_1_get_value_mB10EA452BBD5046293C947527CD4FACB92A00922_RuntimeMethod_var);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_1;
	}

IL_001f:
	{
		double L_3 = G_B3_0;
		RuntimeObject * L_4 = Box(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var, &L_3);
		AsyncValue_1_t15F502DBC70872D99B55432A512A864625B26F15 * L_5 = __this->get_m_GPUTime_8();
		String_t* L_6;
		L_6 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(G_B3_1, L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.AdaptivePerformance.Provider.PerformanceDataRecord UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457  SamsungGameSDKAdaptivePerformanceSubsystem_Update_m493F1FB1A52727E0AF878134F38E4F1FE79256D1 (SamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncValue_1_Update_mF7955D2344FC21FC8BDB1EE205CE8CD4E4AC7D03_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncValue_1_get_value_mB10EA452BBD5046293C947527CD4FACB92A00922_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VRRManager_tB79C0272A6886E77A12ADF1365B76758606FD1AC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	RuntimeObject * V_2 = NULL;
	bool V_3 = false;
	PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	VRRManager_tB79C0272A6886E77A12ADF1365B76758606FD1AC * G_B2_0 = NULL;
	VRRManager_tB79C0272A6886E77A12ADF1365B76758606FD1AC * G_B1_0 = NULL;
	{
		// float timeSinceStartup = Time.time;
		float L_0;
		L_0 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		V_0 = L_0;
		// m_GPUTime.Update(timeSinceStartup);
		AsyncValue_1_t15F502DBC70872D99B55432A512A864625B26F15 * L_1 = __this->get_m_GPUTime_8();
		float L_2 = V_0;
		NullCheck(L_1);
		bool L_3;
		L_3 = AsyncValue_1_Update_mF7955D2344FC21FC8BDB1EE205CE8CD4E4AC7D03(L_1, L_2, /*hidden argument*/AsyncValue_1_Update_mF7955D2344FC21FC8BDB1EE205CE8CD4E4AC7D03_RuntimeMethod_var);
		// bool tempChanged = m_SkinTemp.Update(timeSinceStartup);
		AsyncValue_1_t15F502DBC70872D99B55432A512A864625B26F15 * L_4 = __this->get_m_SkinTemp_7();
		float L_5 = V_0;
		NullCheck(L_4);
		bool L_6;
		L_6 = AsyncValue_1_Update_mF7955D2344FC21FC8BDB1EE205CE8CD4E4AC7D03(L_4, L_5, /*hidden argument*/AsyncValue_1_Update_mF7955D2344FC21FC8BDB1EE205CE8CD4E4AC7D03_RuntimeMethod_var);
		V_1 = L_6;
		// (VariableRefreshRate.Instance as VRRManager)?.Update();
		RuntimeObject* L_7;
		L_7 = VariableRefreshRate_get_Instance_mEF8EA6B518B43B9ECF2F493D20AE908A66934765_inline(/*hidden argument*/NULL);
		VRRManager_tB79C0272A6886E77A12ADF1365B76758606FD1AC * L_8 = ((VRRManager_tB79C0272A6886E77A12ADF1365B76758606FD1AC *)IsInstClass((RuntimeObject*)L_7, VRRManager_tB79C0272A6886E77A12ADF1365B76758606FD1AC_il2cpp_TypeInfo_var));
		G_B1_0 = L_8;
		if (L_8)
		{
			G_B2_0 = L_8;
			goto IL_0030;
		}
	}
	{
		goto IL_0035;
	}

IL_0030:
	{
		NullCheck(G_B2_0);
		VRRManager_Update_mB395B3B20FDB532B695DB80117CC29EEACC479C8(G_B2_0, /*hidden argument*/NULL);
	}

IL_0035:
	{
		// if ((VariableRefreshRate.Instance as VRRManager) != null && settings.automaticVRR)
		RuntimeObject* L_9;
		L_9 = VariableRefreshRate_get_Instance_mEF8EA6B518B43B9ECF2F493D20AE908A66934765_inline(/*hidden argument*/NULL);
		if (!((VRRManager_tB79C0272A6886E77A12ADF1365B76758606FD1AC *)IsInstClass((RuntimeObject*)L_9, VRRManager_tB79C0272A6886E77A12ADF1365B76758606FD1AC_il2cpp_TypeInfo_var)))
		{
			goto IL_005f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C_il2cpp_TypeInfo_var);
		SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A * L_10 = ((SamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C_StaticFields*)il2cpp_codegen_static_fields_for(SamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C_il2cpp_TypeInfo_var))->get_settings_16();
		NullCheck(L_10);
		bool L_11;
		L_11 = SamsungAndroidProviderSettings_get_automaticVRR_m4221B3258B342205B45B533671E17B29B81A6686_inline(L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_005f;
		}
	}
	{
		// if (QualitySettings.vSyncCount == 0)
		int32_t L_12;
		L_12 = QualitySettings_get_vSyncCount_m00DC32AF7052D3BFF7EB5C384D5EA45BE0B98520(/*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_005f;
		}
	}
	{
		// m_AutoVariableRefreshRate.UpdateAutoVRR();
		AutoVariableRefreshRate_tFF7B877BD61A8A6CB5032694D95C06CD37CC7CA9 * L_13 = __this->get_m_AutoVariableRefreshRate_13();
		NullCheck(L_13);
		AutoVariableRefreshRate_UpdateAutoVRR_mA8A923AD4152614FDB01CBF1317CE4CA5A1F3798(L_13, /*hidden argument*/NULL);
	}

IL_005f:
	{
		// if (m_PerformanceLevelControlSystemChange)
		bool L_14 = __this->get_m_PerformanceLevelControlSystemChange_12();
		if (!L_14)
		{
			goto IL_00be;
		}
	}
	{
		// var temperatureLevel = (float)m_SkinTemp.value;
		AsyncValue_1_t15F502DBC70872D99B55432A512A864625B26F15 * L_15 = __this->get_m_SkinTemp_7();
		NullCheck(L_15);
		double L_16;
		L_16 = AsyncValue_1_get_value_mB10EA452BBD5046293C947527CD4FACB92A00922_inline(L_15, /*hidden argument*/AsyncValue_1_get_value_mB10EA452BBD5046293C947527CD4FACB92A00922_RuntimeMethod_var);
		// if (temperatureLevel < 5)
		if ((!(((float)((float)((float)L_16))) < ((float)(5.0f)))))
		{
			goto IL_00be;
		}
	}
	{
		// m_PerformanceLevelControlSystemChange = false;
		__this->set_m_PerformanceLevelControlSystemChange_12((bool)0);
		// lock (m_DataLock)
		RuntimeObject * L_17 = __this->get_m_DataLock_6();
		V_2 = L_17;
		V_3 = (bool)0;
	}

IL_008a:
	try
	{// begin try (depth: 1)
		RuntimeObject * L_18 = V_2;
		Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_18, (bool*)(&V_3), /*hidden argument*/NULL);
		// m_Data.PerformanceLevelControlAvailable = true;
		PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 * L_19 = __this->get_address_of_m_Data_5();
		PerformanceDataRecord_set_PerformanceLevelControlAvailable_m65B14EA8893E776B2D21ABB18B49D97A82D1AF1C_inline((PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 *)L_19, (bool)1, /*hidden argument*/NULL);
		// m_Data.ChangeFlags |= Feature.PerformanceLevelControl;
		PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 * L_20 = __this->get_address_of_m_Data_5();
		PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 * L_21 = L_20;
		int32_t L_22;
		L_22 = PerformanceDataRecord_get_ChangeFlags_mC5F321C8B1FE45A2B8006EF6BAC115A98951D986_inline((PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 *)L_21, /*hidden argument*/NULL);
		PerformanceDataRecord_set_ChangeFlags_mB0DC1EED75676328BDE9B4A26BA5640A289CC588_inline((PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 *)L_21, ((int32_t)((int32_t)L_22|(int32_t)((int32_t)32))), /*hidden argument*/NULL);
		// }
		IL2CPP_LEAVE(0xBE, FINALLY_00b4);
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00b4;
	}

FINALLY_00b4:
	{// begin finally (depth: 1)
		{
			bool L_23 = V_3;
			if (!L_23)
			{
				goto IL_00bd;
			}
		}

IL_00b7:
		{
			RuntimeObject * L_24 = V_2;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_24, /*hidden argument*/NULL);
		}

IL_00bd:
		{
			IL2CPP_END_FINALLY(180)
		}
	}// end finally (depth: 1)
	IL2CPP_CLEANUP(180)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xBE, IL_00be)
	}

IL_00be:
	{
		// lock (m_DataLock)
		RuntimeObject * L_25 = __this->get_m_DataLock_6();
		V_2 = L_25;
		V_3 = (bool)0;
	}

IL_00c7:
	try
	{// begin try (depth: 1)
		{
			RuntimeObject * L_26 = V_2;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_26, (bool*)(&V_3), /*hidden argument*/NULL);
			// if (tempChanged)
			bool L_27 = V_1;
			if (!L_27)
			{
				goto IL_00f6;
			}
		}

IL_00d2:
		{
			// m_Data.ChangeFlags |= Feature.TemperatureLevel;
			PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 * L_28 = __this->get_address_of_m_Data_5();
			PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 * L_29 = L_28;
			int32_t L_30;
			L_30 = PerformanceDataRecord_get_ChangeFlags_mC5F321C8B1FE45A2B8006EF6BAC115A98951D986_inline((PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 *)L_29, /*hidden argument*/NULL);
			PerformanceDataRecord_set_ChangeFlags_mB0DC1EED75676328BDE9B4A26BA5640A289CC588_inline((PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 *)L_29, ((int32_t)((int32_t)L_30|(int32_t)2)), /*hidden argument*/NULL);
			// m_Data.TemperatureLevel = GetTemperatureLevel();
			PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 * L_31 = __this->get_address_of_m_Data_5();
			float L_32;
			L_32 = SamsungGameSDKAdaptivePerformanceSubsystem_GetTemperatureLevel_m8B7BE751EAA95A7C8ECFEED3DD0B0C308967E142(__this, /*hidden argument*/NULL);
			PerformanceDataRecord_set_TemperatureLevel_mD76D4B33A2B613DF248F510337819E9CDBF86837_inline((PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 *)L_31, L_32, /*hidden argument*/NULL);
		}

IL_00f6:
		{
			// m_Data.GpuFrameTime = LatestGpuFrameTime();
			PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 * L_33 = __this->get_address_of_m_Data_5();
			float L_34;
			L_34 = SamsungGameSDKAdaptivePerformanceSubsystem_LatestGpuFrameTime_mF6159BD4F817CE5AD774B05006C256A0740C6AE6(__this, /*hidden argument*/NULL);
			PerformanceDataRecord_set_GpuFrameTime_mA7EEAA1D8ECBF75147158304A3941FDA752E2DA7_inline((PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 *)L_33, L_34, /*hidden argument*/NULL);
			// m_Data.ChangeFlags |= Feature.GpuFrameTime;
			PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 * L_35 = __this->get_address_of_m_Data_5();
			PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 * L_36 = L_35;
			int32_t L_37;
			L_37 = PerformanceDataRecord_get_ChangeFlags_mC5F321C8B1FE45A2B8006EF6BAC115A98951D986_inline((PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 *)L_36, /*hidden argument*/NULL);
			PerformanceDataRecord_set_ChangeFlags_mB0DC1EED75676328BDE9B4A26BA5640A289CC588_inline((PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 *)L_36, ((int32_t)((int32_t)L_37|(int32_t)((int32_t)64))), /*hidden argument*/NULL);
			// PerformanceDataRecord result = m_Data;
			PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457  L_38 = __this->get_m_Data_5();
			// m_Data.ChangeFlags = Feature.None;
			PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 * L_39 = __this->get_address_of_m_Data_5();
			PerformanceDataRecord_set_ChangeFlags_mB0DC1EED75676328BDE9B4A26BA5640A289CC588_inline((PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 *)L_39, 0, /*hidden argument*/NULL);
			// return result;
			V_4 = L_38;
			IL2CPP_LEAVE(0x13B, FINALLY_0131);
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0131;
	}

FINALLY_0131:
	{// begin finally (depth: 1)
		{
			bool L_40 = V_3;
			if (!L_40)
			{
				goto IL_013a;
			}
		}

IL_0134:
		{
			RuntimeObject * L_41 = V_2;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_41, /*hidden argument*/NULL);
		}

IL_013a:
		{
			IL2CPP_END_FINALLY(305)
		}
	}// end finally (depth: 1)
	IL2CPP_CLEANUP(305)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x13B, IL_013b)
	}

IL_013b:
	{
		// }
		PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457  L_42 = V_4;
		return L_42;
	}
}
// System.Version UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem::get_Version()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * SamsungGameSDKAdaptivePerformanceSubsystem_get_Version_mC108F5ECA600093A3CD203A5C1814B7D72E51EBC (SamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C * __this, const RuntimeMethod* method)
{
	{
		// return m_Version;
		Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * L_0 = __this->get_m_Version_9();
		return L_0;
	}
}
// System.Single UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem::NormalizeTemperatureLevel(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SamsungGameSDKAdaptivePerformanceSubsystem_NormalizeTemperatureLevel_m5A22308DD5337B04CD5F01BA3285C863C19919C6 (float ___currentTempLevel0, float ___minValue1, float ___maxValue2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// float tempLevel = -1.0f;
		V_0 = (-1.0f);
		// if (currentTempLevel >= minValue && currentTempLevel <= maxValue)
		float L_0 = ___currentTempLevel0;
		float L_1 = ___minValue1;
		if ((!(((float)L_0) >= ((float)L_1))))
		{
			goto IL_0024;
		}
	}
	{
		float L_2 = ___currentTempLevel0;
		float L_3 = ___maxValue2;
		if ((!(((float)L_2) <= ((float)L_3))))
		{
			goto IL_0024;
		}
	}
	{
		// tempLevel = currentTempLevel / maxValue;
		float L_4 = ___currentTempLevel0;
		float L_5 = ___maxValue2;
		V_0 = ((float)((float)L_4/(float)L_5));
		// tempLevel = Math.Min(Math.Max(tempLevel, Constants.MinTemperatureLevel), maxValue);
		float L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		float L_7;
		L_7 = Math_Max_mEB87839DA28310AE4CB81A94D551874CFC2B1247(L_6, (0.0f), /*hidden argument*/NULL);
		float L_8 = ___maxValue2;
		float L_9;
		L_9 = Math_Min_mED21323DC72FBF9A825FD4210D4B9D693CE87FCF(L_7, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
	}

IL_0024:
	{
		// return tempLevel;
		float L_10 = V_0;
		return L_10;
	}
}
// System.Single UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem::NormalizeTemperatureLevel(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SamsungGameSDKAdaptivePerformanceSubsystem_NormalizeTemperatureLevel_m969AAE72F42261CCB977B4A18FE8601DD76BAEA8 (SamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C * __this, float ___currentTempLevel0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return NormalizeTemperatureLevel(currentTempLevel, m_MinTempLevel, m_MaxTempLevel);
		float L_0 = ___currentTempLevel0;
		float L_1 = __this->get_m_MinTempLevel_10();
		float L_2 = __this->get_m_MaxTempLevel_11();
		IL2CPP_RUNTIME_CLASS_INIT(SamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C_il2cpp_TypeInfo_var);
		float L_3;
		L_3 = SamsungGameSDKAdaptivePerformanceSubsystem_NormalizeTemperatureLevel_m5A22308DD5337B04CD5F01BA3285C863C19919C6(L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Single UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem::GetTemperatureLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SamsungGameSDKAdaptivePerformanceSubsystem_GetTemperatureLevel_m8B7BE751EAA95A7C8ECFEED3DD0B0C308967E142 (SamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncValue_1_get_value_mB10EA452BBD5046293C947527CD4FACB92A00922_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return NormalizeTemperatureLevel((float)m_SkinTemp.value);
		AsyncValue_1_t15F502DBC70872D99B55432A512A864625B26F15 * L_0 = __this->get_m_SkinTemp_7();
		NullCheck(L_0);
		double L_1;
		L_1 = AsyncValue_1_get_value_mB10EA452BBD5046293C947527CD4FACB92A00922_inline(L_0, /*hidden argument*/AsyncValue_1_get_value_mB10EA452BBD5046293C947527CD4FACB92A00922_RuntimeMethod_var);
		float L_2;
		L_2 = SamsungGameSDKAdaptivePerformanceSubsystem_NormalizeTemperatureLevel_m969AAE72F42261CCB977B4A18FE8601DD76BAEA8(__this, ((float)((float)L_1)), /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Single UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem::LatestGpuFrameTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SamsungGameSDKAdaptivePerformanceSubsystem_LatestGpuFrameTime_mF6159BD4F817CE5AD774B05006C256A0740C6AE6 (SamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncValue_1_get_value_mB10EA452BBD5046293C947527CD4FACB92A00922_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (float)(m_GPUTime.value / 1000.0);
		AsyncValue_1_t15F502DBC70872D99B55432A512A864625B26F15 * L_0 = __this->get_m_GPUTime_8();
		NullCheck(L_0);
		double L_1;
		L_1 = AsyncValue_1_get_value_mB10EA452BBD5046293C947527CD4FACB92A00922_inline(L_0, /*hidden argument*/AsyncValue_1_get_value_mB10EA452BBD5046293C947527CD4FACB92A00922_RuntimeMethod_var);
		return ((float)((float)((double)((double)L_1/(double)(1000.0)))));
	}
}
// System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem::SetPerformanceLevel(System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SamsungGameSDKAdaptivePerformanceSubsystem_SetPerformanceLevel_mC2D218AD622302FA059AA5ADB0791A6D2FD39A82 (SamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C * __this, int32_t* ___cpuLevel0, int32_t* ___gpuLevel1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Version_tBDAEDED25425A1D09910468B8BD1759115646E3C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	RuntimeObject * V_2 = NULL;
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 * G_B14_0 = NULL;
	PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 * G_B13_0 = NULL;
	int32_t G_B15_0 = 0;
	PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 * G_B15_1 = NULL;
	PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 * G_B17_0 = NULL;
	PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 * G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 * G_B18_1 = NULL;
	{
		// if (cpuLevel < 0)
		int32_t* L_0 = ___cpuLevel0;
		int32_t L_1 = *((int32_t*)L_0);
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_000a;
		}
	}
	{
		// cpuLevel = 0;
		int32_t* L_2 = ___cpuLevel0;
		*((int32_t*)L_2) = (int32_t)0;
		goto IL_001c;
	}

IL_000a:
	{
		// else if (cpuLevel > MaxCpuPerformanceLevel)
		int32_t* L_3 = ___cpuLevel0;
		int32_t L_4 = *((int32_t*)L_3);
		int32_t L_5;
		L_5 = SamsungGameSDKAdaptivePerformanceSubsystem_get_MaxCpuPerformanceLevel_m176AD6DD52A90769BD504009C172D895113B0D2D_inline(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_4) <= ((int32_t)L_5)))
		{
			goto IL_001c;
		}
	}
	{
		// cpuLevel = MaxCpuPerformanceLevel;
		int32_t* L_6 = ___cpuLevel0;
		int32_t L_7;
		L_7 = SamsungGameSDKAdaptivePerformanceSubsystem_get_MaxCpuPerformanceLevel_m176AD6DD52A90769BD504009C172D895113B0D2D_inline(__this, /*hidden argument*/NULL);
		*((int32_t*)L_6) = (int32_t)L_7;
	}

IL_001c:
	{
		// if (gpuLevel < 0)
		int32_t* L_8 = ___gpuLevel1;
		int32_t L_9 = *((int32_t*)L_8);
		if ((((int32_t)L_9) >= ((int32_t)0)))
		{
			goto IL_0026;
		}
	}
	{
		// gpuLevel = 0;
		int32_t* L_10 = ___gpuLevel1;
		*((int32_t*)L_10) = (int32_t)0;
		goto IL_0038;
	}

IL_0026:
	{
		// else if (gpuLevel > MaxGpuPerformanceLevel)
		int32_t* L_11 = ___gpuLevel1;
		int32_t L_12 = *((int32_t*)L_11);
		int32_t L_13;
		L_13 = SamsungGameSDKAdaptivePerformanceSubsystem_get_MaxGpuPerformanceLevel_m848ABADDEB3EDBE03F3626AE166EF8CB7E4CC464_inline(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_12) <= ((int32_t)L_13)))
		{
			goto IL_0038;
		}
	}
	{
		// gpuLevel = MaxGpuPerformanceLevel;
		int32_t* L_14 = ___gpuLevel1;
		int32_t L_15;
		L_15 = SamsungGameSDKAdaptivePerformanceSubsystem_get_MaxGpuPerformanceLevel_m848ABADDEB3EDBE03F3626AE166EF8CB7E4CC464_inline(__this, /*hidden argument*/NULL);
		*((int32_t*)L_14) = (int32_t)L_15;
	}

IL_0038:
	{
		// if (m_Version == new Version(3, 2) && cpuLevel == 0)
		Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * L_16 = __this->get_m_Version_9();
		Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * L_17 = (Version_tBDAEDED25425A1D09910468B8BD1759115646E3C *)il2cpp_codegen_object_new(Version_tBDAEDED25425A1D09910468B8BD1759115646E3C_il2cpp_TypeInfo_var);
		Version__ctor_mA9BC7F2404CB129697C64851406DF468B753FFDF(L_17, 3, 2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Version_tBDAEDED25425A1D09910468B8BD1759115646E3C_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Version_op_Equality_mB8525AD6D098EE54D9E0E5C9046F24B5CB197662(L_16, L_17, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_0053;
		}
	}
	{
		int32_t* L_19 = ___cpuLevel0;
		int32_t L_20 = *((int32_t*)L_19);
		if (L_20)
		{
			goto IL_0053;
		}
	}
	{
		// cpuLevel = 1;
		int32_t* L_21 = ___cpuLevel0;
		*((int32_t*)L_21) = (int32_t)1;
	}

IL_0053:
	{
		// bool success = false;
		V_0 = (bool)0;
		// int result = m_Api.SetFreqLevels(cpuLevel, gpuLevel);
		NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123 * L_22 = __this->get_m_Api_3();
		int32_t* L_23 = ___cpuLevel0;
		int32_t L_24 = *((int32_t*)L_23);
		int32_t* L_25 = ___gpuLevel1;
		int32_t L_26 = *((int32_t*)L_25);
		NullCheck(L_22);
		int32_t L_27;
		L_27 = NativeApi_SetFreqLevels_m98592288D664AD0D1B5D6EB2C2FFBA71D4B8A198(L_22, L_24, L_26, /*hidden argument*/NULL);
		V_1 = L_27;
		// success = result == 1;
		int32_t L_28 = V_1;
		V_0 = (bool)((((int32_t)L_28) == ((int32_t)1))? 1 : 0);
		// lock (m_DataLock)
		RuntimeObject * L_29 = __this->get_m_DataLock_6();
		V_2 = L_29;
		V_3 = (bool)0;
	}

IL_0073:
	try
	{// begin try (depth: 1)
		{
			RuntimeObject * L_30 = V_2;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_30, (bool*)(&V_3), /*hidden argument*/NULL);
			// var oldCpuLevel = m_Data.CpuPerformanceLevel;
			PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 * L_31 = __this->get_address_of_m_Data_5();
			int32_t L_32;
			L_32 = PerformanceDataRecord_get_CpuPerformanceLevel_m5347895DB794F91B4CE64C6E3795A51FD2B85E0D_inline((PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 *)L_31, /*hidden argument*/NULL);
			V_4 = L_32;
			// var oldGpuLevel = m_Data.GpuPerformanceLevel;
			PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 * L_33 = __this->get_address_of_m_Data_5();
			int32_t L_34;
			L_34 = PerformanceDataRecord_get_GpuPerformanceLevel_mA7D3F637ABB320066197C9615F85F828F59DB874_inline((PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 *)L_33, /*hidden argument*/NULL);
			V_5 = L_34;
			// m_Data.CpuPerformanceLevel = success ? cpuLevel : Constants.UnknownPerformanceLevel;
			PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 * L_35 = __this->get_address_of_m_Data_5();
			bool L_36 = V_0;
			G_B13_0 = L_35;
			if (L_36)
			{
				G_B14_0 = L_35;
				goto IL_00a1;
			}
		}

IL_009e:
		{
			G_B15_0 = (-1);
			G_B15_1 = G_B13_0;
			goto IL_00a3;
		}

IL_00a1:
		{
			int32_t* L_37 = ___cpuLevel0;
			int32_t L_38 = *((int32_t*)L_37);
			G_B15_0 = L_38;
			G_B15_1 = G_B14_0;
		}

IL_00a3:
		{
			PerformanceDataRecord_set_CpuPerformanceLevel_mC0AE860D4BE810163256F7858E7ABCE42717F1BE_inline((PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 *)G_B15_1, G_B15_0, /*hidden argument*/NULL);
			// m_Data.GpuPerformanceLevel = success ? gpuLevel : Constants.UnknownPerformanceLevel;
			PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 * L_39 = __this->get_address_of_m_Data_5();
			bool L_40 = V_0;
			G_B16_0 = L_39;
			if (L_40)
			{
				G_B17_0 = L_39;
				goto IL_00b4;
			}
		}

IL_00b1:
		{
			G_B18_0 = (-1);
			G_B18_1 = G_B16_0;
			goto IL_00b6;
		}

IL_00b4:
		{
			int32_t* L_41 = ___gpuLevel1;
			int32_t L_42 = *((int32_t*)L_41);
			G_B18_0 = L_42;
			G_B18_1 = G_B17_0;
		}

IL_00b6:
		{
			PerformanceDataRecord_set_GpuPerformanceLevel_m275CAD6DC74E064DCF2AC3200674F6F6824BEFF6_inline((PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 *)G_B18_1, G_B18_0, /*hidden argument*/NULL);
			// if (m_Data.CpuPerformanceLevel != oldCpuLevel)
			PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 * L_43 = __this->get_address_of_m_Data_5();
			int32_t L_44;
			L_44 = PerformanceDataRecord_get_CpuPerformanceLevel_m5347895DB794F91B4CE64C6E3795A51FD2B85E0D_inline((PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 *)L_43, /*hidden argument*/NULL);
			int32_t L_45 = V_4;
			if ((((int32_t)L_44) == ((int32_t)L_45)))
			{
				goto IL_00dd;
			}
		}

IL_00ca:
		{
			// m_Data.ChangeFlags |= Feature.CpuPerformanceLevel;
			PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 * L_46 = __this->get_address_of_m_Data_5();
			PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 * L_47 = L_46;
			int32_t L_48;
			L_48 = PerformanceDataRecord_get_ChangeFlags_mC5F321C8B1FE45A2B8006EF6BAC115A98951D986_inline((PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 *)L_47, /*hidden argument*/NULL);
			PerformanceDataRecord_set_ChangeFlags_mB0DC1EED75676328BDE9B4A26BA5640A289CC588_inline((PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 *)L_47, ((int32_t)((int32_t)L_48|(int32_t)8)), /*hidden argument*/NULL);
		}

IL_00dd:
		{
			// if (m_Data.GpuPerformanceLevel != oldGpuLevel)
			PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 * L_49 = __this->get_address_of_m_Data_5();
			int32_t L_50;
			L_50 = PerformanceDataRecord_get_GpuPerformanceLevel_mA7D3F637ABB320066197C9615F85F828F59DB874_inline((PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 *)L_49, /*hidden argument*/NULL);
			int32_t L_51 = V_5;
			if ((((int32_t)L_50) == ((int32_t)L_51)))
			{
				goto IL_0100;
			}
		}

IL_00ec:
		{
			// m_Data.ChangeFlags |= Feature.GpuPerformanceLevel;
			PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 * L_52 = __this->get_address_of_m_Data_5();
			PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 * L_53 = L_52;
			int32_t L_54;
			L_54 = PerformanceDataRecord_get_ChangeFlags_mC5F321C8B1FE45A2B8006EF6BAC115A98951D986_inline((PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 *)L_53, /*hidden argument*/NULL);
			PerformanceDataRecord_set_ChangeFlags_mB0DC1EED75676328BDE9B4A26BA5640A289CC588_inline((PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 *)L_53, ((int32_t)((int32_t)L_54|(int32_t)((int32_t)16))), /*hidden argument*/NULL);
		}

IL_0100:
		{
			// if (result == 2)
			int32_t L_55 = V_1;
			if ((!(((uint32_t)L_55) == ((uint32_t)2))))
			{
				goto IL_012b;
			}
		}

IL_0104:
		{
			// m_Data.PerformanceLevelControlAvailable = false;
			PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 * L_56 = __this->get_address_of_m_Data_5();
			PerformanceDataRecord_set_PerformanceLevelControlAvailable_m65B14EA8893E776B2D21ABB18B49D97A82D1AF1C_inline((PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 *)L_56, (bool)0, /*hidden argument*/NULL);
			// m_Data.ChangeFlags |= Feature.PerformanceLevelControl;
			PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 * L_57 = __this->get_address_of_m_Data_5();
			PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 * L_58 = L_57;
			int32_t L_59;
			L_59 = PerformanceDataRecord_get_ChangeFlags_mC5F321C8B1FE45A2B8006EF6BAC115A98951D986_inline((PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 *)L_58, /*hidden argument*/NULL);
			PerformanceDataRecord_set_ChangeFlags_mB0DC1EED75676328BDE9B4A26BA5640A289CC588_inline((PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 *)L_58, ((int32_t)((int32_t)L_59|(int32_t)((int32_t)32))), /*hidden argument*/NULL);
			// m_PerformanceLevelControlSystemChange = true;
			__this->set_m_PerformanceLevelControlSystemChange_12((bool)1);
		}

IL_012b:
		{
			// }
			IL2CPP_LEAVE(0x137, FINALLY_012d);
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_012d;
	}

FINALLY_012d:
	{// begin finally (depth: 1)
		{
			bool L_60 = V_3;
			if (!L_60)
			{
				goto IL_0136;
			}
		}

IL_0130:
		{
			RuntimeObject * L_61 = V_2;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_61, /*hidden argument*/NULL);
		}

IL_0136:
		{
			IL2CPP_END_FINALLY(301)
		}
	}// end finally (depth: 1)
	IL2CPP_CLEANUP(301)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x137, IL_0137)
	}

IL_0137:
	{
		// return success;
		bool L_62 = V_0;
		return L_62;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem::ApplicationPause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungGameSDKAdaptivePerformanceSubsystem_ApplicationPause_mF1112CD0A1BFF3779C0FCEAE5D03AE702E352FEA (SamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C * __this, const RuntimeMethod* method)
{
	{
		// public void ApplicationPause() {}
		return;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem::ApplicationResume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungGameSDKAdaptivePerformanceSubsystem_ApplicationResume_m9032177532038B9B412F81B0B8517C698D4879E5 (SamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VRRManager_tB79C0272A6886E77A12ADF1365B76758606FD1AC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	VRRManager_tB79C0272A6886E77A12ADF1365B76758606FD1AC * G_B7_0 = NULL;
	VRRManager_tB79C0272A6886E77A12ADF1365B76758606FD1AC * G_B6_0 = NULL;
	{
		// if (!m_Api.Initialize())
		NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123 * L_0 = __this->get_m_Api_3();
		NullCheck(L_0);
		bool L_1;
		L_1 = NativeApi_Initialize_m8F89BB8CBA29CFDDBCA2F894E824B1D8F6107F08(L_0, /*hidden argument*/NULL);
		// lock (m_DataLock)
		RuntimeObject * L_2 = __this->get_m_DataLock_6();
		V_0 = L_2;
		V_1 = (bool)0;
	}

IL_0015:
	try
	{// begin try (depth: 1)
		RuntimeObject * L_3 = V_0;
		Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_3, (bool*)(&V_1), /*hidden argument*/NULL);
		// m_Data.CpuPerformanceLevel = Constants.UnknownPerformanceLevel;
		PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 * L_4 = __this->get_address_of_m_Data_5();
		PerformanceDataRecord_set_CpuPerformanceLevel_mC0AE860D4BE810163256F7858E7ABCE42717F1BE_inline((PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 *)L_4, (-1), /*hidden argument*/NULL);
		// m_Data.GpuPerformanceLevel = Constants.UnknownPerformanceLevel;
		PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 * L_5 = __this->get_address_of_m_Data_5();
		PerformanceDataRecord_set_GpuPerformanceLevel_m275CAD6DC74E064DCF2AC3200674F6F6824BEFF6_inline((PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 *)L_5, (-1), /*hidden argument*/NULL);
		// m_Data.ChangeFlags |= Feature.CpuPerformanceLevel;
		PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 * L_6 = __this->get_address_of_m_Data_5();
		PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 * L_7 = L_6;
		int32_t L_8;
		L_8 = PerformanceDataRecord_get_ChangeFlags_mC5F321C8B1FE45A2B8006EF6BAC115A98951D986_inline((PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 *)L_7, /*hidden argument*/NULL);
		PerformanceDataRecord_set_ChangeFlags_mB0DC1EED75676328BDE9B4A26BA5640A289CC588_inline((PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 *)L_7, ((int32_t)((int32_t)L_8|(int32_t)8)), /*hidden argument*/NULL);
		// m_Data.ChangeFlags |= Feature.GpuPerformanceLevel;
		PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 * L_9 = __this->get_address_of_m_Data_5();
		PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 * L_10 = L_9;
		int32_t L_11;
		L_11 = PerformanceDataRecord_get_ChangeFlags_mC5F321C8B1FE45A2B8006EF6BAC115A98951D986_inline((PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 *)L_10, /*hidden argument*/NULL);
		PerformanceDataRecord_set_ChangeFlags_mB0DC1EED75676328BDE9B4A26BA5640A289CC588_inline((PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 *)L_10, ((int32_t)((int32_t)L_11|(int32_t)((int32_t)16))), /*hidden argument*/NULL);
		// }
		IL2CPP_LEAVE(0x68, FINALLY_005e);
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_005e;
	}

FINALLY_005e:
	{// begin finally (depth: 1)
		{
			bool L_12 = V_1;
			if (!L_12)
			{
				goto IL_0067;
			}
		}

IL_0061:
		{
			RuntimeObject * L_13 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_13, /*hidden argument*/NULL);
		}

IL_0067:
		{
			IL2CPP_END_FINALLY(94)
		}
	}// end finally (depth: 1)
	IL2CPP_CLEANUP(94)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x68, IL_0068)
	}

IL_0068:
	{
		// ImmediateUpdateTemperature();
		SamsungGameSDKAdaptivePerformanceSubsystem_ImmediateUpdateTemperature_mF0DA23A954554D2489B0F678093C2B34FFD519DC(__this, /*hidden argument*/NULL);
		// CheckAndInitializeVRR();
		SamsungGameSDKAdaptivePerformanceSubsystem_CheckAndInitializeVRR_mD974BCD7A451EF243E12F1A60854E508B79E8FA0(__this, /*hidden argument*/NULL);
		// (VariableRefreshRate.Instance as VRRManager)?.Resume();
		RuntimeObject* L_14;
		L_14 = VariableRefreshRate_get_Instance_mEF8EA6B518B43B9ECF2F493D20AE908A66934765_inline(/*hidden argument*/NULL);
		VRRManager_tB79C0272A6886E77A12ADF1365B76758606FD1AC * L_15 = ((VRRManager_tB79C0272A6886E77A12ADF1365B76758606FD1AC *)IsInstClass((RuntimeObject*)L_14, VRRManager_tB79C0272A6886E77A12ADF1365B76758606FD1AC_il2cpp_TypeInfo_var));
		G_B6_0 = L_15;
		if (L_15)
		{
			G_B7_0 = L_15;
			goto IL_0083;
		}
	}
	{
		return;
	}

IL_0083:
	{
		NullCheck(G_B7_0);
		VRRManager_Resume_mE193A16D23DE02C96E77C3404DC1E7D2F9340916(G_B7_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem::RegisterDescriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungGameSDKAdaptivePerformanceSubsystem_RegisterDescriptor_mFF31F0C2CDBE4E58E656FC6AC9EF0180777F493D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA789C1A58CA8F1B51679B983874466E76B48EFB3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE02D43BFB3611F4411DD21848B293789A2B1B8D6);
		s_Il2CppMethodInitialized = true;
	}
	Cinfo_t343E1319F64BFAAB6A935377090A355E67211F2B  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (!SystemInfo.deviceModel.StartsWith("samsung", StringComparison.OrdinalIgnoreCase))
		String_t* L_0;
		L_0 = SystemInfo_get_deviceModel_m99131C20271BDA64F3A537AA009B252DCEDC5977(/*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = String_StartsWith_mEA750A0572C706249CDD826681741B7DD733381E(L_0, _stringLiteralA789C1A58CA8F1B51679B983874466E76B48EFB3, 5, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		// return;
		return;
	}

IL_0013:
	{
		// if (!NativeApi.IsAvailable())
		IL2CPP_RUNTIME_CLASS_INIT(NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = NativeApi_IsAvailable_mBEDDDF68572CBF4B7FD497DB7E6419F1C427EE9F(/*hidden argument*/NULL);
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
		// AdaptivePerformanceSubsystemDescriptor.RegisterDescriptor(new AdaptivePerformanceSubsystemDescriptor.Cinfo
		// {
		//     id = "SamsungGameSDK",
		//     subsystemImplementationType = typeof(SamsungGameSDKAdaptivePerformanceSubsystem)
		// });
		il2cpp_codegen_initobj((&V_0), sizeof(Cinfo_t343E1319F64BFAAB6A935377090A355E67211F2B ));
		Cinfo_set_id_m8AF0A1044992B420D9D28DBDB141B92256847BFA_inline((Cinfo_t343E1319F64BFAAB6A935377090A355E67211F2B *)(&V_0), _stringLiteralE02D43BFB3611F4411DD21848B293789A2B1B8D6, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_3 = { reinterpret_cast<intptr_t> (SamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4;
		L_4 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_3, /*hidden argument*/NULL);
		Cinfo_set_subsystemImplementationType_m697DC61FEB48A3F81FC6A9FCDDD46E796F6E5342_inline((Cinfo_t343E1319F64BFAAB6A935377090A355E67211F2B *)(&V_0), L_4, /*hidden argument*/NULL);
		Cinfo_t343E1319F64BFAAB6A935377090A355E67211F2B  L_5 = V_0;
		AdaptivePerformanceSubsystemDescriptor_t08DC609A273D4C0D10E8130646B7B147AEA5AD71 * L_6;
		L_6 = AdaptivePerformanceSubsystemDescriptor_RegisterDescriptor_mB1B46BAC930737076C97CCC54389FF72C7B80A8A(L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungGameSDKAdaptivePerformanceSubsystem__cctor_mC735C6364DD1AB4DE4AAD6FF302EE65B5CFDE739 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static SamsungAndroidProviderSettings settings = SamsungAndroidProviderSettings.GetSettings();
		IL2CPP_RUNTIME_CLASS_INIT(SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A_il2cpp_TypeInfo_var);
		SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A * L_0;
		L_0 = SamsungAndroidProviderSettings_GetSettings_m5F3D48F7276BAC793B6E1B0174B71E8010BC5EDA_inline(/*hidden argument*/NULL);
		((SamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C_StaticFields*)il2cpp_codegen_static_fields_for(SamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C_il2cpp_TypeInfo_var))->set_settings_16(L_0);
		return;
	}
}
// System.Double UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem::<.ctor>b__24_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double SamsungGameSDKAdaptivePerformanceSubsystem_U3C_ctorU3Eb__24_1_mA464F51A61826EF0FD17ECAEBFFFEB30C7C31454 (SamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C * __this, const RuntimeMethod* method)
{
	{
		// m_SkinTemp = new AsyncValue<double>(m_AsyncUpdater, -1.0, 2.7f, () => GetHighPrecisionSkinTempLevel());
		float L_0;
		L_0 = SamsungGameSDKAdaptivePerformanceSubsystem_GetHighPrecisionSkinTempLevel_m54E85094F29116A75905D416F22DDE2BBE625FB9(__this, /*hidden argument*/NULL);
		return ((double)((double)L_0));
	}
}
// System.Double UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem::<.ctor>b__24_2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double SamsungGameSDKAdaptivePerformanceSubsystem_U3C_ctorU3Eb__24_2_m942BF526AEC01E266DF84AAD14D26C80DC5044D6 (SamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C * __this, const RuntimeMethod* method)
{
	{
		// m_GPUTime = new AsyncValue<double>(m_AsyncUpdater, -1.0, 0.0f, () => m_Api.GetGpuFrameTime());
		NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123 * L_0 = __this->get_m_Api_3();
		NullCheck(L_0);
		double L_1;
		L_1 = NativeApi_GetGpuFrameTime_mD633FDC3F93D5D12E797274F544A2F89E713EFFE(L_0, /*hidden argument*/NULL);
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
// UnityEngine.AdaptivePerformance.Samsung.Android.IVariableRefreshRate UnityEngine.AdaptivePerformance.Samsung.Android.VariableRefreshRate::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VariableRefreshRate_get_Instance_mEF8EA6B518B43B9ECF2F493D20AE908A66934765 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VariableRefreshRate_t57603D16D53370D4A4A0485DA7D22C0D9980C9BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static public IVariableRefreshRate Instance { get; set; }
		RuntimeObject* L_0 = ((VariableRefreshRate_t57603D16D53370D4A4A0485DA7D22C0D9980C9BD_StaticFields*)il2cpp_codegen_static_fields_for(VariableRefreshRate_t57603D16D53370D4A4A0485DA7D22C0D9980C9BD_il2cpp_TypeInfo_var))->get_U3CInstanceU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.VariableRefreshRate::set_Instance(UnityEngine.AdaptivePerformance.Samsung.Android.IVariableRefreshRate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableRefreshRate_set_Instance_mA2EE58BBB76707BB9BF63B80898DB64E9D4D7782 (RuntimeObject* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VariableRefreshRate_t57603D16D53370D4A4A0485DA7D22C0D9980C9BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static public IVariableRefreshRate Instance { get; set; }
		RuntimeObject* L_0 = ___value0;
		((VariableRefreshRate_t57603D16D53370D4A4A0485DA7D22C0D9980C9BD_StaticFields*)il2cpp_codegen_static_fields_for(VariableRefreshRate_t57603D16D53370D4A4A0485DA7D22C0D9980C9BD_il2cpp_TypeInfo_var))->set_U3CInstanceU3Ek__BackingField_0(L_0);
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_VariableRefreshRateEventHandler_t06D300F6DD7FDB78D3404003A1C81A149DBFAC83 (VariableRefreshRateEventHandler_t06D300F6DD7FDB78D3404003A1C81A149DBFAC83 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.VariableRefreshRateEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableRefreshRateEventHandler__ctor_mE2BC720F515C20D25FC2ED862998C3D072CB2230 (VariableRefreshRateEventHandler_t06D300F6DD7FDB78D3404003A1C81A149DBFAC83 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.VariableRefreshRateEventHandler::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableRefreshRateEventHandler_Invoke_mE450A684864C914BB2E39BF846FC5895B32084B6 (VariableRefreshRateEventHandler_t06D300F6DD7FDB78D3404003A1C81A149DBFAC83 * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
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
		if (!currentDelegate->get_method_is_virtual_10())
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
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
		}
	}
}
// System.IAsyncResult UnityEngine.AdaptivePerformance.Samsung.Android.VariableRefreshRateEventHandler::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VariableRefreshRateEventHandler_BeginInvoke_m7D0DF5E64153831C5C0B742ED9D933DD8121389E (VariableRefreshRateEventHandler_t06D300F6DD7FDB78D3404003A1C81A149DBFAC83 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.VariableRefreshRateEventHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableRefreshRateEventHandler_EndInvoke_m92C0AB3623EE5CCE4AE2F1A65EE119D8FDAB7062 (VariableRefreshRateEventHandler_t06D300F6DD7FDB78D3404003A1C81A149DBFAC83 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m4E2F5BE1BCD92BD20D0E0293F198D0ED5F4B76DB (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t903A2F07E9B1E2A8D05C639D8A6E16A5D888A0DC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t903A2F07E9B1E2A8D05C639D8A6E16A5D888A0DC * L_0 = (U3CU3Ec_t903A2F07E9B1E2A8D05C639D8A6E16A5D888A0DC *)il2cpp_codegen_object_new(U3CU3Ec_t903A2F07E9B1E2A8D05C639D8A6E16A5D888A0DC_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m6034644DBC6037DF39774B156BBE11B92B73D104(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t903A2F07E9B1E2A8D05C639D8A6E16A5D888A0DC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t903A2F07E9B1E2A8D05C639D8A6E16A5D888A0DC_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m6034644DBC6037DF39774B156BBE11B92B73D104 (U3CU3Ec_t903A2F07E9B1E2A8D05C639D8A6E16A5D888A0DC * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/<>c::<.ctor>b__24_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__24_0_mE0A3F07346D922C855303808B247FB775F546813 (U3CU3Ec_t903A2F07E9B1E2A8D05C639D8A6E16A5D888A0DC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VRRManager_tB79C0272A6886E77A12ADF1365B76758606FD1AC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	VRRManager_tB79C0272A6886E77A12ADF1365B76758606FD1AC * G_B2_0 = NULL;
	VRRManager_tB79C0272A6886E77A12ADF1365B76758606FD1AC * G_B1_0 = NULL;
	{
		// m_Api = new NativeApi(OnPerformanceWarning, OnPerformanceLevelTimeout, () => (VariableRefreshRate.Instance as VRRManager)?.OnRefreshRateChanged());
		RuntimeObject* L_0;
		L_0 = VariableRefreshRate_get_Instance_mEF8EA6B518B43B9ECF2F493D20AE908A66934765_inline(/*hidden argument*/NULL);
		VRRManager_tB79C0272A6886E77A12ADF1365B76758606FD1AC * L_1 = ((VRRManager_tB79C0272A6886E77A12ADF1365B76758606FD1AC *)IsInstClass((RuntimeObject*)L_0, VRRManager_tB79C0272A6886E77A12ADF1365B76758606FD1AC_il2cpp_TypeInfo_var));
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
	}
	{
		return;
	}

IL_000f:
	{
		NullCheck(G_B2_0);
		VRRManager_OnRefreshRateChanged_m81C98F65D566943F3094926E406ECE057C006149(G_B2_0, /*hidden argument*/NULL);
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
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/AutoVariableRefreshRate::.ctor(UnityEngine.AdaptivePerformance.Samsung.Android.IVariableRefreshRate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutoVariableRefreshRate__ctor_mB257DE7F344CBD5EE8FBF50BBC60C6179E21CBBD (AutoVariableRefreshRate_tFF7B877BD61A8A6CB5032694D95C06CD37CC7CA9 * __this, RuntimeObject* ___vrrManagerInstance0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SamsungAndroidProviderSettings settings = SamsungAndroidProviderSettings.GetSettings();
		IL2CPP_RUNTIME_CLASS_INIT(SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A_il2cpp_TypeInfo_var);
		SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A * L_0;
		L_0 = SamsungAndroidProviderSettings_GetSettings_m5F3D48F7276BAC793B6E1B0174B71E8010BC5EDA_inline(/*hidden argument*/NULL);
		__this->set_settings_0(L_0);
		// float VrrUpdateTime = 1;
		__this->set_VrrUpdateTime_2((1.0f));
		// int lastRefreshRateIndex = -1;
		__this->set_lastRefreshRateIndex_3((-1));
		// public AutoVariableRefreshRate(IVariableRefreshRate vrrManagerInstance)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// vrrManager = vrrManagerInstance;
		RuntimeObject* L_1 = ___vrrManagerInstance0;
		__this->set_vrrManager_1(L_1);
		// }
		return;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/AutoVariableRefreshRate::UpdateAutoVRR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutoVariableRefreshRate_UpdateAutoVRR_mA8A923AD4152614FDB01CBF1317CE4CA5A1F3798 (AutoVariableRefreshRate_tFF7B877BD61A8A6CB5032694D95C06CD37CC7CA9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVariableRefreshRate_tDE89F043B8996572722116FCB1A8BC2EB4B3DD77_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// VrrUpdateTime -= Time.unscaledDeltaTime;
		float L_0 = __this->get_VrrUpdateTime_2();
		float L_1;
		L_1 = Time_get_unscaledDeltaTime_m2C153F1E5C77C6AF655054BC6C76D0C334C0DC84(/*hidden argument*/NULL);
		__this->set_VrrUpdateTime_2(((float)il2cpp_codegen_subtract((float)L_0, (float)L_1)));
		// if (VrrUpdateTime <= 0)
		float L_2 = __this->get_VrrUpdateTime_2();
		if ((!(((float)L_2) <= ((float)(0.0f)))))
		{
			goto IL_009b;
		}
	}
	{
		// VrrUpdateTime = 1;
		__this->set_VrrUpdateTime_2((1.0f));
		// var refreshRateIndex = vrrManager.SupportedRefreshRates.Length - 1;
		RuntimeObject* L_3 = __this->get_vrrManager_1();
		NullCheck(L_3);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_4;
		L_4 = InterfaceFuncInvoker0< Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* >::Invoke(0 /* System.Int32[] UnityEngine.AdaptivePerformance.Samsung.Android.IVariableRefreshRate::get_SupportedRefreshRates() */, IVariableRefreshRate_tDE89F043B8996572722116FCB1A8BC2EB4B3DD77_il2cpp_TypeInfo_var, L_3);
		NullCheck(L_4);
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))), (int32_t)1));
		// if (Application.targetFrameRate > 0)
		int32_t L_5;
		L_5 = Application_get_targetFrameRate_m2BB711703471EC6C1E1B11A714B9005BB92C1E71(/*hidden argument*/NULL);
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0072;
		}
	}
	{
		// for (int i = 0; i < vrrManager.SupportedRefreshRates.Length; ++i)
		V_1 = 0;
		goto IL_0062;
	}

IL_0046:
	{
		// if (Application.targetFrameRate > vrrManager.SupportedRefreshRates[i])
		int32_t L_6;
		L_6 = Application_get_targetFrameRate_m2BB711703471EC6C1E1B11A714B9005BB92C1E71(/*hidden argument*/NULL);
		RuntimeObject* L_7 = __this->get_vrrManager_1();
		NullCheck(L_7);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_8;
		L_8 = InterfaceFuncInvoker0< Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* >::Invoke(0 /* System.Int32[] UnityEngine.AdaptivePerformance.Samsung.Android.IVariableRefreshRate::get_SupportedRefreshRates() */, IVariableRefreshRate_tDE89F043B8996572722116FCB1A8BC2EB4B3DD77_il2cpp_TypeInfo_var, L_7);
		int32_t L_9 = V_1;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		int32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		if ((((int32_t)L_6) > ((int32_t)L_11)))
		{
			goto IL_005e;
		}
	}
	{
		// refreshRateIndex = i;
		int32_t L_12 = V_1;
		V_0 = L_12;
		// break;
		goto IL_0072;
	}

IL_005e:
	{
		// for (int i = 0; i < vrrManager.SupportedRefreshRates.Length; ++i)
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_0062:
	{
		// for (int i = 0; i < vrrManager.SupportedRefreshRates.Length; ++i)
		int32_t L_14 = V_1;
		RuntimeObject* L_15 = __this->get_vrrManager_1();
		NullCheck(L_15);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_16;
		L_16 = InterfaceFuncInvoker0< Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* >::Invoke(0 /* System.Int32[] UnityEngine.AdaptivePerformance.Samsung.Android.IVariableRefreshRate::get_SupportedRefreshRates() */, IVariableRefreshRate_tDE89F043B8996572722116FCB1A8BC2EB4B3DD77_il2cpp_TypeInfo_var, L_15);
		NullCheck(L_16);
		if ((((int32_t)L_14) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length))))))
		{
			goto IL_0046;
		}
	}

IL_0072:
	{
		// if (lastRefreshRateIndex != refreshRateIndex)
		int32_t L_17 = __this->get_lastRefreshRateIndex_3();
		int32_t L_18 = V_0;
		if ((((int32_t)L_17) == ((int32_t)L_18)))
		{
			goto IL_009b;
		}
	}
	{
		// lastRefreshRateIndex = refreshRateIndex;
		int32_t L_19 = V_0;
		__this->set_lastRefreshRateIndex_3(L_19);
		// vrrManager.SetRefreshRateByIndex(refreshRateIndex);
		RuntimeObject* L_20 = __this->get_vrrManager_1();
		int32_t L_21 = V_0;
		NullCheck(L_20);
		bool L_22;
		L_22 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(2 /* System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.IVariableRefreshRate::SetRefreshRateByIndex(System.Int32) */, IVariableRefreshRate_tDE89F043B8996572722116FCB1A8BC2EB4B3DD77_il2cpp_TypeInfo_var, L_20, L_21);
		// settings.automaticVRR = true;
		SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A * L_23 = __this->get_settings_0();
		NullCheck(L_23);
		SamsungAndroidProviderSettings_set_automaticVRR_mB8D70EDEEE0B7E821C6CF92D8592B3CF382AAD5C_inline(L_23, (bool)1, /*hidden argument*/NULL);
	}

IL_009b:
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
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/NativeApi::.ctor(System.Action`1<UnityEngine.AdaptivePerformance.WarningLevel>,System.Action,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi__ctor_m59391FFED30BEA83650887BE524EBFB3193CC797 (NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123 * __this, Action_1_t8C4711099B422DAD7EA49F9E5395372F09F28C82 * ___sustainedPerformanceWarning0, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___sustainedPerformanceTimeout1, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___refreshRateChanged2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B5485AAFD0F88488213FA21BAC0D600944F8265);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base("com.samsung.android.gamesdk.GameSDKManager$Listener")
		IL2CPP_RUNTIME_CLASS_INIT(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_il2cpp_TypeInfo_var);
		AndroidJavaProxy__ctor_m1E8F4C0D87B74B81C64A54A584B2FF4ECE571238(__this, _stringLiteral5B5485AAFD0F88488213FA21BAC0D600944F8265, /*hidden argument*/NULL);
		// PerformanceWarningEvent = sustainedPerformanceWarning;
		Action_1_t8C4711099B422DAD7EA49F9E5395372F09F28C82 * L_0 = ___sustainedPerformanceWarning0;
		__this->set_PerformanceWarningEvent_10(L_0);
		// PerformanceLevelTimeoutEvent = sustainedPerformanceTimeout;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = ___sustainedPerformanceTimeout1;
		__this->set_PerformanceLevelTimeoutEvent_11(L_1);
		// RefreshRateChangedEvent = refreshRateChanged;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = ___refreshRateChanged2;
		__this->set_RefreshRateChangedEvent_12(L_2);
		// StaticInit();
		IL2CPP_RUNTIME_CLASS_INIT(NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_il2cpp_TypeInfo_var);
		NativeApi_StaticInit_m6E6D92E8CDEE31EDEDEFC254A951998F4ACAFE23(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/NativeApi::onHighTempWarning(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_onHighTempWarning_m82AA022D5332B51A1631EAABF95005B9BFB54B84 (NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123 * __this, int32_t ___warningLevel0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m4825F6DA818BEB3BE4B7723C9370E86B49E9763D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (warningLevel == 0)
		int32_t L_0 = ___warningLevel0;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		// PerformanceWarningEvent(WarningLevel.NoWarning);
		Action_1_t8C4711099B422DAD7EA49F9E5395372F09F28C82 * L_1 = __this->get_PerformanceWarningEvent_10();
		NullCheck(L_1);
		Action_1_Invoke_m4825F6DA818BEB3BE4B7723C9370E86B49E9763D(L_1, 0, /*hidden argument*/Action_1_Invoke_m4825F6DA818BEB3BE4B7723C9370E86B49E9763D_RuntimeMethod_var);
		return;
	}

IL_0010:
	{
		// else if (warningLevel == 1)
		int32_t L_2 = ___warningLevel0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_0021;
		}
	}
	{
		// PerformanceWarningEvent(WarningLevel.ThrottlingImminent);
		Action_1_t8C4711099B422DAD7EA49F9E5395372F09F28C82 * L_3 = __this->get_PerformanceWarningEvent_10();
		NullCheck(L_3);
		Action_1_Invoke_m4825F6DA818BEB3BE4B7723C9370E86B49E9763D(L_3, 1, /*hidden argument*/Action_1_Invoke_m4825F6DA818BEB3BE4B7723C9370E86B49E9763D_RuntimeMethod_var);
		return;
	}

IL_0021:
	{
		// else if (warningLevel == 2)
		int32_t L_4 = ___warningLevel0;
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_0031;
		}
	}
	{
		// PerformanceWarningEvent(WarningLevel.Throttling);
		Action_1_t8C4711099B422DAD7EA49F9E5395372F09F28C82 * L_5 = __this->get_PerformanceWarningEvent_10();
		NullCheck(L_5);
		Action_1_Invoke_m4825F6DA818BEB3BE4B7723C9370E86B49E9763D(L_5, 2, /*hidden argument*/Action_1_Invoke_m4825F6DA818BEB3BE4B7723C9370E86B49E9763D_RuntimeMethod_var);
	}

IL_0031:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/NativeApi::onReleasedByTimeout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_onReleasedByTimeout_mB9A9976355205539E9E0C9F0B0687CE8A3B83820 (NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123 * __this, const RuntimeMethod* method)
{
	{
		// PerformanceLevelTimeoutEvent();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_PerformanceLevelTimeoutEvent_11();
		NullCheck(L_0);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/NativeApi::onRefreshRateChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_onRefreshRateChanged_mE2CEAC4091B648A6254DC68F764C2EC8C70E8F63 (NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123 * __this, const RuntimeMethod* method)
{
	{
		// RefreshRateChangedEvent();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_RefreshRateChangedEvent_12();
		NullCheck(L_0);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.IntPtr UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/NativeApi::GetJavaMethodID(System.IntPtr,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeApi_GetJavaMethodID_mF408D0BA9992AFB69114C1860C8BAD4E87617638 (intptr_t ___classId0, String_t* ___name1, String_t* ___sig2, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// AndroidJNI.ExceptionClear();
		AndroidJNI_ExceptionClear_mE1961C9BD4984AF52712BFF181B6B95F435531B7(/*hidden argument*/NULL);
		// var mid = AndroidJNI.GetMethodID(classId, name, sig);
		intptr_t L_0 = ___classId0;
		String_t* L_1 = ___name1;
		String_t* L_2 = ___sig2;
		intptr_t L_3;
		L_3 = AndroidJNI_GetMethodID_m4A0DBC91C300B8F342333561BA237258E12D0A3B((intptr_t)L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_3;
		// IntPtr ex = AndroidJNI.ExceptionOccurred();
		intptr_t L_4;
		L_4 = AndroidJNI_ExceptionOccurred_m347473FDF70118E17D092961232E7EAF0BCF2991(/*hidden argument*/NULL);
		// if (ex != (IntPtr)0)
		intptr_t L_5;
		L_5 = IntPtr_op_Explicit_m9092E57CE669E7B9CCDCF5ADD6DFB758D6545FBF(0, /*hidden argument*/NULL);
		bool L_6;
		L_6 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_4, (intptr_t)L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0031;
		}
	}
	{
		// AndroidJNI.ExceptionDescribe();
		AndroidJNI_ExceptionDescribe_mA46A449AEF75F9433FBCFC60C9FB9BD80A738C68(/*hidden argument*/NULL);
		// AndroidJNI.ExceptionClear();
		AndroidJNI_ExceptionClear_mE1961C9BD4984AF52712BFF181B6B95F435531B7(/*hidden argument*/NULL);
		// return (IntPtr)0;
		intptr_t L_7;
		L_7 = IntPtr_op_Explicit_m9092E57CE669E7B9CCDCF5ADD6DFB758D6545FBF(0, /*hidden argument*/NULL);
		return (intptr_t)L_7;
	}

IL_0031:
	{
		// return mid;
		intptr_t L_8 = V_0;
		return (intptr_t)L_8;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/NativeApi::StaticInit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_StaticInit_m6E6D92E8CDEE31EDEDEFC254A951998F4ACAFE23 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m4AA284A03F0D5D003114D60C705B8A54274C74DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m002765312BF306B1B3B5BFAB9550C0A2A1820CDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral110C230ECC11791A56E51CE07FE5E6FD5A78178A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral74C185339ADE6B87DA245E0CBDFD66891CC43F54);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDAD4FD80C1A0A39AD74FD88700D89B9595B8D595);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB8C132238F9E774E6E9E180238DA0A65C25145C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEEC7732C32C4E0262755BF931431F792DE2E0033);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// if (s_GameSDK == null)
		IL2CPP_RUNTIME_CLASS_INIT(NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_il2cpp_TypeInfo_var);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = ((NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_il2cpp_TypeInfo_var))->get_s_GameSDK_4();
		if (L_0)
		{
			goto IL_00c2;
		}
	}

IL_000a:
	try
	{// begin try (depth: 1)
		{
			// s_GameSDK = new AndroidJavaObject("com.samsung.android.gamesdk.GameSDKManager");
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1;
			L_1 = Array_Empty_TisRuntimeObject_m002765312BF306B1B3B5BFAB9550C0A2A1820CDA_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m002765312BF306B1B3B5BFAB9550C0A2A1820CDA_RuntimeMethod_var);
			AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_2 = (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)il2cpp_codegen_object_new(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
			AndroidJavaObject__ctor_m6146DBD19BCFFDB3D4F42C8D38491F354B58B001(L_2, _stringLiteralEEC7732C32C4E0262755BF931431F792DE2E0033, L_1, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_il2cpp_TypeInfo_var);
			((NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_il2cpp_TypeInfo_var))->set_s_GameSDK_4(L_2);
			// if (s_GameSDK != null)
			AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_3 = ((NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_il2cpp_TypeInfo_var))->get_s_GameSDK_4();
			if (!L_3)
			{
				goto IL_003e;
			}
		}

IL_0025:
		{
			// s_isAvailable = s_GameSDK.CallStatic<bool>("isAvailable");
			IL2CPP_RUNTIME_CLASS_INIT(NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_il2cpp_TypeInfo_var);
			AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_4 = ((NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_il2cpp_TypeInfo_var))->get_s_GameSDK_4();
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5;
			L_5 = Array_Empty_TisRuntimeObject_m002765312BF306B1B3B5BFAB9550C0A2A1820CDA_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m002765312BF306B1B3B5BFAB9550C0A2A1820CDA_RuntimeMethod_var);
			NullCheck(L_4);
			bool L_6;
			L_6 = AndroidJavaObject_CallStatic_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m4AA284A03F0D5D003114D60C705B8A54274C74DF(L_4, _stringLiteral74C185339ADE6B87DA245E0CBDFD66891CC43F54, L_5, /*hidden argument*/AndroidJavaObject_CallStatic_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m4AA284A03F0D5D003114D60C705B8A54274C74DF_RuntimeMethod_var);
			((NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_il2cpp_TypeInfo_var))->set_s_isAvailable_8(L_6);
		}

IL_003e:
		{
			// }
			goto IL_004f;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0040;
		}
		throw e;
	}

CATCH_0040:
	{// begin catch(System.Exception)
		// catch (Exception)
		// s_isAvailable = false;
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_il2cpp_TypeInfo_var)));
		((NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_il2cpp_TypeInfo_var))))->set_s_isAvailable_8((bool)0);
		// s_GameSDK = null;
		((NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_il2cpp_TypeInfo_var))))->set_s_GameSDK_4((AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004f;
	}// end catch (depth: 1)

IL_004f:
	{
		// if (s_isAvailable)
		IL2CPP_RUNTIME_CLASS_INIT(NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_il2cpp_TypeInfo_var);
		bool L_7 = ((NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_il2cpp_TypeInfo_var))->get_s_isAvailable_8();
		if (!L_7)
		{
			goto IL_00c2;
		}
	}
	{
		// s_GameSDKRawObjectID = s_GameSDK.GetRawObject();
		IL2CPP_RUNTIME_CLASS_INIT(NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_il2cpp_TypeInfo_var);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_8 = ((NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_il2cpp_TypeInfo_var))->get_s_GameSDK_4();
		NullCheck(L_8);
		intptr_t L_9;
		L_9 = AndroidJavaObject_GetRawObject_m09E30F9AF9DD2AE07D34CE3915BDA557E206271D(L_8, /*hidden argument*/NULL);
		((NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_il2cpp_TypeInfo_var))->set_s_GameSDKRawObjectID_5((intptr_t)L_9);
		// var classID = s_GameSDK.GetRawClass();
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_10 = ((NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_il2cpp_TypeInfo_var))->get_s_GameSDK_4();
		NullCheck(L_10);
		intptr_t L_11;
		L_11 = AndroidJavaObject_GetRawClass_m051337FD2D7C0E765641B192D86FF4A06257836B(L_10, /*hidden argument*/NULL);
		// s_GetGpuFrameTimeID = GetJavaMethodID(classID, "getGpuFrameTime", "()D");
		intptr_t L_12 = (intptr_t)L_11;
		intptr_t L_13;
		L_13 = NativeApi_GetJavaMethodID_mF408D0BA9992AFB69114C1860C8BAD4E87617638((intptr_t)L_12, _stringLiteral110C230ECC11791A56E51CE07FE5E6FD5A78178A, _stringLiteralDB8C132238F9E774E6E9E180238DA0A65C25145C, /*hidden argument*/NULL);
		((NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_il2cpp_TypeInfo_var))->set_s_GetGpuFrameTimeID_6((intptr_t)L_13);
		// s_GetHighPrecisionSkinTempLevelID = GetJavaMethodID(classID, "getHighPrecisionSkinTempLevel", "()D");
		intptr_t L_14;
		L_14 = NativeApi_GetJavaMethodID_mF408D0BA9992AFB69114C1860C8BAD4E87617638((intptr_t)L_12, _stringLiteralDAD4FD80C1A0A39AD74FD88700D89B9595B8D595, _stringLiteralDB8C132238F9E774E6E9E180238DA0A65C25145C, /*hidden argument*/NULL);
		((NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_il2cpp_TypeInfo_var))->set_s_GetHighPrecisionSkinTempLevelID_7((intptr_t)L_14);
		// if (s_GetGpuFrameTimeID == (IntPtr)0 || s_GetHighPrecisionSkinTempLevelID == (IntPtr)0)
		intptr_t L_15 = ((NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_il2cpp_TypeInfo_var))->get_s_GetGpuFrameTimeID_6();
		intptr_t L_16;
		L_16 = IntPtr_op_Explicit_m9092E57CE669E7B9CCDCF5ADD6DFB758D6545FBF(0, /*hidden argument*/NULL);
		bool L_17;
		L_17 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_15, (intptr_t)L_16, /*hidden argument*/NULL);
		if (L_17)
		{
			goto IL_00bc;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_il2cpp_TypeInfo_var);
		intptr_t L_18 = ((NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_il2cpp_TypeInfo_var))->get_s_GetHighPrecisionSkinTempLevelID_7();
		intptr_t L_19;
		L_19 = IntPtr_op_Explicit_m9092E57CE669E7B9CCDCF5ADD6DFB758D6545FBF(0, /*hidden argument*/NULL);
		bool L_20;
		L_20 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_18, (intptr_t)L_19, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_00c2;
		}
	}

IL_00bc:
	{
		// s_isAvailable = false;
		IL2CPP_RUNTIME_CLASS_INIT(NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_il2cpp_TypeInfo_var);
		((NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_il2cpp_TypeInfo_var))->set_s_isAvailable_8((bool)0);
	}

IL_00c2:
	{
		// }
		return;
	}
}
// System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/NativeApi::IsAvailable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_IsAvailable_mBEDDDF68572CBF4B7FD497DB7E6419F1C427EE9F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StaticInit();
		IL2CPP_RUNTIME_CLASS_INIT(NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_il2cpp_TypeInfo_var);
		NativeApi_StaticInit_m6E6D92E8CDEE31EDEDEFC254A951998F4ACAFE23(/*hidden argument*/NULL);
		// return s_isAvailable;
		bool L_0 = ((NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_il2cpp_TypeInfo_var))->get_s_isAvailable_8();
		return L_0;
	}
}
// System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/NativeApi::RegisterListener()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_RegisterListener_mF29B063A54BAB9B83AA77A4021371341B83B85B8 (NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m13EC19F5D105614B86EADA87F5F73751D3CFF108_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3261C3E11E9AB172DA0BD2010EF79C41DE23C91C);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// bool success = false;
		V_0 = (bool)0;
	}

IL_0002:
	try
	{// begin try (depth: 1)
		// success = s_GameSDK.Call<bool>("setListener", this);
		IL2CPP_RUNTIME_CLASS_INIT(NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_il2cpp_TypeInfo_var);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = ((NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_il2cpp_TypeInfo_var))->get_s_GameSDK_4();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, __this);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)__this);
		NullCheck(L_0);
		bool L_3;
		L_3 = AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m13EC19F5D105614B86EADA87F5F73751D3CFF108(L_0, _stringLiteral3261C3E11E9AB172DA0BD2010EF79C41DE23C91C, L_2, /*hidden argument*/AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m13EC19F5D105614B86EADA87F5F73751D3CFF108_RuntimeMethod_var);
		V_0 = L_3;
		// }
		goto IL_0023;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_001e;
		}
		throw e;
	}

CATCH_001e:
	{// begin catch(System.Exception)
		// catch (Exception)
		// success = false;
		V_0 = (bool)0;
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0023;
	}// end catch (depth: 1)

IL_0023:
	{
		// if (!success)
		bool L_4 = V_0;
		// return success;
		bool L_5 = V_0;
		return L_5;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/NativeApi::UnregisterListener()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnregisterListener_mFB0FF5C2B2DB82F367FDE4D39034DC0383BD1626 (NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m13EC19F5D105614B86EADA87F5F73751D3CFF108_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3261C3E11E9AB172DA0BD2010EF79C41DE23C91C);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// bool success = true;
		V_0 = (bool)1;
	}

IL_0002:
	try
	{// begin try (depth: 1)
		// success = s_GameSDK.Call<bool>("setListener", (Object)null);
		IL2CPP_RUNTIME_CLASS_INIT(NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_il2cpp_TypeInfo_var);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = ((NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_il2cpp_TypeInfo_var))->get_s_GameSDK_4();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		NullCheck(L_0);
		bool L_2;
		L_2 = AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m13EC19F5D105614B86EADA87F5F73751D3CFF108(L_0, _stringLiteral3261C3E11E9AB172DA0BD2010EF79C41DE23C91C, L_1, /*hidden argument*/AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m13EC19F5D105614B86EADA87F5F73751D3CFF108_RuntimeMethod_var);
		V_0 = L_2;
		// }
		goto IL_001f;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_001a;
		}
		throw e;
	}

CATCH_001a:
	{// begin catch(System.Exception)
		// catch (Exception)
		// success = false;
		V_0 = (bool)0;
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_001f;
	}// end catch (depth: 1)

IL_001f:
	{
		// if (!success)
		bool L_3 = V_0;
		// }
		return;
	}
}
// System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/NativeApi::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_Initialize_m8F89BB8CBA29CFDDBCA2F894E824B1D8F6107F08 (NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m13EC19F5D105614B86EADA87F5F73751D3CFF108_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Version_tBDAEDED25425A1D09910468B8BD1759115646E3C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD289A15F06D391673864A3B5CEDBFF42865743C1);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// bool isInitialized = false;
		V_0 = (bool)0;
	}

IL_0002:
	try
	{// begin try (depth: 1)
		{
			// if (TryParseVersion(GetVersion(), out initVersion))
			String_t* L_0;
			L_0 = NativeApi_GetVersion_mAE6C662706624717B2548BBE228AF9A9878CEB52(__this, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(SamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C_il2cpp_TypeInfo_var);
			bool L_1;
			L_1 = SamsungGameSDKAdaptivePerformanceSubsystem_TryParseVersion_m7E2199B70BD439C46CA726D3006271F11ED91B08(L_0, (Version_tBDAEDED25425A1D09910468B8BD1759115646E3C **)(&V_1), /*hidden argument*/NULL);
			if (!L_1)
			{
				goto IL_0049;
			}
		}

IL_0011:
		{
			// if (initVersion >= new Version(3, 2))
			Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * L_2 = V_1;
			Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * L_3 = (Version_tBDAEDED25425A1D09910468B8BD1759115646E3C *)il2cpp_codegen_object_new(Version_tBDAEDED25425A1D09910468B8BD1759115646E3C_il2cpp_TypeInfo_var);
			Version__ctor_mA9BC7F2404CB129697C64851406DF468B753FFDF(L_3, 3, 2, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Version_tBDAEDED25425A1D09910468B8BD1759115646E3C_il2cpp_TypeInfo_var);
			bool L_4;
			L_4 = Version_op_GreaterThanOrEqual_m3541CE83D1E5FD5E50F8FFE4EA2984359E92754D(L_2, L_3, /*hidden argument*/NULL);
			if (!L_4)
			{
				goto IL_003f;
			}
		}

IL_0020:
		{
			// isInitialized = s_GameSDK.Call<bool>("initialize", initVersion.ToString());
			IL2CPP_RUNTIME_CLASS_INIT(NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_il2cpp_TypeInfo_var);
			AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_5 = ((NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_il2cpp_TypeInfo_var))->get_s_GameSDK_4();
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = L_6;
			Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * L_8 = V_1;
			NullCheck(L_8);
			String_t* L_9;
			L_9 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
			NullCheck(L_7);
			ArrayElementTypeCheck (L_7, L_9);
			(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_9);
			NullCheck(L_5);
			bool L_10;
			L_10 = AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m13EC19F5D105614B86EADA87F5F73751D3CFF108(L_5, _stringLiteralD289A15F06D391673864A3B5CEDBFF42865743C1, L_7, /*hidden argument*/AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m13EC19F5D105614B86EADA87F5F73751D3CFF108_RuntimeMethod_var);
			V_0 = L_10;
		}

IL_003f:
		{
			// if (isInitialized)
			bool L_11 = V_0;
			if (!L_11)
			{
				goto IL_0049;
			}
		}

IL_0042:
		{
			// isInitialized = RegisterListener();
			bool L_12;
			L_12 = NativeApi_RegisterListener_mF29B063A54BAB9B83AA77A4021371341B83B85B8(__this, /*hidden argument*/NULL);
			V_0 = L_12;
		}

IL_0049:
		{
			// }
			goto IL_004e;
		}
	}// end try (depth: 1)
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
	{// begin catch(System.Exception)
		// catch (Exception)
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004e;
	}// end catch (depth: 1)

IL_004e:
	{
		// return isInitialized;
		bool L_13 = V_0;
		return L_13;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/NativeApi::Terminate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_Terminate_m60AA457D0C726DE97EA796CC690AD1886CDCF6B6 (NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m13EC19F5D105614B86EADA87F5F73751D3CFF108_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E5FBE3F351EB8F12ED980FF209B6810ED6C1D60);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// UnregisterListener();
		NativeApi_UnregisterListener_mFB0FF5C2B2DB82F367FDE4D39034DC0383BD1626(__this, /*hidden argument*/NULL);
	}

IL_0006:
	try
	{// begin try (depth: 1)
		// var packageName = Application.identifier;
		String_t* L_0;
		L_0 = Application_get_identifier_m89EF09E9D76342F10C81D4F236C6D4CEFF2825BE(/*hidden argument*/NULL);
		V_0 = L_0;
		// s_GameSDK.Call<bool>("finalize", packageName);
		IL2CPP_RUNTIME_CLASS_INIT(NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_il2cpp_TypeInfo_var);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_1 = ((NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_il2cpp_TypeInfo_var))->get_s_GameSDK_4();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_2;
		String_t* L_4 = V_0;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		NullCheck(L_1);
		bool L_5;
		L_5 = AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m13EC19F5D105614B86EADA87F5F73751D3CFF108(L_1, _stringLiteral8E5FBE3F351EB8F12ED980FF209B6810ED6C1D60, L_3, /*hidden argument*/AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m13EC19F5D105614B86EADA87F5F73751D3CFF108_RuntimeMethod_var);
		// }
		goto IL_002b;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0028;
		}
		throw e;
	}

CATCH_0028:
	{// begin catch(System.Exception)
		// catch (Exception)
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_002b;
	}// end catch (depth: 1)

IL_002b:
	{
		// }
		return;
	}
}
// System.String UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/NativeApi::GetVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeApi_GetVersion_mAE6C662706624717B2548BBE228AF9A9878CEB52 (NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_mE0E9BE21A1938D675DA63B376682D54E3B36AF0E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m002765312BF306B1B3B5BFAB9550C0A2A1820CDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8CAC7A1CF27146D11E92BE39054D8E4594FE9B3D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// string sdkVersion = "";
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}

IL_0006:
	try
	{// begin try (depth: 1)
		// sdkVersion = s_GameSDK.Call<string>("getVersion");
		IL2CPP_RUNTIME_CLASS_INIT(NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_il2cpp_TypeInfo_var);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = ((NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_il2cpp_TypeInfo_var))->get_s_GameSDK_4();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m002765312BF306B1B3B5BFAB9550C0A2A1820CDA_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m002765312BF306B1B3B5BFAB9550C0A2A1820CDA_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_2;
		L_2 = AndroidJavaObject_Call_TisString_t_mE0E9BE21A1938D675DA63B376682D54E3B36AF0E(L_0, _stringLiteral8CAC7A1CF27146D11E92BE39054D8E4594FE9B3D, L_1, /*hidden argument*/AndroidJavaObject_Call_TisString_t_mE0E9BE21A1938D675DA63B376682D54E3B36AF0E_RuntimeMethod_var);
		V_0 = L_2;
		// }
		goto IL_0020;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_001d;
		}
		throw e;
	}

CATCH_001d:
	{// begin catch(System.Exception)
		// catch (Exception)
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0020;
	}// end catch (depth: 1)

IL_0020:
	{
		// return sdkVersion;
		String_t* L_3 = V_0;
		return L_3;
	}
}
// System.Double UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/NativeApi::GetHighPrecisionSkinTempLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double NativeApi_GetHighPrecisionSkinTempLevel_m06BE434946DF3D1BE8F17477FB68D0CDEB68378B (NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// double currentTempLevel = -1.0;
		V_0 = (-1.0);
	}

IL_000a:
	try
	{// begin try (depth: 1)
		{
			// currentTempLevel = AndroidJNI.CallDoubleMethod(s_GameSDKRawObjectID, s_GetHighPrecisionSkinTempLevelID, s_NoArgs);
			IL2CPP_RUNTIME_CLASS_INIT(NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_il2cpp_TypeInfo_var);
			intptr_t L_0 = ((NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_il2cpp_TypeInfo_var))->get_s_GameSDKRawObjectID_5();
			intptr_t L_1 = ((NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_il2cpp_TypeInfo_var))->get_s_GetHighPrecisionSkinTempLevelID_7();
			jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* L_2 = ((NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_il2cpp_TypeInfo_var))->get_s_NoArgs_9();
			double L_3;
			L_3 = AndroidJNI_CallDoubleMethod_mC6B84A261650B29C19C304F07D1080B38ABC7186((intptr_t)L_0, (intptr_t)L_1, L_2, /*hidden argument*/NULL);
			V_0 = L_3;
			// if (AndroidJNI.ExceptionOccurred() != IntPtr.Zero)
			intptr_t L_4;
			L_4 = AndroidJNI_ExceptionOccurred_m347473FDF70118E17D092961232E7EAF0BCF2991(/*hidden argument*/NULL);
			bool L_5;
			L_5 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_4, (intptr_t)(0), /*hidden argument*/NULL);
			if (!L_5)
			{
				goto IL_003a;
			}
		}

IL_0030:
		{
			// AndroidJNI.ExceptionDescribe();
			AndroidJNI_ExceptionDescribe_mA46A449AEF75F9433FBCFC60C9FB9BD80A738C68(/*hidden argument*/NULL);
			// AndroidJNI.ExceptionClear();
			AndroidJNI_ExceptionClear_mE1961C9BD4984AF52712BFF181B6B95F435531B7(/*hidden argument*/NULL);
		}

IL_003a:
		{
			// }
			goto IL_003f;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{// begin catch(System.Exception)
		// catch (Exception)
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_003f;
	}// end catch (depth: 1)

IL_003f:
	{
		// return currentTempLevel;
		double L_6 = V_0;
		return L_6;
	}
}
// System.Double UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/NativeApi::GetGpuFrameTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double NativeApi_GetGpuFrameTime_mD633FDC3F93D5D12E797274F544A2F89E713EFFE (NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// double gpuFrameTime = -1.0;
		V_0 = (-1.0);
	}

IL_000a:
	try
	{// begin try (depth: 1)
		{
			// gpuFrameTime = AndroidJNI.CallDoubleMethod(s_GameSDKRawObjectID, s_GetGpuFrameTimeID, s_NoArgs);
			IL2CPP_RUNTIME_CLASS_INIT(NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_il2cpp_TypeInfo_var);
			intptr_t L_0 = ((NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_il2cpp_TypeInfo_var))->get_s_GameSDKRawObjectID_5();
			intptr_t L_1 = ((NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_il2cpp_TypeInfo_var))->get_s_GetGpuFrameTimeID_6();
			jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* L_2 = ((NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_il2cpp_TypeInfo_var))->get_s_NoArgs_9();
			double L_3;
			L_3 = AndroidJNI_CallDoubleMethod_mC6B84A261650B29C19C304F07D1080B38ABC7186((intptr_t)L_0, (intptr_t)L_1, L_2, /*hidden argument*/NULL);
			V_0 = L_3;
			// if (AndroidJNI.ExceptionOccurred() != IntPtr.Zero)
			intptr_t L_4;
			L_4 = AndroidJNI_ExceptionOccurred_m347473FDF70118E17D092961232E7EAF0BCF2991(/*hidden argument*/NULL);
			bool L_5;
			L_5 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_4, (intptr_t)(0), /*hidden argument*/NULL);
			if (!L_5)
			{
				goto IL_003a;
			}
		}

IL_0030:
		{
			// AndroidJNI.ExceptionDescribe();
			AndroidJNI_ExceptionDescribe_mA46A449AEF75F9433FBCFC60C9FB9BD80A738C68(/*hidden argument*/NULL);
			// AndroidJNI.ExceptionClear();
			AndroidJNI_ExceptionClear_mE1961C9BD4984AF52712BFF181B6B95F435531B7(/*hidden argument*/NULL);
		}

IL_003a:
		{
			// }
			goto IL_003f;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{// begin catch(System.Exception)
		// catch (Exception)
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_003f;
	}// end catch (depth: 1)

IL_003f:
	{
		// return gpuFrameTime;
		double L_6 = V_0;
		return L_6;
	}
}
// System.Int32 UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/NativeApi::SetFreqLevels(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeApi_SetFreqLevels_m98592288D664AD0D1B5D6EB2C2FFBA71D4B8A198 (NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123 * __this, int32_t ___cpu0, int32_t ___gpu1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mD43CB504C00B380069C4904F986738EF503E9144_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4F209C20BD06D8D1C76C888ACA266837D8ADDC01);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// int result = 0;
		V_0 = 0;
	}

IL_0002:
	try
	{// begin try (depth: 1)
		// result = s_GameSDK.Call<int>("setFreqLevels", cpu, gpu);
		IL2CPP_RUNTIME_CLASS_INIT(NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_il2cpp_TypeInfo_var);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = ((NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_il2cpp_TypeInfo_var))->get_s_GameSDK_4();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		int32_t L_3 = ___cpu0;
		int32_t L_4 = L_3;
		RuntimeObject * L_5 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_5);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = L_2;
		int32_t L_7 = ___gpu1;
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_9);
		NullCheck(L_0);
		int32_t L_10;
		L_10 = AndroidJavaObject_Call_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mD43CB504C00B380069C4904F986738EF503E9144(L_0, _stringLiteral4F209C20BD06D8D1C76C888ACA266837D8ADDC01, L_6, /*hidden argument*/AndroidJavaObject_Call_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mD43CB504C00B380069C4904F986738EF503E9144_RuntimeMethod_var);
		V_0 = L_10;
		// }
		goto IL_002f;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_002c;
		}
		throw e;
	}

CATCH_002c:
	{// begin catch(System.Exception)
		// catch (Exception x)
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_002f;
	}// end catch (depth: 1)

IL_002f:
	{
		// return result;
		int32_t L_11 = V_0;
		return L_11;
	}
}
// System.Int32 UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/NativeApi::GetMaxCpuPerformanceLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeApi_GetMaxCpuPerformanceLevel_m08DE9F2A26D577CFABC9947D76B7DDE3F9F752A2 (NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mD43CB504C00B380069C4904F986738EF503E9144_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m002765312BF306B1B3B5BFAB9550C0A2A1820CDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFAC891F8E2E6B2BA23524259218EF5EF3BF998B4);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// int maxCpuPerformanceLevel = -1;
		V_0 = (-1);
	}

IL_0002:
	try
	{// begin try (depth: 1)
		// maxCpuPerformanceLevel = s_GameSDK.Call<int>("getCPULevelMax");
		IL2CPP_RUNTIME_CLASS_INIT(NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_il2cpp_TypeInfo_var);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = ((NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_il2cpp_TypeInfo_var))->get_s_GameSDK_4();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m002765312BF306B1B3B5BFAB9550C0A2A1820CDA_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m002765312BF306B1B3B5BFAB9550C0A2A1820CDA_RuntimeMethod_var);
		NullCheck(L_0);
		int32_t L_2;
		L_2 = AndroidJavaObject_Call_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mD43CB504C00B380069C4904F986738EF503E9144(L_0, _stringLiteralFAC891F8E2E6B2BA23524259218EF5EF3BF998B4, L_1, /*hidden argument*/AndroidJavaObject_Call_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mD43CB504C00B380069C4904F986738EF503E9144_RuntimeMethod_var);
		V_0 = L_2;
		// }
		goto IL_001c;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0019;
		}
		throw e;
	}

CATCH_0019:
	{// begin catch(System.Exception)
		// catch (Exception)
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_001c;
	}// end catch (depth: 1)

IL_001c:
	{
		// return maxCpuPerformanceLevel;
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Int32 UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/NativeApi::GetMaxGpuPerformanceLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeApi_GetMaxGpuPerformanceLevel_m6728C28A5B4CA2FB1092FC612DFA2B20A4F3BC84 (NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mD43CB504C00B380069C4904F986738EF503E9144_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m002765312BF306B1B3B5BFAB9550C0A2A1820CDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA479396D9311F0A23258AE9653EFD051C3B8A4D5);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// int maxGpuPerformanceLevel = -1;
		V_0 = (-1);
	}

IL_0002:
	try
	{// begin try (depth: 1)
		// maxGpuPerformanceLevel = s_GameSDK.Call<int>("getGPULevelMax");
		IL2CPP_RUNTIME_CLASS_INIT(NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_il2cpp_TypeInfo_var);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = ((NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_il2cpp_TypeInfo_var))->get_s_GameSDK_4();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m002765312BF306B1B3B5BFAB9550C0A2A1820CDA_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m002765312BF306B1B3B5BFAB9550C0A2A1820CDA_RuntimeMethod_var);
		NullCheck(L_0);
		int32_t L_2;
		L_2 = AndroidJavaObject_Call_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mD43CB504C00B380069C4904F986738EF503E9144(L_0, _stringLiteralA479396D9311F0A23258AE9653EFD051C3B8A4D5, L_1, /*hidden argument*/AndroidJavaObject_Call_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mD43CB504C00B380069C4904F986738EF503E9144_RuntimeMethod_var);
		V_0 = L_2;
		// }
		goto IL_001c;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0019;
		}
		throw e;
	}

CATCH_0019:
	{// begin catch(System.Exception)
		// catch (Exception)
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_001c;
	}// end catch (depth: 1)

IL_001c:
	{
		// return maxGpuPerformanceLevel;
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/NativeApi::IsVariableRefreshRateSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_IsVariableRefreshRateSupported_mA87B15DB6DBBA405B2DB772606643A73822BF0CD (NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m13EC19F5D105614B86EADA87F5F73751D3CFF108_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m002765312BF306B1B3B5BFAB9550C0A2A1820CDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1174361642F6FE4FCA189A130190A4E9597912D6);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// bool vrrSupported = false;
		V_0 = (bool)0;
	}

IL_0002:
	try
	{// begin try (depth: 1)
		// vrrSupported = s_GameSDK.Call<bool>("isGameSDKVariableRefreshRateSupported");
		IL2CPP_RUNTIME_CLASS_INIT(NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_il2cpp_TypeInfo_var);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = ((NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_il2cpp_TypeInfo_var))->get_s_GameSDK_4();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m002765312BF306B1B3B5BFAB9550C0A2A1820CDA_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m002765312BF306B1B3B5BFAB9550C0A2A1820CDA_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_2;
		L_2 = AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m13EC19F5D105614B86EADA87F5F73751D3CFF108(L_0, _stringLiteral1174361642F6FE4FCA189A130190A4E9597912D6, L_1, /*hidden argument*/AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m13EC19F5D105614B86EADA87F5F73751D3CFF108_RuntimeMethod_var);
		V_0 = L_2;
		// }
		goto IL_001c;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0019;
		}
		throw e;
	}

CATCH_0019:
	{// begin catch(System.Exception)
		// catch (Exception x)
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_001c;
	}// end catch (depth: 1)

IL_001c:
	{
		// return vrrSupported;
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Int32[] UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/NativeApi::GetSupportedRefreshRates()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* NativeApi_GetSupportedRefreshRates_m5AEFEB1C8E1AE5D7AFBADE31D3D719268EB33A89 (NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisInt32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_mDD94B8DE230857A8C16A060135969B72A534DFE8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m002765312BF306B1B3B5BFAB9550C0A2A1820CDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D6253C836CCF9A6B8A05245CB6B1EF24E546455);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// int[] result = null;
		V_0 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)NULL;
	}

IL_0002:
	try
	{// begin try (depth: 1)
		// result = s_GameSDK.Call<int[]>("getSupportedRefreshRates");
		IL2CPP_RUNTIME_CLASS_INIT(NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_il2cpp_TypeInfo_var);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = ((NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_il2cpp_TypeInfo_var))->get_s_GameSDK_4();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m002765312BF306B1B3B5BFAB9550C0A2A1820CDA_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m002765312BF306B1B3B5BFAB9550C0A2A1820CDA_RuntimeMethod_var);
		NullCheck(L_0);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_2;
		L_2 = AndroidJavaObject_Call_TisInt32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_mDD94B8DE230857A8C16A060135969B72A534DFE8(L_0, _stringLiteral3D6253C836CCF9A6B8A05245CB6B1EF24E546455, L_1, /*hidden argument*/AndroidJavaObject_Call_TisInt32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_mDD94B8DE230857A8C16A060135969B72A534DFE8_RuntimeMethod_var);
		V_0 = L_2;
		// }
		goto IL_001c;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0019;
		}
		throw e;
	}

CATCH_0019:
	{// begin catch(System.Exception)
		// catch (Exception x)
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_001c;
	}// end catch (depth: 1)

IL_001c:
	{
		// return result != null ? result : new int[0];
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_3 = V_0;
		if (L_3)
		{
			goto IL_0026;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_4 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)0);
		return L_4;
	}

IL_0026:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_5 = V_0;
		return L_5;
	}
}
// System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/NativeApi::SetRefreshRate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_SetRefreshRate_m52925DC9713CC70F59F9DB9929D51A2E6A0D183C (NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123 * __this, int32_t ___targetRefreshRate0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF206CAA96C8ED929B66CE9CAF1513182AC391082);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;

IL_0000:
	try
	{// begin try (depth: 1)
		// s_GameSDK.Call("setRefreshRate", targetRefreshRate);
		IL2CPP_RUNTIME_CLASS_INIT(NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_il2cpp_TypeInfo_var);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = ((NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_il2cpp_TypeInfo_var))->get_s_GameSDK_4();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		int32_t L_3 = ___targetRefreshRate0;
		int32_t L_4 = L_3;
		RuntimeObject * L_5 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_5);
		NullCheck(L_0);
		AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D(L_0, _stringLiteralF206CAA96C8ED929B66CE9CAF1513182AC391082, L_2, /*hidden argument*/NULL);
		// }
		goto IL_0025;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0020;
		}
		throw e;
	}

CATCH_0020:
	{// begin catch(System.Exception)
		// catch (Exception x)
		// return false;
		V_0 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0027;
	}// end catch (depth: 1)

IL_0025:
	{
		// return true;
		return (bool)1;
	}

IL_0027:
	{
		// }
		bool L_6 = V_0;
		return L_6;
	}
}
// System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/NativeApi::ResetRefreshRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_ResetRefreshRate_mF4AF5549EC9BCDCF8C0680F40E07B5B8178A1009 (NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m002765312BF306B1B3B5BFAB9550C0A2A1820CDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7DF31CBCAC5F9AB299F5D58B49B126C24553D2D1);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;

IL_0000:
	try
	{// begin try (depth: 1)
		// s_GameSDK.Call("resetRefreshRate");
		IL2CPP_RUNTIME_CLASS_INIT(NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_il2cpp_TypeInfo_var);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = ((NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_il2cpp_TypeInfo_var))->get_s_GameSDK_4();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m002765312BF306B1B3B5BFAB9550C0A2A1820CDA_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m002765312BF306B1B3B5BFAB9550C0A2A1820CDA_RuntimeMethod_var);
		NullCheck(L_0);
		AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D(L_0, _stringLiteral7DF31CBCAC5F9AB299F5D58B49B126C24553D2D1, L_1, /*hidden argument*/NULL);
		// }
		goto IL_001b;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0016;
		}
		throw e;
	}

CATCH_0016:
	{// begin catch(System.Exception)
		// catch (Exception x)
		// return false;
		V_0 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_001d;
	}// end catch (depth: 1)

IL_001b:
	{
		// return true;
		return (bool)1;
	}

IL_001d:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Int32 UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/NativeApi::GetCurrentRefreshRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeApi_GetCurrentRefreshRate_m190464089F7777669AE062DD6B8094BBE425B192 (NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mD43CB504C00B380069C4904F986738EF503E9144_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m002765312BF306B1B3B5BFAB9550C0A2A1820CDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D8E0CE0AA8B1F1859A8CEA37DFAA26D56616E45);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// int result = -1;
		V_0 = (-1);
	}

IL_0002:
	try
	{// begin try (depth: 1)
		// result = s_GameSDK.Call<int>("getCurrentRefreshRate");
		IL2CPP_RUNTIME_CLASS_INIT(NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_il2cpp_TypeInfo_var);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = ((NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_il2cpp_TypeInfo_var))->get_s_GameSDK_4();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m002765312BF306B1B3B5BFAB9550C0A2A1820CDA_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m002765312BF306B1B3B5BFAB9550C0A2A1820CDA_RuntimeMethod_var);
		NullCheck(L_0);
		int32_t L_2;
		L_2 = AndroidJavaObject_Call_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mD43CB504C00B380069C4904F986738EF503E9144(L_0, _stringLiteral1D8E0CE0AA8B1F1859A8CEA37DFAA26D56616E45, L_1, /*hidden argument*/AndroidJavaObject_Call_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mD43CB504C00B380069C4904F986738EF503E9144_RuntimeMethod_var);
		V_0 = L_2;
		// }
		goto IL_001c;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0019;
		}
		throw e;
	}

CATCH_0019:
	{// begin catch(System.Exception)
		// catch (Exception x)
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_001c;
	}// end catch (depth: 1)

IL_001c:
	{
		// return result;
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/NativeApi::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi__cctor_mBCC0C16ED6C6539063104F22F3138541F21A6615 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static private AndroidJavaObject s_GameSDK = null;
		((NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_il2cpp_TypeInfo_var))->set_s_GameSDK_4((AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)NULL);
		// static private bool s_isAvailable = false;
		((NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_il2cpp_TypeInfo_var))->set_s_isAvailable_8((bool)0);
		// static private jvalue[] s_NoArgs = new jvalue[0];
		jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* L_0 = (jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99*)(jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99*)SZArrayNew(jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99_il2cpp_TypeInfo_var, (uint32_t)0);
		((NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123_il2cpp_TypeInfo_var))->set_s_NoArgs_9(L_0);
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
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/VRRManager::UpdateRefreshRateInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VRRManager_UpdateRefreshRateInfo_m4E1752C6E5AAB1C6D228C41890D2BC86859FE0FC (VRRManager_tB79C0272A6886E77A12ADF1365B76758606FD1AC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m415CDDDC44D8102E7E71D9EA0A853D7BBE6F469F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m465C4122ED76D75D4194915EDBD32A89F259CF8C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* V_0 = NULL;
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * V_1 = NULL;
	int32_t V_2 = 0;
	{
		// var supportedRefreshRates = m_Api.GetSupportedRefreshRates();
		NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123 * L_0 = __this->get_m_Api_0();
		NullCheck(L_0);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1;
		L_1 = NativeApi_GetSupportedRefreshRates_m5AEFEB1C8E1AE5D7AFBADE31D3D719268EB33A89(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// if (settings.highSpeedVRR)
		IL2CPP_RUNTIME_CLASS_INIT(SamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C_il2cpp_TypeInfo_var);
		SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A * L_2 = ((SamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C_StaticFields*)il2cpp_codegen_static_fields_for(SamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C_il2cpp_TypeInfo_var))->get_settings_16();
		NullCheck(L_2);
		bool L_3;
		L_3 = SamsungAndroidProviderSettings_get_highSpeedVRR_mA9BB44B728682221720176AFAF52FB5EF9DC39EB_inline(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		// m_SupportedRefreshRates = supportedRefreshRates;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_4 = V_0;
		__this->set_m_SupportedRefreshRates_3(L_4);
		// }
		goto IL_0051;
	}

IL_0021:
	{
		// List<int> shrunkSupportedRefreshRates = new List<int>();
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_5 = (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)il2cpp_codegen_object_new(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var);
		List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD(L_5, /*hidden argument*/List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var);
		V_1 = L_5;
		// for (var i = 0; i < supportedRefreshRates.Length; ++i)
		V_2 = 0;
		goto IL_003f;
	}

IL_002b:
	{
		// if (supportedRefreshRates[i] <= 60)
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_6 = V_0;
		int32_t L_7 = V_2;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		int32_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		if ((((int32_t)L_9) > ((int32_t)((int32_t)60))))
		{
			goto IL_003b;
		}
	}
	{
		// shrunkSupportedRefreshRates.Add(supportedRefreshRates[i]);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_10 = V_1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_11 = V_0;
		int32_t L_12 = V_2;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		int32_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_10);
		List_1_Add_m415CDDDC44D8102E7E71D9EA0A853D7BBE6F469F(L_10, L_14, /*hidden argument*/List_1_Add_m415CDDDC44D8102E7E71D9EA0A853D7BBE6F469F_RuntimeMethod_var);
	}

IL_003b:
	{
		// for (var i = 0; i < supportedRefreshRates.Length; ++i)
		int32_t L_15 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_003f:
	{
		// for (var i = 0; i < supportedRefreshRates.Length; ++i)
		int32_t L_16 = V_2;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_17 = V_0;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length))))))
		{
			goto IL_002b;
		}
	}
	{
		// m_SupportedRefreshRates = shrunkSupportedRefreshRates.ToArray();
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_18 = V_1;
		NullCheck(L_18);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_19;
		L_19 = List_1_ToArray_m465C4122ED76D75D4194915EDBD32A89F259CF8C(L_18, /*hidden argument*/List_1_ToArray_m465C4122ED76D75D4194915EDBD32A89F259CF8C_RuntimeMethod_var);
		__this->set_m_SupportedRefreshRates_3(L_19);
	}

IL_0051:
	{
		// m_CurrentRefreshRate = m_Api.GetCurrentRefreshRate();
		NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123 * L_20 = __this->get_m_Api_0();
		NullCheck(L_20);
		int32_t L_21;
		L_21 = NativeApi_GetCurrentRefreshRate_m190464089F7777669AE062DD6B8094BBE425B192(L_20, /*hidden argument*/NULL);
		__this->set_m_CurrentRefreshRate_4(L_21);
		// }
		return;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/VRRManager::.ctor(UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/NativeApi)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VRRManager__ctor_mEF34A0A5455B063A9B86E262EDE52CF944945818 (VRRManager_tB79C0272A6886E77A12ADF1365B76758606FD1AC * __this, NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123 * ___api0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// object m_RefreshRateChangedLock = new object();
		RuntimeObject * L_0 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(L_0, /*hidden argument*/NULL);
		__this->set_m_RefreshRateChangedLock_1(L_0);
		// int[] m_SupportedRefreshRates = new int[0];
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->set_m_SupportedRefreshRates_3(L_1);
		// int m_CurrentRefreshRate = -1;
		__this->set_m_CurrentRefreshRate_4((-1));
		// int m_LastSetRefreshRate = -1;
		__this->set_m_LastSetRefreshRate_5((-1));
		// public VRRManager(NativeApi api)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// m_Api = api;
		NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123 * L_2 = ___api0;
		__this->set_m_Api_0(L_2);
		// SetDefaultVRR();
		VRRManager_SetDefaultVRR_m33726D97937A61E2133DE91AD4BD1C0168538072(__this, /*hidden argument*/NULL);
		// UpdateRefreshRateInfo();
		VRRManager_UpdateRefreshRateInfo_m4E1752C6E5AAB1C6D228C41890D2BC86859FE0FC(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/VRRManager::SetDefaultVRR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VRRManager_SetDefaultVRR_m33726D97937A61E2133DE91AD4BD1C0168538072 (VRRManager_tB79C0272A6886E77A12ADF1365B76758606FD1AC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_IndexOf_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m1F0420BEEDFC9FDB3682212205F4F8124BA3EA7E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (settings.highSpeedVRR)
		IL2CPP_RUNTIME_CLASS_INIT(SamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C_il2cpp_TypeInfo_var);
		SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A * L_0 = ((SamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C_StaticFields*)il2cpp_codegen_static_fields_for(SamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C_il2cpp_TypeInfo_var))->get_settings_16();
		NullCheck(L_0);
		bool L_1;
		L_1 = SamsungAndroidProviderSettings_get_highSpeedVRR_mA9BB44B728682221720176AFAF52FB5EF9DC39EB_inline(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		// return;
		return;
	}

IL_000d:
	{
		// var index = Array.IndexOf(m_SupportedRefreshRates, 60);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_2 = __this->get_m_SupportedRefreshRates_3();
		int32_t L_3;
		L_3 = Array_IndexOf_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m1F0420BEEDFC9FDB3682212205F4F8124BA3EA7E(L_2, ((int32_t)60), /*hidden argument*/Array_IndexOf_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m1F0420BEEDFC9FDB3682212205F4F8124BA3EA7E_RuntimeMethod_var);
		V_0 = L_3;
		// if (index != -1)
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)(-1))))
		{
			goto IL_0027;
		}
	}
	{
		// SetRefreshRateByIndexInternal(index);
		int32_t L_5 = V_0;
		bool L_6;
		L_6 = VRRManager_SetRefreshRateByIndexInternal_m4A9F508EEA5B461AF9B1790DE0EDFBD06FD461DF(__this, L_5, /*hidden argument*/NULL);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/VRRManager::Resume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VRRManager_Resume_mE193A16D23DE02C96E77C3404DC1E7D2F9340916 (VRRManager_tB79C0272A6886E77A12ADF1365B76758606FD1AC * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject * V_3 = NULL;
	bool V_4 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// bool changed = false;
		V_0 = (bool)0;
		// var oldSupportedRefreshRates = m_SupportedRefreshRates;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = __this->get_m_SupportedRefreshRates_3();
		V_1 = L_0;
		// var oldRefreshRate = m_LastSetRefreshRate;
		int32_t L_1 = __this->get_m_LastSetRefreshRate_5();
		V_2 = L_1;
		// UpdateRefreshRateInfo();
		VRRManager_UpdateRefreshRateInfo_m4E1752C6E5AAB1C6D228C41890D2BC86859FE0FC(__this, /*hidden argument*/NULL);
		// if (m_CurrentRefreshRate != oldRefreshRate)
		int32_t L_2 = __this->get_m_CurrentRefreshRate_4();
		int32_t L_3 = V_2;
		if ((((int32_t)L_2) == ((int32_t)L_3)))
		{
			goto IL_0023;
		}
	}
	{
		// changed = true;
		V_0 = (bool)1;
		goto IL_002e;
	}

IL_0023:
	{
		// else if (oldSupportedRefreshRates != m_SupportedRefreshRates)
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_4 = V_1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_5 = __this->get_m_SupportedRefreshRates_3();
		if ((((RuntimeObject*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_4) == ((RuntimeObject*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_5)))
		{
			goto IL_002e;
		}
	}
	{
		// changed = true;
		V_0 = (bool)1;
	}

IL_002e:
	{
		// if (changed)
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0057;
		}
	}
	{
		// lock (m_RefreshRateChangedLock)
		RuntimeObject * L_7 = __this->get_m_RefreshRateChangedLock_1();
		V_3 = L_7;
		V_4 = (bool)0;
	}

IL_003b:
	try
	{// begin try (depth: 1)
		RuntimeObject * L_8 = V_3;
		Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_8, (bool*)(&V_4), /*hidden argument*/NULL);
		// m_RefreshRateChanged = true;
		__this->set_m_RefreshRateChanged_2((bool)1);
		// }
		IL2CPP_LEAVE(0x57, FINALLY_004c);
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004c;
	}

FINALLY_004c:
	{// begin finally (depth: 1)
		{
			bool L_9 = V_4;
			if (!L_9)
			{
				goto IL_0056;
			}
		}

IL_0050:
		{
			RuntimeObject * L_10 = V_3;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_10, /*hidden argument*/NULL);
		}

IL_0056:
		{
			IL2CPP_END_FINALLY(76)
		}
	}// end finally (depth: 1)
	IL2CPP_CLEANUP(76)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x57, IL_0057)
	}

IL_0057:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/VRRManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VRRManager_Update_mB395B3B20FDB532B695DB80117CC29EEACC479C8 (VRRManager_tB79C0272A6886E77A12ADF1365B76758606FD1AC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_IndexOf_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m1F0420BEEDFC9FDB3682212205F4F8124BA3EA7E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject * V_1 = NULL;
	bool V_2 = false;
	int32_t V_3 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	VariableRefreshRateEventHandler_t06D300F6DD7FDB78D3404003A1C81A149DBFAC83 * G_B14_0 = NULL;
	VariableRefreshRateEventHandler_t06D300F6DD7FDB78D3404003A1C81A149DBFAC83 * G_B13_0 = NULL;
	{
		// bool refreshRateChanged = false;
		V_0 = (bool)0;
		// lock (m_RefreshRateChangedLock)
		RuntimeObject * L_0 = __this->get_m_RefreshRateChangedLock_1();
		V_1 = L_0;
		V_2 = (bool)0;
	}

IL_000b:
	try
	{// begin try (depth: 1)
		RuntimeObject * L_1 = V_1;
		Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_1, (bool*)(&V_2), /*hidden argument*/NULL);
		// refreshRateChanged = m_RefreshRateChanged;
		bool L_2 = __this->get_m_RefreshRateChanged_2();
		V_0 = L_2;
		// m_RefreshRateChanged = false;
		__this->set_m_RefreshRateChanged_2((bool)0);
		// }
		IL2CPP_LEAVE(0x2D, FINALLY_0023);
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0023;
	}

FINALLY_0023:
	{// begin finally (depth: 1)
		{
			bool L_3 = V_2;
			if (!L_3)
			{
				goto IL_002c;
			}
		}

IL_0026:
		{
			RuntimeObject * L_4 = V_1;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_4, /*hidden argument*/NULL);
		}

IL_002c:
		{
			IL2CPP_END_FINALLY(35)
		}
	}// end finally (depth: 1)
	IL2CPP_CLEANUP(35)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x2D, IL_002d)
	}

IL_002d:
	{
		// if (refreshRateChanged)
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_008d;
		}
	}
	{
		// UpdateRefreshRateInfo();
		VRRManager_UpdateRefreshRateInfo_m4E1752C6E5AAB1C6D228C41890D2BC86859FE0FC(__this, /*hidden argument*/NULL);
		// var index = Array.IndexOf(m_SupportedRefreshRates, m_LastSetRefreshRate);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_6 = __this->get_m_SupportedRefreshRates_3();
		int32_t L_7 = __this->get_m_LastSetRefreshRate_5();
		int32_t L_8;
		L_8 = Array_IndexOf_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m1F0420BEEDFC9FDB3682212205F4F8124BA3EA7E(L_6, L_7, /*hidden argument*/Array_IndexOf_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m1F0420BEEDFC9FDB3682212205F4F8124BA3EA7E_RuntimeMethod_var);
		V_3 = L_8;
		// if (index != -1)
		int32_t L_9 = V_3;
		if ((((int32_t)L_9) == ((int32_t)(-1))))
		{
			goto IL_0056;
		}
	}
	{
		// SetRefreshRateByIndexInternal(index);
		int32_t L_10 = V_3;
		bool L_11;
		L_11 = VRRManager_SetRefreshRateByIndexInternal_m4A9F508EEA5B461AF9B1790DE0EDFBD06FD461DF(__this, L_10, /*hidden argument*/NULL);
		// }
		goto IL_007d;
	}

IL_0056:
	{
		// else if (index == -1 && m_LastSetRefreshRate != -1)
		int32_t L_12 = V_3;
		if ((!(((uint32_t)L_12) == ((uint32_t)(-1)))))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_13 = __this->get_m_LastSetRefreshRate_5();
		if ((((int32_t)L_13) == ((int32_t)(-1))))
		{
			goto IL_007d;
		}
	}
	{
		// index = Array.IndexOf(m_SupportedRefreshRates, 60);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_14 = __this->get_m_SupportedRefreshRates_3();
		int32_t L_15;
		L_15 = Array_IndexOf_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m1F0420BEEDFC9FDB3682212205F4F8124BA3EA7E(L_14, ((int32_t)60), /*hidden argument*/Array_IndexOf_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m1F0420BEEDFC9FDB3682212205F4F8124BA3EA7E_RuntimeMethod_var);
		V_3 = L_15;
		// if (index != -1)
		int32_t L_16 = V_3;
		if ((((int32_t)L_16) == ((int32_t)(-1))))
		{
			goto IL_007d;
		}
	}
	{
		// SetRefreshRateByIndexInternal(index);
		int32_t L_17 = V_3;
		bool L_18;
		L_18 = VRRManager_SetRefreshRateByIndexInternal_m4A9F508EEA5B461AF9B1790DE0EDFBD06FD461DF(__this, L_17, /*hidden argument*/NULL);
	}

IL_007d:
	{
		// RefreshRateChanged?.Invoke();
		VariableRefreshRateEventHandler_t06D300F6DD7FDB78D3404003A1C81A149DBFAC83 * L_19 = __this->get_RefreshRateChanged_6();
		VariableRefreshRateEventHandler_t06D300F6DD7FDB78D3404003A1C81A149DBFAC83 * L_20 = L_19;
		G_B13_0 = L_20;
		if (L_20)
		{
			G_B14_0 = L_20;
			goto IL_0088;
		}
	}
	{
		return;
	}

IL_0088:
	{
		NullCheck(G_B14_0);
		VariableRefreshRateEventHandler_Invoke_mE450A684864C914BB2E39BF846FC5895B32084B6(G_B14_0, /*hidden argument*/NULL);
	}

IL_008d:
	{
		// }
		return;
	}
}
// System.Int32[] UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/VRRManager::get_SupportedRefreshRates()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* VRRManager_get_SupportedRefreshRates_mF54CF20B28CDEFCE5F0E31C24361C884379FBE40 (VRRManager_tB79C0272A6886E77A12ADF1365B76758606FD1AC * __this, const RuntimeMethod* method)
{
	{
		// public int[] SupportedRefreshRates { get { return m_SupportedRefreshRates; } }
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = __this->get_m_SupportedRefreshRates_3();
		return L_0;
	}
}
// System.Int32 UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/VRRManager::get_CurrentRefreshRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VRRManager_get_CurrentRefreshRate_mCB3E96E69BE7FCCB27DEE5DE8D9D978382C494E1 (VRRManager_tB79C0272A6886E77A12ADF1365B76758606FD1AC * __this, const RuntimeMethod* method)
{
	{
		// public int CurrentRefreshRate { get { return m_CurrentRefreshRate; } }
		int32_t L_0 = __this->get_m_CurrentRefreshRate_4();
		return L_0;
	}
}
// System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/VRRManager::SetRefreshRateByIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VRRManager_SetRefreshRateByIndex_mA80FB6C930C038472C3A459D749DA88C1EC9F1E7 (VRRManager_tB79C0272A6886E77A12ADF1365B76758606FD1AC * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// settings.automaticVRR = false;
		IL2CPP_RUNTIME_CLASS_INIT(SamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C_il2cpp_TypeInfo_var);
		SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A * L_0 = ((SamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C_StaticFields*)il2cpp_codegen_static_fields_for(SamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C_il2cpp_TypeInfo_var))->get_settings_16();
		NullCheck(L_0);
		SamsungAndroidProviderSettings_set_automaticVRR_mB8D70EDEEE0B7E821C6CF92D8592B3CF382AAD5C_inline(L_0, (bool)0, /*hidden argument*/NULL);
		// return SetRefreshRateByIndexInternal(index);
		int32_t L_1 = ___index0;
		bool L_2;
		L_2 = VRRManager_SetRefreshRateByIndexInternal_m4A9F508EEA5B461AF9B1790DE0EDFBD06FD461DF(__this, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/VRRManager::SetRefreshRateByIndexInternal(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VRRManager_SetRefreshRateByIndexInternal_m4A9F508EEA5B461AF9B1790DE0EDFBD06FD461DF (VRRManager_tB79C0272A6886E77A12ADF1365B76758606FD1AC * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (index >= 0 && index < SupportedRefreshRates.Length)
		int32_t L_0 = ___index0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0069;
		}
	}
	{
		int32_t L_1 = ___index0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_2;
		L_2 = VRRManager_get_SupportedRefreshRates_mF54CF20B28CDEFCE5F0E31C24361C884379FBE40_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		if ((((int32_t)L_1) >= ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0069;
		}
	}
	{
		// var refreshRateFromIndex = SupportedRefreshRates[index];
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_3;
		L_3 = VRRManager_get_SupportedRefreshRates_mF54CF20B28CDEFCE5F0E31C24361C884379FBE40_inline(__this, /*hidden argument*/NULL);
		int32_t L_4 = ___index0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		int32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_0 = L_6;
		// if (Application.targetFrameRate > 0 && index > 0 && SupportedRefreshRates[--index] > Application.targetFrameRate)
		int32_t L_7;
		L_7 = Application_get_targetFrameRate_m2BB711703471EC6C1E1B11A714B9005BB92C1E71(/*hidden argument*/NULL);
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_8 = ___index0;
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_9;
		L_9 = VRRManager_get_SupportedRefreshRates_mF54CF20B28CDEFCE5F0E31C24361C884379FBE40_inline(__this, /*hidden argument*/NULL);
		int32_t L_10 = ___index0;
		int32_t L_11 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1));
		___index0 = L_11;
		NullCheck(L_9);
		int32_t L_12 = L_11;
		int32_t L_13 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		int32_t L_14;
		L_14 = Application_get_targetFrameRate_m2BB711703471EC6C1E1B11A714B9005BB92C1E71(/*hidden argument*/NULL);
	}

IL_0038:
	{
		// if (!settings.highSpeedVRR)
		IL2CPP_RUNTIME_CLASS_INIT(SamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C_il2cpp_TypeInfo_var);
		SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A * L_15 = ((SamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C_StaticFields*)il2cpp_codegen_static_fields_for(SamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C_il2cpp_TypeInfo_var))->get_settings_16();
		NullCheck(L_15);
		bool L_16;
		L_16 = SamsungAndroidProviderSettings_get_highSpeedVRR_mA9BB44B728682221720176AFAF52FB5EF9DC39EB_inline(L_15, /*hidden argument*/NULL);
		if (L_16)
		{
			goto IL_004b;
		}
	}
	{
		// if (refreshRateFromIndex > 60)
		int32_t L_17 = V_0;
		if ((((int32_t)L_17) <= ((int32_t)((int32_t)60))))
		{
			goto IL_004b;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_004b:
	{
		// if (m_Api.SetRefreshRate(refreshRateFromIndex))
		NativeApi_tD3C6227610A80C8E6E1025587E3361786C0B8123 * L_18 = __this->get_m_Api_0();
		int32_t L_19 = V_0;
		NullCheck(L_18);
		bool L_20;
		L_20 = NativeApi_SetRefreshRate_m52925DC9713CC70F59F9DB9929D51A2E6A0D183C(L_18, L_19, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_0069;
		}
	}
	{
		// m_CurrentRefreshRate = refreshRateFromIndex;
		int32_t L_21 = V_0;
		__this->set_m_CurrentRefreshRate_4(L_21);
		// m_LastSetRefreshRate = refreshRateFromIndex;
		int32_t L_22 = V_0;
		__this->set_m_LastSetRefreshRate_5(L_22);
		// return true;
		return (bool)1;
	}

IL_0069:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/VRRManager::add_RefreshRateChanged(UnityEngine.AdaptivePerformance.Samsung.Android.VariableRefreshRateEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VRRManager_add_RefreshRateChanged_mE3D540DCB7FE9D2BA10E31F0CFE65F1CCB73B5D0 (VRRManager_tB79C0272A6886E77A12ADF1365B76758606FD1AC * __this, VariableRefreshRateEventHandler_t06D300F6DD7FDB78D3404003A1C81A149DBFAC83 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VariableRefreshRateEventHandler_t06D300F6DD7FDB78D3404003A1C81A149DBFAC83_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	VariableRefreshRateEventHandler_t06D300F6DD7FDB78D3404003A1C81A149DBFAC83 * V_0 = NULL;
	VariableRefreshRateEventHandler_t06D300F6DD7FDB78D3404003A1C81A149DBFAC83 * V_1 = NULL;
	VariableRefreshRateEventHandler_t06D300F6DD7FDB78D3404003A1C81A149DBFAC83 * V_2 = NULL;
	{
		VariableRefreshRateEventHandler_t06D300F6DD7FDB78D3404003A1C81A149DBFAC83 * L_0 = __this->get_RefreshRateChanged_6();
		V_0 = L_0;
	}

IL_0007:
	{
		VariableRefreshRateEventHandler_t06D300F6DD7FDB78D3404003A1C81A149DBFAC83 * L_1 = V_0;
		V_1 = L_1;
		VariableRefreshRateEventHandler_t06D300F6DD7FDB78D3404003A1C81A149DBFAC83 * L_2 = V_1;
		VariableRefreshRateEventHandler_t06D300F6DD7FDB78D3404003A1C81A149DBFAC83 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((VariableRefreshRateEventHandler_t06D300F6DD7FDB78D3404003A1C81A149DBFAC83 *)CastclassSealed((RuntimeObject*)L_4, VariableRefreshRateEventHandler_t06D300F6DD7FDB78D3404003A1C81A149DBFAC83_il2cpp_TypeInfo_var));
		VariableRefreshRateEventHandler_t06D300F6DD7FDB78D3404003A1C81A149DBFAC83 ** L_5 = __this->get_address_of_RefreshRateChanged_6();
		VariableRefreshRateEventHandler_t06D300F6DD7FDB78D3404003A1C81A149DBFAC83 * L_6 = V_2;
		VariableRefreshRateEventHandler_t06D300F6DD7FDB78D3404003A1C81A149DBFAC83 * L_7 = V_1;
		VariableRefreshRateEventHandler_t06D300F6DD7FDB78D3404003A1C81A149DBFAC83 * L_8;
		L_8 = InterlockedCompareExchangeImpl<VariableRefreshRateEventHandler_t06D300F6DD7FDB78D3404003A1C81A149DBFAC83 *>((VariableRefreshRateEventHandler_t06D300F6DD7FDB78D3404003A1C81A149DBFAC83 **)L_5, L_6, L_7);
		V_0 = L_8;
		VariableRefreshRateEventHandler_t06D300F6DD7FDB78D3404003A1C81A149DBFAC83 * L_9 = V_0;
		VariableRefreshRateEventHandler_t06D300F6DD7FDB78D3404003A1C81A149DBFAC83 * L_10 = V_1;
		if ((!(((RuntimeObject*)(VariableRefreshRateEventHandler_t06D300F6DD7FDB78D3404003A1C81A149DBFAC83 *)L_9) == ((RuntimeObject*)(VariableRefreshRateEventHandler_t06D300F6DD7FDB78D3404003A1C81A149DBFAC83 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/VRRManager::remove_RefreshRateChanged(UnityEngine.AdaptivePerformance.Samsung.Android.VariableRefreshRateEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VRRManager_remove_RefreshRateChanged_m5A343B49324E3F30331729FE428785F420DF8892 (VRRManager_tB79C0272A6886E77A12ADF1365B76758606FD1AC * __this, VariableRefreshRateEventHandler_t06D300F6DD7FDB78D3404003A1C81A149DBFAC83 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VariableRefreshRateEventHandler_t06D300F6DD7FDB78D3404003A1C81A149DBFAC83_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	VariableRefreshRateEventHandler_t06D300F6DD7FDB78D3404003A1C81A149DBFAC83 * V_0 = NULL;
	VariableRefreshRateEventHandler_t06D300F6DD7FDB78D3404003A1C81A149DBFAC83 * V_1 = NULL;
	VariableRefreshRateEventHandler_t06D300F6DD7FDB78D3404003A1C81A149DBFAC83 * V_2 = NULL;
	{
		VariableRefreshRateEventHandler_t06D300F6DD7FDB78D3404003A1C81A149DBFAC83 * L_0 = __this->get_RefreshRateChanged_6();
		V_0 = L_0;
	}

IL_0007:
	{
		VariableRefreshRateEventHandler_t06D300F6DD7FDB78D3404003A1C81A149DBFAC83 * L_1 = V_0;
		V_1 = L_1;
		VariableRefreshRateEventHandler_t06D300F6DD7FDB78D3404003A1C81A149DBFAC83 * L_2 = V_1;
		VariableRefreshRateEventHandler_t06D300F6DD7FDB78D3404003A1C81A149DBFAC83 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((VariableRefreshRateEventHandler_t06D300F6DD7FDB78D3404003A1C81A149DBFAC83 *)CastclassSealed((RuntimeObject*)L_4, VariableRefreshRateEventHandler_t06D300F6DD7FDB78D3404003A1C81A149DBFAC83_il2cpp_TypeInfo_var));
		VariableRefreshRateEventHandler_t06D300F6DD7FDB78D3404003A1C81A149DBFAC83 ** L_5 = __this->get_address_of_RefreshRateChanged_6();
		VariableRefreshRateEventHandler_t06D300F6DD7FDB78D3404003A1C81A149DBFAC83 * L_6 = V_2;
		VariableRefreshRateEventHandler_t06D300F6DD7FDB78D3404003A1C81A149DBFAC83 * L_7 = V_1;
		VariableRefreshRateEventHandler_t06D300F6DD7FDB78D3404003A1C81A149DBFAC83 * L_8;
		L_8 = InterlockedCompareExchangeImpl<VariableRefreshRateEventHandler_t06D300F6DD7FDB78D3404003A1C81A149DBFAC83 *>((VariableRefreshRateEventHandler_t06D300F6DD7FDB78D3404003A1C81A149DBFAC83 **)L_5, L_6, L_7);
		V_0 = L_8;
		VariableRefreshRateEventHandler_t06D300F6DD7FDB78D3404003A1C81A149DBFAC83 * L_9 = V_0;
		VariableRefreshRateEventHandler_t06D300F6DD7FDB78D3404003A1C81A149DBFAC83 * L_10 = V_1;
		if ((!(((RuntimeObject*)(VariableRefreshRateEventHandler_t06D300F6DD7FDB78D3404003A1C81A149DBFAC83 *)L_9) == ((RuntimeObject*)(VariableRefreshRateEventHandler_t06D300F6DD7FDB78D3404003A1C81A149DBFAC83 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/VRRManager::OnRefreshRateChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VRRManager_OnRefreshRateChanged_m81C98F65D566943F3094926E406ECE057C006149 (VRRManager_tB79C0272A6886E77A12ADF1365B76758606FD1AC * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// lock (m_RefreshRateChangedLock)
		RuntimeObject * L_0 = __this->get_m_RefreshRateChangedLock_1();
		V_0 = L_0;
		V_1 = (bool)0;
	}

IL_0009:
	try
	{// begin try (depth: 1)
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_1, (bool*)(&V_1), /*hidden argument*/NULL);
		// m_RefreshRateChanged = true;
		__this->set_m_RefreshRateChanged_2((bool)1);
		// }
		IL2CPP_LEAVE(0x24, FINALLY_001a);
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_001a;
	}

FINALLY_001a:
	{// begin finally (depth: 1)
		{
			bool L_2 = V_1;
			if (!L_2)
			{
				goto IL_0023;
			}
		}

IL_001d:
		{
			RuntimeObject * L_3 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_3, /*hidden argument*/NULL);
		}

IL_0023:
		{
			IL2CPP_END_FINALLY(26)
		}
	}// end finally (depth: 1)
	IL2CPP_CLEANUP(26)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x24, IL_0024)
	}

IL_0024:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* VariableRefreshRate_get_Instance_mEF8EA6B518B43B9ECF2F493D20AE908A66934765_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VariableRefreshRate_t57603D16D53370D4A4A0485DA7D22C0D9980C9BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static public IVariableRefreshRate Instance { get; set; }
		RuntimeObject* L_0 = ((VariableRefreshRate_t57603D16D53370D4A4A0485DA7D22C0D9980C9BD_StaticFields*)il2cpp_codegen_static_fields_for(VariableRefreshRate_t57603D16D53370D4A4A0485DA7D22C0D9980C9BD_il2cpp_TypeInfo_var))->get_U3CInstanceU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SamsungAndroidProviderSettings_get_samsungProviderLogging_m71DA5B62D909EA7009C760C09856D986751522F4_inline (SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A * __this, const RuntimeMethod* method)
{
	{
		// get { return m_SamsungProviderLogging; }
		bool L_0 = __this->get_m_SamsungProviderLogging_9();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A * SamsungAndroidProviderSettings_GetSettings_m5F3D48F7276BAC793B6E1B0174B71E8010BC5EDA_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// settings = s_RuntimeInstance;
		IL2CPP_RUNTIME_CLASS_INIT(SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A_il2cpp_TypeInfo_var);
		SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A * L_0 = ((SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A_StaticFields*)il2cpp_codegen_static_fields_for(SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A_il2cpp_TypeInfo_var))->get_s_RuntimeInstance_12();
		// return settings;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SamsungGameSDKAdaptivePerformanceSubsystem_set_MaxCpuPerformanceLevel_mD7C7AA35D50B81A48BBE3483D96631725C576D75_inline (SamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int MaxCpuPerformanceLevel { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CMaxCpuPerformanceLevelU3Ek__BackingField_14(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SamsungGameSDKAdaptivePerformanceSubsystem_set_MaxGpuPerformanceLevel_mC4E2203C66BE865BBA77B688C9541E6FD21AC718_inline (SamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int MaxGpuPerformanceLevel { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CMaxGpuPerformanceLevelU3Ek__BackingField_15(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdaptivePerformanceSubsystem_set_Capabilities_mF23CD425E540211D811415BC365B8B1E366A871E_inline (AdaptivePerformanceSubsystem_tD1EF79067301732948F731CDD69D58FECB6571FA * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public Feature Capabilities { get; protected set; }
		int32_t L_0 = ___value0;
		__this->set_U3CCapabilitiesU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PerformanceDataRecord_get_ChangeFlags_mC5F321C8B1FE45A2B8006EF6BAC115A98951D986_inline (PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 * __this, const RuntimeMethod* method)
{
	{
		// public Feature ChangeFlags { get; set; }
		int32_t L_0 = __this->get_U3CChangeFlagsU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PerformanceDataRecord_set_ChangeFlags_mB0DC1EED75676328BDE9B4A26BA5640A289CC588_inline (PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public Feature ChangeFlags { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CChangeFlagsU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PerformanceDataRecord_set_WarningLevel_m2DB9AD544AE5D331DAFE1C48368C9FA1B49C4C57_inline (PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public WarningLevel WarningLevel { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CWarningLevelU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PerformanceDataRecord_set_CpuPerformanceLevel_mC0AE860D4BE810163256F7858E7ABCE42717F1BE_inline (PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int CpuPerformanceLevel { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CCpuPerformanceLevelU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PerformanceDataRecord_set_GpuPerformanceLevel_m275CAD6DC74E064DCF2AC3200674F6F6824BEFF6_inline (PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int GpuPerformanceLevel { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CGpuPerformanceLevelU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PerformanceDataRecord_set_TemperatureLevel_mD76D4B33A2B613DF248F510337819E9CDBF86837_inline (PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float TemperatureLevel { get; set; }
		float L_0 = ___value0;
		__this->set_U3CTemperatureLevelU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdaptivePerformanceSubsystemBase_set_initialized_mA650001F7F14114A248F3B834E31499DCFB2554D_inline (AdaptivePerformanceSubsystemBase_t6FF55B768F8B0E39432CE60CDD86D1BC8DC235CC * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool initialized { get; protected set; }
		bool L_0 = ___value0;
		__this->set_U3CinitializedU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PerformanceDataRecord_set_PerformanceLevelControlAvailable_m65B14EA8893E776B2D21ABB18B49D97A82D1AF1C_inline (PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool PerformanceLevelControlAvailable { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CPerformanceLevelControlAvailableU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AdaptivePerformanceSubsystemBase_get_initialized_mDE838BDEAF9C32DFAEBFAE92ABED9629EF6C04E8_inline (AdaptivePerformanceSubsystemBase_t6FF55B768F8B0E39432CE60CDD86D1BC8DC235CC * __this, const RuntimeMethod* method)
{
	{
		// public bool initialized { get; protected set; }
		bool L_0 = __this->get_U3CinitializedU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VariableRefreshRate_set_Instance_mA2EE58BBB76707BB9BF63B80898DB64E9D4D7782_inline (RuntimeObject* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VariableRefreshRate_t57603D16D53370D4A4A0485DA7D22C0D9980C9BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static public IVariableRefreshRate Instance { get; set; }
		RuntimeObject* L_0 = ___value0;
		((VariableRefreshRate_t57603D16D53370D4A4A0485DA7D22C0D9980C9BD_StaticFields*)il2cpp_codegen_static_fields_for(VariableRefreshRate_t57603D16D53370D4A4A0485DA7D22C0D9980C9BD_il2cpp_TypeInfo_var))->set_U3CInstanceU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SamsungAndroidProviderSettings_get_automaticVRR_m4221B3258B342205B45B533671E17B29B81A6686_inline (SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A * __this, const RuntimeMethod* method)
{
	{
		// get { return m_AutomaticVRR; }
		bool L_0 = __this->get_m_AutomaticVRR_11();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PerformanceDataRecord_set_GpuFrameTime_mA7EEAA1D8ECBF75147158304A3941FDA752E2DA7_inline (PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float GpuFrameTime { get; set; }
		float L_0 = ___value0;
		__this->set_U3CGpuFrameTimeU3Ek__BackingField_8(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SamsungGameSDKAdaptivePerformanceSubsystem_get_MaxCpuPerformanceLevel_m176AD6DD52A90769BD504009C172D895113B0D2D_inline (SamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C * __this, const RuntimeMethod* method)
{
	{
		// public int MaxCpuPerformanceLevel { get; set; }
		int32_t L_0 = __this->get_U3CMaxCpuPerformanceLevelU3Ek__BackingField_14();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SamsungGameSDKAdaptivePerformanceSubsystem_get_MaxGpuPerformanceLevel_m848ABADDEB3EDBE03F3626AE166EF8CB7E4CC464_inline (SamsungGameSDKAdaptivePerformanceSubsystem_tBC3C277E87FA4BC26BBE5D9C91274B8BD5859E0C * __this, const RuntimeMethod* method)
{
	{
		// public int MaxGpuPerformanceLevel { get; set; }
		int32_t L_0 = __this->get_U3CMaxGpuPerformanceLevelU3Ek__BackingField_15();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PerformanceDataRecord_get_CpuPerformanceLevel_m5347895DB794F91B4CE64C6E3795A51FD2B85E0D_inline (PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 * __this, const RuntimeMethod* method)
{
	{
		// public int CpuPerformanceLevel { get; set; }
		int32_t L_0 = __this->get_U3CCpuPerformanceLevelU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PerformanceDataRecord_get_GpuPerformanceLevel_mA7D3F637ABB320066197C9615F85F828F59DB874_inline (PerformanceDataRecord_t8CE6387D60208359C276BA5A784DB40DF114B457 * __this, const RuntimeMethod* method)
{
	{
		// public int GpuPerformanceLevel { get; set; }
		int32_t L_0 = __this->get_U3CGpuPerformanceLevelU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_id_m8AF0A1044992B420D9D28DBDB141B92256847BFA_inline (Cinfo_t343E1319F64BFAAB6A935377090A355E67211F2B * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemImplementationType_m697DC61FEB48A3F81FC6A9FCDDD46E796F6E5342_inline (Cinfo_t343E1319F64BFAAB6A935377090A355E67211F2B * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type subsystemImplementationType { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CsubsystemImplementationTypeU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SamsungAndroidProviderSettings_set_automaticVRR_mB8D70EDEEE0B7E821C6CF92D8592B3CF382AAD5C_inline (SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { m_AutomaticVRR = value; }
		bool L_0 = ___value0;
		__this->set_m_AutomaticVRR_11(L_0);
		// set { m_AutomaticVRR = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SamsungAndroidProviderSettings_get_highSpeedVRR_mA9BB44B728682221720176AFAF52FB5EF9DC39EB_inline (SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A * __this, const RuntimeMethod* method)
{
	{
		// get { return m_HighSpeedVRR; }
		bool L_0 = __this->get_m_HighSpeedVRR_10();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* VRRManager_get_SupportedRefreshRates_mF54CF20B28CDEFCE5F0E31C24361C884379FBE40_inline (VRRManager_tB79C0272A6886E77A12ADF1365B76758606FD1AC * __this, const RuntimeMethod* method)
{
	{
		// public int[] SupportedRefreshRates { get { return m_SupportedRefreshRates; } }
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = __this->get_m_SupportedRefreshRates_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_m7B5E3383CB67492E573AC0D875ED82A51350F188_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double AsyncValue_1_get_value_mB10EA452BBD5046293C947527CD4FACB92A00922_gshared_inline (AsyncValue_1_t15F502DBC70872D99B55432A512A864625B26F15 * __this, const RuntimeMethod* method)
{
	{
		// public T value { get; private set; }
		double L_0 = (double)__this->get_U3CvalueU3Ek__BackingField_7();
		return (double)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m002765312BF306B1B3B5BFAB9550C0A2A1820CDA_gshared_inline (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ((EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0;
	}
}
