#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// System.Action`1<System.Char>
struct Action_1_tCE61A5061D6E81AA0796E994EE9E76AC99E8D172;
// System.Action`1<UnityEngine.InputSystem.LowLevel.IMECompositionString>
struct Action_1_tB90C7D59C2F8D8E107B080035B192647CD1F7C97;
// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>
struct Action_1_tDDA6AA680F45FDBD1B20FE18356428ECF6F1A571;
// UnityEngine.InputSystem.InputProcessor`1<System.Single>
struct InputProcessor_1_t4690DBFD42BF24BF19EA9BAC1D3562C5A36409C3;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Action`1<System.Char>[]
struct Action_1U5BU5D_t3D914437066BF4C080433238136C05E1856588AA;
// System.Action`1<UnityEngine.InputSystem.LowLevel.IMECompositionString>[]
struct Action_1U5BU5D_tBC80F2396D61DA06AF3624D02E4B929F99831F95;
// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>[]
struct Action_1U5BU5D_t96097AB961A46507BADED9029936C3155074F8B6;
// UnityEngine.InputSystem.InputProcessor`1<System.Single>[]
struct InputProcessor_1U5BU5D_t6B73785AF65E26634F5AC5885F4322EFB474C00E;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.ContactPoint2D[]
struct ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// UnityEngine.InputSystem.InputBinding[]
struct InputBindingU5BU5D_t06E5F24EB2EDF592EA0C6D7AAFB3A228F6EC67E1;
// UnityEngine.InputSystem.InputControl[]
struct InputControlU5BU5D_tE51E95FA96826139CF9D99A021136552F802FA71;
// UnityEngine.InputSystem.Utilities.InternedString[]
struct InternedStringU5BU5D_tD96CA717926C553408C7A718673AC12F4F787095;
// UnityEngine.InputSystem.Controls.KeyControl[]
struct KeyControlU5BU5D_tD4C5C57749BE8400EC310E4B91FBBF94ADA76FE9;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// System.UInt16[]
struct UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67;
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.InputSystem.InputDevice/ControlBitRangeNode[]
struct ControlBitRangeNodeU5BU5D_tA24B796B2F142740E56C0BBBF3F9767EF23BCB11;
// System.Int32[0...,0...]
struct Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17;
// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149;
// UnityEngine.InputSystem.Controls.AnyKeyControl
struct AnyKeyControl_tAAF6B8BEDCE1B89176B8FA5B025A90BD742841FC;
// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE;
// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B;
// Block_move
struct Block_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5;
// UnityEngine.InputSystem.Controls.ButtonControl
struct ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E;
// CameraManager
struct CameraManager_t8E36175FB066C9E1F863A5D7B3A300EAC805D01A;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// ChangeScene
struct ChangeScene_t911C7BF5D7321A9752D54B4F7A49C0BC816EA919;
// UnityEngine.Collision2D
struct Collision2D_t95B5FD331CE95276D3658140844190B485D26564;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// GameManager
struct GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// unityroom.Api.IUnityroomApiClient
struct IUnityroomApiClient_t741542784ED0213DC43515B5F29073EDBB61E88F;
// UnityEngine.InputSystem.InputAction
struct InputAction_t4D95EC15C17EC145072A42B6BCCE3A7317DD96BB;
// UnityEngine.InputSystem.InputActionMap
struct InputActionMap_t9EDA2DE8976ED1BA5C290D93E529C444F9684ECA;
// UnityEngine.InputSystem.InputDevice
struct InputDevice_t956021BC2B6431A5A7A44954131751C3C3EEC06B;
// UnityEngine.InputSystem.Controls.KeyControl
struct KeyControl_t5784A2F7F3D468FD6D4171430A5592B671FA2635;
// UnityEngine.InputSystem.Keyboard
struct Keyboard_tCC48D6E5BEEA84E5C5919A4E4B8BDFBE66217D93;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF;
// StarLight
struct StarLight_t0CB7FA2711432252DEC6E548400971F8164120BB;
// Star_bomb
struct Star_bomb_t866D319BD1E902EA98A222CDB9B26439ABA49678;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// combo
struct combo_tBF8003D506F422421915A0CAE1C24389C5AE8477;
// forPlay
struct forPlay_t7F59BE4A54B06567987F750BF6AE50CF29A1055A;
// intro
struct intro_t8B741C2D68BF5F8F9A22ABFAF61DA56B4151FC1A;
// next_block
struct next_block_t85C2E295073D52AC49B2C9008901E97B4DDCF7D4;
// title
struct title_tC0AFE2B8DF822EA7143C02ECB6B0FD90CB8A0006;
// titleStar
struct titleStar_tD53883A1748E72FD1A3B9C973F074EC29907F991;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;

IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUnityroomApiClient_t741542784ED0213DC43515B5F29073EDBB61E88F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Keyboard_tCC48D6E5BEEA84E5C5919A4E4B8BDFBE66217D93_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____36356283CA439E1391C7224595D11634489404708B446EF7B8E6436CA09961D3_0_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0B179B2A67B3A72A43A43025FA51445085A5AE3D;
IL2CPP_EXTERN_C String_t* _stringLiteral1378272E41AB5F3FA09DAF070DDFE3B51B2AB455;
IL2CPP_EXTERN_C String_t* _stringLiteral1D24882A0186D0F1A081365C7ACD4AD63ED05688;
IL2CPP_EXTERN_C String_t* _stringLiteral22A266FAE0C8D5E1A925B8DC3B29D33CE6480146;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral2C0F8F472A971C418AC2F2C15FA3E96E1287C3E8;
IL2CPP_EXTERN_C String_t* _stringLiteral36037DB3104492030FEF31D2C0969F8E3C0432D0;
IL2CPP_EXTERN_C String_t* _stringLiteral450536C42286689B7FE268C6DBCB72DC2ED8A8A5;
IL2CPP_EXTERN_C String_t* _stringLiteral4C46385E4FECEB9D93D2956D6C7EAD68B2E6245C;
IL2CPP_EXTERN_C String_t* _stringLiteral4F2993C30C434C5F8BA708B372A8D4AC4A165185;
IL2CPP_EXTERN_C String_t* _stringLiteral5B08F97DDB2C706B2537A1F526B402FC6DB4C5BA;
IL2CPP_EXTERN_C String_t* _stringLiteral60793966D57BD4CC387295BE790DD26F67EAE872;
IL2CPP_EXTERN_C String_t* _stringLiteral68A60640FA7CD3B5E020A5CF25D5D75F03DE63CC;
IL2CPP_EXTERN_C String_t* _stringLiteral696B0E3A55001748569DA84DC32ABBC0E6B84431;
IL2CPP_EXTERN_C String_t* _stringLiteral6E8112DE272D3B7579DD734F255BA00B3904010E;
IL2CPP_EXTERN_C String_t* _stringLiteral86D9C355E076DAE383D4341944F9F4B207C93F9C;
IL2CPP_EXTERN_C String_t* _stringLiteral8761507A3A90E88698691AE0DE7BCAD13796FA1B;
IL2CPP_EXTERN_C String_t* _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D;
IL2CPP_EXTERN_C String_t* _stringLiteral87E8E3954318E85C1296B912D7D1493733AF8CD7;
IL2CPP_EXTERN_C String_t* _stringLiteral91DAC1B208C9247B871F7A45F7E0138249BF2A99;
IL2CPP_EXTERN_C String_t* _stringLiteral9A3A2897809DC4125DBDB735F00F98DF10ED9C6E;
IL2CPP_EXTERN_C String_t* _stringLiteralA71B4A34498BB6320644404002DA18167E25A55B;
IL2CPP_EXTERN_C String_t* _stringLiteralA8AE615AAF2B82A5AC2B851687ED76CDCDEAD455;
IL2CPP_EXTERN_C String_t* _stringLiteralAC9851B40BB7AD01E87EBE614CFC0A1B63FC6344;
IL2CPP_EXTERN_C String_t* _stringLiteralBD69CEC4305083D63777DC1C48363D91FD0C9ACF;
IL2CPP_EXTERN_C String_t* _stringLiteralC7B4D926EF9532A71B25AEC040A33D52C926425F;
IL2CPP_EXTERN_C String_t* _stringLiteralCC1EFA5D55DE845A18194F44D5FC55CAAA58C610;
IL2CPP_EXTERN_C String_t* _stringLiteralCE212A7CEBA54F677AB41E097A7D0F1A0FFE9232;
IL2CPP_EXTERN_C String_t* _stringLiteralCEBB6727AFF23A14DABBEDD1099563548A327C1F;
IL2CPP_EXTERN_C String_t* _stringLiteralD0061357CD6B7264C0F47557BD21C02E32AD4845;
IL2CPP_EXTERN_C String_t* _stringLiteralD19F55E089631C894BD155632A7443DE7D709D97;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE250C5EC523541AB00B5D2D3B20344DA1579B6D1;
IL2CPP_EXTERN_C String_t* _stringLiteralEAEBCBF1A3F6ADCD07AA24ED9A0104F4440564DF;
IL2CPP_EXTERN_C String_t* _stringLiteralED11D0CB05359AAA23A69AD543CC5790A0E063D9;
IL2CPP_EXTERN_C String_t* _stringLiteralF39E1B0AD6BA1EFA6D2AF118D5A9D7A64A06A74D;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisBlock_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5_m8353861C53A9C5907C36DEAD660B13405A342430_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisBlock_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5_mCB23DDD42F5DBA9CEF807C25FF71D2B71E0A6499_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputAction_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m592669BB88E7CCE2434F99A3EAF6E9CD36BC45DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m7DF03CE7132B7D4C6AA2AEEA9BD1A8755AE12432_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3D9494354F266A105B5A9DE8603B57850EAD902F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mE8DB64A28C8709FB890A9770C8F35CD32CD04C75_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_Load_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m62550836383D7EFD35F4AC65927D954DB87BAE90_RuntimeMethod_var;
struct ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 ;

struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____items_1)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get__items_1() const { return ____items_1; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
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

struct Il2CppArrayBounds;

// System.Array


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

// System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>
struct Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14, ___list_0)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_list_0() const { return ___list_0; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14, ___current_3)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_current_3() const { return ___current_3; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<System.Char>>
struct InlinedArray_1_tC596929EC05465CB5EC05A158EBB0AE35106759F 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Action_1_tCE61A5061D6E81AA0796E994EE9E76AC99E8D172 * ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Action_1U5BU5D_t3D914437066BF4C080433238136C05E1856588AA* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_tC596929EC05465CB5EC05A158EBB0AE35106759F, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_tC596929EC05465CB5EC05A158EBB0AE35106759F, ___firstValue_1)); }
	inline Action_1_tCE61A5061D6E81AA0796E994EE9E76AC99E8D172 * get_firstValue_1() const { return ___firstValue_1; }
	inline Action_1_tCE61A5061D6E81AA0796E994EE9E76AC99E8D172 ** get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(Action_1_tCE61A5061D6E81AA0796E994EE9E76AC99E8D172 * value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_tC596929EC05465CB5EC05A158EBB0AE35106759F, ___additionalValues_2)); }
	inline Action_1U5BU5D_t3D914437066BF4C080433238136C05E1856588AA* get_additionalValues_2() const { return ___additionalValues_2; }
	inline Action_1U5BU5D_t3D914437066BF4C080433238136C05E1856588AA** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(Action_1U5BU5D_t3D914437066BF4C080433238136C05E1856588AA* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
	}
};


// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.LowLevel.IMECompositionString>>
struct InlinedArray_1_t6134DD37211EC4443C8BF19C36FF6F289C4141F5 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Action_1_tB90C7D59C2F8D8E107B080035B192647CD1F7C97 * ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Action_1U5BU5D_tBC80F2396D61DA06AF3624D02E4B929F99831F95* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_t6134DD37211EC4443C8BF19C36FF6F289C4141F5, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_t6134DD37211EC4443C8BF19C36FF6F289C4141F5, ___firstValue_1)); }
	inline Action_1_tB90C7D59C2F8D8E107B080035B192647CD1F7C97 * get_firstValue_1() const { return ___firstValue_1; }
	inline Action_1_tB90C7D59C2F8D8E107B080035B192647CD1F7C97 ** get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(Action_1_tB90C7D59C2F8D8E107B080035B192647CD1F7C97 * value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_t6134DD37211EC4443C8BF19C36FF6F289C4141F5, ___additionalValues_2)); }
	inline Action_1U5BU5D_tBC80F2396D61DA06AF3624D02E4B929F99831F95* get_additionalValues_2() const { return ___additionalValues_2; }
	inline Action_1U5BU5D_tBC80F2396D61DA06AF3624D02E4B929F99831F95** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(Action_1U5BU5D_tBC80F2396D61DA06AF3624D02E4B929F99831F95* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
	}
};


// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>
struct InlinedArray_1_t6B5B0BCE42A308992EDF0E77B6A1B11554A37F7B 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Action_1_tDDA6AA680F45FDBD1B20FE18356428ECF6F1A571 * ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Action_1U5BU5D_t96097AB961A46507BADED9029936C3155074F8B6* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_t6B5B0BCE42A308992EDF0E77B6A1B11554A37F7B, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_t6B5B0BCE42A308992EDF0E77B6A1B11554A37F7B, ___firstValue_1)); }
	inline Action_1_tDDA6AA680F45FDBD1B20FE18356428ECF6F1A571 * get_firstValue_1() const { return ___firstValue_1; }
	inline Action_1_tDDA6AA680F45FDBD1B20FE18356428ECF6F1A571 ** get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(Action_1_tDDA6AA680F45FDBD1B20FE18356428ECF6F1A571 * value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_t6B5B0BCE42A308992EDF0E77B6A1B11554A37F7B, ___additionalValues_2)); }
	inline Action_1U5BU5D_t96097AB961A46507BADED9029936C3155074F8B6* get_additionalValues_2() const { return ___additionalValues_2; }
	inline Action_1U5BU5D_t96097AB961A46507BADED9029936C3155074F8B6** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(Action_1U5BU5D_t96097AB961A46507BADED9029936C3155074F8B6* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
	}
};


// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<System.Single>>
struct InlinedArray_1_t4F3144D93F19BFC891F1722ADCE4CCE54C1E92A1 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	InputProcessor_1_t4690DBFD42BF24BF19EA9BAC1D3562C5A36409C3 * ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	InputProcessor_1U5BU5D_t6B73785AF65E26634F5AC5885F4322EFB474C00E* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_t4F3144D93F19BFC891F1722ADCE4CCE54C1E92A1, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_t4F3144D93F19BFC891F1722ADCE4CCE54C1E92A1, ___firstValue_1)); }
	inline InputProcessor_1_t4690DBFD42BF24BF19EA9BAC1D3562C5A36409C3 * get_firstValue_1() const { return ___firstValue_1; }
	inline InputProcessor_1_t4690DBFD42BF24BF19EA9BAC1D3562C5A36409C3 ** get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(InputProcessor_1_t4690DBFD42BF24BF19EA9BAC1D3562C5A36409C3 * value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_t4F3144D93F19BFC891F1722ADCE4CCE54C1E92A1, ___additionalValues_2)); }
	inline InputProcessor_1U5BU5D_t6B73785AF65E26634F5AC5885F4322EFB474C00E* get_additionalValues_2() const { return ___additionalValues_2; }
	inline InputProcessor_1U5BU5D_t6B73785AF65E26634F5AC5885F4322EFB474C00E** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(InputProcessor_1U5BU5D_t6B73785AF65E26634F5AC5885F4322EFB474C00E* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
	}
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


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
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
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// UnityEngine.InputSystem.Utilities.FourCC
struct FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.FourCC::m_Code
	int32_t ___m_Code_0;

public:
	inline static int32_t get_offset_of_m_Code_0() { return static_cast<int32_t>(offsetof(FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1, ___m_Code_0)); }
	inline int32_t get_m_Code_0() const { return ___m_Code_0; }
	inline int32_t* get_address_of_m_Code_0() { return &___m_Code_0; }
	inline void set_m_Code_0(int32_t value)
	{
		___m_Code_0 = value;
	}
};


// UnityEngine.InputSystem.Layouts.InputDeviceDescription
struct InputDeviceDescription_t16E2C7E9B9CE5B7ADB7D70F3C47932EF59D0D980 
{
public:
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_InterfaceName
	String_t* ___m_InterfaceName_0;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_DeviceClass
	String_t* ___m_DeviceClass_1;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Manufacturer
	String_t* ___m_Manufacturer_2;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Product
	String_t* ___m_Product_3;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Serial
	String_t* ___m_Serial_4;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Version
	String_t* ___m_Version_5;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Capabilities
	String_t* ___m_Capabilities_6;

public:
	inline static int32_t get_offset_of_m_InterfaceName_0() { return static_cast<int32_t>(offsetof(InputDeviceDescription_t16E2C7E9B9CE5B7ADB7D70F3C47932EF59D0D980, ___m_InterfaceName_0)); }
	inline String_t* get_m_InterfaceName_0() const { return ___m_InterfaceName_0; }
	inline String_t** get_address_of_m_InterfaceName_0() { return &___m_InterfaceName_0; }
	inline void set_m_InterfaceName_0(String_t* value)
	{
		___m_InterfaceName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InterfaceName_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_DeviceClass_1() { return static_cast<int32_t>(offsetof(InputDeviceDescription_t16E2C7E9B9CE5B7ADB7D70F3C47932EF59D0D980, ___m_DeviceClass_1)); }
	inline String_t* get_m_DeviceClass_1() const { return ___m_DeviceClass_1; }
	inline String_t** get_address_of_m_DeviceClass_1() { return &___m_DeviceClass_1; }
	inline void set_m_DeviceClass_1(String_t* value)
	{
		___m_DeviceClass_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DeviceClass_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Manufacturer_2() { return static_cast<int32_t>(offsetof(InputDeviceDescription_t16E2C7E9B9CE5B7ADB7D70F3C47932EF59D0D980, ___m_Manufacturer_2)); }
	inline String_t* get_m_Manufacturer_2() const { return ___m_Manufacturer_2; }
	inline String_t** get_address_of_m_Manufacturer_2() { return &___m_Manufacturer_2; }
	inline void set_m_Manufacturer_2(String_t* value)
	{
		___m_Manufacturer_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Manufacturer_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Product_3() { return static_cast<int32_t>(offsetof(InputDeviceDescription_t16E2C7E9B9CE5B7ADB7D70F3C47932EF59D0D980, ___m_Product_3)); }
	inline String_t* get_m_Product_3() const { return ___m_Product_3; }
	inline String_t** get_address_of_m_Product_3() { return &___m_Product_3; }
	inline void set_m_Product_3(String_t* value)
	{
		___m_Product_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Product_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Serial_4() { return static_cast<int32_t>(offsetof(InputDeviceDescription_t16E2C7E9B9CE5B7ADB7D70F3C47932EF59D0D980, ___m_Serial_4)); }
	inline String_t* get_m_Serial_4() const { return ___m_Serial_4; }
	inline String_t** get_address_of_m_Serial_4() { return &___m_Serial_4; }
	inline void set_m_Serial_4(String_t* value)
	{
		___m_Serial_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Serial_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Version_5() { return static_cast<int32_t>(offsetof(InputDeviceDescription_t16E2C7E9B9CE5B7ADB7D70F3C47932EF59D0D980, ___m_Version_5)); }
	inline String_t* get_m_Version_5() const { return ___m_Version_5; }
	inline String_t** get_address_of_m_Version_5() { return &___m_Version_5; }
	inline void set_m_Version_5(String_t* value)
	{
		___m_Version_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Version_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_Capabilities_6() { return static_cast<int32_t>(offsetof(InputDeviceDescription_t16E2C7E9B9CE5B7ADB7D70F3C47932EF59D0D980, ___m_Capabilities_6)); }
	inline String_t* get_m_Capabilities_6() const { return ___m_Capabilities_6; }
	inline String_t** get_address_of_m_Capabilities_6() { return &___m_Capabilities_6; }
	inline void set_m_Capabilities_6(String_t* value)
	{
		___m_Capabilities_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Capabilities_6), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Layouts.InputDeviceDescription
struct InputDeviceDescription_t16E2C7E9B9CE5B7ADB7D70F3C47932EF59D0D980_marshaled_pinvoke
{
	char* ___m_InterfaceName_0;
	char* ___m_DeviceClass_1;
	char* ___m_Manufacturer_2;
	char* ___m_Product_3;
	char* ___m_Serial_4;
	char* ___m_Version_5;
	char* ___m_Capabilities_6;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Layouts.InputDeviceDescription
struct InputDeviceDescription_t16E2C7E9B9CE5B7ADB7D70F3C47932EF59D0D980_marshaled_com
{
	Il2CppChar* ___m_InterfaceName_0;
	Il2CppChar* ___m_DeviceClass_1;
	Il2CppChar* ___m_Manufacturer_2;
	Il2CppChar* ___m_Product_3;
	Il2CppChar* ___m_Serial_4;
	Il2CppChar* ___m_Version_5;
	Il2CppChar* ___m_Capabilities_6;
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


// UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_t8ADDA30C880F048FFD8502FE048B011FACBA8FFA 
{
public:
	// System.String UnityEngine.InputSystem.Utilities.InternedString::m_StringOriginalCase
	String_t* ___m_StringOriginalCase_0;
	// System.String UnityEngine.InputSystem.Utilities.InternedString::m_StringLowerCase
	String_t* ___m_StringLowerCase_1;

public:
	inline static int32_t get_offset_of_m_StringOriginalCase_0() { return static_cast<int32_t>(offsetof(InternedString_t8ADDA30C880F048FFD8502FE048B011FACBA8FFA, ___m_StringOriginalCase_0)); }
	inline String_t* get_m_StringOriginalCase_0() const { return ___m_StringOriginalCase_0; }
	inline String_t** get_address_of_m_StringOriginalCase_0() { return &___m_StringOriginalCase_0; }
	inline void set_m_StringOriginalCase_0(String_t* value)
	{
		___m_StringOriginalCase_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StringOriginalCase_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_StringLowerCase_1() { return static_cast<int32_t>(offsetof(InternedString_t8ADDA30C880F048FFD8502FE048B011FACBA8FFA, ___m_StringLowerCase_1)); }
	inline String_t* get_m_StringLowerCase_1() const { return ___m_StringLowerCase_1; }
	inline String_t** get_address_of_m_StringLowerCase_1() { return &___m_StringLowerCase_1; }
	inline void set_m_StringLowerCase_1(String_t* value)
	{
		___m_StringLowerCase_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StringLowerCase_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_t8ADDA30C880F048FFD8502FE048B011FACBA8FFA_marshaled_pinvoke
{
	char* ___m_StringOriginalCase_0;
	char* ___m_StringLowerCase_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_t8ADDA30C880F048FFD8502FE048B011FACBA8FFA_marshaled_com
{
	Il2CppChar* ___m_StringOriginalCase_0;
	Il2CppChar* ___m_StringLowerCase_1;
};

// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
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


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
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


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=352
struct __StaticArrayInitTypeSizeU3D352_t3FE2F12E8E2919A8AB5AF2FD904BCA42A56F6519 
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
		uint8_t __StaticArrayInitTypeSizeU3D352_t3FE2F12E8E2919A8AB5AF2FD904BCA42A56F6519__padding[352];
	};

public:
};


// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>
struct CallbackArray_1_t55A9D53CFE2EB9806A9EB9E4E20F1CEBECF5E6DC 
{
public:
	// System.Boolean UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CannotMutateCallbacksArray
	bool ___m_CannotMutateCallbacksArray_0;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_Callbacks
	InlinedArray_1_t6B5B0BCE42A308992EDF0E77B6A1B11554A37F7B  ___m_Callbacks_1;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToAdd
	InlinedArray_1_t6B5B0BCE42A308992EDF0E77B6A1B11554A37F7B  ___m_CallbacksToAdd_2;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToRemove
	InlinedArray_1_t6B5B0BCE42A308992EDF0E77B6A1B11554A37F7B  ___m_CallbacksToRemove_3;

public:
	inline static int32_t get_offset_of_m_CannotMutateCallbacksArray_0() { return static_cast<int32_t>(offsetof(CallbackArray_1_t55A9D53CFE2EB9806A9EB9E4E20F1CEBECF5E6DC, ___m_CannotMutateCallbacksArray_0)); }
	inline bool get_m_CannotMutateCallbacksArray_0() const { return ___m_CannotMutateCallbacksArray_0; }
	inline bool* get_address_of_m_CannotMutateCallbacksArray_0() { return &___m_CannotMutateCallbacksArray_0; }
	inline void set_m_CannotMutateCallbacksArray_0(bool value)
	{
		___m_CannotMutateCallbacksArray_0 = value;
	}

	inline static int32_t get_offset_of_m_Callbacks_1() { return static_cast<int32_t>(offsetof(CallbackArray_1_t55A9D53CFE2EB9806A9EB9E4E20F1CEBECF5E6DC, ___m_Callbacks_1)); }
	inline InlinedArray_1_t6B5B0BCE42A308992EDF0E77B6A1B11554A37F7B  get_m_Callbacks_1() const { return ___m_Callbacks_1; }
	inline InlinedArray_1_t6B5B0BCE42A308992EDF0E77B6A1B11554A37F7B * get_address_of_m_Callbacks_1() { return &___m_Callbacks_1; }
	inline void set_m_Callbacks_1(InlinedArray_1_t6B5B0BCE42A308992EDF0E77B6A1B11554A37F7B  value)
	{
		___m_Callbacks_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Callbacks_1))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Callbacks_1))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_CallbacksToAdd_2() { return static_cast<int32_t>(offsetof(CallbackArray_1_t55A9D53CFE2EB9806A9EB9E4E20F1CEBECF5E6DC, ___m_CallbacksToAdd_2)); }
	inline InlinedArray_1_t6B5B0BCE42A308992EDF0E77B6A1B11554A37F7B  get_m_CallbacksToAdd_2() const { return ___m_CallbacksToAdd_2; }
	inline InlinedArray_1_t6B5B0BCE42A308992EDF0E77B6A1B11554A37F7B * get_address_of_m_CallbacksToAdd_2() { return &___m_CallbacksToAdd_2; }
	inline void set_m_CallbacksToAdd_2(InlinedArray_1_t6B5B0BCE42A308992EDF0E77B6A1B11554A37F7B  value)
	{
		___m_CallbacksToAdd_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CallbacksToAdd_2))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CallbacksToAdd_2))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_CallbacksToRemove_3() { return static_cast<int32_t>(offsetof(CallbackArray_1_t55A9D53CFE2EB9806A9EB9E4E20F1CEBECF5E6DC, ___m_CallbacksToRemove_3)); }
	inline InlinedArray_1_t6B5B0BCE42A308992EDF0E77B6A1B11554A37F7B  get_m_CallbacksToRemove_3() const { return ___m_CallbacksToRemove_3; }
	inline InlinedArray_1_t6B5B0BCE42A308992EDF0E77B6A1B11554A37F7B * get_address_of_m_CallbacksToRemove_3() { return &___m_CallbacksToRemove_3; }
	inline void set_m_CallbacksToRemove_3(InlinedArray_1_t6B5B0BCE42A308992EDF0E77B6A1B11554A37F7B  value)
	{
		___m_CallbacksToRemove_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CallbacksToRemove_3))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CallbacksToRemove_3))->___additionalValues_2), (void*)NULL);
		#endif
	}
};


// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Collision2D
struct Collision2D_t95B5FD331CE95276D3658140844190B485D26564  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.Collision2D::m_Collider
	int32_t ___m_Collider_0;
	// System.Int32 UnityEngine.Collision2D::m_OtherCollider
	int32_t ___m_OtherCollider_1;
	// System.Int32 UnityEngine.Collision2D::m_Rigidbody
	int32_t ___m_Rigidbody_2;
	// System.Int32 UnityEngine.Collision2D::m_OtherRigidbody
	int32_t ___m_OtherRigidbody_3;
	// UnityEngine.Vector2 UnityEngine.Collision2D::m_RelativeVelocity
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_RelativeVelocity_4;
	// System.Int32 UnityEngine.Collision2D::m_Enabled
	int32_t ___m_Enabled_5;
	// System.Int32 UnityEngine.Collision2D::m_ContactCount
	int32_t ___m_ContactCount_6;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_ReusedContacts
	ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* ___m_ReusedContacts_7;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_LegacyContacts
	ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* ___m_LegacyContacts_8;

public:
	inline static int32_t get_offset_of_m_Collider_0() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_Collider_0)); }
	inline int32_t get_m_Collider_0() const { return ___m_Collider_0; }
	inline int32_t* get_address_of_m_Collider_0() { return &___m_Collider_0; }
	inline void set_m_Collider_0(int32_t value)
	{
		___m_Collider_0 = value;
	}

	inline static int32_t get_offset_of_m_OtherCollider_1() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_OtherCollider_1)); }
	inline int32_t get_m_OtherCollider_1() const { return ___m_OtherCollider_1; }
	inline int32_t* get_address_of_m_OtherCollider_1() { return &___m_OtherCollider_1; }
	inline void set_m_OtherCollider_1(int32_t value)
	{
		___m_OtherCollider_1 = value;
	}

	inline static int32_t get_offset_of_m_Rigidbody_2() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_Rigidbody_2)); }
	inline int32_t get_m_Rigidbody_2() const { return ___m_Rigidbody_2; }
	inline int32_t* get_address_of_m_Rigidbody_2() { return &___m_Rigidbody_2; }
	inline void set_m_Rigidbody_2(int32_t value)
	{
		___m_Rigidbody_2 = value;
	}

	inline static int32_t get_offset_of_m_OtherRigidbody_3() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_OtherRigidbody_3)); }
	inline int32_t get_m_OtherRigidbody_3() const { return ___m_OtherRigidbody_3; }
	inline int32_t* get_address_of_m_OtherRigidbody_3() { return &___m_OtherRigidbody_3; }
	inline void set_m_OtherRigidbody_3(int32_t value)
	{
		___m_OtherRigidbody_3 = value;
	}

	inline static int32_t get_offset_of_m_RelativeVelocity_4() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_RelativeVelocity_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_RelativeVelocity_4() const { return ___m_RelativeVelocity_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_RelativeVelocity_4() { return &___m_RelativeVelocity_4; }
	inline void set_m_RelativeVelocity_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_RelativeVelocity_4 = value;
	}

	inline static int32_t get_offset_of_m_Enabled_5() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_Enabled_5)); }
	inline int32_t get_m_Enabled_5() const { return ___m_Enabled_5; }
	inline int32_t* get_address_of_m_Enabled_5() { return &___m_Enabled_5; }
	inline void set_m_Enabled_5(int32_t value)
	{
		___m_Enabled_5 = value;
	}

	inline static int32_t get_offset_of_m_ContactCount_6() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_ContactCount_6)); }
	inline int32_t get_m_ContactCount_6() const { return ___m_ContactCount_6; }
	inline int32_t* get_address_of_m_ContactCount_6() { return &___m_ContactCount_6; }
	inline void set_m_ContactCount_6(int32_t value)
	{
		___m_ContactCount_6 = value;
	}

	inline static int32_t get_offset_of_m_ReusedContacts_7() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_ReusedContacts_7)); }
	inline ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* get_m_ReusedContacts_7() const { return ___m_ReusedContacts_7; }
	inline ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277** get_address_of_m_ReusedContacts_7() { return &___m_ReusedContacts_7; }
	inline void set_m_ReusedContacts_7(ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* value)
	{
		___m_ReusedContacts_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ReusedContacts_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_LegacyContacts_8() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_LegacyContacts_8)); }
	inline ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* get_m_LegacyContacts_8() const { return ___m_LegacyContacts_8; }
	inline ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277** get_address_of_m_LegacyContacts_8() { return &___m_LegacyContacts_8; }
	inline void set_m_LegacyContacts_8(ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* value)
	{
		___m_LegacyContacts_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LegacyContacts_8), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Collision2D
struct Collision2D_t95B5FD331CE95276D3658140844190B485D26564_marshaled_pinvoke
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 * ___m_ReusedContacts_7;
	ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 * ___m_LegacyContacts_8;
};
// Native definition for COM marshalling of UnityEngine.Collision2D
struct Collision2D_t95B5FD331CE95276D3658140844190B485D26564_marshaled_com
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 * ___m_ReusedContacts_7;
	ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 * ___m_LegacyContacts_8;
};

// UnityEngine.InputSystem.InputActionType
struct InputActionType_tB7D181880A39E9B5D6BFE3A059A5B3539AB617F9 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputActionType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputActionType_tB7D181880A39E9B5D6BFE3A059A5B3539AB617F9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.LowLevel.InputStateBlock
struct InputStateBlock_t28435F5D9809B0C5790F9A742E4215B8EDEB8A6B 
{
public:
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::<format>k__BackingField
	FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  ___U3CformatU3Ek__BackingField_40;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::m_ByteOffset
	uint32_t ___m_ByteOffset_41;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::<bitOffset>k__BackingField
	uint32_t ___U3CbitOffsetU3Ek__BackingField_42;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::<sizeInBits>k__BackingField
	uint32_t ___U3CsizeInBitsU3Ek__BackingField_43;

public:
	inline static int32_t get_offset_of_U3CformatU3Ek__BackingField_40() { return static_cast<int32_t>(offsetof(InputStateBlock_t28435F5D9809B0C5790F9A742E4215B8EDEB8A6B, ___U3CformatU3Ek__BackingField_40)); }
	inline FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  get_U3CformatU3Ek__BackingField_40() const { return ___U3CformatU3Ek__BackingField_40; }
	inline FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1 * get_address_of_U3CformatU3Ek__BackingField_40() { return &___U3CformatU3Ek__BackingField_40; }
	inline void set_U3CformatU3Ek__BackingField_40(FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  value)
	{
		___U3CformatU3Ek__BackingField_40 = value;
	}

	inline static int32_t get_offset_of_m_ByteOffset_41() { return static_cast<int32_t>(offsetof(InputStateBlock_t28435F5D9809B0C5790F9A742E4215B8EDEB8A6B, ___m_ByteOffset_41)); }
	inline uint32_t get_m_ByteOffset_41() const { return ___m_ByteOffset_41; }
	inline uint32_t* get_address_of_m_ByteOffset_41() { return &___m_ByteOffset_41; }
	inline void set_m_ByteOffset_41(uint32_t value)
	{
		___m_ByteOffset_41 = value;
	}

	inline static int32_t get_offset_of_U3CbitOffsetU3Ek__BackingField_42() { return static_cast<int32_t>(offsetof(InputStateBlock_t28435F5D9809B0C5790F9A742E4215B8EDEB8A6B, ___U3CbitOffsetU3Ek__BackingField_42)); }
	inline uint32_t get_U3CbitOffsetU3Ek__BackingField_42() const { return ___U3CbitOffsetU3Ek__BackingField_42; }
	inline uint32_t* get_address_of_U3CbitOffsetU3Ek__BackingField_42() { return &___U3CbitOffsetU3Ek__BackingField_42; }
	inline void set_U3CbitOffsetU3Ek__BackingField_42(uint32_t value)
	{
		___U3CbitOffsetU3Ek__BackingField_42 = value;
	}

	inline static int32_t get_offset_of_U3CsizeInBitsU3Ek__BackingField_43() { return static_cast<int32_t>(offsetof(InputStateBlock_t28435F5D9809B0C5790F9A742E4215B8EDEB8A6B, ___U3CsizeInBitsU3Ek__BackingField_43)); }
	inline uint32_t get_U3CsizeInBitsU3Ek__BackingField_43() const { return ___U3CsizeInBitsU3Ek__BackingField_43; }
	inline uint32_t* get_address_of_U3CsizeInBitsU3Ek__BackingField_43() { return &___U3CsizeInBitsU3Ek__BackingField_43; }
	inline void set_U3CsizeInBitsU3Ek__BackingField_43(uint32_t value)
	{
		___U3CsizeInBitsU3Ek__BackingField_43 = value;
	}
};


// UnityEngine.InputSystem.Key
struct Key_t86B7C35D6A0D895F0F3D4C63948C7BC407F9D942 
{
public:
	// System.Int32 UnityEngine.InputSystem.Key::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Key_t86B7C35D6A0D895F0F3D4C63948C7BC407F9D942, ___value___2)); }
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

// UnityEngine.RigidbodyConstraints2D
struct RigidbodyConstraints2D_t9B0EF89A1549D1EB17CADD272F004676C01F5437 
{
public:
	// System.Int32 UnityEngine.RigidbodyConstraints2D::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RigidbodyConstraints2D_t9B0EF89A1549D1EB17CADD272F004676C01F5437, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// unityroom.Api.ScoreboardWriteMode
struct ScoreboardWriteMode_t1583B91CC6473EE4290655933C7FE43584EEDBD0 
{
public:
	// System.Int32 unityroom.Api.ScoreboardWriteMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ScoreboardWriteMode_t1583B91CC6473EE4290655933C7FE43584EEDBD0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.TypeCode
struct TypeCode_tCB39BAB5CFB7A1E0BCB521413E3C46B81C31AA7C 
{
public:
	// System.Int32 System.TypeCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TypeCode_tCB39BAB5CFB7A1E0BCB521413E3C46B81C31AA7C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.Controls.AxisControl/Clamp
struct Clamp_tBEB7E08F8D691E6C3FBB1B32D92EE5FA3EB5D290 
{
public:
	// System.Int32 UnityEngine.InputSystem.Controls.AxisControl/Clamp::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Clamp_tBEB7E08F8D691E6C3FBB1B32D92EE5FA3EB5D290, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.InputAction/ActionFlags
struct ActionFlags_t15A0612AEA349DBA501BAD2CCD0DE137E82F8017 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputAction/ActionFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ActionFlags_t15A0612AEA349DBA501BAD2CCD0DE137E82F8017, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.InputBinding/Flags
struct Flags_t8FE13FBDDBCACBC1959A41B9D9F82FDD07758A47 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputBinding/Flags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flags_t8FE13FBDDBCACBC1959A41B9D9F82FDD07758A47, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.InputControl/ControlFlags
struct ControlFlags_t48A78BCAC824EC741BEA783C7EEE7B5AC04A0A72 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputControl/ControlFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ControlFlags_t48A78BCAC824EC741BEA783C7EEE7B5AC04A0A72, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.InputDevice/DeviceFlags
struct DeviceFlags_t5A08DAC8DB17DAEBB6CC5CE0044090EAEB88740C 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputDevice/DeviceFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DeviceFlags_t5A08DAC8DB17DAEBB6CC5CE0044090EAEB88740C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * ___m_PCMSetPositionCallback_5;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_4() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMReaderCallback_4)); }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * get_m_PCMReaderCallback_4() const { return ___m_PCMReaderCallback_4; }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B ** get_address_of_m_PCMReaderCallback_4() { return &___m_PCMReaderCallback_4; }
	inline void set_m_PCMReaderCallback_4(PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * value)
	{
		___m_PCMReaderCallback_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMReaderCallback_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_5() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMSetPositionCallback_5)); }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * get_m_PCMSetPositionCallback_5() const { return ___m_PCMSetPositionCallback_5; }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C ** get_address_of_m_PCMSetPositionCallback_5() { return &___m_PCMSetPositionCallback_5; }
	inline void set_m_PCMSetPositionCallback_5(PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * value)
	{
		___m_PCMSetPositionCallback_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMSetPositionCallback_5), (void*)value);
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.InputSystem.InputBinding
struct InputBinding_t7EFDE6E6FCA4EE9D3A829CE9D6E8398C337886C3 
{
public:
	// System.String UnityEngine.InputSystem.InputBinding::m_Name
	String_t* ___m_Name_2;
	// System.String UnityEngine.InputSystem.InputBinding::m_Id
	String_t* ___m_Id_3;
	// System.String UnityEngine.InputSystem.InputBinding::m_Path
	String_t* ___m_Path_4;
	// System.String UnityEngine.InputSystem.InputBinding::m_Interactions
	String_t* ___m_Interactions_5;
	// System.String UnityEngine.InputSystem.InputBinding::m_Processors
	String_t* ___m_Processors_6;
	// System.String UnityEngine.InputSystem.InputBinding::m_Groups
	String_t* ___m_Groups_7;
	// System.String UnityEngine.InputSystem.InputBinding::m_Action
	String_t* ___m_Action_8;
	// UnityEngine.InputSystem.InputBinding/Flags UnityEngine.InputSystem.InputBinding::m_Flags
	int32_t ___m_Flags_9;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverridePath
	String_t* ___m_OverridePath_10;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideInteractions
	String_t* ___m_OverrideInteractions_11;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideProcessors
	String_t* ___m_OverrideProcessors_12;

public:
	inline static int32_t get_offset_of_m_Name_2() { return static_cast<int32_t>(offsetof(InputBinding_t7EFDE6E6FCA4EE9D3A829CE9D6E8398C337886C3, ___m_Name_2)); }
	inline String_t* get_m_Name_2() const { return ___m_Name_2; }
	inline String_t** get_address_of_m_Name_2() { return &___m_Name_2; }
	inline void set_m_Name_2(String_t* value)
	{
		___m_Name_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Id_3() { return static_cast<int32_t>(offsetof(InputBinding_t7EFDE6E6FCA4EE9D3A829CE9D6E8398C337886C3, ___m_Id_3)); }
	inline String_t* get_m_Id_3() const { return ___m_Id_3; }
	inline String_t** get_address_of_m_Id_3() { return &___m_Id_3; }
	inline void set_m_Id_3(String_t* value)
	{
		___m_Id_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Id_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Path_4() { return static_cast<int32_t>(offsetof(InputBinding_t7EFDE6E6FCA4EE9D3A829CE9D6E8398C337886C3, ___m_Path_4)); }
	inline String_t* get_m_Path_4() const { return ___m_Path_4; }
	inline String_t** get_address_of_m_Path_4() { return &___m_Path_4; }
	inline void set_m_Path_4(String_t* value)
	{
		___m_Path_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Path_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactions_5() { return static_cast<int32_t>(offsetof(InputBinding_t7EFDE6E6FCA4EE9D3A829CE9D6E8398C337886C3, ___m_Interactions_5)); }
	inline String_t* get_m_Interactions_5() const { return ___m_Interactions_5; }
	inline String_t** get_address_of_m_Interactions_5() { return &___m_Interactions_5; }
	inline void set_m_Interactions_5(String_t* value)
	{
		___m_Interactions_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Interactions_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_Processors_6() { return static_cast<int32_t>(offsetof(InputBinding_t7EFDE6E6FCA4EE9D3A829CE9D6E8398C337886C3, ___m_Processors_6)); }
	inline String_t* get_m_Processors_6() const { return ___m_Processors_6; }
	inline String_t** get_address_of_m_Processors_6() { return &___m_Processors_6; }
	inline void set_m_Processors_6(String_t* value)
	{
		___m_Processors_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Processors_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Groups_7() { return static_cast<int32_t>(offsetof(InputBinding_t7EFDE6E6FCA4EE9D3A829CE9D6E8398C337886C3, ___m_Groups_7)); }
	inline String_t* get_m_Groups_7() const { return ___m_Groups_7; }
	inline String_t** get_address_of_m_Groups_7() { return &___m_Groups_7; }
	inline void set_m_Groups_7(String_t* value)
	{
		___m_Groups_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Groups_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_Action_8() { return static_cast<int32_t>(offsetof(InputBinding_t7EFDE6E6FCA4EE9D3A829CE9D6E8398C337886C3, ___m_Action_8)); }
	inline String_t* get_m_Action_8() const { return ___m_Action_8; }
	inline String_t** get_address_of_m_Action_8() { return &___m_Action_8; }
	inline void set_m_Action_8(String_t* value)
	{
		___m_Action_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Action_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_Flags_9() { return static_cast<int32_t>(offsetof(InputBinding_t7EFDE6E6FCA4EE9D3A829CE9D6E8398C337886C3, ___m_Flags_9)); }
	inline int32_t get_m_Flags_9() const { return ___m_Flags_9; }
	inline int32_t* get_address_of_m_Flags_9() { return &___m_Flags_9; }
	inline void set_m_Flags_9(int32_t value)
	{
		___m_Flags_9 = value;
	}

	inline static int32_t get_offset_of_m_OverridePath_10() { return static_cast<int32_t>(offsetof(InputBinding_t7EFDE6E6FCA4EE9D3A829CE9D6E8398C337886C3, ___m_OverridePath_10)); }
	inline String_t* get_m_OverridePath_10() const { return ___m_OverridePath_10; }
	inline String_t** get_address_of_m_OverridePath_10() { return &___m_OverridePath_10; }
	inline void set_m_OverridePath_10(String_t* value)
	{
		___m_OverridePath_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverridePath_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideInteractions_11() { return static_cast<int32_t>(offsetof(InputBinding_t7EFDE6E6FCA4EE9D3A829CE9D6E8398C337886C3, ___m_OverrideInteractions_11)); }
	inline String_t* get_m_OverrideInteractions_11() const { return ___m_OverrideInteractions_11; }
	inline String_t** get_address_of_m_OverrideInteractions_11() { return &___m_OverrideInteractions_11; }
	inline void set_m_OverrideInteractions_11(String_t* value)
	{
		___m_OverrideInteractions_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideInteractions_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideProcessors_12() { return static_cast<int32_t>(offsetof(InputBinding_t7EFDE6E6FCA4EE9D3A829CE9D6E8398C337886C3, ___m_OverrideProcessors_12)); }
	inline String_t* get_m_OverrideProcessors_12() const { return ___m_OverrideProcessors_12; }
	inline String_t** get_address_of_m_OverrideProcessors_12() { return &___m_OverrideProcessors_12; }
	inline void set_m_OverrideProcessors_12(String_t* value)
	{
		___m_OverrideProcessors_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideProcessors_12), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t7EFDE6E6FCA4EE9D3A829CE9D6E8398C337886C3_marshaled_pinvoke
{
	char* ___m_Name_2;
	char* ___m_Id_3;
	char* ___m_Path_4;
	char* ___m_Interactions_5;
	char* ___m_Processors_6;
	char* ___m_Groups_7;
	char* ___m_Action_8;
	int32_t ___m_Flags_9;
	char* ___m_OverridePath_10;
	char* ___m_OverrideInteractions_11;
	char* ___m_OverrideProcessors_12;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t7EFDE6E6FCA4EE9D3A829CE9D6E8398C337886C3_marshaled_com
{
	Il2CppChar* ___m_Name_2;
	Il2CppChar* ___m_Id_3;
	Il2CppChar* ___m_Path_4;
	Il2CppChar* ___m_Interactions_5;
	Il2CppChar* ___m_Processors_6;
	Il2CppChar* ___m_Groups_7;
	Il2CppChar* ___m_Action_8;
	int32_t ___m_Flags_9;
	Il2CppChar* ___m_OverridePath_10;
	Il2CppChar* ___m_OverrideInteractions_11;
	Il2CppChar* ___m_OverrideProcessors_12;
};

// UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_tB5B3A9B81547FCCFBFA1E9433ADE148D8C568477 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.TypeCode UnityEngine.InputSystem.Utilities.PrimitiveValue::m_Type
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			// System.Boolean UnityEngine.InputSystem.Utilities.PrimitiveValue::m_BoolValue
			bool ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			bool ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			// System.Char UnityEngine.InputSystem.Utilities.PrimitiveValue::m_CharValue
			Il2CppChar ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			Il2CppChar ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			// System.Byte UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ByteValue
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			// System.SByte UnityEngine.InputSystem.Utilities.PrimitiveValue::m_SByteValue
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			// System.Int16 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ShortValue
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			// System.UInt16 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_UShortValue
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			// System.Int32 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_IntValue
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			// System.UInt32 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_UIntValue
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			// System.Int64 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_LongValue
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			// System.UInt64 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ULongValue
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			// System.Single UnityEngine.InputSystem.Utilities.PrimitiveValue::m_FloatValue
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			// System.Double UnityEngine.InputSystem.Utilities.PrimitiveValue::m_DoubleValue
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_m_Type_0() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB5B3A9B81547FCCFBFA1E9433ADE148D8C568477, ___m_Type_0)); }
	inline int32_t get_m_Type_0() const { return ___m_Type_0; }
	inline int32_t* get_address_of_m_Type_0() { return &___m_Type_0; }
	inline void set_m_Type_0(int32_t value)
	{
		___m_Type_0 = value;
	}

	inline static int32_t get_offset_of_m_BoolValue_1() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB5B3A9B81547FCCFBFA1E9433ADE148D8C568477, ___m_BoolValue_1)); }
	inline bool get_m_BoolValue_1() const { return ___m_BoolValue_1; }
	inline bool* get_address_of_m_BoolValue_1() { return &___m_BoolValue_1; }
	inline void set_m_BoolValue_1(bool value)
	{
		___m_BoolValue_1 = value;
	}

	inline static int32_t get_offset_of_m_CharValue_2() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB5B3A9B81547FCCFBFA1E9433ADE148D8C568477, ___m_CharValue_2)); }
	inline Il2CppChar get_m_CharValue_2() const { return ___m_CharValue_2; }
	inline Il2CppChar* get_address_of_m_CharValue_2() { return &___m_CharValue_2; }
	inline void set_m_CharValue_2(Il2CppChar value)
	{
		___m_CharValue_2 = value;
	}

	inline static int32_t get_offset_of_m_ByteValue_3() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB5B3A9B81547FCCFBFA1E9433ADE148D8C568477, ___m_ByteValue_3)); }
	inline uint8_t get_m_ByteValue_3() const { return ___m_ByteValue_3; }
	inline uint8_t* get_address_of_m_ByteValue_3() { return &___m_ByteValue_3; }
	inline void set_m_ByteValue_3(uint8_t value)
	{
		___m_ByteValue_3 = value;
	}

	inline static int32_t get_offset_of_m_SByteValue_4() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB5B3A9B81547FCCFBFA1E9433ADE148D8C568477, ___m_SByteValue_4)); }
	inline int8_t get_m_SByteValue_4() const { return ___m_SByteValue_4; }
	inline int8_t* get_address_of_m_SByteValue_4() { return &___m_SByteValue_4; }
	inline void set_m_SByteValue_4(int8_t value)
	{
		___m_SByteValue_4 = value;
	}

	inline static int32_t get_offset_of_m_ShortValue_5() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB5B3A9B81547FCCFBFA1E9433ADE148D8C568477, ___m_ShortValue_5)); }
	inline int16_t get_m_ShortValue_5() const { return ___m_ShortValue_5; }
	inline int16_t* get_address_of_m_ShortValue_5() { return &___m_ShortValue_5; }
	inline void set_m_ShortValue_5(int16_t value)
	{
		___m_ShortValue_5 = value;
	}

	inline static int32_t get_offset_of_m_UShortValue_6() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB5B3A9B81547FCCFBFA1E9433ADE148D8C568477, ___m_UShortValue_6)); }
	inline uint16_t get_m_UShortValue_6() const { return ___m_UShortValue_6; }
	inline uint16_t* get_address_of_m_UShortValue_6() { return &___m_UShortValue_6; }
	inline void set_m_UShortValue_6(uint16_t value)
	{
		___m_UShortValue_6 = value;
	}

	inline static int32_t get_offset_of_m_IntValue_7() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB5B3A9B81547FCCFBFA1E9433ADE148D8C568477, ___m_IntValue_7)); }
	inline int32_t get_m_IntValue_7() const { return ___m_IntValue_7; }
	inline int32_t* get_address_of_m_IntValue_7() { return &___m_IntValue_7; }
	inline void set_m_IntValue_7(int32_t value)
	{
		___m_IntValue_7 = value;
	}

	inline static int32_t get_offset_of_m_UIntValue_8() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB5B3A9B81547FCCFBFA1E9433ADE148D8C568477, ___m_UIntValue_8)); }
	inline uint32_t get_m_UIntValue_8() const { return ___m_UIntValue_8; }
	inline uint32_t* get_address_of_m_UIntValue_8() { return &___m_UIntValue_8; }
	inline void set_m_UIntValue_8(uint32_t value)
	{
		___m_UIntValue_8 = value;
	}

	inline static int32_t get_offset_of_m_LongValue_9() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB5B3A9B81547FCCFBFA1E9433ADE148D8C568477, ___m_LongValue_9)); }
	inline int64_t get_m_LongValue_9() const { return ___m_LongValue_9; }
	inline int64_t* get_address_of_m_LongValue_9() { return &___m_LongValue_9; }
	inline void set_m_LongValue_9(int64_t value)
	{
		___m_LongValue_9 = value;
	}

	inline static int32_t get_offset_of_m_ULongValue_10() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB5B3A9B81547FCCFBFA1E9433ADE148D8C568477, ___m_ULongValue_10)); }
	inline uint64_t get_m_ULongValue_10() const { return ___m_ULongValue_10; }
	inline uint64_t* get_address_of_m_ULongValue_10() { return &___m_ULongValue_10; }
	inline void set_m_ULongValue_10(uint64_t value)
	{
		___m_ULongValue_10 = value;
	}

	inline static int32_t get_offset_of_m_FloatValue_11() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB5B3A9B81547FCCFBFA1E9433ADE148D8C568477, ___m_FloatValue_11)); }
	inline float get_m_FloatValue_11() const { return ___m_FloatValue_11; }
	inline float* get_address_of_m_FloatValue_11() { return &___m_FloatValue_11; }
	inline void set_m_FloatValue_11(float value)
	{
		___m_FloatValue_11 = value;
	}

	inline static int32_t get_offset_of_m_DoubleValue_12() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB5B3A9B81547FCCFBFA1E9433ADE148D8C568477, ___m_DoubleValue_12)); }
	inline double get_m_DoubleValue_12() const { return ___m_DoubleValue_12; }
	inline double* get_address_of_m_DoubleValue_12() { return &___m_DoubleValue_12; }
	inline void set_m_DoubleValue_12(double value)
	{
		___m_DoubleValue_12 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_tB5B3A9B81547FCCFBFA1E9433ADE148D8C568477_marshaled_pinvoke
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			int32_t ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			uint8_t ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_tB5B3A9B81547FCCFBFA1E9433ADE148D8C568477_marshaled_com
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			int32_t ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			uint8_t ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
};

// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.Nullable`1<UnityEngine.InputSystem.InputBinding>
struct Nullable_1_tC66F176EC5599DB26A7CDCBB21A8FF213B626717 
{
public:
	// T System.Nullable`1::value
	InputBinding_t7EFDE6E6FCA4EE9D3A829CE9D6E8398C337886C3  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tC66F176EC5599DB26A7CDCBB21A8FF213B626717, ___value_0)); }
	inline InputBinding_t7EFDE6E6FCA4EE9D3A829CE9D6E8398C337886C3  get_value_0() const { return ___value_0; }
	inline InputBinding_t7EFDE6E6FCA4EE9D3A829CE9D6E8398C337886C3 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(InputBinding_t7EFDE6E6FCA4EE9D3A829CE9D6E8398C337886C3  value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Name_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Id_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Path_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Interactions_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Processors_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Groups_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Action_8), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_OverridePath_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_OverrideInteractions_11), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_OverrideProcessors_12), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tC66F176EC5599DB26A7CDCBB21A8FF213B626717, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.InputSystem.InputControl
struct InputControl_t0424AD628A193C8BFFF881E6513CA1EC42353701  : public RuntimeObject
{
public:
	// UnityEngine.InputSystem.LowLevel.InputStateBlock UnityEngine.InputSystem.InputControl::m_StateBlock
	InputStateBlock_t28435F5D9809B0C5790F9A742E4215B8EDEB8A6B  ___m_StateBlock_0;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputControl::m_Name
	InternedString_t8ADDA30C880F048FFD8502FE048B011FACBA8FFA  ___m_Name_1;
	// System.String UnityEngine.InputSystem.InputControl::m_Path
	String_t* ___m_Path_2;
	// System.String UnityEngine.InputSystem.InputControl::m_DisplayName
	String_t* ___m_DisplayName_3;
	// System.String UnityEngine.InputSystem.InputControl::m_DisplayNameFromLayout
	String_t* ___m_DisplayNameFromLayout_4;
	// System.String UnityEngine.InputSystem.InputControl::m_ShortDisplayName
	String_t* ___m_ShortDisplayName_5;
	// System.String UnityEngine.InputSystem.InputControl::m_ShortDisplayNameFromLayout
	String_t* ___m_ShortDisplayNameFromLayout_6;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputControl::m_Layout
	InternedString_t8ADDA30C880F048FFD8502FE048B011FACBA8FFA  ___m_Layout_7;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputControl::m_Variants
	InternedString_t8ADDA30C880F048FFD8502FE048B011FACBA8FFA  ___m_Variants_8;
	// UnityEngine.InputSystem.InputDevice UnityEngine.InputSystem.InputControl::m_Device
	InputDevice_t956021BC2B6431A5A7A44954131751C3C3EEC06B * ___m_Device_9;
	// UnityEngine.InputSystem.InputControl UnityEngine.InputSystem.InputControl::m_Parent
	InputControl_t0424AD628A193C8BFFF881E6513CA1EC42353701 * ___m_Parent_10;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_UsageCount
	int32_t ___m_UsageCount_11;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_UsageStartIndex
	int32_t ___m_UsageStartIndex_12;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_AliasCount
	int32_t ___m_AliasCount_13;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_AliasStartIndex
	int32_t ___m_AliasStartIndex_14;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_ChildCount
	int32_t ___m_ChildCount_15;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_ChildStartIndex
	int32_t ___m_ChildStartIndex_16;
	// UnityEngine.InputSystem.InputControl/ControlFlags UnityEngine.InputSystem.InputControl::m_ControlFlags
	int32_t ___m_ControlFlags_17;
	// System.Boolean UnityEngine.InputSystem.InputControl::m_CachedValueIsStale
	bool ___m_CachedValueIsStale_18;
	// System.Boolean UnityEngine.InputSystem.InputControl::m_UnprocessedCachedValueIsStale
	bool ___m_UnprocessedCachedValueIsStale_19;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_DefaultState
	PrimitiveValue_tB5B3A9B81547FCCFBFA1E9433ADE148D8C568477  ___m_DefaultState_20;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_MinValue
	PrimitiveValue_tB5B3A9B81547FCCFBFA1E9433ADE148D8C568477  ___m_MinValue_21;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_MaxValue
	PrimitiveValue_tB5B3A9B81547FCCFBFA1E9433ADE148D8C568477  ___m_MaxValue_22;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.InputControl::m_OptimizedControlDataType
	FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  ___m_OptimizedControlDataType_23;

public:
	inline static int32_t get_offset_of_m_StateBlock_0() { return static_cast<int32_t>(offsetof(InputControl_t0424AD628A193C8BFFF881E6513CA1EC42353701, ___m_StateBlock_0)); }
	inline InputStateBlock_t28435F5D9809B0C5790F9A742E4215B8EDEB8A6B  get_m_StateBlock_0() const { return ___m_StateBlock_0; }
	inline InputStateBlock_t28435F5D9809B0C5790F9A742E4215B8EDEB8A6B * get_address_of_m_StateBlock_0() { return &___m_StateBlock_0; }
	inline void set_m_StateBlock_0(InputStateBlock_t28435F5D9809B0C5790F9A742E4215B8EDEB8A6B  value)
	{
		___m_StateBlock_0 = value;
	}

	inline static int32_t get_offset_of_m_Name_1() { return static_cast<int32_t>(offsetof(InputControl_t0424AD628A193C8BFFF881E6513CA1EC42353701, ___m_Name_1)); }
	inline InternedString_t8ADDA30C880F048FFD8502FE048B011FACBA8FFA  get_m_Name_1() const { return ___m_Name_1; }
	inline InternedString_t8ADDA30C880F048FFD8502FE048B011FACBA8FFA * get_address_of_m_Name_1() { return &___m_Name_1; }
	inline void set_m_Name_1(InternedString_t8ADDA30C880F048FFD8502FE048B011FACBA8FFA  value)
	{
		___m_Name_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Name_1))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Name_1))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Path_2() { return static_cast<int32_t>(offsetof(InputControl_t0424AD628A193C8BFFF881E6513CA1EC42353701, ___m_Path_2)); }
	inline String_t* get_m_Path_2() const { return ___m_Path_2; }
	inline String_t** get_address_of_m_Path_2() { return &___m_Path_2; }
	inline void set_m_Path_2(String_t* value)
	{
		___m_Path_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Path_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisplayName_3() { return static_cast<int32_t>(offsetof(InputControl_t0424AD628A193C8BFFF881E6513CA1EC42353701, ___m_DisplayName_3)); }
	inline String_t* get_m_DisplayName_3() const { return ___m_DisplayName_3; }
	inline String_t** get_address_of_m_DisplayName_3() { return &___m_DisplayName_3; }
	inline void set_m_DisplayName_3(String_t* value)
	{
		___m_DisplayName_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisplayName_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisplayNameFromLayout_4() { return static_cast<int32_t>(offsetof(InputControl_t0424AD628A193C8BFFF881E6513CA1EC42353701, ___m_DisplayNameFromLayout_4)); }
	inline String_t* get_m_DisplayNameFromLayout_4() const { return ___m_DisplayNameFromLayout_4; }
	inline String_t** get_address_of_m_DisplayNameFromLayout_4() { return &___m_DisplayNameFromLayout_4; }
	inline void set_m_DisplayNameFromLayout_4(String_t* value)
	{
		___m_DisplayNameFromLayout_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisplayNameFromLayout_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShortDisplayName_5() { return static_cast<int32_t>(offsetof(InputControl_t0424AD628A193C8BFFF881E6513CA1EC42353701, ___m_ShortDisplayName_5)); }
	inline String_t* get_m_ShortDisplayName_5() const { return ___m_ShortDisplayName_5; }
	inline String_t** get_address_of_m_ShortDisplayName_5() { return &___m_ShortDisplayName_5; }
	inline void set_m_ShortDisplayName_5(String_t* value)
	{
		___m_ShortDisplayName_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ShortDisplayName_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShortDisplayNameFromLayout_6() { return static_cast<int32_t>(offsetof(InputControl_t0424AD628A193C8BFFF881E6513CA1EC42353701, ___m_ShortDisplayNameFromLayout_6)); }
	inline String_t* get_m_ShortDisplayNameFromLayout_6() const { return ___m_ShortDisplayNameFromLayout_6; }
	inline String_t** get_address_of_m_ShortDisplayNameFromLayout_6() { return &___m_ShortDisplayNameFromLayout_6; }
	inline void set_m_ShortDisplayNameFromLayout_6(String_t* value)
	{
		___m_ShortDisplayNameFromLayout_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ShortDisplayNameFromLayout_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Layout_7() { return static_cast<int32_t>(offsetof(InputControl_t0424AD628A193C8BFFF881E6513CA1EC42353701, ___m_Layout_7)); }
	inline InternedString_t8ADDA30C880F048FFD8502FE048B011FACBA8FFA  get_m_Layout_7() const { return ___m_Layout_7; }
	inline InternedString_t8ADDA30C880F048FFD8502FE048B011FACBA8FFA * get_address_of_m_Layout_7() { return &___m_Layout_7; }
	inline void set_m_Layout_7(InternedString_t8ADDA30C880F048FFD8502FE048B011FACBA8FFA  value)
	{
		___m_Layout_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Layout_7))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Layout_7))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Variants_8() { return static_cast<int32_t>(offsetof(InputControl_t0424AD628A193C8BFFF881E6513CA1EC42353701, ___m_Variants_8)); }
	inline InternedString_t8ADDA30C880F048FFD8502FE048B011FACBA8FFA  get_m_Variants_8() const { return ___m_Variants_8; }
	inline InternedString_t8ADDA30C880F048FFD8502FE048B011FACBA8FFA * get_address_of_m_Variants_8() { return &___m_Variants_8; }
	inline void set_m_Variants_8(InternedString_t8ADDA30C880F048FFD8502FE048B011FACBA8FFA  value)
	{
		___m_Variants_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Variants_8))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Variants_8))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Device_9() { return static_cast<int32_t>(offsetof(InputControl_t0424AD628A193C8BFFF881E6513CA1EC42353701, ___m_Device_9)); }
	inline InputDevice_t956021BC2B6431A5A7A44954131751C3C3EEC06B * get_m_Device_9() const { return ___m_Device_9; }
	inline InputDevice_t956021BC2B6431A5A7A44954131751C3C3EEC06B ** get_address_of_m_Device_9() { return &___m_Device_9; }
	inline void set_m_Device_9(InputDevice_t956021BC2B6431A5A7A44954131751C3C3EEC06B * value)
	{
		___m_Device_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Device_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_Parent_10() { return static_cast<int32_t>(offsetof(InputControl_t0424AD628A193C8BFFF881E6513CA1EC42353701, ___m_Parent_10)); }
	inline InputControl_t0424AD628A193C8BFFF881E6513CA1EC42353701 * get_m_Parent_10() const { return ___m_Parent_10; }
	inline InputControl_t0424AD628A193C8BFFF881E6513CA1EC42353701 ** get_address_of_m_Parent_10() { return &___m_Parent_10; }
	inline void set_m_Parent_10(InputControl_t0424AD628A193C8BFFF881E6513CA1EC42353701 * value)
	{
		___m_Parent_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Parent_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_UsageCount_11() { return static_cast<int32_t>(offsetof(InputControl_t0424AD628A193C8BFFF881E6513CA1EC42353701, ___m_UsageCount_11)); }
	inline int32_t get_m_UsageCount_11() const { return ___m_UsageCount_11; }
	inline int32_t* get_address_of_m_UsageCount_11() { return &___m_UsageCount_11; }
	inline void set_m_UsageCount_11(int32_t value)
	{
		___m_UsageCount_11 = value;
	}

	inline static int32_t get_offset_of_m_UsageStartIndex_12() { return static_cast<int32_t>(offsetof(InputControl_t0424AD628A193C8BFFF881E6513CA1EC42353701, ___m_UsageStartIndex_12)); }
	inline int32_t get_m_UsageStartIndex_12() const { return ___m_UsageStartIndex_12; }
	inline int32_t* get_address_of_m_UsageStartIndex_12() { return &___m_UsageStartIndex_12; }
	inline void set_m_UsageStartIndex_12(int32_t value)
	{
		___m_UsageStartIndex_12 = value;
	}

	inline static int32_t get_offset_of_m_AliasCount_13() { return static_cast<int32_t>(offsetof(InputControl_t0424AD628A193C8BFFF881E6513CA1EC42353701, ___m_AliasCount_13)); }
	inline int32_t get_m_AliasCount_13() const { return ___m_AliasCount_13; }
	inline int32_t* get_address_of_m_AliasCount_13() { return &___m_AliasCount_13; }
	inline void set_m_AliasCount_13(int32_t value)
	{
		___m_AliasCount_13 = value;
	}

	inline static int32_t get_offset_of_m_AliasStartIndex_14() { return static_cast<int32_t>(offsetof(InputControl_t0424AD628A193C8BFFF881E6513CA1EC42353701, ___m_AliasStartIndex_14)); }
	inline int32_t get_m_AliasStartIndex_14() const { return ___m_AliasStartIndex_14; }
	inline int32_t* get_address_of_m_AliasStartIndex_14() { return &___m_AliasStartIndex_14; }
	inline void set_m_AliasStartIndex_14(int32_t value)
	{
		___m_AliasStartIndex_14 = value;
	}

	inline static int32_t get_offset_of_m_ChildCount_15() { return static_cast<int32_t>(offsetof(InputControl_t0424AD628A193C8BFFF881E6513CA1EC42353701, ___m_ChildCount_15)); }
	inline int32_t get_m_ChildCount_15() const { return ___m_ChildCount_15; }
	inline int32_t* get_address_of_m_ChildCount_15() { return &___m_ChildCount_15; }
	inline void set_m_ChildCount_15(int32_t value)
	{
		___m_ChildCount_15 = value;
	}

	inline static int32_t get_offset_of_m_ChildStartIndex_16() { return static_cast<int32_t>(offsetof(InputControl_t0424AD628A193C8BFFF881E6513CA1EC42353701, ___m_ChildStartIndex_16)); }
	inline int32_t get_m_ChildStartIndex_16() const { return ___m_ChildStartIndex_16; }
	inline int32_t* get_address_of_m_ChildStartIndex_16() { return &___m_ChildStartIndex_16; }
	inline void set_m_ChildStartIndex_16(int32_t value)
	{
		___m_ChildStartIndex_16 = value;
	}

	inline static int32_t get_offset_of_m_ControlFlags_17() { return static_cast<int32_t>(offsetof(InputControl_t0424AD628A193C8BFFF881E6513CA1EC42353701, ___m_ControlFlags_17)); }
	inline int32_t get_m_ControlFlags_17() const { return ___m_ControlFlags_17; }
	inline int32_t* get_address_of_m_ControlFlags_17() { return &___m_ControlFlags_17; }
	inline void set_m_ControlFlags_17(int32_t value)
	{
		___m_ControlFlags_17 = value;
	}

	inline static int32_t get_offset_of_m_CachedValueIsStale_18() { return static_cast<int32_t>(offsetof(InputControl_t0424AD628A193C8BFFF881E6513CA1EC42353701, ___m_CachedValueIsStale_18)); }
	inline bool get_m_CachedValueIsStale_18() const { return ___m_CachedValueIsStale_18; }
	inline bool* get_address_of_m_CachedValueIsStale_18() { return &___m_CachedValueIsStale_18; }
	inline void set_m_CachedValueIsStale_18(bool value)
	{
		___m_CachedValueIsStale_18 = value;
	}

	inline static int32_t get_offset_of_m_UnprocessedCachedValueIsStale_19() { return static_cast<int32_t>(offsetof(InputControl_t0424AD628A193C8BFFF881E6513CA1EC42353701, ___m_UnprocessedCachedValueIsStale_19)); }
	inline bool get_m_UnprocessedCachedValueIsStale_19() const { return ___m_UnprocessedCachedValueIsStale_19; }
	inline bool* get_address_of_m_UnprocessedCachedValueIsStale_19() { return &___m_UnprocessedCachedValueIsStale_19; }
	inline void set_m_UnprocessedCachedValueIsStale_19(bool value)
	{
		___m_UnprocessedCachedValueIsStale_19 = value;
	}

	inline static int32_t get_offset_of_m_DefaultState_20() { return static_cast<int32_t>(offsetof(InputControl_t0424AD628A193C8BFFF881E6513CA1EC42353701, ___m_DefaultState_20)); }
	inline PrimitiveValue_tB5B3A9B81547FCCFBFA1E9433ADE148D8C568477  get_m_DefaultState_20() const { return ___m_DefaultState_20; }
	inline PrimitiveValue_tB5B3A9B81547FCCFBFA1E9433ADE148D8C568477 * get_address_of_m_DefaultState_20() { return &___m_DefaultState_20; }
	inline void set_m_DefaultState_20(PrimitiveValue_tB5B3A9B81547FCCFBFA1E9433ADE148D8C568477  value)
	{
		___m_DefaultState_20 = value;
	}

	inline static int32_t get_offset_of_m_MinValue_21() { return static_cast<int32_t>(offsetof(InputControl_t0424AD628A193C8BFFF881E6513CA1EC42353701, ___m_MinValue_21)); }
	inline PrimitiveValue_tB5B3A9B81547FCCFBFA1E9433ADE148D8C568477  get_m_MinValue_21() const { return ___m_MinValue_21; }
	inline PrimitiveValue_tB5B3A9B81547FCCFBFA1E9433ADE148D8C568477 * get_address_of_m_MinValue_21() { return &___m_MinValue_21; }
	inline void set_m_MinValue_21(PrimitiveValue_tB5B3A9B81547FCCFBFA1E9433ADE148D8C568477  value)
	{
		___m_MinValue_21 = value;
	}

	inline static int32_t get_offset_of_m_MaxValue_22() { return static_cast<int32_t>(offsetof(InputControl_t0424AD628A193C8BFFF881E6513CA1EC42353701, ___m_MaxValue_22)); }
	inline PrimitiveValue_tB5B3A9B81547FCCFBFA1E9433ADE148D8C568477  get_m_MaxValue_22() const { return ___m_MaxValue_22; }
	inline PrimitiveValue_tB5B3A9B81547FCCFBFA1E9433ADE148D8C568477 * get_address_of_m_MaxValue_22() { return &___m_MaxValue_22; }
	inline void set_m_MaxValue_22(PrimitiveValue_tB5B3A9B81547FCCFBFA1E9433ADE148D8C568477  value)
	{
		___m_MaxValue_22 = value;
	}

	inline static int32_t get_offset_of_m_OptimizedControlDataType_23() { return static_cast<int32_t>(offsetof(InputControl_t0424AD628A193C8BFFF881E6513CA1EC42353701, ___m_OptimizedControlDataType_23)); }
	inline FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  get_m_OptimizedControlDataType_23() const { return ___m_OptimizedControlDataType_23; }
	inline FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1 * get_address_of_m_OptimizedControlDataType_23() { return &___m_OptimizedControlDataType_23; }
	inline void set_m_OptimizedControlDataType_23(FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  value)
	{
		___m_OptimizedControlDataType_23 = value;
	}
};


// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Rigidbody2D
struct Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.InputSystem.InputControl`1<System.Single>
struct InputControl_1_tD9474E386047B0BF9AF076E94A90D4FEEE64E46E  : public InputControl_t0424AD628A193C8BFFF881E6513CA1EC42353701
{
public:
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<TValue>> UnityEngine.InputSystem.InputControl`1::m_ProcessorStack
	InlinedArray_1_t4F3144D93F19BFC891F1722ADCE4CCE54C1E92A1  ___m_ProcessorStack_24;
	// TValue UnityEngine.InputSystem.InputControl`1::m_CachedValue
	float ___m_CachedValue_25;
	// TValue UnityEngine.InputSystem.InputControl`1::m_UnprocessedCachedValue
	float ___m_UnprocessedCachedValue_26;
	// System.Boolean UnityEngine.InputSystem.InputControl`1::evaluateProcessorsEveryRead
	bool ___evaluateProcessorsEveryRead_27;

public:
	inline static int32_t get_offset_of_m_ProcessorStack_24() { return static_cast<int32_t>(offsetof(InputControl_1_tD9474E386047B0BF9AF076E94A90D4FEEE64E46E, ___m_ProcessorStack_24)); }
	inline InlinedArray_1_t4F3144D93F19BFC891F1722ADCE4CCE54C1E92A1  get_m_ProcessorStack_24() const { return ___m_ProcessorStack_24; }
	inline InlinedArray_1_t4F3144D93F19BFC891F1722ADCE4CCE54C1E92A1 * get_address_of_m_ProcessorStack_24() { return &___m_ProcessorStack_24; }
	inline void set_m_ProcessorStack_24(InlinedArray_1_t4F3144D93F19BFC891F1722ADCE4CCE54C1E92A1  value)
	{
		___m_ProcessorStack_24 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ProcessorStack_24))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ProcessorStack_24))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_CachedValue_25() { return static_cast<int32_t>(offsetof(InputControl_1_tD9474E386047B0BF9AF076E94A90D4FEEE64E46E, ___m_CachedValue_25)); }
	inline float get_m_CachedValue_25() const { return ___m_CachedValue_25; }
	inline float* get_address_of_m_CachedValue_25() { return &___m_CachedValue_25; }
	inline void set_m_CachedValue_25(float value)
	{
		___m_CachedValue_25 = value;
	}

	inline static int32_t get_offset_of_m_UnprocessedCachedValue_26() { return static_cast<int32_t>(offsetof(InputControl_1_tD9474E386047B0BF9AF076E94A90D4FEEE64E46E, ___m_UnprocessedCachedValue_26)); }
	inline float get_m_UnprocessedCachedValue_26() const { return ___m_UnprocessedCachedValue_26; }
	inline float* get_address_of_m_UnprocessedCachedValue_26() { return &___m_UnprocessedCachedValue_26; }
	inline void set_m_UnprocessedCachedValue_26(float value)
	{
		___m_UnprocessedCachedValue_26 = value;
	}

	inline static int32_t get_offset_of_evaluateProcessorsEveryRead_27() { return static_cast<int32_t>(offsetof(InputControl_1_tD9474E386047B0BF9AF076E94A90D4FEEE64E46E, ___evaluateProcessorsEveryRead_27)); }
	inline bool get_evaluateProcessorsEveryRead_27() const { return ___evaluateProcessorsEveryRead_27; }
	inline bool* get_address_of_evaluateProcessorsEveryRead_27() { return &___evaluateProcessorsEveryRead_27; }
	inline void set_evaluateProcessorsEveryRead_27(bool value)
	{
		___evaluateProcessorsEveryRead_27 = value;
	}
};


// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.AudioBehaviour
struct AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.InputSystem.InputAction
struct InputAction_t4D95EC15C17EC145072A42B6BCCE3A7317DD96BB  : public RuntimeObject
{
public:
	// System.String UnityEngine.InputSystem.InputAction::m_Name
	String_t* ___m_Name_0;
	// UnityEngine.InputSystem.InputActionType UnityEngine.InputSystem.InputAction::m_Type
	int32_t ___m_Type_1;
	// System.String UnityEngine.InputSystem.InputAction::m_ExpectedControlType
	String_t* ___m_ExpectedControlType_2;
	// System.String UnityEngine.InputSystem.InputAction::m_Id
	String_t* ___m_Id_3;
	// System.String UnityEngine.InputSystem.InputAction::m_Processors
	String_t* ___m_Processors_4;
	// System.String UnityEngine.InputSystem.InputAction::m_Interactions
	String_t* ___m_Interactions_5;
	// UnityEngine.InputSystem.InputBinding[] UnityEngine.InputSystem.InputAction::m_SingletonActionBindings
	InputBindingU5BU5D_t06E5F24EB2EDF592EA0C6D7AAFB3A228F6EC67E1* ___m_SingletonActionBindings_6;
	// UnityEngine.InputSystem.InputAction/ActionFlags UnityEngine.InputSystem.InputAction::m_Flags
	int32_t ___m_Flags_7;
	// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputAction::m_BindingMask
	Nullable_1_tC66F176EC5599DB26A7CDCBB21A8FF213B626717  ___m_BindingMask_8;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_BindingsStartIndex
	int32_t ___m_BindingsStartIndex_9;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_BindingsCount
	int32_t ___m_BindingsCount_10;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ControlStartIndex
	int32_t ___m_ControlStartIndex_11;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ControlCount
	int32_t ___m_ControlCount_12;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ActionIndexInState
	int32_t ___m_ActionIndexInState_13;
	// UnityEngine.InputSystem.InputActionMap UnityEngine.InputSystem.InputAction::m_ActionMap
	InputActionMap_t9EDA2DE8976ED1BA5C290D93E529C444F9684ECA * ___m_ActionMap_14;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnStarted
	CallbackArray_1_t55A9D53CFE2EB9806A9EB9E4E20F1CEBECF5E6DC  ___m_OnStarted_15;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnCanceled
	CallbackArray_1_t55A9D53CFE2EB9806A9EB9E4E20F1CEBECF5E6DC  ___m_OnCanceled_16;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnPerformed
	CallbackArray_1_t55A9D53CFE2EB9806A9EB9E4E20F1CEBECF5E6DC  ___m_OnPerformed_17;

public:
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(InputAction_t4D95EC15C17EC145072A42B6BCCE3A7317DD96BB, ___m_Name_0)); }
	inline String_t* get_m_Name_0() const { return ___m_Name_0; }
	inline String_t** get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(String_t* value)
	{
		___m_Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_1() { return static_cast<int32_t>(offsetof(InputAction_t4D95EC15C17EC145072A42B6BCCE3A7317DD96BB, ___m_Type_1)); }
	inline int32_t get_m_Type_1() const { return ___m_Type_1; }
	inline int32_t* get_address_of_m_Type_1() { return &___m_Type_1; }
	inline void set_m_Type_1(int32_t value)
	{
		___m_Type_1 = value;
	}

	inline static int32_t get_offset_of_m_ExpectedControlType_2() { return static_cast<int32_t>(offsetof(InputAction_t4D95EC15C17EC145072A42B6BCCE3A7317DD96BB, ___m_ExpectedControlType_2)); }
	inline String_t* get_m_ExpectedControlType_2() const { return ___m_ExpectedControlType_2; }
	inline String_t** get_address_of_m_ExpectedControlType_2() { return &___m_ExpectedControlType_2; }
	inline void set_m_ExpectedControlType_2(String_t* value)
	{
		___m_ExpectedControlType_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ExpectedControlType_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Id_3() { return static_cast<int32_t>(offsetof(InputAction_t4D95EC15C17EC145072A42B6BCCE3A7317DD96BB, ___m_Id_3)); }
	inline String_t* get_m_Id_3() const { return ___m_Id_3; }
	inline String_t** get_address_of_m_Id_3() { return &___m_Id_3; }
	inline void set_m_Id_3(String_t* value)
	{
		___m_Id_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Id_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Processors_4() { return static_cast<int32_t>(offsetof(InputAction_t4D95EC15C17EC145072A42B6BCCE3A7317DD96BB, ___m_Processors_4)); }
	inline String_t* get_m_Processors_4() const { return ___m_Processors_4; }
	inline String_t** get_address_of_m_Processors_4() { return &___m_Processors_4; }
	inline void set_m_Processors_4(String_t* value)
	{
		___m_Processors_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Processors_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactions_5() { return static_cast<int32_t>(offsetof(InputAction_t4D95EC15C17EC145072A42B6BCCE3A7317DD96BB, ___m_Interactions_5)); }
	inline String_t* get_m_Interactions_5() const { return ___m_Interactions_5; }
	inline String_t** get_address_of_m_Interactions_5() { return &___m_Interactions_5; }
	inline void set_m_Interactions_5(String_t* value)
	{
		___m_Interactions_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Interactions_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_SingletonActionBindings_6() { return static_cast<int32_t>(offsetof(InputAction_t4D95EC15C17EC145072A42B6BCCE3A7317DD96BB, ___m_SingletonActionBindings_6)); }
	inline InputBindingU5BU5D_t06E5F24EB2EDF592EA0C6D7AAFB3A228F6EC67E1* get_m_SingletonActionBindings_6() const { return ___m_SingletonActionBindings_6; }
	inline InputBindingU5BU5D_t06E5F24EB2EDF592EA0C6D7AAFB3A228F6EC67E1** get_address_of_m_SingletonActionBindings_6() { return &___m_SingletonActionBindings_6; }
	inline void set_m_SingletonActionBindings_6(InputBindingU5BU5D_t06E5F24EB2EDF592EA0C6D7AAFB3A228F6EC67E1* value)
	{
		___m_SingletonActionBindings_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SingletonActionBindings_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Flags_7() { return static_cast<int32_t>(offsetof(InputAction_t4D95EC15C17EC145072A42B6BCCE3A7317DD96BB, ___m_Flags_7)); }
	inline int32_t get_m_Flags_7() const { return ___m_Flags_7; }
	inline int32_t* get_address_of_m_Flags_7() { return &___m_Flags_7; }
	inline void set_m_Flags_7(int32_t value)
	{
		___m_Flags_7 = value;
	}

	inline static int32_t get_offset_of_m_BindingMask_8() { return static_cast<int32_t>(offsetof(InputAction_t4D95EC15C17EC145072A42B6BCCE3A7317DD96BB, ___m_BindingMask_8)); }
	inline Nullable_1_tC66F176EC5599DB26A7CDCBB21A8FF213B626717  get_m_BindingMask_8() const { return ___m_BindingMask_8; }
	inline Nullable_1_tC66F176EC5599DB26A7CDCBB21A8FF213B626717 * get_address_of_m_BindingMask_8() { return &___m_BindingMask_8; }
	inline void set_m_BindingMask_8(Nullable_1_tC66F176EC5599DB26A7CDCBB21A8FF213B626717  value)
	{
		___m_BindingMask_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_Name_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_Id_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_Path_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_Interactions_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_Processors_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_Groups_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_Action_8), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_OverridePath_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_OverrideInteractions_11), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_OverrideProcessors_12), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_BindingsStartIndex_9() { return static_cast<int32_t>(offsetof(InputAction_t4D95EC15C17EC145072A42B6BCCE3A7317DD96BB, ___m_BindingsStartIndex_9)); }
	inline int32_t get_m_BindingsStartIndex_9() const { return ___m_BindingsStartIndex_9; }
	inline int32_t* get_address_of_m_BindingsStartIndex_9() { return &___m_BindingsStartIndex_9; }
	inline void set_m_BindingsStartIndex_9(int32_t value)
	{
		___m_BindingsStartIndex_9 = value;
	}

	inline static int32_t get_offset_of_m_BindingsCount_10() { return static_cast<int32_t>(offsetof(InputAction_t4D95EC15C17EC145072A42B6BCCE3A7317DD96BB, ___m_BindingsCount_10)); }
	inline int32_t get_m_BindingsCount_10() const { return ___m_BindingsCount_10; }
	inline int32_t* get_address_of_m_BindingsCount_10() { return &___m_BindingsCount_10; }
	inline void set_m_BindingsCount_10(int32_t value)
	{
		___m_BindingsCount_10 = value;
	}

	inline static int32_t get_offset_of_m_ControlStartIndex_11() { return static_cast<int32_t>(offsetof(InputAction_t4D95EC15C17EC145072A42B6BCCE3A7317DD96BB, ___m_ControlStartIndex_11)); }
	inline int32_t get_m_ControlStartIndex_11() const { return ___m_ControlStartIndex_11; }
	inline int32_t* get_address_of_m_ControlStartIndex_11() { return &___m_ControlStartIndex_11; }
	inline void set_m_ControlStartIndex_11(int32_t value)
	{
		___m_ControlStartIndex_11 = value;
	}

	inline static int32_t get_offset_of_m_ControlCount_12() { return static_cast<int32_t>(offsetof(InputAction_t4D95EC15C17EC145072A42B6BCCE3A7317DD96BB, ___m_ControlCount_12)); }
	inline int32_t get_m_ControlCount_12() const { return ___m_ControlCount_12; }
	inline int32_t* get_address_of_m_ControlCount_12() { return &___m_ControlCount_12; }
	inline void set_m_ControlCount_12(int32_t value)
	{
		___m_ControlCount_12 = value;
	}

	inline static int32_t get_offset_of_m_ActionIndexInState_13() { return static_cast<int32_t>(offsetof(InputAction_t4D95EC15C17EC145072A42B6BCCE3A7317DD96BB, ___m_ActionIndexInState_13)); }
	inline int32_t get_m_ActionIndexInState_13() const { return ___m_ActionIndexInState_13; }
	inline int32_t* get_address_of_m_ActionIndexInState_13() { return &___m_ActionIndexInState_13; }
	inline void set_m_ActionIndexInState_13(int32_t value)
	{
		___m_ActionIndexInState_13 = value;
	}

	inline static int32_t get_offset_of_m_ActionMap_14() { return static_cast<int32_t>(offsetof(InputAction_t4D95EC15C17EC145072A42B6BCCE3A7317DD96BB, ___m_ActionMap_14)); }
	inline InputActionMap_t9EDA2DE8976ED1BA5C290D93E529C444F9684ECA * get_m_ActionMap_14() const { return ___m_ActionMap_14; }
	inline InputActionMap_t9EDA2DE8976ED1BA5C290D93E529C444F9684ECA ** get_address_of_m_ActionMap_14() { return &___m_ActionMap_14; }
	inline void set_m_ActionMap_14(InputActionMap_t9EDA2DE8976ED1BA5C290D93E529C444F9684ECA * value)
	{
		___m_ActionMap_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionMap_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnStarted_15() { return static_cast<int32_t>(offsetof(InputAction_t4D95EC15C17EC145072A42B6BCCE3A7317DD96BB, ___m_OnStarted_15)); }
	inline CallbackArray_1_t55A9D53CFE2EB9806A9EB9E4E20F1CEBECF5E6DC  get_m_OnStarted_15() const { return ___m_OnStarted_15; }
	inline CallbackArray_1_t55A9D53CFE2EB9806A9EB9E4E20F1CEBECF5E6DC * get_address_of_m_OnStarted_15() { return &___m_OnStarted_15; }
	inline void set_m_OnStarted_15(CallbackArray_1_t55A9D53CFE2EB9806A9EB9E4E20F1CEBECF5E6DC  value)
	{
		___m_OnStarted_15 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_OnStarted_15))->___m_Callbacks_1))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_OnStarted_15))->___m_Callbacks_1))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_OnStarted_15))->___m_CallbacksToAdd_2))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_OnStarted_15))->___m_CallbacksToAdd_2))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_OnStarted_15))->___m_CallbacksToRemove_3))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_OnStarted_15))->___m_CallbacksToRemove_3))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_OnCanceled_16() { return static_cast<int32_t>(offsetof(InputAction_t4D95EC15C17EC145072A42B6BCCE3A7317DD96BB, ___m_OnCanceled_16)); }
	inline CallbackArray_1_t55A9D53CFE2EB9806A9EB9E4E20F1CEBECF5E6DC  get_m_OnCanceled_16() const { return ___m_OnCanceled_16; }
	inline CallbackArray_1_t55A9D53CFE2EB9806A9EB9E4E20F1CEBECF5E6DC * get_address_of_m_OnCanceled_16() { return &___m_OnCanceled_16; }
	inline void set_m_OnCanceled_16(CallbackArray_1_t55A9D53CFE2EB9806A9EB9E4E20F1CEBECF5E6DC  value)
	{
		___m_OnCanceled_16 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_OnCanceled_16))->___m_Callbacks_1))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_OnCanceled_16))->___m_Callbacks_1))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_OnCanceled_16))->___m_CallbacksToAdd_2))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_OnCanceled_16))->___m_CallbacksToAdd_2))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_OnCanceled_16))->___m_CallbacksToRemove_3))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_OnCanceled_16))->___m_CallbacksToRemove_3))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_OnPerformed_17() { return static_cast<int32_t>(offsetof(InputAction_t4D95EC15C17EC145072A42B6BCCE3A7317DD96BB, ___m_OnPerformed_17)); }
	inline CallbackArray_1_t55A9D53CFE2EB9806A9EB9E4E20F1CEBECF5E6DC  get_m_OnPerformed_17() const { return ___m_OnPerformed_17; }
	inline CallbackArray_1_t55A9D53CFE2EB9806A9EB9E4E20F1CEBECF5E6DC * get_address_of_m_OnPerformed_17() { return &___m_OnPerformed_17; }
	inline void set_m_OnPerformed_17(CallbackArray_1_t55A9D53CFE2EB9806A9EB9E4E20F1CEBECF5E6DC  value)
	{
		___m_OnPerformed_17 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_OnPerformed_17))->___m_Callbacks_1))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_OnPerformed_17))->___m_Callbacks_1))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_OnPerformed_17))->___m_CallbacksToAdd_2))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_OnPerformed_17))->___m_CallbacksToAdd_2))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_OnPerformed_17))->___m_CallbacksToRemove_3))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_OnPerformed_17))->___m_CallbacksToRemove_3))->___additionalValues_2), (void*)NULL);
		#endif
	}
};


// UnityEngine.InputSystem.InputDevice
struct InputDevice_t956021BC2B6431A5A7A44954131751C3C3EEC06B  : public InputControl_t0424AD628A193C8BFFF881E6513CA1EC42353701
{
public:
	// UnityEngine.InputSystem.InputDevice/DeviceFlags UnityEngine.InputSystem.InputDevice::m_DeviceFlags
	int32_t ___m_DeviceFlags_27;
	// System.Int32 UnityEngine.InputSystem.InputDevice::m_DeviceId
	int32_t ___m_DeviceId_28;
	// System.Int32 UnityEngine.InputSystem.InputDevice::m_ParticipantId
	int32_t ___m_ParticipantId_29;
	// System.Int32 UnityEngine.InputSystem.InputDevice::m_DeviceIndex
	int32_t ___m_DeviceIndex_30;
	// UnityEngine.InputSystem.Layouts.InputDeviceDescription UnityEngine.InputSystem.InputDevice::m_Description
	InputDeviceDescription_t16E2C7E9B9CE5B7ADB7D70F3C47932EF59D0D980  ___m_Description_31;
	// System.Double UnityEngine.InputSystem.InputDevice::m_LastUpdateTimeInternal
	double ___m_LastUpdateTimeInternal_32;
	// System.UInt32 UnityEngine.InputSystem.InputDevice::m_CurrentUpdateStepCount
	uint32_t ___m_CurrentUpdateStepCount_33;
	// UnityEngine.InputSystem.Utilities.InternedString[] UnityEngine.InputSystem.InputDevice::m_AliasesForEachControl
	InternedStringU5BU5D_tD96CA717926C553408C7A718673AC12F4F787095* ___m_AliasesForEachControl_34;
	// UnityEngine.InputSystem.Utilities.InternedString[] UnityEngine.InputSystem.InputDevice::m_UsagesForEachControl
	InternedStringU5BU5D_tD96CA717926C553408C7A718673AC12F4F787095* ___m_UsagesForEachControl_35;
	// UnityEngine.InputSystem.InputControl[] UnityEngine.InputSystem.InputDevice::m_UsageToControl
	InputControlU5BU5D_tE51E95FA96826139CF9D99A021136552F802FA71* ___m_UsageToControl_36;
	// UnityEngine.InputSystem.InputControl[] UnityEngine.InputSystem.InputDevice::m_ChildrenForEachControl
	InputControlU5BU5D_tE51E95FA96826139CF9D99A021136552F802FA71* ___m_ChildrenForEachControl_37;
	// System.UInt32[] UnityEngine.InputSystem.InputDevice::m_StateOffsetToControlMap
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___m_StateOffsetToControlMap_38;
	// UnityEngine.InputSystem.InputDevice/ControlBitRangeNode[] UnityEngine.InputSystem.InputDevice::m_ControlTreeNodes
	ControlBitRangeNodeU5BU5D_tA24B796B2F142740E56C0BBBF3F9767EF23BCB11* ___m_ControlTreeNodes_39;
	// System.UInt16[] UnityEngine.InputSystem.InputDevice::m_ControlTreeIndices
	UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* ___m_ControlTreeIndices_40;

public:
	inline static int32_t get_offset_of_m_DeviceFlags_27() { return static_cast<int32_t>(offsetof(InputDevice_t956021BC2B6431A5A7A44954131751C3C3EEC06B, ___m_DeviceFlags_27)); }
	inline int32_t get_m_DeviceFlags_27() const { return ___m_DeviceFlags_27; }
	inline int32_t* get_address_of_m_DeviceFlags_27() { return &___m_DeviceFlags_27; }
	inline void set_m_DeviceFlags_27(int32_t value)
	{
		___m_DeviceFlags_27 = value;
	}

	inline static int32_t get_offset_of_m_DeviceId_28() { return static_cast<int32_t>(offsetof(InputDevice_t956021BC2B6431A5A7A44954131751C3C3EEC06B, ___m_DeviceId_28)); }
	inline int32_t get_m_DeviceId_28() const { return ___m_DeviceId_28; }
	inline int32_t* get_address_of_m_DeviceId_28() { return &___m_DeviceId_28; }
	inline void set_m_DeviceId_28(int32_t value)
	{
		___m_DeviceId_28 = value;
	}

	inline static int32_t get_offset_of_m_ParticipantId_29() { return static_cast<int32_t>(offsetof(InputDevice_t956021BC2B6431A5A7A44954131751C3C3EEC06B, ___m_ParticipantId_29)); }
	inline int32_t get_m_ParticipantId_29() const { return ___m_ParticipantId_29; }
	inline int32_t* get_address_of_m_ParticipantId_29() { return &___m_ParticipantId_29; }
	inline void set_m_ParticipantId_29(int32_t value)
	{
		___m_ParticipantId_29 = value;
	}

	inline static int32_t get_offset_of_m_DeviceIndex_30() { return static_cast<int32_t>(offsetof(InputDevice_t956021BC2B6431A5A7A44954131751C3C3EEC06B, ___m_DeviceIndex_30)); }
	inline int32_t get_m_DeviceIndex_30() const { return ___m_DeviceIndex_30; }
	inline int32_t* get_address_of_m_DeviceIndex_30() { return &___m_DeviceIndex_30; }
	inline void set_m_DeviceIndex_30(int32_t value)
	{
		___m_DeviceIndex_30 = value;
	}

	inline static int32_t get_offset_of_m_Description_31() { return static_cast<int32_t>(offsetof(InputDevice_t956021BC2B6431A5A7A44954131751C3C3EEC06B, ___m_Description_31)); }
	inline InputDeviceDescription_t16E2C7E9B9CE5B7ADB7D70F3C47932EF59D0D980  get_m_Description_31() const { return ___m_Description_31; }
	inline InputDeviceDescription_t16E2C7E9B9CE5B7ADB7D70F3C47932EF59D0D980 * get_address_of_m_Description_31() { return &___m_Description_31; }
	inline void set_m_Description_31(InputDeviceDescription_t16E2C7E9B9CE5B7ADB7D70F3C47932EF59D0D980  value)
	{
		___m_Description_31 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Description_31))->___m_InterfaceName_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Description_31))->___m_DeviceClass_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Description_31))->___m_Manufacturer_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Description_31))->___m_Product_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Description_31))->___m_Serial_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Description_31))->___m_Version_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Description_31))->___m_Capabilities_6), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_LastUpdateTimeInternal_32() { return static_cast<int32_t>(offsetof(InputDevice_t956021BC2B6431A5A7A44954131751C3C3EEC06B, ___m_LastUpdateTimeInternal_32)); }
	inline double get_m_LastUpdateTimeInternal_32() const { return ___m_LastUpdateTimeInternal_32; }
	inline double* get_address_of_m_LastUpdateTimeInternal_32() { return &___m_LastUpdateTimeInternal_32; }
	inline void set_m_LastUpdateTimeInternal_32(double value)
	{
		___m_LastUpdateTimeInternal_32 = value;
	}

	inline static int32_t get_offset_of_m_CurrentUpdateStepCount_33() { return static_cast<int32_t>(offsetof(InputDevice_t956021BC2B6431A5A7A44954131751C3C3EEC06B, ___m_CurrentUpdateStepCount_33)); }
	inline uint32_t get_m_CurrentUpdateStepCount_33() const { return ___m_CurrentUpdateStepCount_33; }
	inline uint32_t* get_address_of_m_CurrentUpdateStepCount_33() { return &___m_CurrentUpdateStepCount_33; }
	inline void set_m_CurrentUpdateStepCount_33(uint32_t value)
	{
		___m_CurrentUpdateStepCount_33 = value;
	}

	inline static int32_t get_offset_of_m_AliasesForEachControl_34() { return static_cast<int32_t>(offsetof(InputDevice_t956021BC2B6431A5A7A44954131751C3C3EEC06B, ___m_AliasesForEachControl_34)); }
	inline InternedStringU5BU5D_tD96CA717926C553408C7A718673AC12F4F787095* get_m_AliasesForEachControl_34() const { return ___m_AliasesForEachControl_34; }
	inline InternedStringU5BU5D_tD96CA717926C553408C7A718673AC12F4F787095** get_address_of_m_AliasesForEachControl_34() { return &___m_AliasesForEachControl_34; }
	inline void set_m_AliasesForEachControl_34(InternedStringU5BU5D_tD96CA717926C553408C7A718673AC12F4F787095* value)
	{
		___m_AliasesForEachControl_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AliasesForEachControl_34), (void*)value);
	}

	inline static int32_t get_offset_of_m_UsagesForEachControl_35() { return static_cast<int32_t>(offsetof(InputDevice_t956021BC2B6431A5A7A44954131751C3C3EEC06B, ___m_UsagesForEachControl_35)); }
	inline InternedStringU5BU5D_tD96CA717926C553408C7A718673AC12F4F787095* get_m_UsagesForEachControl_35() const { return ___m_UsagesForEachControl_35; }
	inline InternedStringU5BU5D_tD96CA717926C553408C7A718673AC12F4F787095** get_address_of_m_UsagesForEachControl_35() { return &___m_UsagesForEachControl_35; }
	inline void set_m_UsagesForEachControl_35(InternedStringU5BU5D_tD96CA717926C553408C7A718673AC12F4F787095* value)
	{
		___m_UsagesForEachControl_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UsagesForEachControl_35), (void*)value);
	}

	inline static int32_t get_offset_of_m_UsageToControl_36() { return static_cast<int32_t>(offsetof(InputDevice_t956021BC2B6431A5A7A44954131751C3C3EEC06B, ___m_UsageToControl_36)); }
	inline InputControlU5BU5D_tE51E95FA96826139CF9D99A021136552F802FA71* get_m_UsageToControl_36() const { return ___m_UsageToControl_36; }
	inline InputControlU5BU5D_tE51E95FA96826139CF9D99A021136552F802FA71** get_address_of_m_UsageToControl_36() { return &___m_UsageToControl_36; }
	inline void set_m_UsageToControl_36(InputControlU5BU5D_tE51E95FA96826139CF9D99A021136552F802FA71* value)
	{
		___m_UsageToControl_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UsageToControl_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChildrenForEachControl_37() { return static_cast<int32_t>(offsetof(InputDevice_t956021BC2B6431A5A7A44954131751C3C3EEC06B, ___m_ChildrenForEachControl_37)); }
	inline InputControlU5BU5D_tE51E95FA96826139CF9D99A021136552F802FA71* get_m_ChildrenForEachControl_37() const { return ___m_ChildrenForEachControl_37; }
	inline InputControlU5BU5D_tE51E95FA96826139CF9D99A021136552F802FA71** get_address_of_m_ChildrenForEachControl_37() { return &___m_ChildrenForEachControl_37; }
	inline void set_m_ChildrenForEachControl_37(InputControlU5BU5D_tE51E95FA96826139CF9D99A021136552F802FA71* value)
	{
		___m_ChildrenForEachControl_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChildrenForEachControl_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_StateOffsetToControlMap_38() { return static_cast<int32_t>(offsetof(InputDevice_t956021BC2B6431A5A7A44954131751C3C3EEC06B, ___m_StateOffsetToControlMap_38)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_m_StateOffsetToControlMap_38() const { return ___m_StateOffsetToControlMap_38; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_m_StateOffsetToControlMap_38() { return &___m_StateOffsetToControlMap_38; }
	inline void set_m_StateOffsetToControlMap_38(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___m_StateOffsetToControlMap_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StateOffsetToControlMap_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_ControlTreeNodes_39() { return static_cast<int32_t>(offsetof(InputDevice_t956021BC2B6431A5A7A44954131751C3C3EEC06B, ___m_ControlTreeNodes_39)); }
	inline ControlBitRangeNodeU5BU5D_tA24B796B2F142740E56C0BBBF3F9767EF23BCB11* get_m_ControlTreeNodes_39() const { return ___m_ControlTreeNodes_39; }
	inline ControlBitRangeNodeU5BU5D_tA24B796B2F142740E56C0BBBF3F9767EF23BCB11** get_address_of_m_ControlTreeNodes_39() { return &___m_ControlTreeNodes_39; }
	inline void set_m_ControlTreeNodes_39(ControlBitRangeNodeU5BU5D_tA24B796B2F142740E56C0BBBF3F9767EF23BCB11* value)
	{
		___m_ControlTreeNodes_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ControlTreeNodes_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_ControlTreeIndices_40() { return static_cast<int32_t>(offsetof(InputDevice_t956021BC2B6431A5A7A44954131751C3C3EEC06B, ___m_ControlTreeIndices_40)); }
	inline UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* get_m_ControlTreeIndices_40() const { return ___m_ControlTreeIndices_40; }
	inline UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67** get_address_of_m_ControlTreeIndices_40() { return &___m_ControlTreeIndices_40; }
	inline void set_m_ControlTreeIndices_40(UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* value)
	{
		___m_ControlTreeIndices_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ControlTreeIndices_40), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF  : public Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C
{
public:

public:
};


// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B  : public AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A
{
public:

public:
};


// UnityEngine.InputSystem.Controls.AxisControl
struct AxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61  : public InputControl_1_tD9474E386047B0BF9AF076E94A90D4FEEE64E46E
{
public:
	// UnityEngine.InputSystem.Controls.AxisControl/Clamp UnityEngine.InputSystem.Controls.AxisControl::clamp
	int32_t ___clamp_28;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::clampMin
	float ___clampMin_29;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::clampMax
	float ___clampMax_30;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::clampConstant
	float ___clampConstant_31;
	// System.Boolean UnityEngine.InputSystem.Controls.AxisControl::invert
	bool ___invert_32;
	// System.Boolean UnityEngine.InputSystem.Controls.AxisControl::normalize
	bool ___normalize_33;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::normalizeMin
	float ___normalizeMin_34;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::normalizeMax
	float ___normalizeMax_35;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::normalizeZero
	float ___normalizeZero_36;
	// System.Boolean UnityEngine.InputSystem.Controls.AxisControl::scale
	bool ___scale_37;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::scaleFactor
	float ___scaleFactor_38;

public:
	inline static int32_t get_offset_of_clamp_28() { return static_cast<int32_t>(offsetof(AxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61, ___clamp_28)); }
	inline int32_t get_clamp_28() const { return ___clamp_28; }
	inline int32_t* get_address_of_clamp_28() { return &___clamp_28; }
	inline void set_clamp_28(int32_t value)
	{
		___clamp_28 = value;
	}

	inline static int32_t get_offset_of_clampMin_29() { return static_cast<int32_t>(offsetof(AxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61, ___clampMin_29)); }
	inline float get_clampMin_29() const { return ___clampMin_29; }
	inline float* get_address_of_clampMin_29() { return &___clampMin_29; }
	inline void set_clampMin_29(float value)
	{
		___clampMin_29 = value;
	}

	inline static int32_t get_offset_of_clampMax_30() { return static_cast<int32_t>(offsetof(AxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61, ___clampMax_30)); }
	inline float get_clampMax_30() const { return ___clampMax_30; }
	inline float* get_address_of_clampMax_30() { return &___clampMax_30; }
	inline void set_clampMax_30(float value)
	{
		___clampMax_30 = value;
	}

	inline static int32_t get_offset_of_clampConstant_31() { return static_cast<int32_t>(offsetof(AxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61, ___clampConstant_31)); }
	inline float get_clampConstant_31() const { return ___clampConstant_31; }
	inline float* get_address_of_clampConstant_31() { return &___clampConstant_31; }
	inline void set_clampConstant_31(float value)
	{
		___clampConstant_31 = value;
	}

	inline static int32_t get_offset_of_invert_32() { return static_cast<int32_t>(offsetof(AxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61, ___invert_32)); }
	inline bool get_invert_32() const { return ___invert_32; }
	inline bool* get_address_of_invert_32() { return &___invert_32; }
	inline void set_invert_32(bool value)
	{
		___invert_32 = value;
	}

	inline static int32_t get_offset_of_normalize_33() { return static_cast<int32_t>(offsetof(AxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61, ___normalize_33)); }
	inline bool get_normalize_33() const { return ___normalize_33; }
	inline bool* get_address_of_normalize_33() { return &___normalize_33; }
	inline void set_normalize_33(bool value)
	{
		___normalize_33 = value;
	}

	inline static int32_t get_offset_of_normalizeMin_34() { return static_cast<int32_t>(offsetof(AxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61, ___normalizeMin_34)); }
	inline float get_normalizeMin_34() const { return ___normalizeMin_34; }
	inline float* get_address_of_normalizeMin_34() { return &___normalizeMin_34; }
	inline void set_normalizeMin_34(float value)
	{
		___normalizeMin_34 = value;
	}

	inline static int32_t get_offset_of_normalizeMax_35() { return static_cast<int32_t>(offsetof(AxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61, ___normalizeMax_35)); }
	inline float get_normalizeMax_35() const { return ___normalizeMax_35; }
	inline float* get_address_of_normalizeMax_35() { return &___normalizeMax_35; }
	inline void set_normalizeMax_35(float value)
	{
		___normalizeMax_35 = value;
	}

	inline static int32_t get_offset_of_normalizeZero_36() { return static_cast<int32_t>(offsetof(AxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61, ___normalizeZero_36)); }
	inline float get_normalizeZero_36() const { return ___normalizeZero_36; }
	inline float* get_address_of_normalizeZero_36() { return &___normalizeZero_36; }
	inline void set_normalizeZero_36(float value)
	{
		___normalizeZero_36 = value;
	}

	inline static int32_t get_offset_of_scale_37() { return static_cast<int32_t>(offsetof(AxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61, ___scale_37)); }
	inline bool get_scale_37() const { return ___scale_37; }
	inline bool* get_address_of_scale_37() { return &___scale_37; }
	inline void set_scale_37(bool value)
	{
		___scale_37 = value;
	}

	inline static int32_t get_offset_of_scaleFactor_38() { return static_cast<int32_t>(offsetof(AxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61, ___scaleFactor_38)); }
	inline float get_scaleFactor_38() const { return ___scaleFactor_38; }
	inline float* get_address_of_scaleFactor_38() { return &___scaleFactor_38; }
	inline void set_scaleFactor_38(float value)
	{
		___scaleFactor_38 = value;
	}
};


// Block_move
struct Block_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Rigidbody2D Block_move::rbody
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * ___rbody_4;
	// UnityEngine.Animator Block_move::animator
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator_5;
	// System.Int32 Block_move::advent_no
	int32_t ___advent_no_6;
	// System.Int32 Block_move::advent_type
	int32_t ___advent_type_7;
	// System.Int32 Block_move::axisH
	int32_t ___axisH_8;
	// System.Int32 Block_move::axisV
	int32_t ___axisV_9;
	// System.Boolean Block_move::rakka
	bool ___rakka_10;
	// System.Boolean Block_move::isMatching
	bool ___isMatching_11;
	// System.Boolean Block_move::player_freeze
	bool ___player_freeze_12;
	// System.Int32 Block_move::live_cnt
	int32_t ___live_cnt_13;
	// System.Int32 Block_move::mat_x
	int32_t ___mat_x_14;
	// System.Int32 Block_move::mat_y
	int32_t ___mat_y_15;
	// System.Int32 Block_move::old_mat_x
	int32_t ___old_mat_x_16;
	// System.Int32 Block_move::old_mat_y
	int32_t ___old_mat_y_17;
	// System.Boolean Block_move::seishi
	bool ___seishi_18;
	// System.Boolean Block_move::moveButtonJudge
	bool ___moveButtonJudge_19;
	// UnityEngine.GameObject Block_move::block
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___block_20;
	// UnityEngine.GameObject Block_move::starLight
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___starLight_21;
	// UnityEngine.GameObject Block_move::child_nomal
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___child_nomal_22;
	// UnityEngine.GameObject Block_move::child_smile
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___child_smile_23;
	// UnityEngine.GameObject Block_move::child_odoroki
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___child_odoroki_24;
	// UnityEngine.GameObject Block_move::child_awate
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___child_awate_25;
	// UnityEngine.Vector3 Block_move::movePosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___movePosition_26;

public:
	inline static int32_t get_offset_of_rbody_4() { return static_cast<int32_t>(offsetof(Block_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5, ___rbody_4)); }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * get_rbody_4() const { return ___rbody_4; }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 ** get_address_of_rbody_4() { return &___rbody_4; }
	inline void set_rbody_4(Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * value)
	{
		___rbody_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rbody_4), (void*)value);
	}

	inline static int32_t get_offset_of_animator_5() { return static_cast<int32_t>(offsetof(Block_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5, ___animator_5)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_animator_5() const { return ___animator_5; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_animator_5() { return &___animator_5; }
	inline void set_animator_5(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___animator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___animator_5), (void*)value);
	}

	inline static int32_t get_offset_of_advent_no_6() { return static_cast<int32_t>(offsetof(Block_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5, ___advent_no_6)); }
	inline int32_t get_advent_no_6() const { return ___advent_no_6; }
	inline int32_t* get_address_of_advent_no_6() { return &___advent_no_6; }
	inline void set_advent_no_6(int32_t value)
	{
		___advent_no_6 = value;
	}

	inline static int32_t get_offset_of_advent_type_7() { return static_cast<int32_t>(offsetof(Block_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5, ___advent_type_7)); }
	inline int32_t get_advent_type_7() const { return ___advent_type_7; }
	inline int32_t* get_address_of_advent_type_7() { return &___advent_type_7; }
	inline void set_advent_type_7(int32_t value)
	{
		___advent_type_7 = value;
	}

	inline static int32_t get_offset_of_axisH_8() { return static_cast<int32_t>(offsetof(Block_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5, ___axisH_8)); }
	inline int32_t get_axisH_8() const { return ___axisH_8; }
	inline int32_t* get_address_of_axisH_8() { return &___axisH_8; }
	inline void set_axisH_8(int32_t value)
	{
		___axisH_8 = value;
	}

	inline static int32_t get_offset_of_axisV_9() { return static_cast<int32_t>(offsetof(Block_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5, ___axisV_9)); }
	inline int32_t get_axisV_9() const { return ___axisV_9; }
	inline int32_t* get_address_of_axisV_9() { return &___axisV_9; }
	inline void set_axisV_9(int32_t value)
	{
		___axisV_9 = value;
	}

	inline static int32_t get_offset_of_rakka_10() { return static_cast<int32_t>(offsetof(Block_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5, ___rakka_10)); }
	inline bool get_rakka_10() const { return ___rakka_10; }
	inline bool* get_address_of_rakka_10() { return &___rakka_10; }
	inline void set_rakka_10(bool value)
	{
		___rakka_10 = value;
	}

	inline static int32_t get_offset_of_isMatching_11() { return static_cast<int32_t>(offsetof(Block_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5, ___isMatching_11)); }
	inline bool get_isMatching_11() const { return ___isMatching_11; }
	inline bool* get_address_of_isMatching_11() { return &___isMatching_11; }
	inline void set_isMatching_11(bool value)
	{
		___isMatching_11 = value;
	}

	inline static int32_t get_offset_of_player_freeze_12() { return static_cast<int32_t>(offsetof(Block_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5, ___player_freeze_12)); }
	inline bool get_player_freeze_12() const { return ___player_freeze_12; }
	inline bool* get_address_of_player_freeze_12() { return &___player_freeze_12; }
	inline void set_player_freeze_12(bool value)
	{
		___player_freeze_12 = value;
	}

	inline static int32_t get_offset_of_live_cnt_13() { return static_cast<int32_t>(offsetof(Block_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5, ___live_cnt_13)); }
	inline int32_t get_live_cnt_13() const { return ___live_cnt_13; }
	inline int32_t* get_address_of_live_cnt_13() { return &___live_cnt_13; }
	inline void set_live_cnt_13(int32_t value)
	{
		___live_cnt_13 = value;
	}

	inline static int32_t get_offset_of_mat_x_14() { return static_cast<int32_t>(offsetof(Block_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5, ___mat_x_14)); }
	inline int32_t get_mat_x_14() const { return ___mat_x_14; }
	inline int32_t* get_address_of_mat_x_14() { return &___mat_x_14; }
	inline void set_mat_x_14(int32_t value)
	{
		___mat_x_14 = value;
	}

	inline static int32_t get_offset_of_mat_y_15() { return static_cast<int32_t>(offsetof(Block_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5, ___mat_y_15)); }
	inline int32_t get_mat_y_15() const { return ___mat_y_15; }
	inline int32_t* get_address_of_mat_y_15() { return &___mat_y_15; }
	inline void set_mat_y_15(int32_t value)
	{
		___mat_y_15 = value;
	}

	inline static int32_t get_offset_of_old_mat_x_16() { return static_cast<int32_t>(offsetof(Block_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5, ___old_mat_x_16)); }
	inline int32_t get_old_mat_x_16() const { return ___old_mat_x_16; }
	inline int32_t* get_address_of_old_mat_x_16() { return &___old_mat_x_16; }
	inline void set_old_mat_x_16(int32_t value)
	{
		___old_mat_x_16 = value;
	}

	inline static int32_t get_offset_of_old_mat_y_17() { return static_cast<int32_t>(offsetof(Block_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5, ___old_mat_y_17)); }
	inline int32_t get_old_mat_y_17() const { return ___old_mat_y_17; }
	inline int32_t* get_address_of_old_mat_y_17() { return &___old_mat_y_17; }
	inline void set_old_mat_y_17(int32_t value)
	{
		___old_mat_y_17 = value;
	}

	inline static int32_t get_offset_of_seishi_18() { return static_cast<int32_t>(offsetof(Block_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5, ___seishi_18)); }
	inline bool get_seishi_18() const { return ___seishi_18; }
	inline bool* get_address_of_seishi_18() { return &___seishi_18; }
	inline void set_seishi_18(bool value)
	{
		___seishi_18 = value;
	}

	inline static int32_t get_offset_of_moveButtonJudge_19() { return static_cast<int32_t>(offsetof(Block_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5, ___moveButtonJudge_19)); }
	inline bool get_moveButtonJudge_19() const { return ___moveButtonJudge_19; }
	inline bool* get_address_of_moveButtonJudge_19() { return &___moveButtonJudge_19; }
	inline void set_moveButtonJudge_19(bool value)
	{
		___moveButtonJudge_19 = value;
	}

	inline static int32_t get_offset_of_block_20() { return static_cast<int32_t>(offsetof(Block_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5, ___block_20)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_block_20() const { return ___block_20; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_block_20() { return &___block_20; }
	inline void set_block_20(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___block_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___block_20), (void*)value);
	}

	inline static int32_t get_offset_of_starLight_21() { return static_cast<int32_t>(offsetof(Block_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5, ___starLight_21)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_starLight_21() const { return ___starLight_21; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_starLight_21() { return &___starLight_21; }
	inline void set_starLight_21(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___starLight_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___starLight_21), (void*)value);
	}

	inline static int32_t get_offset_of_child_nomal_22() { return static_cast<int32_t>(offsetof(Block_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5, ___child_nomal_22)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_child_nomal_22() const { return ___child_nomal_22; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_child_nomal_22() { return &___child_nomal_22; }
	inline void set_child_nomal_22(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___child_nomal_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___child_nomal_22), (void*)value);
	}

	inline static int32_t get_offset_of_child_smile_23() { return static_cast<int32_t>(offsetof(Block_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5, ___child_smile_23)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_child_smile_23() const { return ___child_smile_23; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_child_smile_23() { return &___child_smile_23; }
	inline void set_child_smile_23(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___child_smile_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___child_smile_23), (void*)value);
	}

	inline static int32_t get_offset_of_child_odoroki_24() { return static_cast<int32_t>(offsetof(Block_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5, ___child_odoroki_24)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_child_odoroki_24() const { return ___child_odoroki_24; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_child_odoroki_24() { return &___child_odoroki_24; }
	inline void set_child_odoroki_24(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___child_odoroki_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___child_odoroki_24), (void*)value);
	}

	inline static int32_t get_offset_of_child_awate_25() { return static_cast<int32_t>(offsetof(Block_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5, ___child_awate_25)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_child_awate_25() const { return ___child_awate_25; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_child_awate_25() { return &___child_awate_25; }
	inline void set_child_awate_25(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___child_awate_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___child_awate_25), (void*)value);
	}

	inline static int32_t get_offset_of_movePosition_26() { return static_cast<int32_t>(offsetof(Block_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5, ___movePosition_26)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_movePosition_26() const { return ___movePosition_26; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_movePosition_26() { return &___movePosition_26; }
	inline void set_movePosition_26(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___movePosition_26 = value;
	}
};


// CameraManager
struct CameraManager_t8E36175FB066C9E1F863A5D7B3A300EAC805D01A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject CameraManager::SubScreen
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___SubScreen_4;
	// System.Single CameraManager::isForceScrollSpeedX
	float ___isForceScrollSpeedX_5;

public:
	inline static int32_t get_offset_of_SubScreen_4() { return static_cast<int32_t>(offsetof(CameraManager_t8E36175FB066C9E1F863A5D7B3A300EAC805D01A, ___SubScreen_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_SubScreen_4() const { return ___SubScreen_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_SubScreen_4() { return &___SubScreen_4; }
	inline void set_SubScreen_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___SubScreen_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SubScreen_4), (void*)value);
	}

	inline static int32_t get_offset_of_isForceScrollSpeedX_5() { return static_cast<int32_t>(offsetof(CameraManager_t8E36175FB066C9E1F863A5D7B3A300EAC805D01A, ___isForceScrollSpeedX_5)); }
	inline float get_isForceScrollSpeedX_5() const { return ___isForceScrollSpeedX_5; }
	inline float* get_address_of_isForceScrollSpeedX_5() { return &___isForceScrollSpeedX_5; }
	inline void set_isForceScrollSpeedX_5(float value)
	{
		___isForceScrollSpeedX_5 = value;
	}
};


// ChangeScene
struct ChangeScene_t911C7BF5D7321A9752D54B4F7A49C0BC816EA919  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String ChangeScene::sceneName
	String_t* ___sceneName_4;

public:
	inline static int32_t get_offset_of_sceneName_4() { return static_cast<int32_t>(offsetof(ChangeScene_t911C7BF5D7321A9752D54B4F7A49C0BC816EA919, ___sceneName_4)); }
	inline String_t* get_sceneName_4() const { return ___sceneName_4; }
	inline String_t** get_address_of_sceneName_4() { return &___sceneName_4; }
	inline void set_sceneName_4(String_t* value)
	{
		___sceneName_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sceneName_4), (void*)value);
	}
};


// GameManager
struct GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.InputSystem.InputAction GameManager::m_input_Mover
	InputAction_t4D95EC15C17EC145072A42B6BCCE3A7317DD96BB * ___m_input_Mover_4;
	// UnityEngine.Vector2 GameManager::m_movementValue
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_movementValue_5;
	// System.Single GameManager::m_fSpeed
	float ___m_fSpeed_6;
	// UnityEngine.GameObject GameManager::new_instance
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___new_instance_7;
	// UnityEngine.GameObject GameManager::UnderWall
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___UnderWall_8;
	// UnityEngine.GameObject GameManager::GameOver
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___GameOver_9;
	// UnityEngine.GameObject GameManager::GameClear
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___GameClear_10;
	// UnityEngine.GameObject GameManager::start_text
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___start_text_11;
	// UnityEngine.GameObject GameManager::go_title
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___go_title_12;
	// UnityEngine.GameObject GameManager::scoreText
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___scoreText_13;
	// UnityEngine.GameObject GameManager::timeText
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___timeText_14;
	// UnityEngine.GameObject GameManager::bonus
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___bonus_15;
	// UnityEngine.GameObject GameManager::bonus_text
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___bonus_text_16;
	// UnityEngine.GameObject GameManager::hi_scoreText
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___hi_scoreText_17;
	// UnityEngine.GameObject GameManager::star_light
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___star_light_18;
	// UnityEngine.AudioSource GameManager::soundPlayer
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___soundPlayer_19;
	// UnityEngine.AudioClip GameManager::meGameStart
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___meGameStart_20;
	// UnityEngine.AudioClip GameManager::meGamePlaying
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___meGamePlaying_21;
	// UnityEngine.AudioClip GameManager::meGameOver
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___meGameOver_22;
	// UnityEngine.AudioClip GameManager::meGameOverBGM
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___meGameOverBGM_23;
	// UnityEngine.AudioClip GameManager::meGameClearBGM
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___meGameClearBGM_24;
	// UnityEngine.AudioClip GameManager::block_erase
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___block_erase_25;
	// UnityEngine.AudioClip GameManager::block_move
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___block_move_26;
	// UnityEngine.AudioClip GameManager::block_rakka
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___block_rakka_27;
	// UnityEngine.AudioClip GameManager::arigatou
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___arigatou_28;
	// UnityEngine.AudioClip GameManager::kangekidesu
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___kangekidesu_29;
	// UnityEngine.AudioClip GameManager::sugoidesu
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___sugoidesu_30;
	// UnityEngine.AudioClip GameManager::yarimashita
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___yarimashita_31;
	// UnityEngine.AudioClip GameManager::panpakapan
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___panpakapan_32;
	// UnityEngine.AudioClip GameManager::yoroshiku
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___yoroshiku_33;
	// UnityEngine.GameObject GameManager::tachie_alice
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___tachie_alice_34;
	// UnityEngine.Sprite GameManager::smile_tachie_alice
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___smile_tachie_alice_35;
	// UnityEngine.GameObject GameManager::block
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___block_36;
	// Block_move GameManager::script
	Block_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5 * ___script_37;
	// System.Int32 GameManager::star_level
	int32_t ___star_level_38;
	// System.Int32 GameManager::star_cnt
	int32_t ___star_cnt_39;
	// System.Int32 GameManager::rensa_cnt
	int32_t ___rensa_cnt_40;
	// System.Int32 GameManager::axisH
	int32_t ___axisH_41;
	// System.Int32 GameManager::axisH_old
	int32_t ___axisH_old_42;
	// System.Int32 GameManager::axisV
	int32_t ___axisV_43;
	// System.Int32 GameManager::axisV_old
	int32_t ___axisV_old_44;
	// System.Boolean GameManager::ini_block
	bool ___ini_block_45;
	// System.Int32 GameManager::mat_x
	int32_t ___mat_x_47;
	// System.Int32 GameManager::mat_y
	int32_t ___mat_y_48;
	// System.Int32 GameManager::temp_cnt
	int32_t ___temp_cnt_49;
	// System.Int32 GameManager::first_cnt
	int32_t ___first_cnt_50;
	// System.Int32 GameManager::first_block
	int32_t ___first_block_51;
	// System.Single GameManager::temp_x
	float ___temp_x_52;
	// System.Single GameManager::temp_y
	float ___temp_y_53;
	// System.Int32 GameManager::ojama_cnt
	int32_t ___ojama_cnt_54;
	// System.Int32 GameManager::score
	int32_t ___score_57;
	// System.Single GameManager::temp_time
	float ___temp_time_58;
	// System.Single GameManager::scene_time
	float ___scene_time_59;
	// System.Int32 GameManager::game_time
	int32_t ___game_time_60;
	// System.Int32 GameManager::old_time
	int32_t ___old_time_61;
	// System.Int32 GameManager::list_num
	int32_t ___list_num_65;
	// System.Single GameManager::next_x
	float ___next_x_66;
	// System.Single GameManager::next_y
	float ___next_y_67;
	// System.Single GameManager::next_z
	float ___next_z_68;
	// System.Boolean GameManager::all_seishi
	bool ___all_seishi_69;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> GameManager::blockList
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___blockList_70;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> GameManager::deleteList
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___deleteList_71;

public:
	inline static int32_t get_offset_of_m_input_Mover_4() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___m_input_Mover_4)); }
	inline InputAction_t4D95EC15C17EC145072A42B6BCCE3A7317DD96BB * get_m_input_Mover_4() const { return ___m_input_Mover_4; }
	inline InputAction_t4D95EC15C17EC145072A42B6BCCE3A7317DD96BB ** get_address_of_m_input_Mover_4() { return &___m_input_Mover_4; }
	inline void set_m_input_Mover_4(InputAction_t4D95EC15C17EC145072A42B6BCCE3A7317DD96BB * value)
	{
		___m_input_Mover_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_input_Mover_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_movementValue_5() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___m_movementValue_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_movementValue_5() const { return ___m_movementValue_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_movementValue_5() { return &___m_movementValue_5; }
	inline void set_m_movementValue_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_movementValue_5 = value;
	}

	inline static int32_t get_offset_of_m_fSpeed_6() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___m_fSpeed_6)); }
	inline float get_m_fSpeed_6() const { return ___m_fSpeed_6; }
	inline float* get_address_of_m_fSpeed_6() { return &___m_fSpeed_6; }
	inline void set_m_fSpeed_6(float value)
	{
		___m_fSpeed_6 = value;
	}

	inline static int32_t get_offset_of_new_instance_7() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___new_instance_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_new_instance_7() const { return ___new_instance_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_new_instance_7() { return &___new_instance_7; }
	inline void set_new_instance_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___new_instance_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___new_instance_7), (void*)value);
	}

	inline static int32_t get_offset_of_UnderWall_8() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___UnderWall_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_UnderWall_8() const { return ___UnderWall_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_UnderWall_8() { return &___UnderWall_8; }
	inline void set_UnderWall_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___UnderWall_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UnderWall_8), (void*)value);
	}

	inline static int32_t get_offset_of_GameOver_9() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___GameOver_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_GameOver_9() const { return ___GameOver_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_GameOver_9() { return &___GameOver_9; }
	inline void set_GameOver_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___GameOver_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GameOver_9), (void*)value);
	}

	inline static int32_t get_offset_of_GameClear_10() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___GameClear_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_GameClear_10() const { return ___GameClear_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_GameClear_10() { return &___GameClear_10; }
	inline void set_GameClear_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___GameClear_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GameClear_10), (void*)value);
	}

	inline static int32_t get_offset_of_start_text_11() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___start_text_11)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_start_text_11() const { return ___start_text_11; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_start_text_11() { return &___start_text_11; }
	inline void set_start_text_11(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___start_text_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___start_text_11), (void*)value);
	}

	inline static int32_t get_offset_of_go_title_12() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___go_title_12)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_go_title_12() const { return ___go_title_12; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_go_title_12() { return &___go_title_12; }
	inline void set_go_title_12(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___go_title_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___go_title_12), (void*)value);
	}

	inline static int32_t get_offset_of_scoreText_13() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___scoreText_13)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_scoreText_13() const { return ___scoreText_13; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_scoreText_13() { return &___scoreText_13; }
	inline void set_scoreText_13(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___scoreText_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scoreText_13), (void*)value);
	}

	inline static int32_t get_offset_of_timeText_14() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___timeText_14)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_timeText_14() const { return ___timeText_14; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_timeText_14() { return &___timeText_14; }
	inline void set_timeText_14(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___timeText_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___timeText_14), (void*)value);
	}

	inline static int32_t get_offset_of_bonus_15() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___bonus_15)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_bonus_15() const { return ___bonus_15; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_bonus_15() { return &___bonus_15; }
	inline void set_bonus_15(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___bonus_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bonus_15), (void*)value);
	}

	inline static int32_t get_offset_of_bonus_text_16() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___bonus_text_16)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_bonus_text_16() const { return ___bonus_text_16; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_bonus_text_16() { return &___bonus_text_16; }
	inline void set_bonus_text_16(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___bonus_text_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bonus_text_16), (void*)value);
	}

	inline static int32_t get_offset_of_hi_scoreText_17() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___hi_scoreText_17)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_hi_scoreText_17() const { return ___hi_scoreText_17; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_hi_scoreText_17() { return &___hi_scoreText_17; }
	inline void set_hi_scoreText_17(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___hi_scoreText_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hi_scoreText_17), (void*)value);
	}

	inline static int32_t get_offset_of_star_light_18() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___star_light_18)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_star_light_18() const { return ___star_light_18; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_star_light_18() { return &___star_light_18; }
	inline void set_star_light_18(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___star_light_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___star_light_18), (void*)value);
	}

	inline static int32_t get_offset_of_soundPlayer_19() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___soundPlayer_19)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_soundPlayer_19() const { return ___soundPlayer_19; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_soundPlayer_19() { return &___soundPlayer_19; }
	inline void set_soundPlayer_19(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___soundPlayer_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___soundPlayer_19), (void*)value);
	}

	inline static int32_t get_offset_of_meGameStart_20() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___meGameStart_20)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_meGameStart_20() const { return ___meGameStart_20; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_meGameStart_20() { return &___meGameStart_20; }
	inline void set_meGameStart_20(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___meGameStart_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meGameStart_20), (void*)value);
	}

	inline static int32_t get_offset_of_meGamePlaying_21() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___meGamePlaying_21)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_meGamePlaying_21() const { return ___meGamePlaying_21; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_meGamePlaying_21() { return &___meGamePlaying_21; }
	inline void set_meGamePlaying_21(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___meGamePlaying_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meGamePlaying_21), (void*)value);
	}

	inline static int32_t get_offset_of_meGameOver_22() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___meGameOver_22)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_meGameOver_22() const { return ___meGameOver_22; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_meGameOver_22() { return &___meGameOver_22; }
	inline void set_meGameOver_22(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___meGameOver_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meGameOver_22), (void*)value);
	}

	inline static int32_t get_offset_of_meGameOverBGM_23() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___meGameOverBGM_23)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_meGameOverBGM_23() const { return ___meGameOverBGM_23; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_meGameOverBGM_23() { return &___meGameOverBGM_23; }
	inline void set_meGameOverBGM_23(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___meGameOverBGM_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meGameOverBGM_23), (void*)value);
	}

	inline static int32_t get_offset_of_meGameClearBGM_24() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___meGameClearBGM_24)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_meGameClearBGM_24() const { return ___meGameClearBGM_24; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_meGameClearBGM_24() { return &___meGameClearBGM_24; }
	inline void set_meGameClearBGM_24(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___meGameClearBGM_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meGameClearBGM_24), (void*)value);
	}

	inline static int32_t get_offset_of_block_erase_25() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___block_erase_25)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_block_erase_25() const { return ___block_erase_25; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_block_erase_25() { return &___block_erase_25; }
	inline void set_block_erase_25(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___block_erase_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___block_erase_25), (void*)value);
	}

	inline static int32_t get_offset_of_block_move_26() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___block_move_26)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_block_move_26() const { return ___block_move_26; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_block_move_26() { return &___block_move_26; }
	inline void set_block_move_26(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___block_move_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___block_move_26), (void*)value);
	}

	inline static int32_t get_offset_of_block_rakka_27() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___block_rakka_27)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_block_rakka_27() const { return ___block_rakka_27; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_block_rakka_27() { return &___block_rakka_27; }
	inline void set_block_rakka_27(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___block_rakka_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___block_rakka_27), (void*)value);
	}

	inline static int32_t get_offset_of_arigatou_28() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___arigatou_28)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_arigatou_28() const { return ___arigatou_28; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_arigatou_28() { return &___arigatou_28; }
	inline void set_arigatou_28(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___arigatou_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___arigatou_28), (void*)value);
	}

	inline static int32_t get_offset_of_kangekidesu_29() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___kangekidesu_29)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_kangekidesu_29() const { return ___kangekidesu_29; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_kangekidesu_29() { return &___kangekidesu_29; }
	inline void set_kangekidesu_29(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___kangekidesu_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___kangekidesu_29), (void*)value);
	}

	inline static int32_t get_offset_of_sugoidesu_30() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___sugoidesu_30)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_sugoidesu_30() const { return ___sugoidesu_30; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_sugoidesu_30() { return &___sugoidesu_30; }
	inline void set_sugoidesu_30(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___sugoidesu_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sugoidesu_30), (void*)value);
	}

	inline static int32_t get_offset_of_yarimashita_31() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___yarimashita_31)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_yarimashita_31() const { return ___yarimashita_31; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_yarimashita_31() { return &___yarimashita_31; }
	inline void set_yarimashita_31(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___yarimashita_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___yarimashita_31), (void*)value);
	}

	inline static int32_t get_offset_of_panpakapan_32() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___panpakapan_32)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_panpakapan_32() const { return ___panpakapan_32; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_panpakapan_32() { return &___panpakapan_32; }
	inline void set_panpakapan_32(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___panpakapan_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___panpakapan_32), (void*)value);
	}

	inline static int32_t get_offset_of_yoroshiku_33() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___yoroshiku_33)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_yoroshiku_33() const { return ___yoroshiku_33; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_yoroshiku_33() { return &___yoroshiku_33; }
	inline void set_yoroshiku_33(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___yoroshiku_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___yoroshiku_33), (void*)value);
	}

	inline static int32_t get_offset_of_tachie_alice_34() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___tachie_alice_34)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_tachie_alice_34() const { return ___tachie_alice_34; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_tachie_alice_34() { return &___tachie_alice_34; }
	inline void set_tachie_alice_34(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___tachie_alice_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tachie_alice_34), (void*)value);
	}

	inline static int32_t get_offset_of_smile_tachie_alice_35() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___smile_tachie_alice_35)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_smile_tachie_alice_35() const { return ___smile_tachie_alice_35; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_smile_tachie_alice_35() { return &___smile_tachie_alice_35; }
	inline void set_smile_tachie_alice_35(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___smile_tachie_alice_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___smile_tachie_alice_35), (void*)value);
	}

	inline static int32_t get_offset_of_block_36() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___block_36)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_block_36() const { return ___block_36; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_block_36() { return &___block_36; }
	inline void set_block_36(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___block_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___block_36), (void*)value);
	}

	inline static int32_t get_offset_of_script_37() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___script_37)); }
	inline Block_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5 * get_script_37() const { return ___script_37; }
	inline Block_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5 ** get_address_of_script_37() { return &___script_37; }
	inline void set_script_37(Block_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5 * value)
	{
		___script_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___script_37), (void*)value);
	}

	inline static int32_t get_offset_of_star_level_38() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___star_level_38)); }
	inline int32_t get_star_level_38() const { return ___star_level_38; }
	inline int32_t* get_address_of_star_level_38() { return &___star_level_38; }
	inline void set_star_level_38(int32_t value)
	{
		___star_level_38 = value;
	}

	inline static int32_t get_offset_of_star_cnt_39() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___star_cnt_39)); }
	inline int32_t get_star_cnt_39() const { return ___star_cnt_39; }
	inline int32_t* get_address_of_star_cnt_39() { return &___star_cnt_39; }
	inline void set_star_cnt_39(int32_t value)
	{
		___star_cnt_39 = value;
	}

	inline static int32_t get_offset_of_rensa_cnt_40() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___rensa_cnt_40)); }
	inline int32_t get_rensa_cnt_40() const { return ___rensa_cnt_40; }
	inline int32_t* get_address_of_rensa_cnt_40() { return &___rensa_cnt_40; }
	inline void set_rensa_cnt_40(int32_t value)
	{
		___rensa_cnt_40 = value;
	}

	inline static int32_t get_offset_of_axisH_41() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___axisH_41)); }
	inline int32_t get_axisH_41() const { return ___axisH_41; }
	inline int32_t* get_address_of_axisH_41() { return &___axisH_41; }
	inline void set_axisH_41(int32_t value)
	{
		___axisH_41 = value;
	}

	inline static int32_t get_offset_of_axisH_old_42() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___axisH_old_42)); }
	inline int32_t get_axisH_old_42() const { return ___axisH_old_42; }
	inline int32_t* get_address_of_axisH_old_42() { return &___axisH_old_42; }
	inline void set_axisH_old_42(int32_t value)
	{
		___axisH_old_42 = value;
	}

	inline static int32_t get_offset_of_axisV_43() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___axisV_43)); }
	inline int32_t get_axisV_43() const { return ___axisV_43; }
	inline int32_t* get_address_of_axisV_43() { return &___axisV_43; }
	inline void set_axisV_43(int32_t value)
	{
		___axisV_43 = value;
	}

	inline static int32_t get_offset_of_axisV_old_44() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___axisV_old_44)); }
	inline int32_t get_axisV_old_44() const { return ___axisV_old_44; }
	inline int32_t* get_address_of_axisV_old_44() { return &___axisV_old_44; }
	inline void set_axisV_old_44(int32_t value)
	{
		___axisV_old_44 = value;
	}

	inline static int32_t get_offset_of_ini_block_45() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___ini_block_45)); }
	inline bool get_ini_block_45() const { return ___ini_block_45; }
	inline bool* get_address_of_ini_block_45() { return &___ini_block_45; }
	inline void set_ini_block_45(bool value)
	{
		___ini_block_45 = value;
	}

	inline static int32_t get_offset_of_mat_x_47() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___mat_x_47)); }
	inline int32_t get_mat_x_47() const { return ___mat_x_47; }
	inline int32_t* get_address_of_mat_x_47() { return &___mat_x_47; }
	inline void set_mat_x_47(int32_t value)
	{
		___mat_x_47 = value;
	}

	inline static int32_t get_offset_of_mat_y_48() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___mat_y_48)); }
	inline int32_t get_mat_y_48() const { return ___mat_y_48; }
	inline int32_t* get_address_of_mat_y_48() { return &___mat_y_48; }
	inline void set_mat_y_48(int32_t value)
	{
		___mat_y_48 = value;
	}

	inline static int32_t get_offset_of_temp_cnt_49() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___temp_cnt_49)); }
	inline int32_t get_temp_cnt_49() const { return ___temp_cnt_49; }
	inline int32_t* get_address_of_temp_cnt_49() { return &___temp_cnt_49; }
	inline void set_temp_cnt_49(int32_t value)
	{
		___temp_cnt_49 = value;
	}

	inline static int32_t get_offset_of_first_cnt_50() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___first_cnt_50)); }
	inline int32_t get_first_cnt_50() const { return ___first_cnt_50; }
	inline int32_t* get_address_of_first_cnt_50() { return &___first_cnt_50; }
	inline void set_first_cnt_50(int32_t value)
	{
		___first_cnt_50 = value;
	}

	inline static int32_t get_offset_of_first_block_51() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___first_block_51)); }
	inline int32_t get_first_block_51() const { return ___first_block_51; }
	inline int32_t* get_address_of_first_block_51() { return &___first_block_51; }
	inline void set_first_block_51(int32_t value)
	{
		___first_block_51 = value;
	}

	inline static int32_t get_offset_of_temp_x_52() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___temp_x_52)); }
	inline float get_temp_x_52() const { return ___temp_x_52; }
	inline float* get_address_of_temp_x_52() { return &___temp_x_52; }
	inline void set_temp_x_52(float value)
	{
		___temp_x_52 = value;
	}

	inline static int32_t get_offset_of_temp_y_53() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___temp_y_53)); }
	inline float get_temp_y_53() const { return ___temp_y_53; }
	inline float* get_address_of_temp_y_53() { return &___temp_y_53; }
	inline void set_temp_y_53(float value)
	{
		___temp_y_53 = value;
	}

	inline static int32_t get_offset_of_ojama_cnt_54() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___ojama_cnt_54)); }
	inline int32_t get_ojama_cnt_54() const { return ___ojama_cnt_54; }
	inline int32_t* get_address_of_ojama_cnt_54() { return &___ojama_cnt_54; }
	inline void set_ojama_cnt_54(int32_t value)
	{
		___ojama_cnt_54 = value;
	}

	inline static int32_t get_offset_of_score_57() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___score_57)); }
	inline int32_t get_score_57() const { return ___score_57; }
	inline int32_t* get_address_of_score_57() { return &___score_57; }
	inline void set_score_57(int32_t value)
	{
		___score_57 = value;
	}

	inline static int32_t get_offset_of_temp_time_58() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___temp_time_58)); }
	inline float get_temp_time_58() const { return ___temp_time_58; }
	inline float* get_address_of_temp_time_58() { return &___temp_time_58; }
	inline void set_temp_time_58(float value)
	{
		___temp_time_58 = value;
	}

	inline static int32_t get_offset_of_scene_time_59() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___scene_time_59)); }
	inline float get_scene_time_59() const { return ___scene_time_59; }
	inline float* get_address_of_scene_time_59() { return &___scene_time_59; }
	inline void set_scene_time_59(float value)
	{
		___scene_time_59 = value;
	}

	inline static int32_t get_offset_of_game_time_60() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___game_time_60)); }
	inline int32_t get_game_time_60() const { return ___game_time_60; }
	inline int32_t* get_address_of_game_time_60() { return &___game_time_60; }
	inline void set_game_time_60(int32_t value)
	{
		___game_time_60 = value;
	}

	inline static int32_t get_offset_of_old_time_61() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___old_time_61)); }
	inline int32_t get_old_time_61() const { return ___old_time_61; }
	inline int32_t* get_address_of_old_time_61() { return &___old_time_61; }
	inline void set_old_time_61(int32_t value)
	{
		___old_time_61 = value;
	}

	inline static int32_t get_offset_of_list_num_65() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___list_num_65)); }
	inline int32_t get_list_num_65() const { return ___list_num_65; }
	inline int32_t* get_address_of_list_num_65() { return &___list_num_65; }
	inline void set_list_num_65(int32_t value)
	{
		___list_num_65 = value;
	}

	inline static int32_t get_offset_of_next_x_66() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___next_x_66)); }
	inline float get_next_x_66() const { return ___next_x_66; }
	inline float* get_address_of_next_x_66() { return &___next_x_66; }
	inline void set_next_x_66(float value)
	{
		___next_x_66 = value;
	}

	inline static int32_t get_offset_of_next_y_67() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___next_y_67)); }
	inline float get_next_y_67() const { return ___next_y_67; }
	inline float* get_address_of_next_y_67() { return &___next_y_67; }
	inline void set_next_y_67(float value)
	{
		___next_y_67 = value;
	}

	inline static int32_t get_offset_of_next_z_68() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___next_z_68)); }
	inline float get_next_z_68() const { return ___next_z_68; }
	inline float* get_address_of_next_z_68() { return &___next_z_68; }
	inline void set_next_z_68(float value)
	{
		___next_z_68 = value;
	}

	inline static int32_t get_offset_of_all_seishi_69() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___all_seishi_69)); }
	inline bool get_all_seishi_69() const { return ___all_seishi_69; }
	inline bool* get_address_of_all_seishi_69() { return &___all_seishi_69; }
	inline void set_all_seishi_69(bool value)
	{
		___all_seishi_69 = value;
	}

	inline static int32_t get_offset_of_blockList_70() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___blockList_70)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_blockList_70() const { return ___blockList_70; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_blockList_70() { return &___blockList_70; }
	inline void set_blockList_70(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___blockList_70 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___blockList_70), (void*)value);
	}

	inline static int32_t get_offset_of_deleteList_71() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___deleteList_71)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_deleteList_71() const { return ___deleteList_71; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_deleteList_71() { return &___deleteList_71; }
	inline void set_deleteList_71(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___deleteList_71 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___deleteList_71), (void*)value);
	}
};


// UnityEngine.InputSystem.Keyboard
struct Keyboard_tCC48D6E5BEEA84E5C5919A4E4B8BDFBE66217D93  : public InputDevice_t956021BC2B6431A5A7A44954131751C3C3EEC06B
{
public:
	// UnityEngine.InputSystem.Controls.AnyKeyControl UnityEngine.InputSystem.Keyboard::<anyKey>k__BackingField
	AnyKeyControl_tAAF6B8BEDCE1B89176B8FA5B025A90BD742841FC * ___U3CanyKeyU3Ek__BackingField_45;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Keyboard::<shiftKey>k__BackingField
	ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * ___U3CshiftKeyU3Ek__BackingField_46;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Keyboard::<ctrlKey>k__BackingField
	ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * ___U3CctrlKeyU3Ek__BackingField_47;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Keyboard::<altKey>k__BackingField
	ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * ___U3CaltKeyU3Ek__BackingField_48;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Keyboard::<imeSelected>k__BackingField
	ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * ___U3CimeSelectedU3Ek__BackingField_49;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<System.Char>> UnityEngine.InputSystem.Keyboard::m_TextInputListeners
	InlinedArray_1_tC596929EC05465CB5EC05A158EBB0AE35106759F  ___m_TextInputListeners_51;
	// System.String UnityEngine.InputSystem.Keyboard::m_KeyboardLayoutName
	String_t* ___m_KeyboardLayoutName_52;
	// UnityEngine.InputSystem.Controls.KeyControl[] UnityEngine.InputSystem.Keyboard::m_Keys
	KeyControlU5BU5D_tD4C5C57749BE8400EC310E4B91FBBF94ADA76FE9* ___m_Keys_53;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.LowLevel.IMECompositionString>> UnityEngine.InputSystem.Keyboard::m_ImeCompositionListeners
	InlinedArray_1_t6134DD37211EC4443C8BF19C36FF6F289C4141F5  ___m_ImeCompositionListeners_54;

public:
	inline static int32_t get_offset_of_U3CanyKeyU3Ek__BackingField_45() { return static_cast<int32_t>(offsetof(Keyboard_tCC48D6E5BEEA84E5C5919A4E4B8BDFBE66217D93, ___U3CanyKeyU3Ek__BackingField_45)); }
	inline AnyKeyControl_tAAF6B8BEDCE1B89176B8FA5B025A90BD742841FC * get_U3CanyKeyU3Ek__BackingField_45() const { return ___U3CanyKeyU3Ek__BackingField_45; }
	inline AnyKeyControl_tAAF6B8BEDCE1B89176B8FA5B025A90BD742841FC ** get_address_of_U3CanyKeyU3Ek__BackingField_45() { return &___U3CanyKeyU3Ek__BackingField_45; }
	inline void set_U3CanyKeyU3Ek__BackingField_45(AnyKeyControl_tAAF6B8BEDCE1B89176B8FA5B025A90BD742841FC * value)
	{
		___U3CanyKeyU3Ek__BackingField_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CanyKeyU3Ek__BackingField_45), (void*)value);
	}

	inline static int32_t get_offset_of_U3CshiftKeyU3Ek__BackingField_46() { return static_cast<int32_t>(offsetof(Keyboard_tCC48D6E5BEEA84E5C5919A4E4B8BDFBE66217D93, ___U3CshiftKeyU3Ek__BackingField_46)); }
	inline ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * get_U3CshiftKeyU3Ek__BackingField_46() const { return ___U3CshiftKeyU3Ek__BackingField_46; }
	inline ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E ** get_address_of_U3CshiftKeyU3Ek__BackingField_46() { return &___U3CshiftKeyU3Ek__BackingField_46; }
	inline void set_U3CshiftKeyU3Ek__BackingField_46(ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * value)
	{
		___U3CshiftKeyU3Ek__BackingField_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CshiftKeyU3Ek__BackingField_46), (void*)value);
	}

	inline static int32_t get_offset_of_U3CctrlKeyU3Ek__BackingField_47() { return static_cast<int32_t>(offsetof(Keyboard_tCC48D6E5BEEA84E5C5919A4E4B8BDFBE66217D93, ___U3CctrlKeyU3Ek__BackingField_47)); }
	inline ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * get_U3CctrlKeyU3Ek__BackingField_47() const { return ___U3CctrlKeyU3Ek__BackingField_47; }
	inline ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E ** get_address_of_U3CctrlKeyU3Ek__BackingField_47() { return &___U3CctrlKeyU3Ek__BackingField_47; }
	inline void set_U3CctrlKeyU3Ek__BackingField_47(ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * value)
	{
		___U3CctrlKeyU3Ek__BackingField_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CctrlKeyU3Ek__BackingField_47), (void*)value);
	}

	inline static int32_t get_offset_of_U3CaltKeyU3Ek__BackingField_48() { return static_cast<int32_t>(offsetof(Keyboard_tCC48D6E5BEEA84E5C5919A4E4B8BDFBE66217D93, ___U3CaltKeyU3Ek__BackingField_48)); }
	inline ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * get_U3CaltKeyU3Ek__BackingField_48() const { return ___U3CaltKeyU3Ek__BackingField_48; }
	inline ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E ** get_address_of_U3CaltKeyU3Ek__BackingField_48() { return &___U3CaltKeyU3Ek__BackingField_48; }
	inline void set_U3CaltKeyU3Ek__BackingField_48(ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * value)
	{
		___U3CaltKeyU3Ek__BackingField_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CaltKeyU3Ek__BackingField_48), (void*)value);
	}

	inline static int32_t get_offset_of_U3CimeSelectedU3Ek__BackingField_49() { return static_cast<int32_t>(offsetof(Keyboard_tCC48D6E5BEEA84E5C5919A4E4B8BDFBE66217D93, ___U3CimeSelectedU3Ek__BackingField_49)); }
	inline ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * get_U3CimeSelectedU3Ek__BackingField_49() const { return ___U3CimeSelectedU3Ek__BackingField_49; }
	inline ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E ** get_address_of_U3CimeSelectedU3Ek__BackingField_49() { return &___U3CimeSelectedU3Ek__BackingField_49; }
	inline void set_U3CimeSelectedU3Ek__BackingField_49(ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * value)
	{
		___U3CimeSelectedU3Ek__BackingField_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CimeSelectedU3Ek__BackingField_49), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextInputListeners_51() { return static_cast<int32_t>(offsetof(Keyboard_tCC48D6E5BEEA84E5C5919A4E4B8BDFBE66217D93, ___m_TextInputListeners_51)); }
	inline InlinedArray_1_tC596929EC05465CB5EC05A158EBB0AE35106759F  get_m_TextInputListeners_51() const { return ___m_TextInputListeners_51; }
	inline InlinedArray_1_tC596929EC05465CB5EC05A158EBB0AE35106759F * get_address_of_m_TextInputListeners_51() { return &___m_TextInputListeners_51; }
	inline void set_m_TextInputListeners_51(InlinedArray_1_tC596929EC05465CB5EC05A158EBB0AE35106759F  value)
	{
		___m_TextInputListeners_51 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_TextInputListeners_51))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_TextInputListeners_51))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_KeyboardLayoutName_52() { return static_cast<int32_t>(offsetof(Keyboard_tCC48D6E5BEEA84E5C5919A4E4B8BDFBE66217D93, ___m_KeyboardLayoutName_52)); }
	inline String_t* get_m_KeyboardLayoutName_52() const { return ___m_KeyboardLayoutName_52; }
	inline String_t** get_address_of_m_KeyboardLayoutName_52() { return &___m_KeyboardLayoutName_52; }
	inline void set_m_KeyboardLayoutName_52(String_t* value)
	{
		___m_KeyboardLayoutName_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_KeyboardLayoutName_52), (void*)value);
	}

	inline static int32_t get_offset_of_m_Keys_53() { return static_cast<int32_t>(offsetof(Keyboard_tCC48D6E5BEEA84E5C5919A4E4B8BDFBE66217D93, ___m_Keys_53)); }
	inline KeyControlU5BU5D_tD4C5C57749BE8400EC310E4B91FBBF94ADA76FE9* get_m_Keys_53() const { return ___m_Keys_53; }
	inline KeyControlU5BU5D_tD4C5C57749BE8400EC310E4B91FBBF94ADA76FE9** get_address_of_m_Keys_53() { return &___m_Keys_53; }
	inline void set_m_Keys_53(KeyControlU5BU5D_tD4C5C57749BE8400EC310E4B91FBBF94ADA76FE9* value)
	{
		___m_Keys_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Keys_53), (void*)value);
	}

	inline static int32_t get_offset_of_m_ImeCompositionListeners_54() { return static_cast<int32_t>(offsetof(Keyboard_tCC48D6E5BEEA84E5C5919A4E4B8BDFBE66217D93, ___m_ImeCompositionListeners_54)); }
	inline InlinedArray_1_t6134DD37211EC4443C8BF19C36FF6F289C4141F5  get_m_ImeCompositionListeners_54() const { return ___m_ImeCompositionListeners_54; }
	inline InlinedArray_1_t6134DD37211EC4443C8BF19C36FF6F289C4141F5 * get_address_of_m_ImeCompositionListeners_54() { return &___m_ImeCompositionListeners_54; }
	inline void set_m_ImeCompositionListeners_54(InlinedArray_1_t6134DD37211EC4443C8BF19C36FF6F289C4141F5  value)
	{
		___m_ImeCompositionListeners_54 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ImeCompositionListeners_54))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ImeCompositionListeners_54))->___additionalValues_2), (void*)NULL);
		#endif
	}
};


// StarLight
struct StarLight_t0CB7FA2711432252DEC6E548400971F8164120BB  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject StarLight::block
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___block_4;
	// System.Int32 StarLight::temp_cnt
	int32_t ___temp_cnt_5;

public:
	inline static int32_t get_offset_of_block_4() { return static_cast<int32_t>(offsetof(StarLight_t0CB7FA2711432252DEC6E548400971F8164120BB, ___block_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_block_4() const { return ___block_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_block_4() { return &___block_4; }
	inline void set_block_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___block_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___block_4), (void*)value);
	}

	inline static int32_t get_offset_of_temp_cnt_5() { return static_cast<int32_t>(offsetof(StarLight_t0CB7FA2711432252DEC6E548400971F8164120BB, ___temp_cnt_5)); }
	inline int32_t get_temp_cnt_5() const { return ___temp_cnt_5; }
	inline int32_t* get_address_of_temp_cnt_5() { return &___temp_cnt_5; }
	inline void set_temp_cnt_5(int32_t value)
	{
		___temp_cnt_5 = value;
	}
};


// Star_bomb
struct Star_bomb_t866D319BD1E902EA98A222CDB9B26439ABA49678  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject Star_bomb::block
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___block_4;
	// System.Int32 Star_bomb::temp_cnt
	int32_t ___temp_cnt_5;

public:
	inline static int32_t get_offset_of_block_4() { return static_cast<int32_t>(offsetof(Star_bomb_t866D319BD1E902EA98A222CDB9B26439ABA49678, ___block_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_block_4() const { return ___block_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_block_4() { return &___block_4; }
	inline void set_block_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___block_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___block_4), (void*)value);
	}

	inline static int32_t get_offset_of_temp_cnt_5() { return static_cast<int32_t>(offsetof(Star_bomb_t866D319BD1E902EA98A222CDB9B26439ABA49678, ___temp_cnt_5)); }
	inline int32_t get_temp_cnt_5() const { return ___temp_cnt_5; }
	inline int32_t* get_address_of_temp_cnt_5() { return &___temp_cnt_5; }
	inline void set_temp_cnt_5(int32_t value)
	{
		___temp_cnt_5 = value;
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// combo
struct combo_tBF8003D506F422421915A0CAE1C24389C5AE8477  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject combo::block
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___block_4;
	// System.Int32 combo::temp_cnt
	int32_t ___temp_cnt_5;

public:
	inline static int32_t get_offset_of_block_4() { return static_cast<int32_t>(offsetof(combo_tBF8003D506F422421915A0CAE1C24389C5AE8477, ___block_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_block_4() const { return ___block_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_block_4() { return &___block_4; }
	inline void set_block_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___block_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___block_4), (void*)value);
	}

	inline static int32_t get_offset_of_temp_cnt_5() { return static_cast<int32_t>(offsetof(combo_tBF8003D506F422421915A0CAE1C24389C5AE8477, ___temp_cnt_5)); }
	inline int32_t get_temp_cnt_5() const { return ___temp_cnt_5; }
	inline int32_t* get_address_of_temp_cnt_5() { return &___temp_cnt_5; }
	inline void set_temp_cnt_5(int32_t value)
	{
		___temp_cnt_5 = value;
	}
};


// forPlay
struct forPlay_t7F59BE4A54B06567987F750BF6AE50CF29A1055A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// intro
struct intro_t8B741C2D68BF5F8F9A22ABFAF61DA56B4151FC1A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String intro::sceneName
	String_t* ___sceneName_4;
	// System.Int32 intro::cn
	int32_t ___cn_5;

public:
	inline static int32_t get_offset_of_sceneName_4() { return static_cast<int32_t>(offsetof(intro_t8B741C2D68BF5F8F9A22ABFAF61DA56B4151FC1A, ___sceneName_4)); }
	inline String_t* get_sceneName_4() const { return ___sceneName_4; }
	inline String_t** get_address_of_sceneName_4() { return &___sceneName_4; }
	inline void set_sceneName_4(String_t* value)
	{
		___sceneName_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sceneName_4), (void*)value);
	}

	inline static int32_t get_offset_of_cn_5() { return static_cast<int32_t>(offsetof(intro_t8B741C2D68BF5F8F9A22ABFAF61DA56B4151FC1A, ___cn_5)); }
	inline int32_t get_cn_5() const { return ___cn_5; }
	inline int32_t* get_address_of_cn_5() { return &___cn_5; }
	inline void set_cn_5(int32_t value)
	{
		___cn_5 = value;
	}
};


// next_block
struct next_block_t85C2E295073D52AC49B2C9008901E97B4DDCF7D4  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Sprite next_block::newBlock1
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___newBlock1_4;
	// UnityEngine.Sprite next_block::newBlock2
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___newBlock2_5;
	// UnityEngine.Sprite next_block::newBlock3
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___newBlock3_6;
	// UnityEngine.Sprite next_block::newBlock4
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___newBlock4_7;
	// UnityEngine.SpriteRenderer next_block::spriteRenderer
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___spriteRenderer_8;

public:
	inline static int32_t get_offset_of_newBlock1_4() { return static_cast<int32_t>(offsetof(next_block_t85C2E295073D52AC49B2C9008901E97B4DDCF7D4, ___newBlock1_4)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_newBlock1_4() const { return ___newBlock1_4; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_newBlock1_4() { return &___newBlock1_4; }
	inline void set_newBlock1_4(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___newBlock1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___newBlock1_4), (void*)value);
	}

	inline static int32_t get_offset_of_newBlock2_5() { return static_cast<int32_t>(offsetof(next_block_t85C2E295073D52AC49B2C9008901E97B4DDCF7D4, ___newBlock2_5)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_newBlock2_5() const { return ___newBlock2_5; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_newBlock2_5() { return &___newBlock2_5; }
	inline void set_newBlock2_5(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___newBlock2_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___newBlock2_5), (void*)value);
	}

	inline static int32_t get_offset_of_newBlock3_6() { return static_cast<int32_t>(offsetof(next_block_t85C2E295073D52AC49B2C9008901E97B4DDCF7D4, ___newBlock3_6)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_newBlock3_6() const { return ___newBlock3_6; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_newBlock3_6() { return &___newBlock3_6; }
	inline void set_newBlock3_6(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___newBlock3_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___newBlock3_6), (void*)value);
	}

	inline static int32_t get_offset_of_newBlock4_7() { return static_cast<int32_t>(offsetof(next_block_t85C2E295073D52AC49B2C9008901E97B4DDCF7D4, ___newBlock4_7)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_newBlock4_7() const { return ___newBlock4_7; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_newBlock4_7() { return &___newBlock4_7; }
	inline void set_newBlock4_7(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___newBlock4_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___newBlock4_7), (void*)value);
	}

	inline static int32_t get_offset_of_spriteRenderer_8() { return static_cast<int32_t>(offsetof(next_block_t85C2E295073D52AC49B2C9008901E97B4DDCF7D4, ___spriteRenderer_8)); }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * get_spriteRenderer_8() const { return ___spriteRenderer_8; }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** get_address_of_spriteRenderer_8() { return &___spriteRenderer_8; }
	inline void set_spriteRenderer_8(SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		___spriteRenderer_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spriteRenderer_8), (void*)value);
	}
};


// title
struct title_tC0AFE2B8DF822EA7143C02ECB6B0FD90CB8A0006  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject title::select_forPlay
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___select_forPlay_4;
	// UnityEngine.GameObject title::select_main
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___select_main_5;
	// System.Int32 title::next_scene
	int32_t ___next_scene_6;

public:
	inline static int32_t get_offset_of_select_forPlay_4() { return static_cast<int32_t>(offsetof(title_tC0AFE2B8DF822EA7143C02ECB6B0FD90CB8A0006, ___select_forPlay_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_select_forPlay_4() const { return ___select_forPlay_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_select_forPlay_4() { return &___select_forPlay_4; }
	inline void set_select_forPlay_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___select_forPlay_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___select_forPlay_4), (void*)value);
	}

	inline static int32_t get_offset_of_select_main_5() { return static_cast<int32_t>(offsetof(title_tC0AFE2B8DF822EA7143C02ECB6B0FD90CB8A0006, ___select_main_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_select_main_5() const { return ___select_main_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_select_main_5() { return &___select_main_5; }
	inline void set_select_main_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___select_main_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___select_main_5), (void*)value);
	}

	inline static int32_t get_offset_of_next_scene_6() { return static_cast<int32_t>(offsetof(title_tC0AFE2B8DF822EA7143C02ECB6B0FD90CB8A0006, ___next_scene_6)); }
	inline int32_t get_next_scene_6() const { return ___next_scene_6; }
	inline int32_t* get_address_of_next_scene_6() { return &___next_scene_6; }
	inline void set_next_scene_6(int32_t value)
	{
		___next_scene_6 = value;
	}
};


// titleStar
struct titleStar_tD53883A1748E72FD1A3B9C973F074EC29907F991  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Rigidbody2D titleStar::rbody
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * ___rbody_4;
	// UnityEngine.Animator titleStar::animator
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator_5;
	// UnityEngine.Vector3 titleStar::pos
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pos_6;

public:
	inline static int32_t get_offset_of_rbody_4() { return static_cast<int32_t>(offsetof(titleStar_tD53883A1748E72FD1A3B9C973F074EC29907F991, ___rbody_4)); }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * get_rbody_4() const { return ___rbody_4; }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 ** get_address_of_rbody_4() { return &___rbody_4; }
	inline void set_rbody_4(Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * value)
	{
		___rbody_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rbody_4), (void*)value);
	}

	inline static int32_t get_offset_of_animator_5() { return static_cast<int32_t>(offsetof(titleStar_tD53883A1748E72FD1A3B9C973F074EC29907F991, ___animator_5)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_animator_5() const { return ___animator_5; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_animator_5() { return &___animator_5; }
	inline void set_animator_5(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___animator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___animator_5), (void*)value);
	}

	inline static int32_t get_offset_of_pos_6() { return static_cast<int32_t>(offsetof(titleStar_tD53883A1748E72FD1A3B9C973F074EC29907F991, ___pos_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_pos_6() const { return ___pos_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_pos_6() { return &___pos_6; }
	inline void set_pos_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___pos_6 = value;
	}
};


// UnityEngine.InputSystem.Controls.ButtonControl
struct ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E  : public AxisControl_t02128A727001F8DCCA822D2C0389ECF078273F61
{
public:
	// System.Single UnityEngine.InputSystem.Controls.ButtonControl::pressPoint
	float ___pressPoint_39;

public:
	inline static int32_t get_offset_of_pressPoint_39() { return static_cast<int32_t>(offsetof(ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E, ___pressPoint_39)); }
	inline float get_pressPoint_39() const { return ___pressPoint_39; }
	inline float* get_address_of_pressPoint_39() { return &___pressPoint_39; }
	inline void set_pressPoint_39(float value)
	{
		___pressPoint_39 = value;
	}
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTargetCache_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTargetCache_11)); }
	inline bool get_m_RaycastTargetCache_11() const { return ___m_RaycastTargetCache_11; }
	inline bool* get_address_of_m_RaycastTargetCache_11() { return &___m_RaycastTargetCache_11; }
	inline void set_m_RaycastTargetCache_11(bool value)
	{
		___m_RaycastTargetCache_11 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_12)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_12() const { return ___m_RaycastPadding_12; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_12() { return &___m_RaycastPadding_12; }
	inline void set_m_RaycastPadding_12(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_12 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_13)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_13() const { return ___m_RectTransform_13; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_13() { return &___m_RectTransform_13; }
	inline void set_m_RectTransform_13(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_14)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_14() const { return ___m_CanvasRenderer_14; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_14() { return &___m_CanvasRenderer_14; }
	inline void set_m_CanvasRenderer_14(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_15)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_15() const { return ___m_Canvas_15; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_15() { return &___m_Canvas_15; }
	inline void set_m_Canvas_15(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_16)); }
	inline bool get_m_VertsDirty_16() const { return ___m_VertsDirty_16; }
	inline bool* get_address_of_m_VertsDirty_16() { return &___m_VertsDirty_16; }
	inline void set_m_VertsDirty_16(bool value)
	{
		___m_VertsDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_17)); }
	inline bool get_m_MaterialDirty_17() const { return ___m_MaterialDirty_17; }
	inline bool* get_address_of_m_MaterialDirty_17() { return &___m_MaterialDirty_17; }
	inline void set_m_MaterialDirty_17(bool value)
	{
		___m_MaterialDirty_17 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_18() const { return ___m_OnDirtyLayoutCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_18() { return &___m_OnDirtyLayoutCallback_18; }
	inline void set_m_OnDirtyLayoutCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_19() const { return ___m_OnDirtyVertsCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_19() { return &___m_OnDirtyVertsCallback_19; }
	inline void set_m_OnDirtyVertsCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_20)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_20() const { return ___m_OnDirtyMaterialCallback_20; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_20() { return &___m_OnDirtyMaterialCallback_20; }
	inline void set_m_OnDirtyMaterialCallback_20(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_23)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_23() const { return ___m_CachedMesh_23; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_23() { return &___m_CachedMesh_23; }
	inline void set_m_CachedMesh_23(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_24)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_24() const { return ___m_CachedUvs_24; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_24() { return &___m_CachedUvs_24; }
	inline void set_m_CachedUvs_24(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_24), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_25)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_25() const { return ___m_ColorTweenRunner_25; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_25() { return &___m_ColorTweenRunner_25; }
	inline void set_m_ColorTweenRunner_25(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_25), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_26() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_26() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_26; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_26(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_26 = value;
	}
};


// UnityEngine.InputSystem.Controls.KeyControl
struct KeyControl_t5784A2F7F3D468FD6D4171430A5592B671FA2635  : public ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E
{
public:
	// UnityEngine.InputSystem.Key UnityEngine.InputSystem.Controls.KeyControl::<keyCode>k__BackingField
	int32_t ___U3CkeyCodeU3Ek__BackingField_43;
	// System.Int32 UnityEngine.InputSystem.Controls.KeyControl::m_ScanCode
	int32_t ___m_ScanCode_44;

public:
	inline static int32_t get_offset_of_U3CkeyCodeU3Ek__BackingField_43() { return static_cast<int32_t>(offsetof(KeyControl_t5784A2F7F3D468FD6D4171430A5592B671FA2635, ___U3CkeyCodeU3Ek__BackingField_43)); }
	inline int32_t get_U3CkeyCodeU3Ek__BackingField_43() const { return ___U3CkeyCodeU3Ek__BackingField_43; }
	inline int32_t* get_address_of_U3CkeyCodeU3Ek__BackingField_43() { return &___U3CkeyCodeU3Ek__BackingField_43; }
	inline void set_U3CkeyCodeU3Ek__BackingField_43(int32_t value)
	{
		___U3CkeyCodeU3Ek__BackingField_43 = value;
	}

	inline static int32_t get_offset_of_m_ScanCode_44() { return static_cast<int32_t>(offsetof(KeyControl_t5784A2F7F3D468FD6D4171430A5592B671FA2635, ___m_ScanCode_44)); }
	inline int32_t get_m_ScanCode_44() const { return ___m_ScanCode_44; }
	inline int32_t* get_address_of_m_ScanCode_44() { return &___m_ScanCode_44; }
	inline void set_m_ScanCode_44(int32_t value)
	{
		___m_ScanCode_44 = value;
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_36;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_27)); }
	inline bool get_m_ShouldRecalculateStencil_27() const { return ___m_ShouldRecalculateStencil_27; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_27() { return &___m_ShouldRecalculateStencil_27; }
	inline void set_m_ShouldRecalculateStencil_27(bool value)
	{
		___m_ShouldRecalculateStencil_27 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_28)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_28() const { return ___m_MaskMaterial_28; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_28() { return &___m_MaskMaterial_28; }
	inline void set_m_MaskMaterial_28(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_29)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_29() const { return ___m_ParentMask_29; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_29() { return &___m_ParentMask_29; }
	inline void set_m_ParentMask_29(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_30)); }
	inline bool get_m_Maskable_30() const { return ___m_Maskable_30; }
	inline bool* get_address_of_m_Maskable_30() { return &___m_Maskable_30; }
	inline void set_m_Maskable_30(bool value)
	{
		___m_Maskable_30 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_31)); }
	inline bool get_m_IsMaskingGraphic_31() const { return ___m_IsMaskingGraphic_31; }
	inline bool* get_address_of_m_IsMaskingGraphic_31() { return &___m_IsMaskingGraphic_31; }
	inline void set_m_IsMaskingGraphic_31(bool value)
	{
		___m_IsMaskingGraphic_31 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_32)); }
	inline bool get_m_IncludeForMasking_32() const { return ___m_IncludeForMasking_32; }
	inline bool* get_address_of_m_IncludeForMasking_32() { return &___m_IncludeForMasking_32; }
	inline void set_m_IncludeForMasking_32(bool value)
	{
		___m_IncludeForMasking_32 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_33)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_33() const { return ___m_OnCullStateChanged_33; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_33() { return &___m_OnCullStateChanged_33; }
	inline void set_m_OnCullStateChanged_33(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_33), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_34)); }
	inline bool get_m_ShouldRecalculate_34() const { return ___m_ShouldRecalculate_34; }
	inline bool* get_address_of_m_ShouldRecalculate_34() { return &___m_ShouldRecalculate_34; }
	inline void set_m_ShouldRecalculate_34(bool value)
	{
		___m_ShouldRecalculate_34 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_35)); }
	inline int32_t get_m_StencilValue_35() const { return ___m_StencilValue_35; }
	inline int32_t* get_address_of_m_StencilValue_35() { return &___m_StencilValue_35; }
	inline void set_m_StencilValue_35(int32_t value)
	{
		___m_StencilValue_35 = value;
	}

	inline static int32_t get_offset_of_m_Corners_36() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_36)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_36() const { return ___m_Corners_36; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_36() { return &___m_Corners_36; }
	inline void set_m_Corners_36(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_36), (void*)value);
	}
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_37;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_39;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_40;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_42;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_43;

public:
	inline static int32_t get_offset_of_m_FontData_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_37)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_37() const { return ___m_FontData_37; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_37() { return &___m_FontData_37; }
	inline void set_m_FontData_37(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_38)); }
	inline String_t* get_m_Text_38() const { return ___m_Text_38; }
	inline String_t** get_address_of_m_Text_38() { return &___m_Text_38; }
	inline void set_m_Text_38(String_t* value)
	{
		___m_Text_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_39() const { return ___m_TextCache_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_39() { return &___m_TextCache_39; }
	inline void set_m_TextCache_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_40)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_40() const { return ___m_TextCacheForLayout_40; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_40() { return &___m_TextCacheForLayout_40; }
	inline void set_m_TextCacheForLayout_40(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_40), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_42)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_42() const { return ___m_DisableFontTextureRebuiltCallback_42; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_42() { return &___m_DisableFontTextureRebuiltCallback_42; }
	inline void set_m_DisableFontTextureRebuiltCallback_42(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_42 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_43() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_43)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_43() const { return ___m_TempVerts_43; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_43() { return &___m_TempVerts_43; }
	inline void set_m_TempVerts_43(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_43), (void*)value);
	}
};


// <Module>


// <Module>


// System.Object


// System.Object


// System.Collections.Generic.List`1<UnityEngine.GameObject>

struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_StaticFields, ____emptyArray_5)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get__emptyArray_5() const { return ____emptyArray_5; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.GameObject>


// System.Collections.Generic.List`1<System.Object>

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


// System.Collections.Generic.List`1<System.Object>

struct Il2CppArrayBounds;

// System.Array

struct Il2CppArrayBounds;

// System.Array


// System.String

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


// System.String


// System.ValueType


// System.ValueType


// System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>


// System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>


// System.Collections.Generic.List`1/Enumerator<System.Object>


// System.Collections.Generic.List`1/Enumerator<System.Object>


// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<System.Char>>


// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<System.Char>>


// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.LowLevel.IMECompositionString>>


// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.LowLevel.IMECompositionString>>


// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>


// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>


// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<System.Single>>


// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<System.Single>>


// System.Boolean

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


// System.Boolean


// UnityEngine.Color


// UnityEngine.Color


// System.Enum

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


// System.Enum


// UnityEngine.InputSystem.Utilities.FourCC


// UnityEngine.InputSystem.Utilities.FourCC


// UnityEngine.InputSystem.Layouts.InputDeviceDescription


// UnityEngine.InputSystem.Layouts.InputDeviceDescription


// System.Int32


// System.Int32


// System.IntPtr

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


// System.IntPtr


// UnityEngine.InputSystem.Utilities.InternedString


// UnityEngine.InputSystem.Utilities.InternedString


// UnityEngine.Quaternion

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Quaternion


// System.Single


// System.Single


// UnityEngine.Vector2

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector2


// UnityEngine.Vector3

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector3


// UnityEngine.Vector4

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// UnityEngine.Vector4


// System.Void


// System.Void


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=352


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=352


// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>


// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>


// <PrivateImplementationDetails>

struct U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528_StaticFields
{
public:
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=352 <PrivateImplementationDetails>::36356283CA439E1391C7224595D11634489404708B446EF7B8E6436CA09961D3
	__StaticArrayInitTypeSizeU3D352_t3FE2F12E8E2919A8AB5AF2FD904BCA42A56F6519  ___36356283CA439E1391C7224595D11634489404708B446EF7B8E6436CA09961D3_0;

public:
	inline static int32_t get_offset_of_U336356283CA439E1391C7224595D11634489404708B446EF7B8E6436CA09961D3_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528_StaticFields, ___36356283CA439E1391C7224595D11634489404708B446EF7B8E6436CA09961D3_0)); }
	inline __StaticArrayInitTypeSizeU3D352_t3FE2F12E8E2919A8AB5AF2FD904BCA42A56F6519  get_U336356283CA439E1391C7224595D11634489404708B446EF7B8E6436CA09961D3_0() const { return ___36356283CA439E1391C7224595D11634489404708B446EF7B8E6436CA09961D3_0; }
	inline __StaticArrayInitTypeSizeU3D352_t3FE2F12E8E2919A8AB5AF2FD904BCA42A56F6519 * get_address_of_U336356283CA439E1391C7224595D11634489404708B446EF7B8E6436CA09961D3_0() { return &___36356283CA439E1391C7224595D11634489404708B446EF7B8E6436CA09961D3_0; }
	inline void set_U336356283CA439E1391C7224595D11634489404708B446EF7B8E6436CA09961D3_0(__StaticArrayInitTypeSizeU3D352_t3FE2F12E8E2919A8AB5AF2FD904BCA42A56F6519  value)
	{
		___36356283CA439E1391C7224595D11634489404708B446EF7B8E6436CA09961D3_0 = value;
	}
};


// <PrivateImplementationDetails>


// UnityEngine.Collision2D


// UnityEngine.Collision2D


// UnityEngine.InputSystem.InputActionType


// UnityEngine.InputSystem.InputActionType


// UnityEngine.InputSystem.LowLevel.InputStateBlock

struct InputStateBlock_t28435F5D9809B0C5790F9A742E4215B8EDEB8A6B_StaticFields
{
public:
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatInvalid
	FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  ___FormatInvalid_2;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatBit
	FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  ___FormatBit_4;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatSBit
	FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  ___FormatSBit_6;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatInt
	FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  ___FormatInt_8;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatUInt
	FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  ___FormatUInt_10;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatShort
	FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  ___FormatShort_12;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatUShort
	FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  ___FormatUShort_14;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatByte
	FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  ___FormatByte_16;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatSByte
	FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  ___FormatSByte_18;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatLong
	FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  ___FormatLong_20;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatULong
	FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  ___FormatULong_22;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatFloat
	FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  ___FormatFloat_24;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatDouble
	FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  ___FormatDouble_26;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector2
	FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  ___FormatVector2_28;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector3
	FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  ___FormatVector3_30;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatQuaternion
	FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  ___FormatQuaternion_32;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector2Short
	FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  ___FormatVector2Short_34;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector3Short
	FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  ___FormatVector3Short_35;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector2Byte
	FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  ___FormatVector2Byte_36;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector3Byte
	FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  ___FormatVector3Byte_37;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatPose
	FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  ___FormatPose_38;

public:
	inline static int32_t get_offset_of_FormatInvalid_2() { return static_cast<int32_t>(offsetof(InputStateBlock_t28435F5D9809B0C5790F9A742E4215B8EDEB8A6B_StaticFields, ___FormatInvalid_2)); }
	inline FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  get_FormatInvalid_2() const { return ___FormatInvalid_2; }
	inline FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1 * get_address_of_FormatInvalid_2() { return &___FormatInvalid_2; }
	inline void set_FormatInvalid_2(FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  value)
	{
		___FormatInvalid_2 = value;
	}

	inline static int32_t get_offset_of_FormatBit_4() { return static_cast<int32_t>(offsetof(InputStateBlock_t28435F5D9809B0C5790F9A742E4215B8EDEB8A6B_StaticFields, ___FormatBit_4)); }
	inline FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  get_FormatBit_4() const { return ___FormatBit_4; }
	inline FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1 * get_address_of_FormatBit_4() { return &___FormatBit_4; }
	inline void set_FormatBit_4(FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  value)
	{
		___FormatBit_4 = value;
	}

	inline static int32_t get_offset_of_FormatSBit_6() { return static_cast<int32_t>(offsetof(InputStateBlock_t28435F5D9809B0C5790F9A742E4215B8EDEB8A6B_StaticFields, ___FormatSBit_6)); }
	inline FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  get_FormatSBit_6() const { return ___FormatSBit_6; }
	inline FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1 * get_address_of_FormatSBit_6() { return &___FormatSBit_6; }
	inline void set_FormatSBit_6(FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  value)
	{
		___FormatSBit_6 = value;
	}

	inline static int32_t get_offset_of_FormatInt_8() { return static_cast<int32_t>(offsetof(InputStateBlock_t28435F5D9809B0C5790F9A742E4215B8EDEB8A6B_StaticFields, ___FormatInt_8)); }
	inline FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  get_FormatInt_8() const { return ___FormatInt_8; }
	inline FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1 * get_address_of_FormatInt_8() { return &___FormatInt_8; }
	inline void set_FormatInt_8(FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  value)
	{
		___FormatInt_8 = value;
	}

	inline static int32_t get_offset_of_FormatUInt_10() { return static_cast<int32_t>(offsetof(InputStateBlock_t28435F5D9809B0C5790F9A742E4215B8EDEB8A6B_StaticFields, ___FormatUInt_10)); }
	inline FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  get_FormatUInt_10() const { return ___FormatUInt_10; }
	inline FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1 * get_address_of_FormatUInt_10() { return &___FormatUInt_10; }
	inline void set_FormatUInt_10(FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  value)
	{
		___FormatUInt_10 = value;
	}

	inline static int32_t get_offset_of_FormatShort_12() { return static_cast<int32_t>(offsetof(InputStateBlock_t28435F5D9809B0C5790F9A742E4215B8EDEB8A6B_StaticFields, ___FormatShort_12)); }
	inline FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  get_FormatShort_12() const { return ___FormatShort_12; }
	inline FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1 * get_address_of_FormatShort_12() { return &___FormatShort_12; }
	inline void set_FormatShort_12(FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  value)
	{
		___FormatShort_12 = value;
	}

	inline static int32_t get_offset_of_FormatUShort_14() { return static_cast<int32_t>(offsetof(InputStateBlock_t28435F5D9809B0C5790F9A742E4215B8EDEB8A6B_StaticFields, ___FormatUShort_14)); }
	inline FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  get_FormatUShort_14() const { return ___FormatUShort_14; }
	inline FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1 * get_address_of_FormatUShort_14() { return &___FormatUShort_14; }
	inline void set_FormatUShort_14(FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  value)
	{
		___FormatUShort_14 = value;
	}

	inline static int32_t get_offset_of_FormatByte_16() { return static_cast<int32_t>(offsetof(InputStateBlock_t28435F5D9809B0C5790F9A742E4215B8EDEB8A6B_StaticFields, ___FormatByte_16)); }
	inline FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  get_FormatByte_16() const { return ___FormatByte_16; }
	inline FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1 * get_address_of_FormatByte_16() { return &___FormatByte_16; }
	inline void set_FormatByte_16(FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  value)
	{
		___FormatByte_16 = value;
	}

	inline static int32_t get_offset_of_FormatSByte_18() { return static_cast<int32_t>(offsetof(InputStateBlock_t28435F5D9809B0C5790F9A742E4215B8EDEB8A6B_StaticFields, ___FormatSByte_18)); }
	inline FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  get_FormatSByte_18() const { return ___FormatSByte_18; }
	inline FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1 * get_address_of_FormatSByte_18() { return &___FormatSByte_18; }
	inline void set_FormatSByte_18(FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  value)
	{
		___FormatSByte_18 = value;
	}

	inline static int32_t get_offset_of_FormatLong_20() { return static_cast<int32_t>(offsetof(InputStateBlock_t28435F5D9809B0C5790F9A742E4215B8EDEB8A6B_StaticFields, ___FormatLong_20)); }
	inline FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  get_FormatLong_20() const { return ___FormatLong_20; }
	inline FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1 * get_address_of_FormatLong_20() { return &___FormatLong_20; }
	inline void set_FormatLong_20(FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  value)
	{
		___FormatLong_20 = value;
	}

	inline static int32_t get_offset_of_FormatULong_22() { return static_cast<int32_t>(offsetof(InputStateBlock_t28435F5D9809B0C5790F9A742E4215B8EDEB8A6B_StaticFields, ___FormatULong_22)); }
	inline FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  get_FormatULong_22() const { return ___FormatULong_22; }
	inline FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1 * get_address_of_FormatULong_22() { return &___FormatULong_22; }
	inline void set_FormatULong_22(FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  value)
	{
		___FormatULong_22 = value;
	}

	inline static int32_t get_offset_of_FormatFloat_24() { return static_cast<int32_t>(offsetof(InputStateBlock_t28435F5D9809B0C5790F9A742E4215B8EDEB8A6B_StaticFields, ___FormatFloat_24)); }
	inline FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  get_FormatFloat_24() const { return ___FormatFloat_24; }
	inline FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1 * get_address_of_FormatFloat_24() { return &___FormatFloat_24; }
	inline void set_FormatFloat_24(FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  value)
	{
		___FormatFloat_24 = value;
	}

	inline static int32_t get_offset_of_FormatDouble_26() { return static_cast<int32_t>(offsetof(InputStateBlock_t28435F5D9809B0C5790F9A742E4215B8EDEB8A6B_StaticFields, ___FormatDouble_26)); }
	inline FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  get_FormatDouble_26() const { return ___FormatDouble_26; }
	inline FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1 * get_address_of_FormatDouble_26() { return &___FormatDouble_26; }
	inline void set_FormatDouble_26(FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  value)
	{
		___FormatDouble_26 = value;
	}

	inline static int32_t get_offset_of_FormatVector2_28() { return static_cast<int32_t>(offsetof(InputStateBlock_t28435F5D9809B0C5790F9A742E4215B8EDEB8A6B_StaticFields, ___FormatVector2_28)); }
	inline FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  get_FormatVector2_28() const { return ___FormatVector2_28; }
	inline FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1 * get_address_of_FormatVector2_28() { return &___FormatVector2_28; }
	inline void set_FormatVector2_28(FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  value)
	{
		___FormatVector2_28 = value;
	}

	inline static int32_t get_offset_of_FormatVector3_30() { return static_cast<int32_t>(offsetof(InputStateBlock_t28435F5D9809B0C5790F9A742E4215B8EDEB8A6B_StaticFields, ___FormatVector3_30)); }
	inline FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  get_FormatVector3_30() const { return ___FormatVector3_30; }
	inline FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1 * get_address_of_FormatVector3_30() { return &___FormatVector3_30; }
	inline void set_FormatVector3_30(FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  value)
	{
		___FormatVector3_30 = value;
	}

	inline static int32_t get_offset_of_FormatQuaternion_32() { return static_cast<int32_t>(offsetof(InputStateBlock_t28435F5D9809B0C5790F9A742E4215B8EDEB8A6B_StaticFields, ___FormatQuaternion_32)); }
	inline FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  get_FormatQuaternion_32() const { return ___FormatQuaternion_32; }
	inline FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1 * get_address_of_FormatQuaternion_32() { return &___FormatQuaternion_32; }
	inline void set_FormatQuaternion_32(FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  value)
	{
		___FormatQuaternion_32 = value;
	}

	inline static int32_t get_offset_of_FormatVector2Short_34() { return static_cast<int32_t>(offsetof(InputStateBlock_t28435F5D9809B0C5790F9A742E4215B8EDEB8A6B_StaticFields, ___FormatVector2Short_34)); }
	inline FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  get_FormatVector2Short_34() const { return ___FormatVector2Short_34; }
	inline FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1 * get_address_of_FormatVector2Short_34() { return &___FormatVector2Short_34; }
	inline void set_FormatVector2Short_34(FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  value)
	{
		___FormatVector2Short_34 = value;
	}

	inline static int32_t get_offset_of_FormatVector3Short_35() { return static_cast<int32_t>(offsetof(InputStateBlock_t28435F5D9809B0C5790F9A742E4215B8EDEB8A6B_StaticFields, ___FormatVector3Short_35)); }
	inline FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  get_FormatVector3Short_35() const { return ___FormatVector3Short_35; }
	inline FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1 * get_address_of_FormatVector3Short_35() { return &___FormatVector3Short_35; }
	inline void set_FormatVector3Short_35(FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  value)
	{
		___FormatVector3Short_35 = value;
	}

	inline static int32_t get_offset_of_FormatVector2Byte_36() { return static_cast<int32_t>(offsetof(InputStateBlock_t28435F5D9809B0C5790F9A742E4215B8EDEB8A6B_StaticFields, ___FormatVector2Byte_36)); }
	inline FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  get_FormatVector2Byte_36() const { return ___FormatVector2Byte_36; }
	inline FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1 * get_address_of_FormatVector2Byte_36() { return &___FormatVector2Byte_36; }
	inline void set_FormatVector2Byte_36(FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  value)
	{
		___FormatVector2Byte_36 = value;
	}

	inline static int32_t get_offset_of_FormatVector3Byte_37() { return static_cast<int32_t>(offsetof(InputStateBlock_t28435F5D9809B0C5790F9A742E4215B8EDEB8A6B_StaticFields, ___FormatVector3Byte_37)); }
	inline FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  get_FormatVector3Byte_37() const { return ___FormatVector3Byte_37; }
	inline FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1 * get_address_of_FormatVector3Byte_37() { return &___FormatVector3Byte_37; }
	inline void set_FormatVector3Byte_37(FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  value)
	{
		___FormatVector3Byte_37 = value;
	}

	inline static int32_t get_offset_of_FormatPose_38() { return static_cast<int32_t>(offsetof(InputStateBlock_t28435F5D9809B0C5790F9A742E4215B8EDEB8A6B_StaticFields, ___FormatPose_38)); }
	inline FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  get_FormatPose_38() const { return ___FormatPose_38; }
	inline FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1 * get_address_of_FormatPose_38() { return &___FormatPose_38; }
	inline void set_FormatPose_38(FourCC_t6C870D87B866E5D87DB3314AF59520B6970157E1  value)
	{
		___FormatPose_38 = value;
	}
};


// UnityEngine.InputSystem.LowLevel.InputStateBlock


// UnityEngine.InputSystem.Key


// UnityEngine.InputSystem.Key


// UnityEngine.Object

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


// UnityEngine.Object


// UnityEngine.RigidbodyConstraints2D


// UnityEngine.RigidbodyConstraints2D


// System.RuntimeFieldHandle


// System.RuntimeFieldHandle


// unityroom.Api.ScoreboardWriteMode


// unityroom.Api.ScoreboardWriteMode


// System.TypeCode


// System.TypeCode


// UnityEngine.InputSystem.Controls.AxisControl/Clamp


// UnityEngine.InputSystem.Controls.AxisControl/Clamp


// UnityEngine.InputSystem.InputAction/ActionFlags


// UnityEngine.InputSystem.InputAction/ActionFlags


// UnityEngine.InputSystem.InputBinding/Flags


// UnityEngine.InputSystem.InputBinding/Flags


// UnityEngine.InputSystem.InputControl/ControlFlags


// UnityEngine.InputSystem.InputControl/ControlFlags


// UnityEngine.InputSystem.InputDevice/DeviceFlags


// UnityEngine.InputSystem.InputDevice/DeviceFlags


// UnityEngine.AudioClip


// UnityEngine.AudioClip


// UnityEngine.Component


// UnityEngine.Component


// UnityEngine.GameObject


// UnityEngine.GameObject


// UnityEngine.InputSystem.InputBinding


// UnityEngine.InputSystem.InputBinding


// UnityEngine.InputSystem.Utilities.PrimitiveValue


// UnityEngine.InputSystem.Utilities.PrimitiveValue


// UnityEngine.Sprite


// UnityEngine.Sprite


// System.Nullable`1<UnityEngine.InputSystem.InputBinding>


// System.Nullable`1<UnityEngine.InputSystem.InputBinding>


// UnityEngine.Behaviour


// UnityEngine.Behaviour


// UnityEngine.InputSystem.InputControl


// UnityEngine.InputSystem.InputControl


// UnityEngine.Renderer


// UnityEngine.Renderer


// UnityEngine.Rigidbody2D


// UnityEngine.Rigidbody2D


// UnityEngine.Transform


// UnityEngine.Transform


// UnityEngine.InputSystem.InputControl`1<System.Single>


// UnityEngine.InputSystem.InputControl`1<System.Single>


// UnityEngine.Animator


// UnityEngine.Animator


// UnityEngine.AudioBehaviour


// UnityEngine.AudioBehaviour


// UnityEngine.InputSystem.InputAction


// UnityEngine.InputSystem.InputAction


// UnityEngine.InputSystem.InputDevice


// UnityEngine.InputSystem.InputDevice


// UnityEngine.MonoBehaviour


// UnityEngine.MonoBehaviour


// UnityEngine.SpriteRenderer


// UnityEngine.SpriteRenderer


// UnityEngine.AudioSource


// UnityEngine.AudioSource


// UnityEngine.InputSystem.Controls.AxisControl


// UnityEngine.InputSystem.Controls.AxisControl


// Block_move


// Block_move


// CameraManager


// CameraManager


// ChangeScene


// ChangeScene


// GameManager

struct GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields
{
public:
	// System.Boolean GameManager::player_control
	bool ___player_control_46;
	// System.Int32 GameManager::game_level
	int32_t ___game_level_55;
	// System.Int32 GameManager::hi_score
	int32_t ___hi_score_56;
	// System.Int32 GameManager::next_block
	int32_t ___next_block_62;
	// System.Int32 GameManager::Advent_num
	int32_t ___Advent_num_63;
	// System.Int32 GameManager::trigger
	int32_t ___trigger_64;
	// System.Int32[0...,0...] GameManager::block_matrix
	Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* ___block_matrix_72;
	// System.Int32[0...,0...] GameManager::block_matrix_tag
	Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* ___block_matrix_tag_73;

public:
	inline static int32_t get_offset_of_player_control_46() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields, ___player_control_46)); }
	inline bool get_player_control_46() const { return ___player_control_46; }
	inline bool* get_address_of_player_control_46() { return &___player_control_46; }
	inline void set_player_control_46(bool value)
	{
		___player_control_46 = value;
	}

	inline static int32_t get_offset_of_game_level_55() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields, ___game_level_55)); }
	inline int32_t get_game_level_55() const { return ___game_level_55; }
	inline int32_t* get_address_of_game_level_55() { return &___game_level_55; }
	inline void set_game_level_55(int32_t value)
	{
		___game_level_55 = value;
	}

	inline static int32_t get_offset_of_hi_score_56() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields, ___hi_score_56)); }
	inline int32_t get_hi_score_56() const { return ___hi_score_56; }
	inline int32_t* get_address_of_hi_score_56() { return &___hi_score_56; }
	inline void set_hi_score_56(int32_t value)
	{
		___hi_score_56 = value;
	}

	inline static int32_t get_offset_of_next_block_62() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields, ___next_block_62)); }
	inline int32_t get_next_block_62() const { return ___next_block_62; }
	inline int32_t* get_address_of_next_block_62() { return &___next_block_62; }
	inline void set_next_block_62(int32_t value)
	{
		___next_block_62 = value;
	}

	inline static int32_t get_offset_of_Advent_num_63() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields, ___Advent_num_63)); }
	inline int32_t get_Advent_num_63() const { return ___Advent_num_63; }
	inline int32_t* get_address_of_Advent_num_63() { return &___Advent_num_63; }
	inline void set_Advent_num_63(int32_t value)
	{
		___Advent_num_63 = value;
	}

	inline static int32_t get_offset_of_trigger_64() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields, ___trigger_64)); }
	inline int32_t get_trigger_64() const { return ___trigger_64; }
	inline int32_t* get_address_of_trigger_64() { return &___trigger_64; }
	inline void set_trigger_64(int32_t value)
	{
		___trigger_64 = value;
	}

	inline static int32_t get_offset_of_block_matrix_72() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields, ___block_matrix_72)); }
	inline Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* get_block_matrix_72() const { return ___block_matrix_72; }
	inline Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17** get_address_of_block_matrix_72() { return &___block_matrix_72; }
	inline void set_block_matrix_72(Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* value)
	{
		___block_matrix_72 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___block_matrix_72), (void*)value);
	}

	inline static int32_t get_offset_of_block_matrix_tag_73() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields, ___block_matrix_tag_73)); }
	inline Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* get_block_matrix_tag_73() const { return ___block_matrix_tag_73; }
	inline Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17** get_address_of_block_matrix_tag_73() { return &___block_matrix_tag_73; }
	inline void set_block_matrix_tag_73(Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* value)
	{
		___block_matrix_tag_73 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___block_matrix_tag_73), (void*)value);
	}
};


// GameManager


// UnityEngine.InputSystem.Keyboard

struct Keyboard_tCC48D6E5BEEA84E5C5919A4E4B8BDFBE66217D93_StaticFields
{
public:
	// UnityEngine.InputSystem.Keyboard UnityEngine.InputSystem.Keyboard::<current>k__BackingField
	Keyboard_tCC48D6E5BEEA84E5C5919A4E4B8BDFBE66217D93 * ___U3CcurrentU3Ek__BackingField_50;

public:
	inline static int32_t get_offset_of_U3CcurrentU3Ek__BackingField_50() { return static_cast<int32_t>(offsetof(Keyboard_tCC48D6E5BEEA84E5C5919A4E4B8BDFBE66217D93_StaticFields, ___U3CcurrentU3Ek__BackingField_50)); }
	inline Keyboard_tCC48D6E5BEEA84E5C5919A4E4B8BDFBE66217D93 * get_U3CcurrentU3Ek__BackingField_50() const { return ___U3CcurrentU3Ek__BackingField_50; }
	inline Keyboard_tCC48D6E5BEEA84E5C5919A4E4B8BDFBE66217D93 ** get_address_of_U3CcurrentU3Ek__BackingField_50() { return &___U3CcurrentU3Ek__BackingField_50; }
	inline void set_U3CcurrentU3Ek__BackingField_50(Keyboard_tCC48D6E5BEEA84E5C5919A4E4B8BDFBE66217D93 * value)
	{
		___U3CcurrentU3Ek__BackingField_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcurrentU3Ek__BackingField_50), (void*)value);
	}
};


// UnityEngine.InputSystem.Keyboard


// StarLight


// StarLight


// Star_bomb


// Star_bomb


// UnityEngine.EventSystems.UIBehaviour


// UnityEngine.EventSystems.UIBehaviour


// combo


// combo


// forPlay


// forPlay


// intro


// intro


// next_block


// next_block


// title


// title


// titleStar


// titleStar


// UnityEngine.InputSystem.Controls.ButtonControl

struct ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E_StaticFields
{
public:
	// System.Single UnityEngine.InputSystem.Controls.ButtonControl::s_GlobalDefaultButtonPressPoint
	float ___s_GlobalDefaultButtonPressPoint_40;
	// System.Single UnityEngine.InputSystem.Controls.ButtonControl::s_GlobalDefaultButtonReleaseThreshold
	float ___s_GlobalDefaultButtonReleaseThreshold_41;

public:
	inline static int32_t get_offset_of_s_GlobalDefaultButtonPressPoint_40() { return static_cast<int32_t>(offsetof(ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E_StaticFields, ___s_GlobalDefaultButtonPressPoint_40)); }
	inline float get_s_GlobalDefaultButtonPressPoint_40() const { return ___s_GlobalDefaultButtonPressPoint_40; }
	inline float* get_address_of_s_GlobalDefaultButtonPressPoint_40() { return &___s_GlobalDefaultButtonPressPoint_40; }
	inline void set_s_GlobalDefaultButtonPressPoint_40(float value)
	{
		___s_GlobalDefaultButtonPressPoint_40 = value;
	}

	inline static int32_t get_offset_of_s_GlobalDefaultButtonReleaseThreshold_41() { return static_cast<int32_t>(offsetof(ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E_StaticFields, ___s_GlobalDefaultButtonReleaseThreshold_41)); }
	inline float get_s_GlobalDefaultButtonReleaseThreshold_41() const { return ___s_GlobalDefaultButtonReleaseThreshold_41; }
	inline float* get_address_of_s_GlobalDefaultButtonReleaseThreshold_41() { return &___s_GlobalDefaultButtonReleaseThreshold_41; }
	inline void set_s_GlobalDefaultButtonReleaseThreshold_41(float value)
	{
		___s_GlobalDefaultButtonReleaseThreshold_41 = value;
	}
};


// UnityEngine.InputSystem.Controls.ButtonControl


// UnityEngine.UI.Graphic

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_21;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_22;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_21)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_21() const { return ___s_Mesh_21; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_21() { return &___s_Mesh_21; }
	inline void set_s_Mesh_21(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_21), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_22)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_22() const { return ___s_VertexHelper_22; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_22() { return &___s_VertexHelper_22; }
	inline void set_s_VertexHelper_22(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_22), (void*)value);
	}
};


// UnityEngine.UI.Graphic


// UnityEngine.InputSystem.Controls.KeyControl


// UnityEngine.InputSystem.Controls.KeyControl


// UnityEngine.UI.MaskableGraphic


// UnityEngine.UI.MaskableGraphic


// UnityEngine.UI.Text

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_41;

public:
	inline static int32_t get_offset_of_s_DefaultText_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_41)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_41() const { return ___s_DefaultText_41; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_41() { return &___s_DefaultText_41; }
	inline void set_s_DefaultText_41(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_41), (void*)value);
	}
};


// UnityEngine.UI.Text

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Int32[0...,0...]
struct Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17  : public RuntimeArray
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
	inline int32_t GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, int32_t value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, int32_t value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
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


// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Resources::Load<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Resources_Load_TisRuntimeObject_mD47CC322E1CBCFE7AB4E22D728C12B44986FCB88_gshared (String_t* ___path0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mBD77C0F802DCADE1347AF93EA32016846C791C65_gshared (RuntimeObject * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.InputSystem.InputAction::ReadValue<UnityEngine.Vector2>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  InputAction_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m592669BB88E7CCE2434F99A3EAF6E9CD36BC45DC_gshared (InputAction_t4D95EC15C17EC145072A42B6BCCE3A7317DD96BB * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m565E2A2E28EE3B4621B2F5C662D569D56A3AE99F_gshared (RuntimeObject * ___original0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);

// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::set_constraints(UnityEngine.RigidbodyConstraints2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_constraints_mEB2202406AB063F57E273F4313E7E4D58D613263 (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mBDC17991A372E11E2E485EFC5C72F58972CBEC0F (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::set_drag(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_drag_m861543742E06889169BB1A496193B9226475D628 (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_m101DE5340601C037D9252FB6B99AD18C793C54A1_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::AddForce(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_AddForce_mB4754FC98ED65E5381854CDC858D12F0504FB3A2 (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___force0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Rigidbody2D::IsSleeping()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rigidbody2D_IsSleeping_m5F66876DC3B594F2A9949E1785946F4CA994707B (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mF558623BBB4EE65C8810243B05ED204A9E8D6FD1 (const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m6993313A5BE51551C96597F20A81672422A051E4 (String_t* ___sceneName0, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.InputAction::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_Enable_m011BE1C7402E3381931D684ACC153581E7D31A41 (InputAction_t4D95EC15C17EC145072A42B6BCCE3A7317DD96BB * __this, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.InputAction::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_Disable_m1D698DD82368C9023C4F0E36DEB234C9930ACED7 (InputAction_t4D95EC15C17EC145072A42B6BCCE3A7317DD96BB * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m37345890E8136134556D27E57315B584AC51D53F (RuntimeArray * ___array0, RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  ___fldHandle1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.Physics2D::set_gravity(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Physics2D_set_gravity_m2F4EE903F4B7DA3A10DC96B48ACC6EF37B4AFB7F (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_mCD7505433C26B6FA511AC1EA07E58AEF7ED1C213 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Text>()
inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayOneShot_mA90B136041A61C30909301D45D0315088CA7D796 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___clip0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, String_t* ___methodName0, float ___time1, const RuntimeMethod* method);
// !!0 UnityEngine.Resources::Load<UnityEngine.GameObject>(System.String)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Resources_Load_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m62550836383D7EFD35F4AC65927D954DB87BAE90 (String_t* ___path0, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (String_t*, const RuntimeMethod*))Resources_Load_TisRuntimeObject_mD47CC322E1CBCFE7AB4E22D728C12B44986FCB88_gshared)(___path0, method);
}
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Euler_mD694BA6F38A792C3D728A8BBAFF13000F5F3B64A (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3D9494354F266A105B5A9DE8603B57850EAD902F (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mBD77C0F802DCADE1347AF93EA32016846C791C65_gshared)(___original0, ___position1, ___rotation2, method);
}
// !!0 UnityEngine.GameObject::AddComponent<Block_move>()
inline Block_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5 * GameObject_AddComponent_TisBlock_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5_m8353861C53A9C5907C36DEAD660B13405A342430 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Block_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(!0)
inline void List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3 (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
inline int32_t List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Void UnityEngine.AudioSource::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Stop_mADA564D223832A64F8CF3EFBDEB534C0D658810F (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.GameObject>::GetEnumerator()
inline Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14  List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6 (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14  (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::get_Current()
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_inline (Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 * __this, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m5D784E6CEEBE99ED8749AA4B9491D926273FD749 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<Block_move>()
inline Block_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5 * GameObject_GetComponent_TisBlock_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5_mCB23DDD42F5DBA9CEF807C25FF71D2B71E0A6499 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Block_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::MoveNext()
inline bool Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7 (Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::Dispose()
inline void Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9 (Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// !!0 UnityEngine.InputSystem.InputAction::ReadValue<UnityEngine.Vector2>()
inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  InputAction_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m592669BB88E7CCE2434F99A3EAF6E9CD36BC45DC (InputAction_t4D95EC15C17EC145072A42B6BCCE3A7317DD96BB * __this, const RuntimeMethod* method)
{
	return ((  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  (*) (InputAction_t4D95EC15C17EC145072A42B6BCCE3A7317DD96BB *, const RuntimeMethod*))InputAction_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m592669BB88E7CCE2434F99A3EAF6E9CD36BC45DC_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Void UnityEngine.Transform::Translate(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_mC9343E1E646DA8FD42BE37137ACCBB4B52093F5C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void GameManager::UpdateScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_UpdateScore_m47A707C284FD9E97A180AF5021B438473BF7233A (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// System.Int32 System.Array::GetLength(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_GetLength_m8EF840DA7BEB0DFF04D36C3DC651B673C49A02BB (RuntimeArray * __this, int32_t ___dimension0, const RuntimeMethod* method);
// System.Void GameManager::DeleteBlock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_DeleteBlock_m4EB529BAF829BCE6F52C0CCF6A0525995696F295 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mE8DB64A28C8709FB890A9770C8F35CD32CD04C75 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m565E2A2E28EE3B4621B2F5C662D569D56A3AE99F_gshared)(___original0, method);
}
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.SpriteRenderer::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A (SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * __this, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Clear()
inline void List_1_Clear_m7DF03CE7132B7D4C6AA2AEEA9BD1A8755AE12432 (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, const RuntimeMethod*))List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared)(__this, method);
}
// UnityEngine.InputSystem.Keyboard UnityEngine.InputSystem.Keyboard::get_current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Keyboard_tCC48D6E5BEEA84E5C5919A4E4B8BDFBE66217D93 * Keyboard_get_current_m69915C940B4DAD0284011AF0D1F615756DED2D55_inline (const RuntimeMethod* method);
// UnityEngine.InputSystem.Controls.KeyControl UnityEngine.InputSystem.Keyboard::get_enterKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyControl_t5784A2F7F3D468FD6D4171430A5592B671FA2635 * Keyboard_get_enterKey_m8B88BCF058F864E9B8958429C2CEA7557D6A977B (Keyboard_tCC48D6E5BEEA84E5C5919A4E4B8BDFBE66217D93 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.InputSystem.Controls.ButtonControl::get_isPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ButtonControl_get_isPressed_mA47E586507F057991A4CE38B8C0FBC9E9B93ED24 (ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mC41740F000A5A48F8D313FB4CEE0E35E207A2632 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// unityroom.Api.IUnityroomApiClient unityroom.Api.UnityroomApiClient::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityroomApiClient_get_Instance_m69BA3AEE4073E63FA67204249CF008F0D13F1B0E (const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8 (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Boolean UnityEngine.InputSystem.Controls.ButtonControl::get_wasPressedThisFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ButtonControl_get_wasPressedThisFrame_m4071D0C3B7117844630EEE75BC4B0ADB48096740 (ButtonControl_t4DA13F37F6E8A3B9A5E8E585132DCF626594A36E * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.InputSystem.Controls.KeyControl UnityEngine.InputSystem.Keyboard::get_upArrowKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyControl_t5784A2F7F3D468FD6D4171430A5592B671FA2635 * Keyboard_get_upArrowKey_mD9DDB310779F602E84A5CAF45ED7C4EBDB049F6C (Keyboard_tCC48D6E5BEEA84E5C5919A4E4B8BDFBE66217D93 * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.Controls.KeyControl UnityEngine.InputSystem.Keyboard::get_downArrowKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyControl_t5784A2F7F3D468FD6D4171430A5592B671FA2635 * Keyboard_get_downArrowKey_mCC56E5BABF57992C26881C49508CFC5712552FE4 (Keyboard_tCC48D6E5BEEA84E5C5919A4E4B8BDFBE66217D93 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mBCBF2D9FD1B5F0D8D8595B15B7460889D60C8070 (const RuntimeMethod* method);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Block_move::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Block_move_Start_m36C1EA6DBE6B041F2B2EEBE58AD6AFECA2E29041 (Block_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rbody = this.GetComponent<Rigidbody2D>();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_0;
		L_0 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		__this->set_rbody_4(L_0);
		// animator = GetComponent<Animator>();
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_1;
		L_1 = Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		__this->set_animator_5(L_1);
		// child_smile = gameObject.transform.GetChild(1).gameObject;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_2, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_3, 1, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_4, /*hidden argument*/NULL);
		__this->set_child_smile_23(L_5);
		// child_nomal = gameObject.transform.GetChild(2).gameObject;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_6, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_7, 2, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_8, /*hidden argument*/NULL);
		__this->set_child_nomal_22(L_9);
		// child_odoroki = gameObject.transform.GetChild(3).gameObject;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10;
		L_10 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_10, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_11, 3, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13;
		L_13 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_12, /*hidden argument*/NULL);
		__this->set_child_odoroki_24(L_13);
		// child_awate = gameObject.transform.GetChild(4).gameObject;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14;
		L_14 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
		L_15 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_14, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_15, 4, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17;
		L_17 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_16, /*hidden argument*/NULL);
		__this->set_child_awate_25(L_17);
		// child_smile.SetActive (true);  //最初はスマイル
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18 = __this->get_child_smile_23();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_18, (bool)1, /*hidden argument*/NULL);
		// child_nomal.SetActive (false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19 = __this->get_child_nomal_22();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_19, (bool)0, /*hidden argument*/NULL);
		// child_odoroki.SetActive (false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20 = __this->get_child_odoroki_24();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_20, (bool)0, /*hidden argument*/NULL);
		// child_awate.SetActive (false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21 = __this->get_child_awate_25();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_21, (bool)0, /*hidden argument*/NULL);
		// rbody.constraints = RigidbodyConstraints2D.FreezePositionX;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_22 = __this->get_rbody_4();
		Rigidbody2D_set_constraints_mEB2202406AB063F57E273F4313E7E4D58D613263(L_22, 1, /*hidden argument*/NULL);
		// rbody.constraints = RigidbodyConstraints2D.FreezeRotation;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_23 = __this->get_rbody_4();
		Rigidbody2D_set_constraints_mEB2202406AB063F57E273F4313E7E4D58D613263(L_23, 4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Block_move::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Block_move_FixedUpdate_m79F06B1286C029308B547731B35D96D72FD533AD (Block_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// live_cnt++;
		int32_t L_0 = __this->get_live_cnt_13();
		__this->set_live_cnt_13(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)));
		// if (rakka){
		bool L_1 = __this->get_rakka_10();
		if (!L_1)
		{
			goto IL_003c;
		}
	}
	{
		// child_awate.SetActive (true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_child_awate_25();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, (bool)1, /*hidden argument*/NULL);
		// child_smile.SetActive (false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_child_smile_23();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)0, /*hidden argument*/NULL);
		// child_nomal.SetActive (false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_child_nomal_22();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_4, (bool)0, /*hidden argument*/NULL);
		// }
		goto IL_0093;
	}

IL_003c:
	{
		// if (live_cnt>1000)
		int32_t L_5 = __this->get_live_cnt_13();
		if ((((int32_t)L_5) <= ((int32_t)((int32_t)1000))))
		{
			goto IL_006f;
		}
	}
	{
		// child_nomal.SetActive (true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_child_nomal_22();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_6, (bool)1, /*hidden argument*/NULL);
		// child_awate.SetActive (false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = __this->get_child_awate_25();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_7, (bool)0, /*hidden argument*/NULL);
		// child_smile.SetActive (false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = __this->get_child_smile_23();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_8, (bool)0, /*hidden argument*/NULL);
		// }
		goto IL_0093;
	}

IL_006f:
	{
		// child_smile.SetActive (true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = __this->get_child_smile_23();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_9, (bool)1, /*hidden argument*/NULL);
		// child_awate.SetActive (false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = __this->get_child_awate_25();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_10, (bool)0, /*hidden argument*/NULL);
		// child_nomal.SetActive (false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = __this->get_child_nomal_22();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_11, (bool)0, /*hidden argument*/NULL);
	}

IL_0093:
	{
		// Vector3 pos = this.transform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_12, /*hidden argument*/NULL);
		V_0 = L_13;
		// float temp_x = (pos.x +5.00f)/0.75f +1.0f;  //ブロックマトリクスの自分の座標を計算
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = V_0;
		float L_15 = L_14.get_x_2();
		V_1 = ((float)il2cpp_codegen_add((float)((float)((float)((float)il2cpp_codegen_add((float)L_15, (float)(5.0f)))/(float)(0.75f))), (float)(1.0f)));
		// mat_x = (int)temp_x;
		float L_16 = V_1;
		__this->set_mat_x_14(il2cpp_codegen_cast_double_to_int<int32_t>(L_16));
		// float temp_y = 10- (pos.y +4.175f)/0.75f;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17 = V_0;
		float L_18 = L_17.get_y_3();
		V_2 = ((float)il2cpp_codegen_subtract((float)(10.0f), (float)((float)((float)((float)il2cpp_codegen_add((float)L_18, (float)(4.17500019f)))/(float)(0.75f)))));
		// mat_y = (int)temp_y;
		float L_19 = V_2;
		__this->set_mat_y_15(il2cpp_codegen_cast_double_to_int<int32_t>(L_19));
		// if (advent_type == 1 || mat_y >11 )
		int32_t L_20 = __this->get_advent_type_7();
		if ((((int32_t)L_20) == ((int32_t)1)))
		{
			goto IL_00f4;
		}
	}
	{
		int32_t L_21 = __this->get_mat_y_15();
		if ((((int32_t)L_21) <= ((int32_t)((int32_t)11))))
		{
			goto IL_0100;
		}
	}

IL_00f4:
	{
		// Destroy(this.gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22;
		L_22 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_mBDC17991A372E11E2E485EFC5C72F58972CBEC0F(L_22, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0100:
	{
		// if ( GameManager.trigger != 5 || advent_type ==1 )            //ゲームオーバー時は位置取得をしない
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		int32_t L_23 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_trigger_64();
		if ((!(((uint32_t)L_23) == ((uint32_t)5))))
		{
			goto IL_0111;
		}
	}
	{
		int32_t L_24 = __this->get_advent_type_7();
		if ((!(((uint32_t)L_24) == ((uint32_t)1))))
		{
			goto IL_018f;
		}
	}

IL_0111:
	{
		// GameManager.block_matrix [old_mat_y,old_mat_x] = 0;
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_25 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_block_matrix_72();
		int32_t L_26 = __this->get_old_mat_y_17();
		int32_t L_27 = __this->get_old_mat_x_16();
		(L_25)->SetAtUnchecked(L_26, L_27, 0);
		// GameManager.block_matrix [mat_y,mat_x] = advent_no;    //ブロックマトリクスに自分の番号を記録する
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_28 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_block_matrix_72();
		int32_t L_29 = __this->get_mat_y_15();
		int32_t L_30 = __this->get_mat_x_14();
		int32_t L_31 = __this->get_advent_no_6();
		(L_28)->SetAtUnchecked(L_29, L_30, L_31);
		// GameManager.block_matrix_tag [old_mat_y,old_mat_x] = 0;
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_32 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_block_matrix_tag_73();
		int32_t L_33 = __this->get_old_mat_y_17();
		int32_t L_34 = __this->get_old_mat_x_16();
		(L_32)->SetAtUnchecked(L_33, L_34, 0);
		// GameManager.block_matrix_tag [mat_y,mat_x] = advent_type;    //ブロックマトリクス＜タグ＞に自分のタイプを記録する
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_35 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_block_matrix_tag_73();
		int32_t L_36 = __this->get_mat_y_15();
		int32_t L_37 = __this->get_mat_x_14();
		int32_t L_38 = __this->get_advent_type_7();
		(L_35)->SetAtUnchecked(L_36, L_37, L_38);
		// old_mat_x= mat_x;
		int32_t L_39 = __this->get_mat_x_14();
		__this->set_old_mat_x_16(L_39);
		// old_mat_y= mat_y;
		int32_t L_40 = __this->get_mat_y_15();
		__this->set_old_mat_y_17(L_40);
	}

IL_018f:
	{
		// if (rakka == true)      //落下モードへ移行する指示があった場合、下方向へ力を加える
		bool L_41 = __this->get_rakka_10();
		if (!L_41)
		{
			goto IL_01d5;
		}
	}
	{
		// rakka = false;
		__this->set_rakka_10((bool)0);
		// rbody.drag = 0;             //下ボタンが押されたら、強制落下
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_42 = __this->get_rbody_4();
		Rigidbody2D_set_drag_m861543742E06889169BB1A496193B9226475D628(L_42, (0.0f), /*hidden argument*/NULL);
		// Vector3 force = new Vector3 (0.0f,-800.0f,0.0f);    // 力を設定
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_3), (0.0f), (-800.0f), (0.0f), /*hidden argument*/NULL);
		// rbody.AddForce (force);         // 力を加える
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_43 = __this->get_rbody_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_44 = V_3;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_45;
		L_45 = Vector2_op_Implicit_m101DE5340601C037D9252FB6B99AD18C793C54A1_inline(L_44, /*hidden argument*/NULL);
		Rigidbody2D_AddForce_mB4754FC98ED65E5381854CDC858D12F0504FB3A2(L_43, L_45, /*hidden argument*/NULL);
	}

IL_01d5:
	{
		// if (GetComponent<Rigidbody2D>().IsSleeping()) {
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_46;
		L_46 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		bool L_47;
		L_47 = Rigidbody2D_IsSleeping_m5F66876DC3B594F2A9949E1785946F4CA994707B(L_46, /*hidden argument*/NULL);
		if (!L_47)
		{
			goto IL_01ea;
		}
	}
	{
		// seishi = true;
		__this->set_seishi_18((bool)1);
		// }
		return;
	}

IL_01ea:
	{
		// seishi = false;
		__this->set_seishi_18((bool)0);
		// }
		return;
	}
}
// System.Void Block_move::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Block_move_OnCollisionEnter2D_mDAF9A0CC82060226EDEA0A5DE3F9AC5276AC6683 (Block_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5 * __this, Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * ___coll0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B179B2A67B3A72A43A43025FA51445085A5AE3D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameManager.player_control = false;
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->set_player_control_46((bool)0);
		// if (GameManager.trigger !=5 ){
		int32_t L_0 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_trigger_64();
		if ((((int32_t)L_0) == ((int32_t)5)))
		{
			goto IL_0014;
		}
	}
	{
		// GameManager.trigger =1;
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->set_trigger_64(1);
	}

IL_0014:
	{
		// Debug.Log("GameManager.trigger:"+GameManager.trigger);
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_address_of_trigger_64()), /*hidden argument*/NULL);
		String_t* L_2;
		L_2 = String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A(_stringLiteral0B179B2A67B3A72A43A43025FA51445085A5AE3D, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Block_move::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Block_move__ctor_m119FC37E2C72D5646938BD973548C3ECB0D2EB61 (Block_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void CameraManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraManager_Start_m3A8F66B836B9A9BC419B62EF88451549BBC9CCD0 (CameraManager_t8E36175FB066C9E1F863A5D7B3A300EAC805D01A * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void CameraManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraManager_Update_m911D2029A80BF20148CD94D496452F232343FF60 (CameraManager_t8E36175FB066C9E1F863A5D7B3A300EAC805D01A * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// float x = SubScreen.transform.position.x - (isForceScrollSpeedX * Time.deltaTime);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_SubScreen_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		float L_3 = L_2.get_x_2();
		float L_4 = __this->get_isForceScrollSpeedX_5();
		float L_5;
		L_5 = Time_get_deltaTime_mF558623BBB4EE65C8810243B05ED204A9E8D6FD1(/*hidden argument*/NULL);
		V_0 = ((float)il2cpp_codegen_subtract((float)L_3, (float)((float)il2cpp_codegen_multiply((float)L_4, (float)L_5))));
		// float y = SubScreen.transform.position.y + (isForceScrollSpeedX * Time.deltaTime);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_SubScreen_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_6, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_7, /*hidden argument*/NULL);
		float L_9 = L_8.get_y_3();
		float L_10 = __this->get_isForceScrollSpeedX_5();
		float L_11;
		L_11 = Time_get_deltaTime_mF558623BBB4EE65C8810243B05ED204A9E8D6FD1(/*hidden argument*/NULL);
		V_1 = ((float)il2cpp_codegen_add((float)L_9, (float)((float)il2cpp_codegen_multiply((float)L_10, (float)L_11))));
		// float z = SubScreen.transform.position.z;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = __this->get_SubScreen_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_12, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_13, /*hidden argument*/NULL);
		float L_15 = L_14.get_z_4();
		V_2 = L_15;
		// if(y > 10.0f)
		float L_16 = V_1;
		if ((!(((float)L_16) > ((float)(10.0f)))))
		{
			goto IL_0070;
		}
	}
	{
		// x = 0.0f;
		V_0 = (0.0f);
		// y = 0.0f;
		V_1 = (0.0f);
	}

IL_0070:
	{
		// Vector3 v3 = new Vector3(x,y,z);
		float L_17 = V_0;
		float L_18 = V_1;
		float L_19 = V_2;
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_3), L_17, L_18, L_19, /*hidden argument*/NULL);
		// SubScreen.transform.position = v3;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20 = __this->get_SubScreen_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21;
		L_21 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_20, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22 = V_3;
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_21, L_22, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CameraManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraManager__ctor_m932EDBCBAE89115380AA929ED5BC9823B9371185 (CameraManager_t8E36175FB066C9E1F863A5D7B3A300EAC805D01A * __this, const RuntimeMethod* method)
{
	{
		// public float isForceScrollSpeedX = 0.5f;
		__this->set_isForceScrollSpeedX_5((0.5f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void ChangeScene::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeScene_Start_m82928E7918FDC84DFFB942A777717E5EBD05B006 (ChangeScene_t911C7BF5D7321A9752D54B4F7A49C0BC816EA919 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void ChangeScene::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeScene_Update_mB50B8BAA6D9EDB1F4B152AC9F828E6362FEFBC1C (ChangeScene_t911C7BF5D7321A9752D54B4F7A49C0BC816EA919 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void ChangeScene::Load()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeScene_Load_mAC72F34D966998E57117AC40D1E37167C9F55CF3 (ChangeScene_t911C7BF5D7321A9752D54B4F7A49C0BC816EA919 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(sceneName);
		String_t* L_0 = __this->get_sceneName_4();
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m6993313A5BE51551C96597F20A81672422A051E4(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ChangeScene::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeScene__ctor_m4B5E6457BC8ADD899516038BA745E96E48F2C9E0 (ChangeScene_t911C7BF5D7321A9752D54B4F7A49C0BC816EA919 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void GameManager::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_OnEnable_mD5C3947351399CD9D94EAABE360192091328B2E2 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	{
		// m_input_Mover.Enable();
		InputAction_t4D95EC15C17EC145072A42B6BCCE3A7317DD96BB * L_0 = __this->get_m_input_Mover_4();
		InputAction_Enable_m011BE1C7402E3381931D684ACC153581E7D31A41(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_OnDisable_m5A032AE11D2E2BD8808702576A5DF606E0828003 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	{
		// m_input_Mover.Disable();
		InputAction_t4D95EC15C17EC145072A42B6BCCE3A7317DD96BB * L_0 = __this->get_m_input_Mover_4();
		InputAction_Disable_m1D698DD82368C9023C4F0E36DEB234C9930ACED7(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Start_m26461AEF27E44DB8FECCBC19D6C9E228B658BF8E (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____36356283CA439E1391C7224595D11634489404708B446EF7B8E6436CA09961D3_0_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22A266FAE0C8D5E1A925B8DC3B29D33CE6480146);
		s_Il2CppMethodInitialized = true;
	}
	{
		// scene_time = 0;     //ゲーム開始からの時間
		__this->set_scene_time_59((0.0f));
		// all_seishi = false;
		__this->set_all_seishi_69((bool)0);
		// ini_block = true;
		__this->set_ini_block_45((bool)1);
		// game_level = 3;
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->set_game_level_55(3);
		// m_fSpeed = 0.01f;
		__this->set_m_fSpeed_6((0.00999999978f));
		// player_control = false;
		((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->set_player_control_46((bool)0);
		// trigger = 0;
		((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->set_trigger_64(0);
		// star_level =0;
		__this->set_star_level_38(0);
		// star_cnt = 0;
		__this->set_star_cnt_39(0);
		// next_block = 1;
		((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->set_next_block_62(1);
		// Advent_num = 0;  //新規生成するブロックの背番号 0:wall 1:erase 2:～ブロック
		((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->set_Advent_num_63(0);
		// block_matrix = new int [11,8]{
		//     {1,0,0,0,0,0,0,1},
		//     {1,0,0,0,0,0,0,1},
		//     {1,0,0,0,0,0,0,1},
		//     {1,0,0,0,0,0,0,1},
		//     {1,0,0,0,0,0,0,1},
		//     {1,0,0,0,0,0,0,1},
		//     {1,0,0,0,0,0,0,1},
		//     {1,0,0,0,0,0,0,1},
		//     {1,0,0,0,0,0,0,1},
		//     {1,0,0,0,0,0,0,1},
		//     {1,1,1,1,1,1,1,1}
		// };
		il2cpp_array_size_t L_1[] = { (il2cpp_array_size_t)((int32_t)11), (il2cpp_array_size_t)8 };
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_0 = (Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17*)GenArrayNew(Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17_il2cpp_TypeInfo_var, L_1);
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_2 = L_0;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_3 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____36356283CA439E1391C7224595D11634489404708B446EF7B8E6436CA09961D3_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m37345890E8136134556D27E57315B584AC51D53F((RuntimeArray *)(RuntimeArray *)L_2, L_3, /*hidden argument*/NULL);
		((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->set_block_matrix_72(L_2);
		// block_matrix_tag = new int [11,8]{
		//     {1,0,0,0,0,0,0,1},
		//     {1,0,0,0,0,0,0,1},
		//     {1,0,0,0,0,0,0,1},
		//     {1,0,0,0,0,0,0,1},
		//     {1,0,0,0,0,0,0,1},
		//     {1,0,0,0,0,0,0,1},
		//     {1,0,0,0,0,0,0,1},
		//     {1,0,0,0,0,0,0,1},
		//     {1,0,0,0,0,0,0,1},
		//     {1,0,0,0,0,0,0,1},
		//     {1,1,1,1,1,1,1,1}
		// };
		il2cpp_array_size_t L_5[] = { (il2cpp_array_size_t)((int32_t)11), (il2cpp_array_size_t)8 };
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_4 = (Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17*)GenArrayNew(Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17_il2cpp_TypeInfo_var, L_5);
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_6 = L_4;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_7 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____36356283CA439E1391C7224595D11634489404708B446EF7B8E6436CA09961D3_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m37345890E8136134556D27E57315B584AC51D53F((RuntimeArray *)(RuntimeArray *)L_6, L_7, /*hidden argument*/NULL);
		((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->set_block_matrix_tag_73(L_6);
		// soundPlayer = GetComponent<AudioSource>();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_8;
		L_8 = Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		__this->set_soundPlayer_19(L_8);
		// Physics2D.gravity = new Vector3(0, -1.6f*game_level, 0);  //重力を加える
		int32_t L_9 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_game_level_55();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_10), (0.0f), ((float)il2cpp_codegen_multiply((float)(-1.60000002f), (float)((float)((float)L_9)))), (0.0f), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_11;
		L_11 = Vector2_op_Implicit_m101DE5340601C037D9252FB6B99AD18C793C54A1_inline(L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		Physics2D_set_gravity_m2F4EE903F4B7DA3A10DC96B48ACC6EF37B4AFB7F(L_11, /*hidden argument*/NULL);
		// rensa_cnt = 1;          //連鎖消去のカウンタ
		__this->set_rensa_cnt_40(1);
		// bonus.SetActive(false);  //ボーナス文字を消す
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = __this->get_bonus_15();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_12, (bool)0, /*hidden argument*/NULL);
		// bonus_text.SetActive(false);  //ボーナスノ数値を消す
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = __this->get_bonus_text_16();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_13, (bool)0, /*hidden argument*/NULL);
		// GameClear.SetActive(false);  //ゲームクリア文字を消す
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = __this->get_GameClear_10();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_14, (bool)0, /*hidden argument*/NULL);
		// GameOver.SetActive(false);  //ゲームオーバー文字を消す
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = __this->get_GameOver_9();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_15, (bool)0, /*hidden argument*/NULL);
		// go_title.SetActive(false);  //タイトル画面へ戻るボタンを消す
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16 = __this->get_go_title_12();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_16, (bool)0, /*hidden argument*/NULL);
		// next_block = Random.Range(1, 5);
		int32_t L_17;
		L_17 = Random_Range_mCD7505433C26B6FA511AC1EA07E58AEF7ED1C213(1, 5, /*hidden argument*/NULL);
		((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->set_next_block_62(L_17);
		// if (hi_score == 0)
		int32_t L_18 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_hi_score_56();
		if (L_18)
		{
			goto IL_010e;
		}
	}
	{
		// hi_score = 100;  //ハイスコアの初期値
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->set_hi_score_56(((int32_t)100));
	}

IL_010e:
	{
		// scoreText.GetComponent<Text>().text = score.ToString();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19 = __this->get_scoreText_13();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_20;
		L_20 = GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65(L_19, /*hidden argument*/GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		int32_t* L_21 = __this->get_address_of_score_57();
		String_t* L_22;
		L_22 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_21, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_20, L_22);
		// hi_scoreText.GetComponent<Text>().text = hi_score.ToString();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23 = __this->get_hi_scoreText_17();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_24;
		L_24 = GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65(L_23, /*hidden argument*/GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		String_t* L_25;
		L_25 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_address_of_hi_score_56()), /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_24, L_25);
		// if(soundPlayer != null)
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_26 = __this->get_soundPlayer_19();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_27;
		L_27 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_26, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_016d;
		}
	}
	{
		// soundPlayer.PlayOneShot(yoroshiku);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_28 = __this->get_soundPlayer_19();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_29 = __this->get_yoroshiku_33();
		AudioSource_PlayOneShot_mA90B136041A61C30909301D45D0315088CA7D796(L_28, L_29, /*hidden argument*/NULL);
		// soundPlayer.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_30 = __this->get_soundPlayer_19();
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_30, /*hidden argument*/NULL);
	}

IL_016d:
	{
		// Invoke("InactiveImage",2.0f);
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteral22A266FAE0C8D5E1A925B8DC3B29D33CE6480146, (2.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_FixedUpdate_m23578D1B5AC4A39D33E15C9D4FB08F7E4EAE3AD1 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisBlock_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5_m8353861C53A9C5907C36DEAD660B13405A342430_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisBlock_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5_mCB23DDD42F5DBA9CEF807C25FF71D2B71E0A6499_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAction_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m592669BB88E7CCE2434F99A3EAF6E9CD36BC45DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m7DF03CE7132B7D4C6AA2AEEA9BD1A8755AE12432_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3D9494354F266A105B5A9DE8603B57850EAD902F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mE8DB64A28C8709FB890A9770C8F35CD32CD04C75_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m62550836383D7EFD35F4AC65927D954DB87BAE90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1378272E41AB5F3FA09DAF070DDFE3B51B2AB455);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D24882A0186D0F1A081365C7ACD4AD63ED05688);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C0F8F472A971C418AC2F2C15FA3E96E1287C3E8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36037DB3104492030FEF31D2C0969F8E3C0432D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4C46385E4FECEB9D93D2956D6C7EAD68B2E6245C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B08F97DDB2C706B2537A1F526B402FC6DB4C5BA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60793966D57BD4CC387295BE790DD26F67EAE872);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral68A60640FA7CD3B5E020A5CF25D5D75F03DE63CC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral696B0E3A55001748569DA84DC32ABBC0E6B84431);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6E8112DE272D3B7579DD734F255BA00B3904010E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86D9C355E076DAE383D4341944F9F4B207C93F9C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8761507A3A90E88698691AE0DE7BCAD13796FA1B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91DAC1B208C9247B871F7A45F7E0138249BF2A99);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9A3A2897809DC4125DBDB735F00F98DF10ED9C6E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA71B4A34498BB6320644404002DA18167E25A55B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA8AE615AAF2B82A5AC2B851687ED76CDCDEAD455);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAC9851B40BB7AD01E87EBE614CFC0A1B63FC6344);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD69CEC4305083D63777DC1C48363D91FD0C9ACF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC7B4D926EF9532A71B25AEC040A33D52C926425F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCC1EFA5D55DE845A18194F44D5FC55CAAA58C610);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE212A7CEBA54F677AB41E097A7D0F1A0FFE9232);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCEBB6727AFF23A14DABBEDD1099563548A327C1F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD0061357CD6B7264C0F47557BD21C02E32AD4845);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD19F55E089631C894BD155632A7443DE7D709D97);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE250C5EC523541AB00B5D2D3B20344DA1579B6D1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEAEBCBF1A3F6ADCD07AA24ED9A0104F4440564DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED11D0CB05359AAA23A69AD543CC5790A0E063D9);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_1 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_2 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_3 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_4 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_5 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_6 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_7 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_8 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_9 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_10 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_11 = NULL;
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * V_12 = NULL;
	int32_t V_13 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_14;
	memset((&V_14), 0, sizeof(V_14));
	int32_t V_15 = 0;
	Block_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5 * V_16 = NULL;
	Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14  V_17;
	memset((&V_17), 0, sizeof(V_17));
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_18 = NULL;
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * V_19 = NULL;
	int32_t V_20 = 0;
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * V_21 = NULL;
	int32_t V_22 = 0;
	int32_t V_23 = 0;
	int32_t V_24 = 0;
	int32_t V_25 = 0;
	int32_t V_26 = 0;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_27 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_28;
	memset((&V_28), 0, sizeof(V_28));
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * V_29 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_30 = NULL;
	Keyboard_tCC48D6E5BEEA84E5C5919A4E4B8BDFBE66217D93 * V_31 = NULL;
	Keyboard_tCC48D6E5BEEA84E5C5919A4E4B8BDFBE66217D93 * V_32 = NULL;
	int32_t V_33 = 0;
	String_t* V_34 = NULL;
	int32_t V_35 = 0;
	int32_t V_36 = 0;
	String_t* V_37 = NULL;
	int32_t V_38 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		// GameObject block_1_Prefab = Resources.Load<GameObject>("block1");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Resources_Load_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m62550836383D7EFD35F4AC65927D954DB87BAE90(_stringLiteralD19F55E089631C894BD155632A7443DE7D709D97, /*hidden argument*/Resources_Load_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m62550836383D7EFD35F4AC65927D954DB87BAE90_RuntimeMethod_var);
		V_0 = L_0;
		// GameObject block_2_Prefab = Resources.Load<GameObject>("block2");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Resources_Load_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m62550836383D7EFD35F4AC65927D954DB87BAE90(_stringLiteral5B08F97DDB2C706B2537A1F526B402FC6DB4C5BA, /*hidden argument*/Resources_Load_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m62550836383D7EFD35F4AC65927D954DB87BAE90_RuntimeMethod_var);
		V_1 = L_1;
		// GameObject block_3_Prefab = Resources.Load<GameObject>("block3");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Resources_Load_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m62550836383D7EFD35F4AC65927D954DB87BAE90(_stringLiteralEAEBCBF1A3F6ADCD07AA24ED9A0104F4440564DF, /*hidden argument*/Resources_Load_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m62550836383D7EFD35F4AC65927D954DB87BAE90_RuntimeMethod_var);
		V_2 = L_2;
		// GameObject block_4_Prefab = Resources.Load<GameObject>("block4");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Resources_Load_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m62550836383D7EFD35F4AC65927D954DB87BAE90(_stringLiteralA71B4A34498BB6320644404002DA18167E25A55B, /*hidden argument*/Resources_Load_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m62550836383D7EFD35F4AC65927D954DB87BAE90_RuntimeMethod_var);
		V_3 = L_3;
		// GameObject block_5_Prefab = Resources.Load<GameObject>("Block5");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Resources_Load_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m62550836383D7EFD35F4AC65927D954DB87BAE90(_stringLiteral1D24882A0186D0F1A081365C7ACD4AD63ED05688, /*hidden argument*/Resources_Load_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m62550836383D7EFD35F4AC65927D954DB87BAE90_RuntimeMethod_var);
		V_4 = L_4;
		// GameObject star_1_Prefab = Resources.Load<GameObject>("star1");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Resources_Load_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m62550836383D7EFD35F4AC65927D954DB87BAE90(_stringLiteralCE212A7CEBA54F677AB41E097A7D0F1A0FFE9232, /*hidden argument*/Resources_Load_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m62550836383D7EFD35F4AC65927D954DB87BAE90_RuntimeMethod_var);
		// GameObject star_b_Prefab = Resources.Load<GameObject>("starB");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Resources_Load_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m62550836383D7EFD35F4AC65927D954DB87BAE90(_stringLiteralE250C5EC523541AB00B5D2D3B20344DA1579B6D1, /*hidden argument*/Resources_Load_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m62550836383D7EFD35F4AC65927D954DB87BAE90_RuntimeMethod_var);
		// GameObject star_c_Prefab = Resources.Load<GameObject>("starC");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Resources_Load_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m62550836383D7EFD35F4AC65927D954DB87BAE90(_stringLiteral68A60640FA7CD3B5E020A5CF25D5D75F03DE63CC, /*hidden argument*/Resources_Load_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m62550836383D7EFD35F4AC65927D954DB87BAE90_RuntimeMethod_var);
		V_5 = L_7;
		// GameObject star_c2_Prefab = Resources.Load<GameObject>("starC2");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = Resources_Load_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m62550836383D7EFD35F4AC65927D954DB87BAE90(_stringLiteralED11D0CB05359AAA23A69AD543CC5790A0E063D9, /*hidden argument*/Resources_Load_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m62550836383D7EFD35F4AC65927D954DB87BAE90_RuntimeMethod_var);
		V_6 = L_8;
		// GameObject star_c3_Prefab = Resources.Load<GameObject>("starC3");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Resources_Load_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m62550836383D7EFD35F4AC65927D954DB87BAE90(_stringLiteralAC9851B40BB7AD01E87EBE614CFC0A1B63FC6344, /*hidden argument*/Resources_Load_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m62550836383D7EFD35F4AC65927D954DB87BAE90_RuntimeMethod_var);
		V_7 = L_9;
		// GameObject combo2_Prefab = Resources.Load<GameObject>("2_combo");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10;
		L_10 = Resources_Load_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m62550836383D7EFD35F4AC65927D954DB87BAE90(_stringLiteralCEBB6727AFF23A14DABBEDD1099563548A327C1F, /*hidden argument*/Resources_Load_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m62550836383D7EFD35F4AC65927D954DB87BAE90_RuntimeMethod_var);
		V_8 = L_10;
		// GameObject combo3_Prefab = Resources.Load<GameObject>("3_combo");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11;
		L_11 = Resources_Load_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m62550836383D7EFD35F4AC65927D954DB87BAE90(_stringLiteral4C46385E4FECEB9D93D2956D6C7EAD68B2E6245C, /*hidden argument*/Resources_Load_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m62550836383D7EFD35F4AC65927D954DB87BAE90_RuntimeMethod_var);
		V_9 = L_11;
		// GameObject combo4_Prefab = Resources.Load<GameObject>("4_combo");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12;
		L_12 = Resources_Load_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m62550836383D7EFD35F4AC65927D954DB87BAE90(_stringLiteral1378272E41AB5F3FA09DAF070DDFE3B51B2AB455, /*hidden argument*/Resources_Load_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m62550836383D7EFD35F4AC65927D954DB87BAE90_RuntimeMethod_var);
		V_10 = L_12;
		// GameObject combo5_Prefab = Resources.Load<GameObject>("5_combo");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13;
		L_13 = Resources_Load_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m62550836383D7EFD35F4AC65927D954DB87BAE90(_stringLiteralD0061357CD6B7264C0F47557BD21C02E32AD4845, /*hidden argument*/Resources_Load_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m62550836383D7EFD35F4AC65927D954DB87BAE90_RuntimeMethod_var);
		V_11 = L_13;
		// AudioSource audio = GetComponent<AudioSource>();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_14;
		L_14 = Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		V_12 = L_14;
		// if (trigger != 4 && trigger != 5) {
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		int32_t L_15 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_trigger_64();
		if ((((int32_t)L_15) == ((int32_t)4)))
		{
			goto IL_013b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		int32_t L_16 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_trigger_64();
		if ((((int32_t)L_16) == ((int32_t)5)))
		{
			goto IL_013b;
		}
	}
	{
		// scene_time += Time.deltaTime;
		float L_17 = __this->get_scene_time_59();
		float L_18;
		L_18 = Time_get_deltaTime_mF558623BBB4EE65C8810243B05ED204A9E8D6FD1(/*hidden argument*/NULL);
		__this->set_scene_time_59(((float)il2cpp_codegen_add((float)L_17, (float)L_18)));
		// temp_time = 300f - scene_time;         //３００秒以内でクリアできればタイムボーナス
		float L_19 = __this->get_scene_time_59();
		__this->set_temp_time_58(((float)il2cpp_codegen_subtract((float)(300.0f), (float)L_19)));
		// if (temp_time <0) {
		float L_20 = __this->get_temp_time_58();
		if ((!(((float)L_20) < ((float)(0.0f)))))
		{
			goto IL_00f9;
		}
	}
	{
		// temp_time = 0;
		__this->set_temp_time_58((0.0f));
	}

IL_00f9:
	{
		// game_time = (int)temp_time;
		float L_21 = __this->get_temp_time_58();
		__this->set_game_time_60(il2cpp_codegen_cast_double_to_int<int32_t>(L_21));
		// if (old_time != game_time) {
		int32_t L_22 = __this->get_old_time_61();
		int32_t L_23 = __this->get_game_time_60();
		if ((((int32_t)L_22) == ((int32_t)L_23)))
		{
			goto IL_013b;
		}
	}
	{
		// timeText.GetComponent<Text>().text = game_time.ToString();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_24 = __this->get_timeText_14();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_25;
		L_25 = GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65(L_24, /*hidden argument*/GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		int32_t* L_26 = __this->get_address_of_game_time_60();
		String_t* L_27;
		L_27 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_26, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_25, L_27);
		// old_time = game_time;
		int32_t L_28 = __this->get_game_time_60();
		__this->set_old_time_61(L_28);
	}

IL_013b:
	{
		// if ( ini_block )
		bool L_29 = __this->get_ini_block_45();
		if (!L_29)
		{
			goto IL_0497;
		}
	}
	{
		// ini_block = false;  //初期ブロック出力完了
		__this->set_ini_block_45((bool)0);
		// int i = 0;
		V_13 = 0;
		goto IL_0483;
	}

IL_0155:
	{
		// ojama_cnt ++;
		int32_t L_30 = __this->get_ojama_cnt_54();
		__this->set_ojama_cnt_54(((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1)));
		// if (ojama_cnt%30 == 0)
		int32_t L_31 = __this->get_ojama_cnt_54();
		if (((int32_t)((int32_t)L_31%(int32_t)((int32_t)30))))
		{
			goto IL_01ae;
		}
	}
	{
		// first_block = 5;
		__this->set_first_block_51(5);
		// ojama_cnt = 1;
		__this->set_ojama_cnt_54(1);
		// next_x = -5.0f + Random.Range(0,6)*0.75f;
		int32_t L_32;
		L_32 = Random_Range_mCD7505433C26B6FA511AC1EA07E58AEF7ED1C213(0, 6, /*hidden argument*/NULL);
		__this->set_next_x_66(((float)il2cpp_codegen_add((float)(-5.0f), (float)((float)il2cpp_codegen_multiply((float)((float)((float)L_32)), (float)(0.75f))))));
		// next_y = 3.24f;
		__this->set_next_y_67((3.24000001f));
		// next_z = 0.0f;
		__this->set_next_z_68((0.0f));
		// }
		goto IL_01f0;
	}

IL_01ae:
	{
		// first_block = next_block;
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		int32_t L_33 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_next_block_62();
		__this->set_first_block_51(L_33);
		// next_block = Random.Range(1, 5);
		int32_t L_34;
		L_34 = Random_Range_mCD7505433C26B6FA511AC1EA07E58AEF7ED1C213(1, 5, /*hidden argument*/NULL);
		((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->set_next_block_62(L_34);
		// next_x = -3.5f+ i*0.5f;
		int32_t L_35 = V_13;
		__this->set_next_x_66(((float)il2cpp_codegen_add((float)(-3.5f), (float)((float)il2cpp_codegen_multiply((float)((float)((float)L_35)), (float)(0.5f))))));
		// next_y = 3.24f;
		__this->set_next_y_67((3.24000001f));
		// next_z = 0.0f;
		__this->set_next_z_68((0.0f));
	}

IL_01f0:
	{
		// Vector3 v3 = new Vector3(next_x,next_y,next_z);
		float L_36 = __this->get_next_x_66();
		float L_37 = __this->get_next_y_67();
		float L_38 = __this->get_next_z_68();
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_14), L_36, L_37, L_38, /*hidden argument*/NULL);
		// new_instance = block_1_Prefab;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_39 = V_0;
		__this->set_new_instance_7(L_39);
		// switch(first_block)
		int32_t L_40 = __this->get_first_block_51();
		V_15 = L_40;
		int32_t L_41 = V_15;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_41, (int32_t)1)))
		{
			case 0:
			{
				goto IL_0237;
			}
			case 1:
			{
				goto IL_0240;
			}
			case 2:
			{
				goto IL_0249;
			}
			case 3:
			{
				goto IL_0252;
			}
			case 4:
			{
				goto IL_025b;
			}
		}
	}
	{
		goto IL_0263;
	}

IL_0237:
	{
		// new_instance = block_1_Prefab;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_42 = V_0;
		__this->set_new_instance_7(L_42);
		// break;
		goto IL_0263;
	}

IL_0240:
	{
		// new_instance = block_2_Prefab;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_43 = V_1;
		__this->set_new_instance_7(L_43);
		// break;
		goto IL_0263;
	}

IL_0249:
	{
		// new_instance = block_3_Prefab;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_44 = V_2;
		__this->set_new_instance_7(L_44);
		// break;
		goto IL_0263;
	}

IL_0252:
	{
		// new_instance = block_4_Prefab;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_45 = V_3;
		__this->set_new_instance_7(L_45);
		// break;
		goto IL_0263;
	}

IL_025b:
	{
		// new_instance = block_5_Prefab;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_46 = V_4;
		__this->set_new_instance_7(L_46);
	}

IL_0263:
	{
		// if (block_matrix[0,3] == 0)
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_47 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_block_matrix_72();
		int32_t L_48;
		L_48 = (L_47)->GetAtUnchecked(0, 3);
		if (L_48)
		{
			goto IL_032e;
		}
	}
	{
		// block = Instantiate(new_instance,v3, Quaternion.Euler(0, 0, 0));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_49 = __this->get_new_instance_7();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_50 = V_14;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_51;
		L_51 = Quaternion_Euler_mD694BA6F38A792C3D728A8BBAFF13000F5F3B64A((0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_52;
		L_52 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3D9494354F266A105B5A9DE8603B57850EAD902F(L_49, L_50, L_51, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3D9494354F266A105B5A9DE8603B57850EAD902F_RuntimeMethod_var);
		__this->set_block_36(L_52);
		// Block_move component = block.AddComponent<Block_move>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_53 = __this->get_block_36();
		Block_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5 * L_54;
		L_54 = GameObject_AddComponent_TisBlock_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5_m8353861C53A9C5907C36DEAD660B13405A342430(L_53, /*hidden argument*/GameObject_AddComponent_TisBlock_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5_m8353861C53A9C5907C36DEAD660B13405A342430_RuntimeMethod_var);
		V_16 = L_54;
		// component.advent_no = Advent_num;    //出現させるのは何個目のブロックか
		Block_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5 * L_55 = V_16;
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		int32_t L_56 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_Advent_num_63();
		L_55->set_advent_no_6(L_56);
		// component.advent_type = first_block +1;    //出現させるブロックの種類  ２～５ブロック　０：消すブロック
		Block_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5 * L_57 = V_16;
		int32_t L_58 = __this->get_first_block_51();
		L_57->set_advent_type_7(((int32_t)il2cpp_codegen_add((int32_t)L_58, (int32_t)1)));
		// if (first_block == 5){
		int32_t L_59 = __this->get_first_block_51();
		if ((!(((uint32_t)L_59) == ((uint32_t)5))))
		{
			goto IL_02dc;
		}
	}
	{
		// component.rakka = true;     //落下モードにさせる
		Block_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5 * L_60 = V_16;
		L_60->set_rakka_10((bool)1);
		// player_control = false;
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->set_player_control_46((bool)0);
		// }
		goto IL_02e2;
	}

IL_02dc:
	{
		// player_control = true;
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->set_player_control_46((bool)1);
	}

IL_02e2:
	{
		// blockList.Add(block);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_61 = __this->get_blockList_70();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_62 = __this->get_block_36();
		List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3(L_61, L_62, /*hidden argument*/List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
		// if (blockList.Count != 0)
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_63 = __this->get_blockList_70();
		int32_t L_64;
		L_64 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_63, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		if (!L_64)
		{
			goto IL_0318;
		}
	}
	{
		// list_num = blockList.Count-1 ;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_65 = __this->get_blockList_70();
		int32_t L_66;
		L_66 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_65, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		__this->set_list_num_65(((int32_t)il2cpp_codegen_subtract((int32_t)L_66, (int32_t)1)));
		// }
		goto IL_047d;
	}

IL_0318:
	{
		// list_num = blockList.Count;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_67 = __this->get_blockList_70();
		int32_t L_68;
		L_68 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_67, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		__this->set_list_num_65(L_68);
		// }
		goto IL_047d;
	}

IL_032e:
	{
		// trigger = 5;             //出現位置に既にブロックがあったら、ゲームオーバー処理へ
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->set_trigger_64(5);
		// audio.Stop();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_69 = V_12;
		AudioSource_Stop_mADA564D223832A64F8CF3EFBDEB534C0D658810F(L_69, /*hidden argument*/NULL);
		// soundPlayer.PlayOneShot(meGameOver);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_70 = __this->get_soundPlayer_19();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_71 = __this->get_meGameOver_22();
		AudioSource_PlayOneShot_mA90B136041A61C30909301D45D0315088CA7D796(L_70, L_71, /*hidden argument*/NULL);
		// soundPlayer.PlayOneShot(meGameOverBGM);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_72 = __this->get_soundPlayer_19();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_73 = __this->get_meGameOverBGM_23();
		AudioSource_PlayOneShot_mA90B136041A61C30909301D45D0315088CA7D796(L_72, L_73, /*hidden argument*/NULL);
		// Physics2D.gravity = new Vector3(0, -100, 0);  //重力を加える
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_74;
		memset((&L_74), 0, sizeof(L_74));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_74), (0.0f), (-100.0f), (0.0f), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_75;
		L_75 = Vector2_op_Implicit_m101DE5340601C037D9252FB6B99AD18C793C54A1_inline(L_74, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		Physics2D_set_gravity_m2F4EE903F4B7DA3A10DC96B48ACC6EF37B4AFB7F(L_75, /*hidden argument*/NULL);
		// foreach (var item in blockList)
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_76 = __this->get_blockList_70();
		Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14  L_77;
		L_77 = List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6(L_76, /*hidden argument*/List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6_RuntimeMethod_var);
		V_17 = L_77;
	}

IL_0388:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0461;
		}

IL_038d:
		{
			// foreach (var item in blockList)
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_78;
			L_78 = Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_inline((Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *)(&V_17), /*hidden argument*/Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_RuntimeMethod_var);
			V_18 = L_78;
			// temp_x = ( item.transform.position.x +5.75f )/0.75f;
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_79 = V_18;
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_80;
			L_80 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_79, /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_81;
			L_81 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_80, /*hidden argument*/NULL);
			float L_82 = L_81.get_x_2();
			__this->set_temp_x_52(((float)((float)((float)il2cpp_codegen_add((float)L_82, (float)(5.75f)))/(float)(0.75f))));
			// mat_x = (int)temp_x;
			float L_83 = __this->get_temp_x_52();
			__this->set_mat_x_47(il2cpp_codegen_cast_double_to_int<int32_t>(L_83));
			// temp_y = 10.0f - ( item.transform.position.y +4.175f )/0.75f;
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_84 = V_18;
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_85;
			L_85 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_84, /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_86;
			L_86 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_85, /*hidden argument*/NULL);
			float L_87 = L_86.get_y_3();
			__this->set_temp_y_53(((float)il2cpp_codegen_subtract((float)(10.0f), (float)((float)((float)((float)il2cpp_codegen_add((float)L_87, (float)(4.17500019f)))/(float)(0.75f))))));
			// mat_y = (int)temp_y;
			float L_88 = __this->get_temp_y_53();
			__this->set_mat_y_48(il2cpp_codegen_cast_double_to_int<int32_t>(L_88));
			// Debug.Log("delete mat_x : mat_y:"+ mat_x +":"+ mat_y);
			int32_t* L_89 = __this->get_address_of_mat_x_47();
			String_t* L_90;
			L_90 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_89, /*hidden argument*/NULL);
			int32_t* L_91 = __this->get_address_of_mat_y_48();
			String_t* L_92;
			L_92 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_91, /*hidden argument*/NULL);
			String_t* L_93;
			L_93 = String_Concat_m5D784E6CEEBE99ED8749AA4B9491D926273FD749(_stringLiteralBD69CEC4305083D63777DC1C48363D91FD0C9ACF, L_90, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D, L_92, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A(L_93, /*hidden argument*/NULL);
			// block_matrix[(int)mat_y, (int)mat_x] = 0;
			IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
			Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_94 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_block_matrix_72();
			int32_t L_95 = __this->get_mat_y_48();
			int32_t L_96 = __this->get_mat_x_47();
			(L_94)->SetAtUnchecked(L_95, L_96, 0);
			// block_matrix_tag[(int)mat_y, (int)mat_x] = 0;
			Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_97 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_block_matrix_tag_73();
			int32_t L_98 = __this->get_mat_y_48();
			int32_t L_99 = __this->get_mat_x_47();
			(L_97)->SetAtUnchecked(L_98, L_99, 0);
			// script = item.GetComponent<Block_move>();
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_100 = V_18;
			Block_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5 * L_101;
			L_101 = GameObject_GetComponent_TisBlock_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5_mCB23DDD42F5DBA9CEF807C25FF71D2B71E0A6499(L_100, /*hidden argument*/GameObject_GetComponent_TisBlock_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5_mCB23DDD42F5DBA9CEF807C25FF71D2B71E0A6499_RuntimeMethod_var);
			__this->set_script_37(L_101);
		}

IL_0461:
		{
			// foreach (var item in blockList)
			bool L_102;
			L_102 = Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7((Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *)(&V_17), /*hidden argument*/Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7_RuntimeMethod_var);
			if (L_102)
			{
				goto IL_038d;
			}
		}

IL_046d:
		{
			IL2CPP_LEAVE(0x47D, FINALLY_046f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_046f;
	}

FINALLY_046f:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9((Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *)(&V_17), /*hidden argument*/Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9_RuntimeMethod_var);
		IL2CPP_END_FINALLY(1135)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(1135)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x47D, IL_047d)
	}

IL_047d:
	{
		// i++;
		int32_t L_103 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add((int32_t)L_103, (int32_t)1));
	}

IL_0483:
	{
		// while(i<1)    //同時生成するブロックの数
		int32_t L_104 = V_13;
		if ((((int32_t)L_104) < ((int32_t)1)))
		{
			goto IL_0155;
		}
	}
	{
		// Advent_num++;  //生成するブロックの背番号を更新　　0:wall 1:None 2:～ブロック
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		int32_t L_105 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_Advent_num_63();
		((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->set_Advent_num_63(((int32_t)il2cpp_codegen_add((int32_t)L_105, (int32_t)1)));
	}

IL_0497:
	{
		// m_movementValue = m_input_Mover.ReadValue<Vector2>();
		InputAction_t4D95EC15C17EC145072A42B6BCCE3A7317DD96BB * L_106 = __this->get_m_input_Mover_4();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_107;
		L_107 = InputAction_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m592669BB88E7CCE2434F99A3EAF6E9CD36BC45DC(L_106, /*hidden argument*/InputAction_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m592669BB88E7CCE2434F99A3EAF6E9CD36BC45DC_RuntimeMethod_var);
		__this->set_m_movementValue_5(L_107);
		// axisH = (int)m_movementValue.x;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_108 = __this->get_address_of_m_movementValue_5();
		float L_109 = L_108->get_x_0();
		__this->set_axisH_41(il2cpp_codegen_cast_double_to_int<int32_t>(L_109));
		// if ( blockList[list_num] !=null )
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_110 = __this->get_blockList_70();
		int32_t L_111 = __this->get_list_num_65();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_112;
		L_112 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_110, L_111, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_113;
		L_113 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_112, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_113)
		{
			goto IL_06b9;
		}
	}
	{
		// temp_x = ( blockList[list_num].transform.position.x +5.75f )/0.75f;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_114 = __this->get_blockList_70();
		int32_t L_115 = __this->get_list_num_65();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_116;
		L_116 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_114, L_115, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_117;
		L_117 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_116, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_118;
		L_118 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_117, /*hidden argument*/NULL);
		float L_119 = L_118.get_x_2();
		__this->set_temp_x_52(((float)((float)((float)il2cpp_codegen_add((float)L_119, (float)(5.75f)))/(float)(0.75f))));
		// mat_x = (int)temp_x;
		float L_120 = __this->get_temp_x_52();
		__this->set_mat_x_47(il2cpp_codegen_cast_double_to_int<int32_t>(L_120));
		// temp_y = 10.0f - (blockList[list_num].transform.position.y +4.175f )/0.75f;  //origin4.175f
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_121 = __this->get_blockList_70();
		int32_t L_122 = __this->get_list_num_65();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_123;
		L_123 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_121, L_122, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_124;
		L_124 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_123, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_125;
		L_125 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_124, /*hidden argument*/NULL);
		float L_126 = L_125.get_y_3();
		__this->set_temp_y_53(((float)il2cpp_codegen_subtract((float)(10.0f), (float)((float)((float)((float)il2cpp_codegen_add((float)L_126, (float)(4.17500019f)))/(float)(0.75f))))));
		// mat_y = (int)temp_y;
		float L_127 = __this->get_temp_y_53();
		__this->set_mat_y_48(il2cpp_codegen_cast_double_to_int<int32_t>(L_127));
		// axisV = (int)m_movementValue.y;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_128 = __this->get_address_of_m_movementValue_5();
		float L_129 = L_128->get_y_1();
		__this->set_axisV_43(il2cpp_codegen_cast_double_to_int<int32_t>(L_129));
		// if(axisV_old != axisV)
		int32_t L_130 = __this->get_axisV_old_44();
		int32_t L_131 = __this->get_axisV_43();
		if ((((int32_t)L_130) == ((int32_t)L_131)))
		{
			goto IL_05c3;
		}
	}
	{
		// if ( axisV == -1 && player_control == true )
		int32_t L_132 = __this->get_axisV_43();
		if ((!(((uint32_t)L_132) == ((uint32_t)(-1)))))
		{
			goto IL_0648;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		bool L_133 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_player_control_46();
		if (!L_133)
		{
			goto IL_0648;
		}
	}
	{
		// script = blockList[list_num].GetComponent<Block_move>();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_134 = __this->get_blockList_70();
		int32_t L_135 = __this->get_list_num_65();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_136;
		L_136 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_134, L_135, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		Block_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5 * L_137;
		L_137 = GameObject_GetComponent_TisBlock_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5_mCB23DDD42F5DBA9CEF807C25FF71D2B71E0A6499(L_136, /*hidden argument*/GameObject_GetComponent_TisBlock_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5_mCB23DDD42F5DBA9CEF807C25FF71D2B71E0A6499_RuntimeMethod_var);
		__this->set_script_37(L_137);
		// script.rakka = true;     //落下モードにさせる
		Block_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5 * L_138 = __this->get_script_37();
		L_138->set_rakka_10((bool)1);
		// player_control = false;
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->set_player_control_46((bool)0);
		// }
		goto IL_0648;
	}

IL_05c3:
	{
		// if (player_control == true && axisH != axisH_old)    //動作対象のブロックを左右に動かす
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		bool L_139 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_player_control_46();
		if (!L_139)
		{
			goto IL_0648;
		}
	}
	{
		int32_t L_140 = __this->get_axisH_41();
		int32_t L_141 = __this->get_axisH_old_42();
		if ((((int32_t)L_140) == ((int32_t)L_141)))
		{
			goto IL_0648;
		}
	}
	{
		// if ( block_matrix_tag[mat_y , mat_x + axisH ] == 0)
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_142 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_block_matrix_tag_73();
		int32_t L_143 = __this->get_mat_y_48();
		int32_t L_144 = __this->get_mat_x_47();
		int32_t L_145 = __this->get_axisH_41();
		int32_t L_146;
		L_146 = (L_142)->GetAtUnchecked(L_143, ((int32_t)il2cpp_codegen_add((int32_t)L_144, (int32_t)L_145)));
		if (L_146)
		{
			goto IL_0648;
		}
	}
	{
		// AudioSource soundPlayer = GetComponent<AudioSource>();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_147;
		L_147 = Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		V_19 = L_147;
		// if(soundPlayer != null)
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_148 = V_19;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_149;
		L_149 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_148, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_149)
		{
			goto IL_0616;
		}
	}
	{
		// soundPlayer.PlayOneShot(block_move);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_150 = V_19;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_151 = __this->get_block_move_26();
		AudioSource_PlayOneShot_mA90B136041A61C30909301D45D0315088CA7D796(L_150, L_151, /*hidden argument*/NULL);
	}

IL_0616:
	{
		// blockList[list_num].transform.Translate (0.75f*axisH, 0, 0);   //指定したブロックを動かす
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_152 = __this->get_blockList_70();
		int32_t L_153 = __this->get_list_num_65();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_154;
		L_154 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_152, L_153, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_155;
		L_155 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_154, /*hidden argument*/NULL);
		int32_t L_156 = __this->get_axisH_41();
		Transform_Translate_mC9343E1E646DA8FD42BE37137ACCBB4B52093F5C(L_155, ((float)il2cpp_codegen_multiply((float)(0.75f), (float)((float)((float)L_156)))), (0.0f), (0.0f), /*hidden argument*/NULL);
	}

IL_0648:
	{
		// if (blockList[list_num].transform.position.x <-5.0f) {
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_157 = __this->get_blockList_70();
		int32_t L_158 = __this->get_list_num_65();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_159;
		L_159 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_157, L_158, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_160;
		L_160 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_159, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_161;
		L_161 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_160, /*hidden argument*/NULL);
		float L_162 = L_161.get_x_2();
		if ((!(((float)L_162) < ((float)(-5.0f)))))
		{
			goto IL_06a1;
		}
	}
	{
		// blockList[list_num].transform.Translate (-0.75f*axisH, 0, 0);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_163 = __this->get_blockList_70();
		int32_t L_164 = __this->get_list_num_65();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_165;
		L_165 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_163, L_164, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_166;
		L_166 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_165, /*hidden argument*/NULL);
		int32_t L_167 = __this->get_axisH_41();
		Transform_Translate_mC9343E1E646DA8FD42BE37137ACCBB4B52093F5C(L_166, ((float)il2cpp_codegen_multiply((float)(-0.75f), (float)((float)((float)L_167)))), (0.0f), (0.0f), /*hidden argument*/NULL);
	}

IL_06a1:
	{
		// axisH_old = axisH;
		int32_t L_168 = __this->get_axisH_41();
		__this->set_axisH_old_42(L_168);
		// axisV_old = axisV;
		int32_t L_169 = __this->get_axisV_43();
		__this->set_axisV_old_44(L_169);
	}

IL_06b9:
	{
		// if ( trigger == 1 )             //Block_move.csからtrigger=1（衝突あり）が入力されたら
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		int32_t L_170 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_trigger_64();
		if ((!(((uint32_t)L_170) == ((uint32_t)1))))
		{
			goto IL_075b;
		}
	}
	{
		// all_seishi = true;
		__this->set_all_seishi_69((bool)1);
		// int i = 0;
		V_20 = 0;
		goto IL_0717;
	}

IL_06d0:
	{
		// if (blockList[i] != null)
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_171 = __this->get_blockList_70();
		int32_t L_172 = V_20;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_173;
		L_173 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_171, L_172, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_174;
		L_174 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_173, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_174)
		{
			goto IL_0711;
		}
	}
	{
		// script = blockList[i].GetComponent<Block_move>();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_175 = __this->get_blockList_70();
		int32_t L_176 = V_20;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_177;
		L_177 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_175, L_176, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		Block_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5 * L_178;
		L_178 = GameObject_GetComponent_TisBlock_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5_mCB23DDD42F5DBA9CEF807C25FF71D2B71E0A6499(L_177, /*hidden argument*/GameObject_GetComponent_TisBlock_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5_mCB23DDD42F5DBA9CEF807C25FF71D2B71E0A6499_RuntimeMethod_var);
		__this->set_script_37(L_178);
		// if (script.seishi != true)
		Block_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5 * L_179 = __this->get_script_37();
		bool L_180 = L_179->get_seishi_18();
		if (L_180)
		{
			goto IL_0711;
		}
	}
	{
		// all_seishi = false;
		__this->set_all_seishi_69((bool)0);
	}

IL_0711:
	{
		// i++;
		int32_t L_181 = V_20;
		V_20 = ((int32_t)il2cpp_codegen_add((int32_t)L_181, (int32_t)1));
	}

IL_0717:
	{
		// while ( i< blockList.Count )
		int32_t L_182 = V_20;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_183 = __this->get_blockList_70();
		int32_t L_184;
		L_184 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_183, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		if ((((int32_t)L_182) < ((int32_t)L_184)))
		{
			goto IL_06d0;
		}
	}
	{
		// if (all_seishi == true)
		bool L_185 = __this->get_all_seishi_69();
		if (!L_185)
		{
			goto IL_075b;
		}
	}
	{
		// AudioSource soundPlayer = GetComponent<AudioSource>();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_186;
		L_186 = Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		V_21 = L_186;
		// if(soundPlayer != null)
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_187 = V_21;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_188;
		L_188 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_187, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_188)
		{
			goto IL_074d;
		}
	}
	{
		// soundPlayer.PlayOneShot(block_rakka);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_189 = V_21;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_190 = __this->get_block_rakka_27();
		AudioSource_PlayOneShot_mA90B136041A61C30909301D45D0315088CA7D796(L_189, L_190, /*hidden argument*/NULL);
	}

IL_074d:
	{
		// trigger = 2;
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->set_trigger_64(2);
		// temp_cnt=10;            //ブロックが静止してからの待機時間
		__this->set_temp_cnt_49(((int32_t)10));
	}

IL_075b:
	{
		// if (trigger == 2)           //全てのオブジェクトが静止したら
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		int32_t L_191 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_trigger_64();
		if ((!(((uint32_t)L_191) == ((uint32_t)2))))
		{
			goto IL_0780;
		}
	}
	{
		// temp_cnt--;
		int32_t L_192 = __this->get_temp_cnt_49();
		__this->set_temp_cnt_49(((int32_t)il2cpp_codegen_subtract((int32_t)L_192, (int32_t)1)));
		// if (temp_cnt <= 0) {
		int32_t L_193 = __this->get_temp_cnt_49();
		if ((((int32_t)L_193) > ((int32_t)0)))
		{
			goto IL_0780;
		}
	}
	{
		// trigger = 3;
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->set_trigger_64(3);
	}

IL_0780:
	{
		// if (trigger == 3)           //３つ並んでいるか、チェックを開始する
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		int32_t L_194 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_trigger_64();
		if ((!(((uint32_t)L_194) == ((uint32_t)3))))
		{
			goto IL_157c;
		}
	}
	{
		// int k = 0;
		V_22 = 0;
		// for (int i = 0; i < block_matrix.GetLength(1); i++)
		V_23 = 0;
		goto IL_0c44;
	}

IL_0796:
	{
		// for (int j = 0; j < block_matrix.GetLength(0)-2; j++)
		V_24 = 0;
		goto IL_0c2a;
	}

IL_079e:
	{
		// if ((block_matrix_tag[j,i] > 1) && (block_matrix_tag[j,i] == block_matrix_tag[j+1,i]) )
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_195 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_block_matrix_tag_73();
		int32_t L_196 = V_24;
		int32_t L_197 = V_23;
		int32_t L_198;
		L_198 = (L_195)->GetAtUnchecked(L_196, L_197);
		if ((((int32_t)L_198) <= ((int32_t)1)))
		{
			goto IL_0c24;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_199 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_block_matrix_tag_73();
		int32_t L_200 = V_24;
		int32_t L_201 = V_23;
		int32_t L_202;
		L_202 = (L_199)->GetAtUnchecked(L_200, L_201);
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_203 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_block_matrix_tag_73();
		int32_t L_204 = V_24;
		int32_t L_205 = V_23;
		int32_t L_206;
		L_206 = (L_203)->GetAtUnchecked(((int32_t)il2cpp_codegen_add((int32_t)L_204, (int32_t)1)), L_205);
		if ((!(((uint32_t)L_202) == ((uint32_t)L_206))))
		{
			goto IL_0c24;
		}
	}
	{
		// if (block_matrix_tag[j, i] == block_matrix_tag[j + 2, i])
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_207 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_block_matrix_tag_73();
		int32_t L_208 = V_24;
		int32_t L_209 = V_23;
		int32_t L_210;
		L_210 = (L_207)->GetAtUnchecked(L_208, L_209);
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_211 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_block_matrix_tag_73();
		int32_t L_212 = V_24;
		int32_t L_213 = V_23;
		int32_t L_214;
		L_214 = (L_211)->GetAtUnchecked(((int32_t)il2cpp_codegen_add((int32_t)L_212, (int32_t)2)), L_213);
		if ((!(((uint32_t)L_210) == ((uint32_t)L_214))))
		{
			goto IL_08e8;
		}
	}
	{
		// Debug.Log("height_success3!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A(_stringLiteral696B0E3A55001748569DA84DC32ABBC0E6B84431, /*hidden argument*/NULL);
		// score += 30 * rensa_cnt * rensa_cnt;
		int32_t L_215 = __this->get_score_57();
		int32_t L_216 = __this->get_rensa_cnt_40();
		int32_t L_217 = __this->get_rensa_cnt_40();
		__this->set_score_57(((int32_t)il2cpp_codegen_add((int32_t)L_215, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)30), (int32_t)L_216)), (int32_t)L_217)))));
		// UpdateScore();
		GameManager_UpdateScore_m47A707C284FD9E97A180AF5021B438473BF7233A(__this, /*hidden argument*/NULL);
		// k = (int)block_matrix[j,i];
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_218 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_block_matrix_72();
		int32_t L_219 = V_24;
		int32_t L_220 = V_23;
		int32_t L_221;
		L_221 = (L_218)->GetAtUnchecked(L_219, L_220);
		V_22 = L_221;
		// Debug.Log("success_block_no:"+k);
		String_t* L_222;
		L_222 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_22), /*hidden argument*/NULL);
		String_t* L_223;
		L_223 = String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A(_stringLiteralCC1EFA5D55DE845A18194F44D5FC55CAAA58C610, L_222, /*hidden argument*/NULL);
		Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A(L_223, /*hidden argument*/NULL);
		// Block_move script1 = blockList[k].GetComponent<Block_move>();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_224 = __this->get_blockList_70();
		int32_t L_225 = V_22;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_226;
		L_226 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_224, L_225, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		Block_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5 * L_227;
		L_227 = GameObject_GetComponent_TisBlock_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5_mCB23DDD42F5DBA9CEF807C25FF71D2B71E0A6499(L_226, /*hidden argument*/GameObject_GetComponent_TisBlock_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5_mCB23DDD42F5DBA9CEF807C25FF71D2B71E0A6499_RuntimeMethod_var);
		// script1.isMatching = true;
		L_227->set_isMatching_11((bool)1);
		// k = (int)block_matrix[j+1,i];
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_228 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_block_matrix_72();
		int32_t L_229 = V_24;
		int32_t L_230 = V_23;
		int32_t L_231;
		L_231 = (L_228)->GetAtUnchecked(((int32_t)il2cpp_codegen_add((int32_t)L_229, (int32_t)1)), L_230);
		V_22 = L_231;
		// Debug.Log("success_block_no:"+k);
		String_t* L_232;
		L_232 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_22), /*hidden argument*/NULL);
		String_t* L_233;
		L_233 = String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A(_stringLiteralCC1EFA5D55DE845A18194F44D5FC55CAAA58C610, L_232, /*hidden argument*/NULL);
		Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A(L_233, /*hidden argument*/NULL);
		// Block_move script2 = blockList[k].GetComponent<Block_move>();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_234 = __this->get_blockList_70();
		int32_t L_235 = V_22;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_236;
		L_236 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_234, L_235, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		Block_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5 * L_237;
		L_237 = GameObject_GetComponent_TisBlock_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5_mCB23DDD42F5DBA9CEF807C25FF71D2B71E0A6499(L_236, /*hidden argument*/GameObject_GetComponent_TisBlock_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5_mCB23DDD42F5DBA9CEF807C25FF71D2B71E0A6499_RuntimeMethod_var);
		// script2.isMatching = true;
		L_237->set_isMatching_11((bool)1);
		// k = (int)block_matrix[j+2,i];
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_238 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_block_matrix_72();
		int32_t L_239 = V_24;
		int32_t L_240 = V_23;
		int32_t L_241;
		L_241 = (L_238)->GetAtUnchecked(((int32_t)il2cpp_codegen_add((int32_t)L_239, (int32_t)2)), L_240);
		V_22 = L_241;
		// Debug.Log("success_block_no:"+k);
		String_t* L_242;
		L_242 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_22), /*hidden argument*/NULL);
		String_t* L_243;
		L_243 = String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A(_stringLiteralCC1EFA5D55DE845A18194F44D5FC55CAAA58C610, L_242, /*hidden argument*/NULL);
		Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A(L_243, /*hidden argument*/NULL);
		// Block_move script3 = blockList[k].GetComponent<Block_move>();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_244 = __this->get_blockList_70();
		int32_t L_245 = V_22;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_246;
		L_246 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_244, L_245, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		Block_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5 * L_247;
		L_247 = GameObject_GetComponent_TisBlock_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5_mCB23DDD42F5DBA9CEF807C25FF71D2B71E0A6499(L_246, /*hidden argument*/GameObject_GetComponent_TisBlock_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5_mCB23DDD42F5DBA9CEF807C25FF71D2B71E0A6499_RuntimeMethod_var);
		// script3.isMatching = true;
		L_247->set_isMatching_11((bool)1);
		// }
		goto IL_0c24;
	}

IL_08e8:
	{
		// if (block_matrix_tag[j, i] == block_matrix_tag[j + 1, i +1])
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_248 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_block_matrix_tag_73();
		int32_t L_249 = V_24;
		int32_t L_250 = V_23;
		int32_t L_251;
		L_251 = (L_248)->GetAtUnchecked(L_249, L_250);
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_252 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_block_matrix_tag_73();
		int32_t L_253 = V_24;
		int32_t L_254 = V_23;
		int32_t L_255;
		L_255 = (L_252)->GetAtUnchecked(((int32_t)il2cpp_codegen_add((int32_t)L_253, (int32_t)1)), ((int32_t)il2cpp_codegen_add((int32_t)L_254, (int32_t)1)));
		if ((!(((uint32_t)L_251) == ((uint32_t)L_255))))
		{
			goto IL_09ff;
		}
	}
	{
		// Debug.Log("height L1_success3!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A(_stringLiteral2C0F8F472A971C418AC2F2C15FA3E96E1287C3E8, /*hidden argument*/NULL);
		// score += 30 *rensa_cnt * rensa_cnt;
		int32_t L_256 = __this->get_score_57();
		int32_t L_257 = __this->get_rensa_cnt_40();
		int32_t L_258 = __this->get_rensa_cnt_40();
		__this->set_score_57(((int32_t)il2cpp_codegen_add((int32_t)L_256, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)30), (int32_t)L_257)), (int32_t)L_258)))));
		// UpdateScore();
		GameManager_UpdateScore_m47A707C284FD9E97A180AF5021B438473BF7233A(__this, /*hidden argument*/NULL);
		// k = (int)block_matrix[j,i];
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_259 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_block_matrix_72();
		int32_t L_260 = V_24;
		int32_t L_261 = V_23;
		int32_t L_262;
		L_262 = (L_259)->GetAtUnchecked(L_260, L_261);
		V_22 = L_262;
		// Debug.Log("success_block_no:"+k);
		String_t* L_263;
		L_263 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_22), /*hidden argument*/NULL);
		String_t* L_264;
		L_264 = String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A(_stringLiteralCC1EFA5D55DE845A18194F44D5FC55CAAA58C610, L_263, /*hidden argument*/NULL);
		Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A(L_264, /*hidden argument*/NULL);
		// Block_move script1 = blockList[k].GetComponent<Block_move>();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_265 = __this->get_blockList_70();
		int32_t L_266 = V_22;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_267;
		L_267 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_265, L_266, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		Block_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5 * L_268;
		L_268 = GameObject_GetComponent_TisBlock_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5_mCB23DDD42F5DBA9CEF807C25FF71D2B71E0A6499(L_267, /*hidden argument*/GameObject_GetComponent_TisBlock_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5_mCB23DDD42F5DBA9CEF807C25FF71D2B71E0A6499_RuntimeMethod_var);
		// script1.isMatching = true;
		L_268->set_isMatching_11((bool)1);
		// k = (int)block_matrix[j+1,i];
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_269 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_block_matrix_72();
		int32_t L_270 = V_24;
		int32_t L_271 = V_23;
		int32_t L_272;
		L_272 = (L_269)->GetAtUnchecked(((int32_t)il2cpp_codegen_add((int32_t)L_270, (int32_t)1)), L_271);
		V_22 = L_272;
		// Debug.Log("success_block_no:"+k);
		String_t* L_273;
		L_273 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_22), /*hidden argument*/NULL);
		String_t* L_274;
		L_274 = String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A(_stringLiteralCC1EFA5D55DE845A18194F44D5FC55CAAA58C610, L_273, /*hidden argument*/NULL);
		Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A(L_274, /*hidden argument*/NULL);
		// Block_move script2 = blockList[k].GetComponent<Block_move>();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_275 = __this->get_blockList_70();
		int32_t L_276 = V_22;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_277;
		L_277 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_275, L_276, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		Block_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5 * L_278;
		L_278 = GameObject_GetComponent_TisBlock_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5_mCB23DDD42F5DBA9CEF807C25FF71D2B71E0A6499(L_277, /*hidden argument*/GameObject_GetComponent_TisBlock_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5_mCB23DDD42F5DBA9CEF807C25FF71D2B71E0A6499_RuntimeMethod_var);
		// script2.isMatching = true;
		L_278->set_isMatching_11((bool)1);
		// k = (int)block_matrix[j+1,i+1];
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_279 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_block_matrix_72();
		int32_t L_280 = V_24;
		int32_t L_281 = V_23;
		int32_t L_282;
		L_282 = (L_279)->GetAtUnchecked(((int32_t)il2cpp_codegen_add((int32_t)L_280, (int32_t)1)), ((int32_t)il2cpp_codegen_add((int32_t)L_281, (int32_t)1)));
		V_22 = L_282;
		// Debug.Log("success_block_no:"+k);
		String_t* L_283;
		L_283 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_22), /*hidden argument*/NULL);
		String_t* L_284;
		L_284 = String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A(_stringLiteralCC1EFA5D55DE845A18194F44D5FC55CAAA58C610, L_283, /*hidden argument*/NULL);
		Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A(L_284, /*hidden argument*/NULL);
		// Block_move script3 = blockList[k].GetComponent<Block_move>();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_285 = __this->get_blockList_70();
		int32_t L_286 = V_22;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_287;
		L_287 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_285, L_286, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		Block_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5 * L_288;
		L_288 = GameObject_GetComponent_TisBlock_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5_mCB23DDD42F5DBA9CEF807C25FF71D2B71E0A6499(L_287, /*hidden argument*/GameObject_GetComponent_TisBlock_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5_mCB23DDD42F5DBA9CEF807C25FF71D2B71E0A6499_RuntimeMethod_var);
		// script3.isMatching = true;
		L_288->set_isMatching_11((bool)1);
		// }
		goto IL_0c24;
	}

IL_09ff:
	{
		// if (block_matrix_tag[j, i] == block_matrix_tag[j + 1, i -1])
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_289 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_block_matrix_tag_73();
		int32_t L_290 = V_24;
		int32_t L_291 = V_23;
		int32_t L_292;
		L_292 = (L_289)->GetAtUnchecked(L_290, L_291);
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_293 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_block_matrix_tag_73();
		int32_t L_294 = V_24;
		int32_t L_295 = V_23;
		int32_t L_296;
		L_296 = (L_293)->GetAtUnchecked(((int32_t)il2cpp_codegen_add((int32_t)L_294, (int32_t)1)), ((int32_t)il2cpp_codegen_subtract((int32_t)L_295, (int32_t)1)));
		if ((!(((uint32_t)L_292) == ((uint32_t)L_296))))
		{
			goto IL_0b16;
		}
	}
	{
		// Debug.Log("height L2_success3!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A(_stringLiteral6E8112DE272D3B7579DD734F255BA00B3904010E, /*hidden argument*/NULL);
		// score += 30 *rensa_cnt * rensa_cnt;
		int32_t L_297 = __this->get_score_57();
		int32_t L_298 = __this->get_rensa_cnt_40();
		int32_t L_299 = __this->get_rensa_cnt_40();
		__this->set_score_57(((int32_t)il2cpp_codegen_add((int32_t)L_297, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)30), (int32_t)L_298)), (int32_t)L_299)))));
		// UpdateScore();
		GameManager_UpdateScore_m47A707C284FD9E97A180AF5021B438473BF7233A(__this, /*hidden argument*/NULL);
		// k = (int)block_matrix[j,i];
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_300 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_block_matrix_72();
		int32_t L_301 = V_24;
		int32_t L_302 = V_23;
		int32_t L_303;
		L_303 = (L_300)->GetAtUnchecked(L_301, L_302);
		V_22 = L_303;
		// Debug.Log("success_block_no:"+k);
		String_t* L_304;
		L_304 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_22), /*hidden argument*/NULL);
		String_t* L_305;
		L_305 = String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A(_stringLiteralCC1EFA5D55DE845A18194F44D5FC55CAAA58C610, L_304, /*hidden argument*/NULL);
		Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A(L_305, /*hidden argument*/NULL);
		// Block_move script1 = blockList[k].GetComponent<Block_move>();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_306 = __this->get_blockList_70();
		int32_t L_307 = V_22;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_308;
		L_308 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_306, L_307, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		Block_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5 * L_309;
		L_309 = GameObject_GetComponent_TisBlock_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5_mCB23DDD42F5DBA9CEF807C25FF71D2B71E0A6499(L_308, /*hidden argument*/GameObject_GetComponent_TisBlock_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5_mCB23DDD42F5DBA9CEF807C25FF71D2B71E0A6499_RuntimeMethod_var);
		// script1.isMatching = true;
		L_309->set_isMatching_11((bool)1);
		// k = (int)block_matrix[j+1,i];
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_310 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_block_matrix_72();
		int32_t L_311 = V_24;
		int32_t L_312 = V_23;
		int32_t L_313;
		L_313 = (L_310)->GetAtUnchecked(((int32_t)il2cpp_codegen_add((int32_t)L_311, (int32_t)1)), L_312);
		V_22 = L_313;
		// Debug.Log("success_block_no:"+k);
		String_t* L_314;
		L_314 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_22), /*hidden argument*/NULL);
		String_t* L_315;
		L_315 = String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A(_stringLiteralCC1EFA5D55DE845A18194F44D5FC55CAAA58C610, L_314, /*hidden argument*/NULL);
		Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A(L_315, /*hidden argument*/NULL);
		// Block_move script2 = blockList[k].GetComponent<Block_move>();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_316 = __this->get_blockList_70();
		int32_t L_317 = V_22;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_318;
		L_318 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_316, L_317, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		Block_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5 * L_319;
		L_319 = GameObject_GetComponent_TisBlock_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5_mCB23DDD42F5DBA9CEF807C25FF71D2B71E0A6499(L_318, /*hidden argument*/GameObject_GetComponent_TisBlock_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5_mCB23DDD42F5DBA9CEF807C25FF71D2B71E0A6499_RuntimeMethod_var);
		// script2.isMatching = true;
		L_319->set_isMatching_11((bool)1);
		// k = (int)block_matrix[j+1,i-1];
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_320 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_block_matrix_72();
		int32_t L_321 = V_24;
		int32_t L_322 = V_23;
		int32_t L_323;
		L_323 = (L_320)->GetAtUnchecked(((int32_t)il2cpp_codegen_add((int32_t)L_321, (int32_t)1)), ((int32_t)il2cpp_codegen_subtract((int32_t)L_322, (int32_t)1)));
		V_22 = L_323;
		// Debug.Log("success_block_no:"+k);
		String_t* L_324;
		L_324 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_22), /*hidden argument*/NULL);
		String_t* L_325;
		L_325 = String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A(_stringLiteralCC1EFA5D55DE845A18194F44D5FC55CAAA58C610, L_324, /*hidden argument*/NULL);
		Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A(L_325, /*hidden argument*/NULL);
		// Block_move script3 = blockList[k].GetComponent<Block_move>();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_326 = __this->get_blockList_70();
		int32_t L_327 = V_22;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_328;
		L_328 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_326, L_327, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		Block_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5 * L_329;
		L_329 = GameObject_GetComponent_TisBlock_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5_mCB23DDD42F5DBA9CEF807C25FF71D2B71E0A6499(L_328, /*hidden argument*/GameObject_GetComponent_TisBlock_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5_mCB23DDD42F5DBA9CEF807C25FF71D2B71E0A6499_RuntimeMethod_var);
		// script3.isMatching = true;
		L_329->set_isMatching_11((bool)1);
		// }
		goto IL_0c24;
	}

IL_0b16:
	{
		// if (block_matrix_tag[j, i] == block_matrix_tag[j , i +1])
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_330 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_block_matrix_tag_73();
		int32_t L_331 = V_24;
		int32_t L_332 = V_23;
		int32_t L_333;
		L_333 = (L_330)->GetAtUnchecked(L_331, L_332);
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_334 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_block_matrix_tag_73();
		int32_t L_335 = V_24;
		int32_t L_336 = V_23;
		int32_t L_337;
		L_337 = (L_334)->GetAtUnchecked(L_335, ((int32_t)il2cpp_codegen_add((int32_t)L_336, (int32_t)1)));
		if ((!(((uint32_t)L_333) == ((uint32_t)L_337))))
		{
			goto IL_0c24;
		}
	}
	{
		// Debug.Log("height LSP_success3!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A(_stringLiteral36037DB3104492030FEF31D2C0969F8E3C0432D0, /*hidden argument*/NULL);
		// score += 30*rensa_cnt * rensa_cnt;
		int32_t L_338 = __this->get_score_57();
		int32_t L_339 = __this->get_rensa_cnt_40();
		int32_t L_340 = __this->get_rensa_cnt_40();
		__this->set_score_57(((int32_t)il2cpp_codegen_add((int32_t)L_338, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)30), (int32_t)L_339)), (int32_t)L_340)))));
		// UpdateScore();
		GameManager_UpdateScore_m47A707C284FD9E97A180AF5021B438473BF7233A(__this, /*hidden argument*/NULL);
		// k = (int)block_matrix[j,i];
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_341 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_block_matrix_72();
		int32_t L_342 = V_24;
		int32_t L_343 = V_23;
		int32_t L_344;
		L_344 = (L_341)->GetAtUnchecked(L_342, L_343);
		V_22 = L_344;
		// Debug.Log("success_block_no:"+k);
		String_t* L_345;
		L_345 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_22), /*hidden argument*/NULL);
		String_t* L_346;
		L_346 = String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A(_stringLiteralCC1EFA5D55DE845A18194F44D5FC55CAAA58C610, L_345, /*hidden argument*/NULL);
		Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A(L_346, /*hidden argument*/NULL);
		// Block_move script1 = blockList[k].GetComponent<Block_move>();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_347 = __this->get_blockList_70();
		int32_t L_348 = V_22;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_349;
		L_349 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_347, L_348, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		Block_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5 * L_350;
		L_350 = GameObject_GetComponent_TisBlock_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5_mCB23DDD42F5DBA9CEF807C25FF71D2B71E0A6499(L_349, /*hidden argument*/GameObject_GetComponent_TisBlock_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5_mCB23DDD42F5DBA9CEF807C25FF71D2B71E0A6499_RuntimeMethod_var);
		// script1.isMatching = true;
		L_350->set_isMatching_11((bool)1);
		// k = (int)block_matrix[j+1,i];
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_351 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_block_matrix_72();
		int32_t L_352 = V_24;
		int32_t L_353 = V_23;
		int32_t L_354;
		L_354 = (L_351)->GetAtUnchecked(((int32_t)il2cpp_codegen_add((int32_t)L_352, (int32_t)1)), L_353);
		V_22 = L_354;
		// Debug.Log("success_block_no:"+k);
		String_t* L_355;
		L_355 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_22), /*hidden argument*/NULL);
		String_t* L_356;
		L_356 = String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A(_stringLiteralCC1EFA5D55DE845A18194F44D5FC55CAAA58C610, L_355, /*hidden argument*/NULL);
		Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A(L_356, /*hidden argument*/NULL);
		// Block_move script2 = blockList[k].GetComponent<Block_move>();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_357 = __this->get_blockList_70();
		int32_t L_358 = V_22;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_359;
		L_359 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_357, L_358, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		Block_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5 * L_360;
		L_360 = GameObject_GetComponent_TisBlock_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5_mCB23DDD42F5DBA9CEF807C25FF71D2B71E0A6499(L_359, /*hidden argument*/GameObject_GetComponent_TisBlock_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5_mCB23DDD42F5DBA9CEF807C25FF71D2B71E0A6499_RuntimeMethod_var);
		// script2.isMatching = true;
		L_360->set_isMatching_11((bool)1);
		// k = (int)block_matrix[j,i+1];
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_361 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_block_matrix_72();
		int32_t L_362 = V_24;
		int32_t L_363 = V_23;
		int32_t L_364;
		L_364 = (L_361)->GetAtUnchecked(L_362, ((int32_t)il2cpp_codegen_add((int32_t)L_363, (int32_t)1)));
		V_22 = L_364;
		// Debug.Log("success_block_no:"+k);
		String_t* L_365;
		L_365 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_22), /*hidden argument*/NULL);
		String_t* L_366;
		L_366 = String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A(_stringLiteralCC1EFA5D55DE845A18194F44D5FC55CAAA58C610, L_365, /*hidden argument*/NULL);
		Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A(L_366, /*hidden argument*/NULL);
		// Block_move script3 = blockList[k].GetComponent<Block_move>();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_367 = __this->get_blockList_70();
		int32_t L_368 = V_22;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_369;
		L_369 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_367, L_368, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		Block_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5 * L_370;
		L_370 = GameObject_GetComponent_TisBlock_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5_mCB23DDD42F5DBA9CEF807C25FF71D2B71E0A6499(L_369, /*hidden argument*/GameObject_GetComponent_TisBlock_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5_mCB23DDD42F5DBA9CEF807C25FF71D2B71E0A6499_RuntimeMethod_var);
		// script3.isMatching = true;
		L_370->set_isMatching_11((bool)1);
	}

IL_0c24:
	{
		// for (int j = 0; j < block_matrix.GetLength(0)-2; j++)
		int32_t L_371 = V_24;
		V_24 = ((int32_t)il2cpp_codegen_add((int32_t)L_371, (int32_t)1));
	}

IL_0c2a:
	{
		// for (int j = 0; j < block_matrix.GetLength(0)-2; j++)
		int32_t L_372 = V_24;
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_373 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_block_matrix_72();
		int32_t L_374;
		L_374 = Array_GetLength_m8EF840DA7BEB0DFF04D36C3DC651B673C49A02BB((RuntimeArray *)(RuntimeArray *)L_373, 0, /*hidden argument*/NULL);
		if ((((int32_t)L_372) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_374, (int32_t)2)))))
		{
			goto IL_079e;
		}
	}
	{
		// for (int i = 0; i < block_matrix.GetLength(1); i++)
		int32_t L_375 = V_23;
		V_23 = ((int32_t)il2cpp_codegen_add((int32_t)L_375, (int32_t)1));
	}

IL_0c44:
	{
		// for (int i = 0; i < block_matrix.GetLength(1); i++)
		int32_t L_376 = V_23;
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_377 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_block_matrix_72();
		int32_t L_378;
		L_378 = Array_GetLength_m8EF840DA7BEB0DFF04D36C3DC651B673C49A02BB((RuntimeArray *)(RuntimeArray *)L_377, 1, /*hidden argument*/NULL);
		if ((((int32_t)L_376) < ((int32_t)L_378)))
		{
			goto IL_0796;
		}
	}
	{
		// for (int i = 0; i < block_matrix.GetLength(0); i++)
		V_25 = 0;
		goto IL_1094;
	}

IL_0c5e:
	{
		// for (int j = 0; j < block_matrix.GetLength(1)-2; j++)
		V_26 = 0;
		goto IL_107a;
	}

IL_0c66:
	{
		// if ((block_matrix_tag[i,j] > 1) && (block_matrix_tag[i,j] == block_matrix_tag[i,j+1]) )
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_379 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_block_matrix_tag_73();
		int32_t L_380 = V_25;
		int32_t L_381 = V_26;
		int32_t L_382;
		L_382 = (L_379)->GetAtUnchecked(L_380, L_381);
		if ((((int32_t)L_382) <= ((int32_t)1)))
		{
			goto IL_1074;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_383 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_block_matrix_tag_73();
		int32_t L_384 = V_25;
		int32_t L_385 = V_26;
		int32_t L_386;
		L_386 = (L_383)->GetAtUnchecked(L_384, L_385);
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_387 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_block_matrix_tag_73();
		int32_t L_388 = V_25;
		int32_t L_389 = V_26;
		int32_t L_390;
		L_390 = (L_387)->GetAtUnchecked(L_388, ((int32_t)il2cpp_codegen_add((int32_t)L_389, (int32_t)1)));
		if ((!(((uint32_t)L_386) == ((uint32_t)L_390))))
		{
			goto IL_1074;
		}
	}
	{
		// if (block_matrix_tag[i, j] == block_matrix_tag[i , j +2])
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_391 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_block_matrix_tag_73();
		int32_t L_392 = V_25;
		int32_t L_393 = V_26;
		int32_t L_394;
		L_394 = (L_391)->GetAtUnchecked(L_392, L_393);
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_395 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_block_matrix_tag_73();
		int32_t L_396 = V_25;
		int32_t L_397 = V_26;
		int32_t L_398;
		L_398 = (L_395)->GetAtUnchecked(L_396, ((int32_t)il2cpp_codegen_add((int32_t)L_397, (int32_t)2)));
		if ((!(((uint32_t)L_394) == ((uint32_t)L_398))))
		{
			goto IL_0d92;
		}
	}
	{
		// Debug.Log("width_success3!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A(_stringLiteralA8AE615AAF2B82A5AC2B851687ED76CDCDEAD455, /*hidden argument*/NULL);
		// score +=30 *rensa_cnt * rensa_cnt;
		int32_t L_399 = __this->get_score_57();
		int32_t L_400 = __this->get_rensa_cnt_40();
		int32_t L_401 = __this->get_rensa_cnt_40();
		__this->set_score_57(((int32_t)il2cpp_codegen_add((int32_t)L_399, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)30), (int32_t)L_400)), (int32_t)L_401)))));
		// UpdateScore();
		GameManager_UpdateScore_m47A707C284FD9E97A180AF5021B438473BF7233A(__this, /*hidden argument*/NULL);
		// k = (int)block_matrix[i,j];
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_402 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_block_matrix_72();
		int32_t L_403 = V_25;
		int32_t L_404 = V_26;
		int32_t L_405;
		L_405 = (L_402)->GetAtUnchecked(L_403, L_404);
		V_22 = L_405;
		// script = blockList[k].GetComponent<Block_move>();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_406 = __this->get_blockList_70();
		int32_t L_407 = V_22;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_408;
		L_408 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_406, L_407, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		Block_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5 * L_409;
		L_409 = GameObject_GetComponent_TisBlock_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5_mCB23DDD42F5DBA9CEF807C25FF71D2B71E0A6499(L_408, /*hidden argument*/GameObject_GetComponent_TisBlock_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5_mCB23DDD42F5DBA9CEF807C25FF71D2B71E0A6499_RuntimeMethod_var);
		__this->set_script_37(L_409);
		// script.isMatching = true;
		Block_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5 * L_410 = __this->get_script_37();
		L_410->set_isMatching_11((bool)1);
		// k = (int)block_matrix[i,j+1];
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_411 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_block_matrix_72();
		int32_t L_412 = V_25;
		int32_t L_413 = V_26;
		int32_t L_414;
		L_414 = (L_411)->GetAtUnchecked(L_412, ((int32_t)il2cpp_codegen_add((int32_t)L_413, (int32_t)1)));
		V_22 = L_414;
		// script = blockList[k].GetComponent<Block_move>();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_415 = __this->get_blockList_70();
		int32_t L_416 = V_22;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_417;
		L_417 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_415, L_416, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		Block_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5 * L_418;
		L_418 = GameObject_GetComponent_TisBlock_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5_mCB23DDD42F5DBA9CEF807C25FF71D2B71E0A6499(L_417, /*hidden argument*/GameObject_GetComponent_TisBlock_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5_mCB23DDD42F5DBA9CEF807C25FF71D2B71E0A6499_RuntimeMethod_var);
		__this->set_script_37(L_418);
		// script.isMatching = true;
		Block_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5 * L_419 = __this->get_script_37();
		L_419->set_isMatching_11((bool)1);
		// k = (int)block_matrix[i,j+2];
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_420 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_block_matrix_72();
		int32_t L_421 = V_25;
		int32_t L_422 = V_26;
		int32_t L_423;
		L_423 = (L_420)->GetAtUnchecked(L_421, ((int32_t)il2cpp_codegen_add((int32_t)L_422, (int32_t)2)));
		V_22 = L_423;
		// script = blockList[k].GetComponent<Block_move>();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_424 = __this->get_blockList_70();
		int32_t L_425 = V_22;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_426;
		L_426 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_424, L_425, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		Block_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5 * L_427;
		L_427 = GameObject_GetComponent_TisBlock_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5_mCB23DDD42F5DBA9CEF807C25FF71D2B71E0A6499(L_426, /*hidden argument*/GameObject_GetComponent_TisBlock_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5_mCB23DDD42F5DBA9CEF807C25FF71D2B71E0A6499_RuntimeMethod_var);
		__this->set_script_37(L_427);
		// script.isMatching = true;
		Block_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5 * L_428 = __this->get_script_37();
		L_428->set_isMatching_11((bool)1);
		// }
		goto IL_1074;
	}

IL_0d92:
	{
		// if (block_matrix_tag[i, j] == block_matrix_tag[i +1 , j +1])
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_429 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_block_matrix_tag_73();
		int32_t L_430 = V_25;
		int32_t L_431 = V_26;
		int32_t L_432;
		L_432 = (L_429)->GetAtUnchecked(L_430, L_431);
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_433 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_block_matrix_tag_73();
		int32_t L_434 = V_25;
		int32_t L_435 = V_26;
		int32_t L_436;
		L_436 = (L_433)->GetAtUnchecked(((int32_t)il2cpp_codegen_add((int32_t)L_434, (int32_t)1)), ((int32_t)il2cpp_codegen_add((int32_t)L_435, (int32_t)1)));
		if ((!(((uint32_t)L_432) == ((uint32_t)L_436))))
		{
			goto IL_0e8b;
		}
	}
	{
		// Debug.Log("width_L3_success3!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A(_stringLiteral60793966D57BD4CC387295BE790DD26F67EAE872, /*hidden argument*/NULL);
		// score +=30 * rensa_cnt * rensa_cnt;
		int32_t L_437 = __this->get_score_57();
		int32_t L_438 = __this->get_rensa_cnt_40();
		int32_t L_439 = __this->get_rensa_cnt_40();
		__this->set_score_57(((int32_t)il2cpp_codegen_add((int32_t)L_437, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)30), (int32_t)L_438)), (int32_t)L_439)))));
		// UpdateScore();
		GameManager_UpdateScore_m47A707C284FD9E97A180AF5021B438473BF7233A(__this, /*hidden argument*/NULL);
		// k = (int)block_matrix[i,j];
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_440 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_block_matrix_72();
		int32_t L_441 = V_25;
		int32_t L_442 = V_26;
		int32_t L_443;
		L_443 = (L_440)->GetAtUnchecked(L_441, L_442);
		V_22 = L_443;
		// script = blockList[k].GetComponent<Block_move>();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_444 = __this->get_blockList_70();
		int32_t L_445 = V_22;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_446;
		L_446 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_444, L_445, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		Block_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5 * L_447;
		L_447 = GameObject_GetComponent_TisBlock_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5_mCB23DDD42F5DBA9CEF807C25FF71D2B71E0A6499(L_446, /*hidden argument*/GameObject_GetComponent_TisBlock_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5_mCB23DDD42F5DBA9CEF807C25FF71D2B71E0A6499_RuntimeMethod_var);
		__this->set_script_37(L_447);
		// script.isMatching = true;
		Block_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5 * L_448 = __this->get_script_37();
		L_448->set_isMatching_11((bool)1);
		// k = (int)block_matrix[i,j+1];
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_449 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_block_matrix_72();
		int32_t L_450 = V_25;
		int32_t L_451 = V_26;
		int32_t L_452;
		L_452 = (L_449)->GetAtUnchecked(L_450, ((int32_t)il2cpp_codegen_add((int32_t)L_451, (int32_t)1)));
		V_22 = L_452;
		// script = blockList[k].GetComponent<Block_move>();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_453 = __this->get_blockList_70();
		int32_t L_454 = V_22;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_455;
		L_455 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_453, L_454, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		Block_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5 * L_456;
		L_456 = GameObject_GetComponent_TisBlock_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5_mCB23DDD42F5DBA9CEF807C25FF71D2B71E0A6499(L_455, /*hidden argument*/GameObject_GetComponent_TisBlock_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5_mCB23DDD42F5DBA9CEF807C25FF71D2B71E0A6499_RuntimeMethod_var);
		__this->set_script_37(L_456);
		// script.isMatching = true;
		Block_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5 * L_457 = __this->get_script_37();
		L_457->set_isMatching_11((bool)1);
		// k = (int)block_matrix[i+1,j+1];
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_458 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_block_matrix_72();
		int32_t L_459 = V_25;
		int32_t L_460 = V_26;
		int32_t L_461;
		L_461 = (L_458)->GetAtUnchecked(((int32_t)il2cpp_codegen_add((int32_t)L_459, (int32_t)1)), ((int32_t)il2cpp_codegen_add((int32_t)L_460, (int32_t)1)));
		V_22 = L_461;
		// script = blockList[k].GetComponent<Block_move>();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_462 = __this->get_blockList_70();
		int32_t L_463 = V_22;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_464;
		L_464 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_462, L_463, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		Block_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5 * L_465;
		L_465 = GameObject_GetComponent_TisBlock_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5_mCB23DDD42F5DBA9CEF807C25FF71D2B71E0A6499(L_464, /*hidden argument*/GameObject_GetComponent_TisBlock_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5_mCB23DDD42F5DBA9CEF807C25FF71D2B71E0A6499_RuntimeMethod_var);
		__this->set_script_37(L_465);
		// script.isMatching = true;
		Block_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5 * L_466 = __this->get_script_37();
		L_466->set_isMatching_11((bool)1);
		// }
		goto IL_1074;
	}

IL_0e8b:
	{
		// if (block_matrix_tag[i, j] == block_matrix_tag[i -1 , j +1])
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_467 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_block_matrix_tag_73();
		int32_t L_468 = V_25;
		int32_t L_469 = V_26;
		int32_t L_470;
		L_470 = (L_467)->GetAtUnchecked(L_468, L_469);
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_471 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_block_matrix_tag_73();
		int32_t L_472 = V_25;
		int32_t L_473 = V_26;
		int32_t L_474;
		L_474 = (L_471)->GetAtUnchecked(((int32_t)il2cpp_codegen_subtract((int32_t)L_472, (int32_t)1)), ((int32_t)il2cpp_codegen_add((int32_t)L_473, (int32_t)1)));
		if ((!(((uint32_t)L_470) == ((uint32_t)L_474))))
		{
			goto IL_0f84;
		}
	}
	{
		// Debug.Log("width_L4_success3!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A(_stringLiteral8761507A3A90E88698691AE0DE7BCAD13796FA1B, /*hidden argument*/NULL);
		// score +=30 * rensa_cnt * rensa_cnt;
		int32_t L_475 = __this->get_score_57();
		int32_t L_476 = __this->get_rensa_cnt_40();
		int32_t L_477 = __this->get_rensa_cnt_40();
		__this->set_score_57(((int32_t)il2cpp_codegen_add((int32_t)L_475, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)30), (int32_t)L_476)), (int32_t)L_477)))));
		// UpdateScore();
		GameManager_UpdateScore_m47A707C284FD9E97A180AF5021B438473BF7233A(__this, /*hidden argument*/NULL);
		// k = (int)block_matrix[i,j];
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_478 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_block_matrix_72();
		int32_t L_479 = V_25;
		int32_t L_480 = V_26;
		int32_t L_481;
		L_481 = (L_478)->GetAtUnchecked(L_479, L_480);
		V_22 = L_481;
		// script = blockList[k].GetComponent<Block_move>();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_482 = __this->get_blockList_70();
		int32_t L_483 = V_22;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_484;
		L_484 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_482, L_483, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		Block_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5 * L_485;
		L_485 = GameObject_GetComponent_TisBlock_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5_mCB23DDD42F5DBA9CEF807C25FF71D2B71E0A6499(L_484, /*hidden argument*/GameObject_GetComponent_TisBlock_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5_mCB23DDD42F5DBA9CEF807C25FF71D2B71E0A6499_RuntimeMethod_var);
		__this->set_script_37(L_485);
		// script.isMatching = true;
		Block_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5 * L_486 = __this->get_script_37();
		L_486->set_isMatching_11((bool)1);
		// k = (int)block_matrix[i,j+1];
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_487 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_block_matrix_72();
		int32_t L_488 = V_25;
		int32_t L_489 = V_26;
		int32_t L_490;
		L_490 = (L_487)->GetAtUnchecked(L_488, ((int32_t)il2cpp_codegen_add((int32_t)L_489, (int32_t)1)));
		V_22 = L_490;
		// script = blockList[k].GetComponent<Block_move>();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_491 = __this->get_blockList_70();
		int32_t L_492 = V_22;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_493;
		L_493 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_491, L_492, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		Block_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5 * L_494;
		L_494 = GameObject_GetComponent_TisBlock_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5_mCB23DDD42F5DBA9CEF807C25FF71D2B71E0A6499(L_493, /*hidden argument*/GameObject_GetComponent_TisBlock_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5_mCB23DDD42F5DBA9CEF807C25FF71D2B71E0A6499_RuntimeMethod_var);
		__this->set_script_37(L_494);
		// script.isMatching = true;
		Block_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5 * L_495 = __this->get_script_37();
		L_495->set_isMatching_11((bool)1);
		// k = (int)block_matrix[i-1,j+1];
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_496 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_block_matrix_72();
		int32_t L_497 = V_25;
		int32_t L_498 = V_26;
		int32_t L_499;
		L_499 = (L_496)->GetAtUnchecked(((int32_t)il2cpp_codegen_subtract((int32_t)L_497, (int32_t)1)), ((int32_t)il2cpp_codegen_add((int32_t)L_498, (int32_t)1)));
		V_22 = L_499;
		// script = blockList[k].GetComponent<Block_move>();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_500 = __this->get_blockList_70();
		int32_t L_501 = V_22;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_502;
		L_502 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_500, L_501, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		Block_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5 * L_503;
		L_503 = GameObject_GetComponent_TisBlock_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5_mCB23DDD42F5DBA9CEF807C25FF71D2B71E0A6499(L_502, /*hidden argument*/GameObject_GetComponent_TisBlock_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5_mCB23DDD42F5DBA9CEF807C25FF71D2B71E0A6499_RuntimeMethod_var);
		__this->set_script_37(L_503);
		// script.isMatching = true;
		Block_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5 * L_504 = __this->get_script_37();
		L_504->set_isMatching_11((bool)1);
		// }
		goto IL_1074;
	}

IL_0f84:
	{
		// if (block_matrix_tag[i, j] == block_matrix_tag[i +1 , j ])
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_505 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_block_matrix_tag_73();
		int32_t L_506 = V_25;
		int32_t L_507 = V_26;
		int32_t L_508;
		L_508 = (L_505)->GetAtUnchecked(L_506, L_507);
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_509 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_block_matrix_tag_73();
		int32_t L_510 = V_25;
		int32_t L_511 = V_26;
		int32_t L_512;
		L_512 = (L_509)->GetAtUnchecked(((int32_t)il2cpp_codegen_add((int32_t)L_510, (int32_t)1)), L_511);
		if ((!(((uint32_t)L_508) == ((uint32_t)L_512))))
		{
			goto IL_1074;
		}
	}
	{
		// Debug.Log("width_L4_success3!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A(_stringLiteral8761507A3A90E88698691AE0DE7BCAD13796FA1B, /*hidden argument*/NULL);
		// score +=30 * rensa_cnt * rensa_cnt;
		int32_t L_513 = __this->get_score_57();
		int32_t L_514 = __this->get_rensa_cnt_40();
		int32_t L_515 = __this->get_rensa_cnt_40();
		__this->set_score_57(((int32_t)il2cpp_codegen_add((int32_t)L_513, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)30), (int32_t)L_514)), (int32_t)L_515)))));
		// UpdateScore();
		GameManager_UpdateScore_m47A707C284FD9E97A180AF5021B438473BF7233A(__this, /*hidden argument*/NULL);
		// k = (int)block_matrix[i,j];
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_516 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_block_matrix_72();
		int32_t L_517 = V_25;
		int32_t L_518 = V_26;
		int32_t L_519;
		L_519 = (L_516)->GetAtUnchecked(L_517, L_518);
		V_22 = L_519;
		// script = blockList[k].GetComponent<Block_move>();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_520 = __this->get_blockList_70();
		int32_t L_521 = V_22;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_522;
		L_522 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_520, L_521, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		Block_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5 * L_523;
		L_523 = GameObject_GetComponent_TisBlock_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5_mCB23DDD42F5DBA9CEF807C25FF71D2B71E0A6499(L_522, /*hidden argument*/GameObject_GetComponent_TisBlock_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5_mCB23DDD42F5DBA9CEF807C25FF71D2B71E0A6499_RuntimeMethod_var);
		__this->set_script_37(L_523);
		// script.isMatching = true;
		Block_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5 * L_524 = __this->get_script_37();
		L_524->set_isMatching_11((bool)1);
		// k = (int)block_matrix[i,j+1];
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_525 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_block_matrix_72();
		int32_t L_526 = V_25;
		int32_t L_527 = V_26;
		int32_t L_528;
		L_528 = (L_525)->GetAtUnchecked(L_526, ((int32_t)il2cpp_codegen_add((int32_t)L_527, (int32_t)1)));
		V_22 = L_528;
		// script = blockList[k].GetComponent<Block_move>();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_529 = __this->get_blockList_70();
		int32_t L_530 = V_22;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_531;
		L_531 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_529, L_530, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		Block_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5 * L_532;
		L_532 = GameObject_GetComponent_TisBlock_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5_mCB23DDD42F5DBA9CEF807C25FF71D2B71E0A6499(L_531, /*hidden argument*/GameObject_GetComponent_TisBlock_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5_mCB23DDD42F5DBA9CEF807C25FF71D2B71E0A6499_RuntimeMethod_var);
		__this->set_script_37(L_532);
		// script.isMatching = true;
		Block_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5 * L_533 = __this->get_script_37();
		L_533->set_isMatching_11((bool)1);
		// k = (int)block_matrix[i+1,j];
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_534 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_block_matrix_72();
		int32_t L_535 = V_25;
		int32_t L_536 = V_26;
		int32_t L_537;
		L_537 = (L_534)->GetAtUnchecked(((int32_t)il2cpp_codegen_add((int32_t)L_535, (int32_t)1)), L_536);
		V_22 = L_537;
		// script = blockList[k].GetComponent<Block_move>();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_538 = __this->get_blockList_70();
		int32_t L_539 = V_22;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_540;
		L_540 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_538, L_539, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		Block_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5 * L_541;
		L_541 = GameObject_GetComponent_TisBlock_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5_mCB23DDD42F5DBA9CEF807C25FF71D2B71E0A6499(L_540, /*hidden argument*/GameObject_GetComponent_TisBlock_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5_mCB23DDD42F5DBA9CEF807C25FF71D2B71E0A6499_RuntimeMethod_var);
		__this->set_script_37(L_541);
		// script.isMatching = true;
		Block_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5 * L_542 = __this->get_script_37();
		L_542->set_isMatching_11((bool)1);
	}

IL_1074:
	{
		// for (int j = 0; j < block_matrix.GetLength(1)-2; j++)
		int32_t L_543 = V_26;
		V_26 = ((int32_t)il2cpp_codegen_add((int32_t)L_543, (int32_t)1));
	}

IL_107a:
	{
		// for (int j = 0; j < block_matrix.GetLength(1)-2; j++)
		int32_t L_544 = V_26;
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_545 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_block_matrix_72();
		int32_t L_546;
		L_546 = Array_GetLength_m8EF840DA7BEB0DFF04D36C3DC651B673C49A02BB((RuntimeArray *)(RuntimeArray *)L_545, 1, /*hidden argument*/NULL);
		if ((((int32_t)L_544) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_546, (int32_t)2)))))
		{
			goto IL_0c66;
		}
	}
	{
		// for (int i = 0; i < block_matrix.GetLength(0); i++)
		int32_t L_547 = V_25;
		V_25 = ((int32_t)il2cpp_codegen_add((int32_t)L_547, (int32_t)1));
	}

IL_1094:
	{
		// for (int i = 0; i < block_matrix.GetLength(0); i++)
		int32_t L_548 = V_25;
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_549 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_block_matrix_72();
		int32_t L_550;
		L_550 = Array_GetLength_m8EF840DA7BEB0DFF04D36C3DC651B673C49A02BB((RuntimeArray *)(RuntimeArray *)L_549, 0, /*hidden argument*/NULL);
		if ((((int32_t)L_548) < ((int32_t)L_550)))
		{
			goto IL_0c5e;
		}
	}
	{
		// foreach (var item in blockList)
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_551 = __this->get_blockList_70();
		Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14  L_552;
		L_552 = List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6(L_551, /*hidden argument*/List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6_RuntimeMethod_var);
		V_17 = L_552;
	}

IL_10b3:
	try
	{ // begin try (depth: 1)
		{
			goto IL_10e3;
		}

IL_10b5:
		{
			// foreach (var item in blockList)
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_553;
			L_553 = Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_inline((Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *)(&V_17), /*hidden argument*/Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_RuntimeMethod_var);
			V_27 = L_553;
			// if (item != null)
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_554 = V_27;
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_555;
			L_555 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_554, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
			if (!L_555)
			{
				goto IL_10e3;
			}
		}

IL_10c8:
		{
			// if (item.GetComponent<Block_move>().isMatching == true)
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_556 = V_27;
			Block_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5 * L_557;
			L_557 = GameObject_GetComponent_TisBlock_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5_mCB23DDD42F5DBA9CEF807C25FF71D2B71E0A6499(L_556, /*hidden argument*/GameObject_GetComponent_TisBlock_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5_mCB23DDD42F5DBA9CEF807C25FF71D2B71E0A6499_RuntimeMethod_var);
			bool L_558 = L_557->get_isMatching_11();
			if (!L_558)
			{
				goto IL_10e3;
			}
		}

IL_10d6:
		{
			// deleteList.Add(item);
			List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_559 = __this->get_deleteList_71();
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_560 = V_27;
			List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3(L_559, L_560, /*hidden argument*/List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
		}

IL_10e3:
		{
			// foreach (var item in blockList)
			bool L_561;
			L_561 = Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7((Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *)(&V_17), /*hidden argument*/Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7_RuntimeMethod_var);
			if (L_561)
			{
				goto IL_10b5;
			}
		}

IL_10ec:
		{
			IL2CPP_LEAVE(0x10FC, FINALLY_10ee);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_10ee;
	}

FINALLY_10ee:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9((Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *)(&V_17), /*hidden argument*/Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9_RuntimeMethod_var);
		IL2CPP_END_FINALLY(4334)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(4334)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x10FC, IL_10fc)
	}

IL_10fc:
	{
		// Debug.Log("消去可能なブロック数："+deleteList.Count);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_562 = __this->get_deleteList_71();
		int32_t L_563;
		L_563 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_562, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		V_15 = L_563;
		String_t* L_564;
		L_564 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_15), /*hidden argument*/NULL);
		String_t* L_565;
		L_565 = String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A(_stringLiteral86D9C355E076DAE383D4341944F9F4B207C93F9C, L_564, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A(L_565, /*hidden argument*/NULL);
		// if (deleteList.Count>0)         //消去可能なブロックがあればブロック消去の処理へ
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_566 = __this->get_deleteList_71();
		int32_t L_567;
		L_567 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_566, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		if ((((int32_t)L_567) <= ((int32_t)0)))
		{
			goto IL_155d;
		}
	}
	{
		// Vector3 pos = deleteList[0].transform.position;     //最初に削除されるブロックの位置を取得
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_568 = __this->get_deleteList_71();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_569;
		L_569 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_568, 0, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_570;
		L_570 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_569, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_571;
		L_571 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_570, /*hidden argument*/NULL);
		V_28 = L_571;
		// DeleteBlock();          //対象のブロックを消去
		GameManager_DeleteBlock_m4EB529BAF829BCE6F52C0CCF6A0525995696F295(__this, /*hidden argument*/NULL);
		// AudioSource soundPlayer = GetComponent<AudioSource>();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_572;
		L_572 = Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		V_29 = L_572;
		// if(soundPlayer != null)
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_573 = V_29;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_574;
		L_574 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_573, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_574)
		{
			goto IL_116d;
		}
	}
	{
		// soundPlayer.PlayOneShot(block_erase);               //消す音を鳴らす
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_575 = V_29;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_576 = __this->get_block_erase_25();
		AudioSource_PlayOneShot_mA90B136041A61C30909301D45D0315088CA7D796(L_575, L_576, /*hidden argument*/NULL);
	}

IL_116d:
	{
		// if ( game_level <100 )      //ブロックが消されたら、レベルを上げる（最大値２５５）
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		int32_t L_577 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_game_level_55();
		if ((((int32_t)L_577) >= ((int32_t)((int32_t)100))))
		{
			goto IL_11a3;
		}
	}
	{
		// game_level++;   //ゲームレベルを上げる
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		int32_t L_578 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_game_level_55();
		((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->set_game_level_55(((int32_t)il2cpp_codegen_add((int32_t)L_578, (int32_t)1)));
		// Physics2D.gravity = new Vector3(0, -1*game_level, 0);  //重力を加える
		int32_t L_579 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_game_level_55();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_580;
		memset((&L_580), 0, sizeof(L_580));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_580), (0.0f), ((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)(-1), (int32_t)L_579)))), (0.0f), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_581;
		L_581 = Vector2_op_Implicit_m101DE5340601C037D9252FB6B99AD18C793C54A1_inline(L_580, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		Physics2D_set_gravity_m2F4EE903F4B7DA3A10DC96B48ACC6EF37B4AFB7F(L_581, /*hidden argument*/NULL);
	}

IL_11a3:
	{
		// if (rensa_cnt == 1){
		int32_t L_582 = __this->get_rensa_cnt_40();
		if ((!(((uint32_t)L_582) == ((uint32_t)1))))
		{
			goto IL_11b9;
		}
	}
	{
		// soundPlayer.PlayOneShot(panpakapan);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_583 = V_29;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_584 = __this->get_panpakapan_32();
		AudioSource_PlayOneShot_mA90B136041A61C30909301D45D0315088CA7D796(L_583, L_584, /*hidden argument*/NULL);
	}

IL_11b9:
	{
		// if (rensa_cnt == 2){
		int32_t L_585 = __this->get_rensa_cnt_40();
		if ((!(((uint32_t)L_585) == ((uint32_t)2))))
		{
			goto IL_11f9;
		}
	}
	{
		// soundPlayer.PlayOneShot(yarimashita);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_586 = V_29;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_587 = __this->get_yarimashita_31();
		AudioSource_PlayOneShot_mA90B136041A61C30909301D45D0315088CA7D796(L_586, L_587, /*hidden argument*/NULL);
		// new_instance = combo2_Prefab;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_588 = V_8;
		__this->set_new_instance_7(L_588);
		// Instantiate( new_instance , pos , Quaternion.Euler(0, 0, 0)); //爆発パターンを生成
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_589 = __this->get_new_instance_7();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_590 = V_28;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_591;
		L_591 = Quaternion_Euler_mD694BA6F38A792C3D728A8BBAFF13000F5F3B64A((0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_592;
		L_592 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3D9494354F266A105B5A9DE8603B57850EAD902F(L_589, L_590, L_591, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3D9494354F266A105B5A9DE8603B57850EAD902F_RuntimeMethod_var);
	}

IL_11f9:
	{
		// if (rensa_cnt == 3){
		int32_t L_593 = __this->get_rensa_cnt_40();
		if ((!(((uint32_t)L_593) == ((uint32_t)3))))
		{
			goto IL_1239;
		}
	}
	{
		// soundPlayer.PlayOneShot(sugoidesu);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_594 = V_29;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_595 = __this->get_sugoidesu_30();
		AudioSource_PlayOneShot_mA90B136041A61C30909301D45D0315088CA7D796(L_594, L_595, /*hidden argument*/NULL);
		// new_instance = combo3_Prefab;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_596 = V_9;
		__this->set_new_instance_7(L_596);
		// Instantiate( new_instance , pos , Quaternion.Euler(0, 0, 0)); //爆発パターンを生成
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_597 = __this->get_new_instance_7();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_598 = V_28;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_599;
		L_599 = Quaternion_Euler_mD694BA6F38A792C3D728A8BBAFF13000F5F3B64A((0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_600;
		L_600 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3D9494354F266A105B5A9DE8603B57850EAD902F(L_597, L_598, L_599, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3D9494354F266A105B5A9DE8603B57850EAD902F_RuntimeMethod_var);
	}

IL_1239:
	{
		// if (rensa_cnt >= 4){
		int32_t L_601 = __this->get_rensa_cnt_40();
		if ((((int32_t)L_601) < ((int32_t)4)))
		{
			goto IL_1279;
		}
	}
	{
		// soundPlayer.PlayOneShot(kangekidesu);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_602 = V_29;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_603 = __this->get_kangekidesu_29();
		AudioSource_PlayOneShot_mA90B136041A61C30909301D45D0315088CA7D796(L_602, L_603, /*hidden argument*/NULL);
		// new_instance = combo4_Prefab;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_604 = V_10;
		__this->set_new_instance_7(L_604);
		// Instantiate( new_instance , pos , Quaternion.Euler(0, 0, 0)); //爆発パターンを生成
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_605 = __this->get_new_instance_7();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_606 = V_28;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_607;
		L_607 = Quaternion_Euler_mD694BA6F38A792C3D728A8BBAFF13000F5F3B64A((0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_608;
		L_608 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3D9494354F266A105B5A9DE8603B57850EAD902F(L_605, L_606, L_607, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3D9494354F266A105B5A9DE8603B57850EAD902F_RuntimeMethod_var);
	}

IL_1279:
	{
		// if (rensa_cnt >= 5){
		int32_t L_609 = __this->get_rensa_cnt_40();
		if ((((int32_t)L_609) < ((int32_t)5)))
		{
			goto IL_12b9;
		}
	}
	{
		// soundPlayer.PlayOneShot(kangekidesu);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_610 = V_29;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_611 = __this->get_kangekidesu_29();
		AudioSource_PlayOneShot_mA90B136041A61C30909301D45D0315088CA7D796(L_610, L_611, /*hidden argument*/NULL);
		// new_instance = combo5_Prefab;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_612 = V_11;
		__this->set_new_instance_7(L_612);
		// Instantiate( new_instance , pos , Quaternion.Euler(0, 0, 0)); //爆発パターンを生成
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_613 = __this->get_new_instance_7();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_614 = V_28;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_615;
		L_615 = Quaternion_Euler_mD694BA6F38A792C3D728A8BBAFF13000F5F3B64A((0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_616;
		L_616 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3D9494354F266A105B5A9DE8603B57850EAD902F(L_613, L_614, L_615, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3D9494354F266A105B5A9DE8603B57850EAD902F_RuntimeMethod_var);
	}

IL_12b9:
	{
		// star_level += (2 * rensa_cnt + rensa_cnt) *rensa_cnt -1;      //連鎖数に応じてstarlevelを上げる
		int32_t L_617 = __this->get_star_level_38();
		int32_t L_618 = __this->get_rensa_cnt_40();
		int32_t L_619 = __this->get_rensa_cnt_40();
		int32_t L_620 = __this->get_rensa_cnt_40();
		__this->set_star_level_38(((int32_t)il2cpp_codegen_add((int32_t)L_617, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)2, (int32_t)L_618)), (int32_t)L_619)), (int32_t)L_620)), (int32_t)1)))));
		// trigger = 1;   //クリアまでは最初のブロック静止判定へ
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->set_trigger_64(1);
		// if (star_level >10 && star_cnt == 0) {
		int32_t L_621 = __this->get_star_level_38();
		if ((((int32_t)L_621) <= ((int32_t)((int32_t)10))))
		{
			goto IL_1311;
		}
	}
	{
		int32_t L_622 = __this->get_star_cnt_39();
		if (L_622)
		{
			goto IL_1311;
		}
	}
	{
		// star_cnt = 1;
		__this->set_star_cnt_39(1);
		// new_instance = star_c_Prefab;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_623 = V_5;
		__this->set_new_instance_7(L_623);
		// Instantiate( new_instance);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_624 = __this->get_new_instance_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_625;
		L_625 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mE8DB64A28C8709FB890A9770C8F35CD32CD04C75(L_624, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mE8DB64A28C8709FB890A9770C8F35CD32CD04C75_RuntimeMethod_var);
	}

IL_1311:
	{
		// if (star_level >20 && star_cnt == 1) {
		int32_t L_626 = __this->get_star_level_38();
		if ((((int32_t)L_626) <= ((int32_t)((int32_t)20))))
		{
			goto IL_133f;
		}
	}
	{
		int32_t L_627 = __this->get_star_cnt_39();
		if ((!(((uint32_t)L_627) == ((uint32_t)1))))
		{
			goto IL_133f;
		}
	}
	{
		// star_cnt = 2;
		__this->set_star_cnt_39(2);
		// new_instance = star_c2_Prefab;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_628 = V_6;
		__this->set_new_instance_7(L_628);
		// Instantiate( new_instance);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_629 = __this->get_new_instance_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_630;
		L_630 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mE8DB64A28C8709FB890A9770C8F35CD32CD04C75(L_629, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mE8DB64A28C8709FB890A9770C8F35CD32CD04C75_RuntimeMethod_var);
	}

IL_133f:
	{
		// if (star_level >30 && star_cnt == 2) {
		int32_t L_631 = __this->get_star_level_38();
		if ((((int32_t)L_631) <= ((int32_t)((int32_t)30))))
		{
			goto IL_136d;
		}
	}
	{
		int32_t L_632 = __this->get_star_cnt_39();
		if ((!(((uint32_t)L_632) == ((uint32_t)2))))
		{
			goto IL_136d;
		}
	}
	{
		// star_cnt = 3;
		__this->set_star_cnt_39(3);
		// new_instance = star_c3_Prefab;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_633 = V_7;
		__this->set_new_instance_7(L_633);
		// Instantiate( new_instance);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_634 = __this->get_new_instance_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_635;
		L_635 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mE8DB64A28C8709FB890A9770C8F35CD32CD04C75(L_634, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mE8DB64A28C8709FB890A9770C8F35CD32CD04C75_RuntimeMethod_var);
	}

IL_136d:
	{
		// if (star_level >40 && star_cnt == 3) {
		int32_t L_636 = __this->get_star_level_38();
		if ((((int32_t)L_636) <= ((int32_t)((int32_t)40))))
		{
			goto IL_139b;
		}
	}
	{
		int32_t L_637 = __this->get_star_cnt_39();
		if ((!(((uint32_t)L_637) == ((uint32_t)3))))
		{
			goto IL_139b;
		}
	}
	{
		// star_cnt = 4;
		__this->set_star_cnt_39(4);
		// new_instance = star_c_Prefab;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_638 = V_5;
		__this->set_new_instance_7(L_638);
		// Instantiate( new_instance);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_639 = __this->get_new_instance_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_640;
		L_640 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mE8DB64A28C8709FB890A9770C8F35CD32CD04C75(L_639, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mE8DB64A28C8709FB890A9770C8F35CD32CD04C75_RuntimeMethod_var);
	}

IL_139b:
	{
		// if (star_level >50 && star_cnt == 4) {
		int32_t L_641 = __this->get_star_level_38();
		if ((((int32_t)L_641) <= ((int32_t)((int32_t)50))))
		{
			goto IL_13c9;
		}
	}
	{
		int32_t L_642 = __this->get_star_cnt_39();
		if ((!(((uint32_t)L_642) == ((uint32_t)4))))
		{
			goto IL_13c9;
		}
	}
	{
		// star_cnt = 5;
		__this->set_star_cnt_39(5);
		// new_instance = star_c2_Prefab;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_643 = V_6;
		__this->set_new_instance_7(L_643);
		// Instantiate( new_instance);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_644 = __this->get_new_instance_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_645;
		L_645 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mE8DB64A28C8709FB890A9770C8F35CD32CD04C75(L_644, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mE8DB64A28C8709FB890A9770C8F35CD32CD04C75_RuntimeMethod_var);
	}

IL_13c9:
	{
		// if (star_level >60 && star_cnt == 5) {
		int32_t L_646 = __this->get_star_level_38();
		if ((((int32_t)L_646) <= ((int32_t)((int32_t)60))))
		{
			goto IL_13f7;
		}
	}
	{
		int32_t L_647 = __this->get_star_cnt_39();
		if ((!(((uint32_t)L_647) == ((uint32_t)5))))
		{
			goto IL_13f7;
		}
	}
	{
		// star_cnt = 6;
		__this->set_star_cnt_39(6);
		// new_instance = star_c3_Prefab;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_648 = V_7;
		__this->set_new_instance_7(L_648);
		// Instantiate( new_instance);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_649 = __this->get_new_instance_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_650;
		L_650 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mE8DB64A28C8709FB890A9770C8F35CD32CD04C75(L_649, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mE8DB64A28C8709FB890A9770C8F35CD32CD04C75_RuntimeMethod_var);
	}

IL_13f7:
	{
		// if (star_level >70 && star_cnt == 6) {
		int32_t L_651 = __this->get_star_level_38();
		if ((((int32_t)L_651) <= ((int32_t)((int32_t)70))))
		{
			goto IL_1425;
		}
	}
	{
		int32_t L_652 = __this->get_star_cnt_39();
		if ((!(((uint32_t)L_652) == ((uint32_t)6))))
		{
			goto IL_1425;
		}
	}
	{
		// star_cnt = 7;
		__this->set_star_cnt_39(7);
		// new_instance = star_c_Prefab;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_653 = V_5;
		__this->set_new_instance_7(L_653);
		// Instantiate( new_instance);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_654 = __this->get_new_instance_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_655;
		L_655 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mE8DB64A28C8709FB890A9770C8F35CD32CD04C75(L_654, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mE8DB64A28C8709FB890A9770C8F35CD32CD04C75_RuntimeMethod_var);
	}

IL_1425:
	{
		// if (star_level >80 && star_cnt == 7) {
		int32_t L_656 = __this->get_star_level_38();
		if ((((int32_t)L_656) <= ((int32_t)((int32_t)80))))
		{
			goto IL_1453;
		}
	}
	{
		int32_t L_657 = __this->get_star_cnt_39();
		if ((!(((uint32_t)L_657) == ((uint32_t)7))))
		{
			goto IL_1453;
		}
	}
	{
		// star_cnt = 8;
		__this->set_star_cnt_39(8);
		// new_instance = star_c2_Prefab;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_658 = V_6;
		__this->set_new_instance_7(L_658);
		// Instantiate( new_instance);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_659 = __this->get_new_instance_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_660;
		L_660 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mE8DB64A28C8709FB890A9770C8F35CD32CD04C75(L_659, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mE8DB64A28C8709FB890A9770C8F35CD32CD04C75_RuntimeMethod_var);
	}

IL_1453:
	{
		// if (star_level >90 && star_cnt == 8) {
		int32_t L_661 = __this->get_star_level_38();
		if ((((int32_t)L_661) <= ((int32_t)((int32_t)90))))
		{
			goto IL_1482;
		}
	}
	{
		int32_t L_662 = __this->get_star_cnt_39();
		if ((!(((uint32_t)L_662) == ((uint32_t)8))))
		{
			goto IL_1482;
		}
	}
	{
		// star_cnt = 9;
		__this->set_star_cnt_39(((int32_t)9));
		// new_instance = star_c3_Prefab;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_663 = V_7;
		__this->set_new_instance_7(L_663);
		// Instantiate( new_instance);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_664 = __this->get_new_instance_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_665;
		L_665 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mE8DB64A28C8709FB890A9770C8F35CD32CD04C75(L_664, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mE8DB64A28C8709FB890A9770C8F35CD32CD04C75_RuntimeMethod_var);
	}

IL_1482:
	{
		// if (star_level >=100 && star_cnt == 9) {
		int32_t L_666 = __this->get_star_level_38();
		if ((((int32_t)L_666) < ((int32_t)((int32_t)100))))
		{
			goto IL_154d;
		}
	}
	{
		int32_t L_667 = __this->get_star_cnt_39();
		if ((!(((uint32_t)L_667) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_154d;
		}
	}
	{
		// star_cnt = 10;
		__this->set_star_cnt_39(((int32_t)10));
		// new_instance = star_c_Prefab;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_668 = V_5;
		__this->set_new_instance_7(L_668);
		// Instantiate( new_instance);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_669 = __this->get_new_instance_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_670;
		L_670 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mE8DB64A28C8709FB890A9770C8F35CD32CD04C75(L_669, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mE8DB64A28C8709FB890A9770C8F35CD32CD04C75_RuntimeMethod_var);
		// trigger = 4;        //ゲームクリアの処理へ
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->set_trigger_64(4);
		// audio.Stop();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_671 = V_12;
		AudioSource_Stop_mADA564D223832A64F8CF3EFBDEB534C0D658810F(L_671, /*hidden argument*/NULL);
		// if(soundPlayer != null) {
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_672 = V_29;
		bool L_673;
		L_673 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_672, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_673)
		{
			goto IL_14e9;
		}
	}
	{
		// soundPlayer.PlayOneShot(arigatou);      //ありがとうございます、アリス幸せです
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_674 = V_29;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_675 = __this->get_arigatou_28();
		AudioSource_PlayOneShot_mA90B136041A61C30909301D45D0315088CA7D796(L_674, L_675, /*hidden argument*/NULL);
		// soundPlayer.PlayOneShot(meGameClearBGM);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_676 = V_29;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_677 = __this->get_meGameClearBGM_24();
		AudioSource_PlayOneShot_mA90B136041A61C30909301D45D0315088CA7D796(L_676, L_677, /*hidden argument*/NULL);
	}

IL_14e9:
	{
		// tachie_alice.GetComponent<SpriteRenderer>().sprite= smile_tachie_alice;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_678 = __this->get_tachie_alice_34();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_679;
		L_679 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_678, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_680 = __this->get_smile_tachie_alice_35();
		SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A(L_679, L_680, /*hidden argument*/NULL);
		// foreach (var item in blockList)
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_681 = __this->get_blockList_70();
		Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14  L_682;
		L_682 = List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6(L_681, /*hidden argument*/List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6_RuntimeMethod_var);
		V_17 = L_682;
	}

IL_150c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_152e;
		}

IL_150e:
		{
			// foreach (var item in blockList)
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_683;
			L_683 = Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_inline((Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *)(&V_17), /*hidden argument*/Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_RuntimeMethod_var);
			V_30 = L_683;
			// if (item != null)
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_684 = V_30;
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_685;
			L_685 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_684, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
			if (!L_685)
			{
				goto IL_152e;
			}
		}

IL_1521:
		{
			// deleteList.Add(item);
			List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_686 = __this->get_deleteList_71();
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_687 = V_30;
			List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3(L_686, L_687, /*hidden argument*/List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
		}

IL_152e:
		{
			// foreach (var item in blockList)
			bool L_688;
			L_688 = Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7((Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *)(&V_17), /*hidden argument*/Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7_RuntimeMethod_var);
			if (L_688)
			{
				goto IL_150e;
			}
		}

IL_1537:
		{
			IL2CPP_LEAVE(0x1547, FINALLY_1539);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_1539;
	}

FINALLY_1539:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9((Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *)(&V_17), /*hidden argument*/Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9_RuntimeMethod_var);
		IL2CPP_END_FINALLY(5433)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(5433)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1547, IL_1547)
	}

IL_1547:
	{
		// DeleteBlock();      //表示されているブロックを全て消す
		GameManager_DeleteBlock_m4EB529BAF829BCE6F52C0CCF6A0525995696F295(__this, /*hidden argument*/NULL);
	}

IL_154d:
	{
		// rensa_cnt++;   //連鎖消去のカウンタ
		int32_t L_689 = __this->get_rensa_cnt_40();
		__this->set_rensa_cnt_40(((int32_t)il2cpp_codegen_add((int32_t)L_689, (int32_t)1)));
		// }
		goto IL_1571;
	}

IL_155d:
	{
		// trigger = 0;        //もう消去可能なブロックがなければ、通常処理へ
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->set_trigger_64(0);
		// ini_block = true;           //初期ブロックを作成し。通常モードへ
		__this->set_ini_block_45((bool)1);
		// rensa_cnt = 1;              //連鎖カウンタを初期化
		__this->set_rensa_cnt_40(1);
	}

IL_1571:
	{
		// deleteList.Clear();         //消去処理が完了したら、リストをクリアする
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_690 = __this->get_deleteList_71();
		List_1_Clear_m7DF03CE7132B7D4C6AA2AEEA9BD1A8755AE12432(L_690, /*hidden argument*/List_1_Clear_m7DF03CE7132B7D4C6AA2AEEA9BD1A8755AE12432_RuntimeMethod_var);
	}

IL_157c:
	{
		// if (trigger == 4)
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		int32_t L_691 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_trigger_64();
		if ((!(((uint32_t)L_691) == ((uint32_t)4))))
		{
			goto IL_162d;
		}
	}
	{
		// GameClear.SetActive(true);      //ゲームクリアを表示
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_692 = __this->get_GameClear_10();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_692, (bool)1, /*hidden argument*/NULL);
		// if (game_time > 0) {
		int32_t L_693 = __this->get_game_time_60();
		if ((((int32_t)L_693) <= ((int32_t)0)))
		{
			goto IL_15dc;
		}
	}
	{
		// game_time = game_time -1;
		int32_t L_694 = __this->get_game_time_60();
		__this->set_game_time_60(((int32_t)il2cpp_codegen_subtract((int32_t)L_694, (int32_t)1)));
		// score += 10;
		int32_t L_695 = __this->get_score_57();
		__this->set_score_57(((int32_t)il2cpp_codegen_add((int32_t)L_695, (int32_t)((int32_t)10))));
		// timeText.GetComponent<Text>().text = game_time.ToString();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_696 = __this->get_timeText_14();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_697;
		L_697 = GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65(L_696, /*hidden argument*/GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		int32_t* L_698 = __this->get_address_of_game_time_60();
		String_t* L_699;
		L_699 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_698, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_697, L_699);
		// UpdateScore();
		GameManager_UpdateScore_m47A707C284FD9E97A180AF5021B438473BF7233A(__this, /*hidden argument*/NULL);
		// }
		goto IL_15fe;
	}

IL_15dc:
	{
		// game_time = 0;
		__this->set_game_time_60(0);
		// timeText.GetComponent<Text>().text = game_time.ToString();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_700 = __this->get_timeText_14();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_701;
		L_701 = GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65(L_700, /*hidden argument*/GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		int32_t* L_702 = __this->get_address_of_game_time_60();
		String_t* L_703;
		L_703 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_702, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_701, L_703);
	}

IL_15fe:
	{
		// go_title.SetActive(true);       //タイトル画面へ戻るボタンを表示
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_704 = __this->get_go_title_12();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_704, (bool)1, /*hidden argument*/NULL);
		// var current = Keyboard.current;
		Keyboard_tCC48D6E5BEEA84E5C5919A4E4B8BDFBE66217D93 * L_705;
		L_705 = Keyboard_get_current_m69915C940B4DAD0284011AF0D1F615756DED2D55_inline(/*hidden argument*/NULL);
		V_31 = L_705;
		// if (current != null)
		Keyboard_tCC48D6E5BEEA84E5C5919A4E4B8BDFBE66217D93 * L_706 = V_31;
		if (!L_706)
		{
			goto IL_162d;
		}
	}
	{
		// var eKey = current.enterKey;
		Keyboard_tCC48D6E5BEEA84E5C5919A4E4B8BDFBE66217D93 * L_707 = V_31;
		KeyControl_t5784A2F7F3D468FD6D4171430A5592B671FA2635 * L_708;
		L_708 = Keyboard_get_enterKey_m8B88BCF058F864E9B8958429C2CEA7557D6A977B(L_707, /*hidden argument*/NULL);
		// if (eKey.isPressed)
		bool L_709;
		L_709 = ButtonControl_get_isPressed_mA47E586507F057991A4CE38B8C0FBC9E9B93ED24(L_708, /*hidden argument*/NULL);
		if (!L_709)
		{
			goto IL_162d;
		}
	}
	{
		// SceneManager.LoadScene("title");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m6993313A5BE51551C96597F20A81672422A051E4(_stringLiteralC7B4D926EF9532A71B25AEC040A33D52C926425F, /*hidden argument*/NULL);
	}

IL_162d:
	{
		// if (trigger == 5)           //**ゲームオーバー
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		int32_t L_710 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_trigger_64();
		if ((!(((uint32_t)L_710) == ((uint32_t)5))))
		{
			goto IL_1683;
		}
	}
	{
		// UnderWall.SetActive(false);  //床を抜く
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_711 = __this->get_UnderWall_8();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_711, (bool)0, /*hidden argument*/NULL);
		// GameOver.SetActive(true);  //ゲームオーバー文字を表示
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_712 = __this->get_GameOver_9();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_712, (bool)1, /*hidden argument*/NULL);
		// go_title.SetActive(true);   //タイトル画面へ戻るボタンを表示
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_713 = __this->get_go_title_12();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_713, (bool)1, /*hidden argument*/NULL);
		// ini_block = false;
		__this->set_ini_block_45((bool)0);
		// var current = Keyboard.current;
		Keyboard_tCC48D6E5BEEA84E5C5919A4E4B8BDFBE66217D93 * L_714;
		L_714 = Keyboard_get_current_m69915C940B4DAD0284011AF0D1F615756DED2D55_inline(/*hidden argument*/NULL);
		V_32 = L_714;
		// if (current != null)
		Keyboard_tCC48D6E5BEEA84E5C5919A4E4B8BDFBE66217D93 * L_715 = V_32;
		if (!L_715)
		{
			goto IL_1683;
		}
	}
	{
		// var eKey = current.enterKey;
		Keyboard_tCC48D6E5BEEA84E5C5919A4E4B8BDFBE66217D93 * L_716 = V_32;
		KeyControl_t5784A2F7F3D468FD6D4171430A5592B671FA2635 * L_717;
		L_717 = Keyboard_get_enterKey_m8B88BCF058F864E9B8958429C2CEA7557D6A977B(L_716, /*hidden argument*/NULL);
		// if (eKey.isPressed)
		bool L_718;
		L_718 = ButtonControl_get_isPressed_mA47E586507F057991A4CE38B8C0FBC9E9B93ED24(L_717, /*hidden argument*/NULL);
		if (!L_718)
		{
			goto IL_1683;
		}
	}
	{
		// SceneManager.LoadScene("title");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m6993313A5BE51551C96597F20A81672422A051E4(_stringLiteralC7B4D926EF9532A71B25AEC040A33D52C926425F, /*hidden argument*/NULL);
	}

IL_1683:
	{
		// if ( axisV == 1 ) {   //ブロックマトリクスを表示
		int32_t L_719 = __this->get_axisV_43();
		if ((!(((uint32_t)L_719) == ((uint32_t)1))))
		{
			goto IL_1769;
		}
	}
	{
		// Debug.Log("block_matrix.tagを表示");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A(_stringLiteral91DAC1B208C9247B871F7A45F7E0138249BF2A99, /*hidden argument*/NULL);
		// for (int i = 0;i < block_matrix.GetLength(0);i++)
		V_33 = 0;
		goto IL_16ed;
	}

IL_169e:
	{
		// string str = "";
		V_34 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// for (int j = 0; j < block_matrix.GetLength(1); j++)
		V_35 = 0;
		goto IL_16d1;
	}

IL_16aa:
	{
		// str = str + block_matrix_tag[i, j] + " ";
		String_t* L_720 = V_34;
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_721 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_block_matrix_tag_73();
		int32_t L_722 = V_33;
		int32_t L_723 = V_35;
		int32_t* L_724;
		L_724 = (L_721)->GetAddressAtUnchecked(L_722, L_723);
		String_t* L_725;
		L_725 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_724, /*hidden argument*/NULL);
		String_t* L_726;
		L_726 = String_Concat_mC41740F000A5A48F8D313FB4CEE0E35E207A2632(L_720, L_725, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, /*hidden argument*/NULL);
		V_34 = L_726;
		// for (int j = 0; j < block_matrix.GetLength(1); j++)
		int32_t L_727 = V_35;
		V_35 = ((int32_t)il2cpp_codegen_add((int32_t)L_727, (int32_t)1));
	}

IL_16d1:
	{
		// for (int j = 0; j < block_matrix.GetLength(1); j++)
		int32_t L_728 = V_35;
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_729 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_block_matrix_72();
		int32_t L_730;
		L_730 = Array_GetLength_m8EF840DA7BEB0DFF04D36C3DC651B673C49A02BB((RuntimeArray *)(RuntimeArray *)L_729, 1, /*hidden argument*/NULL);
		if ((((int32_t)L_728) < ((int32_t)L_730)))
		{
			goto IL_16aa;
		}
	}
	{
		// Debug.Log(str);
		String_t* L_731 = V_34;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A(L_731, /*hidden argument*/NULL);
		// for (int i = 0;i < block_matrix.GetLength(0);i++)
		int32_t L_732 = V_33;
		V_33 = ((int32_t)il2cpp_codegen_add((int32_t)L_732, (int32_t)1));
	}

IL_16ed:
	{
		// for (int i = 0;i < block_matrix.GetLength(0);i++)
		int32_t L_733 = V_33;
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_734 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_block_matrix_72();
		int32_t L_735;
		L_735 = Array_GetLength_m8EF840DA7BEB0DFF04D36C3DC651B673C49A02BB((RuntimeArray *)(RuntimeArray *)L_734, 0, /*hidden argument*/NULL);
		if ((((int32_t)L_733) < ((int32_t)L_735)))
		{
			goto IL_169e;
		}
	}
	{
		// Debug.Log("block_matrixを表示");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A(_stringLiteral9A3A2897809DC4125DBDB735F00F98DF10ED9C6E, /*hidden argument*/NULL);
		// for (int i = 0;i < block_matrix.GetLength(0);i++)
		V_36 = 0;
		goto IL_175a;
	}

IL_170b:
	{
		// string str = "";
		V_37 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// for (int j = 0; j < block_matrix.GetLength(1); j++)
		V_38 = 0;
		goto IL_173e;
	}

IL_1717:
	{
		// str = str + block_matrix[i, j] + " ";
		String_t* L_736 = V_37;
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_737 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_block_matrix_72();
		int32_t L_738 = V_36;
		int32_t L_739 = V_38;
		int32_t* L_740;
		L_740 = (L_737)->GetAddressAtUnchecked(L_738, L_739);
		String_t* L_741;
		L_741 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_740, /*hidden argument*/NULL);
		String_t* L_742;
		L_742 = String_Concat_mC41740F000A5A48F8D313FB4CEE0E35E207A2632(L_736, L_741, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, /*hidden argument*/NULL);
		V_37 = L_742;
		// for (int j = 0; j < block_matrix.GetLength(1); j++)
		int32_t L_743 = V_38;
		V_38 = ((int32_t)il2cpp_codegen_add((int32_t)L_743, (int32_t)1));
	}

IL_173e:
	{
		// for (int j = 0; j < block_matrix.GetLength(1); j++)
		int32_t L_744 = V_38;
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_745 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_block_matrix_72();
		int32_t L_746;
		L_746 = Array_GetLength_m8EF840DA7BEB0DFF04D36C3DC651B673C49A02BB((RuntimeArray *)(RuntimeArray *)L_745, 1, /*hidden argument*/NULL);
		if ((((int32_t)L_744) < ((int32_t)L_746)))
		{
			goto IL_1717;
		}
	}
	{
		// Debug.Log(str);
		String_t* L_747 = V_37;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A(L_747, /*hidden argument*/NULL);
		// for (int i = 0;i < block_matrix.GetLength(0);i++)
		int32_t L_748 = V_36;
		V_36 = ((int32_t)il2cpp_codegen_add((int32_t)L_748, (int32_t)1));
	}

IL_175a:
	{
		// for (int i = 0;i < block_matrix.GetLength(0);i++)
		int32_t L_749 = V_36;
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_750 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_block_matrix_72();
		int32_t L_751;
		L_751 = Array_GetLength_m8EF840DA7BEB0DFF04D36C3DC651B673C49A02BB((RuntimeArray *)(RuntimeArray *)L_750, 0, /*hidden argument*/NULL);
		if ((((int32_t)L_749) < ((int32_t)L_751)))
		{
			goto IL_170b;
		}
	}

IL_1769:
	{
		// }
		return;
	}
}
// System.Void GameManager::DeleteBlock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_DeleteBlock_m4EB529BAF829BCE6F52C0CCF6A0525995696F295 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisBlock_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5_mCB23DDD42F5DBA9CEF807C25FF71D2B71E0A6499_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3D9494354F266A105B5A9DE8603B57850EAD902F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m62550836383D7EFD35F4AC65927D954DB87BAE90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral450536C42286689B7FE268C6DBCB72DC2ED8A8A5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral68A60640FA7CD3B5E020A5CF25D5D75F03DE63CC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E8E3954318E85C1296B912D7D1493733AF8CD7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAC9851B40BB7AD01E87EBE614CFC0A1B63FC6344);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE212A7CEBA54F677AB41E097A7D0F1A0FFE9232);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE250C5EC523541AB00B5D2D3B20344DA1579B6D1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED11D0CB05359AAA23A69AD543CC5790A0E063D9);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	int32_t V_1 = 0;
	Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14  V_2;
	memset((&V_2), 0, sizeof(V_2));
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_3 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// GameObject star_1_Prefab = Resources.Load<GameObject>("star1");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Resources_Load_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m62550836383D7EFD35F4AC65927D954DB87BAE90(_stringLiteralCE212A7CEBA54F677AB41E097A7D0F1A0FFE9232, /*hidden argument*/Resources_Load_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m62550836383D7EFD35F4AC65927D954DB87BAE90_RuntimeMethod_var);
		V_0 = L_0;
		// GameObject star_b_Prefab = Resources.Load<GameObject>("starB");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Resources_Load_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m62550836383D7EFD35F4AC65927D954DB87BAE90(_stringLiteralE250C5EC523541AB00B5D2D3B20344DA1579B6D1, /*hidden argument*/Resources_Load_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m62550836383D7EFD35F4AC65927D954DB87BAE90_RuntimeMethod_var);
		// GameObject star_c_Prefab = Resources.Load<GameObject>("starC");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Resources_Load_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m62550836383D7EFD35F4AC65927D954DB87BAE90(_stringLiteral68A60640FA7CD3B5E020A5CF25D5D75F03DE63CC, /*hidden argument*/Resources_Load_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m62550836383D7EFD35F4AC65927D954DB87BAE90_RuntimeMethod_var);
		// GameObject star_c2_Prefab = Resources.Load<GameObject>("starC2");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Resources_Load_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m62550836383D7EFD35F4AC65927D954DB87BAE90(_stringLiteralED11D0CB05359AAA23A69AD543CC5790A0E063D9, /*hidden argument*/Resources_Load_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m62550836383D7EFD35F4AC65927D954DB87BAE90_RuntimeMethod_var);
		// GameObject star_c3_Prefab = Resources.Load<GameObject>("starC3");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Resources_Load_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m62550836383D7EFD35F4AC65927D954DB87BAE90(_stringLiteralAC9851B40BB7AD01E87EBE614CFC0A1B63FC6344, /*hidden argument*/Resources_Load_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m62550836383D7EFD35F4AC65927D954DB87BAE90_RuntimeMethod_var);
		// Debug.Log("消去するブロック数："+deleteList.Count);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_5 = __this->get_deleteList_71();
		int32_t L_6;
		L_6 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_5, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		V_1 = L_6;
		String_t* L_7;
		L_7 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		String_t* L_8;
		L_8 = String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A(_stringLiteral87E8E3954318E85C1296B912D7D1493733AF8CD7, L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A(L_8, /*hidden argument*/NULL);
		// foreach (var item in deleteList)
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_9 = __this->get_deleteList_71();
		Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14  L_10;
		L_10 = List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6(L_9, /*hidden argument*/List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6_RuntimeMethod_var);
		V_2 = L_10;
	}

IL_0065:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0181;
		}

IL_006a:
		{
			// foreach (var item in deleteList)
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11;
			L_11 = Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_inline((Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *)(&V_2), /*hidden argument*/Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_RuntimeMethod_var);
			V_3 = L_11;
			// temp_x = ( item.transform.position.x +5.75f )/0.75f;
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = V_3;
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
			L_13 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_12, /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
			L_14 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_13, /*hidden argument*/NULL);
			float L_15 = L_14.get_x_2();
			__this->set_temp_x_52(((float)((float)((float)il2cpp_codegen_add((float)L_15, (float)(5.75f)))/(float)(0.75f))));
			// mat_x = (int)temp_x;
			float L_16 = __this->get_temp_x_52();
			__this->set_mat_x_47(il2cpp_codegen_cast_double_to_int<int32_t>(L_16));
			// temp_y = 10.0f - ( item.transform.position.y +4.175f )/0.75f;
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17 = V_3;
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18;
			L_18 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_17, /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
			L_19 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_18, /*hidden argument*/NULL);
			float L_20 = L_19.get_y_3();
			__this->set_temp_y_53(((float)il2cpp_codegen_subtract((float)(10.0f), (float)((float)((float)((float)il2cpp_codegen_add((float)L_20, (float)(4.17500019f)))/(float)(0.75f))))));
			// mat_y = (int)temp_y;
			float L_21 = __this->get_temp_y_53();
			__this->set_mat_y_48(il2cpp_codegen_cast_double_to_int<int32_t>(L_21));
			// Debug.Log("mat_x : mat_y:"+ mat_x +":"+ mat_y);
			int32_t* L_22 = __this->get_address_of_mat_x_47();
			String_t* L_23;
			L_23 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_22, /*hidden argument*/NULL);
			int32_t* L_24 = __this->get_address_of_mat_y_48();
			String_t* L_25;
			L_25 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_24, /*hidden argument*/NULL);
			String_t* L_26;
			L_26 = String_Concat_m5D784E6CEEBE99ED8749AA4B9491D926273FD749(_stringLiteral450536C42286689B7FE268C6DBCB72DC2ED8A8A5, L_23, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D, L_25, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A(L_26, /*hidden argument*/NULL);
			// block_matrix[(int)mat_y, (int)mat_x] = 0;
			IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
			Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_27 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_block_matrix_72();
			int32_t L_28 = __this->get_mat_y_48();
			int32_t L_29 = __this->get_mat_x_47();
			(L_27)->SetAtUnchecked(L_28, L_29, 0);
			// block_matrix_tag[(int)mat_y, (int)mat_x] = 0;
			Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_30 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_block_matrix_tag_73();
			int32_t L_31 = __this->get_mat_y_48();
			int32_t L_32 = __this->get_mat_x_47();
			(L_30)->SetAtUnchecked(L_31, L_32, 0);
			// script = item.GetComponent<Block_move>();
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_33 = V_3;
			Block_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5 * L_34;
			L_34 = GameObject_GetComponent_TisBlock_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5_mCB23DDD42F5DBA9CEF807C25FF71D2B71E0A6499(L_33, /*hidden argument*/GameObject_GetComponent_TisBlock_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5_mCB23DDD42F5DBA9CEF807C25FF71D2B71E0A6499_RuntimeMethod_var);
			__this->set_script_37(L_34);
			// script.advent_type = 1;         //ブロック種類を 1 （消去ブロック）へ
			Block_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5 * L_35 = __this->get_script_37();
			L_35->set_advent_type_7(1);
			// Vector3 pos = script.transform.position;
			Block_move_t6952F32DD31CB196F4565016B9BD79F8562A4EE5 * L_36 = __this->get_script_37();
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_37;
			L_37 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_36, /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38;
			L_38 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_37, /*hidden argument*/NULL);
			V_4 = L_38;
			// new_instance = star_1_Prefab;
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_39 = V_0;
			__this->set_new_instance_7(L_39);
			// Instantiate( new_instance , pos , Quaternion.Euler(0, 0, 0)); //爆発パターンを生成
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_40 = __this->get_new_instance_7();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_41 = V_4;
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_42;
			L_42 = Quaternion_Euler_mD694BA6F38A792C3D728A8BBAFF13000F5F3B64A((0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_43;
			L_43 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3D9494354F266A105B5A9DE8603B57850EAD902F(L_40, L_41, L_42, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3D9494354F266A105B5A9DE8603B57850EAD902F_RuntimeMethod_var);
		}

IL_0181:
		{
			// foreach (var item in deleteList)
			bool L_44;
			L_44 = Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7((Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *)(&V_2), /*hidden argument*/Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7_RuntimeMethod_var);
			if (L_44)
			{
				goto IL_006a;
			}
		}

IL_018d:
		{
			IL2CPP_LEAVE(0x19D, FINALLY_018f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_018f;
	}

FINALLY_018f:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9((Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *)(&V_2), /*hidden argument*/Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9_RuntimeMethod_var);
		IL2CPP_END_FINALLY(399)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(399)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x19D, IL_019d)
	}

IL_019d:
	{
		// }
		return;
	}
}
// System.Void GameManager::InactiveImage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_InactiveImage_m368DA62DF831648A27A7A59D8744C87D84589F61 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	{
		// start_text.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_start_text_11();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::UpdateScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_UpdateScore_m47A707C284FD9E97A180AF5021B438473BF7233A (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityroomApiClient_t741542784ED0213DC43515B5F29073EDBB61E88F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// scoreText.GetComponent<Text>().text = score.ToString();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_scoreText_13();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1;
		L_1 = GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65(L_0, /*hidden argument*/GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		int32_t* L_2 = __this->get_address_of_score_57();
		String_t* L_3;
		L_3 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_2, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_3);
		// if (score > hi_score)
		int32_t L_4 = __this->get_score_57();
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		int32_t L_5 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_hi_score_56();
		if ((((int32_t)L_4) <= ((int32_t)L_5)))
		{
			goto IL_0033;
		}
	}
	{
		// hi_score = score;
		int32_t L_6 = __this->get_score_57();
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->set_hi_score_56(L_6);
	}

IL_0033:
	{
		// hi_scoreText.GetComponent<Text>().text = hi_score.ToString();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = __this->get_hi_scoreText_17();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_8;
		L_8 = GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65(L_7, /*hidden argument*/GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		String_t* L_9;
		L_9 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_address_of_hi_score_56()), /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_8, L_9);
		// UnityroomApiClient.Instance.SendScore(1, (float)score , ScoreboardWriteMode.Always);
		RuntimeObject* L_10;
		L_10 = UnityroomApiClient_get_Instance_m69BA3AEE4073E63FA67204249CF008F0D13F1B0E(/*hidden argument*/NULL);
		int32_t L_11 = __this->get_score_57();
		InterfaceActionInvoker3< int32_t, float, int32_t >::Invoke(0 /* System.Void unityroom.Api.IUnityroomApiClient::SendScore(System.Int32,System.Single,unityroom.Api.ScoreboardWriteMode) */, IUnityroomApiClient_t741542784ED0213DC43515B5F29073EDBB61E88F_il2cpp_TypeInfo_var, L_10, 1, ((float)((float)L_11)), 2);
		// }
		return;
	}
}
// System.Void GameManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__ctor_mE8666F6D0CA9C31E16B719F79780DC4B0245B64D (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float m_fSpeed = 0.01f;
		__this->set_m_fSpeed_6((0.00999999978f));
		// bool ini_block = true;   //ゲームスタート時は、初期ブロックを強制生成するよう
		__this->set_ini_block_45((bool)1);
		// int ojama_cnt = 1;          //お邪魔ユウカの出現カウント
		__this->set_ojama_cnt_54(1);
		// public List<GameObject> blockList = new List<GameObject>();   //管理するブロックのリスト
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_0 = (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)il2cpp_codegen_object_new(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_il2cpp_TypeInfo_var);
		List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8(L_0, /*hidden argument*/List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8_RuntimeMethod_var);
		__this->set_blockList_70(L_0);
		// public List<GameObject> deleteList = new List<GameObject>();  //消去するブロックのリスト
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_1 = (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)il2cpp_codegen_object_new(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_il2cpp_TypeInfo_var);
		List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8(L_1, /*hidden argument*/List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8_RuntimeMethod_var);
		__this->set_deleteList_71(L_1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__cctor_m8AD74866A80F39B2E85A3048E4F975CF1381D4E9 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____36356283CA439E1391C7224595D11634489404708B446EF7B8E6436CA09961D3_0_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static public bool player_control = false;   //プレイヤーがブロックを動かせる状態か？
		((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->set_player_control_46((bool)0);
		// static public int game_level = 0;
		((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->set_game_level_55(0);
		// static public int next_block = 1;
		((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->set_next_block_62(1);
		// static public int Advent_num = 0;  //新規生成するブロックの背番号 0:wall 1:erase 2:～ブロック
		((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->set_Advent_num_63(0);
		// static public int trigger = 0;
		((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->set_trigger_64(0);
		// static public int [,] block_matrix = new int [11,8]{
		//     {1,0,0,0,0,0,0,1},
		//     {1,0,0,0,0,0,0,1},
		//     {1,0,0,0,0,0,0,1},
		//     {1,0,0,0,0,0,0,1},
		//     {1,0,0,0,0,0,0,1},
		//     {1,0,0,0,0,0,0,1},
		//     {1,0,0,0,0,0,0,1},
		//     {1,0,0,0,0,0,0,1},
		//     {1,0,0,0,0,0,0,1},
		//     {1,0,0,0,0,0,0,1},
		//     {1,1,1,1,1,1,1,1}
		// };
		il2cpp_array_size_t L_1[] = { (il2cpp_array_size_t)((int32_t)11), (il2cpp_array_size_t)8 };
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_0 = (Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17*)GenArrayNew(Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17_il2cpp_TypeInfo_var, L_1);
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_2 = L_0;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_3 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____36356283CA439E1391C7224595D11634489404708B446EF7B8E6436CA09961D3_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m37345890E8136134556D27E57315B584AC51D53F((RuntimeArray *)(RuntimeArray *)L_2, L_3, /*hidden argument*/NULL);
		((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->set_block_matrix_72(L_2);
		// static public int [,] block_matrix_tag = new int [11,8]{
		//     {1,0,0,0,0,0,0,1},
		//     {1,0,0,0,0,0,0,1},
		//     {1,0,0,0,0,0,0,1},
		//     {1,0,0,0,0,0,0,1},
		//     {1,0,0,0,0,0,0,1},
		//     {1,0,0,0,0,0,0,1},
		//     {1,0,0,0,0,0,0,1},
		//     {1,0,0,0,0,0,0,1},
		//     {1,0,0,0,0,0,0,1},
		//     {1,0,0,0,0,0,0,1},
		//     {1,1,1,1,1,1,1,1}
		// };
		il2cpp_array_size_t L_5[] = { (il2cpp_array_size_t)((int32_t)11), (il2cpp_array_size_t)8 };
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_4 = (Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17*)GenArrayNew(Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17_il2cpp_TypeInfo_var, L_5);
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_6 = L_4;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_7 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____36356283CA439E1391C7224595D11634489404708B446EF7B8E6436CA09961D3_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m37345890E8136134556D27E57315B584AC51D53F((RuntimeArray *)(RuntimeArray *)L_6, L_7, /*hidden argument*/NULL);
		((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->set_block_matrix_tag_73(L_6);
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
// System.Void StarLight::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarLight_Start_mF47EFEF7BE309889377167892958615EF9747BEF (StarLight_t0CB7FA2711432252DEC6E548400971F8164120BB * __this, const RuntimeMethod* method)
{
	{
		// temp_cnt =70000;
		__this->set_temp_cnt_5(((int32_t)70000));
		// }
		return;
	}
}
// System.Void StarLight::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarLight_FixedUpdate_m10F3D1E680C9CE1ECF5501EA59457524AE5E913A (StarLight_t0CB7FA2711432252DEC6E548400971F8164120BB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// temp_cnt--;
		int32_t L_0 = __this->get_temp_cnt_5();
		__this->set_temp_cnt_5(((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1)));
		// if (temp_cnt <= 0)
		int32_t L_1 = __this->get_temp_cnt_5();
		if ((((int32_t)L_1) > ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		// Destroy(this.gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_mBDC17991A372E11E2E485EFC5C72F58972CBEC0F(L_2, /*hidden argument*/NULL);
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void StarLight::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarLight__ctor_m73D61D48CFA03106EDA7C6879862B9CDB076E96C (StarLight_t0CB7FA2711432252DEC6E548400971F8164120BB * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Star_bomb::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Star_bomb_Start_mAA1D8FCAEBB4F3EC85EAFB9E6C67AAD96550490F (Star_bomb_t866D319BD1E902EA98A222CDB9B26439ABA49678 * __this, const RuntimeMethod* method)
{
	{
		// temp_cnt =50;
		__this->set_temp_cnt_5(((int32_t)50));
		// }
		return;
	}
}
// System.Void Star_bomb::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Star_bomb_FixedUpdate_mBF2D68EBE47556A61F41A3E973E2C1C626EAF01C (Star_bomb_t866D319BD1E902EA98A222CDB9B26439ABA49678 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// temp_cnt--;
		int32_t L_0 = __this->get_temp_cnt_5();
		__this->set_temp_cnt_5(((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1)));
		// if (temp_cnt <= 0)
		int32_t L_1 = __this->get_temp_cnt_5();
		if ((((int32_t)L_1) > ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		// Destroy(this.gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_mBDC17991A372E11E2E485EFC5C72F58972CBEC0F(L_2, /*hidden argument*/NULL);
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void Star_bomb::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Star_bomb__ctor_m2192F8764E86A63CEBACC8682ABE33EA02E7F9A9 (Star_bomb_t866D319BD1E902EA98A222CDB9B26439ABA49678 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void combo::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void combo_Start_m72705F38F0640567F7B964003EF8122A105DD1A3 (combo_tBF8003D506F422421915A0CAE1C24389C5AE8477 * __this, const RuntimeMethod* method)
{
	{
		// temp_cnt =75;
		__this->set_temp_cnt_5(((int32_t)75));
		// }
		return;
	}
}
// System.Void combo::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void combo_FixedUpdate_m5A9B354077D6E1C0FD242684ED3C3F3E485F1BC3 (combo_tBF8003D506F422421915A0CAE1C24389C5AE8477 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// temp_cnt--;
		int32_t L_0 = __this->get_temp_cnt_5();
		__this->set_temp_cnt_5(((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1)));
		// if (temp_cnt <= 0)
		int32_t L_1 = __this->get_temp_cnt_5();
		if ((((int32_t)L_1) > ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		// Destroy(this.gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_mBDC17991A372E11E2E485EFC5C72F58972CBEC0F(L_2, /*hidden argument*/NULL);
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void combo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void combo__ctor_m4494E216A20454DA157CD6EAD357E6378B0979EB (combo_tBF8003D506F422421915A0CAE1C24389C5AE8477 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void forPlay::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void forPlay_Start_m6BE8D03DE7E412A2DCAB4E1392BB25EDB6705B13 (forPlay_t7F59BE4A54B06567987F750BF6AE50CF29A1055A * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void forPlay::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void forPlay_Update_m9EE07E298A95AD2D9D10100E0719243668A0A9F1 (forPlay_t7F59BE4A54B06567987F750BF6AE50CF29A1055A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC7B4D926EF9532A71B25AEC040A33D52C926425F);
		s_Il2CppMethodInitialized = true;
	}
	Keyboard_tCC48D6E5BEEA84E5C5919A4E4B8BDFBE66217D93 * V_0 = NULL;
	{
		// var current = Keyboard.current;
		Keyboard_tCC48D6E5BEEA84E5C5919A4E4B8BDFBE66217D93 * L_0;
		L_0 = Keyboard_get_current_m69915C940B4DAD0284011AF0D1F615756DED2D55_inline(/*hidden argument*/NULL);
		V_0 = L_0;
		// if (current != null)
		Keyboard_tCC48D6E5BEEA84E5C5919A4E4B8BDFBE66217D93 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		// var eKey = current.enterKey;
		Keyboard_tCC48D6E5BEEA84E5C5919A4E4B8BDFBE66217D93 * L_2 = V_0;
		KeyControl_t5784A2F7F3D468FD6D4171430A5592B671FA2635 * L_3;
		L_3 = Keyboard_get_enterKey_m8B88BCF058F864E9B8958429C2CEA7557D6A977B(L_2, /*hidden argument*/NULL);
		// if (eKey.wasPressedThisFrame)
		bool L_4;
		L_4 = ButtonControl_get_wasPressedThisFrame_m4071D0C3B7117844630EEE75BC4B0ADB48096740(L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0020;
		}
	}
	{
		// SceneManager.LoadScene("title");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m6993313A5BE51551C96597F20A81672422A051E4(_stringLiteralC7B4D926EF9532A71B25AEC040A33D52C926425F, /*hidden argument*/NULL);
	}

IL_0020:
	{
		// }
		return;
	}
}
// System.Void forPlay::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void forPlay__ctor_m4536310ECC9CA2ED0938F83DD7A0753A1B44D784 (forPlay_t7F59BE4A54B06567987F750BF6AE50CF29A1055A * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void intro::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void intro_Start_m9997788FBCC82EBBA4F3A8A65DB9F9C781EC0621 (intro_t8B741C2D68BF5F8F9A22ABFAF61DA56B4151FC1A * __this, const RuntimeMethod* method)
{
	{
		// cn = 0;
		__this->set_cn_5(0);
		// }
		return;
	}
}
// System.Void intro::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void intro_FixedUpdate_m7D5A6AF8EF6E236557D0CB018BFBEDA2D4F539E3 (intro_t8B741C2D68BF5F8F9A22ABFAF61DA56B4151FC1A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// cn++;
		int32_t L_0 = __this->get_cn_5();
		__this->set_cn_5(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)));
		// if (cn > 200)
		int32_t L_1 = __this->get_cn_5();
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)200))))
		{
			goto IL_0026;
		}
	}
	{
		// SceneManager.LoadScene(sceneName);
		String_t* L_2 = __this->get_sceneName_4();
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m6993313A5BE51551C96597F20A81672422A051E4(L_2, /*hidden argument*/NULL);
	}

IL_0026:
	{
		// }
		return;
	}
}
// System.Void intro::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void intro__ctor_m308F0E6065D220081FB6B71F2924B47868FDED3D (intro_t8B741C2D68BF5F8F9A22ABFAF61DA56B4151FC1A * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void next_block::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void next_block_Start_m4B7619A06F0EE7F00D59B945FF869DE2F440DDF1 (next_block_t85C2E295073D52AC49B2C9008901E97B4DDCF7D4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// spriteRenderer = GetComponent<SpriteRenderer>();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_0;
		L_0 = Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		__this->set_spriteRenderer_8(L_0);
		// }
		return;
	}
}
// System.Void next_block::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void next_block_Update_m7FCE5CF29B68FF9D93DB3EF3A18DDC28AD9F9B92 (next_block_t85C2E295073D52AC49B2C9008901E97B4DDCF7D4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int temp_block = GameManager.next_block;
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		int32_t L_0 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_next_block_62();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1)))
		{
			case 0:
			{
				goto IL_001f;
			}
			case 1:
			{
				goto IL_0031;
			}
			case 2:
			{
				goto IL_0043;
			}
			case 3:
			{
				goto IL_0055;
			}
		}
	}
	{
		return;
	}

IL_001f:
	{
		// spriteRenderer.sprite = newBlock1;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_2 = __this->get_spriteRenderer_8();
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_3 = __this->get_newBlock1_4();
		SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A(L_2, L_3, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0031:
	{
		// spriteRenderer.sprite = newBlock2;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_4 = __this->get_spriteRenderer_8();
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_5 = __this->get_newBlock2_5();
		SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A(L_4, L_5, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0043:
	{
		// spriteRenderer.sprite = newBlock3;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_6 = __this->get_spriteRenderer_8();
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_7 = __this->get_newBlock3_6();
		SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A(L_6, L_7, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0055:
	{
		// spriteRenderer.sprite = newBlock4;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_8 = __this->get_spriteRenderer_8();
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_9 = __this->get_newBlock4_7();
		SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A(L_8, L_9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void next_block::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void next_block__ctor_mE9D2AC369E482A1616B65E9D4A4E5B6745F2AC87 (next_block_t85C2E295073D52AC49B2C9008901E97B4DDCF7D4 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void title::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void title_Start_m3F4F0A541789E0D6A8EEB11AF4FB9D66E167BD82 (title_tC0AFE2B8DF822EA7143C02ECB6B0FD90CB8A0006 * __this, const RuntimeMethod* method)
{
	{
		// next_scene = 0;
		__this->set_next_scene_6(0);
		// }
		return;
	}
}
// System.Void title::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void title_Update_mFC469EA7EB0D64E58D5B212BFE372E990D66FD13 (title_tC0AFE2B8DF822EA7143C02ECB6B0FD90CB8A0006 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4F2993C30C434C5F8BA708B372A8D4AC4A165185);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF39E1B0AD6BA1EFA6D2AF118D5A9D7A64A06A74D);
		s_Il2CppMethodInitialized = true;
	}
	Keyboard_tCC48D6E5BEEA84E5C5919A4E4B8BDFBE66217D93 * V_0 = NULL;
	{
		// var current = Keyboard.current;
		Keyboard_tCC48D6E5BEEA84E5C5919A4E4B8BDFBE66217D93 * L_0;
		L_0 = Keyboard_get_current_m69915C940B4DAD0284011AF0D1F615756DED2D55_inline(/*hidden argument*/NULL);
		V_0 = L_0;
		// if (current != null)
		Keyboard_tCC48D6E5BEEA84E5C5919A4E4B8BDFBE66217D93 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_009f;
		}
	}
	{
		// var eKey = current.enterKey;
		Keyboard_tCC48D6E5BEEA84E5C5919A4E4B8BDFBE66217D93 * L_2 = V_0;
		KeyControl_t5784A2F7F3D468FD6D4171430A5592B671FA2635 * L_3;
		L_3 = Keyboard_get_enterKey_m8B88BCF058F864E9B8958429C2CEA7557D6A977B(L_2, /*hidden argument*/NULL);
		// if (eKey.wasPressedThisFrame)
		bool L_4;
		L_4 = ButtonControl_get_wasPressedThisFrame_m4071D0C3B7117844630EEE75BC4B0ADB48096740(L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0047;
		}
	}
	{
		// if (next_scene == 0 || next_scene == 2) {
		int32_t L_5 = __this->get_next_scene_6();
		if (!L_5)
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_6 = __this->get_next_scene_6();
		if ((!(((uint32_t)L_6) == ((uint32_t)2))))
		{
			goto IL_0034;
		}
	}

IL_002a:
	{
		// SceneManager.LoadScene("main");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m6993313A5BE51551C96597F20A81672422A051E4(_stringLiteral4F2993C30C434C5F8BA708B372A8D4AC4A165185, /*hidden argument*/NULL);
	}

IL_0034:
	{
		// if (next_scene == 1) {
		int32_t L_7 = __this->get_next_scene_6();
		if ((!(((uint32_t)L_7) == ((uint32_t)1))))
		{
			goto IL_0047;
		}
	}
	{
		// SceneManager.LoadScene("forPlay");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m6993313A5BE51551C96597F20A81672422A051E4(_stringLiteralF39E1B0AD6BA1EFA6D2AF118D5A9D7A64A06A74D, /*hidden argument*/NULL);
	}

IL_0047:
	{
		// eKey = current.upArrowKey;
		Keyboard_tCC48D6E5BEEA84E5C5919A4E4B8BDFBE66217D93 * L_8 = V_0;
		KeyControl_t5784A2F7F3D468FD6D4171430A5592B671FA2635 * L_9;
		L_9 = Keyboard_get_upArrowKey_mD9DDB310779F602E84A5CAF45ED7C4EBDB049F6C(L_8, /*hidden argument*/NULL);
		// if (eKey.wasPressedThisFrame)
		bool L_10;
		L_10 = ButtonControl_get_wasPressedThisFrame_m4071D0C3B7117844630EEE75BC4B0ADB48096740(L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0073;
		}
	}
	{
		// select_forPlay.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = __this->get_select_forPlay_4();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_11, (bool)1, /*hidden argument*/NULL);
		// select_main.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = __this->get_select_main_5();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_12, (bool)0, /*hidden argument*/NULL);
		// next_scene = 1;
		__this->set_next_scene_6(1);
	}

IL_0073:
	{
		// eKey = current.downArrowKey;
		Keyboard_tCC48D6E5BEEA84E5C5919A4E4B8BDFBE66217D93 * L_13 = V_0;
		KeyControl_t5784A2F7F3D468FD6D4171430A5592B671FA2635 * L_14;
		L_14 = Keyboard_get_downArrowKey_mCC56E5BABF57992C26881C49508CFC5712552FE4(L_13, /*hidden argument*/NULL);
		// if (eKey.wasPressedThisFrame)
		bool L_15;
		L_15 = ButtonControl_get_wasPressedThisFrame_m4071D0C3B7117844630EEE75BC4B0ADB48096740(L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_009f;
		}
	}
	{
		// select_forPlay.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16 = __this->get_select_forPlay_4();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_16, (bool)0, /*hidden argument*/NULL);
		// select_main.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17 = __this->get_select_main_5();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_17, (bool)1, /*hidden argument*/NULL);
		// next_scene = 2;
		__this->set_next_scene_6(2);
	}

IL_009f:
	{
		// }
		return;
	}
}
// System.Void title::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void title__ctor_m05CB51AC8F628E86175AA41E3F406B78DD876A4A (title_tC0AFE2B8DF822EA7143C02ECB6B0FD90CB8A0006 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void titleStar::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void titleStar_Start_m1132780EA7EAB4F4D0EC868678C748F9D2DEDB1A (titleStar_tD53883A1748E72FD1A3B9C973F074EC29907F991 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rbody = this.GetComponent<Rigidbody2D>();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_0;
		L_0 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		__this->set_rbody_4(L_0);
		// pos = this.transform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		__this->set_pos_6(L_2);
		// }
		return;
	}
}
// System.Void titleStar::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void titleStar_FixedUpdate_mDA4F6160FF75B104E8898BBC7520FB0205A81996 (titleStar_tD53883A1748E72FD1A3B9C973F074EC29907F991 * __this, const RuntimeMethod* method)
{
	{
		// pos = this.transform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		__this->set_pos_6(L_1);
		// pos.y += 0.1f;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_2 = __this->get_address_of_pos_6();
		float* L_3 = L_2->get_address_of_y_3();
		float* L_4 = L_3;
		float L_5 = *((float*)L_4);
		*((float*)L_4) = (float)((float)il2cpp_codegen_add((float)L_5, (float)(0.100000001f)));
		// if (pos.y >6.0f) {
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_6 = __this->get_address_of_pos_6();
		float L_7 = L_6->get_y_3();
		if ((!(((float)L_7) > ((float)(6.0f)))))
		{
			goto IL_0047;
		}
	}
	{
		// pos.y = -6.0f;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_8 = __this->get_address_of_pos_6();
		L_8->set_y_3((-6.0f));
	}

IL_0047:
	{
		// this.transform.position = pos;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = __this->get_pos_6();
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_9, L_10, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void titleStar::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void titleStar__ctor_m5D2CDABEDA867722DB30EDD3E7C7DCCC16045C41 (titleStar_tD53883A1748E72FD1A3B9C973F074EC29907F991 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_m101DE5340601C037D9252FB6B99AD18C793C54A1_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___v0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___v0;
		float L_3 = L_2.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Keyboard_tCC48D6E5BEEA84E5C5919A4E4B8BDFBE66217D93 * Keyboard_get_current_m69915C940B4DAD0284011AF0D1F615756DED2D55_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Keyboard_tCC48D6E5BEEA84E5C5919A4E4B8BDFBE66217D93_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Keyboard current { get; private set; }
		Keyboard_tCC48D6E5BEEA84E5C5919A4E4B8BDFBE66217D93 * L_0 = ((Keyboard_tCC48D6E5BEEA84E5C5919A4E4B8BDFBE66217D93_StaticFields*)il2cpp_codegen_static_fields_for(Keyboard_tCC48D6E5BEEA84E5C5919A4E4B8BDFBE66217D93_il2cpp_TypeInfo_var))->get_U3CcurrentU3Ek__BackingField_50();
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
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
		ThrowHelper_ThrowArgumentOutOfRangeException_mBCBF2D9FD1B5F0D8D8595B15B7460889D60C8070(/*hidden argument*/NULL);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
