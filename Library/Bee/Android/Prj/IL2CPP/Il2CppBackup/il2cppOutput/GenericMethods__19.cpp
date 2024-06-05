#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif




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
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2Invoker;
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2Invoker<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		R ret;
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerActionInvoker6;
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerActionInvoker6<T1*, T2, T3, T4, T5*, T6*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4 p4, T5* p5, T6* p6)
	{
		void* params[6] = { p1, &p2, &p3, &p4, p5, p6 };
		method->invoker_method(methodPtr, method, obj, params, params[5]);
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		R ret;
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4;
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1, T2, T3*, T4>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3* p3, T4 p4)
	{
		R ret;
		void* params[4] = { &p1, &p2, p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1>
struct ConstrainedFuncInvoker1;
template <typename R, typename T1>
struct ConstrainedFuncInvoker1<R, T1*>
{
	static inline R Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, params, &ret);
		return ret;
	}
};

struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C;
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404;
struct Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99;
struct Action_1_t00621160046FE06A171CE95A003D9AE71EBB2B1D;
struct Action_2_tB3E4CF19F3493DE4FE84AFFB77005AE79F9A3758;
struct Action_2_t94C644233E37D574986F0297182FA2BD8972B44A;
struct Action_2_tD2AB9B0AB95F0653AC53DC5114E5EC2958A3E36A;
struct Comparer_1_t49F23FD0F51B7B3F17D30558E0A425107523CC30;
struct Comparer_1_t7EDCB50F141B8333E02C67781CAC2D41381F0563;
struct Comparer_1_tFA27DAC2908F666A385A0E5699BB66735365343B;
struct Comparer_1_t58CF625431A0184A14FF0A33D14229F8F6EA3C98;
struct Comparer_1_t535E02B3998AA8B49230077EF0DFCB16BA44C985;
struct Dictionary_2_tE738E3156DB830A7FCEA2AE6066FC5BEA6715F0D;
struct Dictionary_2_tE62F67DD5E0705D89AA8A2987FB3C4C21A3C9AAF;
struct Dictionary_2_t18C83CD24384334A550468AC80B4F64B179517FB;
struct DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB;
struct DynamicArray_1_t7C64F5A74B7BA6F6B3589A766CADE3F59C6C7BCA;
struct DynamicArray_1_tD456FAFFECC4879D97EE0F550727BF9C6B0B3FE6;
struct DynamicArray_1_t85D77BAA52B2801695EAE751BA0F9DD3C26AA604;
struct EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8;
struct EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B;
struct EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B;
struct EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70;
struct EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9;
struct Field_1_t32151A22D4B1B5C1DFFDDACD9F3C78D19596507A;
struct Field_1_t7F813BE8CAF3F3F635B34474DDD7B797C5B6CD2A;
struct Field_1_tEE1A923EA8160028BC34CE74DF77A8FB37FCA5D3;
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457;
struct Func_1_tC288CCB64EFD1F5FD49C3F8DE91FE62905E44BCD;
struct Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431;
struct Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F;
struct Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9;
struct Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821;
struct ITypeConstructor_1_t81670FEA206550EF92A986F4A63FC5302AB1D638;
struct ITypeConstructor_1_t3B0FE01881012CC548F6EE132D9D04AA93EDE092;
struct ITypeConstructor_1_t73C3366FF37ECFD1CC6142A80D1A0E31E89DDB04;
struct ITypeConstructor_1_t0FE2B73907C0A0AEB0E84716E021DD7420B23A2B;
struct ITypeConstructor_1_t5E4FD8D127EC0F24B375DF611109A9783C9949D0;
struct ITypeConstructor_1_tADCE5163310B602EB1878CA0050295BFB0F6B542;
struct ITypeConstructor_1_t5B814DBA70C191660AF27E38032998417073D7A2;
struct List_1_tCD7772AB40D4E7A61CCAFDDF9E33C190D4F9E6D4;
struct List_1_t179992B095C528117EEF4782A1F45568BD2D51EA;
struct ObjectPool_1_t7FA933D4164A730DB5D7E5E1D315B49D70184F03;
struct ObjectPool_1_t26A8D6F0AC3E7D5C10AB98A9AF68B2EBC2ABE7EF;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct GUIContentU5BU5D_t98DA1EEA8D0A2C4AE42CE11C4840B627CADFC503;
struct IRenderGraphResourceU5BU5D_tC72A5980774D8ACE9E681BE8A3FAB493A70BC2F3;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct PlaneU5BU5D_t4EEF66BAA8B0140EFFF34F6183CE7F80546592BE;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct WidgetU5BU5D_t39DEA55B87EF43C59C5699E0340B34185BA1E4A2;
struct LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263;
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
struct ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct IRenderGraphResource_tF24653A388C17849844C128C19C7A6599C7ADB7D;
struct IRenderGraphResourcePool_t8BF833F3C5D0BD8E45632CF923363EC782F4DDA8;
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3;
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
struct MethodInfo_t;
struct ProbeBrickBlendingPool_tD0DBB9B875C8C88A6410A239987DA3F9F4BE18F8;
struct ProbeBrickIndex_tF1B02DB88E5F4CF79533962B018B5724D74E32D2;
struct ProbeBrickPool_tC43640788A2B356F3F99A068D2CED6702E721693;
struct ProbeCellIndices_t0A30314A2B1D5F97E16BD321C179801D1B42C6AF;
struct ProbeReferenceVolume_t05ED7EF2BB9B58F26CE1629F0AA773D14100695F;
struct ProbeVolumeDebug_t295620780739F33AEAD1D1BB44C5252CE70D3DD8;
struct ProbeVolumeSceneData_t29FD126D36ED1E093C2EBBFB3F248DD5E2A86D90;
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692;
struct String_t;
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
struct Texture3D_tDC30A0F19B6055086859D1ABC098D6E6762000E1;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct EnumField_t15C8FC0EB96499DFDCEC2B9DBB27B2BBCD5E262C;
struct IContainer_tBD9F21C42D4253E306C4EF7CFC72480E0C7C89B5;
struct Panel_t3A0D2006E8AEA607A6DF5188138E463A26085295;
struct U3CU3Ec__DisplayClass171_0_t70061616D0F785A73C9408015CCBEBC3C2B43646;
struct RenderGraphResourcesData_tB2FF97B16A3E1DE700283778679C5CC0C39F4CFE;
struct ResourceCallback_t45358BA8AC82EF742271B868C50331854DD58EEC;
struct ITypeConstructor_tAEA6BC4B87F0F3739E4457F21908EF55F666EB08;
struct TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F;

IL2CPP_EXTERN_C RuntimeClass* Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* DynamicArray_1_Resize_mEEEB907EAEFD4C22DB449FF052CF6AC967A27AD1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DynamicArray_1_get_Item_m5FC9383C3A815B0DF7AAD4C2A5CDFB1A25586ECE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DynamicArray_1_get_size_m56D2768863B15299FA4F2F14E271686207A8C2E4_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct Comparer_1_t49F23FD0F51B7B3F17D30558E0A425107523CC30  : public RuntimeObject
{
};
struct Comparer_1_t7EDCB50F141B8333E02C67781CAC2D41381F0563  : public RuntimeObject
{
};
struct Comparer_1_tFA27DAC2908F666A385A0E5699BB66735365343B  : public RuntimeObject
{
};
struct Comparer_1_t58CF625431A0184A14FF0A33D14229F8F6EA3C98  : public RuntimeObject
{
};
struct Comparer_1_t535E02B3998AA8B49230077EF0DFCB16BA44C985  : public RuntimeObject
{
};
struct DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB  : public RuntimeObject
{
	IRenderGraphResourceU5BU5D_tC72A5980774D8ACE9E681BE8A3FAB493A70BC2F3* ___m_Array;
	int32_t ___U3CsizeU3Ek__BackingField;
	int32_t ___U3CversionU3Ek__BackingField;
};
struct DynamicArray_1_t7C64F5A74B7BA6F6B3589A766CADE3F59C6C7BCA  : public RuntimeObject
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_Array;
	int32_t ___U3CsizeU3Ek__BackingField;
	int32_t ___U3CversionU3Ek__BackingField;
};
struct EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8  : public RuntimeObject
{
};
struct EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B  : public RuntimeObject
{
};
struct EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B  : public RuntimeObject
{
};
struct EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70  : public RuntimeObject
{
};
struct EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9  : public RuntimeObject
{
};
struct IRenderGraphResource_tF24653A388C17849844C128C19C7A6599C7ADB7D  : public RuntimeObject
{
	bool ___imported;
	bool ___shared;
	bool ___sharedExplicitRelease;
	bool ___requestFallBack;
	uint32_t ___writeCount;
	int32_t ___cachedHash;
	int32_t ___transientPassIndex;
	int32_t ___sharedResourceLastFrameUsed;
	IRenderGraphResourcePool_t8BF833F3C5D0BD8E45632CF923363EC782F4DDA8* ___m_Pool;
};
struct IRenderGraphResourcePool_t8BF833F3C5D0BD8E45632CF923363EC782F4DDA8  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct RenderGraphResourcesData_tB2FF97B16A3E1DE700283778679C5CC0C39F4CFE  : public RuntimeObject
{
	DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB* ___resourceArray;
	int32_t ___sharedResourcesCount;
	IRenderGraphResourcePool_t8BF833F3C5D0BD8E45632CF923363EC782F4DDA8* ___pool;
	ResourceCallback_t45358BA8AC82EF742271B868C50331854DD58EEC* ___createResourceCallback;
	ResourceCallback_t45358BA8AC82EF742271B868C50331854DD58EEC* ___releaseResourceCallback;
};
struct TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F  : public RuntimeObject
{
	RuntimeObject* ___TypeConstructor;
};
struct Avx2_tEF5390382630DE33677921890832DA46CE372FBC  : public RuntimeObject
{
};
struct Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C  : public RuntimeObject
{
};
struct U3CU3Ec__DisplayClass2_0_1_t95D21073081C2AD9435E6E2ED2FD63B720ABF032 
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___data;
};
struct U3CU3Ec__DisplayClass2_0_1_tC4E3D65CA470C2F2DB85D9B32B717BE3200D4597 
{
	LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___data;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	double ___m_value;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	int16_t ___m_value;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	int64_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	int32_t ___m_Mask;
};
struct ProbeDilationSettings_t28A862582E313EFC300E6437FDCB9D9DC9A9A167 
{
	bool ___enableDilation;
	float ___dilationDistance;
	float ___dilationValidityThreshold;
	int32_t ___dilationIterations;
	bool ___squaredDistWeighting;
};
struct ProbeDilationSettings_t28A862582E313EFC300E6437FDCB9D9DC9A9A167_marshaled_pinvoke
{
	int32_t ___enableDilation;
	float ___dilationDistance;
	float ___dilationValidityThreshold;
	int32_t ___dilationIterations;
	int32_t ___squaredDistWeighting;
};
struct ProbeDilationSettings_t28A862582E313EFC300E6437FDCB9D9DC9A9A167_marshaled_com
{
	int32_t ___enableDilation;
	float ___dilationDistance;
	float ___dilationValidityThreshold;
	int32_t ___dilationIterations;
	int32_t ___squaredDistWeighting;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	int8_t ___m_value;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	uint16_t ___m_value;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
};
struct Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 
{
	int32_t ___m_X;
	int32_t ___m_Y;
	int32_t ___m_Z;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
struct v64_t9C4037532D386FF1E9B95E5FBD01FEF472AC1F96 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___Byte0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___Byte0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte1_OffsetPadding[1];
			uint8_t ___Byte1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte1_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___Byte1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte2_OffsetPadding[2];
			uint8_t ___Byte2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte2_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___Byte2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte3_OffsetPadding[3];
			uint8_t ___Byte3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte3_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___Byte3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte4_OffsetPadding[4];
			uint8_t ___Byte4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte4_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___Byte4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte5_OffsetPadding[5];
			uint8_t ___Byte5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte5_OffsetPadding_forAlignmentOnly[5];
			uint8_t ___Byte5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte6_OffsetPadding[6];
			uint8_t ___Byte6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte6_OffsetPadding_forAlignmentOnly[6];
			uint8_t ___Byte6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte7_OffsetPadding[7];
			uint8_t ___Byte7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte7_OffsetPadding_forAlignmentOnly[7];
			uint8_t ___Byte7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int8_t ___SByte0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___SByte0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte1_OffsetPadding[1];
			int8_t ___SByte1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte1_OffsetPadding_forAlignmentOnly[1];
			int8_t ___SByte1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte2_OffsetPadding[2];
			int8_t ___SByte2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte2_OffsetPadding_forAlignmentOnly[2];
			int8_t ___SByte2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte3_OffsetPadding[3];
			int8_t ___SByte3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte3_OffsetPadding_forAlignmentOnly[3];
			int8_t ___SByte3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte4_OffsetPadding[4];
			int8_t ___SByte4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___SByte4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte5_OffsetPadding[5];
			int8_t ___SByte5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte5_OffsetPadding_forAlignmentOnly[5];
			int8_t ___SByte5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte6_OffsetPadding[6];
			int8_t ___SByte6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte6_OffsetPadding_forAlignmentOnly[6];
			int8_t ___SByte6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte7_OffsetPadding[7];
			int8_t ___SByte7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte7_OffsetPadding_forAlignmentOnly[7];
			int8_t ___SByte7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint16_t ___UShort0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint16_t ___UShort0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort1_OffsetPadding[2];
			uint16_t ___UShort1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort1_OffsetPadding_forAlignmentOnly[2];
			uint16_t ___UShort1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort2_OffsetPadding[4];
			uint16_t ___UShort2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort2_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___UShort2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort3_OffsetPadding[6];
			uint16_t ___UShort3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort3_OffsetPadding_forAlignmentOnly[6];
			uint16_t ___UShort3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int16_t ___SShort0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___SShort0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort1_OffsetPadding[2];
			int16_t ___SShort1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort1_OffsetPadding_forAlignmentOnly[2];
			int16_t ___SShort1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort2_OffsetPadding[4];
			int16_t ___SShort2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort2_OffsetPadding_forAlignmentOnly[4];
			int16_t ___SShort2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort3_OffsetPadding[6];
			int16_t ___SShort3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort3_OffsetPadding_forAlignmentOnly[6];
			int16_t ___SShort3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint32_t ___UInt0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t ___UInt0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UInt1_OffsetPadding[4];
			uint32_t ___UInt1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UInt1_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___UInt1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___SInt0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___SInt0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SInt1_OffsetPadding[4];
			int32_t ___SInt1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SInt1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___SInt1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint64_t ___ULong0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___ULong0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___SLong0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___SLong0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___Float0;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___Float0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Float1_OffsetPadding[4];
			float ___Float1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Float1_OffsetPadding_forAlignmentOnly[4];
			float ___Float1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___Double0;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___Double0_forAlignmentOnly;
		};
	};
};
struct LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 
{
	uint16_t ___visibleLightIndex;
	uint16_t ___lightBufferIndex;
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___light;
};
struct LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_marshaled_pinvoke
{
	uint16_t ___visibleLightIndex;
	uint16_t ___lightBufferIndex;
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___light;
};
struct LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_marshaled_com
{
	uint16_t ___visibleLightIndex;
	uint16_t ___lightBufferIndex;
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___light;
};
struct Sorting_t85E1835DC268F696F8A2F1E889C951F4C48DC994 
{
	union
	{
		struct
		{
		};
		uint8_t Sorting_t85E1835DC268F696F8A2F1E889C951F4C48DC994__padding[1];
	};
};
struct DataLocation_t34FC6B68E8194966FC3C075EF4227E1522CB53BB 
{
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___TexL0_L1rx;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___TexL1_G_ry;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___TexL1_B_rz;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___TexL2_0;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___TexL2_1;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___TexL2_2;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___TexL2_3;
	Texture3D_tDC30A0F19B6055086859D1ABC098D6E6762000E1* ___TexValidity;
	int32_t ___width;
	int32_t ___height;
	int32_t ___depth;
};
struct DataLocation_t34FC6B68E8194966FC3C075EF4227E1522CB53BB_marshaled_pinvoke
{
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___TexL0_L1rx;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___TexL1_G_ry;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___TexL1_B_rz;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___TexL2_0;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___TexL2_1;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___TexL2_2;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___TexL2_3;
	Texture3D_tDC30A0F19B6055086859D1ABC098D6E6762000E1* ___TexValidity;
	int32_t ___width;
	int32_t ___height;
	int32_t ___depth;
};
struct DataLocation_t34FC6B68E8194966FC3C075EF4227E1522CB53BB_marshaled_com
{
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___TexL0_L1rx;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___TexL1_G_ry;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___TexL1_B_rz;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___TexL2_0;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___TexL2_1;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___TexL2_2;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___TexL2_3;
	Texture3D_tDC30A0F19B6055086859D1ABC098D6E6762000E1* ___TexValidity;
	int32_t ___width;
	int32_t ___height;
	int32_t ___depth;
};
struct U3CBitsU3Ee__FixedBuffer_tFED81968B5AEB075B5560B55A16A31C5F01A83BD 
{
	union
	{
		struct
		{
			uint16_t ___FixedElementField;
		};
		uint8_t U3CBitsU3Ee__FixedBuffer_tFED81968B5AEB075B5560B55A16A31C5F01A83BD__padding[32];
	};
};
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents;
};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct ProbeVolumeBlendingTextureMemoryBudget_t7EE399384930322B57F0CF83315FE1FA651CB002 
{
	int32_t ___value__;
};
struct ProbeVolumeSHBands_t1515D16254FE4344C5FC4C9506F4F9A7ABA4D194 
{
	int32_t ___value__;
};
struct ProbeVolumeTextureMemoryBudget_t9F9B7221A5D6E98DAED0233C050A91A2D745CB66 
{
	int32_t ___value__;
};
struct VirtualOffsetSettings_tC91F136546790A8318F26B183DCB14460F426A44 
{
	bool ___useVirtualOffset;
	float ___outOfGeoOffset;
	float ___searchMultiplier;
	float ___rayOriginBias;
	int32_t ___maxHitsPerRay;
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___collisionMask;
};
struct VirtualOffsetSettings_tC91F136546790A8318F26B183DCB14460F426A44_marshaled_pinvoke
{
	int32_t ___useVirtualOffset;
	float ___outOfGeoOffset;
	float ___searchMultiplier;
	float ___rayOriginBias;
	int32_t ___maxHitsPerRay;
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___collisionMask;
};
struct VirtualOffsetSettings_tC91F136546790A8318F26B183DCB14460F426A44_marshaled_com
{
	int32_t ___useVirtualOffset;
	float ___outOfGeoOffset;
	float ___searchMultiplier;
	float ___rayOriginBias;
	int32_t ___maxHitsPerRay;
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___collisionMask;
};
struct v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___Byte0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___Byte0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte1_OffsetPadding[1];
			uint8_t ___Byte1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte1_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___Byte1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte2_OffsetPadding[2];
			uint8_t ___Byte2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte2_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___Byte2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte3_OffsetPadding[3];
			uint8_t ___Byte3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte3_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___Byte3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte4_OffsetPadding[4];
			uint8_t ___Byte4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte4_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___Byte4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte5_OffsetPadding[5];
			uint8_t ___Byte5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte5_OffsetPadding_forAlignmentOnly[5];
			uint8_t ___Byte5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte6_OffsetPadding[6];
			uint8_t ___Byte6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte6_OffsetPadding_forAlignmentOnly[6];
			uint8_t ___Byte6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte7_OffsetPadding[7];
			uint8_t ___Byte7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte7_OffsetPadding_forAlignmentOnly[7];
			uint8_t ___Byte7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte8_OffsetPadding[8];
			uint8_t ___Byte8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte8_OffsetPadding_forAlignmentOnly[8];
			uint8_t ___Byte8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte9_OffsetPadding[9];
			uint8_t ___Byte9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte9_OffsetPadding_forAlignmentOnly[9];
			uint8_t ___Byte9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte10_OffsetPadding[10];
			uint8_t ___Byte10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte10_OffsetPadding_forAlignmentOnly[10];
			uint8_t ___Byte10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte11_OffsetPadding[11];
			uint8_t ___Byte11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte11_OffsetPadding_forAlignmentOnly[11];
			uint8_t ___Byte11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte12_OffsetPadding[12];
			uint8_t ___Byte12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte12_OffsetPadding_forAlignmentOnly[12];
			uint8_t ___Byte12_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte13_OffsetPadding[13];
			uint8_t ___Byte13;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte13_OffsetPadding_forAlignmentOnly[13];
			uint8_t ___Byte13_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte14_OffsetPadding[14];
			uint8_t ___Byte14;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte14_OffsetPadding_forAlignmentOnly[14];
			uint8_t ___Byte14_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte15_OffsetPadding[15];
			uint8_t ___Byte15;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte15_OffsetPadding_forAlignmentOnly[15];
			uint8_t ___Byte15_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int8_t ___SByte0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___SByte0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte1_OffsetPadding[1];
			int8_t ___SByte1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte1_OffsetPadding_forAlignmentOnly[1];
			int8_t ___SByte1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte2_OffsetPadding[2];
			int8_t ___SByte2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte2_OffsetPadding_forAlignmentOnly[2];
			int8_t ___SByte2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte3_OffsetPadding[3];
			int8_t ___SByte3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte3_OffsetPadding_forAlignmentOnly[3];
			int8_t ___SByte3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte4_OffsetPadding[4];
			int8_t ___SByte4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___SByte4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte5_OffsetPadding[5];
			int8_t ___SByte5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte5_OffsetPadding_forAlignmentOnly[5];
			int8_t ___SByte5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte6_OffsetPadding[6];
			int8_t ___SByte6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte6_OffsetPadding_forAlignmentOnly[6];
			int8_t ___SByte6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte7_OffsetPadding[7];
			int8_t ___SByte7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte7_OffsetPadding_forAlignmentOnly[7];
			int8_t ___SByte7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte8_OffsetPadding[8];
			int8_t ___SByte8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte8_OffsetPadding_forAlignmentOnly[8];
			int8_t ___SByte8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte9_OffsetPadding[9];
			int8_t ___SByte9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte9_OffsetPadding_forAlignmentOnly[9];
			int8_t ___SByte9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte10_OffsetPadding[10];
			int8_t ___SByte10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte10_OffsetPadding_forAlignmentOnly[10];
			int8_t ___SByte10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte11_OffsetPadding[11];
			int8_t ___SByte11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte11_OffsetPadding_forAlignmentOnly[11];
			int8_t ___SByte11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte12_OffsetPadding[12];
			int8_t ___SByte12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte12_OffsetPadding_forAlignmentOnly[12];
			int8_t ___SByte12_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte13_OffsetPadding[13];
			int8_t ___SByte13;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte13_OffsetPadding_forAlignmentOnly[13];
			int8_t ___SByte13_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte14_OffsetPadding[14];
			int8_t ___SByte14;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte14_OffsetPadding_forAlignmentOnly[14];
			int8_t ___SByte14_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte15_OffsetPadding[15];
			int8_t ___SByte15;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte15_OffsetPadding_forAlignmentOnly[15];
			int8_t ___SByte15_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint16_t ___UShort0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint16_t ___UShort0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort1_OffsetPadding[2];
			uint16_t ___UShort1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort1_OffsetPadding_forAlignmentOnly[2];
			uint16_t ___UShort1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort2_OffsetPadding[4];
			uint16_t ___UShort2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort2_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___UShort2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort3_OffsetPadding[6];
			uint16_t ___UShort3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort3_OffsetPadding_forAlignmentOnly[6];
			uint16_t ___UShort3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort4_OffsetPadding[8];
			uint16_t ___UShort4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort4_OffsetPadding_forAlignmentOnly[8];
			uint16_t ___UShort4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort5_OffsetPadding[10];
			uint16_t ___UShort5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort5_OffsetPadding_forAlignmentOnly[10];
			uint16_t ___UShort5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort6_OffsetPadding[12];
			uint16_t ___UShort6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort6_OffsetPadding_forAlignmentOnly[12];
			uint16_t ___UShort6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort7_OffsetPadding[14];
			uint16_t ___UShort7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort7_OffsetPadding_forAlignmentOnly[14];
			uint16_t ___UShort7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int16_t ___SShort0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___SShort0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort1_OffsetPadding[2];
			int16_t ___SShort1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort1_OffsetPadding_forAlignmentOnly[2];
			int16_t ___SShort1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort2_OffsetPadding[4];
			int16_t ___SShort2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort2_OffsetPadding_forAlignmentOnly[4];
			int16_t ___SShort2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort3_OffsetPadding[6];
			int16_t ___SShort3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort3_OffsetPadding_forAlignmentOnly[6];
			int16_t ___SShort3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort4_OffsetPadding[8];
			int16_t ___SShort4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort4_OffsetPadding_forAlignmentOnly[8];
			int16_t ___SShort4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort5_OffsetPadding[10];
			int16_t ___SShort5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort5_OffsetPadding_forAlignmentOnly[10];
			int16_t ___SShort5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort6_OffsetPadding[12];
			int16_t ___SShort6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort6_OffsetPadding_forAlignmentOnly[12];
			int16_t ___SShort6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort7_OffsetPadding[14];
			int16_t ___SShort7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort7_OffsetPadding_forAlignmentOnly[14];
			int16_t ___SShort7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint32_t ___UInt0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t ___UInt0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UInt1_OffsetPadding[4];
			uint32_t ___UInt1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UInt1_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___UInt1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UInt2_OffsetPadding[8];
			uint32_t ___UInt2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UInt2_OffsetPadding_forAlignmentOnly[8];
			uint32_t ___UInt2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UInt3_OffsetPadding[12];
			uint32_t ___UInt3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UInt3_OffsetPadding_forAlignmentOnly[12];
			uint32_t ___UInt3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___SInt0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___SInt0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SInt1_OffsetPadding[4];
			int32_t ___SInt1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SInt1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___SInt1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SInt2_OffsetPadding[8];
			int32_t ___SInt2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SInt2_OffsetPadding_forAlignmentOnly[8];
			int32_t ___SInt2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SInt3_OffsetPadding[12];
			int32_t ___SInt3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SInt3_OffsetPadding_forAlignmentOnly[12];
			int32_t ___SInt3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint64_t ___ULong0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___ULong0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ULong1_OffsetPadding[8];
			uint64_t ___ULong1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ULong1_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___ULong1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___SLong0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___SLong0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SLong1_OffsetPadding[8];
			int64_t ___SLong1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SLong1_OffsetPadding_forAlignmentOnly[8];
			int64_t ___SLong1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___Float0;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___Float0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Float1_OffsetPadding[4];
			float ___Float1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Float1_OffsetPadding_forAlignmentOnly[4];
			float ___Float1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Float2_OffsetPadding[8];
			float ___Float2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Float2_OffsetPadding_forAlignmentOnly[8];
			float ___Float2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Float3_OffsetPadding[12];
			float ___Float3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Float3_OffsetPadding_forAlignmentOnly[12];
			float ___Float3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___Double0;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___Double0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Double1_OffsetPadding[8];
			double ___Double1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Double1_OffsetPadding_forAlignmentOnly[8];
			double ___Double1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			v64_t9C4037532D386FF1E9B95E5FBD01FEF472AC1F96 ___Lo64;
		};
		#pragma pack(pop, tp)
		struct
		{
			v64_t9C4037532D386FF1E9B95E5FBD01FEF472AC1F96 ___Lo64_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Hi64_OffsetPadding[8];
			v64_t9C4037532D386FF1E9B95E5FBD01FEF472AC1F96 ___Hi64;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Hi64_OffsetPadding_forAlignmentOnly[8];
			v64_t9C4037532D386FF1E9B95E5FBD01FEF472AC1F96 ___Hi64_forAlignmentOnly;
		};
	};
};
struct Flags_tBBD3C554E9057BB9AC0476F92D0328575F2C4193 
{
	int32_t ___value__;
};
struct InitInfo_t704DDF4A7F366AB2C84F08404C424B877802B058 
{
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___pendingMinCellPosition;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___pendingMaxCellPosition;
};
struct RefVolTransform_t23FA849BA67F6FB0FDC6BA49A08C41D654FC8CE9 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___posWS;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rot;
	float ___scale;
};
struct SettingsVersion_t3663C03E36EF45364E201CE47DCA26BDFCF05A2E 
{
	int32_t ___value__;
};
struct StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6 
{
	U3CBitsU3Ee__FixedBuffer_tFED81968B5AEB075B5560B55A16A31C5F01A83BD ___Bits;
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct ProbeVolumeBakingProcessSettings_t1A0C71DD07CFB6660AFC0D3EBF81FA5064CFDAD7 
{
	int32_t ___m_Version;
	ProbeDilationSettings_t28A862582E313EFC300E6437FDCB9D9DC9A9A167 ___dilationSettings;
	VirtualOffsetSettings_tC91F136546790A8318F26B183DCB14460F426A44 ___virtualOffsetSettings;
};
struct ProbeVolumeBakingProcessSettings_t1A0C71DD07CFB6660AFC0D3EBF81FA5064CFDAD7_marshaled_pinvoke
{
	int32_t ___m_Version;
	ProbeDilationSettings_t28A862582E313EFC300E6437FDCB9D9DC9A9A167_marshaled_pinvoke ___dilationSettings;
	VirtualOffsetSettings_tC91F136546790A8318F26B183DCB14460F426A44_marshaled_pinvoke ___virtualOffsetSettings;
};
struct ProbeVolumeBakingProcessSettings_t1A0C71DD07CFB6660AFC0D3EBF81FA5064CFDAD7_marshaled_com
{
	int32_t ___m_Version;
	ProbeDilationSettings_t28A862582E313EFC300E6437FDCB9D9DC9A9A167_marshaled_com ___dilationSettings;
	VirtualOffsetSettings_tC91F136546790A8318F26B183DCB14460F426A44_marshaled_com ___virtualOffsetSettings;
};
struct ProbeVolumeSystemParameters_t0654F2626ACA367E00C375BEB6FEA5B86CB0A58B 
{
	int32_t ___memoryBudget;
	int32_t ___blendingMemoryBudget;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___probeDebugMesh;
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___probeDebugShader;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___offsetDebugMesh;
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___offsetDebugShader;
	ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* ___scenarioBlendingShader;
	ProbeVolumeSceneData_t29FD126D36ED1E093C2EBBFB3F248DD5E2A86D90* ___sceneData;
	int32_t ___shBands;
	bool ___supportsRuntimeDebug;
	bool ___supportStreaming;
};
struct ProbeVolumeSystemParameters_t0654F2626ACA367E00C375BEB6FEA5B86CB0A58B_marshaled_pinvoke
{
	int32_t ___memoryBudget;
	int32_t ___blendingMemoryBudget;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___probeDebugMesh;
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___probeDebugShader;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___offsetDebugMesh;
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___offsetDebugShader;
	ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* ___scenarioBlendingShader;
	ProbeVolumeSceneData_t29FD126D36ED1E093C2EBBFB3F248DD5E2A86D90* ___sceneData;
	int32_t ___shBands;
	int32_t ___supportsRuntimeDebug;
	int32_t ___supportStreaming;
};
struct ProbeVolumeSystemParameters_t0654F2626ACA367E00C375BEB6FEA5B86CB0A58B_marshaled_com
{
	int32_t ___memoryBudget;
	int32_t ___blendingMemoryBudget;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___probeDebugMesh;
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___probeDebugShader;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___offsetDebugMesh;
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___offsetDebugShader;
	ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* ___scenarioBlendingShader;
	ProbeVolumeSceneData_t29FD126D36ED1E093C2EBBFB3F248DD5E2A86D90* ___sceneData;
	int32_t ___shBands;
	int32_t ___supportsRuntimeDebug;
	int32_t ___supportStreaming;
};
struct Widget_tE8D6AF1D7525CC84E8F2C3B73162016736A6A2FF  : public RuntimeObject
{
	Panel_t3A0D2006E8AEA607A6DF5188138E463A26085295* ___m_Panel;
	RuntimeObject* ___m_Parent;
	int32_t ___U3CflagsU3Ek__BackingField;
	String_t* ___U3CdisplayNameU3Ek__BackingField;
	String_t* ___U3CtooltipU3Ek__BackingField;
	String_t* ___U3CqueryPathU3Ek__BackingField;
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___isHiddenCallback;
};
struct Field_1_t32151A22D4B1B5C1DFFDDACD9F3C78D19596507A  : public Widget_tE8D6AF1D7525CC84E8F2C3B73162016736A6A2FF
{
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___U3CgetterU3Ek__BackingField;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___U3CsetterU3Ek__BackingField;
	Action_2_tB3E4CF19F3493DE4FE84AFFB77005AE79F9A3758* ___onValueChanged;
};
struct Field_1_t7F813BE8CAF3F3F635B34474DDD7B797C5B6CD2A  : public Widget_tE8D6AF1D7525CC84E8F2C3B73162016736A6A2FF
{
	Func_1_tC288CCB64EFD1F5FD49C3F8DE91FE62905E44BCD* ___U3CgetterU3Ek__BackingField;
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CsetterU3Ek__BackingField;
	Action_2_t94C644233E37D574986F0297182FA2BD8972B44A* ___onValueChanged;
};
struct Field_1_tEE1A923EA8160028BC34CE74DF77A8FB37FCA5D3  : public Widget_tE8D6AF1D7525CC84E8F2C3B73162016736A6A2FF
{
	Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431* ___U3CgetterU3Ek__BackingField;
	Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* ___U3CsetterU3Ek__BackingField;
	Action_2_tD2AB9B0AB95F0653AC53DC5114E5EC2958A3E36A* ___onValueChanged;
};
struct Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F  : public MulticastDelegate_t
{
};
struct Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9  : public MulticastDelegate_t
{
};
struct Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821  : public MulticastDelegate_t
{
};
struct ProbeReferenceVolume_t05ED7EF2BB9B58F26CE1629F0AA773D14100695F  : public RuntimeObject
{
	bool ___m_IsInitialized;
	bool ___m_SupportStreaming;
	RefVolTransform_t23FA849BA67F6FB0FDC6BA49A08C41D654FC8CE9 ___m_Transform;
	int32_t ___m_MaxSubdivision;
	ProbeBrickPool_tC43640788A2B356F3F99A068D2CED6702E721693* ___m_Pool;
	ProbeBrickIndex_tF1B02DB88E5F4CF79533962B018B5724D74E32D2* ___m_Index;
	ProbeCellIndices_t0A30314A2B1D5F97E16BD321C179801D1B42C6AF* ___m_CellIndices;
	ProbeBrickBlendingPool_tD0DBB9B875C8C88A6410A239987DA3F9F4BE18F8* ___m_BlendingPool;
	List_1_t179992B095C528117EEF4782A1F45568BD2D51EA* ___m_TmpSrcChunks;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_PositionOffsets;
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___m_CurrGlobalBounds;
	Dictionary_2_tE62F67DD5E0705D89AA8A2987FB3C4C21A3C9AAF* ___cells;
	ObjectPool_1_t26A8D6F0AC3E7D5C10AB98A9AF68B2EBC2ABE7EF* ___m_CellInfoPool;
	ObjectPool_1_t7FA933D4164A730DB5D7E5E1D315B49D70184F03* ___m_BlendingCellInfoPool;
	DataLocation_t34FC6B68E8194966FC3C075EF4227E1522CB53BB ___m_TemporaryDataLocation;
	int32_t ___m_TemporaryDataLocationMemCost;
	int32_t ___m_CurrentProbeVolumeChunkSizeInBricks;
	ProbeVolumeSceneData_t29FD126D36ED1E093C2EBBFB3F248DD5E2A86D90* ___sceneData;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___minLoadedCellPos;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___maxLoadedCellPos;
	Action_1_t00621160046FE06A171CE95A003D9AE71EBB2B1D* ___retrieveExtraDataAction;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___checksDuringBakeAction;
	bool ___m_BricksLoaded;
	Dictionary_2_t18C83CD24384334A550468AC80B4F64B179517FB* ___m_PendingAssetsToBeLoaded;
	Dictionary_2_t18C83CD24384334A550468AC80B4F64B179517FB* ___m_PendingAssetsToBeUnloaded;
	Dictionary_2_t18C83CD24384334A550468AC80B4F64B179517FB* ___m_ActiveAssets;
	bool ___m_NeedLoadAsset;
	bool ___m_ProbeReferenceVolumeInit;
	bool ___m_EnabledBySRP;
	InitInfo_t704DDF4A7F366AB2C84F08404C424B877802B058 ___m_PendingInitInfo;
	bool ___m_NeedsIndexRebuild;
	bool ___m_HasChangedIndex;
	int32_t ___m_CBShaderID;
	int32_t ___m_NumberOfCellsLoadedPerFrame;
	int32_t ___m_NumberOfCellsBlendedPerFrame;
	float ___m_TurnoverRate;
	int32_t ___m_MemoryBudget;
	int32_t ___m_BlendingMemoryBudget;
	int32_t ___m_SHBands;
	float ___m_ProbeVolumesWeight;
	bool ___clearAssetsOnVolumeClear;
	List_1_tCD7772AB40D4E7A61CCAFDDF9E33C190D4F9E6D4* ___U3CperSceneDataListU3Ek__BackingField;
	ProbeVolumeDebug_t295620780739F33AEAD1D1BB44C5252CE70D3DD8* ___U3CprobeVolumeDebugU3Ek__BackingField;
	ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ___U3CsubdivisionDebugColorsU3Ek__BackingField;
	WidgetU5BU5D_t39DEA55B87EF43C59C5699E0340B34185BA1E4A2* ___m_DebugItems;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_DebugMesh;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_DebugMaterial;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_DebugOffsetMesh;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_DebugOffsetMaterial;
	PlaneU5BU5D_t4EEF66BAA8B0140EFFF34F6183CE7F80546592BE* ___m_DebugFrustumPlanes;
	GUIContentU5BU5D_t98DA1EEA8D0A2C4AE42CE11C4840B627CADFC503* ___m_DebugScenarioNames;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___m_DebugScenarioValues;
	String_t* ___m_DebugActiveSceneGUID;
	String_t* ___m_DebugActiveScenario;
	EnumField_t15C8FC0EB96499DFDCEC2B9DBB27B2BBCD5E262C* ___m_DebugScenarioField;
	ProbeVolumeBakingProcessSettings_t1A0C71DD07CFB6660AFC0D3EBF81FA5064CFDAD7 ___bakingProcessSettings;
	Dictionary_2_tE738E3156DB830A7FCEA2AE6066FC5BEA6715F0D* ___realtimeSubdivisionInfo;
	bool ___m_MaxSubdivVisualizedIsMaxAvailable;
	DynamicArray_1_t85D77BAA52B2801695EAE751BA0F9DD3C26AA604* ___m_LoadedCells;
	DynamicArray_1_t85D77BAA52B2801695EAE751BA0F9DD3C26AA604* ___m_ToBeLoadedCells;
	DynamicArray_1_t85D77BAA52B2801695EAE751BA0F9DD3C26AA604* ___m_TempCellToLoadList;
	DynamicArray_1_t85D77BAA52B2801695EAE751BA0F9DD3C26AA604* ___m_TempCellToUnloadList;
	DynamicArray_1_tD456FAFFECC4879D97EE0F550727BF9C6B0B3FE6* ___m_LoadedBlendingCells;
	DynamicArray_1_tD456FAFFECC4879D97EE0F550727BF9C6B0B3FE6* ___m_ToBeLoadedBlendingCells;
	DynamicArray_1_tD456FAFFECC4879D97EE0F550727BF9C6B0B3FE6* ___m_TempBlendingCellToLoadList;
	DynamicArray_1_tD456FAFFECC4879D97EE0F550727BF9C6B0B3FE6* ___m_TempBlendingCellToUnloadList;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_FrozenCameraPosition;
	bool ___m_HasRemainingCellsToBlend;
};
struct U3CU3Ec__DisplayClass171_0_t70061616D0F785A73C9408015CCBEBC3C2B43646  : public RuntimeObject
{
	ProbeReferenceVolume_t05ED7EF2BB9B58F26CE1629F0AA773D14100695F* ___U3CU3E4__this;
	ProbeVolumeSystemParameters_t0654F2626ACA367E00C375BEB6FEA5B86CB0A58B ___parameters;
};
struct Comparer_1_t49F23FD0F51B7B3F17D30558E0A425107523CC30_StaticFields
{
	Comparer_1_t49F23FD0F51B7B3F17D30558E0A425107523CC30* ___defaultComparer;
};
struct Comparer_1_t7EDCB50F141B8333E02C67781CAC2D41381F0563_StaticFields
{
	Comparer_1_t7EDCB50F141B8333E02C67781CAC2D41381F0563* ___defaultComparer;
};
struct Comparer_1_tFA27DAC2908F666A385A0E5699BB66735365343B_StaticFields
{
	Comparer_1_tFA27DAC2908F666A385A0E5699BB66735365343B* ___defaultComparer;
};
struct Comparer_1_t58CF625431A0184A14FF0A33D14229F8F6EA3C98_StaticFields
{
	Comparer_1_t58CF625431A0184A14FF0A33D14229F8F6EA3C98* ___defaultComparer;
};
struct Comparer_1_t535E02B3998AA8B49230077EF0DFCB16BA44C985_StaticFields
{
	Comparer_1_t535E02B3998AA8B49230077EF0DFCB16BA44C985* ___defaultComparer;
};
struct EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8_StaticFields
{
	EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* ___defaultComparer;
};
struct EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B_StaticFields
{
	EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* ___defaultComparer;
};
struct EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B_StaticFields
{
	EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* ___defaultComparer;
};
struct EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70_StaticFields
{
	EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* ___defaultComparer;
};
struct EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9_StaticFields
{
	EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* ___defaultComparer;
};
struct Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_StaticFields
{
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___crctab;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector;
};
struct LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_StaticFields
{
	Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___s_CompareByCookieSize;
	Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___s_CompareByBufferIndex;
};
struct ProbeReferenceVolume_t05ED7EF2BB9B58F26CE1629F0AA773D14100695F_StaticFields
{
	String_t* ___defaultLightingScenario;
	ProbeReferenceVolume_t05ED7EF2BB9B58F26CE1629F0AA773D14100695F* ____instance;
	String_t* ___k_DebugPanelName;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};
struct LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263  : public RuntimeArray
{
	ALIGN_FIELD (8) LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 m_Items[1];

	inline LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___light), (void*)NULL);
	}
	inline LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___light), (void*)NULL);
	}
};
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 m_Items[1];

	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 value)
	{
		m_Items[index] = value;
	}
};


IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_3_Invoke_m2AED59BE1B0645C0DB5DAE117842A1C0AD4BDEBB_gshared_inline (Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* __this, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 ___0_arg1, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 ___1_arg2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_U3CMedian3PivotU3Eg__SwapU7C2_0_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m06FED96568508A808BFC2F0CB6D49F45194E6051_gshared (int32_t ___0_a, int32_t ___1_b, U3CU3Ec__DisplayClass2_0_1_tC4E3D65CA470C2F2DB85D9B32B717BE3200D4597* ___2_p, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Sorting_Median3Pivot_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m61A04EAD49649BB481C390575840F890DC1AD6D9_gshared (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_data, int32_t ___1_start, int32_t ___2_pivot, int32_t ___3_end, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___4_compare, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_3_Invoke_mE6CD106F59B0ADD2DF9C211DC4CF4088F5A1A4BB_gshared_inline (Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_arg1, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___1_arg2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 Sorting_Median3Pivot_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m3AE419868146FAEE6A59E9FA4E33484BFA9930B1_gshared (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___0_data, int32_t ___1_start, int32_t ___2_pivot, int32_t ___3_end, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___4_compare, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_InsertionSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m6B06894C5FA146D1CCE7ECBC21F553F16F2E96F5_gshared (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___3_compare, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sorting_Partition_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m5B1882A69C494B64F1EA761E21D0018C1D6AB6E8_gshared (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___3_compare, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_QuickSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mAA6CA24576E19917524BFD6BE7AC3ACF4A18B570_gshared (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___3_compare, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_InsertionSort_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m50C92303E813A7BFD084FB309E5FB9937C8F2065_gshared (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___3_compare, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sorting_Partition_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m0E79CA1E375645FFDF3E1506F789825A9A6D3D95_gshared (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___3_compare, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_QuickSort_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_mADD51465439832E9BCC31668A2DE42CFCCA07F9C_gshared (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___3_compare, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DynamicArray_1_get_size_m1B00C20A8CC4D62269585D16A58425D3F258836F_gshared_inline (DynamicArray_1_t7C64F5A74B7BA6F6B3589A766CADE3F59C6C7BCA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicArray_1_Resize_m3E24EB8A4A036B423BA304E8C3C94EBD0222822E_gshared (DynamicArray_1_t7C64F5A74B7BA6F6B3589A766CADE3F59C6C7BCA* __this, int32_t ___0_newSize, bool ___1_keepContent, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject** DynamicArray_1_get_Item_m7DDF1E462D1484149A4D812CAD717F816205FD44_gshared (DynamicArray_1_t7C64F5A74B7BA6F6B3589A766CADE3F59C6C7BCA* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Activator_CreateInstance_TisRuntimeObject_m62506836177F0F862A8D619638BF37F48721F138_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m16C827D0F6107B7998F6C99B57F7CC2F181E2198_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisBoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_m8F344250A2F9E6EE6DDBA6BA833BB36D0F272B66_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisRuntimeObject_m4E17F588B090C1DADAE2D986BDA407DECEAC020F_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m2C5F5CF80D13B041768C7845C5AAEEC02BB683BA_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisRectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_mF6949D9EDD480E6666CD975C66487AAD6ABC7D11_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_mC8EF710494C8986B279262C6C64947BE2C1DC55C_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_mB00220519A80AA5ACE36B7DBA2E6A6CB796302AF_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* EqualityComparer_1_get_Default_m41DB4C0E0A508A8326E903331DC63D410B7AB9C4_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Comparer_1_t49F23FD0F51B7B3F17D30558E0A425107523CC30* Comparer_1_get_Default_m84FF70BAB6A30BC2A0EABE8B0E58FCBD8F40C8FB_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* EqualityComparer_1_get_Default_m7D273CC532DC2164C9C86D28C639FDEA38173C88_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Comparer_1_t7EDCB50F141B8333E02C67781CAC2D41381F0563* Comparer_1_get_Default_mE45154132033749FD101CB1689E0375B42C4B407_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* EqualityComparer_1_get_Default_m7F71AAC0046A3CB8C4CEB06A5A52A1269AF7023D_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Comparer_1_tFA27DAC2908F666A385A0E5699BB66735365343B* Comparer_1_get_Default_m84816461184ACF98D5F66D45F43652587DA47B4F_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* EqualityComparer_1_get_Default_m80EE5C179E01BB38904781592AC72F8137541D7E_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Comparer_1_t58CF625431A0184A14FF0A33D14229F8F6EA3C98* Comparer_1_get_Default_m5B4E9A09E85C87692450A9D2BC5C99C3E5DC1E36_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStrCmpIntRes2_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5D9BE946098FA4C7FC8CC23DEE63A0877E8D6C8B_gshared (uint8_t* ___0_a, int32_t ___1_alen, uint8_t* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStrCmpIntRes2_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mB3F9377B1A57D35D5514DEF77B3D9279A8622960_gshared (int16_t* ___0_a, int32_t ___1_alen, int16_t* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStrCmpIntRes2_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mA23FD3A0C3B4448E4721DA31DA7B4B93A636A3FD_gshared (int8_t* ___0_a, int32_t ___1_alen, int8_t* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStrCmpIntRes2_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m331D979D640CF9DF04C505875F9FB702E217B2AB_gshared (uint16_t* ___0_a, int32_t ___1_alen, uint16_t* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1CC4D51DF3F513318DCC288B066D0018EAF9C235_gshared (int32_t ___0_len, int32_t ___1_imm8, uint8_t ___2_allOnesT, int32_t ___3_intRes2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE92FFA321425E5808CD20616DC308BA7B36886E8_gshared (int32_t ___0_len, int32_t ___1_imm8, int16_t ___2_allOnesT, int32_t ___3_intRes2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m5EFDDE5126FDB6BF9F9ED55B39751B517522C455_gshared (int32_t ___0_len, int32_t ___1_imm8, int8_t ___2_allOnesT, int32_t ___3_intRes2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mD44F4B084A230ACD38B4FCF13923F8986AFF0AB1_gshared (int32_t ___0_len, int32_t ___1_imm8, uint16_t ___2_allOnesT, int32_t ___3_intRes2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStringLength_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD30812062AA4852D166ABCDF3D79FDD1856F173A_gshared (uint8_t* ___0_ptr, int32_t ___1_max, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStringLength_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m3EBC75C6F39A7B1A5F62D88877C87C9F3B5617A3_gshared (int16_t* ___0_ptr, int32_t ___1_max, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStringLength_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m73215CC1A28F076B0D2472385756C7AF58CBA171_gshared (int8_t* ___0_ptr, int32_t ___1_max, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStringLength_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m000E8D7B908376D69E48EACF3E6811C4DEE7A05D_gshared (uint16_t* ___0_ptr, int32_t ___1_max, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* EqualityComparer_1_CreateComparer_mEBC7BD29A8FD796A4DAA1DF4428B95D1BA4FB377_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* EqualityComparer_1_CreateComparer_m22AF3135664449980749E1EC32EB92DB49219F9B_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* EqualityComparer_1_CreateComparer_mD5EE323D1C48F0C09CBB944FA81707B8FEE2DB6D_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* EqualityComparer_1_CreateComparer_m5F906E9B13BCCCDF51EF0852BD9E5E0065D185F8_gshared (const RuntimeMethod* method) ;

inline int32_t Func_3_Invoke_m2AED59BE1B0645C0DB5DAE117842A1C0AD4BDEBB_inline (Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* __this, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 ___0_arg1, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 ___1_arg2, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821*, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2, const RuntimeMethod*))Func_3_Invoke_m2AED59BE1B0645C0DB5DAE117842A1C0AD4BDEBB_gshared_inline)(__this, ___0_arg1, ___1_arg2, method);
}
inline void Sorting_U3CMedian3PivotU3Eg__SwapU7C2_0_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m06FED96568508A808BFC2F0CB6D49F45194E6051 (int32_t ___0_a, int32_t ___1_b, U3CU3Ec__DisplayClass2_0_1_tC4E3D65CA470C2F2DB85D9B32B717BE3200D4597* ___2_p, const RuntimeMethod* method)
{
	((  void (*) (int32_t, int32_t, U3CU3Ec__DisplayClass2_0_1_tC4E3D65CA470C2F2DB85D9B32B717BE3200D4597*, const RuntimeMethod*))Sorting_U3CMedian3PivotU3Eg__SwapU7C2_0_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m06FED96568508A808BFC2F0CB6D49F45194E6051_gshared)(___0_a, ___1_b, ___2_p, method);
}
inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Sorting_Median3Pivot_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m61A04EAD49649BB481C390575840F890DC1AD6D9 (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_data, int32_t ___1_start, int32_t ___2_pivot, int32_t ___3_end, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___4_compare, const RuntimeMethod* method)
{
	return ((  Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 (*) (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*, int32_t, int32_t, int32_t, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F*, const RuntimeMethod*))Sorting_Median3Pivot_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m61A04EAD49649BB481C390575840F890DC1AD6D9_gshared)(___0_data, ___1_start, ___2_pivot, ___3_end, ___4_compare, method);
}
inline int32_t Func_3_Invoke_mE6CD106F59B0ADD2DF9C211DC4CF4088F5A1A4BB_inline (Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_arg1, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___1_arg2, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F*, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, const RuntimeMethod*))Func_3_Invoke_mE6CD106F59B0ADD2DF9C211DC4CF4088F5A1A4BB_gshared_inline)(__this, ___0_arg1, ___1_arg2, method);
}
inline LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 Sorting_Median3Pivot_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m3AE419868146FAEE6A59E9FA4E33484BFA9930B1 (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___0_data, int32_t ___1_start, int32_t ___2_pivot, int32_t ___3_end, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___4_compare, const RuntimeMethod* method)
{
	return ((  LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 (*) (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*, int32_t, int32_t, int32_t, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821*, const RuntimeMethod*))Sorting_Median3Pivot_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m3AE419868146FAEE6A59E9FA4E33484BFA9930B1_gshared)(___0_data, ___1_start, ___2_pivot, ___3_end, ___4_compare, method);
}
inline void Sorting_InsertionSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m6B06894C5FA146D1CCE7ECBC21F553F16F2E96F5 (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___3_compare, const RuntimeMethod* method)
{
	((  void (*) (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*, int32_t, int32_t, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F*, const RuntimeMethod*))Sorting_InsertionSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m6B06894C5FA146D1CCE7ECBC21F553F16F2E96F5_gshared)(___0_data, ___1_start, ___2_end, ___3_compare, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_IsTrue_mE42C53B7220324D1FBAFB7AE48A7D8DD7796A663 (bool ___0_condition, const RuntimeMethod* method) ;
inline int32_t Sorting_Partition_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m5B1882A69C494B64F1EA761E21D0018C1D6AB6E8 (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___3_compare, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*, int32_t, int32_t, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F*, const RuntimeMethod*))Sorting_Partition_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m5B1882A69C494B64F1EA761E21D0018C1D6AB6E8_gshared)(___0_data, ___1_start, ___2_end, ___3_compare, method);
}
inline void Sorting_QuickSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mAA6CA24576E19917524BFD6BE7AC3ACF4A18B570 (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___3_compare, const RuntimeMethod* method)
{
	((  void (*) (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*, int32_t, int32_t, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F*, const RuntimeMethod*))Sorting_QuickSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mAA6CA24576E19917524BFD6BE7AC3ACF4A18B570_gshared)(___0_data, ___1_start, ___2_end, ___3_compare, method);
}
inline void Sorting_InsertionSort_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m50C92303E813A7BFD084FB309E5FB9937C8F2065 (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___3_compare, const RuntimeMethod* method)
{
	((  void (*) (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*, int32_t, int32_t, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821*, const RuntimeMethod*))Sorting_InsertionSort_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m50C92303E813A7BFD084FB309E5FB9937C8F2065_gshared)(___0_data, ___1_start, ___2_end, ___3_compare, method);
}
inline int32_t Sorting_Partition_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m0E79CA1E375645FFDF3E1506F789825A9A6D3D95 (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___3_compare, const RuntimeMethod* method)
{
	return ((  int32_t (*) (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*, int32_t, int32_t, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821*, const RuntimeMethod*))Sorting_Partition_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m0E79CA1E375645FFDF3E1506F789825A9A6D3D95_gshared)(___0_data, ___1_start, ___2_end, ___3_compare, method);
}
inline void Sorting_QuickSort_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_mADD51465439832E9BCC31668A2DE42CFCCA07F9C (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___3_compare, const RuntimeMethod* method)
{
	((  void (*) (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*, int32_t, int32_t, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821*, const RuntimeMethod*))Sorting_QuickSort_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_mADD51465439832E9BCC31668A2DE42CFCCA07F9C_gshared)(___0_data, ___1_start, ___2_end, ___3_compare, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProbeReferenceVolume_UnregisterDebug_m29C8C2812597CC2D2B3FBD5CBD374E618C480187 (ProbeReferenceVolume_t05ED7EF2BB9B58F26CE1629F0AA773D14100695F* __this, bool ___0_destroyPanel, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProbeReferenceVolume_RegisterDebug_m2F302154AB36B9D5C1739DE3E699CF8574918F53 (ProbeReferenceVolume_t05ED7EF2BB9B58F26CE1629F0AA773D14100695F* __this, ProbeVolumeSystemParameters_t0654F2626ACA367E00C375BEB6FEA5B86CB0A58B ___0_parameters, const RuntimeMethod* method) ;
inline int32_t DynamicArray_1_get_size_m56D2768863B15299FA4F2F14E271686207A8C2E4_inline (DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB*, const RuntimeMethod*))DynamicArray_1_get_size_m1B00C20A8CC4D62269585D16A58425D3F258836F_gshared_inline)(__this, method);
}
inline void DynamicArray_1_Resize_mEEEB907EAEFD4C22DB449FF052CF6AC967A27AD1 (DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB* __this, int32_t ___0_newSize, bool ___1_keepContent, const RuntimeMethod* method)
{
	((  void (*) (DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB*, int32_t, bool, const RuntimeMethod*))DynamicArray_1_Resize_m3E24EB8A4A036B423BA304E8C3C94EBD0222822E_gshared)(__this, ___0_newSize, ___1_keepContent, method);
}
inline IRenderGraphResource_tF24653A388C17849844C128C19C7A6599C7ADB7D** DynamicArray_1_get_Item_m5FC9383C3A815B0DF7AAD4C2A5CDFB1A25586ECE (DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  IRenderGraphResource_tF24653A388C17849844C128C19C7A6599C7ADB7D** (*) (DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB*, int32_t, const RuntimeMethod*))DynamicArray_1_get_Item_m7DDF1E462D1484149A4D812CAD717F816205FD44_gshared)(__this, ___0_index, method);
}
inline RuntimeObject* Activator_CreateInstance_TisRuntimeObject_m62506836177F0F862A8D619638BF37F48721F138 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))Activator_CreateInstance_TisRuntimeObject_m62506836177F0F862A8D619638BF37F48721F138_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m16C827D0F6107B7998F6C99B57F7CC2F181E2198 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m16C827D0F6107B7998F6C99B57F7CC2F181E2198_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisBoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_m8F344250A2F9E6EE6DDBA6BA833BB36D0F272B66 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisBoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_m8F344250A2F9E6EE6DDBA6BA833BB36D0F272B66_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisRuntimeObject_m4E17F588B090C1DADAE2D986BDA407DECEAC020F (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisRuntimeObject_m4E17F588B090C1DADAE2D986BDA407DECEAC020F_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m2C5F5CF80D13B041768C7845C5AAEEC02BB683BA (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m2C5F5CF80D13B041768C7845C5AAEEC02BB683BA_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisRectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_mF6949D9EDD480E6666CD975C66487AAD6ABC7D11 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisRectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_mF6949D9EDD480E6666CD975C66487AAD6ABC7D11_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_mC8EF710494C8986B279262C6C64947BE2C1DC55C (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_mC8EF710494C8986B279262C6C64947BE2C1DC55C_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_mB00220519A80AA5ACE36B7DBA2E6A6CB796302AF (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_mB00220519A80AA5ACE36B7DBA2E6A6CB796302AF_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int64_CompareTo_m63A0BDA03C5B1DEB7387B1C53D6BFD961E4F5490 (int64_t* __this, int64_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_CompareTo_mFA011811D4447442ED442B4A507BD4267621C586 (int32_t* __this, int32_t ___0_value, const RuntimeMethod* method) ;
inline EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* EqualityComparer_1_get_Default_m41DB4C0E0A508A8326E903331DC63D410B7AB9C4_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m41DB4C0E0A508A8326E903331DC63D410B7AB9C4_gshared_inline)(method);
}
inline Comparer_1_t49F23FD0F51B7B3F17D30558E0A425107523CC30* Comparer_1_get_Default_m84FF70BAB6A30BC2A0EABE8B0E58FCBD8F40C8FB (const RuntimeMethod* method)
{
	return ((  Comparer_1_t49F23FD0F51B7B3F17D30558E0A425107523CC30* (*) (const RuntimeMethod*))Comparer_1_get_Default_m84FF70BAB6A30BC2A0EABE8B0E58FCBD8F40C8FB_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StrBoolArray_SetBit_m212C6D1A8A4C422AF979D6B3BC7CD5B9BD0F3F01 (StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6* __this, int32_t ___0_aindex, int32_t ___1_bindex, bool ___2_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78 (StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6* __this, int32_t ___0_aindex, int32_t ___1_bindex, const RuntimeMethod* method) ;
inline EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* EqualityComparer_1_get_Default_m7D273CC532DC2164C9C86D28C639FDEA38173C88_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m7D273CC532DC2164C9C86D28C639FDEA38173C88_gshared_inline)(method);
}
inline Comparer_1_t7EDCB50F141B8333E02C67781CAC2D41381F0563* Comparer_1_get_Default_mE45154132033749FD101CB1689E0375B42C4B407 (const RuntimeMethod* method)
{
	return ((  Comparer_1_t7EDCB50F141B8333E02C67781CAC2D41381F0563* (*) (const RuntimeMethod*))Comparer_1_get_Default_mE45154132033749FD101CB1689E0375B42C4B407_gshared)(method);
}
inline EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* EqualityComparer_1_get_Default_m7F71AAC0046A3CB8C4CEB06A5A52A1269AF7023D_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m7F71AAC0046A3CB8C4CEB06A5A52A1269AF7023D_gshared_inline)(method);
}
inline Comparer_1_tFA27DAC2908F666A385A0E5699BB66735365343B* Comparer_1_get_Default_m84816461184ACF98D5F66D45F43652587DA47B4F (const RuntimeMethod* method)
{
	return ((  Comparer_1_tFA27DAC2908F666A385A0E5699BB66735365343B* (*) (const RuntimeMethod*))Comparer_1_get_Default_m84816461184ACF98D5F66D45F43652587DA47B4F_gshared)(method);
}
inline EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* EqualityComparer_1_get_Default_m80EE5C179E01BB38904781592AC72F8137541D7E_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m80EE5C179E01BB38904781592AC72F8137541D7E_gshared_inline)(method);
}
inline Comparer_1_t58CF625431A0184A14FF0A33D14229F8F6EA3C98* Comparer_1_get_Default_m5B4E9A09E85C87692450A9D2BC5C99C3E5DC1E36 (const RuntimeMethod* method)
{
	return ((  Comparer_1_t58CF625431A0184A14FF0A33D14229F8F6EA3C98* (*) (const RuntimeMethod*))Comparer_1_get_Default_m5B4E9A09E85C87692450A9D2BC5C99C3E5DC1E36_gshared)(method);
}
inline int32_t Sse4_2_ComputeStrCmpIntRes2_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5D9BE946098FA4C7FC8CC23DEE63A0877E8D6C8B (uint8_t* ___0_a, int32_t ___1_alen, uint8_t* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, const RuntimeMethod* method)
{
	return ((  int32_t (*) (uint8_t*, int32_t, uint8_t*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))Sse4_2_ComputeStrCmpIntRes2_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5D9BE946098FA4C7FC8CC23DEE63A0877E8D6C8B_gshared)(___0_a, ___1_alen, ___2_b, ___3_blen, ___4_len, ___5_imm8, ___6_allOnes, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123 (int32_t ___0_len, int32_t ___1_imm8, int32_t ___2_intRes2, const RuntimeMethod* method) ;
inline int32_t Sse4_2_ComputeStrCmpIntRes2_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mB3F9377B1A57D35D5514DEF77B3D9279A8622960 (int16_t* ___0_a, int32_t ___1_alen, int16_t* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, const RuntimeMethod* method)
{
	return ((  int32_t (*) (int16_t*, int32_t, int16_t*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))Sse4_2_ComputeStrCmpIntRes2_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mB3F9377B1A57D35D5514DEF77B3D9279A8622960_gshared)(___0_a, ___1_alen, ___2_b, ___3_blen, ___4_len, ___5_imm8, ___6_allOnes, method);
}
inline int32_t Sse4_2_ComputeStrCmpIntRes2_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mA23FD3A0C3B4448E4721DA31DA7B4B93A636A3FD (int8_t* ___0_a, int32_t ___1_alen, int8_t* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, const RuntimeMethod* method)
{
	return ((  int32_t (*) (int8_t*, int32_t, int8_t*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))Sse4_2_ComputeStrCmpIntRes2_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mA23FD3A0C3B4448E4721DA31DA7B4B93A636A3FD_gshared)(___0_a, ___1_alen, ___2_b, ___3_blen, ___4_len, ___5_imm8, ___6_allOnes, method);
}
inline int32_t Sse4_2_ComputeStrCmpIntRes2_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m331D979D640CF9DF04C505875F9FB702E217B2AB (uint16_t* ___0_a, int32_t ___1_alen, uint16_t* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, const RuntimeMethod* method)
{
	return ((  int32_t (*) (uint16_t*, int32_t, uint16_t*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))Sse4_2_ComputeStrCmpIntRes2_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m331D979D640CF9DF04C505875F9FB702E217B2AB_gshared)(___0_a, ___1_alen, ___2_b, ___3_blen, ___4_len, ___5_imm8, ___6_allOnes, method);
}
inline v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1CC4D51DF3F513318DCC288B066D0018EAF9C235 (int32_t ___0_len, int32_t ___1_imm8, uint8_t ___2_allOnesT, int32_t ___3_intRes2, const RuntimeMethod* method)
{
	return ((  v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 (*) (int32_t, int32_t, uint8_t, int32_t, const RuntimeMethod*))Sse4_2_ComputeStrmOutput_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1CC4D51DF3F513318DCC288B066D0018EAF9C235_gshared)(___0_len, ___1_imm8, ___2_allOnesT, ___3_intRes2, method);
}
inline v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE92FFA321425E5808CD20616DC308BA7B36886E8 (int32_t ___0_len, int32_t ___1_imm8, int16_t ___2_allOnesT, int32_t ___3_intRes2, const RuntimeMethod* method)
{
	return ((  v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 (*) (int32_t, int32_t, int16_t, int32_t, const RuntimeMethod*))Sse4_2_ComputeStrmOutput_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE92FFA321425E5808CD20616DC308BA7B36886E8_gshared)(___0_len, ___1_imm8, ___2_allOnesT, ___3_intRes2, method);
}
inline v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m5EFDDE5126FDB6BF9F9ED55B39751B517522C455 (int32_t ___0_len, int32_t ___1_imm8, int8_t ___2_allOnesT, int32_t ___3_intRes2, const RuntimeMethod* method)
{
	return ((  v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 (*) (int32_t, int32_t, int8_t, int32_t, const RuntimeMethod*))Sse4_2_ComputeStrmOutput_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m5EFDDE5126FDB6BF9F9ED55B39751B517522C455_gshared)(___0_len, ___1_imm8, ___2_allOnesT, ___3_intRes2, method);
}
inline v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mD44F4B084A230ACD38B4FCF13923F8986AFF0AB1 (int32_t ___0_len, int32_t ___1_imm8, uint16_t ___2_allOnesT, int32_t ___3_intRes2, const RuntimeMethod* method)
{
	return ((  v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 (*) (int32_t, int32_t, uint16_t, int32_t, const RuntimeMethod*))Sse4_2_ComputeStrmOutput_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mD44F4B084A230ACD38B4FCF13923F8986AFF0AB1_gshared)(___0_len, ___1_imm8, ___2_allOnesT, ___3_intRes2, method);
}
inline int32_t Sse4_2_ComputeStringLength_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD30812062AA4852D166ABCDF3D79FDD1856F173A (uint8_t* ___0_ptr, int32_t ___1_max, const RuntimeMethod* method)
{
	return ((  int32_t (*) (uint8_t*, int32_t, const RuntimeMethod*))Sse4_2_ComputeStringLength_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD30812062AA4852D166ABCDF3D79FDD1856F173A_gshared)(___0_ptr, ___1_max, method);
}
inline int32_t Sse4_2_ComputeStringLength_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m3EBC75C6F39A7B1A5F62D88877C87C9F3B5617A3 (int16_t* ___0_ptr, int32_t ___1_max, const RuntimeMethod* method)
{
	return ((  int32_t (*) (int16_t*, int32_t, const RuntimeMethod*))Sse4_2_ComputeStringLength_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m3EBC75C6F39A7B1A5F62D88877C87C9F3B5617A3_gshared)(___0_ptr, ___1_max, method);
}
inline int32_t Sse4_2_ComputeStringLength_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m73215CC1A28F076B0D2472385756C7AF58CBA171 (int8_t* ___0_ptr, int32_t ___1_max, const RuntimeMethod* method)
{
	return ((  int32_t (*) (int8_t*, int32_t, const RuntimeMethod*))Sse4_2_ComputeStringLength_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m73215CC1A28F076B0D2472385756C7AF58CBA171_gshared)(___0_ptr, ___1_max, method);
}
inline int32_t Sse4_2_ComputeStringLength_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m000E8D7B908376D69E48EACF3E6811C4DEE7A05D (uint16_t* ___0_ptr, int32_t ___1_max, const RuntimeMethod* method)
{
	return ((  int32_t (*) (uint16_t*, int32_t, const RuntimeMethod*))Sse4_2_ComputeStringLength_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m000E8D7B908376D69E48EACF3E6811C4DEE7A05D_gshared)(___0_ptr, ___1_max, method);
}
inline EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* EqualityComparer_1_CreateComparer_mEBC7BD29A8FD796A4DAA1DF4428B95D1BA4FB377 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mEBC7BD29A8FD796A4DAA1DF4428B95D1BA4FB377_gshared)(method);
}
inline EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* EqualityComparer_1_CreateComparer_m22AF3135664449980749E1EC32EB92DB49219F9B (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m22AF3135664449980749E1EC32EB92DB49219F9B_gshared)(method);
}
inline EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* EqualityComparer_1_CreateComparer_mD5EE323D1C48F0C09CBB944FA81707B8FEE2DB6D (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mD5EE323D1C48F0C09CBB944FA81707B8FEE2DB6D_gshared)(method);
}
inline EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* EqualityComparer_1_CreateComparer_m5F906E9B13BCCCDF51EF0852BD9E5E0065D185F8 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m5F906E9B13BCCCDF51EF0852BD9E5E0065D185F8_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_Median3Pivot_TisIl2CppFullySharedGenericAny_mA6E8814C46DAB9D561A5440B447E24E67159A5A1_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_data, int32_t ___1_start, int32_t ___2_pivot, int32_t ___3_end, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* ___4_compare, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t7DAA074A5FED821310D99584547BB9B1AEB7FBB5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T_t7DAA074A5FED821310D99584547BB9B1AEB7FBB5);
	const Il2CppFullySharedGenericAny L_21 = L_6;
	const Il2CppFullySharedGenericAny L_36 = L_6;
	const Il2CppFullySharedGenericAny L_50 = L_6;
	const Il2CppFullySharedGenericAny L_51 = L_6;
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T_t7DAA074A5FED821310D99584547BB9B1AEB7FBB5);
	const Il2CppFullySharedGenericAny L_26 = L_11;
	const Il2CppFullySharedGenericAny L_41 = L_11;
	U3CU3Ec__DisplayClass2_0_1_t95D21073081C2AD9435E6E2ED2FD63B720ABF032 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	Il2CppFullySharedGenericAny V_4 = alloca(SizeOf_T_t7DAA074A5FED821310D99584547BB9B1AEB7FBB5);
	memset(V_4, 0, SizeOf_T_t7DAA074A5FED821310D99584547BB9B1AEB7FBB5);
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_data;
		(&V_0)->___data = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___data), (void*)L_0);
		Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* L_1 = ___4_compare;
		U3CU3Ec__DisplayClass2_0_1_t95D21073081C2AD9435E6E2ED2FD63B720ABF032 L_2 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = L_2.___data;
		int32_t L_4 = ___3_end;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		il2cpp_codegen_memcpy(L_6, (L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)), SizeOf_T_t7DAA074A5FED821310D99584547BB9B1AEB7FBB5);
		U3CU3Ec__DisplayClass2_0_1_t95D21073081C2AD9435E6E2ED2FD63B720ABF032 L_7 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = L_7.___data;
		int32_t L_9 = ___1_start;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		il2cpp_codegen_memcpy(L_11, (L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)), SizeOf_T_t7DAA074A5FED821310D99584547BB9B1AEB7FBB5);
		NullCheck(L_1);
		int32_t L_12;
		L_12 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? L_6: *(void**)L_6), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? L_11: *(void**)L_11));
		V_1 = (bool)((((int32_t)L_12) < ((int32_t)0))? 1 : 0);
		bool L_13 = V_1;
		if (!L_13)
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_14 = ___1_start;
		int32_t L_15 = ___3_end;
		((  void (*) (int32_t, int32_t, U3CU3Ec__DisplayClass2_0_1_t95D21073081C2AD9435E6E2ED2FD63B720ABF032*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(L_14, L_15, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 5));
	}

IL_003a:
	{
		Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* L_16 = ___4_compare;
		U3CU3Ec__DisplayClass2_0_1_t95D21073081C2AD9435E6E2ED2FD63B720ABF032 L_17 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_18 = L_17.___data;
		int32_t L_19 = ___2_pivot;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		il2cpp_codegen_memcpy(L_21, (L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)), SizeOf_T_t7DAA074A5FED821310D99584547BB9B1AEB7FBB5);
		U3CU3Ec__DisplayClass2_0_1_t95D21073081C2AD9435E6E2ED2FD63B720ABF032 L_22 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_23 = L_22.___data;
		int32_t L_24 = ___1_start;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		il2cpp_codegen_memcpy(L_26, (L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)), SizeOf_T_t7DAA074A5FED821310D99584547BB9B1AEB7FBB5);
		NullCheck(L_16);
		int32_t L_27;
		L_27 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), L_16, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? L_21: *(void**)L_21), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? L_26: *(void**)L_26));
		V_2 = (bool)((((int32_t)L_27) < ((int32_t)0))? 1 : 0);
		bool L_28 = V_2;
		if (!L_28)
		{
			goto IL_006a;
		}
	}
	{
		int32_t L_29 = ___1_start;
		int32_t L_30 = ___2_pivot;
		((  void (*) (int32_t, int32_t, U3CU3Ec__DisplayClass2_0_1_t95D21073081C2AD9435E6E2ED2FD63B720ABF032*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(L_29, L_30, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 5));
	}

IL_006a:
	{
		Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* L_31 = ___4_compare;
		U3CU3Ec__DisplayClass2_0_1_t95D21073081C2AD9435E6E2ED2FD63B720ABF032 L_32 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_33 = L_32.___data;
		int32_t L_34 = ___3_end;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		il2cpp_codegen_memcpy(L_36, (L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)), SizeOf_T_t7DAA074A5FED821310D99584547BB9B1AEB7FBB5);
		U3CU3Ec__DisplayClass2_0_1_t95D21073081C2AD9435E6E2ED2FD63B720ABF032 L_37 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_38 = L_37.___data;
		int32_t L_39 = ___2_pivot;
		NullCheck(L_38);
		int32_t L_40 = L_39;
		il2cpp_codegen_memcpy(L_41, (L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40)), SizeOf_T_t7DAA074A5FED821310D99584547BB9B1AEB7FBB5);
		NullCheck(L_31);
		int32_t L_42;
		L_42 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), L_31, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? L_36: *(void**)L_36), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? L_41: *(void**)L_41));
		V_3 = (bool)((((int32_t)L_42) < ((int32_t)0))? 1 : 0);
		bool L_43 = V_3;
		if (!L_43)
		{
			goto IL_009a;
		}
	}
	{
		int32_t L_44 = ___2_pivot;
		int32_t L_45 = ___3_end;
		((  void (*) (int32_t, int32_t, U3CU3Ec__DisplayClass2_0_1_t95D21073081C2AD9435E6E2ED2FD63B720ABF032*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(L_44, L_45, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 5));
	}

IL_009a:
	{
		U3CU3Ec__DisplayClass2_0_1_t95D21073081C2AD9435E6E2ED2FD63B720ABF032 L_46 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_47 = L_46.___data;
		int32_t L_48 = ___2_pivot;
		NullCheck(L_47);
		int32_t L_49 = L_48;
		il2cpp_codegen_memcpy(L_50, (L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_49)), SizeOf_T_t7DAA074A5FED821310D99584547BB9B1AEB7FBB5);
		il2cpp_codegen_memcpy(V_4, L_50, SizeOf_T_t7DAA074A5FED821310D99584547BB9B1AEB7FBB5);
		goto IL_00aa;
	}

IL_00aa:
	{
		il2cpp_codegen_memcpy(L_51, V_4, SizeOf_T_t7DAA074A5FED821310D99584547BB9B1AEB7FBB5);
		il2cpp_codegen_memcpy(il2cppRetVal, L_51, SizeOf_T_t7DAA074A5FED821310D99584547BB9B1AEB7FBB5);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 Sorting_Median3Pivot_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m3AE419868146FAEE6A59E9FA4E33484BFA9930B1_gshared (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___0_data, int32_t ___1_start, int32_t ___2_pivot, int32_t ___3_end, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___4_compare, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	U3CU3Ec__DisplayClass2_0_1_tC4E3D65CA470C2F2DB85D9B32B717BE3200D4597 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_0 = ___0_data;
		(&V_0)->___data = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___data), (void*)L_0);
		Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* L_1 = ___4_compare;
		U3CU3Ec__DisplayClass2_0_1_tC4E3D65CA470C2F2DB85D9B32B717BE3200D4597 L_2 = V_0;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_3 = L_2.___data;
		int32_t L_4 = ___3_end;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		U3CU3Ec__DisplayClass2_0_1_tC4E3D65CA470C2F2DB85D9B32B717BE3200D4597 L_7 = V_0;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_8 = L_7.___data;
		int32_t L_9 = ___1_start;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_1);
		int32_t L_12;
		L_12 = Func_3_Invoke_m2AED59BE1B0645C0DB5DAE117842A1C0AD4BDEBB_inline(L_1, L_6, L_11, il2cpp_rgctx_method(method->rgctx_data, 4));
		V_1 = (bool)((((int32_t)L_12) < ((int32_t)0))? 1 : 0);
		bool L_13 = V_1;
		if (!L_13)
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_14 = ___1_start;
		int32_t L_15 = ___3_end;
		Sorting_U3CMedian3PivotU3Eg__SwapU7C2_0_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m06FED96568508A808BFC2F0CB6D49F45194E6051(L_14, L_15, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 5));
	}

IL_003a:
	{
		Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* L_16 = ___4_compare;
		U3CU3Ec__DisplayClass2_0_1_tC4E3D65CA470C2F2DB85D9B32B717BE3200D4597 L_17 = V_0;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_18 = L_17.___data;
		int32_t L_19 = ___2_pivot;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		U3CU3Ec__DisplayClass2_0_1_tC4E3D65CA470C2F2DB85D9B32B717BE3200D4597 L_22 = V_0;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_23 = L_22.___data;
		int32_t L_24 = ___1_start;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		NullCheck(L_16);
		int32_t L_27;
		L_27 = Func_3_Invoke_m2AED59BE1B0645C0DB5DAE117842A1C0AD4BDEBB_inline(L_16, L_21, L_26, il2cpp_rgctx_method(method->rgctx_data, 4));
		V_2 = (bool)((((int32_t)L_27) < ((int32_t)0))? 1 : 0);
		bool L_28 = V_2;
		if (!L_28)
		{
			goto IL_006a;
		}
	}
	{
		int32_t L_29 = ___1_start;
		int32_t L_30 = ___2_pivot;
		Sorting_U3CMedian3PivotU3Eg__SwapU7C2_0_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m06FED96568508A808BFC2F0CB6D49F45194E6051(L_29, L_30, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 5));
	}

IL_006a:
	{
		Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* L_31 = ___4_compare;
		U3CU3Ec__DisplayClass2_0_1_tC4E3D65CA470C2F2DB85D9B32B717BE3200D4597 L_32 = V_0;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_33 = L_32.___data;
		int32_t L_34 = ___3_end;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		U3CU3Ec__DisplayClass2_0_1_tC4E3D65CA470C2F2DB85D9B32B717BE3200D4597 L_37 = V_0;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_38 = L_37.___data;
		int32_t L_39 = ___2_pivot;
		NullCheck(L_38);
		int32_t L_40 = L_39;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_41 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		NullCheck(L_31);
		int32_t L_42;
		L_42 = Func_3_Invoke_m2AED59BE1B0645C0DB5DAE117842A1C0AD4BDEBB_inline(L_31, L_36, L_41, il2cpp_rgctx_method(method->rgctx_data, 4));
		V_3 = (bool)((((int32_t)L_42) < ((int32_t)0))? 1 : 0);
		bool L_43 = V_3;
		if (!L_43)
		{
			goto IL_009a;
		}
	}
	{
		int32_t L_44 = ___2_pivot;
		int32_t L_45 = ___3_end;
		Sorting_U3CMedian3PivotU3Eg__SwapU7C2_0_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m06FED96568508A808BFC2F0CB6D49F45194E6051(L_44, L_45, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 5));
	}

IL_009a:
	{
		U3CU3Ec__DisplayClass2_0_1_tC4E3D65CA470C2F2DB85D9B32B717BE3200D4597 L_46 = V_0;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_47 = L_46.___data;
		int32_t L_48 = ___2_pivot;
		NullCheck(L_47);
		int32_t L_49 = L_48;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_50 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		V_4 = L_50;
		goto IL_00aa;
	}

IL_00aa:
	{
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_51 = V_4;
		return L_51;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sorting_Partition_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m5B1882A69C494B64F1EA761E21D0018C1D6AB6E8_gshared (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___3_compare, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	int32_t V_7 = 0;
	bool V_8 = false;
	{
		int32_t L_0 = ___2_end;
		int32_t L_1 = ___1_start;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		int32_t L_2 = ___1_start;
		int32_t L_3 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_2, ((int32_t)(L_3/2))));
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_4 = ___0_data;
		int32_t L_5 = ___1_start;
		int32_t L_6 = V_1;
		int32_t L_7 = ___2_end;
		Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* L_8 = ___3_compare;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9;
		L_9 = Sorting_Median3Pivot_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m61A04EAD49649BB481C390575840F890DC1AD6D9(L_4, L_5, L_6, L_7, L_8, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_2 = L_9;
		goto IL_0091;
	}

IL_0018:
	{
		goto IL_0020;
	}

IL_001b:
	{
		int32_t L_10 = ___1_start;
		___1_start = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0020:
	{
		Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* L_11 = ___3_compare;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_12 = ___0_data;
		int32_t L_13 = ___1_start;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_16 = V_2;
		NullCheck(L_11);
		int32_t L_17;
		L_17 = Func_3_Invoke_mE6CD106F59B0ADD2DF9C211DC4CF4088F5A1A4BB_inline(L_11, L_15, L_16, il2cpp_rgctx_method(method->rgctx_data, 4));
		V_4 = (bool)((((int32_t)L_17) < ((int32_t)0))? 1 : 0);
		bool L_18 = V_4;
		if (L_18)
		{
			goto IL_001b;
		}
	}
	{
		goto IL_003e;
	}

IL_0039:
	{
		int32_t L_19 = ___2_end;
		___2_end = ((int32_t)il2cpp_codegen_subtract(L_19, 1));
	}

IL_003e:
	{
		Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* L_20 = ___3_compare;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_21 = ___0_data;
		int32_t L_22 = ___2_end;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_25 = V_2;
		NullCheck(L_20);
		int32_t L_26;
		L_26 = Func_3_Invoke_mE6CD106F59B0ADD2DF9C211DC4CF4088F5A1A4BB_inline(L_20, L_24, L_25, il2cpp_rgctx_method(method->rgctx_data, 4));
		V_5 = (bool)((((int32_t)L_26) > ((int32_t)0))? 1 : 0);
		bool L_27 = V_5;
		if (L_27)
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_28 = ___1_start;
		int32_t L_29 = ___2_end;
		V_6 = (bool)((((int32_t)((((int32_t)L_28) < ((int32_t)L_29))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_30 = V_6;
		if (!L_30)
		{
			goto IL_0068;
		}
	}
	{
		int32_t L_31 = ___2_end;
		V_7 = L_31;
		goto IL_0096;
	}

IL_0068:
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_32 = ___0_data;
		int32_t L_33 = ___1_start;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		V_3 = L_35;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_36 = ___0_data;
		int32_t L_37 = ___1_start;
		int32_t L_38 = L_37;
		___1_start = ((int32_t)il2cpp_codegen_add(L_38, 1));
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_39 = ___0_data;
		int32_t L_40 = ___2_end;
		NullCheck(L_39);
		int32_t L_41 = L_40;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(L_38), (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3)L_42);
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_43 = ___0_data;
		int32_t L_44 = ___2_end;
		int32_t L_45 = L_44;
		___2_end = ((int32_t)il2cpp_codegen_subtract(L_45, 1));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_46 = V_3;
		NullCheck(L_43);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(L_45), (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3)L_46);
	}

IL_0091:
	{
		V_8 = (bool)1;
		goto IL_0018;
	}

IL_0096:
	{
		int32_t L_47 = V_7;
		return L_47;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sorting_Partition_TisIl2CppFullySharedGenericAny_m712B611DAC06FA9738A8F85CAA404B955BB47029_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* ___3_compare, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tC40FDC7B5C85862D1DEB60A6C3716599A9ECA6BE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T_tC40FDC7B5C85862D1DEB60A6C3716599A9ECA6BE);
	const Il2CppFullySharedGenericAny L_15 = L_9;
	const Il2CppFullySharedGenericAny L_24 = L_9;
	const Il2CppFullySharedGenericAny L_35 = L_9;
	const Il2CppFullySharedGenericAny L_16 = alloca(SizeOf_T_tC40FDC7B5C85862D1DEB60A6C3716599A9ECA6BE);
	const Il2CppFullySharedGenericAny L_25 = L_16;
	const Il2CppFullySharedGenericAny L_42 = L_16;
	const Il2CppFullySharedGenericAny L_46 = alloca(SizeOf_T_tC40FDC7B5C85862D1DEB60A6C3716599A9ECA6BE);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T_tC40FDC7B5C85862D1DEB60A6C3716599A9ECA6BE);
	memset(V_2, 0, SizeOf_T_tC40FDC7B5C85862D1DEB60A6C3716599A9ECA6BE);
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_T_tC40FDC7B5C85862D1DEB60A6C3716599A9ECA6BE);
	memset(V_3, 0, SizeOf_T_tC40FDC7B5C85862D1DEB60A6C3716599A9ECA6BE);
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	int32_t V_7 = 0;
	bool V_8 = false;
	{
		int32_t L_0 = ___2_end;
		int32_t L_1 = ___1_start;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		int32_t L_2 = ___1_start;
		int32_t L_3 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_2, ((int32_t)(L_3/2))));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = ___0_data;
		int32_t L_5 = ___1_start;
		int32_t L_6 = V_1;
		int32_t L_7 = ___2_end;
		Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* L_8 = ___3_compare;
		InvokerActionInvoker6< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, int32_t, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_4, L_5, L_6, L_7, L_8, (Il2CppFullySharedGenericAny*)L_9);
		il2cpp_codegen_memcpy(V_2, L_9, SizeOf_T_tC40FDC7B5C85862D1DEB60A6C3716599A9ECA6BE);
		goto IL_0091;
	}

IL_0018:
	{
		goto IL_0020;
	}

IL_001b:
	{
		int32_t L_10 = ___1_start;
		___1_start = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0020:
	{
		Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* L_11 = ___3_compare;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = ___0_data;
		int32_t L_13 = ___1_start;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		il2cpp_codegen_memcpy(L_15, (L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)), SizeOf_T_tC40FDC7B5C85862D1DEB60A6C3716599A9ECA6BE);
		il2cpp_codegen_memcpy(L_16, V_2, SizeOf_T_tC40FDC7B5C85862D1DEB60A6C3716599A9ECA6BE);
		NullCheck(L_11);
		int32_t L_17;
		L_17 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), L_11, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? L_15: *(void**)L_15), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? L_16: *(void**)L_16));
		V_4 = (bool)((((int32_t)L_17) < ((int32_t)0))? 1 : 0);
		bool L_18 = V_4;
		if (L_18)
		{
			goto IL_001b;
		}
	}
	{
		goto IL_003e;
	}

IL_0039:
	{
		int32_t L_19 = ___2_end;
		___2_end = ((int32_t)il2cpp_codegen_subtract(L_19, 1));
	}

IL_003e:
	{
		Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* L_20 = ___3_compare;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_21 = ___0_data;
		int32_t L_22 = ___2_end;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		il2cpp_codegen_memcpy(L_24, (L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)), SizeOf_T_tC40FDC7B5C85862D1DEB60A6C3716599A9ECA6BE);
		il2cpp_codegen_memcpy(L_25, V_2, SizeOf_T_tC40FDC7B5C85862D1DEB60A6C3716599A9ECA6BE);
		NullCheck(L_20);
		int32_t L_26;
		L_26 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), L_20, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? L_24: *(void**)L_24), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? L_25: *(void**)L_25));
		V_5 = (bool)((((int32_t)L_26) > ((int32_t)0))? 1 : 0);
		bool L_27 = V_5;
		if (L_27)
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_28 = ___1_start;
		int32_t L_29 = ___2_end;
		V_6 = (bool)((((int32_t)((((int32_t)L_28) < ((int32_t)L_29))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_30 = V_6;
		if (!L_30)
		{
			goto IL_0068;
		}
	}
	{
		int32_t L_31 = ___2_end;
		V_7 = L_31;
		goto IL_0096;
	}

IL_0068:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_32 = ___0_data;
		int32_t L_33 = ___1_start;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		il2cpp_codegen_memcpy(L_35, (L_32)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)), SizeOf_T_tC40FDC7B5C85862D1DEB60A6C3716599A9ECA6BE);
		il2cpp_codegen_memcpy(V_3, L_35, SizeOf_T_tC40FDC7B5C85862D1DEB60A6C3716599A9ECA6BE);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_36 = ___0_data;
		int32_t L_37 = ___1_start;
		int32_t L_38 = L_37;
		___1_start = ((int32_t)il2cpp_codegen_add(L_38, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_39 = ___0_data;
		int32_t L_40 = ___2_end;
		NullCheck(L_39);
		int32_t L_41 = L_40;
		il2cpp_codegen_memcpy(L_42, (L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_41)), SizeOf_T_tC40FDC7B5C85862D1DEB60A6C3716599A9ECA6BE);
		NullCheck(L_36);
		il2cpp_codegen_memcpy((L_36)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_38)), L_42, SizeOf_T_tC40FDC7B5C85862D1DEB60A6C3716599A9ECA6BE);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 3), (void**)(L_36)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_38)), (void*)L_42);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_43 = ___0_data;
		int32_t L_44 = ___2_end;
		int32_t L_45 = L_44;
		___2_end = ((int32_t)il2cpp_codegen_subtract(L_45, 1));
		il2cpp_codegen_memcpy(L_46, V_3, SizeOf_T_tC40FDC7B5C85862D1DEB60A6C3716599A9ECA6BE);
		NullCheck(L_43);
		il2cpp_codegen_memcpy((L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_45)), L_46, SizeOf_T_tC40FDC7B5C85862D1DEB60A6C3716599A9ECA6BE);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 3), (void**)(L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_45)), (void*)L_46);
	}

IL_0091:
	{
		V_8 = (bool)1;
		goto IL_0018;
	}

IL_0096:
	{
		int32_t L_47 = V_7;
		return L_47;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sorting_Partition_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m0E79CA1E375645FFDF3E1506F789825A9A6D3D95_gshared (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___3_compare, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	int32_t V_7 = 0;
	bool V_8 = false;
	{
		int32_t L_0 = ___2_end;
		int32_t L_1 = ___1_start;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		int32_t L_2 = ___1_start;
		int32_t L_3 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_2, ((int32_t)(L_3/2))));
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_4 = ___0_data;
		int32_t L_5 = ___1_start;
		int32_t L_6 = V_1;
		int32_t L_7 = ___2_end;
		Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* L_8 = ___3_compare;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_9;
		L_9 = Sorting_Median3Pivot_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m3AE419868146FAEE6A59E9FA4E33484BFA9930B1(L_4, L_5, L_6, L_7, L_8, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_2 = L_9;
		goto IL_0091;
	}

IL_0018:
	{
		goto IL_0020;
	}

IL_001b:
	{
		int32_t L_10 = ___1_start;
		___1_start = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0020:
	{
		Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* L_11 = ___3_compare;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_12 = ___0_data;
		int32_t L_13 = ___1_start;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_16 = V_2;
		NullCheck(L_11);
		int32_t L_17;
		L_17 = Func_3_Invoke_m2AED59BE1B0645C0DB5DAE117842A1C0AD4BDEBB_inline(L_11, L_15, L_16, il2cpp_rgctx_method(method->rgctx_data, 4));
		V_4 = (bool)((((int32_t)L_17) < ((int32_t)0))? 1 : 0);
		bool L_18 = V_4;
		if (L_18)
		{
			goto IL_001b;
		}
	}
	{
		goto IL_003e;
	}

IL_0039:
	{
		int32_t L_19 = ___2_end;
		___2_end = ((int32_t)il2cpp_codegen_subtract(L_19, 1));
	}

IL_003e:
	{
		Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* L_20 = ___3_compare;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_21 = ___0_data;
		int32_t L_22 = ___2_end;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_25 = V_2;
		NullCheck(L_20);
		int32_t L_26;
		L_26 = Func_3_Invoke_m2AED59BE1B0645C0DB5DAE117842A1C0AD4BDEBB_inline(L_20, L_24, L_25, il2cpp_rgctx_method(method->rgctx_data, 4));
		V_5 = (bool)((((int32_t)L_26) > ((int32_t)0))? 1 : 0);
		bool L_27 = V_5;
		if (L_27)
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_28 = ___1_start;
		int32_t L_29 = ___2_end;
		V_6 = (bool)((((int32_t)((((int32_t)L_28) < ((int32_t)L_29))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_30 = V_6;
		if (!L_30)
		{
			goto IL_0068;
		}
	}
	{
		int32_t L_31 = ___2_end;
		V_7 = L_31;
		goto IL_0096;
	}

IL_0068:
	{
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_32 = ___0_data;
		int32_t L_33 = ___1_start;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		V_3 = L_35;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_36 = ___0_data;
		int32_t L_37 = ___1_start;
		int32_t L_38 = L_37;
		___1_start = ((int32_t)il2cpp_codegen_add(L_38, 1));
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_39 = ___0_data;
		int32_t L_40 = ___2_end;
		NullCheck(L_39);
		int32_t L_41 = L_40;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(L_38), (LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2)L_42);
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_43 = ___0_data;
		int32_t L_44 = ___2_end;
		int32_t L_45 = L_44;
		___2_end = ((int32_t)il2cpp_codegen_subtract(L_45, 1));
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_46 = V_3;
		NullCheck(L_43);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(L_45), (LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2)L_46);
	}

IL_0091:
	{
		V_8 = (bool)1;
		goto IL_0018;
	}

IL_0096:
	{
		int32_t L_47 = V_7;
		return L_47;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_QuickSort_TisIl2CppFullySharedGenericAny_mEC21DF5A7D470F44BB30B97EB39D03491BD65D1F_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_data, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* ___1_compare, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_data;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = ___0_data;
		NullCheck(L_1);
		Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* L_2 = ___1_compare;
		((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_0, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_1)->max_length)), 1)), L_2, il2cpp_rgctx_method(method->rgctx_data, 2));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_QuickSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mAA6CA24576E19917524BFD6BE7AC3ACF4A18B570_gshared (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___3_compare, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	{
		int32_t L_0 = ___2_end;
		int32_t L_1 = ___1_start;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		int32_t L_2 = V_0;
		V_1 = (bool)((((int32_t)L_2) < ((int32_t)1))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_000f;
		}
	}
	{
		goto IL_0088;
	}

IL_000f:
	{
		int32_t L_4 = V_0;
		V_2 = (bool)((((int32_t)L_4) < ((int32_t)8))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0024;
		}
	}
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_6 = ___0_data;
		int32_t L_7 = ___1_start;
		int32_t L_8 = ___2_end;
		Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* L_9 = ___3_compare;
		Sorting_InsertionSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m6B06894C5FA146D1CCE7ECBC21F553F16F2E96F5(L_6, L_7, L_8, L_9, il2cpp_rgctx_method(method->rgctx_data, 2));
		goto IL_0088;
	}

IL_0024:
	{
		int32_t L_10 = ___1_start;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_11 = ___0_data;
		NullCheck(L_11);
		il2cpp_codegen_runtime_class_init_inline(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		Assert_IsTrue_mE42C53B7220324D1FBAFB7AE48A7D8DD7796A663((bool)((((int64_t)((int64_t)(uint64_t)((uint32_t)L_10))) < ((int64_t)((int64_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))? 1 : 0), NULL);
		int32_t L_12 = ___2_end;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_13 = ___0_data;
		NullCheck(L_13);
		Assert_IsTrue_mE42C53B7220324D1FBAFB7AE48A7D8DD7796A663((bool)((((int64_t)((int64_t)(uint64_t)((uint32_t)L_12))) < ((int64_t)((int64_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))? 1 : 0), NULL);
		int32_t L_14 = ___1_start;
		int32_t L_15 = ___2_end;
		V_3 = (bool)((((int32_t)L_14) < ((int32_t)L_15))? 1 : 0);
		bool L_16 = V_3;
		if (!L_16)
		{
			goto IL_0088;
		}
	}
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_17 = ___0_data;
		int32_t L_18 = ___1_start;
		int32_t L_19 = ___2_end;
		Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* L_20 = ___3_compare;
		int32_t L_21;
		L_21 = Sorting_Partition_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m5B1882A69C494B64F1EA761E21D0018C1D6AB6E8(L_17, L_18, L_19, L_20, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_4 = L_21;
		int32_t L_22 = V_4;
		V_5 = (bool)((((int32_t)((((int32_t)L_22) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_23 = V_5;
		if (!L_23)
		{
			goto IL_006d;
		}
	}
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_24 = ___0_data;
		int32_t L_25 = ___1_start;
		int32_t L_26 = V_4;
		Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* L_27 = ___3_compare;
		Sorting_QuickSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mAA6CA24576E19917524BFD6BE7AC3ACF4A18B570(L_24, L_25, L_26, L_27, il2cpp_rgctx_method(method->rgctx_data, 4));
	}

IL_006d:
	{
		int32_t L_28 = V_4;
		int32_t L_29 = ___2_end;
		V_6 = (bool)((((int32_t)((int32_t)il2cpp_codegen_add(L_28, 1))) < ((int32_t)L_29))? 1 : 0);
		bool L_30 = V_6;
		if (!L_30)
		{
			goto IL_0087;
		}
	}
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_31 = ___0_data;
		int32_t L_32 = V_4;
		int32_t L_33 = ___2_end;
		Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* L_34 = ___3_compare;
		Sorting_QuickSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mAA6CA24576E19917524BFD6BE7AC3ACF4A18B570(L_31, ((int32_t)il2cpp_codegen_add(L_32, 1)), L_33, L_34, il2cpp_rgctx_method(method->rgctx_data, 4));
	}

IL_0087:
	{
	}

IL_0088:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_QuickSort_TisIl2CppFullySharedGenericAny_m64F66E9A59079142461E29BCD21FE90D0C81BB59_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* ___3_compare, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	{
		int32_t L_0 = ___2_end;
		int32_t L_1 = ___1_start;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		int32_t L_2 = V_0;
		V_1 = (bool)((((int32_t)L_2) < ((int32_t)1))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_000f;
		}
	}
	{
		goto IL_0088;
	}

IL_000f:
	{
		int32_t L_4 = V_0;
		V_2 = (bool)((((int32_t)L_4) < ((int32_t)8))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0024;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = ___0_data;
		int32_t L_7 = ___1_start;
		int32_t L_8 = ___2_end;
		Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* L_9 = ___3_compare;
		((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_6, L_7, L_8, L_9, il2cpp_rgctx_method(method->rgctx_data, 2));
		goto IL_0088;
	}

IL_0024:
	{
		int32_t L_10 = ___1_start;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_11 = ___0_data;
		NullCheck(L_11);
		il2cpp_codegen_runtime_class_init_inline(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		Assert_IsTrue_mE42C53B7220324D1FBAFB7AE48A7D8DD7796A663((bool)((((int64_t)((int64_t)(uint64_t)((uint32_t)L_10))) < ((int64_t)((int64_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))? 1 : 0), NULL);
		int32_t L_12 = ___2_end;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_13 = ___0_data;
		NullCheck(L_13);
		Assert_IsTrue_mE42C53B7220324D1FBAFB7AE48A7D8DD7796A663((bool)((((int64_t)((int64_t)(uint64_t)((uint32_t)L_12))) < ((int64_t)((int64_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))? 1 : 0), NULL);
		int32_t L_14 = ___1_start;
		int32_t L_15 = ___2_end;
		V_3 = (bool)((((int32_t)L_14) < ((int32_t)L_15))? 1 : 0);
		bool L_16 = V_3;
		if (!L_16)
		{
			goto IL_0088;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_17 = ___0_data;
		int32_t L_18 = ___1_start;
		int32_t L_19 = ___2_end;
		Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* L_20 = ___3_compare;
		int32_t L_21;
		L_21 = ((  int32_t (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(L_17, L_18, L_19, L_20, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_4 = L_21;
		int32_t L_22 = V_4;
		V_5 = (bool)((((int32_t)((((int32_t)L_22) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_23 = V_5;
		if (!L_23)
		{
			goto IL_006d;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_24 = ___0_data;
		int32_t L_25 = ___1_start;
		int32_t L_26 = V_4;
		Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* L_27 = ___3_compare;
		((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_24, L_25, L_26, L_27, il2cpp_rgctx_method(method->rgctx_data, 4));
	}

IL_006d:
	{
		int32_t L_28 = V_4;
		int32_t L_29 = ___2_end;
		V_6 = (bool)((((int32_t)((int32_t)il2cpp_codegen_add(L_28, 1))) < ((int32_t)L_29))? 1 : 0);
		bool L_30 = V_6;
		if (!L_30)
		{
			goto IL_0087;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_31 = ___0_data;
		int32_t L_32 = V_4;
		int32_t L_33 = ___2_end;
		Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* L_34 = ___3_compare;
		((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_31, ((int32_t)il2cpp_codegen_add(L_32, 1)), L_33, L_34, il2cpp_rgctx_method(method->rgctx_data, 4));
	}

IL_0087:
	{
	}

IL_0088:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_QuickSort_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_mADD51465439832E9BCC31668A2DE42CFCCA07F9C_gshared (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___3_compare, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	{
		int32_t L_0 = ___2_end;
		int32_t L_1 = ___1_start;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		int32_t L_2 = V_0;
		V_1 = (bool)((((int32_t)L_2) < ((int32_t)1))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_000f;
		}
	}
	{
		goto IL_0088;
	}

IL_000f:
	{
		int32_t L_4 = V_0;
		V_2 = (bool)((((int32_t)L_4) < ((int32_t)8))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0024;
		}
	}
	{
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_6 = ___0_data;
		int32_t L_7 = ___1_start;
		int32_t L_8 = ___2_end;
		Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* L_9 = ___3_compare;
		Sorting_InsertionSort_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m50C92303E813A7BFD084FB309E5FB9937C8F2065(L_6, L_7, L_8, L_9, il2cpp_rgctx_method(method->rgctx_data, 2));
		goto IL_0088;
	}

IL_0024:
	{
		int32_t L_10 = ___1_start;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_11 = ___0_data;
		NullCheck(L_11);
		il2cpp_codegen_runtime_class_init_inline(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		Assert_IsTrue_mE42C53B7220324D1FBAFB7AE48A7D8DD7796A663((bool)((((int64_t)((int64_t)(uint64_t)((uint32_t)L_10))) < ((int64_t)((int64_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))? 1 : 0), NULL);
		int32_t L_12 = ___2_end;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_13 = ___0_data;
		NullCheck(L_13);
		Assert_IsTrue_mE42C53B7220324D1FBAFB7AE48A7D8DD7796A663((bool)((((int64_t)((int64_t)(uint64_t)((uint32_t)L_12))) < ((int64_t)((int64_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))? 1 : 0), NULL);
		int32_t L_14 = ___1_start;
		int32_t L_15 = ___2_end;
		V_3 = (bool)((((int32_t)L_14) < ((int32_t)L_15))? 1 : 0);
		bool L_16 = V_3;
		if (!L_16)
		{
			goto IL_0088;
		}
	}
	{
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_17 = ___0_data;
		int32_t L_18 = ___1_start;
		int32_t L_19 = ___2_end;
		Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* L_20 = ___3_compare;
		int32_t L_21;
		L_21 = Sorting_Partition_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m0E79CA1E375645FFDF3E1506F789825A9A6D3D95(L_17, L_18, L_19, L_20, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_4 = L_21;
		int32_t L_22 = V_4;
		V_5 = (bool)((((int32_t)((((int32_t)L_22) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_23 = V_5;
		if (!L_23)
		{
			goto IL_006d;
		}
	}
	{
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_24 = ___0_data;
		int32_t L_25 = ___1_start;
		int32_t L_26 = V_4;
		Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* L_27 = ___3_compare;
		Sorting_QuickSort_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_mADD51465439832E9BCC31668A2DE42CFCCA07F9C(L_24, L_25, L_26, L_27, il2cpp_rgctx_method(method->rgctx_data, 4));
	}

IL_006d:
	{
		int32_t L_28 = V_4;
		int32_t L_29 = ___2_end;
		V_6 = (bool)((((int32_t)((int32_t)il2cpp_codegen_add(L_28, 1))) < ((int32_t)L_29))? 1 : 0);
		bool L_30 = V_6;
		if (!L_30)
		{
			goto IL_0087;
		}
	}
	{
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_31 = ___0_data;
		int32_t L_32 = V_4;
		int32_t L_33 = ___2_end;
		Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* L_34 = ___3_compare;
		Sorting_QuickSort_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_mADD51465439832E9BCC31668A2DE42CFCCA07F9C(L_31, ((int32_t)il2cpp_codegen_add(L_32, 1)), L_33, L_34, il2cpp_rgctx_method(method->rgctx_data, 4));
	}

IL_0087:
	{
	}

IL_0088:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass171_0_U3CRegisterDebugU3Eg__RefreshDebugU7C0_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m5019674115061C61566FCE4F42C27F8D1D10CBFC_gshared (U3CU3Ec__DisplayClass171_0_t70061616D0F785A73C9408015CCBEBC3C2B43646* __this, Field_1_t32151A22D4B1B5C1DFFDDACD9F3C78D19596507A* ___0_field, bool ___1_value, const RuntimeMethod* method) 
{
	{
		ProbeReferenceVolume_t05ED7EF2BB9B58F26CE1629F0AA773D14100695F* L_0 = __this->___U3CU3E4__this;
		NullCheck(L_0);
		ProbeReferenceVolume_UnregisterDebug_m29C8C2812597CC2D2B3FBD5CBD374E618C480187(L_0, (bool)0, NULL);
		ProbeReferenceVolume_t05ED7EF2BB9B58F26CE1629F0AA773D14100695F* L_1 = __this->___U3CU3E4__this;
		ProbeVolumeSystemParameters_t0654F2626ACA367E00C375BEB6FEA5B86CB0A58B L_2 = __this->___parameters;
		NullCheck(L_1);
		ProbeReferenceVolume_RegisterDebug_m2F302154AB36B9D5C1739DE3E699CF8574918F53(L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass171_0_U3CRegisterDebugU3Eg__RefreshDebugU7C0_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m100076E774B865F9F042988822BA799CCDF110D1_gshared (U3CU3Ec__DisplayClass171_0_t70061616D0F785A73C9408015CCBEBC3C2B43646* __this, Field_1_t7F813BE8CAF3F3F635B34474DDD7B797C5B6CD2A* ___0_field, int32_t ___1_value, const RuntimeMethod* method) 
{
	{
		ProbeReferenceVolume_t05ED7EF2BB9B58F26CE1629F0AA773D14100695F* L_0 = __this->___U3CU3E4__this;
		NullCheck(L_0);
		ProbeReferenceVolume_UnregisterDebug_m29C8C2812597CC2D2B3FBD5CBD374E618C480187(L_0, (bool)0, NULL);
		ProbeReferenceVolume_t05ED7EF2BB9B58F26CE1629F0AA773D14100695F* L_1 = __this->___U3CU3E4__this;
		ProbeVolumeSystemParameters_t0654F2626ACA367E00C375BEB6FEA5B86CB0A58B L_2 = __this->___parameters;
		NullCheck(L_1);
		ProbeReferenceVolume_RegisterDebug_m2F302154AB36B9D5C1739DE3E699CF8574918F53(L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass171_0_U3CRegisterDebugU3Eg__RefreshDebugU7C0_TisIl2CppFullySharedGenericAny_m7AA2E7868621F0A95B0407951E08EC7786EB4D83_gshared (U3CU3Ec__DisplayClass171_0_t70061616D0F785A73C9408015CCBEBC3C2B43646* __this, Field_1_tEE1A923EA8160028BC34CE74DF77A8FB37FCA5D3* ___0_field, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	{
		ProbeReferenceVolume_t05ED7EF2BB9B58F26CE1629F0AA773D14100695F* L_0 = __this->___U3CU3E4__this;
		NullCheck(L_0);
		ProbeReferenceVolume_UnregisterDebug_m29C8C2812597CC2D2B3FBD5CBD374E618C480187(L_0, (bool)0, NULL);
		ProbeReferenceVolume_t05ED7EF2BB9B58F26CE1629F0AA773D14100695F* L_1 = __this->___U3CU3E4__this;
		ProbeVolumeSystemParameters_t0654F2626ACA367E00C375BEB6FEA5B86CB0A58B L_2 = __this->___parameters;
		NullCheck(L_1);
		ProbeReferenceVolume_RegisterDebug_m2F302154AB36B9D5C1739DE3E699CF8574918F53(L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RenderGraphResourcesData_AddNewRenderGraphResource_TisRuntimeObject_mB9040DF97633813729CADB454AAEAF31E23C7E91_gshared (RenderGraphResourcesData_tB2FF97B16A3E1DE700283778679C5CC0C39F4CFE* __this, RuntimeObject** ___0_outRes, bool ___1_pooledResource, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DynamicArray_1_Resize_mEEEB907EAEFD4C22DB449FF052CF6AC967A27AD1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DynamicArray_1_get_Item_m5FC9383C3A815B0DF7AAD4C2A5CDFB1A25586ECE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DynamicArray_1_get_size_m56D2768863B15299FA4F2F14E271686207A8C2E4_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	RuntimeObject** G_B4_0 = NULL;
	RuntimeObject** G_B3_0 = NULL;
	IRenderGraphResourcePool_t8BF833F3C5D0BD8E45632CF923363EC782F4DDA8* G_B5_0 = NULL;
	RuntimeObject** G_B5_1 = NULL;
	{
		DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB* L_0 = __this->___resourceArray;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = DynamicArray_1_get_size_m56D2768863B15299FA4F2F14E271686207A8C2E4_inline(L_0, DynamicArray_1_get_size_m56D2768863B15299FA4F2F14E271686207A8C2E4_RuntimeMethod_var);
		V_0 = L_1;
		DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB* L_2 = __this->___resourceArray;
		DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB* L_3 = __this->___resourceArray;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = DynamicArray_1_get_size_m56D2768863B15299FA4F2F14E271686207A8C2E4_inline(L_3, DynamicArray_1_get_size_m56D2768863B15299FA4F2F14E271686207A8C2E4_RuntimeMethod_var);
		NullCheck(L_2);
		DynamicArray_1_Resize_mEEEB907EAEFD4C22DB449FF052CF6AC967A27AD1(L_2, ((int32_t)il2cpp_codegen_add(L_4, 1)), (bool)1, DynamicArray_1_Resize_mEEEB907EAEFD4C22DB449FF052CF6AC967A27AD1_RuntimeMethod_var);
		DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB* L_5 = __this->___resourceArray;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		IRenderGraphResource_tF24653A388C17849844C128C19C7A6599C7ADB7D** L_7;
		L_7 = DynamicArray_1_get_Item_m5FC9383C3A815B0DF7AAD4C2A5CDFB1A25586ECE(L_5, L_6, DynamicArray_1_get_Item_m5FC9383C3A815B0DF7AAD4C2A5CDFB1A25586ECE_RuntimeMethod_var);
		IRenderGraphResource_tF24653A388C17849844C128C19C7A6599C7ADB7D* L_8 = *((IRenderGraphResource_tF24653A388C17849844C128C19C7A6599C7ADB7D**)L_7);
		V_1 = (bool)((((RuntimeObject*)(IRenderGraphResource_tF24653A388C17849844C128C19C7A6599C7ADB7D*)L_8) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_0052;
		}
	}
	{
		DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB* L_10 = __this->___resourceArray;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		IRenderGraphResource_tF24653A388C17849844C128C19C7A6599C7ADB7D** L_12;
		L_12 = DynamicArray_1_get_Item_m5FC9383C3A815B0DF7AAD4C2A5CDFB1A25586ECE(L_10, L_11, DynamicArray_1_get_Item_m5FC9383C3A815B0DF7AAD4C2A5CDFB1A25586ECE_RuntimeMethod_var);
		RuntimeObject* L_13;
		L_13 = Activator_CreateInstance_TisRuntimeObject_m62506836177F0F862A8D619638BF37F48721F138(il2cpp_rgctx_method(method->rgctx_data, 0));
		*((RuntimeObject**)L_12) = (RuntimeObject*)L_13;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_12, (void*)(RuntimeObject*)L_13);
	}

IL_0052:
	{
		RuntimeObject** L_14 = ___0_outRes;
		DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB* L_15 = __this->___resourceArray;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		IRenderGraphResource_tF24653A388C17849844C128C19C7A6599C7ADB7D** L_17;
		L_17 = DynamicArray_1_get_Item_m5FC9383C3A815B0DF7AAD4C2A5CDFB1A25586ECE(L_15, L_16, DynamicArray_1_get_Item_m5FC9383C3A815B0DF7AAD4C2A5CDFB1A25586ECE_RuntimeMethod_var);
		IRenderGraphResource_tF24653A388C17849844C128C19C7A6599C7ADB7D* L_18 = *((IRenderGraphResource_tF24653A388C17849844C128C19C7A6599C7ADB7D**)L_17);
		*(RuntimeObject**)L_14 = ((RuntimeObject*)Castclass((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_18, il2cpp_rgctx_data(method->rgctx_data, 1))), il2cpp_rgctx_data(method->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_14, (void*)((RuntimeObject*)Castclass((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_18, il2cpp_rgctx_data(method->rgctx_data, 1))), il2cpp_rgctx_data(method->rgctx_data, 1))));
		RuntimeObject** L_19 = ___0_outRes;
		bool L_20 = ___1_pooledResource;
		if (L_20)
		{
			G_B4_0 = L_19;
			goto IL_0076;
		}
		G_B3_0 = L_19;
	}
	{
		G_B5_0 = ((IRenderGraphResourcePool_t8BF833F3C5D0BD8E45632CF923363EC782F4DDA8*)(NULL));
		G_B5_1 = G_B3_0;
		goto IL_007c;
	}

IL_0076:
	{
		IRenderGraphResourcePool_t8BF833F3C5D0BD8E45632CF923363EC782F4DDA8* L_21 = __this->___pool;
		G_B5_0 = L_21;
		G_B5_1 = G_B4_0;
	}

IL_007c:
	{
		NullCheck((IRenderGraphResource_tF24653A388C17849844C128C19C7A6599C7ADB7D*)(*G_B5_1));
		VirtualActionInvoker1< IRenderGraphResourcePool_t8BF833F3C5D0BD8E45632CF923363EC782F4DDA8* >::Invoke(4, (IRenderGraphResource_tF24653A388C17849844C128C19C7A6599C7ADB7D*)(*G_B5_1), G_B5_0);
		int32_t L_22 = V_0;
		V_2 = L_22;
		goto IL_008c;
	}

IL_008c:
	{
		int32_t L_23 = V_2;
		return L_23;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m2A21711A3D655B51E421ACBEA3F03A09C8BBC250_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m16C827D0F6107B7998F6C99B57F7CC2F181E2198(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisBoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_mA9E7AA6DB293483965B65EEEBF63885DEF084EA2_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisBoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_m8F344250A2F9E6EE6DDBA6BA833BB36D0F272B66(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisRuntimeObject_m6C6E2EDC433DCAB90206712FB63993865A9B9305_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisRuntimeObject_m4E17F588B090C1DADAE2D986BDA407DECEAC020F(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m97DBB59374BCA99C98C45F169AF69955608B68AA_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m2C5F5CF80D13B041768C7845C5AAEEC02BB683BA(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisRectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_m7C42EB46E69BD2515C39AB6013A0763C6479AD66_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisRectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_mF6949D9EDD480E6666CD975C66487AAD6ABC7D11(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_m0E8E39845CA3F1BFADAC1B15E849E5885D813E6F_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_mC8EF710494C8986B279262C6C64947BE2C1DC55C(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m28D19B06528A4614AF9C3E29DC8274DE067868D8_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_mB00220519A80AA5ACE36B7DBA2E6A6CB796302AF(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisIl2CppFullySharedGenericAny_m8B414261A078E3FE7517FAF2F9E944969F6B73E2_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx2_EmulatedGather_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m916056C6D56ED56A8C621B65387940440621885B_gshared (double* ___0_dptr, void* ___1_base_addr, int32_t* ___2_indexPtr, int32_t ___3_scale, int32_t ___4_n, int64_t* ___5_mask, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	int64_t V_3 = 0;
	double* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B4_0 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int64_t));
		V_1 = 0;
		goto IL_006a;
	}

IL_000d:
	{
		int32_t* L_0 = ___2_indexPtr;
		int32_t L_1 = V_1;
		int32_t L_2 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), 4))))));
		V_2 = ((int64_t)L_2);
		int64_t L_3 = V_2;
		int32_t L_4 = ___3_scale;
		V_3 = ((int64_t)il2cpp_codegen_multiply(L_3, ((int64_t)L_4)));
		void* L_5 = ___1_base_addr;
		int64_t L_6 = V_3;
		V_4 = (double*)((void*)il2cpp_codegen_add((intptr_t)L_5, ((intptr_t)L_6)));
		int64_t* L_7 = ___5_mask;
		if ((((intptr_t)L_7) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_0045;
		}
	}
	{
		int64_t* L_8 = ___5_mask;
		int32_t L_9 = V_1;
		uint32_t L_10 = sizeof(int64_t);
		int64_t L_11 = V_0;
		int32_t L_12;
		L_12 = Int64_CompareTo_m63A0BDA03C5B1DEB7387B1C53D6BFD961E4F5490((int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), (int32_t)L_10)))), L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		G_B4_0 = ((((int32_t)L_12) < ((int32_t)0))? 1 : 0);
		goto IL_0046;
	}

IL_0045:
	{
		G_B4_0 = 1;
	}

IL_0046:
	{
		V_5 = (bool)G_B4_0;
		bool L_13 = V_5;
		if (!L_13)
		{
			goto IL_0065;
		}
	}
	{
		double* L_14 = ___0_dptr;
		int32_t L_15 = V_1;
		uint32_t L_16 = sizeof(double);
		double* L_17 = V_4;
		double L_18 = (*(double*)L_17);
		*(double*)((double*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_15), (int32_t)L_16)))) = L_18;
	}

IL_0065:
	{
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_006a:
	{
		int32_t L_20 = V_1;
		int32_t L_21 = ___4_n;
		V_6 = (bool)((((int32_t)L_20) < ((int32_t)L_21))? 1 : 0);
		bool L_22 = V_6;
		if (L_22)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx2_EmulatedGather_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m9A1DADAD9E0F3273D16A73D963070B45A72D049C_gshared (double* ___0_dptr, void* ___1_base_addr, int64_t* ___2_indexPtr, int32_t ___3_scale, int32_t ___4_n, int64_t* ___5_mask, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	int64_t V_3 = 0;
	double* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B4_0 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int64_t));
		V_1 = 0;
		goto IL_0069;
	}

IL_000d:
	{
		int64_t* L_0 = ___2_indexPtr;
		int32_t L_1 = V_1;
		int64_t L_2 = (*(((int64_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), 8))))));
		V_2 = L_2;
		int64_t L_3 = V_2;
		int32_t L_4 = ___3_scale;
		V_3 = ((int64_t)il2cpp_codegen_multiply(L_3, ((int64_t)L_4)));
		void* L_5 = ___1_base_addr;
		int64_t L_6 = V_3;
		V_4 = (double*)((void*)il2cpp_codegen_add((intptr_t)L_5, ((intptr_t)L_6)));
		int64_t* L_7 = ___5_mask;
		if ((((intptr_t)L_7) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_0044;
		}
	}
	{
		int64_t* L_8 = ___5_mask;
		int32_t L_9 = V_1;
		uint32_t L_10 = sizeof(int64_t);
		int64_t L_11 = V_0;
		int32_t L_12;
		L_12 = Int64_CompareTo_m63A0BDA03C5B1DEB7387B1C53D6BFD961E4F5490((int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), (int32_t)L_10)))), L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		G_B4_0 = ((((int32_t)L_12) < ((int32_t)0))? 1 : 0);
		goto IL_0045;
	}

IL_0044:
	{
		G_B4_0 = 1;
	}

IL_0045:
	{
		V_5 = (bool)G_B4_0;
		bool L_13 = V_5;
		if (!L_13)
		{
			goto IL_0064;
		}
	}
	{
		double* L_14 = ___0_dptr;
		int32_t L_15 = V_1;
		uint32_t L_16 = sizeof(double);
		double* L_17 = V_4;
		double L_18 = (*(double*)L_17);
		*(double*)((double*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_15), (int32_t)L_16)))) = L_18;
	}

IL_0064:
	{
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0069:
	{
		int32_t L_20 = V_1;
		int32_t L_21 = ___4_n;
		V_6 = (bool)((((int32_t)L_20) < ((int32_t)L_21))? 1 : 0);
		bool L_22 = V_6;
		if (L_22)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx2_EmulatedGather_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m94F8FFCEA63E0174FFF11E533C79D165E357A272_gshared (int32_t* ___0_dptr, void* ___1_base_addr, int32_t* ___2_indexPtr, int32_t ___3_scale, int32_t ___4_n, int32_t* ___5_mask, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	int64_t V_3 = 0;
	int32_t* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B4_0 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		V_1 = 0;
		goto IL_006a;
	}

IL_000d:
	{
		int32_t* L_0 = ___2_indexPtr;
		int32_t L_1 = V_1;
		int32_t L_2 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), 4))))));
		V_2 = ((int64_t)L_2);
		int64_t L_3 = V_2;
		int32_t L_4 = ___3_scale;
		V_3 = ((int64_t)il2cpp_codegen_multiply(L_3, ((int64_t)L_4)));
		void* L_5 = ___1_base_addr;
		int64_t L_6 = V_3;
		V_4 = (int32_t*)((void*)il2cpp_codegen_add((intptr_t)L_5, ((intptr_t)L_6)));
		int32_t* L_7 = ___5_mask;
		if ((((intptr_t)L_7) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_0045;
		}
	}
	{
		int32_t* L_8 = ___5_mask;
		int32_t L_9 = V_1;
		uint32_t L_10 = sizeof(int32_t);
		int32_t L_11 = V_0;
		int32_t L_12;
		L_12 = Int32_CompareTo_mFA011811D4447442ED442B4A507BD4267621C586((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), (int32_t)L_10)))), L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		G_B4_0 = ((((int32_t)L_12) < ((int32_t)0))? 1 : 0);
		goto IL_0046;
	}

IL_0045:
	{
		G_B4_0 = 1;
	}

IL_0046:
	{
		V_5 = (bool)G_B4_0;
		bool L_13 = V_5;
		if (!L_13)
		{
			goto IL_0065;
		}
	}
	{
		int32_t* L_14 = ___0_dptr;
		int32_t L_15 = V_1;
		uint32_t L_16 = sizeof(int32_t);
		int32_t* L_17 = V_4;
		int32_t L_18 = (*(int32_t*)L_17);
		*(int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_15), (int32_t)L_16)))) = L_18;
	}

IL_0065:
	{
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_006a:
	{
		int32_t L_20 = V_1;
		int32_t L_21 = ___4_n;
		V_6 = (bool)((((int32_t)L_20) < ((int32_t)L_21))? 1 : 0);
		bool L_22 = V_6;
		if (L_22)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx2_EmulatedGather_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m75E4DC1575D64C468E29623C2A27062E59A006BB_gshared (int32_t* ___0_dptr, void* ___1_base_addr, int64_t* ___2_indexPtr, int32_t ___3_scale, int32_t ___4_n, int32_t* ___5_mask, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	int64_t V_3 = 0;
	int32_t* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B4_0 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		V_1 = 0;
		goto IL_0069;
	}

IL_000d:
	{
		int64_t* L_0 = ___2_indexPtr;
		int32_t L_1 = V_1;
		int64_t L_2 = (*(((int64_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), 8))))));
		V_2 = L_2;
		int64_t L_3 = V_2;
		int32_t L_4 = ___3_scale;
		V_3 = ((int64_t)il2cpp_codegen_multiply(L_3, ((int64_t)L_4)));
		void* L_5 = ___1_base_addr;
		int64_t L_6 = V_3;
		V_4 = (int32_t*)((void*)il2cpp_codegen_add((intptr_t)L_5, ((intptr_t)L_6)));
		int32_t* L_7 = ___5_mask;
		if ((((intptr_t)L_7) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_0044;
		}
	}
	{
		int32_t* L_8 = ___5_mask;
		int32_t L_9 = V_1;
		uint32_t L_10 = sizeof(int32_t);
		int32_t L_11 = V_0;
		int32_t L_12;
		L_12 = Int32_CompareTo_mFA011811D4447442ED442B4A507BD4267621C586((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), (int32_t)L_10)))), L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		G_B4_0 = ((((int32_t)L_12) < ((int32_t)0))? 1 : 0);
		goto IL_0045;
	}

IL_0044:
	{
		G_B4_0 = 1;
	}

IL_0045:
	{
		V_5 = (bool)G_B4_0;
		bool L_13 = V_5;
		if (!L_13)
		{
			goto IL_0064;
		}
	}
	{
		int32_t* L_14 = ___0_dptr;
		int32_t L_15 = V_1;
		uint32_t L_16 = sizeof(int32_t);
		int32_t* L_17 = V_4;
		int32_t L_18 = (*(int32_t*)L_17);
		*(int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_15), (int32_t)L_16)))) = L_18;
	}

IL_0064:
	{
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0069:
	{
		int32_t L_20 = V_1;
		int32_t L_21 = ___4_n;
		V_6 = (bool)((((int32_t)L_20) < ((int32_t)L_21))? 1 : 0);
		bool L_22 = V_6;
		if (L_22)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx2_EmulatedGather_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m8F3DA1C7D0D9C656F6FB3CCC2747A02B6BDF9E8E_gshared (int64_t* ___0_dptr, void* ___1_base_addr, int32_t* ___2_indexPtr, int32_t ___3_scale, int32_t ___4_n, int64_t* ___5_mask, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	int64_t V_3 = 0;
	int64_t* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B4_0 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int64_t));
		V_1 = 0;
		goto IL_006a;
	}

IL_000d:
	{
		int32_t* L_0 = ___2_indexPtr;
		int32_t L_1 = V_1;
		int32_t L_2 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), 4))))));
		V_2 = ((int64_t)L_2);
		int64_t L_3 = V_2;
		int32_t L_4 = ___3_scale;
		V_3 = ((int64_t)il2cpp_codegen_multiply(L_3, ((int64_t)L_4)));
		void* L_5 = ___1_base_addr;
		int64_t L_6 = V_3;
		V_4 = (int64_t*)((void*)il2cpp_codegen_add((intptr_t)L_5, ((intptr_t)L_6)));
		int64_t* L_7 = ___5_mask;
		if ((((intptr_t)L_7) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_0045;
		}
	}
	{
		int64_t* L_8 = ___5_mask;
		int32_t L_9 = V_1;
		uint32_t L_10 = sizeof(int64_t);
		int64_t L_11 = V_0;
		int32_t L_12;
		L_12 = Int64_CompareTo_m63A0BDA03C5B1DEB7387B1C53D6BFD961E4F5490((int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), (int32_t)L_10)))), L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		G_B4_0 = ((((int32_t)L_12) < ((int32_t)0))? 1 : 0);
		goto IL_0046;
	}

IL_0045:
	{
		G_B4_0 = 1;
	}

IL_0046:
	{
		V_5 = (bool)G_B4_0;
		bool L_13 = V_5;
		if (!L_13)
		{
			goto IL_0065;
		}
	}
	{
		int64_t* L_14 = ___0_dptr;
		int32_t L_15 = V_1;
		uint32_t L_16 = sizeof(int64_t);
		int64_t* L_17 = V_4;
		int64_t L_18 = (*(int64_t*)L_17);
		*(int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_15), (int32_t)L_16)))) = L_18;
	}

IL_0065:
	{
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_006a:
	{
		int32_t L_20 = V_1;
		int32_t L_21 = ___4_n;
		V_6 = (bool)((((int32_t)L_20) < ((int32_t)L_21))? 1 : 0);
		bool L_22 = V_6;
		if (L_22)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx2_EmulatedGather_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m16B5D468730F5B7AFE121394A46B16F4E3F663CB_gshared (int64_t* ___0_dptr, void* ___1_base_addr, int64_t* ___2_indexPtr, int32_t ___3_scale, int32_t ___4_n, int64_t* ___5_mask, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	int64_t V_3 = 0;
	int64_t* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B4_0 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int64_t));
		V_1 = 0;
		goto IL_0069;
	}

IL_000d:
	{
		int64_t* L_0 = ___2_indexPtr;
		int32_t L_1 = V_1;
		int64_t L_2 = (*(((int64_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), 8))))));
		V_2 = L_2;
		int64_t L_3 = V_2;
		int32_t L_4 = ___3_scale;
		V_3 = ((int64_t)il2cpp_codegen_multiply(L_3, ((int64_t)L_4)));
		void* L_5 = ___1_base_addr;
		int64_t L_6 = V_3;
		V_4 = (int64_t*)((void*)il2cpp_codegen_add((intptr_t)L_5, ((intptr_t)L_6)));
		int64_t* L_7 = ___5_mask;
		if ((((intptr_t)L_7) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_0044;
		}
	}
	{
		int64_t* L_8 = ___5_mask;
		int32_t L_9 = V_1;
		uint32_t L_10 = sizeof(int64_t);
		int64_t L_11 = V_0;
		int32_t L_12;
		L_12 = Int64_CompareTo_m63A0BDA03C5B1DEB7387B1C53D6BFD961E4F5490((int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), (int32_t)L_10)))), L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		G_B4_0 = ((((int32_t)L_12) < ((int32_t)0))? 1 : 0);
		goto IL_0045;
	}

IL_0044:
	{
		G_B4_0 = 1;
	}

IL_0045:
	{
		V_5 = (bool)G_B4_0;
		bool L_13 = V_5;
		if (!L_13)
		{
			goto IL_0064;
		}
	}
	{
		int64_t* L_14 = ___0_dptr;
		int32_t L_15 = V_1;
		uint32_t L_16 = sizeof(int64_t);
		int64_t* L_17 = V_4;
		int64_t L_18 = (*(int64_t*)L_17);
		*(int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_15), (int32_t)L_16)))) = L_18;
	}

IL_0064:
	{
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0069:
	{
		int32_t L_20 = V_1;
		int32_t L_21 = ___4_n;
		V_6 = (bool)((((int32_t)L_20) < ((int32_t)L_21))? 1 : 0);
		bool L_22 = V_6;
		if (L_22)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx2_EmulatedGather_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mBD6B0D9436820A5A075E4DEDAC5F272776C647AD_gshared (float* ___0_dptr, void* ___1_base_addr, int32_t* ___2_indexPtr, int32_t ___3_scale, int32_t ___4_n, int32_t* ___5_mask, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	int64_t V_3 = 0;
	float* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B4_0 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		V_1 = 0;
		goto IL_006a;
	}

IL_000d:
	{
		int32_t* L_0 = ___2_indexPtr;
		int32_t L_1 = V_1;
		int32_t L_2 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), 4))))));
		V_2 = ((int64_t)L_2);
		int64_t L_3 = V_2;
		int32_t L_4 = ___3_scale;
		V_3 = ((int64_t)il2cpp_codegen_multiply(L_3, ((int64_t)L_4)));
		void* L_5 = ___1_base_addr;
		int64_t L_6 = V_3;
		V_4 = (float*)((void*)il2cpp_codegen_add((intptr_t)L_5, ((intptr_t)L_6)));
		int32_t* L_7 = ___5_mask;
		if ((((intptr_t)L_7) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_0045;
		}
	}
	{
		int32_t* L_8 = ___5_mask;
		int32_t L_9 = V_1;
		uint32_t L_10 = sizeof(int32_t);
		int32_t L_11 = V_0;
		int32_t L_12;
		L_12 = Int32_CompareTo_mFA011811D4447442ED442B4A507BD4267621C586((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), (int32_t)L_10)))), L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		G_B4_0 = ((((int32_t)L_12) < ((int32_t)0))? 1 : 0);
		goto IL_0046;
	}

IL_0045:
	{
		G_B4_0 = 1;
	}

IL_0046:
	{
		V_5 = (bool)G_B4_0;
		bool L_13 = V_5;
		if (!L_13)
		{
			goto IL_0065;
		}
	}
	{
		float* L_14 = ___0_dptr;
		int32_t L_15 = V_1;
		uint32_t L_16 = sizeof(float);
		float* L_17 = V_4;
		float L_18 = (*(float*)L_17);
		*(float*)((float*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_15), (int32_t)L_16)))) = L_18;
	}

IL_0065:
	{
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_006a:
	{
		int32_t L_20 = V_1;
		int32_t L_21 = ___4_n;
		V_6 = (bool)((((int32_t)L_20) < ((int32_t)L_21))? 1 : 0);
		bool L_22 = V_6;
		if (L_22)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx2_EmulatedGather_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m089FE6B150D3770B7C1109D4010EFBE72C0E985B_gshared (float* ___0_dptr, void* ___1_base_addr, int64_t* ___2_indexPtr, int32_t ___3_scale, int32_t ___4_n, int32_t* ___5_mask, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	int64_t V_3 = 0;
	float* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B4_0 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		V_1 = 0;
		goto IL_0069;
	}

IL_000d:
	{
		int64_t* L_0 = ___2_indexPtr;
		int32_t L_1 = V_1;
		int64_t L_2 = (*(((int64_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), 8))))));
		V_2 = L_2;
		int64_t L_3 = V_2;
		int32_t L_4 = ___3_scale;
		V_3 = ((int64_t)il2cpp_codegen_multiply(L_3, ((int64_t)L_4)));
		void* L_5 = ___1_base_addr;
		int64_t L_6 = V_3;
		V_4 = (float*)((void*)il2cpp_codegen_add((intptr_t)L_5, ((intptr_t)L_6)));
		int32_t* L_7 = ___5_mask;
		if ((((intptr_t)L_7) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_0044;
		}
	}
	{
		int32_t* L_8 = ___5_mask;
		int32_t L_9 = V_1;
		uint32_t L_10 = sizeof(int32_t);
		int32_t L_11 = V_0;
		int32_t L_12;
		L_12 = Int32_CompareTo_mFA011811D4447442ED442B4A507BD4267621C586((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), (int32_t)L_10)))), L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		G_B4_0 = ((((int32_t)L_12) < ((int32_t)0))? 1 : 0);
		goto IL_0045;
	}

IL_0044:
	{
		G_B4_0 = 1;
	}

IL_0045:
	{
		V_5 = (bool)G_B4_0;
		bool L_13 = V_5;
		if (!L_13)
		{
			goto IL_0064;
		}
	}
	{
		float* L_14 = ___0_dptr;
		int32_t L_15 = V_1;
		uint32_t L_16 = sizeof(float);
		float* L_17 = V_4;
		float L_18 = (*(float*)L_17);
		*(float*)((float*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_15), (int32_t)L_16)))) = L_18;
	}

IL_0064:
	{
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0069:
	{
		int32_t L_20 = V_1;
		int32_t L_21 = ___4_n;
		V_6 = (bool)((((int32_t)L_20) < ((int32_t)L_21))? 1 : 0);
		bool L_22 = V_6;
		if (L_22)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx2_EmulatedGather_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_m78BBC4DBE234DA027814A059C7A569C168B14265_gshared (Il2CppFullySharedGenericStruct* ___0_dptr, void* ___1_base_addr, int32_t* ___2_indexPtr, int32_t ___3_scale, int32_t ___4_n, Il2CppFullySharedGenericStruct* ___5_mask, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_tD3AAA6C44816F6B7C2E20A7D231588A6DD300594 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	void* L_12 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	const uint32_t SizeOf_T_t7746E565CB09ADDE66D7FE8BA2706651748F4314 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 5));
	const Il2CppFullySharedGenericStruct L_19 = alloca(SizeOf_T_t7746E565CB09ADDE66D7FE8BA2706651748F4314);
	const Il2CppFullySharedGenericStruct L_11 = alloca(SizeOf_U_tD3AAA6C44816F6B7C2E20A7D231588A6DD300594);
	Il2CppFullySharedGenericStruct V_0 = alloca(SizeOf_U_tD3AAA6C44816F6B7C2E20A7D231588A6DD300594);
	memset(V_0, 0, SizeOf_U_tD3AAA6C44816F6B7C2E20A7D231588A6DD300594);
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	int64_t V_3 = 0;
	Il2CppFullySharedGenericStruct* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B4_0 = 0;
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericStruct*)V_0, SizeOf_U_tD3AAA6C44816F6B7C2E20A7D231588A6DD300594);
		V_1 = 0;
		goto IL_006a;
	}

IL_000d:
	{
		int32_t* L_0 = ___2_indexPtr;
		int32_t L_1 = V_1;
		int32_t L_2 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), 4))))));
		V_2 = ((int64_t)L_2);
		int64_t L_3 = V_2;
		int32_t L_4 = ___3_scale;
		V_3 = ((int64_t)il2cpp_codegen_multiply(L_3, ((int64_t)L_4)));
		void* L_5 = ___1_base_addr;
		int64_t L_6 = V_3;
		V_4 = (Il2CppFullySharedGenericStruct*)((void*)il2cpp_codegen_add((intptr_t)L_5, ((intptr_t)L_6)));
		Il2CppFullySharedGenericStruct* L_7 = ___5_mask;
		if ((((intptr_t)L_7) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_0045;
		}
	}
	{
		Il2CppFullySharedGenericStruct* L_8 = ___5_mask;
		int32_t L_9 = V_1;
		uint32_t L_10 = SizeOf_U_tD3AAA6C44816F6B7C2E20A7D231588A6DD300594;
		il2cpp_codegen_memcpy(L_11, V_0, SizeOf_U_tD3AAA6C44816F6B7C2E20A7D231588A6DD300594);
		int32_t L_13;
		L_13 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 3), L_12, (void*)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), (int32_t)L_10)))), L_11);
		G_B4_0 = ((((int32_t)L_13) < ((int32_t)0))? 1 : 0);
		goto IL_0046;
	}

IL_0045:
	{
		G_B4_0 = 1;
	}

IL_0046:
	{
		V_5 = (bool)G_B4_0;
		bool L_14 = V_5;
		if (!L_14)
		{
			goto IL_0065;
		}
	}
	{
		Il2CppFullySharedGenericStruct* L_15 = ___0_dptr;
		int32_t L_16 = V_1;
		uint32_t L_17 = SizeOf_T_t7746E565CB09ADDE66D7FE8BA2706651748F4314;
		Il2CppFullySharedGenericStruct* L_18 = V_4;
		il2cpp_codegen_memcpy(L_19, L_18, SizeOf_T_t7746E565CB09ADDE66D7FE8BA2706651748F4314);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericStruct*)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_16), (int32_t)L_17)))), L_19, SizeOf_T_t7746E565CB09ADDE66D7FE8BA2706651748F4314);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 5), (void**)(Il2CppFullySharedGenericStruct*)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_16), (int32_t)L_17)))), (void*)L_19);
	}

IL_0065:
	{
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_006a:
	{
		int32_t L_21 = V_1;
		int32_t L_22 = ___4_n;
		V_6 = (bool)((((int32_t)L_21) < ((int32_t)L_22))? 1 : 0);
		bool L_23 = V_6;
		if (L_23)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx2_EmulatedGather_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_m93179BB5AA8A484650210DDAA1EB8D4319DE5686_gshared (Il2CppFullySharedGenericStruct* ___0_dptr, void* ___1_base_addr, int64_t* ___2_indexPtr, int32_t ___3_scale, int32_t ___4_n, Il2CppFullySharedGenericStruct* ___5_mask, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_t64249877289BCA4A66FB09171AC3649960014747 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	void* L_12 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	const uint32_t SizeOf_T_t2BE133648A5E32C27FC46CF83B739F6CD3C673A8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 5));
	const Il2CppFullySharedGenericStruct L_19 = alloca(SizeOf_T_t2BE133648A5E32C27FC46CF83B739F6CD3C673A8);
	const Il2CppFullySharedGenericStruct L_11 = alloca(SizeOf_U_t64249877289BCA4A66FB09171AC3649960014747);
	Il2CppFullySharedGenericStruct V_0 = alloca(SizeOf_U_t64249877289BCA4A66FB09171AC3649960014747);
	memset(V_0, 0, SizeOf_U_t64249877289BCA4A66FB09171AC3649960014747);
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	int64_t V_3 = 0;
	Il2CppFullySharedGenericStruct* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B4_0 = 0;
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericStruct*)V_0, SizeOf_U_t64249877289BCA4A66FB09171AC3649960014747);
		V_1 = 0;
		goto IL_0069;
	}

IL_000d:
	{
		int64_t* L_0 = ___2_indexPtr;
		int32_t L_1 = V_1;
		int64_t L_2 = (*(((int64_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), 8))))));
		V_2 = L_2;
		int64_t L_3 = V_2;
		int32_t L_4 = ___3_scale;
		V_3 = ((int64_t)il2cpp_codegen_multiply(L_3, ((int64_t)L_4)));
		void* L_5 = ___1_base_addr;
		int64_t L_6 = V_3;
		V_4 = (Il2CppFullySharedGenericStruct*)((void*)il2cpp_codegen_add((intptr_t)L_5, ((intptr_t)L_6)));
		Il2CppFullySharedGenericStruct* L_7 = ___5_mask;
		if ((((intptr_t)L_7) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_0044;
		}
	}
	{
		Il2CppFullySharedGenericStruct* L_8 = ___5_mask;
		int32_t L_9 = V_1;
		uint32_t L_10 = SizeOf_U_t64249877289BCA4A66FB09171AC3649960014747;
		il2cpp_codegen_memcpy(L_11, V_0, SizeOf_U_t64249877289BCA4A66FB09171AC3649960014747);
		int32_t L_13;
		L_13 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 3), L_12, (void*)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), (int32_t)L_10)))), L_11);
		G_B4_0 = ((((int32_t)L_13) < ((int32_t)0))? 1 : 0);
		goto IL_0045;
	}

IL_0044:
	{
		G_B4_0 = 1;
	}

IL_0045:
	{
		V_5 = (bool)G_B4_0;
		bool L_14 = V_5;
		if (!L_14)
		{
			goto IL_0064;
		}
	}
	{
		Il2CppFullySharedGenericStruct* L_15 = ___0_dptr;
		int32_t L_16 = V_1;
		uint32_t L_17 = SizeOf_T_t2BE133648A5E32C27FC46CF83B739F6CD3C673A8;
		Il2CppFullySharedGenericStruct* L_18 = V_4;
		il2cpp_codegen_memcpy(L_19, L_18, SizeOf_T_t2BE133648A5E32C27FC46CF83B739F6CD3C673A8);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericStruct*)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_16), (int32_t)L_17)))), L_19, SizeOf_T_t2BE133648A5E32C27FC46CF83B739F6CD3C673A8);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 5), (void**)(Il2CppFullySharedGenericStruct*)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_16), (int32_t)L_17)))), (void*)L_19);
	}

IL_0064:
	{
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_0069:
	{
		int32_t L_21 = V_1;
		int32_t L_22 = ___4_n;
		V_6 = (bool)((((int32_t)L_21) < ((int32_t)L_22))? 1 : 0);
		bool L_23 = V_6;
		if (L_23)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStrCmpIntRes2_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5D9BE946098FA4C7FC8CC23DEE63A0877E8D6C8B_gshared (uint8_t* ___0_a, int32_t ___1_alen, uint8_t* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	bool V_1 = false;
	StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	uint8_t V_7 = 0x0;
	bool V_8 = false;
	uint8_t V_9 = 0x0;
	bool V_10 = false;
	bool V_11 = false;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	bool V_21 = false;
	bool V_22 = false;
	bool V_23 = false;
	bool V_24 = false;
	bool V_25 = false;
	bool V_26 = false;
	bool V_27 = false;
	bool V_28 = false;
	int32_t V_29 = 0;
	int32_t V_30 = 0;
	bool V_31 = false;
	bool V_32 = false;
	bool V_33 = false;
	bool V_34 = false;
	bool V_35 = false;
	int32_t V_36 = 0;
	bool V_37 = false;
	bool V_38 = false;
	bool V_39 = false;
	bool V_40 = false;
	bool V_41 = false;
	bool V_42 = false;
	uint8_t V_43 = 0x0;
	bool V_44 = false;
	bool V_45 = false;
	int32_t V_46 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B26_0 = 0;
	int32_t G_B36_0 = 0;
	int32_t G_B46_0 = 0;
	int32_t G_B61_0 = 0;
	int32_t G_B60_0 = 0;
	int32_t G_B62_0 = 0;
	int32_t G_B62_1 = 0;
	int32_t G_B71_0 = 0;
	int32_t G_B70_0 = 0;
	int32_t G_B72_0 = 0;
	int32_t G_B73_0 = 0;
	int32_t G_B73_1 = 0;
	int32_t G_B81_0 = 0;
	int32_t G_B80_0 = 0;
	int32_t G_B82_0 = 0;
	int32_t G_B82_1 = 0;
	{
		V_0 = (bool)0;
		V_1 = (bool)0;
		il2cpp_codegen_initobj((&V_2), sizeof(StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6));
		V_3 = 0;
		goto IL_01ea;
	}

IL_0014:
	{
		uint8_t* L_0 = ___0_a;
		int32_t L_1 = V_3;
		uint32_t L_2 = sizeof(uint8_t);
		uint8_t L_3 = (*(uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), (int32_t)L_2)))));
		V_7 = L_3;
		int32_t L_4 = V_3;
		int32_t L_5 = ___1_alen;
		V_8 = (bool)((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_8;
		if (!L_6)
		{
			goto IL_0033;
		}
	}
	{
		V_0 = (bool)1;
	}

IL_0033:
	{
		V_1 = (bool)0;
		V_4 = 0;
		goto IL_01d6;
	}

IL_003d:
	{
		uint8_t* L_7 = ___2_b;
		int32_t L_8 = V_4;
		uint32_t L_9 = sizeof(uint8_t);
		uint8_t L_10 = (*(uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), (int32_t)L_9)))));
		V_9 = L_10;
		int32_t L_11 = V_4;
		int32_t L_12 = ___3_blen;
		V_11 = (bool)((((int32_t)L_11) == ((int32_t)L_12))? 1 : 0);
		bool L_13 = V_11;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		V_1 = (bool)1;
	}

IL_005e:
	{
		int32_t L_14 = ___5_imm8;
		V_13 = ((int32_t)(((int32_t)(L_14>>2))&3));
		int32_t L_15 = V_13;
		V_12 = L_15;
		int32_t L_16 = V_12;
		switch (L_16)
		{
			case 0:
			{
				goto IL_0082;
			}
			case 1:
			{
				goto IL_00c9;
			}
			case 2:
			{
				goto IL_013a;
			}
		}
	}
	{
		goto IL_017e;
	}

IL_0082:
	{
		EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* L_17;
		L_17 = EqualityComparer_1_get_Default_m41DB4C0E0A508A8326E903331DC63D410B7AB9C4_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		uint8_t L_18 = V_7;
		uint8_t L_19 = V_9;
		NullCheck(L_17);
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(8, L_17, L_18, L_19);
		V_10 = L_20;
		bool L_21 = V_0;
		bool L_22 = V_1;
		V_14 = (bool)((int32_t)(((((int32_t)L_21) == ((int32_t)0))? 1 : 0)&(int32_t)L_22));
		bool L_23 = V_14;
		if (!L_23)
		{
			goto IL_00a3;
		}
	}
	{
		V_10 = (bool)0;
		goto IL_00c4;
	}

IL_00a3:
	{
		bool L_24 = V_0;
		if (!L_24)
		{
			goto IL_00ac;
		}
	}
	{
		bool L_25 = V_1;
		G_B13_0 = ((((int32_t)L_25) == ((int32_t)0))? 1 : 0);
		goto IL_00ad;
	}

IL_00ac:
	{
		G_B13_0 = 0;
	}

IL_00ad:
	{
		V_15 = (bool)G_B13_0;
		bool L_26 = V_15;
		if (!L_26)
		{
			goto IL_00b8;
		}
	}
	{
		V_10 = (bool)0;
		goto IL_00c4;
	}

IL_00b8:
	{
		bool L_27 = V_0;
		bool L_28 = V_1;
		V_16 = (bool)((int32_t)((int32_t)L_27&(int32_t)L_28));
		bool L_29 = V_16;
		if (!L_29)
		{
			goto IL_00c4;
		}
	}
	{
		V_10 = (bool)0;
	}

IL_00c4:
	{
		goto IL_01c2;
	}

IL_00c9:
	{
		int32_t L_30 = V_3;
		V_17 = (bool)((((int32_t)((int32_t)(L_30&1))) == ((int32_t)0))? 1 : 0);
		bool L_31 = V_17;
		if (!L_31)
		{
			goto IL_00ed;
		}
	}
	{
		Comparer_1_t49F23FD0F51B7B3F17D30558E0A425107523CC30* L_32;
		L_32 = Comparer_1_get_Default_m84FF70BAB6A30BC2A0EABE8B0E58FCBD8F40C8FB(il2cpp_rgctx_method(method->rgctx_data, 6));
		uint8_t L_33 = V_9;
		uint8_t L_34 = V_7;
		NullCheck(L_32);
		int32_t L_35;
		L_35 = VirtualFuncInvoker2< int32_t, uint8_t, uint8_t >::Invoke(6, L_32, L_33, L_34);
		V_10 = (bool)((((int32_t)((((int32_t)L_35) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0103;
	}

IL_00ed:
	{
		Comparer_1_t49F23FD0F51B7B3F17D30558E0A425107523CC30* L_36;
		L_36 = Comparer_1_get_Default_m84FF70BAB6A30BC2A0EABE8B0E58FCBD8F40C8FB(il2cpp_rgctx_method(method->rgctx_data, 6));
		uint8_t L_37 = V_9;
		uint8_t L_38 = V_7;
		NullCheck(L_36);
		int32_t L_39;
		L_39 = VirtualFuncInvoker2< int32_t, uint8_t, uint8_t >::Invoke(6, L_36, L_37, L_38);
		V_10 = (bool)((((int32_t)((((int32_t)L_39) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0103:
	{
		bool L_40 = V_0;
		bool L_41 = V_1;
		V_18 = (bool)((int32_t)(((((int32_t)L_40) == ((int32_t)0))? 1 : 0)&(int32_t)L_41));
		bool L_42 = V_18;
		if (!L_42)
		{
			goto IL_0114;
		}
	}
	{
		V_10 = (bool)0;
		goto IL_0135;
	}

IL_0114:
	{
		bool L_43 = V_0;
		if (!L_43)
		{
			goto IL_011d;
		}
	}
	{
		bool L_44 = V_1;
		G_B26_0 = ((((int32_t)L_44) == ((int32_t)0))? 1 : 0);
		goto IL_011e;
	}

IL_011d:
	{
		G_B26_0 = 0;
	}

IL_011e:
	{
		V_19 = (bool)G_B26_0;
		bool L_45 = V_19;
		if (!L_45)
		{
			goto IL_0129;
		}
	}
	{
		V_10 = (bool)0;
		goto IL_0135;
	}

IL_0129:
	{
		bool L_46 = V_0;
		bool L_47 = V_1;
		V_20 = (bool)((int32_t)((int32_t)L_46&(int32_t)L_47));
		bool L_48 = V_20;
		if (!L_48)
		{
			goto IL_0135;
		}
	}
	{
		V_10 = (bool)0;
	}

IL_0135:
	{
		goto IL_01c2;
	}

IL_013a:
	{
		EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* L_49;
		L_49 = EqualityComparer_1_get_Default_m41DB4C0E0A508A8326E903331DC63D410B7AB9C4_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		uint8_t L_50 = V_7;
		uint8_t L_51 = V_9;
		NullCheck(L_49);
		bool L_52;
		L_52 = VirtualFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(8, L_49, L_50, L_51);
		V_10 = L_52;
		bool L_53 = V_0;
		bool L_54 = V_1;
		V_21 = (bool)((int32_t)(((((int32_t)L_53) == ((int32_t)0))? 1 : 0)&(int32_t)L_54));
		bool L_55 = V_21;
		if (!L_55)
		{
			goto IL_015b;
		}
	}
	{
		V_10 = (bool)0;
		goto IL_017c;
	}

IL_015b:
	{
		bool L_56 = V_0;
		if (!L_56)
		{
			goto IL_0164;
		}
	}
	{
		bool L_57 = V_1;
		G_B36_0 = ((((int32_t)L_57) == ((int32_t)0))? 1 : 0);
		goto IL_0165;
	}

IL_0164:
	{
		G_B36_0 = 0;
	}

IL_0165:
	{
		V_22 = (bool)G_B36_0;
		bool L_58 = V_22;
		if (!L_58)
		{
			goto IL_0170;
		}
	}
	{
		V_10 = (bool)0;
		goto IL_017c;
	}

IL_0170:
	{
		bool L_59 = V_0;
		bool L_60 = V_1;
		V_23 = (bool)((int32_t)((int32_t)L_59&(int32_t)L_60));
		bool L_61 = V_23;
		if (!L_61)
		{
			goto IL_017c;
		}
	}
	{
		V_10 = (bool)1;
	}

IL_017c:
	{
		goto IL_01c2;
	}

IL_017e:
	{
		EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* L_62;
		L_62 = EqualityComparer_1_get_Default_m41DB4C0E0A508A8326E903331DC63D410B7AB9C4_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		uint8_t L_63 = V_7;
		uint8_t L_64 = V_9;
		NullCheck(L_62);
		bool L_65;
		L_65 = VirtualFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(8, L_62, L_63, L_64);
		V_10 = L_65;
		bool L_66 = V_0;
		bool L_67 = V_1;
		V_24 = (bool)((int32_t)(((((int32_t)L_66) == ((int32_t)0))? 1 : 0)&(int32_t)L_67));
		bool L_68 = V_24;
		if (!L_68)
		{
			goto IL_019f;
		}
	}
	{
		V_10 = (bool)0;
		goto IL_01c0;
	}

IL_019f:
	{
		bool L_69 = V_0;
		if (!L_69)
		{
			goto IL_01a8;
		}
	}
	{
		bool L_70 = V_1;
		G_B46_0 = ((((int32_t)L_70) == ((int32_t)0))? 1 : 0);
		goto IL_01a9;
	}

IL_01a8:
	{
		G_B46_0 = 0;
	}

IL_01a9:
	{
		V_25 = (bool)G_B46_0;
		bool L_71 = V_25;
		if (!L_71)
		{
			goto IL_01b4;
		}
	}
	{
		V_10 = (bool)1;
		goto IL_01c0;
	}

IL_01b4:
	{
		bool L_72 = V_0;
		bool L_73 = V_1;
		V_26 = (bool)((int32_t)((int32_t)L_72&(int32_t)L_73));
		bool L_74 = V_26;
		if (!L_74)
		{
			goto IL_01c0;
		}
	}
	{
		V_10 = (bool)1;
	}

IL_01c0:
	{
		goto IL_01c2;
	}

IL_01c2:
	{
		int32_t L_75 = V_3;
		int32_t L_76 = V_4;
		bool L_77 = V_10;
		StrBoolArray_SetBit_m212C6D1A8A4C422AF979D6B3BC7CD5B9BD0F3F01((&V_2), L_75, L_76, L_77, NULL);
		int32_t L_78 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_78, 1));
	}

IL_01d6:
	{
		int32_t L_79 = V_4;
		int32_t L_80 = ___4_len;
		V_27 = (bool)((((int32_t)L_79) < ((int32_t)L_80))? 1 : 0);
		bool L_81 = V_27;
		if (L_81)
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_82 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_82, 1));
	}

IL_01ea:
	{
		int32_t L_83 = V_3;
		int32_t L_84 = ___4_len;
		V_28 = (bool)((((int32_t)L_83) < ((int32_t)L_84))? 1 : 0);
		bool L_85 = V_28;
		if (L_85)
		{
			goto IL_0014;
		}
	}
	{
		V_6 = 0;
		int32_t L_86 = ___5_imm8;
		V_30 = ((int32_t)(((int32_t)(L_86>>2))&3));
		int32_t L_87 = V_30;
		V_29 = L_87;
		int32_t L_88 = V_29;
		switch (L_88)
		{
			case 0:
			{
				goto IL_0223;
			}
			case 1:
			{
				goto IL_0270;
			}
			case 2:
			{
				goto IL_02cb;
			}
			case 3:
			{
				goto IL_02fb;
			}
		}
	}
	{
		goto IL_035a;
	}

IL_0223:
	{
		V_3 = 0;
		goto IL_0260;
	}

IL_0227:
	{
		V_4 = 0;
		goto IL_024f;
	}

IL_022d:
	{
		int32_t L_89 = V_6;
		int32_t L_90 = V_4;
		int32_t L_91 = V_3;
		bool L_92;
		L_92 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_90, L_91, NULL);
		if (L_92)
		{
			G_B61_0 = L_89;
			goto IL_023f;
		}
		G_B60_0 = L_89;
	}
	{
		G_B62_0 = 0;
		G_B62_1 = G_B60_0;
		goto IL_0240;
	}

IL_023f:
	{
		G_B62_0 = 1;
		G_B62_1 = G_B61_0;
	}

IL_0240:
	{
		int32_t L_93 = V_3;
		V_6 = ((int32_t)(G_B62_1|((int32_t)(G_B62_0<<((int32_t)(L_93&((int32_t)31)))))));
		int32_t L_94 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_94, 1));
	}

IL_024f:
	{
		int32_t L_95 = V_4;
		int32_t L_96 = ___4_len;
		V_31 = (bool)((((int32_t)L_95) < ((int32_t)L_96))? 1 : 0);
		bool L_97 = V_31;
		if (L_97)
		{
			goto IL_022d;
		}
	}
	{
		int32_t L_98 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_98, 1));
	}

IL_0260:
	{
		int32_t L_99 = V_3;
		int32_t L_100 = ___4_len;
		V_32 = (bool)((((int32_t)L_99) < ((int32_t)L_100))? 1 : 0);
		bool L_101 = V_32;
		if (L_101)
		{
			goto IL_0227;
		}
	}
	{
		goto IL_035a;
	}

IL_0270:
	{
		V_3 = 0;
		goto IL_02bb;
	}

IL_0274:
	{
		V_4 = 0;
		goto IL_02aa;
	}

IL_027a:
	{
		int32_t L_102 = V_6;
		int32_t L_103 = V_4;
		int32_t L_104 = V_3;
		bool L_105;
		L_105 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_103, L_104, NULL);
		if (!L_105)
		{
			G_B71_0 = L_102;
			goto IL_0297;
		}
		G_B70_0 = L_102;
	}
	{
		int32_t L_106 = V_4;
		int32_t L_107 = V_3;
		bool L_108;
		L_108 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), ((int32_t)il2cpp_codegen_add(L_106, 1)), L_107, NULL);
		if (L_108)
		{
			G_B72_0 = G_B70_0;
			goto IL_029a;
		}
		G_B71_0 = G_B70_0;
	}

IL_0297:
	{
		G_B73_0 = 0;
		G_B73_1 = G_B71_0;
		goto IL_029b;
	}

IL_029a:
	{
		G_B73_0 = 1;
		G_B73_1 = G_B72_0;
	}

IL_029b:
	{
		int32_t L_109 = V_3;
		V_6 = ((int32_t)(G_B73_1|((int32_t)(G_B73_0<<((int32_t)(L_109&((int32_t)31)))))));
		int32_t L_110 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_110, 2));
	}

IL_02aa:
	{
		int32_t L_111 = V_4;
		int32_t L_112 = ___4_len;
		V_33 = (bool)((((int32_t)L_111) < ((int32_t)L_112))? 1 : 0);
		bool L_113 = V_33;
		if (L_113)
		{
			goto IL_027a;
		}
	}
	{
		int32_t L_114 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_114, 1));
	}

IL_02bb:
	{
		int32_t L_115 = V_3;
		int32_t L_116 = ___4_len;
		V_34 = (bool)((((int32_t)L_115) < ((int32_t)L_116))? 1 : 0);
		bool L_117 = V_34;
		if (L_117)
		{
			goto IL_0274;
		}
	}
	{
		goto IL_035a;
	}

IL_02cb:
	{
		V_3 = 0;
		goto IL_02ee;
	}

IL_02cf:
	{
		int32_t L_118 = V_6;
		int32_t L_119 = V_3;
		int32_t L_120 = V_3;
		bool L_121;
		L_121 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_119, L_120, NULL);
		if (L_121)
		{
			G_B81_0 = L_118;
			goto IL_02e0;
		}
		G_B80_0 = L_118;
	}
	{
		G_B82_0 = 0;
		G_B82_1 = G_B80_0;
		goto IL_02e1;
	}

IL_02e0:
	{
		G_B82_0 = 1;
		G_B82_1 = G_B81_0;
	}

IL_02e1:
	{
		int32_t L_122 = V_3;
		V_6 = ((int32_t)(G_B82_1|((int32_t)(G_B82_0<<((int32_t)(L_122&((int32_t)31)))))));
		int32_t L_123 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_123, 1));
	}

IL_02ee:
	{
		int32_t L_124 = V_3;
		int32_t L_125 = ___4_len;
		V_35 = (bool)((((int32_t)L_124) < ((int32_t)L_125))? 1 : 0);
		bool L_126 = V_35;
		if (L_126)
		{
			goto IL_02cf;
		}
	}
	{
		goto IL_035a;
	}

IL_02fb:
	{
		int32_t L_127 = ___6_allOnes;
		V_6 = L_127;
		V_3 = 0;
		goto IL_034d;
	}

IL_0303:
	{
		int32_t L_128 = V_3;
		V_36 = L_128;
		V_4 = 0;
		goto IL_033a;
	}

IL_030c:
	{
		int32_t L_129 = V_4;
		int32_t L_130 = V_36;
		bool L_131;
		L_131 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_129, L_130, NULL);
		V_37 = (bool)((((int32_t)L_131) == ((int32_t)0))? 1 : 0);
		bool L_132 = V_37;
		if (!L_132)
		{
			goto IL_032d;
		}
	}
	{
		int32_t L_133 = V_6;
		int32_t L_134 = V_3;
		V_6 = ((int32_t)(L_133&((~((int32_t)(1<<((int32_t)(L_134&((int32_t)31)))))))));
	}

IL_032d:
	{
		int32_t L_135 = V_36;
		V_36 = ((int32_t)il2cpp_codegen_add(L_135, 1));
		int32_t L_136 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_136, 1));
	}

IL_033a:
	{
		int32_t L_137 = V_4;
		int32_t L_138 = ___4_len;
		int32_t L_139 = V_3;
		V_38 = (bool)((((int32_t)L_137) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_138, L_139))))? 1 : 0);
		bool L_140 = V_38;
		if (L_140)
		{
			goto IL_030c;
		}
	}
	{
		int32_t L_141 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_141, 1));
	}

IL_034d:
	{
		int32_t L_142 = V_3;
		int32_t L_143 = ___4_len;
		V_39 = (bool)((((int32_t)L_142) < ((int32_t)L_143))? 1 : 0);
		bool L_144 = V_39;
		if (L_144)
		{
			goto IL_0303;
		}
	}
	{
		goto IL_035a;
	}

IL_035a:
	{
		V_5 = 0;
		V_1 = (bool)0;
		V_3 = 0;
		goto IL_0401;
	}

IL_0366:
	{
		int32_t L_145 = ___5_imm8;
		V_40 = (bool)((!(((uint32_t)((int32_t)(L_145&((int32_t)16)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_146 = V_40;
		if (!L_146)
		{
			goto IL_03ee;
		}
	}
	{
		int32_t L_147 = ___5_imm8;
		V_41 = (bool)((!(((uint32_t)((int32_t)(L_147&((int32_t)32)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_148 = V_41;
		if (!L_148)
		{
			goto IL_03dc;
		}
	}
	{
		EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* L_149;
		L_149 = EqualityComparer_1_get_Default_m41DB4C0E0A508A8326E903331DC63D410B7AB9C4_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		uint8_t* L_150 = ___2_b;
		int32_t L_151 = V_3;
		uint32_t L_152 = sizeof(uint8_t);
		uint8_t L_153 = (*(uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_150, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_151), (int32_t)L_152)))));
		il2cpp_codegen_initobj((&V_43), sizeof(uint8_t));
		uint8_t L_154 = V_43;
		NullCheck(L_149);
		bool L_155;
		L_155 = VirtualFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(8, L_149, L_153, L_154);
		V_42 = L_155;
		bool L_156 = V_42;
		if (!L_156)
		{
			goto IL_03b3;
		}
	}
	{
		V_1 = (bool)1;
	}

IL_03b3:
	{
		bool L_157 = V_1;
		V_44 = L_157;
		bool L_158 = V_44;
		if (!L_158)
		{
			goto IL_03ca;
		}
	}
	{
		int32_t L_159 = V_5;
		int32_t L_160 = V_6;
		int32_t L_161 = V_3;
		V_5 = ((int32_t)(L_159|((int32_t)(L_160&((int32_t)(1<<((int32_t)(L_161&((int32_t)31)))))))));
		goto IL_03d9;
	}

IL_03ca:
	{
		int32_t L_162 = V_5;
		int32_t L_163 = V_6;
		int32_t L_164 = V_3;
		V_5 = ((int32_t)(L_162|((int32_t)(((~L_163))&((int32_t)(1<<((int32_t)(L_164&((int32_t)31)))))))));
	}

IL_03d9:
	{
		goto IL_03eb;
	}

IL_03dc:
	{
		int32_t L_165 = V_5;
		int32_t L_166 = V_6;
		int32_t L_167 = V_3;
		V_5 = ((int32_t)(L_165|((int32_t)(((~L_166))&((int32_t)(1<<((int32_t)(L_167&((int32_t)31)))))))));
	}

IL_03eb:
	{
		goto IL_03fc;
	}

IL_03ee:
	{
		int32_t L_168 = V_5;
		int32_t L_169 = V_6;
		int32_t L_170 = V_3;
		V_5 = ((int32_t)(L_168|((int32_t)(L_169&((int32_t)(1<<((int32_t)(L_170&((int32_t)31)))))))));
	}

IL_03fc:
	{
		int32_t L_171 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_171, 1));
	}

IL_0401:
	{
		int32_t L_172 = V_3;
		int32_t L_173 = ___4_len;
		V_45 = (bool)((((int32_t)L_172) < ((int32_t)L_173))? 1 : 0);
		bool L_174 = V_45;
		if (L_174)
		{
			goto IL_0366;
		}
	}
	{
		int32_t L_175 = V_5;
		V_46 = L_175;
		goto IL_0415;
	}

IL_0415:
	{
		int32_t L_176 = V_46;
		return L_176;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStrCmpIntRes2_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mB3F9377B1A57D35D5514DEF77B3D9279A8622960_gshared (int16_t* ___0_a, int32_t ___1_alen, int16_t* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	bool V_1 = false;
	StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int16_t V_7 = 0;
	bool V_8 = false;
	int16_t V_9 = 0;
	bool V_10 = false;
	bool V_11 = false;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	bool V_21 = false;
	bool V_22 = false;
	bool V_23 = false;
	bool V_24 = false;
	bool V_25 = false;
	bool V_26 = false;
	bool V_27 = false;
	bool V_28 = false;
	int32_t V_29 = 0;
	int32_t V_30 = 0;
	bool V_31 = false;
	bool V_32 = false;
	bool V_33 = false;
	bool V_34 = false;
	bool V_35 = false;
	int32_t V_36 = 0;
	bool V_37 = false;
	bool V_38 = false;
	bool V_39 = false;
	bool V_40 = false;
	bool V_41 = false;
	bool V_42 = false;
	int16_t V_43 = 0;
	bool V_44 = false;
	bool V_45 = false;
	int32_t V_46 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B26_0 = 0;
	int32_t G_B36_0 = 0;
	int32_t G_B46_0 = 0;
	int32_t G_B61_0 = 0;
	int32_t G_B60_0 = 0;
	int32_t G_B62_0 = 0;
	int32_t G_B62_1 = 0;
	int32_t G_B71_0 = 0;
	int32_t G_B70_0 = 0;
	int32_t G_B72_0 = 0;
	int32_t G_B73_0 = 0;
	int32_t G_B73_1 = 0;
	int32_t G_B81_0 = 0;
	int32_t G_B80_0 = 0;
	int32_t G_B82_0 = 0;
	int32_t G_B82_1 = 0;
	{
		V_0 = (bool)0;
		V_1 = (bool)0;
		il2cpp_codegen_initobj((&V_2), sizeof(StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6));
		V_3 = 0;
		goto IL_01ea;
	}

IL_0014:
	{
		int16_t* L_0 = ___0_a;
		int32_t L_1 = V_3;
		uint32_t L_2 = sizeof(int16_t);
		int16_t L_3 = (*(int16_t*)((int16_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), (int32_t)L_2)))));
		V_7 = L_3;
		int32_t L_4 = V_3;
		int32_t L_5 = ___1_alen;
		V_8 = (bool)((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_8;
		if (!L_6)
		{
			goto IL_0033;
		}
	}
	{
		V_0 = (bool)1;
	}

IL_0033:
	{
		V_1 = (bool)0;
		V_4 = 0;
		goto IL_01d6;
	}

IL_003d:
	{
		int16_t* L_7 = ___2_b;
		int32_t L_8 = V_4;
		uint32_t L_9 = sizeof(int16_t);
		int16_t L_10 = (*(int16_t*)((int16_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), (int32_t)L_9)))));
		V_9 = L_10;
		int32_t L_11 = V_4;
		int32_t L_12 = ___3_blen;
		V_11 = (bool)((((int32_t)L_11) == ((int32_t)L_12))? 1 : 0);
		bool L_13 = V_11;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		V_1 = (bool)1;
	}

IL_005e:
	{
		int32_t L_14 = ___5_imm8;
		V_13 = ((int32_t)(((int32_t)(L_14>>2))&3));
		int32_t L_15 = V_13;
		V_12 = L_15;
		int32_t L_16 = V_12;
		switch (L_16)
		{
			case 0:
			{
				goto IL_0082;
			}
			case 1:
			{
				goto IL_00c9;
			}
			case 2:
			{
				goto IL_013a;
			}
		}
	}
	{
		goto IL_017e;
	}

IL_0082:
	{
		EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* L_17;
		L_17 = EqualityComparer_1_get_Default_m7D273CC532DC2164C9C86D28C639FDEA38173C88_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		int16_t L_18 = V_7;
		int16_t L_19 = V_9;
		NullCheck(L_17);
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, int16_t, int16_t >::Invoke(8, L_17, L_18, L_19);
		V_10 = L_20;
		bool L_21 = V_0;
		bool L_22 = V_1;
		V_14 = (bool)((int32_t)(((((int32_t)L_21) == ((int32_t)0))? 1 : 0)&(int32_t)L_22));
		bool L_23 = V_14;
		if (!L_23)
		{
			goto IL_00a3;
		}
	}
	{
		V_10 = (bool)0;
		goto IL_00c4;
	}

IL_00a3:
	{
		bool L_24 = V_0;
		if (!L_24)
		{
			goto IL_00ac;
		}
	}
	{
		bool L_25 = V_1;
		G_B13_0 = ((((int32_t)L_25) == ((int32_t)0))? 1 : 0);
		goto IL_00ad;
	}

IL_00ac:
	{
		G_B13_0 = 0;
	}

IL_00ad:
	{
		V_15 = (bool)G_B13_0;
		bool L_26 = V_15;
		if (!L_26)
		{
			goto IL_00b8;
		}
	}
	{
		V_10 = (bool)0;
		goto IL_00c4;
	}

IL_00b8:
	{
		bool L_27 = V_0;
		bool L_28 = V_1;
		V_16 = (bool)((int32_t)((int32_t)L_27&(int32_t)L_28));
		bool L_29 = V_16;
		if (!L_29)
		{
			goto IL_00c4;
		}
	}
	{
		V_10 = (bool)0;
	}

IL_00c4:
	{
		goto IL_01c2;
	}

IL_00c9:
	{
		int32_t L_30 = V_3;
		V_17 = (bool)((((int32_t)((int32_t)(L_30&1))) == ((int32_t)0))? 1 : 0);
		bool L_31 = V_17;
		if (!L_31)
		{
			goto IL_00ed;
		}
	}
	{
		Comparer_1_t7EDCB50F141B8333E02C67781CAC2D41381F0563* L_32;
		L_32 = Comparer_1_get_Default_mE45154132033749FD101CB1689E0375B42C4B407(il2cpp_rgctx_method(method->rgctx_data, 6));
		int16_t L_33 = V_9;
		int16_t L_34 = V_7;
		NullCheck(L_32);
		int32_t L_35;
		L_35 = VirtualFuncInvoker2< int32_t, int16_t, int16_t >::Invoke(6, L_32, L_33, L_34);
		V_10 = (bool)((((int32_t)((((int32_t)L_35) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0103;
	}

IL_00ed:
	{
		Comparer_1_t7EDCB50F141B8333E02C67781CAC2D41381F0563* L_36;
		L_36 = Comparer_1_get_Default_mE45154132033749FD101CB1689E0375B42C4B407(il2cpp_rgctx_method(method->rgctx_data, 6));
		int16_t L_37 = V_9;
		int16_t L_38 = V_7;
		NullCheck(L_36);
		int32_t L_39;
		L_39 = VirtualFuncInvoker2< int32_t, int16_t, int16_t >::Invoke(6, L_36, L_37, L_38);
		V_10 = (bool)((((int32_t)((((int32_t)L_39) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0103:
	{
		bool L_40 = V_0;
		bool L_41 = V_1;
		V_18 = (bool)((int32_t)(((((int32_t)L_40) == ((int32_t)0))? 1 : 0)&(int32_t)L_41));
		bool L_42 = V_18;
		if (!L_42)
		{
			goto IL_0114;
		}
	}
	{
		V_10 = (bool)0;
		goto IL_0135;
	}

IL_0114:
	{
		bool L_43 = V_0;
		if (!L_43)
		{
			goto IL_011d;
		}
	}
	{
		bool L_44 = V_1;
		G_B26_0 = ((((int32_t)L_44) == ((int32_t)0))? 1 : 0);
		goto IL_011e;
	}

IL_011d:
	{
		G_B26_0 = 0;
	}

IL_011e:
	{
		V_19 = (bool)G_B26_0;
		bool L_45 = V_19;
		if (!L_45)
		{
			goto IL_0129;
		}
	}
	{
		V_10 = (bool)0;
		goto IL_0135;
	}

IL_0129:
	{
		bool L_46 = V_0;
		bool L_47 = V_1;
		V_20 = (bool)((int32_t)((int32_t)L_46&(int32_t)L_47));
		bool L_48 = V_20;
		if (!L_48)
		{
			goto IL_0135;
		}
	}
	{
		V_10 = (bool)0;
	}

IL_0135:
	{
		goto IL_01c2;
	}

IL_013a:
	{
		EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* L_49;
		L_49 = EqualityComparer_1_get_Default_m7D273CC532DC2164C9C86D28C639FDEA38173C88_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		int16_t L_50 = V_7;
		int16_t L_51 = V_9;
		NullCheck(L_49);
		bool L_52;
		L_52 = VirtualFuncInvoker2< bool, int16_t, int16_t >::Invoke(8, L_49, L_50, L_51);
		V_10 = L_52;
		bool L_53 = V_0;
		bool L_54 = V_1;
		V_21 = (bool)((int32_t)(((((int32_t)L_53) == ((int32_t)0))? 1 : 0)&(int32_t)L_54));
		bool L_55 = V_21;
		if (!L_55)
		{
			goto IL_015b;
		}
	}
	{
		V_10 = (bool)0;
		goto IL_017c;
	}

IL_015b:
	{
		bool L_56 = V_0;
		if (!L_56)
		{
			goto IL_0164;
		}
	}
	{
		bool L_57 = V_1;
		G_B36_0 = ((((int32_t)L_57) == ((int32_t)0))? 1 : 0);
		goto IL_0165;
	}

IL_0164:
	{
		G_B36_0 = 0;
	}

IL_0165:
	{
		V_22 = (bool)G_B36_0;
		bool L_58 = V_22;
		if (!L_58)
		{
			goto IL_0170;
		}
	}
	{
		V_10 = (bool)0;
		goto IL_017c;
	}

IL_0170:
	{
		bool L_59 = V_0;
		bool L_60 = V_1;
		V_23 = (bool)((int32_t)((int32_t)L_59&(int32_t)L_60));
		bool L_61 = V_23;
		if (!L_61)
		{
			goto IL_017c;
		}
	}
	{
		V_10 = (bool)1;
	}

IL_017c:
	{
		goto IL_01c2;
	}

IL_017e:
	{
		EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* L_62;
		L_62 = EqualityComparer_1_get_Default_m7D273CC532DC2164C9C86D28C639FDEA38173C88_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		int16_t L_63 = V_7;
		int16_t L_64 = V_9;
		NullCheck(L_62);
		bool L_65;
		L_65 = VirtualFuncInvoker2< bool, int16_t, int16_t >::Invoke(8, L_62, L_63, L_64);
		V_10 = L_65;
		bool L_66 = V_0;
		bool L_67 = V_1;
		V_24 = (bool)((int32_t)(((((int32_t)L_66) == ((int32_t)0))? 1 : 0)&(int32_t)L_67));
		bool L_68 = V_24;
		if (!L_68)
		{
			goto IL_019f;
		}
	}
	{
		V_10 = (bool)0;
		goto IL_01c0;
	}

IL_019f:
	{
		bool L_69 = V_0;
		if (!L_69)
		{
			goto IL_01a8;
		}
	}
	{
		bool L_70 = V_1;
		G_B46_0 = ((((int32_t)L_70) == ((int32_t)0))? 1 : 0);
		goto IL_01a9;
	}

IL_01a8:
	{
		G_B46_0 = 0;
	}

IL_01a9:
	{
		V_25 = (bool)G_B46_0;
		bool L_71 = V_25;
		if (!L_71)
		{
			goto IL_01b4;
		}
	}
	{
		V_10 = (bool)1;
		goto IL_01c0;
	}

IL_01b4:
	{
		bool L_72 = V_0;
		bool L_73 = V_1;
		V_26 = (bool)((int32_t)((int32_t)L_72&(int32_t)L_73));
		bool L_74 = V_26;
		if (!L_74)
		{
			goto IL_01c0;
		}
	}
	{
		V_10 = (bool)1;
	}

IL_01c0:
	{
		goto IL_01c2;
	}

IL_01c2:
	{
		int32_t L_75 = V_3;
		int32_t L_76 = V_4;
		bool L_77 = V_10;
		StrBoolArray_SetBit_m212C6D1A8A4C422AF979D6B3BC7CD5B9BD0F3F01((&V_2), L_75, L_76, L_77, NULL);
		int32_t L_78 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_78, 1));
	}

IL_01d6:
	{
		int32_t L_79 = V_4;
		int32_t L_80 = ___4_len;
		V_27 = (bool)((((int32_t)L_79) < ((int32_t)L_80))? 1 : 0);
		bool L_81 = V_27;
		if (L_81)
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_82 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_82, 1));
	}

IL_01ea:
	{
		int32_t L_83 = V_3;
		int32_t L_84 = ___4_len;
		V_28 = (bool)((((int32_t)L_83) < ((int32_t)L_84))? 1 : 0);
		bool L_85 = V_28;
		if (L_85)
		{
			goto IL_0014;
		}
	}
	{
		V_6 = 0;
		int32_t L_86 = ___5_imm8;
		V_30 = ((int32_t)(((int32_t)(L_86>>2))&3));
		int32_t L_87 = V_30;
		V_29 = L_87;
		int32_t L_88 = V_29;
		switch (L_88)
		{
			case 0:
			{
				goto IL_0223;
			}
			case 1:
			{
				goto IL_0270;
			}
			case 2:
			{
				goto IL_02cb;
			}
			case 3:
			{
				goto IL_02fb;
			}
		}
	}
	{
		goto IL_035a;
	}

IL_0223:
	{
		V_3 = 0;
		goto IL_0260;
	}

IL_0227:
	{
		V_4 = 0;
		goto IL_024f;
	}

IL_022d:
	{
		int32_t L_89 = V_6;
		int32_t L_90 = V_4;
		int32_t L_91 = V_3;
		bool L_92;
		L_92 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_90, L_91, NULL);
		if (L_92)
		{
			G_B61_0 = L_89;
			goto IL_023f;
		}
		G_B60_0 = L_89;
	}
	{
		G_B62_0 = 0;
		G_B62_1 = G_B60_0;
		goto IL_0240;
	}

IL_023f:
	{
		G_B62_0 = 1;
		G_B62_1 = G_B61_0;
	}

IL_0240:
	{
		int32_t L_93 = V_3;
		V_6 = ((int32_t)(G_B62_1|((int32_t)(G_B62_0<<((int32_t)(L_93&((int32_t)31)))))));
		int32_t L_94 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_94, 1));
	}

IL_024f:
	{
		int32_t L_95 = V_4;
		int32_t L_96 = ___4_len;
		V_31 = (bool)((((int32_t)L_95) < ((int32_t)L_96))? 1 : 0);
		bool L_97 = V_31;
		if (L_97)
		{
			goto IL_022d;
		}
	}
	{
		int32_t L_98 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_98, 1));
	}

IL_0260:
	{
		int32_t L_99 = V_3;
		int32_t L_100 = ___4_len;
		V_32 = (bool)((((int32_t)L_99) < ((int32_t)L_100))? 1 : 0);
		bool L_101 = V_32;
		if (L_101)
		{
			goto IL_0227;
		}
	}
	{
		goto IL_035a;
	}

IL_0270:
	{
		V_3 = 0;
		goto IL_02bb;
	}

IL_0274:
	{
		V_4 = 0;
		goto IL_02aa;
	}

IL_027a:
	{
		int32_t L_102 = V_6;
		int32_t L_103 = V_4;
		int32_t L_104 = V_3;
		bool L_105;
		L_105 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_103, L_104, NULL);
		if (!L_105)
		{
			G_B71_0 = L_102;
			goto IL_0297;
		}
		G_B70_0 = L_102;
	}
	{
		int32_t L_106 = V_4;
		int32_t L_107 = V_3;
		bool L_108;
		L_108 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), ((int32_t)il2cpp_codegen_add(L_106, 1)), L_107, NULL);
		if (L_108)
		{
			G_B72_0 = G_B70_0;
			goto IL_029a;
		}
		G_B71_0 = G_B70_0;
	}

IL_0297:
	{
		G_B73_0 = 0;
		G_B73_1 = G_B71_0;
		goto IL_029b;
	}

IL_029a:
	{
		G_B73_0 = 1;
		G_B73_1 = G_B72_0;
	}

IL_029b:
	{
		int32_t L_109 = V_3;
		V_6 = ((int32_t)(G_B73_1|((int32_t)(G_B73_0<<((int32_t)(L_109&((int32_t)31)))))));
		int32_t L_110 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_110, 2));
	}

IL_02aa:
	{
		int32_t L_111 = V_4;
		int32_t L_112 = ___4_len;
		V_33 = (bool)((((int32_t)L_111) < ((int32_t)L_112))? 1 : 0);
		bool L_113 = V_33;
		if (L_113)
		{
			goto IL_027a;
		}
	}
	{
		int32_t L_114 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_114, 1));
	}

IL_02bb:
	{
		int32_t L_115 = V_3;
		int32_t L_116 = ___4_len;
		V_34 = (bool)((((int32_t)L_115) < ((int32_t)L_116))? 1 : 0);
		bool L_117 = V_34;
		if (L_117)
		{
			goto IL_0274;
		}
	}
	{
		goto IL_035a;
	}

IL_02cb:
	{
		V_3 = 0;
		goto IL_02ee;
	}

IL_02cf:
	{
		int32_t L_118 = V_6;
		int32_t L_119 = V_3;
		int32_t L_120 = V_3;
		bool L_121;
		L_121 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_119, L_120, NULL);
		if (L_121)
		{
			G_B81_0 = L_118;
			goto IL_02e0;
		}
		G_B80_0 = L_118;
	}
	{
		G_B82_0 = 0;
		G_B82_1 = G_B80_0;
		goto IL_02e1;
	}

IL_02e0:
	{
		G_B82_0 = 1;
		G_B82_1 = G_B81_0;
	}

IL_02e1:
	{
		int32_t L_122 = V_3;
		V_6 = ((int32_t)(G_B82_1|((int32_t)(G_B82_0<<((int32_t)(L_122&((int32_t)31)))))));
		int32_t L_123 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_123, 1));
	}

IL_02ee:
	{
		int32_t L_124 = V_3;
		int32_t L_125 = ___4_len;
		V_35 = (bool)((((int32_t)L_124) < ((int32_t)L_125))? 1 : 0);
		bool L_126 = V_35;
		if (L_126)
		{
			goto IL_02cf;
		}
	}
	{
		goto IL_035a;
	}

IL_02fb:
	{
		int32_t L_127 = ___6_allOnes;
		V_6 = L_127;
		V_3 = 0;
		goto IL_034d;
	}

IL_0303:
	{
		int32_t L_128 = V_3;
		V_36 = L_128;
		V_4 = 0;
		goto IL_033a;
	}

IL_030c:
	{
		int32_t L_129 = V_4;
		int32_t L_130 = V_36;
		bool L_131;
		L_131 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_129, L_130, NULL);
		V_37 = (bool)((((int32_t)L_131) == ((int32_t)0))? 1 : 0);
		bool L_132 = V_37;
		if (!L_132)
		{
			goto IL_032d;
		}
	}
	{
		int32_t L_133 = V_6;
		int32_t L_134 = V_3;
		V_6 = ((int32_t)(L_133&((~((int32_t)(1<<((int32_t)(L_134&((int32_t)31)))))))));
	}

IL_032d:
	{
		int32_t L_135 = V_36;
		V_36 = ((int32_t)il2cpp_codegen_add(L_135, 1));
		int32_t L_136 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_136, 1));
	}

IL_033a:
	{
		int32_t L_137 = V_4;
		int32_t L_138 = ___4_len;
		int32_t L_139 = V_3;
		V_38 = (bool)((((int32_t)L_137) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_138, L_139))))? 1 : 0);
		bool L_140 = V_38;
		if (L_140)
		{
			goto IL_030c;
		}
	}
	{
		int32_t L_141 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_141, 1));
	}

IL_034d:
	{
		int32_t L_142 = V_3;
		int32_t L_143 = ___4_len;
		V_39 = (bool)((((int32_t)L_142) < ((int32_t)L_143))? 1 : 0);
		bool L_144 = V_39;
		if (L_144)
		{
			goto IL_0303;
		}
	}
	{
		goto IL_035a;
	}

IL_035a:
	{
		V_5 = 0;
		V_1 = (bool)0;
		V_3 = 0;
		goto IL_0401;
	}

IL_0366:
	{
		int32_t L_145 = ___5_imm8;
		V_40 = (bool)((!(((uint32_t)((int32_t)(L_145&((int32_t)16)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_146 = V_40;
		if (!L_146)
		{
			goto IL_03ee;
		}
	}
	{
		int32_t L_147 = ___5_imm8;
		V_41 = (bool)((!(((uint32_t)((int32_t)(L_147&((int32_t)32)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_148 = V_41;
		if (!L_148)
		{
			goto IL_03dc;
		}
	}
	{
		EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* L_149;
		L_149 = EqualityComparer_1_get_Default_m7D273CC532DC2164C9C86D28C639FDEA38173C88_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		int16_t* L_150 = ___2_b;
		int32_t L_151 = V_3;
		uint32_t L_152 = sizeof(int16_t);
		int16_t L_153 = (*(int16_t*)((int16_t*)il2cpp_codegen_add((intptr_t)L_150, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_151), (int32_t)L_152)))));
		il2cpp_codegen_initobj((&V_43), sizeof(int16_t));
		int16_t L_154 = V_43;
		NullCheck(L_149);
		bool L_155;
		L_155 = VirtualFuncInvoker2< bool, int16_t, int16_t >::Invoke(8, L_149, L_153, L_154);
		V_42 = L_155;
		bool L_156 = V_42;
		if (!L_156)
		{
			goto IL_03b3;
		}
	}
	{
		V_1 = (bool)1;
	}

IL_03b3:
	{
		bool L_157 = V_1;
		V_44 = L_157;
		bool L_158 = V_44;
		if (!L_158)
		{
			goto IL_03ca;
		}
	}
	{
		int32_t L_159 = V_5;
		int32_t L_160 = V_6;
		int32_t L_161 = V_3;
		V_5 = ((int32_t)(L_159|((int32_t)(L_160&((int32_t)(1<<((int32_t)(L_161&((int32_t)31)))))))));
		goto IL_03d9;
	}

IL_03ca:
	{
		int32_t L_162 = V_5;
		int32_t L_163 = V_6;
		int32_t L_164 = V_3;
		V_5 = ((int32_t)(L_162|((int32_t)(((~L_163))&((int32_t)(1<<((int32_t)(L_164&((int32_t)31)))))))));
	}

IL_03d9:
	{
		goto IL_03eb;
	}

IL_03dc:
	{
		int32_t L_165 = V_5;
		int32_t L_166 = V_6;
		int32_t L_167 = V_3;
		V_5 = ((int32_t)(L_165|((int32_t)(((~L_166))&((int32_t)(1<<((int32_t)(L_167&((int32_t)31)))))))));
	}

IL_03eb:
	{
		goto IL_03fc;
	}

IL_03ee:
	{
		int32_t L_168 = V_5;
		int32_t L_169 = V_6;
		int32_t L_170 = V_3;
		V_5 = ((int32_t)(L_168|((int32_t)(L_169&((int32_t)(1<<((int32_t)(L_170&((int32_t)31)))))))));
	}

IL_03fc:
	{
		int32_t L_171 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_171, 1));
	}

IL_0401:
	{
		int32_t L_172 = V_3;
		int32_t L_173 = ___4_len;
		V_45 = (bool)((((int32_t)L_172) < ((int32_t)L_173))? 1 : 0);
		bool L_174 = V_45;
		if (L_174)
		{
			goto IL_0366;
		}
	}
	{
		int32_t L_175 = V_5;
		V_46 = L_175;
		goto IL_0415;
	}

IL_0415:
	{
		int32_t L_176 = V_46;
		return L_176;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStrCmpIntRes2_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mA23FD3A0C3B4448E4721DA31DA7B4B93A636A3FD_gshared (int8_t* ___0_a, int32_t ___1_alen, int8_t* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	bool V_1 = false;
	StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int8_t V_7 = 0x0;
	bool V_8 = false;
	int8_t V_9 = 0x0;
	bool V_10 = false;
	bool V_11 = false;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	bool V_21 = false;
	bool V_22 = false;
	bool V_23 = false;
	bool V_24 = false;
	bool V_25 = false;
	bool V_26 = false;
	bool V_27 = false;
	bool V_28 = false;
	int32_t V_29 = 0;
	int32_t V_30 = 0;
	bool V_31 = false;
	bool V_32 = false;
	bool V_33 = false;
	bool V_34 = false;
	bool V_35 = false;
	int32_t V_36 = 0;
	bool V_37 = false;
	bool V_38 = false;
	bool V_39 = false;
	bool V_40 = false;
	bool V_41 = false;
	bool V_42 = false;
	int8_t V_43 = 0x0;
	bool V_44 = false;
	bool V_45 = false;
	int32_t V_46 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B26_0 = 0;
	int32_t G_B36_0 = 0;
	int32_t G_B46_0 = 0;
	int32_t G_B61_0 = 0;
	int32_t G_B60_0 = 0;
	int32_t G_B62_0 = 0;
	int32_t G_B62_1 = 0;
	int32_t G_B71_0 = 0;
	int32_t G_B70_0 = 0;
	int32_t G_B72_0 = 0;
	int32_t G_B73_0 = 0;
	int32_t G_B73_1 = 0;
	int32_t G_B81_0 = 0;
	int32_t G_B80_0 = 0;
	int32_t G_B82_0 = 0;
	int32_t G_B82_1 = 0;
	{
		V_0 = (bool)0;
		V_1 = (bool)0;
		il2cpp_codegen_initobj((&V_2), sizeof(StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6));
		V_3 = 0;
		goto IL_01ea;
	}

IL_0014:
	{
		int8_t* L_0 = ___0_a;
		int32_t L_1 = V_3;
		uint32_t L_2 = sizeof(int8_t);
		int8_t L_3 = (*(int8_t*)((int8_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), (int32_t)L_2)))));
		V_7 = L_3;
		int32_t L_4 = V_3;
		int32_t L_5 = ___1_alen;
		V_8 = (bool)((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_8;
		if (!L_6)
		{
			goto IL_0033;
		}
	}
	{
		V_0 = (bool)1;
	}

IL_0033:
	{
		V_1 = (bool)0;
		V_4 = 0;
		goto IL_01d6;
	}

IL_003d:
	{
		int8_t* L_7 = ___2_b;
		int32_t L_8 = V_4;
		uint32_t L_9 = sizeof(int8_t);
		int8_t L_10 = (*(int8_t*)((int8_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), (int32_t)L_9)))));
		V_9 = L_10;
		int32_t L_11 = V_4;
		int32_t L_12 = ___3_blen;
		V_11 = (bool)((((int32_t)L_11) == ((int32_t)L_12))? 1 : 0);
		bool L_13 = V_11;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		V_1 = (bool)1;
	}

IL_005e:
	{
		int32_t L_14 = ___5_imm8;
		V_13 = ((int32_t)(((int32_t)(L_14>>2))&3));
		int32_t L_15 = V_13;
		V_12 = L_15;
		int32_t L_16 = V_12;
		switch (L_16)
		{
			case 0:
			{
				goto IL_0082;
			}
			case 1:
			{
				goto IL_00c9;
			}
			case 2:
			{
				goto IL_013a;
			}
		}
	}
	{
		goto IL_017e;
	}

IL_0082:
	{
		EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* L_17;
		L_17 = EqualityComparer_1_get_Default_m7F71AAC0046A3CB8C4CEB06A5A52A1269AF7023D_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		int8_t L_18 = V_7;
		int8_t L_19 = V_9;
		NullCheck(L_17);
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, int8_t, int8_t >::Invoke(8, L_17, L_18, L_19);
		V_10 = L_20;
		bool L_21 = V_0;
		bool L_22 = V_1;
		V_14 = (bool)((int32_t)(((((int32_t)L_21) == ((int32_t)0))? 1 : 0)&(int32_t)L_22));
		bool L_23 = V_14;
		if (!L_23)
		{
			goto IL_00a3;
		}
	}
	{
		V_10 = (bool)0;
		goto IL_00c4;
	}

IL_00a3:
	{
		bool L_24 = V_0;
		if (!L_24)
		{
			goto IL_00ac;
		}
	}
	{
		bool L_25 = V_1;
		G_B13_0 = ((((int32_t)L_25) == ((int32_t)0))? 1 : 0);
		goto IL_00ad;
	}

IL_00ac:
	{
		G_B13_0 = 0;
	}

IL_00ad:
	{
		V_15 = (bool)G_B13_0;
		bool L_26 = V_15;
		if (!L_26)
		{
			goto IL_00b8;
		}
	}
	{
		V_10 = (bool)0;
		goto IL_00c4;
	}

IL_00b8:
	{
		bool L_27 = V_0;
		bool L_28 = V_1;
		V_16 = (bool)((int32_t)((int32_t)L_27&(int32_t)L_28));
		bool L_29 = V_16;
		if (!L_29)
		{
			goto IL_00c4;
		}
	}
	{
		V_10 = (bool)0;
	}

IL_00c4:
	{
		goto IL_01c2;
	}

IL_00c9:
	{
		int32_t L_30 = V_3;
		V_17 = (bool)((((int32_t)((int32_t)(L_30&1))) == ((int32_t)0))? 1 : 0);
		bool L_31 = V_17;
		if (!L_31)
		{
			goto IL_00ed;
		}
	}
	{
		Comparer_1_tFA27DAC2908F666A385A0E5699BB66735365343B* L_32;
		L_32 = Comparer_1_get_Default_m84816461184ACF98D5F66D45F43652587DA47B4F(il2cpp_rgctx_method(method->rgctx_data, 6));
		int8_t L_33 = V_9;
		int8_t L_34 = V_7;
		NullCheck(L_32);
		int32_t L_35;
		L_35 = VirtualFuncInvoker2< int32_t, int8_t, int8_t >::Invoke(6, L_32, L_33, L_34);
		V_10 = (bool)((((int32_t)((((int32_t)L_35) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0103;
	}

IL_00ed:
	{
		Comparer_1_tFA27DAC2908F666A385A0E5699BB66735365343B* L_36;
		L_36 = Comparer_1_get_Default_m84816461184ACF98D5F66D45F43652587DA47B4F(il2cpp_rgctx_method(method->rgctx_data, 6));
		int8_t L_37 = V_9;
		int8_t L_38 = V_7;
		NullCheck(L_36);
		int32_t L_39;
		L_39 = VirtualFuncInvoker2< int32_t, int8_t, int8_t >::Invoke(6, L_36, L_37, L_38);
		V_10 = (bool)((((int32_t)((((int32_t)L_39) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0103:
	{
		bool L_40 = V_0;
		bool L_41 = V_1;
		V_18 = (bool)((int32_t)(((((int32_t)L_40) == ((int32_t)0))? 1 : 0)&(int32_t)L_41));
		bool L_42 = V_18;
		if (!L_42)
		{
			goto IL_0114;
		}
	}
	{
		V_10 = (bool)0;
		goto IL_0135;
	}

IL_0114:
	{
		bool L_43 = V_0;
		if (!L_43)
		{
			goto IL_011d;
		}
	}
	{
		bool L_44 = V_1;
		G_B26_0 = ((((int32_t)L_44) == ((int32_t)0))? 1 : 0);
		goto IL_011e;
	}

IL_011d:
	{
		G_B26_0 = 0;
	}

IL_011e:
	{
		V_19 = (bool)G_B26_0;
		bool L_45 = V_19;
		if (!L_45)
		{
			goto IL_0129;
		}
	}
	{
		V_10 = (bool)0;
		goto IL_0135;
	}

IL_0129:
	{
		bool L_46 = V_0;
		bool L_47 = V_1;
		V_20 = (bool)((int32_t)((int32_t)L_46&(int32_t)L_47));
		bool L_48 = V_20;
		if (!L_48)
		{
			goto IL_0135;
		}
	}
	{
		V_10 = (bool)0;
	}

IL_0135:
	{
		goto IL_01c2;
	}

IL_013a:
	{
		EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* L_49;
		L_49 = EqualityComparer_1_get_Default_m7F71AAC0046A3CB8C4CEB06A5A52A1269AF7023D_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		int8_t L_50 = V_7;
		int8_t L_51 = V_9;
		NullCheck(L_49);
		bool L_52;
		L_52 = VirtualFuncInvoker2< bool, int8_t, int8_t >::Invoke(8, L_49, L_50, L_51);
		V_10 = L_52;
		bool L_53 = V_0;
		bool L_54 = V_1;
		V_21 = (bool)((int32_t)(((((int32_t)L_53) == ((int32_t)0))? 1 : 0)&(int32_t)L_54));
		bool L_55 = V_21;
		if (!L_55)
		{
			goto IL_015b;
		}
	}
	{
		V_10 = (bool)0;
		goto IL_017c;
	}

IL_015b:
	{
		bool L_56 = V_0;
		if (!L_56)
		{
			goto IL_0164;
		}
	}
	{
		bool L_57 = V_1;
		G_B36_0 = ((((int32_t)L_57) == ((int32_t)0))? 1 : 0);
		goto IL_0165;
	}

IL_0164:
	{
		G_B36_0 = 0;
	}

IL_0165:
	{
		V_22 = (bool)G_B36_0;
		bool L_58 = V_22;
		if (!L_58)
		{
			goto IL_0170;
		}
	}
	{
		V_10 = (bool)0;
		goto IL_017c;
	}

IL_0170:
	{
		bool L_59 = V_0;
		bool L_60 = V_1;
		V_23 = (bool)((int32_t)((int32_t)L_59&(int32_t)L_60));
		bool L_61 = V_23;
		if (!L_61)
		{
			goto IL_017c;
		}
	}
	{
		V_10 = (bool)1;
	}

IL_017c:
	{
		goto IL_01c2;
	}

IL_017e:
	{
		EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* L_62;
		L_62 = EqualityComparer_1_get_Default_m7F71AAC0046A3CB8C4CEB06A5A52A1269AF7023D_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		int8_t L_63 = V_7;
		int8_t L_64 = V_9;
		NullCheck(L_62);
		bool L_65;
		L_65 = VirtualFuncInvoker2< bool, int8_t, int8_t >::Invoke(8, L_62, L_63, L_64);
		V_10 = L_65;
		bool L_66 = V_0;
		bool L_67 = V_1;
		V_24 = (bool)((int32_t)(((((int32_t)L_66) == ((int32_t)0))? 1 : 0)&(int32_t)L_67));
		bool L_68 = V_24;
		if (!L_68)
		{
			goto IL_019f;
		}
	}
	{
		V_10 = (bool)0;
		goto IL_01c0;
	}

IL_019f:
	{
		bool L_69 = V_0;
		if (!L_69)
		{
			goto IL_01a8;
		}
	}
	{
		bool L_70 = V_1;
		G_B46_0 = ((((int32_t)L_70) == ((int32_t)0))? 1 : 0);
		goto IL_01a9;
	}

IL_01a8:
	{
		G_B46_0 = 0;
	}

IL_01a9:
	{
		V_25 = (bool)G_B46_0;
		bool L_71 = V_25;
		if (!L_71)
		{
			goto IL_01b4;
		}
	}
	{
		V_10 = (bool)1;
		goto IL_01c0;
	}

IL_01b4:
	{
		bool L_72 = V_0;
		bool L_73 = V_1;
		V_26 = (bool)((int32_t)((int32_t)L_72&(int32_t)L_73));
		bool L_74 = V_26;
		if (!L_74)
		{
			goto IL_01c0;
		}
	}
	{
		V_10 = (bool)1;
	}

IL_01c0:
	{
		goto IL_01c2;
	}

IL_01c2:
	{
		int32_t L_75 = V_3;
		int32_t L_76 = V_4;
		bool L_77 = V_10;
		StrBoolArray_SetBit_m212C6D1A8A4C422AF979D6B3BC7CD5B9BD0F3F01((&V_2), L_75, L_76, L_77, NULL);
		int32_t L_78 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_78, 1));
	}

IL_01d6:
	{
		int32_t L_79 = V_4;
		int32_t L_80 = ___4_len;
		V_27 = (bool)((((int32_t)L_79) < ((int32_t)L_80))? 1 : 0);
		bool L_81 = V_27;
		if (L_81)
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_82 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_82, 1));
	}

IL_01ea:
	{
		int32_t L_83 = V_3;
		int32_t L_84 = ___4_len;
		V_28 = (bool)((((int32_t)L_83) < ((int32_t)L_84))? 1 : 0);
		bool L_85 = V_28;
		if (L_85)
		{
			goto IL_0014;
		}
	}
	{
		V_6 = 0;
		int32_t L_86 = ___5_imm8;
		V_30 = ((int32_t)(((int32_t)(L_86>>2))&3));
		int32_t L_87 = V_30;
		V_29 = L_87;
		int32_t L_88 = V_29;
		switch (L_88)
		{
			case 0:
			{
				goto IL_0223;
			}
			case 1:
			{
				goto IL_0270;
			}
			case 2:
			{
				goto IL_02cb;
			}
			case 3:
			{
				goto IL_02fb;
			}
		}
	}
	{
		goto IL_035a;
	}

IL_0223:
	{
		V_3 = 0;
		goto IL_0260;
	}

IL_0227:
	{
		V_4 = 0;
		goto IL_024f;
	}

IL_022d:
	{
		int32_t L_89 = V_6;
		int32_t L_90 = V_4;
		int32_t L_91 = V_3;
		bool L_92;
		L_92 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_90, L_91, NULL);
		if (L_92)
		{
			G_B61_0 = L_89;
			goto IL_023f;
		}
		G_B60_0 = L_89;
	}
	{
		G_B62_0 = 0;
		G_B62_1 = G_B60_0;
		goto IL_0240;
	}

IL_023f:
	{
		G_B62_0 = 1;
		G_B62_1 = G_B61_0;
	}

IL_0240:
	{
		int32_t L_93 = V_3;
		V_6 = ((int32_t)(G_B62_1|((int32_t)(G_B62_0<<((int32_t)(L_93&((int32_t)31)))))));
		int32_t L_94 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_94, 1));
	}

IL_024f:
	{
		int32_t L_95 = V_4;
		int32_t L_96 = ___4_len;
		V_31 = (bool)((((int32_t)L_95) < ((int32_t)L_96))? 1 : 0);
		bool L_97 = V_31;
		if (L_97)
		{
			goto IL_022d;
		}
	}
	{
		int32_t L_98 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_98, 1));
	}

IL_0260:
	{
		int32_t L_99 = V_3;
		int32_t L_100 = ___4_len;
		V_32 = (bool)((((int32_t)L_99) < ((int32_t)L_100))? 1 : 0);
		bool L_101 = V_32;
		if (L_101)
		{
			goto IL_0227;
		}
	}
	{
		goto IL_035a;
	}

IL_0270:
	{
		V_3 = 0;
		goto IL_02bb;
	}

IL_0274:
	{
		V_4 = 0;
		goto IL_02aa;
	}

IL_027a:
	{
		int32_t L_102 = V_6;
		int32_t L_103 = V_4;
		int32_t L_104 = V_3;
		bool L_105;
		L_105 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_103, L_104, NULL);
		if (!L_105)
		{
			G_B71_0 = L_102;
			goto IL_0297;
		}
		G_B70_0 = L_102;
	}
	{
		int32_t L_106 = V_4;
		int32_t L_107 = V_3;
		bool L_108;
		L_108 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), ((int32_t)il2cpp_codegen_add(L_106, 1)), L_107, NULL);
		if (L_108)
		{
			G_B72_0 = G_B70_0;
			goto IL_029a;
		}
		G_B71_0 = G_B70_0;
	}

IL_0297:
	{
		G_B73_0 = 0;
		G_B73_1 = G_B71_0;
		goto IL_029b;
	}

IL_029a:
	{
		G_B73_0 = 1;
		G_B73_1 = G_B72_0;
	}

IL_029b:
	{
		int32_t L_109 = V_3;
		V_6 = ((int32_t)(G_B73_1|((int32_t)(G_B73_0<<((int32_t)(L_109&((int32_t)31)))))));
		int32_t L_110 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_110, 2));
	}

IL_02aa:
	{
		int32_t L_111 = V_4;
		int32_t L_112 = ___4_len;
		V_33 = (bool)((((int32_t)L_111) < ((int32_t)L_112))? 1 : 0);
		bool L_113 = V_33;
		if (L_113)
		{
			goto IL_027a;
		}
	}
	{
		int32_t L_114 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_114, 1));
	}

IL_02bb:
	{
		int32_t L_115 = V_3;
		int32_t L_116 = ___4_len;
		V_34 = (bool)((((int32_t)L_115) < ((int32_t)L_116))? 1 : 0);
		bool L_117 = V_34;
		if (L_117)
		{
			goto IL_0274;
		}
	}
	{
		goto IL_035a;
	}

IL_02cb:
	{
		V_3 = 0;
		goto IL_02ee;
	}

IL_02cf:
	{
		int32_t L_118 = V_6;
		int32_t L_119 = V_3;
		int32_t L_120 = V_3;
		bool L_121;
		L_121 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_119, L_120, NULL);
		if (L_121)
		{
			G_B81_0 = L_118;
			goto IL_02e0;
		}
		G_B80_0 = L_118;
	}
	{
		G_B82_0 = 0;
		G_B82_1 = G_B80_0;
		goto IL_02e1;
	}

IL_02e0:
	{
		G_B82_0 = 1;
		G_B82_1 = G_B81_0;
	}

IL_02e1:
	{
		int32_t L_122 = V_3;
		V_6 = ((int32_t)(G_B82_1|((int32_t)(G_B82_0<<((int32_t)(L_122&((int32_t)31)))))));
		int32_t L_123 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_123, 1));
	}

IL_02ee:
	{
		int32_t L_124 = V_3;
		int32_t L_125 = ___4_len;
		V_35 = (bool)((((int32_t)L_124) < ((int32_t)L_125))? 1 : 0);
		bool L_126 = V_35;
		if (L_126)
		{
			goto IL_02cf;
		}
	}
	{
		goto IL_035a;
	}

IL_02fb:
	{
		int32_t L_127 = ___6_allOnes;
		V_6 = L_127;
		V_3 = 0;
		goto IL_034d;
	}

IL_0303:
	{
		int32_t L_128 = V_3;
		V_36 = L_128;
		V_4 = 0;
		goto IL_033a;
	}

IL_030c:
	{
		int32_t L_129 = V_4;
		int32_t L_130 = V_36;
		bool L_131;
		L_131 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_129, L_130, NULL);
		V_37 = (bool)((((int32_t)L_131) == ((int32_t)0))? 1 : 0);
		bool L_132 = V_37;
		if (!L_132)
		{
			goto IL_032d;
		}
	}
	{
		int32_t L_133 = V_6;
		int32_t L_134 = V_3;
		V_6 = ((int32_t)(L_133&((~((int32_t)(1<<((int32_t)(L_134&((int32_t)31)))))))));
	}

IL_032d:
	{
		int32_t L_135 = V_36;
		V_36 = ((int32_t)il2cpp_codegen_add(L_135, 1));
		int32_t L_136 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_136, 1));
	}

IL_033a:
	{
		int32_t L_137 = V_4;
		int32_t L_138 = ___4_len;
		int32_t L_139 = V_3;
		V_38 = (bool)((((int32_t)L_137) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_138, L_139))))? 1 : 0);
		bool L_140 = V_38;
		if (L_140)
		{
			goto IL_030c;
		}
	}
	{
		int32_t L_141 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_141, 1));
	}

IL_034d:
	{
		int32_t L_142 = V_3;
		int32_t L_143 = ___4_len;
		V_39 = (bool)((((int32_t)L_142) < ((int32_t)L_143))? 1 : 0);
		bool L_144 = V_39;
		if (L_144)
		{
			goto IL_0303;
		}
	}
	{
		goto IL_035a;
	}

IL_035a:
	{
		V_5 = 0;
		V_1 = (bool)0;
		V_3 = 0;
		goto IL_0401;
	}

IL_0366:
	{
		int32_t L_145 = ___5_imm8;
		V_40 = (bool)((!(((uint32_t)((int32_t)(L_145&((int32_t)16)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_146 = V_40;
		if (!L_146)
		{
			goto IL_03ee;
		}
	}
	{
		int32_t L_147 = ___5_imm8;
		V_41 = (bool)((!(((uint32_t)((int32_t)(L_147&((int32_t)32)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_148 = V_41;
		if (!L_148)
		{
			goto IL_03dc;
		}
	}
	{
		EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* L_149;
		L_149 = EqualityComparer_1_get_Default_m7F71AAC0046A3CB8C4CEB06A5A52A1269AF7023D_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		int8_t* L_150 = ___2_b;
		int32_t L_151 = V_3;
		uint32_t L_152 = sizeof(int8_t);
		int8_t L_153 = (*(int8_t*)((int8_t*)il2cpp_codegen_add((intptr_t)L_150, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_151), (int32_t)L_152)))));
		il2cpp_codegen_initobj((&V_43), sizeof(int8_t));
		int8_t L_154 = V_43;
		NullCheck(L_149);
		bool L_155;
		L_155 = VirtualFuncInvoker2< bool, int8_t, int8_t >::Invoke(8, L_149, L_153, L_154);
		V_42 = L_155;
		bool L_156 = V_42;
		if (!L_156)
		{
			goto IL_03b3;
		}
	}
	{
		V_1 = (bool)1;
	}

IL_03b3:
	{
		bool L_157 = V_1;
		V_44 = L_157;
		bool L_158 = V_44;
		if (!L_158)
		{
			goto IL_03ca;
		}
	}
	{
		int32_t L_159 = V_5;
		int32_t L_160 = V_6;
		int32_t L_161 = V_3;
		V_5 = ((int32_t)(L_159|((int32_t)(L_160&((int32_t)(1<<((int32_t)(L_161&((int32_t)31)))))))));
		goto IL_03d9;
	}

IL_03ca:
	{
		int32_t L_162 = V_5;
		int32_t L_163 = V_6;
		int32_t L_164 = V_3;
		V_5 = ((int32_t)(L_162|((int32_t)(((~L_163))&((int32_t)(1<<((int32_t)(L_164&((int32_t)31)))))))));
	}

IL_03d9:
	{
		goto IL_03eb;
	}

IL_03dc:
	{
		int32_t L_165 = V_5;
		int32_t L_166 = V_6;
		int32_t L_167 = V_3;
		V_5 = ((int32_t)(L_165|((int32_t)(((~L_166))&((int32_t)(1<<((int32_t)(L_167&((int32_t)31)))))))));
	}

IL_03eb:
	{
		goto IL_03fc;
	}

IL_03ee:
	{
		int32_t L_168 = V_5;
		int32_t L_169 = V_6;
		int32_t L_170 = V_3;
		V_5 = ((int32_t)(L_168|((int32_t)(L_169&((int32_t)(1<<((int32_t)(L_170&((int32_t)31)))))))));
	}

IL_03fc:
	{
		int32_t L_171 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_171, 1));
	}

IL_0401:
	{
		int32_t L_172 = V_3;
		int32_t L_173 = ___4_len;
		V_45 = (bool)((((int32_t)L_172) < ((int32_t)L_173))? 1 : 0);
		bool L_174 = V_45;
		if (L_174)
		{
			goto IL_0366;
		}
	}
	{
		int32_t L_175 = V_5;
		V_46 = L_175;
		goto IL_0415;
	}

IL_0415:
	{
		int32_t L_176 = V_46;
		return L_176;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStrCmpIntRes2_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m331D979D640CF9DF04C505875F9FB702E217B2AB_gshared (uint16_t* ___0_a, int32_t ___1_alen, uint16_t* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	bool V_1 = false;
	StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	uint16_t V_7 = 0;
	bool V_8 = false;
	uint16_t V_9 = 0;
	bool V_10 = false;
	bool V_11 = false;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	bool V_21 = false;
	bool V_22 = false;
	bool V_23 = false;
	bool V_24 = false;
	bool V_25 = false;
	bool V_26 = false;
	bool V_27 = false;
	bool V_28 = false;
	int32_t V_29 = 0;
	int32_t V_30 = 0;
	bool V_31 = false;
	bool V_32 = false;
	bool V_33 = false;
	bool V_34 = false;
	bool V_35 = false;
	int32_t V_36 = 0;
	bool V_37 = false;
	bool V_38 = false;
	bool V_39 = false;
	bool V_40 = false;
	bool V_41 = false;
	bool V_42 = false;
	uint16_t V_43 = 0;
	bool V_44 = false;
	bool V_45 = false;
	int32_t V_46 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B26_0 = 0;
	int32_t G_B36_0 = 0;
	int32_t G_B46_0 = 0;
	int32_t G_B61_0 = 0;
	int32_t G_B60_0 = 0;
	int32_t G_B62_0 = 0;
	int32_t G_B62_1 = 0;
	int32_t G_B71_0 = 0;
	int32_t G_B70_0 = 0;
	int32_t G_B72_0 = 0;
	int32_t G_B73_0 = 0;
	int32_t G_B73_1 = 0;
	int32_t G_B81_0 = 0;
	int32_t G_B80_0 = 0;
	int32_t G_B82_0 = 0;
	int32_t G_B82_1 = 0;
	{
		V_0 = (bool)0;
		V_1 = (bool)0;
		il2cpp_codegen_initobj((&V_2), sizeof(StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6));
		V_3 = 0;
		goto IL_01ea;
	}

IL_0014:
	{
		uint16_t* L_0 = ___0_a;
		int32_t L_1 = V_3;
		uint32_t L_2 = sizeof(uint16_t);
		uint16_t L_3 = (*(uint16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), (int32_t)L_2)))));
		V_7 = L_3;
		int32_t L_4 = V_3;
		int32_t L_5 = ___1_alen;
		V_8 = (bool)((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_8;
		if (!L_6)
		{
			goto IL_0033;
		}
	}
	{
		V_0 = (bool)1;
	}

IL_0033:
	{
		V_1 = (bool)0;
		V_4 = 0;
		goto IL_01d6;
	}

IL_003d:
	{
		uint16_t* L_7 = ___2_b;
		int32_t L_8 = V_4;
		uint32_t L_9 = sizeof(uint16_t);
		uint16_t L_10 = (*(uint16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), (int32_t)L_9)))));
		V_9 = L_10;
		int32_t L_11 = V_4;
		int32_t L_12 = ___3_blen;
		V_11 = (bool)((((int32_t)L_11) == ((int32_t)L_12))? 1 : 0);
		bool L_13 = V_11;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		V_1 = (bool)1;
	}

IL_005e:
	{
		int32_t L_14 = ___5_imm8;
		V_13 = ((int32_t)(((int32_t)(L_14>>2))&3));
		int32_t L_15 = V_13;
		V_12 = L_15;
		int32_t L_16 = V_12;
		switch (L_16)
		{
			case 0:
			{
				goto IL_0082;
			}
			case 1:
			{
				goto IL_00c9;
			}
			case 2:
			{
				goto IL_013a;
			}
		}
	}
	{
		goto IL_017e;
	}

IL_0082:
	{
		EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* L_17;
		L_17 = EqualityComparer_1_get_Default_m80EE5C179E01BB38904781592AC72F8137541D7E_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		uint16_t L_18 = V_7;
		uint16_t L_19 = V_9;
		NullCheck(L_17);
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, uint16_t, uint16_t >::Invoke(8, L_17, L_18, L_19);
		V_10 = L_20;
		bool L_21 = V_0;
		bool L_22 = V_1;
		V_14 = (bool)((int32_t)(((((int32_t)L_21) == ((int32_t)0))? 1 : 0)&(int32_t)L_22));
		bool L_23 = V_14;
		if (!L_23)
		{
			goto IL_00a3;
		}
	}
	{
		V_10 = (bool)0;
		goto IL_00c4;
	}

IL_00a3:
	{
		bool L_24 = V_0;
		if (!L_24)
		{
			goto IL_00ac;
		}
	}
	{
		bool L_25 = V_1;
		G_B13_0 = ((((int32_t)L_25) == ((int32_t)0))? 1 : 0);
		goto IL_00ad;
	}

IL_00ac:
	{
		G_B13_0 = 0;
	}

IL_00ad:
	{
		V_15 = (bool)G_B13_0;
		bool L_26 = V_15;
		if (!L_26)
		{
			goto IL_00b8;
		}
	}
	{
		V_10 = (bool)0;
		goto IL_00c4;
	}

IL_00b8:
	{
		bool L_27 = V_0;
		bool L_28 = V_1;
		V_16 = (bool)((int32_t)((int32_t)L_27&(int32_t)L_28));
		bool L_29 = V_16;
		if (!L_29)
		{
			goto IL_00c4;
		}
	}
	{
		V_10 = (bool)0;
	}

IL_00c4:
	{
		goto IL_01c2;
	}

IL_00c9:
	{
		int32_t L_30 = V_3;
		V_17 = (bool)((((int32_t)((int32_t)(L_30&1))) == ((int32_t)0))? 1 : 0);
		bool L_31 = V_17;
		if (!L_31)
		{
			goto IL_00ed;
		}
	}
	{
		Comparer_1_t58CF625431A0184A14FF0A33D14229F8F6EA3C98* L_32;
		L_32 = Comparer_1_get_Default_m5B4E9A09E85C87692450A9D2BC5C99C3E5DC1E36(il2cpp_rgctx_method(method->rgctx_data, 6));
		uint16_t L_33 = V_9;
		uint16_t L_34 = V_7;
		NullCheck(L_32);
		int32_t L_35;
		L_35 = VirtualFuncInvoker2< int32_t, uint16_t, uint16_t >::Invoke(6, L_32, L_33, L_34);
		V_10 = (bool)((((int32_t)((((int32_t)L_35) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0103;
	}

IL_00ed:
	{
		Comparer_1_t58CF625431A0184A14FF0A33D14229F8F6EA3C98* L_36;
		L_36 = Comparer_1_get_Default_m5B4E9A09E85C87692450A9D2BC5C99C3E5DC1E36(il2cpp_rgctx_method(method->rgctx_data, 6));
		uint16_t L_37 = V_9;
		uint16_t L_38 = V_7;
		NullCheck(L_36);
		int32_t L_39;
		L_39 = VirtualFuncInvoker2< int32_t, uint16_t, uint16_t >::Invoke(6, L_36, L_37, L_38);
		V_10 = (bool)((((int32_t)((((int32_t)L_39) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0103:
	{
		bool L_40 = V_0;
		bool L_41 = V_1;
		V_18 = (bool)((int32_t)(((((int32_t)L_40) == ((int32_t)0))? 1 : 0)&(int32_t)L_41));
		bool L_42 = V_18;
		if (!L_42)
		{
			goto IL_0114;
		}
	}
	{
		V_10 = (bool)0;
		goto IL_0135;
	}

IL_0114:
	{
		bool L_43 = V_0;
		if (!L_43)
		{
			goto IL_011d;
		}
	}
	{
		bool L_44 = V_1;
		G_B26_0 = ((((int32_t)L_44) == ((int32_t)0))? 1 : 0);
		goto IL_011e;
	}

IL_011d:
	{
		G_B26_0 = 0;
	}

IL_011e:
	{
		V_19 = (bool)G_B26_0;
		bool L_45 = V_19;
		if (!L_45)
		{
			goto IL_0129;
		}
	}
	{
		V_10 = (bool)0;
		goto IL_0135;
	}

IL_0129:
	{
		bool L_46 = V_0;
		bool L_47 = V_1;
		V_20 = (bool)((int32_t)((int32_t)L_46&(int32_t)L_47));
		bool L_48 = V_20;
		if (!L_48)
		{
			goto IL_0135;
		}
	}
	{
		V_10 = (bool)0;
	}

IL_0135:
	{
		goto IL_01c2;
	}

IL_013a:
	{
		EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* L_49;
		L_49 = EqualityComparer_1_get_Default_m80EE5C179E01BB38904781592AC72F8137541D7E_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		uint16_t L_50 = V_7;
		uint16_t L_51 = V_9;
		NullCheck(L_49);
		bool L_52;
		L_52 = VirtualFuncInvoker2< bool, uint16_t, uint16_t >::Invoke(8, L_49, L_50, L_51);
		V_10 = L_52;
		bool L_53 = V_0;
		bool L_54 = V_1;
		V_21 = (bool)((int32_t)(((((int32_t)L_53) == ((int32_t)0))? 1 : 0)&(int32_t)L_54));
		bool L_55 = V_21;
		if (!L_55)
		{
			goto IL_015b;
		}
	}
	{
		V_10 = (bool)0;
		goto IL_017c;
	}

IL_015b:
	{
		bool L_56 = V_0;
		if (!L_56)
		{
			goto IL_0164;
		}
	}
	{
		bool L_57 = V_1;
		G_B36_0 = ((((int32_t)L_57) == ((int32_t)0))? 1 : 0);
		goto IL_0165;
	}

IL_0164:
	{
		G_B36_0 = 0;
	}

IL_0165:
	{
		V_22 = (bool)G_B36_0;
		bool L_58 = V_22;
		if (!L_58)
		{
			goto IL_0170;
		}
	}
	{
		V_10 = (bool)0;
		goto IL_017c;
	}

IL_0170:
	{
		bool L_59 = V_0;
		bool L_60 = V_1;
		V_23 = (bool)((int32_t)((int32_t)L_59&(int32_t)L_60));
		bool L_61 = V_23;
		if (!L_61)
		{
			goto IL_017c;
		}
	}
	{
		V_10 = (bool)1;
	}

IL_017c:
	{
		goto IL_01c2;
	}

IL_017e:
	{
		EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* L_62;
		L_62 = EqualityComparer_1_get_Default_m80EE5C179E01BB38904781592AC72F8137541D7E_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		uint16_t L_63 = V_7;
		uint16_t L_64 = V_9;
		NullCheck(L_62);
		bool L_65;
		L_65 = VirtualFuncInvoker2< bool, uint16_t, uint16_t >::Invoke(8, L_62, L_63, L_64);
		V_10 = L_65;
		bool L_66 = V_0;
		bool L_67 = V_1;
		V_24 = (bool)((int32_t)(((((int32_t)L_66) == ((int32_t)0))? 1 : 0)&(int32_t)L_67));
		bool L_68 = V_24;
		if (!L_68)
		{
			goto IL_019f;
		}
	}
	{
		V_10 = (bool)0;
		goto IL_01c0;
	}

IL_019f:
	{
		bool L_69 = V_0;
		if (!L_69)
		{
			goto IL_01a8;
		}
	}
	{
		bool L_70 = V_1;
		G_B46_0 = ((((int32_t)L_70) == ((int32_t)0))? 1 : 0);
		goto IL_01a9;
	}

IL_01a8:
	{
		G_B46_0 = 0;
	}

IL_01a9:
	{
		V_25 = (bool)G_B46_0;
		bool L_71 = V_25;
		if (!L_71)
		{
			goto IL_01b4;
		}
	}
	{
		V_10 = (bool)1;
		goto IL_01c0;
	}

IL_01b4:
	{
		bool L_72 = V_0;
		bool L_73 = V_1;
		V_26 = (bool)((int32_t)((int32_t)L_72&(int32_t)L_73));
		bool L_74 = V_26;
		if (!L_74)
		{
			goto IL_01c0;
		}
	}
	{
		V_10 = (bool)1;
	}

IL_01c0:
	{
		goto IL_01c2;
	}

IL_01c2:
	{
		int32_t L_75 = V_3;
		int32_t L_76 = V_4;
		bool L_77 = V_10;
		StrBoolArray_SetBit_m212C6D1A8A4C422AF979D6B3BC7CD5B9BD0F3F01((&V_2), L_75, L_76, L_77, NULL);
		int32_t L_78 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_78, 1));
	}

IL_01d6:
	{
		int32_t L_79 = V_4;
		int32_t L_80 = ___4_len;
		V_27 = (bool)((((int32_t)L_79) < ((int32_t)L_80))? 1 : 0);
		bool L_81 = V_27;
		if (L_81)
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_82 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_82, 1));
	}

IL_01ea:
	{
		int32_t L_83 = V_3;
		int32_t L_84 = ___4_len;
		V_28 = (bool)((((int32_t)L_83) < ((int32_t)L_84))? 1 : 0);
		bool L_85 = V_28;
		if (L_85)
		{
			goto IL_0014;
		}
	}
	{
		V_6 = 0;
		int32_t L_86 = ___5_imm8;
		V_30 = ((int32_t)(((int32_t)(L_86>>2))&3));
		int32_t L_87 = V_30;
		V_29 = L_87;
		int32_t L_88 = V_29;
		switch (L_88)
		{
			case 0:
			{
				goto IL_0223;
			}
			case 1:
			{
				goto IL_0270;
			}
			case 2:
			{
				goto IL_02cb;
			}
			case 3:
			{
				goto IL_02fb;
			}
		}
	}
	{
		goto IL_035a;
	}

IL_0223:
	{
		V_3 = 0;
		goto IL_0260;
	}

IL_0227:
	{
		V_4 = 0;
		goto IL_024f;
	}

IL_022d:
	{
		int32_t L_89 = V_6;
		int32_t L_90 = V_4;
		int32_t L_91 = V_3;
		bool L_92;
		L_92 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_90, L_91, NULL);
		if (L_92)
		{
			G_B61_0 = L_89;
			goto IL_023f;
		}
		G_B60_0 = L_89;
	}
	{
		G_B62_0 = 0;
		G_B62_1 = G_B60_0;
		goto IL_0240;
	}

IL_023f:
	{
		G_B62_0 = 1;
		G_B62_1 = G_B61_0;
	}

IL_0240:
	{
		int32_t L_93 = V_3;
		V_6 = ((int32_t)(G_B62_1|((int32_t)(G_B62_0<<((int32_t)(L_93&((int32_t)31)))))));
		int32_t L_94 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_94, 1));
	}

IL_024f:
	{
		int32_t L_95 = V_4;
		int32_t L_96 = ___4_len;
		V_31 = (bool)((((int32_t)L_95) < ((int32_t)L_96))? 1 : 0);
		bool L_97 = V_31;
		if (L_97)
		{
			goto IL_022d;
		}
	}
	{
		int32_t L_98 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_98, 1));
	}

IL_0260:
	{
		int32_t L_99 = V_3;
		int32_t L_100 = ___4_len;
		V_32 = (bool)((((int32_t)L_99) < ((int32_t)L_100))? 1 : 0);
		bool L_101 = V_32;
		if (L_101)
		{
			goto IL_0227;
		}
	}
	{
		goto IL_035a;
	}

IL_0270:
	{
		V_3 = 0;
		goto IL_02bb;
	}

IL_0274:
	{
		V_4 = 0;
		goto IL_02aa;
	}

IL_027a:
	{
		int32_t L_102 = V_6;
		int32_t L_103 = V_4;
		int32_t L_104 = V_3;
		bool L_105;
		L_105 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_103, L_104, NULL);
		if (!L_105)
		{
			G_B71_0 = L_102;
			goto IL_0297;
		}
		G_B70_0 = L_102;
	}
	{
		int32_t L_106 = V_4;
		int32_t L_107 = V_3;
		bool L_108;
		L_108 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), ((int32_t)il2cpp_codegen_add(L_106, 1)), L_107, NULL);
		if (L_108)
		{
			G_B72_0 = G_B70_0;
			goto IL_029a;
		}
		G_B71_0 = G_B70_0;
	}

IL_0297:
	{
		G_B73_0 = 0;
		G_B73_1 = G_B71_0;
		goto IL_029b;
	}

IL_029a:
	{
		G_B73_0 = 1;
		G_B73_1 = G_B72_0;
	}

IL_029b:
	{
		int32_t L_109 = V_3;
		V_6 = ((int32_t)(G_B73_1|((int32_t)(G_B73_0<<((int32_t)(L_109&((int32_t)31)))))));
		int32_t L_110 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_110, 2));
	}

IL_02aa:
	{
		int32_t L_111 = V_4;
		int32_t L_112 = ___4_len;
		V_33 = (bool)((((int32_t)L_111) < ((int32_t)L_112))? 1 : 0);
		bool L_113 = V_33;
		if (L_113)
		{
			goto IL_027a;
		}
	}
	{
		int32_t L_114 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_114, 1));
	}

IL_02bb:
	{
		int32_t L_115 = V_3;
		int32_t L_116 = ___4_len;
		V_34 = (bool)((((int32_t)L_115) < ((int32_t)L_116))? 1 : 0);
		bool L_117 = V_34;
		if (L_117)
		{
			goto IL_0274;
		}
	}
	{
		goto IL_035a;
	}

IL_02cb:
	{
		V_3 = 0;
		goto IL_02ee;
	}

IL_02cf:
	{
		int32_t L_118 = V_6;
		int32_t L_119 = V_3;
		int32_t L_120 = V_3;
		bool L_121;
		L_121 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_119, L_120, NULL);
		if (L_121)
		{
			G_B81_0 = L_118;
			goto IL_02e0;
		}
		G_B80_0 = L_118;
	}
	{
		G_B82_0 = 0;
		G_B82_1 = G_B80_0;
		goto IL_02e1;
	}

IL_02e0:
	{
		G_B82_0 = 1;
		G_B82_1 = G_B81_0;
	}

IL_02e1:
	{
		int32_t L_122 = V_3;
		V_6 = ((int32_t)(G_B82_1|((int32_t)(G_B82_0<<((int32_t)(L_122&((int32_t)31)))))));
		int32_t L_123 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_123, 1));
	}

IL_02ee:
	{
		int32_t L_124 = V_3;
		int32_t L_125 = ___4_len;
		V_35 = (bool)((((int32_t)L_124) < ((int32_t)L_125))? 1 : 0);
		bool L_126 = V_35;
		if (L_126)
		{
			goto IL_02cf;
		}
	}
	{
		goto IL_035a;
	}

IL_02fb:
	{
		int32_t L_127 = ___6_allOnes;
		V_6 = L_127;
		V_3 = 0;
		goto IL_034d;
	}

IL_0303:
	{
		int32_t L_128 = V_3;
		V_36 = L_128;
		V_4 = 0;
		goto IL_033a;
	}

IL_030c:
	{
		int32_t L_129 = V_4;
		int32_t L_130 = V_36;
		bool L_131;
		L_131 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_129, L_130, NULL);
		V_37 = (bool)((((int32_t)L_131) == ((int32_t)0))? 1 : 0);
		bool L_132 = V_37;
		if (!L_132)
		{
			goto IL_032d;
		}
	}
	{
		int32_t L_133 = V_6;
		int32_t L_134 = V_3;
		V_6 = ((int32_t)(L_133&((~((int32_t)(1<<((int32_t)(L_134&((int32_t)31)))))))));
	}

IL_032d:
	{
		int32_t L_135 = V_36;
		V_36 = ((int32_t)il2cpp_codegen_add(L_135, 1));
		int32_t L_136 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_136, 1));
	}

IL_033a:
	{
		int32_t L_137 = V_4;
		int32_t L_138 = ___4_len;
		int32_t L_139 = V_3;
		V_38 = (bool)((((int32_t)L_137) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_138, L_139))))? 1 : 0);
		bool L_140 = V_38;
		if (L_140)
		{
			goto IL_030c;
		}
	}
	{
		int32_t L_141 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_141, 1));
	}

IL_034d:
	{
		int32_t L_142 = V_3;
		int32_t L_143 = ___4_len;
		V_39 = (bool)((((int32_t)L_142) < ((int32_t)L_143))? 1 : 0);
		bool L_144 = V_39;
		if (L_144)
		{
			goto IL_0303;
		}
	}
	{
		goto IL_035a;
	}

IL_035a:
	{
		V_5 = 0;
		V_1 = (bool)0;
		V_3 = 0;
		goto IL_0401;
	}

IL_0366:
	{
		int32_t L_145 = ___5_imm8;
		V_40 = (bool)((!(((uint32_t)((int32_t)(L_145&((int32_t)16)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_146 = V_40;
		if (!L_146)
		{
			goto IL_03ee;
		}
	}
	{
		int32_t L_147 = ___5_imm8;
		V_41 = (bool)((!(((uint32_t)((int32_t)(L_147&((int32_t)32)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_148 = V_41;
		if (!L_148)
		{
			goto IL_03dc;
		}
	}
	{
		EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* L_149;
		L_149 = EqualityComparer_1_get_Default_m80EE5C179E01BB38904781592AC72F8137541D7E_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		uint16_t* L_150 = ___2_b;
		int32_t L_151 = V_3;
		uint32_t L_152 = sizeof(uint16_t);
		uint16_t L_153 = (*(uint16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_150, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_151), (int32_t)L_152)))));
		il2cpp_codegen_initobj((&V_43), sizeof(uint16_t));
		uint16_t L_154 = V_43;
		NullCheck(L_149);
		bool L_155;
		L_155 = VirtualFuncInvoker2< bool, uint16_t, uint16_t >::Invoke(8, L_149, L_153, L_154);
		V_42 = L_155;
		bool L_156 = V_42;
		if (!L_156)
		{
			goto IL_03b3;
		}
	}
	{
		V_1 = (bool)1;
	}

IL_03b3:
	{
		bool L_157 = V_1;
		V_44 = L_157;
		bool L_158 = V_44;
		if (!L_158)
		{
			goto IL_03ca;
		}
	}
	{
		int32_t L_159 = V_5;
		int32_t L_160 = V_6;
		int32_t L_161 = V_3;
		V_5 = ((int32_t)(L_159|((int32_t)(L_160&((int32_t)(1<<((int32_t)(L_161&((int32_t)31)))))))));
		goto IL_03d9;
	}

IL_03ca:
	{
		int32_t L_162 = V_5;
		int32_t L_163 = V_6;
		int32_t L_164 = V_3;
		V_5 = ((int32_t)(L_162|((int32_t)(((~L_163))&((int32_t)(1<<((int32_t)(L_164&((int32_t)31)))))))));
	}

IL_03d9:
	{
		goto IL_03eb;
	}

IL_03dc:
	{
		int32_t L_165 = V_5;
		int32_t L_166 = V_6;
		int32_t L_167 = V_3;
		V_5 = ((int32_t)(L_165|((int32_t)(((~L_166))&((int32_t)(1<<((int32_t)(L_167&((int32_t)31)))))))));
	}

IL_03eb:
	{
		goto IL_03fc;
	}

IL_03ee:
	{
		int32_t L_168 = V_5;
		int32_t L_169 = V_6;
		int32_t L_170 = V_3;
		V_5 = ((int32_t)(L_168|((int32_t)(L_169&((int32_t)(1<<((int32_t)(L_170&((int32_t)31)))))))));
	}

IL_03fc:
	{
		int32_t L_171 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_171, 1));
	}

IL_0401:
	{
		int32_t L_172 = V_3;
		int32_t L_173 = ___4_len;
		V_45 = (bool)((((int32_t)L_172) < ((int32_t)L_173))? 1 : 0);
		bool L_174 = V_45;
		if (L_174)
		{
			goto IL_0366;
		}
	}
	{
		int32_t L_175 = V_5;
		V_46 = L_175;
		goto IL_0415;
	}

IL_0415:
	{
		int32_t L_176 = V_46;
		return L_176;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStrCmpIntRes2_TisIl2CppFullySharedGenericStruct_m5BBC7FD25430C93A4DCF34A210DE56367BA1E204_gshared (Il2CppFullySharedGenericStruct* ___0_a, int32_t ___1_alen, Il2CppFullySharedGenericStruct* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
	const Il2CppFullySharedGenericStruct L_10 = L_3;
	const Il2CppFullySharedGenericStruct L_18 = L_3;
	const Il2CppFullySharedGenericStruct L_33 = L_3;
	const Il2CppFullySharedGenericStruct L_37 = L_3;
	const Il2CppFullySharedGenericStruct L_50 = L_3;
	const Il2CppFullySharedGenericStruct L_63 = L_3;
	const Il2CppFullySharedGenericStruct L_153 = L_3;
	const Il2CppFullySharedGenericStruct L_19 = alloca(SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
	const Il2CppFullySharedGenericStruct L_34 = L_19;
	const Il2CppFullySharedGenericStruct L_38 = L_19;
	const Il2CppFullySharedGenericStruct L_51 = L_19;
	const Il2CppFullySharedGenericStruct L_64 = L_19;
	const Il2CppFullySharedGenericStruct L_154 = L_19;
	bool V_0 = false;
	bool V_1 = false;
	StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	Il2CppFullySharedGenericStruct V_7 = alloca(SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
	memset(V_7, 0, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
	bool V_8 = false;
	Il2CppFullySharedGenericStruct V_9 = alloca(SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
	memset(V_9, 0, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
	bool V_10 = false;
	bool V_11 = false;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	bool V_21 = false;
	bool V_22 = false;
	bool V_23 = false;
	bool V_24 = false;
	bool V_25 = false;
	bool V_26 = false;
	bool V_27 = false;
	bool V_28 = false;
	int32_t V_29 = 0;
	int32_t V_30 = 0;
	bool V_31 = false;
	bool V_32 = false;
	bool V_33 = false;
	bool V_34 = false;
	bool V_35 = false;
	int32_t V_36 = 0;
	bool V_37 = false;
	bool V_38 = false;
	bool V_39 = false;
	bool V_40 = false;
	bool V_41 = false;
	bool V_42 = false;
	Il2CppFullySharedGenericStruct V_43 = alloca(SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
	memset(V_43, 0, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
	bool V_44 = false;
	bool V_45 = false;
	int32_t V_46 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B26_0 = 0;
	int32_t G_B36_0 = 0;
	int32_t G_B46_0 = 0;
	int32_t G_B61_0 = 0;
	int32_t G_B60_0 = 0;
	int32_t G_B62_0 = 0;
	int32_t G_B62_1 = 0;
	int32_t G_B71_0 = 0;
	int32_t G_B70_0 = 0;
	int32_t G_B72_0 = 0;
	int32_t G_B73_0 = 0;
	int32_t G_B73_1 = 0;
	int32_t G_B81_0 = 0;
	int32_t G_B80_0 = 0;
	int32_t G_B82_0 = 0;
	int32_t G_B82_1 = 0;
	{
		V_0 = (bool)0;
		V_1 = (bool)0;
		il2cpp_codegen_initobj((&V_2), sizeof(StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6));
		V_3 = 0;
		goto IL_01ea;
	}

IL_0014:
	{
		Il2CppFullySharedGenericStruct* L_0 = ___0_a;
		int32_t L_1 = V_3;
		uint32_t L_2 = SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77;
		il2cpp_codegen_memcpy(L_3, ((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), (int32_t)L_2)))), SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		il2cpp_codegen_memcpy(V_7, L_3, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		int32_t L_4 = V_3;
		int32_t L_5 = ___1_alen;
		V_8 = (bool)((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_8;
		if (!L_6)
		{
			goto IL_0033;
		}
	}
	{
		V_0 = (bool)1;
	}

IL_0033:
	{
		V_1 = (bool)0;
		V_4 = 0;
		goto IL_01d6;
	}

IL_003d:
	{
		Il2CppFullySharedGenericStruct* L_7 = ___2_b;
		int32_t L_8 = V_4;
		uint32_t L_9 = SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77;
		il2cpp_codegen_memcpy(L_10, ((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), (int32_t)L_9)))), SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		il2cpp_codegen_memcpy(V_9, L_10, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		int32_t L_11 = V_4;
		int32_t L_12 = ___3_blen;
		V_11 = (bool)((((int32_t)L_11) == ((int32_t)L_12))? 1 : 0);
		bool L_13 = V_11;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		V_1 = (bool)1;
	}

IL_005e:
	{
		int32_t L_14 = ___5_imm8;
		V_13 = ((int32_t)(((int32_t)(L_14>>2))&3));
		int32_t L_15 = V_13;
		V_12 = L_15;
		int32_t L_16 = V_12;
		switch (L_16)
		{
			case 0:
			{
				goto IL_0082;
			}
			case 1:
			{
				goto IL_00c9;
			}
			case 2:
			{
				goto IL_013a;
			}
		}
	}
	{
		goto IL_017e;
	}

IL_0082:
	{
		EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* L_17;
		L_17 = ((  EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(il2cpp_rgctx_method(method->rgctx_data, 2));
		il2cpp_codegen_memcpy(L_18, V_7, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		il2cpp_codegen_memcpy(L_19, V_9, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		NullCheck(L_17);
		bool L_20;
		L_20 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(8, L_17, L_18, L_19);
		V_10 = L_20;
		bool L_21 = V_0;
		bool L_22 = V_1;
		V_14 = (bool)((int32_t)(((((int32_t)L_21) == ((int32_t)0))? 1 : 0)&(int32_t)L_22));
		bool L_23 = V_14;
		if (!L_23)
		{
			goto IL_00a3;
		}
	}
	{
		V_10 = (bool)0;
		goto IL_00c4;
	}

IL_00a3:
	{
		bool L_24 = V_0;
		if (!L_24)
		{
			goto IL_00ac;
		}
	}
	{
		bool L_25 = V_1;
		G_B13_0 = ((((int32_t)L_25) == ((int32_t)0))? 1 : 0);
		goto IL_00ad;
	}

IL_00ac:
	{
		G_B13_0 = 0;
	}

IL_00ad:
	{
		V_15 = (bool)G_B13_0;
		bool L_26 = V_15;
		if (!L_26)
		{
			goto IL_00b8;
		}
	}
	{
		V_10 = (bool)0;
		goto IL_00c4;
	}

IL_00b8:
	{
		bool L_27 = V_0;
		bool L_28 = V_1;
		V_16 = (bool)((int32_t)((int32_t)L_27&(int32_t)L_28));
		bool L_29 = V_16;
		if (!L_29)
		{
			goto IL_00c4;
		}
	}
	{
		V_10 = (bool)0;
	}

IL_00c4:
	{
		goto IL_01c2;
	}

IL_00c9:
	{
		int32_t L_30 = V_3;
		V_17 = (bool)((((int32_t)((int32_t)(L_30&1))) == ((int32_t)0))? 1 : 0);
		bool L_31 = V_17;
		if (!L_31)
		{
			goto IL_00ed;
		}
	}
	{
		Comparer_1_t535E02B3998AA8B49230077EF0DFCB16BA44C985* L_32;
		L_32 = ((  Comparer_1_t535E02B3998AA8B49230077EF0DFCB16BA44C985* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)))(il2cpp_rgctx_method(method->rgctx_data, 6));
		il2cpp_codegen_memcpy(L_33, V_9, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		il2cpp_codegen_memcpy(L_34, V_7, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		NullCheck(L_32);
		int32_t L_35;
		L_35 = VirtualFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(6, L_32, L_33, L_34);
		V_10 = (bool)((((int32_t)((((int32_t)L_35) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0103;
	}

IL_00ed:
	{
		Comparer_1_t535E02B3998AA8B49230077EF0DFCB16BA44C985* L_36;
		L_36 = ((  Comparer_1_t535E02B3998AA8B49230077EF0DFCB16BA44C985* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)))(il2cpp_rgctx_method(method->rgctx_data, 6));
		il2cpp_codegen_memcpy(L_37, V_9, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		il2cpp_codegen_memcpy(L_38, V_7, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		NullCheck(L_36);
		int32_t L_39;
		L_39 = VirtualFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(6, L_36, L_37, L_38);
		V_10 = (bool)((((int32_t)((((int32_t)L_39) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0103:
	{
		bool L_40 = V_0;
		bool L_41 = V_1;
		V_18 = (bool)((int32_t)(((((int32_t)L_40) == ((int32_t)0))? 1 : 0)&(int32_t)L_41));
		bool L_42 = V_18;
		if (!L_42)
		{
			goto IL_0114;
		}
	}
	{
		V_10 = (bool)0;
		goto IL_0135;
	}

IL_0114:
	{
		bool L_43 = V_0;
		if (!L_43)
		{
			goto IL_011d;
		}
	}
	{
		bool L_44 = V_1;
		G_B26_0 = ((((int32_t)L_44) == ((int32_t)0))? 1 : 0);
		goto IL_011e;
	}

IL_011d:
	{
		G_B26_0 = 0;
	}

IL_011e:
	{
		V_19 = (bool)G_B26_0;
		bool L_45 = V_19;
		if (!L_45)
		{
			goto IL_0129;
		}
	}
	{
		V_10 = (bool)0;
		goto IL_0135;
	}

IL_0129:
	{
		bool L_46 = V_0;
		bool L_47 = V_1;
		V_20 = (bool)((int32_t)((int32_t)L_46&(int32_t)L_47));
		bool L_48 = V_20;
		if (!L_48)
		{
			goto IL_0135;
		}
	}
	{
		V_10 = (bool)0;
	}

IL_0135:
	{
		goto IL_01c2;
	}

IL_013a:
	{
		EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* L_49;
		L_49 = ((  EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(il2cpp_rgctx_method(method->rgctx_data, 2));
		il2cpp_codegen_memcpy(L_50, V_7, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		il2cpp_codegen_memcpy(L_51, V_9, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		NullCheck(L_49);
		bool L_52;
		L_52 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(8, L_49, L_50, L_51);
		V_10 = L_52;
		bool L_53 = V_0;
		bool L_54 = V_1;
		V_21 = (bool)((int32_t)(((((int32_t)L_53) == ((int32_t)0))? 1 : 0)&(int32_t)L_54));
		bool L_55 = V_21;
		if (!L_55)
		{
			goto IL_015b;
		}
	}
	{
		V_10 = (bool)0;
		goto IL_017c;
	}

IL_015b:
	{
		bool L_56 = V_0;
		if (!L_56)
		{
			goto IL_0164;
		}
	}
	{
		bool L_57 = V_1;
		G_B36_0 = ((((int32_t)L_57) == ((int32_t)0))? 1 : 0);
		goto IL_0165;
	}

IL_0164:
	{
		G_B36_0 = 0;
	}

IL_0165:
	{
		V_22 = (bool)G_B36_0;
		bool L_58 = V_22;
		if (!L_58)
		{
			goto IL_0170;
		}
	}
	{
		V_10 = (bool)0;
		goto IL_017c;
	}

IL_0170:
	{
		bool L_59 = V_0;
		bool L_60 = V_1;
		V_23 = (bool)((int32_t)((int32_t)L_59&(int32_t)L_60));
		bool L_61 = V_23;
		if (!L_61)
		{
			goto IL_017c;
		}
	}
	{
		V_10 = (bool)1;
	}

IL_017c:
	{
		goto IL_01c2;
	}

IL_017e:
	{
		EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* L_62;
		L_62 = ((  EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(il2cpp_rgctx_method(method->rgctx_data, 2));
		il2cpp_codegen_memcpy(L_63, V_7, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		il2cpp_codegen_memcpy(L_64, V_9, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		NullCheck(L_62);
		bool L_65;
		L_65 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(8, L_62, L_63, L_64);
		V_10 = L_65;
		bool L_66 = V_0;
		bool L_67 = V_1;
		V_24 = (bool)((int32_t)(((((int32_t)L_66) == ((int32_t)0))? 1 : 0)&(int32_t)L_67));
		bool L_68 = V_24;
		if (!L_68)
		{
			goto IL_019f;
		}
	}
	{
		V_10 = (bool)0;
		goto IL_01c0;
	}

IL_019f:
	{
		bool L_69 = V_0;
		if (!L_69)
		{
			goto IL_01a8;
		}
	}
	{
		bool L_70 = V_1;
		G_B46_0 = ((((int32_t)L_70) == ((int32_t)0))? 1 : 0);
		goto IL_01a9;
	}

IL_01a8:
	{
		G_B46_0 = 0;
	}

IL_01a9:
	{
		V_25 = (bool)G_B46_0;
		bool L_71 = V_25;
		if (!L_71)
		{
			goto IL_01b4;
		}
	}
	{
		V_10 = (bool)1;
		goto IL_01c0;
	}

IL_01b4:
	{
		bool L_72 = V_0;
		bool L_73 = V_1;
		V_26 = (bool)((int32_t)((int32_t)L_72&(int32_t)L_73));
		bool L_74 = V_26;
		if (!L_74)
		{
			goto IL_01c0;
		}
	}
	{
		V_10 = (bool)1;
	}

IL_01c0:
	{
		goto IL_01c2;
	}

IL_01c2:
	{
		int32_t L_75 = V_3;
		int32_t L_76 = V_4;
		bool L_77 = V_10;
		StrBoolArray_SetBit_m212C6D1A8A4C422AF979D6B3BC7CD5B9BD0F3F01((&V_2), L_75, L_76, L_77, NULL);
		int32_t L_78 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_78, 1));
	}

IL_01d6:
	{
		int32_t L_79 = V_4;
		int32_t L_80 = ___4_len;
		V_27 = (bool)((((int32_t)L_79) < ((int32_t)L_80))? 1 : 0);
		bool L_81 = V_27;
		if (L_81)
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_82 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_82, 1));
	}

IL_01ea:
	{
		int32_t L_83 = V_3;
		int32_t L_84 = ___4_len;
		V_28 = (bool)((((int32_t)L_83) < ((int32_t)L_84))? 1 : 0);
		bool L_85 = V_28;
		if (L_85)
		{
			goto IL_0014;
		}
	}
	{
		V_6 = 0;
		int32_t L_86 = ___5_imm8;
		V_30 = ((int32_t)(((int32_t)(L_86>>2))&3));
		int32_t L_87 = V_30;
		V_29 = L_87;
		int32_t L_88 = V_29;
		switch (L_88)
		{
			case 0:
			{
				goto IL_0223;
			}
			case 1:
			{
				goto IL_0270;
			}
			case 2:
			{
				goto IL_02cb;
			}
			case 3:
			{
				goto IL_02fb;
			}
		}
	}
	{
		goto IL_035a;
	}

IL_0223:
	{
		V_3 = 0;
		goto IL_0260;
	}

IL_0227:
	{
		V_4 = 0;
		goto IL_024f;
	}

IL_022d:
	{
		int32_t L_89 = V_6;
		int32_t L_90 = V_4;
		int32_t L_91 = V_3;
		bool L_92;
		L_92 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_90, L_91, NULL);
		if (L_92)
		{
			G_B61_0 = L_89;
			goto IL_023f;
		}
		G_B60_0 = L_89;
	}
	{
		G_B62_0 = 0;
		G_B62_1 = G_B60_0;
		goto IL_0240;
	}

IL_023f:
	{
		G_B62_0 = 1;
		G_B62_1 = G_B61_0;
	}

IL_0240:
	{
		int32_t L_93 = V_3;
		V_6 = ((int32_t)(G_B62_1|((int32_t)(G_B62_0<<((int32_t)(L_93&((int32_t)31)))))));
		int32_t L_94 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_94, 1));
	}

IL_024f:
	{
		int32_t L_95 = V_4;
		int32_t L_96 = ___4_len;
		V_31 = (bool)((((int32_t)L_95) < ((int32_t)L_96))? 1 : 0);
		bool L_97 = V_31;
		if (L_97)
		{
			goto IL_022d;
		}
	}
	{
		int32_t L_98 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_98, 1));
	}

IL_0260:
	{
		int32_t L_99 = V_3;
		int32_t L_100 = ___4_len;
		V_32 = (bool)((((int32_t)L_99) < ((int32_t)L_100))? 1 : 0);
		bool L_101 = V_32;
		if (L_101)
		{
			goto IL_0227;
		}
	}
	{
		goto IL_035a;
	}

IL_0270:
	{
		V_3 = 0;
		goto IL_02bb;
	}

IL_0274:
	{
		V_4 = 0;
		goto IL_02aa;
	}

IL_027a:
	{
		int32_t L_102 = V_6;
		int32_t L_103 = V_4;
		int32_t L_104 = V_3;
		bool L_105;
		L_105 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_103, L_104, NULL);
		if (!L_105)
		{
			G_B71_0 = L_102;
			goto IL_0297;
		}
		G_B70_0 = L_102;
	}
	{
		int32_t L_106 = V_4;
		int32_t L_107 = V_3;
		bool L_108;
		L_108 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), ((int32_t)il2cpp_codegen_add(L_106, 1)), L_107, NULL);
		if (L_108)
		{
			G_B72_0 = G_B70_0;
			goto IL_029a;
		}
		G_B71_0 = G_B70_0;
	}

IL_0297:
	{
		G_B73_0 = 0;
		G_B73_1 = G_B71_0;
		goto IL_029b;
	}

IL_029a:
	{
		G_B73_0 = 1;
		G_B73_1 = G_B72_0;
	}

IL_029b:
	{
		int32_t L_109 = V_3;
		V_6 = ((int32_t)(G_B73_1|((int32_t)(G_B73_0<<((int32_t)(L_109&((int32_t)31)))))));
		int32_t L_110 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_110, 2));
	}

IL_02aa:
	{
		int32_t L_111 = V_4;
		int32_t L_112 = ___4_len;
		V_33 = (bool)((((int32_t)L_111) < ((int32_t)L_112))? 1 : 0);
		bool L_113 = V_33;
		if (L_113)
		{
			goto IL_027a;
		}
	}
	{
		int32_t L_114 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_114, 1));
	}

IL_02bb:
	{
		int32_t L_115 = V_3;
		int32_t L_116 = ___4_len;
		V_34 = (bool)((((int32_t)L_115) < ((int32_t)L_116))? 1 : 0);
		bool L_117 = V_34;
		if (L_117)
		{
			goto IL_0274;
		}
	}
	{
		goto IL_035a;
	}

IL_02cb:
	{
		V_3 = 0;
		goto IL_02ee;
	}

IL_02cf:
	{
		int32_t L_118 = V_6;
		int32_t L_119 = V_3;
		int32_t L_120 = V_3;
		bool L_121;
		L_121 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_119, L_120, NULL);
		if (L_121)
		{
			G_B81_0 = L_118;
			goto IL_02e0;
		}
		G_B80_0 = L_118;
	}
	{
		G_B82_0 = 0;
		G_B82_1 = G_B80_0;
		goto IL_02e1;
	}

IL_02e0:
	{
		G_B82_0 = 1;
		G_B82_1 = G_B81_0;
	}

IL_02e1:
	{
		int32_t L_122 = V_3;
		V_6 = ((int32_t)(G_B82_1|((int32_t)(G_B82_0<<((int32_t)(L_122&((int32_t)31)))))));
		int32_t L_123 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_123, 1));
	}

IL_02ee:
	{
		int32_t L_124 = V_3;
		int32_t L_125 = ___4_len;
		V_35 = (bool)((((int32_t)L_124) < ((int32_t)L_125))? 1 : 0);
		bool L_126 = V_35;
		if (L_126)
		{
			goto IL_02cf;
		}
	}
	{
		goto IL_035a;
	}

IL_02fb:
	{
		int32_t L_127 = ___6_allOnes;
		V_6 = L_127;
		V_3 = 0;
		goto IL_034d;
	}

IL_0303:
	{
		int32_t L_128 = V_3;
		V_36 = L_128;
		V_4 = 0;
		goto IL_033a;
	}

IL_030c:
	{
		int32_t L_129 = V_4;
		int32_t L_130 = V_36;
		bool L_131;
		L_131 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_129, L_130, NULL);
		V_37 = (bool)((((int32_t)L_131) == ((int32_t)0))? 1 : 0);
		bool L_132 = V_37;
		if (!L_132)
		{
			goto IL_032d;
		}
	}
	{
		int32_t L_133 = V_6;
		int32_t L_134 = V_3;
		V_6 = ((int32_t)(L_133&((~((int32_t)(1<<((int32_t)(L_134&((int32_t)31)))))))));
	}

IL_032d:
	{
		int32_t L_135 = V_36;
		V_36 = ((int32_t)il2cpp_codegen_add(L_135, 1));
		int32_t L_136 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_136, 1));
	}

IL_033a:
	{
		int32_t L_137 = V_4;
		int32_t L_138 = ___4_len;
		int32_t L_139 = V_3;
		V_38 = (bool)((((int32_t)L_137) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_138, L_139))))? 1 : 0);
		bool L_140 = V_38;
		if (L_140)
		{
			goto IL_030c;
		}
	}
	{
		int32_t L_141 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_141, 1));
	}

IL_034d:
	{
		int32_t L_142 = V_3;
		int32_t L_143 = ___4_len;
		V_39 = (bool)((((int32_t)L_142) < ((int32_t)L_143))? 1 : 0);
		bool L_144 = V_39;
		if (L_144)
		{
			goto IL_0303;
		}
	}
	{
		goto IL_035a;
	}

IL_035a:
	{
		V_5 = 0;
		V_1 = (bool)0;
		V_3 = 0;
		goto IL_0401;
	}

IL_0366:
	{
		int32_t L_145 = ___5_imm8;
		V_40 = (bool)((!(((uint32_t)((int32_t)(L_145&((int32_t)16)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_146 = V_40;
		if (!L_146)
		{
			goto IL_03ee;
		}
	}
	{
		int32_t L_147 = ___5_imm8;
		V_41 = (bool)((!(((uint32_t)((int32_t)(L_147&((int32_t)32)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_148 = V_41;
		if (!L_148)
		{
			goto IL_03dc;
		}
	}
	{
		EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* L_149;
		L_149 = ((  EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(il2cpp_rgctx_method(method->rgctx_data, 2));
		Il2CppFullySharedGenericStruct* L_150 = ___2_b;
		int32_t L_151 = V_3;
		uint32_t L_152 = SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77;
		il2cpp_codegen_memcpy(L_153, ((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_150, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_151), (int32_t)L_152)))), SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericStruct*)V_43, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		il2cpp_codegen_memcpy(L_154, V_43, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		NullCheck(L_149);
		bool L_155;
		L_155 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(8, L_149, L_153, L_154);
		V_42 = L_155;
		bool L_156 = V_42;
		if (!L_156)
		{
			goto IL_03b3;
		}
	}
	{
		V_1 = (bool)1;
	}

IL_03b3:
	{
		bool L_157 = V_1;
		V_44 = L_157;
		bool L_158 = V_44;
		if (!L_158)
		{
			goto IL_03ca;
		}
	}
	{
		int32_t L_159 = V_5;
		int32_t L_160 = V_6;
		int32_t L_161 = V_3;
		V_5 = ((int32_t)(L_159|((int32_t)(L_160&((int32_t)(1<<((int32_t)(L_161&((int32_t)31)))))))));
		goto IL_03d9;
	}

IL_03ca:
	{
		int32_t L_162 = V_5;
		int32_t L_163 = V_6;
		int32_t L_164 = V_3;
		V_5 = ((int32_t)(L_162|((int32_t)(((~L_163))&((int32_t)(1<<((int32_t)(L_164&((int32_t)31)))))))));
	}

IL_03d9:
	{
		goto IL_03eb;
	}

IL_03dc:
	{
		int32_t L_165 = V_5;
		int32_t L_166 = V_6;
		int32_t L_167 = V_3;
		V_5 = ((int32_t)(L_165|((int32_t)(((~L_166))&((int32_t)(1<<((int32_t)(L_167&((int32_t)31)))))))));
	}

IL_03eb:
	{
		goto IL_03fc;
	}

IL_03ee:
	{
		int32_t L_168 = V_5;
		int32_t L_169 = V_6;
		int32_t L_170 = V_3;
		V_5 = ((int32_t)(L_168|((int32_t)(L_169&((int32_t)(1<<((int32_t)(L_170&((int32_t)31)))))))));
	}

IL_03fc:
	{
		int32_t L_171 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_171, 1));
	}

IL_0401:
	{
		int32_t L_172 = V_3;
		int32_t L_173 = ___4_len;
		V_45 = (bool)((((int32_t)L_172) < ((int32_t)L_173))? 1 : 0);
		bool L_174 = V_45;
		if (L_174)
		{
			goto IL_0366;
		}
	}
	{
		int32_t L_175 = V_5;
		V_46 = L_175;
		goto IL_0415;
	}

IL_0415:
	{
		int32_t L_176 = V_46;
		return L_176;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStringLength_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD30812062AA4852D166ABCDF3D79FDD1856F173A_gshared (uint8_t* ___0_ptr, int32_t ___1_max, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	bool V_1 = false;
	uint8_t V_2 = 0x0;
	int32_t V_3 = 0;
	bool V_4 = false;
	{
		V_0 = 0;
		goto IL_0037;
	}

IL_0005:
	{
		EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* L_0;
		L_0 = EqualityComparer_1_get_Default_m41DB4C0E0A508A8326E903331DC63D410B7AB9C4_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		uint8_t* L_1 = ___0_ptr;
		int32_t L_2 = V_0;
		uint32_t L_3 = sizeof(uint8_t);
		uint8_t L_4 = (*(uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_1, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_2), (int32_t)L_3)))));
		il2cpp_codegen_initobj((&V_2), sizeof(uint8_t));
		uint8_t L_5 = V_2;
		NullCheck(L_0);
		bool L_6;
		L_6 = VirtualFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(8, L_0, L_4, L_5);
		V_1 = L_6;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_8 = V_0;
		V_3 = L_8;
		goto IL_0045;
	}

IL_0032:
	{
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0037:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = ___1_max;
		V_4 = (bool)((((int32_t)L_10) < ((int32_t)L_11))? 1 : 0);
		bool L_12 = V_4;
		if (L_12)
		{
			goto IL_0005;
		}
	}
	{
		int32_t L_13 = ___1_max;
		V_3 = L_13;
		goto IL_0045;
	}

IL_0045:
	{
		int32_t L_14 = V_3;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStringLength_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m3EBC75C6F39A7B1A5F62D88877C87C9F3B5617A3_gshared (int16_t* ___0_ptr, int32_t ___1_max, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	bool V_1 = false;
	int16_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	{
		V_0 = 0;
		goto IL_0037;
	}

IL_0005:
	{
		EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* L_0;
		L_0 = EqualityComparer_1_get_Default_m7D273CC532DC2164C9C86D28C639FDEA38173C88_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int16_t* L_1 = ___0_ptr;
		int32_t L_2 = V_0;
		uint32_t L_3 = sizeof(int16_t);
		int16_t L_4 = (*(int16_t*)((int16_t*)il2cpp_codegen_add((intptr_t)L_1, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_2), (int32_t)L_3)))));
		il2cpp_codegen_initobj((&V_2), sizeof(int16_t));
		int16_t L_5 = V_2;
		NullCheck(L_0);
		bool L_6;
		L_6 = VirtualFuncInvoker2< bool, int16_t, int16_t >::Invoke(8, L_0, L_4, L_5);
		V_1 = L_6;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_8 = V_0;
		V_3 = L_8;
		goto IL_0045;
	}

IL_0032:
	{
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0037:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = ___1_max;
		V_4 = (bool)((((int32_t)L_10) < ((int32_t)L_11))? 1 : 0);
		bool L_12 = V_4;
		if (L_12)
		{
			goto IL_0005;
		}
	}
	{
		int32_t L_13 = ___1_max;
		V_3 = L_13;
		goto IL_0045;
	}

IL_0045:
	{
		int32_t L_14 = V_3;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStringLength_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m73215CC1A28F076B0D2472385756C7AF58CBA171_gshared (int8_t* ___0_ptr, int32_t ___1_max, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	bool V_1 = false;
	int8_t V_2 = 0x0;
	int32_t V_3 = 0;
	bool V_4 = false;
	{
		V_0 = 0;
		goto IL_0037;
	}

IL_0005:
	{
		EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* L_0;
		L_0 = EqualityComparer_1_get_Default_m7F71AAC0046A3CB8C4CEB06A5A52A1269AF7023D_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int8_t* L_1 = ___0_ptr;
		int32_t L_2 = V_0;
		uint32_t L_3 = sizeof(int8_t);
		int8_t L_4 = (*(int8_t*)((int8_t*)il2cpp_codegen_add((intptr_t)L_1, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_2), (int32_t)L_3)))));
		il2cpp_codegen_initobj((&V_2), sizeof(int8_t));
		int8_t L_5 = V_2;
		NullCheck(L_0);
		bool L_6;
		L_6 = VirtualFuncInvoker2< bool, int8_t, int8_t >::Invoke(8, L_0, L_4, L_5);
		V_1 = L_6;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_8 = V_0;
		V_3 = L_8;
		goto IL_0045;
	}

IL_0032:
	{
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0037:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = ___1_max;
		V_4 = (bool)((((int32_t)L_10) < ((int32_t)L_11))? 1 : 0);
		bool L_12 = V_4;
		if (L_12)
		{
			goto IL_0005;
		}
	}
	{
		int32_t L_13 = ___1_max;
		V_3 = L_13;
		goto IL_0045;
	}

IL_0045:
	{
		int32_t L_14 = V_3;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStringLength_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m000E8D7B908376D69E48EACF3E6811C4DEE7A05D_gshared (uint16_t* ___0_ptr, int32_t ___1_max, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	bool V_1 = false;
	uint16_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	{
		V_0 = 0;
		goto IL_0037;
	}

IL_0005:
	{
		EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* L_0;
		L_0 = EqualityComparer_1_get_Default_m80EE5C179E01BB38904781592AC72F8137541D7E_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		uint16_t* L_1 = ___0_ptr;
		int32_t L_2 = V_0;
		uint32_t L_3 = sizeof(uint16_t);
		uint16_t L_4 = (*(uint16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_1, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_2), (int32_t)L_3)))));
		il2cpp_codegen_initobj((&V_2), sizeof(uint16_t));
		uint16_t L_5 = V_2;
		NullCheck(L_0);
		bool L_6;
		L_6 = VirtualFuncInvoker2< bool, uint16_t, uint16_t >::Invoke(8, L_0, L_4, L_5);
		V_1 = L_6;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_8 = V_0;
		V_3 = L_8;
		goto IL_0045;
	}

IL_0032:
	{
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0037:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = ___1_max;
		V_4 = (bool)((((int32_t)L_10) < ((int32_t)L_11))? 1 : 0);
		bool L_12 = V_4;
		if (L_12)
		{
			goto IL_0005;
		}
	}
	{
		int32_t L_13 = ___1_max;
		V_3 = L_13;
		goto IL_0045;
	}

IL_0045:
	{
		int32_t L_14 = V_3;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStringLength_TisIl2CppFullySharedGenericStruct_m764CDB4D47CB1C77EAA40D60D44F53C4E97CD8D6_gshared (Il2CppFullySharedGenericStruct* ___0_ptr, int32_t ___1_max, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t2125B686AA2A4D4755B95692CBE3C48B69824C64 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 4));
	const Il2CppFullySharedGenericStruct L_4 = alloca(SizeOf_T_t2125B686AA2A4D4755B95692CBE3C48B69824C64);
	const Il2CppFullySharedGenericStruct L_5 = alloca(SizeOf_T_t2125B686AA2A4D4755B95692CBE3C48B69824C64);
	int32_t V_0 = 0;
	bool V_1 = false;
	Il2CppFullySharedGenericStruct V_2 = alloca(SizeOf_T_t2125B686AA2A4D4755B95692CBE3C48B69824C64);
	memset(V_2, 0, SizeOf_T_t2125B686AA2A4D4755B95692CBE3C48B69824C64);
	int32_t V_3 = 0;
	bool V_4 = false;
	{
		V_0 = 0;
		goto IL_0037;
	}

IL_0005:
	{
		EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* L_0;
		L_0 = ((  EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		Il2CppFullySharedGenericStruct* L_1 = ___0_ptr;
		int32_t L_2 = V_0;
		uint32_t L_3 = SizeOf_T_t2125B686AA2A4D4755B95692CBE3C48B69824C64;
		il2cpp_codegen_memcpy(L_4, ((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_1, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_2), (int32_t)L_3)))), SizeOf_T_t2125B686AA2A4D4755B95692CBE3C48B69824C64);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericStruct*)V_2, SizeOf_T_t2125B686AA2A4D4755B95692CBE3C48B69824C64);
		il2cpp_codegen_memcpy(L_5, V_2, SizeOf_T_t2125B686AA2A4D4755B95692CBE3C48B69824C64);
		NullCheck(L_0);
		bool L_6;
		L_6 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(8, L_0, L_4, L_5);
		V_1 = L_6;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_8 = V_0;
		V_3 = L_8;
		goto IL_0045;
	}

IL_0032:
	{
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0037:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = ___1_max;
		V_4 = (bool)((((int32_t)L_10) < ((int32_t)L_11))? 1 : 0);
		bool L_12 = V_4;
		if (L_12)
		{
			goto IL_0005;
		}
	}
	{
		int32_t L_13 = ___1_max;
		V_3 = L_13;
		goto IL_0045;
	}

IL_0045:
	{
		int32_t L_14 = V_3;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1CC4D51DF3F513318DCC288B066D0018EAF9C235_gshared (int32_t ___0_len, int32_t ___1_imm8, uint8_t ___2_allOnesT, int32_t ___3_intRes2, const RuntimeMethod* method) 
{
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	uint8_t* V_2 = NULL;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61));
		int32_t L_0 = ___1_imm8;
		V_1 = (bool)((!(((uint32_t)((int32_t)(L_0&((int32_t)64)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_006e;
		}
	}
	{
		uint8_t* L_2 = (uint8_t*)(&(&V_0)->___Byte0);
		V_2 = (uint8_t*)((uintptr_t)L_2);
		V_3 = 0;
		goto IL_0061;
	}

IL_0022:
	{
		int32_t L_3 = ___3_intRes2;
		int32_t L_4 = V_3;
		V_4 = (bool)((!(((uint32_t)((int32_t)(L_3&((int32_t)(1<<((int32_t)(L_4&((int32_t)31)))))))) <= ((uint32_t)0)))? 1 : 0);
		bool L_5 = V_4;
		if (!L_5)
		{
			goto IL_0049;
		}
	}
	{
		uint8_t* L_6 = V_2;
		int32_t L_7 = V_3;
		uint32_t L_8 = sizeof(uint8_t);
		uint8_t L_9 = ___2_allOnesT;
		*(uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_6, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_7), (int32_t)L_8)))) = L_9;
		goto IL_005c;
	}

IL_0049:
	{
		uint8_t* L_10 = V_2;
		int32_t L_11 = V_3;
		uint32_t L_12 = sizeof(uint8_t);
		il2cpp_codegen_initobj(((uint8_t*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_11), (int32_t)L_12)))), sizeof(uint8_t));
	}

IL_005c:
	{
		int32_t L_13 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0061:
	{
		int32_t L_14 = V_3;
		int32_t L_15 = ___0_len;
		V_5 = (bool)((((int32_t)L_14) < ((int32_t)L_15))? 1 : 0);
		bool L_16 = V_5;
		if (L_16)
		{
			goto IL_0022;
		}
	}
	{
		goto IL_0078;
	}

IL_006e:
	{
		int32_t L_17 = ___3_intRes2;
		(&V_0)->___SInt0 = L_17;
	}

IL_0078:
	{
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_18 = V_0;
		V_6 = L_18;
		goto IL_007d;
	}

IL_007d:
	{
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_19 = V_6;
		return L_19;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE92FFA321425E5808CD20616DC308BA7B36886E8_gshared (int32_t ___0_len, int32_t ___1_imm8, int16_t ___2_allOnesT, int32_t ___3_intRes2, const RuntimeMethod* method) 
{
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	int16_t* V_2 = NULL;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61));
		int32_t L_0 = ___1_imm8;
		V_1 = (bool)((!(((uint32_t)((int32_t)(L_0&((int32_t)64)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_006e;
		}
	}
	{
		uint8_t* L_2 = (uint8_t*)(&(&V_0)->___Byte0);
		V_2 = (int16_t*)((uintptr_t)L_2);
		V_3 = 0;
		goto IL_0061;
	}

IL_0022:
	{
		int32_t L_3 = ___3_intRes2;
		int32_t L_4 = V_3;
		V_4 = (bool)((!(((uint32_t)((int32_t)(L_3&((int32_t)(1<<((int32_t)(L_4&((int32_t)31)))))))) <= ((uint32_t)0)))? 1 : 0);
		bool L_5 = V_4;
		if (!L_5)
		{
			goto IL_0049;
		}
	}
	{
		int16_t* L_6 = V_2;
		int32_t L_7 = V_3;
		uint32_t L_8 = sizeof(int16_t);
		int16_t L_9 = ___2_allOnesT;
		*(int16_t*)((int16_t*)il2cpp_codegen_add((intptr_t)L_6, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_7), (int32_t)L_8)))) = L_9;
		goto IL_005c;
	}

IL_0049:
	{
		int16_t* L_10 = V_2;
		int32_t L_11 = V_3;
		uint32_t L_12 = sizeof(int16_t);
		il2cpp_codegen_initobj(((int16_t*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_11), (int32_t)L_12)))), sizeof(int16_t));
	}

IL_005c:
	{
		int32_t L_13 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0061:
	{
		int32_t L_14 = V_3;
		int32_t L_15 = ___0_len;
		V_5 = (bool)((((int32_t)L_14) < ((int32_t)L_15))? 1 : 0);
		bool L_16 = V_5;
		if (L_16)
		{
			goto IL_0022;
		}
	}
	{
		goto IL_0078;
	}

IL_006e:
	{
		int32_t L_17 = ___3_intRes2;
		(&V_0)->___SInt0 = L_17;
	}

IL_0078:
	{
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_18 = V_0;
		V_6 = L_18;
		goto IL_007d;
	}

IL_007d:
	{
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_19 = V_6;
		return L_19;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m5EFDDE5126FDB6BF9F9ED55B39751B517522C455_gshared (int32_t ___0_len, int32_t ___1_imm8, int8_t ___2_allOnesT, int32_t ___3_intRes2, const RuntimeMethod* method) 
{
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	int8_t* V_2 = NULL;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61));
		int32_t L_0 = ___1_imm8;
		V_1 = (bool)((!(((uint32_t)((int32_t)(L_0&((int32_t)64)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_006e;
		}
	}
	{
		uint8_t* L_2 = (uint8_t*)(&(&V_0)->___Byte0);
		V_2 = (int8_t*)((uintptr_t)L_2);
		V_3 = 0;
		goto IL_0061;
	}

IL_0022:
	{
		int32_t L_3 = ___3_intRes2;
		int32_t L_4 = V_3;
		V_4 = (bool)((!(((uint32_t)((int32_t)(L_3&((int32_t)(1<<((int32_t)(L_4&((int32_t)31)))))))) <= ((uint32_t)0)))? 1 : 0);
		bool L_5 = V_4;
		if (!L_5)
		{
			goto IL_0049;
		}
	}
	{
		int8_t* L_6 = V_2;
		int32_t L_7 = V_3;
		uint32_t L_8 = sizeof(int8_t);
		int8_t L_9 = ___2_allOnesT;
		*(int8_t*)((int8_t*)il2cpp_codegen_add((intptr_t)L_6, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_7), (int32_t)L_8)))) = L_9;
		goto IL_005c;
	}

IL_0049:
	{
		int8_t* L_10 = V_2;
		int32_t L_11 = V_3;
		uint32_t L_12 = sizeof(int8_t);
		il2cpp_codegen_initobj(((int8_t*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_11), (int32_t)L_12)))), sizeof(int8_t));
	}

IL_005c:
	{
		int32_t L_13 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0061:
	{
		int32_t L_14 = V_3;
		int32_t L_15 = ___0_len;
		V_5 = (bool)((((int32_t)L_14) < ((int32_t)L_15))? 1 : 0);
		bool L_16 = V_5;
		if (L_16)
		{
			goto IL_0022;
		}
	}
	{
		goto IL_0078;
	}

IL_006e:
	{
		int32_t L_17 = ___3_intRes2;
		(&V_0)->___SInt0 = L_17;
	}

IL_0078:
	{
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_18 = V_0;
		V_6 = L_18;
		goto IL_007d;
	}

IL_007d:
	{
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_19 = V_6;
		return L_19;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mD44F4B084A230ACD38B4FCF13923F8986AFF0AB1_gshared (int32_t ___0_len, int32_t ___1_imm8, uint16_t ___2_allOnesT, int32_t ___3_intRes2, const RuntimeMethod* method) 
{
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	uint16_t* V_2 = NULL;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61));
		int32_t L_0 = ___1_imm8;
		V_1 = (bool)((!(((uint32_t)((int32_t)(L_0&((int32_t)64)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_006e;
		}
	}
	{
		uint8_t* L_2 = (uint8_t*)(&(&V_0)->___Byte0);
		V_2 = (uint16_t*)((uintptr_t)L_2);
		V_3 = 0;
		goto IL_0061;
	}

IL_0022:
	{
		int32_t L_3 = ___3_intRes2;
		int32_t L_4 = V_3;
		V_4 = (bool)((!(((uint32_t)((int32_t)(L_3&((int32_t)(1<<((int32_t)(L_4&((int32_t)31)))))))) <= ((uint32_t)0)))? 1 : 0);
		bool L_5 = V_4;
		if (!L_5)
		{
			goto IL_0049;
		}
	}
	{
		uint16_t* L_6 = V_2;
		int32_t L_7 = V_3;
		uint32_t L_8 = sizeof(uint16_t);
		uint16_t L_9 = ___2_allOnesT;
		*(uint16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_6, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_7), (int32_t)L_8)))) = L_9;
		goto IL_005c;
	}

IL_0049:
	{
		uint16_t* L_10 = V_2;
		int32_t L_11 = V_3;
		uint32_t L_12 = sizeof(uint16_t);
		il2cpp_codegen_initobj(((uint16_t*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_11), (int32_t)L_12)))), sizeof(uint16_t));
	}

IL_005c:
	{
		int32_t L_13 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0061:
	{
		int32_t L_14 = V_3;
		int32_t L_15 = ___0_len;
		V_5 = (bool)((((int32_t)L_14) < ((int32_t)L_15))? 1 : 0);
		bool L_16 = V_5;
		if (L_16)
		{
			goto IL_0022;
		}
	}
	{
		goto IL_0078;
	}

IL_006e:
	{
		int32_t L_17 = ___3_intRes2;
		(&V_0)->___SInt0 = L_17;
	}

IL_0078:
	{
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_18 = V_0;
		V_6 = L_18;
		goto IL_007d;
	}

IL_007d:
	{
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_19 = V_6;
		return L_19;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisIl2CppFullySharedGenericStruct_m64ADE71FB4B90FEC60799387186E249935DE041C_gshared (int32_t ___0_len, int32_t ___1_imm8, Il2CppFullySharedGenericStruct ___2_allOnesT, int32_t ___3_intRes2, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t4AB7E7218B07206B6D97D6E91CAC0F37510C246B = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericStruct L_9 = alloca(SizeOf_T_t4AB7E7218B07206B6D97D6E91CAC0F37510C246B);
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	Il2CppFullySharedGenericStruct* V_2 = NULL;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61));
		int32_t L_0 = ___1_imm8;
		V_1 = (bool)((!(((uint32_t)((int32_t)(L_0&((int32_t)64)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_006e;
		}
	}
	{
		uint8_t* L_2 = (uint8_t*)(&(&V_0)->___Byte0);
		V_2 = (Il2CppFullySharedGenericStruct*)((uintptr_t)L_2);
		V_3 = 0;
		goto IL_0061;
	}

IL_0022:
	{
		int32_t L_3 = ___3_intRes2;
		int32_t L_4 = V_3;
		V_4 = (bool)((!(((uint32_t)((int32_t)(L_3&((int32_t)(1<<((int32_t)(L_4&((int32_t)31)))))))) <= ((uint32_t)0)))? 1 : 0);
		bool L_5 = V_4;
		if (!L_5)
		{
			goto IL_0049;
		}
	}
	{
		Il2CppFullySharedGenericStruct* L_6 = V_2;
		int32_t L_7 = V_3;
		uint32_t L_8 = SizeOf_T_t4AB7E7218B07206B6D97D6E91CAC0F37510C246B;
		il2cpp_codegen_memcpy(L_9, ___2_allOnesT, SizeOf_T_t4AB7E7218B07206B6D97D6E91CAC0F37510C246B);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericStruct*)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_6, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_7), (int32_t)L_8)))), L_9, SizeOf_T_t4AB7E7218B07206B6D97D6E91CAC0F37510C246B);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 0), (void**)(Il2CppFullySharedGenericStruct*)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_6, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_7), (int32_t)L_8)))), (void*)L_9);
		goto IL_005c;
	}

IL_0049:
	{
		Il2CppFullySharedGenericStruct* L_10 = V_2;
		int32_t L_11 = V_3;
		uint32_t L_12 = SizeOf_T_t4AB7E7218B07206B6D97D6E91CAC0F37510C246B;
		il2cpp_codegen_initobj(((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_11), (int32_t)L_12)))), SizeOf_T_t4AB7E7218B07206B6D97D6E91CAC0F37510C246B);
	}

IL_005c:
	{
		int32_t L_13 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0061:
	{
		int32_t L_14 = V_3;
		int32_t L_15 = ___0_len;
		V_5 = (bool)((((int32_t)L_14) < ((int32_t)L_15))? 1 : 0);
		bool L_16 = V_5;
		if (L_16)
		{
			goto IL_0022;
		}
	}
	{
		goto IL_0078;
	}

IL_006e:
	{
		int32_t L_17 = ___3_intRes2;
		(&V_0)->___SInt0 = L_17;
	}

IL_0078:
	{
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_18 = V_0;
		V_6 = L_18;
		goto IL_007d;
	}

IL_007d:
	{
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_19 = V_6;
		return L_19;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_cmpestri_emulation_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD4107C2F2DB7508841779CE414BD21B61FA3183F_gshared (uint8_t* ___0_a, int32_t ___1_alen, uint8_t* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, uint8_t ___7_allOnesT, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		uint8_t* L_0 = ___0_a;
		int32_t L_1 = ___1_alen;
		uint8_t* L_2 = ___2_b;
		int32_t L_3 = ___3_blen;
		int32_t L_4 = ___4_len;
		int32_t L_5 = ___5_imm8;
		int32_t L_6 = ___6_allOnes;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Sse4_2_ComputeStrCmpIntRes2_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5D9BE946098FA4C7FC8CC23DEE63A0877E8D6C8B(L_0, L_1, L_2, L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_7;
		int32_t L_8 = ___4_len;
		int32_t L_9 = ___5_imm8;
		int32_t L_10 = V_0;
		int32_t L_11;
		L_11 = Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123(L_8, L_9, L_10, NULL);
		V_1 = L_11;
		goto IL_001e;
	}

IL_001e:
	{
		int32_t L_12 = V_1;
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_cmpestri_emulation_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m797C4B561EC2527267C18CF422EBBD9FCDD306EF_gshared (int16_t* ___0_a, int32_t ___1_alen, int16_t* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, int16_t ___7_allOnesT, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int16_t* L_0 = ___0_a;
		int32_t L_1 = ___1_alen;
		int16_t* L_2 = ___2_b;
		int32_t L_3 = ___3_blen;
		int32_t L_4 = ___4_len;
		int32_t L_5 = ___5_imm8;
		int32_t L_6 = ___6_allOnes;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Sse4_2_ComputeStrCmpIntRes2_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mB3F9377B1A57D35D5514DEF77B3D9279A8622960(L_0, L_1, L_2, L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_7;
		int32_t L_8 = ___4_len;
		int32_t L_9 = ___5_imm8;
		int32_t L_10 = V_0;
		int32_t L_11;
		L_11 = Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123(L_8, L_9, L_10, NULL);
		V_1 = L_11;
		goto IL_001e;
	}

IL_001e:
	{
		int32_t L_12 = V_1;
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_cmpestri_emulation_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m8934296ABE51C76314606C484F93554C529BD77A_gshared (int8_t* ___0_a, int32_t ___1_alen, int8_t* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, int8_t ___7_allOnesT, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int8_t* L_0 = ___0_a;
		int32_t L_1 = ___1_alen;
		int8_t* L_2 = ___2_b;
		int32_t L_3 = ___3_blen;
		int32_t L_4 = ___4_len;
		int32_t L_5 = ___5_imm8;
		int32_t L_6 = ___6_allOnes;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Sse4_2_ComputeStrCmpIntRes2_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mA23FD3A0C3B4448E4721DA31DA7B4B93A636A3FD(L_0, L_1, L_2, L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_7;
		int32_t L_8 = ___4_len;
		int32_t L_9 = ___5_imm8;
		int32_t L_10 = V_0;
		int32_t L_11;
		L_11 = Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123(L_8, L_9, L_10, NULL);
		V_1 = L_11;
		goto IL_001e;
	}

IL_001e:
	{
		int32_t L_12 = V_1;
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_cmpestri_emulation_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m6A20624B95FD608D46A450719A26FC173F4C0780_gshared (uint16_t* ___0_a, int32_t ___1_alen, uint16_t* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, uint16_t ___7_allOnesT, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		uint16_t* L_0 = ___0_a;
		int32_t L_1 = ___1_alen;
		uint16_t* L_2 = ___2_b;
		int32_t L_3 = ___3_blen;
		int32_t L_4 = ___4_len;
		int32_t L_5 = ___5_imm8;
		int32_t L_6 = ___6_allOnes;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Sse4_2_ComputeStrCmpIntRes2_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m331D979D640CF9DF04C505875F9FB702E217B2AB(L_0, L_1, L_2, L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_7;
		int32_t L_8 = ___4_len;
		int32_t L_9 = ___5_imm8;
		int32_t L_10 = V_0;
		int32_t L_11;
		L_11 = Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123(L_8, L_9, L_10, NULL);
		V_1 = L_11;
		goto IL_001e;
	}

IL_001e:
	{
		int32_t L_12 = V_1;
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_cmpestri_emulation_TisIl2CppFullySharedGenericStruct_m92A1CC07F00E8D1EFF164A7AAA2CEF3A90BC8071_gshared (Il2CppFullySharedGenericStruct* ___0_a, int32_t ___1_alen, Il2CppFullySharedGenericStruct* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, Il2CppFullySharedGenericStruct ___7_allOnesT, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Il2CppFullySharedGenericStruct* L_0 = ___0_a;
		int32_t L_1 = ___1_alen;
		Il2CppFullySharedGenericStruct* L_2 = ___2_b;
		int32_t L_3 = ___3_blen;
		int32_t L_4 = ___4_len;
		int32_t L_5 = ___5_imm8;
		int32_t L_6 = ___6_allOnes;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = ((  int32_t (*) (Il2CppFullySharedGenericStruct*, int32_t, Il2CppFullySharedGenericStruct*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_1, L_2, L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_7;
		int32_t L_8 = ___4_len;
		int32_t L_9 = ___5_imm8;
		int32_t L_10 = V_0;
		int32_t L_11;
		L_11 = Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123(L_8, L_9, L_10, NULL);
		V_1 = L_11;
		goto IL_001e;
	}

IL_001e:
	{
		int32_t L_12 = V_1;
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_cmpestrm_emulation_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m179C750FBD381FF2897A9140CF7C2661939C7E71_gshared (uint8_t* ___0_a, int32_t ___1_alen, uint8_t* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, uint8_t ___7_allOnesT, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		uint8_t* L_0 = ___0_a;
		int32_t L_1 = ___1_alen;
		uint8_t* L_2 = ___2_b;
		int32_t L_3 = ___3_blen;
		int32_t L_4 = ___4_len;
		int32_t L_5 = ___5_imm8;
		int32_t L_6 = ___6_allOnes;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Sse4_2_ComputeStrCmpIntRes2_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5D9BE946098FA4C7FC8CC23DEE63A0877E8D6C8B(L_0, L_1, L_2, L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_7;
		int32_t L_8 = ___4_len;
		int32_t L_9 = ___5_imm8;
		uint8_t L_10 = ___7_allOnesT;
		int32_t L_11 = V_0;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_12;
		L_12 = Sse4_2_ComputeStrmOutput_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1CC4D51DF3F513318DCC288B066D0018EAF9C235(L_8, L_9, L_10, L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_1 = L_12;
		goto IL_0020;
	}

IL_0020:
	{
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_13 = V_1;
		return L_13;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_cmpestrm_emulation_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m9F860C6A223CB8744EB0C859B49E573C300C9F7B_gshared (int16_t* ___0_a, int32_t ___1_alen, int16_t* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, int16_t ___7_allOnesT, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int16_t* L_0 = ___0_a;
		int32_t L_1 = ___1_alen;
		int16_t* L_2 = ___2_b;
		int32_t L_3 = ___3_blen;
		int32_t L_4 = ___4_len;
		int32_t L_5 = ___5_imm8;
		int32_t L_6 = ___6_allOnes;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Sse4_2_ComputeStrCmpIntRes2_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mB3F9377B1A57D35D5514DEF77B3D9279A8622960(L_0, L_1, L_2, L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_7;
		int32_t L_8 = ___4_len;
		int32_t L_9 = ___5_imm8;
		int16_t L_10 = ___7_allOnesT;
		int32_t L_11 = V_0;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_12;
		L_12 = Sse4_2_ComputeStrmOutput_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE92FFA321425E5808CD20616DC308BA7B36886E8(L_8, L_9, L_10, L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_1 = L_12;
		goto IL_0020;
	}

IL_0020:
	{
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_13 = V_1;
		return L_13;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_cmpestrm_emulation_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mEC9DD6EE9C8D66BCFFABD5A19993FDA06444F20C_gshared (int8_t* ___0_a, int32_t ___1_alen, int8_t* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, int8_t ___7_allOnesT, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int8_t* L_0 = ___0_a;
		int32_t L_1 = ___1_alen;
		int8_t* L_2 = ___2_b;
		int32_t L_3 = ___3_blen;
		int32_t L_4 = ___4_len;
		int32_t L_5 = ___5_imm8;
		int32_t L_6 = ___6_allOnes;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Sse4_2_ComputeStrCmpIntRes2_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mA23FD3A0C3B4448E4721DA31DA7B4B93A636A3FD(L_0, L_1, L_2, L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_7;
		int32_t L_8 = ___4_len;
		int32_t L_9 = ___5_imm8;
		int8_t L_10 = ___7_allOnesT;
		int32_t L_11 = V_0;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_12;
		L_12 = Sse4_2_ComputeStrmOutput_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m5EFDDE5126FDB6BF9F9ED55B39751B517522C455(L_8, L_9, L_10, L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_1 = L_12;
		goto IL_0020;
	}

IL_0020:
	{
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_13 = V_1;
		return L_13;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_cmpestrm_emulation_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m8784D19FC1B4BAC48D00E8623FE1872EFEFD3496_gshared (uint16_t* ___0_a, int32_t ___1_alen, uint16_t* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, uint16_t ___7_allOnesT, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		uint16_t* L_0 = ___0_a;
		int32_t L_1 = ___1_alen;
		uint16_t* L_2 = ___2_b;
		int32_t L_3 = ___3_blen;
		int32_t L_4 = ___4_len;
		int32_t L_5 = ___5_imm8;
		int32_t L_6 = ___6_allOnes;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Sse4_2_ComputeStrCmpIntRes2_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m331D979D640CF9DF04C505875F9FB702E217B2AB(L_0, L_1, L_2, L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_7;
		int32_t L_8 = ___4_len;
		int32_t L_9 = ___5_imm8;
		uint16_t L_10 = ___7_allOnesT;
		int32_t L_11 = V_0;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_12;
		L_12 = Sse4_2_ComputeStrmOutput_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mD44F4B084A230ACD38B4FCF13923F8986AFF0AB1(L_8, L_9, L_10, L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_1 = L_12;
		goto IL_0020;
	}

IL_0020:
	{
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_13 = V_1;
		return L_13;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_cmpestrm_emulation_TisIl2CppFullySharedGenericStruct_m81548202F0BF107992042F154D34BCB0C7366524_gshared (Il2CppFullySharedGenericStruct* ___0_a, int32_t ___1_alen, Il2CppFullySharedGenericStruct* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, Il2CppFullySharedGenericStruct ___7_allOnesT, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_t42FC5CD236BFE90D4A941BFCE621367A7EA03BDC = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const Il2CppFullySharedGenericStruct L_10 = alloca(SizeOf_T_t42FC5CD236BFE90D4A941BFCE621367A7EA03BDC);
	int32_t V_0 = 0;
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Il2CppFullySharedGenericStruct* L_0 = ___0_a;
		int32_t L_1 = ___1_alen;
		Il2CppFullySharedGenericStruct* L_2 = ___2_b;
		int32_t L_3 = ___3_blen;
		int32_t L_4 = ___4_len;
		int32_t L_5 = ___5_imm8;
		int32_t L_6 = ___6_allOnes;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = ((  int32_t (*) (Il2CppFullySharedGenericStruct*, int32_t, Il2CppFullySharedGenericStruct*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_1, L_2, L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_7;
		int32_t L_8 = ___4_len;
		int32_t L_9 = ___5_imm8;
		il2cpp_codegen_memcpy(L_10, ___7_allOnesT, SizeOf_T_t42FC5CD236BFE90D4A941BFCE621367A7EA03BDC);
		int32_t L_11 = V_0;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_12;
		L_12 = InvokerFuncInvoker4< v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61, int32_t, int32_t, Il2CppFullySharedGenericStruct, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), NULL, L_8, L_9, L_10, L_11);
		V_1 = L_12;
		goto IL_0020;
	}

IL_0020:
	{
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_13 = V_1;
		return L_13;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_cmpistri_emulation_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m2E6D2FDB31E3BFDFC30BDD2389A5A50C0F3286BB_gshared (uint8_t* ___0_a, uint8_t* ___1_b, int32_t ___2_len, int32_t ___3_imm8, int32_t ___4_allOnes, uint8_t ___5_allOnesT, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		uint8_t* L_0 = ___0_a;
		uint8_t* L_1 = ___0_a;
		int32_t L_2 = ___2_len;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = Sse4_2_ComputeStringLength_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD30812062AA4852D166ABCDF3D79FDD1856F173A(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		uint8_t* L_4 = ___1_b;
		uint8_t* L_5 = ___1_b;
		int32_t L_6 = ___2_len;
		int32_t L_7;
		L_7 = Sse4_2_ComputeStringLength_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD30812062AA4852D166ABCDF3D79FDD1856F173A(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_8 = ___2_len;
		int32_t L_9 = ___3_imm8;
		int32_t L_10 = ___4_allOnes;
		int32_t L_11;
		L_11 = Sse4_2_ComputeStrCmpIntRes2_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5D9BE946098FA4C7FC8CC23DEE63A0877E8D6C8B(L_0, L_3, L_4, L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_11;
		int32_t L_12 = ___2_len;
		int32_t L_13 = ___3_imm8;
		int32_t L_14 = V_0;
		int32_t L_15;
		L_15 = Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123(L_12, L_13, L_14, NULL);
		V_1 = L_15;
		goto IL_0026;
	}

IL_0026:
	{
		int32_t L_16 = V_1;
		return L_16;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_cmpistri_emulation_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m4786E128EACDF39A8B13B696D31429E7C8D6EBF6_gshared (int16_t* ___0_a, int16_t* ___1_b, int32_t ___2_len, int32_t ___3_imm8, int32_t ___4_allOnes, int16_t ___5_allOnesT, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int16_t* L_0 = ___0_a;
		int16_t* L_1 = ___0_a;
		int32_t L_2 = ___2_len;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = Sse4_2_ComputeStringLength_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m3EBC75C6F39A7B1A5F62D88877C87C9F3B5617A3(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		int16_t* L_4 = ___1_b;
		int16_t* L_5 = ___1_b;
		int32_t L_6 = ___2_len;
		int32_t L_7;
		L_7 = Sse4_2_ComputeStringLength_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m3EBC75C6F39A7B1A5F62D88877C87C9F3B5617A3(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_8 = ___2_len;
		int32_t L_9 = ___3_imm8;
		int32_t L_10 = ___4_allOnes;
		int32_t L_11;
		L_11 = Sse4_2_ComputeStrCmpIntRes2_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mB3F9377B1A57D35D5514DEF77B3D9279A8622960(L_0, L_3, L_4, L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_11;
		int32_t L_12 = ___2_len;
		int32_t L_13 = ___3_imm8;
		int32_t L_14 = V_0;
		int32_t L_15;
		L_15 = Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123(L_12, L_13, L_14, NULL);
		V_1 = L_15;
		goto IL_0026;
	}

IL_0026:
	{
		int32_t L_16 = V_1;
		return L_16;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_cmpistri_emulation_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m12535D1A7206DB4C56C55B642E9F5F0B072810A3_gshared (int8_t* ___0_a, int8_t* ___1_b, int32_t ___2_len, int32_t ___3_imm8, int32_t ___4_allOnes, int8_t ___5_allOnesT, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int8_t* L_0 = ___0_a;
		int8_t* L_1 = ___0_a;
		int32_t L_2 = ___2_len;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = Sse4_2_ComputeStringLength_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m73215CC1A28F076B0D2472385756C7AF58CBA171(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		int8_t* L_4 = ___1_b;
		int8_t* L_5 = ___1_b;
		int32_t L_6 = ___2_len;
		int32_t L_7;
		L_7 = Sse4_2_ComputeStringLength_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m73215CC1A28F076B0D2472385756C7AF58CBA171(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_8 = ___2_len;
		int32_t L_9 = ___3_imm8;
		int32_t L_10 = ___4_allOnes;
		int32_t L_11;
		L_11 = Sse4_2_ComputeStrCmpIntRes2_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mA23FD3A0C3B4448E4721DA31DA7B4B93A636A3FD(L_0, L_3, L_4, L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_11;
		int32_t L_12 = ___2_len;
		int32_t L_13 = ___3_imm8;
		int32_t L_14 = V_0;
		int32_t L_15;
		L_15 = Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123(L_12, L_13, L_14, NULL);
		V_1 = L_15;
		goto IL_0026;
	}

IL_0026:
	{
		int32_t L_16 = V_1;
		return L_16;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_cmpistri_emulation_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m875686166B80F44B2A7B5837256932C7A6560E7D_gshared (uint16_t* ___0_a, uint16_t* ___1_b, int32_t ___2_len, int32_t ___3_imm8, int32_t ___4_allOnes, uint16_t ___5_allOnesT, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		uint16_t* L_0 = ___0_a;
		uint16_t* L_1 = ___0_a;
		int32_t L_2 = ___2_len;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = Sse4_2_ComputeStringLength_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m000E8D7B908376D69E48EACF3E6811C4DEE7A05D(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		uint16_t* L_4 = ___1_b;
		uint16_t* L_5 = ___1_b;
		int32_t L_6 = ___2_len;
		int32_t L_7;
		L_7 = Sse4_2_ComputeStringLength_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m000E8D7B908376D69E48EACF3E6811C4DEE7A05D(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_8 = ___2_len;
		int32_t L_9 = ___3_imm8;
		int32_t L_10 = ___4_allOnes;
		int32_t L_11;
		L_11 = Sse4_2_ComputeStrCmpIntRes2_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m331D979D640CF9DF04C505875F9FB702E217B2AB(L_0, L_3, L_4, L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_11;
		int32_t L_12 = ___2_len;
		int32_t L_13 = ___3_imm8;
		int32_t L_14 = V_0;
		int32_t L_15;
		L_15 = Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123(L_12, L_13, L_14, NULL);
		V_1 = L_15;
		goto IL_0026;
	}

IL_0026:
	{
		int32_t L_16 = V_1;
		return L_16;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_cmpistri_emulation_TisIl2CppFullySharedGenericStruct_m0723D40FF7E3DA850D8AF6948CB6C949F855583D_gshared (Il2CppFullySharedGenericStruct* ___0_a, Il2CppFullySharedGenericStruct* ___1_b, int32_t ___2_len, int32_t ___3_imm8, int32_t ___4_allOnes, Il2CppFullySharedGenericStruct ___5_allOnesT, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Il2CppFullySharedGenericStruct* L_0 = ___0_a;
		Il2CppFullySharedGenericStruct* L_1 = ___0_a;
		int32_t L_2 = ___2_len;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = ((  int32_t (*) (Il2CppFullySharedGenericStruct*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		Il2CppFullySharedGenericStruct* L_4 = ___1_b;
		Il2CppFullySharedGenericStruct* L_5 = ___1_b;
		int32_t L_6 = ___2_len;
		int32_t L_7;
		L_7 = ((  int32_t (*) (Il2CppFullySharedGenericStruct*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_8 = ___2_len;
		int32_t L_9 = ___3_imm8;
		int32_t L_10 = ___4_allOnes;
		int32_t L_11;
		L_11 = ((  int32_t (*) (Il2CppFullySharedGenericStruct*, int32_t, Il2CppFullySharedGenericStruct*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_0, L_3, L_4, L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_11;
		int32_t L_12 = ___2_len;
		int32_t L_13 = ___3_imm8;
		int32_t L_14 = V_0;
		int32_t L_15;
		L_15 = Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123(L_12, L_13, L_14, NULL);
		V_1 = L_15;
		goto IL_0026;
	}

IL_0026:
	{
		int32_t L_16 = V_1;
		return L_16;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_cmpistrm_emulation_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1E1CCF579BEBAD09719E3B27BCAB1A607CED8C89_gshared (uint8_t* ___0_a, uint8_t* ___1_b, int32_t ___2_len, int32_t ___3_imm8, int32_t ___4_allOnes, uint8_t ___5_allOnesT, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		uint8_t* L_0 = ___0_a;
		uint8_t* L_1 = ___0_a;
		int32_t L_2 = ___2_len;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = Sse4_2_ComputeStringLength_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD30812062AA4852D166ABCDF3D79FDD1856F173A(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		uint8_t* L_4 = ___1_b;
		uint8_t* L_5 = ___1_b;
		int32_t L_6 = ___2_len;
		int32_t L_7;
		L_7 = Sse4_2_ComputeStringLength_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD30812062AA4852D166ABCDF3D79FDD1856F173A(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_8 = ___2_len;
		int32_t L_9 = ___3_imm8;
		int32_t L_10 = ___4_allOnes;
		int32_t L_11;
		L_11 = Sse4_2_ComputeStrCmpIntRes2_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5D9BE946098FA4C7FC8CC23DEE63A0877E8D6C8B(L_0, L_3, L_4, L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_11;
		int32_t L_12 = ___2_len;
		int32_t L_13 = ___3_imm8;
		uint8_t L_14 = ___5_allOnesT;
		int32_t L_15 = V_0;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_16;
		L_16 = Sse4_2_ComputeStrmOutput_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1CC4D51DF3F513318DCC288B066D0018EAF9C235(L_12, L_13, L_14, L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		V_1 = L_16;
		goto IL_0028;
	}

IL_0028:
	{
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_17 = V_1;
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_cmpistrm_emulation_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m31A82E20D7EB7CDFCDF7EEA3E75BA4F38F8501D4_gshared (int16_t* ___0_a, int16_t* ___1_b, int32_t ___2_len, int32_t ___3_imm8, int32_t ___4_allOnes, int16_t ___5_allOnesT, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int16_t* L_0 = ___0_a;
		int16_t* L_1 = ___0_a;
		int32_t L_2 = ___2_len;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = Sse4_2_ComputeStringLength_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m3EBC75C6F39A7B1A5F62D88877C87C9F3B5617A3(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		int16_t* L_4 = ___1_b;
		int16_t* L_5 = ___1_b;
		int32_t L_6 = ___2_len;
		int32_t L_7;
		L_7 = Sse4_2_ComputeStringLength_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m3EBC75C6F39A7B1A5F62D88877C87C9F3B5617A3(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_8 = ___2_len;
		int32_t L_9 = ___3_imm8;
		int32_t L_10 = ___4_allOnes;
		int32_t L_11;
		L_11 = Sse4_2_ComputeStrCmpIntRes2_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mB3F9377B1A57D35D5514DEF77B3D9279A8622960(L_0, L_3, L_4, L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_11;
		int32_t L_12 = ___2_len;
		int32_t L_13 = ___3_imm8;
		int16_t L_14 = ___5_allOnesT;
		int32_t L_15 = V_0;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_16;
		L_16 = Sse4_2_ComputeStrmOutput_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE92FFA321425E5808CD20616DC308BA7B36886E8(L_12, L_13, L_14, L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		V_1 = L_16;
		goto IL_0028;
	}

IL_0028:
	{
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_17 = V_1;
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_cmpistrm_emulation_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mEA9E446133608807E4CF1C806055621BECFD93CF_gshared (int8_t* ___0_a, int8_t* ___1_b, int32_t ___2_len, int32_t ___3_imm8, int32_t ___4_allOnes, int8_t ___5_allOnesT, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int8_t* L_0 = ___0_a;
		int8_t* L_1 = ___0_a;
		int32_t L_2 = ___2_len;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = Sse4_2_ComputeStringLength_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m73215CC1A28F076B0D2472385756C7AF58CBA171(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		int8_t* L_4 = ___1_b;
		int8_t* L_5 = ___1_b;
		int32_t L_6 = ___2_len;
		int32_t L_7;
		L_7 = Sse4_2_ComputeStringLength_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m73215CC1A28F076B0D2472385756C7AF58CBA171(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_8 = ___2_len;
		int32_t L_9 = ___3_imm8;
		int32_t L_10 = ___4_allOnes;
		int32_t L_11;
		L_11 = Sse4_2_ComputeStrCmpIntRes2_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mA23FD3A0C3B4448E4721DA31DA7B4B93A636A3FD(L_0, L_3, L_4, L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_11;
		int32_t L_12 = ___2_len;
		int32_t L_13 = ___3_imm8;
		int8_t L_14 = ___5_allOnesT;
		int32_t L_15 = V_0;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_16;
		L_16 = Sse4_2_ComputeStrmOutput_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m5EFDDE5126FDB6BF9F9ED55B39751B517522C455(L_12, L_13, L_14, L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		V_1 = L_16;
		goto IL_0028;
	}

IL_0028:
	{
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_17 = V_1;
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_cmpistrm_emulation_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m084B5A607615E44BC1926F6FF9CF11754A074B06_gshared (uint16_t* ___0_a, uint16_t* ___1_b, int32_t ___2_len, int32_t ___3_imm8, int32_t ___4_allOnes, uint16_t ___5_allOnesT, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		uint16_t* L_0 = ___0_a;
		uint16_t* L_1 = ___0_a;
		int32_t L_2 = ___2_len;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = Sse4_2_ComputeStringLength_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m000E8D7B908376D69E48EACF3E6811C4DEE7A05D(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		uint16_t* L_4 = ___1_b;
		uint16_t* L_5 = ___1_b;
		int32_t L_6 = ___2_len;
		int32_t L_7;
		L_7 = Sse4_2_ComputeStringLength_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m000E8D7B908376D69E48EACF3E6811C4DEE7A05D(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_8 = ___2_len;
		int32_t L_9 = ___3_imm8;
		int32_t L_10 = ___4_allOnes;
		int32_t L_11;
		L_11 = Sse4_2_ComputeStrCmpIntRes2_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m331D979D640CF9DF04C505875F9FB702E217B2AB(L_0, L_3, L_4, L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_11;
		int32_t L_12 = ___2_len;
		int32_t L_13 = ___3_imm8;
		uint16_t L_14 = ___5_allOnesT;
		int32_t L_15 = V_0;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_16;
		L_16 = Sse4_2_ComputeStrmOutput_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mD44F4B084A230ACD38B4FCF13923F8986AFF0AB1(L_12, L_13, L_14, L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		V_1 = L_16;
		goto IL_0028;
	}

IL_0028:
	{
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_17 = V_1;
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_cmpistrm_emulation_TisIl2CppFullySharedGenericStruct_m16F77547DC1C2BE0F6959A4B639E1210EF674C66_gshared (Il2CppFullySharedGenericStruct* ___0_a, Il2CppFullySharedGenericStruct* ___1_b, int32_t ___2_len, int32_t ___3_imm8, int32_t ___4_allOnes, Il2CppFullySharedGenericStruct ___5_allOnesT, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_tC319464E6946647CC7BFD95709030A0B11A82E13 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
	const Il2CppFullySharedGenericStruct L_14 = alloca(SizeOf_T_tC319464E6946647CC7BFD95709030A0B11A82E13);
	int32_t V_0 = 0;
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Il2CppFullySharedGenericStruct* L_0 = ___0_a;
		Il2CppFullySharedGenericStruct* L_1 = ___0_a;
		int32_t L_2 = ___2_len;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = ((  int32_t (*) (Il2CppFullySharedGenericStruct*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		Il2CppFullySharedGenericStruct* L_4 = ___1_b;
		Il2CppFullySharedGenericStruct* L_5 = ___1_b;
		int32_t L_6 = ___2_len;
		int32_t L_7;
		L_7 = ((  int32_t (*) (Il2CppFullySharedGenericStruct*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_8 = ___2_len;
		int32_t L_9 = ___3_imm8;
		int32_t L_10 = ___4_allOnes;
		int32_t L_11;
		L_11 = ((  int32_t (*) (Il2CppFullySharedGenericStruct*, int32_t, Il2CppFullySharedGenericStruct*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_0, L_3, L_4, L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_11;
		int32_t L_12 = ___2_len;
		int32_t L_13 = ___3_imm8;
		il2cpp_codegen_memcpy(L_14, ___5_allOnesT, SizeOf_T_tC319464E6946647CC7BFD95709030A0B11A82E13);
		int32_t L_15 = V_0;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_16;
		L_16 = InvokerFuncInvoker4< v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61, int32_t, int32_t, Il2CppFullySharedGenericStruct, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), NULL, L_12, L_13, L_14, L_15);
		V_1 = L_16;
		goto IL_0028;
	}

IL_0028:
	{
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_17 = V_1;
		return L_17;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_3_Invoke_m2AED59BE1B0645C0DB5DAE117842A1C0AD4BDEBB_gshared_inline (Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* __this, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 ___0_arg1, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 ___1_arg2, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg1, ___1_arg2, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_3_Invoke_mE6CD106F59B0ADD2DF9C211DC4CF4088F5A1A4BB_gshared_inline (Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_arg1, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___1_arg2, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg1, ___1_arg2, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DynamicArray_1_get_size_m1B00C20A8CC4D62269585D16A58425D3F258836F_gshared_inline (DynamicArray_1_t7C64F5A74B7BA6F6B3589A766CADE3F59C6C7BCA* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CsizeU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* EqualityComparer_1_get_Default_m41DB4C0E0A508A8326E903331DC63D410B7AB9C4_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* V_0 = NULL;
	{
		EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* L_0 = ((EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mEBC7BD29A8FD796A4DAA1DF4428B95D1BA4FB377(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* EqualityComparer_1_get_Default_m7D273CC532DC2164C9C86D28C639FDEA38173C88_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* V_0 = NULL;
	{
		EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* L_0 = ((EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m22AF3135664449980749E1EC32EB92DB49219F9B(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* EqualityComparer_1_get_Default_m7F71AAC0046A3CB8C4CEB06A5A52A1269AF7023D_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* V_0 = NULL;
	{
		EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* L_0 = ((EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mD5EE323D1C48F0C09CBB944FA81707B8FEE2DB6D(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* EqualityComparer_1_get_Default_m80EE5C179E01BB38904781592AC72F8137541D7E_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* V_0 = NULL;
	{
		EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* L_0 = ((EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m5F906E9B13BCCCDF51EF0852BD9E5E0065D185F8(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* L_4 = V_0;
		return L_4;
	}
}
